#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_826320(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_GameVariable_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* GameVariable_Destructor(_QWORD* result);
__attribute__((swiftcall)) void GameRoutine_82faa0(PSEUDO_X8, _QWORD, _QWORD);
_QWORD* GameVariable_826e40(__int64, unsigned int, _QWORD*, int, int, int, int,
                            char);
__int64 GameRoutine_12274e0(_QWORD, _QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65c380(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65c4a0(_QWORD, _QWORD);
__int64 GameRoutine_660f80(_QWORD);
__int64 GameRoutine_826320_alt1(_QWORD*) __asm__("GameRoutine_826320");
__int64 GameRoutine_827060();
__int64 GameRoutine_82ec20(_QWORD);
__int64 GameRoutine_82ed20(_QWORD);
__int64 GameRoutine_82f5a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_82f8a0(_QWORD, _QWORD);
__int64 GameRoutine_82fc00(_QWORD, _QWORD);
__int64 GameRoutine_82ffa0(_QWORD);
__int64 GameRoutine_8305a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8308a0(__int64, __int64, __int64);
__int64 GameRoutine_8309a0(__int64, __int64, __int64);
__int64 GameVariable_827280_alt1() __asm__("GameVariable_827280");
__int64 GameVariable_8277b0_alt1(_QWORD, _QWORD,
                                 _QWORD) __asm__("GameVariable_8277b0");
__int64 Impl_829ca0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString32(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _BYTE GameData_1b45b5e[3];
extern _UNKNOWN* GameData_1f9ebe0;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64 (*GameData_1f9ecc0[])();
extern __int64 (*GameData_1f9ed50[])();
extern __int64 (*GameData_1f9f790[])();
extern __int64 (*GameData_1f9f800[])();
extern __int64 (*GameData_1f9fbc0[])();
extern __int64 GameData_21c6980;
extern __int64 GameData_22400f8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64* GameData_21309c8[5];
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_667c50(void);
void __attribute__((noreturn)) GameRoutine_82f2d0(void);
void __attribute__((noreturn)) GameRoutine_834b20(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_835d90(_QWORD, _QWORD, _QWORD);
__int64 GameVariable_DeletingDestructor(_QWORD* a1);
bool GameVariable_827050(__int64 a1);
_QWORD* GameVariable_827070(__int64 a1, unsigned int a2, __int64* a3,
                            __int64* a4, int a5, char a6);
bool GameVariable_827280(__int64 a1);
__int64 GameVariable_8272a0(__int64 a1, unsigned int a2);
__int64 GameVariable_827530(__int64 a1, __int64 a2, __int64 a3);
__int64 GameVariable_8277b0(__int64 a1, unsigned __int8 a2, _QWORD* a3);
__int64 GameVariable_827b00(__int64 a1, unsigned __int64* a2);
char* GameVariable_827c00(char* result);
__int64 GameVariable_828620(__int64 result, unsigned __int8 a2);
__int64 GameVariable_828700(__int64 a1, __int64 a2, int a3);
__int64 GameVariable_828800(__int64 a1, __int64 a2, int a3);
__int64 GameVariable_8288e0(__int64 result, unsigned __int8 a2);
__int64 GameVariable_828a00(__int64 a1, __int64 a2, __int64 a3);
__int64 GameVariable_828dc0(__int64 a1, __int64 a2, int a3);
__int64 GameVariable_828f50(__int64 a1, __int64 a2);
_QWORD* GameVariable_828fa0(__int64 a1, unsigned int a2, unsigned __int64* a3,
                            int a4);
_QWORD* game_GameVariable_Impl_Push(_QWORD* result, __int64 a2,
                                    signed __int64 a3);
_QWORD* game_GameVariable_Impl_Pop(_QWORD* result, __int64 a2, __int64 a3);
__int64 game_GameVariable_Deserialize(__int64 a1, __int64* a2, __int64 a3);
__int64 game_GameVariable_Impl_Push_closure_Invoke(__int64 a1, __int64** a2);
__int64 game_GameVariable_Impl_Pop_closure_Invoke(__int64 a1, __int64** a2);
_QWORD* game_GameVariable_Impl_RegisterUpdate_closure_Invoke_834300(
    _QWORD* result, __int64* a2, __int64 a3);
_QWORD* game_GameVariable_Impl_RegisterUpdate_closure_Invoke_8346a0(__int64 a1,
                                                                    __int64 a2);
__int64
game_GameVariable_Impl_RegisterUpdate_closure_Invoke_834a40(__int64 result);
__int64 game_GameVariable_EachMerge_lambda0_Invoke(__int64 result,
                                                   unsigned __int8* a2,
                                                   __int64 a3);
__int64 game_GameVariable_ClrForViewer_lambda0_Invoke(__int64 a1,
                                                      unsigned __int8* a2);
__int64 game_GameVariable_Serialize_lambda0_Invoke_836410(__int64 a1,
                                                          unsigned __int8* a2);
__int64
game_GameVariable_Deserialize_lambda0_Invoke_836500(__int64 a1,
                                                    unsigned __int8* a2);
__int64 game_GameVariable_Serialize_lambda0_Invoke_836620(_QWORD* a1, char* a2,
                                                          __int64 a3);
__int64 game_GameVariable_Deserialize_lambda0_Invoke_836c80(__int64 a1,
                                                            _BYTE* a2,
                                                            __int64 a3);
__int64 game_GameVariable_Restore_lambda0_Invoke(__int64 a1,
                                                 unsigned __int8* a2);
__int64 game_GameVariable_Restore_lambda1_Invoke(__int64 a1,
                                                 unsigned __int8* a2);
__int64 game_GameVariable_ResetRoute_lambda0_Invoke(__int64 result,
                                                    unsigned __int8* a2);
__int64 game_GameVariable_ResetValue_lambda0_Invoke(__int64 a1,
                                                    unsigned __int8* a2,
                                                    __int64 a3);
__int64 game_GameVariable_ShareSerialize_lambda0_Invoke(__int64 a1,
                                                        unsigned __int8* a2);
__int64 game_GameVariable_ShareDeserialize_lambda0_Invoke(__int64 a1,
                                                          unsigned __int8* a2);
__int64 game_GameVariable_ShareDeserialize_lambda1_Invoke(__int64 a1,
                                                          unsigned __int8* a2);
_QWORD* GameRoutine_94e080();
_QWORD* GameVariable_826e40_alt1(__int64, unsigned int, unsigned __int64*, int,
                                 int, int, int,
                                 char) __asm__("GameVariable_826e40");
_QWORD* IdentMap_Destructor(_QWORD* result);
_QWORD* game_CausationFile_EachFlag(__int64);
__attribute__((swiftcall)) void GameRoutine_134b980(PSEUDO_X8,
                                                    __int64(__fastcall*)());
__attribute__((swiftcall)) void TroopMgr_134b820(PSEUDO_X8, __int64);
__int64* GameRoutine_82f300(__int64* result, unsigned __int64);
__int64* NoticeFile_9ca9c0();
__int64* TutorialFile_980b00();
__int64* game_990940();
__int64* game_9a28e0(int);
__int64* game_9a3180();
__int64* game_9a6e00();
__int64 AssetTableFile_7e7200(__int64);
__int64 GameConst_7f8610(__int64);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_2b0();
__int64 GameRoutine_8319e0(__int64 result, char*, __int64, __int64, char);
__int64 GameRoutine_834b40();
__int64 GameRoutine_834c40(__int64 result, __int64*,
                           __int64 (**)(__int64, __int64), unsigned __int64,
                           __int64*, signed __int64);
__int64 GameVariable_827530_alt1(__int64) __asm__("GameVariable_827530");
__int64 Situation_7671b0(__int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString(__int64 result);
__int64 memset(_QWORD, _QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
bool game_anonymous_RuntimeLabelBuffer_EachSaveFlag(__int64, __int64);
char* GameRoutine_135b460();
char* GameVariable_827070_alt1(__int64, unsigned int, unsigned __int64*,
                               __int64*, int,
                               char) __asm__("GameVariable_827070");
extern _UNKNOWN* GameData_1f9caf8;
extern _UNKNOWN* GameData_1f9cb00;
extern _UNKNOWN* GameData_1f9cb08;
extern _UNKNOWN* GameData_1f9cb10;
extern _UNKNOWN* GameData_1f9cb18;
extern _UNKNOWN* GameData_1f9cb20;
extern _UNKNOWN* GameData_1f9cb28;
extern _UNKNOWN* GameData_1f9cb30;
extern _UNKNOWN* GameData_1f9cb38;
extern _UNKNOWN* GameData_1f9cb40;
extern _UNKNOWN GameData_1a854c2;
extern _UNKNOWN GameData_1a854c9;
extern _UNKNOWN GameData_1a891bb;
extern _UNKNOWN GameData_1a89338;
extern _UNKNOWN GameData_1a8d213;
extern _UNKNOWN GameData_1a8d257;
extern _UNKNOWN GameData_1a8d3c2;
extern _UNKNOWN GameData_1a90c5b;
extern _UNKNOWN GameData_1a90cd0;
extern _UNKNOWN GameData_1a90cde;
extern _UNKNOWN GameData_1a94bf5;
extern _UNKNOWN GameData_1a94c03;
extern _UNKNOWN GameData_1a94c9c;
extern _UNKNOWN GameData_1a98bab;
extern _UNKNOWN GameData_1a98cd4;
extern _UNKNOWN GameData_1a98cf2;
extern _UNKNOWN GameData_1a9c804;
extern _UNKNOWN GameData_1a9c809;
extern _UNKNOWN GameData_1a9c814;
extern _UNKNOWN GameData_1a9c900;
extern _UNKNOWN GameData_1aa828d;
extern _UNKNOWN GameData_1aa829e;
extern _UNKNOWN GameData_1aabf8a;
extern _UNKNOWN GameData_1aac000;
extern _UNKNOWN GameData_1aac01e;
extern _UNKNOWN GameData_1aafdec;
extern _UNKNOWN GameData_1aafe28;
extern _UNKNOWN GameData_1aafe2d;
extern _UNKNOWN GameData_1aafe39;
extern _UNKNOWN GameData_1ab397f;
extern _UNKNOWN GameData_1ab3a25;
extern _UNKNOWN GameData_1ab3a3d;
extern _UNKNOWN GameData_1ab7cf6;
extern _UNKNOWN GameData_1ab7d01;
extern _UNKNOWN GameData_1ab7d96;
extern _UNKNOWN GameData_1abb9fd;
extern _UNKNOWN GameData_1abba08;
extern _UNKNOWN GameData_1abba0e;
extern _UNKNOWN GameData_1abba14;
extern _UNKNOWN GameData_1abbaf3;
extern _UNKNOWN GameData_1abf8b7;
extern _UNKNOWN GameData_1abf8bc;
extern _UNKNOWN GameData_1abf8c1;
extern _UNKNOWN GameData_1abf8cc;
extern _UNKNOWN GameData_1abf8d7;
extern _UNKNOWN GameData_1ac3020;
extern _UNKNOWN GameData_1ac6a36;
extern _UNKNOWN GameData_1ac6a41;
extern _UNKNOWN GameData_1ac6a48;
extern _UNKNOWN GameData_1acaaf4;
extern _UNKNOWN GameData_1aced1c;
extern _UNKNOWN GameData_1aced27;
extern _UNKNOWN GameData_1aced32;
extern _UNKNOWN GameData_1aced3d;
extern _UNKNOWN GameData_1aced48;
extern _UNKNOWN GameData_1ad2914;
extern _UNKNOWN GameData_1ad291f;
extern _UNKNOWN GameData_1ad6545;
extern _UNKNOWN GameData_1ad6550;
extern _UNKNOWN GameData_1ada3b2;
extern _UNKNOWN GameData_1ada3e7;
extern _UNKNOWN GameData_1addf8f;
extern _UNKNOWN GameData_1ade03a;
extern _UNKNOWN GameData_1ade058;
extern _UNKNOWN GameData_1ae1d8f;
extern _UNKNOWN GameData_1ae1d94;
extern _UNKNOWN GameData_1ae1da0;
extern _UNKNOWN GameData_1ae1e69;
extern _UNKNOWN GameData_1ae1e8d;
extern _UNKNOWN GameData_1ae1eae;
extern _UNKNOWN GameData_1ae5792;
extern _UNKNOWN GameData_1ae5797;
extern _UNKNOWN GameData_1ae9564;
extern _UNKNOWN GameData_1ae9569;
extern _UNKNOWN GameData_1ae96d1;
extern _UNKNOWN GameData_1aed6f3;
extern _UNKNOWN GameData_1aed7e3;
extern _UNKNOWN GameData_1af12de;
extern _UNKNOWN GameData_1af12e3;
extern _UNKNOWN GameData_1af12ee;
extern _UNKNOWN GameData_1af12f9;
extern _UNKNOWN GameData_1af5041;
extern _UNKNOWN GameData_1af504c;
extern _UNKNOWN GameData_1af5058;
extern _UNKNOWN GameData_1af5115;
extern _UNKNOWN GameData_1af512d;
extern _UNKNOWN GameData_1af8d9e;
extern _UNKNOWN GameData_1af8ea7;
extern _UNKNOWN GameData_1afcd20;
extern _UNKNOWN GameData_1afcdc5;
extern _UNKNOWN GameData_1afcdd3;
extern _UNKNOWN GameData_21d9fd0;
extern _UNKNOWN GameData_21ed130;
extern _UNKNOWN GameData_21ed1d8;
extern _UNKNOWN GameData_21ed460;
extern _UNKNOWN GameData_21ed520;
extern __int64 (*GameData_1f9edd0[])();
extern __int64 (*GameData_1f9ee50[])();
extern __int64 (*GameData_1f9eed0[])();
extern __int64 (*GameData_1f9ef50[])();
extern __int64 (*GameData_1f9efd0[])();
extern __int64 (*GameData_1f9f050[])();
extern __int64 (*GameData_1f9f0d0[])();
extern __int64 (*GameData_1f9f160[])();
extern __int64 (*GameData_1f9f1f0[])();
extern __int64 (*GameData_1f9f270[])();
extern __int64 (*GameData_1f9f2f0[])();
extern __int64 (*GameData_1f9f370[])();
extern __int64 (*GameData_1f9f3f0[])();
extern __int64 (*GameData_1f9f470[])();
extern __int64 (*GameData_1f9f500[])();
extern __int64 (*GameData_1f9f580[])();
extern __int64 (*GameData_1f9f610[])();
extern __int64 (*GameData_1f9f690[])();
extern __int64 (*GameData_1f9f710[])();
extern __int64 (*GameData_1f9f8a0[])();
extern __int64* GameData_212c650[5];
extern __int64* GameData_212c8c0[9];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212c060;
extern __int64 GameData_212c970[153];
extern __int64 GameData_212c998[148];
extern __int64 GameData_212c9a0[147];
extern __int64 GameData_212ca10[133];
extern __int64 GameData_212ca20[131];
extern __int64 GameData_212cb58[92];
extern __int64 GameData_212cb70[89];
extern __int64 GameData_212cbd0[77];
extern __int64 GameData_212cbe8[74];
extern __int64 GameData_212cc70[57];
extern __int64 GameData_212cc78[56];
extern __int64 GameData_212cca8[50];
extern __int64 GameData_212ccd0[45];
extern __int64 GameData_212cd98[20];
extern __int64 GameData_212cdc8[14];
extern __int64 GameData_21c9a78;
extern __int64 GameData_21c9a80;
extern __int64 GameData_21d9fb8;
extern __int64 GameData_21d9fc0;
extern __int64 GameData_21d9fc8;
extern __int64 GameData_21ed0a8;
extern __int64 GameData_21ed0c0;
extern __int64 GameData_21ed0d8;
extern __int64 GameData_21ed0f0[];
extern __int64 GameData_21ed0f8;
extern __int64 GameData_21ed100;
extern __int64 GameData_21ed108;
extern __int64 GameData_21ed110;
extern __int64 GameData_21ed118;
extern __int64 GameData_21ed120;
extern __int64 GameData_21ed128;
extern __int64 GameData_21ed138[];
extern __int64 GameData_21ed140;
extern __int64 GameData_21ed148;
extern __int64 GameData_21ed150;
extern __int64 GameData_21ed158;
extern __int64 GameData_21ed160;
extern __int64 GameData_21ed168;
extern __int64 GameData_21ed170;
extern __int64 GameData_21ed178;
extern __int64 GameData_21ed180;
extern __int64 GameData_21ed188;
extern __int64 GameData_21ed190;
extern __int64 GameData_21ed198;
extern __int64 GameData_21ed1a0;
extern __int64 GameData_21ed1a8;
extern __int64 GameData_21ed1b0;
extern __int64 GameData_21ed1b8;
extern __int64 GameData_21ed1c0;
extern __int64 GameData_21ed1c8;
extern __int64 GameData_21ed1d0;
extern __int64 GameData_21ed1e0[];
extern __int64 GameData_21ed1e8;
extern __int64 GameData_21ed1f0;
extern __int64 GameData_21ed1f8;
extern __int64 GameData_21ed200;
extern __int64 GameData_21ed208;
extern __int64 GameData_21ed210;
extern __int64 GameData_21ed218;
extern __int64 GameData_21ed220;
extern __int64 GameData_21ed228;
extern __int64 GameData_21ed230;
extern __int64 GameData_21ed238;
extern __int64 GameData_21ed240;
extern __int64 GameData_21ed248;
extern __int64 GameData_21ed250;
extern __int64 GameData_21ed258;
extern __int64 GameData_21ed260;
extern __int64 GameData_21ed268;
extern __int64 GameData_21ed270;
extern __int64 GameData_21ed278;
extern __int64 GameData_21ed280;
extern __int64 GameData_21ed288;
extern __int64 GameData_21ed290;
extern __int64 GameData_21ed298;
extern __int64 GameData_21ed2a0;
extern __int64 GameData_21ed2a8;
extern __int64 GameData_21ed2b0;
extern __int64 GameData_21ed2b8;
extern __int64 GameData_21ed2c0;
extern __int64 GameData_21ed2c8;
extern __int64 GameData_21ed2d0;
extern __int64 GameData_21ed2d8;
extern __int64 GameData_21ed2e0;
extern __int64 GameData_21ed2e8;
extern __int64 GameData_21ed2f0;
extern __int64 GameData_21ed2f8;
extern __int64 GameData_21ed300;
extern __int64 GameData_21ed308;
extern __int64 GameData_21ed310;
extern __int64 GameData_21ed318;
extern __int64 GameData_21ed320;
extern __int64 GameData_21ed328;
extern __int64 GameData_21ed330;
extern __int64 GameData_21ed338;
extern __int64 GameData_21ed340;
extern __int64 GameData_21ed348;
extern __int64 GameData_21ed350;
extern __int64 GameData_21ed358;
extern __int64 GameData_21ed360;
extern __int64 GameData_21ed368;
extern __int64 GameData_21ed370;
extern __int64 GameData_21ed378;
extern __int64 GameData_21ed380;
extern __int64 GameData_21ed388;
extern __int64 GameData_21ed390;
extern __int64 GameData_21ed398;
extern __int64 GameData_21ed3a0;
extern __int64 GameData_21ed3a8;
extern __int64 GameData_21ed3b0;
extern __int64 GameData_21ed3b8;
extern __int64 GameData_21ed3c0;
extern __int64 GameData_21ed3c8;
extern __int64 GameData_21ed3d0;
extern __int64 GameData_21ed3d8;
extern __int64 GameData_21ed3e0;
extern __int64 GameData_21ed3e8;
extern __int64 GameData_21ed3f0;
extern __int64 GameData_21ed3f8;
extern __int64 GameData_21ed400;
extern __int64 GameData_21ed408;
extern __int64 GameData_21ed410;
extern __int64 GameData_21ed418;
extern __int64 GameData_21ed420;
extern __int64 GameData_21ed428;
extern __int64 GameData_21ed430;
extern __int64 GameData_21ed438;
extern __int64 GameData_21ed440;
extern __int64 GameData_21ed448;
extern __int64 GameData_21ed450;
extern __int64 GameData_21ed458;
extern __int64 GameData_21ed480[];
extern __int64 GameData_21ed488;
extern __int64 GameData_21ed490;
extern __int64 GameData_21ed498;
extern __int64 GameData_21ed4a0;
extern __int64 GameData_21ed4a8;
extern __int64 GameData_21ed4b0;
extern __int64 GameData_21ed4b8;
extern __int64 GameData_21ed4c0;
extern __int64 GameData_21ed4c8;
extern __int64 GameData_21ed4d0;
extern __int64 GameData_21ed4d8;
extern __int64 GameData_21ed4e0;
extern __int64 GameData_21ed4e8;
extern __int64 GameData_21ed4f0;
extern __int64 GameData_21ed4f8;
extern __int64 GameData_21ed500;
extern __int64 GameData_21ed508;
extern __int64 GameData_21ed510;
extern __int64 GameData_21ed518;
extern __int64 GameData_21ed560;
extern __int64 GameData_21ed568;
extern __int64 GameData_21f6250;
extern __int64 GameData_21f6258;
extern __int64 GameData_2229a48;
extern __int64 GameData_2229a58;
extern __int64 game_GameModeData_instance_;
extern int GameData_1aced17;
unsigned __int64 GameRoutine_82d5c0(__int64, unsigned int);
void GameRoutine_dbfc40(__int64, __int64);
void Registration_a4fba0(__int64, __int64);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_835d90_alt1() __asm__("GameRoutine_835d90");
bool GameVariable_718130(__int64 a1, __int64 a2);
_QWORD* GameVariable_826320(_QWORD* a1);
__int64 GameVariable_829dc0(__int64 a1);
__int64 GameVariable_82e3a0(int a1);
__int64* GameVariable_82e4d0(int a1);
__int64* GameVariable_82e5c0(unsigned __int8 a1);
__int64* GameVariable_82e7c0(unsigned __int8 a1, int a2);
__int64* GameVariable_82eaa0(unsigned __int8 a1);
__int64* GameVariable_82eee0(__int64 a1);
__attribute__((swiftcall)) void
GameRoutine_82faa0_alt1(PSEUDO_X8, _QWORD* result,
                        _QWORD*) __asm__("GameRoutine_82faa0");
__int64 GameRoutine_82f5a0_alt1(__int64, unsigned __int16*, __int64,
                                _WORD**) __asm__("GameRoutine_82f5a0");
_QWORD* GameVariable_82f8a0(_QWORD* result, __int64 a2);

bool GameVariable_718130(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 (*v5)();
  bool v6;
  int v7;
  __int64 v8;
  int v9;
  unsigned int v10;
  int v11;
  char v12;
  __int64 v13;
  __int64 v14;
  struct {
    __int64 (*v16)();
    __int64 (*v17)();
  } v16_;
  struct {
    __int64 v18;
    __int64 v19;
  } v18_;

  if (a1 == 0) {
    return false;
  }
  if (game_GameModeData_instance_ == 0) {
    return false;
  }
  v2 = a2;
  if (a2 == 0) {
    v2 = *(_QWORD*)(a1 + 128);
    if (v2 == 0) {
      return false;
    }
  }
  TroopMgr_134b820((void*)(&v18_.v18), a1);
  GameRoutine_134b980((void*)(&v16_.v16), (__int64 (*)())a1);
  v4 = v18_.v18;
  v5 = v16_.v16;
  v6 = v18_.v19 == v18_.v18 || v16_.v17 == v16_.v16;
  v7 = v6;
  if (!v6) {
    v8 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v9 = *(_DWORD*)(game_GameModeData_instance_ + 92);
      *(_QWORD*)(game_GameModeData_instance_ + 16) = v2;
      v10 = v9 & 0xFFFFFC7F;
      *(_DWORD*)(v8 + 92) = v10;
      v11 = *(_DWORD*)(v2 + 184);
      if ((v11 & 0x800) != 0) {
        v10 |= 0x100u;
        *(_DWORD*)(v8 + 92) = v10;
        v11 = *(_DWORD*)(v2 + 184);
      }
      if ((v11 & 0x40) != 0) {
        v10 |= 0x80u;
        *(_DWORD*)(v8 + 92) = v10;
        v11 = *(_DWORD*)(v2 + 184);
      }
      v12 = *(_BYTE*)(v8 + 56);
      *(_DWORD*)(v8 + 92) = v10 | (4 * (_WORD)v11) & 0x200 | 2;
      *(_BYTE*)(v8 + 57) = v12;
    }
  }
  if (v5 != nullptr) {
    v16_.v17 = v5;
    v13 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v13, v5);
    v4 = v18_.v18;
  }
  if (v4 != 0) {
    v18_.v19 = v4;
    v14 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v14, v4);
  }
  return v7 == 0;
}

_QWORD* GameVariable_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;

  v1 = result[1];
  *result = game_GameVariable_vtable;
  if (v1 != 0) {
    v2 = result;
    GameRoutine_826320(v1);
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v1);
    v2[1] = 0;
  }
  return result;
}

_QWORD* GameVariable_826320(_QWORD* a1)
{
  __int64* v2;
  _QWORD* v3;
  _QWORD* v4;
  unsigned __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  _QWORD* v36;
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
  _QWORD* v90;
  __int64 v91;
  _QWORD* v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  _QWORD* v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  _QWORD* v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64* v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;

  v2 = a1 + 491513;
  v3 = (_QWORD*)a1[491608];
  v4 = (_QWORD*)a1[491609];
  if (v4 == v3) {
    v6 = a1 + 491612;
    v17 = (_QWORD*)a1[491608];
  }
  else {
    v5 = a1[491611];
    v6 = a1 + 491612;
    v7 = &v3[v5 / 0x66];
    v8 = (__int64*)(*v7 + 40 * (v5 % 0x66));
    v9 = v3[(a1[491612] + v5) / 0x66] + 40 * ((a1[491612] + v5) % 0x66);
    if (v8 != (__int64*)v9) {
      v10 = fw_memory_g_heap_manager_ptr;
      do {
        v11 = (_QWORD*)v8[2];
        if (v11 != nullptr) {
          do {
            v12 = (_QWORD*)*v11;
            if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
              v13 = 128;
            }
            else {
              v13 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v13, v11);
            v11 = v12;
          } while (v12 != nullptr);
        }
        v14 = *v8;
        *v8 = 0;
        if (v14 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
            v15 = 128;
          }
          else {
            v15 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v15, v14);
        }
        v8 += 5;
        if ((_UNKNOWN*)((char*)v8 - *v7) == ((_UNKNOWN*)0xFF0LL)) {
          v16 = (__int64*)v7[1];
          ++v7;
          v8 = v16;
        }
      } while (v8 != (__int64*)v9);
      v4 = (_QWORD*)v2[96];
      v3 = (_QWORD*)v2[95];
    }
    v17 = v4;
  }
  *v6 = 0;
  v18 = v17 - v3;
  if (v18 >= 3) {
    v19 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v3 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
          v20 = 128;
        }
        else {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v20, *v3);
        v3 = (_QWORD*)v2[95];
        v4 = (_QWORD*)v2[96];
        v17 = v4;
      }
      v2[95] = (__int64)++v3;
      v18 = v17 - v3;
    } while (v18 > 2);
  }
  if (v18 == 1) {
    v21 = 51;
  }
  else {
    if (v18 != 2) {
      goto LABEL_33;
    }
    v21 = 102;
  }
  v2[98] = v21;
LABEL_33:
  if (v3 != v4) {
    v22 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v3 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) != 0) {
          v23 = 128;
        }
        else {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v22 + v23, *v3);
      }
      ++v3;
    } while (v3 != v4);
    v24 = v2[96];
    v25 = v2[95] - v24;
    if (v25 != 0) {
      v2[96] = v24 + ((v25 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  v26 = v2[94];
  if (v26 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v27,
                                  v26);
  }
  v28 = (_QWORD*)v2[91];
  if (v28 != nullptr) {
    v29 = fw_memory_g_heap_manager_ptr;
    do {
      v30 = (_QWORD*)*v28;
      if (*(_QWORD*)(*(_QWORD*)v29 + 200LL) != 0) {
        v31 = 128;
      }
      else {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v29 + v31, v28);
      v28 = v30;
    } while (v30 != nullptr);
  }
  v32 = v2[89];
  v2[89] = 0;
  if (v32 != 0) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v33,
                                  v32);
  }
  v34 = (_QWORD*)v2[86];
  if (v34 != nullptr) {
    v35 = fw_memory_g_heap_manager_ptr;
    do {
      v36 = (_QWORD*)*v34;
      if (*(_QWORD*)(*(_QWORD*)v35 + 200LL) != 0) {
        v37 = 128;
      }
      else {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v35 + v37, v34);
      v34 = v36;
    } while (v36 != nullptr);
  }
  v38 = v2[84];
  v2[84] = 0;
  if (v38 != 0) {
    v39 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v39 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v39,
                                  v38);
  }
  v40 = v2[80];
  if (v40 != 0) {
    v2[81] = v40;
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v41,
                                  v40);
  }
  v42 = v2[77];
  if (v42 != 0) {
    v2[78] = v42;
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v43,
                                  v42);
  }
  v44 = v2[74];
  if (v44 != 0) {
    v2[75] = v44;
    v45 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v45,
                                  v44);
  }
  v46 = v2[71];
  if (v46 != 0) {
    v2[72] = v46;
    v47 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v47,
                                  v46);
  }
  v48 = v2[68];
  if (v48 != 0) {
    v2[69] = v48;
    v49 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v49,
                                  v48);
  }
  v50 = v2[65];
  if (v50 != 0) {
    v2[66] = v50;
    v51 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v51 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v51,
                                  v50);
  }
  v52 = v2[62];
  if (v52 != 0) {
    v2[63] = v52;
    v53 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v53 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v53,
                                  v52);
  }
  v54 = v2[59];
  if (v54 != 0) {
    v2[60] = v54;
    v55 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v55,
                                  v54);
  }
  v56 = v2[56];
  if (v56 != 0) {
    v2[57] = v56;
    v57 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v57 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v57,
                                  v56);
  }
  v58 = v2[53];
  if (v58 != 0) {
    v2[54] = v58;
    v59 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v59 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v59,
                                  v58);
  }
  v60 = v2[50];
  if (v60 != 0) {
    v2[51] = v60;
    v61 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v61 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v61,
                                  v60);
  }
  v62 = v2[47];
  if (v62 != 0) {
    v2[48] = v62;
    v63 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v63 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v63,
                                  v62);
  }
  v64 = v2[44];
  if (v64 != 0) {
    v2[45] = v64;
    v65 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v65 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v65,
                                  v64);
  }
  v66 = v2[41];
  if (v66 != 0) {
    v2[42] = v66;
    v67 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v67 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v67,
                                  v66);
  }
  v68 = v2[38];
  if (v68 != 0) {
    v2[39] = v68;
    v69 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v69 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v69,
                                  v68);
  }
  v70 = v2[35];
  if (v70 != 0) {
    v2[36] = v70;
    v71 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v71 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v71,
                                  v70);
  }
  v72 = v2[32];
  if (v72 != 0) {
    v2[33] = v72;
    v73 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v73 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v73,
                                  v72);
  }
  v74 = v2[29];
  if (v74 != 0) {
    v2[30] = v74;
    v75 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v75 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v75,
                                  v74);
  }
  v76 = v2[26];
  if (v76 != 0) {
    v2[27] = v76;
    v77 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v77 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v77,
                                  v76);
  }
  v78 = v2[23];
  if (v78 != 0) {
    v2[24] = v78;
    v79 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v79 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v79,
                                  v78);
  }
  v80 = v2[20];
  if (v80 != 0) {
    v2[21] = v80;
    v81 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v81 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v81,
                                  v80);
  }
  v82 = v2[17];
  if (v82 != 0) {
    v2[18] = v82;
    v83 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v83 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v83,
                                  v82);
  }
  v84 = v2[14];
  if (v84 != 0) {
    v2[15] = v84;
    v85 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v85 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v85,
                                  v84);
  }
  v86 = v2[11];
  if (v86 != 0) {
    v2[12] = v86;
    v87 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v87 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v87,
                                  v86);
  }
  v88 = v2[8];
  if (v88 != 0) {
    v2[9] = v88;
    v89 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v89 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v89,
                                  v88);
  }
  v90 = (_QWORD*)v2[5];
  if (v90 != nullptr) {
    v91 = fw_memory_g_heap_manager_ptr;
    do {
      v92 = (_QWORD*)*v90;
      if (*(_QWORD*)(*(_QWORD*)v91 + 200LL) != 0) {
        v93 = 128;
      }
      else {
        v93 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v91 + v93, v90);
      v90 = v92;
    } while (v92 != nullptr);
  }
  v94 = v2[3];
  v2[3] = 0;
  if (v94 != 0) {
    v95 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v95 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v95,
                                  v94);
  }
  v96 = *v2;
  if (*v2 != 0) {
    v2[1] = v96;
    v97 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v97 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v97,
                                  v96);
  }
  v98 = fw_memory_g_heap_manager_ptr;
  v99 = 458744;
  while (2) {
    v101 = &a1[v99];
    v102 = a1[v99 - 3];
    if (v102 == 0) {
      goto LABEL_201;
    }
    v103 = *(v101 - 2);
    if (v102 == v103) {
    LABEL_197:
      if (*(_QWORD*)(*(_QWORD*)v98 + 200LL) != 0) {
        v108 = 128;
      }
      else {
        v108 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v98 + v108, v102);
      goto LABEL_201;
    }
    do {
      v105 = *(_QWORD**)(v103 - 16);
      v106 = v103 - 48;
      if ((_QWORD*)(v103 - 48) == v105) {
        v104 = 32;
      LABEL_191:
        (*(void (**)(__int64))(*v105 + v104))((__int64)v105);
        goto LABEL_192;
      }
      if (v105 != nullptr) {
        v104 = 40;
        goto LABEL_191;
      }
    LABEL_192:
      v103 = v106;
    } while (v106 != v102);
    v107 = *(v101 - 3);
    *(v101 - 2) = v102;
    v102 = v107;
    if (v107 != 0) {
      goto LABEL_197;
    }
  LABEL_201:
    if ((*(_BYTE*)(v101 - 8) & 1) != 0) {
      v109 = *(v101 - 6);
      if (v109 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v98 + 200LL) != 0) {
          v110 = 128;
        }
        else {
          v110 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v98 + v110, v109);
      }
    }
    v111 = (__int64*)*(v101 - 9);
    *(v101 - 9) = 0;
    if (v111 != nullptr) {
      v112 = *v111;
      if (*v111 != 0) {
        v113 = *(_QWORD*)v98;
        v111[1] = v112;
        if (*(_QWORD*)(v113 + 200) != 0) {
          v114 = 128;
        }
        else {
          v114 = 56;
        }
        nn_mem_StandardAllocator_Free(v113 + v114, v112);
      }
      if (*(_QWORD*)(*(_QWORD*)v98 + 200LL) != 0) {
        v100 = 128;
      }
      else {
        v100 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v98 + v100, v111);
    }
    v99 -= 14;
    if (v99 != 6) {
      continue;
    }
    return IdentMap_Destructor(a1);
  }
}

__int64 GameVariable_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = (_QWORD*)a1[1];
  *a1 = game_GameVariable_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    GameRoutine_826320_alt1(v1);
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, v1);
    a1[1] = 0;
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, a1);
}

bool GameVariable_827050(__int64 a1)
{
  return *(_DWORD*)(a1 + 32) != *(_DWORD*)(a1 + 28);
}

_QWORD* GameVariable_827070(__int64 a1, unsigned int a2, __int64* a3,
                            __int64* a4, int a5, char a6)
{
  __int64 v6;
  __int64 v7;
  _QWORD* v13;
  _BYTE* v14;
  _QWORD* v15;
  char* v16;
  char* v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  bool v21;
  unsigned __int64 v22;
  char* v23;
  char* v24;
  __int64 v25;
  _QWORD* v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 (*v39)();

  v6 = *a3;
  if (*a3 == 0) {
    return nullptr;
  }
  v7 = *(_QWORD*)(a1 + 8);
  v13 = (_QWORD*)game_GameVariableTable_Find(v7, a3);
  if (v13 != nullptr) {
    v14 = (_BYTE*)a3[1];
    v15 = v13;
    if (v14 != nullptr && *v14 != 0) {
      *v13 = v6;
      v16 = (char*)a3[1];
      v13[1] = v16;
      if (v16 != nullptr) {
        v17 = v16;
      }
      else {
        v17 = &GameData_1a9f09e;
      }
      v18 = strlen(v17);
      GameRoutine_60a060(v15 + 6, v17, v18);
      v19 = *((unsigned __int8*)v15 + 48);
      *((_DWORD*)v15 + 7) = a5;
      v20 = v19 >> 1;
      v21 = (v19 & 1) == 0;
      v22 = v15[7];
      if (v21) {
        v22 = v20;
      }
      v23 = (char*)v15 + 49;
      if (!v21) {
        v23 = (char*)v15[8];
      }
      if (v22 != 0) {
        v24 = v23;
      }
      else {
        v24 = nullptr;
      }
      v15[1] = v24;
    }
    else {
      GameRoutine_82ed20(v13 + 6);
    }
  }
  else {
    v25 = GameVariable_8277b0_alt1(v7, a2, a3);
    *(_DWORD*)(v25 + 32) = a5;
    *(_DWORD*)(v25 + 20) = 0;
    v15 = (_QWORD*)v25;
    *(_DWORD*)(v25 + 24) = ((unsigned __int64)(a4[1] - *a4) >> 3) - 1;
    *(_DWORD*)(v25 + 28) = a5;
    *(_WORD*)(v25 + 17) = 1;
    v26 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v27 = (__int64*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
    v29 = *a4;
    v28 = a4[1];
    v30 = v27;
    *v27 = 0;
    v27[1] = 0;
    v31 = v28 - v29;
    v27[2] = 0;
    if (v28 != v29) {
      if (v31 < 0) {
        GameRoutine_667c50();
      }
      v32 = fw_memory_HeapManager_Allocate(*v26, v28 - v29, 16, 0);
      v33 = v32 + v31;
      *v30 = v32;
      v30[2] = v32 + v31;
      memcpy(v32, v29, v31);
      v30[1] = v33;
    }
    v34 = (__int64*)v15[5];
    v15[5] = v30;
    if (v34 != nullptr) {
      v35 = *v34;
      if (*v34 != 0) {
        v36 = *v26;
        v34[1] = v35;
        v37 = 128;
        if (*(_QWORD*)(v36 + 200) == 0) {
          v37 = 56;
        }
        nn_mem_StandardAllocator_Free(v36 + v37, v35);
      }
      v38 = 128;
      if (*(_QWORD*)(*v26 + 200LL) == 0) {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free(*v26 + v38, v34);
    }
    if ((a6 & 1) != 0) {
      v39 = GameVariable_827280_alt1;
    }
    else {
      v39 = GameRoutine_827060;
    }
    v15[9] = v39;
    v15[10] = 0;
  }
  return v15;
}

bool GameVariable_827280(__int64 a1)
{
  return *(_DWORD*)(a1 + 32) == *(_DWORD*)(a1 + 24);
}

__int64 GameVariable_8272a0(__int64 a1, unsigned int a2)
{
  _QWORD* v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  __int64 v6;
  __int64** v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64 v12;

  v2 = *(_QWORD**)(a1 + 8);
  v3 = v2[491598];
  if (v3 != 0 && v2[491600] != 0) {
    v5 = v3 - 1;
    if ((v3 & (v3 - 1)) != 0) {
      v6 = a2;
      if (v3 <= a2) {
        v6 = a2 % (unsigned int)v3;
      }
    }
    else {
      v6 = ((_DWORD)v3 - 1) & a2;
    }
    v7 = *(__int64***)(v2[491597] + 8 * v6);
    if (v7 != nullptr) {
      v8 = *v7;
      if (v8 != nullptr) {
        if ((v3 & v5) == 0) {
          while (1) {
            v12 = v8[1];
            if (v12 == a2) {
              if (*((_DWORD*)v8 + 4) == a2) {
              LABEL_30:
                v10 = v8 + 3;
                if (v8[3] != 0) {
                  return game_GameVariableTable_Find(v2, v10);
                }
                return 0;
              }
            }
            else if ((v12 & v5) != v6) {
            LABEL_28:
              v10 = &GameData_21c6980;
              if (GameData_21c6980 != 0) {
                return game_GameVariableTable_Find(v2, v10);
              }
              return 0;
            }
            v8 = (__int64*)*v8;
            if (v8 == nullptr) {
              goto LABEL_28;
            }
          }
        }
        do {
          v9 = v8[1];
          if (v9 == a2) {
            if (*((_DWORD*)v8 + 4) == a2) {
              goto LABEL_30;
            }
            goto LABEL_14;
          }
          if (v9 >= v3) {
            v9 %= v3;
          }
          if (v9 != v6) {
            break;
          }
        LABEL_14:
          v8 = (__int64*)*v8;
        } while (v8 != nullptr);
        v10 = &GameData_21c6980;
        if (GameData_21c6980 == 0) {
          return 0;
        }
        return game_GameVariableTable_Find(v2, v10);
      }
    }
  }
  v10 = &GameData_21c6980;
  if (GameData_21c6980 != 0) {
    return game_GameVariableTable_Find(v2, v10);
  }
  return 0;
}

__int64 GameVariable_827530(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  _BYTE v6[4];

  v4 = *(_QWORD*)(a1 + 32);
  v6[0] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
    v4 = *(_QWORD*)(a1 + 32);
    v6[0] = 1;
    if (v4 != 0) {
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
      v4 = *(_QWORD*)(a1 + 32);
      v6[0] = 2;
      if (v4 != 0) {
        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
        v4 = *(_QWORD*)(a1 + 32);
        v6[0] = 3;
        if (v4 != 0) {
          (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
          v4 = *(_QWORD*)(a1 + 32);
          v6[0] = 4;
          if (v4 != 0) {
            (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
            v4 = *(_QWORD*)(a1 + 32);
            v6[0] = 5;
            if (v4 != 0) {
              (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
              v4 = *(_QWORD*)(a1 + 32);
              v6[0] = 6;
              if (v4 != 0) {
                (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
                v4 = *(_QWORD*)(a1 + 32);
                v6[0] = 7;
                if (v4 != 0) {
                  (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
                  v4 = *(_QWORD*)(a1 + 32);
                  v6[0] = 8;
                  if (v4 != 0) {
                    (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4,
                                                                         v6);
                    v4 = *(_QWORD*)(a1 + 32);
                    v6[0] = 9;
                    if (v4 != 0) {
                      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4,
                                                                           v6);
                      v4 = *(_QWORD*)(a1 + 32);
                      v6[0] = 10;
                      if (v4 != 0) {
                        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(
                            v4, v6);
                        v4 = *(_QWORD*)(a1 + 32);
                        v6[0] = 11;
                        if (v4 != 0) {
                          (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(
                              v4, v6);
                          v4 = *(_QWORD*)(a1 + 32);
                          v6[0] = 12;
                          if (v4 != 0) {
                            (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 +
                                                           48LL))(v4, v6);
                            v4 = *(_QWORD*)(a1 + 32);
                            v6[0] = 13;
                            if (v4 != 0) {
                              (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 +
                                                             48LL))(v4, v6);
                              v4 = *(_QWORD*)(a1 + 32);
                              v6[0] = 14;
                              if (v4 != 0) {
                                (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 +
                                                               48LL))(v4, v6);
                                v4 = *(_QWORD*)(a1 + 32);
                                v6[0] = 15;
                                if (v4 != 0) {
                                  (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 +
                                                                 48LL))(v4, v6);
                                  v4 = *(_QWORD*)(a1 + 32);
                                  v6[0] = 16;
                                  if (v4 != 0) {
                                    (*(void (**)(__int64, _BYTE*))(
                                        *(_QWORD*)v4 + 48LL))(v4, v6);
                                    v4 = *(_QWORD*)(a1 + 32);
                                    v6[0] = 17;
                                    if (v4 != 0) {
                                      (*(void (**)(__int64, _BYTE*))(
                                          *(_QWORD*)v4 + 48LL))(v4, v6);
                                      v4 = *(_QWORD*)(a1 + 32);
                                      v6[0] = 18;
                                      if (v4 != 0) {
                                        return (
                                            *(__int64 (**)(__int64, _BYTE*))(
                                                *(_QWORD*)v4 + 48LL))(v4, v6);
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
              }
            }
          }
        }
      }
    }
  }
  GameRoutine_60a310(v4, a2, a3);
}

__int64 GameVariable_8277b0(__int64 a1, unsigned __int8 a2, _QWORD* a3)
{
  _QWORD* v3;
  int v4;
  __int64* v5;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  unsigned __int64 v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  char* v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  bool v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int16 v49;
  char v50;
  __int16* v51;

  v3 = (_QWORD*)(a1 + 3928064);
  v4 = *(_DWORD*)(a1 + 3932096);
  if (v4 > 32766) {
    return 0;
  }
  v5 = *(__int64**)(a1 + 3932088);
  v9 = *v5;
  *(_DWORD*)(a1 + 3932096) = v4 + 1;
  *(_QWORD*)(a1 + 3932088) = v5 + 1;
  LODWORD(v5) = *(_DWORD*)(a1 + 3932104);
  v49 = 28087 * ((unsigned int)(v9 - a1 - 48) >> 4);
  v10 = (unsigned int)(*(_DWORD*)(a1 + 3932112) - (_DWORD)v5) >> 3;
  v51 = &v49;
  v11 = GameRoutine_82f5a0(a1 + 3932128, &v49, std___1_piecewise_construct_ptr,
                           &v51, &v50);
  *(_WORD*)(v11 + 18) = v10;
  v12 = (_QWORD*)v3[506];
  v13 = v3[507];
  if ((unsigned __int64)v12 < v13) {
    *v12 = v9;
    v3[506] = v12 + 1;
    if (v9 == 0) {
      return v9;
    }
    goto LABEL_21;
  }
  v14 = v3[505];
  v15 = (char*)v12 - v14;
  v16 = ((__int64)v12 - v14) >> 3;
  v17 = v16 + 1;
  if ((unsigned __int64)(v16 + 1) >> 61 != 0) {
    goto LABEL_49;
  }
  v18 = v13 - v14;
  if (v18 >> 2 > v17) {
    v17 = v18 >> 2;
  }
  if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF8LL) {
    v19 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v19 = v17;
  }
  if (v19 != 0) {
    if (v19 >> 61 != 0) {
      goto LABEL_50;
    }
    v20 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 8 * v19, 16,
                                         0);
  }
  else {
    v20 = 0;
  }
  v21 = v20 + 8 * v19;
  v22 = (char*)v12 - v14;
  v23 = (__int64)&v15[v20 + -8 * v16];
  *(_QWORD*)&v15[v20] = v9;
  v24 = (__int64)&v15[v20 + 8];
  memcpy(v23, v14, v22);
  v3[505] = v23;
  v3[506] = v24;
  v3[507] = v21;
  if (v14 != 0) {
    v25 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v25, v14);
  }
  v3[506] = v24;
  if (v9 != 0) {
  LABEL_21:
    v11 = GameRoutine_65c380(a1, a3, v9);
    v26 = (__int64*)(a1 + 24LL * a2 + 3932168);
    v28 = *(_QWORD**)(a1 + 24LL * a2 + 3932176);
    v27 = *(_QWORD*)(a1 + 24LL * a2 + 3932184);
    if ((unsigned __int64)v28 < v27) {
      *v28 = v9;
      v29 = (__int64)(v28 + 1);
    LABEL_37:
      v26[1] = v29;
      *(_BYTE*)(v9 + 16) = a2;
      *(_QWORD*)v9 = *a3;
      v39 = (char*)a3[1];
      *(_QWORD*)(v9 + 8) = v39;
      if (v39 != nullptr) {
        v40 = v39;
      }
      else {
        v40 = &GameData_1a9f09e;
      }
      v41 = strlen(v40);
      GameRoutine_60a060(v9 + 48, v40, v41);
      v42 = *(unsigned __int8*)(v9 + 48);
      v43 = v42 >> 1;
      v44 = (v42 & 1) == 0;
      v45 = *(_QWORD*)(v9 + 56);
      if (v44) {
        v45 = v43;
      }
      v46 = v9 + 49;
      if (!v44) {
        v46 = *(_QWORD*)(v9 + 64);
      }
      if (v45 != 0) {
        v47 = v46;
      }
      else {
        v47 = 0;
      }
      *(_QWORD*)(v9 + 8) = v47;
      return v9;
    }
    v30 = *v26;
    v31 = (__int64)v28 - *v26;
    v32 = (v31 >> 3) + 1;
    if (v32 >> 61 == 0) {
      v33 = v27 - v30;
      if (v33 >> 2 > v32) {
        v32 = v33 >> 2;
      }
      if ((unsigned __int64)v33 >= 0x7FFFFFFFFFFFFFF8LL) {
        v34 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v34 = v32;
      }
      if (v34 == 0) {
        v35 = 0;
      LABEL_33:
        v36 = v35 + 8 * v34;
        v37 = v35 + v31 - 8 * (v31 >> 3);
        *(_QWORD*)(v35 + v31) = v9;
        v29 = v35 + v31 + 8;
        memcpy(v37, v30, v31);
        *v26 = v37;
        v26[1] = v29;
        v26[2] = v36;
        if (v30 != 0) {
          v38 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v38 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v30);
        }
        goto LABEL_37;
      }
      if (v34 >> 61 == 0) {
        v35 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v34, 16, 0);
        goto LABEL_33;
      }
    LABEL_50:
      GameRoutine_60a210(v11);
    }
  LABEL_49:
    GameRoutine_82f2d0();
  }
  return v9;
}

__int64 GameVariable_827b00(__int64 a1, unsigned __int64* a2)
{
  unsigned __int64 v2;
  _QWORD* v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 result;
  __int64 v12;

  v2 = *a2;
  if (*a2 != 0) {
    v3 = *(_QWORD**)(a1 + 8);
    v4 = v3[2];
    if (v4 != 0 && v3[4] != 0) {
      v6 = v4 - 1;
      if ((v4 & (v4 - 1)) != 0) {
        v7 = *a2;
        if (v2 >= v4) {
          v7 = v2 % v4;
        }
      }
      else {
        v7 = v6 & v2;
      }
      v8 = *(_QWORD**)(v3[1] + 8 * v7);
      if (v8 != nullptr) {
        v9 = (_QWORD*)*v8;
        if (v9 != nullptr) {
          if ((v4 & v6) == 0) {
            while (1) {
              v12 = v9[1];
              if (v2 == v12) {
                if (v9[2] == v2) {
                  return 1;
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
          do {
            v10 = v9[1];
            if (v2 == v10) {
              if (v9[2] == v2) {
                return 1;
              }
            }
            else {
              if (v10 >= v4) {
                v10 %= v4;
              }
              if (v10 != v7) {
                return 0;
              }
            }
            v9 = (_QWORD*)*v9;
          } while (v9 != nullptr);
        }
      }
    }
  }
  return 0;
}

char* GameVariable_827c00(char* result)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned int v12;
  __int64 v13;
  bool v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  char* v21;
  unsigned __int64 v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  char* v27;
  char* v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  char* v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  int v41;
  int v42;
  __int64 v43;
  _QWORD* v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned int v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64*** v50;
  __int64** v51;
  unsigned __int64 v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64* v59;
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
  _QWORD* v79;
  _QWORD* v80;
  __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64 v87;
  _QWORD* v88;
  _QWORD* v89;
  __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  __int64 v96;
  _QWORD* v97;
  _QWORD* v98;
  __int64 v99;
  __int64** v100;
  _QWORD* v101;
  _QWORD* v102;
  char* v103;
  __int64* v104;
  __int16 v105;
  char v106;
  _QWORD v107[3];

  v1 = 0;
  v102 = result + 3928064;
  v97 = result + 3932160;
  v98 = result + 3932168;
  v101 = result + 48;
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v103 = result;
  while (2) {
    v99 = v1;
    v100 = (__int64**)&v98[3 * v1];
    v3 = *v100;
    v104 = v100[1];
    if (*v100 == v104) {
      goto LABEL_113;
    }
    while (2) {
      v5 = *v3;
      v6 = *(__int64**)(*v3 + 40);
      *(_QWORD*)(*v3 + 40) = 0;
      if (v6 != nullptr) {
        v7 = *v6;
        if (*v6 != 0) {
          v8 = *v2;
          v6[1] = v7;
          if (*(_QWORD*)(v8 + 200) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free(v8 + v9, v7);
        }
        if (*(_QWORD*)(*v2 + 200) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        result = (char*)nn_mem_StandardAllocator_Free(*v2 + v10, v6);
      }
      if ((*(_BYTE*)(v5 + 48) & 1) != 0) {
        v11 = 0;
        **(_BYTE**)(v5 + 64) = 0;
        *(_QWORD*)(v5 + 56) = 0;
        v12 = *(unsigned __int8*)(v5 + 48);
      }
      else {
        v11 = *(_QWORD*)(v5 + 56);
        v12 = 0;
        *(_WORD*)(v5 + 48) = 0;
      }
      v13 = *(_QWORD*)(v5 + 48);
      v14 = (v12 & 1) == 0;
      if ((v12 & 1) != 0) {
        v15 = v11;
      }
      else {
        v15 = v12 >> 1;
      }
      v16 = v15 | 7;
      if (v14) {
        v17 = 22;
      }
      else {
        v17 = (v13 & 0xFFFFFFFFFFFFFFFELL) - 1;
      }
      if (v16 == 23) {
        v16 = 25;
      }
      if (v15 <= 0x16) {
        v18 = 22;
      }
      else {
        v18 = v16;
      }
      if (v18 != v17) {
        v19 = *(char**)(v5 + 64);
        if (v18 > 0x16) {
          result = (char*)fw_memory_HeapManager_Allocate(*v2, v18 + 1, 16, 0);
          v21 = result;
          if ((v13 & 1) != 0) {
            v22 = (v13 & 0xFFFFFFFFFFFFFFFELL) - 1;
          }
          else {
            v22 = 22;
          }
          if (v18 >= v22) {
            v20 = *v2;
            goto LABEL_48;
          }
          v23 = result;
          if (v11 != -1) {
            result = (char*)memmove(result, v19, v11 + 1);
          }
          if (v19 != nullptr) {
            v24 = 56;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v24 = 128;
            }
            result = (char*)nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v19);
          }
          *(_QWORD*)(v5 + 64) = v23;
          *(_QWORD*)(v5 + 48) = (v18 + 1) | 1;
          v2 = (__int64*)fw_memory_g_heap_manager_ptr;
        }
        else {
          *(_BYTE*)(v5 + 48) = 2 * v11;
          if (v11 != -1) {
            result = (char*)memmove(v5 + 49, v19, v11 + 1);
          }
          if (v19 != nullptr) {
            v20 = *v2;
            v21 = v19;
          LABEL_48:
            v25 = 56;
            if (*(_QWORD*)(v20 + 200) != 0) {
              v25 = 128;
            }
            result = (char*)nn_mem_StandardAllocator_Free(v20 + v25, v21);
          }
        }
      }
      v27 = *(char**)(v5 + 88);
      v26 = *(char**)(v5 + 96);
      v28 = v27;
      if (v27 != v26) {
        while (1) {
          result = *((char**)v26 - 2);
          v30 = v26 - 48;
          if (v26 - 48 == result) {
            v29 = 32;
          }
          else {
            if (result == nullptr) {
              goto LABEL_55;
            }
            v29 = 40;
          }
          result = (char*)(*(__int64 (**)(void*))(*(_QWORD*)result + v29))(
              (void*)result);
        LABEL_55:
          v26 = v30;
          if (v30 == v27) {
            v28 = *(char**)(v5 + 88);
            break;
          }
        }
      }
      v31 = *(_QWORD*)(v5 + 104);
      v32 = v27 - v28;
      *(_QWORD*)(v5 + 96) = v27;
      if (v31 - (__int64)v28 <= (unsigned __int64)(v27 - v28)) {
        goto LABEL_83;
      }
      if (v27 == v28) {
        v34 = v27 - v28;
        goto LABEL_79;
      }
      if (0xAAAAAAAAAAAAAAABLL * (v32 >> 4) >= 0x555555555555556LL) {
        GameRoutine_60a210(result);
      }
      v33 = fw_memory_HeapManager_Allocate(*v2, v27 - v28, 16, 0);
      v34 = v33 + v32;
      v32 = v33;
      v35 = v28;
      v36 = v33;
      do {
        v37 = *((char**)v35 + 4);
        if (v37 != nullptr) {
          if (v35 == v37) {
            *(_QWORD*)(v36 + 32) = v36;
            (*(void (**)(char*, __int64))(*(_QWORD*)v37 + 24LL))(v37, v36);
          }
          else {
            *(_QWORD*)(v36 + 32) = v37;
            *((_QWORD*)v35 + 4) = 0;
          }
        }
        else {
          *(_QWORD*)(v36 + 32) = 0;
        }
        v35 += 48;
        v36 += 48;
      } while (v35 != v27);
      v2 = &fw_memory_g_heap_manager;
      do {
        v39 = *((char**)v28 + 4);
        if (v28 == v39) {
          v38 = 32;
        LABEL_72:
          (*(void (**)(void*))(*(_QWORD*)v39 + v38))((void*)v39);
          goto LABEL_73;
        }
        if (v39 != nullptr) {
          v38 = 40;
          goto LABEL_72;
        }
      LABEL_73:
        v28 += 48;
      } while (v28 != v27);
      v28 = *(char**)(v5 + 88);
    LABEL_79:
      *(_QWORD*)(v5 + 88) = v32;
      *(_QWORD*)(v5 + 96) = v34;
      *(_QWORD*)(v5 + 104) = v34;
      if (v28 != nullptr) {
        v40 = 56;
        if (*(_QWORD*)(*v2 + 200) != 0) {
          v40 = 128;
        }
        nn_mem_StandardAllocator_Free(*v2 + v40, v28);
      }
    LABEL_83:
      *(_QWORD*)(v5 + 72) = 0;
      *(_QWORD*)(v5 + 80) = 0;
      v41 = *((_DWORD*)v102 + 1008);
      v42 = v41 - 1;
      if (v41 >= 1) {
        v43 = *v3;
        *((_DWORD*)v102 + 1008) = v42;
        v44 = (_QWORD*)(v102[503] - 8LL);
        v102[503] = v44;
        *v44 = v43;
        v45 = v102[509];
        if (v45 != 0 && v102[511] != 0) {
          v46 = v45 - 1;
          v47 = (unsigned __int16)(28087 * ((v43 - (__int64)v101) >> 4));
          v48 = (unsigned __int16)(28087 * ((v43 - (__int64)v101) >> 4));
          if ((v45 & (v45 - 1)) != 0) {
            v49 = (unsigned __int16)(28087 * ((v43 - (__int64)v101) >> 4));
            if (v45 <= v48) {
              v49 = v47 % (unsigned int)v45;
            }
          }
          else {
            v49 = ((_DWORD)v45 - 1) & (unsigned int)v48;
          }
          v50 = *(__int64****)(*((_QWORD*)v103 + 491516) + 8 * v49);
          if (v50 != nullptr) {
            v51 = *v50;
            if (*v50 != nullptr) {
              if ((v45 & v46) == 0) {
                while (1) {
                  v53 = v51[1];
                  if (v53 == (__int64*)v48) {
                    if (*((unsigned __int16*)v51 + 8) == v47) {
                      goto LABEL_106;
                    }
                  }
                  else if (((unsigned __int64)v53 & v46) != v49) {
                    goto LABEL_5;
                  }
                  v51 = (__int64**)*v51;
                  if (v51 == nullptr) {
                    goto LABEL_5;
                  }
                }
              }
              do {
                v52 = (unsigned __int64)v51[1];
                if (v52 == v48) {
                  if (*((unsigned __int16*)v51 + 8) == v47) {
                  LABEL_106:
                    v54 = v102[506];
                    v55 = *(_QWORD*)(v54 - 8);
                    if (v55 != v43) {
                      v56 = *((unsigned __int16*)v51 + 9);
                      *(_QWORD*)(v102[505] + 8 * v56) = v55;
                      v105 = 28087 * ((unsigned int)(v55 - (_DWORD)v101) >> 4);
                      v107[0] = &v105;
                      *(_WORD*)(GameRoutine_82f5a0(
                                    v103 + 3932128, &v105,
                                    std___1_piecewise_construct_ptr, v107,
                                    &v106) +
                                18) = v56;
                      v54 = v102[506];
                    }
                    v102[506] = v54 - 8;
                    GameRoutine_82faa0((void*)v107, v103 + 3932128, v51);
                    v57 = v107[0];
                    v107[0] = 0;
                    if (v57 != 0) {
                      v58 = 56;
                      if (*(_QWORD*)(*v2 + 200) != 0) {
                        v58 = 128;
                      }
                      nn_mem_StandardAllocator_Free(*v2 + v58, v57);
                    }
                    break;
                  }
                }
                else {
                  if (v52 >= v45) {
                    v52 %= v45;
                  }
                  if (v52 != v49) {
                    break;
                  }
                }
                v51 = (__int64**)*v51;
              } while (v51 != nullptr);
            }
          }
        }
      }
    LABEL_5:
      v4 = *v3++;
      result = (char*)GameRoutine_65c4a0(v103, v4);
      if (v3 != v104) {
        continue;
      }
      break;
    }
    v3 = *v100;
  LABEL_113:
    v59 = v100[2];
    v100[1] = v3;
    if (v59 != v3) {
      v100[1] = nullptr;
      v100[2] = nullptr;
      *v100 = nullptr;
      if (v3 != nullptr) {
        v60 = 56;
        if (*(_QWORD*)(*v2 + 200) != 0) {
          v60 = 128;
        }
        result = (char*)nn_mem_StandardAllocator_Free(*v2 + v60, v3);
      }
    }
    v1 = v99 + 1;
    if (v99 != 18) {
      continue;
    }
    break;
  }
  v61 = v97[58];
  v62 = v97[60];
  v97[59] = v61;
  if (v62 != v61) {
    v97[59] = 0;
    v97[60] = 0;
    v97[58] = 0;
    if (v61 != 0) {
      v63 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v63 = 56;
      }
      result = (char*)nn_mem_StandardAllocator_Free(*v2 + v63, v61);
    }
  }
  v64 = v97[61];
  v65 = v97[63];
  v97[62] = v64;
  if (v65 != v64) {
    v97[62] = 0;
    v97[63] = 0;
    v97[61] = 0;
    if (v64 != 0) {
      v66 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v66 = 56;
      }
      result = (char*)nn_mem_StandardAllocator_Free(*v2 + v66, v64);
    }
  }
  v67 = v97[64];
  v68 = v97[66];
  v97[65] = v67;
  if (v68 != v67) {
    v97[65] = 0;
    v97[66] = 0;
    v97[64] = 0;
    if (v67 != 0) {
      v69 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v69 = 56;
      }
      result = (char*)nn_mem_StandardAllocator_Free(*v2 + v69, v67);
    }
  }
  v70 = v97[67];
  v71 = v97[69];
  v97[68] = v70;
  if (v71 != v70) {
    v97[68] = 0;
    v97[69] = 0;
    v97[67] = 0;
    if (v70 != 0) {
      v72 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v72 = 56;
      }
      result = (char*)nn_mem_StandardAllocator_Free(*v2 + v72, v70);
    }
  }
  v73 = v97[70];
  v74 = v97[72];
  v97[71] = v73;
  if (v74 != v73) {
    v97[71] = 0;
    v97[72] = 0;
    v97[70] = 0;
    if (v73 != 0) {
      v75 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v75 = 56;
      }
      result = (char*)nn_mem_StandardAllocator_Free(*v2 + v75, v73);
    }
  }
  v76 = v97[73];
  v77 = v97[75];
  v97[74] = v76;
  if (v77 != v76) {
    v97[74] = 0;
    v97[75] = 0;
    v97[73] = 0;
    if (v76 != 0) {
      v78 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v78 = 56;
      }
      result = (char*)nn_mem_StandardAllocator_Free(*v2 + v78, v76);
    }
  }
  if (v97[80] != 0) {
    v79 = (_QWORD*)v97[79];
    if (v79 != nullptr) {
      do {
        v80 = (_QWORD*)*v79;
        if (*(_QWORD*)(*v2 + 200) != 0) {
          v81 = 128;
        }
        else {
          v81 = 56;
        }
        result = (char*)nn_mem_StandardAllocator_Free(*v2 + v81, v79);
        v79 = v80;
      } while (v80 != nullptr);
    }
    v82 = v97[78];
    v97[79] = 0;
    if (v82 != 0) {
      v83 = v82 & 7;
      if (v82 >= 8) {
        v85 = v82 & 0xFFFFFFFFFFFFFFF8LL;
        v84 = 0;
        do {
          *(_QWORD*)(v97[77] + 8 * v84) = 0;
          *(_QWORD*)(v97[77] + 8 * v84 + 8) = 0;
          *(_QWORD*)(v97[77] + 8 * v84 + 16) = 0;
          *(_QWORD*)(v97[77] + 8 * v84 + 24) = 0;
          *(_QWORD*)(v97[77] + 8 * v84 + 32) = 0;
          *(_QWORD*)(v97[77] + 8 * v84 + 40) = 0;
          *(_QWORD*)(v97[77] + 8 * v84 + 48) = 0;
          v86 = v97[77] + 8 * v84;
          v84 += 8;
          *(_QWORD*)(v86 + 56) = 0;
        } while (v85 != v84);
      }
      else {
        v84 = 0;
      }
      if (v83 != 0) {
        v87 = 8 * v84;
        do {
          --v83;
          *(_QWORD*)(v97[77] + v87) = 0;
          v87 += 8;
        } while (v83 != 0);
      }
    }
    v97[80] = 0;
  }
  if (v97[85] != 0) {
    v88 = (_QWORD*)v97[84];
    if (v88 != nullptr) {
      do {
        v89 = (_QWORD*)*v88;
        if (*(_QWORD*)(*v2 + 200) != 0) {
          v90 = 128;
        }
        else {
          v90 = 56;
        }
        result = (char*)nn_mem_StandardAllocator_Free(*v2 + v90, v88);
        v88 = v89;
      } while (v89 != nullptr);
    }
    v91 = v97[83];
    v97[84] = 0;
    if (v91 != 0) {
      v92 = v91 & 7;
      if (v91 >= 8) {
        v94 = v91 & 0xFFFFFFFFFFFFFFF8LL;
        v93 = 0;
        do {
          *(_QWORD*)(v97[82] + 8 * v93) = 0;
          *(_QWORD*)(v97[82] + 8 * v93 + 8) = 0;
          *(_QWORD*)(v97[82] + 8 * v93 + 16) = 0;
          *(_QWORD*)(v97[82] + 8 * v93 + 24) = 0;
          *(_QWORD*)(v97[82] + 8 * v93 + 32) = 0;
          *(_QWORD*)(v97[82] + 8 * v93 + 40) = 0;
          *(_QWORD*)(v97[82] + 8 * v93 + 48) = 0;
          v95 = v97[82] + 8 * v93;
          v93 += 8;
          *(_QWORD*)(v95 + 56) = 0;
        } while (v94 != v93);
      }
      else {
        v93 = 0;
      }
      if (v92 != 0) {
        v96 = 8 * v93;
        do {
          --v92;
          *(_QWORD*)(v97[82] + v96) = 0;
          v96 += 8;
        } while (v92 != 0);
      }
    }
    v97[85] = 0;
  }
  return result;
}

__int64 GameVariable_828620(__int64 result, unsigned __int8 a2)
{
  __int64 v2;
  __int64** v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;

  v2 = *(_QWORD*)(result + 8);
  v3 = (__int64**)(v2 + 24LL * a2 + 3932168);
  v4 = *v3;
  v5 = *(__int64**)(v2 + 24LL * a2 + 3932176);
  if (*v3 != v5) {
    do {
      GameRoutine_82ec20(*v4);
      GameRoutine_82f8a0(v2 + 48, *v4);
      v6 = *v4++;
      result = GameRoutine_65c4a0(v2, v6);
    } while (v4 != v5);
    v4 = *v3;
  }
  v7 = v3[2];
  v3[1] = v4;
  if (v7 != v4) {
    v3[1] = nullptr;
    v3[2] = nullptr;
    *v3 = nullptr;
    if (v4 != nullptr) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v4);
    }
  }
  return result;
}

__int64 GameVariable_828700(__int64 a1, __int64 a2, int a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  int v13;
  __int64 i;
  __int64 v15;
  __int64 v16;
  __int64 v18;

  v3 = *(_QWORD*)(a1 + 8);
  v5 = game_GameVariableTable_Find(v3, a2);
  v9 = v5;
  if (v5 != 0) {
    v10 = *(_DWORD*)(v5 + 32);
    if (v10 <= a3) {
      v11 = a3;
    }
    else {
      v11 = *(_DWORD*)(v5 + 32);
    }
    if (a3 != 0) {
      v12 = a3;
    }
    else {
      v12 = *(_DWORD*)(v5 + 32);
    }
    if (*(_BYTE*)(v5 + 18) != 0) {
      v13 = v12;
    }
    else {
      v13 = v11;
    }
    if (v10 == v13) {
      v8 = 0;
    }
    else {
      *(_DWORD*)(v5 + 32) = v13;
      if ((*(_BYTE*)(v3 + 3932768) & 0xAE) == 0 && GameData_22400f8 != 0) {
        GameRoutine_12274e0(GameData_22400f8, v5);
      }
      v15 = *(_QWORD*)(v9 + 88);
      for (i = *(_QWORD*)(v9 + 96); v15 != i; v15 += 48) {
        v18 = v9;
        v16 = *(_QWORD*)(v15 + 32);
        if (v16 == 0) {
          GameRoutine_60a310(0, v6, v7);
        }
        (*(void (**)(__int64, __int64*))(*(_QWORD*)v16 + 48LL))(v16, &v18);
      }
      v8 = 1;
    }
  }
  return (v9 != 0) & (unsigned __int8)v8;
}

__int64 GameVariable_828800(__int64 a1, __int64 a2, int a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 i;
  __int64 v11;
  __int64 v12;
  __int64 v14;

  v3 = *(_QWORD*)(a1 + 8);
  v5 = game_GameVariableTable_Find(v3, a2);
  v9 = v5;
  if (v5 != 0) {
    if (*(_DWORD*)(v5 + 32) == a3) {
      v8 = 0;
    }
    else {
      *(_DWORD*)(v5 + 32) = a3;
      if ((*(_BYTE*)(v3 + 3932768) & 0xAE) == 0 && GameData_22400f8 != 0) {
        GameRoutine_12274e0(GameData_22400f8, v5);
      }
      v11 = *(_QWORD*)(v9 + 88);
      for (i = *(_QWORD*)(v9 + 96); v11 != i; v11 += 48) {
        v14 = v9;
        v12 = *(_QWORD*)(v11 + 32);
        if (v12 == 0) {
          GameRoutine_60a310(0, v6, v7);
        }
        (*(void (**)(__int64, __int64*))(*(_QWORD*)v12 + 48LL))(v12, &v14);
      }
      v8 = 1;
    }
  }
  return (v9 != 0) & (unsigned __int8)v8;
}

__int64 GameVariable_8288e0(__int64 result, unsigned __int8 a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 i;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = (__int64*)(*(_QWORD*)(result + 8) + 24LL * a2 + 3932168);
  v3 = *v2;
  if (*(_QWORD*)(*(_QWORD*)(result + 8) + 24LL * a2 + 3932176) != *v2) {
    v4 = result;
    v5 = 0;
    v6 = GameData_21309c8[0];
    do {
      v7 = *(_QWORD*)(v3 + 8 * v5);
      v8 = *(_QWORD*)(v4 + 8);
      v9 = *(_DWORD*)(v7 + 28);
      result = game_GameVariableTable_Find(v8, v7);
      if (result != 0) {
        v12 = result;
        if (*(_DWORD*)(result + 32) != v9) {
          *(_DWORD*)(result + 32) = v9;
          if ((*(_BYTE*)(v8 + 3932768) & 0xAE) == 0) {
            result = *v6;
            if (*v6 != 0) {
              result = GameRoutine_12274e0(result, v12);
            }
          }
          v14 = *(_QWORD*)(v12 + 88);
          for (i = *(_QWORD*)(v12 + 96); v14 != i; v14 += 48) {
            v16 = v12;
            v15 = *(_QWORD*)(v14 + 32);
            if (v15 == 0) {
              GameRoutine_60a310(0, v10, v11);
            }
            result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v15 + 48LL))(
                v15, &v16);
          }
        }
      }
      v3 = *v2;
      ++v5;
    } while (v5 < (v2[1] - *v2) >> 3);
  }
  return result;
}

__int64 GameVariable_828a00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 result;
  _BYTE v7[4];

  v4 = *(_QWORD*)(a2 + 32);
  v7[0] = 0;
  if (v4 != 0) {
    if (((*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v7) & 1) !=
        0) {
      GameVariable_8288e0(a1, 0);
    }
    v4 = *(_QWORD*)(a2 + 32);
    v7[0] = 1;
    if (v4 != 0) {
      if (((*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v7) &
           1) != 0) {
        GameVariable_8288e0(a1, 1u);
      }
      v4 = *(_QWORD*)(a2 + 32);
      v7[0] = 2;
      if (v4 != 0) {
        if (((*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v7) &
             1) != 0) {
          GameVariable_8288e0(a1, 2u);
        }
        v4 = *(_QWORD*)(a2 + 32);
        v7[0] = 3;
        if (v4 != 0) {
          if (((*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v7) &
               1) != 0) {
            GameVariable_8288e0(a1, 3u);
          }
          v4 = *(_QWORD*)(a2 + 32);
          v7[0] = 4;
          if (v4 != 0) {
            if (((*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4,
                                                                         v7) &
                 1) != 0) {
              GameVariable_8288e0(a1, 4u);
            }
            v4 = *(_QWORD*)(a2 + 32);
            v7[0] = 5;
            if (v4 != 0) {
              if (((*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4,
                                                                           v7) &
                   1) != 0) {
                GameVariable_8288e0(a1, 5u);
              }
              v4 = *(_QWORD*)(a2 + 32);
              v7[0] = 6;
              if (v4 != 0) {
                if (((*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(
                         v4, v7) &
                     1) != 0) {
                  GameVariable_8288e0(a1, 6u);
                }
                v4 = *(_QWORD*)(a2 + 32);
                v7[0] = 7;
                if (v4 != 0) {
                  if (((*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(
                           v4, v7) &
                       1) != 0) {
                    GameVariable_8288e0(a1, 7u);
                  }
                  v4 = *(_QWORD*)(a2 + 32);
                  v7[0] = 8;
                  if (v4 != 0) {
                    if (((*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v4 +
                                                           48LL))(v4, v7) &
                         1) != 0) {
                      GameVariable_8288e0(a1, 8u);
                    }
                    v4 = *(_QWORD*)(a2 + 32);
                    v7[0] = 9;
                    if (v4 != 0) {
                      if (((*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v4 +
                                                             48LL))(v4, v7) &
                           1) != 0) {
                        GameVariable_8288e0(a1, 9u);
                      }
                      v4 = *(_QWORD*)(a2 + 32);
                      v7[0] = 10;
                      if (v4 != 0) {
                        if (((*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v4 +
                                                               48LL))(v4, v7) &
                             1) != 0) {
                          GameVariable_8288e0(a1, 0xAu);
                        }
                        v4 = *(_QWORD*)(a2 + 32);
                        v7[0] = 11;
                        if (v4 != 0) {
                          if (((*(__int64 (**)(__int64, _BYTE*))(
                                   *(_QWORD*)v4 + 48LL))(v4, v7) &
                               1) != 0) {
                            GameVariable_8288e0(a1, 0xBu);
                          }
                          v4 = *(_QWORD*)(a2 + 32);
                          v7[0] = 12;
                          if (v4 != 0) {
                            if (((*(__int64 (**)(__int64, _BYTE*))(
                                     *(_QWORD*)v4 + 48LL))(v4, v7) &
                                 1) != 0) {
                              GameVariable_8288e0(a1, 0xCu);
                            }
                            v4 = *(_QWORD*)(a2 + 32);
                            v7[0] = 13;
                            if (v4 != 0) {
                              if (((*(__int64 (**)(__int64, _BYTE*))(
                                       *(_QWORD*)v4 + 48LL))(v4, v7) &
                                   1) != 0) {
                                GameVariable_8288e0(a1, 0xDu);
                              }
                              v4 = *(_QWORD*)(a2 + 32);
                              v7[0] = 14;
                              if (v4 != 0) {
                                if (((*(__int64 (**)(__int64, _BYTE*))(
                                         *(_QWORD*)v4 + 48LL))(v4, v7) &
                                     1) != 0) {
                                  GameVariable_8288e0(a1, 0xEu);
                                }
                                v4 = *(_QWORD*)(a2 + 32);
                                v7[0] = 15;
                                if (v4 != 0) {
                                  if (((*(__int64 (**)(__int64, _BYTE*))(
                                           *(_QWORD*)v4 + 48LL))(v4, v7) &
                                       1) != 0) {
                                    GameVariable_8288e0(a1, 0xFu);
                                  }
                                  v4 = *(_QWORD*)(a2 + 32);
                                  v7[0] = 16;
                                  if (v4 != 0) {
                                    if (((*(__int64 (**)(__int64, _BYTE*))(
                                             *(_QWORD*)v4 + 48LL))(v4, v7) &
                                         1) != 0) {
                                      GameVariable_8288e0(a1, 0x10u);
                                    }
                                    v4 = *(_QWORD*)(a2 + 32);
                                    v7[0] = 17;
                                    if (v4 != 0) {
                                      if (((*(__int64 (**)(__int64, _BYTE*))(
                                               *(_QWORD*)v4 + 48LL))(v4, v7) &
                                           1) != 0) {
                                        GameVariable_8288e0(a1, 0x11u);
                                      }
                                      v4 = *(_QWORD*)(a2 + 32);
                                      v7[0] = 18;
                                      if (v4 != 0) {
                                        result =
                                            (*(__int64 (**)(__int64, _BYTE*))(
                                                *(_QWORD*)v4 + 48LL))(v4, v7);
                                        if ((result & 1) != 0) {
                                          return GameVariable_8288e0(a1, 0x12u);
                                        }
                                        return result;
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
              }
            }
          }
        }
      }
    }
  }
  GameRoutine_60a310(v4, a2, a3);
}

__int64 GameVariable_828dc0(__int64 a1, __int64 a2, int a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 i;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v23;

  v5 = game_GameVariableTable_Find(a1, a2);
  v9 = v5;
  if (v5 != 0) {
    v10 = *(unsigned int*)(v5 + 20);
    v11 = *(unsigned int*)(v5 + 24);
    v12 = *(unsigned int*)(v5 + 32);
    v13 = (int)v10;
    v14 = *(_DWORD*)(v5 + 32);
    if (GameData_1b45b5e[*(unsigned __int8*)(v5 + 17)] == 1) {
      v15 = v12 + a3;
      if (v15 < v11) {
        LODWORD(v11) = v12 + a3;
      }
      if (v15 >= v10) {
        LODWORD(v13) = v11;
      }
      if (v14 != (_DWORD)v13) {
        *(_DWORD*)(v5 + 32) = v13;
        if ((*(_BYTE*)(a1 + 3932768) & 0xAE) == 0 && GameData_22400f8 != 0) {
          GameRoutine_12274e0(GameData_22400f8, v5);
        }
        v17 = *(_QWORD*)(v9 + 88);
        for (i = *(_QWORD*)(v9 + 96); v17 != i; v17 += 48) {
          v23 = v9;
          v18 = *(_QWORD*)(v17 + 32);
          if (v18 == 0) {
            goto LABEL_30;
          }
          (*(void (**)(__int64, __int64*))(*(_QWORD*)v18 + 48LL))(v18, &v23);
        }
      LABEL_28:
        v8 = 1;
        return (v9 != 0) & (unsigned __int8)v8;
      }
    }
    else {
      v19 = *(_DWORD*)(v5 + 24);
      if ((int)v12 + (__int64)a3 < (int)v11) {
        v19 = v14 + a3;
      }
      if ((int)v12 + (__int64)a3 >= v13) {
        LODWORD(v13) = v19;
      }
      if (v14 != (_DWORD)v13) {
        *(_DWORD*)(v5 + 32) = v13;
        if ((*(_BYTE*)(a1 + 3932768) & 0xAE) == 0 && GameData_22400f8 != 0) {
          GameRoutine_12274e0(GameData_22400f8, v5);
        }
        v21 = *(_QWORD*)(v9 + 88);
        v20 = *(_QWORD*)(v9 + 96);
        if (v20 != v21) {
          while (1) {
            v23 = v9;
            v18 = *(_QWORD*)(v21 + 32);
            if (v18 == 0) {
              break;
            }
            (*(void (**)(__int64, __int64*))(*(_QWORD*)v18 + 48LL))(v18, &v23);
            v21 += 48;
            if (v21 == v20) {
              goto LABEL_28;
            }
          }
        LABEL_30:
          GameRoutine_60a310(v18, v6, v7);
        }
        goto LABEL_28;
      }
    }
    v8 = 0;
  }
  return (v9 != 0) & (unsigned __int8)v8;
}

__int64 GameVariable_828f50(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 (*v3)(_QWORD);
  __int64 v4;
  _QWORD* v5;

  v2 = game_GameVariableTable_Find(*(_QWORD*)(a1 + 8), a2);
  if (v2 == 0) {
    return 1;
  }
  v3 = *(__int64 (**)(_QWORD))(v2 + 72);
  v4 = *(_QWORD*)(v2 + 80);
  v5 = (_QWORD*)(v2 + (v4 >> 1));
  if ((v4 & 1) != 0) {
    v3 = *(__int64 (**)(_QWORD))((char*)v3 + *v5);
  }
  return v3(v5);
}

_QWORD* GameVariable_828fa0(__int64 a1, unsigned int a2, unsigned __int64* a3,
                            int a4)
{
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  _QWORD* result;
  __int64 v16;
  __int64 v17;
  int v18;
  _QWORD* v19;
  __int64 i;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;

  v4 = *a3;
  if (*a3 == 0) {
    return GameVariable_826e40(a1, a2, a3, a4, 0, 0, 99999, 0);
  }
  v5 = *(_QWORD*)(a1 + 8);
  v6 = *(_QWORD*)(v5 + 16);
  if (v6 == 0 || *(_QWORD*)(v5 + 32) == 0) {
    return GameVariable_826e40(a1, a2, a3, a4, 0, 0, 99999, 0);
  }
  v8 = v6 - 1;
  if ((v6 & (v6 - 1)) != 0) {
    v9 = *a3;
    if (v4 >= v6) {
      v9 = v4 % v6;
    }
  }
  else {
    v9 = v8 & v4;
  }
  v10 = *(_QWORD**)(*(_QWORD*)(v5 + 8) + 8 * v9);
  if (v10 == nullptr) {
    return GameVariable_826e40(a1, a2, a3, a4, 0, 0, 99999, 0);
  }
  v11 = (_QWORD*)*v10;
  if (v11 == nullptr) {
    return GameVariable_826e40(a1, a2, a3, a4, 0, 0, 99999, 0);
  }
  if ((v6 & v8) == 0) {
    while (1) {
      v13 = v11[1];
      if (v4 == v13) {
        if (v11[2] == v4) {
          goto LABEL_26;
        }
      }
      else if ((v13 & v8) != v9) {
        return GameVariable_826e40(a1, a2, a3, a4, 0, 0, 99999, 0);
      }
      v11 = (_QWORD*)*v11;
      if (v11 == nullptr) {
        return GameVariable_826e40(a1, a2, a3, a4, 0, 0, 99999, 0);
      }
    }
  }
  while (1) {
    v12 = v11[1];
    if (v4 == v12) {
      break;
    }
    if (v12 >= v6) {
      v12 %= v6;
    }
    if (v12 != v9) {
      return GameVariable_826e40(a1, a2, a3, a4, 0, 0, 99999, 0);
    }
  LABEL_15:
    v11 = (_QWORD*)*v11;
    if (v11 == nullptr) {
      return GameVariable_826e40(a1, a2, a3, a4, 0, 0, 99999, 0);
    }
  }
  if (v11[2] != v4) {
    goto LABEL_15;
  }
LABEL_26:
  result = (_QWORD*)game_GameVariableTable_Find(*(_QWORD*)(a1 + 8), a3);
  if (result != nullptr) {
    v18 = a4;
    v19 = result;
    if (*((_DWORD*)result + 8) != v18) {
      *((_DWORD*)result + 8) = v18;
      if ((*(_BYTE*)(v5 + 3932768) & 0xAE) == 0) {
        result = (_QWORD*)GameData_22400f8;
        if (GameData_22400f8 != 0) {
          result = (_QWORD*)GameRoutine_12274e0(GameData_22400f8, v19);
        }
      }
      v21 = v19[11];
      for (i = v19[12]; v21 != i; v21 += 48) {
        v23 = v19;
        v22 = *(_QWORD*)(v21 + 32);
        if (v22 == 0) {
          GameRoutine_60a310(0, v16, v17);
        }
        result = (_QWORD*)(*(__int64 (**)(__int64, _QWORD**))(*(_QWORD*)v22 +
                                                              48LL))(v22, &v23);
      }
    }
  }
  return result;
}

_QWORD* game_GameVariable_Impl_Push(_QWORD* result, __int64 a2,
                                    signed __int64 a3)
{
  _QWORD* v3;
  _QWORD* v4;
  char* v5;
  char* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  bool v12;
  unsigned __int64 v13;
  __int64 v14;
  char* v15;
  char* v16;
  _QWORD* v17;
  _QWORD* v18;
  char* v19;
  char* v20;
  char* v21;
  signed __int64 v22;
  __int64 v23;
  char* v24;
  unsigned __int64 v25;
  _QWORD* v26;
  __int64 v27;
  char* v28;
  char* v29;
  __int64* v30;
  char* v31;
  char* v32;
  unsigned __int64 v33;
  _QWORD* v34;
  __int64 v35;
  char* v36;
  char* v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  signed __int64 v41;
  bool v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  signed __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  signed __int64 v54;
  char* v55;
  _QWORD* v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  _QWORD* v63;
  __int64** v64;
  __int64* v65;
  __int64* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  signed __int64 v73;
  unsigned __int64 v74;
  _QWORD* v75;
  __int64* v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  _QWORD* v81;
  _QWORD v82[4];
  _QWORD* v83;
  __int64 v84;

  v3 = result + 491520;
  v4 = result;
  v5 = (char*)result[491609];
  v6 = (char*)result[491608];
  v7 = v5 - v6;
  v8 = (v5 - v6) >> 3;
  if (v5 == v6) {
    v9 = 0;
  }
  else {
    v9 = 102 * v8 - 1;
  }
  v10 = result[491611];
  v11 = result[491612] + v10;
  if (v9 == v11) {
    v12 = v10 >= 0x66;
    v13 = v10 - 102;
    if (v12) {
      result[491611] = v13;
      v14 = *(_QWORD*)v6;
      result[491608] = v6 + 8;
      v82[0] = v14;
    }
    else {
      v15 = (char*)result[491610];
      v16 = (char*)result[491607];
      if (v7 >= v15 - v16) {
        v81 = result;
        if (v15 == v16) {
          v25 = 1;
        }
        else {
          v25 = (v15 - v16) >> 2;
        }
        if (v25 >> 61 == 0) {
          v26 = (_QWORD*)fw_memory_g_heap_manager_ptr;
          v27 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v25, 16, 0);
          v28 = (char*)(v27 + v7);
          v29 = (char*)(v27 + 8 * v25);
          result = (_QWORD*)fw_memory_HeapManager_Allocate(*v26, 4080, 16, 0);
          if (v7 == 8 * v25) {
            if (v5 == v6) {
              v34 = result;
              v30 = (__int64*)fw_memory_g_heap_manager_ptr;
              v28 = (char*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
              v29 = v28 + 8;
              v35 = 128;
              if (*(_QWORD*)(*v30 + 200) == 0) {
                v35 = 56;
              }
              nn_mem_StandardAllocator_Free(*v30 + v35, v27);
              result = v34;
              v5 = (char*)v3[89];
              v6 = (char*)v3[88];
              v27 = (__int64)v28;
            }
            else {
              v30 = (__int64*)fw_memory_g_heap_manager_ptr;
              v28 -= 8 * ((v8 + 1 + ((unsigned __int64)(v8 + 1) >> 63)) >> 1);
            }
          }
          else {
            v30 = &fw_memory_g_heap_manager;
          }
          v4 = v81;
          *(_QWORD*)v28 = result;
          v36 = v28 + 8;
          if (v5 != v6) {
            while (1) {
              if (v28 == (char*)v27) {
                if (v36 >= v29) {
                  if (v29 == v28) {
                    v43 = 1;
                  }
                  else {
                    v43 = (v29 - v28) >> 2;
                  }
                  if (v43 >> 61 != 0) {
                    goto LABEL_97;
                  }
                  v44 = fw_memory_HeapManager_Allocate(*v30, 8 * v43, 16, 0);
                  v45 = v44;
                  v39 = (char*)(v44 + ((2 * v43 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                  v46 = v36 - v28;
                  v42 = v36 == v28;
                  v36 = v39;
                  if (!v42) {
                    v36 = &v39[v46];
                    v47 =
                        (_QWORD*)(v44 + ((2 * v43 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                    do {
                      v48 = *(_QWORD*)v28;
                      v28 += 8;
                      v46 -= 8LL;
                      *v47++ = v48;
                    } while (v46 != 0);
                  }
                  v29 = (char*)(v44 + 8 * v43);
                  v49 = 128;
                  if (*(_QWORD*)(*v30 + 200) == 0) {
                    v49 = 56;
                  }
                  result =
                      (_QWORD*)nn_mem_StandardAllocator_Free(*v30 + v49, v27);
                  v27 = v45;
                }
                else {
                  v41 = v36 - v28;
                  a3 = v36 - v28;
                  v42 = v36 == v28;
                  v36 +=
                      8 *
                      ((((v29 - v36) >> 3) + 1 +
                        ((unsigned __int64)(((v29 - v36) >> 3) + 1) >> 63)) >>
                       1);
                  v39 = &v36[-v41];
                  if (!v42) {
                    result = (_QWORD*)memmove(&v36[-v41], v28, a3);
                  }
                }
              }
              else {
                v39 = v28;
              }
              v40 = *((_QWORD*)v5 - 1);
              v5 -= 8;
              *((_QWORD*)v39 - 1) = v40;
              v37 = v39 - 8;
              v28 = v37;
              if (v5 == (char*)v3[88]) {
                goto LABEL_31;
              }
            }
          }
          v37 = v28;
        LABEL_31:
          a2 = v3[87];
          v3[87] = v27;
          v3[88] = v37;
          v3[89] = v36;
          v3[90] = v29;
          if (a2 != 0) {
            v38 = 128;
            if (*(_QWORD*)(*v30 + 200) == 0) {
              v38 = 56;
            }
            result = (_QWORD*)nn_mem_StandardAllocator_Free(*v30 + v38, a2);
          }
          goto LABEL_67;
        }
        goto LABEL_97;
      }
      v17 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      result = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4080, 16, 0);
      v18 = result;
      if (v15 != v5) {
        v19 = (char*)v3[89];
        if (v19 != (char*)v3[90]) {
        LABEL_66:
          *(_QWORD*)v19 = v18;
          v3[89] += 8LL;
          goto LABEL_67;
        }
        v20 = (char*)v3[88];
        v21 = (char*)v3[87];
        if (v20 > v21) {
          v22 = v19 - v20;
          v23 = ((v20 - v21) >> 3) + 1;
          v24 = &v20[-8 * (v23 / 2)];
          if (v22 != 0) {
            result = (_QWORD*)memmove(&v20[-8 * (v23 / 2)], v3[88], v22);
            v20 = (char*)v3[88];
          }
          v19 = &v24[v22];
          v3[89] = v19;
          v3[88] = &v20[8 * (v23 / -2)];
          goto LABEL_66;
        }
        if (v19 == v21) {
          v53 = 1;
        }
        else {
          v53 = (v19 - v21) >> 2;
        }
        if (v53 >> 61 == 0) {
          result =
              (_QWORD*)fw_memory_HeapManager_Allocate(*v17, 8 * v53, 16, 0);
          v54 = v19 - v20;
          v42 = v19 == v20;
          v55 = (char*)&result[v53 >> 2];
          v19 = v55;
          if (!v42) {
            v19 = &v55[v54];
            v56 = &result[v53 >> 2];
            do {
              v57 = *(_QWORD*)v20;
              v20 += 8;
              v54 -= 8LL;
              *v56++ = v57;
            } while (v54 != 0);
          }
          v3[87] = result;
          v3[88] = v55;
          v3[89] = v19;
          v3[90] = &result[v53];
          if (v21 != nullptr) {
            v58 = 128;
            if (*(_QWORD*)(*v17 + 200LL) == 0) {
              v58 = 56;
            }
            result = (_QWORD*)nn_mem_StandardAllocator_Free(*v17 + v58, v21);
            v19 = (char*)v3[89];
          }
          goto LABEL_66;
        }
      LABEL_97:
        GameRoutine_60a210(result);
      }
      v31 = (char*)v3[88];
      v32 = (char*)v3[87];
      if (v31 == v32) {
        v50 = (char*)v3[89];
        v51 = v3[90];
        if ((unsigned __int64)v50 >= v51) {
          v69 = v51 - (_QWORD)v31;
          v42 = v69 == 0;
          v70 = v69 >> 2;
          if (v42) {
            v71 = 1;
          }
          else {
            v71 = v70;
          }
          if (v71 >> 61 != 0) {
            goto LABEL_97;
          }
          v72 = fw_memory_HeapManager_Allocate(*v17, 8 * v71, 16, 0);
          v73 = v50 - v31;
          v33 = v72 + ((2 * v71 + 6) & 0xFFFFFFFFFFFFFFF8LL);
          v74 = v33;
          if (v50 != v31) {
            v74 = v33 + v73;
            v75 = (_QWORD*)(v72 + ((2 * v71 + 6) & 0xFFFFFFFFFFFFFFF8LL));
            v76 = (__int64*)v31;
            do {
              v77 = *v76++;
              v73 -= 8LL;
              *v75++ = v77;
            } while (v73 != 0);
          }
          v3[87] = v72;
          v3[88] = v33;
          v3[89] = v74;
          v3[90] = v72 + 8 * v71;
          if (v31 != nullptr) {
            v78 = 128;
            if (*(_QWORD*)(*v17 + 200LL) == 0) {
              v78 = 56;
            }
            nn_mem_StandardAllocator_Free(*v17 + v78, v32);
            v33 = v3[88];
          }
        }
        else {
          v52 = (((__int64)(v51 - (_QWORD)v50) >> 3) + 1) / 2;
          v33 = (unsigned __int64)&v31[8 * v52];
          if (v50 != v31) {
            memmove(&v31[8 * v52], v3[88], v50 - v31);
            v50 = (char*)v3[89];
          }
          v3[88] = v33;
          v3[89] = &v50[8 * v52];
        }
      }
      else {
        v33 = v3[88];
      }
      *(_QWORD*)(v33 - 8) = v18;
      v79 = v3[88];
      v3[88] = v79 - 8;
      v80 = *(_QWORD*)(v79 - 8);
      v3[88] = v79;
      v82[0] = v80;
    }
    result = (_QWORD*)GameRoutine_82fc00(v3 + 87, v82);
  LABEL_67:
    v6 = (char*)v3[88];
    v11 = v3[92] + v3[91];
  }
  v59 = *(_QWORD*)&v6[8 * (v11 / 0x66)] + 40 * (v11 % 0x66);
  *(_QWORD*)(v59 + 16) = 0;
  *(_QWORD*)(v59 + 24) = 0;
  *(_QWORD*)v59 = 0;
  *(_QWORD*)(v59 + 8) = 0;
  *(_DWORD*)(v59 + 32) = 1065353216;
  v60 = v3[92];
  v3[92] = v60 + 1;
  if (v60 == -1) {
    return result;
  }
  v61 = 0;
  v62 = *(_QWORD*)(v3[88] + 8 * ((v3[91] + v60) / 0x66uLL)) +
        40 * ((v3[91] + v60) % 0x66uLL);
  v82[0] = GameData_1f9ecc0;
  v82[1] = v62;
  v83 = v82;
  v63 = v4 + 491521;
  do {
    if ((unsigned int)(unsigned __int8)v61 - 4 < 0xB ||
        (unsigned int)(unsigned __int8)v61 - 1 <= 1) {
      v64 = (__int64**)&v63[3 * v61];
      v65 = *v64;
      v66 = v64[1];
      if (*v64 != v66) {
        do {
          v67 = *v65++;
          v84 = v67;
          if (v83 == nullptr) {
            GameRoutine_60a310(0, a2, a3);
          }
          (*(void (**)(_QWORD*, __int64*))(*v83 + 48LL))(v83, &v84);
        } while (v65 != v66);
      }
    }
    ++v61;
  } while (v61 != 19);
  result = v83;
  if (v83 == v82) {
    v68 = 32;
  }
  else {
    if (v83 == nullptr) {
      return result;
    }
    v68 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(void*))(*v83 + v68))(v83);
}

_QWORD* game_GameVariable_Impl_Pop(_QWORD* result, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64** v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  bool v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD v29[4];
  _QWORD* v30;
  __int64 v31;

  v3 = result + 491520;
  v4 = result[491612];
  if (v4 == 0) {
    v13 = -1;
    goto LABEL_18;
  }
  v5 = 0;
  v6 = *(_QWORD*)(result[491608] + 8 * ((v4 + result[491611] - 1) / 0x66uLL)) +
       40 * ((v4 + result[491611] - 1) % 0x66uLL);
  v29[0] = GameData_1f9ed50;
  v29[1] = v6;
  v30 = v29;
  v7 = result + 491521;
  do {
    if ((unsigned int)(unsigned __int8)v5 - 4 < 0xB ||
        (unsigned int)(unsigned __int8)v5 - 1 <= 1) {
      v8 = (__int64**)&v7[3 * v5];
      v9 = *v8;
      v10 = v8[1];
      if (*v8 != v10) {
        do {
          v11 = *v9++;
          v31 = v11;
          if (v30 == nullptr) {
            GameRoutine_60a310(0, a2, a3);
          }
          (*(void (**)(_QWORD*, __int64*))(*v30 + 48LL))(v30, &v31);
        } while (v9 != v10);
      }
    }
    ++v5;
  } while (v5 != 19);
  result = v30;
  if (v30 == v29) {
    v12 = 32;
    goto LABEL_16;
  }
  if (v30 != nullptr) {
    v12 = 40;
  LABEL_16:
    result = (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*v30 + v12))(v30, a2);
  }
  v13 = v3[92] - 1LL;
LABEL_18:
  v14 = (__int64*)(*(_QWORD*)(v3[88] + 8 * ((v13 + v3[91]) / 0x66uLL)) +
                   40 * ((v13 + v3[91]) % 0x66uLL));
  v15 = (_QWORD*)v14[2];
  v16 = fw_memory_g_heap_manager_ptr;
  if (v15 != nullptr) {
    do {
      v17 = (_QWORD*)*v15;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
        v18 = 128;
      }
      else {
        v18 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v18, v15);
      v15 = v17;
    } while (v17 != nullptr);
  }
  v19 = *v14;
  *v14 = 0;
  if (v19 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
      v20 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v20, v19);
  }
  v21 = v3[89];
  v22 = v3[88];
  v23 = v21 - v22;
  v24 = v21 == v22;
  v25 = v3[92];
  v26 = 102 * (v23 >> 3) - 1;
  if (v24) {
    v26 = 0;
  }
  v3[92] = v25 - 1;
  if ((unsigned __int64)(v26 - (v25 + v3[91]) + 1) >= 0xCC) {
    v27 = *(_QWORD*)(v21 - 8);
    if (v27 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
        v28 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v28, v27);
      v21 = v3[89];
    }
    v3[89] = v21 - 8;
  }
  return result;
}

__int64 game_GameVariable_Deserialize(__int64 a1, __int64* a2, __int64 a3)
{
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _DWORD v15[8];
  __int64 v16;

  v6 = game_HashString32("Variable");
  v7 = *a2;
  v15[0] = v6;
  if (((*(__int64 (**)(__int64*, _DWORD*))(v7 + 16))(a2, v15) & 1) != 0) {
    v8 = *((int*)a2 + 5);
    *((_DWORD*)a2 + 5) = v8 + 1;
    v9 = a2[1];
    v10 = *(unsigned __int8*)(v9 + v8);
    if (*(_BYTE*)(v9 + v8) != 0) {
      v11 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
      *(_DWORD*)(v11 + 16) = v10;
      *(_QWORD*)(v11 + 24) = a2;
      *(_QWORD*)(v11 + 32) = a3;
      v16 = v11;
      *(_QWORD*)v11 = GameData_1f9fbc0;
      *(_QWORD*)(v11 + 8) = a1;
      GameVariable_827530((__int64)v15, v12, v13);
      (*(void (**)(__int64))(*(_QWORD*)v11 + 40LL))(v11);
      Impl_829ca0(*(_QWORD*)(a1 + 8));
    }
  }
  return (*(__int64 (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
}

__int64 GameVariable_829dc0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 (***v7)();
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  __int64* v17;
  __int64* v18;
  __int64* v19;
  __int64* v20;
  __int64* v21;
  __int64* v22;
  __int64* v23;
  __int64* v24;
  __int64* v25;
  __int64* v26;
  __int64* v27;
  __int64* v28;
  __int64* v29;
  __int64* v30;
  __int64* v31;
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
  __int64* v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  __int64* v50;
  __int64* v51;
  __int64 (***v52)();
  __int64 v53;
  __int64 v54;
  __int64*** v55;
  __int64** v56;
  __int64** v57;
  __int64* v58;
  __int64* v59;
  int v60;
  __int64 v61;
  __int64 v62;
  __int64* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64* v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  _QWORD* v78;
  __int64* v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  char* v88;
  __int64 v89;
  char* v90;
  char* v91;
  char v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 i;
  __int64 v98;
  unsigned __int64* v99;
  unsigned __int64* j;
  __int64 v101;
  __int64* v102;
  __int64* v103;
  __int64 v104;
  __int64* v105;
  __int64* v106;
  unsigned __int64* v107;
  __int64* v108;
  __int64 v109;
  __int64* v110;
  __int64* v111;
  __int64 (***v112)();
  __int64 v113;
  __int64 v114;
  __int64* v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64* v121;
  __int64* v122;
  __int64 v123;
  __int64 v124;
  __int64* v125;
  __int64 v126;
  __int64* v127;
  __int64* v128;
  __int64* v129;
  __int64 v130;
  __int64 v131;
  __int64 k;
  __int64** v133;
  __int64* v134;
  __int64* v135;
  __int64 v136;
  _QWORD* v137;
  unsigned __int64* v138;
  unsigned __int64* v139;
  unsigned int v140;
  __int64 v141;
  __int64 v142;
  _QWORD* v143;
  unsigned int v144;
  _QWORD* v145;
  unsigned __int64* v146;
  unsigned __int64* v147;
  unsigned int v148;
  __int64 v149;
  __int64 v150;
  _QWORD* v151;
  unsigned int v152;
  _QWORD* v153;
  unsigned __int64* v154;
  unsigned __int64* v155;
  unsigned int v156;
  __int64 v157;
  __int64 v158;
  _QWORD* v159;
  unsigned int v160;
  _QWORD* v161;
  unsigned __int64* v162;
  unsigned __int64* v163;
  unsigned int v164;
  __int64 v165;
  __int64 v166;
  _QWORD* v167;
  unsigned int v168;
  __int64 v169;
  __int64 v170;
  __int64* v171;
  __int64* v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  unsigned __int64 v176;
  _QWORD* v177;
  unsigned __int64 v178;
  unsigned __int64 v180;
  unsigned __int64 v181;
  _QWORD* v182;
  _QWORD* v183;
  unsigned __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  unsigned __int64 v188;
  _QWORD* v189;
  unsigned __int64 v190;
  unsigned __int64 v192;
  unsigned __int64 v193;
  _QWORD* v194;
  _QWORD* v195;
  unsigned __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 m;
  _BYTE* v200;
  char* v201;
  _QWORD* v202;
  void* v203;
  void* v204;
  void* v205;
  void* v206;
  void* v207;
  void* v208;
  void* v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64* v214;
  __int64 v215;
  __int64* v216;
  __int64* v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  __int64* v221;
  unsigned __int64* v222;
  __int64* v223;
  __int64 v224;
  __int64 v225;
  unsigned __int64* v226;
  unsigned __int64* v227;
  __int64 v228;
  _QWORD* v229;
  _QWORD* v230;
  unsigned __int64 v231;
  unsigned __int64 v232;
  _QWORD* v233;
  __int64 v234;
  __int64 v235;
  unsigned __int64 v236;
  unsigned __int64 v237;
  unsigned __int64 v238;
  __int64 v239;
  _QWORD* v240;
  char* v241;
  char* v242;
  __int64 v243;
  __int64 v244;
  char* v245;
  char* v246;
  __int64 v247;
  char* v248;
  unsigned __int64 v249;
  __int64 v250;
  __int64 (**v251)(__int64, __int64);
  unsigned __int64* v252;
  unsigned __int64* v253;
  __int64 v254;
  _QWORD* v255;
  _QWORD* v256;
  unsigned __int64 v257;
  unsigned __int64 v258;
  _QWORD* v259;
  __int64 v260;
  __int64 v261;
  unsigned __int64 v262;
  unsigned __int64 v263;
  unsigned __int64 v264;
  __int64 v265;
  _QWORD* v266;
  char* v267;
  char* v268;
  __int64 v269;
  __int64 v270;
  char* v271;
  char* v272;
  __int64 v273;
  char* v274;
  unsigned __int64 v275;
  __int64 v276;
  __int64 (**v277)(__int64, __int64);
  __int64 v278;
  __int64 n;
  __int64 v280;
  __int64 v281;
  __int64 (***v282)();
  __int64* v283;
  __int64 v284;
  __int64 v285;
  __int64 v286;
  __int64 v287;
  __int64* v288;
  unsigned __int64 v289;
  __int64 v290;
  __int64* v291;
  signed __int64 v292;
  bool v293;
  __int64* v294;
  __int64 v295;
  __int64 v296;
  __int64* v297;
  unsigned __int64 v298;
  __int64 v299;
  __int64* v300;
  signed __int64 v301;
  __int64* v302;
  __int64 v303;
  __int64 v304;
  __int64* v305;
  unsigned __int64 v306;
  __int64 v307;
  __int64* v308;
  signed __int64 v309;
  __int64* v310;
  __int64 v311;
  __int64 v312;
  __int64* v313;
  unsigned __int64 v314;
  __int64 v315;
  __int64* v316;
  signed __int64 v317;
  __int64* v318;
  __int64 v319;
  __int64 v320;
  __int64* v321;
  unsigned __int64 v322;
  __int64 v323;
  __int64* v324;
  signed __int64 v325;
  __int64* v326;
  __int64 v327;
  __int64 result;
  __int64 v329;
  __int64* v330;
  __int64* v331;
  unsigned __int64* v332;
  unsigned __int64* v333;
  __int64 v334;
  __int64 v335;
  __int64 v336;
  struct {
    _QWORD v337[4];
    _QWORD* v338;
  } v337_;
  struct {
    __int64 v339;
    char* v340;
    __int64 v341;
    char gap120_[8];
    __int64* v342;
  } v339_;
  struct {
    __int64 (**v343)();
    __int64* v344;
    char gap160_[16];
    __int64 (**v345)(__int64, __int64);
  } v343_;

  GameRoutine_82d5c0(a1, 0xFu);
  GameRoutine_82d5c0(a1, 0xCu);
  GameRoutine_82d5c0(a1, 4u);
  GameRoutine_82d5c0(a1, 7u);
  GameRoutine_82d5c0(a1, 9u);
  GameRoutine_82d5c0(a1, 0xAu);
  GameRoutine_82d5c0(a1, 5u);
  GameRoutine_82d5c0(a1, 6u);
  GameRoutine_82d5c0(a1, 0xDu);
  GameRoutine_82d5c0(a1, 0x10u);
  v2 = game_9a28e0(0);
  GameVariable_826e40_alt1(a1, 0, (unsigned __int64*)v2, 1, 0, 0, 99999, 0);
  v343_.v344 = (__int64*)&GameData_1ac6a41;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ac6a41);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1a854c2;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1a854c2);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1af12de;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1af12de);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1ae9564;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ae9564);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1aced17;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1aced17);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1a8d213;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1a8d213);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1aced1c;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1aced1c);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1ad6545;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ad6545);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1abb9fd;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1abb9fd);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1aafdec;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1aafdec);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1aced27;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1aced27);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1ac3020;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ac3020);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1af12e3;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1af12e3);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1aced32;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1aced32);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v345 = (__int64 (**)(__int64, __int64))&v343_.v343;
  v343_.v343 = GameData_1f9edd0;
  v343_.v344 = (__int64*)a1;
  GameConst_7f8610((__int64)&v343_.v343);
  if (v343_.v345 == (__int64 (**)(__int64, __int64))&v343_.v343) {
    v3 = 32;
  }
  else {
    if (v343_.v345 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))((char*)*v343_.v345 + v3))((__int64)v343_.v345);
LABEL_6:
  v343_.v344 = (__int64*)&GameData_1a9c804;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1a9c804);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1aafe28;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1aafe28);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1abf8b7;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1abf8b7);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1ab397f;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ab397f);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1abf8bc;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1abf8bc);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1ad6550;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ad6550);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1ae5792;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ae5792);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1a891bb;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1a891bb);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1ae1d8f;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ae1d8f);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1aabf8a;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1aabf8a);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1aa828d;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1aa828d);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1abba08;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1abba08);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1abba0e;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1abba0e);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1abba14;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1abba14);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1ae9569;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ae9569);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1addf8f;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1addf8f);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1ac6a36;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ac6a36);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1ad2914;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ad2914);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1acaaf4;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1acaaf4);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1abf8c1;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1abf8c1);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1a9c809;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1a9c809);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1afcd20;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1afcd20);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1ae1d94;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ae1d94);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1aafe2d;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1aafe2d);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1ae5797;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ae5797);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1aed6f3;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1aed6f3);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1aced3d;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1aced3d);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1abf8cc;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1abf8cc);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1ab7cf6;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ab7cf6);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1af8d9e;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1af8d9e);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1aced48;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1aced48);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1a8d257;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1a8d257);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1af12ee;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1af12ee);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1af5041;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1af5041);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1a98bab;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1a98bab);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1abf8d7;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1abf8d7);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1af504c;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1af504c);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1ab7d01;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ab7d01);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1af5058;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1af5058);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)&v343_.v343,
                           &GameData_21ed0a8, 0, 1);
  v343_.v344 = (__int64*)&GameData_1ad291f;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ad291f);
  GameVariable_826e40_alt1(a1, 0, (unsigned __int64*)&v343_.v343, 0, 0, 0,
                           99999, 0);
  v343_.v344 = (__int64*)&GameData_1a94bf5;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1a94bf5);
  GameVariable_826e40_alt1(a1, 0, (unsigned __int64*)&v343_.v343, 0, 0, 0,
                           99999, 0);
  v343_.v344 = (__int64*)&GameData_1a854c9;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1a854c9);
  GameVariable_826e40_alt1(a1, 0, (unsigned __int64*)&v343_.v343, 0, 0, 0,
                           99999, 0);
  v343_.v344 = (__int64*)&GameData_1a94c03;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1a94c03);
  GameVariable_826e40_alt1(a1, 0, (unsigned __int64*)&v343_.v343, 0, 0, 0,
                           99999, 0);
  v343_.v344 = (__int64*)&GameData_1ac6a48;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ac6a48);
  GameVariable_826e40_alt1(a1, 0, (unsigned __int64*)&v343_.v343, 0, 0, 0,
                           99999, 0);
  v343_.v344 = (__int64*)&GameData_1aa829e;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1aa829e);
  GameVariable_826e40_alt1(a1, 0, (unsigned __int64*)&v343_.v343, 0, 0, 0,
                           99999, 0);
  v343_.v344 = (__int64*)&GameData_1ae1da0;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ae1da0);
  GameVariable_826e40_alt1(a1, 0, (unsigned __int64*)&v343_.v343, 0, 0, 0,
                           99999, 0);
  v343_.v344 = (__int64*)&GameData_1a90c5b;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1a90c5b);
  GameVariable_826e40_alt1(a1, 0, (unsigned __int64*)&v343_.v343, 0, 0, 0,
                           99999, 0);
  v343_.v344 = (__int64*)&GameData_1aafe39;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1aafe39);
  GameVariable_826e40_alt1(a1, 0, (unsigned __int64*)&v343_.v343, 0, 0, 0,
                           99999, 0);
  v343_.v344 = (__int64*)&GameData_1a9c814;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1a9c814);
  GameVariable_826e40_alt1(a1, 0, (unsigned __int64*)&v343_.v343, 0, 0, 0,
                           99999, 0);
  v343_.v344 = (__int64*)&GameData_1af12f9;
  v343_.v343 = (__int64 (**)(void))game_HashString((__int64)&GameData_1af12f9);
  GameVariable_826e40_alt1(a1, 0, (unsigned __int64*)&v343_.v343, 0, 0, 0,
                           99999, 0);
  v343_.v345 = (__int64 (**)(__int64, __int64))&v343_.v343;
  v343_.v343 = GameData_1f9ee50;
  v343_.v344 = (__int64*)a1;
  GameConst_7f8610((__int64)&v343_.v343);
  if (v343_.v345 == (__int64 (**)(__int64, __int64))&v343_.v343) {
    v4 = 32;
  }
  else {
    if (v343_.v345 == nullptr) {
      goto LABEL_11;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))((char*)*v343_.v345 + v4))((__int64)v343_.v345);
LABEL_11:
  v343_.v345 = (__int64 (**)(__int64, __int64))&v343_.v343;
  v343_.v343 = GameData_1f9eed0;
  v343_.v344 = (__int64*)a1;
  GameConst_7f8610((__int64)&v343_.v343);
  if (v343_.v345 == (__int64 (**)(__int64, __int64))&v343_.v343) {
    v5 = 32;
  }
  else {
    if (v343_.v345 == nullptr) {
      goto LABEL_16;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))((char*)*v343_.v345 + v5))((__int64)v343_.v345);
LABEL_16:
  v343_.v345 = (__int64 (**)(__int64, __int64))&v343_.v343;
  v343_.v343 = GameData_1f9ef50;
  v343_.v344 = (__int64*)a1;
  GameVariable_826e40_alt1(a1, 4u, (unsigned __int64*)&GameData_2229a48, 0, 0,
                           0, -1, 2);
  if (v343_.v345 == nullptr) {
    goto LABEL_499;
  }
  (*((void (**)(__int64 (**)(__int64, __int64), __int64*))*v343_.v345 + 6))(
      v343_.v345, &GameData_2229a58);
  if (v343_.v345 == (__int64 (**)(__int64, __int64))&v343_.v343) {
    v6 = 32;
  }
  else {
    if (v343_.v345 == nullptr) {
      goto LABEL_22;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))((char*)*v343_.v345 + v6))((__int64)v343_.v345);
LABEL_22:
  v7 = &v343_.v343;
  v343_.v343 = GameData_1f9efd0;
  v343_.v344 = (__int64*)a1;
  v343_.v345 = (__int64 (**)(__int64, __int64))&v343_.v343;
  v8 = *(_QWORD*)(*(_QWORD*)GameData_212c9a0[0] + 64LL);
  v9 = *(_QWORD*)(*(_QWORD*)GameData_212c9a0[0] + 72LL);
  if (v8 == v9) {
  LABEL_32:
    v13 = 4;
  LABEL_33:
    ((__int64 (*)(__int64))(*v7)[v13])((__int64)v7);
    goto LABEL_34;
  }
  do {
    v10 = *(_QWORD*)(*(_QWORD*)v8 + 24LL);
    v11 = *(_QWORD*)(v10 + 48);
    v12 = *(_QWORD*)(v10 + 56);
    if (v12 != v11) {
      while (v343_.v345 != nullptr) {
        (*((void (**)(__int64 (**)(__int64, __int64), __int64))*v343_.v345 +
           6))(v343_.v345, v11);
        v11 += 16;
        if (v11 == v12) {
          goto LABEL_24;
        }
      }
    LABEL_499:
      GameRoutine_60a310_alt1();
    }
  LABEL_24:
    v8 += 8;
  } while (v8 != v9);
  v7 = (__int64 (***)(void))v343_.v345;
  if (v343_.v345 == (__int64 (**)(__int64, __int64))&v343_.v343) {
    goto LABEL_32;
  }
  if (v343_.v345 != nullptr) {
    v13 = 5;
    goto LABEL_33;
  }
LABEL_34:
  v343_.v343 = GameData_1f9f050;
  v343_.v344 = (__int64*)a1;
  v343_.v345 = (__int64 (**)(__int64, __int64))&v343_.v343;
  Situation_7671b0((__int64)&v343_.v343);
  if (v343_.v345 == (__int64 (**)(__int64, __int64))&v343_.v343) {
    v14 = 32;
  LABEL_38:
    (*(void (**)(__int64))((char*)*v343_.v345 + v14))((__int64)v343_.v345);
  }
  else if (v343_.v345 != nullptr) {
    v14 = 40;
    goto LABEL_38;
  }
  v15 = game_9a28e0(7);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)v15, &GameData_21ed0a8, 0,
                           1);
  v16 = game_9a28e0(8);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)v16, &GameData_21ed0a8, 0,
                           1);
  v17 = game_9a28e0(72);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)v17, &GameData_21ed0a8, 0,
                           1);
  v18 = game_9a28e0(73);
  GameVariable_827070_alt1(a1, 0, (unsigned __int64*)v18, &GameData_21ed0a8, 0,
                           1);
  v19 = game_9a28e0(50);
  GameVariable_827070_alt1(a1, 0xAu, (unsigned __int64*)v19, &GameData_21ed0a8,
                           0, 1);
  v20 = game_9a28e0(51);
  GameVariable_827070_alt1(a1, 0xAu, (unsigned __int64*)v20, &GameData_21ed0a8,
                           0, 1);
  v21 = game_9a28e0(52);
  GameVariable_827070_alt1(a1, 0xAu, (unsigned __int64*)v21, &GameData_21ed0a8,
                           0, 1);
  v22 = game_9a28e0(53);
  GameVariable_827070_alt1(a1, 0xAu, (unsigned __int64*)v22, &GameData_21ed0a8,
                           0, 1);
  v23 = game_9a28e0(54);
  GameVariable_827070_alt1(a1, 0xAu, (unsigned __int64*)v23, &GameData_21ed0a8,
                           0, 1);
  v24 = game_9a28e0(55);
  GameVariable_827070_alt1(a1, 0xAu, (unsigned __int64*)v24, &GameData_21ed0a8,
                           0, 1);
  v25 = game_9a28e0(56);
  GameVariable_827070_alt1(a1, 0xAu, (unsigned __int64*)v25, &GameData_21ed0a8,
                           0, 1);
  v26 = game_9a28e0(57);
  GameVariable_827070_alt1(a1, 0xAu, (unsigned __int64*)v26, &GameData_21ed0a8,
                           0, 1);
  v27 = game_9a28e0(58);
  GameVariable_827070_alt1(a1, 0xAu, (unsigned __int64*)v27, &GameData_21ed0a8,
                           0, 1);
  v28 = game_9a28e0(59);
  GameVariable_827070_alt1(a1, 0xAu, (unsigned __int64*)v28, &GameData_21ed0a8,
                           0, 1);
  v29 = game_9a28e0(60);
  GameVariable_827070_alt1(a1, 0xAu, (unsigned __int64*)v29, &GameData_21ed0a8,
                           0, 1);
  v30 = game_9a28e0(61);
  GameVariable_827070_alt1(a1, 0xAu, (unsigned __int64*)v30, &GameData_21ed0a8,
                           0, 1);
  v31 = (__int64*)GameData_21c9a78;
  v32 = GameData_21c9a80;
  if (GameData_21c9a78 != GameData_21c9a80) {
    do {
      v33 = *v31++;
      GameVariable_827070_alt1(
          a1, 4u, (unsigned __int64*)(*(_QWORD*)(v33 + 24) + 1032LL),
          &GameData_21ed0a8, 0, 1);
    } while (v31 != (__int64*)v32);
    v31 = (__int64*)GameData_21c9a78;
    v32 = GameData_21c9a80;
  }
  if (v31 != (__int64*)v32) {
    do {
      v34 = *v31++;
      GameVariable_827070_alt1(
          a1, 4u, (unsigned __int64*)(*(_QWORD*)(v34 + 24) + 992LL),
          &GameData_21ed0a8, 0, 1);
    } while (v31 != (__int64*)v32);
    v31 = (__int64*)GameData_21c9a78;
    v32 = GameData_21c9a80;
  }
  if (v31 != (__int64*)v32) {
    do {
      v35 = *v31++;
      GameVariable_827070_alt1(
          a1, 9u, (unsigned __int64*)(*(_QWORD*)(v35 + 24) + 1152LL),
          &GameData_21ed0a8, 0, 1);
    } while (v31 != (__int64*)v32);
    v31 = (__int64*)GameData_21c9a78;
    v32 = GameData_21c9a80;
  }
  if (v31 != (__int64*)v32) {
    do {
      v36 = *v31++;
      GameVariable_827070_alt1(
          a1, 4u, (unsigned __int64*)(*(_QWORD*)(v36 + 24) + 1072LL),
          &GameData_21ed0a8, 0, 1);
    } while (v31 != (__int64*)v32);
    v31 = (__int64*)GameData_21c9a78;
    v32 = GameData_21c9a80;
  }
  if (v31 != (__int64*)v32) {
    do {
      v37 = *v31++;
      GameVariable_827070_alt1(
          a1, 4u, (unsigned __int64*)(*(_QWORD*)(v37 + 24) + 1112LL),
          &GameData_21ed0c0, 0, 1);
    } while (v31 != (__int64*)v32);
    v31 = (__int64*)GameData_21c9a78;
    v32 = GameData_21c9a80;
  }
  if (v31 != (__int64*)v32) {
    do {
      v38 = *v31++;
      GameVariable_827070_alt1(
          a1, 4u, (unsigned __int64*)(*(_QWORD*)(v38 + 24) + 1192LL),
          &GameData_21ed0a8, 0, 1);
    } while (v31 != (__int64*)v32);
    v31 = (__int64*)GameData_21c9a78;
    v32 = GameData_21c9a80;
  }
  if (v31 != (__int64*)v32) {
    do {
      v39 = *v31++;
      GameVariable_827070_alt1(
          a1, 4u, (unsigned __int64*)(*(_QWORD*)(v39 + 24) + 1232LL),
          &GameData_21ed0a8, 0, 1);
      GameVariable_827070_alt1(
          a1, 4u, (unsigned __int64*)(*(_QWORD*)(v39 + 24) + 1632LL),
          &GameData_21ed0a8, 0, 1);
    } while (v31 != (__int64*)v32);
    v31 = (__int64*)GameData_21c9a78;
    v32 = GameData_21c9a80;
  }
  if (v31 != (__int64*)v32) {
    do {
      v40 = *v31++;
      GameVariable_827070_alt1(
          a1, 4u, (unsigned __int64*)(*(_QWORD*)(v40 + 24) + 1312LL),
          &GameData_21ed0a8, 0, 1);
    } while (v31 != (__int64*)v32);
    v31 = (__int64*)GameData_21c9a78;
    v32 = GameData_21c9a80;
  }
  if (v31 != (__int64*)v32) {
    do {
      v41 = *v31++;
      GameVariable_827070_alt1(
          a1, 4u, (unsigned __int64*)(*(_QWORD*)(v41 + 24) + 1432LL),
          &GameData_21ed0a8, 0, 1);
    } while (v31 != (__int64*)v32);
    v31 = (__int64*)GameData_21c9a78;
    v32 = GameData_21c9a80;
  }
  if (v31 != (__int64*)v32) {
    do {
      v42 = *v31++;
      GameVariable_827070_alt1(
          a1, 4u, (unsigned __int64*)(*(_QWORD*)(v42 + 24) + 1392LL),
          &GameData_21ed0d8, 0, 1);
    } while (v31 != (__int64*)v32);
    v31 = (__int64*)GameData_21c9a78;
    v32 = GameData_21c9a80;
  }
  if (v31 != (__int64*)v32) {
    do {
      v43 = *v31++;
      GameVariable_826e40_alt1(
          a1, 4u, (unsigned __int64*)(*(_QWORD*)(v43 + 24) + 1472LL), 0, 0, 0,
          -1, 2);
    } while (v31 != (__int64*)v32);
    v31 = (__int64*)GameData_21c9a78;
    v32 = GameData_21c9a80;
  }
  if (v31 != (__int64*)v32) {
    do {
      v44 = *v31++;
      v45 = *(_QWORD*)(v44 + 24);
      v46 = game_9a6e00();
      GameVariable_827070_alt1(a1, 4u, (unsigned __int64*)(v45 + 1352), v46, 0,
                               1);
    } while (v31 != (__int64*)v32);
    v31 = (__int64*)GameData_21c9a78;
    v32 = GameData_21c9a80;
  }
  if (v31 != (__int64*)v32) {
    do {
      v47 = *v31++;
      GameVariable_826e40_alt1(
          a1, 0xAu, (unsigned __int64*)(*(_QWORD*)(v47 + 24) + 1552LL), 0, 0, 0,
          99999, 0);
    } while (v31 != (__int64*)v32);
    v31 = (__int64*)GameData_21c9a78;
    v32 = GameData_21c9a80;
  }
  while (v31 != (__int64*)v32) {
    v48 = *v31++;
    GameVariable_826e40_alt1(a1, 0xAu,
                             (unsigned __int64*)(*(_QWORD*)(v48 + 24) + 1592LL),
                             0, 0, 0, 99999, 0);
  }
  v49 = *(__int64**)(*(_QWORD*)GameData_212c970[0] + 64LL);
  v50 = *(__int64**)(*(_QWORD*)GameData_212c970[0] + 72LL);
  if (v49 != v50) {
    v51 = GameData_212c650[0];
    while (1) {
      v54 = *v49;
      v343_.v345 = (__int64 (**)(__int64, __int64))&v343_.v343;
      v343_.v343 = GameData_1f9f0d0;
      v343_.v344 = (__int64*)a1;
      v55 = *(__int64****)(v54 + 24);
      v56 = *v55;
      v57 = v55[1];
      if (*v55 == v57) {
        break;
      }
      do {
        v59 = *v56;
        v58 = v56[1];
        if (v58 == *v56) {
          v60 = 0;
          v63 = v51;
        }
        else {
          v60 = 0;
          v61 = *(_QWORD*)(*v59 + 24);
          do {
            v62 = *v59++;
            v60 += *(unsigned __int8*)(v62 + 107);
          } while (v59 != v58);
          v63 = (__int64*)(v61 + 32);
        }
        LODWORD(v339_.v339) = v60;
        if (v343_.v345 == nullptr) {
          goto LABEL_499;
        }
        (*((void (**)(__int64 (**)(__int64, __int64), __int64*,
                      __int64*))*v343_.v345 +
           6))(v343_.v345, v63, &v339_.v339);
        v56 += 3;
      } while (v56 != v57);
      v52 = (__int64 (***)(void))v343_.v345;
      if (v343_.v345 == (__int64 (**)(__int64, __int64))&v343_.v343) {
        goto LABEL_83;
      }
      if (v343_.v345 != nullptr) {
        v53 = 5;
      LABEL_84:
        ((__int64 (*)(__int64))(*v52)[v53])((__int64)v52);
      }
      if (++v49 == v50) {
        goto LABEL_97;
      }
    }
    v52 = &v343_.v343;
  LABEL_83:
    v53 = 4;
    goto LABEL_84;
  }
LABEL_97:
  v64 = *(_QWORD*)(*(_QWORD*)GameData_212c998[0] + 64LL);
  v65 = *(_QWORD*)(*(_QWORD*)GameData_212c998[0] + 72LL);
  while (v64 != v65) {
    v66 = *(_QWORD*)(*(_QWORD*)v64 + 24LL);
    v68 = *(_QWORD*)(v66 + 24);
    v67 = (unsigned __int64*)(v66 + 24);
    if (v68 != 0) {
      GameVariable_826e40_alt1(a1, 4u, v67, 0, 0, 0,
                               *(unsigned __int8*)(*(_QWORD*)v64 + 154LL), 0);
    }
    v64 += 8;
  }
  GameRoutine_94e080();
  v343_.v345 = (__int64 (**)(__int64, __int64))&v343_.v343;
  v69 = *(_QWORD*)GameData_212cbd0[0];
  v343_.v343 = GameData_1f9f160;
  v343_.v344 = (__int64*)a1;
  GameRoutine_dbfc40(v69, (__int64)&v343_.v343);
  if (v343_.v345 == (__int64 (**)(__int64, __int64))&v343_.v343) {
    v70 = 32;
    goto LABEL_106;
  }
  if (v343_.v345 != nullptr) {
    v70 = 40;
  LABEL_106:
    (*(void (**)(__int64))((char*)*v343_.v345 + v70))((__int64)v343_.v345);
  }
  v71 = &v339_.v339;
  v339_.v339 = (__int64)GameData_1f9f1f0;
  v339_.v340 = (char*)a1;
  v339_.v342 = &v339_.v339;
  v72 = (__int64*)GameData_212cc78[0];
  v73 = *(_QWORD*)GameData_212cc78[0];
  v74 = *(_QWORD*)(*(_QWORD*)GameData_212cc78[0] + 64LL);
  if ((int)((unsigned __int64)(*(_QWORD*)(*(_QWORD*)GameData_212cc78[0] +
                                          72LL) -
                               v74) >>
            3) >= 1) {
    v75 = 0;
    do {
      v76 = *(_QWORD*)(v74 + 8 * v75);
      if (v76 != 0) {
        if (v339_.v342 == nullptr) {
          goto LABEL_499;
        }
        (*(void (**)(__int64*, _QWORD))(*v339_.v342 + 48))(
            v339_.v342, *(_QWORD*)(v76 + 24));
        v73 = *v72;
      }
      v74 = *(_QWORD*)(v73 + 64);
      ++v75;
    } while (v75 < (int)((unsigned __int64)(*(_QWORD*)(v73 + 72) - v74) >> 3));
    v71 = v339_.v342;
    if (v339_.v342 != &v339_.v339) {
      if (v339_.v342 != nullptr) {
        v77 = 40;
      LABEL_117:
        (*(void (**)(__int64))(*v71 + v77))((__int64)v71);
      }
      v78 = v337_.v337;
      v337_.v337[0] = GameData_1f9f270;
      v337_.v337[1] = a1;
      v337_.v338 = v337_.v337;
      v79 = (__int64*)GameData_212cbe8[0];
      v80 = *(_QWORD*)GameData_212cbe8[0];
      v81 = *(_QWORD*)(*(_QWORD*)GameData_212cbe8[0] + 64LL);
      if ((int)((unsigned __int64)(*(_QWORD*)(*(_QWORD*)GameData_212cbe8[0] +
                                              72LL) -
                                   v81) >>
                3) < 1) {
        goto LABEL_127;
      }
      v82 = 0;
      do {
        v83 = *(_QWORD*)(v81 + 8 * v82);
        if (v83 != 0) {
          if (v337_.v338 == nullptr) {
            goto LABEL_499;
          }
          (*(void (**)(_QWORD*, _QWORD))(*v337_.v338 + 48LL))(
              v337_.v338, *(_QWORD*)(v83 + 24));
          v80 = *v79;
        }
        v81 = *(_QWORD*)(v80 + 64);
        ++v82;
      } while (v82 <
               (int)((unsigned __int64)(*(_QWORD*)(v80 + 72) - v81) >> 3));
      v78 = v337_.v338;
      if (v337_.v338 == v337_.v337) {
      LABEL_127:
        v84 = 32;
      }
      else {
        if (v337_.v338 == nullptr) {
          goto LABEL_129;
        }
        v84 = 40;
      }
      (*(void (**)(__int64))(*v78 + v84))((__int64)v78);
    LABEL_129:
      v85 = *msg_MessageManager_instance__ptr[0];
      if (*msg_MessageManager_instance__ptr[0] != 0) {
        v339_.v340 = nullptr;
        v339_.v341 = 0;
        v339_.v339 = 0;
        v343_.v343 = GameData_1f9f2f0;
        v343_.v344 = &v339_.v339;
        v343_.v345 = (__int64 (**)(__int64, __int64))&v343_.v343;
        Registration_a4fba0(v85, (__int64)&v343_.v343);
        if (v343_.v345 == (__int64 (**)(__int64, __int64))&v343_.v343) {
          v86 = 32;
        }
        else {
          if (v343_.v345 == nullptr) {
            goto LABEL_135;
          }
          v86 = 40;
        }
        (*(void (**)(__int64))((char*)*v343_.v345 + v86))((__int64)v343_.v345);
      LABEL_135:
        v87 = v339_.v339;
        if (v339_.v340 != (char*)v339_.v339) {
          GameRoutine_8319e0(
              v339_.v339, v339_.v340, (__int64)&v343_.v343,
              (2 * __clz(0xAAAAAAAAAAAAAAABLL *
                         ((__int64)&v339_.v340[-v339_.v339] >> 3))) ^
                  0x7E,
              1);
          v87 = v339_.v339;
          v88 = v339_.v340;
          if ((char*)v339_.v339 != v339_.v340) {
            do {
              if ((*(_BYTE*)v87 & 1) != 0) {
                v89 = *(_QWORD*)(v87 + 16);
              }
              else {
                v89 = v87 + 1;
              }
              v343_.v344 = (__int64*)v89;
              v343_.v343 = (__int64 (**)(void))game_HashString(v89);
              GameVariable_827070_alt1(a1, 8u, (unsigned __int64*)&v343_.v343,
                                       &GameData_21ed0a8, 0, 1);
              v87 += 24;
            } while ((char*)v87 != v88);
            v87 = v339_.v339;
          }
        }
        if (v87 != 0) {
          v90 = v339_.v340;
          if ((char*)v87 == v339_.v340) {
            goto LABEL_153;
          }
          v91 = v339_.v340;
          do {
            v92 = *(v91 - 24);
            v91 -= 24;
            if ((v92 & 1) != 0) {
              v93 = *((_QWORD*)v90 - 1);
              if (v93 != 0) {
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) != 0) {
                  v94 = 128;
                }
                else {
                  v94 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v94, v93);
              }
            }
            v90 = v91;
          } while (v91 != (char*)v87);
          v339_.v340 = (char*)v87;
          v87 = v339_.v339;
          if (v339_.v339 != 0) {
          LABEL_153:
            v95 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v95 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v95, v87);
          }
        }
      }
      GameRoutine_135b460();
      v96 = *(_QWORD*)(*(_QWORD*)GameData_212ca10[0] + 64LL);
      for (i = *(_QWORD*)(*(_QWORD*)GameData_212ca10[0] + 72LL); v96 != i;
           v96 += 8) {
        v98 = *(_QWORD*)(*(_QWORD*)v96 + 24LL);
        v99 = *(unsigned __int64**)(v98 + 72);
        for (j = *(unsigned __int64**)(v98 + 80); v99 != j; v99 += 2) {
          GameVariable_826e40_alt1(game_GameModeData_instance_ + 40, 4u, v99, 0,
                                   0, 0, 99999, 0);
        }
      }
      v101 = GameData_212cc70[0];
      v102 = *(__int64**)(*(_QWORD*)GameData_212cc70[0] + 64LL);
      v103 = *(__int64**)(*(_QWORD*)GameData_212cc70[0] + 72LL);
      if (v102 != v103) {
        do {
          v104 = *v102++;
          v343_.v344 = *(__int64**)(v104 + 8);
          v343_.v343 = (__int64 (**)(void))game_HashString((__int64)v343_.v344);
          v105 = TutorialFile_980b00();
          GameVariable_827070_alt1(a1, 0xEu, (unsigned __int64*)&v343_.v343,
                                   v105, 0, 1);
        } while (v102 != v103);
        v102 = *(__int64**)(*(_QWORD*)v101 + 64LL);
        v103 = *(__int64**)(*(_QWORD*)v101 + 72LL);
      }
      if (v102 != v103) {
        v106 = GameData_212c650[0];
        do {
          v108 = **(__int64***)(*v102 + 40);
          if ((int)((*(_QWORD*)(*(_QWORD*)(*v102 + 40) + 8LL) - (_QWORD)v108) >>
                    3) >= 1 &&
              (v109 = *v108) != 0) {
            v107 = *(unsigned __int64**)(v109 + 24);
          }
          else {
            v107 = (unsigned __int64*)v106;
          }
          GameVariable_827070_alt1(a1, 0xEu, v107, &GameData_21ed0a8, 0, 1);
          ++v102;
        } while (v102 != v103);
      }
      v110 = *(__int64**)(*GameData_212c8c0[0] + 64);
      v111 = *(__int64**)(*GameData_212c8c0[0] + 72);
      if (v110 == v111) {
        goto LABEL_184;
      }
      while (2) {
        v114 = *v110;
        v343_.v343 = GameData_1f9f370;
        v343_.v344 = (__int64*)a1;
        v343_.v345 = (__int64 (**)(__int64, __int64))&v343_.v343;
        v115 = *(__int64**)(v114 + 40);
        v116 = *v115;
        v117 = v115[1];
        if (*v115 == v117) {
          v112 = &v343_.v343;
        LABEL_173:
          v113 = 4;
          goto LABEL_174;
        }
        do {
          v118 = *(_QWORD*)(*(_QWORD*)v116 + 24LL);
          v119 = *(_QWORD*)(v118 + 24);
          v120 = *(_QWORD*)(v118 + 32);
          if (v119 != v120) {
            while (v343_.v345 != nullptr) {
              (*((void (**)(__int64 (**)(__int64, __int64),
                            __int64))*v343_.v345 +
                 6))(v343_.v345, v119);
              v119 += 16;
              if (v119 == v120) {
                goto LABEL_180;
              }
            }
            goto LABEL_499;
          }
        LABEL_180:
          v116 += 8;
        } while (v116 != v117);
        v112 = (__int64 (***)(void))v343_.v345;
        if (v343_.v345 == (__int64 (**)(__int64, __int64))&v343_.v343) {
          goto LABEL_173;
        }
        if (v343_.v345 != nullptr) {
          v113 = 5;
        LABEL_174:
          ((__int64 (*)(__int64))(*v112)[v113])((__int64)v112);
        }
        if (++v110 != v111) {
          continue;
        }
        break;
      }
    LABEL_184:
      v121 = *(__int64**)(*(_QWORD*)GameData_212cd98[0] + 64LL);
      v122 = *(__int64**)(*(_QWORD*)GameData_212cd98[0] + 72LL);
      while (v121 != v122) {
        v123 = *v121++;
        v124 = *(_QWORD*)(v123 + 24);
        v125 = NoticeFile_9ca9c0();
        GameVariable_827070_alt1(a1, 4u, (unsigned __int64*)(v124 + 48), v125,
                                 0, 1);
      }
      v343_.v343 = GameData_1f9f3f0;
      v343_.v344 = (__int64*)a1;
      v343_.v345 = (__int64 (**)(__int64, __int64))&v343_.v343;
      game_CausationFile_EachFlag((__int64)&v343_.v343);
      if (v343_.v345 == (__int64 (**)(__int64, __int64))&v343_.v343) {
        v126 = 32;
      LABEL_190:
        (*(void (**)(__int64))((char*)*v343_.v345 + v126))((__int64)v343_.v345);
      }
      else if (v343_.v345 != nullptr) {
        v126 = 40;
        goto LABEL_190;
      }
      v127 = game_9a28e0(14);
      GameVariable_826e40_alt1(a1, 4u, (unsigned __int64*)v127, 0, 0, 0, -1, 2);
      v128 = *(__int64**)(*(_QWORD*)GameData_212cb70[0] + 64LL);
      v129 = *(__int64**)(*(_QWORD*)GameData_212cb70[0] + 72LL);
      while (v128 != v129) {
        v130 = *v128++;
        GameVariable_827070_alt1(
            a1, 7u,
            (unsigned __int64*)(*(_QWORD*)(*(_QWORD*)(v130 + 24) + 120LL) +
                                40LL),
            &GameData_21ed0a8, 0, 1);
      }
      v131 = *(_QWORD*)(*(_QWORD*)GameData_212ca20[0] + 64LL);
      for (k = *(_QWORD*)(*(_QWORD*)GameData_212ca20[0] + 72LL); v131 != k;
           v131 += 8) {
        v133 = *(__int64***)(*(_QWORD*)v131 + 40LL);
        v134 = *v133;
        v135 = v133[1];
        while (v134 != v135) {
          v136 = *v134;
          v137 = *(_QWORD**)(*v134 + 24);
          v138 = (unsigned __int64*)v137[20];
          v139 = (unsigned __int64*)v137[21];
          if (v139 != v138) {
            v140 = *(unsigned __int16*)(v136 + 56);
            v143 = v137 + 14;
            v141 = v137[14];
            v142 = v143[1];
            if (v140 <= 1) {
              v140 = 1;
            }
            if (v142 == v141) {
              v144 = 0;
            }
            else {
              v144 = v140;
            }
            if (v144 <= 1) {
              do {
                GameVariable_827070_alt1(a1, 9u, v138, &GameData_21ed0a8, 0, 1);
                v138 += 2;
              } while (v138 != v139);
            }
            else {
              do {
                GameVariable_826e40_alt1(a1, 9u, v138, 0, 0, 0, v144, 0);
                v138 += 2;
              } while (v138 != v139);
            }
          }
          v145 = *(_QWORD**)(v136 + 24);
          v146 = (unsigned __int64*)v145[17];
          v147 = (unsigned __int64*)v145[18];
          if (v147 != v146) {
            v148 = *(unsigned __int16*)(v136 + 56);
            v151 = v145 + 14;
            v149 = v145[14];
            v150 = v151[1];
            if (v148 <= 1) {
              v148 = 1;
            }
            if (v150 == v149) {
              v152 = 0;
            }
            else {
              v152 = v148;
            }
            if (v152 <= 1) {
              do {
                GameVariable_827070_alt1(a1, 5u, v146, &GameData_21ed0a8, 0, 1);
                v146 += 2;
              } while (v146 != v147);
            }
            else {
              do {
                GameVariable_826e40_alt1(a1, 5u, v146, 0, 0, 0, v152, 0);
                v146 += 2;
              } while (v146 != v147);
            }
          }
          v153 = *(_QWORD**)(v136 + 24);
          v154 = (unsigned __int64*)v153[23];
          v155 = (unsigned __int64*)v153[24];
          if (v155 != v154) {
            v156 = *(unsigned __int16*)(v136 + 56);
            v159 = v153 + 14;
            v157 = v153[14];
            v158 = v159[1];
            if (v156 <= 1) {
              v156 = 1;
            }
            if (v158 == v157) {
              v160 = 0;
            }
            else {
              v160 = v156;
            }
            if (v160 <= 1) {
              do {
                GameVariable_827070_alt1(a1, 0xAu, v154, &GameData_21ed0a8, 0,
                                         1);
                v154 += 2;
              } while (v154 != v155);
            }
            else {
              do {
                GameVariable_826e40_alt1(a1, 0xAu, v154, 0, 0, 0, v160, 0);
                v154 += 2;
              } while (v154 != v155);
            }
          }
          v161 = *(_QWORD**)(v136 + 24);
          v162 = (unsigned __int64*)v161[26];
          v163 = (unsigned __int64*)v161[27];
          if (v163 != v162) {
            v164 = *(unsigned __int16*)(v136 + 56);
            v167 = v161 + 14;
            v165 = v161[14];
            v166 = v167[1];
            if (v164 <= 1) {
              v164 = 1;
            }
            if (v166 == v165) {
              v168 = 0;
            }
            else {
              v168 = v164;
            }
            if (v168 <= 1) {
              do {
                GameVariable_827070_alt1(a1, 4u, v162, &GameData_21ed0a8, 0, 1);
                v162 += 2;
              } while (v162 != v163);
            }
            else {
              do {
                GameVariable_826e40_alt1(a1, 4u, v162, 0, 0, 0, v168, 0);
                v162 += 2;
              } while (v162 != v163);
            }
          }
          if (*(_WORD*)(v136 + 72) != 0) {
            v169 = 8LL * *(unsigned __int16*)(v136 + 72);
            v170 = 0;
            do {
              v343_.v344 = *(__int64**)(*(_QWORD*)(v136 + 80) + v170);
              v343_.v343 =
                  (__int64 (**)(void))game_HashString((__int64)v343_.v344);
              GameVariable_827070_alt1(a1, 3u, (unsigned __int64*)&v343_.v343,
                                       &GameData_21ed0a8, 0, 1);
              v170 += 8;
            } while (v169 != v170);
          }
          ++v134;
        }
      }
      v171 = *(__int64**)(*(_QWORD*)GameData_212cb58[0] + 64LL);
      v172 = *(__int64**)(*(_QWORD*)GameData_212cb58[0] + 72LL);
      while (v171 != v172) {
        v173 = *v171;
        GameVariable_826e40_alt1(
            a1, 4u, (unsigned __int64*)(*(_QWORD*)(*v171 + 24) + 48LL), 0, 0, 0,
            99999, 0);
        v174 = *(unsigned __int16*)(v173 + 304);
        if (*(_WORD*)(v173 + 304) != 0) {
          v175 = 0;
          do {
            v343_.v344 = *(__int64**)(*(_QWORD*)(v173 + 312) + 8 * v175);
            v176 = game_HashString((__int64)v343_.v344);
            v343_.v343 = (__int64 (**)(void))v176;
            if (v176 != 0) {
              v177 = *(_QWORD**)(a1 + 8);
              v178 = v177[2];
              if (v178 != 0 && v177[4] != 0) {
                v180 = v178 - 1;
                if ((v178 & (v178 - 1)) != 0) {
                  v181 = v176;
                  if (v176 >= v178) {
                    v181 = v176 % v178;
                  }
                }
                else {
                  v181 = v180 & v176;
                }
                v182 = *(_QWORD**)(v177[1] + 8 * v181);
                if (v182 != nullptr) {
                  v183 = (_QWORD*)*v182;
                  if (v183 != nullptr) {
                    if ((v178 & v180) == 0) {
                      while (1) {
                        v185 = v183[1];
                        if (v176 == v185) {
                          if (v183[2] == v176) {
                            goto LABEL_273;
                          }
                        }
                        else if ((v185 & v180) != v181) {
                          goto LABEL_272;
                        }
                        v183 = (_QWORD*)*v183;
                        if (v183 == nullptr) {
                          goto LABEL_272;
                        }
                      }
                    }
                    do {
                      v184 = v183[1];
                      if (v176 == v184) {
                        if (v183[2] == v176) {
                          goto LABEL_273;
                        }
                      }
                      else {
                        if (v184 >= v178) {
                          v184 %= v178;
                        }
                        if (v184 != v181) {
                          break;
                        }
                      }
                      v183 = (_QWORD*)*v183;
                    } while (v183 != nullptr);
                  }
                }
              }
            }
          LABEL_272:
            GameVariable_826e40_alt1(a1, 9u, (unsigned __int64*)&v343_.v343, 0,
                                     0, 0, 99999, 0);
          LABEL_273:
            ++v175;
          } while (v175 != v174);
        }
        v186 = *(unsigned __int16*)(v173 + 480);
        if (*(_WORD*)(v173 + 480) != 0) {
          v187 = 0;
          do {
            v343_.v344 = *(__int64**)(*(_QWORD*)(v173 + 488) + 8 * v187);
            v188 = game_HashString((__int64)v343_.v344);
            v343_.v343 = (__int64 (**)(void))v188;
            if (v188 != 0) {
              v189 = *(_QWORD**)(a1 + 8);
              v190 = v189[2];
              if (v190 != 0 && v189[4] != 0) {
                v192 = v190 - 1;
                if ((v190 & (v190 - 1)) != 0) {
                  v193 = v188;
                  if (v188 >= v190) {
                    v193 = v188 % v190;
                  }
                }
                else {
                  v193 = v192 & v188;
                }
                v194 = *(_QWORD**)(v189[1] + 8 * v193);
                if (v194 != nullptr) {
                  v195 = (_QWORD*)*v194;
                  if (v195 != nullptr) {
                    if ((v190 & v192) == 0) {
                      while (1) {
                        v197 = v195[1];
                        if (v188 == v197) {
                          if (v195[2] == v188) {
                            goto LABEL_301;
                          }
                        }
                        else if ((v197 & v192) != v193) {
                          goto LABEL_300;
                        }
                        v195 = (_QWORD*)*v195;
                        if (v195 == nullptr) {
                          goto LABEL_300;
                        }
                      }
                    }
                    do {
                      v196 = v195[1];
                      if (v188 == v196) {
                        if (v195[2] == v188) {
                          goto LABEL_301;
                        }
                      }
                      else {
                        if (v196 >= v190) {
                          v196 %= v190;
                        }
                        if (v196 != v193) {
                          break;
                        }
                      }
                      v195 = (_QWORD*)*v195;
                    } while (v195 != nullptr);
                  }
                }
              }
            }
          LABEL_300:
            GameVariable_826e40_alt1(a1, 9u, (unsigned __int64*)&v343_.v343, 0,
                                     0, 0, 99999, 0);
          LABEL_301:
            ++v187;
          } while (v187 != v186);
        }
        ++v171;
      }
      v198 = *(_QWORD*)(*(_QWORD*)GameData_212ccd0[0] + 64LL);
      for (m = *(_QWORD*)(*(_QWORD*)GameData_212ccd0[0] + 72LL); v198 != m;
           v198 += 8) {
        v200 = *(_BYTE**)(*(_QWORD*)v198 + 376LL);
        if (v200 != nullptr && *v200 != 0) {
          v343_.v344 = *(__int64**)(*(_QWORD*)v198 + 376LL);
          v343_.v343 = (__int64 (**)(void))game_HashString((__int64)v200);
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d9fd0,
                                    memory_order_acquire) &
               1) == 0 &&
              (unsigned int)__cxa_guard_acquire(&GameData_21d9fd0) != 0) {
            v202 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
            v203 = GameData_1f9cb30;
            v204 = GameData_1f9cb38;
            v205 = GameData_1f9cb40;
            GameData_21d9fb8 = (__int64)v202;
            v202[6] = GameData_1f9cb28;
            v202[7] = v203;
            v206 = GameData_1f9cb08;
            v207 = GameData_1f9cb10;
            v202[8] = v204;
            v202[9] = v205;
            GameData_21d9fc0 = (__int64)(v202 + 10);
            GameData_21d9fc8 = (__int64)(v202 + 10);
            v202[2] = v206;
            v202[3] = v207;
            v208 = GameData_1f9cb20;
            v202[4] = GameData_1f9cb18;
            v202[5] = v208;
            v209 = GameData_1f9cb00;
            *v202 = GameData_1f9caf8;
            v202[1] = v209;
            GameRoutine_2b0();
            __cxa_guard_release(&GameData_21d9fd0);
          }
          v201 = GameVariable_827070_alt1(
              a1, 9u, (unsigned __int64*)&v343_.v343, &GameData_21d9fb8, 0, 0);
          if (v201 != nullptr) {
            v201[18] = 1;
          }
        }
      }
      v343_.v343 = GameData_1f9f470;
      v343_.v344 = (__int64*)a1;
      v343_.v345 = (__int64 (**)(__int64, __int64))&v343_.v343;
      AssetTableFile_7e7200((__int64)&v343_.v343);
      if (v343_.v345 == (__int64 (**)(__int64, __int64))&v343_.v343) {
        v210 = 32;
      LABEL_317:
        (*(void (**)(__int64))((char*)*v343_.v345 + v210))((__int64)v343_.v345);
      }
      else if (v343_.v345 != nullptr) {
        v210 = 40;
        goto LABEL_317;
      }
      v211 = *(_QWORD*)(*(_QWORD*)GameData_212cdc8[0] + 64LL);
      v212 = *(_QWORD*)(*(_QWORD*)GameData_212cdc8[0] + 72LL);
      if (v211 != v212) {
        while (1) {
          v213 = *(_QWORD*)(*(_QWORD*)v211 + 24LL);
          v214 = *(__int64**)(v213 + 32);
          if (*(__int64**)(v213 + 40) != v214) {
            v215 = *v214;
            if (v215 != 0) {
              break;
            }
          }
        LABEL_320:
          v211 += 8;
          if (v211 == v212) {
            goto LABEL_331;
          }
        }
        v216 = *(__int64**)(v215 + 96);
        v217 = *(__int64**)(v215 + 104);
        while (2) {
          if (v216 == v217) {
            goto LABEL_320;
          }
          v219 = *v216;
          GameVariable_826e40_alt1(a1, 0xBu, (unsigned __int64*)(*v216 + 16), 0,
                                   0, 0, -1, 2);
          GameVariable_827070_alt1(a1, 0xBu, (unsigned __int64*)(v219 + 56),
                                   &GameData_21ed0a8, 0, 1);
          v220 = *(_QWORD*)(v219 + 8);
          v343_.v343 = GameData_1f9f500;
          v343_.v344 = (__int64*)a1;
          v343_.v345 = (__int64 (**)(__int64, __int64))&v343_.v343;
          game_anonymous_RuntimeLabelBuffer_EachSaveFlag(v220,
                                                         (__int64)&v343_.v343);
          if (v343_.v345 != (__int64 (**)(__int64, __int64))&v343_.v343) {
            if (v343_.v345 != nullptr) {
              v218 = 40;
            LABEL_325:
              (*(void (**)(__int64))((char*)*v343_.v345 + v218))(
                  (__int64)v343_.v345);
            }
            ++v216;
            continue;
          }
          break;
        }
        v218 = 32;
        goto LABEL_325;
      }
    LABEL_331:
      v221 = *(__int64**)(*(_QWORD*)GameData_212cca8[0] + 64LL);
      v330 = *(__int64**)(*(_QWORD*)GameData_212cca8[0] + 72LL);
      if (v221 != v330) {
      LABEL_335:
        v224 = *v221;
        v331 = v221;
        v225 = *(_QWORD*)(*v221 + 48);
        if (v225 != 0) {
          v343_.v344 = *(__int64**)(v224 + 48);
          v343_.v343 = (__int64 (**)(void))game_HashString(v225);
          GameVariable_826e40_alt1(a1, 0xDu, (unsigned __int64*)&v343_.v343, 0,
                                   0, 0, 1000000, 0);
        }
        v222 = *(unsigned __int64**)(v224 + 24);
        v336 = v224;
        v226 = (unsigned __int64*)v222[23];
        v227 = (unsigned __int64*)v222[24];
        v332 = v227;
        if (v226 == v227) {
          goto LABEL_380;
        }
      LABEL_342:
        v229 = (_QWORD*)game_GameVariableTable_Find_alt1(*(_QWORD**)(a1 + 8),
                                                         v226);
        if (v229 == nullptr) {
          goto LABEL_341;
        }
        v230 = v229;
        v343_.v345 = (__int64 (**)(__int64, __int64))&v343_.v343;
        v343_.v343 = GameData_1f9f580;
        v343_.v344 = (__int64*)v224;
        v232 = v229[12];
        v231 = v229[13];
        if (v232 < v231) {
          *(_QWORD*)(v232 + 32) = v232;
          (*((void (**)(__int64 (**)(__int64, __int64),
                        unsigned __int64))*v343_.v345 +
             3))(v343_.v345, v232);
          v233 = (_QWORD*)(v232 + 48);
          goto LABEL_376;
        }
        v234 = v229[11];
        v235 = v232 - v234;
        v236 = 0xAAAAAAAAAAAAAAABLL * (v235 >> 4) + 1;
        if (v236 > 0x555555555555555LL) {
        LABEL_500:
          GameRoutine_835d90_alt1();
        }
        v237 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v231 - v234) >> 4);
        if (2 * v237 > v236) {
          v236 = 2 * v237;
        }
        if (v237 >= 0x2AAAAAAAAAAAAAALL) {
          v238 = 0x555555555555555LL;
        }
        else {
          v238 = v236;
        }
        if (v238 != 0) {
          if (v238 > 0x555555555555555LL) {
            goto LABEL_501;
          }
          v239 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v238, 16, 0);
        }
        else {
          v239 = 0;
        }
        v240 = (_QWORD*)(v239 + v235);
        v240[4] = v240;
        *v240 = GameData_1f9f580;
        v240[1] = v224;
        v241 = (char*)v230[11];
        v242 = (char*)v230[12];
        v243 = v239 + v235 + v241 - v242;
        if (v242 == v241) {
          goto LABEL_371;
        }
        v244 = v243;
        v245 = (char*)v230[11];
        v334 = v244;
        do {
          v246 = *((char**)v245 + 4);
          if (v246 != nullptr) {
            if (v245 == v246) {
              *(_QWORD*)(v244 + 32) = v244;
              (*(void (**)(_QWORD, __int64))(**((_QWORD**)v245 + 4) + 24LL))(
                  *((_QWORD*)v245 + 4), v244);
            }
            else {
              *(_QWORD*)(v244 + 32) = v246;
              *((_QWORD*)v245 + 4) = 0;
            }
          }
          else {
            *(_QWORD*)(v244 + 32) = 0;
          }
          v245 += 48;
          v244 += 48;
        } while (v245 != v242);
        v243 = v334;
        while (1) {
          v248 = *((char**)v241 + 4);
          if (v241 == v248) {
            v247 = 32;
          }
          else {
            if (v248 == nullptr) {
              goto LABEL_366;
            }
            v247 = 40;
          }
          (*(void (**)(__int64))(*(_QWORD*)v248 + v247))((__int64)v248);
        LABEL_366:
          v241 += 48;
          if (v241 == v242) {
            v241 = (char*)v230[11];
          LABEL_371:
            v224 = v336;
            v249 = v239 + 48 * v238;
            v233 = v240 + 6;
            v230[11] = v243;
            v230[12] = v240 + 6;
            v230[13] = v249;
            if (v241 != nullptr) {
              v250 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v250 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v250, v241);
            }
            v227 = v332;
          LABEL_376:
            v251 = v343_.v345;
            v230[12] = v233;
            if (v251 == (__int64 (**)(__int64, __int64))&v343_.v343) {
              v228 = 32;
              goto LABEL_340;
            }
            if (v251 != nullptr) {
              v228 = 40;
            LABEL_340:
              (*(void (**)(__int64))((char*)*v251 + v228))((__int64)v251);
            }
          LABEL_341:
            v226 += 2;
            if (v226 != v227) {
              goto LABEL_342;
            }
            v222 = *(unsigned __int64**)(v224 + 24);
          LABEL_380:
            if (v222[9] != 0) {
              GameVariable_827070_alt1(a1, 0xDu, v222 + 9, &GameData_21ed0a8, 0,
                                       1);
              v222 = *(unsigned __int64**)(v224 + 24);
            }
            v252 = (unsigned __int64*)v222[17];
            v253 = (unsigned __int64*)v222[18];
            v333 = v253;
            if (v252 == v253) {
              goto LABEL_334;
            }
            while (2) {
              v255 = (_QWORD*)game_GameVariableTable_Find_alt1(
                  *(_QWORD**)(a1 + 8), v252);
              if (v255 == nullptr) {
                goto LABEL_386;
              }
              v256 = v255;
              v343_.v345 = (__int64 (**)(__int64, __int64))&v343_.v343;
              v343_.v343 = GameData_1f9f610;
              v343_.v344 = (__int64*)v224;
              v258 = v255[12];
              v257 = v255[13];
              if (v258 < v257) {
                *(_QWORD*)(v258 + 32) = v258;
                (*((void (**)(__int64 (**)(__int64, __int64),
                              unsigned __int64))*v343_.v345 +
                   3))(v343_.v345, v258);
                v259 = (_QWORD*)(v258 + 48);
                goto LABEL_421;
              }
              v260 = v255[11];
              v261 = v258 - v260;
              v262 = 0xAAAAAAAAAAAAAAABLL * (v261 >> 4) + 1;
              if (v262 > 0x555555555555555LL) {
                goto LABEL_500;
              }
              v263 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v257 - v260) >> 4);
              if (2 * v263 > v262) {
                v262 = 2 * v263;
              }
              if (v263 >= 0x2AAAAAAAAAAAAAALL) {
                v264 = 0x555555555555555LL;
              }
              else {
                v264 = v262;
              }
              if (v264 != 0) {
                if (v264 <= 0x555555555555555LL) {
                  v265 = fw_memory_HeapManager_Allocate_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v264, 16, 0);
                  goto LABEL_400;
                }
              LABEL_501:
                GameRoutine_60a210_alt1();
              }
              v265 = 0;
            LABEL_400:
              v266 = (_QWORD*)(v265 + v261);
              v266[4] = v266;
              *v266 = GameData_1f9f610;
              v266[1] = v224;
              v267 = (char*)v256[11];
              v268 = (char*)v256[12];
              v269 = v265 + v261 + v267 - v268;
              if (v268 == v267) {
                goto LABEL_416;
              }
              v270 = v269;
              v271 = (char*)v256[11];
              v335 = v270;
              do {
                v272 = *((char**)v271 + 4);
                if (v272 != nullptr) {
                  if (v271 == v272) {
                    *(_QWORD*)(v270 + 32) = v270;
                    (*(void (**)(_QWORD, __int64))(**((_QWORD**)v271 + 4) +
                                                   24LL))(*((_QWORD*)v271 + 4),
                                                          v270);
                  }
                  else {
                    *(_QWORD*)(v270 + 32) = v272;
                    *((_QWORD*)v271 + 4) = 0;
                  }
                }
                else {
                  *(_QWORD*)(v270 + 32) = 0;
                }
                v271 += 48;
                v270 += 48;
              } while (v271 != v268);
              v269 = v335;
              while (2) {
                v274 = *((char**)v267 + 4);
                if (v267 == v274) {
                  v273 = 32;
                  goto LABEL_410;
                }
                if (v274 != nullptr) {
                  v273 = 40;
                LABEL_410:
                  (*(void (**)(__int64))(*(_QWORD*)v274 + v273))((__int64)v274);
                }
                v267 += 48;
                if (v267 != v268) {
                  continue;
                }
                break;
              }
              v267 = (char*)v256[11];
            LABEL_416:
              v224 = v336;
              v275 = v265 + 48 * v264;
              v259 = v266 + 6;
              v256[11] = v269;
              v256[12] = v266 + 6;
              v256[13] = v275;
              if (v267 != nullptr) {
                v276 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v276 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v276, v267);
              }
              v253 = v333;
            LABEL_421:
              v277 = v343_.v345;
              v256[12] = v259;
              if (v277 == (__int64 (**)(__int64, __int64))&v343_.v343) {
                v254 = 32;
                goto LABEL_385;
              }
              if (v277 != nullptr) {
                v254 = 40;
              LABEL_385:
                (*(void (**)(__int64))((char*)*v277 + v254))((__int64)v277);
              }
            LABEL_386:
              v252 += 2;
              if (v252 != v253) {
                continue;
              }
              break;
            }
            v222 = *(unsigned __int64**)(v224 + 24);
          LABEL_334:
            v223 = game_990940();
            GameVariable_827070_alt1(a1, 0xDu, v222 + 4, v223, 0, 1);
            v221 = v331 + 1;
            if (v331 + 1 == v330) {
              break;
            }
            goto LABEL_335;
          }
        }
      }
      v278 = GameData_21f6250;
      for (n = GameData_21f6258; v278 != n; v278 += 256) {
        v343_.v343 = GameData_1f9f690;
        v343_.v344 = (__int64*)a1;
        v343_.v345 = (__int64 (**)(__int64, __int64))&v343_.v343;
        GameVariable_826e40_alt1(a1, 0xDu, (unsigned __int64*)(v278 + 40), 0, 0,
                                 0, -1, 2);
        if (v343_.v345 == nullptr) {
          goto LABEL_499;
        }
        (*((void (**)(__int64 (**)(__int64, __int64), __int64))*v343_.v345 +
           6))(v343_.v345, v278 + 80);
        if (v343_.v345 == nullptr) {
          goto LABEL_499;
        }
        (*((void (**)(__int64 (**)(__int64, __int64), __int64))*v343_.v345 +
           6))(v343_.v345, v278 + 120);
        if (v343_.v345 == nullptr) {
          goto LABEL_499;
        }
        (*((void (**)(__int64 (**)(__int64, __int64), __int64))*v343_.v345 +
           6))(v343_.v345, v278 + 160);
        if (v343_.v345 == (__int64 (**)(__int64, __int64))&v343_.v343) {
          v280 = 32;
        }
        else {
          if (v343_.v345 == nullptr) {
            continue;
          }
          v280 = 40;
        }
        (*(void (**)(__int64))((char*)*v343_.v345 + v280))((__int64)v343_.v345);
      }
      v281 = *(_QWORD*)(a1 + 8);
      v282 = &v343_.v343;
      v343_.v345 = (__int64 (**)(__int64, __int64))&v343_.v343;
      v343_.v343 = GameData_1f9f710;
      v343_.v344 = (__int64*)v281;
      v283 = (__int64*)GameData_21ed560;
      v284 = GameData_21ed568;
      if (GameData_21ed560 == GameData_21ed568) {
        goto LABEL_441;
      }
      do {
        v285 = *v283++;
        v339_.v339 = v285;
        if (v343_.v345 == nullptr) {
          goto LABEL_499;
        }
        (*((void (**)(__int64 (**)(__int64, __int64), __int64*))*v343_.v345 +
           6))(v343_.v345, &v339_.v339);
      } while (v283 != (__int64*)v284);
      v282 = (__int64 (***)(void))v343_.v345;
      if (v343_.v345 == (__int64 (**)(__int64, __int64))&v343_.v343) {
      LABEL_441:
        v286 = 4;
      }
      else {
        if (v343_.v345 == nullptr) {
          goto LABEL_443;
        }
        v286 = 5;
      }
      ((__int64 (*)(__int64))(*v282)[v286])((__int64)v282);
    LABEL_443:
      game_9a3180();
      v287 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 3932624LL);
      v288 = *(__int64**)(*(_QWORD*)(a1 + 8) + 3932632LL);
      v343_.v343 = (__int64 (**)(void))GameRoutine_834b40;
      if (((__int64)v288 - v287) >> 3 < 129) {
        v292 = 0;
      LABEL_449:
        GameRoutine_834c40(v287, v288,
                           (__int64 (**)(__int64, __int64))&v343_.v343,
                           ((__int64)v288 - v287) >> 3, nullptr, v292);
      }
      else {
        v289 = ((__int64)v288 - v287) >> 3;
        v290 = GameData_212c060;
        while (1) {
          v291 = (__int64*)GameRoutine_1a09d20(8 * v289, v290);
          if (v291 != nullptr) {
            break;
          }
          v292 = v289 >> 1;
          v293 = v289 > 1;
          v289 >>= 1;
          if (!v293) {
            goto LABEL_449;
          }
        }
        v294 = v291;
        GameRoutine_834c40(v287, v288,
                           (__int64 (**)(__int64, __int64))&v343_.v343,
                           ((__int64)v288 - v287) >> 3, v291, v289);
        v295 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v295 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v295, v294);
      }
      v296 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 3932648LL);
      v297 = *(__int64**)(*(_QWORD*)(a1 + 8) + 3932656LL);
      v343_.v343 = (__int64 (**)(void))GameRoutine_834b40;
      if (((__int64)v297 - v296) >> 3 < 129) {
        v301 = 0;
      LABEL_459:
        GameRoutine_834c40(v296, v297,
                           (__int64 (**)(__int64, __int64))&v343_.v343,
                           ((__int64)v297 - v296) >> 3, nullptr, v301);
      }
      else {
        v298 = ((__int64)v297 - v296) >> 3;
        v299 = GameData_212c060;
        while (1) {
          v300 = (__int64*)GameRoutine_1a09d20(8 * v298, v299);
          if (v300 != nullptr) {
            break;
          }
          v301 = v298 >> 1;
          v293 = v298 > 1;
          v298 >>= 1;
          if (!v293) {
            goto LABEL_459;
          }
        }
        v302 = v300;
        GameRoutine_834c40(v296, v297,
                           (__int64 (**)(__int64, __int64))&v343_.v343,
                           ((__int64)v297 - v296) >> 3, v300, v298);
        v303 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v303 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v303, v302);
      }
      v304 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 3932696LL);
      v305 = *(__int64**)(*(_QWORD*)(a1 + 8) + 3932704LL);
      v343_.v343 = (__int64 (**)(void))GameRoutine_834b40;
      if (((__int64)v305 - v304) >> 3 < 129) {
        v309 = 0;
      LABEL_469:
        GameRoutine_834c40(v304, v305,
                           (__int64 (**)(__int64, __int64))&v343_.v343,
                           ((__int64)v305 - v304) >> 3, nullptr, v309);
      }
      else {
        v306 = ((__int64)v305 - v304) >> 3;
        v307 = GameData_212c060;
        while (1) {
          v308 = (__int64*)GameRoutine_1a09d20(8 * v306, v307);
          if (v308 != nullptr) {
            break;
          }
          v309 = v306 >> 1;
          v293 = v306 > 1;
          v306 >>= 1;
          if (!v293) {
            goto LABEL_469;
          }
        }
        v310 = v308;
        GameRoutine_834c40(v304, v305,
                           (__int64 (**)(__int64, __int64))&v343_.v343,
                           ((__int64)v305 - v304) >> 3, v308, v306);
        v311 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v311 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v311, v310);
      }
      v312 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 3932720LL);
      v313 = *(__int64**)(*(_QWORD*)(a1 + 8) + 3932728LL);
      v343_.v343 = (__int64 (**)(void))GameRoutine_834b40;
      if (((__int64)v313 - v312) >> 3 < 129) {
        v317 = 0;
      LABEL_479:
        GameRoutine_834c40(v312, v313,
                           (__int64 (**)(__int64, __int64))&v343_.v343,
                           ((__int64)v313 - v312) >> 3, nullptr, v317);
      }
      else {
        v314 = ((__int64)v313 - v312) >> 3;
        v315 = GameData_212c060;
        while (1) {
          v316 = (__int64*)GameRoutine_1a09d20(8 * v314, v315);
          if (v316 != nullptr) {
            break;
          }
          v317 = v314 >> 1;
          v293 = v314 > 1;
          v314 >>= 1;
          if (!v293) {
            goto LABEL_479;
          }
        }
        v318 = v316;
        GameRoutine_834c40(v312, v313,
                           (__int64 (**)(__int64, __int64))&v343_.v343,
                           ((__int64)v313 - v312) >> 3, v316, v314);
        v319 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v319 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v319, v318);
      }
      v320 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 3932744LL);
      v321 = *(__int64**)(*(_QWORD*)(a1 + 8) + 3932752LL);
      v343_.v343 = (__int64 (**)(void))GameRoutine_834b40;
      if (((__int64)v321 - v320) >> 3 < 129) {
        v325 = 0;
      LABEL_489:
        GameRoutine_834c40(v320, v321,
                           (__int64 (**)(__int64, __int64))&v343_.v343,
                           ((__int64)v321 - v320) >> 3, nullptr, v325);
      }
      else {
        v322 = ((__int64)v321 - v320) >> 3;
        v323 = GameData_212c060;
        while (1) {
          v324 = (__int64*)GameRoutine_1a09d20(8 * v322, v323);
          if (v324 != nullptr) {
            break;
          }
          v325 = v322 >> 1;
          v293 = v322 > 1;
          v322 >>= 1;
          if (!v293) {
            goto LABEL_489;
          }
        }
        v326 = v324;
        GameRoutine_834c40(v320, v321,
                           (__int64 (**)(__int64, __int64))&v343_.v343,
                           ((__int64)v321 - v320) >> 3, v324, v322);
        v327 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v327 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v327, v326);
      }
      v343_.v343 = GameData_1f9f8a0;
      v343_.v344 = (__int64*)a1;
      v343_.v345 = (__int64 (**)(__int64, __int64))&v343_.v343;
      GameVariable_827530_alt1((__int64)&v343_.v343);
      result = (__int64)v343_.v345;
      if (v343_.v345 == (__int64 (**)(__int64, __int64))&v343_.v343) {
        v329 = 32;
      }
      else {
        if (v343_.v345 == nullptr) {
          return result;
        }
        v329 = 40;
      }
      return (*(__int64 (**)(__int64))((char*)*v343_.v345 + v329))(
          (__int64)v343_.v345);
    }
  }
  v77 = 32;
  goto LABEL_117;
}

__int64 GameVariable_82e3a0(int a1)
{
  int v1;
  unsigned __int64* v2;
  unsigned __int64 v3;
  __int64 v4;
  int v6;

  LOBYTE(v1) = atomic_load_explicit((atomic_uchar* volatile)&GameData_21ed130,
                                    memory_order_acquire);
  if ((v1 & 1) == 0) {
    v6 = a1;
    v1 = __cxa_guard_acquire(&GameData_21ed130);
    a1 = v6;
    if (v1 != 0) {
      GameData_21ed0f8 = (__int64)&GameData_1ab7d96;
      GameData_21ed0f0[0] = game_HashString((__int64)&GameData_1ab7d96);
      GameData_21ed108 = (__int64)&GameData_1aed7e3;
      GameData_21ed100 = game_HashString((__int64)&GameData_1aed7e3);
      GameData_21ed118 = (__int64)&GameData_1afcdc5;
      GameData_21ed110 = game_HashString((__int64)&GameData_1afcdc5);
      GameData_21ed128 = (__int64)&GameData_1a90cd0;
      GameData_21ed120 = game_HashString((__int64)&GameData_1a90cd0);
      __cxa_guard_release(&GameData_21ed130);
      a1 = v6;
    }
  }
  v2 = (unsigned __int64*)&GameData_21ed0f0[2 * a1];
  v3 = *v2;
  if (*v2 != 0) {
    LOBYTE(v1) = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v4 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48), v2);
      LOBYTE(v1) = v4 != 0 && *(_DWORD*)(v4 + 32) != 0;
    }
  }
  return (v3 != 0) & (unsigned __int8)v1;
}

__int64* GameVariable_82e4d0(int a1)
{
  int v2;
  int v3;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ed130,
                            memory_order_acquire) &
       1) != 0) {
    return &GameData_21ed0f0[2 * a1];
  }
  v2 = __cxa_guard_acquire(&GameData_21ed130);
  v3 = a1;
  if (v2 != 0) {
    GameData_21ed0f8 = (__int64)&GameData_1ab7d96;
    GameData_21ed0f0[0] = game_HashString((__int64)&GameData_1ab7d96);
    GameData_21ed108 = (__int64)&GameData_1aed7e3;
    GameData_21ed100 = game_HashString((__int64)&GameData_1aed7e3);
    GameData_21ed118 = (__int64)&GameData_1afcdc5;
    GameData_21ed110 = game_HashString((__int64)&GameData_1afcdc5);
    GameData_21ed128 = (__int64)&GameData_1a90cd0;
    GameData_21ed120 = game_HashString((__int64)&GameData_1a90cd0);
    __cxa_guard_release(&GameData_21ed130);
    v3 = a1;
  }
  return &GameData_21ed0f0[2 * v3];
}

__int64* GameVariable_82e5c0(unsigned __int8 a1)
{
  int v2;
  unsigned __int8 v3;
  __int64 v4;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ed1d8,
                            memory_order_acquire) &
       1) != 0) {
    return &GameData_21ed138[2 * a1];
  }
  v2 = __cxa_guard_acquire(&GameData_21ed1d8);
  v3 = a1;
  if (v2 != 0) {
    GameData_21ed150 = (__int64)&GameData_1a8d3c2;
    v4 = GameData_212c650[0][1];
    GameData_21ed138[0] = *GameData_212c650[0];
    GameData_21ed140 = v4;
    GameData_21ed148 = game_HashString((__int64)&GameData_1a8d3c2);
    GameData_21ed160 = (__int64)&GameData_1ae1e69;
    GameData_21ed158 = game_HashString((__int64)&GameData_1ae1e69);
    GameData_21ed170 = (__int64)&GameData_1a98cd4;
    GameData_21ed168 = game_HashString((__int64)&GameData_1a98cd4);
    GameData_21ed180 = (__int64)&GameData_1ab3a25;
    GameData_21ed178 = game_HashString((__int64)&GameData_1ab3a25);
    GameData_21ed190 = (__int64)&GameData_1afcdd3;
    GameData_21ed188 = game_HashString((__int64)&GameData_1afcdd3);
    GameData_21ed1a0 = (__int64)&GameData_1ab3a3d;
    GameData_21ed198 = game_HashString((__int64)&GameData_1ab3a3d);
    GameData_21ed1b0 = (__int64)&GameData_1a90cde;
    GameData_21ed1a8 = game_HashString((__int64)&GameData_1a90cde);
    GameData_21ed1c0 = (__int64)&GameData_1a98cf2;
    GameData_21ed1b8 = game_HashString((__int64)&GameData_1a98cf2);
    GameData_21ed1d0 = (__int64)&GameData_1a90cd0;
    GameData_21ed1c8 = game_HashString((__int64)&GameData_1a90cd0);
    __cxa_guard_release(&GameData_21ed1d8);
    v3 = a1;
  }
  return &GameData_21ed138[2 * v3];
}

__int64* GameVariable_82e7c0(unsigned __int8 a1, int a2)
{
  int v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  unsigned __int8 v13;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ed460,
                            memory_order_acquire) &
       1) == 0) {
    v12 = a2;
    v13 = a1;
    v3 = __cxa_guard_acquire(&GameData_21ed460);
    a2 = v12;
    a1 = v13;
    if (v3 != 0) {
      v4 = GameData_212c650[0];
      GameData_21ed298 = (__int64)&GameData_1af5115;
      v5 = GameData_212c650[0][1];
      GameData_21ed1e0[0] = *GameData_212c650[0];
      GameData_21ed1e8 = v5;
      GameData_21ed1f0 = GameData_21ed1e0[0];
      GameData_21ed1f8 = v5;
      GameData_21ed200 = GameData_21ed1e0[0];
      GameData_21ed208 = v5;
      GameData_21ed210 = GameData_21ed1e0[0];
      GameData_21ed218 = v5;
      GameData_21ed220 = GameData_21ed1e0[0];
      GameData_21ed228 = v5;
      GameData_21ed230 = GameData_21ed1e0[0];
      GameData_21ed238 = v5;
      GameData_21ed240 = GameData_21ed1e0[0];
      GameData_21ed248 = v5;
      GameData_21ed250 = GameData_21ed1e0[0];
      GameData_21ed258 = v5;
      GameData_21ed260 = GameData_21ed1e0[0];
      GameData_21ed268 = v5;
      GameData_21ed270 = GameData_21ed1e0[0];
      GameData_21ed278 = v5;
      GameData_21ed280 = GameData_21ed1e0[0];
      GameData_21ed288 = v5;
      GameData_21ed290 = game_HashString((__int64)&GameData_1af5115);
      GameData_21ed2a8 = (__int64)&GameData_1abbaf3;
      GameData_21ed2a0 = game_HashString((__int64)&GameData_1abbaf3);
      GameData_21ed2b8 = (__int64)&GameData_1af512d;
      GameData_21ed2b0 = game_HashString((__int64)&GameData_1af512d);
      GameData_21ed2c8 = (__int64)&GameData_1a9c900;
      GameData_21ed2c0 = game_HashString((__int64)&GameData_1a9c900);
      GameData_21ed2d8 = (__int64)&GameData_1ae1e8d;
      GameData_21ed2d0 = game_HashString((__int64)&GameData_1ae1e8d);
      GameData_21ed2e8 = (__int64)&GameData_1ae96d1;
      GameData_21ed2e0 = game_HashString((__int64)&GameData_1ae96d1);
      GameData_21ed2f8 = (__int64)&GameData_1ade03a;
      GameData_21ed2f0 = game_HashString((__int64)&GameData_1ade03a);
      GameData_21ed308 = (__int64)&GameData_1ada3b2;
      v6 = game_HashString((__int64)&GameData_1ada3b2);
      v7 = *v4;
      v8 = v4[1];
      GameData_21ed300 = v6;
      GameData_21ed338 = (__int64)&GameData_1a8d3c2;
      GameData_21ed310 = v7;
      GameData_21ed318 = v8;
      GameData_21ed320 = v7;
      GameData_21ed328 = v8;
      GameData_21ed330 = game_HashString((__int64)&GameData_1a8d3c2);
      GameData_21ed348 = (__int64)&GameData_1ae1e69;
      GameData_21ed340 = game_HashString((__int64)&GameData_1ae1e69);
      GameData_21ed358 = (__int64)&GameData_1a98cd4;
      GameData_21ed350 = game_HashString((__int64)&GameData_1a98cd4);
      GameData_21ed368 = (__int64)&GameData_1ab3a25;
      GameData_21ed360 = game_HashString((__int64)&GameData_1ab3a25);
      GameData_21ed378 = (__int64)&GameData_1afcdd3;
      GameData_21ed370 = game_HashString((__int64)&GameData_1afcdd3);
      GameData_21ed388 = (__int64)&GameData_1ab3a3d;
      GameData_21ed380 = game_HashString((__int64)&GameData_1ab3a3d);
      GameData_21ed398 = (__int64)&GameData_1a90cde;
      GameData_21ed390 = game_HashString((__int64)&GameData_1a90cde);
      GameData_21ed3a8 = (__int64)&GameData_1a98cf2;
      v9 = game_HashString((__int64)&GameData_1a98cf2);
      v10 = *v4;
      v11 = v4[1];
      GameData_21ed3a0 = v9;
      GameData_21ed3b0 = v10;
      GameData_21ed3b8 = v11;
      GameData_21ed3c0 = v10;
      GameData_21ed3c8 = v11;
      GameData_21ed3d0 = v10;
      GameData_21ed3d8 = v11;
      GameData_21ed3e0 = v10;
      GameData_21ed3e8 = v11;
      GameData_21ed3f0 = v10;
      GameData_21ed3f8 = v11;
      GameData_21ed400 = v10;
      GameData_21ed408 = v11;
      GameData_21ed410 = v10;
      GameData_21ed418 = v11;
      GameData_21ed420 = v10;
      GameData_21ed428 = v11;
      GameData_21ed430 = v10;
      GameData_21ed438 = v11;
      GameData_21ed440 = v10;
      GameData_21ed448 = v11;
      GameData_21ed450 = v10;
      GameData_21ed458 = v11;
      __cxa_guard_release(&GameData_21ed460);
      a2 = v12;
      a1 = v13;
    }
  }
  return &GameData_21ed1e0[20 * a2 + 2 * a1];
}

__int64* GameVariable_82eaa0(unsigned __int8 a1)
{
  int v2;
  unsigned __int8 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ed520,
                            memory_order_acquire) &
       1) != 0) {
    return &GameData_21ed480[2 * a1];
  }
  v2 = __cxa_guard_acquire(&GameData_21ed520);
  v3 = a1;
  if (v2 != 0) {
    v4 = GameData_212c650[0];
    GameData_21ed498 = (__int64)&GameData_1aac000;
    v5 = GameData_212c650[0][1];
    GameData_21ed480[0] = *GameData_212c650[0];
    GameData_21ed488 = v5;
    GameData_21ed490 = game_HashString((__int64)&GameData_1aac000);
    GameData_21ed4a8 = (__int64)&GameData_1a94c9c;
    GameData_21ed4a0 = game_HashString((__int64)&GameData_1a94c9c);
    GameData_21ed4b8 = (__int64)&GameData_1af8ea7;
    GameData_21ed4b0 = game_HashString((__int64)&GameData_1af8ea7);
    GameData_21ed4c8 = (__int64)&GameData_1ae1eae;
    GameData_21ed4c0 = game_HashString((__int64)&GameData_1ae1eae);
    GameData_21ed4d8 = (__int64)&GameData_1aac01e;
    GameData_21ed4d0 = game_HashString((__int64)&GameData_1aac01e);
    GameData_21ed4e8 = (__int64)&GameData_1ade058;
    GameData_21ed4e0 = game_HashString((__int64)&GameData_1ade058);
    GameData_21ed4f8 = (__int64)&GameData_1ada3e7;
    GameData_21ed4f0 = game_HashString((__int64)&GameData_1ada3e7);
    GameData_21ed508 = (__int64)&GameData_1a89338;
    v6 = game_HashString((__int64)&GameData_1a89338);
    v7 = *v4;
    v8 = v4[1];
    GameData_21ed500 = v6;
    GameData_21ed510 = v7;
    GameData_21ed518 = v8;
    __cxa_guard_release(&GameData_21ed520);
    v3 = a1;
  }
  return &GameData_21ed480[2 * v3];
}

__int64* GameVariable_82eee0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v11;
  __int64* result;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;

  v1 = a1 + 3928064;
  v3 = 0;
  do {
    v4 = a1 + v3;
    v3 += 784;
    *(_QWORD*)v4 = 0;
    *(_QWORD*)(v4 + 8) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 16) = 0;
    *(_QWORD*)(v4 + 20) = 0;
    *(_QWORD*)(v4 + 28) = 0;
    *(_QWORD*)(v4 + 40) = 0;
    *(_QWORD*)(v4 + 48) = 0;
    *(_QWORD*)(v4 + 56) = 0;
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 0;
    *(_QWORD*)(v4 + 80) = 0;
    *(_QWORD*)(v4 + 88) = 0;
    *(_QWORD*)(v4 + 96) = 0;
    *(_QWORD*)(v4 + 104) = 0;
    *(_QWORD*)(v4 + 112) = 0;
    *(_QWORD*)(v4 + 120) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 128) = 0;
    *(_QWORD*)(v4 + 140) = 0;
    *(_QWORD*)(v4 + 132) = 0;
    *(_QWORD*)(v4 + 152) = 0;
    *(_QWORD*)(v4 + 160) = 0;
    *(_QWORD*)(v4 + 168) = 0;
    *(_QWORD*)(v4 + 176) = 0;
    *(_QWORD*)(v4 + 184) = 0;
    *(_QWORD*)(v4 + 192) = 0;
    *(_QWORD*)(v4 + 200) = 0;
    *(_QWORD*)(v4 + 208) = 0;
    *(_QWORD*)(v4 + 216) = 0;
    *(_QWORD*)(v4 + 224) = 0;
    *(_QWORD*)(v4 + 232) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 240) = 0;
    *(_QWORD*)(v4 + 244) = 0;
    *(_QWORD*)(v4 + 356) = 0;
    *(_QWORD*)(v4 + 364) = 0;
    *(_QWORD*)(v4 + 252) = 0;
    *(_QWORD*)(v4 + 312) = 0;
    *(_QWORD*)(v4 + 320) = 0;
    *(_QWORD*)(v4 + 296) = 0;
    *(_QWORD*)(v4 + 304) = 0;
    *(_QWORD*)(v4 + 280) = 0;
    *(_QWORD*)(v4 + 288) = 0;
    *(_QWORD*)(v4 + 264) = 0;
    *(_QWORD*)(v4 + 272) = 0;
    *(_QWORD*)(v4 + 328) = 0;
    *(_QWORD*)(v4 + 336) = 0;
    *(_QWORD*)(v4 + 344) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 352) = 0;
    *(_QWORD*)(v4 + 424) = 0;
    *(_QWORD*)(v4 + 432) = 0;
    *(_QWORD*)(v4 + 408) = 0;
    *(_QWORD*)(v4 + 416) = 0;
    *(_QWORD*)(v4 + 468) = 0;
    *(_QWORD*)(v4 + 476) = 0;
    *(_QWORD*)(v4 + 392) = 0;
    *(_QWORD*)(v4 + 400) = 0;
    *(_QWORD*)(v4 + 376) = 0;
    *(_QWORD*)(v4 + 384) = 0;
    *(_QWORD*)(v4 + 440) = 0;
    *(_QWORD*)(v4 + 448) = 0;
    *(_QWORD*)(v4 + 456) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 464) = 0;
    *(_QWORD*)(v4 + 552) = 0;
    *(_QWORD*)(v4 + 544) = 0;
    *(_QWORD*)(v4 + 536) = 0;
    *(_QWORD*)(v4 + 528) = 0;
    *(_QWORD*)(v4 + 520) = 0;
    *(_QWORD*)(v4 + 580) = 0;
    *(_QWORD*)(v4 + 588) = 0;
    *(_QWORD*)(v4 + 504) = 0;
    *(_QWORD*)(v4 + 512) = 0;
    *(_QWORD*)(v4 + 488) = 0;
    *(_QWORD*)(v4 + 496) = 0;
    *(_QWORD*)(v4 + 560) = 0;
    *(_QWORD*)(v4 + 568) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 576) = 0;
    *(_QWORD*)(v4 + 664) = 0;
    *(_QWORD*)(v4 + 656) = 0;
    *(_QWORD*)(v4 + 648) = 0;
    *(_QWORD*)(v4 + 640) = 0;
    *(_QWORD*)(v4 + 632) = 0;
    *(_QWORD*)(v4 + 624) = 0;
    *(_QWORD*)(v4 + 616) = 0;
    *(_QWORD*)(v4 + 608) = 0;
    *(_QWORD*)(v4 + 600) = 0;
    *(_QWORD*)(v4 + 672) = 0;
    *(_QWORD*)(v4 + 680) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 688) = 0;
    *(_QWORD*)(v4 + 692) = 0;
    *(_QWORD*)(v4 + 700) = 0;
    *(_QWORD*)(v4 + 776) = 0;
    *(_QWORD*)(v4 + 768) = 0;
    *(_QWORD*)(v4 + 760) = 0;
    *(_QWORD*)(v4 + 752) = 0;
    *(_QWORD*)(v4 + 744) = 0;
    *(_QWORD*)(v4 + 736) = 0;
    *(_QWORD*)(v4 + 728) = 0;
    *(_QWORD*)(v4 + 720) = 0;
    *(_QWORD*)(v4 + 712) = 0;
  } while (v3 != 3669904);
  *(_QWORD*)(a1 + 3932040) = 0;
  *(_DWORD*)(a1 + 3932048) = 0;
  v5 = fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 262136, 16, 0);
  v7 = v6 + 262136;
  *(_QWORD*)(v1 + 3992) = v6;
  *(_QWORD*)(v1 + 4008) = v6 + 262136;
  memset(v6, 0, 262136);
  *(_QWORD*)(v1 + 4000) = v7;
  v11 = (_QWORD*)(v1 + 4016);
  *(_QWORD*)(v1 + 4016) = 0;
  *(_QWORD*)(v1 + 4024) = 0;
  *(_QWORD*)(v1 + 4032) = 0;
  *(_QWORD*)(v1 + 4040) = 0;
  *(_DWORD*)(v1 + 4048) = 1065353216;
  result = (__int64*)std___1___next_prime(0x7FFF);
  v13 = *(_QWORD*)(v1 + 4024);
  v14 = (unsigned __int64)result;
  if ((unsigned __int64)result > v13) {
    goto LABEL_4;
  }
  if ((unsigned __int64)result < v13) {
    result = (__int64*)vcvtps_u64_f32((float)*(unsigned __int64*)(v1 + 4040) /
                                      *(float*)(v1 + 4048));
    if (v13 < 3 || (v13 & (v13 - 1)) != 0) {
      result = (__int64*)std___1___next_prime(result);
    }
    else {
      v15 = 1LL << -(char)__clz((unsigned __int64)result - 1);
      if ((unsigned __int64)result >= 2) {
        result = (__int64*)v15;
      }
    }
    if (v14 <= (unsigned __int64)result) {
      v14 = (unsigned __int64)result;
    }
    if (v14 < v13) {
    LABEL_4:
      result = GameRoutine_82f300((__int64*)(v1 + 4016), v14);
    }
  }
  v16 = 0;
  v17 = 3669904;
  do {
    v18 = a1 + v16;
    v19 = (_QWORD*)(a1 + v17);
    v16 += 784;
    v17 += 56;
    *v19 = v18;
    v19[1] = v18 + 112;
    v19[2] = v18 + 224;
    v19[3] = v18 + 336;
    v19[4] = v18 + 448;
    v19[5] = v18 + 560;
    v19[6] = v18 + 672;
  } while (v16 != 3669904);
  v20 = *(_QWORD*)(v1 + 3992);
  *(_QWORD*)(v1 + 3976) = a1 + 3669904;
  *(_DWORD*)(v1 + 3984) = 0;
  *(_QWORD*)(v1 + 4000) = v20;
  if (*(_QWORD*)(v1 + 4040) != 0) {
    v21 = *(_QWORD**)(v1 + 4032);
    if (v21 != nullptr) {
      do {
        v22 = (_QWORD*)*v21;
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v23 = 128;
        }
        else {
          v23 = 56;
        }
        result =
            (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v23, v21);
        v21 = v22;
      } while (v22 != nullptr);
    }
    v24 = *(_QWORD*)(v1 + 4024);
    *(_QWORD*)(v1 + 4032) = 0;
    if (v24 != 0) {
      v25 = v24 & 7;
      if (v24 >= 8) {
        v27 = v24 & 0xFFFFFFFFFFFFFFF8LL;
        v26 = 0;
        do {
          *(_QWORD*)(*v11 + 8 * v26) = 0;
          *(_QWORD*)(*v11 + 8 * v26 + 8) = 0;
          *(_QWORD*)(*v11 + 8 * v26 + 16) = 0;
          *(_QWORD*)(*v11 + 8 * v26 + 24) = 0;
          *(_QWORD*)(*v11 + 8 * v26 + 32) = 0;
          *(_QWORD*)(*v11 + 8 * v26 + 40) = 0;
          *(_QWORD*)(*v11 + 8 * v26 + 48) = 0;
          v28 = *v11 + 8 * v26;
          v26 += 8;
          *(_QWORD*)(v28 + 56) = 0;
        } while (v27 != v26);
      }
      else {
        v26 = 0;
      }
      if (v25 != 0) {
        v29 = 8 * v26;
        do {
          --v25;
          *(_QWORD*)(*v11 + v29) = 0;
          v29 += 8;
        } while (v25 != 0);
      }
    }
    *(_QWORD*)(v1 + 4040) = 0;
  }
  return result;
}

_QWORD* GameVariable_82f8a0(_QWORD* result, __int64 a2)
{
  _QWORD* v2;
  int v3;
  bool v4;
  int v5;
  _QWORD* v6;
  unsigned __int64 v7;
  unsigned __int64 v9;
  unsigned int v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64*** v13;
  __int64** v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _WORD* v20;
  __int64 v21;
  unsigned __int16 v22;
  _WORD* v23[3];

  v2 = result + 491008;
  v3 = *((_DWORD*)result + 983012);
  v4 = __OFSUB__(v3, 1);
  v5 = v3 - 1;
  if (v5 < 0 == v4) {
    *((_DWORD*)result + 983012) = v5;
    v6 = (_QWORD*)(result[491505] - 8LL);
    result[491505] = v6;
    *v6 = a2;
    v7 = result[491511];
    if (v7 != 0 && result[491513] != 0) {
      v9 = v7 - 1;
      v10 = (unsigned __int16)(28087 * ((a2 - (__int64)result) >> 4));
      v11 = (unsigned __int16)(28087 * ((a2 - (__int64)result) >> 4));
      if ((v7 & (v7 - 1)) != 0) {
        v12 = (unsigned __int16)(28087 * ((a2 - (__int64)result) >> 4));
        if (v7 <= v11) {
          v12 = v10 % (unsigned int)v7;
        }
      }
      else {
        v12 = ((_DWORD)v7 - 1) & (unsigned int)v11;
      }
      v13 = *(__int64****)(result[491510] + 8 * v12);
      if (v13 != nullptr) {
        v14 = *v13;
        if (*v13 != nullptr) {
          if ((v7 & v9) == 0) {
            while (1) {
              v16 = v14[1];
              if (v16 == (__int64*)v11) {
                if (*((unsigned __int16*)v14 + 8) == v10) {
                  goto LABEL_26;
                }
              }
              else if (((unsigned __int64)v16 & v9) != v12) {
                return result;
              }
              v14 = (__int64**)*v14;
              if (v14 == nullptr) {
                return result;
              }
            }
          }
          do {
            v15 = (unsigned __int64)v14[1];
            if (v15 == v11) {
              if (*((unsigned __int16*)v14 + 8) == v10) {
              LABEL_26:
                v17 = result[491508];
                v18 = *(_QWORD*)(v17 - 8);
                if (v18 != a2) {
                  v19 = *((unsigned __int16*)v14 + 9);
                  *(_QWORD*)(result[491507] + 8 * v19) = v18;
                  v22 = 28087 * ((unsigned int)(v18 - (_DWORD)result) >> 4);
                  v23[0] = &v22;
                  *(_WORD*)(GameRoutine_82f5a0_alt1(
                                (__int64)(result + 491510), &v22,
                                (__int64)std___1_piecewise_construct_ptr, v23) +
                            18) = v19;
                  v17 = v2[500];
                }
                v2[500] = v17 - 8;
                result = X8CALL_X0(
                    _QWORD*, GameRoutine_82faa0_alt1((void*)((__int64)v23),
                                                     v2 + 502, v14));
                v20 = v23[0];
                v23[0] = nullptr;
                if (v20 != nullptr) {
                  v21 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v21 = 56;
                  }
                  return (_QWORD*)nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v20);
                }
                return result;
              }
            }
            else {
              if (v15 >= v7) {
                v15 %= v7;
              }
              if (v15 != v12) {
                return result;
              }
            }
            v14 = (__int64**)*v14;
          } while (v14 != nullptr);
        }
      }
    }
  }
  return result;
}

__int64 game_GameVariable_Impl_Push_closure_Invoke(__int64 a1, __int64** a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  int v8;
  __int64 result;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  _QWORD* v15;
  unsigned __int64 v16;

  v2 = *a2;
  v3 = *(__int64**)(a1 + 8);
  v4 = fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      32, 16, 0);
  *(_QWORD*)v5 = 0;
  v6 = (_QWORD*)v5;
  v7 = *v2;
  *(_QWORD*)(v5 + 16) = *v2;
  v8 = *((_DWORD*)v2 + 8);
  *(_QWORD*)(v5 + 8) = v7;
  *(_DWORD*)(v5 + 24) = v8;
  result = GameRoutine_82ffa0(v3);
  if (result != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v10 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10, v6);
  }
  else {
    v11 = v3[1];
    v12 = v6[1];
    v13 = v11 - 1;
    if ((v11 & (v11 - 1)) != 0) {
      if (v12 >= v11) {
        v12 %= v11;
      }
    }
    else {
      v12 &= v13;
    }
    v14 = *v3;
    v15 = *(_QWORD**)(*v3 + 8 * v12);
    if (v15 != nullptr) {
      *v6 = *v15;
      *v15 = v6;
    }
    else {
      *v6 = v3[2];
      v3[2] = (__int64)v6;
      *(_QWORD*)(v14 + 8 * v12) = v3 + 2;
      if (*v6 != 0) {
        v16 = *(_QWORD*)(*v6 + 8LL);
        if ((v11 & v13) != 0) {
          if (v16 >= v11) {
            v16 %= v11;
          }
        }
        else {
          v16 &= v13;
        }
        *(_QWORD*)(*v3 + 8 * v16) = v6;
      }
    }
    ++v3[3];
  }
  return result;
}

__int64 game_GameVariable_Impl_Pop_closure_Invoke(__int64 a1, __int64** a2)
{
  __int64* v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  char v6;
  __int64* v7;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  v5 = **a2;
  v7 = &v5;
  result =
      GameRoutine_8305a0(v3, &v5, std___1_piecewise_construct_ptr, &v7, &v6);
  *((_DWORD*)v2 + 8) = *(_DWORD*)(result + 24);
  return result;
}

_QWORD* game_GameVariable_Impl_RegisterUpdate_closure_Invoke_834300(
    _QWORD* result, __int64* a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 i;
  __int64 v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  _QWORD v41[4];
  _QWORD* v42;

  v3 = *a2;
  v4 = result[1];
  v5 = (_QWORD*)(v4 + 3932160);
  if (*(_BYTE*)(*a2 + 72) == 3) {
    result = v41;
    v41[2] = *a2;
    v42 = v41;
    v41[0] = GameData_1f9f790;
    v41[1] = v4;
    v6 = *(_QWORD*)(v3 + 24);
    v7 = *(_QWORD*)(v6 + 16);
    v8 = *(_QWORD*)(v6 + 24);
    if (v7 == v8) {
      goto LABEL_10;
    }
    do {
      v9 = *(_QWORD*)(v7 + 40);
      for (i = *(_QWORD*)(v7 + 48); v9 != i; v9 += 16) {
        if (v42 == nullptr) {
          GameRoutine_60a310(0, a2, a3);
        }
        (*(void (**)(_QWORD*, __int64))(*v42 + 48LL))(v42, v9);
      }
      v7 += 72;
    } while (v7 != v8);
    result = v42;
    if (v42 == v41) {
    LABEL_10:
      v11 = 32;
    }
    else {
      if (v42 == nullptr) {
      LABEL_12:
        v12 = (_QWORD*)v5[65];
        v13 = v5[66];
        if ((unsigned __int64)v12 >= v13) {
          v15 = v5[64];
          v16 = (char*)v12 - v15;
          v17 = ((__int64)v12 - v15) >> 3;
          v18 = v17 + 1;
          if ((unsigned __int64)(v17 + 1) >> 61 != 0) {
            goto LABEL_49;
          }
          v19 = v13 - v15;
          if (v19 >> 2 > v18) {
            v18 = v19 >> 2;
          }
          if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFF8LL) {
            v20 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v20 = v18;
          }
          if (v20 != 0) {
            if (v20 >> 61 != 0) {
              goto LABEL_50;
            }
            v21 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v20, 16, 0);
          }
          else {
            v21 = 0;
          }
          v22 = v21 + 8 * v20;
          v23 = (char*)v12 - v15;
          v24 = (__int64)&v16[v21 + -8 * v17];
          *(_QWORD*)&v16[v21] = v3;
          v14 = (__int64)&v16[v21 + 8];
          result = (_QWORD*)memcpy(v24, v15, v23);
          v5[64] = v24;
          v5[65] = v14;
          v5[66] = v22;
          if (v15 != 0) {
            v25 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v25 = 56;
            }
            result = (_QWORD*)nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v15);
          }
        }
        else {
          *v12 = v3;
          v14 = (__int64)(v12 + 1);
        }
        v5[65] = v14;
        goto LABEL_29;
      }
      v11 = 40;
    }
    result = (_QWORD*)(*(__int64 (**)(_QWORD*, __int64*, __int64))(
        *result + v11))(result, a2, a3);
    goto LABEL_12;
  }
LABEL_29:
  if (*(_QWORD*)(v3 + 88) == 0) {
    return result;
  }
  v27 = (_QWORD*)v5[62];
  v26 = v5[63];
  if ((unsigned __int64)v27 >= v26) {
    v29 = v5[61];
    v30 = (char*)v27 - v29;
    v31 = ((__int64)v27 - v29) >> 3;
    v32 = v31 + 1;
    if ((unsigned __int64)(v31 + 1) >> 61 == 0) {
      v33 = v26 - v29;
      v34 = fw_memory_g_heap_manager_ptr;
      if (v33 >> 2 > v32) {
        v32 = v33 >> 2;
      }
      if ((unsigned __int64)v33 >= 0x7FFFFFFFFFFFFFF8LL) {
        v35 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v35 = v32;
      }
      if (v35 == 0) {
        v36 = 0;
      LABEL_42:
        v37 = v36 + 8 * v35;
        v38 = (char*)v27 - v29;
        v39 = (__int64)&v30[v36 + -8 * v31];
        *(_QWORD*)&v30[v36] = v3;
        v28 = (__int64)&v30[v36 + 8];
        result = (_QWORD*)memcpy(v39, v29, v38);
        v5[61] = v39;
        v5[62] = v28;
        v5[63] = v37;
        if (v29 != 0) {
          v40 = 128;
          if (*(_QWORD*)(*(_QWORD*)v34 + 200LL) == 0) {
            v40 = 56;
          }
          result =
              (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v34 + v40, v29);
        }
        goto LABEL_46;
      }
      if (v35 >> 61 == 0) {
        v36 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v35, 16, 0);
        goto LABEL_42;
      }
    LABEL_50:
      GameRoutine_60a210(result);
    }
  LABEL_49:
    GameRoutine_834b20(result, a2, a3);
  }
  *v27 = v3;
  v28 = (__int64)(v27 + 1);
LABEL_46:
  v5[62] = v28;
  return result;
}

_QWORD* game_GameVariable_Impl_RegisterUpdate_closure_Invoke_8346a0(__int64 a1,
                                                                    __int64 a2)
{
  __int64 v2;
  _QWORD* result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  char* v25;
  char* v26;
  __int64 v27;
  char* v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  _QWORD v35[4];
  _QWORD* v36;

  v2 = *(_QWORD*)(a1 + 8);
  result = (_QWORD*)game_GameVariableTable_Find(v2, a2);
  if (result == nullptr) {
    return result;
  }
  v7 = *(_QWORD*)(a1 + 16);
  v8 = result;
  v35[0] = GameData_1f9f800;
  v35[1] = v2;
  v36 = v35;
  v10 = result[12];
  v9 = result[13];
  v35[2] = v7;
  if (v10 >= v9) {
    v14 = result[11];
    v15 = v10 - v14;
    v16 = 1 - 0x5555555555555555LL * (v15 >> 4);
    if (v16 > 0x555555555555555LL) {
      GameRoutine_835d90(result, v5, v6);
    }
    v17 = fw_memory_g_heap_manager_ptr;
    v18 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v9 - v14) >> 4);
    v19 = 2 * v18;
    if (2 * v18 <= v16) {
      v19 = 1 - 0x5555555555555555LL * (v15 >> 4);
    }
    if (v18 >= 0x2AAAAAAAAAAAAAALL) {
      v20 = 0x555555555555555LL;
    }
    else {
      v20 = v19;
    }
    if (v20 != 0) {
      if (v20 > 0x555555555555555LL) {
        GameRoutine_60a210(result);
      }
      v21 = 3 * v20;
      v22 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v20, 16, 0);
      v23 = v36;
      v15 += v22;
      v24 = v22 + 16 * v21;
      if (v36 == nullptr) {
        *(_QWORD*)(v15 + 32) = 0;
        goto LABEL_18;
      }
      if (v36 != v35) {
        *(_QWORD*)(v15 + 32) =
            (*(__int64 (**)(_QWORD*, __int64, __int64))(*v36 + 16LL))(v36, v11,
                                                                      v12);
      LABEL_18:
        v25 = (char*)v8[11];
        v26 = (char*)v8[12];
        v13 = v15 + 48;
        v27 = v15 + v25 - v26;
        if (v26 == v25) {
        LABEL_33:
          v8[11] = v27;
          v8[12] = v13;
          v8[13] = v24;
          if (v25 != nullptr) {
            v33 = 128;
            if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) == 0) {
              v33 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v33, v25);
          }
          goto LABEL_37;
        }
        v28 = (char*)v8[11];
        v29 = v15 + v25 - v26;
        do {
          v30 = *((char**)v28 + 4);
          if (v30 != nullptr) {
            if (v28 == v30) {
              *(_QWORD*)(v29 + 32) = v29;
              (*(void (**)(_QWORD, __int64))(**((_QWORD**)v28 + 4) + 24LL))(
                  *((_QWORD*)v28 + 4), v29);
            }
            else {
              *(_QWORD*)(v29 + 32) = v30;
              *((_QWORD*)v28 + 4) = 0;
            }
          }
          else {
            *(_QWORD*)(v29 + 32) = 0;
          }
          v28 += 48;
          v29 += 48;
        } while (v28 != v26);
        while (1) {
          v32 = *((char**)v25 + 4);
          if (v25 == v32) {
            v31 = 32;
          }
          else {
            if (v32 == nullptr) {
              goto LABEL_28;
            }
            v31 = 40;
          }
          (*(void (**)(char*, __int64, __int64))(*(_QWORD*)v32 + v31))(v32, v11,
                                                                       v12);
        LABEL_28:
          v25 += 48;
          if (v25 == v26) {
            v25 = (char*)v8[11];
            goto LABEL_33;
          }
        }
      }
    }
    else {
      v23 = v35;
      v24 = 0;
    }
    *(_QWORD*)(v15 + 32) = v15;
    (*(void (**)(_QWORD*, __int64))(*v23 + 24LL))(v23, v15);
    goto LABEL_18;
  }
  *(_QWORD*)(v10 + 32) = v10;
  (*(void (**)(_QWORD*, unsigned __int64))(*v36 + 24LL))(v36, v10);
  v13 = v10 + 48;
LABEL_37:
  result = v36;
  v8[12] = v13;
  if (result == v35) {
    v34 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v34 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64))(*result + v34))(
      result, v11, v12);
}

__int64

game_GameVariable_Impl_RegisterUpdate_closure_Invoke_834a40(__int64 result)
{
  __int16* v1;
  __int64 v2;
  __int64 v3;
  int v4;

  if (game_gmap_GmapClock_instance_ != 0) {
    v1 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v1 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if (v1[1] * *v1 * v1[2] != 0) {
    v2 = *(_QWORD*)(result + 8);
    if ((*(_BYTE*)(v2 + 3932768) & 0x76) == 0) {
      v3 = *(_QWORD*)(result + 16);
      *(_BYTE*)(v2 + 3932768) |= 8u;
      v4 = *(unsigned __int8*)(v3 + 73);
      if (v4 == 2) {
        result = GameRoutine_8309a0(v2, v3, (__int64)v1);
      }
      else if (v4 == 1) {
        result = GameRoutine_8308a0(v2, v3, (__int64)v1);
      }
      *(_BYTE*)(v2 + 3932768) &= ~8u;
    }
  }
  return result;
}

__int64 game_GameVariable_EachMerge_lambda0_Invoke(__int64 result,
                                                   unsigned __int8* a2,
                                                   __int64 a3)
{
  __int64 v3;
  __int64* v4;
  __int64* i;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  if ((unsigned int)*a2 - 7 <= 2) {
    v3 = result;
    v4 = *(__int64**)(*(_QWORD*)(*(_QWORD*)(result + 16) + 8LL) + 24LL * *a2 +
                      3932168);
    for (i = *(__int64**)(*(_QWORD*)(*(_QWORD*)(result + 16) + 8LL) +
                          24LL * *a2 + 3932176);
         v4 != i; result = (*(__int64 (**)(__int64, __int64*))(
                      *(_QWORD*)v7 + 48LL))(v7, &v8)) {
      v6 = *v4++;
      v7 = *(_QWORD*)(v3 + 64);
      v8 = v6;
      if (v7 == 0) {
        GameRoutine_60a310(0, a2, a3);
      }
    }
  }
  return result;
}

__int64 game_GameVariable_ClrForViewer_lambda0_Invoke(__int64 a1,
                                                      unsigned __int8* a2)
{
  unsigned __int64 v2;
  bool v3;
  unsigned int v4;
  int v5;

  v2 = *a2;
  v3 = v2 >= 0x11;
  v4 = 0x107FFu >> v2;
  v5 = !v3;
  return v5 & v4;
}

__int64 game_GameVariable_Serialize_lambda0_Invoke_836410(__int64 a1,
                                                          unsigned __int8* a2)
{
  unsigned __int64 v2;
  bool v3;
  unsigned int v4;
  int v5;

  v2 = *a2;
  v3 = v2 >= 0xF;
  v4 = 0x7FF6u >> v2;
  v5 = !v3;
  return v5 & v4;
}

__int64 game_GameVariable_Deserialize_lambda0_Invoke_836500(__int64 a1,
                                                            unsigned __int8* a2)
{
  unsigned __int64 v2;
  bool v3;
  unsigned int v4;
  int v5;

  v2 = *a2;
  v3 = v2 >= 0xF;
  v4 = 0x7FF6u >> v2;
  v5 = !v3;
  return v5 & v4;
}

__int64 game_GameVariable_Serialize_lambda0_Invoke_836620(_QWORD* a1, char* a2,
                                                          __int64 a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  int v9;
  __int64 (**v10)(__int64, int*);
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int** v16;
  int** v17;
  __int16 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int* v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  char* v38;
  unsigned __int64 v39;
  char* v40;
  int v41;
  bool v42;
  unsigned __int64 v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int* v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  int v74;
  __int64 v75;
  __int64 v76;
  char v77[4];
  int v78;

  v4 = (unsigned __int8)*a2;
  v5 = a1[1];
  v6 = *(_QWORD*)(a1[3] + 32LL);
  v77[0] = *a2;
  if (v6 == 0) {
    GameRoutine_60a310(0, a2, a3);
  }
  result = (*(__int64 (**)(__int64, char*))(*(_QWORD*)v6 + 48LL))(v6, v77);
  if ((result & 1) != 0) {
    v8 = a1[2];
    v9 = game_HashString32(*(&GameData_1f9ebe0 + v4));
    v10 = *(__int64 (***)(__int64, int*))v8;
    v78 = v9;
    if (((*v10)(v8, &v78) & 1) == 0) {
      return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v8 + 8LL))(v8, 0);
    }
    v11 = *(int*)(v8 + 20);
    v12 = *(_QWORD*)(v5 + 8) + 24LL * (unsigned int)v4;
    *(_DWORD*)(v8 + 20) = v11 + 1;
    v12 += 3932160;
    *(_BYTE*)(*(_QWORD*)(v8 + 8) + v11) = (unsigned int)(v4 - 1) < 2;
    v13 = *(int*)(v8 + 20);
    v14 = *(_QWORD*)(v8 + 8);
    *(_DWORD*)(v8 + 20) = v13 + 1;
    *(_BYTE*)(v14 + v13) = 0;
    v15 = *(int*)(v8 + 20);
    *(_DWORD*)(v8 + 20) = v15 + 1;
    *(_BYTE*)(*(_QWORD*)(v8 + 8) + v15) = 0;
    v16 = *(int***)(v12 + 8);
    v17 = *(int***)(v12 + 16);
    if ((unsigned int)(v4 - 1) > 1) {
      if (v16 != v17) {
        v18 = 0;
        do {
          v49 = *v16;
          if ((*v16)[7] != (*v16)[8]) {
            v50 = *(int*)(v8 + 20);
            v51 = *v49;
            *(_DWORD*)(v8 + 20) = v50 + 1;
            *(_BYTE*)(*(_QWORD*)(v8 + 8) + v50) = v51;
            v52 = *(int*)(v8 + 20);
            *(_DWORD*)(v8 + 20) = v52 + 1;
            *(_BYTE*)(*(_QWORD*)(v8 + 8) + v52) = BYTE1(v51);
            v53 = *(int*)(v8 + 20);
            *(_DWORD*)(v8 + 20) = v53 + 1;
            *(_BYTE*)(*(_QWORD*)(v8 + 8) + v53) = BYTE2(v51);
            v54 = *(int*)(v8 + 20);
            *(_DWORD*)(v8 + 20) = v54 + 1;
            *(_BYTE*)(*(_QWORD*)(v8 + 8) + v54) = HIBYTE(v51);
            v55 = v49[8];
            if (v55 >= 0x10) {
              v56 = *(int*)(v8 + 20);
              *(_DWORD*)(v8 + 20) = v56 + 1;
              *(_BYTE*)(*(_QWORD*)(v8 + 8) + v56) = -1;
              v57 = *(int*)(v8 + 20);
              *(_DWORD*)(v8 + 20) = v57 + 1;
              *(_BYTE*)(*(_QWORD*)(v8 + 8) + v57) = v55;
              v58 = *(int*)(v8 + 20);
              *(_DWORD*)(v8 + 20) = v58 + 1;
              *(_BYTE*)(*(_QWORD*)(v8 + 8) + v58) = BYTE1(v55);
              LODWORD(v57) = HIWORD(v55);
              v55 >>= 24;
              v59 = *(int*)(v8 + 20);
              *(_DWORD*)(v8 + 20) = v59 + 1;
              *(_BYTE*)(*(_QWORD*)(v8 + 8) + v59) = v57;
            }
            v48 = *(int*)(v8 + 20);
            ++v18;
            *(_DWORD*)(v8 + 20) = v48 + 1;
            *(_BYTE*)(*(_QWORD*)(v8 + 8) + v48) = v55;
          }
          ++v16;
        } while (v16 != v17);
        goto LABEL_27;
      }
    }
    else if (v16 != v17) {
      v18 = 0;
      do {
        v21 = *(int*)(v8 + 20);
        v22 = *v16;
        v23 = **v16;
        *(_DWORD*)(v8 + 20) = v21 + 1;
        *(_BYTE*)(*(_QWORD*)(v8 + 8) + v21) = v23;
        v24 = *(int*)(v8 + 20);
        *(_DWORD*)(v8 + 20) = v24 + 1;
        *(_BYTE*)(*(_QWORD*)(v8 + 8) + v24) = BYTE1(v23);
        v25 = *(int*)(v8 + 20);
        *(_DWORD*)(v8 + 20) = v25 + 1;
        *(_BYTE*)(*(_QWORD*)(v8 + 8) + v25) = BYTE2(v23);
        v26 = *(int*)(v8 + 20);
        *(_DWORD*)(v8 + 20) = v26 + 1;
        *(_BYTE*)(*(_QWORD*)(v8 + 8) + v26) = HIBYTE(v23);
        v27 = *(int*)(v8 + 20);
        v28 = v22[1];
        *(_DWORD*)(v8 + 20) = v27 + 1;
        *(_BYTE*)(*(_QWORD*)(v8 + 8) + v27) = v28;
        v29 = *(int*)(v8 + 20);
        *(_DWORD*)(v8 + 20) = v29 + 1;
        *(_BYTE*)(*(_QWORD*)(v8 + 8) + v29) = BYTE1(v28);
        v30 = *(int*)(v8 + 20);
        *(_DWORD*)(v8 + 20) = v30 + 1;
        *(_BYTE*)(*(_QWORD*)(v8 + 8) + v30) = BYTE2(v28);
        v31 = *(int*)(v8 + 20);
        *(_DWORD*)(v8 + 20) = v31 + 1;
        *(_BYTE*)(*(_QWORD*)(v8 + 8) + v31) = HIBYTE(v28);
        v32 = v22[8];
        if (v32 >= 0x10) {
          v33 = *(int*)(v8 + 20);
          *(_DWORD*)(v8 + 20) = v33 + 1;
          *(_BYTE*)(*(_QWORD*)(v8 + 8) + v33) = -1;
          v34 = *(int*)(v8 + 20);
          *(_DWORD*)(v8 + 20) = v34 + 1;
          *(_BYTE*)(*(_QWORD*)(v8 + 8) + v34) = v32;
          v35 = *(int*)(v8 + 20);
          *(_DWORD*)(v8 + 20) = v35 + 1;
          *(_BYTE*)(*(_QWORD*)(v8 + 8) + v35) = BYTE1(v32);
          LODWORD(v34) = HIWORD(v32);
          v32 >>= 24;
          v36 = *(int*)(v8 + 20);
          *(_DWORD*)(v8 + 20) = v36 + 1;
          *(_BYTE*)(*(_QWORD*)(v8 + 8) + v36) = v34;
        }
        v37 = *(int*)(v8 + 20);
        *(_DWORD*)(v8 + 20) = v37 + 1;
        *(_BYTE*)(*(_QWORD*)(v8 + 8) + v37) = v32;
        v38 = (char*)v22 + 49;
        v39 = *((unsigned __int8*)v22 + 48);
        v40 = *((char**)v22 + 8);
        v41 = v22[14];
        v42 = (v39 & 1) == 0;
        v43 = v39 >> 1;
        if (v42) {
          v44 = v38;
        }
        else {
          v44 = v40;
        }
        if (v42) {
          v41 = v43;
        }
        if (v41 != 0) {
          v45 = *(int*)(v8 + 20);
          v46 = (unsigned int)(v41 + 1);
          *(_DWORD*)(v8 + 20) = v45 + 1;
          *(_BYTE*)(*(_QWORD*)(v8 + 8) + v45) = v41 + 1;
          v47 = *(int*)(v8 + 20);
          *(_DWORD*)(v8 + 20) = v47 + 1;
          *(_BYTE*)(*(_QWORD*)(v8 + 8) + v47) = BYTE1(v46);
          if ((v41 & 0x80000000) == 0) {
            memmove(*(_QWORD*)(v8 + 8) + *(int*)(v8 + 20), v44, v46);
            *(_DWORD*)(v8 + 20) += v46;
          }
        }
        else {
          v19 = *(int*)(v8 + 20);
          *(_DWORD*)(v8 + 20) = v19 + 1;
          *(_BYTE*)(*(_QWORD*)(v8 + 8) + v19) = 0;
          v20 = *(int*)(v8 + 20);
          *(_DWORD*)(v8 + 20) = v20 + 1;
          *(_BYTE*)(*(_QWORD*)(v8 + 8) + v20) = 0;
        }
        ++v18;
        ++v16;
      } while (v16 != v17);
      goto LABEL_27;
    }
    v18 = 0;
  LABEL_27:
    v60 = *(_QWORD*)(v8 + 32);
    v61 = *(_QWORD*)(v8 + 40);
    v62 = ((v61 - v60) << 7) - 1;
    if (v61 == v60) {
      v62 = 0;
    }
    v63 = *(_QWORD*)(v8 + 64) + *(_QWORD*)(v8 + 56);
    if (v62 == v63) {
      GameRoutine_660f80(v8 + 24);
      v60 = *(_QWORD*)(v8 + 32);
      v63 = *(_QWORD*)(v8 + 64) + *(_QWORD*)(v8 + 56);
    }
    *(_DWORD*)(*(_QWORD*)(v60 + 8 * (v63 >> 10)) + 4 * (v63 & 0x3FF)) =
        *(_DWORD*)(v8 + 20);
    *(_DWORD*)(v8 + 20) = v13 + 1;
    ++*(_QWORD*)(v8 + 64);
    *(_BYTE*)(*(_QWORD*)(v8 + 8) + v13) = v18;
    v64 = *(int*)(v8 + 20);
    *(_DWORD*)(v8 + 20) = v64 + 1;
    *(_BYTE*)(*(_QWORD*)(v8 + 8) + v64) = HIBYTE(v18);
    v66 = *(_QWORD*)(v8 + 56);
    v65 = *(_QWORD*)(v8 + 64);
    v68 = *(_QWORD*)(v8 + 32);
    v67 = *(_QWORD*)(v8 + 40);
    v42 = v67 == v68;
    v69 = v65 - 1 + v66;
    v70 = v69 >> 10;
    v71 = v69 & 0x3FF;
    v72 = ((v67 - v68) << 7) - 1;
    v73 = *(_QWORD*)(v68 + 8 * v70);
    if (v42) {
      v72 = 0;
    }
    v74 = *(_DWORD*)(v73 + 4 * v71);
    *(_QWORD*)(v8 + 64) = v65 - 1;
    *(_DWORD*)(v8 + 20) = v74;
    if ((unsigned __int64)(v72 - (v65 + v66) + 1) >= 0x800) {
      v75 = *(_QWORD*)(v67 - 8);
      if (v75 != 0) {
        v76 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v76 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v76, v75);
        v67 = *(_QWORD*)(v8 + 40);
      }
      *(_QWORD*)(v8 + 40) = v67 - 8;
    }
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v8 + 8LL))(v8, 0);
  }
  return result;
}

__int64 game_GameVariable_Deserialize_lambda0_Invoke_836c80(__int64 a1,
                                                            _BYTE* a2,
                                                            __int64 a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int16 v13;
  unsigned __int16 v14;
  int v15;
  __int64 v16;
  char v17;
  int v18;
  char* v19;
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
  int v30;
  int v31;
  int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  char* v49;
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
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  __int64 v78;
  __int64 v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  unsigned __int64 v88;
  unsigned __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  __int64** v93;
  __int64* v94;
  unsigned __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  char* v98;

  v4 = (unsigned __int8)*a2;
  v5 = *(_QWORD*)(a1 + 8);
  v6 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 32LL);
  LOBYTE(v97) = *a2;
  if (v6 == 0) {
    GameRoutine_60a310(0, a2, a3);
  }
  result = (*(__int64 (**)(__int64, unsigned __int64*))(*(_QWORD*)v6 + 48LL))(
      v6, &v97);
  if ((result & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 24);
    v9 = *(_DWORD*)(a1 + 16);
    LODWORD(v97) = game_HashString32(*(&GameData_1f9ebe0 + v4));
    if (((*(__int64 (**)(__int64, unsigned __int64*))(*(_QWORD*)v8 + 16LL))(
             v8, &v97) &
         1) != 0) {
      v10 = *(int*)(v8 + 20);
      v11 = *(_QWORD*)(v8 + 8);
      *(_DWORD*)(v8 + 20) = v10 + 1;
      v12 = *(unsigned __int8*)(v11 + v10);
      *(_DWORD*)(v8 + 20) = v10 + 2;
      v13 = *(unsigned __int8*)(v11 + v10 + 1);
      *(_DWORD*)(v8 + 20) = v10 + 3;
      v14 = *(unsigned __int8*)(v11 + v10 + 2) << 8;
      v15 = (unsigned __int16)((unsigned __int8)v13 | v14);
      *(_BYTE*)(*(_QWORD*)(v5 + 8) + 3932768LL) |= 2u;
      v16 = *(_QWORD*)(v5 + 8);
      v17 = *(_BYTE*)(v16 + 3932768) & 0xFE;
      if ((unsigned __int8)(v4 - 3) < 0xFEu) {
        ++v17;
      }
      *(_BYTE*)(v16 + 3932768) = v17;
      if (v9 <= 1) {
        if (((unsigned __int8)v13 | v14) != 0) {
          v39 = (unsigned __int16)(v14 + v13);
          if (v12 != 0) {
            do {
              v50 = *(int*)(v8 + 20);
              v51 = *(_QWORD*)(v8 + 8);
              v52 = v50 + 8;
              *(_DWORD*)(v8 + 20) = v50 + 1;
              v53 = *(unsigned __int8*)(v51 + v50);
              *(_DWORD*)(v8 + 20) = v50 + 2;
              v54 = *(unsigned __int8*)(v51 + v50 + 1);
              *(_DWORD*)(v8 + 20) = v50 + 3;
              v55 = *(unsigned __int8*)(v51 + v50 + 2);
              *(_DWORD*)(v8 + 20) = v50 + 4;
              v56 = *(unsigned __int8*)(v51 + v50 + 3);
              *(_DWORD*)(v8 + 20) = v50 + 5;
              v57 = *(unsigned __int8*)(v51 + v50 + 4);
              *(_DWORD*)(v8 + 20) = v50 + 6;
              v58 = *(unsigned __int8*)(v51 + v50 + 5);
              *(_DWORD*)(v8 + 20) = v50 + 7;
              v59 = v53 | (v54 << 8);
              v60 = v50 + 9;
              v61 = *(unsigned __int8*)(v51 + v50 + 6);
              *(_DWORD*)(v8 + 20) = v50 + 8;
              v62 = v59 | (v55 << 16);
              v63 = v50 + 10;
              v64 = *(unsigned __int8*)(v51 + v50 + 7);
              v65 = v62 | (v56 << 24);
              *(_DWORD*)(v8 + 20) = v50 + 9;
              v66 = v50 + 11;
              v67 = v65 | (v57 << 32);
              v68 = v50 + 12;
              v69 = v67 | (v58 << 40);
              v70 = v50 + 13;
              v71 = v50 + 14;
              v97 = v69 | (v61 << 48) | (v64 << 56);
              v72 = *(unsigned __int8*)(v51 + v52);
              *(_DWORD*)(v8 + 20) = v63;
              v73 = *(unsigned __int8*)(v51 + v60);
              *(_DWORD*)(v8 + 20) = v66;
              v74 = *(unsigned __int8*)(v51 + v63);
              *(_DWORD*)(v8 + 20) = v68;
              v75 = *(unsigned __int8*)(v51 + v66);
              *(_DWORD*)(v8 + 20) = v70;
              LODWORD(v68) = *(unsigned __int8*)(v51 + v68);
              *(_DWORD*)(v8 + 20) = v71;
              v76 = v68 | (*(unsigned __int8*)(v51 + v70) << 8);
              if (v76 != 0) {
                v49 = (char*)(v51 + v71);
                *(_DWORD*)(v8 + 20) = v71 + v76;
              }
              else {
                v49 = nullptr;
              }
              v98 = v49;
              GameVariable_828fa0(v5, v4, &v97,
                                  v72 | (v73 << 8) | (v74 << 16) | (v75 << 24));
              --v39;
            } while (v39 != 0);
          }
          else {
            do {
              v40 = *(int*)(v8 + 20);
              v41 = *(_QWORD*)(v8 + 8);
              *(_DWORD*)(v8 + 20) = v40 + 1;
              v42 = *(unsigned __int8*)(v41 + v40);
              *(_DWORD*)(v8 + 20) = v40 + 2;
              v43 = *(unsigned __int8*)(v41 + v40 + 1);
              *(_DWORD*)(v8 + 20) = v40 + 3;
              v44 = *(unsigned __int8*)(v41 + v40 + 2);
              *(_DWORD*)(v8 + 20) = v40 + 4;
              v45 = *(unsigned __int8*)(v41 + v40 + 3);
              *(_DWORD*)(v8 + 20) = v40 + 5;
              v46 = *(unsigned __int8*)(v41 + v40 + 4);
              *(_DWORD*)(v8 + 20) = v40 + 6;
              v47 = *(unsigned __int8*)(v41 + v40 + 5);
              *(_DWORD*)(v8 + 20) = v40 + 7;
              v48 = *(unsigned __int8*)(v41 + v40 + 6);
              *(_DWORD*)(v8 + 20) = v40 + 8;
              v97 =
                  v42 | (v43 << 8) | (v44 << 16) | (v45 << 24) | (v46 << 32) |
                  (v47 << 40) | (v48 << 48) |
                  ((unsigned __int64)*(unsigned __int8*)(v41 + v40 + 7) << 56);
              v98 = &GameData_1a9f09e;
              *(_DWORD*)(v8 + 20) = v40 + 9;
              LODWORD(v42) = *(unsigned __int8*)(v41 + v40 + 8);
              *(_DWORD*)(v8 + 20) = v40 + 10;
              LODWORD(v43) = v42 | (*(unsigned __int8*)(v41 + v40 + 9) << 8);
              *(_DWORD*)(v8 + 20) = v40 + 11;
              LODWORD(v44) = *(unsigned __int8*)(v41 + v40 + 10);
              *(_DWORD*)(v8 + 20) = v40 + 12;
              GameVariable_828fa0(
                  v5, v4, &v97,
                  v43 | ((_DWORD)v44 << 16) |
                      (*(unsigned __int8*)(v41 + v40 + 11) << 24));
              --v39;
            } while (v39 != 0);
          }
        }
      }
      else if (((unsigned __int8)v13 | v14) != 0) {
        if (v12 != 0) {
          v18 = (unsigned __int16)(v14 + v13);
          do {
            v20 = *(int*)(v8 + 20);
            v21 = *(_QWORD*)(v8 + 8);
            *(_DWORD*)(v8 + 20) = v20 + 1;
            v22 = *(unsigned __int8*)(v21 + v20);
            *(_DWORD*)(v8 + 20) = v20 + 2;
            v23 = *(unsigned __int8*)(v21 + v20 + 1);
            *(_DWORD*)(v8 + 20) = v20 + 3;
            v24 = *(unsigned __int8*)(v21 + v20 + 2);
            *(_DWORD*)(v8 + 20) = v20 + 4;
            v25 = *(unsigned __int8*)(v21 + v20 + 3);
            *(_DWORD*)(v8 + 20) = v20 + 5;
            v26 = *(unsigned __int8*)(v21 + v20 + 4);
            *(_DWORD*)(v8 + 20) = v20 + 6;
            v27 = *(unsigned __int8*)(v21 + v20 + 5);
            *(_DWORD*)(v8 + 20) = v20 + 7;
            v28 = *(unsigned __int8*)(v21 + v20 + 6);
            *(_DWORD*)(v8 + 20) = v20 + 8;
            v97 = v22 | (v23 << 8) | (v24 << 16) | (v25 << 24) | (v26 << 32) |
                  (v27 << 40) | (v28 << 48) |
                  ((unsigned __int64)*(unsigned __int8*)(v21 + v20 + 7) << 56);
            v29 = v20 + 9;
            *(_DWORD*)(v8 + 20) = v20 + 9;
            v30 = *(unsigned __int8*)(v21 + v20 + 8);
            if (v30 == 255) {
              *(_DWORD*)(v8 + 20) = v20 + 10;
              v31 = *(unsigned __int8*)(v21 + v29);
              *(_DWORD*)(v8 + 20) = v20 + 11;
              v32 = v31 | (*(unsigned __int8*)(v21 + v20 + 10) << 8);
              *(_DWORD*)(v8 + 20) = v20 + 12;
              v33 = v32 | (*(unsigned __int8*)(v21 + v20 + 11) << 16);
              LODWORD(v29) = v20 + 13;
              *(_DWORD*)(v8 + 20) = v20 + 13;
              v30 = v33 | (*(unsigned __int8*)(v21 + v20 + 12) << 24);
            }
            v34 = (int)v29;
            v35 = (int)v29 + 1LL;
            *(_DWORD*)(v8 + 20) = v35;
            v36 = *(unsigned __int8*)(v21 + v34);
            v37 = v34 + 2;
            *(_DWORD*)(v8 + 20) = v37;
            v38 = v36 | (*(unsigned __int8*)(v21 + v35) << 8);
            if (v38 != 0) {
              v19 = (char*)(v21 + v37);
              *(_DWORD*)(v8 + 20) = v37 + v38;
            }
            else {
              v19 = nullptr;
            }
            v98 = v19;
            GameVariable_828fa0(v5, v4, &v97, v30);
            --v18;
          } while (v18 != 0);
        }
        else {
          v77 = 0;
          do {
            v78 = *(int*)(v8 + 20);
            v79 = *(_QWORD*)(v8 + 8);
            *(_DWORD*)(v8 + 20) = v78 + 1;
            v80 = *(unsigned __int8*)(v79 + v78);
            *(_DWORD*)(v8 + 20) = v78 + 2;
            v81 = *(unsigned __int8*)(v79 + v78 + 1);
            *(_DWORD*)(v8 + 20) = v78 + 3;
            v82 = *(unsigned __int8*)(v79 + v78 + 2);
            *(_DWORD*)(v8 + 20) = v78 + 4;
            v83 = *(unsigned __int8*)(v79 + v78 + 3);
            *(_DWORD*)(v8 + 20) = v78 + 5;
            v84 = *(unsigned __int8*)(v79 + v78 + 4);
            if (v84 == 255) {
              *(_DWORD*)(v8 + 20) = v78 + 6;
              v85 = *(unsigned __int8*)(v79 + v78 + 5);
              *(_DWORD*)(v8 + 20) = v78 + 7;
              v86 = v85 | (*(unsigned __int8*)(v79 + v78 + 6) << 8);
              *(_DWORD*)(v8 + 20) = v78 + 8;
              v87 = *(unsigned __int8*)(v79 + v78 + 7);
              *(_DWORD*)(v8 + 20) = v78 + 9;
              v84 = v86 | (v87 << 16) |
                    (*(unsigned __int8*)(v79 + v78 + 8) << 24);
            }
            v88 = *(_QWORD*)(*(_QWORD*)(v5 + 8) + 3932784LL);
            if (v88 != 0 && *(_QWORD*)(*(_QWORD*)(v5 + 8) + 3932800LL) != 0) {
              v90 = v80 | (v81 << 8) | (v82 << 16) | (unsigned int)(v83 << 24);
              v91 = v88 - 1;
              if ((v88 & (v88 - 1)) != 0) {
                v92 = v90;
                if (v88 <= v90) {
                  v92 = (unsigned int)v90 % (unsigned int)v88;
                }
              }
              else {
                v92 = ((_DWORD)v88 - 1) & (unsigned int)v90;
              }
              v93 = *(__int64***)(*(_QWORD*)(*(_QWORD*)(v5 + 8) + 3932776LL) +
                                  8 * v92);
              if (v93 != nullptr) {
                v94 = *v93;
                if (v94 != nullptr) {
                  if ((v88 & v91) == 0) {
                    while (1) {
                      v96 = v94[1];
                      if (v96 == v90) {
                        if (*((_DWORD*)v94 + 4) == (_DWORD)v90) {
                          goto LABEL_27;
                        }
                      }
                      else if ((v96 & v91) != v92) {
                        goto LABEL_28;
                      }
                      v94 = (__int64*)*v94;
                      if (v94 == nullptr) {
                        goto LABEL_28;
                      }
                    }
                  }
                  do {
                    v95 = v94[1];
                    if (v95 == v90) {
                      if (*((_DWORD*)v94 + 4) == (_DWORD)v90) {
                      LABEL_27:
                        GameVariable_828fa0(v5, v4, (unsigned __int64*)v94 + 3,
                                            v84);
                        break;
                      }
                    }
                    else {
                      if (v95 >= v88) {
                        v95 %= v88;
                      }
                      if (v95 != v92) {
                        break;
                      }
                    }
                    v94 = (__int64*)*v94;
                  } while (v94 != nullptr);
                }
              }
            }
          LABEL_28:
            ++v77;
          } while (v77 != v15);
        }
      }
      *(_BYTE*)(*(_QWORD*)(v5 + 8) + 3932768LL) &= ~1u;
      *(_BYTE*)(*(_QWORD*)(v5 + 8) + 3932768LL) &= ~2u;
    }
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v8 + 24LL))(v8, 0);
  }
  return result;
}

__int64 game_GameVariable_Restore_lambda0_Invoke(__int64 a1,
                                                 unsigned __int8* a2)
{
  unsigned __int64 v2;
  bool v3;
  unsigned int v4;
  int v5;

  v2 = *a2;
  v3 = v2 >= 0xA;
  v4 = 0x3F6u >> v2;
  v5 = !v3;
  return v5 & v4;
}

__int64 game_GameVariable_Restore_lambda1_Invoke(__int64 a1,
                                                 unsigned __int8* a2)
{
  unsigned __int64 v2;
  bool v3;
  unsigned int v4;
  int v5;

  v2 = *a2;
  v3 = v2 >= 0xA;
  v4 = 0x3F6u >> v2;
  v5 = !v3;
  return v5 & v4;
}

__int64 game_GameVariable_ResetRoute_lambda0_Invoke(__int64 result,
                                                    unsigned __int8* a2)
{
  unsigned int v2;
  __int64* v4;
  __int64* i;
  __int64 v6;

  v2 = *a2;
  if (v2 <= 9 && ((1 << v2) & 0x396) != 0) {
    v4 = *(__int64**)(*(_QWORD*)(*(_QWORD*)(result + 8) + 8LL) + 24LL * *a2 +
                      3932168);
    for (i = *(__int64**)(*(_QWORD*)(*(_QWORD*)(result + 8) + 8LL) +
                          24LL * *a2 + 3932176);
         v4 != i;
         result = game_VariableManager_SetFlag(v6, *(unsigned int*)(v6 + 28))) {
      v6 = *v4++;
    }
  }
  return result;
}

__int64 game_GameVariable_ResetValue_lambda0_Invoke(__int64 a1,
                                                    unsigned __int8* a2,
                                                    __int64 a3)
{
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 result;
  __int64* v7;
  __int64* i;
  __int64 v9;
  _BYTE v10[4];

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *a2;
  v5 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 32LL);
  v10[0] = *a2;
  if (v5 == 0) {
    GameRoutine_60a310(0, a2, a3);
  }
  result = (*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, v10);
  if ((result & 1) != 0) {
    v7 = *(__int64**)(*(_QWORD*)(v3 + 8) + 24LL * v4 + 3932168);
    for (i = *(__int64**)(*(_QWORD*)(v3 + 8) + 24LL * v4 + 3932176); v7 != i;
         *(_DWORD*)(v9 + 32) = *(_DWORD*)(v9 + 28)) {
      v9 = *v7++;
    }
  }
  return result;
}

__int64 game_GameVariable_ShareSerialize_lambda0_Invoke(__int64 a1,
                                                        unsigned __int8* a2)
{
  unsigned __int64 v2;
  bool v3;
  unsigned int v4;
  int v5;

  v2 = *a2;
  v3 = v2 >= 0x12;
  v4 = 0x27C00u >> v2;
  v5 = !v3;
  return v5 & v4;
}

__int64 game_GameVariable_ShareDeserialize_lambda0_Invoke(__int64 a1,
                                                          unsigned __int8* a2)
{
  unsigned __int64 v2;
  bool v3;
  unsigned int v4;
  int v5;

  v2 = *a2;
  v3 = v2 >= 0x12;
  v4 = 0x27C00u >> v2;
  v5 = !v3;
  return v5 & v4;
}

__int64 game_GameVariable_ShareDeserialize_lambda1_Invoke(__int64 a1,
                                                          unsigned __int8* a2)
{
  unsigned __int64 v2;
  bool v3;
  unsigned int v4;
  int v5;

  v2 = *a2;
  v3 = v2 >= 0x12;
  v4 = 0x27C00u >> v2;
  v5 = !v3;
  return v5 & v4;
}

#pragma GCC visibility pop
