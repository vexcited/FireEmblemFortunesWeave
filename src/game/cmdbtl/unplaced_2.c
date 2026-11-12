#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1085a10(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD, _QWORD);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__int64* game_Tutorial_CreateBind(__int64, __int64*);
__int64 CmdBtlSkipInput_1007060(__int64);
__int64 GameRoutine_ec1530();
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_cmdbtl_Manager_UnitRelocationImpl(_QWORD*, __int64);
__int64 game_script_cmdbtl_event_EntryBattleAfter_ed0560();
__int64 game_script_cmdbtl_event_EntryBattleAfter_ed0640();
__int64 game_script_cmdbtl_event_EntryBattleAfter_ed08a0();
__int64 game_script_cmdbtl_event_EntryBattleAfter_ed0a60();
__int64 game_script_cmdbtl_event_EntryBattleBefore_ecf7e0();
__int64 game_script_cmdbtl_event_EntryBattleBefore_ecf8c0();
__int64 game_script_cmdbtl_event_EntryBattleBefore_ecfb20();
__int64 game_script_cmdbtl_event_EntryBattleBefore_ecfce0();
__int64 game_script_cmdbtl_event_EntryBattleTalk_ecfea0();
__int64 game_script_cmdbtl_event_EntryBattleTalk_ecff80();
__int64 game_script_cmdbtl_event_EntryBattleTalk_ed01e0();
__int64 game_script_cmdbtl_event_EntryBattleTalk_ed03a0();
__int64 game_script_cmdbtl_event_EntryDieAfter_ed20c0();
__int64 game_script_cmdbtl_event_EntryDieAfter_ed21a0();
__int64 game_script_cmdbtl_event_EntryDieAfter_ed2400();
__int64 game_script_cmdbtl_event_EntryDieAfter_ed25c0();
__int64 game_script_cmdbtl_event_EntryDieBefore_ed1a00();
__int64 game_script_cmdbtl_event_EntryDieBefore_ed1ae0();
__int64 game_script_cmdbtl_event_EntryDieBefore_ed1d40();
__int64 game_script_cmdbtl_event_EntryDieBefore_ed1f00();
__int64 game_script_cmdbtl_event_EntryDieTalk_ed2780();
__int64 game_script_cmdbtl_event_EntryDieTalk_ed2860();
__int64 game_script_cmdbtl_event_EntryDieTalk_ed2ac0();
__int64 game_script_cmdbtl_event_EntryDieTalk_ed2c80();
__int64 game_script_cmdbtl_event_EntryStockAfter_ed3f00();
__int64 game_script_cmdbtl_event_EntryStockAfter_ed4000();
__int64 game_script_cmdbtl_event_EntryStockAfter_ed4260();
__int64 game_script_cmdbtl_event_EntryStockAfter_ed4420();
__int64 game_script_cmdbtl_event_EntryStockBefore_ed3830();
__int64 game_script_cmdbtl_event_EntryStockBefore_ed3920();
__int64 game_script_cmdbtl_event_EntryStockBefore_ed3b80();
__int64 game_script_cmdbtl_event_EntryStockBefore_ed3d40();
__int64 game_script_cmdbtl_event_EntryTalkCallback_ed4a80();
__int64 game_script_cmdbtl_event_EntryTalkCallback_ed4b60();
__int64 game_script_cmdbtl_event_EntryTalkCallback_ed4dc0();
__int64 game_script_cmdbtl_event_EntryTalkCallback_ed4f80();
__int64 game_script_cmdbtl_event_EntryTurnBeginAfter_ecdb70();
__int64 game_script_cmdbtl_event_EntryTurnBeginAfter_ecdc80();
__int64 game_script_cmdbtl_event_EntryTurnBeginAfter_ecdf00();
__int64 game_script_cmdbtl_event_EntryTurnBeginAfter_ece0e0();
__int64 game_script_cmdbtl_event_EntryTurnBeginBefore_ecd440();
__int64 game_script_cmdbtl_event_EntryTurnBeginBefore_ecd540();
__int64 game_script_cmdbtl_event_EntryTurnBeginBefore_ecd7c0();
__int64 game_script_cmdbtl_event_EntryTurnBeginBefore_ecd9a0();
__int64 game_script_cmdbtl_event_EntryTurnEnd_ece2b0();
__int64 game_script_cmdbtl_event_EntryTurnEnd_ece3c0();
__int64 game_script_cmdbtl_event_EntryTurnEnd_ece640();
__int64 game_script_cmdbtl_event_EntryTurnEnd_ece820();
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
bool GameRoutine_ec13d0();
extern _QWORD GameData_1b9a550[3];
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83800;
extern __int128 GameData_1a838f0;
extern __int128 GameData_21a6120;
extern __int128 GameData_2228050;
extern __int64* GameData_212bf18[9];
extern __int64* GameData_212bf48[3];
extern __int64* GameData_212dec0[4];
extern __int64* GameData_212ea58;
extern __int64* GameData_212f2e0;
extern __int64 GameData_2216820;
extern __int64 GameData_2219078;
extern __int64 GameData_22190c0;
extern __int64 GameData_221e6f8;
extern __int64 GameData_221e700;
extern __int64 GameData_221e708;
extern __int64 GameData_221e710;
extern __int64 GameData_221e718;
extern __int64 GameData_221e720;
extern __int64 GameData_221e738;
extern __int64 GameData_221e740;
extern __int64 GameData_221e748;
extern __int64 GameData_221e750;
extern __int64 GameData_221e758;
extern __int64 GameData_221e760;
extern __int64 GameData_221e778;
extern __int64 GameData_221e780;
extern __int64 GameData_221e788;
extern __int64 GameData_221e790;
extern __int64 GameData_221e798;
extern __int64 GameData_221e7a0;
extern __int64 GameData_221e7b8;
extern __int64 GameData_221e7c0;
extern __int64 GameData_221e7c8;
extern __int64 GameData_221e7d0;
extern __int64 GameData_221e7d8;
extern __int64 GameData_221e7e0;
extern __int64 GameData_221e7f8;
extern __int64 GameData_221e800;
extern __int64 GameData_221e808;
extern __int64 GameData_221e810;
extern __int64 GameData_221e818;
extern __int64 GameData_221e820;
extern __int64 GameData_221e838;
extern __int64 GameData_221e840;
extern __int64 GameData_221e848;
extern __int64 GameData_221e850;
extern __int64 GameData_221e858;
extern __int64 GameData_221e860;
extern __int64 GameData_221e878;
extern __int64 GameData_221e880;
extern __int64 GameData_221e888;
extern __int64 GameData_221e890;
extern __int64 GameData_221e898;
extern __int64 GameData_221e8a0;
extern __int64 GameData_221e8b8;
extern __int64 GameData_221e8c0;
extern __int64 GameData_221e8c8;
extern __int64 GameData_221e8d0;
extern __int64 GameData_221e8d8;
extern __int64 GameData_221e8e0;
extern __int64 GameData_221e8f8;
extern __int64 GameData_221e900;
extern __int64 GameData_221e908;
extern __int64 GameData_221e910;
extern __int64 GameData_221e918;
extern __int64 GameData_221e920;
extern __int64 GameData_221e938;
extern __int64 GameData_221e940;
extern __int64 GameData_221e948;
extern __int64 GameData_221e950;
extern __int64 GameData_221e958;
extern __int64 GameData_221e960;
extern __int64 GameData_221e978;
extern __int64 GameData_221e980;
extern __int64 GameData_221e988;
extern __int64 GameData_221e990;
extern __int64 GameData_221e998;
extern __int64 GameData_221e9a0;
extern __int64 GameData_221e9b8;
extern __int64 GameData_221e9c0;
extern __int64 GameData_221e9c8;
extern __int64 GameData_221e9d0;
extern __int64 GameData_221e9d8;
extern __int64 GameData_221e9e0;
extern __int64 GameData_221e9f8;
extern __int64 GameData_221ea00;
extern __int64 GameData_221ea08;
extern __int64 GameData_221ea10;
extern __int64 GameData_221ea18;
extern __int64 GameData_221ea20;
extern __int64 GameData_221ea38;
extern __int64 GameData_221ea40;
extern __int64 GameData_221ea48;
extern __int64 GameData_221ea50;
extern __int64 GameData_221ea58;
extern __int64 GameData_221ea60;
extern __int64 GameData_221ea78;
extern __int64 GameData_221ea80;
extern __int64 GameData_221ea88;
extern __int64 GameData_221ea90;
extern __int64 GameData_221ea98;
extern __int64 GameData_221eaa0;
extern __int64 GameData_221eab8;
extern __int64 GameData_221eac0;
extern __int64 GameData_221eac8;
extern __int64 GameData_221ead0;
extern __int64 GameData_221ead8;
extern __int64 GameData_221eae0;
extern __int64 GameData_221eaf8;
extern __int64 GameData_221eb00;
extern __int64 GameData_221eb08;
extern __int64 GameData_221eb10;
extern __int64 GameData_221eb18;
extern __int64 GameData_221eb20;
extern __int64 GameData_221eb38;
extern __int64 GameData_221eb40;
extern __int64 GameData_221eb48;
extern __int64 GameData_221eb50;
extern __int64 GameData_221eb58;
extern __int64 GameData_221eb60;
extern __int64 GameData_221eb78;
extern __int64 GameData_221eb80;
extern __int64 GameData_221eb88;
extern __int64 GameData_221eb90;
extern __int64 GameData_221eb98;
extern __int64 GameData_221eba0;
extern __int64 GameData_221ebb8;
extern __int64 GameData_221ebc0;
extern __int64 GameData_221ebc8;
extern __int64 GameData_221ebd0;
extern __int64 GameData_221ebd8;
extern __int64 GameData_221ebe0;
extern __int64 GameData_221ebf8;
extern __int64 GameData_221ec00;
extern __int64 GameData_221ec08;
extern __int64 GameData_221ec10;
extern __int64 GameData_221ec18;
extern __int64 GameData_221ec20;
extern __int64 GameData_221ec38;
extern __int64 GameData_221ec40;
extern __int64 GameData_221ec48;
extern __int64 GameData_221ec50;
extern __int64 GameData_221ec58;
extern __int64 GameData_221ec60;
extern __int64 GameData_221ec78;
extern __int64 GameData_221ec80;
extern __int64 GameData_221ec88;
extern __int64 GameData_221ec90;
extern __int64 GameData_221ec98;
extern __int64 GameData_221eca0;
extern __int64 GameData_221ecb8;
extern __int64 GameData_221ecc0;
extern __int64 GameData_221ecc8;
extern __int64 GameData_221ecd0;
extern __int64 GameData_221ecd8;
extern __int64 GameData_221ece0;
extern __int64 GameData_221ecf8;
extern __int64 GameData_221ed00;
extern __int64 GameData_221ed08;
extern __int64 GameData_221ed10;
extern __int64 GameData_221ed18;
extern __int64 GameData_221ed20;
extern __int64 GameData_221ed38;
extern __int64 GameData_221ed40;
extern __int64 GameData_221ed48;
extern __int64 GameData_221ed50;
extern __int64 GameData_221ed58;
extern __int64 GameData_221ed60;
extern __int64 GameData_221ed78;
extern __int64 GameData_221ed80;
extern __int64 GameData_221ed88;
extern __int64 GameData_221ed90;
extern __int64 GameData_221ed98;
extern __int64 GameData_221eda0;
extern __int64 GameData_221edb8;
extern __int64 GameData_221edc0;
extern __int64 GameData_221edc8;
extern __int64 GameData_221edd0;
extern __int64 GameData_221edd8;
extern __int64 GameData_221ede0;
extern __int64 GameData_221edf8;
extern __int64 GameData_221ee00;
extern __int64 GameData_221ee08;
extern __int64 GameData_221ee10;
extern __int64 GameData_221ee18;
extern __int64 GameData_221ee20;
extern __int64 GameData_221ee38;
extern __int64 GameData_221ee40;
extern __int64 GameData_221ee48;
extern __int64 GameData_221ee50;
extern __int64 GameData_221ee58;
extern __int64 GameData_221ee60;
extern __int64 GameData_221ee78;
extern __int64 GameData_221ee80;
extern __int64 GameData_221ee88;
extern __int64 GameData_221ee90;
extern __int64 GameData_221ee98;
extern __int64 GameData_221eea0;
extern __int64 GameData_221eeb8;
extern __int64 GameData_221eec0;
extern __int64 GameData_221eec8;
extern __int64 GameData_221eed0;
extern __int64 GameData_221eed8;
extern __int64 GameData_221eee0;
extern __int64 GameData_221eef8;
extern __int64 GameData_221ef00;
extern __int64 GameData_221ef08;
extern __int64 GameData_221ef10;
extern __int64 GameData_221ef18;
extern __int64 GameData_221ef20;
extern __int64 GameData_221ef38;
extern __int64 GameData_221ef40;
extern __int64 GameData_221ef48;
extern __int64 GameData_221ef50;
extern __int64 GameData_221ef58;
extern __int64 GameData_221ef60;
extern __int64 GameData_221ef78;
extern __int64 GameData_221ef80;
extern __int64 GameData_221ef88;
extern __int64 GameData_221ef90;
extern __int64 GameData_221ef98;
extern __int64 GameData_221efa0;
extern __int64 GameData_221efb8;
extern __int64 GameData_221efc0;
extern __int64 GameData_221efc8;
extern __int64 GameData_221efd0;
extern __int64 GameData_221efd8;
extern __int64 GameData_221efe0;
extern __int64 GameData_221eff8;
extern __int64 GameData_221f000;
extern __int64 GameData_221f008;
extern __int64 GameData_221f010;
extern __int64 GameData_221f018;
extern __int64 GameData_221f020;
extern __int64 GameData_221f038;
extern __int64 GameData_221f040;
extern __int64 GameData_221f048;
extern __int64 GameData_221f050;
extern __int64 GameData_221f058;
extern __int64 GameData_221f060;
extern __int64 GameData_221f078;
extern __int64 GameData_221f080;
extern __int64 GameData_221f088;
extern __int64 GameData_221f090;
extern __int64 GameData_221f098;
extern __int64 GameData_221f0a0;
extern __int64 GameData_221f0b8;
extern __int64 GameData_221f0c0;
extern __int64 GameData_221f0c8;
extern __int64 GameData_221f0d0;
extern __int64 GameData_221f0d8;
extern __int64 GameData_221f0e0;
extern __int64 GameData_221f0f8;
extern __int64 GameData_221f100;
extern __int64 GameData_221f108;
extern __int64 GameData_221f110;
extern __int64 GameData_221f118;
extern __int64 GameData_221f120;
extern __int64 GameData_221f138;
extern __int64 GameData_221f140;
extern __int64 GameData_221f148;
extern __int64 GameData_221f150;
extern __int64 GameData_221f158;
extern __int64 GameData_221f160;
extern __int64 GameData_221f178;
extern __int64 GameData_221f180;
extern __int64 GameData_221f188;
extern __int64 GameData_221f190;
extern __int64 GameData_221f198;
extern __int64 GameData_221f1a0;
extern __int64 GameData_221f1b8;
extern __int64 GameData_221f1c0;
extern __int64 GameData_221f1c8;
extern __int64 GameData_221f1d0;
extern __int64 GameData_221f1d8;
extern __int64 GameData_221f1e0;
extern __int64 GameData_221f1f8;
extern __int64 GameData_221f200;
extern __int64 GameData_221f208;
extern __int64 GameData_221f210;
extern __int64 GameData_221f218;
extern __int64 GameData_221f220;
extern __int64 GameData_221f238;
extern __int64 GameData_221f240;
extern __int64 GameData_221f248;
extern __int64 GameData_221f250;
extern __int64 GameData_221f258;
extern __int64 GameData_221f260;
extern __int64 GameData_221f278;
extern __int64 GameData_221f280;
extern __int64 GameData_221f288;
extern __int64 GameData_221f290;
extern __int64 GameData_221f298;
extern __int64 GameData_221f2a0;
extern __int64 GameData_221f2b8;
extern __int64 GameData_221f2c0;
extern __int64 GameData_221f2c8;
extern __int64 GameData_221f2d0;
extern __int64 GameData_221f2d8;
extern __int64 GameData_221f2e0;
extern __int64 GameData_221f2f8;
extern __int64 GameData_221f300;
extern __int64 GameData_2228060;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_2216858;
extern char GameData_221e728;
extern char GameData_221e730;
extern char GameData_221e768;
extern char GameData_221e770;
extern char GameData_221e7a8;
extern char GameData_221e7b0;
extern char GameData_221e7e8;
extern char GameData_221e7f0;
extern char GameData_221e828;
extern char GameData_221e830;
extern char GameData_221e868;
extern char GameData_221e870;
extern char GameData_221e8a8;
extern char GameData_221e8b0;
extern char GameData_221e8e8;
extern char GameData_221e8f0;
extern char GameData_221e928;
extern char GameData_221e930;
extern char GameData_221e968;
extern char GameData_221e970;
extern char GameData_221e9a8;
extern char GameData_221e9b0;
extern char GameData_221e9e8;
extern char GameData_221e9f0;
extern char GameData_221ea28;
extern char GameData_221ea30;
extern char GameData_221ea68;
extern char GameData_221ea70;
extern char GameData_221eaa8;
extern char GameData_221eab0;
extern char GameData_221eae8;
extern char GameData_221eaf0;
extern char GameData_221eb28;
extern char GameData_221eb30;
extern char GameData_221eb68;
extern char GameData_221eb70;
extern char GameData_221eba8;
extern char GameData_221ebb0;
extern char GameData_221ebe8;
extern char GameData_221ebf0;
extern char GameData_221ec28;
extern char GameData_221ec30;
extern char GameData_221ec68;
extern char GameData_221ec70;
extern char GameData_221eca8;
extern char GameData_221ecb0;
extern char GameData_221ece8;
extern char GameData_221ecf0;
extern char GameData_221ed28;
extern char GameData_221ed30;
extern char GameData_221ed68;
extern char GameData_221ed70;
extern char GameData_221eda8;
extern char GameData_221edb0;
extern char GameData_221ede8;
extern char GameData_221edf0;
extern char GameData_221ee28;
extern char GameData_221ee30;
extern char GameData_221ee68;
extern char GameData_221ee70;
extern char GameData_221eea8;
extern char GameData_221eeb0;
extern char GameData_221eee8;
extern char GameData_221eef0;
extern char GameData_221ef28;
extern char GameData_221ef30;
extern char GameData_221ef68;
extern char GameData_221ef70;
extern char GameData_221efa8;
extern char GameData_221efb0;
extern char GameData_221efe8;
extern char GameData_221eff0;
extern char GameData_221f028;
extern char GameData_221f030;
extern char GameData_221f068;
extern char GameData_221f070;
extern char GameData_221f0a8;
extern char GameData_221f0b0;
extern char GameData_221f0e8;
extern char GameData_221f0f0;
extern char GameData_221f128;
extern char GameData_221f130;
extern char GameData_221f168;
extern char GameData_221f170;
extern char GameData_221f1a8;
extern char GameData_221f1b0;
extern char GameData_221f1e8;
extern char GameData_221f1f0;
extern char GameData_221f228;
extern char GameData_221f230;
extern char GameData_221f268;
extern char GameData_221f270;
extern char GameData_221f2a8;
extern char GameData_221f2b0;
extern char GameData_221f2e8;
extern char GameData_221f2f0;
extern char GameData_2228068;
float GameRoutine_a5e890(float, float);
void GameRoutine_e7bed0(__int64, char);
void GameRoutine_e7fde0(__int64, __int64*, _QWORD*, int, float, float);
void __attribute__((noreturn)) GameRoutine_8123d0();
__int64 game_cmdbtl_e63c00_alt1(__int64 a1) __asm__("game_cmdbtl_e63c00");
void game_cmdbtl_ed5720();
void game_cmdbtl_f37d60();
__attribute__((swiftcall)) void game_cmdbtl_f901d0(PSEUDO_X8 x8_, float a2,
                                                   float a3);
__int64 game_1007060(__int64);
bool GameHr_ec13d0();
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_cmdbtl_e63c00(__int64 a1);

void game_cmdbtl_e63c00(__int64 a1)
{
  bool v2;
  __int64* v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    _QWORD* v18;
    __int64 v19;
    _QWORD* v20;
  } v18_;

  v18_.v19 = 0;
  v18_.v20 = nullptr;
  v18_.v18 = nullptr;
  if ((*(_BYTE*)(*GameData_212dec0[0] + 12) & 1) == 0) {
    if ((*(_BYTE*)(*GameData_212dec0[0] + 13) & 1) != 0) {
      goto LABEL_5;
    }
    if ((GameData_2216858 & 1) == 0) {
      GameRoutine_8123d0();
    }
    if ((GameData_2216820 & 8) == 0) {
    LABEL_5:
      if ((GameRoutine_ec1530() & 1) == 0) {
        v2 = GameHr_ec13d0();
        v3 = (__int64*)fw_memory_g_heap_manager_ptr;
        v4 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
        v5 = (_QWORD*)v4;
        if (v2) {
          *(_QWORD*)v4 = 0xE39983E3A482E32ALL;
          *(_QWORD*)(v4 + 8) = 0x9083E38883E3B383LL;
          *(_QWORD*)(v4 + 16) = 0xAB83E38883E3LL;
        }
        else {
          *(_BYTE*)(v4 + 13) = 0;
          *(_QWORD*)v4 = 0xE3BE81E38A81E318LL;
          *(_DWORD*)(v4 + 8) = -2115794047;
          *(_BYTE*)(v4 + 12) = -101;
        }
        v18_.v18 = (_QWORD*)v4;
        v18_.v19 = v4 + 24;
        v18_.v20 = (_QWORD*)(v4 + 24);
        if ((*(_BYTE*)(*(_QWORD*)(GameData_2219078 + 56) + 8LL) & 4) != 0) {
          v6 = (_QWORD*)fw_memory_HeapManager_Allocate(*v3, 48, 16, 0);
          v7 = v6 + 6;
          v18_.v18 = v6;
          v18_.v20 = v6 + 6;
          v6[4] = 0x9783E38383E39E83LL;
          v6[5] = 0;
          v8 = v5[1];
          *v6 = *v5;
          v6[1] = v8;
          v6[2] = v5[2];
          v6[3] = 0xE3A9A4E5A89BE91ELL;
          v9 = 128;
          if (*(_QWORD*)(*v3 + 200) == 0) {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v3 + v9, (__int64)v5);
          v18_.v19 = (__int64)v7;
        }
        if (game_Tutorial_CreateBind(a1, (__int64*)&v18_.v18) != nullptr) {
          game_1007060(GameData_22190c0);
        }
      }
    }
  }
  v10 = (__int64)v18_.v18;
  if (v18_.v18 != nullptr) {
    v11 = v18_.v19;
    if (v18_.v18 == (_QWORD*)v18_.v19) {
      goto LABEL_26;
    }
    v12 = v18_.v19;
    v13 = fw_memory_g_heap_manager_ptr;
    do {
      v14 = *(_BYTE*)(v12 - 24);
      v12 -= 24;
      if ((v14 & 1) != 0) {
        v15 = *(_QWORD*)(v11 - 8);
        if (v15 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
            v16 = 128;
          }
          else {
            v16 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v13 + v16, v15);
        }
      }
      v11 = v12;
    } while (v12 != v10);
    v18_.v19 = v10;
    v10 = (__int64)v18_.v18;
    if (v18_.v18 != nullptr) {
    LABEL_26:
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v10);
    }
  }
}

void game_cmdbtl_ed5720()
{

#pragma clang fp contract(off)
  __int64* v0;
  __int64 v1;
  __int64 v2;

  GameData_221e708 = (__int64)"cmdbtl::event";
  GameData_221e710 =
      (__int64)game_script_cmdbtl_event_EntryTurnBeginBefore_ecd440;
  v0 = GameData_212bf18[0];
  GameData_221e718 = 0;
  GameData_221e720 = 0;
  GameData_221e728 = 0;
  GameData_221e758 = 0;
  GameData_221e760 = 0;
  GameData_221e768 = 0;
  v1 = *GameData_212bf48[0];
  *GameData_212bf48[0] = (__int64)&GameData_221e6f8;
  GameData_221e748 = (__int64)"cmdbtl::event";
  GameData_221e750 =
      (__int64)game_script_cmdbtl_event_EntryTurnBeginBefore_ecd540;
  GameData_221e730 = 2;
  GameData_221e778 =
      (__int64)"void EntryTurnBeginBefore(const string& funcName, int turnMin, "
               "int turnMax, int playCountMax,"
               " const string& conditionFunc, const string& funcArg)";
  GameData_221e780 = (__int64)&GameData_221e708;
  GameData_221e770 = 2;
  GameData_221e798 = 0;
  GameData_221e7a0 = 0;
  GameData_221e7a8 = 0;
  GameData_221e7b0 = 2;
  GameData_221e788 = (__int64)"cmdbtl::event";
  GameData_221e790 =
      (__int64)game_script_cmdbtl_event_EntryTurnBeginBefore_ecd7c0;
  GameData_221e6f8 = (__int64)"cmdbtl::event";
  GameData_221e700 = v1;
  v2 = *v0;
  GameData_221e738 =
      (__int64)"void EntryTurnBeginBefore(const string& funcName, int turnMin, "
               "int turnMax, int playCountMax,"
               " const string& conditionFunc)";
  GameData_221e740 = v2;
  GameData_221e7b8 =
      (__int64)"void EntryTurnBeginBefore(const string& funcName, int turnMin, "
               "int turnMax, int playCountMax,"
               " const string& conditionFunc, const int& funcArg)";
  GameData_221e7c0 = (__int64)&GameData_221e748;
  GameData_221e7c8 = (__int64)"cmdbtl::event";
  GameData_221e7d0 =
      (__int64)game_script_cmdbtl_event_EntryTurnBeginBefore_ecd9a0;
  GameData_221e7d8 = 0;
  GameData_221e7e0 = 0;
  GameData_221e7e8 = 0;
  GameData_221e7f0 = 2;
  GameData_221e848 = (__int64)"cmdbtl::event";
  GameData_221e850 =
      (__int64)game_script_cmdbtl_event_EntryTurnBeginAfter_ecdc80;
  GameData_221e868 = 0;
  GameData_221e858 = 0;
  GameData_221e860 = 0;
  GameData_221e870 = 2;
  GameData_221e7f8 =
      (__int64)"void EntryTurnBeginBefore(const string& funcName, int turnMin, "
               "int turnMax, int playCountMax,"
               " const string& conditionFunc, const float& funcArg)";
  GameData_221e800 = (__int64)&GameData_221e788;
  GameData_221e808 = (__int64)"cmdbtl::event";
  GameData_221e810 =
      (__int64)game_script_cmdbtl_event_EntryTurnBeginAfter_ecdb70;
  GameData_221e828 = 0;
  GameData_221e818 = 0;
  GameData_221e820 = 0;
  GameData_221e830 = 2;
  GameData_221e838 =
      (__int64)"void EntryTurnBeginAfter(const string& funcName, int turnMin, "
               "int turnMax, int playCountMax, "
               "const string& conditionFunc)";
  GameData_221e840 = (__int64)&GameData_221e7c8;
  GameData_221e878 =
      (__int64)"void EntryTurnBeginAfter(const string& funcName, int turnMin, "
               "int turnMax, int playCountMax, "
               "const string& conditionFunc, const string& funcArg)";
  GameData_221e880 = (__int64)&GameData_221e808;
  GameData_221e8a8 = 0;
  GameData_221e898 = 0;
  GameData_221e8a0 = 0;
  GameData_221e8b0 = 2;
  GameData_221e888 = (__int64)"cmdbtl::event";
  GameData_221e890 =
      (__int64)game_script_cmdbtl_event_EntryTurnBeginAfter_ecdf00;
  GameData_221e8b8 =
      (__int64)"void EntryTurnBeginAfter(const string& funcName, int turnMin, "
               "int turnMax, int playCountMax, "
               "const string& conditionFunc, const int& funcArg)";
  GameData_221e8c0 = (__int64)&GameData_221e848;
  GameData_221e8c8 = (__int64)"cmdbtl::event";
  GameData_221e8d0 =
      (__int64)game_script_cmdbtl_event_EntryTurnBeginAfter_ece0e0;
  GameData_221e8e8 = 0;
  GameData_221e8d8 = 0;
  GameData_221e8e0 = 0;
  GameData_221e8f0 = 2;
  GameData_221e9c8 = (__int64)"cmdbtl::event";
  GameData_221e9d0 = (__int64)game_script_cmdbtl_event_EntryTurnEnd_ece820;
  GameData_221e9e8 = 0;
  GameData_221e9d8 = 0;
  GameData_221e9e0 = 0;
  GameData_221e9f0 = 2;
  GameData_221e8f8 =
      (__int64)"void EntryTurnBeginAfter(const string& funcName, int turnMin, "
               "int turnMax, int playCountMax, "
               "const string& conditionFunc, const float& funcArg)";
  GameData_221e900 = (__int64)&GameData_221e888;
  GameData_221e908 = (__int64)"cmdbtl::event";
  GameData_221e910 = (__int64)game_script_cmdbtl_event_EntryTurnEnd_ece2b0;
  GameData_221e928 = 0;
  GameData_221e918 = 0;
  GameData_221e920 = 0;
  GameData_221e930 = 2;
  GameData_221e938 = (__int64)"void EntryTurnEnd(const string& funcName, int "
                              "turnMin, int turnMax, int playCountMax, const s"
                              "tring& conditionFunc)";
  GameData_221e940 = (__int64)&GameData_221e8c8;
  GameData_221e948 = (__int64)"cmdbtl::event";
  GameData_221e950 = (__int64)game_script_cmdbtl_event_EntryTurnEnd_ece3c0;
  GameData_221e968 = 0;
  GameData_221e958 = 0;
  GameData_221e960 = 0;
  GameData_221e970 = 2;
  GameData_221e978 = (__int64)"void EntryTurnEnd(const string& funcName, int "
                              "turnMin, int turnMax, int playCountMax, const s"
                              "tring& conditionFunc, const string& funcArg)";
  GameData_221e980 = (__int64)&GameData_221e908;
  GameData_221e988 = (__int64)"cmdbtl::event";
  GameData_221e990 = (__int64)game_script_cmdbtl_event_EntryTurnEnd_ece640;
  GameData_221e9a8 = 0;
  GameData_221e998 = 0;
  GameData_221e9a0 = 0;
  GameData_221e9b0 = 2;
  GameData_221e9b8 = (__int64)"void EntryTurnEnd(const string& funcName, int "
                              "turnMin, int turnMax, int playCountMax, const s"
                              "tring& conditionFunc, const int& funcArg)";
  GameData_221e9c0 = (__int64)&GameData_221e948;
  GameData_221e9f8 = (__int64)"void EntryTurnEnd(const string& funcName, int "
                              "turnMin, int turnMax, int playCountMax, const s"
                              "tring& conditionFunc, const float& funcArg)";
  GameData_221ea00 = (__int64)&GameData_221e988;
  GameData_221ea28 = 0;
  GameData_221ea18 = 0;
  GameData_221ea20 = 0;
  GameData_221ea30 = 2;
  GameData_221ea08 = (__int64)"cmdbtl::event";
  GameData_221ea10 = (__int64)game_script_cmdbtl_event_EntryBattleBefore_ecf7e0;
  GameData_221ea38 = (__int64)"void EntryBattleBefore(const string& funcName, "
                              "int playCountMax, const string& conditionFunc)";
  GameData_221ea40 = (__int64)&GameData_221e9c8;
  GameData_221ea48 = (__int64)"cmdbtl::event";
  GameData_221ea50 = (__int64)game_script_cmdbtl_event_EntryBattleBefore_ecf8c0;
  GameData_221ea68 = 0;
  GameData_221ea58 = 0;
  GameData_221ea60 = 0;
  GameData_221ea70 = 2;
  GameData_221eb48 = (__int64)"cmdbtl::event";
  GameData_221eb50 = (__int64)game_script_cmdbtl_event_EntryBattleTalk_ecff80;
  GameData_221eb68 = 0;
  GameData_221eb58 = 0;
  GameData_221eb60 = 0;
  GameData_221eb70 = 2;
  GameData_221ea78 = (__int64)"void EntryBattleBefore(const string& funcName, "
                              "int playCountMax, const string& conditionFunc,"
                              " const string& funcArg)";
  GameData_221ea80 = (__int64)&GameData_221ea08;
  GameData_221ea88 = (__int64)"cmdbtl::event";
  GameData_221ea90 = (__int64)game_script_cmdbtl_event_EntryBattleBefore_ecfb20;
  GameData_221eaa8 = 0;
  GameData_221ea98 = 0;
  GameData_221eaa0 = 0;
  GameData_221eab0 = 2;
  GameData_221eab8 = (__int64)"void EntryBattleBefore(const string& funcName, "
                              "int playCountMax, const string& conditionFunc,"
                              " const int& funcArg)";
  GameData_221eac0 = (__int64)&GameData_221ea48;
  GameData_221eac8 = (__int64)"cmdbtl::event";
  GameData_221ead0 = (__int64)game_script_cmdbtl_event_EntryBattleBefore_ecfce0;
  GameData_221eae8 = 0;
  GameData_221ead8 = 0;
  GameData_221eae0 = 0;
  GameData_221eaf0 = 2;
  GameData_221eaf8 = (__int64)"void EntryBattleBefore(const string& funcName, "
                              "int playCountMax, const string& conditionFunc,"
                              " const float& funcArg)";
  GameData_221eb00 = (__int64)&GameData_221ea88;
  GameData_221eb08 = (__int64)"cmdbtl::event";
  GameData_221eb10 = (__int64)game_script_cmdbtl_event_EntryBattleTalk_ecfea0;
  GameData_221eb28 = 0;
  GameData_221eb18 = 0;
  GameData_221eb20 = 0;
  GameData_221eb30 = 2;
  GameData_221eb38 = (__int64)"void EntryBattleTalk(const string& funcName, "
                              "int playCountMax, const string& conditionFunc)";
  GameData_221eb40 = (__int64)&GameData_221eac8;
  GameData_221eb78 = (__int64)"void EntryBattleTalk(const string& funcName, "
                              "int playCountMax, const string& conditionFunc, c"
                              "onst string& funcArg)";
  GameData_221eb80 = (__int64)&GameData_221eb08;
  GameData_221eba8 = 0;
  GameData_221eb98 = 0;
  GameData_221eba0 = 0;
  GameData_221ebb0 = 2;
  GameData_221eb88 = (__int64)"cmdbtl::event";
  GameData_221eb90 = (__int64)game_script_cmdbtl_event_EntryBattleTalk_ed01e0;
  GameData_221ebb8 = (__int64)"void EntryBattleTalk(const string& funcName, "
                              "int playCountMax, const string& conditionFunc, c"
                              "onst int& funcArg)";
  GameData_221ebc0 = (__int64)&GameData_221eb48;
  GameData_221ebc8 = (__int64)"cmdbtl::event";
  GameData_221ebd0 = (__int64)game_script_cmdbtl_event_EntryBattleTalk_ed03a0;
  GameData_221ebe8 = 0;
  GameData_221ebd8 = 0;
  GameData_221ebe0 = 0;
  GameData_221ebf0 = 2;
  GameData_221ecc8 = (__int64)"cmdbtl::event";
  GameData_221ecd0 = (__int64)game_script_cmdbtl_event_EntryBattleAfter_ed0a60;
  GameData_221ece8 = 0;
  GameData_221ecd8 = 0;
  GameData_221ece0 = 0;
  GameData_221ecf0 = 2;
  GameData_221ebf8 = (__int64)"void EntryBattleTalk(const string& funcName, "
                              "int playCountMax, const string& conditionFunc, c"
                              "onst float& funcArg)";
  GameData_221ec00 = (__int64)&GameData_221eb88;
  GameData_221ec08 = (__int64)"cmdbtl::event";
  GameData_221ec10 = (__int64)game_script_cmdbtl_event_EntryBattleAfter_ed0560;
  GameData_221ec28 = 0;
  GameData_221ec18 = 0;
  GameData_221ec20 = 0;
  GameData_221ec30 = 2;
  GameData_221ec38 = (__int64)"void EntryBattleAfter(const string& funcName, "
                              "int playCountMax, const string& conditionFunc)";
  GameData_221ec40 = (__int64)&GameData_221ebc8;
  GameData_221ec48 = (__int64)"cmdbtl::event";
  GameData_221ec50 = (__int64)game_script_cmdbtl_event_EntryBattleAfter_ed0640;
  GameData_221ec68 = 0;
  GameData_221ec58 = 0;
  GameData_221ec60 = 0;
  GameData_221ec70 = 2;
  GameData_221ec78 = (__int64)"void EntryBattleAfter(const string& funcName, "
                              "int playCountMax, const string& conditionFunc, "
                              "const string& funcArg)";
  GameData_221ec80 = (__int64)&GameData_221ec08;
  GameData_221ec88 = (__int64)"cmdbtl::event";
  GameData_221ec90 = (__int64)game_script_cmdbtl_event_EntryBattleAfter_ed08a0;
  GameData_221eca8 = 0;
  GameData_221ec98 = 0;
  GameData_221eca0 = 0;
  GameData_221ecb0 = 2;
  GameData_221ecb8 = (__int64)"void EntryBattleAfter(const string& funcName, "
                              "int playCountMax, const string& conditionFunc, "
                              "const int& funcArg)";
  GameData_221ecc0 = (__int64)&GameData_221ec48;
  GameData_221ecf8 = (__int64)"void EntryBattleAfter(const string& funcName, "
                              "int playCountMax, const string& conditionFunc, "
                              "const float& funcArg)";
  GameData_221ed00 = (__int64)&GameData_221ec88;
  GameData_221ed28 = 0;
  GameData_221ed18 = 0;
  GameData_221ed20 = 0;
  GameData_221ed30 = 2;
  GameData_221ed08 = (__int64)"cmdbtl::event";
  GameData_221ed10 = (__int64)game_script_cmdbtl_event_EntryDieBefore_ed1a00;
  GameData_221ed38 = (__int64)"void EntryDieBefore(const string& funcName, int "
                              "partyType, const string& conditionFunc)";
  GameData_221ed40 = (__int64)&GameData_221ecc8;
  GameData_221ed48 = (__int64)"cmdbtl::event";
  GameData_221ed50 = (__int64)game_script_cmdbtl_event_EntryDieBefore_ed1ae0;
  GameData_221ed68 = 0;
  GameData_221ed58 = 0;
  GameData_221ed60 = 0;
  GameData_221ed70 = 2;
  GameData_221ee48 = (__int64)"cmdbtl::event";
  GameData_221ee50 = (__int64)game_script_cmdbtl_event_EntryDieAfter_ed21a0;
  GameData_221ee68 = 0;
  GameData_221ee58 = 0;
  GameData_221ee60 = 0;
  GameData_221ee70 = 2;
  GameData_221ed78 = (__int64)"void EntryDieBefore(const string& funcName, int "
                              "partyType, const string& conditionFunc, const"
                              " string& funcArg)";
  GameData_221ed80 = (__int64)&GameData_221ed08;
  GameData_221ed88 = (__int64)"cmdbtl::event";
  GameData_221ed90 = (__int64)game_script_cmdbtl_event_EntryDieBefore_ed1d40;
  GameData_221eda8 = 0;
  GameData_221ed98 = 0;
  GameData_221eda0 = 0;
  GameData_221edb0 = 2;
  GameData_221edb8 =
      (__int64)"void EntryDieBefore(const string& funcName, int partyType, "
               "const string& conditionFunc, const int& funcArg)";
  GameData_221edc0 = (__int64)&GameData_221ed48;
  GameData_221edc8 = (__int64)"cmdbtl::event";
  GameData_221edd0 = (__int64)game_script_cmdbtl_event_EntryDieBefore_ed1f00;
  GameData_221ede8 = 0;
  GameData_221edd8 = 0;
  GameData_221ede0 = 0;
  GameData_221edf0 = 2;
  GameData_221edf8 = (__int64)"void EntryDieBefore(const string& funcName, int "
                              "partyType, const string& conditionFunc, const"
                              " float& funcArg)";
  GameData_221ee00 = (__int64)&GameData_221ed88;
  GameData_221ee08 = (__int64)"cmdbtl::event";
  GameData_221ee10 = (__int64)game_script_cmdbtl_event_EntryDieAfter_ed20c0;
  GameData_221ee28 = 0;
  GameData_221ee18 = 0;
  GameData_221ee20 = 0;
  GameData_221ee30 = 2;
  GameData_221ee38 = (__int64)"void EntryDieAfter(const string& funcName, int "
                              "partyType, const string& conditionFunc)";
  GameData_221ee40 = (__int64)&GameData_221edc8;
  GameData_221ee78 = (__int64)"void EntryDieAfter(const string& funcName, int "
                              "partyType, const string& conditionFunc, const "
                              "string& funcArg)";
  GameData_221ee80 = (__int64)&GameData_221ee08;
  GameData_221eea8 = 0;
  GameData_221ee98 = 0;
  GameData_221eea0 = 0;
  GameData_221eeb0 = 2;
  GameData_221ee88 = (__int64)"cmdbtl::event";
  GameData_221ee90 = (__int64)game_script_cmdbtl_event_EntryDieAfter_ed2400;
  GameData_221eeb8 =
      (__int64)"void EntryDieAfter(const string& funcName, int partyType, "
               "const string& conditionFunc, const int& funcArg)";
  GameData_221eec0 = (__int64)&GameData_221ee48;
  GameData_221eec8 = (__int64)"cmdbtl::event";
  GameData_221eed0 = (__int64)game_script_cmdbtl_event_EntryDieAfter_ed25c0;
  GameData_221eee8 = 0;
  GameData_221eed8 = 0;
  GameData_221eee0 = 0;
  GameData_221eef0 = 2;
  GameData_221eef8 =
      (__int64)"void EntryDieAfter(const string& funcName, int partyType, "
               "const string& conditionFunc, const float& funcArg)";
  GameData_221ef00 = (__int64)&GameData_221ee88;
  GameData_221ef08 = (__int64)"cmdbtl::event";
  GameData_221ef10 = (__int64)game_script_cmdbtl_event_EntryDieTalk_ed2780;
  GameData_221ef38 = (__int64)"void EntryDieTalk(const string& funcName, int "
                              "partyType, const string& conditionFunc)";
  GameData_221ef40 = (__int64)&GameData_221eec8;
  GameData_221ef28 = 0;
  GameData_221ef18 = 0;
  GameData_221ef20 = 0;
  GameData_221ef30 = 2;
  GameData_221ef48 = (__int64)"cmdbtl::event";
  GameData_221ef50 = (__int64)game_script_cmdbtl_event_EntryDieTalk_ed2860;
  GameData_221ef68 = 0;
  GameData_221ef58 = 0;
  GameData_221ef60 = 0;
  GameData_221ef70 = 2;
  GameData_221ef78 =
      (__int64)"void EntryDieTalk(const string& funcName, int partyType, const "
               "string& conditionFunc, const string& funcArg)";
  GameData_221ef80 = (__int64)&GameData_221ef08;
  GameData_221ef88 = (__int64)"cmdbtl::event";
  GameData_221ef90 = (__int64)game_script_cmdbtl_event_EntryDieTalk_ed2ac0;
  GameData_221efb8 =
      (__int64)"void EntryDieTalk(const string& funcName, int partyType, const "
               "string& conditionFunc, const int& funcArg)";
  GameData_221efc0 = (__int64)&GameData_221ef48;
  GameData_221efa8 = 0;
  GameData_221ef98 = 0;
  GameData_221efa0 = 0;
  GameData_221efb0 = 2;
  GameData_221eff8 =
      (__int64)"void EntryDieTalk(const string& funcName, int partyType, const "
               "string& conditionFunc, const float& funcArg)";
  GameData_221f000 = (__int64)&GameData_221ef88;
  GameData_221efc8 = (__int64)"cmdbtl::event";
  GameData_221efd0 = (__int64)game_script_cmdbtl_event_EntryDieTalk_ed2c80;
  GameData_221efe8 = 0;
  GameData_221efd8 = 0;
  GameData_221efe0 = 0;
  GameData_221eff0 = 2;
  GameData_221f028 = 0;
  GameData_221f018 = 0;
  GameData_221f020 = 0;
  GameData_221f030 = 2;
  GameData_221f008 = (__int64)"cmdbtl::event";
  GameData_221f010 = (__int64)game_script_cmdbtl_event_EntryStockBefore_ed3830;
  GameData_221f038 =
      (__int64)"void EntryStockBefore(const string& funcName, int partyType, "
               "int stock, const string& conditionFunc)";
  GameData_221f040 = (__int64)&GameData_221efc8;
  GameData_221f048 = (__int64)"cmdbtl::event";
  GameData_221f050 = (__int64)game_script_cmdbtl_event_EntryStockBefore_ed3920;
  GameData_221f068 = 0;
  GameData_221f058 = 0;
  GameData_221f060 = 0;
  GameData_221f070 = 2;
  GameData_221f078 = (__int64)"void EntryStockBefore(const string& funcName, "
                              "int partyType, int stock, const string& conditi"
                              "onFunc, const string& funcArg)";
  GameData_221f080 = (__int64)&GameData_221f008;
  GameData_221f088 = (__int64)"cmdbtl::event";
  GameData_221f090 = (__int64)game_script_cmdbtl_event_EntryStockBefore_ed3b80;
  GameData_221f0b8 = (__int64)"void EntryStockBefore(const string& funcName, "
                              "int partyType, int stock, const string& conditi"
                              "onFunc, const int& funcArg)";
  GameData_221f0c0 = (__int64)&GameData_221f048;
  GameData_221f0a8 = 0;
  GameData_221f098 = 0;
  GameData_221f0a0 = 0;
  GameData_221f0b0 = 2;
  GameData_221f0c8 = (__int64)"cmdbtl::event";
  GameData_221f0d0 = (__int64)game_script_cmdbtl_event_EntryStockBefore_ed3d40;
  GameData_221f0e8 = 0;
  GameData_221f0d8 = 0;
  GameData_221f0e0 = 0;
  GameData_221f0f0 = 2;
  GameData_221f0f8 = (__int64)"void EntryStockBefore(const string& funcName, "
                              "int partyType, int stock, const string& conditi"
                              "onFunc, const float& funcArg)";
  GameData_221f100 = (__int64)&GameData_221f088;
  GameData_221f108 = (__int64)"cmdbtl::event";
  GameData_221f110 = (__int64)game_script_cmdbtl_event_EntryStockAfter_ed3f00;
  GameData_221f138 =
      (__int64)"void EntryStockAfter(const string& funcName, int partyType, "
               "int stock, const string& conditionFunc)";
  GameData_221f140 = (__int64)&GameData_221f0c8;
  GameData_221f128 = 0;
  GameData_221f118 = 0;
  GameData_221f120 = 0;
  GameData_221f130 = 2;
  GameData_221f178 = (__int64)"void EntryStockAfter(const string& funcName, "
                              "int partyType, int stock, const string& conditio"
                              "nFunc, const string& funcArg)";
  GameData_221f180 = (__int64)&GameData_221f108;
  GameData_221f148 = (__int64)"cmdbtl::event";
  GameData_221f150 = (__int64)game_script_cmdbtl_event_EntryStockAfter_ed4000;
  GameData_221f168 = 0;
  GameData_221f158 = 0;
  GameData_221f160 = 0;
  GameData_221f170 = 2;
  GameData_221f1a8 = 0;
  GameData_221f198 = 0;
  GameData_221f1a0 = 0;
  GameData_221f1b0 = 2;
  GameData_221f188 = (__int64)"cmdbtl::event";
  GameData_221f190 = (__int64)game_script_cmdbtl_event_EntryStockAfter_ed4260;
  GameData_221f1b8 = (__int64)"void EntryStockAfter(const string& funcName, "
                              "int partyType, int stock, const string& conditio"
                              "nFunc, const int& funcArg)";
  GameData_221f1c0 = (__int64)&GameData_221f148;
  GameData_221f1c8 = (__int64)"cmdbtl::event";
  GameData_221f1d0 = (__int64)game_script_cmdbtl_event_EntryStockAfter_ed4420;
  GameData_221f1e8 = 0;
  GameData_221f1d8 = 0;
  GameData_221f1e0 = 0;
  GameData_221f1f0 = 2;
  GameData_221f1f8 = (__int64)"void EntryStockAfter(const string& funcName, "
                              "int partyType, int stock, const string& conditio"
                              "nFunc, const float& funcArg)";
  GameData_221f200 = (__int64)&GameData_221f188;
  GameData_221f208 = (__int64)"cmdbtl::event";
  GameData_221f210 = (__int64)game_script_cmdbtl_event_EntryTalkCallback_ed4a80;
  GameData_221f238 =
      (__int64)"void EntryTalkCallback(const string& funcName, const string& "
               "label, const string& conditionFunc)";
  GameData_221f240 = (__int64)&GameData_221f1c8;
  GameData_221f228 = 0;
  GameData_221f218 = 0;
  GameData_221f220 = 0;
  GameData_221f230 = 2;
  GameData_221f248 = (__int64)"cmdbtl::event";
  GameData_221f250 = (__int64)game_script_cmdbtl_event_EntryTalkCallback_ed4b60;
  GameData_221f268 = 0;
  GameData_221f258 = 0;
  GameData_221f260 = 0;
  GameData_221f270 = 2;
  GameData_221f278 = (__int64)"void EntryTalkCallback(const string& funcName, "
                              "const string& label, const string& conditionFu"
                              "nc, const string& funcArg)";
  GameData_221f280 = (__int64)&GameData_221f208;
  GameData_221f2b8 = (__int64)"void EntryTalkCallback(const string& funcName, "
                              "const string& label, const string& conditionFu"
                              "nc, const int& funcArg)";
  GameData_221f2c0 = (__int64)&GameData_221f248;
  GameData_221f288 = (__int64)"cmdbtl::event";
  GameData_221f290 = (__int64)game_script_cmdbtl_event_EntryTalkCallback_ed4dc0;
  GameData_221f2a8 = 0;
  GameData_221f298 = 0;
  GameData_221f2a0 = 0;
  GameData_221f2b0 = 2;
  *v0 = (__int64)&GameData_221f2c8;
  GameData_221f2e8 = 0;
  GameData_221f2d8 = 0;
  GameData_221f2e0 = 0;
  GameData_221f2f0 = 2;
  GameData_221f2c8 = (__int64)"cmdbtl::event";
  GameData_221f2d0 = (__int64)game_script_cmdbtl_event_EntryTalkCallback_ed4f80;
  GameData_221f2f8 = (__int64)"void EntryTalkCallback(const string& funcName, "
                              "const string& label, const string& conditionFu"
                              "nc, const float& funcArg)";
  GameData_221f300 = (__int64)&GameData_221f288;
}

void game_cmdbtl_f37d60()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  float32x4_t** v3;
  float32x4_t** v4;
  __int128 v5;
  __int128 v6;
  int8x16_t v7;
  float32x4_t v8;
  __int64 v9;
  unsigned __int64 v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  int8x16_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  __int128 v21;
  __int128 v22;
  __int128 v23;
  __int128 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  float32x4_t v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  float32x4_t v36;
  float32x4_t v37;
  __int128 v38;
  int8x16_t v39;
  struct {
    __int64 v40;
    __int64 v41;
    __int64 v42;
  } v40_;
  __int128 v43;
  __int128 v44;

  v0 = GameData_212ea58;
  LOWORD(v40_.v40) = 0;
  v40_.v41 = 0;
  v40_.v42 = 0;
  v1 = *GameData_212ea58;
  *(_DWORD*)(v1 + 1204) = *(_DWORD*)(*GameData_212ea58 + 1204) & 0xFFFFFFFC;
  game_cmdbtl_Manager_UnitRelocationImpl((_QWORD*)v1, (__int64)&v40_.v40);
  if (v40_.v42 != 0) {
    std___1___shared_weak_count___release_weak(v40_.v42);
  }
  v2 = *v0;
  v3 = *(float32x4_t***)(*v0 + 840);
  v4 = *(float32x4_t***)(*v0 + 848);
  if (v3 != v4) {
    *(int8x8_t*)&v5 = vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a838f0),
                                COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL));
    *((_QWORD*)&v5 + 1) = v5;
    v36 = COERCE_AS(float32x4_t, v5);
    *(int8x8_t*)&v5 = vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a838f0),
                                COERCE_AS(int8x8_t, 0x30201000B0A0908LL));
    v35 = v5;
    *((int8x8_t*)&v5 + 1) = vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a838f0),
                                      COERCE_AS(int8x8_t, 0xB0A090807060504LL));
    v33 = COERCE_AS(float32x4_t, v5);
    v34 = *((_QWORD*)&v5 + 1);
    do {
      v37 = (*v3)[7];
      math_Quat_FromYawPitchRoll(
          (void*)(&v39), LANES128((*v3)[8]).n128_f32[1] * 0x1.1df46a0000000p-6f,
          0x0.0p+0f, 0x0.0p+0f);
      v7 = vmulq_f32(v39, COERCE_AS(float32x4_t, GameData_1a829d0));
      LANES128(v8).n128_u64[0] = LANES128(v39).n128_u64[0];
      v9 = (__int64)*v3;
      v10 = LANES128((*v3)[13]).n128_u64[0];
      LANES128(v11).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v7, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v11).n128_u64[1] = v35;
      LANES128(v12).n128_u64[0] = 0;
      *(int8x8_t*)&LANES128(v12).n128_i8[8] =
          vqtbl1_s8(v7, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      v13 = vmulq_f32(v12, v11);
      LANES128(v12).n128_u64[0] = v34;
      v14 = vmlaq_f32(vmulq_f32(v7, v36),
                      COERCE_AS(float32x4_t, GameData_1a83800), v13);
      LANES128(v13).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v7, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int32x2_t*)&LANES128(v12).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v7).n128_u64[0]), 1);
      v15 = vmlaq_f32(v14, COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v12, v13));
      LANES128(v13).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v7, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v13).n128_i8[8] =
          vqtbl1_s8(v7, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      v16 = vmlsq_f32(v15, v13, v33);
      LANES128(v7).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v13).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v17).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v7).n128_u64[1] = LANES128(v7).n128_u64[0];
      LANES128(v8).n128_u64[1] = LANES128(v13).n128_u64[0];
      *(int8x8_t*)&LANES128(v17).n128_i8[8] =
          vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      LANES128(v12).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      v18 = vmlaq_f32(vmulq_f32(v7, v16),
                      COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v8, v17));
      LANES128(v17).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int32x2_t*)&LANES128(v12).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v16).n128_u64[0]), 1);
      LANES128(v13).n128_u64[1] = LANES128(v17).n128_u64[0];
      LANES128(v17).n128_u64[1] = LANES128(v39).n128_u64[0];
      LANES128(v19).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v19).n128_i8[8] =
          vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      v20 = vaddq_f32(
          v37,
          vmlsq_f32(vmlaq_f32(v18, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v17, v12)),
                    v19, v13));
      *(_QWORD*)(v9 + 96) = LANES128(v20).n128_u64[0];
      *(_QWORD*)(v9 + 112) = LANES128(v20).n128_u64[0];
      v22 = *(_OWORD*)(v9 + 96);
      v21 = *(_OWORD*)(v9 + 112);
      *(_QWORD*)&v23 = *(_QWORD*)(v9 + 112);
      *((_QWORD*)&v22 + 1) = LANES128(v20).n128_u32[2];
      *((_QWORD*)&v23 + 1) = LANES128(v20).n128_u32[2];
      *(_OWORD*)(v9 + 96) = v22;
      *(_OWORD*)(v9 + 112) = v23;
      if (v10 != 0) {
        v38 = v23;
        *(_QWORD*)&v24 = (unsigned int)v21 | 0x4348000000000000LL;
        DWORD1(v21) = -1027080192;
        *((_QWORD*)&v24 + 1) = LANES128_OF(vextq_s8(v20, v20, 8u)).n128_u32[0];
        *((_QWORD*)&v21 + 1) = *((_QWORD*)&v24 + 1);
        v43 = v21;
        v44 = v24;
        GameRoutine_1085a10((void*)(&v40_.v40), v10 + 160, &v44, &v43, 0);
        v23 = v38;
        DWORD1(v23) = HIDWORD(v40_.v40);
      }
      *(_QWORD*)(v9 + 112) = v23;
      v6 = *(_OWORD*)(v9 + 112);
      *(_DWORD*)(v9 + 100) = DWORD1(v6);
      *((_QWORD*)&v6 + 1) = DWORD2(v23);
      *(_OWORD*)(v9 + 112) = v6;
      GameRoutine_e7bed0(v9, 1);
      v3 += 2;
    } while (v3 != v4);
    v2 = *v0;
  }
  v25 = *(int*)(v2 + 608);
  v26 = v2 + 672 + (v25 << 7);
  v27 = *(_QWORD*)(v26 + 80);
  v28 = *(_QWORD*)(v26 + 88);
  if (v28 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 16), 1u,
                              memory_order_relaxed);
    LODWORD(v25) = *(_DWORD*)(v2 + 608);
  }
  if ((unsigned int)v25 > 2) {
    v29 = 3;
  }
  else {
    v29 = GameData_1b9a550[(unsigned int)v25];
  }
  v30 = v2 + 672 + (v29 << 7);
  v31 = *(_QWORD*)(v30 + 80);
  v32 = *(_QWORD*)(v30 + 88);
  if (v32 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 16), 1u,
                              memory_order_relaxed);
  }
  v40_.v40 = v27;
  v40_.v41 = v28;
  if (v28 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 16), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)&v44 = v31;
  *((_QWORD*)&v44 + 1) = v32;
  if (v32 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_e7fde0(v2 + 16, &v40_.v40, &v44, 0, 0x0.0p+0f, 0x0.0p+0f);
    std___1___shared_weak_count___release_weak(v32);
    if (v28 == 0) {
      goto LABEL_21;
    }
    goto LABEL_20;
  }
  GameRoutine_e7fde0(v2 + 16, &v40_.v40, &v44, 0, 0x0.0p+0f, 0x0.0p+0f);
  if (v28 != 0) {
  LABEL_20:
    std___1___shared_weak_count___release_weak(v28);
  }
LABEL_21:
  if (v32 != 0) {
    std___1___shared_weak_count___release_weak(v32);
  }
  if (v28 != 0) {
    std___1___shared_weak_count___release_weak(v28);
  }
  *(_BYTE*)(*GameData_212f2e0 + 112) = 1;
  *(_DWORD*)(*v0 + 1204) |= 0x80u;
}

__attribute__((swiftcall)) void game_cmdbtl_f901d0(PSEUDO_X8 x8_, float a2,
                                                   float a3)
{
  _OWORD* a1 = (_OWORD*)PSEUDO_X8_VALUE(x8_);
  _OWORD* v3;
  float v6;
  float v7;
  float v8;
  __int128 v9;
  int v10;
  int v11;
  __int64 v12;
  _OWORD* v13;

  if (GameData_2228068 == 1) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) != 0) {
      goto LABEL_7;
    }
    v13 = a1;
    v10 = __cxa_guard_acquire_alt1((__int64)&GameData_21a6130);
    a1 = v13;
    if (v10 == 0) {
      goto LABEL_7;
    }
    goto LABEL_11;
  }
  if (*(float*)&GameData_2228060 > 0x0.0p+0f) {
    v3 = a1;
    v6 = GameRoutine_a5e890(a2 * *(float*)&GameData_2228060,
                            a3 + 0x1.0000000000000p+5f);
    v7 = GameRoutine_a5e890(a2 * *(float*)&GameData_2228060,
                            a3 + 0x1.0000000000000p+6f);
    v8 = GameRoutine_a5e890(a2 * *(float*)&GameData_2228060,
                            a3 + 0x1.0000000000000p+7f);
    *(float*)&v9 = (float)(*(float*)&GameData_2228050 +
                           (float)(*((float*)&GameData_2228060 + 1) * v6)) *
                   0x1.99999a0000000p-4f;
    *((float*)&v9 + 1) =
        (float)(*((float*)&GameData_2228050 + 1) +
                (float)(*((float*)&GameData_2228060 + 1) * v7)) *
        0x1.99999a0000000p-4f;
    *((_QWORD*)&v9 + 1) = COERCE_UNSIGNED_INT(
        (float)(*((float*)&GameData_2228050 + 2) +
                (float)(*((float*)&GameData_2228060 + 1) * v8)) *
        0x1.99999a0000000p-4f);
    *v3 = v9;
    return;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v13 = a1;
    v11 = __cxa_guard_acquire_alt1((__int64)&GameData_21a6130);
    a1 = v13;
    if (v11 != 0) {
    LABEL_11:
      v12 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v12;
      __cxa_guard_release_alt1((__int64)&GameData_21a6130);
      a1 = v13;
    }
  }
LABEL_7:
  *a1 = GameData_21a6120;
}

#pragma GCC visibility pop
