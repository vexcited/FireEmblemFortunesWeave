#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_BYTE* GameRoutine_5fe250(_BYTE* result);
_BYTE* GameRoutine_5fe260(_BYTE* result);
_QWORD* GameRoutine_5fe220(_QWORD* result);
_QWORD* GameRoutine_616580(_QWORD*, __int64*);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_d30390(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void GameRoutine_53b80(PSEUDO_X8, int*);
__attribute__((swiftcall)) void GameRoutine_616c40(PSEUDO_X8, _QWORD* result,
                                                   _QWORD*);
__int64* GameRoutine_6619e0(__int64* result, unsigned __int64);
__int64 Cursor_730e40(_QWORD, _QWORD);
__int64 Cursor_734a80(__int64, __int64*);
__int64 Cursor_734a80_alt1(_QWORD, _QWORD) __asm__("Cursor_734a80");
__int64 GameRoutine_14a0820(_QWORD*);
__int64 GameRoutine_2b0();
__int64 GameRoutine_55c140(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5bd950(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5c02b0(_QWORD, _QWORD);
__int64 GameRoutine_5cc370(__int64, _QWORD*, unsigned int, __int64, __int64,
                           __int64);
__int64 GameRoutine_5cccc0(_QWORD*, __int64, __int64, __int64, __int64,
                           __int64);
__int64 GameRoutine_5de630(int*, _QWORD*, __int64);
__int64 GameRoutine_5de740(_QWORD);
__int64 GameRoutine_5df120(__int64, unsigned int);
__int64 GameRoutine_5fc570(__int64, __int64);
__int64 GameRoutine_5fc5e0(__int64, __int64);
__int64 GameRoutine_5fcb50(__int64);
__int64 GameRoutine_5fcb70(_QWORD);
__int64 GameRoutine_5fcb80(__int64 result);
__int64 GameRoutine_5fcc60(__int64, unsigned int, unsigned int, unsigned int);
__int64 GameRoutine_5fe120(__int64, unsigned int, unsigned int, _QWORD*,
                           __int64);
__int64 GameRoutine_5fe290(__int64 result, _QWORD*, int);
__int64 GameRoutine_64d6c0(int*, __int64);
__int64 GameRoutine_64d860(__int64, __int64);
__int64 GameRoutine_7368a0();
__int64 GameRoutine_7368c0();
__int64 GameRoutine_7369b0();
__int64 GameRoutine_736a70();
__int64 GameRoutine_736ab0();
__int64 GameRoutine_737c80();
__int64 GameRoutine_737cc0();
__int64 GameRoutine_737e40();
__int64 GameRoutine_738060();
__int64 GameRoutine_738080();
__int64 GameRoutine_738100();
__int64 GameRoutine_738180();
__int64 GameRoutine_7381a0();
__int64 GameRoutine_738c80();
__int64 GameRoutine_738cc0();
__int64 GameRoutine_739120();
__int64 GameRoutine_739190();
__int64 GameRoutine_739270();
__int64 GameRoutine_7392c0();
__int64 GameRoutine_739330();
__int64 GameRoutine_739370();
__int64 GameRoutine_739430();
__int64 GameRoutine_7394a0();
__int64 GameRoutine_739670();
__int64 GameRoutine_739690();
__int64 GameRoutine_739700();
__int64 GameRoutine_739720();
__int64 GameRoutine_7397a0();
__int64 GameRoutine_7398c0();
__int64 GameRoutine_739b20();
__int64 GameRoutine_739bc0();
__int64 GameRoutine_739cc0();
__int64 GameRoutine_739ce0();
__int64 GameRoutine_739d00();
__int64 GameRoutine_739d10();
__int64 GameRoutine_d55fd0(__int64, __int64);
__int64 GameRoutine_d56220(__int64);
__int64 GameRoutine_e5e8c0(__int64*);
__int64 GameRoutine_f55b70(__int64);
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 ProcMapSeqHuman_736ac0();
__int64 ProcMapSeqHuman_738230();
__int64 ProcMapSeqHuman_738de0();
__int64 RectDrawer_5fd420(__int64, __int64, unsigned int);
__int64 RectDrawer_5fd5f0(__int64, unsigned int, _QWORD*, __int64, __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(_QWORD);
__int64 game_5b99a0_alt1(__int64 result, float*, float*, float*, __int64,
                         float32x4_t*, char, float) __asm__("game_5b99a0");
__int64 game_5c07e0_alt1(float, __int64, __int64, __int64, __int64,
                         int) __asm__("game_5c07e0");
__int64 game_68e4c0(__int64, _QWORD*);
__int64 game_7bc4e0(__int64, char);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_HasSkill_alt1(_QWORD, _QWORD) __asm__("game_HasSkill");
__int64 game_ProcInst_Register(__int64);
__int64 game_Unit_GetParam(__int64);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 physx_PxCreateStatic(__int64, __int64, __int64);
__int64 physx_PxDefaultMemoryInputData_PxDefaultMemoryInputData(__int64 result,
                                                                __int64, int);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, __int64, __int64,
                                               __int64, unsigned int,
                                               unsigned int, int, float, float);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern _DWORD GameData_1b01728[8];
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c098[20];
extern _UNKNOWN* GameData_212c0a0[19];
extern _UNKNOWN* GameData_212c0a8[18];
extern _UNKNOWN* GameData_212c0b0[17];
extern _UNKNOWN* GameData_212c0b8[16];
extern _UNKNOWN* GameData_212c0c0[15];
extern _UNKNOWN* GameData_212c0c8[14];
extern _UNKNOWN* GameData_212c0d0[13];
extern _UNKNOWN* GameData_212c0d8[12];
extern _UNKNOWN* GameData_212c0e0[11];
extern _UNKNOWN* GameData_212c0e8[10];
extern _UNKNOWN* GameData_212c0f0[9];
extern _UNKNOWN* GameData_212c0f8[8];
extern _UNKNOWN* GameData_212c100[7];
extern _UNKNOWN* GameData_212c108[6];
extern _UNKNOWN* GameData_212c110[5];
extern _UNKNOWN* GameData_212c118[4];
extern _UNKNOWN* GameData_212c120[3];
extern _UNKNOWN* GameData_212c128[2];
extern _UNKNOWN* GameData_212c130;
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c840;
extern _UNKNOWN** GameData_2136410[2];
extern _UNKNOWN** GameData_2136418;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21cf828;
extern _UNKNOWN GameData_2258f50;
extern _UNKNOWN GameData_2258f80;
extern __int128 GameData_1a82940;
extern __int128 GameData_1a82c50;
extern __int128 GameData_1a82d00;
extern __int128 GameData_1a82dc0;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a82fa0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a833e0;
extern __int128 GameData_1a83510;
extern __int128 GameData_1a835e0;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a837f0;
extern __int128 GameData_1a838b0;
extern __int128 GameData_21a6120;
extern __int16 GameData_21ca458;
extern __int64 (**GameData_1fdb5c8)();
extern __int64 (**GameData_1fdb648)();
extern __int64 (**GameData_1fdb6c8)();
extern __int64 (**GameData_2044668)();
extern __int64 (**GameData_21363f8)();
extern __int64 (*GameData_212cfa8)();
extern __int64 (*GameData_212d090[2])();
extern __int64 (*GameData_212d0e0[17])();
extern __int64 (*GameData_212d0e8[16])();
extern __int64 (*GameData_212d0f0[15])();
extern __int64 (*GameData_212d0f8[14])();
extern __int64 (*GameData_212d108[12])();
extern __int64 (*GameData_212d110[11])();
extern __int64 (*GameData_212d118[10])();
extern __int64 (*GameData_212d120[9])();
extern __int64 (*GameData_212d128[8])();
extern __int64 (*GameData_212d130[7])();
extern __int64 (*GameData_212d138[6])();
extern __int64 (*GameData_212d140[5])();
extern __int64 (*GameData_212d148[4])();
extern __int64 (*GameData_212d150[3])();
extern __int64 (*GameData_212d158[2])();
extern __int64 (*GameData_212d160)();
extern __int64 (*GameData_21a4698)(__int64, _QWORD);
extern __int64 (*MapUnitCommandMenu_19f6660_ptr[13])();
extern __int64 (*collision_Mesh_MeshUserData_vtable[])();
extern __int64 (*game_map_anonymous_ProcMapSeqHuman_vtable[])();
extern __int64* GameData_212c838;
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212cfc0[10];
extern __int64* GameData_212ec40[5];
extern __int64* GameData_212f958[3];
extern __int64* GameData_212fac0[3];
extern __int64* GameData_212fb18[3];
extern __int64* GameData_212fd70[9];
extern __int64* GameData_212fd80[7];
extern __int64* GameData_2132428;
extern __int64* GameData_2136400[2];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212d028[4];
extern __int64 GameData_21364a0[2];
extern __int64 GameData_21a39c8;
extern __int64 GameData_21a39d0;
extern __int64 GameData_21a39e0;
extern __int64 GameData_21a3a08;
extern __int64 GameData_21a3a10;
extern __int64 GameData_21a3a50;
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21ca300;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd130;
extern __int64 GameData_21cd140;
extern __int64 GameData_21cd170;
extern __int64 GameData_21cd178;
extern __int64 GameData_21cd180;
extern __int64 GameData_21cd190;
extern __int64 GameData_21cd1a0;
extern __int64 GameData_21cd1b0;
extern __int64 GameData_21cd1b8;
extern __int64 GameData_21cd1d0;
extern __int64 GameData_21cd1e0;
extern __int64 GameData_21cd1f0;
extern __int64 GameData_21cd1f8;
extern __int64 GameData_21cd200;
extern __int64 GameData_21cd210;
extern __int64 GameData_21cd220;
extern __int64 GameData_21cd230;
extern __int64 GameData_21cd238;
extern __int64 GameData_21cd240;
extern __int64 GameData_21cd250;
extern __int64 GameData_21cd260;
extern __int64 GameData_21cd270;
extern __int64 GameData_21cd278;
extern __int64 GameData_21cd280;
extern __int64 GameData_21cd290;
extern __int64 GameData_21cd2a0;
extern __int64 GameData_21cd2b0;
extern __int64 GameData_21cd2b8;
extern __int64 GameData_21cd2c0;
extern __int64 GameData_21cd2d0;
extern __int64 GameData_21cd2e0;
extern __int64 GameData_21cd2f0;
extern __int64 GameData_21cd2f8;
extern __int64 GameData_21cd300;
extern __int64 GameData_21cd310;
extern __int64 GameData_21cd320;
extern __int64 GameData_21cd330;
extern __int64 GameData_21cd338;
extern __int64 GameData_21cd340;
extern __int64 GameData_21cd350;
extern __int64 GameData_21cd360;
extern __int64 GameData_21cd370;
extern __int64 GameData_21cd378;
extern __int64 GameData_21cd380;
extern __int64 GameData_21cd390;
extern __int64 GameData_21cd3a0;
extern __int64 GameData_21cd3b0;
extern __int64 GameData_21cd3b8;
extern __int64 GameData_21cd3c0;
extern __int64 GameData_21cd3d0;
extern __int64 GameData_21cd3e0;
extern __int64 GameData_21cd3f0;
extern __int64 GameData_21cd3f8;
extern __int64 GameData_21cd400;
extern __int64 GameData_21cd410;
extern __int64 GameData_21cd420;
extern __int64 GameData_21cd430;
extern __int64 GameData_21cd438;
extern __int64 GameData_21cd440;
extern __int64 GameData_21cd450;
extern __int64 GameData_21cd460;
extern __int64 GameData_21cd470;
extern __int64 GameData_21cd478;
extern __int64 GameData_21cd480;
extern __int64 GameData_21cd490;
extern __int64 GameData_21cd4a0;
extern __int64 GameData_21cd4b0;
extern __int64 GameData_21cd4b8;
extern __int64 GameData_21cd4c0;
extern __int64 GameData_21cd4d0;
extern __int64 GameData_21cd4e0;
extern __int64 GameData_21cd4f0;
extern __int64 GameData_21cd4f8;
extern __int64 GameData_21cd500;
extern __int64 GameData_21cd510;
extern __int64 GameData_21cd520;
extern __int64 GameData_21cd530;
extern __int64 GameData_21cd538;
extern __int64 GameData_21cd540;
extern __int64 GameData_21cd550;
extern __int64 GameData_21cd560;
extern __int64 GameData_21cd570;
extern __int64 GameData_21cd578;
extern __int64 GameData_21cd580;
extern __int64 GameData_21cd590;
extern __int64 GameData_21cd5a0;
extern __int64 GameData_21cd5b0;
extern __int64 GameData_21cd5b8;
extern __int64 GameData_21cd5c0;
extern __int64 GameData_21cd5d0;
extern __int64 GameData_21cd5e0;
extern __int64 GameData_21cd5f0;
extern __int64 GameData_21cd5f8;
extern __int64 GameData_21cd600;
extern __int64 GameData_21cd610;
extern __int64 GameData_21cd620;
extern __int64 GameData_21cd630;
extern __int64 GameData_21cd638;
extern __int64 GameData_21cd640;
extern __int64 GameData_21cd650;
extern __int64 GameData_21cd660;
extern __int64 GameData_21cd670;
extern __int64 GameData_21cd678;
extern __int64 GameData_21cd680;
extern __int64 GameData_21cd690;
extern __int64 GameData_21cd6a0;
extern __int64 GameData_21cd6b0;
extern __int64 GameData_21cd6b8;
extern __int64 GameData_21cd6c0;
extern __int64 GameData_21cd6d0;
extern __int64 GameData_21cd6e0;
extern __int64 GameData_21cd6f0;
extern __int64 GameData_21cd6f8;
extern __int64 GameData_21cd700;
extern __int64 GameData_21cd710;
extern __int64 GameData_21cd720;
extern __int64 GameData_21cd730;
extern __int64 GameData_21cd738;
extern __int64 GameData_21cd750;
extern __int64 GameData_21cd760;
extern __int64 GameData_21cd770;
extern __int64 GameData_21cd778;
extern __int64 GameData_21cd780;
extern __int64 GameData_21cd790;
extern __int64 GameData_21cd7a0;
extern __int64 GameData_21cd7b0;
extern __int64 GameData_21cd7b8;
extern __int64 GameData_21cd7c0;
extern __int64 GameData_21cd7d0;
extern __int64 GameData_21cd7e0;
extern __int64 GameData_21cd7f0;
extern __int64 GameData_21cd7f8;
extern __int64 GameData_21cd800;
extern __int64 GameData_21cd810;
extern __int64 GameData_21cd820;
extern __int64 GameData_21cd830;
extern __int64 GameData_21cd838;
extern __int64 GameData_21cd840;
extern __int64 GameData_21cd850;
extern __int64 GameData_21cd860;
extern __int64 GameData_21cd870;
extern __int64 GameData_21cd878;
extern __int64 GameData_21cd880;
extern __int64 GameData_21cd890;
extern __int64 GameData_21cd8a0;
extern __int64 GameData_21cd8b0;
extern __int64 GameData_21cd8b8;
extern __int64 GameData_21cd8c0;
extern __int64 GameData_21cd8d0;
extern __int64 GameData_21cd8e0;
extern __int64 GameData_21cd8f0;
extern __int64 GameData_21cd8f8;
extern __int64 GameData_21cd900;
extern __int64 GameData_21cd910;
extern __int64 GameData_21cd920;
extern __int64 GameData_21cd930;
extern __int64 GameData_21cd938;
extern __int64 GameData_21cd940;
extern __int64 GameData_21cd950;
extern __int64 GameData_21cd960;
extern __int64 GameData_21cd970;
extern __int64 GameData_21cd978;
extern __int64 GameData_21cd980;
extern __int64 GameData_21cd990;
extern __int64 GameData_21cd9a0;
extern __int64 GameData_21cd9b0;
extern __int64 GameData_21cd9b8;
extern __int64 GameData_21cd9c0;
extern __int64 GameData_21cd9d0;
extern __int64 GameData_21cd9e0;
extern __int64 GameData_21cd9f0;
extern __int64 GameData_21cd9f8;
extern __int64 GameData_21cda00;
extern __int64 GameData_21cda10;
extern __int64 GameData_21cda20;
extern __int64 GameData_21cda30;
extern __int64 GameData_21cda38;
extern __int64 GameData_21cda40;
extern __int64 GameData_21cda50;
extern __int64 GameData_21cda60;
extern __int64 GameData_21cda70;
extern __int64 GameData_21cda78;
extern __int64 GameData_21cda80;
extern __int64 GameData_21cda90;
extern __int64 GameData_21cdaa0;
extern __int64 GameData_21cdab0;
extern __int64 GameData_21cdab8;
extern __int64 GameData_21cdac0;
extern __int64 GameData_21cdad0;
extern __int64 GameData_21cdae0;
extern __int64 GameData_21cdaf0;
extern __int64 GameData_21cdaf8;
extern __int64 GameData_21cdb00;
extern __int64 GameData_21cdb10;
extern __int64 GameData_21cdb20;
extern __int64 GameData_21cdb30;
extern __int64 GameData_21cdb38;
extern __int64 GameData_21cdb40;
extern __int64 GameData_21cdb50;
extern __int64 GameData_21cdb60;
extern __int64 GameData_21cdb70;
extern __int64 GameData_21cdb78;
extern __int64 GameData_21cdb80;
extern __int64 GameData_21cdb90;
extern __int64 GameData_21cdba0;
extern __int64 GameData_21cdbb0;
extern __int64 GameData_21cdbb8;
extern __int64 GameData_21cdbc0;
extern __int64 GameData_21cdbd0;
extern __int64 GameData_21cdbe0;
extern __int64 GameData_21cdbf0;
extern __int64 GameData_21cdbf8;
extern __int64 GameData_21cdc00;
extern __int64 GameData_21cdc10;
extern __int64 GameData_21cdc20;
extern __int64 GameData_21cdc30;
extern __int64 GameData_21cdc38;
extern __int64 GameData_21cdc40;
extern __int64 GameData_21cdc50;
extern __int64 GameData_21cdc60;
extern __int64 GameData_21cdc70;
extern __int64 GameData_21cdc78;
extern __int64 GameData_21cdc80;
extern __int64 GameData_21cdc90;
extern __int64 GameData_21cdca0;
extern __int64 GameData_21cdcb0;
extern __int64 GameData_21cdcb8;
extern __int64 GameData_21cdcc0;
extern __int64 GameData_21cdcd0;
extern __int64 GameData_21cdce0;
extern __int64 GameData_21cdcf0;
extern __int64 GameData_21cdcf8;
extern __int64 GameData_21cdd00;
extern __int64 GameData_21cdd10;
extern __int64 GameData_21cdd20;
extern __int64 GameData_21cdd30;
extern __int64 GameData_21cdd38;
extern __int64 GameData_21cdd40;
extern __int64 GameData_21cdd50;
extern __int64 GameData_21cdd60;
extern __int64 GameData_21cdd70;
extern __int64 GameData_21cdd78;
extern __int64 GameData_21cdd80;
extern __int64 GameData_21cdd90;
extern __int64 GameData_21cdda0;
extern __int64 GameData_21cddb0;
extern __int64 GameData_21cddb8;
extern __int64 GameData_21cddc0;
extern __int64 GameData_21cddd0;
extern __int64 GameData_21cdde0;
extern __int64 GameData_21cddf0;
extern __int64 GameData_21cddf8;
extern __int64 GameData_21cde00;
extern __int64 GameData_21cde10;
extern __int64 GameData_21cde20;
extern __int64 GameData_21cde30;
extern __int64 GameData_21cde38;
extern __int64 GameData_21cde40;
extern __int64 GameData_21cde50;
extern __int64 GameData_21cde60;
extern __int64 GameData_21cde70;
extern __int64 GameData_21cde78;
extern __int64 GameData_21cde80;
extern __int64 GameData_21cde90;
extern __int64 GameData_21cdea0;
extern __int64 GameData_21cdeb0;
extern __int64 GameData_21cdeb8;
extern __int64 GameData_21cded0;
extern __int64 GameData_21cdee0;
extern __int64 GameData_21cdef0;
extern __int64 GameData_21cdef8;
extern __int64 GameData_21cdf00;
extern __int64 GameData_21cdf10;
extern __int64 GameData_21cdf20;
extern __int64 GameData_21cdf30;
extern __int64 GameData_21cdf38;
extern __int64 GameData_21cdf50;
extern __int64 GameData_21cdf60;
extern __int64 GameData_21cdf70;
extern __int64 GameData_21cdf78;
extern __int64 GameData_21cdf80;
extern __int64 GameData_21cdf90;
extern __int64 GameData_21cdfa0;
extern __int64 GameData_21cdfb0;
extern __int64 GameData_21cdfb8;
extern __int64 GameData_21cdfc0;
extern __int64 GameData_21cdfd0;
extern __int64 GameData_21cdfe0;
extern __int64 GameData_21cdff0;
extern __int64 GameData_21cdff8;
extern __int64 GameData_21ce000;
extern __int64 GameData_21ce010;
extern __int64 GameData_21ce020;
extern __int64 GameData_21ce030;
extern __int64 GameData_21ce038;
extern __int64 GameData_21ce050;
extern __int64 GameData_21ce060;
extern __int64 GameData_21ce070;
extern __int64 GameData_21ce078;
extern __int64 GameData_21ce080;
extern __int64 GameData_21ce090;
extern __int64 GameData_21ce0a0;
extern __int64 GameData_21ce0b0;
extern __int64 GameData_21ce0b8;
extern __int64 GameData_21ce0c0;
extern __int64 GameData_21ce0d0;
extern __int64 GameData_21ce0e0;
extern __int64 GameData_21ce0f0;
extern __int64 GameData_21ce0f8;
extern __int64 GameData_21ce100;
extern __int64 GameData_21ce110;
extern __int64 GameData_21ce120;
extern __int64 GameData_21ce130;
extern __int64 GameData_21ce138;
extern __int64 GameData_21ce150;
extern __int64 GameData_21ce160;
extern __int64 GameData_21ce170;
extern __int64 GameData_21ce178;
extern __int64 GameData_21ce180;
extern __int64 GameData_21ce190;
extern __int64 GameData_21ce1a0;
extern __int64 GameData_21ce1b0;
extern __int64 GameData_21ce1b8;
extern __int64 GameData_21ce1c0;
extern __int64 GameData_21ce1d0;
extern __int64 GameData_21ce1e0;
extern __int64 GameData_21ce1f0;
extern __int64 GameData_21ce1f8;
extern __int64 GameData_21ce210;
extern __int64 GameData_21ce220;
extern __int64 GameData_21ce230;
extern __int64 GameData_21ce238;
extern __int64 GameData_21ce240;
extern __int64 GameData_21ce250;
extern __int64 GameData_21ce260;
extern __int64 GameData_21ce270;
extern __int64 GameData_21ce278;
extern __int64 GameData_21ce280;
extern __int64 GameData_21ce290;
extern __int64 GameData_21ce2a0;
extern __int64 GameData_21ce2b0;
extern __int64 GameData_21ce2b8;
extern __int64 GameData_21ce2c0;
extern __int64 GameData_21ce2d0;
extern __int64 GameData_21ce2e0;
extern __int64 GameData_21ce2f0;
extern __int64 GameData_21ce2f8;
extern __int64 GameData_21ce300;
extern __int64 GameData_21ce310;
extern __int64 GameData_21ce320;
extern __int64 GameData_21ce330;
extern __int64 GameData_21ce338;
extern __int64 GameData_21ce340;
extern __int64 GameData_21ce350;
extern __int64 GameData_21ce360;
extern __int64 GameData_21ce370;
extern __int64 GameData_21ce378;
extern __int64 GameData_21ce380;
extern __int64 GameData_21ce390;
extern __int64 GameData_21ce3a0;
extern __int64 GameData_21ce3b0;
extern __int64 GameData_21ce3b8;
extern __int64 GameData_21ce3d0;
extern __int64 GameData_21ce3e0;
extern __int64 GameData_21ce3f0;
extern __int64 GameData_21ce3f8;
extern __int64 GameData_21ce410;
extern __int64 GameData_21ce420;
extern __int64 GameData_21ce430;
extern __int64 GameData_21ce438;
extern __int64 GameData_21ce440;
extern __int64 GameData_21ce450;
extern __int64 GameData_21ce460;
extern __int64 GameData_21ce470;
extern __int64 GameData_21ce478;
extern __int64 GameData_21ce490;
extern __int64 GameData_21ce4a0;
extern __int64 GameData_21ce4b0;
extern __int64 GameData_21ce4b8;
extern __int64 GameData_21ce4d0;
extern __int64 GameData_21ce4e0;
extern __int64 GameData_21ce4f0;
extern __int64 GameData_21ce4f8;
extern __int64 GameData_21ce500;
extern __int64 GameData_21ce510;
extern __int64 GameData_21ce520;
extern __int64 GameData_21ce530;
extern __int64 GameData_21ce538;
extern __int64 GameData_21ce540;
extern __int64 GameData_21ce550;
extern __int64 GameData_21ce560;
extern __int64 GameData_21ce570;
extern __int64 GameData_21ce578;
extern __int64 GameData_21ce580;
extern __int64 GameData_21ce590;
extern __int64 GameData_21ce5a0;
extern __int64 GameData_21ce5b0;
extern __int64 GameData_21ce5b8;
extern __int64 GameData_21ce5c0;
extern __int64 GameData_21ce5d0;
extern __int64 GameData_21ce5e0;
extern __int64 GameData_21ce5f0;
extern __int64 GameData_21ce5f8;
extern __int64 GameData_21ce610;
extern __int64 GameData_21ce620;
extern __int64 GameData_21ce630;
extern __int64 GameData_21ce638;
extern __int64 GameData_21ce640;
extern __int64 GameData_21ce650;
extern __int64 GameData_21ce660;
extern __int64 GameData_21ce670;
extern __int64 GameData_21ce678;
extern __int64 GameData_21ce690;
extern __int64 GameData_21ce6a0;
extern __int64 GameData_21ce6b0;
extern __int64 GameData_21ce6b8;
extern __int64 GameData_21ce6c0;
extern __int64 GameData_21ce6d0;
extern __int64 GameData_21ce6e0;
extern __int64 GameData_21ce6f0;
extern __int64 GameData_21ce6f8;
extern __int64 GameData_21ce700;
extern __int64 GameData_21ce710;
extern __int64 GameData_21ce720;
extern __int64 GameData_21ce730;
extern __int64 GameData_21ce738;
extern __int64 GameData_21ce740;
extern __int64 GameData_21ce750;
extern __int64 GameData_21ce760;
extern __int64 GameData_21ce770;
extern __int64 GameData_21ce778;
extern __int64 GameData_21ce790;
extern __int64 GameData_21ce7a0;
extern __int64 GameData_21ce7b0;
extern __int64 GameData_21ce7b8;
extern __int64 GameData_21ce7c0;
extern __int64 GameData_21ce7d0;
extern __int64 GameData_21ce7e0;
extern __int64 GameData_21ce7f0;
extern __int64 GameData_21ce7f8;
extern __int64 GameData_21ce810;
extern __int64 GameData_21ce820;
extern __int64 GameData_21ce830;
extern __int64 GameData_21ce838;
extern __int64 GameData_21ce840;
extern __int64 GameData_21ce850;
extern __int64 GameData_21ce860;
extern __int64 GameData_21ce870;
extern __int64 GameData_21ce878;
extern __int64 GameData_21ce880;
extern __int64 GameData_21ce890;
extern __int64 GameData_21ce8a0;
extern __int64 GameData_21ce8b0;
extern __int64 GameData_21ce8b8;
extern __int64 GameData_21ce8c0;
extern __int64 GameData_21ce8d0;
extern __int64 GameData_21ce8e0;
extern __int64 GameData_21ce8f0;
extern __int64 GameData_21ce8f8;
extern __int64 GameData_21ce910;
extern __int64 GameData_21ce920;
extern __int64 GameData_21ce930;
extern __int64 GameData_21ce938;
extern __int64 GameData_21ce940;
extern __int64 GameData_21ce950;
extern __int64 GameData_21ce960;
extern __int64 GameData_21ce970;
extern __int64 GameData_21ce978;
extern __int64 GameData_21ce990;
extern __int64 GameData_21ce9a0;
extern __int64 GameData_21ce9b0;
extern __int64 GameData_21ce9b8;
extern __int64 GameData_21ce9c0;
extern __int64 GameData_21ce9d0;
extern __int64 GameData_21ce9e0;
extern __int64 GameData_21ce9f0;
extern __int64 GameData_21ce9f8;
extern __int64 GameData_21cea00;
extern __int64 GameData_21cea10;
extern __int64 GameData_21cea20;
extern __int64 GameData_21cea30;
extern __int64 GameData_21cea38;
extern __int64 GameData_21cea40;
extern __int64 GameData_21cea50;
extern __int64 GameData_21cea60;
extern __int64 GameData_21cea70;
extern __int64 GameData_21cea78;
extern __int64 GameData_21cea80;
extern __int64 GameData_21cea90;
extern __int64 GameData_21ceaa0;
extern __int64 GameData_21ceab0;
extern __int64 GameData_21ceab8;
extern __int64 GameData_21ceac0;
extern __int64 GameData_21cead0;
extern __int64 GameData_21ceae0;
extern __int64 GameData_21ceaf0;
extern __int64 GameData_21ceaf8;
extern __int64 GameData_21ceb10;
extern __int64 GameData_21ceb20;
extern __int64 GameData_21ceb30;
extern __int64 GameData_21ceb38;
extern __int64 GameData_21ceb40;
extern __int64 GameData_21ceb50;
extern __int64 GameData_21ceb60;
extern __int64 GameData_21ceb70;
extern __int64 GameData_21ceb78;
extern __int64 GameData_21ceb90;
extern __int64 GameData_21ceba0;
extern __int64 GameData_21cebb0;
extern __int64 GameData_21cebb8;
extern __int64 GameData_21cebc0;
extern __int64 GameData_21cebd0;
extern __int64 GameData_21cebe0;
extern __int64 GameData_21cebf0;
extern __int64 GameData_21cebf8;
extern __int64 GameData_21cec00;
extern __int64 GameData_21cec10;
extern __int64 GameData_21cec20;
extern __int64 GameData_21cec30;
extern __int64 GameData_21cec38;
extern __int64 GameData_21cec40;
extern __int64 GameData_21cec50;
extern __int64 GameData_21cec60;
extern __int64 GameData_21cec70;
extern __int64 GameData_21cec78;
extern __int64 GameData_21cec90;
extern __int64 GameData_21ceca0;
extern __int64 GameData_21cecb0;
extern __int64 GameData_21cecb8;
extern __int64 GameData_21cecc0;
extern __int64 GameData_21cecd0;
extern __int64 GameData_21cece0;
extern __int64 GameData_21cecf0;
extern __int64 GameData_21cecf8;
extern __int64 GameData_21ced10;
extern __int64 GameData_21ced20;
extern __int64 GameData_21ced30;
extern __int64 GameData_21ced38;
extern __int64 GameData_21ced40;
extern __int64 GameData_21ced50;
extern __int64 GameData_21ced60;
extern __int64 GameData_21ced70;
extern __int64 GameData_21ced78;
extern __int64 GameData_21ced80;
extern __int64 GameData_21ced90;
extern __int64 GameData_21ceda0;
extern __int64 GameData_21cedb0;
extern __int64 GameData_21cedb8;
extern __int64 GameData_21cedc0;
extern __int64 GameData_21cedd0;
extern __int64 GameData_21cede0;
extern __int64 GameData_21cedf0;
extern __int64 GameData_21cedf8;
extern __int64 GameData_21cee10;
extern __int64 GameData_21cee20;
extern __int64 GameData_21cee30;
extern __int64 GameData_21cee38;
extern __int64 GameData_21cee40;
extern __int64 GameData_21cee50;
extern __int64 GameData_21cee60;
extern __int64 GameData_21cee70;
extern __int64 GameData_21cee78;
extern __int64 GameData_21cee90;
extern __int64 GameData_21ceea0;
extern __int64 GameData_21ceeb0;
extern __int64 GameData_21ceeb8;
extern __int64 GameData_21ceec0;
extern __int64 GameData_21ceed0;
extern __int64 GameData_21ceee0;
extern __int64 GameData_21ceef0;
extern __int64 GameData_21ceef8;
extern __int64 GameData_21cef00;
extern __int64 GameData_21cef10;
extern __int64 GameData_21cef20;
extern __int64 GameData_21cef30;
extern __int64 GameData_21cef38;
extern __int64 GameData_21cef40;
extern __int64 GameData_21cef50;
extern __int64 GameData_21cef60;
extern __int64 GameData_21cef70;
extern __int64 GameData_21cef78;
extern __int64 GameData_21cef90;
extern __int64 GameData_21cefa0;
extern __int64 GameData_21cefb0;
extern __int64 GameData_21cefb8;
extern __int64 GameData_21cefc0;
extern __int64 GameData_21cefd0;
extern __int64 GameData_21cefe0;
extern __int64 GameData_21ceff0;
extern __int64 GameData_21ceff8;
extern __int64 GameData_21cf010;
extern __int64 GameData_21cf020;
extern __int64 GameData_21cf030;
extern __int64 GameData_21cf038;
extern __int64 GameData_21cf040;
extern __int64 GameData_21cf050;
extern __int64 GameData_21cf060;
extern __int64 GameData_21cf070;
extern __int64 GameData_21cf078;
extern __int64 GameData_21cf080;
extern __int64 GameData_21cf090;
extern __int64 GameData_21cf0a0;
extern __int64 GameData_21cf0b0;
extern __int64 GameData_21cf0b8;
extern __int64 GameData_21cf0c0;
extern __int64 GameData_21cf0d0;
extern __int64 GameData_21cf0e0;
extern __int64 GameData_21cf0f0;
extern __int64 GameData_21cf0f8;
extern __int64 GameData_21cf110;
extern __int64 GameData_21cf120;
extern __int64 GameData_21cf130;
extern __int64 GameData_21cf138;
extern __int64 GameData_21cf140;
extern __int64 GameData_21cf150;
extern __int64 GameData_21cf160;
extern __int64 GameData_21cf170;
extern __int64 GameData_21cf178;
extern __int64 GameData_21cf190;
extern __int64 GameData_21cf1a0;
extern __int64 GameData_21cf1b0;
extern __int64 GameData_21cf1b8;
extern __int64 GameData_21cf1c0;
extern __int64 GameData_21cf1d0;
extern __int64 GameData_21cf1e0;
extern __int64 GameData_21cf1f0;
extern __int64 GameData_21cf1f8;
extern __int64 GameData_21cf200;
extern __int64 GameData_21cf210;
extern __int64 GameData_21cf220;
extern __int64 GameData_21cf230;
extern __int64 GameData_21cf238;
extern __int64 GameData_21cf240;
extern __int64 GameData_21cf250;
extern __int64 GameData_21cf260;
extern __int64 GameData_21cf270;
extern __int64 GameData_21cf278;
extern __int64 GameData_21cf290;
extern __int64 GameData_21cf2a0;
extern __int64 GameData_21cf2b0;
extern __int64 GameData_21cf2b8;
extern __int64 GameData_21cf2c0;
extern __int64 GameData_21cf2d0;
extern __int64 GameData_21cf2e0;
extern __int64 GameData_21cf2f0;
extern __int64 GameData_21cf2f8;
extern __int64 GameData_21cf310;
extern __int64 GameData_21cf320;
extern __int64 GameData_21cf330;
extern __int64 GameData_21cf338;
extern __int64 GameData_21cf340;
extern __int64 GameData_21cf350;
extern __int64 GameData_21cf360;
extern __int64 GameData_21cf370;
extern __int64 GameData_21cf378;
extern __int64 GameData_21cf380;
extern __int64 GameData_21cf390;
extern __int64 GameData_21cf3a0;
extern __int64 GameData_21cf3b0;
extern __int64 GameData_21cf3b8;
extern __int64 GameData_21cf3c0;
extern __int64 GameData_21cf3d0;
extern __int64 GameData_21cf3e0;
extern __int64 GameData_21cf3f0;
extern __int64 GameData_21cf3f8;
extern __int64 GameData_21cf400;
extern __int64 GameData_21cf410;
extern __int64 GameData_21cf420;
extern __int64 GameData_21cf430;
extern __int64 GameData_21cf438;
extern __int64 GameData_21cf440;
extern __int64 GameData_21cf450;
extern __int64 GameData_21cf460;
extern __int64 GameData_21cf470;
extern __int64 GameData_21cf478;
extern __int64 GameData_21cf480;
extern __int64 GameData_21cf490;
extern __int64 GameData_21cf4a0;
extern __int64 GameData_21cf4b0;
extern __int64 GameData_21cf4b8;
extern __int64 GameData_21cf4c0;
extern __int64 GameData_21cf4d0;
extern __int64 GameData_21cf4e0;
extern __int64 GameData_21cf4f0;
extern __int64 GameData_21cf4f8;
extern __int64 GameData_21cf500;
extern __int64 GameData_21cf510;
extern __int64 GameData_21cf520;
extern __int64 GameData_21cf530;
extern __int64 GameData_21cf538;
extern __int64 GameData_21cf540;
extern __int64 GameData_21cf550;
extern __int64 GameData_21cf560;
extern __int64 GameData_21cf570;
extern __int64 GameData_21cf578;
extern __int64 GameData_21cf580;
extern __int64 GameData_21cf590;
extern __int64 GameData_21cf5a0;
extern __int64 GameData_21cf5b0;
extern __int64 GameData_21cf5b8;
extern __int64 GameData_21cf5c0;
extern __int64 GameData_21cf5d0;
extern __int64 GameData_21cf5e0;
extern __int64 GameData_21cf5f0;
extern __int64 GameData_21cf5f8;
extern __int64 GameData_21cf600;
extern __int64 GameData_21cf610;
extern __int64 GameData_21cf620;
extern __int64 GameData_21cf630;
extern __int64 GameData_21cf638;
extern __int64 GameData_21cf640;
extern __int64 GameData_21cf650;
extern __int64 GameData_21cf660;
extern __int64 GameData_21cf670;
extern __int64 GameData_21cf678;
extern __int64 GameData_21cf680;
extern __int64 GameData_21cf690;
extern __int64 GameData_21cf6a0;
extern __int64 GameData_21cf6b0;
extern __int64 GameData_21cf6b8;
extern __int64 GameData_21cf6c0;
extern __int64 GameData_21cf6d0;
extern __int64 GameData_21cf6e0;
extern __int64 GameData_21cf6f0;
extern __int64 GameData_21cf6f8;
extern __int64 GameData_21cf700;
extern __int64 GameData_21cf710;
extern __int64 GameData_21cf720;
extern __int64 GameData_21cf730;
extern __int64 GameData_21cf738;
extern __int64 GameData_21cf740;
extern __int64 GameData_21cf750;
extern __int64 GameData_21cf760;
extern __int64 GameData_21cf770;
extern __int64 GameData_21cf778;
extern __int64 GameData_21cf790;
extern __int64 GameData_21cf7a0;
extern __int64 GameData_21cf7b0;
extern __int64 GameData_21cf7b8;
extern __int64 GameData_21cf7d0;
extern __int64 GameData_21cf7e0;
extern __int64 GameData_21cf7f0;
extern __int64 GameData_21cf7f8;
extern __int64 GameData_21cf800;
extern __int64 GameData_21cf810;
extern __int64 GameData_21cf820;
extern __int64 GameData_21cf830;
extern __int64 GameData_21d1e40;
extern __int64 GameData_21d1e50;
extern __int64 GameData_21d8788;
extern __int64 GameData_21d8790;
extern __int64 GameData_21d8798;
extern __int64 GameData_21d87a0;
extern __int64 GameData_21d87a8;
extern __int64 GameData_21d87b0;
extern __int64 GameData_21d87b8;
extern __int64 GameData_21d87c0;
extern __int64 GameData_21d87c8;
extern __int64 GameData_21d87d0;
extern __int64 GameData_21d87d8;
extern __int64 GameData_21d87e0;
extern __int64 GameData_2258f28;
extern __int64 GameData_2258f30;
extern __int64 GameData_2258f38;
extern __int64 GameData_2258f40;
extern __int64 GameData_2258f48;
extern __int64 GameData_2258f58;
extern __int64 GameData_2258f60;
extern __int64 GameData_2258f68;
extern __int64 GameData_2258f70;
extern __int64 GameData_2258f78;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_cmdbtl_ProcCmdBtlSeqView_instance_;
extern __int64 game_script_map_effect_g_sequence;
extern char* GameData_1f9d910[14];
extern char* GameData_1f9d930[10];
extern char GameData_1a9f09e;
extern char GameData_21cd168;
extern char GameData_21cd1a8;
extern char GameData_21cd1e8;
extern char GameData_21cd228;
extern char GameData_21cd268;
extern char GameData_21cd2a8;
extern char GameData_21cd2e8;
extern char GameData_21cd328;
extern char GameData_21cd368;
extern char GameData_21cd3a8;
extern char GameData_21cd3e8;
extern char GameData_21cd428;
extern char GameData_21cd468;
extern char GameData_21cd4a8;
extern char GameData_21cd4e8;
extern char GameData_21cd528;
extern char GameData_21cd568;
extern char GameData_21cd5a8;
extern char GameData_21cd5e8;
extern char GameData_21cd628;
extern char GameData_21cd668;
extern char GameData_21cd6a8;
extern char GameData_21cd6e8;
extern char GameData_21cd728;
extern char GameData_21cd768;
extern char GameData_21cd7a8;
extern char GameData_21cd7e8;
extern char GameData_21cd828;
extern char GameData_21cd868;
extern char GameData_21cd8a8;
extern char GameData_21cd8e8;
extern char GameData_21cd928;
extern char GameData_21cd968;
extern char GameData_21cd9a8;
extern char GameData_21cd9e8;
extern char GameData_21cda28;
extern char GameData_21cda68;
extern char GameData_21cdaa8;
extern char GameData_21cdae8;
extern char GameData_21cdb28;
extern char GameData_21cdb68;
extern char GameData_21cdba8;
extern char GameData_21cdbe8;
extern char GameData_21cdc28;
extern char GameData_21cdc68;
extern char GameData_21cdca8;
extern char GameData_21cdce8;
extern char GameData_21cdd28;
extern char GameData_21cdd68;
extern char GameData_21cdda8;
extern char GameData_21cdde8;
extern char GameData_21cde28;
extern char GameData_21cde68;
extern char GameData_21cdea8;
extern char GameData_21cdee8;
extern char GameData_21cdf28;
extern char GameData_21cdf68;
extern char GameData_21cdfa8;
extern char GameData_21cdfe8;
extern char GameData_21ce028;
extern char GameData_21ce068;
extern char GameData_21ce0a8;
extern char GameData_21ce0e8;
extern char GameData_21ce128;
extern char GameData_21ce168;
extern char GameData_21ce1a8;
extern char GameData_21ce1e8;
extern char GameData_21ce228;
extern char GameData_21ce268;
extern char GameData_21ce2a8;
extern char GameData_21ce2e8;
extern char GameData_21ce328;
extern char GameData_21ce368;
extern char GameData_21ce3a8;
extern char GameData_21ce3e8;
extern char GameData_21ce428;
extern char GameData_21ce468;
extern char GameData_21ce4a8;
extern char GameData_21ce4e8;
extern char GameData_21ce528;
extern char GameData_21ce568;
extern char GameData_21ce5a8;
extern char GameData_21ce5e8;
extern char GameData_21ce628;
extern char GameData_21ce668;
extern char GameData_21ce6a8;
extern char GameData_21ce6e8;
extern char GameData_21ce728;
extern char GameData_21ce768;
extern char GameData_21ce7a8;
extern char GameData_21ce7e8;
extern char GameData_21ce828;
extern char GameData_21ce868;
extern char GameData_21ce8a8;
extern char GameData_21ce8e8;
extern char GameData_21ce928;
extern char GameData_21ce968;
extern char GameData_21ce9a8;
extern char GameData_21ce9e8;
extern char GameData_21cea28;
extern char GameData_21cea68;
extern char GameData_21ceaa8;
extern char GameData_21ceae8;
extern char GameData_21ceb28;
extern char GameData_21ceb68;
extern char GameData_21ceba8;
extern char GameData_21cebe8;
extern char GameData_21cec28;
extern char GameData_21cec68;
extern char GameData_21ceca8;
extern char GameData_21cece8;
extern char GameData_21ced28;
extern char GameData_21ced68;
extern char GameData_21ceda8;
extern char GameData_21cede8;
extern char GameData_21cee28;
extern char GameData_21cee68;
extern char GameData_21ceea8;
extern char GameData_21ceee8;
extern char GameData_21cef28;
extern char GameData_21cef68;
extern char GameData_21cefa8;
extern char GameData_21cefe8;
extern char GameData_21cf028;
extern char GameData_21cf068;
extern char GameData_21cf0a8;
extern char GameData_21cf0e8;
extern char GameData_21cf128;
extern char GameData_21cf168;
extern char GameData_21cf1a8;
extern char GameData_21cf1e8;
extern char GameData_21cf228;
extern char GameData_21cf268;
extern char GameData_21cf2a8;
extern char GameData_21cf2e8;
extern char GameData_21cf328;
extern char GameData_21cf368;
extern char GameData_21cf3a8;
extern char GameData_21cf3e8;
extern char GameData_21cf428;
extern char GameData_21cf468;
extern char GameData_21cf4a8;
extern char GameData_21cf4e8;
extern char GameData_21cf528;
extern char GameData_21cf568;
extern char GameData_21cf5a8;
extern char GameData_21cf5e8;
extern char GameData_21cf628;
extern char GameData_21cf668;
extern char GameData_21cf6a8;
extern char GameData_21cf6e8;
extern char GameData_21cf728;
extern char GameData_21cf768;
extern char GameData_21cf7a8;
extern char GameData_21cf7e8;
extern int GameData_21a39c0;
extern int GameData_21a39c4;
extern int GameData_21a3a48;
extern int GameData_21cd188;
extern int GameData_21cd198;
extern int GameData_21cd1c8;
extern int GameData_21cd1d8;
extern int GameData_21cd208;
extern int GameData_21cd218;
extern int GameData_21cd248;
extern int GameData_21cd258;
extern int GameData_21cd288;
extern int GameData_21cd298;
extern int GameData_21cd2c8;
extern int GameData_21cd2d8;
extern int GameData_21cd308;
extern int GameData_21cd318;
extern int GameData_21cd348;
extern int GameData_21cd358;
extern int GameData_21cd388;
extern int GameData_21cd398;
extern int GameData_21cd3c8;
extern int GameData_21cd3d8;
extern int GameData_21cd408;
extern int GameData_21cd418;
extern int GameData_21cd448;
extern int GameData_21cd458;
extern int GameData_21cd488;
extern int GameData_21cd498;
extern int GameData_21cd4c8;
extern int GameData_21cd4d8;
extern int GameData_21cd508;
extern int GameData_21cd518;
extern int GameData_21cd548;
extern int GameData_21cd558;
extern int GameData_21cd588;
extern int GameData_21cd598;
extern int GameData_21cd5c8;
extern int GameData_21cd5d8;
extern int GameData_21cd608;
extern int GameData_21cd618;
extern int GameData_21cd648;
extern int GameData_21cd658;
extern int GameData_21cd688;
extern int GameData_21cd698;
extern int GameData_21cd6c8;
extern int GameData_21cd6d8;
extern int GameData_21cd708;
extern int GameData_21cd718;
extern int GameData_21cd748;
extern int GameData_21cd758;
extern int GameData_21cd788;
extern int GameData_21cd798;
extern int GameData_21cd7c8;
extern int GameData_21cd7d8;
extern int GameData_21cd808;
extern int GameData_21cd818;
extern int GameData_21cd848;
extern int GameData_21cd858;
extern int GameData_21cd888;
extern int GameData_21cd898;
extern int GameData_21cd8c8;
extern int GameData_21cd8d8;
extern int GameData_21cd908;
extern int GameData_21cd918;
extern int GameData_21cd948;
extern int GameData_21cd958;
extern int GameData_21cd988;
extern int GameData_21cd998;
extern int GameData_21cd9c8;
extern int GameData_21cd9d8;
extern int GameData_21cda08;
extern int GameData_21cda18;
extern int GameData_21cda48;
extern int GameData_21cda58;
extern int GameData_21cda88;
extern int GameData_21cda98;
extern int GameData_21cdac8;
extern int GameData_21cdad8;
extern int GameData_21cdb08;
extern int GameData_21cdb18;
extern int GameData_21cdb48;
extern int GameData_21cdb58;
extern int GameData_21cdb88;
extern int GameData_21cdb98;
extern int GameData_21cdbc8;
extern int GameData_21cdbd8;
extern int GameData_21cdc08;
extern int GameData_21cdc18;
extern int GameData_21cdc48;
extern int GameData_21cdc58;
extern int GameData_21cdc88;
extern int GameData_21cdc98;
extern int GameData_21cdcc8;
extern int GameData_21cdcd8;
extern int GameData_21cdd08;
extern int GameData_21cdd18;
extern int GameData_21cdd48;
extern int GameData_21cdd58;
extern int GameData_21cdd88;
extern int GameData_21cdd98;
extern int GameData_21cddc8;
extern int GameData_21cddd8;
extern int GameData_21cde08;
extern int GameData_21cde18;
extern int GameData_21cde48;
extern int GameData_21cde58;
extern int GameData_21cde88;
extern int GameData_21cde98;
extern int GameData_21cdec8;
extern int GameData_21cded8;
extern int GameData_21cdf08;
extern int GameData_21cdf18;
extern int GameData_21cdf48;
extern int GameData_21cdf58;
extern int GameData_21cdf88;
extern int GameData_21cdf98;
extern int GameData_21cdfc8;
extern int GameData_21cdfd8;
extern int GameData_21ce008;
extern int GameData_21ce018;
extern int GameData_21ce048;
extern int GameData_21ce058;
extern int GameData_21ce088;
extern int GameData_21ce098;
extern int GameData_21ce0c8;
extern int GameData_21ce0d8;
extern int GameData_21ce108;
extern int GameData_21ce118;
extern int GameData_21ce148;
extern int GameData_21ce158;
extern int GameData_21ce188;
extern int GameData_21ce198;
extern int GameData_21ce1c8;
extern int GameData_21ce1d8;
extern int GameData_21ce208;
extern int GameData_21ce218;
extern int GameData_21ce248;
extern int GameData_21ce258;
extern int GameData_21ce288;
extern int GameData_21ce298;
extern int GameData_21ce2c8;
extern int GameData_21ce2d8;
extern int GameData_21ce308;
extern int GameData_21ce318;
extern int GameData_21ce348;
extern int GameData_21ce358;
extern int GameData_21ce388;
extern int GameData_21ce398;
extern int GameData_21ce3c8;
extern int GameData_21ce3d8;
extern int GameData_21ce408;
extern int GameData_21ce418;
extern int GameData_21ce448;
extern int GameData_21ce458;
extern int GameData_21ce488;
extern int GameData_21ce498;
extern int GameData_21ce4c8;
extern int GameData_21ce4d8;
extern int GameData_21ce508;
extern int GameData_21ce518;
extern int GameData_21ce548;
extern int GameData_21ce558;
extern int GameData_21ce588;
extern int GameData_21ce598;
extern int GameData_21ce5c8;
extern int GameData_21ce5d8;
extern int GameData_21ce608;
extern int GameData_21ce618;
extern int GameData_21ce648;
extern int GameData_21ce658;
extern int GameData_21ce688;
extern int GameData_21ce698;
extern int GameData_21ce6c8;
extern int GameData_21ce6d8;
extern int GameData_21ce708;
extern int GameData_21ce718;
extern int GameData_21ce748;
extern int GameData_21ce758;
extern int GameData_21ce788;
extern int GameData_21ce798;
extern int GameData_21ce7c8;
extern int GameData_21ce7d8;
extern int GameData_21ce808;
extern int GameData_21ce818;
extern int GameData_21ce848;
extern int GameData_21ce858;
extern int GameData_21ce888;
extern int GameData_21ce898;
extern int GameData_21ce8c8;
extern int GameData_21ce8d8;
extern int GameData_21ce908;
extern int GameData_21ce918;
extern int GameData_21ce948;
extern int GameData_21ce958;
extern int GameData_21ce988;
extern int GameData_21ce998;
extern int GameData_21ce9c8;
extern int GameData_21ce9d8;
extern int GameData_21cea08;
extern int GameData_21cea18;
extern int GameData_21cea48;
extern int GameData_21cea58;
extern int GameData_21cea88;
extern int GameData_21cea98;
extern int GameData_21ceac8;
extern int GameData_21cead8;
extern int GameData_21ceb08;
extern int GameData_21ceb18;
extern int GameData_21ceb48;
extern int GameData_21ceb58;
extern int GameData_21ceb88;
extern int GameData_21ceb98;
extern int GameData_21cebc8;
extern int GameData_21cebd8;
extern int GameData_21cec08;
extern int GameData_21cec18;
extern int GameData_21cec48;
extern int GameData_21cec58;
extern int GameData_21cec88;
extern int GameData_21cec98;
extern int GameData_21cecc8;
extern int GameData_21cecd8;
extern int GameData_21ced08;
extern int GameData_21ced18;
extern int GameData_21ced48;
extern int GameData_21ced58;
extern int GameData_21ced88;
extern int GameData_21ced98;
extern int GameData_21cedc8;
extern int GameData_21cedd8;
extern int GameData_21cee08;
extern int GameData_21cee18;
extern int GameData_21cee48;
extern int GameData_21cee58;
extern int GameData_21cee88;
extern int GameData_21cee98;
extern int GameData_21ceec8;
extern int GameData_21ceed8;
extern int GameData_21cef08;
extern int GameData_21cef18;
extern int GameData_21cef48;
extern int GameData_21cef58;
extern int GameData_21cef88;
extern int GameData_21cef98;
extern int GameData_21cefc8;
extern int GameData_21cefd8;
extern int GameData_21cf008;
extern int GameData_21cf018;
extern int GameData_21cf048;
extern int GameData_21cf058;
extern int GameData_21cf088;
extern int GameData_21cf098;
extern int GameData_21cf0c8;
extern int GameData_21cf0d8;
extern int GameData_21cf108;
extern int GameData_21cf118;
extern int GameData_21cf148;
extern int GameData_21cf158;
extern int GameData_21cf188;
extern int GameData_21cf198;
extern int GameData_21cf1c8;
extern int GameData_21cf1d8;
extern int GameData_21cf208;
extern int GameData_21cf218;
extern int GameData_21cf248;
extern int GameData_21cf258;
extern int GameData_21cf288;
extern int GameData_21cf298;
extern int GameData_21cf2c8;
extern int GameData_21cf2d8;
extern int GameData_21cf308;
extern int GameData_21cf318;
extern int GameData_21cf348;
extern int GameData_21cf358;
extern int GameData_21cf388;
extern int GameData_21cf398;
extern int GameData_21cf3c8;
extern int GameData_21cf3d8;
extern int GameData_21cf408;
extern int GameData_21cf418;
extern int GameData_21cf448;
extern int GameData_21cf458;
extern int GameData_21cf488;
extern int GameData_21cf498;
extern int GameData_21cf4c8;
extern int GameData_21cf4d8;
extern int GameData_21cf508;
extern int GameData_21cf518;
extern int GameData_21cf548;
extern int GameData_21cf558;
extern int GameData_21cf588;
extern int GameData_21cf598;
extern int GameData_21cf5c8;
extern int GameData_21cf5d8;
extern int GameData_21cf608;
extern int GameData_21cf618;
extern int GameData_21cf648;
extern int GameData_21cf658;
extern int GameData_21cf688;
extern int GameData_21cf698;
extern int GameData_21cf6c8;
extern int GameData_21cf6d8;
extern int GameData_21cf708;
extern int GameData_21cf718;
extern int GameData_21cf748;
extern int GameData_21cf758;
extern int GameData_21cf788;
extern int GameData_21cf798;
extern int GameData_21cf7c8;
extern int GameData_21cf7d8;
extern int GameData_21cf808;
extern int GameData_21cf818;
float fmodf(float, float);
float game_5bd9a0(_OWORD*, _OWORD*, __int64, float, __int64, __int64, float*);
float game_5c4340(__int128*, __int64, __int64, int, float*, float);
float powf(_QWORD, float, float);
float powf_alt1(long double, float) __asm__("powf");
float32x4_t game_5bdd90(_OWORD*, float32x4_t*, __int64, float, __int64, __int64,
                        float*);
int* GameRoutine_64c460(int* result, int*, unsigned __int64, _DWORD*, __int64);
long double GameRoutine_5b4550(__int64, float*);
long double GameRoutine_5c4020(_OWORD*, float32x4_t*);
unsigned __int64* GameRoutine_64da00(unsigned __int64* result, __int64);
unsigned __int8* nn_vfx_detail_5b5430(_QWORD*, __int64, int, __int64, int);
void Cursor_730b20(__int64, int, int);
void GameRoutine_5c11f0(float, __int64, float32x2_t*, float32x2_t*, float*,
                        int32x4_t*, _QWORD*, int, __int64);
void GameRoutine_5c2180(float, float, __int64, float32x4_t*, __int64,
                        float32x4_t*, float*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_670440();
void __attribute__((noreturn)) GameRoutine_670c40(void);
void __attribute__((noreturn)) String_60a1d0(void);
void __attribute__((noreturn)) String_60a230(void);
void game_5bc1d0_alt1(__int64, __int64, int, double) __asm__("game_5bc1d0");
void game_5c0ec0_alt1(__int64, float32x2_t*, __int64, __int64, int,
                      float) __asm__("game_5c0ec0");
void game_5c1c50_alt1(float, double, double, double, float32x4_t, double,
                      float32x4_t, __int64, float32x4_t*, float32x4_t*, __int64,
                      __int64, int32x4_t*, unsigned int, float32x4_t*,
                      float32x4_t*) __asm__("game_5c1c50");
void game_5c3e70_alt1(__int64, __int128*, __int64, _DWORD*, float32x2_t*,
                      float) __asm__("game_5c3e70");
void snd_Fade_Fade_10c830(__int64, float);
float game_55ca90(__int64 a1, float32x4_t* a2, float32x2_t* a3, __int64 a4,
                  float result);
void game_5b99a0(__int64 a1, float* a2, float* a3, float* a4, __int64 a5,
                 __int64 a6, char a7, float a8);
__int64 game_5b9d90(__int64 a1, __int64 a2);
void game_5bb1a0(__int64 a1, int32x4_t* a2, double a3, double a4, double a5,
                 double a6, double a7, double a8, float32x4_t a9);
void game_5bc1d0(__int64 a1, __int64 a2, int a3, double a4, double a5,
                 long double a6);
__int64 game_5bc5c0(__int64 a1, _BYTE* a2, __int64 a3, signed int a4, int a5,
                    float32x4_t* a6);
__int64 game_5bca40(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5,
                    _QWORD* a6, int a7, unsigned int a8, unsigned int a9,
                    float32x4_t* a10);
float32x4_t game_5bd960(_QWORD* a1, float32x4_t* a2, __int64 a3, __int64 a4,
                        __int64 a5, __int64 a6);
float game_5bdb20(_OWORD* a1, _OWORD* a2, __int64 a3, int a4, float a5,
                  __int64 a6, float* a7);
float32x4_t game_5be030(float32x4_t* a1, float32x4_t* a2, __int64 a3, float a4,
                        __int64 a5, __int64 a6, float* a7);
float32x4_t game_5be6b0(float32x4_t* a1, float32x4_t* a2, __int64 a3, int a4,
                        __int64 a5, float* a6);
float32x4_t game_5beb80(float32x4_t* a1, float32x4_t* a2, __int64 a3, int a4,
                        __int64 a5, float* a6);
float32x4_t game_5bf040(float32x4_t* a1, float32x4_t* a2, __int64 a3, float a4,
                        __int64 a5, __int64 a6, float* a7);
float game_5bf770(__int64 a1, _OWORD* a2, __int64 a3, __int64 a4, __int64 a5,
                  float* a6, float a7);
float game_5bf7f0(__int64 a1, float32x4_t* a2, __int64 a3, __int64 a4,
                  __int64 a5, float* a6, float a7);
float32x4_t game_5bf870(float32x4_t* a1, float32x4_t* a2, __int64 a3,
                        __int64 a4, __int64 a5, float* a6);
float32x4_t game_5bf9f0(int8x16_t* a1, float32x4_t* a2, __int64 a3, double a4,
                        long double a5, __int64 a6, __int64 a7, float* a8);
float game_5bfbf0(_OWORD* a1, _OWORD* a2, __int64 a3, __int64 a4, __int64 a5,
                  __int64 a6);
float game_5bfc60(_OWORD* a1, _OWORD* a2, __int64 a3, int a4, float a5,
                  __int64 a6, __int64 a7);
float32x4_t game_5bfd70(float32x4_t* a1, float32x4_t* a2, __int64 a3,
                        __int64 a4, __int64 a5, float* a6);
float game_5c0040(long double* a1, _BYTE* a2, __int64 a3, long double a4);
__int64 game_5c0350(int a1);
float game_5c0500(float32x4_t* a1, float32x2_t* a2, float32x2_t* a3,
                  float32x2_t* a4, float32x2_t* a5, float a6);
float32x4_t game_5c05c0(float32x4_t* a1, float32x2_t* a2, float32x4_t* a3,
                        float a4);
void game_5c07e0(float a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                 int a6);
float game_5c0990(__int64 a1, float* a2, float* a3, __int64 a4, float a5,
                  __int64 a6, int a7);
__int64 game_5c0ec0(__int64 result, float32x2_t* a2, __int64 a3, __int64 a4,
                    int a5, float a6);
float game_5c1520(__int64 a1, _OWORD* a2, __int64 a3, __int64 a4, int a5,
                  float a6);
void game_5c19f0(__int64 a1, float32x4_t* a2, __int64 a3, _QWORD* a4, int a5,
                 float a6, double a7, double a8, double a9, float32x4_t a10,
                 double a11, float32x4_t a12);
void game_5c1c50(__int64 a1, float32x2_t* a2, float32x4_t* a3, __int64 a4,
                 float* a5, int32x4_t* a6, int a7, float32x4_t* a8, float a9,
                 long double a10, double a11, long double a12, float32x4_t a13,
                 long double a14, float32x4_t a15, float32x4_t* a16);
void game_5c26c0(long double a1, float a2, long double a3, __int64 a4,
                 float32x4_t* a5, __int64 a6, float* a7, float* a8, float* a9);
void game_5c2d00(long double a1, long double a2, __int64 a3, int8x16_t* a4,
                 __int64 a5, float* a6);
void game_5c32a0(long double a1, float a2, long double a3, __int64 a4,
                 float32x4_t* a5, __int64 a6, float* a7, float* a8, float* a9);
void game_5c3e70(float a1, __int64 a2, __int128* a3, __int64 a4, _DWORD* a5,
                 float32x2_t* a6);
float game_5c4910(float* a1, float a2, float a3);
float game_5c4de0(float a1, float a2);
float32x4_t game_5dd870(float32x4_t* a1, float32x4_t* a2, signed __int32 a3);
void game_5dd9c0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                 __int64 a5, __int64 a6);
__int64 game_5ddd40(__int64 a1, __int64 a2, unsigned int a3, __int64 a4,
                    __int64 a5);
int* game_5de570(int* result);
float32x4_t game_5df170(float32x4_t* a1, float32x4_t* a2, int32x4_t* a3,
                        __int64 a4, int a5, double a6, double a7, double a8,
                        double a9, double a10);
float game_5df5f0(int* a1, float32x4_t* a2, float a3, float a4, float a5);
__int64 game_615300(__int64 a1, _QWORD* a2, int* a3);
__int64 game_615760(__int64 a1, __int64 a2);
__n128 game_6160c0(__int64 a1, __int64 a2);
__n128 game_6163e0(__int64 a1, __int64 a2);
_QWORD* game_6166c0(float* a1, __int64* a2, __int64 a3, _QWORD** a4);
int* game_64c980(int* result, int* a2, unsigned __int64 a3, __int64 a4);
unsigned __int64* game_64d0e0(unsigned __int64* result, int* a2, int* a3,
                              __int64 a4, __int64 a5, _DWORD* a6, __int64 a7);
_QWORD* game_65c780(float* a1, unsigned __int64* a2, __int64* a3);
__int64 game_6616e0(__int64 a1, unsigned int* a2);
__int64 game_66e940(__int64 result);
__int64 game_66ed20(__int64 a1, __int64 a2, __int64 a3, int* a4,
                    unsigned __int64 a5);
_QWORD* game_66f7e0(_QWORD* result, int a2, unsigned __int64 a3);
__attribute__((swiftcall)) void game_670240(PSEUDO_X8 x8_, __int64 result,
                                            __int64 a2, unsigned __int64 a3);
__int64 game_68ece0(_BYTE* a1, __int64 a2);
__int64 game_734fc0(__int64 a1);
__attribute__((swiftcall)) void game_7a8a40(PSEUDO_X8 x8_, __int64 result);
__int64 game_7bbe20();
__int64 game_7bc0e0(__int64 result);
__int64 game_7bdbd0(__int64 result);
void game_7bdd40(__int64 a1);
__int64 game_7c6330(__int64 a1);
__int64 game_80c680(__int64 result);
char* game_80e6f0(__int64 a1, __int64 a2);

float game_55ca90(__int64 a1, float32x4_t* a2, float32x2_t* a3, __int64 a4,
                  float result)
{
  float32x4_t* v5;
  float32x4_t v6;
  float32x4_t v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t* v12;
  float32x4_t v13;
  float32x4_t v14;
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

  if (*(int*)(a1 + 152) >= 1) {
    v5 = *(float32x4_t**)(a4 + 24);
    if (v5 != nullptr) {
      v6 = v5[1];
      v7 = v5[2];
      v8 = vmlaq_laneq_f32(
          vmlaq_laneq_f32(
              vmlaq_lane_f32(
                  vmulq_n_f32(*v5,
                              COERCE_FLOAT(*(_OWORD*)LANES64(*(a3)).n64_u64)),
                  v6, COERCE_AS(float32x2_t, LANES64(*(a3)).n64_u64[0]), 1),
              v7, *(float32x4_t*)LANES64(*(a3)).n64_u64, 2),
          COERCE_AS(float32x4_t, GameData_1a82dc0),
          *(float32x4_t*)LANES64(*(a3)).n64_u64, 3);
      v9 = vmlaq_laneq_f32(
          vmlaq_laneq_f32(
              vmlaq_lane_f32(
                  vmulq_n_f32(*v5,
                              COERCE_FLOAT(*(_OWORD*)LANES64(a3[2]).n64_u64)),
                  v6, a3[2], 1),
              v7, *(float32x4_t*)LANES64(a3[2]).n64_u64, 2),
          COERCE_AS(float32x4_t, GameData_1a82dc0),
          *(float32x4_t*)LANES64(a3[2]).n64_u64, 3);
      v10 = vmlaq_laneq_f32(
          vmlaq_laneq_f32(
              vmlaq_lane_f32(
                  vmulq_n_f32(*v5,
                              COERCE_FLOAT(*(_OWORD*)LANES64(a3[4]).n64_u64)),
                  v6, a3[4], 1),
              v7, *(float32x4_t*)LANES64(a3[4]).n64_u64, 2),
          COERCE_AS(float32x4_t, GameData_1a82dc0),
          *(float32x4_t*)LANES64(a3[4]).n64_u64, 3);
      v11 = vmlaq_laneq_f32(
          vmlaq_laneq_f32(
              vmlaq_lane_f32(
                  vmulq_n_f32(*v5,
                              COERCE_FLOAT(*(_OWORD*)LANES64(a3[6]).n64_u64)),
                  v6, a3[6], 1),
              v7, *(float32x4_t*)LANES64(a3[6]).n64_u64, 2),
          COERCE_AS(float32x4_t, GameData_1a82dc0),
          *(float32x4_t*)LANES64(a3[6]).n64_u64, 3);
      v12 = *(float32x4_t**)(a4 + 32);
      if (v12 == nullptr) {
      LABEL_5:
        *a2 = v8;
        a2[1] = v9;
        a2[2] = v10;
        a2[3] = v11;
        PSEUDO_LOW_LANE128(v11, n128_u8, *(_BYTE*)(a4 + 72));
        PSEUDO_LOW_LANE128(v10, n128_u8, *(_BYTE*)(a4 + 108));
        v15 = *(float*)(a4 + 68);
        v16 = *(float*)(a4 + 48);
        v17 = *(float*)(a4 + 76);
        v18 = *(float*)(a4 + 80);
        v19 = *(float*)(a4 + 92);
        v20 = *(float*)(a4 + 96);
        v21 = *(float*)(a4 + 100);
        v22 = *(float*)(a4 + 104);
        v23 = *(float*)(a4 + 40);
        v24 = *(float*)(a4 + 44);
        v25 = *(float*)(a4 + 56);
        v26 = *(float*)(a4 + 60);
        v27 = *(float*)(a4 + 84);
        v28 = *(float*)(a4 + 64) - v16;
        LANES128(a2[5]).n128_f32[0] = v23;
        LANES128(a2[5]).n128_f32[1] = v24;
        LANES128(a2[5]).n128_u32[3] = 0;
        LANES128(a2[5]).n128_f32[2] = v16;
        LANES128(a2[7]).n128_f32[0] = v17;
        LANES128(a2[7]).n128_f32[1] = v18;
        LANES128(a2[4]).n128_f32[0] = v25 - v23;
        LANES128(a2[4]).n128_f32[1] = v26 - v24;
        LANES128(a2[7]).n128_f32[2] = v27;
        LANES128(a2[7]).n128_u32[3] = 0;
        LANES128(a2[4]).n128_f32[2] = v28;
        LANES128(a2[4]).n128_f32[3] =
            v15 *
            (float)((float)LANES128(v11).n128_u32[0] * 0x1.0101020000000p-8f);
        LANES128(a2[6]).n128_f32[0] = v19 - v17;
        LANES128(a2[6]).n128_f32[1] = v20 - v18;
        result = v22 * (float)((float)LANES128(v10).n128_u32[0] *
                               0x1.0101020000000p-8f);
        LANES128(a2[6]).n128_f32[2] = v21 - v27;
        LANES128(a2[6]).n128_f32[3] = result;
        return result;
      }
    }
    else {
      v8 = *(float32x4_t*)LANES64(*(a3)).n64_u64;
      v9 = *(float32x4_t*)LANES64(a3[2]).n64_u64;
      v10 = *(float32x4_t*)LANES64(a3[4]).n64_u64;
      v11 = *(float32x4_t*)LANES64(a3[6]).n64_u64;
      v12 = *(float32x4_t**)(a4 + 32);
      if (v12 == nullptr) {
        goto LABEL_5;
      }
    }
    v13 = v12[1];
    v14 = v12[2];
    v11 = vmlaq_laneq_f32(
        vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(*v12, LANES128(v11).n128_f32[0]), v13,
                           COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0]),
                           1),
            v14, v11, 2),
        COERCE_AS(float32x4_t, GameData_1a82dc0), v11, 3);
    v10 = vmlaq_laneq_f32(
        vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(*v12, LANES128(v10).n128_f32[0]), v13,
                           COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                           1),
            v14, v10, 2),
        COERCE_AS(float32x4_t, GameData_1a82dc0), v10, 3);
    v9 = vmlaq_laneq_f32(
        vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(*v12, LANES128(v9).n128_f32[0]), v13,
                           COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]), 1),
            v14, v9, 2),
        COERCE_AS(float32x4_t, GameData_1a82dc0), v9, 3);
    v8 = vmlaq_laneq_f32(
        vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(*v12, LANES128(v8).n128_f32[0]), v13,
                           COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0]), 1),
            v14, v8, 2),
        COERCE_AS(float32x4_t, GameData_1a82dc0), v8, 3);
    goto LABEL_5;
  }
  return result;
}

void game_5b99a0(__int64 a1, float* a2, float* a3, float* a4, __int64 a5,
                 __int64 a6, char a7, float a8)
{
  __int64 v8;
  __int64 v9;
  int8x16_t v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  unsigned int v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float* v25;
  float v26;
  int v27;
  float v28;
  float* v30;
  float v33;
  float v34;
  int v35;
  float32x4_t v36;
  float* v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;

  v8 = *(_QWORD*)(a6 + 160);
  v9 = *(_QWORD*)(a6 + 120);
  if (*(_BYTE*)(v8 + 2034) != 0) {
    if (*(_BYTE*)(v9 + 613) == 1) {
      v14 = vmulq_f32(*(float32x4_t*)(a6 + 976), *(float32x4_t*)(a6 + 976));
      LANES128(v14).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
              .n64_u64[0];
      v15 = LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]))))
                .n64_f32[0];
      if (v15 >= *(float*)(v8 + 2096)) {
        v16 = v15;
      }
      else {
        v16 = 0x0.0p+0f;
      }
      v17 = *(float*)(v8 + 2088);
      if (v16 == 0x0.0p+0f) {
        v16 = *(float*)(v8 + 2088);
      }
      else if (v16 < v17 || (v17 = *(float*)(v8 + 2092)) < v16) {
        v16 = (float)(v15 * v17) / v15;
      }
      v33 = *a3 + v16;
      v34 = *(float*)(v8 + 2084);
      if (v34 != 0x0.0p+0f) {
        v35 = (int)(float)(v33 / v34);
        if (v35 >= 1) {
          v36 = *(float32x4_t*)(a6 + 880);
          v37 = a3;
          v38 = vsubq_f32(*(float32x4_t*)(a6 + 960), v36);
          v42 = v36;
          if (v16 == 0x0.0p+0f) {
            v41 = vmlaq_f32(v36, COERCE_AS(float32x4_t, 0), v38);
            do {
              v33 = v33 - *(float*)(*(_QWORD*)(a6 + 160) + 2084LL);
              *(float32x4_t*)(a6 + 944) = v41;
              *(float32x4_t*)(a6 + 880) = v41;
              GameRoutine_5bd950(a1, a5, a6, 1, a7 & 1, 0);
              --v35;
              *(float32x4_t*)(a6 + 944) = v42;
              *(float32x4_t*)(a6 + 880) = v42;
            } while (v35 != 0);
          }
          else {
            v40 = v38;
            do {
              v33 = v33 - *(float*)(*(_QWORD*)(a6 + 160) + 2084LL);
              v39 = vmlaq_n_f32(v42, v38, v33 / v16);
              *(float32x4_t*)(a6 + 944) = v39;
              *(float32x4_t*)(a6 + 880) = v39;
              GameRoutine_5bd950(a1, a5, a6, 1, a7 & 1, 0);
              v38 = v40;
              --v35;
              *(float32x4_t*)(a6 + 944) = v42;
              *(float32x4_t*)(a6 + 880) = v42;
            } while (v35 != 0);
          }
          a3 = v37;
          *(_DWORD*)(a6 + 104) = *(_DWORD*)(a6 + 68);
        }
      }
      *a3 = v33;
    }
  }
  else {
    v18 = *a2;
    v19 = *a4;
    if (*a2 >= *a4) {
      v20 = *(_DWORD*)(a6 + 172);
      v21 = (float)*(int*)(v8 + 2052) / -0x1.9000000000000p+6f;
      v22 = *(float*)(v8 + 2048);
      *(_DWORD*)(a6 + 172) = 1103515245 * v20 + 12345;
      v23 = v22 * v21;
      v24 = vcvts_n_f32_u32(v20, 0x20u);
      if ((unsigned int)*(unsigned __int8*)(v8 + 2104) - 5 >= 2) {
        v25 = (float*)(a6 + 1596);
      }
      else {
        v25 = (float*)(v8 + 2048);
      }
      v26 = *a3 +
            (float)((float)((float)(*v25 + (float)(PSEUDO_UNFUSED(v23 * v24))) *
                            *(float*)(a6 + 96)) *
                    *(float*)(v9 + 80));
      if (v26 < 0x0.0p+0f) {
        v26 = 0x0.0p+0f;
      }
      v27 = (int)v26;
      *a3 = v26;
      if ((int)v26 != 0) {
        v28 = v18 - v19;
        v30 = a3;
        GameRoutine_5bd950(a1, a5, a6, (unsigned int)v27, a7 & 1, 0);
        GameRoutine_5b4550(a6, a4);
        *(_DWORD*)(*(_QWORD*)(a6 + 120) + 24LL) = 1;
        *v30 = *v30 - (float)v27;
        *a2 = a8 + v28;
        *(_DWORD*)(a6 + 104) = *(_DWORD*)(a6 + 68);
      }
      else {
        *a2 = 0x0.0p+0f;
      }
    }
    else {
      *a2 = a8 + v18;
    }
  }
}

__int64 game_5b9d90(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float32x2_t v5;
  float v6;
  float32x4_t v7;
  __int64 v8;
  float32x4_t* v9;
  float32x2_t v10;
  float32x4_t v11;
  float32x2_t v12;
  float v13;
  float32x4_t v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
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
  float32x4_t* v55;
  int8x16_t v56;
  int8x16_t v57;
  int8x16_t v58;
  int8x16_t v59;
  int8x16_t v60;
  int8x16_t v61;
  int32x4_t v62;
  float32x4_t v63;
  int8x16_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  int32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t v75;
  int8x16_t v76;
  int8x16_t v77;
  float32x4_t v78;
  float32x4_t v79;
  float32x4_t v80;
  float32x4_t v81;
  float32x4_t v82;
  float32x4_t v83;
  float32x4_t* v84;
  float32x4_t v85;
  float32x4_t v86;
  float32x4_t v87;
  float32x4_t v88;
  float32x4_t v89;
  float32x4_t v90;
  float32x4_t v91;
  float32x4_t v92;
  float32x4_t v93;
  float32x4_t v94;
  float32x4_t v95;
  float32x4_t v96;
  float32x4_t v97;
  float32x2_t v98;
  float v99;
  int8x16_t v100;
  int8x16_t v101;
  int8x16_t v102;
  int8x16_t v103;
  int8x16_t v104;
  int8x16_t v105;
  int32x4_t v106;
  float32x4_t v107;
  int8x16_t v108;
  float32x4_t v109;
  float32x4_t v110;
  float32x4_t v111;
  float32x4_t v112;
  float32x4_t v113;
  float32x4_t v114;
  float32x4_t v115;
  int32x4_t v116;
  float32x4_t v117;
  float32x4_t v118;
  float32x4_t v119;
  int8x16_t v120;
  int8x16_t v121;
  float32x4_t v122;
  float32x4_t v123;
  float32x4_t v124;
  float32x4_t v125;
  float32x4_t v126;
  float32x4_t v127;
  float32x4_t v128;
  float32x4_t v129;
  float32x4_t v130;
  float32x4_t v131;
  float32x4_t v132;
  float32x4_t v133;
  float32x4_t v134;
  float32x4_t v135;
  __int128 v136;
  int8x16_t v137;
  int8x16_t v138;
  int8x16_t v139;
  int8x16_t v140;
  int8x16_t v141;
  int8x16_t v142;
  int32x4_t v143;
  float32x4_t v144;
  int8x16_t v145;
  float32x4_t v146;
  float32x4_t v147;
  float32x4_t v148;
  float32x4_t v149;
  float32x4_t v150;
  float32x4_t v151;
  float32x4_t v152;
  int32x4_t v153;
  float32x4_t v154;
  float32x4_t v155;
  float32x4_t v156;
  int8x16_t v157;
  int8x16_t v158;
  float32x4_t v159;
  float32x4_t v160;
  float32x4_t v161;
  float32x4_t v162;
  float32x4_t v163;
  float32x4_t v164;
  float32x4_t v165;
  float32x4_t v166;
  float32x4_t v167;
  float32x4_t v168;
  float32x4_t v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 (*v173)(_QWORD*);
  __int64 result;
  __int64 (*v175)(_QWORD*);
  __int64 (*v176)(_QWORD*);
  _QWORD v177[3];

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (*(_BYTE*)a2 == 0) {
    v8 = *(_QWORD*)(a2 + 568);
    v9 = *(float32x4_t**)(a2 + 120);
    if (*(_BYTE*)(v8 + 2) == 1) {
      PSEUDO_LOW_LANE64(v10, n64_u64, *(unsigned __int64*)(a2 + 1536));
      if (*(_QWORD*)(v8 + 664) != 0) {
        LANES128(v11).n128_u32[3] = 0;
        LANES128(v11).n128_f32[0] =
            *(float*)(a2 + 1548) * 0x1.1df46a0000000p-6f;
        LANES128(v11).n128_f32[1] =
            *(float*)(a2 + 1552) * 0x1.1df46a0000000p-6f;
        LANES128(v11).n128_f32[2] =
            *(float*)(a2 + 1556) * 0x1.1df46a0000000p-6f;
      }
      else {
        LANES128(v11).n128_u64[0] = *(_QWORD*)(a2 + 1548);
        LANES128(v11).n128_u64[1] = *(unsigned int*)(a2 + 1556);
      }
      PSEUDO_LOW_LANE64(v98, n64_u64, *(unsigned __int64*)(a2 + 1560));
      v99 = *(float*)(a2 + 1568);
      v100 = vmlaq_f32(v11, vdupq_n_s32(0xC0C90FDB),
                       vrndnq_f32(vmulq_f32(v11, vdupq_n_s32(0x3E22F983u))));
      v101 = vcgtq_f32(v100, vdupq_n_s32(0x3FC90FDBu));
      v102 = vmvnq_s8(v101);
      v103 = vbslq_s8(v101, vsubq_f32(vdupq_n_s32(0x40490FDBu), v100), v100);
      v104 = vcgtq_f32(vdupq_n_s32(0xBFC90FDB), v103);
      v105 = vsubq_f32(vdupq_n_s32(0xC0490FDB), v103);
      v106 =
          *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190);
      v107 = vbslq_s8(v104, v105, v103);
      PSEUDO_LOW_LANE128(v105, n128_u32, *(_DWORD*)GameData_212c190);
      v108 = vbicq_s8(v102, v104);
      v109 = vmulq_f32(v107, v107);
      v110 = vmlsq_lane_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v106).n128_u64[0]), 0),
          v109, COERCE_AS(float32x2_t, LANES128(v105).n128_u64[0]), 0);
      PSEUDO_LOW_LANE128(
          v105, n128_f32,
          -COERCE_FLOAT(HIDWORD(*(_QWORD*)((char*)((_UNKNOWN*)0x4LL) +
                                           (_QWORD)GameData_212c190))));
      v111 = vmlaq_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v105).n128_u64[0]), 0),
          v109, v110);
      v112 = vmlaq_f32(vdupq_laneq_s32(v106, 2), v109, v111);
      LANES128(v106).n128_u64[0] = 0x3F8000003F800000LL;
      LANES128(v106).n128_u64[1] = 0x3F8000003F800000LL;
      PSEUDO_LOW_LANE128(
          v111, n128_f32,
          -COERCE_FLOAT(DWORD3(*(_OWORD*)((char*)((_UNKNOWN*)0x4LL) +
                                           (_QWORD)GameData_212c190))));
      v113 = vmlaq_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v111).n128_u64[0]), 0),
          v109, v112);
      v114 = vmlaq_f32(v106, v109, v113);
      PSEUDO_LOW_LANE128(v113, n128_u32, *(_DWORD*)GameData_212c188);
      v115 = vmulq_f32(v107, v114);
      v116 =
          *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188);
      v117 = vmlsq_lane_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v116).n128_u64[0]), 0),
          v109, COERCE_AS(float32x2_t, LANES128(v113).n128_u64[0]), 0);
      PSEUDO_LOW_LANE128(
          v113, n128_f32,
          -COERCE_FLOAT(HIDWORD(*(_QWORD*)((char*)((_UNKNOWN*)0x4LL) +
                                           (_QWORD)GameData_212c188))));
      v118 = vmlaq_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v113).n128_u64[0]), 0),
          v109, v117);
      v119 = vmlaq_f32(vdupq_laneq_s32(v116, 2), v109, v118);
      PSEUDO_LOW_LANE128(v118, n128_f32, -LANES128(v116).n128_f32[3]);
      v120 = vmlaq_f32(
          v106, v109,
          vmlaq_f32(vdupq_lane_s32(
                        COERCE_AS(int32x2_t, LANES128(v118).n128_u64[0]), 0),
                    v109, v119));
      v121 = vbslq_s8(v108, v120, vnegq_f32(v120));
      LANES128(v120).n128_u64[0] =
          LANES128(v121).n128_u32[2] |
          ((unsigned __int64)LANES128(v115).n128_u32[2] << 32);
      LANES128(v119).n128_u64[0] =
          LANES128(v115).n128_u32[1] |
          ((unsigned __int64)LANES128(v115).n128_u32[1] << 32);
      LANES128(v108).n128_u64[0] =
          LANES64_OF(
              vmul_f32(COERCE_AS(float32x2_t,
                                 (LANES128(v121).n128_u32[1] |
                                  ((unsigned __int64)LANES128(v121).n128_u32[1]
                                   << 32))),
                       COERCE_AS(float32x2_t, LANES128(v120).n128_u64[0])))
              .n64_u64[0];
      LANES128(v120).n128_u64[1] = 1065353216;
      LANES128(v119).n128_u64[1] = LANES128(v121).n128_u32[1];
      LANES128(v109).n128_u64[0] =
          LANES64_OF(
              vmul_f32(COERCE_AS(float32x2_t, LANES128(v115).n128_u32[1]),
                       COERCE_AS(float32x2_t, 3212836864LL)))
              .n64_u64[0];
      LANES128(v116).n128_u64[0] = LANES128(v108).n128_u64[0];
      v122 = vmulq_f32(v119, v120);
      LANES128(v119).n128_u64[0] =
          __ROR8__(LANES128(v121).n128_u32[2] |
                       ((unsigned __int64)LANES128(v115).n128_u32[2] << 32),
                   32);
      LANES128(v116).n128_u64[1] = LANES128(v109).n128_u64[0];
      v123 = vaddq_f32(vmulq_n_f32(v122, LANES128(v115).n128_f32[0]),
                       vmulq_f32(vmulq_n_f32(v119, LANES128(v121).n128_f32[0]),
                                 COERCE_AS(float32x4_t, GameData_1a82940)));
      v124 = v9[8];
      v125 = v9[9];
      v126 = vaddq_f32(vmulq_n_f32(v122, LANES128(v121).n128_f32[0]),
                       vmulq_f32(vmulq_n_f32(v119, LANES128(v115).n128_f32[0]),
                                 COERCE_AS(float32x4_t, GameData_1a83510)));
      v127 = vmulq_n_f32(v116, LANES64(v10).n64_f32[0]);
      v128 = v9[6];
      v129 = v9[7];
      v130 = vmulq_lane_f32(v123, v10, 1);
      v131 = vmulq_n_f32(v126, *(float*)(a2 + 1544));
      *(float32x4_t*)(a2 + 832) = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v128, LANES128(v127).n128_f32[0]), v129,
                         COERCE_AS(float32x2_t, LANES128(v127).n128_u64[0]), 1),
          v124, v127, 2);
      *(float32x4_t*)(a2 + 848) = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v128, LANES128(v130).n128_f32[0]), v129,
                         COERCE_AS(float32x2_t, LANES128(v130).n128_u64[0]), 1),
          v124, v130, 2);
      *(float32x4_t*)(a2 + 864) = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v128, LANES128(v131).n128_f32[0]), v129,
                         COERCE_AS(float32x2_t, LANES128(v131).n128_u64[0]), 1),
          v124, v131, 2);
      *(float32x4_t*)(a2 + 880) = vaddq_f32(
          vmlaq_n_f32(vmlaq_lane_f32(vmulq_n_f32(v128, LANES64(v98).n64_f32[0]),
                                     v129, v98, 1),
                      v124, v99),
          v125);
      v132 = v9[10];
      v133 = v9[11];
      v134 = v9[12];
      v135 = v9[13];
      *(float32x4_t*)(a2 + 896) = vmlaq_n_f32(
          vmlaq_lane_f32(vmulq_n_f32(v132, LANES128(v108).n128_f32[0]), v133,
                         COERCE_AS(float32x2_t, LANES128(v108).n128_u64[0]), 1),
          v134, LANES128(v109).n128_f32[0]);
      *(float32x4_t*)(a2 + 912) = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v132, LANES128(v123).n128_f32[0]), v133,
                         COERCE_AS(float32x2_t, LANES128(v123).n128_u64[0]), 1),
          v134, v123, 2);
      v97 = vaddq_f32(
          vmlaq_n_f32(vmlaq_lane_f32(vmulq_n_f32(v132, LANES64(v98).n64_f32[0]),
                                     v133, v98, 1),
                      v134, v99),
          v135);
      *(float32x4_t*)(a2 + 928) = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v132, LANES128(v126).n128_f32[0]), v133,
                         COERCE_AS(float32x2_t, LANES128(v126).n128_u64[0]), 1),
          v134, v126, 2);
      goto LABEL_27;
    }
    if (LANES128(v9[1]).n128_u32[2] == 0) {
      goto LABEL_28;
    }
    v25 = v9[6];
    v26 = v9[7];
    v27 = v9[8];
    v28 = v9[9];
    v29 = *(float32x4_t*)(a2 + 736);
    v30 = *(float32x4_t*)(a2 + 752);
    v31 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v25, COERCE_FLOAT(*(_OWORD*)(a2 + 720))),
                       v26, *(float32x2_t*)(a2 + 720), 1),
        v27, *(float32x4_t*)(a2 + 720), 2);
    *(float32x4_t*)(a2 + 832) = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v25, COERCE_FLOAT(*(_OWORD*)(a2 + 704))),
                       v26, *(float32x2_t*)(a2 + 704), 1),
        v27, *(float32x4_t*)(a2 + 704), 2);
    *(float32x4_t*)(a2 + 848) = v31;
    *(float32x4_t*)(a2 + 864) = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v25, LANES128(v29).n128_f32[0]), v26,
                       COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0]), 1),
        v27, v29, 2);
    *(float32x4_t*)(a2 + 880) =
        vaddq_f32(vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v25, LANES128(v30).n128_f32[0]), v26,
                          COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0]), 1),
                      v27, v30, 2),
                  v28);
    v32 = *(float32x4_t*)(a2 + 768);
    v33 = *(float32x4_t*)(a2 + 784);
    v34 = *(float32x4_t*)(a2 + 800);
    v35 = *(float32x4_t*)(a2 + 816);
    v36 = v9[10];
    v37 = v9[11];
    v38 = v9[12];
    v39 = v9[13];
  LABEL_26:
    *(float32x4_t*)(a2 + 896) = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v36, LANES128(v32).n128_f32[0]), v37,
                       COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0]), 1),
        v38, v32, 2);
    *(float32x4_t*)(a2 + 912) = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v36, LANES128(v33).n128_f32[0]), v37,
                       COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0]), 1),
        v38, v33, 2);
    *(float32x4_t*)(a2 + 928) = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v36, LANES128(v34).n128_f32[0]), v37,
                       COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0]), 1),
        v38, v34, 2);
    v97 =
        vaddq_f32(vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v36, LANES128(v35).n128_f32[0]), v37,
                          COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0]), 1),
                      v38, v35, 2),
                  v39);
    goto LABEL_27;
  }
  v4 = *(_QWORD*)(a2 + 568);
  if (*(_BYTE*)(*(_QWORD*)(a2 + 160) + 2020LL) == 0) {
    if (*(_BYTE*)(v4 + 2) != 0) {
      PSEUDO_LOW_LANE64(v12, n64_u64, *(unsigned __int64*)(a2 + 1536));
      v13 = *(float*)(a2 + 1544);
      if (*(_QWORD*)(v4 + 664) != 0) {
        LANES128(v14).n128_u32[3] = 0;
        LANES128(v14).n128_f32[0] =
            *(float*)(a2 + 1548) * 0x1.1df46a0000000p-6f;
        LANES128(v14).n128_f32[1] =
            *(float*)(a2 + 1552) * 0x1.1df46a0000000p-6f;
        LANES128(v14).n128_f32[2] =
            *(float*)(a2 + 1556) * 0x1.1df46a0000000p-6f;
      }
      else {
        LANES128(v14).n128_u64[0] = *(_QWORD*)(a2 + 1548);
        LANES128(v14).n128_u64[1] = *(unsigned int*)(a2 + 1556);
      }
      *(_QWORD*)&v136 = *(_QWORD*)(a2 + 1560);
      *((_QWORD*)&v136 + 1) = *(unsigned int*)(a2 + 1568);
      v137 = vmlaq_f32(v14, vdupq_n_s32(0xC0C90FDB),
                       vrndnq_f32(vmulq_f32(v14, vdupq_n_s32(0x3E22F983u))));
      v138 = vcgtq_f32(v137, vdupq_n_s32(0x3FC90FDBu));
      v139 = vmvnq_s8(v138);
      v140 = vbslq_s8(v138, vsubq_f32(vdupq_n_s32(0x40490FDBu), v137), v137);
      v141 = vcgtq_f32(vdupq_n_s32(0xBFC90FDB), v140);
      v142 = vsubq_f32(vdupq_n_s32(0xC0490FDB), v140);
      v143 =
          *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190);
      v144 = vbslq_s8(v141, v142, v140);
      PSEUDO_LOW_LANE128(v142, n128_u32, *(_DWORD*)GameData_212c190);
      v145 = vbicq_s8(v139, v141);
      v146 = vmulq_f32(v144, v144);
      v147 = vmlsq_lane_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v143).n128_u64[0]), 0),
          v146, COERCE_AS(float32x2_t, LANES128(v142).n128_u64[0]), 0);
      PSEUDO_LOW_LANE128(
          v142, n128_f32,
          -COERCE_FLOAT(HIDWORD(*(_QWORD*)((char*)((_UNKNOWN*)0x4LL) +
                                           (_QWORD)GameData_212c190))));
      v148 = vmlaq_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v142).n128_u64[0]), 0),
          v146, v147);
      v149 = vmlaq_f32(vdupq_laneq_s32(v143, 2), v146, v148);
      LANES128(v143).n128_u64[0] = 0x3F8000003F800000LL;
      LANES128(v143).n128_u64[1] = 0x3F8000003F800000LL;
      PSEUDO_LOW_LANE128(
          v148, n128_f32,
          -COERCE_FLOAT(DWORD3(*(_OWORD*)((char*)((_UNKNOWN*)0x4LL) +
                                           (_QWORD)GameData_212c190))));
      v150 = vmlaq_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v148).n128_u64[0]), 0),
          v146, v149);
      v151 = vmlaq_f32(v143, v146, v150);
      PSEUDO_LOW_LANE128(v150, n128_u32, *(_DWORD*)GameData_212c188);
      v152 = vmulq_f32(v144, v151);
      v153 =
          *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188);
      v154 = vmlsq_lane_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v153).n128_u64[0]), 0),
          v146, COERCE_AS(float32x2_t, LANES128(v150).n128_u64[0]), 0);
      PSEUDO_LOW_LANE128(
          v150, n128_f32,
          -COERCE_FLOAT(HIDWORD(*(_QWORD*)((char*)((_UNKNOWN*)0x4LL) +
                                           (_QWORD)GameData_212c188))));
      v155 = vmlaq_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v150).n128_u64[0]), 0),
          v146, v154);
      v156 = vmlaq_f32(vdupq_laneq_s32(v153, 2), v146, v155);
      LANES128(v155).n128_f32[0] = -LANES128(v153).n128_f32[3];
      v157 = vmlaq_f32(
          v143, v146,
          vmlaq_f32(vdupq_lane_s32(
                        COERCE_AS(int32x2_t, LANES128(v155).n128_u64[0]), 0),
                    v146, v156));
      v158 = vbslq_s8(v145, v157, vnegq_f32(v157));
      LANES128(v146).n128_u64[0] =
          LANES128(v158).n128_u32[1] |
          ((unsigned __int64)LANES128(v158).n128_u32[1] << 32);
      LANES128(v153).n128_u64[0] =
          LANES128(v158).n128_u32[2] |
          ((unsigned __int64)LANES128(v152).n128_u32[2] << 32);
      LANES128(v156).n128_u64[0] = LANES128(v153).n128_u64[0];
      LANES128(v146).n128_u64[1] = LANES128(v152).n128_u32[1];
      LANES128(v155).n128_u64[0] =
          LANES128(v152).n128_u32[1] |
          ((unsigned __int64)LANES128(v152).n128_u32[1] << 32);
      LANES128(v156).n128_u64[1] = 3212836864LL;
      LANES128(v155).n128_u64[1] = LANES128(v158).n128_u32[1];
      PSEUDO_LOW_LANE128(v157, n128_u64,
                         __ROR8__(LANES128(v153).n128_u64[0], 32));
      v159 = vmulq_f32(v146, v156);
      LANES128(v153).n128_u64[1] = 1065353216;
      v160 = vmulq_f32(v155, v153);
      v161 = vaddq_f32(vmulq_n_f32(v160, LANES128(v152).n128_f32[0]),
                       vmulq_f32(vmulq_n_f32(v157, LANES128(v158).n128_f32[0]),
                                 COERCE_AS(float32x4_t, GameData_1a82940)));
      *(float32x4_t*)(a2 + 896) = v159;
      *(float32x4_t*)(a2 + 912) = v161;
      v162 = vaddq_f32(vmulq_n_f32(v160, LANES128(v158).n128_f32[0]),
                       vmulq_f32(vmulq_n_f32(v157, LANES128(v152).n128_f32[0]),
                                 COERCE_AS(float32x4_t, GameData_1a83510)));
      *(float32x4_t*)(a2 + 832) = vmulq_n_f32(v159, LANES64(v12).n64_f32[0]);
      *(float32x4_t*)(a2 + 848) = vmulq_lane_f32(v161, v12, 1);
      *(float32x4_t*)(a2 + 864) = vmulq_n_f32(v162, v13);
      *(_OWORD*)(a2 + 880) = v136;
      *(float32x4_t*)(a2 + 928) = v162;
      *(_OWORD*)(a2 + 944) = v136;
      v55 = *(float32x4_t**)(a2 + 1352);
      if (*(_BYTE*)(LANES128(v55[10]).n128_u64[0] + 1875) == 1) {
        goto LABEL_28;
      }
    }
    else {
      v40 = *(_QWORD*)(a2 + 736);
      v41 = *(_QWORD*)(a2 + 752);
      v42 = *(_QWORD*)(a2 + 760);
      *(_QWORD*)(a2 + 872) = *(_QWORD*)(a2 + 744);
      v43 = *(_QWORD*)(a2 + 712);
      *(_QWORD*)(a2 + 864) = v40;
      v44 = *(_QWORD*)(a2 + 704);
      *(_QWORD*)(a2 + 880) = v41;
      v45 = *(_QWORD*)(a2 + 720);
      *(_QWORD*)(a2 + 888) = v42;
      v46 = *(_QWORD*)(a2 + 728);
      *(_QWORD*)(a2 + 840) = v43;
      v47 = *(_QWORD*)(a2 + 776);
      *(_QWORD*)(a2 + 832) = v44;
      *(_QWORD*)(a2 + 848) = v45;
      v48 = *(_QWORD*)(a2 + 768);
      v49 = *(_QWORD*)(a2 + 784);
      *(_QWORD*)(a2 + 856) = v46;
      v50 = *(_QWORD*)(a2 + 792);
      *(_QWORD*)(a2 + 904) = v47;
      v51 = *(_QWORD*)(a2 + 816);
      *(_QWORD*)(a2 + 912) = v49;
      *(_QWORD*)(a2 + 896) = v48;
      v52 = *(_QWORD*)(a2 + 800);
      v53 = *(_QWORD*)(a2 + 824);
      *(_QWORD*)(a2 + 920) = v50;
      *(_QWORD*)(a2 + 944) = v51;
      v54 = *(_QWORD*)(a2 + 808);
      *(_QWORD*)(a2 + 952) = v53;
      *(_QWORD*)(a2 + 928) = v52;
      *(_QWORD*)(a2 + 936) = v54;
      v55 = *(float32x4_t**)(a2 + 1352);
      if (*(_BYTE*)(LANES128(v55[10]).n128_u64[0] + 1875) == 1) {
        goto LABEL_28;
      }
    }
    v163 = v55[52];
    v164 = v55[53];
    v165 = v55[54];
    v166 = v55[55];
    v167 = *(float32x4_t*)(a2 + 864);
    v168 = *(float32x4_t*)(a2 + 880);
    v169 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v163, COERCE_FLOAT(*(_OWORD*)(a2 + 848))),
                       v164, *(float32x2_t*)(a2 + 848), 1),
        v165, *(float32x4_t*)(a2 + 848), 2);
    *(float32x4_t*)(a2 + 832) = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v163, COERCE_FLOAT(*(_OWORD*)(a2 + 832))),
                       v164, *(float32x2_t*)(a2 + 832), 1),
        v165, *(float32x4_t*)(a2 + 832), 2);
    *(float32x4_t*)(a2 + 848) = v169;
    *(float32x4_t*)(a2 + 864) = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v163, LANES128(v167).n128_f32[0]), v164,
                       COERCE_AS(float32x2_t, LANES128(v167).n128_u64[0]), 1),
        v165, v167, 2);
    *(float32x4_t*)(a2 + 880) = vaddq_f32(
        vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v163, LANES128(v168).n128_f32[0]), v164,
                           COERCE_AS(float32x2_t, LANES128(v168).n128_u64[0]),
                           1),
            v165, v168, 2),
        v166);
    v32 = *(float32x4_t*)(a2 + 896);
    v33 = *(float32x4_t*)(a2 + 912);
    v34 = *(float32x4_t*)(a2 + 928);
    v35 = *(float32x4_t*)(a2 + 944);
    v36 = v55[56];
    v37 = v55[57];
    v38 = v55[58];
    v39 = v55[59];
    goto LABEL_26;
  }
  if (*(_BYTE*)(v4 + 2) != 0) {
    PSEUDO_LOW_LANE64(v5, n64_u64, *(unsigned __int64*)(a2 + 1536));
    v6 = *(float*)(a2 + 1544);
    if (*(_QWORD*)(v4 + 664) != 0) {
      LANES128(v7).n128_u32[3] = 0;
      LANES128(v7).n128_f32[0] = *(float*)(a2 + 1548) * 0x1.1df46a0000000p-6f;
      LANES128(v7).n128_f32[1] = *(float*)(a2 + 1552) * 0x1.1df46a0000000p-6f;
      LANES128(v7).n128_f32[2] = *(float*)(a2 + 1556) * 0x1.1df46a0000000p-6f;
    }
    else {
      LANES128(v7).n128_u64[0] = *(_QWORD*)(a2 + 1548);
      LANES128(v7).n128_u64[1] = *(unsigned int*)(a2 + 1556);
    }
    LANES128(v21).n128_u64[0] = *(_QWORD*)(a2 + 1560);
    LANES128(v21).n128_u64[1] = *(unsigned int*)(a2 + 1568);
    v56 = vmlaq_f32(v7, vdupq_n_s32(0xC0C90FDB),
                    vrndnq_f32(vmulq_f32(v7, vdupq_n_s32(0x3E22F983u))));
    v57 = vcgtq_f32(v56, vdupq_n_s32(0x3FC90FDBu));
    v58 = vmvnq_s8(v57);
    v59 = vbslq_s8(v57, vsubq_f32(vdupq_n_s32(0x40490FDBu), v56), v56);
    v60 = vcgtq_f32(vdupq_n_s32(0xBFC90FDB), v59);
    v61 = vsubq_f32(vdupq_n_s32(0xC0490FDB), v59);
    v62 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190);
    v63 = vbslq_s8(v60, v61, v59);
    PSEUDO_LOW_LANE128(v61, n128_u32, *(_DWORD*)GameData_212c190);
    v64 = vbicq_s8(v58, v60);
    v65 = vmulq_f32(v63, v63);
    v66 = vmlsq_lane_f32(
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v62).n128_u64[0]), 0), v65,
        COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0]), 0);
    PSEUDO_LOW_LANE128(
        v61, n128_f32,
        -COERCE_FLOAT(HIDWORD(
            *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190))));
    v67 = vmlaq_f32(
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v61).n128_u64[0]), 0), v65,
        v66);
    v68 = vmlaq_f32(vdupq_laneq_s32(v62, 2), v65, v67);
    LANES128(v62).n128_u64[0] = 0x3F8000003F800000LL;
    LANES128(v62).n128_u64[1] = 0x3F8000003F800000LL;
    PSEUDO_LOW_LANE128(
        v67, n128_f32,
        -COERCE_FLOAT(DWORD3(
            *(_OWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190))));
    v69 = vmlaq_f32(
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v67).n128_u64[0]), 0), v65,
        v68);
    v70 = vmlaq_f32(v62, v65, v69);
    PSEUDO_LOW_LANE128(v69, n128_u32, *(_DWORD*)GameData_212c188);
    v71 = vmulq_f32(v63, v70);
    v72 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188);
    v73 = vmlsq_lane_f32(
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v72).n128_u64[0]), 0), v65,
        COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]), 0);
    PSEUDO_LOW_LANE128(
        v69, n128_f32,
        -COERCE_FLOAT(HIDWORD(
            *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188))));
    v74 = vmlaq_f32(
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v69).n128_u64[0]), 0), v65,
        v73);
    v75 = vmlaq_f32(vdupq_laneq_s32(v72, 2), v65, v74);
    PSEUDO_LOW_LANE128(v74, n128_f32, -LANES128(v72).n128_f32[3]);
    v76 = vmlaq_f32(
        v62, v65,
        vmlaq_f32(
            vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v74).n128_u64[0]), 0),
            v65, v75));
    v77 = vbslq_s8(v64, v76, vnegq_f32(v76));
    LANES128(v65).n128_u64[0] =
        LANES128(v77).n128_u32[1] |
        ((unsigned __int64)LANES128(v77).n128_u32[1] << 32);
    LANES128(v72).n128_u64[0] =
        LANES128(v77).n128_u32[2] |
        ((unsigned __int64)LANES128(v71).n128_u32[2] << 32);
    LANES128(v75).n128_u64[0] = LANES128(v72).n128_u64[0];
    LANES128(v65).n128_u64[1] = LANES128(v71).n128_u32[1];
    LANES128(v75).n128_u64[1] = 3212836864LL;
    v78 = vmulq_f32(v65, v75);
    LANES128(v65).n128_u64[0] =
        LANES128(v71).n128_u32[1] |
        ((unsigned __int64)LANES128(v71).n128_u32[1] << 32);
    LANES128(v65).n128_u64[1] = LANES128(v77).n128_u32[1];
    PSEUDO_LOW_LANE128(v76, n128_u64, __ROR8__(LANES128(v72).n128_u64[0], 32));
    LANES128(v72).n128_u64[1] = 1065353216;
    v79 = vmulq_f32(v65, v72);
    v80 = vmulq_f32(vmulq_n_f32(v76, LANES128(v77).n128_f32[0]),
                    COERCE_AS(float32x4_t, GameData_1a82940));
    v81 = vmulq_n_f32(v79, LANES128(v77).n128_f32[0]);
    v82 = vaddq_f32(vmulq_n_f32(v79, LANES128(v71).n128_f32[0]), v80);
    v24 = vmulq_n_f32(v78, LANES64(v5).n64_f32[0]);
    *(float32x4_t*)(a2 + 896) = v78;
    *(float32x4_t*)(a2 + 912) = v82;
    v83 = vaddq_f32(v81, vmulq_f32(vmulq_n_f32(v76, LANES128(v71).n128_f32[0]),
                                   COERCE_AS(float32x4_t, GameData_1a83510)));
    v23 = vmulq_lane_f32(v82, v5, 1);
    *(float32x4_t*)(a2 + 832) = v24;
    *(float32x4_t*)(a2 + 848) = v23;
    v22 = vmulq_n_f32(v83, v6);
    *(float32x4_t*)(a2 + 928) = v83;
    *(float32x4_t*)(a2 + 864) = v22;
  }
  else {
    v15 = *(_QWORD*)(a2 + 776);
    v16 = *(_QWORD*)(a2 + 800);
    v17 = *(_QWORD*)(a2 + 808);
    *(_QWORD*)(a2 + 864) = *(_QWORD*)(a2 + 736);
    v18 = *(_QWORD*)(a2 + 744);
    *(_QWORD*)(a2 + 904) = v15;
    v19 = *(_QWORD*)(a2 + 792);
    *(_QWORD*)(a2 + 936) = v17;
    *(_QWORD*)(a2 + 928) = v16;
    *(_QWORD*)(a2 + 872) = v18;
    v20 = *(_QWORD*)(a2 + 752);
    *(_QWORD*)(a2 + 920) = v19;
    *(_QWORD*)(a2 + 880) = v20;
    *(_QWORD*)(a2 + 888) = *(_QWORD*)(a2 + 760);
    v22 = *(float32x4_t*)(a2 + 864);
    v21 = *(float32x4_t*)(a2 + 880);
    *(_QWORD*)(a2 + 832) = *(_QWORD*)(a2 + 704);
    *(_QWORD*)(a2 + 840) = *(_QWORD*)(a2 + 712);
    *(_QWORD*)(a2 + 848) = *(_QWORD*)(a2 + 720);
    *(_QWORD*)(a2 + 856) = *(_QWORD*)(a2 + 728);
    v24 = *(float32x4_t*)(a2 + 832);
    v23 = *(float32x4_t*)(a2 + 848);
    *(_QWORD*)(a2 + 896) = *(_QWORD*)(a2 + 768);
    *(_QWORD*)(a2 + 912) = *(_QWORD*)(a2 + 784);
  }
  v84 = *(float32x4_t**)(a2 + 1352);
  v85 = vaddq_f32(v21, *(float32x4_t*)(a2 + 1472));
  *(float32x4_t*)(a2 + 880) = v85;
  *(float32x4_t*)(a2 + 944) = v85;
  if (*(_BYTE*)(LANES128(v84[10]).n128_u64[0] + 1875) != 1) {
    v86 = v84[52];
    v87 = v84[53];
    v88 = v84[54];
    v89 = v84[55];
    *(float32x4_t*)(a2 + 832) = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v86, LANES128(v24).n128_f32[0]), v87,
                       COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]), 1),
        v88, v24, 2);
    *(float32x4_t*)(a2 + 848) = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v86, LANES128(v23).n128_f32[0]), v87,
                       COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]), 1),
        v88, v23, 2);
    v90 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v86, LANES128(v22).n128_f32[0]), v87,
                       COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]), 1),
        v88, v22, 2);
    v91 = *(float32x4_t*)(a2 + 928);
    *(float32x4_t*)(a2 + 864) = v90;
    *(float32x4_t*)(a2 + 880) =
        vaddq_f32(vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v86, LANES128(v85).n128_f32[0]), v87,
                          COERCE_AS(float32x2_t, LANES128(v85).n128_u64[0]), 1),
                      v88, v85, 2),
                  v89);
    v92 = v84[56];
    v93 = v84[57];
    v94 = v84[58];
    v95 = v84[59];
    v96 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v92, COERCE_FLOAT(*(_OWORD*)(a2 + 912))),
                       v93, *(float32x2_t*)(a2 + 912), 1),
        v94, *(float32x4_t*)(a2 + 912), 2);
    *(float32x4_t*)(a2 + 896) = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v92, COERCE_FLOAT(*(_OWORD*)(a2 + 896))),
                       v93, *(float32x2_t*)(a2 + 896), 1),
        v94, *(float32x4_t*)(a2 + 896), 2);
    *(float32x4_t*)(a2 + 912) = v96;
    *(float32x4_t*)(a2 + 928) = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v92, LANES128(v91).n128_f32[0]), v93,
                       COERCE_AS(float32x2_t, LANES128(v91).n128_u64[0]), 1),
        v94, v91, 2);
    v97 =
        vaddq_f32(vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v92, LANES128(v85).n128_f32[0]), v93,
                          COERCE_AS(float32x2_t, LANES128(v85).n128_u64[0]), 1),
                      v94, v85, 2),
                  v95);
  LABEL_27:
    *(float32x4_t*)(a2 + 944) = v97;
  }
LABEL_28:
  v177[1] = v2;
  v177[2] = v3;
  v170 = *(_QWORD*)(a2 + 1008);
  v171 = *(_QWORD*)(a2 + 992);
  v172 = *(_QWORD*)(a2 + 1000);
  v177[0] = a2;
  if (v170 != 0) {
    v173 = *(__int64 (**)(_QWORD*))(v170 + 24),
    result = COERCE_AS(__typeof__(result),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if (v173 != nullptr) {
      result = v173(v177);
    }
  }
  if (v171 != 0) {
    v175 = *(__int64 (**)(_QWORD*))(v171 + 24),
    result = COERCE_AS(__typeof__(result),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if (v175 != nullptr) {
      result = v175(v177);
    }
  }
  if (v172 != 0) {
    v176 = *(__int64 (**)(_QWORD*))(v172 + 24),
    result = COERCE_AS(__typeof__(result),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if (v176 != nullptr) {
      return v176(v177);
    }
  }
  return result;
}

void game_5bb1a0(__int64 a1, int32x4_t* a2, double a3, double a4, double a5,
                 double a6, double a7, double a8, float32x4_t a9)
{
  unsigned __int64 v9;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  int32x4_t* v20;
  __int64 v21;
  __int64 v22;
  unsigned __int32 v23;
  int32x4_t v24;
  int32x4_t v25;
  int32x4_t v26;
  int32x4_t v27;
  float32x4_t v28;
  int32x4_t v29;
  __int64 v30;
  __int64 v31;
  float v32;
  float v33;
  float v34;
  float v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  int v40;
  float32x4_t v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  unsigned __int32 v45;
  __int64 v46;
  unsigned __int32 v47;
  __int64 v48;
  int v49;
  unsigned __int64 v50;
  float32x4_t v51;
  bool v52;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  float v62;
  __int64 v63;
  float32x4_t v64;
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
  float32x2_t v80;
  int8x16_t v81;
  int8x16_t v82;
  int8x16_t v83;
  int8x16_t v84;
  int8x16_t v85;
  float32x4_t v86;
  int8x16_t v87;
  float32x4_t v88;
  float32x4_t v89;
  __int128 v90;
  int8x16_t v91;
  float32x4_t v92;
  float32x4_t v93;
  float32x4_t v94;
  float32x4_t v95;
  float32x4_t v96;
  float v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  float32x2_t v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  float32x4_t v104;
  float32x2_t v105;
  unsigned __int64 v106;
  float32x4_t v107;
  unsigned __int32* v108;
  unsigned int* v109;
  unsigned __int32* v110;
  float32x4_t v111;
  float32x4_t v112;
  float32x4_t v113;
  float32x4_t v114;
  float32x4_t v115;
  float32x4_t v116;
  __int64 v117;
  __int128 v118;
  float v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  float32x4_t v128;
  float32x4_t v129;
  float32x4_t v130;
  float32x4_t v131;
  float32x4_t v132;
  float32x4_t v133;
  float32x4_t v134;
  float32x4_t v135;
  float32x4_t v136;
  float32x4_t v137;
  float32x4_t v138;
  float32x4_t v139;
  float32x4_t v140;
  float32x4_t v141;
  float32x4_t v142;
  unsigned __int64 v143;
  __int64 v144;
  __int64 v145;
  float32x4_t v146;
  float32x4_t* v147;
  unsigned __int64 v148;
  float32x4_t v149;
  float32x4_t v150;
  float32x4_t v151;
  float32x4_t v152;
  unsigned int* v153;
  unsigned int* v154;
  unsigned int* v155;
  __int64 v156;
  unsigned __int64 v157;
  _QWORD* v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  float32x4_t v162;
  int32x4_t v163;
  int32x4_t v164;
  int32x4_t v165;
  int32x4_t v166;
  int32x4_t v167;
  float32x4_t v168;
  int32x4_t v169;
  int32x4_t v170;
  float32x4_t v171;
  int32x4_t v172;
  float32x4_t v173;
  float v174;
  int32x4_t v175;
  float32x4_t v176;
  int32x4_t v177;
  float v178;
  void (*v180)(float32x4_t*);
  void (*v181)(float32x4_t*);
  void (*v182)(float32x4_t*);
  void (*v183)(float32x4_t*);
  void (*v184)(float32x4_t*);
  void (*v185)(float32x4_t*);
  int32x4_t* v186;
  _BOOL4 v187;
  _BOOL4 v188;
  unsigned __int64 v189;
  unsigned __int64 v190;
  unsigned __int32 v191;
  unsigned __int64 v192;
  float32x4_t v193;
  float32x4_t v194;
  float32x4_t v195;
  int v196;
  int v197;
  struct {
    float32x4_t v198;
    int32x4_t* v199;
    float v200;
    float v201;
    __int64 v202;
  } v198_;

  v9 = LANES128(a2[63]).n128_u64[0];
  v11 = a1;
  if (v9 != 0) {
    v12 = *(_QWORD*)(v9 + 64);
    v13 = *(_QWORD*)(v9 + 72);
    v14 = LANES128(a2[62]).n128_u64[0];
    if (v14 != 0) {
      goto LABEL_3;
    }
  LABEL_6:
    v16 = 0;
    v15 = 0;
    v17 = LANES128(a2[62]).n128_u64[1];
    if (v17 != 0) {
      goto LABEL_4;
    }
  LABEL_7:
    v19 = 0;
    v18 = 0;
    goto LABEL_8;
  }
  v13 = 0;
  v12 = 0;
  v14 = LANES128(a2[62]).n128_u64[0];
  if (v14 == 0) {
    goto LABEL_6;
  }
LABEL_3:
  v15 = *(_QWORD*)(v14 + 64);
  v16 = *(_QWORD*)(v14 + 72);
  v17 = LANES128(a2[62]).n128_u64[1];
  if (v17 == 0) {
    goto LABEL_7;
  }
LABEL_4:
  v18 = *(_QWORD*)(v17 + 64);
  v19 = *(_QWORD*)(v17 + 72);
LABEL_8:
  v188 = (v12 | v15 | v18) != 0;
  v187 = (v13 | v16 | v19) != 0;
  if (LANES128(a2[2]).n128_i32[2] < 1) {
    goto LABEL_89;
  }
  v180 = (void (*)(float32x4_t*))v19;
  v181 = (void (*)(float32x4_t*))v18;
  v182 = (void (*)(float32x4_t*))v16;
  v183 = (void (*)(float32x4_t*))v15;
  v20 = a2 + 36;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v184 = (void (*)(float32x4_t*))v13;
  v185 = (void (*)(float32x4_t*))v12;
  v24 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190);
  v25 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188);
  v186 = a2 + 36;
  v28 = vdupq_laneq_s32(v24, 2);
  v26 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v25).n128_u64[0]), 0);
  v176 = v28;
  v177 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v24).n128_u64[0]), 0);
  v178 = -*(float*)GameData_212c190;
  *(float*)&a3 = -LANES128(v24).n128_f32[1];
  LANES128(v24).n128_f32[0] = -LANES128(v24).n128_f32[3];
  v174 = -*(float*)GameData_212c188;
  v175 = vdupq_n_s32(0x3E22F983u);
  v172 = vdupq_laneq_s32(v25, 2);
  v173 = v26;
  v27 = vdupq_lane_s32(*(int32x2_t*)&a3, 0);
  PSEUDO_LOW_LANE128(v28, n128_f32, -LANES128(v25).n128_f32[1]);
  v170 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v24).n128_u64[0]), 0);
  v171 = v27;
  v29 = vdupq_n_s32(0xC0C90FDB);
  v168 = v29;
  v169 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v28).n128_u64[0]), 0);
  LANES128(v29).n128_f32[0] = -LANES128(v25).n128_f32[3];
  v166 = vdupq_n_s32(0x3FC90FDBu);
  v167 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v29).n128_u64[0]), 0);
  v164 = vdupq_n_s32(0xBFC90FDB);
  v165 = vdupq_n_s32(0x40490FDBu);
  LANES128(v29).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v29).n128_u64[1] = 0x3F8000003F800000LL;
  v162 = v29;
  v163 = vdupq_n_s32(0xC0490FDB);
  do {
    v31 = LANES128(a2[11]).n128_u64[0] + 32 * v22;
    if (*(_DWORD*)v31 == 0) {
      goto LABEL_10;
    }
    v32 = LANES128(a2[4]).n128_f32[1];
    v33 = *(float*)(v31 + 8);
    v34 = *(float*)(v31 + 12);
    v35 = v32 - v33;
    v192 = LANES128(a2[11]).n128_u64[1];
    if ((float)(v32 - v33) >= v34) {
      if (v188) {
        v198_.v199 = a2;
        v198_.v200 = v32 - v33;
        v198_.v201 = v34;
        v198_.v202 = (unsigned int)v22;
        v198_.v198 = *(float32x4_t*)(v31 + 16);
        if (v185 != nullptr) {
          v185(&v198_.v198);
        }
        if (v183 != nullptr) {
          v183(&v198_.v198);
        }
        if (v181 != nullptr) {
          v181(&v198_.v198);
        }
        *(_QWORD*)(LANES128(a2[11]).n128_u64[0] + 32 * v22 + 24) = 0;
        *(_QWORD*)(LANES128(a2[11]).n128_u64[0] + 32 * v22 + 16) = 0;
      }
      *(_DWORD*)v31 = 0;
      if (LANES128(*(v20)).n128_u64[0] == 0) {
        goto LABEL_10;
      }
    }
    else {
      v36 = LANES128(a2[29]).n128_u64[1];
      v191 = v23;
      v37 = LANES128(a2[29]).n128_u64[0] + 16 * v22;
      v38 = *(unsigned int*)(v37 + 8);
      v197 = *(_DWORD*)(v31 + 8);
      v39 = *(_QWORD*)v37;
      v40 = *(_DWORD*)(v31 + 12);
      v195 = (__typeof__(v195)){0};
      v189 = v39;
      v196 = v40;
      LANES128(v41).n128_u64[0] = *(_QWORD*)v37;
      v42 = *(unsigned int*)(v37 + 8);
      v194 = (__typeof__(v194)){0};
      v43 = v42;
      v44 = v36 + 16 * v22;
      LANES128(v41).n128_u64[1] = v43;
      v195 = v41;
      LANES128(v41).n128_u64[0] = *(_QWORD*)v44;
      LANES128(v41).n128_u64[1] = *(unsigned int*)(v44 + 8);
      v194 = v41;
      game_5c1c50_alt1(v35, LANES128(v41).n128_f64[1],
                       LANES128(v25).n128_f64[0], LANES128(v28).n128_f64[0],
                       v27, LANES128(v26).n128_f64[0], a9, v11, &v195, &v194,
                       (__int64)&v197, (__int64)&v196, a2, v22, &v195, &v194);
      v45 = LANES128(v195).n128_u32[2];
      v46 = LANES128(a2[29]).n128_u64[0] + 16 * v22;
      *(_QWORD*)v46 = LANES128(v195).n128_u64[0];
      *(_DWORD*)(v46 + 8) = v45;
      v47 = LANES128(v194).n128_u32[2];
      v48 = LANES128(a2[29]).n128_u64[1] + 16 * v22;
      *(_QWORD*)v48 = LANES128(v194).n128_u64[0];
      *(_DWORD*)(v48 + 8) = v47;
      *(_DWORD*)(v31 + 8) = v197;
      v49 = v196;
      *(_DWORD*)(v31 + 12) = v196;
      if (v187) {
        v50 = LANES128(a2[11]).n128_u64[0];
        v198_.v199 = a2;
        v198_.v200 = v35;
        v198_.v201 = v34;
        v198_.v202 = (unsigned int)v22;
        v198_.v198 = *(float32x4_t*)(v50 + 32 * v22 + 16);
        if (v184 != nullptr) {
          v184(&v198_.v198);
        }
        if (v182 != nullptr) {
          v182(&v198_.v198);
        }
        if (v180 != nullptr) {
          v180(&v198_.v198);
        }
        *(_QWORD*)(LANES128(a2[11]).n128_u64[0] + 32 * v22 + 16) =
            LANES128(v198_.v198).n128_u64[0];
        v49 = *(_DWORD*)(v31 + 12);
      }
      LANES128(v25).n128_u64[0] = v189;
      *(_DWORD*)(LANES128(a2[29]).n128_u64[0] + 16 * v22 + 12) = v49;
      LANES128(v25).n128_u64[1] = v38;
      *(_DWORD*)(LANES128(a2[29]).n128_u64[1] + 16 * v22 + 12) =
          *(_DWORD*)(v31 + 8);
      PSEUDO_LOW_LANE128(v26, n128_u32, 953267991);
      v51 = vsubq_f32(v195, v25);
      LANES128(v25).n128_f32[0] = fabsf(LANES128(v51).n128_f32[0]);
      PSEUDO_LOW_LANE128(v28, n128_f32, fabsf(LANES128(v51).n128_f32[1]));
      v52 = LANES128(v25).n128_f32[0] <= 0x1.a36e2e0000000p-14f &&
            LANES128(v28).n128_f32[0] <= 0x1.a36e2e0000000p-14f;
      LANES128(v27).n128_f32[0] = fabsf(LANES128(v51).n128_f32[2]);
      if (!v52 || LANES128(v27).n128_f32[0] > 0x1.a36e2e0000000p-14f) {
        v54 = LANES128(a2[30]).n128_u64[0] + 16 * v22;
        *(_QWORD*)v54 = LANES128(v51).n128_u64[0];
        *(_DWORD*)(v54 + 8) = LANES128(v51).n128_u32[2];
      }
      if (*(int*)(LANES128(a2[35]).n128_u64[1] + 136) >= 1) {
        v55 = v192;
        v56 = 0;
        v57 = v192 + 344 * v22;
        v58 = v192 + 328;
        v59 = v192;
        do {
          v60 = *(_QWORD*)(v59 + v21);
          if (v60 == 0) {
            break;
          }
          if (*(_QWORD*)(v60 + 152) != 0) {
            v61 = *(_QWORD*)(v60 + 160);
            if (*(_BYTE*)(v61 + 2020) == 0 && *(_DWORD*)v31 != 0) {
              v62 = *(float*)(v57 + 128);
              if (*(float*)(v60 + 68) == 0x0.0p+0f) {
                v63 = *(_QWORD*)(v60 + 568);
                if (*(_BYTE*)(v63 + 2) == 1) {
                  if (*(_QWORD*)(v63 + 664) != 0) {
                    LANES128(v64).n128_u32[3] = 0;
                    LANES128(v64).n128_f32[0] =
                        *(float*)(v60 + 1548) * 0x1.1df46a0000000p-6f;
                    LANES128(v64).n128_f32[1] =
                        *(float*)(v60 + 1552) * 0x1.1df46a0000000p-6f;
                    LANES128(v64).n128_f32[2] =
                        *(float*)(v60 + 1556) * 0x1.1df46a0000000p-6f;
                  }
                  else {
                    LANES128(v64).n128_u64[0] = *(_QWORD*)(v60 + 1548);
                    LANES128(v64).n128_u64[1] = *(unsigned int*)(v60 + 1556);
                  }
                  PSEUDO_LOW_LANE64(v80, n64_u64,
                                    *(unsigned __int64*)(v60 + 1536));
                  v81 = vmlaq_f32(v64, v168, vrndnq_f32(vmulq_f32(v64, v175)));
                  v82 = vcgtq_f32(v81, v166);
                  v83 = vmvnq_s8(v82);
                  v84 = vbslq_s8(v82, vsubq_f32(v165, v81), v81);
                  v85 = vcgtq_f32(v164, v84);
                  v86 = vbslq_s8(v85, vsubq_f32(v163, v84), v84);
                  v87 = vbicq_s8(v83, v85);
                  v88 = vmulq_f32(v86, v86);
                  v89 = vmulq_f32(
                      v86,
                      vmlaq_f32(
                          v162, v88,
                          vmlaq_f32(v170, v88,
                                    vmlaq_f32(v176, v88,
                                              vmlaq_f32(v171, v88,
                                                        vmlaq_n_f32(v177, v88,
                                                                    v178))))));
                  *(_QWORD*)&v90 = *(_QWORD*)(v60 + 1560);
                  a9 = vmlaq_f32(
                      v162, v88,
                      vmlaq_f32(
                          v167, v88,
                          vmlaq_f32(v172, v88,
                                    vmlaq_f32(v169, v88,
                                              vmlaq_n_f32(v173, v88, v174)))));
                  *((_QWORD*)&v90 + 1) = *(unsigned int*)(v60 + 1568);
                  v91 = vbslq_s8(v87, a9, vnegq_f32(a9));
                  LANES128(v88).n128_u64[0] =
                      LANES128(v91).n128_u32[1] |
                      ((unsigned __int64)LANES128(v91).n128_u32[1] << 32);
                  LANES128(v92).n128_u32[0] = LANES128(v91).n128_u32[2];
                  LANES128(v92).n128_u32[1] = LANES128(v89).n128_u32[2];
                  LANES128(v93).n128_u64[0] = LANES128(v92).n128_u64[0];
                  LANES128(v88).n128_u64[1] = LANES128(v89).n128_u32[1];
                  LANES128(v93).n128_u64[1] = 3212836864LL;
                  v25 = vmulq_f32(v88, v93);
                  LANES128(v88).n128_u64[0] =
                      LANES128(v89).n128_u32[1] |
                      ((unsigned __int64)LANES128(v89).n128_u32[1] << 32);
                  LANES128(v88).n128_u64[1] = LANES128(v91).n128_u32[1];
                  PSEUDO_LOW_LANE128(a9, n128_u64,
                                     __ROR8__(LANES128(v92).n128_u64[0], 32));
                  LANES128(v92).n128_u64[1] = 1065353216;
                  v26 = vmulq_f32(v88, v92);
                  v94 = vmulq_f32(vmulq_n_f32(a9, LANES128(v91).n128_f32[0]),
                                  COERCE_AS(float32x4_t, GameData_1a82940));
                  v95 = vmulq_n_f32(v26, LANES128(v91).n128_f32[0]);
                  v96 = vaddq_f32(vmulq_n_f32(v26, LANES128(v89).n128_f32[0]),
                                  v94);
                  PSEUDO_LOW_LANE128(v26, n128_u64,
                                     *(unsigned int*)(v60 + 1544));
                  *(int32x4_t*)(v60 + 896) = v25;
                  *(float32x4_t*)(v60 + 912) = v96;
                  v28 = vaddq_f32(
                      v95, vmulq_f32(vmulq_n_f32(a9, LANES128(v89).n128_f32[0]),
                                     COERCE_AS(float32x4_t, GameData_1a83510)));
                  v27 = vmulq_n_f32(v25, LANES64(v80).n64_f32[0]);
                  *(int32x4_t*)(v60 + 832) = v27;
                  *(float32x4_t*)(v60 + 848) = vmulq_lane_f32(v96, v80, 1);
                  *(float32x4_t*)(v60 + 864) =
                      vmulq_n_f32(v28, LANES128(v26).n128_f32[0]);
                  *(_OWORD*)(v60 + 880) = v90;
                  *(float32x4_t*)(v60 + 928) = v28;
                  *(_OWORD*)(v60 + 944) = v90;
                }
                else {
                  v65 = *(_QWORD*)(v60 + 736);
                  v66 = *(_QWORD*)(v60 + 752);
                  v67 = *(_QWORD*)(v60 + 760);
                  *(_QWORD*)(v60 + 872) = *(_QWORD*)(v60 + 744);
                  v68 = *(_QWORD*)(v60 + 712);
                  *(_QWORD*)(v60 + 864) = v65;
                  v69 = *(_QWORD*)(v60 + 704);
                  *(_QWORD*)(v60 + 880) = v66;
                  v70 = *(_QWORD*)(v60 + 720);
                  *(_QWORD*)(v60 + 888) = v67;
                  v71 = *(_QWORD*)(v60 + 728);
                  *(_QWORD*)(v60 + 840) = v68;
                  v72 = *(_QWORD*)(v60 + 776);
                  *(_QWORD*)(v60 + 832) = v69;
                  *(_QWORD*)(v60 + 848) = v70;
                  v73 = *(_QWORD*)(v60 + 768);
                  v74 = *(_QWORD*)(v60 + 784);
                  *(_QWORD*)(v60 + 856) = v71;
                  v75 = *(_QWORD*)(v60 + 792);
                  *(_QWORD*)(v60 + 904) = v72;
                  v76 = *(_QWORD*)(v60 + 816);
                  *(_QWORD*)(v60 + 912) = v74;
                  *(_QWORD*)(v60 + 896) = v73;
                  v77 = *(_QWORD*)(v60 + 800);
                  v78 = *(_QWORD*)(v60 + 824);
                  *(_QWORD*)(v60 + 920) = v75;
                  *(_QWORD*)(v60 + 944) = v76;
                  v79 = *(_QWORD*)(v60 + 808);
                  *(_QWORD*)(v60 + 952) = v78;
                  *(_QWORD*)(v60 + 928) = v77;
                  *(_QWORD*)(v60 + 936) = v79;
                }
              }
              v97 = *(float*)(v31 + 12);
              PSEUDO_LOW_LANE128(v28, n128_u32, 1120403456);
              LANES128(v25).n128_f32[0] =
                  v97 * (float)((float)*(unsigned int*)(v61 + 2040) /
                                0x1.9000000000000p+6f);
              if (LANES128(v25).n128_f32[0] <= v62) {
                if (*(_BYTE*)(v61 + 2032) != 0) {
                  v97 = LANES128(v25).n128_f32[0] +
                        (float)*(unsigned int*)(v61 + 2044);
                }
                else if (*(_BYTE*)v60 == 0) {
                  goto LABEL_60;
                }
                if (v97 > v62 || *(_BYTE*)(v58 + v21) == 0) {
                LABEL_60:
                  v98 = LANES128(a2[29]).n128_u64[0];
                  v99 = LANES128(a2[29]).n128_u64[1];
                  v198_.v198 = (__typeof__(v198_.v198)){0};
                  v100 = v98 + 16 * v22;
                  v193 = (__typeof__(v193)){0};
                  PSEUDO_LOW_LANE64(v101, n64_u64, *(unsigned __int64*)v100);
                  v102 = *(unsigned int*)(v100 + 8);
                  v103 = v99 + 16 * v22;
                  LANES128(v104).n128_u64[0] = LANES64(v101).n64_u64[0];
                  LANES128(v104).n128_u64[1] = v102;
                  v198_.v198 = v104;
                  PSEUDO_LOW_LANE64(v105, n64_u64, *(unsigned __int64*)v103);
                  v106 = *(unsigned int*)(v103 + 8);
                  LANES128(v107).n128_u64[0] = *(_QWORD*)v103;
                  LODWORD(v103) =
                      *(unsigned __int8*)(LANES128(a2[10]).n128_u64[0] + 1875);
                  LANES128(v107).n128_u64[1] = v106;
                  v193 = v107;
                  if ((_DWORD)v103 == 1) {
                    v108 = (unsigned __int32*)(LANES128(a2[33]).n128_u64[0] +
                                               16 * v22);
                    v109 = (unsigned int*)(LANES128(a2[34]).n128_u64[0] +
                                           16 * v22);
                    v110 = (unsigned __int32*)(LANES128(a2[33]).n128_u64[1] +
                                               16 * v22);
                    LANES128(v111).n128_u32[0] = *v108;
                    LANES128(v111).n128_u32[1] = *v110;
                    LANES128(v111).n128_u64[1] = *v109;
                    LANES128(v112).n128_u32[0] = v108[1];
                    LANES128(v112).n128_u32[1] = v110[1];
                    LANES128(v112).n128_u64[1] = v109[1];
                    LANES128(v113).n128_u32[0] = v108[2];
                    LANES128(v113).n128_u32[1] = v110[2];
                    LANES128(v113).n128_u64[1] = v109[2];
                    LANES128(v114).n128_u32[0] = v108[3];
                    LANES128(v114).n128_u32[1] = v110[3];
                    LANES128(v114).n128_u64[1] = v109[3];
                    v198_.v198 = vaddq_f32(
                        vmlaq_n_f32(
                            vmlaq_lane_f32(
                                vmulq_n_f32(v111, LANES64(v101).n64_f32[0]),
                                v112, v101, 1),
                            v113, *(float*)&v102),
                        v114);
                    LANES128(v115).n128_u32[0] = *v108;
                    LANES128(v115).n128_u32[1] = *v110;
                    LANES128(v115).n128_u64[1] = *v109;
                    LANES128(v116).n128_u32[0] = v108[1];
                    LANES128(v116).n128_u32[1] = v110[1];
                    LANES128(v116).n128_u64[1] = v109[1];
                    LANES128(v111).n128_u32[0] = v108[2];
                    LANES128(v111).n128_u32[1] = v110[2];
                    LANES128(v111).n128_u64[1] = v109[2];
                    v193 = vaddq_f32(
                        vmlaq_n_f32(
                            vmlaq_lane_f32(
                                vmulq_n_f32(v115, LANES64(v105).n64_f32[0]),
                                v116, v105, 1),
                            v111, *(float*)&v106),
                        COERCE_AS(float32x4_t, 0));
                  }
                  *(_DWORD*)(v60 + 1528) = v22;
                  *(_QWORD*)(v60 + 1512) = &v198_.v198;
                  *(_QWORD*)(v60 + 1520) = &v193;
                  if (*(_BYTE*)(v61 + 2034) != 0 && v62 != 0x0.0p+0f) {
                    v117 = LANES128(a2[30]).n128_u64[0] + 16 * v22;
                    *(_QWORD*)&v118 = *(_QWORD*)v117;
                    *((_QWORD*)&v118 + 1) = *(unsigned int*)(v117 + 8);
                    *(_OWORD*)(v60 + 976) = v118;
                  }
                  v119 = LANES128(a2[4]).n128_f32[3];
                  v190 = v57;
                  if (*(_BYTE*)(*(_QWORD*)(v60 + 160) + 1875LL) == 1 &&
                      *(_BYTE*)(LANES128(a2[10]).n128_u64[0] + 1875) != 1) {
                    v120 = *(_QWORD*)(v60 + 776);
                    v121 = *(_QWORD*)(v60 + 784);
                    v122 = *(_QWORD*)(v60 + 792);
                    *(_QWORD*)(v60 + 864) = *(_QWORD*)(v60 + 736);
                    v123 = *(_QWORD*)(v60 + 744);
                    *(_QWORD*)(v60 + 920) = v122;
                    *(_QWORD*)(v60 + 912) = v121;
                    *(_QWORD*)(v60 + 904) = v120;
                    v124 = *(_QWORD*)(v60 + 808);
                    v125 = *(_QWORD*)(v60 + 816);
                    v126 = *(_QWORD*)(v60 + 824);
                    *(_QWORD*)(v60 + 872) = v123;
                    v127 = *(_QWORD*)(v60 + 752);
                    *(_QWORD*)(v60 + 952) = v126;
                    *(_QWORD*)(v60 + 944) = v125;
                    *(_QWORD*)(v60 + 936) = v124;
                    *(_QWORD*)(v60 + 880) = v127;
                    *(_QWORD*)(v60 + 888) = *(_QWORD*)(v60 + 760);
                    v128 = *(float32x4_t*)(v60 + 864);
                    v129 = *(float32x4_t*)(v60 + 880);
                    *(_QWORD*)(v60 + 832) = *(_QWORD*)(v60 + 704);
                    *(_QWORD*)(v60 + 840) = *(_QWORD*)(v60 + 712);
                    *(_QWORD*)(v60 + 848) = *(_QWORD*)(v60 + 720);
                    *(_QWORD*)(v60 + 856) = *(_QWORD*)(v60 + 728);
                    v130 = *(float32x4_t*)(v60 + 832);
                    v131 = *(float32x4_t*)(v60 + 848);
                    *(_QWORD*)(v60 + 896) = *(_QWORD*)(v60 + 768);
                    *(_QWORD*)(v60 + 928) = *(_QWORD*)(v60 + 800);
                    v132 = a2[52];
                    v133 = a2[53];
                    v134 = a2[54];
                    v135 = a2[55];
                    *(float32x4_t*)(v60 + 832) = vmlaq_laneq_f32(
                        vmlaq_lane_f32(
                            vmulq_n_f32(v132, LANES128(v130).n128_f32[0]), v133,
                            COERCE_AS(float32x2_t, LANES128(v130).n128_u64[0]),
                            1),
                        v134, v130, 2);
                    *(float32x4_t*)(v60 + 848) = vmlaq_laneq_f32(
                        vmlaq_lane_f32(
                            vmulq_n_f32(v132, LANES128(v131).n128_f32[0]), v133,
                            COERCE_AS(float32x2_t, LANES128(v131).n128_u64[0]),
                            1),
                        v134, v131, 2);
                    *(float32x4_t*)(v60 + 864) = vmlaq_laneq_f32(
                        vmlaq_lane_f32(
                            vmulq_n_f32(v132, LANES128(v128).n128_f32[0]), v133,
                            COERCE_AS(float32x2_t, LANES128(v128).n128_u64[0]),
                            1),
                        v134, v128, 2);
                    *(float32x4_t*)(v60 + 880) = vaddq_f32(
                        vmlaq_laneq_f32(
                            vmlaq_lane_f32(
                                vmulq_n_f32(v132, LANES128(v129).n128_f32[0]),
                                v133,
                                COERCE_AS(float32x2_t,
                                          LANES128(v129).n128_u64[0]),
                                1),
                            v134, v129, 2),
                        v135);
                    v136 = *(float32x4_t*)(v60 + 928);
                    v137 = *(float32x4_t*)(v60 + 944);
                    v138 = a2[56];
                    v139 = a2[57];
                    v140 = a2[58];
                    v141 = a2[59];
                    v142 = vmlaq_laneq_f32(
                        vmlaq_lane_f32(
                            vmulq_n_f32(v138,
                                        COERCE_FLOAT(*(_OWORD*)(v60 + 912))),
                            v139, *(float32x2_t*)(v60 + 912), 1),
                        v140, *(float32x4_t*)(v60 + 912), 2);
                    *(float32x4_t*)(v60 + 896) = vmlaq_laneq_f32(
                        vmlaq_lane_f32(
                            vmulq_n_f32(v138,
                                        COERCE_FLOAT(*(_OWORD*)(v60 + 896))),
                            v139, *(float32x2_t*)(v60 + 896), 1),
                        v140, *(float32x4_t*)(v60 + 896), 2);
                    *(float32x4_t*)(v60 + 912) = v142;
                    *(float32x4_t*)(v60 + 928) = vmlaq_laneq_f32(
                        vmlaq_lane_f32(
                            vmulq_n_f32(v138, LANES128(v136).n128_f32[0]), v139,
                            COERCE_AS(float32x2_t, LANES128(v136).n128_u64[0]),
                            1),
                        v140, v136, 2);
                    *(float32x4_t*)(v60 + 944) = vaddq_f32(
                        vmlaq_laneq_f32(
                            vmlaq_lane_f32(
                                vmulq_n_f32(v138, LANES128(v137).n128_f32[0]),
                                v139,
                                COERCE_AS(float32x2_t,
                                          LANES128(v137).n128_u64[0]),
                                1),
                            v140, v137, 2),
                        v141);
                  }
                  game_5b99a0_alt1(
                      *(_QWORD*)(v60 + 152), (float*)(v55 + v21 + 136),
                      (float*)(v55 + v21 + 200), (float*)(v55 + v21 + 264),
                      v58 + v21, (float32x4_t*)v60, 0, v119);
                  *(_QWORD*)(v60 + 1512) = 0;
                  *(_QWORD*)(v60 + 1520) = 0;
                  v11 = a1;
                  v57 = v190;
                  *(_DWORD*)(v60 + 1528) = -1;
                }
              }
            }
          }
          v59 += 8LL;
          ++v56;
          v55 += 4LL;
          ++v58;
        } while (v56 < *(int*)(LANES128(a2[35]).n128_u64[1] + 136));
      }
      v20 = v186;
      v23 = v191 + 1;
      if (LANES128(*(v186)).n128_u64[0] == 0) {
        goto LABEL_10;
      }
    }
    if (*(_DWORD*)v31 != 0) {
      v143 = LANES128(a2[35]).n128_u64[1];
      if (*(int*)(v143 + 136) >= 1) {
        v144 = 0;
        while (2) {
          v147 = *(float32x4_t**)(v192 + v21 + 8 * v144);
          if (v147 == nullptr ||
              *(_BYTE*)(*(_QWORD*)(LANES128(*(v20)).n128_u64[v144] + 16) +
                        2020LL) == 0 ||
              LANES128(v147[9]).n128_u64[1] == 0 ||
              LANES128(v147[85]).n128_u32[0] != LANES128(a2[1]).n128_u32[1]) {
            goto LABEL_75;
          }
          LANES128(v147[86]).n128_f32[1] =
              LANES128(a2[4]).n128_f32[1] - *(float*)(v31 + 8);
          LANES128(v147[85]).n128_u32[3] = *(_DWORD*)(v31 + 12);
          if (*(_BYTE*)(LANES128(a2[10]).n128_u64[0] + 1875) != 0) {
            v148 = LANES128(a2[33]).n128_u64[0];
            v149 = (__typeof__(v149)){0};
            if (v148 != 0) {
              v150 = (__typeof__(v150)){0};
              v151 = (__typeof__(v151)){0};
              v152 = (__typeof__(v152)){0};
              if (v22 <= LANES128(a2[2]).n128_i32[2]) {
                v153 = (unsigned int*)(v148 + 16 * v22);
                v154 = (unsigned int*)(LANES128(a2[33]).n128_u64[1] + 16 * v22);
                v155 = (unsigned int*)(LANES128(a2[34]).n128_u64[0] + 16 * v22);
                LANES128(v152).n128_u64[0] =
                    *v153 | ((unsigned __int64)*v154 << 32);
                LANES128(v152).n128_u64[1] = *v155;
                LANES128(v151).n128_u64[0] =
                    v153[1] | ((unsigned __int64)v154[1] << 32);
                LANES128(v151).n128_u64[1] = v155[1];
                LANES128(v150).n128_u64[0] =
                    v153[2] | ((unsigned __int64)v154[2] << 32);
                LANES128(v150).n128_u64[1] = v155[2];
                LANES128(v149).n128_u64[0] =
                    v153[3] | ((unsigned __int64)v154[3] << 32);
                LANES128(v149).n128_u64[1] = v155[3];
              }
            }
            else {
              v150 = (__typeof__(v150)){0};
              v151 = (__typeof__(v151)){0};
              v152 = (__typeof__(v152)){0};
            }
            v156 = LANES128(a2[29]).n128_u64[0] + 16 * v22;
            LANES128(v27).n128_u64[0] = *(_QWORD*)v156;
            PSEUDO_LOW_LANE128(v26, n128_u64, *(unsigned int*)(v156 + 8));
            if (*(_BYTE*)(LANES128(a2[10]).n128_u64[0] + 1875) == 1) {
              v146 = vaddq_f32(
                  v149,
                  vmlaq_n_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v152, LANES128(v27).n128_f32[0]), v151,
                          COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]), 1),
                      v150, LANES128(v26).n128_f32[0]));
            LABEL_73:
              v147[92] = v146;
            }
            else {
              LANES128(v27).n128_u64[1] = *(unsigned int*)(v156 + 8);
              v147[92] = v27;
            }
            v25 = a2[57];
            v28 = a2[58];
            v147[93] = vmlaq_n_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(
                        a2[56],
                        COERCE_FLOAT(*(_QWORD*)(LANES128(a2[29]).n128_u64[1] +
                                                16 * v22))),
                    v25,
                    *(float32x2_t*)(LANES128(a2[29]).n128_u64[1] + 16 * v22),
                    1),
                v28, *(float*)(LANES128(a2[29]).n128_u64[1] + 16 * v22 + 8));
            v143 = LANES128(a2[35]).n128_u64[1];
          LABEL_75:
            if (++v144 >= *(int*)(v143 + 136)) {
              goto LABEL_10;
            }
            continue;
          }
          break;
        }
        v145 = LANES128(a2[29]).n128_u64[0] + 16 * v22;
        LANES128(v146).n128_u64[0] = *(_QWORD*)v145;
        LANES128(v146).n128_u64[1] = *(unsigned int*)(v145 + 8);
        goto LABEL_73;
      }
    }
  LABEL_10:
    v30 = LANES128(a2[2]).n128_i32[2];
    ++v22;
    v21 += 344;
  } while (v22 < v30);
  if (v23 == 0) {
  LABEL_89:
    v23 = 0;
    LODWORD(v30) = 0;
    LANES128(a2[2]).n128_u32[2] = 0;
    LANES128(a2[35]).n128_u32[1] = 0;
  }
  v157 = LANES128(a2[10]).n128_u64[0];
  LANES128(a2[2]).n128_u32[3] = v23;
  if (*(_BYTE*)(v157 + 1874) == 0) {
    v158 = (_QWORD*)LANES128(a2[12]).n128_u64[0];
    v159 = 16LL * (int)v30;
    memcpy(*v158, LANES128(a2[29]).n128_u64[0], v159);
    memcpy(v158[1], LANES128(a2[29]).n128_u64[1], v159);
    memcpy(v158[2], LANES128(a2[30]).n128_u64[0], v159);
    memcpy(v158[4], LANES128(a2[31]).n128_u64[0], v159);
    memcpy(v158[3], LANES128(a2[30]).n128_u64[1], v159);
    memcpy(v158[5], LANES128(a2[31]).n128_u64[1], v159);
    v160 = v158[6];
    if (v160 != 0) {
      memcpy(v160, LANES128(a2[32]).n128_u64[0], v159);
      memcpy(v158[7], LANES128(a2[32]).n128_u64[1], v159);
    }
    v161 = v158[8];
    if (v161 != 0) {
      memcpy(v161, LANES128(a2[33]).n128_u64[0], v159);
      memcpy(v158[9], LANES128(a2[33]).n128_u64[1], v159);
      memcpy(v158[10], LANES128(a2[34]).n128_u64[0], v159);
    }
  }
}

void game_5bc1d0(__int64 a1, __int64 a2, int a3, double a4, double a5,
                 long double a6)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v12;
  int v13;
  bool v14;
  __int64 v15;
  _QWORD* v16;
  unsigned __int64 v17;
  float32x4_t v18;
  float v19;
  float v20;
  __int64 v21;
  __int64 v22;
  float v23;
  __int64 v24;
  float32x4_t v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  long double v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  long double v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  float v44;
  __int64 v45;
  float32x4_t v46;
  float32x4_t v47;
  long double v48;
  __int128 v49;
  __int128 v50;
  struct {
    float32x4_t v51;
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
  } v51_;
  __int128 v64;
  struct {
    float32x4_t v65;
    __int64 v66;
    __int64 v67;
  } v65_;
  float32x4_t v68;
  struct {
    float32x4_t v69;
    __int64 v70;
    __int64 v71;
  } v69_;

  v6 = *(_QWORD*)(a2 + 160);
  v7 = *(_QWORD*)(a2 + 1352);
  v8 = *(_QWORD**)(a2 + 192);
  v12 = *(int*)(a2 + 1528);
  v69_.v69 = (__typeof__(v69_.v69)){0};
  v68 = (__typeof__(v68)){0};
  v65_.v66 = 0;
  v65_.v67 = 0;
  v65_.v65 = (__typeof__(v65_.v65)){0};
  v64 = (__typeof__(v64)){0};
  v51_.v62 = 0;
  v51_.v63 = 0;
  v51_.v60 = 0;
  v51_.v61 = 0;
  v51_.v58 = 0;
  v51_.v59 = 0;
  v13 = *(unsigned __int8*)(v6 + 1874);
  v51_.v56 = 0;
  v51_.v57 = 0;
  v51_.v54 = 0;
  v51_.v55 = 0;
  v14 = v13 == 0;
  v15 = *(_QWORD*)(v7 + 176);
  v69_.v70 = 0;
  v69_.v71 = 0;
  v51_.v52 = 0;
  v51_.v53 = 0;
  if (v14) {
    v16 = (_QWORD*)(a2 + 464);
  }
  else {
    v16 = v8;
  }
  if (*(_BYTE*)(v6 + 2020) != 0) {
    v17 = *(_QWORD*)(a2 + 1432);
    v18 = *(float32x4_t*)(a2 + 1488);
    v19 = *(float*)(a2 + 1380);
    v20 = *(float*)(a2 + 1372);
    LANES128(v51_.v51).n128_u64[0] = *(_QWORD*)(a2 + 1424);
    LANES128(v51_.v51).n128_u64[1] = v17;
    v21 = *(_QWORD*)(a2 + 1448);
    *(_QWORD*)&v50 = *(_QWORD*)(a2 + 1440);
    *((_QWORD*)&v50 + 1) = v21;
    v22 = *(_QWORD*)(a2 + 1464);
    *(_QWORD*)&v49 = *(_QWORD*)(a2 + 1456);
    *((_QWORD*)&v49 + 1) = v22;
    if (*(_BYTE*)(v6 + 2008) == 0) {
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  v40 = v15 + 32 * v12;
  v41 = 16 * v12;
  v18 = *(float32x4_t*)*(_QWORD*)(a2 + 1520);
  v42 = *(_QWORD*)(v7 + 496);
  v43 = *(_QWORD*)(v7 + 504);
  v51_.v51 = *(float32x4_t*)(*(_QWORD*)(v7 + 488) + v41);
  v50 = *(_OWORD*)(v43 + v41);
  v49 = *(_OWORD*)(v42 + v41);
  v44 = *(float*)(v40 + 8);
  v20 = *(float*)(v40 + 12);
  v45 = *v16 + 16LL * a3;
  v19 = (float)(*(float*)(v7 + 68) - v44) - *(float*)(v7 + 76);
  LANES128(v46).n128_u64[0] = *(_QWORD*)v45;
  LANES128(v46).n128_u64[1] = *(unsigned int*)(v45 + 8);
  a6 = *(long double*)*(_QWORD*)(a2 + 1512);
  v47 = vaddq_f32(*(float32x4_t*)&a6, v46);
  *(_QWORD*)v45 = LANES128(v47).n128_u64[0];
  *(_DWORD*)(v45 + 8) = LANES128(v47).n128_u32[2];
  v6 = *(_QWORD*)(a2 + 160);
  if (*(_BYTE*)(v6 + 2008) != 0) {
  LABEL_6:
    v23 = *(float*)(v6 + 2024);
    v24 = v16[1] + 16LL * a3;
    *(_QWORD*)&a6 = *(_QWORD*)v24;
    DWORD2(a6) = *(_DWORD*)(v24 + 8);
    v25 = vaddq_f32(vmulq_n_f32(v18, v23), *(float32x4_t*)&a6);
    *(_QWORD*)v24 = LANES128(v25).n128_u64[0];
    *(_DWORD*)(v24 + 8) = LANES128(v25).n128_u32[2];
    v6 = *(_QWORD*)(a2 + 160);
  }
LABEL_7:
  if (*(_BYTE*)(v6 + 2009) != 0) {
    GameRoutine_5c2180(v20, v19, a1, &v65_.v65,
                       *(_QWORD*)(*(_QWORD*)(a2 + 1352) + 568LL), &v51_.v51,
                       (float*)&v49);
    v26 = 16LL * a3;
    v65_.v65 = vmulq_n_f32(v65_.v65, *(float*)(*(_QWORD*)(a2 + 160) + 2028LL));
    *(_QWORD*)(v16[3] + v26) = LANES128(v65_.v65).n128_u64[0];
    *(_DWORD*)(v16[3] + v26 + 8) = LANES128(v65_.v65).n128_u32[2];
    v6 = *(_QWORD*)(a2 + 160);
  }
  if (*(_BYTE*)(v6 + 2010) != 0) {
    game_5c3e70_alt1(a1, &v64, *(_QWORD*)(*(_QWORD*)(a2 + 1352) + 568LL), &v50,
                     (float32x2_t*)&v49, v19);
    v27 = 16LL * a3;
    *(_QWORD*)(v16[5] + v27) = v64;
    *(_DWORD*)(v16[5] + v27 + 8) = DWORD2(v64);
  }
  if (v16[6] != 0) {
    v28 = *(_QWORD*)(a2 + 160);
    if (*(_BYTE*)(v28 + 2012) != 0 || *(_BYTE*)(v28 + 2014) != 0) {
      v29 = *(_QWORD*)(a2 + 1352);
      *(float*)&a6 = v19;
      v30 = *(_QWORD*)(v29 + 568);
      *(_QWORD*)&v31 = *(_QWORD*)(v29 + 1572);
      *((_QWORD*)&v31 + 1) = *(unsigned int*)(v29 + 1580);
      v48 = v31;
      LODWORD(v31) = *(_DWORD*)(v29 + 1620);
      game_5c26c0(v31, v20, a6, a1, &v68, v30, (float*)&v49,
                  (float*)(v29 + 1056), (float*)&v48);
      v32 = *(_QWORD*)(a2 + 160);
      if (*(_BYTE*)(v32 + 2012) != 0) {
        v33 = 16LL * a3;
        *(_QWORD*)(v16[6] + v33) = LANES128(v68).n128_u64[0];
        *(_DWORD*)(v16[6] + v33 + 8) = LANES128(v68).n128_u32[2];
        v32 = *(_QWORD*)(a2 + 160);
      }
      if (*(_BYTE*)(v32 + 2014) != 0) {
        *(_DWORD*)(v16[6] + 16LL * a3 + 12) = LANES128(v68).n128_u32[3];
      }
    }
  }
  if (v16[7] != 0) {
    v34 = *(_QWORD*)(a2 + 160);
    if (*(_BYTE*)(v34 + 2013) != 0 || *(_BYTE*)(v34 + 2015) != 0) {
      v35 = *(_QWORD*)(a2 + 1352);
      *(float*)&a6 = v19;
      v36 = *(_QWORD*)(v35 + 568);
      *(_QWORD*)&v37 = *(_QWORD*)(v35 + 1572);
      *((_QWORD*)&v37 + 1) = *(unsigned int*)(v35 + 1580);
      v48 = v37;
      LODWORD(v37) = *(_DWORD*)(v35 + 1620);
      game_5c32a0(v37, v20, a6, a1, &v69_.v69, v36, (float*)&v49,
                  (float*)(v35 + 1072), (float*)&v48);
      v38 = *(_QWORD*)(a2 + 160);
      if (*(_BYTE*)(v38 + 2013) != 0) {
        v39 = 16LL * a3;
        *(_QWORD*)(v16[7] + v39) = LANES128(v69_.v69).n128_u64[0];
        *(_DWORD*)(v16[7] + v39 + 8) = LANES128(v69_.v69).n128_u32[2];
        v38 = *(_QWORD*)(a2 + 160);
      }
      if (*(_BYTE*)(v38 + 2015) != 0) {
        *(_DWORD*)(v16[7] + 16LL * a3 + 12) = LANES128(v69_.v69).n128_u32[3];
      }
    }
  }
}

__int64 game_5bc5c0(__int64 a1, _BYTE* a2, __int64 a3, signed int a4, int a5,
                    float32x4_t* a6)
{

#pragma clang fp contract(off)
  unsigned int v6;
  signed int v8;
  __int64 v10;
  __int64 (*v11)(unsigned __int64*);
  __int64 v12;
  __int64 v13;
  float v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  _BOOL4 v21;
  int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  float* v28;
  _QWORD* v29;
  __int64 v30;
  double v31;
  _DWORD* v34;
  _DWORD* v35;
  unsigned __int64 v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int* v41;
  int v42;
  __int64 (*v44)(unsigned __int64*);
  __int64 v45;
  _BOOL4 v46;
  __int64 (*v47)(unsigned __int64*);
  int v48;
  struct {
    unsigned __int64 v49;
    __int64 v50;
    __int64 v51;
    int v52;
    int v53;
    int v54;
    int v55;
    char gap96_[8];
    _BYTE* v56;
  } v49_;

  v6 = *(_DWORD*)(a3 + 172);
  v8 = a4;
  v49_.v56 = a2;
  v45 = a1;
  *(_DWORD*)(a3 + 172) = 1103515245 * v6 + 12345;
  v10 = *(_QWORD*)(a3 + 1008);
  if (v10 != 0) {
    v11 = *(__int64 (**)(unsigned __int64*))(v10 + 56);
    v12 = *(_QWORD*)(a3 + 992);
    if (v12 == 0) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v11 = nullptr;
  v12 = *(_QWORD*)(a3 + 992);
  if (v12 != 0) {
  LABEL_3:
    v12 = *(_QWORD*)(v12 + 56);
  }
LABEL_4:
  v13 = *(_QWORD*)(a3 + 1000);
  if (v13 != 0) {
    v13 = *(_QWORD*)(v13 + 56);
  }
  v14 = vcvts_n_f32_u32(v6, 0x20u);
  v15 = *(_QWORD*)(*(_QWORD*)(a3 + 568) + 16LL);
  if (*(_DWORD*)(v15 + 2164) == 0) {
    v16 = *(unsigned __int8*)(v15 + 2104);
    if (v16 == 2) {
      v17 = 2180;
      v18 = 2176;
    }
    else {
      if (v16 != 13) {
        goto LABEL_14;
      }
      v17 = 2188;
      v18 = 2184;
    }
    v8 = (*(_DWORD*)(*(_QWORD*)(a3 + 160) + v18) -
          (int)(float)((float)((float)(v14 *
                                       (float)*(
                                           unsigned int*)(*(_QWORD*)(a3 + 160) +
                                                          v17)) *
                               0x1.47ae140000000p-7f) *
                       (float)*(unsigned int*)(*(_QWORD*)(a3 + 160) + v18))) *
         a4;
  }
LABEL_14:
  if (*(_BYTE*)(a3 + 1725) == 1 && *v49_.v56 != 0 &&
      (float)(*(float*)(a3 + 68) - *(float*)(*(_QWORD*)(a3 + 176) + 8LL)) >
          *(float*)(*(_QWORD*)(a3 + 176) + 12LL)) {
    *(_BYTE*)(a3 + 1725) = 0;
  }
  if (v8 < 1) {
    return (unsigned int)-1;
  }
  v19 = -1;
  v47 = v11;
  v20 = 0;
  v48 = a5 ^ 1;
  v21 = (v12 | v13) != 0;
  if (v12 == 0) {
    v12 = v13;
  }
  v46 = v21;
  v44 = (__int64 (*)(unsigned __int64*))v12;
  while (1) {
    if (*(_BYTE*)(a3 + 1725) == 1) {
      v22 = *(_DWORD*)(a3 + 564);
      v23 = 1;
      v24 = v22;
      v25 = *(_QWORD*)(a3 + 176) + 32LL * v22;
      if (*(_QWORD*)(v25 + 24) != 0) {
        goto LABEL_68;
      }
      goto LABEL_39;
    }
    v22 = *(_DWORD*)(a3 + 564);
    if (((v48 | *(unsigned __int8*)(a3 + 1724)) & 1) != 0) {
      v23 = 1;
      v24 = v22;
      v25 = *(_QWORD*)(a3 + 176) + 32LL * v22;
      if (*(_QWORD*)(v25 + 24) != 0) {
        goto LABEL_68;
      }
      goto LABEL_39;
    }
    v26 = *(unsigned int*)(a3 + 40);
    if ((_DWORD)v26 == 0) {
      v22 = 0;
      goto LABEL_38;
    }
    if (*(_BYTE*)(*(_QWORD*)(a3 + 160) + 1874LL) != 0) {
      if ((int)v26 >= 1) {
        v27 = 0;
        v28 = (float*)(*(_QWORD*)(a3 + 176) + 12LL);
        while ((float)(*(float*)(a3 + 68) - *(v28 - 1)) <= *v28) {
          v28 += 8;
          if (v26 == ++v27) {
            goto LABEL_38;
          }
        }
        goto LABEL_67;
      }
      goto LABEL_38;
    }
    if ((int)v26 >= 1) {
      break;
    }
  LABEL_38:
    v23 = 1;
    *(_BYTE*)(a3 + 1724) = 1;
    v24 = v22;
    v25 = *(_QWORD*)(a3 + 176) + 32LL * v22;
    if (*(_QWORD*)(v25 + 24) != 0) {
      goto LABEL_68;
    }
  LABEL_39:
    if (*(_QWORD*)(v25 + 16) != 0) {
      goto LABEL_68;
    }
    *v49_.v56 = 1;
    if (*(_BYTE*)(*(_QWORD*)(a3 + 160) + 1874LL) != 0) {
      v29 = *(_QWORD**)(a3 + 192);
    }
    else {
      v29 = (_QWORD*)(a3 + 464);
    }
    if (*(_DWORD*)(*(_QWORD*)(a3 + 568) + 136LL) != 0) {
      v30 = *(_QWORD*)(a3 + 184) + 344LL * (int)v24;
    }
    else {
      v30 = 0;
    }
    a1 = game_5bca40(a1, a3, v22, *(_QWORD*)(a3 + 176) + 32 * v24, v30, v29,
                     v22, v20, v8, a6);
    if ((a1 & 1) != 0) {
      *(_DWORD*)(a3 + 1720) = v22;
      v34 = (_DWORD*)(v29[1] + 16 * v24);
      v35 = (_DWORD*)(v29[2] + 16 * v24);
      *v35 = *v34;
      v35[1] = v34[1];
      LODWORD(v31) = v34[2];
      v35[2] = LODWORD(v31);
      if (*(_QWORD*)(a3 + 1352) != 0) {
        game_5bc1d0_alt1(v45, a3, v22, v31);
      }
      if (a6 != nullptr) {
        v36 = LANES128(a6[5]).n128_u64[0];
      }
      else {
        v36 = 0;
      }
      v37 = *(_DWORD*)(*(_QWORD*)(a3 + 176) + 32 * v24 + 12);
      v49_.v49 = v36;
      v49_.v52 = 0;
      v49_.v55 = 0;
      v49_.v50 = 0;
      v49_.v54 = v22;
      v49_.v51 = a3;
      v49_.v53 = v37;
      if (v47 != nullptr) {
        a1 = v47(&v49_.v49);
      }
      if (v46) {
        a1 = v44(&v49_.v49);
      }
      *(_QWORD*)(*(_QWORD*)(a3 + 176) + 32 * v24 + 24) = v49_.v50;
      *(_QWORD*)(*(_QWORD*)(a3 + 176) + 32 * v24 + 16) = v49_.v49;
      if (v23 != 0) {
        v38 = *(_DWORD*)(a3 + 560);
        if (v22 + 1 == v38) {
          v39 = 0;
        }
        else {
          v39 = v22 + 1;
        }
        *(_DWORD*)(a3 + 564) = v39;
        v40 = *(_DWORD*)(a3 + 40);
        if (v40 < v38) {
          *(_DWORD*)(a3 + 40) = v40 + 1;
        }
      }
      v19 = v22;
    }
    if (++v20 == v8) {
      return v19;
    }
  }
  v41 = *(int**)(a3 + 176);
  v27 = 0;
  while (1) {
    v42 = *v41;
    v41 += 8;
    if (v42 == 0) {
      break;
    }
    if (v26 == ++v27) {
      goto LABEL_38;
    }
  }
LABEL_67:
  v23 = 0;
  v22 = v27;
  v24 = (int)v27;
  v25 = *(_QWORD*)(a3 + 176) + 32LL * (int)v27;
  if (*(_QWORD*)(v25 + 24) == 0) {
    goto LABEL_39;
  }
LABEL_68:
  GameRoutine_5c02b0(a3, 4);
  return v19;
}

__int64 game_5bca40(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5,
                    _QWORD* a6, int a7, unsigned int a8, unsigned int a9,
                    float32x4_t* a10)
{
  __int64 v10;
  float32x2_t* v11;
  char v18;
  int v19;
  __int64 v20;
  float v21;
  int32x4_t v22;
  int8x16_t v23;
  unsigned int v24;
  unsigned int v25;
  float32x4_t v26;
  float32x4_t v27;
  unsigned int v28;
  float v29;
  float v30;
  float v31;
  float v32;
  __int16 v33;
  __int64 v34;
  float v35;
  float v36;
  float v37;
  __int64 v38;
  __int128 v39;
  __int128 v40;
  __int128 v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  __int64 v45;
  __int64 v46;
  unsigned __int32 v47;
  float v48;
  __int64 v49;
  __int64 v50;
  int8x16_t v51;
  unsigned int* v52;
  unsigned int* v53;
  unsigned int* v54;
  int32x4_t v55;
  int8x16_t v56;
  int8x16_t v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  int32x4_t v67;
  int32x4_t v68;
  int8x16_t v69;
  int8x16_t v70;
  int8x16_t v71;
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t v75;
  unsigned __int64 v76;
  int8x16_t v77;
  float32x4_t v78;
  float32x4_t v79;
  float32x4_t v80;
  int8x16_t v81;
  int8x16_t v82;
  int8x16_t v83;
  float v84;
  float v85;
  float32x4_t v86;
  unsigned int v87;
  unsigned int v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float32x4_t v105;
  float32x4_t v106;
  float32x4_t v107;
  float32x4_t v108;
  float32x4_t v109;
  float32x4_t v110;
  float32x4_t v111;
  int8x16_t v112;
  float32x4_t v113;
  float32x4_t v114;
  float32x4_t v115;
  int8x16_t v116;
  float32x4_t v117;
  float v118;
  float v119;
  float v120;
  float v121;
  float v122;
  float32x4_t v123;
  __int16 v124;
  int32x4_t v125;
  int8x16_t v126;
  int8x16_t v127;
  __int64 v128;
  __int64 v129;
  float* v130;
  float v131;
  float32x4_t v132;
  float v133;
  float v134;
  __int64 v135;
  float32x4_t v136;
  float32x4_t v137;
  float32x4_t v138;
  float32x4_t v139;
  float32x4_t v140;
  float32x4_t v141;
  float32x4_t v142;
  float32x4_t v143;
  float32x4_t v144;
  int32x4_t v145;
  int32x4_t v146;
  int32x4_t v147;
  int8x16_t v148;
  int8x16_t v149;
  int8x16_t v150;
  float32x4_t v151;
  float32x4_t v152;
  float32x4_t v153;
  unsigned __int64 v154;
  float32x4_t v155;
  float32x4_t v156;
  int8x16_t v157;
  float32x4_t v158;
  float v159;
  float* v160;
  unsigned int v161;
  float v162;
  unsigned int v163;
  float v164;
  float v165;
  unsigned int v166;
  float v167;
  float v168;
  float v169;
  float v170;
  unsigned int v171;
  float v172;
  int v173;
  float v174;
  unsigned int v175;
  __int64 v176;
  unsigned int v177;
  unsigned int v178;
  unsigned int v179;
  __int64 v180;
  _QWORD* v181;
  _QWORD* v182;
  __int64 v183;
  __int64 v184;
  unsigned __int8* v185;
  int v186;
  int v187;
  __int64 v188;
  __int128 v189;
  __int64 v190;
  __int128 v191;
  __int64 v193;
  __int64 v194;
  float v195;
  float32x4_t v196;
  int32x4_t v197;

  v10 = *(_QWORD*)(a2 + 160);
  v197 = (__typeof__(v197)){0};
  v196 = (__typeof__(v196)){0};
  v11 = *(float32x2_t**)(a2 + 120);
  v18 =
      ((__int64 (*)(int32x4_t*, float32x4_t*, __int64, _QWORD, _QWORD,
                    __int64))GameData_21363f8[*(unsigned __int8*)(v10 + 2104)])(
          &v197, &v196, a2, a8, a9, a2 + 1536);
  if ((v18 & 1) == 0) {
    return v18 & 1;
  }
  v19 = *(_DWORD*)(a2 + 28) + 1;
  *(_DWORD*)(a2 + 28) = v19;
  *(_DWORD*)a4 = v19;
  v20 = *(_QWORD*)(a2 + 160);
  v21 = *(float*)(v20 + 2428);
  if (v21 != 0x0.0p+0f) {
    v22 = vtrn2q_s32(vrev64q_s32(v197), COERCE_AS(int32x4_t, 0));
    v23 = vmulq_f32(v22, v22);
    LANES128(v23).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v23, v23, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
            .n64_u64[0];
    LANES128(v23).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
            .n64_u64[0];
    if (LANES128(v23).n128_f32[0] <= 0x1.0000000000000p-23f) {
      v24 = *(_DWORD*)(a2 + 172);
      v25 = 1103515245 * v24 + 12345;
      *(_DWORD*)(a2 + 172) = 1103515245 * v25 + 12345;
      LANES128(v22).n128_f32[0] =
          (float)(vcvts_n_f32_u32(v24, 0x20u) * 0x1.0000000000000p+1f) +
          -0x1.0000000000000p+0f;
      v21 = *(float*)(v20 + 2428);
      LANES128(v22).n128_f32[2] =
          (float)(vcvts_n_f32_u32(v25, 0x20u) * 0x1.0000000000000p+1f) +
          -0x1.0000000000000p+0f;
      LANES128(v22).n128_u32[3] = 0;
      v23 = vmulq_f32(v22, v22);
      LANES128(v23).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v23, v23, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
              .n64_u64[0];
      LANES128(v23).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
              .n64_u64[0];
    }
    LANES128(v23).n128_u64[1] = LANES128(v23).n128_u64[0];
    v26 = vrsqrteq_f32(v23);
    v27 = vmulq_f32(v26, vrsqrtsq_f32(v26, vmulq_f32(v23, v26)));
    v196 = vaddq_f32(
        v196,
        vmulq_n_f32(
            vbicq_s8(
                vmulq_f32(v22, vmulq_f32(v27, vrsqrtsq_f32(
                                                  v27, vmulq_f32(v23, v27)))),
                vceqzq_f32(v23)),
            v21));
  }
  v28 = *(_DWORD*)(a2 + 172);
  *(_DWORD*)(a2 + 172) = 1103515245 * v28 + 12345;
  v29 = *(float*)(v20 + 2444);
  v30 = LANES64(v11[61]).n64_f32[1];
  v31 = LANES64(v11[66]).n64_f32[0];
  v32 = *(float*)(v20 + 2424);
  if (*(float*)(v20 + 2064) != 0x0.0p+0f) {
    v33 = *(_WORD*)(a2 + 170);
    v34 = GameData_21a3a10;
    *(_WORD*)(a2 + 170) = v33 + 1;
    v197 =
        vaddq_f32(v197, vmulq_n_f32(*(float32x4_t*)(v34 + 16LL * (v33 & 0x1FF)),
                                    *(float*)(v20 + 2064)));
  }
  v35 = v29 / -0x1.9000000000000p+6f;
  v36 = *(float*)(a2 + 1656);
  v37 = vcvts_n_f32_u32(v28, 0x20u);
  if (a10 != nullptr) {
    v38 = a6[8];
    if (LANES128(*(a10)).n128_u8[0] == 1) {
      if (v38 != 0) {
        v40 = (__int128)a10[1];
        v39 = (__int128)a10[2];
        v41 = (__int128)a10[3];
        v42 = a10[4];
        if (*(_BYTE*)(v20 + 1875) == 2) {
          v197 = vaddq_f32(v42, v197);
          LANES128(v42).n128_u64[0] = 0;
          LANES128(v42).n128_u32[2] = 0;
        }
        else {
          v42 = vaddq_f32(v42, COERCE_AS(float32x4_t, 0));
        }
        goto LABEL_25;
      }
      v44 = vaddq_f32(
          vmlaq_laneq_f32(
              vmlaq_lane_f32(
                  vmulq_n_f32(a10[1], LANES128(v197).n128_f32[0]), a10[2],
                  COERCE_AS(float32x2_t, LANES128(v197).n128_u64[0]), 1),
              a10[3], v197, 2),
          a10[4]);
    }
    else {
      v43 = a10[4];
      if (v38 != 0) {
        v40 = GameData_1a82dd0;
        if (*(_BYTE*)(v20 + 1875) == 2) {
          LANES128(v42).n128_u64[0] = 0;
          LANES128(v42).n128_u32[2] = 0;
          v39 = GameData_1a83610;
          v197 = vaddq_f32(v43, v197);
        }
        else {
          v42 = vaddq_f32(v43, COERCE_AS(float32x4_t, 0));
          v39 = GameData_1a83610;
        }
        v41 = GameData_1a83090;
        goto LABEL_25;
      }
      v44 = vaddq_f32(v43, v197);
    }
    v197 = v44;
  LABEL_21:
    v45 = a7;
    goto LABEL_26;
  }
  v38 = a6[8];
  if (v38 == 0) {
    goto LABEL_21;
  }
  v40 = *(_OWORD*)(a2 + 832);
  v39 = *(_OWORD*)(a2 + 848);
  v41 = *(_OWORD*)(a2 + 864);
  v42 = *(float32x4_t*)(a2 + 880);
LABEL_25:
  v46 = 16LL * a7;
  v45 = a7;
  *(_DWORD*)(v38 + v46) = v40;
  *(_DWORD*)(a6[8] + v46 + 4) = v39;
  *(_DWORD*)(a6[8] + v46 + 8) = v41;
  *(_DWORD*)(a6[8] + v46 + 12) = LANES128(v42).n128_u32[0];
  *(_DWORD*)(a6[9] + v46) = DWORD1(v40);
  *(_DWORD*)(a6[9] + v46 + 4) = DWORD1(v39);
  *(_DWORD*)(a6[9] + v46 + 8) = DWORD1(v41);
  *(_DWORD*)(a6[9] + v46 + 12) = LANES128(v42).n128_u32[1];
  *(_DWORD*)(a6[10] + v46) = DWORD2(v40);
  *(_DWORD*)(a6[10] + v46 + 4) = DWORD2(v39);
  *(_DWORD*)(a6[10] + v46 + 8) = DWORD2(v41);
  *(_DWORD*)(a6[10] + v46 + 12) = LANES128(v42).n128_u32[2];
LABEL_26:
  v47 = LANES128(v197).n128_u32[2];
  v48 = v37 * v35;
  v49 = *a6 + 16 * v45;
  *(_QWORD*)v49 = LANES128(v197).n128_u64[0];
  *(_DWORD*)(v49 + 8) = v47;
  v50 = *(_QWORD*)(a2 + 160);
  LANES128(v51).n128_u64[0] = *(_QWORD*)(v50 + 2412);
  if (*(_BYTE*)(v50 + 2035) != 0) {
    v52 = (unsigned int*)(*(_QWORD*)(a2 + 528) + 16 * v45);
    v53 = (unsigned int*)(*(_QWORD*)(a2 + 544) + 16 * v45);
    v54 = (unsigned int*)(*(_QWORD*)(a2 + 536) + 16 * v45);
    if (*(_BYTE*)(v50 + 1875) != 0) {
      LANES128(v55).n128_u64[0] = *v52 | ((unsigned __int64)*v54 << 32);
      LANES128(v57).n128_u64[0] = v52[2] | ((unsigned __int64)v54[2] << 32);
      LANES128(v55).n128_u64[1] = *v53;
      LANES128(v56).n128_u64[0] = v52[1] | ((unsigned __int64)v54[1] << 32);
      LANES128(v56).n128_u64[1] = v53[1];
      LANES128(v57).n128_u64[1] = v53[2];
    }
    else {
      v55 = *(int32x4_t*)(a2 + 832);
      v56 = *(int8x16_t*)(a2 + 848);
      v57 = *(int8x16_t*)(a2 + 864);
    }
    LANES128(v58).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v56, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v58).n128_i8[8] =
        vqtbl1_s8(v56, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v59).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v59).n128_i8[8] =
        vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v60 = vmulq_f32(vmulq_f32(v55, v58), v59);
    LANES128(v59).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v56, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v59).n128_i8[8] =
        vqtbl1_s8(v56, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v61).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v61).n128_i8[8] =
        vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v62 = vsubq_f32(v60, vmulq_f32(vmulq_f32(v55, v59), v61));
    LANES128(v62).n128_u64[0] = LANES128_OF(vpaddq_f32(v62, v62)).n128_u64[0];
    v63 = vaddq_f32(
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v62).n128_u64[0]), 0),
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v62).n128_u64[0]), 1));
    v64 = vrecpeq_f32(v63);
    v65 = vmulq_f32(v64, vrecpsq_f32(v64, v63));
    v66 = vmulq_f32(v65, vrecpsq_f32(v65, v63));
    v67 = vzip1q_s32(v55, v57);
    v68 = vzip1q_s32(v56, COERCE_AS(int32x4_t, 0));
    v69 = vzip2q_s32(v67, v68);
    v70 = vzip1q_s32(vzip2q_s32(v55, v57),
                     vzip2q_s32(v56, COERCE_AS(int32x4_t, 0)));
    v71 = vzip1q_s32(v67, v68);
    LANES128(v72).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v69, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v73).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v70, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v74).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v70, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v75).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v72).n128_i8[8] =
        vqtbl1_s8(v69, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v76 = LANES64_OF(vqtbl1_s8(v70, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
              .n64_u64[0];
    *(int8x8_t*)&LANES128(v74).n128_i8[8] =
        vqtbl1_s8(v70, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v70).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v69, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v58).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v73).n128_u64[1] = v76;
    *(int8x8_t*)&LANES128(v75).n128_i8[8] =
        vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v77 = vceqzq_f32(v63);
    *(int8x8_t*)&LANES128(v70).n128_i8[8] =
        vqtbl1_s8(v69, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    *(int8x8_t*)&LANES128(v58).n128_i8[8] =
        vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v78 = vmlsq_f32(vmulq_f32(v72, v73), v70, v74);
    v79 = vmulq_f32(v70, v75);
    v80 = vmlsq_f32(vmulq_f32(v74, v58), v73, v75);
    LANES128(v75).n128_u64[0] = 0x8000000080000000LL;
    LANES128(v75).n128_u64[1] = 0x8000000080000000LL;
    v81 = vmulq_f32(v66, v78);
    v82 = vmulq_f32(v66, v80);
    v83 = vmulq_f32(v66, vmlsq_f32(v79, v58, v72));
    v51 = vaddq_f32(
        vmlaq_n_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(vbicq_s8(v81, v77), LANES128(v51).n128_f32[0]),
                vbicq_s8(v82, v77),
                COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0]), 1),
            vbicq_s8(v83, v77), *(float*)(v50 + 2420)),
        vbicq_s8(vmlsq_f32(vmlsq_f32(vmulq_f32(v81, v75),
                                     COERCE_AS(float32x4_t, 0), v82),
                           COERCE_AS(float32x4_t, 0), v83),
                 v77));
    v84 = (float)(v48 * v30) + 0x1.0000000000000p+0f;
    v85 = v36 * v31;
    if (v32 == 0x0.0p+0f) {
      goto LABEL_31;
    }
  }
  else {
    LANES128(v51).n128_u64[1] = *(unsigned int*)(v50 + 2420);
    v84 = (float)(v48 * v30) + 0x1.0000000000000p+0f;
    v85 = v36 * v31;
    if (v32 == 0x0.0p+0f) {
    LABEL_31:
      LANES128(v86).n128_u32[3] = 0;
      LANES128(v86).n128_f32[0] =
          v84 * (float)(LANES128(v196).n128_f32[0] +
                        (float)(LANES128(v51).n128_f32[0] * v85));
      LANES128(v86).n128_f32[1] =
          v84 * (float)(LANES128(v196).n128_f32[1] +
                        (float)(v85 * LANES128(v51).n128_f32[1]));
      LANES128(v86).n128_f32[2] =
          v84 * (float)(LANES128(v196).n128_f32[2] +
                        (float)(v85 * LANES128(v51).n128_f32[2]));
      goto LABEL_41;
    }
  }
  v87 = *(_DWORD*)(a2 + 172);
  v88 = 1103515245 * v87 + 12345;
  v89 = vcvts_n_f32_u32(v87, 0x20u);
  v90 = 0x1.0000000000000p+0f;
  v91 = (float)(v32 / -0x1.6800000000000p+6f) + 0x1.0000000000000p+0f;
  v92 = (float)(PSEUDO_UNFUSED((float)(v89 + v89) * 0x1.921fb60000000p+1f)) +
        (float)(roundf((float)((float)(v89 + v89) * 0x1.921fb60000000p+1f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v92 > 0x1.921fb60000000p+0f) {
    v93 = 0x1.921fb60000000p+1f;
  LABEL_37:
    v92 = v93 - v92;
    v90 = -0x1.0000000000000p+0f;
    goto LABEL_38;
  }
  if (v92 < -0x1.921fb60000000p+0f) {
    v93 = -0x1.921fb60000000p+1f;
    goto LABEL_37;
  }
LABEL_38:
  v94 = v92 * v92;
  v95 =
      v92 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c190) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c190 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c190) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c190 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c190 *
                                                                                            (float)(v92 *
                                                                                                    v92))) *
                                                                            (float)(v92 *
                                                                                    v92))) *
                                                         (float)(v92 * v92))) *
                                         (float)(v92 * v92))) *
                      (float)(v92 * v92)) +
              0x1.0000000000000p+0f);
  v96 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v97 = -(
      float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188) -
             (float)((float)(*((float*)GameData_212c188 + 1) -
                             (float)(*(float*)GameData_212c188 * v94)) *
                     v94));
  v98 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  *(_DWORD*)(a2 + 172) = 1103515245 * v88 + 12345;
  v99 = v90 *
        (float)((float)((float)-(
                            float)(v98 -
                                   (float)((float)(v96 + (float)(v97 * v94)) *
                                           v94)) *
                        v94) +
                0x1.0000000000000p+0f);
  v100 = v91 + (float)(vcvts_n_f32_u32(v88, 0x20u) *
                       (float)(0x1.0000000000000p+0f - v91));
  v101 = 0x0.0p+0f;
  v102 = 0x1.0000000000000p+0f - (float)(v100 * v100);
  if (v102 > 0x0.0p+0f) {
    v101 = sqrtf(v102);
  }
  v103 = v99 * v101;
  v104 = v95 * v101;
  LANES128(v105).n128_u32[3] = 0;
  LANES128(v106).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v51, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v107).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v108).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v51, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v106).n128_i8[8] =
      vqtbl1_s8(v51, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v107).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v109).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v108).n128_i8[8] =
      vqtbl1_s8(v51, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v110).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v110).n128_u64[1] = 0x3F0000003F000000LL;
  *(int8x8_t*)&LANES128(v109).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v111 = vmlsq_f32(vmulq_f32(v107, v106), v108, v109);
  v112 = vmulq_f32(v51, COERCE_AS(float32x4_t, GameData_1a83610));
  LANES128(v112).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v112, v112, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0])))
          .n64_u64[0];
  LANES128(v113).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v113).n128_u64[1] = 0x3F8000003F800000LL;
  LANES128(v112).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0])))
          .n64_u64[0];
  LANES128(v112).n128_u64[1] = LANES128(v112).n128_u64[0];
  v114 = vaddq_f32(v112, v113);
  v115 = vsqrtq_f32(vaddq_f32(v114, v114));
  v116 = vdivq_f32(v111, v115);
  LANES128(v116).n128_u32[3] = LANES128_OF(vmulq_f32(v115, v110)).n128_u32[3];
  LANES128(v115).n128_u64[0] = 0x3400000034000000LL;
  LANES128(v115).n128_u64[1] = 0x3400000034000000LL;
  v117 = vbslq_s8(vcgeq_f32(v115, v114), COERCE_AS(int8x16_t, GameData_1a82dd0),
                  v116);
  LANES128(v115).n128_f32[0] =
      0x1.0000000000000p+1f /
      (float)((float)((float)(vmuls_lane_f32(
                                  LANES128(v117).n128_f32[1],
                                  COERCE_AS(float32x2_t,
                                            LANES128(v117).n128_u64[0]),
                                  1) +
                              (float)(LANES128(v117).n128_f32[0] *
                                      LANES128(v117).n128_f32[0])) +
                      (float)(LANES128(v117).n128_f32[2] *
                              LANES128(v117).n128_f32[2])) +
              (float)(LANES128(v117).n128_f32[3] * LANES128(v117).n128_f32[3]));
  LANES128(v116).n128_f32[0] =
      LANES128(v115).n128_f32[0] * LANES128(v117).n128_f32[0];
  LANES128(v110).n128_f32[0] =
      vmuls_lane_f32(LANES128(v115).n128_f32[0],
                     COERCE_AS(float32x2_t, LANES128(v117).n128_u64[0]), 1);
  LANES128(v115).n128_f32[0] =
      vmuls_lane_f32(LANES128(v115).n128_f32[0], v117, 2);
  LANES128(v109).n128_f32[0] =
      vmuls_lane_f32(LANES128(v116).n128_f32[0], v117, 3);
  v118 = vmuls_lane_f32(LANES128(v110).n128_f32[0], v117, 3);
  LANES128(v106).n128_f32[0] =
      vmuls_lane_f32(LANES128(v115).n128_f32[0], v117, 3);
  LANES128(v116).n128_f32[0] =
      LANES128(v116).n128_f32[0] * LANES128(v117).n128_f32[0];
  v119 = LANES128(v110).n128_f32[0] * LANES128(v117).n128_f32[0];
  v120 = LANES128(v115).n128_f32[0] * LANES128(v117).n128_f32[0];
  LANES128(v110).n128_f32[0] =
      vmuls_lane_f32(LANES128(v110).n128_f32[0],
                     COERCE_AS(float32x2_t, LANES128(v117).n128_u64[0]), 1);
  v121 = vmuls_lane_f32(LANES128(v115).n128_f32[0],
                        COERCE_AS(float32x2_t, LANES128(v117).n128_u64[0]), 1);
  LANES128(v117).n128_f32[0] =
      vmuls_lane_f32(LANES128(v115).n128_f32[0], v117, 2);
  LANES128(v115).n128_f32[0] =
      LANES128(v110).n128_f32[0] + LANES128(v117).n128_f32[0];
  v122 = v119 + LANES128(v106).n128_f32[0];
  LANES128(v117).n128_f32[0] =
      LANES128(v116).n128_f32[0] + LANES128(v117).n128_f32[0];
  LANES128(v116).n128_f32[0] =
      0x1.0000000000000p+0f -
      (float)(LANES128(v116).n128_f32[0] + LANES128(v110).n128_f32[0]);
  LANES128(v105).n128_f32[0] =
      0x1.0000000000000p+0f - LANES128(v115).n128_f32[0];
  LANES128(v123).n128_u32[3] = 0;
  LANES128(v123).n128_f32[0] = v119 - LANES128(v106).n128_f32[0];
  LANES128(v105).n128_f32[1] = v122;
  LANES128(v123).n128_f32[1] =
      0x1.0000000000000p+0f - LANES128(v117).n128_f32[0];
  LANES128(v105).n128_f32[2] = v120 - v118;
  LANES128(v110).n128_f32[0] = v120 + v118;
  LANES128(v123).n128_f32[2] = v121 + LANES128(v109).n128_f32[0];
  LANES128(v110).n128_f32[1] = v121 - LANES128(v109).n128_f32[0];
  LANES128(v110).n128_u64[1] = LANES128(v116).n128_u32[0];
  v86 = vmulq_n_f32(
      vaddq_f32(
          v196,
          vmulq_n_f32(vaddq_f32(vmlaq_n_f32(vmlaq_n_f32(vmulq_n_f32(v105, v103),
                                                        v123, v100),
                                            v110, v104),
                                COERCE_AS(float32x4_t, 0)),
                      v85)),
      v84);
LABEL_41:
  v196 = v86;
  v124 = *(_WORD*)(a2 + 168);
  v125 = *(int32x4_t*)(a2 + 896);
  v126 = *(int8x16_t*)(a2 + 912);
  v127 = *(int8x16_t*)(a2 + 928);
  v128 = GameData_21a3a08;
  *(_WORD*)(a2 + 168) = v124 + 1;
  v129 = v128 + 16LL * (v124 & 0x1FF);
  v130 = *(float**)(a2 + 160);
  v131 = v130[609];
  LANES128(v132).n128_u64[1] = LANES128(v86).n128_u64[1];
  LANES128(v196).n128_f32[0] =
      LANES128(v86).n128_f32[0] +
      (float)(COERCE_FLOAT(*(_OWORD*)v129) * v130[608]);
  LANES128(v132).n128_u32[0] = LANES128(v196).n128_u32[0];
  v133 = v130[610];
  LANES128(v132).n128_f32[1] =
      LANES128(v86).n128_f32[1] + (float)(*(float*)(v129 + 4) * v131);
  v196 = v132;
  v134 = *(float*)(v129 + 8);
  v135 = a6[1] + 16 * v45;
  LANES128(v132).n128_u64[1] =
      COERCE_UNSIGNED_INT(LANES128(v86).n128_f32[2] + (float)(v134 * v133));
  LANES128(v136).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v126, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v136).n128_i8[8] =
      vqtbl1_s8(v126, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v137).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v127, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v137).n128_i8[8] =
      vqtbl1_s8(v127, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v138 = vmulq_f32(vmulq_f32(v125, v136), v137);
  LANES128(v137).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v126, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v137).n128_i8[8] =
      vqtbl1_s8(v126, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v139).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v127, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v139).n128_i8[8] =
      vqtbl1_s8(v127, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v140 = vsubq_f32(v138, vmulq_f32(vmulq_f32(v125, v137), v139));
  LANES128(v140).n128_u64[0] = LANES128_OF(vpaddq_f32(v140, v140)).n128_u64[0];
  v141 = vaddq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v140).n128_u64[0]), 0),
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v140).n128_u64[0]), 1));
  v142 = vrecpeq_f32(v141);
  v143 = vmulq_f32(v142, vrecpsq_f32(v142, v141));
  v144 = vmulq_f32(v143, vrecpsq_f32(v143, v141));
  v145 = vzip1q_s32(v125, v127);
  v146 = vzip2q_s32(v125, v127);
  v147 = vzip1q_s32(v126, COERCE_AS(int32x4_t, 0));
  v148 = vzip2q_s32(v145, v147);
  v149 = vzip1q_s32(v146, vzip2q_s32(v126, COERCE_AS(int32x4_t, 0)));
  v150 = vzip1q_s32(v145, v147);
  LANES128(v151).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v148, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v126).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v149, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v152).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v149, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v153).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v150, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v151).n128_i8[8] =
      vqtbl1_s8(v148, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v154 = LANES64_OF(vqtbl1_s8(v149, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
             .n64_u64[0];
  *(int8x8_t*)&LANES128(v152).n128_i8[8] =
      vqtbl1_s8(v149, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v149).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v148, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v136).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v150, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v126).n128_u64[1] = v154;
  *(int8x8_t*)&LANES128(v153).n128_i8[8] =
      vqtbl1_s8(v150, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  *(int8x8_t*)&LANES128(v136).n128_i8[8] =
      vqtbl1_s8(v150, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v149).n128_i8[8] =
      vqtbl1_s8(v148, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v155 = vmlsq_f32(vmulq_f32(v152, v136), v126, v153);
  v156 = vmlsq_f32(vmulq_f32(v149, v153), v136, v151);
  v157 = vceqzq_f32(v141);
  v158 = vaddq_f32(
      vaddq_f32(v132, vmulq_n_f32(*(float32x4_t*)(a2 + 976), v130[612])),
      vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(
                  vbicq_s8(vmulq_f32(v144, vmlsq_f32(vmulq_f32(v151, v126),
                                                     v149, v152)),
                           v157),
                  COERCE_FLOAT(*(_OWORD*)LANES64(v11[62]).n64_u64)),
              vbicq_s8(vmulq_f32(v144, v155), v157), v11[62], 1),
          vbicq_s8(vmulq_f32(v144, v156), v157),
          *(float32x4_t*)LANES64(v11[62]).n64_u64, 2));
  v196 = v158;
  *(_QWORD*)v135 = LANES128(v158).n128_u64[0];
  *(_DWORD*)(v135 + 8) = LANES128(v158).n128_u32[2];
  v159 = *(float*)(v10 + 2508);
  v160 = (float*)(a6[3] + 16 * v45);
  v161 = *(_DWORD*)(a2 + 172);
  if (v159 == *(float*)(v10 + 2512)) {
    *(_DWORD*)(a2 + 172) = 1103515245 * v161 + 12345;
    v170 = (float)((float)(v159 / -0x1.9000000000000p+6f) *
                   vcvts_n_f32_u32(v161, 0x20u)) +
           0x1.0000000000000p+0f;
    *v160 = (float)(*(float*)(a2 + 1668) * v170) * LANES64(v11[38]).n64_f32[0];
    v160[1] =
        (float)(v170 * *(float*)(a2 + 1672)) * LANES64(v11[38]).n64_f32[1];
    v169 = (float)(v170 * *(float*)(a2 + 1676)) * LANES64(v11[39]).n64_f32[0];
  }
  else {
    v162 = *(float*)(a2 + 1668);
    *(_DWORD*)(a2 + 172) = 1103515245 * v161 + 12345;
    *v160 =
        LANES64(v11[38]).n64_f32[0] *
        (float)(v162 * (float)((float)((float)(v159 / -0x1.9000000000000p+6f) *
                                       vcvts_n_f32_u32(v161, 0x20u)) +
                               0x1.0000000000000p+0f));
    v163 = *(_DWORD*)(a2 + 172);
    v164 = *(float*)(a2 + 1672);
    v165 = *(float*)(v10 + 2512) / -0x1.9000000000000p+6f;
    *(_DWORD*)(a2 + 172) = 1103515245 * v163 + 12345;
    v160[1] =
        LANES64(v11[38]).n64_f32[1] *
        (float)(v164 * (float)((float)(v165 * vcvts_n_f32_u32(v163, 0x20u)) +
                               0x1.0000000000000p+0f));
    v166 = *(_DWORD*)(a2 + 172);
    v167 = *(float*)(a2 + 1676);
    v168 = *(float*)(v10 + 2516) / -0x1.9000000000000p+6f;
    *(_DWORD*)(a2 + 172) = 1103515245 * v166 + 12345;
    v169 = LANES64(v11[39]).n64_f32[0] *
           (float)(v167 * (float)((float)(v168 * vcvts_n_f32_u32(v166, 0x20u)) +
                                  0x1.0000000000000p+0f));
  }
  v160[2] = v169;
  *(_DWORD*)(a4 + 4) = 0;
  v171 = *(_DWORD*)(a2 + 172);
  v172 = *(float*)(v10 + 2240);
  *(_DWORD*)(a2 + 172) = 1103515245 * v171 + 12345;
  *(float*)(a6[3] + 16 * v45 + 12) =
      (float)(v172 + 0x1.0000000000000p+0f) +
      (float)((float)(v172 * (float)((float)v171 * -0x1.0000000000000p-32f)) *
              0x1.0000000000000p+1f);
  v173 = *(_DWORD*)(a2 + 68);
  *(_DWORD*)(a4 + 8) = v173;
  *(_DWORD*)(a6[1] + 16 * v45 + 12) = v173;
  if (*(_BYTE*)(v10 + 2216) == 0) {
    v193 = *(unsigned int*)(a2 + 172);
    v194 = *(int*)(v10 + 2236);
    v195 = *(float*)(a2 + 1608);
    *(_DWORD*)(a2 + 172) = 1103515245 * v193 + 12345;
    v174 =
        *(float*)(*(_QWORD*)(a2 + 120) + 88LL) *
        (float)(*(float*)(a2 + 108) *
                (float)(v195 +
                        (float)(v195 *
                                (float)((float)(int)((unsigned __int64)(v193 *
                                                                        v194) >>
                                                     32) *
                                        -0x1.47ae140000000p-7f))));
    *(float*)(a4 + 12) = v174;
    *(float*)(*a6 + 16 * v45 + 12) = v174;
    if (a5 == 0) {
      goto LABEL_47;
    }
    goto LABEL_46;
  }
  v174 = 0x1.0000000000000p+28f;
  *(_DWORD*)(a4 + 12) = 1300234240;
  *(_DWORD*)(*a6 + 16 * v45 + 12) = 1300234240;
  if (a5 != 0) {
  LABEL_46:
    *(_DWORD*)(a5 + 128) = 0;
    *(_QWORD*)(a5 + 136) = 0;
    *(_QWORD*)(a5 + 144) = 0;
    *(_QWORD*)(a5 + 152) = 0;
    *(_QWORD*)(a5 + 160) = 0;
    *(_QWORD*)(a5 + 168) = 0;
    *(_QWORD*)(a5 + 176) = 0;
    *(_QWORD*)(a5 + 184) = 0;
    *(_QWORD*)(a5 + 192) = 0;
    *(_QWORD*)(a5 + 200) = 0;
    *(_QWORD*)(a5 + 208) = 0;
    *(_QWORD*)(a5 + 216) = 0;
    *(_QWORD*)(a5 + 224) = 0;
    *(_QWORD*)(a5 + 232) = 0;
    *(_QWORD*)(a5 + 240) = 0;
    *(_QWORD*)(a5 + 248) = 0;
    *(_QWORD*)(a5 + 256) = 0;
    *(_QWORD*)(a5 + 264) = 0;
    *(_QWORD*)(a5 + 272) = 0;
    *(_QWORD*)(a5 + 280) = 0;
    *(_QWORD*)(a5 + 288) = 0;
    *(_QWORD*)(a5 + 296) = 0;
    *(_QWORD*)(a5 + 304) = 0;
    *(_QWORD*)(a5 + 312) = 0;
    *(_QWORD*)(a5 + 320) = 0;
    *(_QWORD*)(a5 + 328) = 0;
    *(_QWORD*)(a5 + 336) = 0;
    *(_DWORD*)(a5 + 132) = *(_DWORD*)(a4 + 12);
  }
LABEL_47:
  v175 = *(_DWORD*)(a2 + 172);
  v176 = 16 * v45;
  *(_DWORD*)(a2 + 172) = 1103515245 * v175 + 12345;
  *(float*)(a6[4] + v176) = vcvts_n_f32_u32(v175, 0x20u);
  v177 = *(_DWORD*)(a2 + 172);
  *(_DWORD*)(a2 + 172) = 1103515245 * v177 + 12345;
  *(float*)(a6[4] + 16 * v45 + 4) = vcvts_n_f32_u32(v177, 0x20u);
  v178 = *(_DWORD*)(a2 + 172);
  *(_DWORD*)(a2 + 172) = 1103515245 * v178 + 12345;
  *(float*)(a6[4] + 16 * v45 + 8) = vcvts_n_f32_u32(v178, 0x20u);
  v179 = *(_DWORD*)(a2 + 172);
  *(_DWORD*)(a2 + 172) = 1103515245 * v179 + 12345;
  *(float*)(a6[4] + 16 * v45 + 12) = vcvts_n_f32_u32(v179, 0x20u);
  *(float*)(a6[5] + v176) = *(float*)(*(_QWORD*)(a2 + 568) + 800LL) +
                            *(float*)(*(_QWORD*)(a2 + 120) + 272LL);
  *(float*)(a6[5] + 16 * v45 + 4) = *(float*)(*(_QWORD*)(a2 + 568) + 804LL) +
                                    *(float*)(*(_QWORD*)(a2 + 120) + 276LL);
  *(float*)(a6[5] + 16 * v45 + 8) = *(float*)(*(_QWORD*)(a2 + 568) + 808LL) +
                                    *(float*)(*(_QWORD*)(a2 + 120) + 280LL);
  *(_DWORD*)(a6[5] + 16 * v45 + 12) = 0;
  v180 = a6[6];
  if (v180 != 0) {
    v181 = (_QWORD*)(v180 + 16 * v45);
    *v181 = 0x3F8000003F800000LL;
    v181[1] = 0x3F8000003F800000LL;
    v182 = (_QWORD*)(a6[7] + 16 * v45);
    *v182 = 0x3F8000003F800000LL;
    v182[1] = 0x3F8000003F800000LL;
  }
  if (*(int*)(*(_QWORD*)(a2 + 568) + 136LL) >= 1) {
    v183 = 0;
    do {
      v184 = *(_QWORD*)(a2 + 8 * v183 + 576);
      if (v184 != 0) {
        if (*(_BYTE*)(*(_QWORD*)(v184 + 16) + 2020LL) != 0) {
          v185 = nn_vfx_detail_5b5430(v11, v184, 0, a2, v183);
          if (v185 != nullptr) {
            *(_QWORD*)(a5 + 8 * v183) = v185;
            *((_DWORD*)v185 + 340) = *(_DWORD*)(a2 + 20);
            v186 = *(_DWORD*)(a2 + 28);
            *((float*)v185 + 343) = v174;
            *((_DWORD*)v185 + 341) = v186;
            v187 = *(_DWORD*)(a2 + 68);
            *((_DWORD*)v185 + 342) = a3;
            *((_DWORD*)v185 + 344) = v187;
            v188 = *a6 + 16 * v45;
            *(_QWORD*)&v189 = *(_QWORD*)v188;
            *((_QWORD*)&v189 + 1) = *(unsigned int*)(v188 + 8);
            *((_OWORD*)v185 + 87) = v189;
            v190 = a6[1] + 16 * v45;
            *(_QWORD*)&v189 = *(_QWORD*)v190;
            *((_QWORD*)&v189 + 1) = *(unsigned int*)(v190 + 8);
            *((_OWORD*)v185 + 88) = v189;
            *((_OWORD*)v185 + 89) = *(_OWORD*)(a6[3] + 16 * v45);
            *((_OWORD*)v185 + 90) = *(_OWORD*)(a6[5] + 16 * v45);
            v191 = *(_OWORD*)(a6[4] + 16 * v45);
            *((_OWORD*)v185 + 54) = GameData_1a83090;
            *((_OWORD*)v185 + 55) = (__typeof__(*((_OWORD*)v185 + 55))){0};
            *((_OWORD*)v185 + 58) = GameData_1a83090;
            *((_OWORD*)v185 + 59) = (__typeof__(*((_OWORD*)v185 + 59))){0};
            *((_OWORD*)v185 + 91) = v191;
            *((_OWORD*)v185 + 52) = GameData_1a82dd0;
            *((_OWORD*)v185 + 53) = GameData_1a83610;
            *((_OWORD*)v185 + 56) = GameData_1a82dd0;
            *((_OWORD*)v185 + 57) = GameData_1a83610;
          }
        }
        else {
          *(_QWORD*)(a5 + 8 * v183) = *(_QWORD*)(a2 + 8 * v183 + 1088);
        }
      }
      else {
        *(_QWORD*)(a5 + 8 * v183) = 0;
      }
      ++v183;
    } while (v183 < *(int*)(*(_QWORD*)(a2 + 568) + 136LL));
  }
  return v18 & 1;
}

float32x4_t game_5bd960(_QWORD* a1, float32x4_t* a2, __int64 a3, __int64 a4,
                        __int64 a5, __int64 a6)
{

#pragma clang fp contract(off)
  __int16 v6;
  __int64 v7;
  float32x4_t result;

  *a1 = 0;
  a1[1] = 0;
  v6 = *(_WORD*)(a3 + 170);
  v7 = *GameData_2136400[0];
  *(_WORD*)(a3 + 170) = v6 + 1;
  result = vmulq_n_f32(*(float32x4_t*)(v7 + 16LL * (v6 & 0x1FF)),
                       *(float*)(a6 + 108));
  *a2 = result;
  return result;
}

float game_5bdb20(_OWORD* a1, _OWORD* a2, __int64 a3, int a4, float a5,
                  __int64 a6, float* a7)
{
  __int64 v7;
  float v8;
  int v9;
  int v10;
  _BOOL4 v12;
  int v13;
  unsigned int v14;
  int v15;
  _BOOL4 v17;
  int v18;
  int v19;
  float v20;
  float v21;
  unsigned int v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  __int128 v31;
  float v32;
  float v33;
  float result;
  __int128 v35;

  v7 = *(_QWORD*)(a3 + 160);
  v8 = *(float*)(v7 + 2120);
  v9 = *(_DWORD*)(v7 + 2176);
  v10 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a3 + 568) + 16LL) + 2164LL);
  if (*(_BYTE*)(v7 + 2105) != 0) {
    v8 = (float)(a5 * 0x1.921fb60000000p+1f) +
         (float)(a5 * 0x1.921fb60000000p+1f);
  }
  if (v10 != 0) {
    v12 = v9 > 1 && *(float*)(v7 + 2112) != 0x1.921fb60000000p+2f;
    v13 = v9 - v12;
    if (v10 == 2) {
      v18 = *(_DWORD*)(a3 + 56);
      a4 = v18 % v13;
      if (v18 + 1 < v13) {
        v19 = v18 + 1;
      }
      else {
        v19 = 0;
      }
      *(_DWORD*)(a3 + 56) = v19;
    }
    else if (v10 == 1) {
      v14 = *(_DWORD*)(a3 + 172);
      *(_DWORD*)(a3 + 172) = 1103515245 * v14 + 12345;
      a4 = (int)(float)(vcvts_n_f32_u32(v14, 0x20u) * (float)v13);
    }
  }
  else {
    v15 =
        v9 -
        (int)(float)((float)((float)(a5 * (float)*(unsigned int*)(v7 + 2180)) *
                             0x1.47ae140000000p-7f) *
                     (float)(unsigned int)v9);
    v17 = v15 > 1 && *(float*)(v7 + 2112) != 0x1.921fb60000000p+2f;
    v13 = v15 - v17;
  }
  v20 = *(float*)(v7 + 2112);
  v21 = (float)v13;
  v22 = *(_DWORD*)(a3 + 172);
  *(_DWORD*)(a3 + 172) = 1103515245 * v22 + 12345;
  v23 = (float)(v20 * -0.5f) + (float)((float)a4 * (float)(v20 / v21));
  v24 = vcvts_n_f32_u32(v22, 0x20u);
  v25 = v8 + (float)(v23 + (float)((float)((float)(v24 + -0.5f) +
                                           (float)(v24 + -0.5f)) *
                                   *(float*)(v7 + 2124)));
  v26 = v25 +
        (float)(roundf(v25 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (v26 > 0x1.921fb60000000p+0f) {
    v27 = 0x1.921fb60000000p+1f;
  LABEL_28:
    v26 = v27 - v26;
    v28 = -1.0f;
    goto LABEL_29;
  }
  v28 = 1.0f;
  if (v26 < -0x1.921fb60000000p+0f) {
    v27 = -0x1.921fb60000000p+1f;
    goto LABEL_28;
  }
LABEL_29:
  v29 = v26 * v26;
  v30 =
      v26 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c190) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c190 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c190) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c190 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c190 *
                                                                                            (float)(v26 *
                                                                                                    v26))) *
                                                                            (float)(v26 *
                                                                                    v26))) *
                                                         (float)(v26 * v26))) *
                                         (float)(v26 * v26))) *
                      (float)(v26 * v26)) +
              1.0f);
  DWORD1(v31) = 0;
  DWORD3(v31) = 0;
  v32 =
      v28 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c188) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c188 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c188) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c188 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c188 *
                                                                                            v29)) *
                                                                            v29)) *
                                                         v29)) *
                                         v29)) *
                      v29) +
              1.0f);
  *(float*)&v31 = v30 * (float)(*(float*)(v7 + 2140) * a7[36]);
  *((float*)&v31 + 2) = v32 * (float)(*(float*)(v7 + 2148) * a7[38]);
  *a1 = v31;
  v33 = a7[27];
  result = v30 * v33;
  *(_QWORD*)&v35 = LODWORD(result);
  *((_QWORD*)&v35 + 1) = COERCE_UNSIGNED_INT(v32 * v33);
  *a2 = v35;
  return result;
}

float32x4_t game_5be030(float32x4_t* a1, float32x4_t* a2, __int64 a3, float a4,
                        __int64 a5, __int64 a6, float* a7)
{
  __int64 v7;
  unsigned int v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  int v17;
  bool v18;
  __int64 v19;
  float v20;
  unsigned int v21;
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
  float v49;
  float v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  int v54;
  int8x16_t v55;
  __int64 v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  int8x16_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  int8x16_t v66;
  float32x4_t v67;
  int8x16_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t result;
  int8x16x2_t v76;
  int8x16x2_t v77;
  int8x16x2_t v78;

  v7 = *(_QWORD*)(a3 + 160);
  v8 = *(_DWORD*)(a3 + 172);
  v9 = a7[36];
  v10 = a7[37];
  v11 = vcvts_n_f32_u32(v8, 0x20u);
  v12 = *(float*)(v7 + 2140);
  v13 = *(float*)(v7 + 2144);
  v14 = *(float*)(v7 + 2148);
  v15 = a7[38];
  v16 = *(float*)(v7 + 2120);
  v17 = *(unsigned __int8*)(v7 + 2105);
  v18 = *(_BYTE*)(v7 + 2106) == 1;
  v19 = 2112;
  if (*(_BYTE*)(v7 + 2106) == 1) {
    v19 = 2116;
  }
  v20 = *(float*)(v7 + v19);
  v21 = 1103515245 * v8 + 12345;
  *(_DWORD*)(a3 + 172) = v21;
  if (!v18) {
    v24 = (float)(PSEUDO_UNFUSED(a4 * 0x1.921fb60000000p+1f)) +
          (float)(PSEUDO_UNFUSED(a4 * 0x1.921fb60000000p+1f));
    if (v17 == 0) {
      v24 = v16;
    }
    v22 = (float)((float)(v24 + (float)(v11 * v20)) +
                  (float)(PSEUDO_UNFUSED(v20 * -0x1.0000000000000p-1f))) +
          (float)(roundf((float)((float)(v24 + (float)(v11 * v20)) +
                                 (float)(PSEUDO_UNFUSED(
                                     v20 * -0x1.0000000000000p-1f))) *
                         0x1.45f3060000000p-3f) *
                  -0x1.921fb60000000p+2f);
    if (v22 <= 0x1.921fb60000000p+0f) {
      goto LABEL_10;
    }
  LABEL_6:
    v23 = 0x1.921fb60000000p+1f;
    goto LABEL_12;
  }
  v22 =
      (float)((float)(PSEUDO_UNFUSED(v11 * 0x1.921fb60000000p+1f)) +
              (float)(PSEUDO_UNFUSED(v11 * 0x1.921fb60000000p+1f))) +
      (float)(roundf(
                  (float)((float)(PSEUDO_UNFUSED(v11 * 0x1.921fb60000000p+1f)) +
                          (float)(PSEUDO_UNFUSED(v11 *
                                                 0x1.921fb60000000p+1f))) *
                  0x1.45f3060000000p-3f) *
              -0x1.921fb60000000p+2f);
  if (v22 > 0x1.921fb60000000p+0f) {
    goto LABEL_6;
  }
LABEL_10:
  v25 = 0x1.0000000000000p+0f;
  if (v22 < -0x1.921fb60000000p+0f) {
    v23 = -0x1.921fb60000000p+1f;
  LABEL_12:
    v22 = v23 - v22;
    v25 = -0x1.0000000000000p+0f;
  }
  v27 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v26 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v28 = *((float*)GameData_212c188 + 1);
  v29 =
      (float)((float)-(
                  float)(*(float*)((char*)((__int128*)0x10LL) +
                                   (_QWORD)GameData_212c190) -
                         (float)((float)(*(float*)((char*)((_UNKNOWN**)0x8LL) +
                                                   (_QWORD)GameData_212c190 +
                                                   4) +
                                         (float)((float)-(
                                                     float)(*(float*)((char*)((
                                                                          _UNKNOWN**)0x8LL) +
                                                                      (_QWORD)
                                                                          GameData_212c190) -
                                                            (float)((float)(*((float*)
                                                                                  GameData_212c190 +
                                                                              1) -
                                                                            (float)(*(float*)
                                                                                        GameData_212c190 *
                                                                                    (float)(v22 *
                                                                                            v22))) *
                                                                    (float)(v22 *
                                                                            v22))) *
                                                 (float)(v22 * v22))) *
                                 (float)(v22 * v22))) *
              (float)(v22 * v22)) +
      0x1.0000000000000p+0f;
  v30 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  v31 =
      (float)((float)-(
                  float)(v30 -
                         (float)((float)(v26 +
                                         (float)((float)-(
                                                     float)(v27 -
                                                            (float)((float)(v28 -
                                                                            (float)(*(float*)
                                                                                        GameData_212c188 *
                                                                                    (float)(v22 *
                                                                                            v22))) *
                                                                    (float)(v22 *
                                                                            v22))) *
                                                 (float)(v22 * v22))) *
                                 (float)(v22 * v22))) *
              (float)(v22 * v22)) +
      0x1.0000000000000p+0f;
  if (*(_BYTE*)(v7 + 2106) != 1) {
    v37 = vcvts_n_f32_u32(v21, 0x20u);
    v38 = -0x1.0000000000000p+0f;
    v39 = 0x1.0000000000000p+1f;
    *(_DWORD*)(a3 + 172) = 1103515245 * v21 + 12345;
    goto LABEL_21;
  }
  v32 = -*(float*)GameData_212c188;
  v33 = -v30;
  v34 = -v27;
  v35 = *(float*)(v7 + 2116) +
        (float)(roundf(*(float*)(v7 + 2116) * 0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v35 > 0x1.921fb60000000p+0f) {
    v36 = 0x1.921fb60000000p+1f;
  LABEL_19:
    v35 = v36 - v35;
    v40 = -0x1.0000000000000p+0f;
    goto LABEL_20;
  }
  v40 = 0x1.0000000000000p+0f;
  if (v35 < -0x1.921fb60000000p+0f) {
    v36 = -0x1.921fb60000000p+1f;
    goto LABEL_19;
  }
LABEL_20:
  v41 = v35 * v35;
  *(_DWORD*)(a3 + 172) = 1103515245 * v21 + 12345;
  v42 =
      v26 +
      (float)((float)(v34 + (float)((float)(v28 + (float)(v32 * v41)) * v41)) *
              v41);
  v38 = 0x1.0000000000000p+0f;
  v43 = v33 + (float)(v42 * v41);
  v39 = (float)v21 * -0x1.0000000000000p-32f;
  v37 = 0x1.0000000000000p+0f -
        (float)(PSEUDO_UNFUSED(
            v40 * (float)((float)(v43 * v41) + 0x1.0000000000000p+0f)));
LABEL_21:
  v44 = v38 + (float)(v37 * v39);
  v45 = v22 * v29;
  v46 = v25 * v31;
  v47 = 0x1.0000000000000p+0f - (float)(v44 * v44);
  v48 = 0x0.0p+0f;
  if (v47 > 0x0.0p+0f) {
    v48 = sqrtf(v47);
  }
  v49 = v45 * v48;
  v50 = v46 * v48;
  LANES128(v51).n128_u32[3] = 0;
  v52 = COERCE_AS(float32x4_t, LODWORD(v49));
  LANES128(v52).n128_f32[1] = v44;
  v53 = v52;
  LANES128(v53).n128_f32[2] = v50;
  if (*(_BYTE*)(v7 + 2106) != 1) {
    goto LABEL_43;
  }
  v54 = *(unsigned __int8*)(v7 + 2110);
  LANES128(v55).n128_u64[0] = 0;
  if (v54 > 2) {
    if (v54 == 3) {
      v56 = 0;
      v57 = COERCE_AS(float32x4_t, GameData_1a82fa0);
      LANES128(v55).n128_u64[0] = 0xBF80000000000000LL;
      goto LABEL_38;
    }
    if (v54 == 4) {
      v57 = COERCE_AS(float32x4_t, GameData_1a83090);
      v56 = 1065353216;
      if (0x0.0p+0f == 0x1.0000000000000p+0f) {
        goto LABEL_38;
      }
      goto LABEL_42;
    }
    v56 = 0;
    v57 = (__typeof__(v57)){0};
    if (v54 == 5) {
      v57 = COERCE_AS(float32x4_t, GameData_1a82c50);
      v56 = 3212836864LL;
      if (0x0.0p+0f == -0x1.0000000000000p+0f) {
        goto LABEL_38;
      }
    LABEL_42:
      LANES128(v55).n128_u64[1] = v56;
      LANES128(v58).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                               COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v59).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v58).n128_i8[8] =
          vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                    COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      LANES128(v60).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                               COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v59).n128_i8[8] =
          vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      v61 = vmulq_f32(v58, v59);
      *(int8x8_t*)&LANES128(v60).n128_i8[8] =
          vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                    COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      LANES128(v59).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v59).n128_i8[8] =
          vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      v62 = vmulq_f32(v57, COERCE_AS(float32x4_t, GameData_1a83610));
      LANES128(v62).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v62, v62, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0])))
              .n64_u64[0];
      LANES128(v63).n128_u64[0] = 0x3F8000003F800000LL;
      LANES128(v63).n128_u64[1] = 0x3F8000003F800000LL;
      LANES128(v62).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0])))
              .n64_u64[0];
      LANES128(v62).n128_u64[1] = LANES128(v62).n128_u64[0];
      v64 = vaddq_f32(v62, v63);
      v65 = vsqrtq_f32(vaddq_f32(v64, v64));
      v66 = vdivq_f32(vmlsq_f32(v61, v59, v60), v65);
      LANES128(v61).n128_u64[0] = 0x3F0000003F000000LL;
      LANES128(v61).n128_u64[1] = 0x3F0000003F000000LL;
      LANES128(v66).n128_u32[3] = LANES128_OF(vmulq_f32(v65, v61)).n128_u32[3];
      LANES128(v65).n128_u64[0] = 0x3400000034000000LL;
      LANES128(v65).n128_u64[1] = 0x3400000034000000LL;
      v67 = vbslq_s8(vcgeq_f32(v65, v64),
                     COERCE_AS(int8x16_t, GameData_1a82dd0), v66);
      v68 = v67;
      LANES128(v68).n128_u32[3] = 0;
      LANES128(v64).n128_u64[0] =
          LANES64_OF(
              vrev64_s32(COERCE_AS(int32x2_t, LANES128(v67).n128_u64[0])))
              .n64_u64[0];
      LANES128(v65).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
              .n64_u64[0];
      LANES128(v69).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v70).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v64).n128_i8[8] =
          vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      *(int8x8_t*)&LANES128(v65).n128_i8[8] =
          vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      LANES128(v69).n128_u64[1] = LANES128(v64).n128_u64[1];
      LANES128(v70).n128_u64[1] = LANES128(v65).n128_u64[1];
      v71 = vmulq_f32(v64, v64);
      v76.val[1] = vmulq_f32(v65, v65);
      v72 = vmulq_f32(v69, v68);
      v73 = vmulq_laneq_f32(v70, v67, 3);
      v74 = vaddq_f32(v72, v72);
      v77.val[1] = vaddq_f32(v73, v73);
      v78.val[0] = vaddq_f32(v74, v77.val[1]);
      v78.val[1] = vsubq_f32(v74, v77.val[1]);
      v76.val[0] = vsubq_f32(
          COERCE_AS(float32x4_t, GameData_1a837f0),
          vaddq_f32(vaddq_f32(v76.val[1], v76.val[1]), vaddq_f32(v71, v71)));
      LANES128(v77.val[1]).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v78, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
              .n64_u64[0];
      LANES128(v76.val[1]).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v78, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v77.val[1]).n128_i8[8] =
          vqtbl2_s8(v78, COERCE_AS(int8x8_t, 0x706050413121110LL));
      *(int8x8_t*)&LANES128(v76.val[1]).n128_i8[8] =
          vqtbl2_s8(v78, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
      v77.val[0] = v76.val[0];
      LANES128(v78.val[0]).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v77, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v78.val[0]).n128_i8[8] =
          vqtbl2_s8(v77, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
      LANES128(v78.val[1]).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v77, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v78.val[1]).n128_i8[8] =
          vqtbl2_s8(v77, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
      LANES128(v77.val[0]).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v76, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v77.val[0]).n128_i8[8] =
          vqtbl2_s8(v76, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
      v53 = vaddq_f32(
          vmlaq_laneq_f32(
              vmlaq_lane_f32(vmulq_n_f32(v78.val[0], v49), v78.val[1],
                             COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0]),
                             1),
              v77.val[0], v53, 2),
          COERCE_AS(float32x4_t, 0));
      goto LABEL_43;
    }
  LABEL_37:
    if (LANES128(v57).n128_f32[2] == 0x0.0p+0f) {
      goto LABEL_38;
    }
    goto LABEL_42;
  }
  if (v54 == 0) {
    v56 = 0;
    v57 = COERCE_AS(float32x4_t, GameData_1a82dd0);
    LANES128(v55).n128_u64[0] = 1065353216;
    goto LABEL_38;
  }
  if (v54 == 1) {
    v56 = 0;
    v57 = COERCE_AS(float32x4_t, GameData_1a82d00);
    LANES128(v55).n128_u64[0] = 3212836864LL;
    goto LABEL_37;
  }
  v56 = 0;
  v57 = COERCE_AS(float32x4_t, GameData_1a83610);
  LANES128(v55).n128_u64[0] = 0x3F80000000000000LL;
LABEL_38:
  if (LANES128(v57).n128_f32[0] != 0x0.0p+0f ||
      LANES128(v57).n128_f32[1] != 0x1.0000000000000p+0f) {
    goto LABEL_42;
  }
LABEL_43:
  LANES128(v51).n128_f32[0] = v12 * v9;
  LANES128(v51).n128_f32[1] = v13 * v10;
  LANES128(v51).n128_f32[2] = v14 * v15;
  *a1 = vmulq_f32(v51, v53);
  result = vmulq_n_f32(v53, a7[27]);
  *a2 = result;
  return result;
}

float32x4_t game_5be6b0(float32x4_t* a1, float32x4_t* a2, __int64 a3, int a4,
                        __int64 a5, float* a6)
{
  __int64 v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  __int64 v13;
  char* v14;
  int v15;
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  float* v20;
  float v21;
  float v22;
  float v23;
  float32x4_t v24;
  float32x4_t result;
  float v26;
  float v27;
  float v28;
  float v29;
  int v30;
  float v31;
  float32x4_t v32;
  int8x16_t v33;
  __int64 v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  int8x16_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  int8x16_t v44;
  float32x4_t v45;
  int8x16_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  int8x16x2_t v53;
  int8x16x2_t v54;
  int8x16x2_t v55;

  v6 = *(_QWORD*)(a3 + 160);
  v7 = a6[36];
  v8 = a6[37];
  v9 = a6[38];
  v10 = *(float*)(v6 + 2140);
  v11 = *(float*)(v6 + 2144);
  v12 = *(float*)(v6 + 2148);
  v13 = *(unsigned __int8*)(v6 + 2108);
  v14 = (char*)GameData_2136410[0][v13];
  v15 = GameData_1b01728[v13];
  v16 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a3 + 568) + 16LL) + 2164LL);
  if (v16 == 2) {
    v18 = *(_DWORD*)(a3 + 56);
    a4 = v18 % v15;
    if (v18 + 1 < v15) {
      v19 = v18 + 1;
    }
    else {
      v19 = 0;
    }
    *(_DWORD*)(a3 + 56) = v19;
  }
  else if (v16 == 1) {
    v17 = *(_DWORD*)(a3 + 172);
    *(_DWORD*)(a3 + 172) = 1103515245 * v17 + 12345;
    a4 = (int)(float)(vcvts_n_f32_u32(v17, 0x20u) * (float)v15);
  }
  v20 = (float*)&v14[12 * a4];
  v21 = *v20;
  v22 = *(float*)(v6 + 2116);
  v23 = v20[1];
  v24 = COERCE_AS(float32x4_t, *(unsigned int*)v20);
  LANES128(v24).n128_f32[1] = v23;
  result = v24;
  LANES128(result).n128_f32[2] = v20[2];
  if (v22 > 0x1.921c700000000p+1f) {
  LABEL_15:
    LANES128(v32).n128_u32[3] = 0;
    v30 = *(unsigned __int8*)(v6 + 2110);
    v31 = v12 * v9;
    LANES128(v32).n128_f32[0] = v10 * v7;
    LANES128(v32).n128_f32[1] = v11 * v8;
    LANES128(v33).n128_u64[0] = 0;
    if (v30 > 2) {
      if (v30 == 3) {
        v34 = 0;
        v35 = COERCE_AS(float32x4_t, GameData_1a82fa0);
        LANES128(v33).n128_u64[0] = 0xBF80000000000000LL;
        LANES128(v32).n128_f32[2] = v31;
        goto LABEL_29;
      }
      if (v30 == 4) {
        v35 = COERCE_AS(float32x4_t, GameData_1a83090);
        v34 = 1065353216;
        LANES128(v32).n128_f32[2] = v31;
        if (0x0.0p+0f == 0x1.0000000000000p+0f) {
          goto LABEL_29;
        }
        goto LABEL_33;
      }
      v34 = 0;
      v35 = (__typeof__(v35)){0};
      if (v30 == 5) {
        v35 = COERCE_AS(float32x4_t, GameData_1a82c50);
        v34 = 3212836864LL;
        LANES128(v32).n128_f32[2] = v31;
        if (0x0.0p+0f == -0x1.0000000000000p+0f) {
          goto LABEL_29;
        }
      LABEL_33:
        LANES128(v33).n128_u64[1] = v34;
        LANES128(v36).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                                 COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v37).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v36).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                      COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        LANES128(v38).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                                 COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v37).n128_i8[8] =
            vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        v39 = vmulq_f32(v36, v37);
        *(int8x8_t*)&LANES128(v38).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                      COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        LANES128(v37).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v37).n128_i8[8] =
            vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        v40 = vmulq_f32(v35, COERCE_AS(float32x4_t, GameData_1a83610));
        LANES128(v40).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v40, v40, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
                .n64_u64[0];
        LANES128(v41).n128_u64[0] = 0x3F8000003F800000LL;
        LANES128(v41).n128_u64[1] = 0x3F8000003F800000LL;
        LANES128(v40).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
                .n64_u64[0];
        LANES128(v40).n128_u64[1] = LANES128(v40).n128_u64[0];
        v42 = vaddq_f32(v40, v41);
        v43 = vsqrtq_f32(vaddq_f32(v42, v42));
        v44 = vdivq_f32(vmlsq_f32(v39, v37, v38), v43);
        LANES128(v39).n128_u64[0] = 0x3F0000003F000000LL;
        LANES128(v39).n128_u64[1] = 0x3F0000003F000000LL;
        LANES128(v44).n128_u32[3] =
            LANES128_OF(vmulq_f32(v43, v39)).n128_u32[3];
        LANES128(v43).n128_u64[0] = 0x3400000034000000LL;
        LANES128(v43).n128_u64[1] = 0x3400000034000000LL;
        v45 = vbslq_s8(vcgeq_f32(v43, v42),
                       COERCE_AS(int8x16_t, GameData_1a82dd0), v44);
        v46 = v45;
        LANES128(v46).n128_u32[3] = 0;
        LANES128(v42).n128_u64[0] =
            LANES64_OF(
                vrev64_s32(COERCE_AS(int32x2_t, LANES128(v45).n128_u64[0])))
                .n64_u64[0];
        LANES128(v43).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
                .n64_u64[0];
        LANES128(v47).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v48).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v42).n128_i8[8] =
            vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        *(int8x8_t*)&LANES128(v43).n128_i8[8] =
            vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        LANES128(v47).n128_u64[1] = LANES128(v42).n128_u64[1];
        LANES128(v48).n128_u64[1] = LANES128(v43).n128_u64[1];
        v49 = vmulq_f32(v42, v42);
        v53.val[1] = vmulq_f32(v43, v43);
        v50 = vmulq_f32(v47, v46);
        v51 = vmulq_laneq_f32(v48, v45, 3);
        v52 = vaddq_f32(v50, v50);
        v54.val[1] = vaddq_f32(v51, v51);
        v55.val[0] = vaddq_f32(v52, v54.val[1]);
        v55.val[1] = vsubq_f32(v52, v54.val[1]);
        v53.val[0] = vsubq_f32(
            COERCE_AS(float32x4_t, GameData_1a837f0),
            vaddq_f32(vaddq_f32(v53.val[1], v53.val[1]), vaddq_f32(v49, v49)));
        LANES128(v54.val[1]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v55, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
                .n64_u64[0];
        LANES128(v53.val[1]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v55, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v54.val[1]).n128_i8[8] =
            vqtbl2_s8(v55, COERCE_AS(int8x8_t, 0x706050413121110LL));
        *(int8x8_t*)&LANES128(v53.val[1]).n128_i8[8] =
            vqtbl2_s8(v55, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
        v54.val[0] = v53.val[0];
        LANES128(v55.val[0]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v54, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v55.val[0]).n128_i8[8] =
            vqtbl2_s8(v54, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
        LANES128(v55.val[1]).n128_u64[0] =
            LANES64_OF(vqtbl2_s8(v54, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v55.val[1]).n128_i8[8] =
            vqtbl2_s8(v54, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
        LANES128(v54.val[0]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v53, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v54.val[0]).n128_i8[8] =
            vqtbl2_s8(v53, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
        result = vaddq_f32(
            vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v55.val[0], v21), v55.val[1],
                    COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]), 1),
                v54.val[0], result, 2),
            COERCE_AS(float32x4_t, 0));
      LABEL_34:
        *a1 = vmulq_f32(v32, result);
        result = vmulq_n_f32(result, a6[27]);
        *a2 = result;
        return result;
      }
    }
    else {
      if (v30 == 0) {
        v34 = 0;
        v35 = COERCE_AS(float32x4_t, GameData_1a82dd0);
        LANES128(v33).n128_u64[0] = 1065353216;
        LANES128(v32).n128_f32[2] = v31;
        goto LABEL_29;
      }
      if (v30 != 1) {
        v34 = 0;
        v35 = COERCE_AS(float32x4_t, GameData_1a83610);
        LANES128(v33).n128_u64[0] = 0x3F80000000000000LL;
        LANES128(v32).n128_f32[2] = v31;
      LABEL_29:
        if (LANES128(v35).n128_f32[0] == 0x0.0p+0f &&
            LANES128(v35).n128_f32[1] == 0x1.0000000000000p+0f) {
          goto LABEL_34;
        }
        goto LABEL_33;
      }
      v34 = 0;
      v35 = COERCE_AS(float32x4_t, GameData_1a82d00);
      LANES128(v33).n128_u64[0] = 3212836864LL;
    }
    LANES128(v32).n128_f32[2] = v31;
    if (LANES128(v35).n128_f32[2] == 0x0.0p+0f) {
      goto LABEL_29;
    }
    goto LABEL_33;
  }
  v26 = v22 +
        (float)(roundf(v22 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (v26 <= 0x1.921fb60000000p+0f) {
    v28 = 0x1.0000000000000p+0f;
    if (v26 >= -0x1.921fb60000000p+0f) {
      goto LABEL_14;
    }
    v27 = -0x1.921fb60000000p+1f;
  }
  else {
    v27 = 0x1.921fb60000000p+1f;
  }
  v26 = v27 - v26;
  v28 = -0x1.0000000000000p+0f;
LABEL_14:
  v29 = v26 * v26;
  if ((float)(v28 *
              (float)((float)((float)-(
                                  float)(*(float*)((char*)((__int128*)0x10LL) +
                                                   (_QWORD)GameData_212c188) -
                                         (float)((float)(*(float*)((char*)((
                                                                       _UNKNOWN**)0x8LL) +
                                                                   (_QWORD)
                                                                       GameData_212c188 +
                                                                   4) +
                                                         (float)((float)-(
                                                                     float)(*(float*)((char*)((
                                                                                          _UNKNOWN**)0x8LL) +
                                                                                      (_QWORD)
                                                                                          GameData_212c188) -
                                                                            (float)((float)(*((float*)
                                                                                                  GameData_212c188 +
                                                                                              1) -
                                                                                            (float)(*(float*)
                                                                                                        GameData_212c188 *
                                                                                                    v29)) *
                                                                                    v29)) *
                                                                 v29)) *
                                                 v29)) *
                              v29) +
                      0x1.0000000000000p+0f)) < v23) {
    goto LABEL_15;
  }
  return result;
}

float32x4_t game_5beb80(float32x4_t* a1, float32x4_t* a2, __int64 a3, int a4,
                        __int64 a5, float* a6)
{
  __int64 v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  signed int v13;
  char* v14;
  int v15;
  unsigned int v16;
  int v17;
  int v18;
  float* v19;
  float v20;
  float v21;
  float v22;
  float32x4_t v23;
  float32x4_t result;
  float v25;
  float v26;
  float v27;
  float v28;
  int v29;
  float v30;
  float32x4_t v31;
  int8x16_t v32;
  __int64 v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  int8x16_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  int8x16_t v43;
  float32x4_t v44;
  int8x16_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  int8x16x2_t v52;
  int8x16x2_t v53;
  int8x16x2_t v54;

  v6 = *(_QWORD*)(a3 + 160);
  v7 = a6[36];
  v8 = a6[37];
  v9 = a6[38];
  v10 = *(float*)(v6 + 2140);
  v11 = *(float*)(v6 + 2144);
  v12 = *(float*)(v6 + 2148);
  v13 = *(unsigned __int8*)(v6 + 2109);
  v14 = (char*)GameData_2136418[*(unsigned __int8*)(v6 + 2109) - 2];
  v15 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a3 + 568) + 16LL) + 2164LL);
  if (v15 == 2) {
    v17 = *(_DWORD*)(a3 + 56);
    a4 = v17 % v13;
    if (v17 + 1 < v13) {
      v18 = v17 + 1;
    }
    else {
      v18 = 0;
    }
    *(_DWORD*)(a3 + 56) = v18;
  }
  else if (v15 == 1) {
    v16 = *(_DWORD*)(a3 + 172);
    *(_DWORD*)(a3 + 172) = 1103515245 * v16 + 12345;
    a4 = (int)(float)(vcvts_n_f32_u32(v16, 0x20u) * (float)(unsigned int)v13);
  }
  v19 = (float*)&v14[12 * a4];
  v20 = *v19;
  v21 = *(float*)(v6 + 2116);
  v22 = v19[1];
  v23 = COERCE_AS(float32x4_t, *(unsigned int*)v19);
  LANES128(v23).n128_f32[1] = v22;
  result = v23;
  LANES128(result).n128_f32[2] = v19[2];
  if (v21 > 0x1.921c700000000p+1f) {
  LABEL_15:
    LANES128(v31).n128_u32[3] = 0;
    v29 = *(unsigned __int8*)(v6 + 2110);
    v30 = v12 * v9;
    LANES128(v31).n128_f32[0] = v10 * v7;
    LANES128(v31).n128_f32[1] = v11 * v8;
    LANES128(v32).n128_u64[0] = 0;
    if (v29 > 2) {
      if (v29 == 3) {
        v33 = 0;
        v34 = COERCE_AS(float32x4_t, GameData_1a82fa0);
        LANES128(v32).n128_u64[0] = 0xBF80000000000000LL;
        LANES128(v31).n128_f32[2] = v30;
        goto LABEL_29;
      }
      if (v29 == 4) {
        v34 = COERCE_AS(float32x4_t, GameData_1a83090);
        v33 = 1065353216;
        LANES128(v31).n128_f32[2] = v30;
        if (0x0.0p+0f == 0x1.0000000000000p+0f) {
          goto LABEL_29;
        }
        goto LABEL_33;
      }
      v33 = 0;
      v34 = (__typeof__(v34)){0};
      if (v29 == 5) {
        v34 = COERCE_AS(float32x4_t, GameData_1a82c50);
        v33 = 3212836864LL;
        LANES128(v31).n128_f32[2] = v30;
        if (0x0.0p+0f == -0x1.0000000000000p+0f) {
          goto LABEL_29;
        }
      LABEL_33:
        LANES128(v32).n128_u64[1] = v33;
        LANES128(v35).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                                 COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v36).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v35).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                      COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        LANES128(v37).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                                 COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v36).n128_i8[8] =
            vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        v38 = vmulq_f32(v35, v36);
        *(int8x8_t*)&LANES128(v37).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                      COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        LANES128(v36).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v36).n128_i8[8] =
            vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        v39 = vmulq_f32(v34, COERCE_AS(float32x4_t, GameData_1a83610));
        LANES128(v39).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v39, v39, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0])))
                .n64_u64[0];
        LANES128(v40).n128_u64[0] = 0x3F8000003F800000LL;
        LANES128(v40).n128_u64[1] = 0x3F8000003F800000LL;
        LANES128(v39).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0])))
                .n64_u64[0];
        LANES128(v39).n128_u64[1] = LANES128(v39).n128_u64[0];
        v41 = vaddq_f32(v39, v40);
        v42 = vsqrtq_f32(vaddq_f32(v41, v41));
        v43 = vdivq_f32(vmlsq_f32(v38, v36, v37), v42);
        LANES128(v38).n128_u64[0] = 0x3F0000003F000000LL;
        LANES128(v38).n128_u64[1] = 0x3F0000003F000000LL;
        LANES128(v43).n128_u32[3] =
            LANES128_OF(vmulq_f32(v42, v38)).n128_u32[3];
        LANES128(v42).n128_u64[0] = 0x3400000034000000LL;
        LANES128(v42).n128_u64[1] = 0x3400000034000000LL;
        v44 = vbslq_s8(vcgeq_f32(v42, v41),
                       COERCE_AS(int8x16_t, GameData_1a82dd0), v43);
        v45 = v44;
        LANES128(v45).n128_u32[3] = 0;
        LANES128(v41).n128_u64[0] =
            LANES64_OF(
                vrev64_s32(COERCE_AS(int32x2_t, LANES128(v44).n128_u64[0])))
                .n64_u64[0];
        LANES128(v42).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
                .n64_u64[0];
        LANES128(v46).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v47).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v41).n128_i8[8] =
            vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        *(int8x8_t*)&LANES128(v42).n128_i8[8] =
            vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        LANES128(v46).n128_u64[1] = LANES128(v41).n128_u64[1];
        LANES128(v47).n128_u64[1] = LANES128(v42).n128_u64[1];
        v48 = vmulq_f32(v41, v41);
        v52.val[1] = vmulq_f32(v42, v42);
        v49 = vmulq_f32(v46, v45);
        v50 = vmulq_laneq_f32(v47, v44, 3);
        v51 = vaddq_f32(v49, v49);
        v53.val[1] = vaddq_f32(v50, v50);
        v54.val[0] = vaddq_f32(v51, v53.val[1]);
        v54.val[1] = vsubq_f32(v51, v53.val[1]);
        v52.val[0] = vsubq_f32(
            COERCE_AS(float32x4_t, GameData_1a837f0),
            vaddq_f32(vaddq_f32(v52.val[1], v52.val[1]), vaddq_f32(v48, v48)));
        LANES128(v53.val[1]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v54, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
                .n64_u64[0];
        LANES128(v52.val[1]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v54, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v53.val[1]).n128_i8[8] =
            vqtbl2_s8(v54, COERCE_AS(int8x8_t, 0x706050413121110LL));
        *(int8x8_t*)&LANES128(v52.val[1]).n128_i8[8] =
            vqtbl2_s8(v54, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
        v53.val[0] = v52.val[0];
        LANES128(v54.val[0]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v53, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v54.val[0]).n128_i8[8] =
            vqtbl2_s8(v53, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
        LANES128(v54.val[1]).n128_u64[0] =
            LANES64_OF(vqtbl2_s8(v53, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v54.val[1]).n128_i8[8] =
            vqtbl2_s8(v53, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
        LANES128(v53.val[0]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v52, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v53.val[0]).n128_i8[8] =
            vqtbl2_s8(v52, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
        result = vaddq_f32(
            vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v54.val[0], v20), v54.val[1],
                    COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]), 1),
                v53.val[0], result, 2),
            COERCE_AS(float32x4_t, 0));
      LABEL_34:
        *a1 = vmulq_f32(v31, result);
        result = vmulq_n_f32(result, a6[27]);
        *a2 = result;
        return result;
      }
    }
    else {
      if (v29 == 0) {
        v33 = 0;
        v34 = COERCE_AS(float32x4_t, GameData_1a82dd0);
        LANES128(v32).n128_u64[0] = 1065353216;
        LANES128(v31).n128_f32[2] = v30;
        goto LABEL_29;
      }
      if (v29 != 1) {
        v33 = 0;
        v34 = COERCE_AS(float32x4_t, GameData_1a83610);
        LANES128(v32).n128_u64[0] = 0x3F80000000000000LL;
        LANES128(v31).n128_f32[2] = v30;
      LABEL_29:
        if (LANES128(v34).n128_f32[0] == 0x0.0p+0f &&
            LANES128(v34).n128_f32[1] == 0x1.0000000000000p+0f) {
          goto LABEL_34;
        }
        goto LABEL_33;
      }
      v33 = 0;
      v34 = COERCE_AS(float32x4_t, GameData_1a82d00);
      LANES128(v32).n128_u64[0] = 3212836864LL;
    }
    LANES128(v31).n128_f32[2] = v30;
    if (LANES128(v34).n128_f32[2] == 0x0.0p+0f) {
      goto LABEL_29;
    }
    goto LABEL_33;
  }
  v25 = v21 +
        (float)(roundf(v21 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (v25 <= 0x1.921fb60000000p+0f) {
    v27 = 0x1.0000000000000p+0f;
    if (v25 >= -0x1.921fb60000000p+0f) {
      goto LABEL_14;
    }
    v26 = -0x1.921fb60000000p+1f;
  }
  else {
    v26 = 0x1.921fb60000000p+1f;
  }
  v25 = v26 - v25;
  v27 = -0x1.0000000000000p+0f;
LABEL_14:
  v28 = v25 * v25;
  if ((float)(v27 *
              (float)((float)((float)-(
                                  float)(*(float*)((char*)((__int128*)0x10LL) +
                                                   (_QWORD)GameData_212c188) -
                                         (float)((float)(*(float*)((char*)((
                                                                       _UNKNOWN**)0x8LL) +
                                                                   (_QWORD)
                                                                       GameData_212c188 +
                                                                   4) +
                                                         (float)((float)-(
                                                                     float)(*(float*)((char*)((
                                                                                          _UNKNOWN**)0x8LL) +
                                                                                      (_QWORD)
                                                                                          GameData_212c188) -
                                                                            (float)((float)(*((float*)
                                                                                                  GameData_212c188 +
                                                                                              1) -
                                                                                            (float)(*(float*)
                                                                                                        GameData_212c188 *
                                                                                                    v28)) *
                                                                                    v28)) *
                                                                 v28)) *
                                                 v28)) *
                              v28) +
                      0x1.0000000000000p+0f)) < v22) {
    goto LABEL_15;
  }
  return result;
}

float32x4_t game_5bf040(float32x4_t* a1, float32x4_t* a2, __int64 a3, float a4,
                        __int64 a5, __int64 a6, float* a7)
{
  __int64 v7;
  unsigned int v8;
  float v9;
  float v10;
  __int64 v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  int v18;
  bool v19;
  float v20;
  unsigned int v21;
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
  unsigned int v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;
  int v60;
  int8x16_t v61;
  __int64 v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  int8x16_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  int8x16_t v72;
  float32x4_t v73;
  int8x16_t v74;
  float32x4_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  float32x4_t v79;
  float32x4_t v80;
  float32x4_t result;
  int8x16x2_t v82;
  int8x16x2_t v83;
  int8x16x2_t v84;

  v7 = *(_QWORD*)(a3 + 160);
  v8 = *(_DWORD*)(a3 + 172);
  v10 = a7[36];
  v9 = a7[37];
  v11 = 2116;
  v12 = vcvts_n_f32_u32(v8, 0x20u);
  v13 = *(float*)(v7 + 2140);
  v14 = *(float*)(v7 + 2144);
  v15 = *(float*)(v7 + 2148);
  v16 = a7[38];
  v17 = *(float*)(v7 + 2120);
  v18 = *(unsigned __int8*)(v7 + 2105);
  v19 = *(_BYTE*)(v7 + 2106) == 1;
  if (*(_BYTE*)(v7 + 2106) != 1) {
    v11 = 2112;
  }
  v20 = *(float*)(v7 + v11);
  v21 = 1103515245 * v8 + 12345;
  *(_DWORD*)(a3 + 172) = v21;
  if (!v19) {
    v24 = (float)(PSEUDO_UNFUSED(a4 * 0x1.921fb60000000p+1f)) +
          (float)(PSEUDO_UNFUSED(a4 * 0x1.921fb60000000p+1f));
    if (v18 == 0) {
      v24 = v17;
    }
    v22 = (float)((float)(v24 + (float)(v12 * v20)) +
                  (float)(PSEUDO_UNFUSED(v20 * -0x1.0000000000000p-1f))) +
          (float)(roundf((float)((float)(v24 + (float)(v12 * v20)) +
                                 (float)(PSEUDO_UNFUSED(
                                     v20 * -0x1.0000000000000p-1f))) *
                         0x1.45f3060000000p-3f) *
                  -0x1.921fb60000000p+2f);
    if (v22 <= 0x1.921fb60000000p+0f) {
      goto LABEL_10;
    }
  LABEL_6:
    v23 = 0x1.921fb60000000p+1f;
    goto LABEL_12;
  }
  v22 =
      (float)((float)(PSEUDO_UNFUSED(v12 * 0x1.921fb60000000p+1f)) +
              (float)(PSEUDO_UNFUSED(v12 * 0x1.921fb60000000p+1f))) +
      (float)(roundf(
                  (float)((float)(PSEUDO_UNFUSED(v12 * 0x1.921fb60000000p+1f)) +
                          (float)(PSEUDO_UNFUSED(v12 *
                                                 0x1.921fb60000000p+1f))) *
                  0x1.45f3060000000p-3f) *
              -0x1.921fb60000000p+2f);
  if (v22 > 0x1.921fb60000000p+0f) {
    goto LABEL_6;
  }
LABEL_10:
  v25 = 0x1.0000000000000p+0f;
  if (v22 < -0x1.921fb60000000p+0f) {
    v23 = -0x1.921fb60000000p+1f;
  LABEL_12:
    v25 = -0x1.0000000000000p+0f;
    v22 = v23 - v22;
  }
  v26 = v22 * v22;
  v27 = *((float*)GameData_212c188 + 1);
  v29 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v28 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v30 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  v31 = -(
      float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190) -
             (float)((float)(*(float*)((char*)((_UNKNOWN**)0x8LL) +
                                       (_QWORD)GameData_212c190 + 4) +
                             (float)((float)-(
                                         float)(*(float*)((char*)((
                                                              _UNKNOWN**)0x8LL) +
                                                          (_QWORD)
                                                              GameData_212c190) -
                                                (float)((float)(*((float*)
                                                                      GameData_212c190 +
                                                                  1) -
                                                                (float)(*(float*)
                                                                            GameData_212c190 *
                                                                        (float)(v22 *
                                                                                v22))) *
                                                        (float)(v22 * v22))) *
                                     (float)(v22 * v22))) *
                     (float)(v22 * v22)));
  v32 = -(
      float)(v30 -
             (float)((float)(v28 +
                             (float)((float)-(
                                         float)(v29 -
                                                (float)((float)(v27 -
                                                                (float)(*(float*)
                                                                            GameData_212c188 *
                                                                        (float)(v22 *
                                                                                v22))) *
                                                        (float)(v22 * v22))) *
                                     (float)(v22 * v22))) *
                     (float)(v22 * v22)));
  if (*(_BYTE*)(v7 + 2106) != 1) {
    v38 = vcvts_n_f32_u32(v21, 0x20u);
    v39 = -0x1.0000000000000p+0f;
    v40 = 0x1.0000000000000p+1f;
    v41 = 1103515245 * v21 + 12345;
    *(_DWORD*)(a3 + 172) = v41;
    goto LABEL_21;
  }
  v33 = -*(float*)GameData_212c188;
  v34 = -v30;
  v35 = -v29;
  v36 = *(float*)(v7 + 2116) +
        (float)(roundf(*(float*)(v7 + 2116) * 0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v36 > 0x1.921fb60000000p+0f) {
    v37 = 0x1.921fb60000000p+1f;
  LABEL_19:
    v36 = v37 - v36;
    v42 = -0x1.0000000000000p+0f;
    goto LABEL_20;
  }
  v42 = 0x1.0000000000000p+0f;
  if (v36 < -0x1.921fb60000000p+0f) {
    v37 = -0x1.921fb60000000p+1f;
    goto LABEL_19;
  }
LABEL_20:
  v43 = v36 * v36;
  v41 = 1103515245 * v21 + 12345;
  *(_DWORD*)(a3 + 172) = v41;
  v44 =
      v28 +
      (float)((float)(v35 + (float)((float)(v27 + (float)(v33 * v43)) * v43)) *
              v43);
  v39 = 0x1.0000000000000p+0f;
  v45 = v34 + (float)(v44 * v43);
  v40 = (float)v21 * -0x1.0000000000000p-32f;
  v38 = 0x1.0000000000000p+0f -
        (float)(PSEUDO_UNFUSED(
            v42 * (float)((float)(v45 * v43) + 0x1.0000000000000p+0f)));
LABEL_21:
  v46 = v39 + (float)(v38 * v40);
  v47 = (float)(v31 * v26) + 0x1.0000000000000p+0f;
  v48 = (float)(v32 * v26) + 0x1.0000000000000p+0f;
  v49 = 0x0.0p+0f;
  v50 = 0x1.0000000000000p+0f - (float)(v46 * v46);
  v51 = 0x0.0p+0f;
  if (v50 > 0x0.0p+0f) {
    v49 = sqrtf(v50);
    v41 = *(_DWORD*)(a3 + 172);
  }
  v52 = vcvts_n_f32_u32(v41, 0x20u);
  v53 = v22 * v47;
  v54 = v25 * v48;
  *(_DWORD*)(a3 + 172) = 1103515245 * v41 + 12345;
  if (v52 > 0x0.0p+0f) {
    v51 = sqrtf(v52);
  }
  LANES128(v58).n128_f32[0] = v53 * v49;
  v55 = *(float*)(v7 + 2128);
  v56 = v54 * v49;
  LANES128(v57).n128_u32[3] = 0;
  v58 = COERCE_AS(float32x4_t, LANES128(v58).n128_u32[0]);
  LANES128(v58).n128_f32[1] = v46;
  v59 = v58;
  LANES128(v59).n128_f32[2] = v56;
  if (*(_BYTE*)(v7 + 2106) != 1) {
    goto LABEL_45;
  }
  v60 = *(unsigned __int8*)(v7 + 2110);
  LANES128(v61).n128_u64[0] = 0;
  if (v60 > 2) {
    if (v60 == 3) {
      v62 = 0;
      v63 = COERCE_AS(float32x4_t, GameData_1a82fa0);
      LANES128(v61).n128_u64[0] = 0xBF80000000000000LL;
      goto LABEL_40;
    }
    if (v60 == 4) {
      v63 = COERCE_AS(float32x4_t, GameData_1a83090);
      v62 = 1065353216;
      if (0x0.0p+0f == 0x1.0000000000000p+0f) {
        goto LABEL_40;
      }
      goto LABEL_44;
    }
    v62 = 0;
    v63 = (__typeof__(v63)){0};
    if (v60 == 5) {
      v63 = COERCE_AS(float32x4_t, GameData_1a82c50);
      v62 = 3212836864LL;
      if (0x0.0p+0f == -0x1.0000000000000p+0f) {
        goto LABEL_40;
      }
    LABEL_44:
      LANES128(v61).n128_u64[1] = v62;
      LANES128(v64).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                               COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v65).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v61, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v64).n128_i8[8] =
          vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                    COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      LANES128(v66).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                               COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v65).n128_i8[8] =
          vqtbl1_s8(v61, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      v67 = vmulq_f32(v64, v65);
      *(int8x8_t*)&LANES128(v66).n128_i8[8] =
          vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                    COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      LANES128(v65).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v61, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v65).n128_i8[8] =
          vqtbl1_s8(v61, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      v68 = vmulq_f32(v63, COERCE_AS(float32x4_t, GameData_1a83610));
      LANES128(v68).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v68, v68, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0])))
              .n64_u64[0];
      LANES128(v69).n128_u64[0] = 0x3F8000003F800000LL;
      LANES128(v69).n128_u64[1] = 0x3F8000003F800000LL;
      LANES128(v68).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0])))
              .n64_u64[0];
      LANES128(v68).n128_u64[1] = LANES128(v68).n128_u64[0];
      v70 = vaddq_f32(v68, v69);
      v71 = vsqrtq_f32(vaddq_f32(v70, v70));
      v72 = vdivq_f32(vmlsq_f32(v67, v65, v66), v71);
      LANES128(v67).n128_u64[0] = 0x3F0000003F000000LL;
      LANES128(v67).n128_u64[1] = 0x3F0000003F000000LL;
      LANES128(v72).n128_u32[3] = LANES128_OF(vmulq_f32(v71, v67)).n128_u32[3];
      LANES128(v71).n128_u64[0] = 0x3400000034000000LL;
      LANES128(v71).n128_u64[1] = 0x3400000034000000LL;
      v73 = vbslq_s8(vcgeq_f32(v71, v70),
                     COERCE_AS(int8x16_t, GameData_1a82dd0), v72);
      v74 = v73;
      LANES128(v74).n128_u32[3] = 0;
      LANES128(v70).n128_u64[0] =
          LANES64_OF(
              vrev64_s32(COERCE_AS(int32x2_t, LANES128(v73).n128_u64[0])))
              .n64_u64[0];
      LANES128(v71).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v74, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
              .n64_u64[0];
      LANES128(v75).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v74, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v76).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v74, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v70).n128_i8[8] =
          vqtbl1_s8(v74, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      *(int8x8_t*)&LANES128(v71).n128_i8[8] =
          vqtbl1_s8(v74, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      LANES128(v75).n128_u64[1] = LANES128(v70).n128_u64[1];
      LANES128(v76).n128_u64[1] = LANES128(v71).n128_u64[1];
      v77 = vmulq_f32(v70, v70);
      v82.val[1] = vmulq_f32(v71, v71);
      v78 = vmulq_f32(v75, v74);
      v79 = vmulq_laneq_f32(v76, v73, 3);
      v80 = vaddq_f32(v78, v78);
      v83.val[1] = vaddq_f32(v79, v79);
      v84.val[0] = vaddq_f32(v80, v83.val[1]);
      v84.val[1] = vsubq_f32(v80, v83.val[1]);
      v82.val[0] = vsubq_f32(
          COERCE_AS(float32x4_t, GameData_1a837f0),
          vaddq_f32(vaddq_f32(v82.val[1], v82.val[1]), vaddq_f32(v77, v77)));
      LANES128(v83.val[1]).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v84, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
              .n64_u64[0];
      LANES128(v82.val[1]).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v84, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v83.val[1]).n128_i8[8] =
          vqtbl2_s8(v84, COERCE_AS(int8x8_t, 0x706050413121110LL));
      *(int8x8_t*)&LANES128(v82.val[1]).n128_i8[8] =
          vqtbl2_s8(v84, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
      v83.val[0] = v82.val[0];
      LANES128(v84.val[0]).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v83, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v84.val[0]).n128_i8[8] =
          vqtbl2_s8(v83, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
      LANES128(v84.val[1]).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v83, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v84.val[1]).n128_i8[8] =
          vqtbl2_s8(v83, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
      LANES128(v83.val[0]).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v82, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v83.val[0]).n128_i8[8] =
          vqtbl2_s8(v82, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
      v59 = vaddq_f32(
          vmlaq_laneq_f32(
              vmlaq_lane_f32(vmulq_n_f32(v84.val[0], LANES128(v58).n128_f32[0]),
                             v84.val[1],
                             COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0]),
                             1),
              v83.val[0], v59, 2),
          COERCE_AS(float32x4_t, 0));
      goto LABEL_45;
    }
  LABEL_39:
    if (LANES128(v63).n128_f32[2] == 0x0.0p+0f) {
      goto LABEL_40;
    }
    goto LABEL_44;
  }
  if (v60 == 0) {
    v62 = 0;
    v63 = COERCE_AS(float32x4_t, GameData_1a82dd0);
    LANES128(v61).n128_u64[0] = 1065353216;
    goto LABEL_40;
  }
  if (v60 == 1) {
    v62 = 0;
    v63 = COERCE_AS(float32x4_t, GameData_1a82d00);
    LANES128(v61).n128_u64[0] = 3212836864LL;
    goto LABEL_39;
  }
  v62 = 0;
  v63 = COERCE_AS(float32x4_t, GameData_1a83610);
  LANES128(v61).n128_u64[0] = 0x3F80000000000000LL;
LABEL_40:
  if (LANES128(v63).n128_f32[0] != 0x0.0p+0f ||
      LANES128(v63).n128_f32[1] != 0x1.0000000000000p+0f) {
    goto LABEL_44;
  }
LABEL_45:
  LANES128(v57).n128_f32[0] = v13 * v10;
  LANES128(v57).n128_f32[1] = v14 * v9;
  LANES128(v57).n128_f32[2] = v15 * v16;
  *a1 = vmulq_n_f32(vmulq_f32(v57, v59),
                    (float)((float)(v51 * v55) + 0x1.0000000000000p+0f) - v55);
  result = vmulq_n_f32(v59, a7[27]);
  *a2 = result;
  return result;
}

float game_5bf770(__int64 a1, _OWORD* a2, __int64 a3, __int64 a4, __int64 a5,
                  float* a6, float a7)
{
  unsigned int v10;
  float v11;
  float result;

  game_5bd9a0((_OWORD*)a1, a2, a3, a7, a4, a5, a6);
  v10 = *(_DWORD*)(a3 + 172);
  v11 = *(float*)(*(_QWORD*)(a3 + 160) + 2144LL) * a6[37];
  *(_DWORD*)(a3 + 172) = 1103515245 * v10 + 12345;
  result =
      v11 *
      (float)((float)(vcvts_n_f32_u32(v10, 0x20u) * 0x1.0000000000000p+1f) +
              -0x1.0000000000000p+0f);
  *(float*)(a1 + 4) = result;
  return result;
}

float game_5bf7f0(__int64 a1, float32x4_t* a2, __int64 a3, __int64 a4,
                  __int64 a5, float* a6, float a7)
{
  unsigned int v10;
  float v11;
  float result;

  game_5bdd90((_OWORD*)a1, a2, a3, a7, a4, a5, a6);
  v10 = *(_DWORD*)(a3 + 172);
  v11 = *(float*)(*(_QWORD*)(a3 + 160) + 2144LL) * a6[37];
  *(_DWORD*)(a3 + 172) = 1103515245 * v10 + 12345;
  result =
      v11 *
      (float)((float)(vcvts_n_f32_u32(v10, 0x20u) * 0x1.0000000000000p+1f) +
              -0x1.0000000000000p+0f);
  *(float*)(a1 + 4) = result;
  return result;
}

float32x4_t game_5bf870(float32x4_t* a1, float32x4_t* a2, __int64 a3,
                        __int64 a4, __int64 a5, float* a6)
{
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  float v10;
  unsigned int v11;
  float* v12;
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
  float32x4_t v23;
  float v24;
  float32x4_t v25;
  int8x16_t v26;
  float32x4_t result;
  int8x16_t v28;
  float32x4_t v29;
  float32x4_t v30;

  v6 = *(_DWORD*)(a3 + 172);
  v7 = 1103515245 * v6 + 12345;
  v8 = 1103515245 * v7 + 12345;
  v9 = 1103515245 * v8 + 12345;
  v10 = vcvts_n_f32_u32(v8, 0x20u);
  v11 = 1103515245 * v9 + 12345;
  *(_DWORD*)(a3 + 172) = 1103515245 * v11 + 12345;
  v12 = *(float**)(a3 + 160);
  v13 = (float)(vcvts_n_f32_u32(v11, 0x20u) * 0x1.0000000000000p+1f) +
        -0x1.0000000000000p+0f;
  v14 = v12[535] * a6[36];
  v15 = v14 *
        (float)((float)(v10 * 0x1.0000000000000p+1f) + -0x1.0000000000000p+0f);
  v16 = v12[536] * a6[37];
  v17 = v16 *
        (float)((float)(vcvts_n_f32_u32(v9, 0x20u) * 0x1.0000000000000p+1f) +
                -0x1.0000000000000p+0f);
  v18 = v12[537] * a6[38];
  v19 = -v14;
  if (v7 <= 0x7FFFFFFE) {
    v19 = v12[535] * a6[36];
  }
  v20 = -v16;
  v21 = v18 * v13;
  if (v7 <= 0x7FFFFFFE) {
    v20 = v12[536] * a6[37];
  }
  if (v6 <= 0xAAAAAAA9) {
    v22 = v15;
  }
  else {
    v22 = v19;
  }
  if (v6 > 0xAAAAAAA9) {
    v20 = v17;
  }
  if (v7 >= 0x7FFFFFFF) {
    v18 = -v18;
  }
  if (v6 <= 0x55555554) {
    v22 = v15;
  }
  LANES128(v23).n128_u32[3] = 0;
  if (v6 > 0x55555554) {
    v24 = v21;
  }
  else {
    v20 = v17;
    v24 = v18;
  }
  v25 = (__typeof__(v25)){0};
  LANES128(v23).n128_u64[0] = __PAIR64__(LODWORD(v20), LODWORD(v22));
  LANES128(v23).n128_f32[2] = v24;
  v26 = vceqzq_f32(v23);
  *a1 = v23;
  LANES128(v26).n128_u64[0] =
      LANES64_OF(
          vand_s8(COERCE_AS(int8x8_t,
                            LANES128_OF(vextq_s8(v26, v26, 8u)).n128_u64[0]),
                  COERCE_AS(int8x8_t, LANES128(v26).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(
          vand_s8(COERCE_AS(int8x8_t, LANES128(v26).n128_u64[0]),
                  vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v26).n128_u64[0]),
                                1)))
          .n64_u32[0] == 0) {
    v28 = vmulq_f32(v23, v23);
    LANES128(v28).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v28, v28, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
            .n64_u64[0];
    LANES128(v28).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
            .n64_u64[0];
    LANES128(v28).n128_u64[1] = LANES128(v28).n128_u64[0];
    v29 = vrsqrteq_f32(v28);
    v30 = vmulq_f32(v29, vrsqrtsq_f32(v29, vmulq_f32(v28, v29)));
    v25 = vbicq_s8(
        vmulq_f32(v23, vmulq_f32(v30, vrsqrtsq_f32(v30, vmulq_f32(v28, v30)))),
        vceqzq_f32(v28));
  }
  result = vmulq_n_f32(v25, a6[27]);
  *a2 = result;
  return result;
}

float32x4_t game_5bf9f0(int8x16_t* a1, float32x4_t* a2, __int64 a3, double a4,
                        long double a5, __int64 a6, __int64 a7, float* a8)
{
  float* v8;
  float v9;
  float v10;
  float32x4_t v11;
  float v12;
  float v13;
  float v14;
  unsigned int v15;
  float v16;
  unsigned int v17;
  float v18;
  float v19;
  unsigned int v20;
  float v21;
  float v22;
  float v23;
  float v24;
  bool v25;
  float v26;
  float32x4_t v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  int8x16_t v31;
  float32x4_t v32;
  float32x4_t v33;
  int8x16_t v34;
  float32x4_t result;
  int8x16_t v36;
  float32x4_t v37;
  float32x4_t v38;

  v8 = *(float**)(a3 + 160);
  v9 = v8[536] * a8[37];
  v10 = v8[537] * a8[38];
  LANES128(v11).n128_u32[3] = 0;
  LANES128(v11).n128_f32[0] = v8[535] * a8[36];
  v12 = v8[532];
  v13 = 0x1.ff7cee0000000p-1f;
  LODWORD(v8) = *(_DWORD*)(a3 + 172);
  v14 = 0x1.0000000000000p+0f - v12;
  v15 = 1103515245 * (_DWORD)v8 + 12345;
  v16 = vcvts_n_f32_u32((unsigned int)v8, 0x20u);
  v17 = 1103515245 * v15 + 12345;
  if (v14 != 0x1.0000000000000p+0f) {
    v13 = v14;
  }
  v18 = 0x1.0000000000000p+0f - v13;
  v19 = vcvts_n_f32_u32(v15, 0x20u);
  v20 = 1103515245 * v17 + 12345;
  v21 = v16 * (float)(0x1.0000000000000p+0f -
                      (float)(PSEUDO_UNFUSED(v13 * (float)(v13 * v13))));
  v22 = vcvts_n_f32_u32(v17, 0x20u);
  v23 = vcvts_n_f32_u32(v20, 0x20u);
  *(_DWORD*)(a3 + 172) = 1103515245 * v20 + 12345;
  if (v21 >= (float)(0x1.0000000000000p+0f - v13)) {
    v24 = v13 * v22;
    v25 = v21 < (float)(v18 + (float)(PSEUDO_UNFUSED(v13 * v18)));
    v26 = v13 * v19;
    v19 = v13 + (float)(v19 * v18);
    if (!v25) {
      v19 = v26;
      v23 = v13 + (float)(v23 * v18);
    }
  }
  else {
    v24 = v13 + (float)(v22 * v18);
  }
  LANES128(v11).n128_f32[1] = v9;
  LANES128(v27).n128_u64[0] = __PAIR64__(LODWORD(v24), LODWORD(v19));
  LANES128(v27).n128_u64[1] = LODWORD(v23);
  *a1 = v27;
  v28 = *(_DWORD*)(a3 + 172);
  v29 = 1103515245 * v28 + 12345;
  *(_DWORD*)(a3 + 172) = v29;
  if (vcvts_n_f32_u32(v28, 0x20u) < 0x1.0000000000000p-1f) {
    LANES128(*(a1)).n128_f32[0] = -LANES128(*(a1)).n128_f32[0];
    v29 = *(_DWORD*)(a3 + 172);
  }
  LANES128(v11).n128_f32[2] = v10;
  v30 = 1103515245 * v29 + 12345;
  *(_DWORD*)(a3 + 172) = v30;
  if (vcvts_n_f32_u32(v29, 0x20u) < 0x1.0000000000000p-1f) {
    LANES128(*(a1)).n128_f32[1] = -LANES128(*(a1)).n128_f32[1];
    v30 = *(_DWORD*)(a3 + 172);
  }
  *(float*)&a5 = vcvts_n_f32_u32(v30, 0x20u);
  LANES128(v27).n128_u32[0] = 0x1.0000000000000p-1f;
  *(_DWORD*)(a3 + 172) = 1103515245 * v30 + 12345;
  LANES128(v31).n128_u64[0] = LANES128(*(a1)).n128_u64[0];
  LANES128(v31).n128_u64[1] = LANES128_OF(vnegq_f32(*a1)).n128_u32[2];
  v32 = vmulq_f32(
      v11,
      vbslq_s8(
          vdupq_lane_s32(
              COERCE_AS(
                  int32x2_t,
                  LANES128_OF(vcgtq_f32(v27, *(float32x4_t*)&a5)).n128_u64[0]),
              0),
          v31, *a1));
  v33 = (__typeof__(v33)){0};
  v34 = vceqzq_f32(v32);
  *a1 = v32;
  LANES128(v34).n128_u64[0] =
      LANES64_OF(
          vand_s8(COERCE_AS(int8x8_t,
                            LANES128_OF(vextq_s8(v34, v34, 8u)).n128_u64[0]),
                  COERCE_AS(int8x8_t, LANES128(v34).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(
          vand_s8(COERCE_AS(int8x8_t, LANES128(v34).n128_u64[0]),
                  vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v34).n128_u64[0]),
                                1)))
          .n64_u32[0] == 0) {
    v36 = vmulq_f32(v32, v32);
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
    v33 = vbicq_s8(
        vmulq_f32(v32, vmulq_f32(v38, vrsqrtsq_f32(v38, vmulq_f32(v36, v38)))),
        vceqzq_f32(v36));
  }
  result = vmulq_n_f32(v33, a8[27]);
  *a2 = result;
  return result;
}

float game_5bfbf0(_OWORD* a1, _OWORD* a2, __int64 a3, __int64 a4, __int64 a5,
                  __int64 a6)
{
  __int64 v6;
  unsigned int v7;
  float v8;
  float v9;
  unsigned int v10;
  __int128 v11;
  __int128 v12;
  float result;

  v6 = *(_QWORD*)(a3 + 160);
  v7 = *(_DWORD*)(a3 + 172);
  v8 = *(float*)(a6 + 152);
  v9 = *(float*)(v6 + 2136);
  *(_DWORD*)(a3 + 172) = 1103515245 * v7 + 12345;
  *(float*)&v10 =
      (float)(PSEUDO_UNFUSED(
          (float)((float)(PSEUDO_UNFUSED(v9 * v8)) +
                  (float)(*(float*)(v6 + 2132) * (float)(v9 * v8))) *
          -0x1.0000000000000p-1f)) +
      (float)(vcvts_n_f32_u32(v7, 0x20u) * (float)(v9 * v8));
  *(_QWORD*)&v11 = 0;
  *((_QWORD*)&v11 + 1) = v10;
  *(_QWORD*)&v12 = 0;
  *a1 = v11;
  *((_QWORD*)&v12 + 1) = *(unsigned int*)(a6 + 108);
  *a2 = v12;
  LODWORD(result) = v12;
  return result;
}

float game_5bfc60(_OWORD* a1, _OWORD* a2, __int64 a3, int a4, float a5,
                  __int64 a6, __int64 a7)
{
  __int64 v7;
  float v8;
  float v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  float v16;
  float v17;
  float v18;
  unsigned int v19;
  __int128 v20;
  __int128 v21;
  float result;

  v7 = *(_QWORD*)(a3 + 160);
  v8 = *(float*)(a7 + 152);
  v9 = *(float*)(v7 + 2136);
  v10 = *(_DWORD*)(v7 + 2184);
  v11 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a3 + 568) + 16LL) + 2164LL);
  switch (v11) {
  case 2:
    v13 = *(_DWORD*)(a3 + 56);
    a4 = v13 % v10;
    if (v13 + 1 < v10) {
      v14 = v13 + 1;
    }
    else {
      v14 = 0;
    }
    *(_DWORD*)(a3 + 56) = v14;
    break;
  case 1:
    v12 = *(_DWORD*)(a3 + 172);
    *(_DWORD*)(a3 + 172) = 1103515245 * v12 + 12345;
    a4 = (int)(float)(vcvts_n_f32_u32(v12, 0x20u) * (float)v10);
    break;
  case 0:
    v10 -=
        (int)(float)((float)((float)(a5 * (float)*(unsigned int*)(v7 + 2188)) *
                             0x1.47ae140000000p-7f) *
                     (float)(unsigned int)v10);
    break;
  default:
    break;
  }
  v15 = v10 - 1;
  v16 = 0x0.0p+0f;
  v17 = 0x1.0000000000000p-1f;
  v18 = v9 * v8;
  if (v15 != 0) {
    v17 = 0x0.0p+0f;
    v16 = 0x1.0000000000000p+0f / (float)v15;
  }
  *(float*)&v19 = (float)(PSEUDO_UNFUSED(
                      (float)(v18 + (float)(*(float*)(v7 + 2132) * v18)) *
                      -0x1.0000000000000p-1f)) +
                  (float)((float)(v17 + (float)(v16 * (float)a4)) * v18);
  *(_QWORD*)&v20 = 0;
  *((_QWORD*)&v20 + 1) = v19;
  *(_QWORD*)&v21 = 0;
  *a1 = v20;
  *((_QWORD*)&v21 + 1) = *(unsigned int*)(a7 + 108);
  *a2 = v21;
  LODWORD(result) = v21;
  return result;
}

float32x4_t game_5bfd70(float32x4_t* a1, float32x4_t* a2, __int64 a3,
                        __int64 a4, __int64 a5, float* a6)
{
  __int64 v6;
  float v7;
  float v8;
  unsigned int v9;
  float v10;
  unsigned int v11;
  float v12;
  unsigned int v13;
  unsigned int v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float32x4_t v20;
  float32x4_t v21;
  int8x16_t v22;
  float32x4_t result;
  int8x16_t v24;
  float32x4_t v25;
  float32x4_t v26;

  v6 = *(_QWORD*)(a3 + 160);
  v7 = *(float*)(v6 + 2140) * a6[36];
  v8 = *(float*)(v6 + 2148);
  v9 = *(_DWORD*)(a3 + 172);
  v10 = -v7;
  v11 = 1103515245 * v9 + 12345;
  v12 = v8 * a6[38];
  v13 = 1103515245 * v11 + 12345;
  v14 = 1103515245 * v13 + 12345;
  v15 = vcvts_n_f32_u32(v13, 0x20u);
  *(_DWORD*)(a3 + 172) = 1103515245 * v14 + 12345;
  v16 = (float)(vcvts_n_f32_u32(v14, 0x20u) * 0x1.0000000000000p+1f) +
        -0x1.0000000000000p+0f;
  if (v11 <= 0x7FFFFFFE) {
    v10 = v7;
  }
  v17 = v12 * v16;
  v18 = v7 *
        (float)((float)(v15 * 0x1.0000000000000p+1f) + -0x1.0000000000000p+0f);
  if (v11 >= 0x7FFFFFFF) {
    v12 = -v12;
  }
  if (v9 <= 0x7FFFFFFE) {
    v19 = v18;
  }
  else {
    v19 = v10;
  }
  LANES128(v20).n128_u32[1] = 0;
  LANES128(v20).n128_u32[3] = 0;
  if (v9 <= 0x7FFFFFFE) {
    v17 = v12;
  }
  v21 = (__typeof__(v21)){0};
  LANES128(v20).n128_f32[0] = v19;
  LANES128(v20).n128_f32[2] = v17;
  v22 = vceqzq_f32(v20);
  *a1 = v20;
  LANES128(v22).n128_u64[0] =
      LANES64_OF(
          vand_s8(COERCE_AS(int8x8_t,
                            LANES128_OF(vextq_s8(v22, v22, 8u)).n128_u64[0]),
                  COERCE_AS(int8x8_t, LANES128(v22).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(
          vand_s8(COERCE_AS(int8x8_t, LANES128(v22).n128_u64[0]),
                  vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v22).n128_u64[0]),
                                1)))
          .n64_u32[0] == 0) {
    v24 = vmulq_f32(v20, v20);
    LANES128(v24).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v24, v24, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
            .n64_u64[0];
    LANES128(v24).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
            .n64_u64[0];
    LANES128(v24).n128_u64[1] = LANES128(v24).n128_u64[0];
    v25 = vrsqrteq_f32(v24);
    v26 = vmulq_f32(v25, vrsqrtsq_f32(v25, vmulq_f32(v24, v25)));
    v21 = vbicq_s8(
        vmulq_f32(v20, vmulq_f32(v26, vrsqrtsq_f32(v26, vmulq_f32(v24, v26)))),
        vceqzq_f32(v24));
  }
  result = vmulq_n_f32(v21, a6[27]);
  *a2 = result;
  return result;
}

float game_5c0040(long double* a1, _BYTE* a2, __int64 a3, long double a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  long double* v6;
  __int64 v7;
  _BYTE* v8;
  __int64 v9;
  __int64 v10;
  float v11;
  float v12;
  unsigned int* v13;
  float32x4_t v15;
  float32x4_t v16;

  v4 = *(int*)(a3 + 4);
  if ((_DWORD)v4 != 0) {
    if ((_DWORD)v4 == 1) {
      goto LABEL_6;
    }
    v5 = a3 + 16 * v4;
    if (*(_BYTE*)(a3 + 1) != 0) {
      v6 = a1;
      v7 = a3;
      v8 = a2;
      *(float*)&a4 = fmodf(*(float*)&a4, *(float*)(v5 + 8));
      a2 = v8;
      a3 = v7;
      a1 = v6;
    }
    if (*(float*)&a4 < *(float*)(a3 + 24)) {
    LABEL_6:
      *(_DWORD*)a1 = *(_DWORD*)(a3 + 12);
      *((_DWORD*)a1 + 1) = *(_DWORD*)(a3 + 16);
      LODWORD(a4) = *(_DWORD*)(a3 + 20);
      *((_DWORD*)a1 + 2) = LODWORD(a4);
    }
    else if (*(float*)(v5 + 8) <= *(float*)&a4) {
      *(_DWORD*)a1 = *(_DWORD*)(v5 - 4);
      *((_DWORD*)a1 + 1) = *(_DWORD*)v5;
      LODWORD(a4) = *(_DWORD*)(v5 + 4);
      *((_DWORD*)a1 + 2) = LODWORD(a4);
      *a2 = 1;
    }
    else {
      v9 = a3 + 20;
      v10 = ((unsigned int)v4 & ~((int)v4 >> 31)) + 1LL;
      while (--v10 != 0) {
        v11 = *(float*)(v9 + 4);
        v12 = *(float*)(v9 + 20);
        v13 = (unsigned int*)(v9 + 16);
        v9 += 16;
        if (v11 <= *(float*)&a4 && *(float*)&a4 < v12) {
          LANES128(v15).n128_u64[0] = *((_QWORD*)v13 - 3);
          LANES128(v15).n128_u64[1] = *(v13 - 4);
          LANES128(v16).n128_u64[0] = *((_QWORD*)v13 - 1);
          LANES128(v16).n128_u64[1] = *v13;
          a4 = COERCE_LONG_DOUBLE(vaddq_f32(
              v15,
              vmulq_n_f32(vsubq_f32(v16, v15),
                          (float)(*(float*)&a4 - v11) / (float)(v12 - v11))));
          *a1 = a4;
          break;
        }
      }
    }
  }
  return *(float*)&a4;
}

__int64 game_5c0350(int a1)
{
  unsigned __int64 v1;
  __int64 result;

  GameData_21a39c0 = a1;
  v1 = (8LL * a1 + 31) & 0xFFFFFFFFFFFFFFE0LL;
  GameData_21a39e0 = (__int64)X8CALL_X0(
      _QWORD*, (*(__attribute__((swiftcall)) void (**)(
                   PSEUDO_X8, __int64, unsigned __int64, __int64))(
                   *(_QWORD*)GameData_21a39c8 + 16LL))(
                   (void*)GameData_21a39c8, GameData_21a39c8, v1, 128));
  GameData_21a39d0 += v1;
  result = memset(GameData_21a39e0, 0, 8LL * GameData_21a39c0);
  GameData_21a39c4 = 0;
  return result;
}

float game_5c0500(float32x4_t* a1, float32x2_t* a2, float32x2_t* a3,
                  float32x2_t* a4, float32x2_t* a5, float a6)
{
  float v6;
  float32x4_t v7;
  float32x4_t v8;
  float32x4_t v9;
  float v10;
  float v11;
  float result;

  v6 = a6 * (float)(a6 * a6);
  v7 = vmlaq_n_f32(
      vmlaq_n_f32(
          vmlaq_n_f32(
              vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a838b0),
                          COERCE_FLOAT(*(_OWORD*)LANES64(*(a2)).n64_u64)),
              COERCE_AS(float32x4_t, GameData_1a835e0),
              COERCE_FLOAT(*(_OWORD*)LANES64(*(a4)).n64_u64)),
          COERCE_AS(float32x4_t, GameData_1a833e0),
          COERCE_FLOAT(*(_OWORD*)LANES64(*(a3)).n64_u64)),
      COERCE_AS(float32x4_t, GameData_1a83510),
      COERCE_FLOAT(*(_OWORD*)LANES64(*(a5)).n64_u64));
  v8 = vmlaq_lane_f32(
      vmlaq_lane_f32(
          vmlaq_lane_f32(
              vmulq_lane_f32(COERCE_AS(float32x4_t, GameData_1a838b0),
                             COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]),
                             1),
              COERCE_AS(float32x4_t, GameData_1a835e0),
              COERCE_AS(float32x2_t, LANES64(*(a4)).n64_u64[0]), 1),
          COERCE_AS(float32x4_t, GameData_1a833e0),
          COERCE_AS(float32x2_t, LANES64(*(a3)).n64_u64[0]), 1),
      COERCE_AS(float32x4_t, GameData_1a83510),
      COERCE_AS(float32x2_t, LANES64(*(a5)).n64_u64[0]), 1);
  v9 = vmlaq_laneq_f32(
      vmlaq_laneq_f32(
          vmlaq_laneq_f32(
              vmulq_laneq_f32(COERCE_AS(float32x4_t, GameData_1a838b0),
                              *(float32x4_t*)LANES64(*(a2)).n64_u64, 2),
              COERCE_AS(float32x4_t, GameData_1a835e0),
              *(float32x4_t*)LANES64(*(a4)).n64_u64, 2),
          COERCE_AS(float32x4_t, GameData_1a833e0),
          *(float32x4_t*)LANES64(*(a3)).n64_u64, 2),
      COERCE_AS(float32x4_t, GameData_1a83510),
      *(float32x4_t*)LANES64(*(a5)).n64_u64, 2);
  v10 = (float)(vmuls_lane_f32(a6 * a6,
                               COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]),
                               1) +
                (float)(LANES128(v9).n128_f32[0] * v6)) +
        (float)(a6 * LANES128(v9).n128_f32[2]);
  LANES128(v9).n128_f32[0] =
      LANES128(v7).n128_f32[3] +
      (float)((float)(vmuls_lane_f32(
                          a6 * a6,
                          COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0]), 1) +
                      (float)(LANES128(v7).n128_f32[0] * v6)) +
              (float)(a6 * LANES128(v7).n128_f32[2]));
  v11 =
      LANES128(v8).n128_f32[3] +
      (float)((float)(vmuls_lane_f32(
                          a6 * a6,
                          COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0]), 1) +
                      (float)(LANES128(v8).n128_f32[0] * v6)) +
              (float)(a6 * LANES128(v8).n128_f32[2]));
  result = LANES128(v9).n128_f32[3] + v10;
  LANES128(v9).n128_f32[1] = v11;
  LANES128(v9).n128_u64[1] =
      COERCE_UNSIGNED_INT(LANES128(v9).n128_f32[3] + v10);
  *a1 = v9;
  return result;
}

float32x4_t game_5c05c0(float32x4_t* a1, float32x2_t* a2, float32x4_t* a3,
                        float a4)
{
  float32x4_t v4;
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
  unsigned int v22;
  float32x4_t v23;
  unsigned int v24;
  float v25;
  unsigned int v26;
  unsigned int v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t result;

  v4 = *a3;
  v5 =
      a4 + (float)(roundf(a4 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (v5 <= 0x1.921fb60000000p+0f) {
    v7 = -0x1.921fb60000000p+1f - v5;
    v6 = 1.0f;
    if (v5 < -0x1.921fb60000000p+0f) {
      v6 = -1.0f;
    }
    v8 = *(float*)GameData_212c188;
    v9 = *((float*)GameData_212c188 + 1);
    v10 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
    v11 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
    v12 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
    if (v5 < -0x1.921fb60000000p+0f) {
      v5 = -0x1.921fb60000000p+1f - v5;
    }
    else {
      v7 = v5;
    }
  }
  else {
    v6 = -1.0f;
    v7 = 0x1.921fb60000000p+1f - v5;
    v8 = *(float*)GameData_212c188;
    v9 = *((float*)GameData_212c188 + 1);
    v10 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
    v11 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
    v12 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
    v5 = 0x1.921fb60000000p+1f - v5;
  }
  v13 = vmuls_lane_f32(LANES128(v4).n128_f32[0], v4, 2);
  v14 =
      v6 *
      (float)((float)((float)-(
                          float)(v12 -
                                 (float)((float)(v11 +
                                                 (float)((float)-(
                                                             float)(v10 -
                                                                    (float)((float)(v9 -
                                                                                    (float)(v8 *
                                                                                            (float)(v7 *
                                                                                                    v7))) *
                                                                            (float)(v7 *
                                                                                    v7))) *
                                                         (float)(v7 * v7))) *
                                         (float)(v7 * v7))) *
                      (float)(v7 * v7)) +
              1.0f);
  v15 = 1.0f - v14;
  v16 = vmuls_lane_f32(LANES128(v4).n128_f32[0],
                       COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0]), 1);
  v17 =
      v5 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c190) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c190 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c190) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c190 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c190 *
                                                                                            (float)(v5 *
                                                                                                    v5))) *
                                                                            (float)(v5 *
                                                                                    v5))) *
                                                         (float)(v5 * v5))) *
                                         (float)(v5 * v5))) *
                      (float)(v5 * v5)) +
              1.0f);
  v18 = vmuls_lane_f32(v17, v4, 2);
  v19 =
      vmuls_lane_f32(v17, COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0]), 1);
  v20 = v17 * LANES128(v4).n128_f32[0];
  v21 = -(float)(v18 - (float)(v16 * (float)(1.0f - v14)));
  *(float*)&v22 = v19 + (float)(v13 * (float)(1.0f - v14));
  LANES128(v23).n128_f32[0] =
      v14 +
      (float)(LANES128_OF(vmulq_f32(v4, v4)).n128_f32[0] * (float)(1.0f - v14));
  *(float*)&v24 = v18 + (float)(v16 * (float)(1.0f - v14));
  v25 = vmuls_lane_f32(LANES128(v4).n128_f32[1], v4, 2);
  *(float*)&v26 =
      v14 + (float)(vmuls_lane_f32(
                        LANES128(v4).n128_f32[1],
                        COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0]), 1) *
                    (float)(1.0f - v14));
  *(float*)&v27 =
      v14 + (float)(vmuls_lane_f32(LANES128(v4).n128_f32[2], v4, 2) *
                    (float)(1.0f - v14));
  LANES128(v23).n128_f32[1] = v21;
  LANES128(v28).n128_u64[0] = __PAIR64__(v26, v24);
  LANES128(v23).n128_u64[1] = v22;
  LANES128(v29).n128_f32[0] = -(float)(v19 - (float)(v13 * v15));
  LANES128(v29).n128_f32[1] = v20 + (float)(v25 * v15);
  LANES128(v28).n128_u64[1] =
      COERCE_UNSIGNED_INT(-(float)(v20 - (float)(v25 * v15)));
  LANES128(v29).n128_u64[1] = v27;
  result = vaddq_f32(
      vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(v23, COERCE_FLOAT(*(_OWORD*)LANES64(*(a2)).n64_u64)),
              v28, COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]), 1),
          v29, *(float32x4_t*)LANES64(*(a2)).n64_u64, 2),
      COERCE_AS(float32x4_t, 0));
  *a1 = result;
  return result;
}

void game_5c07e0(float a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                 int a6)
{
  int v6;
  int v7;
  int* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  float v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  float v17;
  float v18;
  unsigned int* v19;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;

  v6 = *(_DWORD*)(a5 + 12);
  v7 = v6 - 1;
  if (v6 == 1) {
    goto LABEL_9;
  }
  if (v6 == 0) {
    *(_DWORD*)(a3 + 8) = 0;
    *(_QWORD*)a3 = 0;
    return;
  }
  if (*(_DWORD*)(a5 + 4) != 0) {
    v8 = (int*)(a5 + 16);
    v9 = a3;
    v10 = a5;
    a1 =
        fmodf(a1 + (float)((float)(*(float*)(*(_QWORD*)(a4 + 496) + 16LL * a6) *
                                   (float)*(unsigned int*)(a5 + 8)) *
                           (float)*(int*)(a5 + 16)),
              (float)*(int*)(a5 + 16));
    a5 = v10;
    a3 = v9;
  }
  else {
    v8 = (int*)(*(_QWORD*)(a4 + 160) + 2232LL);
  }
  v11 = a5 + 16LL * v7;
  v12 = a1 / (float)*v8;
  if (*(float*)(v11 + 32) <= v12) {
    v14 = *(_DWORD*)(v11 + 20);
    v13 = v11 + 20;
    *(_DWORD*)a3 = v14;
    *(_DWORD*)(a3 + 4) = *(_DWORD*)(v13 + 4);
    *(_DWORD*)(a3 + 8) = *(_DWORD*)(v13 + 8);
  }
  else {
    if (v12 < *(float*)(a5 + 32)) {
    LABEL_9:
      *(_DWORD*)a3 = *(_DWORD*)(a5 + 20);
      *(_DWORD*)(a3 + 4) = *(_DWORD*)(a5 + 24);
      *(_DWORD*)(a3 + 8) = *(_DWORD*)(a5 + 28);
      return;
    }
    v15 = a5 + 28;
    v16 = (*(_DWORD*)(a5 + 12) & (unsigned int)~(*(int*)(a5 + 12) >> 31)) + 1LL;
    while (--v16 != 0) {
      v17 = *(float*)(v15 + 4);
      v18 = *(float*)(v15 + 20);
      v19 = (unsigned int*)(v15 + 16);
      v15 += 16;
      if (v17 <= v12 && v12 < v18) {
        LANES128(v21).n128_u64[0] = *((_QWORD*)v19 - 3);
        LANES128(v21).n128_u64[1] = *(v19 - 4);
        LANES128(v22).n128_u64[0] = *((_QWORD*)v19 - 1);
        LANES128(v22).n128_u64[1] = *v19;
        v23 = vaddq_f32(v21,
                        vmulq_n_f32(vsubq_f32(v22, v21),
                                    (float)(v12 - v17) / (float)(v18 - v17)));
        *(_QWORD*)a3 = LANES128(v23).n128_u64[0];
        *(_DWORD*)(a3 + 8) = LANES128(v23).n128_u32[2];
        return;
      }
    }
    *(_QWORD*)a3 = 0;
    *(_DWORD*)(a3 + 8) = 0;
  }
}

float game_5c0990(__int64 a1, float* a2, float* a3, __int64 a4, float a5,
                  __int64 a6, int a7)
{
  __int64 v11;
  float result;
  int32x4_t v13;
  __int64 v14;
  unsigned __int64 v15;
  float32x4_t v16;
  int8x16_t v17;
  unsigned __int64 v18;
  int32x4_t v19;
  int8x16_t v20;
  unsigned __int64 v21;
  int32x4_t v22;
  int32x4_t v23;
  __int64 v24;
  unsigned int* v25;
  unsigned int* v26;
  unsigned int* v27;
  __int128 v28;
  float v29;
  float v30;
  int8x16_t v31;
  int8x16_t v32;
  int32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  int32x4_t v43;
  int32x4_t v44;
  int32x4_t v45;
  int8x16_t v46;
  int8x16_t v47;
  int8x16_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  unsigned __int64 v52;
  float32x4_t v53;
  int8x16_t v54;
  float32x4_t v55;
  float32x4_t v56;
  int8x16_t v57;
  int8x16_t v58;
  float32x4_t v59;
  float32x4_t v60;
  int8x16_t v61;
  int8x16_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  int32x4_t v73;
  int32x4_t v74;
  int32x4_t v75;
  int32x4_t v76;
  int8x16_t v77;
  int8x16_t v78;
  int8x16_t v79;
  float32x4_t v80;
  float32x4_t v81;
  unsigned __int64 v82;
  float32x4_t v83;
  int8x16_t v84;
  int8x16_t v85;
  int8x16_t v86;
  float32x4_t v87;
  int8x16_t v88;
  struct {
    __int64 v89;
    int v90;
  } v89_;

  v11 = *(_QWORD*)(*(_QWORD*)(a4 + 568) + 600LL);
  if (*(_DWORD*)(v11 + 20) != 0) {
    v89_.v90 = 0;
    v89_.v89 = 0;
    game_5c07e0(a5, a1, (__int64)&v89_.v89, a4, v11 + 20, a7);
    result = *(float*)&v89_.v89;
    if (*(_BYTE*)v11 != 0) {
      goto LABEL_3;
    }
  }
  else {
    result = *(float*)(v11 + 4);
    if (*(_BYTE*)v11 != 0) {
    LABEL_3:
      v13 = *(int32x4_t*)(a4 + 880);
      if (*(_BYTE*)(*(_QWORD*)(a4 + 160) + 1875LL) == 1) {
        v14 = *(_QWORD*)(a4 + 528);
        v15 = 0;
        if (v14 != 0) {
          v16 = (__typeof__(v16)){0};
          LANES128(v17).n128_u64[0] = 0;
          v18 = 0;
          v19 = (__typeof__(v19)){0};
          LANES128(v20).n128_u64[0] = 0;
          v21 = 0;
          v22 = (__typeof__(v22)){0};
          v23 = (__typeof__(v23)){0};
          if (*(_DWORD*)(a4 + 40) >= a7) {
            v24 = 16LL * a7;
            v25 = (unsigned int*)(v14 + v24);
            v26 = (unsigned int*)(*(_QWORD*)(a4 + 536) + v24);
            v27 = (unsigned int*)(*(_QWORD*)(a4 + 544) + v24);
            v21 = v27[1];
            LANES128(v23).n128_u64[0] = *v25 | ((unsigned __int64)*v26 << 32);
            LANES128(v20).n128_u64[0] =
                v25[1] | ((unsigned __int64)v26[1] << 32);
            LANES128(v23).n128_u64[1] = *v27;
            LANES128(v22).n128_u64[0] = LANES128(v20).n128_u64[0];
            LANES128(v17).n128_u64[0] =
                v25[2] | ((unsigned __int64)v26[2] << 32);
            v15 = v25[3] | ((unsigned __int64)v26[3] << 32);
            LANES128(v22).n128_u64[1] = v21;
            LANES128(v19).n128_u64[0] = LANES128(v17).n128_u64[0];
            v18 = v27[2];
            LANES128(v19).n128_u64[1] = v18;
            v16 = vdupq_lane_s32(COERCE_AS(int32x2_t, v27[3]), 0);
          }
        }
        else {
          v16 = (__typeof__(v16)){0};
          LANES128(v17).n128_u64[0] = 0;
          v18 = 0;
          v19 = (__typeof__(v19)){0};
          LANES128(v20).n128_u64[0] = 0;
          v21 = 0;
          v22 = (__typeof__(v22)){0};
          v23 = (__typeof__(v23)){0};
        }
        LANES128(v20).n128_u64[1] = v21;
        LANES128(v17).n128_u64[1] = v18;
        LANES128(v64).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v65).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v64).n128_i8[8] =
            vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        *(int8x8_t*)&LANES128(v65).n128_i8[8] =
            vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        v66 = vmulq_f32(vmulq_f32(v23, v64), v65);
        LANES128(v65).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v65).n128_i8[8] =
            vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        v67 = vmulq_f32(v23, v65);
        LANES128(v65).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v65).n128_i8[8] =
            vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        v68 = vsubq_f32(v66, vmulq_f32(v67, v65));
        LANES128(v68).n128_u64[0] =
            LANES128_OF(vpaddq_f32(v68, v68)).n128_u64[0];
        v69 = vaddq_f32(
            vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v68).n128_u64[0]), 0),
            vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v68).n128_u64[0]), 1));
        v70 = vrecpeq_f32(v69);
        v71 = vmulq_f32(v70, vrecpsq_f32(v70, v69));
        v72 = vmulq_f32(v71, vrecpsq_f32(v71, v69));
        v73 = vzip1q_s32(v23, v19);
        v74 = vzip2q_s32(v23, v19);
        v75 = vzip1q_s32(v22, COERCE_AS(int32x4_t, 0LL));
        v76 = vzip2q_s32(v22, COERCE_AS(int32x4_t, 0LL));
        v77 = vzip2q_s32(v73, v75);
        v78 = vzip1q_s32(v74, v76);
        v79 = vzip1q_s32(v73, v75);
        LANES128(v65).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v77, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v74).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v78, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v80).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v78, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v81).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v79, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v65).n128_i8[8] =
            vqtbl1_s8(v77, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        v82 =
            LANES64_OF(vqtbl1_s8(v78, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v80).n128_i8[8] =
            vqtbl1_s8(v78, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        LANES128(v78).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v77, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v74).n128_u64[1] = v82;
        LANES128(v83).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v79, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v78).n128_i8[8] =
            vqtbl1_s8(v77, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        *(int8x8_t*)&LANES128(v83).n128_i8[8] =
            vqtbl1_s8(v79, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        *(int8x8_t*)&LANES128(v81).n128_i8[8] =
            vqtbl1_s8(v79, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        v84 = vmulq_f32(v72, vmlsq_f32(vmulq_f32(v65, v74), v78, v80));
        v85 = vmulq_f32(v72, vmlsq_f32(vmulq_f32(v80, v83), v74, v81));
        v86 = vmulq_f32(v72, vmlsq_f32(vmulq_f32(v78, v81), v83, v65));
        v87 = vmlsq_lane_f32(vmulq_n_f32(vnegq_f32(v84), *(float*)&v15), v85,
                             COERCE_AS(float32x2_t, v15), 1);
        v88 = vceqzq_f32(v69);
        v63 = vaddq_f32(
            vbicq_s8(vmlsq_f32(v87, v16, v86), v88),
            vmlaq_f32(
                vmlaq_f32(
                    vmulq_f32(
                        vdupq_lane_s32(
                            COERCE_AS(int32x2_t, LANES128(v13).n128_u64[0]), 0),
                        vbicq_s8(v84, v88)),
                    vdupq_lane_s32(
                        COERCE_AS(int32x2_t, LANES128(v13).n128_u64[0]), 1),
                    vbicq_s8(v85, v88)),
                vdupq_laneq_s32(v13, 2), vbicq_s8(v86, v88)));
        if (*(_BYTE*)(v11 + 1) != 0) {
          goto LABEL_18;
        }
      }
      else {
        v32 = *(int8x16_t*)(a4 + 848);
        v31 = *(int8x16_t*)(a4 + 864);
        v33 = *(int32x4_t*)(a4 + 832);
        LANES128(v34).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v34).n128_i8[8] =
            vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        LANES128(v35).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v35).n128_i8[8] =
            vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        v36 = vmulq_f32(vmulq_f32(v33, v34), v35);
        LANES128(v35).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v35).n128_i8[8] =
            vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        LANES128(v37).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v37).n128_i8[8] =
            vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        v38 = vsubq_f32(v36, vmulq_f32(vmulq_f32(v33, v35), v37));
        LANES128(v38).n128_u64[0] =
            LANES128_OF(vpaddq_f32(v38, v38)).n128_u64[0];
        v39 = vaddq_f32(
            vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v38).n128_u64[0]), 0),
            vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v38).n128_u64[0]), 1));
        v40 = vrecpeq_f32(v39);
        v41 = vmulq_f32(v40, vrecpsq_f32(v40, v39));
        v42 = vmulq_f32(v41, vrecpsq_f32(v41, v39));
        v43 = vzip1q_s32(v33, v31);
        v44 = vzip2q_s32(v33, v31);
        v45 = vzip1q_s32(v32, COERCE_AS(int32x4_t, 0));
        v46 = vzip2q_s32(v43, v45);
        v47 = vzip1q_s32(v44, vzip2q_s32(v32, COERCE_AS(int32x4_t, 0)));
        v48 = vzip1q_s32(v43, v45);
        LANES128(v49).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v32).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v50).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v51).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v49).n128_i8[8] =
            vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        v52 =
            LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v50).n128_i8[8] =
            vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        LANES128(v47).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v32).n128_u64[1] = v52;
        LANES128(v34).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v51).n128_i8[8] =
            vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        *(int8x8_t*)&LANES128(v47).n128_i8[8] =
            vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        *(int8x8_t*)&LANES128(v34).n128_i8[8] =
            vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        v53 = vmlsq_f32(vmulq_f32(v50, v34), v32, v51);
        v54 = vmulq_f32(v42, vmlsq_f32(vmulq_f32(v49, v32), v47, v50));
        v55 = vmlsq_f32(vmulq_f32(v47, v51), v34, v49);
        v56 = vdupq_laneq_s32(v13, 2);
        v57 = vmulq_f32(v42, v53);
        v58 = vmulq_f32(v42, v55);
        v59 =
            vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v13).n128_u64[0]), 0);
        v60 =
            vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v13).n128_u64[0]), 1);
        v61 = vmlsq_laneq_f32(
            vmlsq_lane_f32(
                vmulq_n_f32(vnegq_f32(v54), LANES128(v13).n128_f32[0]), v57,
                COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]), 1),
            v58, v13, 2);
        v62 = vceqzq_f32(v39);
        v63 = vaddq_f32(vbicq_s8(v61, v62),
                        vmlaq_f32(vmlaq_f32(vmulq_f32(v59, vbicq_s8(v54, v62)),
                                            v60, vbicq_s8(v57, v62)),
                                  v56, vbicq_s8(v58, v62)));
        if (*(_BYTE*)(v11 + 1) != 0) {
        LABEL_18:
          *a3 =
              *a3 + (float)((float)((float)((float)(LANES128(v63).n128_f32[0] +
                                                    *(float*)(v11 + 8)) -
                                            *a2) -
                                    *a3) *
                            result);
        }
      }
      if (*(_BYTE*)(v11 + 2) != 0) {
        a3[1] =
            a3[1] + (float)((float)((float)((float)(LANES128(v63).n128_f32[1] +
                                                    *(float*)(v11 + 12)) -
                                            a2[1]) -
                                    a3[1]) *
                            result);
      }
      if (*(_BYTE*)(v11 + 3) != 0) {
        v28 = *(_OWORD*)a3;
        LODWORD(v30) = *((_QWORD*)a3 + 1);
        v29 = LANES128(v63).n128_f32[2] + *(float*)(v11 + 16);
        goto LABEL_23;
      }
      return result;
    }
  }
  if (*(_BYTE*)(v11 + 1) != 0) {
    *a3 = *a3 +
          (float)((float)((float)(*(float*)(v11 + 8) - *a2) - *a3) * result);
  }
  if (*(_BYTE*)(v11 + 2) != 0) {
    a3[1] =
        a3[1] +
        (float)((float)((float)(*(float*)(v11 + 12) - a2[1]) - a3[1]) * result);
  }
  if (*(_BYTE*)(v11 + 3) != 0) {
    v28 = *(_OWORD*)a3;
    v29 = *(float*)(v11 + 16);
    LODWORD(v30) = *((_QWORD*)a3 + 1);
  LABEL_23:
    result = v30 + (float)((float)((float)(v29 - a2[2]) - v30) * result);
    *((_QWORD*)&v28 + 1) = LODWORD(result);
    *(_OWORD*)a3 = v28;
  }
  return result;
}

__int64 game_5c0ec0(__int64 result, float32x2_t* a2, __int64 a3, __int64 a4,
                    int a5, float a6)
{
  __int64 v6;
  float v7;
  __int64 v12;
  float v13;
  float v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  float v19;
  float v20;
  float v21;
  float v22;
  int v23;
  float v24;
  float v25;
  float v26;
  float v27;
  __int128 v28;
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
  struct {
    __int64 v39;
    int v40;
  } v39_;
  struct {
    __int64 v41;
    int v42;
  } v41_;

  v6 = *(_QWORD*)(a3 + 568);
  v7 = *(float*)(a3 + 76);
  v41_.v42 = 0;
  v41_.v41 = 0;
  v12 = *(_QWORD*)(v6 + 608);
  v13 = *(float*)(*(_QWORD*)(a4 + 24) + 16LL * a5 + 12);
  if (*(_DWORD*)(v12 + 12) != 0) {
    result = game_5c07e0_alt1(a6, result, (__int64)&v41_.v41, a3, v12 + 12, a5);
    v14 = *(float*)&v41_.v41 * 0x1.1df46a0000000p-6f;
    v15 = *(_QWORD*)(*(_QWORD*)(a3 + 568) + 608LL);
    v17 = *(_DWORD*)(v15 + 160);
    v16 = v15 + 160;
    *(float*)&v41_.v41 = *(float*)&v41_.v41 * 0x1.1df46a0000000p-6f;
    v39_.v40 = 0;
    v39_.v39 = 0;
    if (v17 != 0) {
    LABEL_3:
      result = game_5c07e0_alt1(a6, result, (__int64)&v39_.v39, a3, v16, a5);
      goto LABEL_6;
    }
  }
  else {
    v14 = *(float*)v12;
    v16 = v12 + 160;
    v18 = *(_DWORD*)(v12 + 160);
    LODWORD(v41_.v41) = *(_DWORD*)v12;
    v39_.v40 = 0;
    v39_.v39 = 0;
    if (v18 != 0) {
      goto LABEL_3;
    }
  }
  LODWORD(v39_.v39) = *(_DWORD*)(v12 + 8);
LABEL_6:
  v19 =
      (float)(PSEUDO_UNFUSED(v7 * (float)(v13 * v14))) +
      (float)(roundf((float)(v7 * (float)(v13 * v14)) * 0x1.45f3060000000p-3f) *
              -0x1.921fb60000000p+2f);
  if (v19 <= 0x1.921fb60000000p+0f) {
    v21 = 0x1.0000000000000p+0f;
    if (v19 >= -0x1.921fb60000000p+0f) {
      goto LABEL_11;
    }
    v20 = -0x1.921fb60000000p+1f;
  }
  else {
    v20 = 0x1.921fb60000000p+1f;
  }
  v19 = v20 - v19;
  v21 = -0x1.0000000000000p+0f;
LABEL_11:
  v22 =
      v19 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c190) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c190 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c190) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c190 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c190 *
                                                                                            (float)(v19 *
                                                                                                    v19))) *
                                                                            (float)(v19 *
                                                                                    v19))) *
                                                         (float)(v19 * v19))) *
                                         (float)(v19 * v19))) *
                      (float)(v19 * v19)) +
              0x1.0000000000000p+0f);
  v23 = *(_DWORD*)(v12 + 4);
  v24 =
      v21 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c188) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c188 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c188) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c188 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c188 *
                                                                                            (float)(v19 *
                                                                                                    v19))) *
                                                                            (float)(v19 *
                                                                                    v19))) *
                                                         (float)(v19 * v19))) *
                                         (float)(v19 * v19))) *
                      (float)(v19 * v19)) +
              0x1.0000000000000p+0f);
  v25 = *(float*)&v39_.v39;
  switch (v23) {
  case 2:
    v28 = *(_OWORD*)LANES64(*(a2)).n64_u64;
    v35 = vmuls_lane_f32(v22, COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]),
                         1) +
          (float)(COERCE_FLOAT(*(_OWORD*)LANES64(*(a2)).n64_u64) * v24);
    v36 = vmuls_lane_f32(v24, COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]),
                         1) -
          (float)(COERCE_FLOAT(*(_OWORD*)LANES64(*(a2)).n64_u64) * v22);
    *(_QWORD*)&v28 = __PAIR64__(LODWORD(v36), LODWORD(v35));
    *(_OWORD*)LANES64(*(a2)).n64_u64 = v28;
    if (v25 != 0x0.0p+0f) {
      v37 = (float)(PSEUDO_UNFUSED(v36 * v36)) + (float)(v35 * v35);
      if (v37 > 0x0.0p+0f) {
        v38 = v7 * (float)(v13 * (float)(v25 * (float)(0x1.0000000000000p+0f /
                                                       sqrtf(v37))));
        *(float*)&v28 = v35 + (float)(v35 * v38);
        *((float*)&v28 + 1) = v36 + (float)(v36 * v38);
        goto LABEL_23;
      }
    }
    break;
  case 1:
    v28 = *(_OWORD*)LANES64(*(a2)).n64_u64;
    v31 = (float)(PSEUDO_UNFUSED(
              v22 * COERCE_FLOAT(*(_OWORD*)LANES64(*(a2)).n64_u64))) +
          (float)(v24 * COERCE_FLOAT(LANES64(a2[1]).n64_u64[0]));
    v32 = (float)(PSEUDO_UNFUSED(
              v24 * COERCE_FLOAT(*(_OWORD*)LANES64(*(a2)).n64_u64))) -
          (float)(v22 * COERCE_FLOAT(LANES64(a2[1]).n64_u64[0]));
    *(float*)&v28 = v32;
    *((_QWORD*)&v28 + 1) = LODWORD(v31);
    *(_OWORD*)LANES64(*(a2)).n64_u64 = v28;
    if (v25 != 0x0.0p+0f) {
      v33 = (float)(PSEUDO_UNFUSED(v32 * v32)) + (float)(v31 * v31);
      if (v33 > 0x0.0p+0f) {
        v34 = v7 * (float)(v13 * (float)(v25 * (float)(0x1.0000000000000p+0f /
                                                       sqrtf(v33))));
        *(float*)&v28 = v32 + (float)(v32 * v34);
        *((float*)&v28 + 2) = v31 + (float)(v31 * v34);
        DWORD3(v28) = 0;
        goto LABEL_23;
      }
    }
    break;
  case 0:
    v28 = *(_OWORD*)LANES64(*(a2)).n64_u64;
    v26 = vmuls_lane_f32(v22, *(float32x4_t*)LANES64(*(a2)).n64_u64, 2) +
          (float)(v24 * COERCE_FLOAT(HIDWORD(LANES64(*(a2)).n64_u64[0])));
    v27 = vmuls_lane_f32(v24, *(float32x4_t*)LANES64(*(a2)).n64_u64, 2) -
          (float)(v22 * COERCE_FLOAT(HIDWORD(LANES64(*(a2)).n64_u64[0])));
    *((float*)&v28 + 1) = v26;
    *((_QWORD*)&v28 + 1) = LODWORD(v27);
    *(_OWORD*)LANES64(*(a2)).n64_u64 = v28;
    if (v25 != 0x0.0p+0f) {
      v29 = (float)(PSEUDO_UNFUSED(v27 * v27)) + (float)(v26 * v26);
      if (v29 > 0x0.0p+0f) {
        v30 = v7 * (float)(v13 * (float)(v25 * (float)(0x1.0000000000000p+0f /
                                                       sqrtf(v29))));
        *((float*)&v28 + 1) = v26 + (float)(v26 * v30);
        *((float*)&v28 + 2) = v27 + (float)(v27 * v30);
        DWORD3(v28) = 0;
      LABEL_23:
        *(_OWORD*)LANES64(*(a2)).n64_u64 = v28;
      }
    }
    break;
  default:
    break;
  }
  return result;
}

float game_5c1520(__int64 a1, _OWORD* a2, __int64 a3, __int64 a4, int a5,
                  float a6)
{
  float v6;
  __int64 v10;
  float v11;
  float v12;
  __int64 v13;
  unsigned __int64 v14;
  float32x4_t v15;
  int8x16_t v16;
  unsigned __int64 v17;
  int32x4_t v18;
  int8x16_t v19;
  unsigned __int64 v20;
  int32x4_t v21;
  int32x4_t v22;
  unsigned int* v23;
  unsigned int* v24;
  unsigned int* v25;
  float v26;
  float v27;
  float v28;
  __int128 v29;
  float v30;
  int32x4_t v31;
  int8x16_t v32;
  int8x16_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  int32x4_t v43;
  int32x4_t v44;
  int32x4_t v45;
  int8x16_t v46;
  int8x16_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  unsigned __int64 v51;
  int8x16_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  int32x4_t v66;
  int32x4_t v67;
  int32x4_t v68;
  int32x4_t v69;
  int8x16_t v70;
  int8x16_t v71;
  float32x4_t v72;
  float32x4_t v73;
  int8x16_t v74;
  float32x4_t v75;
  float32x4_t v76;
  int8x16_t v77;
  float32x4_t v78;
  float v79;
  float v80;
  float result;
  struct {
    __int64 v82;
    int v83;
  } v82_;

  v6 = *(float*)(a3 + 76);
  v10 = *(_QWORD*)(*(_QWORD*)(a3 + 568) + 624LL);
  v11 = *(float*)(*(_QWORD*)(a4 + 24) + 16LL * a5 + 12);
  if (*(_DWORD*)(v10 + 20) == 0) {
    v12 = *(float*)(v10 + 16);
    if (*(_BYTE*)v10 != 0) {
      goto LABEL_3;
    }
  LABEL_8:
    v29 = *a2;
    LODWORD(v26) = HIDWORD(*(_QWORD*)a2);
    v27 = COERCE_FLOAT(*a2) +
          (float)((float)(v11 * (float)(v12 * (float)(*(float*)(v10 + 4) -
                                                      COERCE_FLOAT(*a2)))) *
                  v6);
    LODWORD(v28) = *((_QWORD*)a2 + 1);
    *(float*)a2 = v27;
    *(float*)&v29 = v27;
    *((float*)&v29 + 1) =
        v26 + (float)((float)(v11 * (float)(v12 * (float)(*(float*)(v10 + 8) -
                                                          v26))) *
                      v6);
    *a2 = v29;
    v30 = *(float*)(v10 + 12);
    goto LABEL_13;
  }
  v82_.v83 = 0;
  v82_.v82 = 0;
  game_5c07e0(a6, a1, (__int64)&v82_.v82, a3, v10 + 20, a5);
  v12 = *(float*)&v82_.v82;
  if (*(_BYTE*)v10 == 0) {
    goto LABEL_8;
  }
LABEL_3:
  if (*(_BYTE*)(*(_QWORD*)(a3 + 160) + 1875LL) == 1) {
    v13 = *(_QWORD*)(a3 + 528);
    v14 = 0;
    if (v13 != 0) {
      v15 = (__typeof__(v15)){0};
      LANES128(v16).n128_u64[0] = 0;
      v17 = 0;
      v18 = (__typeof__(v18)){0};
      LANES128(v19).n128_u64[0] = 0;
      v20 = 0;
      v21 = (__typeof__(v21)){0};
      v22 = (__typeof__(v22)){0};
      if (*(_DWORD*)(a3 + 40) >= a5) {
        v23 = (unsigned int*)(v13 + 16LL * a5);
        v24 = (unsigned int*)(*(_QWORD*)(a3 + 536) + 16LL * a5);
        v25 = (unsigned int*)(*(_QWORD*)(a3 + 544) + 16LL * a5);
        v20 = v25[1];
        LANES128(v22).n128_u64[0] = *v23 | ((unsigned __int64)*v24 << 32);
        LANES128(v19).n128_u64[0] = v23[1] | ((unsigned __int64)v24[1] << 32);
        LANES128(v22).n128_u64[1] = *v25;
        LANES128(v21).n128_u64[0] = LANES128(v19).n128_u64[0];
        LANES128(v16).n128_u64[0] = v23[2] | ((unsigned __int64)v24[2] << 32);
        v14 = v23[3] | ((unsigned __int64)v24[3] << 32);
        LANES128(v21).n128_u64[1] = v20;
        LANES128(v18).n128_u64[0] = LANES128(v16).n128_u64[0];
        v17 = v25[2];
        LANES128(v18).n128_u64[1] = v17;
        v15 = vdupq_lane_s32(COERCE_AS(int32x2_t, v25[3]), 0);
      }
    }
    else {
      v15 = (__typeof__(v15)){0};
      LANES128(v16).n128_u64[0] = 0;
      v17 = 0;
      v18 = (__typeof__(v18)){0};
      LANES128(v19).n128_u64[0] = 0;
      v20 = 0;
      v21 = (__typeof__(v21)){0};
      v22 = (__typeof__(v22)){0};
    }
    LANES128(v19).n128_u64[1] = v20;
    LANES128(v16).n128_u64[1] = v17;
    LANES128(v58).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v59).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v58).n128_i8[8] =
        vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    *(int8x8_t*)&LANES128(v59).n128_i8[8] =
        vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v60 = vmulq_f32(vmulq_f32(v22, v58), v59);
    LANES128(v59).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v59).n128_i8[8] =
        vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v61 = vmulq_f32(v22, v59);
    LANES128(v59).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v59).n128_i8[8] =
        vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v62 = vsubq_f32(v60, vmulq_f32(v61, v59));
    LANES128(v62).n128_u64[0] = LANES128_OF(vpaddq_f32(v62, v62)).n128_u64[0];
    v39 = vaddq_f32(
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v62).n128_u64[0]), 0),
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v62).n128_u64[0]), 1));
    v63 = vrecpeq_f32(v39);
    v64 = vmulq_f32(v63, vrecpsq_f32(v63, v39));
    v65 = vmulq_f32(v64, vrecpsq_f32(v64, v39));
    v66 = vzip1q_s32(v22, v18);
    v67 = vzip2q_s32(v22, v18);
    v68 = vzip1q_s32(v21, COERCE_AS(int32x4_t, 0LL));
    v69 = vzip2q_s32(v21, COERCE_AS(int32x4_t, 0LL));
    v70 = vzip2q_s32(v66, v68);
    v71 = vzip1q_s32(v67, v69);
    LANES128(v59).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v70, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v67).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
            .n64_u64[0];
    LANES128(v72).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v59).n128_i8[8] =
        vqtbl1_s8(v70, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v73).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v72).n128_i8[8] =
        vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v71).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v70, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v73).n128_u64[1] = LANES128(v67).n128_u64[0];
    *(int8x8_t*)&LANES128(v71).n128_i8[8] =
        vqtbl1_s8(v70, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v74 = vzip1q_s32(v66, v68);
    LANES128(v68).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v74, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v75).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v74, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v75).n128_i8[8] =
        vqtbl1_s8(v74, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    *(int8x8_t*)&LANES128(v68).n128_i8[8] =
        vqtbl1_s8(v74, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v54 = vmulq_f32(v65, vmlsq_f32(vmulq_f32(v59, v73), v71, v72));
    v76 = vmlsq_f32(vmulq_f32(v72, v68), v73, v75);
    v56 = vmulq_f32(v65, vmlsq_f32(vmulq_f32(v71, v75), v68, v59));
    v55 = vmulq_f32(v65, v76);
    v57 = vmlsq_f32(vmlsq_lane_f32(vmulq_n_f32(vnegq_f32(v54), *(float*)&v14),
                                   v55, COERCE_AS(float32x2_t, v14), 1),
                    v15, v56);
  }
  else {
    v31 = *(int32x4_t*)(a3 + 832);
    v32 = *(int8x16_t*)(a3 + 848);
    v33 = *(int8x16_t*)(a3 + 864);
    LANES128(v34).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v34).n128_i8[8] =
        vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v35).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v35).n128_i8[8] =
        vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v36 = vmulq_f32(vmulq_f32(v31, v34), v35);
    LANES128(v35).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v35).n128_i8[8] =
        vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v37).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v37).n128_i8[8] =
        vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v38 = vsubq_f32(v36, vmulq_f32(vmulq_f32(v31, v35), v37));
    LANES128(v38).n128_u64[0] = LANES128_OF(vpaddq_f32(v38, v38)).n128_u64[0];
    v39 = vaddq_f32(
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v38).n128_u64[0]), 0),
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v38).n128_u64[0]), 1));
    v40 = vrecpeq_f32(v39);
    v41 = vmulq_f32(v40, vrecpsq_f32(v40, v39));
    v42 = vmulq_f32(v41, vrecpsq_f32(v41, v39));
    v43 = vzip1q_s32(v31, v33);
    v44 = vzip2q_s32(v31, v33);
    v45 = vzip1q_s32(v32, COERCE_AS(int32x4_t, 0));
    v46 = vzip2q_s32(v43, v45);
    v47 = vzip1q_s32(v44, vzip2q_s32(v32, COERCE_AS(int32x4_t, 0)));
    LANES128(v48).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v32).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v49).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v50).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v48).n128_i8[8] =
        vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v51 = LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
              .n64_u64[0];
    *(int8x8_t*)&LANES128(v49).n128_i8[8] =
        vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v47).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
            .n64_u64[0];
    v52 = vzip1q_s32(v43, v45);
    LANES128(v32).n128_u64[1] = v51;
    LANES128(v43).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v53).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v50).n128_u64[1] = LANES128(v47).n128_u64[0];
    *(int8x8_t*)&LANES128(v43).n128_i8[8] =
        vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    *(int8x8_t*)&LANES128(v53).n128_i8[8] =
        vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v54 = vmulq_f32(v42, vmlsq_f32(vmulq_f32(v48, v32), v50, v49));
    v55 = vmulq_f32(v42, vmlsq_f32(vmulq_f32(v49, v43), v32, v53));
    v56 = vmulq_f32(v42, vmlsq_f32(vmulq_f32(v50, v53), v43, v48));
    v57 = vmlsq_laneq_f32(
        vmlsq_lane_f32(
            vmulq_n_f32(vnegq_f32(v54), COERCE_FLOAT(*(_OWORD*)(a3 + 880))),
            v55, *(float32x2_t*)(a3 + 880), 1),
        v56, *(float32x4_t*)(a3 + 880), 2);
  }
  v77 = vceqzq_f32(v39);
  v29 = *a2;
  v78 = vaddq_f32(
      vbicq_s8(v57, v77),
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(vbicq_s8(v54, v77),
                                     COERCE_FLOAT(*(_OWORD*)(a3 + 944))),
                         vbicq_s8(v55, v77), *(float32x2_t*)(a3 + 944), 1),
          vbicq_s8(v56, v77), *(float32x4_t*)(a3 + 944), 2));
  LODWORD(v79) = HIDWORD(*(_QWORD*)a2);
  v80 =
      COERCE_FLOAT(*a2) +
      (float)((float)(v11 *
                      (float)(v12 * (float)((float)(*(float*)(v10 + 4) +
                                                    LANES128(v78).n128_f32[0]) -
                                            COERCE_FLOAT(*a2)))) *
              v6);
  LODWORD(v28) = *((_QWORD*)a2 + 1);
  *(float*)a2 = v80;
  *(float*)&v29 = v80;
  *((float*)&v29 + 1) =
      v79 +
      (float)((float)(v11 *
                      (float)(v12 * (float)((float)(*(float*)(v10 + 8) +
                                                    LANES128(v78).n128_f32[1]) -
                                            v79))) *
              v6);
  *a2 = v29;
  v30 = LANES128(v78).n128_f32[2] + *(float*)(v10 + 12);
LABEL_13:
  result = v28 + (float)((float)(v11 * (float)(v12 * (float)(v30 - v28))) * v6);
  *((_QWORD*)&v29 + 1) = LODWORD(result);
  *a2 = v29;
  return result;
}

void game_5c19f0(__int64 a1, float32x4_t* a2, __int64 a3, _QWORD* a4, int a5,
                 float a6, double a7, double a8, double a9, float32x4_t a10,
                 double a11, float32x4_t a12)
{
  __int64 v12;
  float v13;
  __int64 v18;
  float v19;
  int32x4_t v20;
  unsigned __int32* v21;
  unsigned __int32* v22;
  unsigned __int32* v23;
  float32x4_t v24;
  int8x16_t v25;
  float v26;
  int8x16_t v27;
  float v28;
  int8x16_t v29;
  int32x4_t v30;
  float v31;
  int32x4_t v32;
  int32x4_t v33;
  int32x4_t v34;
  float32x4_t v35;
  float v36;
  float v37;
  int32x4_t v38;
  int32x4_t v39;
  int32x4_t v40;
  float32x4_t v41;
  struct {
    __int64 v42;
    float v43;
  } v42_;

  v12 = *(_QWORD*)(a3 + 568);
  v13 = *(float*)(a3 + 76);
  v42_.v43 = 0x0.0p+0f;
  v42_.v42 = 0;
  v18 = *(_QWORD*)(v12 + 632);
  v19 = *(float*)(a4[3] + 16LL * a5 + 12);
  if (*(_DWORD*)(v18 + 16) != 0) {
    game_5c07e0(a6, a1, (__int64)&v42_.v42, a3, v18 + 16, a5);
    if (*(_BYTE*)v18 != 0) {
      goto LABEL_3;
    }
  }
  else {
    v42_.v42 = *(_QWORD*)(v18 + 4);
    v42_.v43 = *(float*)(v18 + 12);
    if (*(_BYTE*)v18 != 0) {
    LABEL_3:
      if (*(_BYTE*)(*(_QWORD*)(a3 + 160) + 1875LL) != 1) {
        v38 = *(int32x4_t*)(a3 + 896);
        v20 = *(int32x4_t*)(a3 + 912);
        v39 = *(int32x4_t*)(a3 + 928);
        v33 = vzip1q_s32(v38, v39);
        v34 = vzip2q_s32(v38, v39);
        goto LABEL_12;
      }
      LANES128(v24).n128_u32[3] = 0;
      v20 = (__typeof__(v20)){0};
      v21 = (unsigned __int32*)(a4[9] + 16LL * a5);
      v22 = (unsigned __int32*)(a4[10] + 16LL * a5);
      v23 = (unsigned __int32*)(a4[8] + 16LL * a5);
      LANES128(v24).n128_u32[0] = *v23;
      LANES128(v24).n128_u32[1] = *v21;
      LANES128(v24).n128_u32[2] = *v22;
      LANES128(a12).n128_u32[0] = v23[1];
      LANES128(a10).n128_u32[0] = v23[2];
      LANES128(a12).n128_u32[1] = v21[1];
      LANES128(a10).n128_u32[1] = v21[2];
      v25 = vmulq_f32(v24, v24);
      LANES128(a12).n128_u32[2] = v22[1];
      LANES128(a10).n128_u32[2] = v22[2];
      LANES128(v25).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v25, v25, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
              .n64_u64[0];
      v26 = LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]))))
                .n64_f32[0];
      v27 = vmulq_f32(a12, a12);
      LANES128(v27).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v27, v27, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
              .n64_u64[0];
      LODWORD(v28) =
          LANES64_OF(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]))))
              .n64_u32[0];
      v29 = vmulq_f32(a10, a10);
      LANES128(v29).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v29, v29, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0])))
              .n64_u64[0];
      v30 = (__typeof__(v30)){0};
      LODWORD(v31) =
          LANES64_OF(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0]))))
              .n64_u32[0];
      if (v26 > 0x0.0p+0f) {
        v30 = vmulq_n_f32(v24, 0x1.0000000000000p+0f / v26);
        if (v28 <= 0x0.0p+0f) {
        LABEL_6:
          v32 = (__typeof__(v32)){0};
          if (v31 <= 0x0.0p+0f) {
          LABEL_8:
            v33 = vzip1q_s32(v30, v32);
            v34 = vzip2q_s32(v30, v32);
          LABEL_12:
            v40 = vzip1q_s32(v20, COERCE_AS(int32x4_t, 0));
            v35 = vaddq_f32(
                vmlaq_n_f32(
                    vmlaq_n_f32(
                        vmulq_n_f32(vzip1q_s32(v33, v40),
                                    v13 * (float)(v19 * *(float*)&v42_.v42)),
                        vzip2q_s32(v33, v40),
                        v13 * (float)(v19 * *((float*)&v42_.v42 + 1))),
                    vzip1q_s32(v34, vzip2q_s32(v20, COERCE_AS(int32x4_t, 0))),
                    v13 * (float)(v19 * v42_.v43)),
                *a2);
            v36 = LANES128(v35).n128_f32[1];
            v37 = LANES128(v35).n128_f32[2];
            goto LABEL_13;
          }
        LABEL_7:
          v32 = vmulq_n_f32(a10, 0x1.0000000000000p+0f / v31);
          goto LABEL_8;
        }
      }
      else if (v28 <= 0x0.0p+0f) {
        goto LABEL_6;
      }
      v20 = vmulq_n_f32(a12, 0x1.0000000000000p+0f / v28);
      v32 = (__typeof__(v32)){0};
      if (v31 <= 0x0.0p+0f) {
        goto LABEL_8;
      }
      goto LABEL_7;
    }
  }
  LANES128(v35).n128_f32[0] =
      COERCE_FLOAT(*a2) + (float)((float)(v19 * *(float*)&v42_.v42) * v13);
  v36 = COERCE_FLOAT(HIDWORD(LANES128(*(a2)).n128_u64[0])) +
        (float)((float)(v19 * *((float*)&v42_.v42 + 1)) * v13);
  v37 = COERCE_FLOAT(LANES128(*(a2)).n128_u64[1]) +
        (float)((float)(v19 * v42_.v43) * v13);
LABEL_13:
  LANES128(v41).n128_u64[0] =
      __PAIR64__(LODWORD(v36), LANES128(v35).n128_u32[0]);
  LANES128(v41).n128_u64[1] = LODWORD(v37);
  *a2 = v41;
}

void game_5c1c50(__int64 a1, float32x2_t* a2, float32x4_t* a3, __int64 a4,
                 float* a5, int32x4_t* a6, int a7, float32x4_t* a8, float a9,
                 long double a10, double a11, long double a12, float32x4_t a13,
                 long double a14, float32x4_t a15, float32x4_t* a16)
{
  unsigned __int64 v23;
  float32x4_t v24;
  float32x4_t v25;
  float v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  float v30;
  float v31;
  float v32;
  int32x4_t v33;
  unsigned __int32* v34;
  unsigned __int32* v35;
  unsigned __int32* v36;
  float32x4_t v37;
  int8x16_t v38;
  float v39;
  int8x16_t v40;
  float v41;
  int8x16_t v42;
  int32x4_t v43;
  float v44;
  int32x4_t v45;
  int32x4_t v46;
  int32x4_t v47;
  int32x4_t v48;
  int32x4_t v49;
  float32x4_t v50;
  __int64 v51;
  int v52;
  unsigned __int64 v53;
  unsigned __int32 v54;
  __int64 v55;
  int v56;
  unsigned __int16 v57;
  float v58;
  __int64 v59;
  float32x4_t v60;
  __int64 v61;
  float v62;
  void (*v63)(float32x2_t*, float32x4_t*, float*, __int64, int32x4_t*,
              int32x4_t*);
  unsigned int v64;
  __int64 v65;
  float32x4_t v66;
  struct {
    unsigned __int64 v67;
    unsigned __int32 v68;
  } v67_;

  LODWORD(a10) = LANES128(a6[4]).n128_u32[3];
  v23 = LANES128(a6[11]).n128_u64[0];
  v65 = *(_QWORD*)&a10;
  v24 = *a8;
  v25 = vaddq_f32(
      *a8,
      vmulq_n_f32(*a16, *(float*)&a10 * *(float*)(LANES128(a6[30]).n128_u64[1] +
                                                  16LL * a7 + 12)));
  LANES128(v24).n128_u32[0] = 0x1.0000000000000p+0f;
  *(float32x4_t*)LANES64(*(a2)).n64_u64 = v25;
  LANES128(v25).n128_u32[0] =
      *(_DWORD*)(*(_QWORD*)(LANES128(a6[35]).n128_u64[1] + 24) + 112LL);
  if (LANES128(v25).n128_f32[0] == 0x1.0000000000000p+0f) {
    *a3 = *a16;
    LANES128(v25).n128_u32[0] = LANES128(a6[105]).n128_u32[3];
    v27 = a7;
    if (LANES128(v25).n128_f32[0] <= 0x0.0p+0f) {
    LABEL_3:
      v28 = LANES128(a6[35]).n128_u64[1];
      if (*(_BYTE*)(v28 + 3) != 1) {
        return;
      }
      goto LABEL_17;
    }
  }
  else {
    v26 = powf(a1, LANES128(v25).n128_f32[0], *(float*)&a10);
    a10 = *(long double*)a16;
    v25 = vmulq_n_f32(*a16, v26);
    *a3 = v25;
    LANES128(v25).n128_u32[0] = LANES128(a6[105]).n128_u32[3];
    v27 = a7;
    if (LANES128(v25).n128_f32[0] <= 0x0.0p+0f) {
      goto LABEL_3;
    }
  }
  v29 = LANES128(a6[10]).n128_u64[0];
  v30 = LANES128(v25).n128_f32[0] * *(float*)(v29 + 2072);
  v31 = LANES128(v25).n128_f32[0] * *(float*)(v29 + 2076);
  v32 = LANES128(v25).n128_f32[0] * *(float*)(v29 + 2080);
  if (*(_BYTE*)(v29 + 2033) == 0) {
    *(_QWORD*)&a14 = v65;
    LANES128(v24).n128_f32[0] =
        COERCE_FLOAT(*a3) + (float)(*(float*)&v65 * v30);
    LANES128(a13).n128_u32[0] = HIDWORD(LANES128(*(a3)).n128_u64[0]);
    *(float*)&a10 = LANES128(a13).n128_f32[0] + (float)(*(float*)&v65 * v31);
    LANES128(v25).n128_f32[0] = COERCE_FLOAT(LANES128(*(a3)).n128_u64[1]) +
                                (float)(*(float*)&v65 * v32);
    goto LABEL_16;
  }
  if (*(_BYTE*)(v29 + 1875) != 1) {
    v47 = a6[56];
    v33 = a6[57];
    v48 = a6[58];
    v46 = vzip1q_s32(v47, v48);
    a14 = COERCE_LONG_DOUBLE(vzip2q_s32(v47, v48));
    goto LABEL_15;
  }
  LANES128(v37).n128_u32[3] = 0;
  v33 = (__typeof__(v33)){0};
  v34 = (unsigned __int32*)(LANES128(a6[33]).n128_u64[1] + 16 * v27);
  v35 = (unsigned __int32*)(LANES128(a6[34]).n128_u64[0] + 16 * v27);
  v36 = (unsigned __int32*)(LANES128(a6[33]).n128_u64[0] + 16 * v27);
  LANES128(v37).n128_u32[0] = *v36;
  LANES128(v37).n128_u32[1] = *v34;
  LANES128(v37).n128_u32[2] = *v35;
  LANES128(a15).n128_u32[0] = v36[1];
  LANES128(a13).n128_u32[0] = v36[2];
  LANES128(a15).n128_u32[1] = v34[1];
  LANES128(a13).n128_u32[1] = v34[2];
  v38 = vmulq_f32(v37, v37);
  LANES128(a15).n128_u32[2] = v35[1];
  LANES128(a13).n128_u32[2] = v35[2];
  LANES128(v38).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v38, v38, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0])))
          .n64_u64[0];
  v39 = LANES64_OF(vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]))))
            .n64_f32[0];
  v40 = vmulq_f32(a15, a15);
  LANES128(v40).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v40, v40, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
          .n64_u64[0];
  LODWORD(v41) =
      LANES64_OF(vsqrt_f32(vpadd_f32(
                     COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]))))
          .n64_u32[0];
  v42 = vmulq_f32(a13, a13);
  LANES128(v42).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v42, v42, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0])))
          .n64_u64[0];
  v43 = (__typeof__(v43)){0};
  LODWORD(v44) =
      LANES64_OF(vsqrt_f32(vpadd_f32(
                     COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0]))))
          .n64_u32[0];
  if (v39 <= 0x0.0p+0f) {
    if (v41 <= 0x0.0p+0f) {
      goto LABEL_10;
    }
  LABEL_46:
    v33 = vmulq_n_f32(a15, 0x1.0000000000000p+0f / v41);
    v45 = (__typeof__(v45)){0};
    if (v44 <= 0x0.0p+0f) {
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  v43 = vmulq_n_f32(v37, 0x1.0000000000000p+0f / v39);
  if (v41 > 0x0.0p+0f) {
    goto LABEL_46;
  }
LABEL_10:
  v45 = (__typeof__(v45)){0};
  if (v44 > 0x0.0p+0f) {
  LABEL_11:
    v45 = vmulq_n_f32(a13, 0x1.0000000000000p+0f / v44);
  }
LABEL_12:
  v46 = vzip1q_s32(v43, v45);
  a14 = COERCE_LONG_DOUBLE(vzip2q_s32(v43, v45));
LABEL_15:
  v49 = vzip1q_s32(v33, COERCE_AS(int32x4_t, 0));
  a15 = vzip1q_s32(v46, v49);
  a13 = vzip2q_s32(v46, v49);
  v50 = vmlaq_n_f32(vmulq_n_f32(a15, v30), a13, v31);
  a10 = *(long double*)a3;
  v25 = vmulq_n_f32(
      vmlaq_n_f32(v50,
                  vzip1q_s32(*(int32x4_t*)&a14,
                             vzip2q_s32(v33, COERCE_AS(int32x4_t, 0))),
                  v32),
      *(float*)&v65);
  v24 = vaddq_f32(*a3, v25);
  LODWORD(a10) = LANES128(v24).n128_u32[1];
  LANES128(v25).n128_u32[0] = LANES128(v24).n128_u32[2];
LABEL_16:
  *(_QWORD*)&a12 = __PAIR64__(LODWORD(a10), LANES128(v24).n128_u32[0]);
  *((_QWORD*)&a12 + 1) = LANES128(v25).n128_u32[0];
  *(long double*)a3 = a12;
  v28 = LANES128(a6[35]).n128_u64[1];
  if (*(_BYTE*)(v28 + 3) != 1) {
    return;
  }
LABEL_17:
  if (*(_QWORD*)(v28 + 616) != 0) {
    GameRoutine_5c11f0(a9, a1, a2, (float32x2_t*)a3, a5, a6,
                       (int32x4_t*)LANES128(a6[29]).n128_u64, a7,
                       v23 + 32 * v27);
    v28 = LANES128(a6[35]).n128_u64[1];
  }
  v51 = *(_QWORD*)(v28 + 584);
  if (v51 != 0) {
    v52 = *(_DWORD*)(v51 + 60);
    v67_.v68 = 0;
    v67_.v67 = 0;
    if (v52 != 0) {
      game_5c07e0(a9, a1, (__int64)&v67_.v67, (__int64)a6, v51 + 60, a7);
    }
    else {
      v53 = *(_QWORD*)(v51 + 4);
      v54 = *(_DWORD*)(v51 + 12);
      v67_.v67 = v53;
      v67_.v68 = v54;
    }
    LANES128(v25).n128_u64[0] = v67_.v67;
    LANES128(v25).n128_u32[2] = v67_.v68;
    v66 = v25;
    LANES128(v25).n128_f32[0] = game_5c4340(
        (__int128*)a2, (__int64)a6, (__int64)&a6[29], a7, (float*)&v66, a9);
    v28 = LANES128(a6[35]).n128_u64[1];
  }
  v55 = *(_QWORD*)(v28 + 592);
  if (v55 == 0) {
    goto LABEL_29;
  }
  v56 = *(_DWORD*)(v55 + 16);
  LANES128(v66).n128_u32[2] = 0;
  LANES128(v66).n128_u64[0] = 0;
  if (v56 == 0) {
    LANES128(v66).n128_u64[0] = *(_QWORD*)v55;
    v64 = *(_DWORD*)(v55 + 12);
    LANES128(v66).n128_u32[2] = *(_DWORD*)(v55 + 8);
    if ((unsigned int)a9 % v64 != 0) {
      goto LABEL_28;
    }
    goto LABEL_27;
  }
  game_5c07e0(a9, a1, (__int64)&v66, (__int64)a6, v55 + 16, a7);
  if ((unsigned int)a9 % *(_DWORD*)(v55 + 12) == 0) {
  LABEL_27:
    v57 = LANES128(a6[10]).n128_u16[4];
    LODWORD(a12) = LANES128(v66).n128_u32[1];
    v58 = LANES128(v66).n128_f32[0];
    v59 = GameData_21a3a08;
    LANES128(a6[10]).n128_u16[4] = v57 + 1;
    v60 = *a3;
    v61 = v59 + 16LL * (v57 & 0x1FF);
    a10 = *(long double*)v61;
    LANES128(a13).n128_f32[0] = COERCE_FLOAT(LANES128(*(a3)).n128_u64[1]);
    *(float*)&a10 =
        COERCE_FLOAT(*a3) + (float)(COERCE_FLOAT(*(_OWORD*)v61) * v58);
    LODWORD(v62) = HIDWORD(LANES128(*(a3)).n128_u64[0]);
    LANES128(*(a3)).n128_u32[0] = LODWORD(a10);
    LANES128(v25).n128_u32[0] = LODWORD(a10);
    *(float*)&a10 = v62 + (float)(*(float*)(v61 + 4) * *(float*)&a12);
    LANES128(v24).n128_u32[0] = LANES128(v66).n128_u32[2];
    LANES128(v25).n128_u32[1] = LODWORD(a10);
    *a3 = v25;
    *(float*)&a10 = LANES128(a13).n128_f32[0] +
                    (float)(*(float*)(v61 + 8) * LANES128(v24).n128_f32[0]);
    LANES128(v25).n128_f32[2] = *(float*)&a10;
    LANES128(v25).n128_u32[3] = 0;
    *a3 = v25;
  }
LABEL_28:
  v28 = LANES128(a6[35]).n128_u64[1];
LABEL_29:
  if (*(_QWORD*)(v28 + 600) != 0) {
    LANES128(v25).n128_f32[0] = game_5c0990(a1, (float*)a2, (float*)a3,
                                            (__int64)a6, a9, (__int64)a5, a7);
    v28 = LANES128(a6[35]).n128_u64[1];
  }
  if (*(_QWORD*)(v28 + 608) != 0) {
    game_5c0ec0_alt1(a1, a2, (__int64)a6, (__int64)&a6[29], a7, a9);
    v28 = LANES128(a6[35]).n128_u64[1];
  }
  if (*(_QWORD*)(v28 + 624) != 0) {
    LANES128(v25).n128_f32[0] =
        game_5c1520(a1, a2, (__int64)a6, (__int64)&a6[29], a7, a9);
    v28 = LANES128(a6[35]).n128_u64[1];
  }
  if (*(_QWORD*)(v28 + 640) != 0) {
    game_5df170((float32x4_t*)a2, a3, a6, (__int64)&a6[29], a7,
                LANES128(v25).n128_f64[0], *(double*)&a10,
                LANES128(v24).n128_f64[0], *(double*)&a12,
                LANES128(a13).n128_f64[0]);
    v28 = LANES128(a6[35]).n128_u64[1];
  }
  if (*(_QWORD*)(v28 + 632) != 0) {
    game_5c19f0(a1, (float32x4_t*)a2, (__int64)a6,
                (int32x4_t*)LANES128(a6[29]).n128_u64, a7, a9, *(double*)&a10,
                LANES128(v24).n128_f64[0], *(double*)&a12, a13, *(double*)&a14,
                a15);
    v28 = LANES128(a6[35]).n128_u64[1];
  }
  if (*(_QWORD*)(v28 + 648) != 0) {
    v63 = *(void (**)(float32x2_t*, float32x4_t*, float*, __int64, int32x4_t*,
                      int32x4_t*))(
        *(_QWORD*)(LANES128(a6[7]).n128_u64[1] + 32) + 4608LL);
    if (v63 != nullptr) {
      v63(a2, a3, a5, a4, a6, a6 + 29);
    }
  }
}

void game_5c26c0(long double a1, float a2, long double a3, __int64 a4,
                 float32x4_t* a5, __int64 a6, float* a7, float* a8, float* a9)
{
  int8x16_t v9;
  float v10;
  float32x4_t v11;
  float32x2_t* v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  int v18;
  float32x2_t* v19;
  float v20;
  int v21;
  float v22;
  float32x4_t* v23;
  float* v24;
  int v25;
  __int64 v26;
  float* v27;
  float* v28;
  float v29;
  float32x2_t* v30;
  unsigned __int32 v31;
  float v32;
  __int64 v33;
  unsigned int v34;
  int v35;
  float32x2_t* v36;
  float v37;
  int v38;
  float32x4_t* v39;
  float* v40;
  int v41;
  __int64 v42;
  float* v43;
  float* v44;
  float v45;
  float32x2_t* v46;
  unsigned __int32 v47;
  float v48;
  float v49;
  unsigned int v50;
  unsigned __int64 v51;
  int8x16_t v52;
  __int64 v53;
  float* v54;
  float v55;
  float v56;
  float v57;
  float v58;
  int v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  bool v65;
  float v66;
  float v67;
  float v68;
  int8x16_t v69;
  int8x16_t v70;
  int8x16_t v71;
  __int64 v72;
  float v73;
  float32x2_t* v74;
  float32x4_t v75;
  float32x4_t v76;
  __int64 v77;
  float v78;
  float32x2_t* v79;

  v9 = *a5;
  v10 = *(float*)(*(_QWORD*)(a6 + 16) + 2464LL);
  LANES128(*(a5)).n128_f32[0] = v10;
  LANES128(v11).n128_f32[0] = v10;
  LANES128(v11).n128_u32[1] = *(_DWORD*)(*(_QWORD*)(a6 + 16) + 2468LL);
  *a5 = v11;
  LANES128(v11).n128_u32[2] = *(_DWORD*)(*(_QWORD*)(a6 + 16) + 2472LL);
  *a5 = v11;
  LANES128(v11).n128_u32[3] = *(_DWORD*)(*(_QWORD*)(a6 + 16) + 2476LL);
  *a5 = v11;
  v12 = *(float32x2_t**)(a6 + 24);
  if (v12 != nullptr) {
    v13 = *(_QWORD*)(a6 + 16);
    v14 = *(unsigned __int8*)(v13 + 2460);
    if (v14 == 3) {
      v10 = *a7 * (float)LANES64(v12[2]).n64_i32[0];
      v15 = 16LL * (int)v10;
      LANES128(v11).n128_u32[0] =
        LANES64(v12[(unsigned __int64)v15 / 8 + 110]).n64_u32[0];
      *a5 = v11;
      LANES128(v11).n128_u32[1] = *(_DWORD*)(*(_QWORD*)(a6 + 24) + v15 + 884);
      *a5 = v11;
      LANES128(v11).n128_u32[2] = *(_DWORD*)(*(_QWORD*)(a6 + 24) + v15 + 888);
      *a5 = v11;
      v13 = *(_QWORD*)(a6 + 16);
      v12 = *(float32x2_t**)(a6 + 24);
      v14 = *(unsigned __int8*)(v13 + 2460);
    }
    if (v14 != 2 || (int)(v16 = LANES64(v12[2]).n64_u32[0]) < 1) {
    LABEL_17:
      if (*(_BYTE*)(v13 + 2462) != 2 ||
        (int)(v33 = LANES64(v12[2]).n64_u32[1]) < 1) {
      LABEL_30:
        v49 = LANES64(v12[108]).n64_f32[0];
        *(float*)&v50 =
          (float)(v49 * (float)(*a8 * *a9)) * LANES128(v11).n128_f32[0];
        v51 = LANES128(v11).n128_u64[1];
        LANES128(*(a5)).n128_u32[0] = v50;
        LANES128(v52).n128_u64[0] = __PAIR64__(
          COERCE_UNSIGNED_INT(vmuls_lane_f32(v49 * (float)(a8[1] * a9[1]),
            COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0]), 1)),
          v50);
        *a5 = v52;
        LANES128(v52).n128_f32[2] =
          vmuls_lane_f32(v49 * (float)(a8[2] * a9[2]), v11, 2);
        *a5 = v52;
        *(float*)&a1 = vmuls_lane_f32(*(float*)&a1 * a8[3], v11, 3);
        LANES128(v52).n128_u32[3] = LODWORD(a1);
        *a5 = v52;
        v53 = *(_QWORD*)(a6 + 16);
        if (*(_BYTE*)(v53 + 2532) == 0) {
          return;
        }
        v54 = *(float**)(a6 + 24);
        v55 = v54[36];
        v56 = v54[38];
        v57 = v54[40];
        v58 = v54[42];
        v59 = *(unsigned __int8*)(v53 + 2535) >> 4;
        if (v59 == 2) {
          v65 = (float)((float)((float)((float)(*(float*)&a3 + v58) / v56) +
                          (float)(v57 * *a7)) -
                  floorf((float)((float)(*(float*)&a3 + v58) / v56) +
                    (float)(v57 * *a7))) < 0.5;
          v66 = -0.0;
          if (v65) {
            v66 = -1.0;
          }
          v64 = (float)(v66 * v55) + 1.0;
        }
        else {
          if (v59 != 1) {
            v60 = 1.0;
            if (v59 != 0) {
              goto LABEL_45;
            }
            v61 = (float)((float)((float)(*(float*)&a3 + v58) / v56) +
                    (float)(v57 * *a7)) *
              0x1.921fb60000000p+1;
            v62 = (float)(v61 + v61) +
              (float)(roundf((float)(v61 + v61) * 0x1.45f3060000000p-3) *
                -0x1.921fb60000000p+2);
            if (v62 <= 0x1.921fb60000000p+0) {
              v67 = 1.0;
              if (v62 >= -0x1.921fb60000000p+0) {
              LABEL_44:
                v68 = v62 * v62;
                v60 =
                  (float)((float)((float)((float)(v67 *
                                            (float)((float)((float)-(
                                                              float)(*(float*)((char*)((
                                                                                 __int128*)0x10LL) +
                                                                       (_QWORD)
                                                                         GameData_212c188) -
                                                              (float)((float)(*(float*)((char*)((
                                                                                          _UNKNOWN**)0x8LL) +
                                                                                (_QWORD)
                                                                                  GameData_212c188 +
                                                                                4) +
                                                                        (float)((float)-(
                                                                                  float)(*(float*)((char*)((
                                                                                                     _UNKNOWN**)0x8LL) +
                                                                                           (_QWORD)
                                                                                             GameData_212c188) -
                                                                                  (float)((float)(*((float*)
                                                                                                      GameData_212c188 +
                                                                                                    1) -
                                                                                            (float)(*(float*)
                                                                                                      GameData_212c188 *
                                                                                              v68)) *
                                                                                    v68)) *
                                                                          v68)) *
                                                                v68)) *
                                                      v68) +
                                              1.0)) +
                                    1.0) *
                            -0.5) *
                    v55) +
                  1.0;
              LABEL_45:
                *(float*)&a1 = *(float*)&a1 * v60;
                *(_QWORD*)&a3 = 0;
                LANES128(v52).n128_u32[3] = LODWORD(a1);
                v69 = vdupq_lane_s32(COERCE_AS(int32x2_t,
                                       LANES128_OF(vcgtq_f32(*(float32x4_t*)&a3,
                                                     *(float32x4_t*)&a1))
                                         .n128_u64[0]),
                  0);
                v70 = v52;
                LANES128(v70).n128_u32[3] = 0;
                v71 = vbslq_s8(v69, v70, v52);
                *a5 = v71;
                if (LANES128(v71).n128_f32[3] > 1.0) {
                  LANES128(v71).n128_u32[3] = 1.0;
                  *a5 = v71;
                }
                return;
              }
              v63 = -0x1.921fb60000000p+1;
            }
            else {
              v63 = 0x1.921fb60000000p+1;
            }
            v62 = v63 - v62;
            v67 = -1.0;
            goto LABEL_44;
          }
          v64 = 1.0 -
            (float)((float)((float)((float)((float)(*(float*)&a3 + v58) / v56) +
                              (float)(v57 * *a7)) -
                      floorf((float)((float)(*(float*)&a3 + v58) / v56) +
                        (float)(v57 * *a7))) *
              v55);
        }
        v60 = fabsf(v64);
        goto LABEL_45;
      }
      if (*(_BYTE*)(v13 + 2265) != 0) {
        v34 = v33 - 1;
        if ((_DWORD)v33 != 1) {
          v35 = *(_DWORD*)(v13 + 2280);
          v36 = v12 + 126;
          if (v35 >= 1) {
            LANES128(v11).n128_u8[0] = *(_BYTE*)(v13 + 2270);
            v37 = (float)v35;
            v38 = LODWORD(a1);
            v39 = a5;
            v40 = a7;
            v41 = LODWORD(a3);
            v42 = a6;
            v43 = a8;
            v44 = a9;
            *(float*)&a1 = fmodf(*(float*)&a3 +
                (float)((float)(*a7 * (float)LANES128(v11).n128_u32[0]) *
                  (float)v35),
              (float)v35);
            LODWORD(a3) = v41;
            a9 = v44;
            a8 = v43;
            a6 = v42;
            a7 = v40;
            a5 = v39;
            v45 = *(float*)&a1 / v37;
            LODWORD(a1) = v38;
            v46 = &v36[2 * v34];
            if (LANES64(v46[1]).n64_f32[1] <= v45) {
            LABEL_23:
              v47 = LANES64(*(v46)).n64_u32[0];
            LABEL_29:
              v11 = *a5;
              LANES128(v11).n128_u32[3] = v47;
              *a5 = v11;
              v12 = *(float32x2_t**)(a6 + 24);
              goto LABEL_30;
            }
            goto LABEL_27;
          }
        LABEL_26:
          v45 = *(float*)&a3 / a2;
          v46 = &v36[2 * v34];
          if (LANES64(v46[1]).n64_f32[1] <= v45) {
            goto LABEL_23;
          }
        LABEL_27:
          v48 = LANES64(v12[127]).n64_f32[1];
          if (v45 >= v48) {
            v77 = v33 + 1;
            while (--v77 != 0) {
              v78 = v48;
              v48 = LANES64(v36[3]).n64_f32[1];
              v79 = v36 + 2;
              v36 += 2;
              if (v78 <= v45) {
                v36 = v79;
                if (v45 < v48) {
                  v47 = LANES64_OF(
                    vadd_f32(v79[-2],
                      vmul_n_f32(vsub_f32(COERCE_AS(float32x2_t,
                                            LANES64(*(v79)).n64_u64[0]),
                                   v79[-2]),
                        (float)(v45 - v78) / (float)(v48 - v78))))
                          .n64_u32[0];
                  goto LABEL_29;
                }
              }
            }
            v47 = 0;
            goto LABEL_29;
          }
        }
      }
      else {
        v34 = v33 - 1;
        if ((_DWORD)v33 != 1) {
          v36 = v12 + 126;
          goto LABEL_26;
        }
      }
      v47 = LANES64(v12[126]).n64_u32[0];
      goto LABEL_29;
    }
    if (*(_BYTE*)(v13 + 2264) != 0) {
      v17 = v16 - 1;
      if ((_DWORD)v16 != 1) {
        v18 = *(_DWORD*)(v13 + 2276);
        v19 = v12 + 110;
        if (v18 >= 1) {
          LOBYTE(v10) = *(_BYTE*)(v13 + 2269);
          v20 = (float)v18;
          v21 = LODWORD(a1);
          v22 = a2;
          v23 = a5;
          v24 = a7;
          v25 = LODWORD(a3);
          v26 = a6;
          v27 = a8;
          v28 = a9;
          *(float*)&a1 = fmodf(*(float*)&a3 +
              (float)((float)(*a7 * (float)LODWORD(v10)) * (float)v18),
            (float)v18);
          a2 = v22;
          a9 = v28;
          a8 = v27;
          a6 = v26;
          a7 = v24;
          a5 = v23;
          v29 = *(float*)&a1 / v20;
          LODWORD(a3) = v25;
          LODWORD(a1) = v21;
          v30 = &v19[2 * v17];
          if (LANES64(v30[1]).n64_f32[1] <= v29) {
          LABEL_10:
            LANES128(v11).n128_u32[0] = LANES64(*(v30)).n64_u32[0];
            v31 = LANES64(v30[1]).n64_u32[0];
            LANES128(v11).n128_u32[1] = LANES64(*(v30)).n64_u32[1];
          LABEL_16:
            LANES128(v11).n128_u32[3] = HIDWORD(LANES128(*(a5)).n128_u64[1]);
            LANES128(v11).n128_u32[2] = v31;
            *a5 = v11;
            v13 = *(_QWORD*)(a6 + 16);
            v12 = *(float32x2_t**)(a6 + 24);
            goto LABEL_17;
          }
          goto LABEL_14;
        }
      LABEL_13:
        v29 = *(float*)&a3 / a2;
        v30 = &v19[2 * v17];
        if (LANES64(v30[1]).n64_f32[1] <= (float)(*(float*)&a3 / a2)) {
          goto LABEL_10;
        }
      LABEL_14:
        v32 = LANES64(v12[111]).n64_f32[1];
        if (v29 >= v32) {
          v72 = v16 + 1;
          while (--v72 != 0) {
            v73 = v32;
            v32 = LANES64(v19[3]).n64_f32[1];
            v74 = v19 + 2;
            v19 += 2;
            if (v73 <= v29) {
              v19 = v74;
              if (v29 < v32) {
                LANES128(v75).n128_u64[0] = LANES64(v74[-2]).n64_u64[0];
                LANES128(v75).n128_u64[1] = LANES64(v74[-1]).n64_u32[0];
                LANES128(v76).n128_u64[0] = LANES64(*(v74)).n64_u64[0];
                LANES128(v76).n128_u64[1] = LANES64(v74[1]).n64_u32[0];
                v11 = vaddq_f32(v75,
                  vmulq_n_f32(vsubq_f32(v76, v75),
                    (float)(v29 - v73) / (float)(v32 - v73)));
                v31 = LANES128(v11).n128_u32[2];
                goto LABEL_16;
              }
            }
          }
          v31 = 0;
          LANES128(v11).n128_u64[0] = 0;
          goto LABEL_16;
        }
      }
    }
    else {
      v17 = v16 - 1;
      if ((_DWORD)v16 != 1) {
        v19 = v12 + 110;
        goto LABEL_13;
      }
    }
    LANES128(v11).n128_u32[0] = LANES64(v12[110]).n64_u32[0];
    v31 = LANES64(v12[111]).n64_u32[0];
    LANES128(v11).n128_u32[1] = LANES64(v12[110]).n64_u32[1];
    goto LABEL_16;
  }
}

void game_5c2d00(long double a1, long double a2, __int64 a3, int8x16_t* a4,
                 __int64 a5, float* a6)
{
  int8x16_t v6;
  float v7;
  int8x16_t v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  int v16;
  __int64 v17;
  float v18;
  int v19;
  int v20;
  int8x16_t* v21;
  float* v22;
  __int64 v23;
  float v24;
  __int64 v25;
  unsigned __int32 v26;
  float v27;
  float32x2_t* v28;
  __int64 v29;
  unsigned int v30;
  int v31;
  float32x2_t* v32;
  int v33;
  int8x16_t* v34;
  float* v35;
  __int64 v36;
  float32x2_t* v37;
  float v38;
  float* v39;
  float v40;
  float v41;
  float v42;
  float v43;
  int v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  bool v50;
  float v51;
  float v52;
  float v53;
  int8x16_t v54;
  int8x16_t v55;
  int8x16_t v56;
  __int64 v57;
  float v58;
  __int64 v59;
  float32x4_t v60;
  float32x4_t v61;
  __int64 v62;
  float v63;
  float32x2_t* v64;

  v6 = *a4;
  v7 = *(float*)(*(_QWORD*)(a5 + 16) + 2464LL);
  LANES128(*(a4)).n128_f32[0] = v7;
  LANES128(v8).n128_f32[0] = v7;
  LANES128(v8).n128_u32[1] = *(_DWORD*)(*(_QWORD*)(a5 + 16) + 2468LL);
  *a4 = v8;
  LANES128(v8).n128_u32[2] = *(_DWORD*)(*(_QWORD*)(a5 + 16) + 2472LL);
  *a4 = v8;
  LANES128(v8).n128_u32[3] = *(_DWORD*)(*(_QWORD*)(a5 + 16) + 2476LL);
  *a4 = v8;
  v9 = *(_QWORD*)(a5 + 24);
  if (v9 != 0) {
    v10 = *(_QWORD*)(a5 + 16);
    v11 = *(unsigned __int8*)(v10 + 2460);
    if (v11 == 3) {
      v7 = *a6 * (float)*(int*)(v9 + 16);
      v12 = 16LL * (int)v7;
      LANES128(v8).n128_u32[0] = *(_DWORD*)(v9 + v12 + 880);
      *a4 = v8;
      LANES128(v8).n128_u32[1] = *(_DWORD*)(*(_QWORD*)(a5 + 24) + v12 + 884);
      *a4 = v8;
      LANES128(v8).n128_u32[2] = *(_DWORD*)(*(_QWORD*)(a5 + 24) + v12 + 888);
      *a4 = v8;
      v10 = *(_QWORD*)(a5 + 16);
      v11 = *(unsigned __int8*)(v10 + 2460);
    }
    if (v11 != 2 ||
      (v13 = *(_QWORD*)(a5 + 24),
        (int)(v14 = *(unsigned int*)(v13 + 16)) < 1)) {
    LABEL_17:
      if (*(_BYTE*)(v10 + 2462) != 2 ||
        (v28 = *(float32x2_t**)(a5 + 24),
          (int)(v29 = LANES64(v28[2]).n64_u32[1]) < 1)) {
      LABEL_30:
        if (*(_BYTE*)(v10 + 2532) == 0) {
          return;
        }
        v39 = *(float**)(a5 + 24);
        v40 = v39[36];
        v41 = v39[38];
        v42 = v39[40];
        v43 = v39[42];
        v44 = *(unsigned __int8*)(v10 + 2535) >> 4;
        if (v44 == 2) {
          v50 = (float)((float)((float)((float)(*(float*)&a2 + v43) / v41) +
                          (float)(v42 * *a6)) -
                  floorf((float)((float)(*(float*)&a2 + v43) / v41) +
                    (float)(v42 * *a6))) < 0x1.0000000000000p-1f;
          v51 = -0x0.0p+0f;
          if (v50) {
            v51 = -0x1.0000000000000p+0f;
          }
          v49 = (float)(v51 * v40) + 0x1.0000000000000p+0f;
        }
        else {
          if (v44 != 1) {
            v45 = 0x1.0000000000000p+0f;
            if (v44 != 0) {
              goto LABEL_45;
            }
            v46 = (float)((float)((float)(*(float*)&a2 + v43) / v41) +
                    (float)(v42 * *a6)) *
              0x1.921fb60000000p+1f;
            v47 = (float)(v46 + v46) +
              (float)(roundf((float)(v46 + v46) * 0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
            if (v47 <= 0x1.921fb60000000p+0f) {
              v52 = 0x1.0000000000000p+0f;
              if (v47 >= -0x1.921fb60000000p+0f) {
              LABEL_44:
                v53 = v47 * v47;
                v45 =
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(v52 *
                                            (float)((float)((float)-(
                                                              float)(*(float*)((char*)((
                                                                                 __int128*)0x10LL) +
                                                                       (_QWORD)
                                                                         GameData_212c188) -
                                                              (float)((float)(*(float*)((char*)((
                                                                                          _UNKNOWN**)0x8LL) +
                                                                                (_QWORD)
                                                                                  GameData_212c188 +
                                                                                4) +
                                                                        (float)((float)-(
                                                                                  float)(*(float*)((char*)((
                                                                                                     _UNKNOWN**)0x8LL) +
                                                                                           (_QWORD)
                                                                                             GameData_212c188) -
                                                                                  (float)((float)(*((float*)
                                                                                                      GameData_212c188 +
                                                                                                    1) -
                                                                                            (float)(*(float*)
                                                                                                      GameData_212c188 *
                                                                                              v53)) *
                                                                                    v53)) *
                                                                          v53)) *
                                                                v53)) *
                                                      v53) +
                                              0x1.0000000000000p+0f))) +
                                    0x1.0000000000000p+0f) *
                            -0x1.0000000000000p-1f) *
                    v40) +
                  0x1.0000000000000p+0f;
              LABEL_45:
                *(float*)&a1 = vmuls_lane_f32(v45, v8, 3);
                *(_QWORD*)&a2 = 0;
                LANES128(v8).n128_u32[3] = LODWORD(a1);
                v54 = vdupq_lane_s32(COERCE_AS(int32x2_t,
                                       LANES128_OF(vcgtq_f32(*(float32x4_t*)&a2,
                                                     *(float32x4_t*)&a1))
                                         .n128_u64[0]),
                  0);
                v55 = v8;
                LANES128(v55).n128_u32[3] = 0;
                v56 = vbslq_s8(v54, v55, v8);
                *a4 = v56;
                if (LANES128(v56).n128_f32[3] > 0x1.0000000000000p+0f) {
                  LANES128(v56).n128_u32[3] =
                    COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
                  *a4 = v56;
                }
                return;
              }
              v48 = -0x1.921fb60000000p+1f;
            }
            else {
              v48 = 0x1.921fb60000000p+1f;
            }
            v47 = v48 - v47;
            v52 = -0x1.0000000000000p+0f;
            goto LABEL_44;
          }
          v49 = 0x1.0000000000000p+0f -
            (float)((float)((float)((float)((float)(*(float*)&a2 + v43) / v41) +
                              (float)(v42 * *a6)) -
                      floorf((float)((float)(*(float*)&a2 + v43) / v41) +
                        (float)(v42 * *a6))) *
              v40);
        }
        v45 = fabsf(v49);
        goto LABEL_45;
      }
      if (*(_BYTE*)(v10 + 2265) != 0) {
        v30 = v29 - 1;
        if ((_DWORD)v29 != 1) {
          v31 = *(_DWORD*)(v10 + 2280);
          v32 = v28 + 126;
          if (v31 >= 1) {
            LANES128(v8).n128_u8[0] = *(_BYTE*)(v10 + 2270);
            v33 = LODWORD(a2);
            v34 = a4;
            v35 = a6;
            v36 = a5;
            *(float*)&a1 =
              fmodf(*(float*)&a2 +
                  (float)((float)(*a6 * (float)LANES128(v8).n128_u32[0]) *
                    (float)v31),
                (float)v31) /
              (float)v31;
            LODWORD(a2) = v33;
            a5 = v36;
            a6 = v35;
            a4 = v34;
            v37 = &v32[2 * v30];
            if (LANES64(v37[1]).n64_f32[1] <= *(float*)&a1) {
            LABEL_23:
              *(float32x2_t*)&a1 =
                COERCE_AS(float32x2_t, LANES64(*(v37)).n64_u64[0]);
            LABEL_29:
              v8 = *a4;
              LANES128(v8).n128_u32[3] = LODWORD(a1);
              *a4 = v8;
              v10 = *(_QWORD*)(a5 + 16);
              goto LABEL_30;
            }
            goto LABEL_27;
          }
        LABEL_26:
          *(float*)&a1 = *(float*)&a2 / *(float*)&a1;
          v37 = &v32[2 * v30];
          if (LANES64(v37[1]).n64_f32[1] <= *(float*)&a1) {
            goto LABEL_23;
          }
        LABEL_27:
          v38 = LANES64(v28[127]).n64_f32[1];
          if (*(float*)&a1 >= v38) {
            v62 = v29 + 1;
            while (--v62 != 0) {
              v63 = v38;
              v38 = LANES64(v32[3]).n64_f32[1];
              v64 = v32 + 2;
              v32 += 2;
              if (v63 <= *(float*)&a1) {
                v32 = v64;
                if (*(float*)&a1 < v38) {
                  *(float32x2_t*)&a1 = vadd_f32(v64[-2],
                    vmul_n_f32(vsub_f32(COERCE_AS(float32x2_t,
                                          LANES64(*(v64)).n64_u64[0]),
                                 v64[-2]),
                      (float)(*(float*)&a1 - v63) / (float)(v38 - v63)));
                  goto LABEL_29;
                }
              }
            }
            *(_QWORD*)&a1 = 0;
            goto LABEL_29;
          }
        }
      }
      else {
        v30 = v29 - 1;
        if ((_DWORD)v29 != 1) {
          v32 = v28 + 126;
          goto LABEL_26;
        }
      }
      *(float32x2_t*)&a1 = v28[126];
      goto LABEL_29;
    }
    if (*(_BYTE*)(v10 + 2264) != 0) {
      v15 = v14 - 1;
      if ((_DWORD)v14 != 1) {
        v16 = *(_DWORD*)(v10 + 2276);
        v17 = v13 + 880;
        if (v16 >= 1) {
          LOBYTE(v7) = *(_BYTE*)(v10 + 2269);
          v18 = (float)v16;
          v19 = LODWORD(a1);
          v20 = LODWORD(a2);
          v21 = a4;
          v22 = a6;
          v23 = a5;
          *(float*)&a1 = fmodf(*(float*)&a2 +
              (float)((float)(*a6 * (float)LODWORD(v7)) * (float)v16),
            (float)v16);
          LODWORD(a2) = v20;
          a5 = v23;
          a6 = v22;
          a4 = v21;
          v24 = *(float*)&a1 / v18;
          LODWORD(a1) = v19;
          v25 = v17 + 16LL * v15;
          if (*(float*)(v25 + 12) <= v24) {
          LABEL_10:
            LANES128(v8).n128_u32[0] = *(_DWORD*)v25;
            v26 = *(_DWORD*)(v25 + 8);
            LANES128(v8).n128_u32[1] = *(_DWORD*)(v25 + 4);
          LABEL_16:
            LANES128(v8).n128_u32[3] = HIDWORD(LANES128(*(a4)).n128_u64[1]);
            LANES128(v8).n128_u32[2] = v26;
            *a4 = v8;
            v10 = *(_QWORD*)(a5 + 16);
            goto LABEL_17;
          }
          goto LABEL_14;
        }
      LABEL_13:
        v24 = *(float*)&a2 / *(float*)&a1;
        v25 = v17 + 16LL * v15;
        if (*(float*)(v25 + 12) <= (float)(*(float*)&a2 / *(float*)&a1)) {
          goto LABEL_10;
        }
      LABEL_14:
        v27 = *(float*)(v13 + 892);
        if (v24 >= v27) {
          v57 = v14 + 1;
          while (--v57 != 0) {
            v58 = v27;
            v27 = *(float*)(v17 + 28);
            v59 = v17 + 16;
            v17 += 16;
            if (v58 <= v24) {
              v17 = v59;
              if (v24 < v27) {
                LANES128(v60).n128_u64[0] = *(_QWORD*)(v59 - 16);
                LANES128(v60).n128_u64[1] = *(unsigned int*)(v59 - 8);
                LANES128(v61).n128_u64[0] = *(_QWORD*)v59;
                LANES128(v61).n128_u64[1] = *(unsigned int*)(v59 + 8);
                v8 = vaddq_f32(v60,
                  vmulq_n_f32(vsubq_f32(v61, v60),
                    (float)(v24 - v58) / (float)(v27 - v58)));
                v26 = LANES128(v8).n128_u32[2];
                goto LABEL_16;
              }
            }
          }
          v26 = 0;
          LANES128(v8).n128_u64[0] = 0;
          goto LABEL_16;
        }
      }
    }
    else {
      v15 = v14 - 1;
      if ((_DWORD)v14 != 1) {
        v17 = v13 + 880;
        goto LABEL_13;
      }
    }
    LANES128(v8).n128_u32[0] = *(_DWORD*)(v13 + 880);
    v26 = *(_DWORD*)(v13 + 888);
    LANES128(v8).n128_u32[1] = *(_DWORD*)(v13 + 884);
    goto LABEL_16;
  }
}

void game_5c32a0(long double a1, float a2, long double a3, __int64 a4,
                 float32x4_t* a5, __int64 a6, float* a7, float* a8, float* a9)
{
  float32x4_t v9;
  float v10;
  float32x4_t v11;
  float32x2_t* v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  int v18;
  float32x2_t* v19;
  float v20;
  int v21;
  float v22;
  float32x4_t* v23;
  float* v24;
  int v25;
  __int64 v26;
  float* v27;
  float* v28;
  float v29;
  float32x2_t* v30;
  unsigned __int32 v31;
  float v32;
  __int64 v33;
  unsigned int v34;
  int v35;
  float32x2_t* v36;
  float v37;
  int v38;
  float32x4_t* v39;
  float* v40;
  int v41;
  __int64 v42;
  float* v43;
  float* v44;
  float v45;
  float32x2_t* v46;
  unsigned __int32 v47;
  float v48;
  float v49;
  unsigned int v50;
  unsigned __int64 v51;
  int8x16_t v52;
  __int64 v53;
  float* v54;
  float v55;
  float v56;
  float v57;
  float v58;
  int v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  bool v65;
  float v66;
  float v67;
  float v68;
  int8x16_t v69;
  int8x16_t v70;
  int8x16_t v71;
  __int64 v72;
  float v73;
  float32x2_t* v74;
  float32x4_t v75;
  float32x4_t v76;
  __int64 v77;
  float v78;
  float32x2_t* v79;

  v9 = *a5;
  v10 = *(float*)(*(_QWORD*)(a6 + 16) + 2480LL);
  LANES128(*(a5)).n128_f32[0] = v10;
  LANES128(v11).n128_f32[0] = v10;
  LANES128(v11).n128_u32[1] = *(_DWORD*)(*(_QWORD*)(a6 + 16) + 2484LL);
  *a5 = v11;
  LANES128(v11).n128_u32[2] = *(_DWORD*)(*(_QWORD*)(a6 + 16) + 2488LL);
  *a5 = v11;
  LANES128(v11).n128_u32[3] = *(_DWORD*)(*(_QWORD*)(a6 + 16) + 2492LL);
  *a5 = v11;
  v12 = *(float32x2_t**)(a6 + 24);
  if (v12 != nullptr) {
    v13 = *(_QWORD*)(a6 + 16);
    v14 = *(unsigned __int8*)(v13 + 2461);
    if (v14 == 3) {
      v10 = *a7 * (float)LANES64(v12[3]).n64_i32[0];
      v15 = 16LL * (int)v10;
      LANES128(v11).n128_u32[0] =
        LANES64(v12[(unsigned __int64)v15 / 8 + 142]).n64_u32[0];
      *a5 = v11;
      LANES128(v11).n128_u32[1] = *(_DWORD*)(*(_QWORD*)(a6 + 24) + v15 + 1140);
      *a5 = v11;
      LANES128(v11).n128_u32[2] = *(_DWORD*)(*(_QWORD*)(a6 + 24) + v15 + 1144);
      *a5 = v11;
      v13 = *(_QWORD*)(a6 + 16);
      v12 = *(float32x2_t**)(a6 + 24);
      v14 = *(unsigned __int8*)(v13 + 2461);
    }
    if (v14 != 2 || (int)(v16 = LANES64(v12[3]).n64_u32[0]) < 1) {
    LABEL_17:
      if (*(_BYTE*)(v13 + 2463) != 2 ||
        (int)(v33 = LANES64(v12[3]).n64_u32[1]) < 1) {
      LABEL_30:
        v49 = LANES64(v12[108]).n64_f32[0];
        *(float*)&v50 =
          (float)(v49 * (float)(*a8 * *a9)) * LANES128(v11).n128_f32[0];
        v51 = LANES128(v11).n128_u64[1];
        LANES128(*(a5)).n128_u32[0] = v50;
        LANES128(v52).n128_u64[0] = __PAIR64__(
          COERCE_UNSIGNED_INT(vmuls_lane_f32(v49 * (float)(a8[1] * a9[1]),
            COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0]), 1)),
          v50);
        *a5 = v52;
        LANES128(v52).n128_f32[2] =
          vmuls_lane_f32(v49 * (float)(a8[2] * a9[2]), v11, 2);
        *a5 = v52;
        *(float*)&a1 = vmuls_lane_f32(*(float*)&a1 * a8[3], v11, 3);
        LANES128(v52).n128_u32[3] = LODWORD(a1);
        *a5 = v52;
        v53 = *(_QWORD*)(a6 + 16);
        if (*(_BYTE*)(v53 + 2532) == 0) {
          return;
        }
        v54 = *(float**)(a6 + 24);
        v55 = v54[36];
        v56 = v54[38];
        v57 = v54[40];
        v58 = v54[42];
        v59 = *(unsigned __int8*)(v53 + 2535) >> 4;
        if (v59 == 2) {
          v65 = (float)((float)((float)((float)(*(float*)&a3 + v58) / v56) +
                          (float)(v57 * *a7)) -
                  floorf((float)((float)(*(float*)&a3 + v58) / v56) +
                    (float)(v57 * *a7))) < 0x1.0000000000000p-1f;
          v66 = -0x0.0p+0f;
          if (v65) {
            v66 = -0x1.0000000000000p+0f;
          }
          v64 = (float)(v66 * v55) + 0x1.0000000000000p+0f;
        }
        else {
          if (v59 != 1) {
            v60 = 0x1.0000000000000p+0f;
            if (v59 != 0) {
              goto LABEL_45;
            }
            v61 = (float)((float)((float)(*(float*)&a3 + v58) / v56) +
                    (float)(v57 * *a7)) *
              0x1.921fb60000000p+1f;
            v62 = (float)(v61 + v61) +
              (float)(roundf((float)(v61 + v61) * 0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
            if (v62 <= 0x1.921fb60000000p+0f) {
              v67 = 0x1.0000000000000p+0f;
              if (v62 >= -0x1.921fb60000000p+0f) {
              LABEL_44:
                v68 = v62 * v62;
                v60 =
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(v67 *
                                            (float)((float)((float)-(
                                                              float)(*(float*)((char*)((
                                                                                 __int128*)0x10LL) +
                                                                       (_QWORD)
                                                                         GameData_212c188) -
                                                              (float)((float)(*(float*)((char*)((
                                                                                          _UNKNOWN**)0x8LL) +
                                                                                (_QWORD)
                                                                                  GameData_212c188 +
                                                                                4) +
                                                                        (float)((float)-(
                                                                                  float)(*(float*)((char*)((
                                                                                                     _UNKNOWN**)0x8LL) +
                                                                                           (_QWORD)
                                                                                             GameData_212c188) -
                                                                                  (float)((float)(*((float*)
                                                                                                      GameData_212c188 +
                                                                                                    1) -
                                                                                            (float)(*(float*)
                                                                                                      GameData_212c188 *
                                                                                              v68)) *
                                                                                    v68)) *
                                                                          v68)) *
                                                                v68)) *
                                                      v68) +
                                              0x1.0000000000000p+0f))) +
                                    0x1.0000000000000p+0f) *
                            -0x1.0000000000000p-1f) *
                    v55) +
                  0x1.0000000000000p+0f;
              LABEL_45:
                *(float*)&a1 = *(float*)&a1 * v60;
                *(_QWORD*)&a3 = 0;
                LANES128(v52).n128_u32[3] = LODWORD(a1);
                v69 = vdupq_lane_s32(COERCE_AS(int32x2_t,
                                       LANES128_OF(vcgtq_f32(*(float32x4_t*)&a3,
                                                     *(float32x4_t*)&a1))
                                         .n128_u64[0]),
                  0);
                v70 = v52;
                LANES128(v70).n128_u32[3] = 0;
                v71 = vbslq_s8(v69, v70, v52);
                *a5 = v71;
                if (LANES128(v71).n128_f32[3] > 0x1.0000000000000p+0f) {
                  LANES128(v71).n128_u32[3] =
                    COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
                  *a5 = v71;
                }
                return;
              }
              v63 = -0x1.921fb60000000p+1f;
            }
            else {
              v63 = 0x1.921fb60000000p+1f;
            }
            v62 = v63 - v62;
            v67 = -0x1.0000000000000p+0f;
            goto LABEL_44;
          }
          v64 = 0x1.0000000000000p+0f -
            (float)((float)((float)((float)((float)(*(float*)&a3 + v58) / v56) +
                              (float)(v57 * *a7)) -
                      floorf((float)((float)(*(float*)&a3 + v58) / v56) +
                        (float)(v57 * *a7))) *
              v55);
        }
        v60 = fabsf(v64);
        goto LABEL_45;
      }
      if (*(_BYTE*)(v13 + 2267) != 0) {
        v34 = v33 - 1;
        if ((_DWORD)v33 != 1) {
          v35 = *(_DWORD*)(v13 + 2288);
          v36 = v12 + 158;
          if (v35 >= 1) {
            LANES128(v11).n128_u8[0] = *(_BYTE*)(v13 + 2272);
            v37 = (float)v35;
            v38 = LODWORD(a1);
            v39 = a5;
            v40 = a7;
            v41 = LODWORD(a3);
            v42 = a6;
            v43 = a8;
            v44 = a9;
            *(float*)&a1 = fmodf(*(float*)&a3 +
                (float)((float)(*a7 * (float)LANES128(v11).n128_u32[0]) *
                  (float)v35),
              (float)v35);
            LODWORD(a3) = v41;
            a9 = v44;
            a8 = v43;
            a6 = v42;
            a7 = v40;
            a5 = v39;
            v45 = *(float*)&a1 / v37;
            LODWORD(a1) = v38;
            v46 = &v36[2 * v34];
            if (LANES64(v46[1]).n64_f32[1] <= v45) {
            LABEL_23:
              v47 = LANES64(*(v46)).n64_u32[0];
            LABEL_29:
              v11 = *a5;
              LANES128(v11).n128_u32[3] = v47;
              *a5 = v11;
              v12 = *(float32x2_t**)(a6 + 24);
              goto LABEL_30;
            }
            goto LABEL_27;
          }
        LABEL_26:
          v45 = *(float*)&a3 / a2;
          v46 = &v36[2 * v34];
          if (LANES64(v46[1]).n64_f32[1] <= v45) {
            goto LABEL_23;
          }
        LABEL_27:
          v48 = LANES64(v12[159]).n64_f32[1];
          if (v45 >= v48) {
            v77 = v33 + 1;
            while (--v77 != 0) {
              v78 = v48;
              v48 = LANES64(v36[3]).n64_f32[1];
              v79 = v36 + 2;
              v36 += 2;
              if (v78 <= v45) {
                v36 = v79;
                if (v45 < v48) {
                  v47 = LANES64_OF(
                    vadd_f32(v79[-2],
                      vmul_n_f32(vsub_f32(COERCE_AS(float32x2_t,
                                            LANES64(*(v79)).n64_u64[0]),
                                   v79[-2]),
                        (float)(v45 - v78) / (float)(v48 - v78))))
                          .n64_u32[0];
                  goto LABEL_29;
                }
              }
            }
            v47 = 0;
            goto LABEL_29;
          }
        }
      }
      else {
        v34 = v33 - 1;
        if ((_DWORD)v33 != 1) {
          v36 = v12 + 158;
          goto LABEL_26;
        }
      }
      v47 = LANES64(v12[158]).n64_u32[0];
      goto LABEL_29;
    }
    if (*(_BYTE*)(v13 + 2266) != 0) {
      v17 = v16 - 1;
      if ((_DWORD)v16 != 1) {
        v18 = *(_DWORD*)(v13 + 2284);
        v19 = v12 + 142;
        if (v18 >= 1) {
          LOBYTE(v10) = *(_BYTE*)(v13 + 2271);
          v20 = (float)v18;
          v21 = LODWORD(a1);
          v22 = a2;
          v23 = a5;
          v24 = a7;
          v25 = LODWORD(a3);
          v26 = a6;
          v27 = a8;
          v28 = a9;
          *(float*)&a1 = fmodf(*(float*)&a3 +
              (float)((float)(*a7 * (float)LODWORD(v10)) * (float)v18),
            (float)v18);
          a2 = v22;
          a9 = v28;
          a8 = v27;
          a6 = v26;
          a7 = v24;
          a5 = v23;
          v29 = *(float*)&a1 / v20;
          LODWORD(a3) = v25;
          LODWORD(a1) = v21;
          v30 = &v19[2 * v17];
          if (LANES64(v30[1]).n64_f32[1] <= v29) {
          LABEL_10:
            LANES128(v11).n128_u32[0] = LANES64(*(v30)).n64_u32[0];
            v31 = LANES64(v30[1]).n64_u32[0];
            LANES128(v11).n128_u32[1] = LANES64(*(v30)).n64_u32[1];
          LABEL_16:
            LANES128(v11).n128_u32[3] = HIDWORD(LANES128(*(a5)).n128_u64[1]);
            LANES128(v11).n128_u32[2] = v31;
            *a5 = v11;
            v13 = *(_QWORD*)(a6 + 16);
            v12 = *(float32x2_t**)(a6 + 24);
            goto LABEL_17;
          }
          goto LABEL_14;
        }
      LABEL_13:
        v29 = *(float*)&a3 / a2;
        v30 = &v19[2 * v17];
        if (LANES64(v30[1]).n64_f32[1] <= (float)(*(float*)&a3 / a2)) {
          goto LABEL_10;
        }
      LABEL_14:
        v32 = LANES64(v12[143]).n64_f32[1];
        if (v29 >= v32) {
          v72 = v16 + 1;
          while (--v72 != 0) {
            v73 = v32;
            v32 = LANES64(v19[3]).n64_f32[1];
            v74 = v19 + 2;
            v19 += 2;
            if (v73 <= v29) {
              v19 = v74;
              if (v29 < v32) {
                LANES128(v75).n128_u64[0] = LANES64(v74[-2]).n64_u64[0];
                LANES128(v75).n128_u64[1] = LANES64(v74[-1]).n64_u32[0];
                LANES128(v76).n128_u64[0] = LANES64(*(v74)).n64_u64[0];
                LANES128(v76).n128_u64[1] = LANES64(v74[1]).n64_u32[0];
                v11 = vaddq_f32(v75,
                  vmulq_n_f32(vsubq_f32(v76, v75),
                    (float)(v29 - v73) / (float)(v32 - v73)));
                v31 = LANES128(v11).n128_u32[2];
                goto LABEL_16;
              }
            }
          }
          v31 = 0;
          LANES128(v11).n128_u64[0] = 0;
          goto LABEL_16;
        }
      }
    }
    else {
      v17 = v16 - 1;
      if ((_DWORD)v16 != 1) {
        v19 = v12 + 142;
        goto LABEL_13;
      }
    }
    LANES128(v11).n128_u32[0] = LANES64(v12[142]).n64_u32[0];
    v31 = LANES64(v12[143]).n64_u32[0];
    LANES128(v11).n128_u32[1] = LANES64(v12[142]).n64_u32[1];
    goto LABEL_16;
  }
}

void game_5c3e70(float a1, __int64 a2, __int128* a3, __int64 a4, _DWORD* a5,
                 float32x2_t* a6)
{
  __int128 v7;
  float* v8;
  float v9;
  float v10;
  float v11;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  __int128 v20;
  float v21;
  _BYTE* v22;
  float v23;
  long double v24;
  float v25;
  float v26;
  float v27;
  bool v28;
  int v29;
  int v30;
  float v31;
  float v32;
  _BOOL4 v33;
  _BOOL4 v34;
  float v35;
  float v36;
  _BOOL4 v37;
  float v38;
  _BOOL4 v39;
  float v40;
  float v41;
  float v42;
  float v43;
  __int128 v44;
  float v45;

  v7 = *a3;
  LODWORD(v7) = *a5;
  *a3 = v7;
  DWORD1(v7) = a5[1];
  *a3 = v7;
  *((_QWORD*)&v7 + 1) = (unsigned int)a5[2];
  *a3 = v7;
  v8 = *(float**)(a4 + 24);
  if (v8 != nullptr) {
    v9 = v8[439];
    v10 = v8[432];
    v11 = v8[433];
    v13 = v8[434];
    v14 = v8[436];
    v15 = v8[437];
    v16 = v8[438];
    v17 = v8[440];
    v18 = v8[441];
    v19 = v8[442];
    v20 = *(_OWORD*)LANES64(*(a6)).n64_u64;
    LODWORD(v21) = HIDWORD(LANES64(*(a6)).n64_u64[0]);
    v22 = *(_BYTE**)(a4 + 16);
    v23 = COERCE_FLOAT(LANES64(a6[1]).n64_u64[0]);
    v24 = *(long double*)a5;
    v25 = (float)(v21 + v23) * 0x1.0000000000000p-1f;
    v26 = (float)(v23 + COERCE_FLOAT(*(_OWORD*)LANES64(*(a6)).n64_u64)) *
          0x1.0000000000000p-1f;
    v27 = v14 + (float)((float)(vaddv_f32(COERCE_AS(
                                    float32x2_t, LANES64(*(a6)).n64_u64[0])) *
                                0x1.0000000000000p-1f) *
                        v17);
    v28 = v21 < 0x1.0000000000000p-1f || v22[2221] == 0;
    v29 = (unsigned __int8)v22[2222];
    v30 = (unsigned __int8)v22[2223];
    if (v28) {
      v31 = v27;
    }
    else {
      *(float*)&v24 = -*(float*)&v24;
      v31 = -v27;
    }
    v32 = *(float*)&v24 + (float)(*(float*)&v20 * v10);
    *(float*)&v24 = v9;
    v33 = v29 != 0;
    v34 = v23 >= 0x1.0000000000000p-1f;
    if (v34 && v33) {
      v35 = -(float)(v15 + (float)(v25 * v18));
    }
    else {
      v35 = v15 + (float)(v25 * v18);
    }
    if (v34 && v33) {
      v36 = -COERCE_FLOAT(HIDWORD(*(_QWORD*)a5));
    }
    else {
      LODWORD(v36) = HIDWORD(*(_QWORD*)a5);
    }
    v37 = v30 != 0;
    v38 = v36 + (float)(v11 * *((float*)&v20 + 1));
    v39 = *(float*)&v20 >= 0x1.0000000000000p-1f;
    if (v39 && v37) {
      v40 = -(float)(v16 + (float)(v26 * v19));
    }
    else {
      v40 = v16 + (float)(v26 * v19);
    }
    if (v39 && v37) {
      v41 = -COERCE_FLOAT(*((_QWORD*)a5 + 1));
    }
    else {
      LODWORD(v41) = *((_QWORD*)a5 + 1);
    }
    v42 = v41 + (float)(v13 * *((float*)&v20 + 2));
    v43 = powf_alt1(v24, a1);
    DWORD3(v44) = 0;
    v45 = (float)(0x1.0000000000000p+0f - v43) /
          (float)(0x1.0000000000000p+0f - v9);
    if (v9 == 0x1.0000000000000p+0f) {
      v45 = a1;
    }
    *(float*)&v44 = v32 + (float)(v31 * v45);
    *((float*)&v44 + 1) = v38 + (float)(v35 * v45);
    *((float*)&v44 + 2) = v42 + (float)(v40 * v45);
    *a3 = v44;
  }
}

float game_5c4910(float* a1, float a2, float a3)
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

  v3 = a2 * a3;
  v4 = v3 / a1[12];
  v5 = v3 / a1[13];
  v6 = v3 / a1[14];
  v7 = (float)(v3 / a1[11]) +
    (float)(roundf((float)(v3 / a1[11]) * 0x1.45f3060000000p-3f) *
      -0x1.921fb60000000p+2f);
  v8 = -0x1.921fb60000000p+1f - v7;
  if (v7 >= -0x1.921fb60000000p+0f) {
    v8 = v7;
  }
  if (v7 > 0x1.921fb60000000p+0f) {
    v9 = 0x1.921fb60000000p+1f - v7;
  }
  else {
    v9 = v8;
  }
  v15 =
    v4 + (float)(roundf(v4 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  v16 = -0x1.921fb60000000p+1f - v15;
  if (v15 >= -0x1.921fb60000000p+0f) {
    v16 = v15;
  }
  if (v15 > 0x1.921fb60000000p+0f) {
    v17 = 0x1.921fb60000000p+1f - v15;
  }
  else {
    v17 = v16;
  }
  v18 =
    v5 + (float)(roundf(v5 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  v19 = -0x1.921fb60000000p+1f - v18;
  if (v18 >= -0x1.921fb60000000p+0f) {
    v19 = v18;
  }
  if (v18 > 0x1.921fb60000000p+0f) {
    v20 = 0x1.921fb60000000p+1f - v18;
  }
  else {
    v20 = v19;
  }
  v21 =
    v6 + (float)(roundf(v6 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  v22 = -0x1.921fb60000000p+1f - v21;
  if (v21 >= -0x1.921fb60000000p+0f) {
    v22 = v21;
  }
  if (v21 > 0x1.921fb60000000p+0f) {
    v23 = 0x1.921fb60000000p+1f - v21;
  }
  else {
    v23 = v22;
  }
  v10 = *(float*)GameData_212c190;
  v11 = *((float*)GameData_212c190 + 1);
  v12 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v13 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v14 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  return (float)((float)((float)(a1[7] *
                           (float)(v9 *
                             (float)((float)((float)-(float)(v14 -
                                               (float)((float)(v13 +
                                                         (float)((float)-(
                                                                   float)(v12 -
                                                                   (float)((float)(v11 -
                                                                             (float)(v10 *
                                                                               (float)(v9 *
                                                                                 v9))) *
                                                                     (float)(v9 *
                                                                       v9))) *
                                                           (float)(v9 * v9))) *
                                                 (float)(v9 * v9))) *
                                       (float)(v9 * v9)) +
                               1.0f))) +
                   (float)((float)(v17 *
                             (float)((float)((float)-(float)(v14 -
                                               (float)((float)(v13 +
                                                         (float)((float)-(
                                                                   float)(v12 -
                                                                   (float)((float)(v11 -
                                                                             (float)(v10 *
                                                                               (float)(v17 *
                                                                                 v17))) *
                                                                     (float)(v17 *
                                                                       v17))) *
                                                           (float)(v17 *
                                                             v17))) *
                                                 (float)(v17 * v17))) *
                                       (float)(v17 * v17)) +
                               1.0f)) *
                     a1[8])) +
           (float)((float)(v20 *
                     (float)((float)((float)-(float)(v14 -
                                       (float)((float)(v13 +
                                                 (float)((float)-(float)(v12 -
                                                           (float)((float)(v11 -
                                                                     (float)(v10 *
                                                                       (float)(v20 *
                                                                         v20))) *
                                                             (float)(v20 *
                                                               v20))) *
                                                   (float)(v20 * v20))) *
                                         (float)(v20 * v20))) *
                               (float)(v20 * v20)) +
                       1.0f)) *
             a1[9])) +
    (float)((float)(v23 *
              (float)((float)((float)-(float)(v14 -
                                (float)((float)(v13 +
                                          (float)((float)-(float)(v12 -
                                                    (float)((float)(v11 -
                                                              (float)(v10 *
                                                                (float)(v23 *
                                                                  v23))) *
                                                      (float)(v23 * v23))) *
                                            (float)(v23 * v23))) *
                                  (float)(v23 * v23))) *
                        (float)(v23 * v23)) +
                1.0f)) *
      a1[10]);
}

float game_5c4de0(float a1, float a2)
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

  v2 = (float)(PSEUDO_UNFUSED(a1 * 0x1.aaaaaa0000000p+0f)) +
       (float)(roundf((float)(a1 * 0x1.aaaaaa0000000p+0f) *
                      0x1.45f3060000000p-3f) *
               -0x1.921fb60000000p+2f);
  if (v2 <= 0x1.921fb60000000p+0f) {
    if (v2 >= -0x1.921fb60000000p+0f) {
      goto LABEL_6;
    }
    v3 = -0x1.921fb60000000p+1f;
  }
  else {
    v3 = 0x1.921fb60000000p+1f;
  }
  v2 = v3 - v2;
LABEL_6:
  v4 = (float)(PSEUDO_UNFUSED(a2 * 0x1.aaaaaa0000000p+0f)) +
       (float)(roundf((float)(a2 * 0x1.aaaaaa0000000p+0f) *
                      0x1.45f3060000000p-3f) *
               -0x1.921fb60000000p+2f);
  if (v4 <= 0x1.921fb60000000p+0f) {
    if (v4 >= -0x1.921fb60000000p+0f) {
      goto LABEL_11;
    }
    v5 = -0x1.921fb60000000p+1f;
  }
  else {
    v5 = 0x1.921fb60000000p+1f;
  }
  v4 = v5 - v4;
LABEL_11:
  v6 = (float)(PSEUDO_UNFUSED(a1 * 0x1.30c30c0000000p+1f)) +
       (float)(roundf((float)(a1 * 0x1.30c30c0000000p+1f) *
                      0x1.45f3060000000p-3f) *
               -0x1.921fb60000000p+2f);
  if (v6 <= 0x1.921fb60000000p+0f) {
    if (v6 >= -0x1.921fb60000000p+0f) {
      goto LABEL_16;
    }
    v7 = -0x1.921fb60000000p+1f;
  }
  else {
    v7 = 0x1.921fb60000000p+1f;
  }
  v6 = v7 - v6;
LABEL_16:
  v8 = (float)(PSEUDO_UNFUSED(a2 * 0x1.30c30c0000000p+1f)) +
       (float)(roundf((float)(a2 * 0x1.30c30c0000000p+1f) *
                      0x1.45f3060000000p-3f) *
               -0x1.921fb60000000p+2f);
  if (v8 <= 0x1.921fb60000000p+0f) {
    if (v8 >= -0x1.921fb60000000p+0f) {
      goto LABEL_21;
    }
    v9 = -0x1.921fb60000000p+1f;
  }
  else {
    v9 = 0x1.921fb60000000p+1f;
  }
  v8 = v9 - v8;
LABEL_21:
  v10 = (float)(PSEUDO_UNFUSED(a1 * 0x1.1642c80000000p+2f)) +
        (float)(roundf((float)(a1 * 0x1.1642c80000000p+2f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v10 <= 0x1.921fb60000000p+0f) {
    if (v10 >= -0x1.921fb60000000p+0f) {
      goto LABEL_26;
    }
    v11 = -0x1.921fb60000000p+1f;
  }
  else {
    v11 = 0x1.921fb60000000p+1f;
  }
  v10 = v11 - v10;
LABEL_26:
  v12 = (float)(PSEUDO_UNFUSED(a2 * 0x1.1642c80000000p+2f)) +
        (float)(roundf((float)(a2 * 0x1.1642c80000000p+2f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v12 <= 0x1.921fb60000000p+0f) {
    if (v12 >= -0x1.921fb60000000p+0f) {
      goto LABEL_31;
    }
    v13 = -0x1.921fb60000000p+1f;
  }
  else {
    v13 = 0x1.921fb60000000p+1f;
  }
  v12 = v13 - v12;
LABEL_31:
  v14 = (float)(PSEUDO_UNFUSED(a1 * 0x1.aaaaaa0000000p+2f)) +
        (float)(roundf((float)(a1 * 0x1.aaaaaa0000000p+2f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v14 <= 0x1.921fb60000000p+0f) {
    if (v14 >= -0x1.921fb60000000p+0f) {
      goto LABEL_36;
    }
    v15 = -0x1.921fb60000000p+1f;
  }
  else {
    v15 = 0x1.921fb60000000p+1f;
  }
  v14 = v15 - v14;
LABEL_36:
  v16 = *(float*)GameData_212c190;
  v17 = *((float*)GameData_212c190 + 1);
  v18 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v19 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v20 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  v21 = (float)(PSEUDO_UNFUSED(a2 * 0x1.aaaaaa0000000p+2f)) +
        (float)(roundf((float)(a2 * 0x1.aaaaaa0000000p+2f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v21 > 0x1.921fb60000000p+0f) {
    v22 = 0x1.921fb60000000p+1f;
  LABEL_40:
    v21 = v22 - v21;
    goto LABEL_41;
  }
  if (v21 < -0x1.921fb60000000p+0f) {
    v22 = -0x1.921fb60000000p+1f;
    goto LABEL_40;
  }
LABEL_41:
  v23 =
      (float)(PSEUDO_UNFUSED(
          (float)((float)(PSEUDO_UNFUSED(
                      v4 *
                      (float)((float)((float)-(
                                          float)(v20 -
                                                 (float)((float)(v19 +
                                                                 (float)((float)-(
                                                                             float)(v18 -
                                                                                    (float)((float)(v17 -
                                                                                                    (float)(v16 *
                                                                                                            (float)(v4 *
                                                                                                                    v4))) *
                                                                                            (float)(v4 *
                                                                                                    v4))) *
                                                                         (float)(v4 *
                                                                                 v4))) *
                                                         (float)(v4 * v4))) *
                                      (float)(v4 * v4)) +
                              0x1.0000000000000p+0f))) -
                  (float)(PSEUDO_UNFUSED(
                      v2 *
                      (float)((float)((float)-(
                                          float)(v20 -
                                                 (float)((float)(v19 +
                                                                 (float)((float)-(
                                                                             float)(v18 -
                                                                                    (float)((float)(v17 -
                                                                                                    (float)(v16 *
                                                                                                            (float)(v2 *
                                                                                                                    v2))) *
                                                                                            (float)(v2 *
                                                                                                    v2))) *
                                                                         (float)(v2 *
                                                                                 v2))) *
                                                         (float)(v2 * v2))) *
                                      (float)(v2 * v2)) +
                              0x1.0000000000000p+0f)))) *
          0x1.0000000000000p+2f)) +
      (float)(PSEUDO_UNFUSED(
          (float)((float)(PSEUDO_UNFUSED(
                      v8 *
                      (float)((float)((float)-(
                                          float)(v20 -
                                                 (float)((float)(v19 +
                                                                 (float)((float)-(
                                                                             float)(v18 -
                                                                                    (float)((float)(v17 -
                                                                                                    (float)(v16 *
                                                                                                            (float)(v8 *
                                                                                                                    v8))) *
                                                                                            (float)(v8 *
                                                                                                    v8))) *
                                                                         (float)(v8 *
                                                                                 v8))) *
                                                         (float)(v8 * v8))) *
                                      (float)(v8 * v8)) +
                              0x1.0000000000000p+0f))) -
                  (float)(PSEUDO_UNFUSED(
                      v6 *
                      (float)((float)((float)-(
                                          float)(v20 -
                                                 (float)((float)(v19 +
                                                                 (float)((float)-(
                                                                             float)(v18 -
                                                                                    (float)((float)(v17 -
                                                                                                    (float)(v16 *
                                                                                                            (float)(v6 *
                                                                                                                    v6))) *
                                                                                            (float)(v6 *
                                                                                                    v6))) *
                                                                         (float)(v6 *
                                                                                 v6))) *
                                                         (float)(v6 * v6))) *
                                      (float)(v6 * v6)) +
                              0x1.0000000000000p+0f)))) *
          0x1.8000000000000p+1f));
  v24 =
      (float)(PSEUDO_UNFUSED(
          v12 *
          (float)((float)((float)-(
                              float)(v20 -
                                     (float)((float)(v19 +
                                                     (float)((float)-(
                                                                 float)(v18 -
                                                                        (float)((float)(v17 -
                                                                                        (float)(v16 *
                                                                                                (float)(v12 *
                                                                                                        v12))) *
                                                                                (float)(v12 *
                                                                                        v12))) *
                                                             (float)(v12 *
                                                                     v12))) *
                                             (float)(v12 * v12))) *
                          (float)(v12 * v12)) +
                  0x1.0000000000000p+0f))) -
      (float)(PSEUDO_UNFUSED(
          v10 *
          (float)((float)((float)-(
                              float)(v20 -
                                     (float)((float)(v19 +
                                                     (float)((float)-(
                                                                 float)(v18 -
                                                                        (float)((float)(v17 -
                                                                                        (float)(v16 *
                                                                                                (float)(v10 *
                                                                                                        v10))) *
                                                                                (float)(v10 *
                                                                                        v10))) *
                                                             (float)(v10 *
                                                                     v10))) *
                                             (float)(v10 * v10))) *
                          (float)(v10 * v10)) +
                  0x1.0000000000000p+0f)));
  return (float)(v23 + (float)(v24 + v24)) +
         (float)(PSEUDO_UNFUSED(
             (float)((float)(PSEUDO_UNFUSED(
                         v21 *
                         (float)((float)((float)-(
                                             float)(v20 -
                                                    (float)((float)(v19 +
                                                                    (float)((float)-(
                                                                                float)(v18 -
                                                                                       (float)((float)(v17 -
                                                                                                       (float)(v16 *
                                                                                                               (float)(v21 *
                                                                                                                       v21))) *
                                                                                               (float)(v21 *
                                                                                                       v21))) *
                                                                            (float)(v21 *
                                                                                    v21))) *
                                                            (float)(v21 *
                                                                    v21))) *
                                         (float)(v21 * v21)) +
                                 0x1.0000000000000p+0f))) -
                     (float)(PSEUDO_UNFUSED(
                         v14 *
                         (float)((float)((float)-(
                                             float)(v20 -
                                                    (float)((float)(v19 +
                                                                    (float)((float)-(
                                                                                float)(v18 -
                                                                                       (float)((float)(v17 -
                                                                                                       (float)(v16 *
                                                                                                               (float)(v14 *
                                                                                                                       v14))) *
                                                                                               (float)(v14 *
                                                                                                       v14))) *
                                                                            (float)(v14 *
                                                                                    v14))) *
                                                            (float)(v14 *
                                                                    v14))) *
                                         (float)(v14 * v14)) +
                                 0x1.0000000000000p+0f)))) *
             0x1.8000000000000p+0f));
}

float32x4_t game_5dd870(float32x4_t* a1, float32x4_t* a2, signed __int32 a3)
{
  unsigned __int64 v3;
  float32x4_t v4;
  unsigned __int64 v6;
  unsigned int* v7;
  unsigned int* v8;
  unsigned int* v9;
  float32x4_t result;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  unsigned __int64 v15;

  v3 = LANES128(a2[29]).n128_u64[0];
  v4 = (__typeof__(v4)){0};
  if ((signed __int32)LANES128(a2[2]).n128_u32[2] >= a3 && v3 != 0) {
    v6 = v3 + 16LL * a3;
    LANES128(v4).n128_u64[0] = *(_QWORD*)v6;
    LANES128(v4).n128_u64[1] = *(unsigned int*)(v6 + 8);
  }
  v7 = (unsigned int*)(LANES128(a2[33]).n128_u64[0] + 16LL * a3);
  v8 = (unsigned int*)(LANES128(a2[33]).n128_u64[1] + 16LL * a3);
  v9 = (unsigned int*)(LANES128(a2[34]).n128_u64[0] + 16LL * a3);
  if (*(_BYTE*)(LANES128(a2[10]).n128_u64[0] + 1875) == 2) {
    LANES128(v11).n128_u64[0] = *v7 | ((unsigned __int64)*v8 << 32);
    LANES128(v11).n128_u64[1] = *v9;
    LANES128(v12).n128_u64[0] = v7[1] | ((unsigned __int64)v8[1] << 32);
    LANES128(v12).n128_u64[1] = v9[1];
    LANES128(v13).n128_u64[0] = v7[2] | ((unsigned __int64)v8[2] << 32);
    LANES128(v13).n128_u64[1] = v9[2];
    LANES128(v14).n128_u64[0] = LANES128(a2[55]).n128_u64[0];
    v15 = LANES128(a2[55]).n128_u32[2];
  }
  else {
    if (*(_BYTE*)(LANES128(a2[10]).n128_u64[0] + 1875) == 0) {
      result = vaddq_f32(
          a2[55], vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(a2[52], LANES128(v4).n128_f32[0]), a2[53],
                          COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0]), 1),
                      a2[54], v4, 2));
      *a1 = result;
      return result;
    }
    LANES128(v11).n128_u64[0] = *v7 | ((unsigned __int64)*v8 << 32);
    LANES128(v11).n128_u64[1] = *v9;
    LANES128(v12).n128_u64[0] = v7[1] | ((unsigned __int64)v8[1] << 32);
    v15 = v9[3];
    LANES128(v12).n128_u64[1] = v9[1];
    LANES128(v13).n128_u64[0] = v7[2] | ((unsigned __int64)v8[2] << 32);
    LANES128(v13).n128_u64[1] = v9[2];
    LANES128(v14).n128_u64[0] = v7[3] | ((unsigned __int64)v8[3] << 32);
  }
  LANES128(v14).n128_u64[1] = v15;
  result = vaddq_f32(
      v14,
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v11, LANES128(v4).n128_f32[0]), v12,
                         COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0]), 1),
          v13, v4, 2));
  *a1 = result;
  return result;
}

void game_5dd9c0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                 __int64 a5, __int64 a6)
{

#pragma clang fp contract(off)
  __int64* v6;
  __int64 v7;
  __int64 v10;
  __int64 v11;
  int* v12;
  unsigned int v13;
  _QWORD* v14;
  __int64 v15;
  int v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  float v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  float v31;
  unsigned int v32;
  unsigned int v33;
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
  _QWORD v50[2];

  v6 = *(__int64**)(a3 + 1048);
  if (*((_DWORD*)v6 + 9) == 0) {
    return;
  }
  v7 = *(_QWORD*)(a3 + 568);
  v10 = a4 == 3 ? 0LL : *(_QWORD*)(v7 + 8LL * a4 + 832);
  v11 = *(_QWORD*)(v7 + 824);
  v12 = *(int**)(a6 + 48);
  if ((GameRoutine_5cc370(a2, (_QWORD*)a3, a4, v10, a5, a6) & 1) == 0) {
    return;
  }
  v13 = *(_DWORD*)(*(_QWORD*)(a3 + 568) + 976LL);
  v14 = (_QWORD*)GameRoutine_5df120(a3 + 1960, *((_DWORD*)v6 + 10));
  RectDrawer_5fd5f0(a2, v13, v14, 80, *(_QWORD*)(a3 + 2072));
  v34 = v6[2];
  v36 = v6[3];
  v38 = *v6;
  v40 = v6[1];
  v15 = GameData_21364a0[0];
  v16 = *(_DWORD*)(a3 + 68);
  v17 = *((_DWORD*)v6 + 9);
  v19 = *(_QWORD*)(*(_QWORD*)GameData_21364a0[0] + 8LL);
  v18 = *(_QWORD*)(*(_QWORD*)GameData_21364a0[0] + 16LL);
  v50[0] = 0;
  v50[1] = 0;
  v42 = v19;
  v44 = v18;
  v46 = v19;
  v48 = v18;
  v20 = *(_DWORD*)(*(_QWORD*)(a3 + 160) + 2232LL);
  v21 = GameRoutine_5de630(v12, v50, 96);
  if (v21 == 0) {
    GameRoutine_5c02b0(0, 0x8000);
    if (*(_DWORD*)(v11 + 8) != 1) {
      return;
    }
    goto LABEL_14;
  }
  *(_DWORD*)(v21 + 72) = 0;
  *(_QWORD*)(v21 + 80) = 0;
  *(_QWORD*)(v21 + 88) = 0;
  v22 = vcvtd_n_f64_s32(v17, 1u);
  *(float*)(v21 + 76) = (float)v20;
  *(_QWORD*)(v21 + 32) = v42;
  *(_QWORD*)(v21 + 40) = v44;
  *(_DWORD*)(v21 + 64) = v16;
  *(float*)(v21 + 68) = v22;
  *(_QWORD*)(v21 + 48) = v46;
  *(_QWORD*)(v21 + 56) = v48;
  *(_QWORD*)v21 = v34;
  *(_QWORD*)(v21 + 8) = v36;
  *(_QWORD*)(v21 + 16) = v38;
  *(_QWORD*)(v21 + 24) = v40;
  v23 = *(_DWORD*)(v10 + 324);
  v24 = *(_DWORD*)(v10 + 328);
  if (v23 != -1) {
    GameRoutine_5fe120(a2, v23, 0, v50, 96);
  }
  if (v24 != -1) {
    GameRoutine_5fe120(a2, v24, 4u, v50, 96);
  }
  GameRoutine_5de740(v12);
  GameRoutine_5fcc60(a2, 4u, *((_DWORD*)v6 + 9), 0);
  if (*(_DWORD*)(v11 + 8) == 1) {
  LABEL_14:
    v25 = *(_DWORD*)(a3 + 68);
    v26 = *((_DWORD*)v6 + 9);
    v35 = v6[2];
    v37 = v6[3];
    v39 = *v6;
    v41 = v6[1];
    v28 = *(_QWORD*)(*(_QWORD*)v15 + 8LL);
    v27 = *(_QWORD*)(*(_QWORD*)v15 + 16LL);
    v50[0] = 0;
    v50[1] = 0;
    v43 = v28;
    v45 = v27;
    v47 = v28;
    v49 = v27;
    v29 = *(_DWORD*)(*(_QWORD*)(a3 + 160) + 2232LL);
    v30 = GameRoutine_5de630(v12, v50, 96);
    if (v30 != 0) {
      *(_QWORD*)(v30 + 80) = 0;
      *(_QWORD*)(v30 + 88) = 0;
      v31 = vcvtd_n_f64_s32(v26, 1u);
      *(float*)(v30 + 76) = (float)v29;
      *(_QWORD*)(v30 + 32) = v43;
      *(_QWORD*)(v30 + 40) = v45;
      *(_DWORD*)(v30 + 64) = v25;
      *(float*)(v30 + 68) = v31;
      *(_QWORD*)(v30 + 48) = v47;
      *(_QWORD*)(v30 + 56) = v49;
      *(_QWORD*)v30 = v35;
      *(_QWORD*)(v30 + 8) = v37;
      *(_QWORD*)(v30 + 16) = v39;
      *(_QWORD*)(v30 + 24) = v41;
      *(_DWORD*)(v30 + 72) = 1065353216;
      v32 = *(_DWORD*)(v10 + 324);
      v33 = *(_DWORD*)(v10 + 328);
      if (v32 != -1) {
        GameRoutine_5fe120(a2, v32, 0, v50, 96);
      }
      if (v33 != -1) {
        GameRoutine_5fe120(a2, v33, 4u, v50, 96);
      }
      GameRoutine_5de740(v12);
      GameRoutine_5fcc60(a2, 4u, *((_DWORD*)v6 + 9), 0);
    }
    else {
      GameRoutine_5c02b0(0, 0x8000);
    }
  }
}

__int64 game_5ddd40(__int64 a1, __int64 a2, unsigned int a3, __int64 a4,
                    __int64 a5)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float32x4_t v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  __int64 v29;
  float32x4_t v30;
  float v31;
  float v32;
  float v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  int v42;
  float v43;
  float v44;
  float v45;
  float v46;
  int32x4_t v47;
  int32x4_t v48;
  int32x4_t v49;
  int32x4_t v50;
  float32x4_t v51;
  int8x16_t v52;
  int8x16_t v53;
  int8x16_t v54;
  float32x4_t v55;
  float32x4_t v56;
  int8x16_t v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float64x2_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  int8x16_t v79;
  float32x4_t v80;
  float32x4_t v81;
  float32x4_t v82;
  float32x4_t v83;
  float32x4_t v84;
  int8x16_t v85;
  float32x4_t v86;
  int* v87;
  __int64 v88;
  int v89;
  int v90;
  unsigned int v91;
  unsigned int v92;
  int8x16_t v93;
  int8x16_t v94;
  int8x16_t v95;
  int8x16_t v96;
  int v97;
  float32x4_t v98;
  float32x4_t v99;
  float32x4_t v100;
  float32x4_t v101;
  float32x4_t v102;
  float32x4_t v103;
  struct {
    float32x4_t v104;
    float32x4_t v105;
    float32x4_t v106;
    float32x4_t v107;
    char gap224_[88];
    int v108;
    int v109;
  } v104_;

  if (a3 == 3 || (v6 = *(_QWORD*)(a2 + 568),
                  (v7 = *(_QWORD*)(v6 + 8LL * a3 + 832)) == 0)) {
    GameRoutine_5c02b0(a2, 128);
    return 0;
  }
  else {
    v8 = *(_QWORD*)(v6 + 824);
    RectDrawer_5fd420(a1, *(_QWORD*)(v7 + 8), 0x1FFu);
    v13 = *(_DWORD*)(v8 + 52);
    v14 = *(_DWORD*)(v8 + 16);
    v15 = *(_DWORD*)(v8 + 20);
    v17 = *(_DWORD*)(v8 + 24);
    v16 = *(_DWORD*)(v8 + 28);
    v104_.v108 = *(_DWORD*)(v8 + 56);
    v104_.v109 = v13;
    v18 = *(_DWORD*)(v8 + 44);
    v97 = *(_DWORD*)(v8 + 48);
    if (*(float*)(v8 + 60) == 0x0.0p+0f) {
      LANES128(v12).n128_u32[0] = *(_DWORD*)(v8 + 64);
      v104_.v107 = (__typeof__(v104_.v107)){0};
      v104_.v106 = (__typeof__(v104_.v106)){0};
      v104_.v105 = (__typeof__(v104_.v105)){0};
      LANES128(v12).n128_u32[1] = *(_DWORD*)(v8 + 68);
      v104_.v104 = (__typeof__(v104_.v104)){0};
      LANES128(v12).n128_u32[2] = *(_DWORD*)(v8 + 72);
      v103 = v12;
      GameRoutine_5c4020(&v104_.v104, &v103);
      LANES128(v19).n128_u32[3] = LANES128(v104_.v107).n128_u32[3];
      v20 = vaddq_f32(
          vmlaq_laneq_f32(
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                  LANES128(v104_.v104).n128_f32[0]),
                      COERCE_AS(float32x4_t, GameData_1a83610),
                      COERCE_AS(float32x2_t, LANES128(v104_.v104).n128_u64[0]),
                      1),
                  COERCE_AS(float32x4_t, GameData_1a83090), v104_.v104, 2),
              COERCE_AS(float32x4_t, GameData_1a82dc0), v104_.v104, 3),
          COERCE_AS(float32x4_t, 0));
      v21 = vaddq_f32(
          vmlaq_laneq_f32(
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                  LANES128(v104_.v105).n128_f32[0]),
                      COERCE_AS(float32x4_t, GameData_1a83610),
                      COERCE_AS(float32x2_t, LANES128(v104_.v105).n128_u64[0]),
                      1),
                  COERCE_AS(float32x4_t, GameData_1a83090), v104_.v105, 2),
              COERCE_AS(float32x4_t, GameData_1a82dc0), v104_.v105, 3),
          COERCE_AS(float32x4_t, 0));
      v22 = vaddq_f32(
          vmlaq_laneq_f32(
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                  LANES128(v104_.v106).n128_f32[0]),
                      COERCE_AS(float32x4_t, GameData_1a83610),
                      COERCE_AS(float32x2_t, LANES128(v104_.v106).n128_u64[0]),
                      1),
                  COERCE_AS(float32x4_t, GameData_1a83090), v104_.v106, 2),
              COERCE_AS(float32x4_t, GameData_1a82dc0), v104_.v106, 3),
          COERCE_AS(float32x4_t, 0));
      LANES128(v19).n128_u64[0] = *(_QWORD*)(v8 + 32);
      LANES128(v19).n128_u32[2] = *(_DWORD*)(v8 + 40);
      v23 = vaddq_f32(
          v19,
          vmlaq_laneq_f32(
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                  LANES128(v104_.v107).n128_f32[0]),
                      COERCE_AS(float32x4_t, GameData_1a83610),
                      COERCE_AS(float32x2_t, LANES128(v104_.v107).n128_u64[0]),
                      1),
                  COERCE_AS(float32x4_t, GameData_1a83090), v104_.v107, 2),
              COERCE_AS(float32x4_t, GameData_1a82dc0), v104_.v107, 3));
      LANES128(v19).n128_u64[0] = *(_QWORD*)(a2 + 832);
      LANES128(v19).n128_u64[1] = *(unsigned int*)(a2 + 840);
      LANES128(v24).n128_u64[0] = *(_QWORD*)(a2 + 848);
      LANES128(v24).n128_u64[1] = *(unsigned int*)(a2 + 856);
      LANES128(v25).n128_u64[0] = *(_QWORD*)(a2 + 864);
      LANES128(v25).n128_u64[1] = *(unsigned int*)(a2 + 872);
      LANES128(v26).n128_u64[0] = *(_QWORD*)(a2 + 880);
      LANES128(v26).n128_u64[1] =
          *(unsigned int*)(a2 + 888) | 0x3F80000000000000LL;
      v101 = vmlaq_laneq_f32(
          vmlaq_laneq_f32(
              vmlaq_lane_f32(vmulq_n_f32(v19, LANES128(v21).n128_f32[0]), v24,
                             COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]),
                             1),
              v25, v21, 2),
          v26, v21, 3);
      v102 = vmlaq_laneq_f32(
          vmlaq_laneq_f32(
              vmlaq_lane_f32(vmulq_n_f32(v19, LANES128(v20).n128_f32[0]), v24,
                             COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]),
                             1),
              v25, v20, 2),
          v26, v20, 3);
      v100 = vmlaq_laneq_f32(
          vmlaq_laneq_f32(
              vmlaq_lane_f32(vmulq_n_f32(v19, LANES128(v22).n128_f32[0]), v24,
                             COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]),
                             1),
              v25, v22, 2),
          v26, v22, 3);
      v27 = vmlaq_laneq_f32(
          vmlaq_laneq_f32(
              vmlaq_lane_f32(vmulq_n_f32(v19, LANES128(v23).n128_f32[0]), v24,
                             COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]),
                             1),
              v25, v23, 2),
          v26, v23, 3);
    }
    else {
      v29 = *(_QWORD*)(a5 + 8);
      v104_.v107 = (__typeof__(v104_.v107)){0};
      v104_.v106 = (__typeof__(v104_.v106)){0};
      LANES128(v12).n128_u32[0] = *(_DWORD*)(v29 + 272);
      v104_.v105 = (__typeof__(v104_.v105)){0};
      v104_.v104 = (__typeof__(v104_.v104)){0};
      LANES128(v12).n128_u32[1] = *(_DWORD*)(v29 + 276);
      LANES128(v12).n128_u32[2] = *(_DWORD*)(v29 + 280);
      v30 = vaddq_f32(v12, COERCE_AS(float32x4_t, GameData_1a82dc0));
      v98 = v30;
      LANES128(v30).n128_u64[0] = *(_QWORD*)(v8 + 64);
      LANES128(v30).n128_u32[2] = *(_DWORD*)(v8 + 72);
      v103 = v30;
      GameRoutine_5c4020(&v104_.v104, &v103);
      v31 = *(float*)(v8 + 40);
      v32 = *(float*)(v8 + 32);
      v33 = *(float*)(v8 + 36);
      *(float*)&v34 =
          (float)((float)(PSEUDO_UNFUSED(v33 * *(float*)(v29 + 196))) +
                  (float)(v32 * *(float*)(v29 + 192))) +
          (float)(v31 * *(float*)(v29 + 200));
      *(float*)&v35 =
          (float)((float)(PSEUDO_UNFUSED(v33 * *(float*)(v29 + 212))) +
                  (float)(v32 * *(float*)(v29 + 208))) +
          (float)(v31 * *(float*)(v29 + 216));
      *(float*)&v36 =
          (float)((float)(PSEUDO_UNFUSED(v33 * *(float*)(v29 + 228))) +
                  (float)(v32 * *(float*)(v29 + 224))) +
          (float)(v31 * *(float*)(v29 + 232));
      LANES128(v37).n128_u64[0] = __PAIR64__(v35, v34);
      v38 = vaddq_f32(
          vmlaq_laneq_f32(
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                  LANES128(v104_.v105).n128_f32[0]),
                      COERCE_AS(float32x4_t, GameData_1a83610),
                      COERCE_AS(float32x2_t, LANES128(v104_.v105).n128_u64[0]),
                      1),
                  COERCE_AS(float32x4_t, GameData_1a83090), v104_.v105, 2),
              COERCE_AS(float32x4_t, GameData_1a82dc0), v104_.v105, 3),
          COERCE_AS(float32x4_t, 0));
      v39 = vaddq_f32(
          vmlaq_laneq_f32(
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                  LANES128(v104_.v106).n128_f32[0]),
                      COERCE_AS(float32x4_t, GameData_1a83610),
                      COERCE_AS(float32x2_t, LANES128(v104_.v106).n128_u64[0]),
                      1),
                  COERCE_AS(float32x4_t, GameData_1a83090), v104_.v106, 2),
              COERCE_AS(float32x4_t, GameData_1a82dc0), v104_.v106, 3),
          COERCE_AS(float32x4_t, 0));
      LANES128(v37).n128_u64[1] = v36;
      v40 = vaddq_f32(
          vmlaq_laneq_f32(
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                  LANES128(v104_.v104).n128_f32[0]),
                      COERCE_AS(float32x4_t, GameData_1a83610),
                      COERCE_AS(float32x2_t, LANES128(v104_.v104).n128_u64[0]),
                      1),
                  COERCE_AS(float32x4_t, GameData_1a83090), v104_.v104, 2),
              COERCE_AS(float32x4_t, GameData_1a82dc0), v104_.v104, 3),
          COERCE_AS(float32x4_t, 0));
      v41 = vaddq_f32(
          vmlaq_laneq_f32(
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                  LANES128(v104_.v107).n128_f32[0]),
                      COERCE_AS(float32x4_t, GameData_1a83610),
                      COERCE_AS(float32x2_t, LANES128(v104_.v107).n128_u64[0]),
                      1),
                  COERCE_AS(float32x4_t, GameData_1a83090), v104_.v107, 2),
              COERCE_AS(float32x4_t, GameData_1a82dc0), v104_.v107, 3),
          v37);
      v101 = vmlaq_laneq_f32(
          vmlaq_laneq_f32(
              vmlaq_lane_f32(
                  vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                              LANES128(v38).n128_f32[0]),
                  COERCE_AS(float32x4_t, GameData_1a83610),
                  COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]), 1),
              COERCE_AS(float32x4_t, GameData_1a83090), v38, 2),
          v98, v38, 3);
      v102 = vmlaq_laneq_f32(
          vmlaq_laneq_f32(
              vmlaq_lane_f32(
                  vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                              LANES128(v40).n128_f32[0]),
                  COERCE_AS(float32x4_t, GameData_1a83610),
                  COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]), 1),
              COERCE_AS(float32x4_t, GameData_1a83090), v40, 2),
          v98, v40, 3);
      v27 = vmlaq_laneq_f32(
          vmlaq_laneq_f32(
              vmlaq_lane_f32(
                  vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                              LANES128(v41).n128_f32[0]),
                  COERCE_AS(float32x4_t, GameData_1a83610),
                  COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0]), 1),
              COERCE_AS(float32x4_t, GameData_1a83090), v41, 2),
          v98, v41, 3);
      v100 = vmlaq_laneq_f32(
          vmlaq_laneq_f32(
              vmlaq_lane_f32(
                  vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                              LANES128(v39).n128_f32[0]),
                  COERCE_AS(float32x4_t, GameData_1a83610),
                  COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0]), 1),
              COERCE_AS(float32x4_t, GameData_1a83090), v39, 2),
          v98, v39, 3);
    }
    v99 = v27;
    v42 = (int)(float)(*(float*)(v8 + 12) + 0x1.0000000000000p+0f);
    if (v42 >= 1) {
      v43 = (float)v18;
      v44 = 0x0.0p+0f;
      v45 = 0x0.0p+0f;
      v46 = 0x0.0p+0f;
      v47 = vzip1q_s32(v102, v100);
      v48 = vzip1q_s32(v101, v27);
      v49 = vzip2q_s32(v101, v27);
      v50 = vzip2q_s32(v102, v100);
      v51 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v102).n128_u64[0]), 0);
      LANES128(v51).n128_u32[0] = LANES128(v101).n128_u32[0];
      v52 = vzip1q_s32(v47, v48);
      v53 = vzip1q_s32(v50, v49);
      v54 = vzip2q_s32(v50, v49);
      LANES128(v55).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
              .n64_u64[0];
      LANES128(v49).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
              .n64_u64[0];
      *(int32x2_t*)&LANES128(v55).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v101).n128_u64[0]), 0);
      LANES128(v56).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v56).n128_i8[8] =
          vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
      v57 = vzip2q_s32(v47, v48);
      v58 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v102).n128_u64[0]), 1);
      LANES128(v58).n128_u32[0] = LANES128(v101).n128_u32[1];
      LANES128(v48).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
              .n64_u64[0];
      LANES128(v59).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      *(int32x2_t*)&LANES128(v48).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v101).n128_u64[0]), 1);
      LANES128(v60).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v53, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v59).n128_i8[8] =
          vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
      v61 = vdupq_laneq_s32(v102, 2);
      *(int32x2_t*)&LANES128(v49).n128_i8[8] = vdup_laneq_s32(v101, 3);
      LANES128(v61).n128_u32[0] = LANES128(v101).n128_u32[2];
      *(int32x2_t*)&LANES128(v60).n128_i8[8] = vdup_laneq_s32(v101, 2);
      LANES128(v62).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v53, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v63).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      v64 = vextq_s8(v101, vdupq_laneq_s32(v102, 3), 0xCu);
      LANES128(v65).n128_u64[0] = 0x3F8000003F800000LL;
      LANES128(v65).n128_u64[1] = 0x3F8000003F800000LL;
      *(int8x8_t*)&LANES128(v62).n128_i8[8] =
          vqtbl1_s8(v53, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
      *(int8x8_t*)&LANES128(v63).n128_i8[8] =
          vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
      v66 = vnegq_f64(v65);
      v67 = vsubq_f32(vmulq_f32(v60, v63), vmulq_f32(v49, v62));
      v68 = vsubq_f32(vmulq_f32(v61, v63), vmulq_f32(v64, v62));
      v69 = vsubq_f32(vmulq_f32(v61, v49), vmulq_f32(v64, v60));
      v70 = vmlsq_f32(vmulq_f32(v58, v67), v68, v48);
      v71 = vmlsq_f32(vmulq_f32(v51, v67), v68, v55);
      LANES128(v68).n128_u64[0] = 0xBF800000BF800000LL;
      LANES128(v68).n128_u64[1] = 0xBF800000BF800000LL;
      v72 = vmlaq_f32(v70, v69, v59);
      v73 = vmlaq_f32(v71, v69, v56);
      v74 = vnegq_f64(v68);
      v75 = vsubq_f32(vmulq_f32(v55, v59), vmulq_f32(v48, v56));
      v76 = vsubq_f32(vmulq_f32(v51, v59), vmulq_f32(v58, v56));
      v77 = vsubq_f32(vmulq_f32(v51, v48), vmulq_f32(v55, v58));
      v78 = vmulq_f32(v72, v66);
      v79 = vmulq_f32(v52, v78);
      LANES128(v79).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v79, v79, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v79).n128_u64[0])))
              .n64_u64[0];
      v80 = vmlaq_f32(vmlsq_f32(vmulq_f32(v64, v75), v76, v49), v77, v63);
      LANES128(v79).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v79).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v79).n128_u64[0])))
              .n64_u64[0];
      v81 = vmulq_f32(
          vmlaq_f32(vmlsq_f32(vmulq_f32(v61, v75), v76, v60), v77, v62), v74);
      LANES128(v79).n128_u64[1] = LANES128(v79).n128_u64[0];
      v82 = vrecpeq_f32(v79);
      v83 = vmulq_f32(v82, vrecpsq_f32(v82, v79));
      v84 = vrecpsq_f32(v83, v79);
      v85 = vceqzq_f32(v79);
      v86 = vmulq_f32(v83, v84);
      v93 = vbicq_s8(vmulq_f32(v81, v86), v85);
      v94 = vbicq_s8(vmulq_f32(vmulq_f32(v80, v66), v86), v85);
      v95 = vbicq_s8(vmulq_f32(v86, vmulq_f32(v73, v74)), v85);
      v96 = vbicq_s8(vmulq_f32(v86, v78), v85);
      do {
        v87 = *(int**)(a5 + 48);
        v104_.v104 = (__typeof__(v104_.v104)){0};
        v88 = GameRoutine_5de630(v87, &v104_.v104, 192);
        if (v88 == 0) {
          break;
        }
        *(float*)v88 = v46;
        *(float*)(v88 + 4) = v45;
        *(float*)(v88 + 8) = v44;
        v89 = *(_DWORD*)(v8 + 60);
        *(_DWORD*)(v88 + 28) = 0;
        *(float*)(v88 + 160) = v43;
        *(_DWORD*)(v88 + 164) = v16;
        *(_QWORD*)(v88 + 168) = 0;
        *(_DWORD*)(v88 + 176) = v14;
        *(_DWORD*)(v88 + 180) = v15;
        *(_DWORD*)(v88 + 184) = v17;
        *(_DWORD*)(v88 + 188) = 0;
        *(_DWORD*)(v88 + 12) = v89;
        *(_DWORD*)(v88 + 16) = v97;
        v90 = v104_.v108;
        *(_DWORD*)(v88 + 20) = v104_.v109;
        *(_DWORD*)(v88 + 24) = v90;
        *(float32x4_t*)(v88 + 32) = v102;
        *(float32x4_t*)(v88 + 48) = v101;
        *(float32x4_t*)(v88 + 64) = v100;
        *(float32x4_t*)(v88 + 80) = v99;
        *(int8x16_t*)(v88 + 96) = v96;
        *(int8x16_t*)(v88 + 112) = v95;
        *(int8x16_t*)(v88 + 128) = v94;
        *(int8x16_t*)(v88 + 144) = v93;
        v91 = *(_DWORD*)(v7 + 324);
        v92 = *(_DWORD*)(v7 + 328);
        if (v91 != -1) {
          GameRoutine_5fe120(a1, v91, 0, &v104_.v104, 192);
        }
        if (v92 != -1) {
          GameRoutine_5fe120(a1, v92, 4u, &v104_.v104, 192);
        }
        GameRoutine_5cccc0(*(_QWORD**)(a2 + 152), a1, a2, v7, a4, a5);
        --v42;
        v46 = v46 + *(float*)v8;
        v45 = v45 + *(float*)(v8 + 4);
        v44 = v44 + *(float*)(v8 + 8);
      } while (v42 != 0);
    }
    return 1;
  }
}

int* game_5de570(int* result)
{
  __int64 v1;
  int* v2;
  unsigned __int64 v3;
  int* v4;
  int* v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;

  if (*((_BYTE*)result + 48) == 1) {
    v1 = *result;
    v2 = result + 4;
    v3 = *(_QWORD*)&result[2 * v1 + 4];
    if (*((_QWORD*)result + 1) < v3) {
      *((_QWORD*)result + 1) = v3;
    }
    v4 = result + 14;
    v5 = result;
    v6 = (__int64)&result[108 * (int)v1 + 14];
    GameRoutine_5fcb80(v6);
    GameRoutine_5fcb70(v6);
    if (v5[1] == 3) {
      v7 = 3;
    }
    else {
      v7 = 2;
    }
    v8 = (*v5 + 1) % v7;
    v9 = (__int64)&v4[108 * v8];
    *v5 = v8;
    *(_QWORD*)(v9 + 416) = 0;
    result = (int*)GameRoutine_5fcb50(v9);
    v10 = *v5;
    *(_QWORD*)(v9 + 424) = result;
    *(_QWORD*)&v2[2 * v10] = 0;
  }
  return result;
}

float32x4_t game_5df170(float32x4_t* a1, float32x4_t* a2, int32x4_t* a3,
                        __int64 a4, int a5, double a6, double a7, double a8,
                        double a9, double a10)
{
  __int64 v13;
  float32x4_t v14;
  int32x4_t v15;
  float32x4_t v16;
  int v17;
  __int64 v18;
  unsigned int* v19;
  unsigned int* v20;
  unsigned int* v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  unsigned __int64 v26;
  float32x4_t v27;
  float32x4_t v28;
  float v29;
  float32x4_t v30;
  unsigned __int64 v31;
  float32x4_t v32;
  int v33;
  int v34;
  int v35;
  char* v36;
  float32x4_t v37;
  __int64 v38;
  unsigned int* v39;
  unsigned int* v40;
  unsigned int* v41;
  int32x4_t v42;
  int8x16_t v43;
  int8x16_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  int32x4_t v55;
  int32x4_t v56;
  int8x16_t v57;
  int8x16_t v58;
  int8x16_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  unsigned __int64 v64;
  int8x16_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  int8x16_t v69;
  int8x16_t v70;
  int8x16_t v71;
  float32x4_t result;
  unsigned __int64 v73;
  float v74;
  float32x4_t v75;

  v13 = *(_QWORD*)(LANES128(a3[35]).n128_u64[1] + 640);
  LODWORD(a10) = *(_DWORD*)(v13 + 32);
  if ((*(_BYTE*)(v13 + 1) & 1) != 0) {
    *(float*)&a10 = *(float*)&a10 * *(float*)(*(_QWORD*)(a4 + 32) + 16LL * a5);
  }
  v15 = vdupq_lane_s32(*(int32x2_t*)&a10, 0);
  v16 = *a1;
  v17 = *(unsigned __int8*)(v13 + 2);
  if (*(_BYTE*)(v13 + 2) != 0) {
    v18 = 16LL * a5;
    v19 = (unsigned int*)(LANES128(a3[33]).n128_u64[0] + v18);
    v20 = (unsigned int*)(LANES128(a3[33]).n128_u64[1] + v18);
    v21 = (unsigned int*)(LANES128(a3[34]).n128_u64[0] + v18);
    if (*(_BYTE*)(LANES128(a3[10]).n128_u64[0] + 1875) == 2) {
      LANES128(v22).n128_u64[0] = *v19 | ((unsigned __int64)*v20 << 32);
      LANES128(v22).n128_u64[1] = *v21;
      LANES128(v23).n128_u64[0] = v19[1] | ((unsigned __int64)v20[1] << 32);
      LANES128(v23).n128_u64[1] = v21[1];
      LANES128(v24).n128_u64[0] = v19[2] | ((unsigned __int64)v20[2] << 32);
      LANES128(v24).n128_u64[1] = v21[2];
      LANES128(v25).n128_u64[0] = LANES128(a3[55]).n128_u64[0];
      v26 = LANES128(a3[55]).n128_u32[2];
    }
    else {
      if (*(_BYTE*)(LANES128(a3[10]).n128_u64[0] + 1875) == 0) {
        v22 = a3[52];
        v23 = a3[53];
        v24 = a3[54];
        v25 = a3[55];
      LABEL_10:
        v16 = vaddq_f32(
            v25, vmlaq_laneq_f32(
                     vmlaq_lane_f32(
                         vmulq_n_f32(v22, LANES128(v16).n128_f32[0]), v23,
                         COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]), 1),
                     v24, v16, 2));
        goto LABEL_11;
      }
      LANES128(v22).n128_u64[0] = *v19 | ((unsigned __int64)*v20 << 32);
      LANES128(v22).n128_u64[1] = *v21;
      LANES128(v23).n128_u64[0] = v19[1] | ((unsigned __int64)v20[1] << 32);
      v26 = v21[3];
      LANES128(v23).n128_u64[1] = v21[1];
      LANES128(v24).n128_u64[0] = v19[2] | ((unsigned __int64)v20[2] << 32);
      LANES128(v24).n128_u64[1] = v21[2];
      LANES128(v25).n128_u64[0] = v19[3] | ((unsigned __int64)v20[3] << 32);
    }
    LANES128(v25).n128_u64[1] = v26;
    goto LABEL_10;
  }
LABEL_11:
  v27 = vmulq_n_f32(v16, *(float*)(v13 + 28));
  LANES128(v14).n128_u64[0] = *(_QWORD*)(v13 + 4);
  LANES128(v14).n128_u64[1] = *(unsigned int*)(v13 + 12);
  v28 = vmulq_n_f32(v14, LANES128(a3[4]).n128_f32[1]);
  v29 = LANES128(a3[4]).n128_f32[3];
  LANES128(v30).n128_u64[0] = *(_QWORD*)(v13 + 16);
  v75 = (__typeof__(v75)){0};
  v31 = *(unsigned int*)(v13 + 24);
  v32 = vaddq_f32(v15, vaddq_f32(v28, v27));
  if ((*(_BYTE*)v13 & 1) == 0) {
    v33 = (int)LANES128(v32).n128_f32[0];
    if ((int)LANES128(v32).n128_f32[0] < 0) {
      v33 = -v33;
    }
    v34 = (int)LANES128(v32).n128_f32[1];
    v35 = (int)LANES128(v32).n128_f32[2];
    if ((int)LANES128(v32).n128_f32[1] < 0) {
      v34 = -v34;
    }
    if (v35 < 0) {
      v35 = -v35;
    }
    v36 = (char*)(GameData_21a3a50 +
                  3LL * (v35 % GameData_21a3a48 +
                         (v34 % GameData_21a3a48 +
                          v33 % GameData_21a3a48 * GameData_21a3a48) *
                             GameData_21a3a48));
    LANES128(v37).n128_u32[3] = 0;
    LANES128(v37).n128_f32[0] = (float)*v36 / 0x1.fc00000000000p+6f;
    LANES128(v37).n128_f32[1] = (float)v36[1] / 0x1.fc00000000000p+6f;
    LANES128(v37).n128_f32[2] = (float)v36[2] / 0x1.fc00000000000p+6f;
    v75 = v37;
    if (v17 != 0) {
      goto LABEL_19;
    }
  LABEL_22:
    v45 = v75;
    goto LABEL_25;
  }
  v73 = LANES128(v30).n128_u64[0];
  v74 = v29;
  game_5df5f0(&GameData_21a3a48, &v75, LANES128(v32).n128_f32[0],
              LANES128(v32).n128_f32[1], LANES128(v32).n128_f32[2]);
  LANES128(v30).n128_u64[0] = v73;
  v29 = v74;
  if (*(_BYTE*)(v13 + 2) == 0) {
    goto LABEL_22;
  }
LABEL_19:
  v38 = 16LL * a5;
  v39 = (unsigned int*)(LANES128(a3[33]).n128_u64[0] + v38);
  v40 = (unsigned int*)(LANES128(a3[33]).n128_u64[1] + v38);
  v41 = (unsigned int*)(LANES128(a3[34]).n128_u64[0] + v38);
  if (*(_BYTE*)(LANES128(a3[10]).n128_u64[0] + 1875) != 0) {
    LANES128(v42).n128_u64[0] = *v39 | ((unsigned __int64)*v40 << 32);
    LANES128(v44).n128_u64[0] = v39[2] | ((unsigned __int64)v40[2] << 32);
    LANES128(v42).n128_u64[1] = *v41;
    LANES128(v43).n128_u64[0] = v39[1] | ((unsigned __int64)v40[1] << 32);
    LANES128(v43).n128_u64[1] = v41[1];
    LANES128(v44).n128_u64[1] = v41[2];
  }
  else {
    v42 = a3[52];
    v43 = a3[53];
    v44 = a3[54];
  }
  LANES128(v46).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v46).n128_i8[8] =
      vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v47).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v47).n128_i8[8] =
      vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v48 = vmulq_f32(vmulq_f32(v42, v46), v47);
  LANES128(v47).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v47).n128_i8[8] =
      vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v49).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v49).n128_i8[8] =
      vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v50 = vsubq_f32(v48, vmulq_f32(vmulq_f32(v42, v47), v49));
  LANES128(v50).n128_u64[0] = LANES128_OF(vpaddq_f32(v50, v50)).n128_u64[0];
  v51 = vaddq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v50).n128_u64[0]), 0),
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v50).n128_u64[0]), 1));
  v52 = vrecpeq_f32(v51);
  v53 = vmulq_f32(v52, vrecpsq_f32(v52, v51));
  v54 = vmulq_f32(v53, vrecpsq_f32(v53, v51));
  v55 = vzip1q_s32(v42, v44);
  v56 = vzip1q_s32(v43, COERCE_AS(int32x4_t, 0));
  v57 = vzip2q_s32(v55, v56);
  v58 = vzip1q_s32(vzip2q_s32(v42, v44),
                   vzip2q_s32(v43, COERCE_AS(int32x4_t, 0)));
  v59 = vzip1q_s32(v55, v56);
  LANES128(v60).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v61).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v62).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v63).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v59, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v60).n128_i8[8] =
      vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v64 = LANES64_OF(vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
            .n64_u64[0];
  *(int8x8_t*)&LANES128(v62).n128_i8[8] =
      vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v58).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v46).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v59, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v61).n128_u64[1] = v64;
  *(int8x8_t*)&LANES128(v63).n128_i8[8] =
      vqtbl1_s8(v59, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v65 = vceqzq_f32(v51);
  *(int8x8_t*)&LANES128(v58).n128_i8[8] =
      vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v46).n128_i8[8] =
      vqtbl1_s8(v59, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v66 = vmlsq_f32(vmulq_f32(v60, v61), v58, v62);
  v67 = vmulq_f32(v58, v63);
  v68 = vmlsq_f32(vmulq_f32(v62, v46), v61, v63);
  LANES128(v63).n128_u64[0] = 0x8000000080000000LL;
  LANES128(v63).n128_u64[1] = 0x8000000080000000LL;
  v69 = vmulq_f32(v54, v66);
  v70 = vmulq_f32(v54, v68);
  v71 = vmulq_f32(v54, vmlsq_f32(v67, v46, v60));
  v45 = vaddq_f32(
      vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(vbicq_s8(v69, v65), LANES128(v75).n128_f32[0]),
              vbicq_s8(v70, v65),
              COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0]), 1),
          vbicq_s8(v71, v65), v75, 2),
      vbicq_s8(vmlsq_f32(vmlsq_f32(vmulq_f32(v69, v63),
                                   COERCE_AS(float32x4_t, 0), v70),
                         COERCE_AS(float32x4_t, 0), v71),
               v65));
LABEL_25:
  LANES128(v30).n128_u64[1] = v31;
  result = vaddq_f32(*a2, vmulq_n_f32(vmulq_f32(v30, v45), v29));
  *a2 = result;
  return result;
}

float game_5df5f0(int* a1, float32x4_t* a2, float a3, float a4, float a5)
{
  int v5;
  int v6;
  float32x4_t v7;
  float32x4_t v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  int v20;
  float v21;
  int v22;
  float v23;
  int v24;
  __int64 v25;
  char* v26;
  float v27;
  float v28;
  float v29;
  float32x4_t v30;
  int v31;
  float result;
  float32x4_t v33;
  unsigned int v34;
  int v35;
  __int64 v36;
  char* v37;
  float32x4_t v38;
  int v39;
  float v40;
  float v41;
  __int64 v42;
  unsigned int v43;
  char* v44;
  float32x4_t v45;
  int v46;
  float32x4_t v47;
  __int64 v48;
  char* v49;
  unsigned int v50;
  unsigned int v51;
  float v52;
  char* v53;
  unsigned int v54;
  float32x4_t v55;
  float v56;
  float v57;
  char* v58;
  char* v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;

  v5 = (int)a3;
  v6 = *a1;
  LANES128(v7).n128_u32[3] = 0;
  LANES128(v8).n128_u32[3] = 0;
  v9 = (int)a4;
  v10 = (int)a5;
  if ((int)a3 >= 0) {
    v11 = (int)a3;
  }
  else {
    v11 = -v5;
  }
  if (v9 >= 0) {
    v12 = (int)a4;
  }
  else {
    v12 = -v9;
  }
  if (v10 >= 0) {
    v13 = (int)a5;
  }
  else {
    v13 = -v10;
  }
  v14 = v12 % v6;
  v15 = v11 % v6 * v6;
  v16 = (v15 + v12 % v6) * v6;
  v17 = *((_QWORD*)a1 + 1);
  v18 = v13 % v6;
  v19 = (char*)(v17 + 3 * (v16 + v18));
  v20 = v19[1];
  v21 = (float)*v19 / 0x1.fc00000000000p+6f;
  if (v5 + 1 >= 0) {
    v22 = v5 + 1;
  }
  else {
    v22 = ~v5;
  }
  v23 = (float)v19[2] / 0x1.fc00000000000p+6f;
  v24 = v22 % v6 * v6;
  v25 = (v24 + v14) * v6;
  v26 = (char*)(v17 + 3 * (v25 + v18));
  v27 = (float)v26[1] / 0x1.fc00000000000p+6f;
  v28 = a3 - (float)(int)a3;
  v29 = a4 - (float)(int)a4;
  LANES128(v30).n128_u32[3] = 0;
  LANES128(v30).n128_f32[0] = v21;
  if (v9 + 1 >= 0) {
    v31 = v9 + 1;
  }
  else {
    v31 = ~v9;
  }
  result = a5 - (float)(int)a5;
  LANES128(v33).n128_u32[3] = 0;
  LANES128(v30).n128_f32[1] = (float)v20 / 0x1.fc00000000000p+6f;
  *(float*)&v34 = (float)v26[2] / 0x1.fc00000000000p+6f;
  LANES128(v38).n128_f32[0] = (float)*v26 / 0x1.fc00000000000p+6f;
  LANES128(v30).n128_f32[2] = v23;
  v35 = v31 % v6;
  LANES128(v38).n128_f32[1] = v27;
  v36 = (v31 % v6 + v15) * v6;
  v37 = (char*)(v17 + 3 * (v36 + v18));
  LANES128(v38).n128_u64[1] = v34;
  v39 = v37[1];
  v40 = (float)*v37 / 0x1.fc00000000000p+6f;
  v41 = (float)v37[2];
  v42 = (v35 + v24) * v6;
  *(float*)&v43 = v41 / 0x1.fc00000000000p+6f;
  v44 = (char*)(v17 + 3 * (v42 + v18));
  LANES128(v45).n128_f32[0] = v40;
  LANES128(v45).n128_f32[1] = (float)v39 / 0x1.fc00000000000p+6f;
  LANES128(v45).n128_u64[1] = v43;
  if (v10 + 1 >= 0) {
    v46 = v10 + 1;
  }
  else {
    v46 = ~v10;
  }
  LANES128(v47).n128_f32[0] = (float)*v44 / 0x1.fc00000000000p+6f;
  LANES128(v47).n128_f32[1] = (float)v44[1] / 0x1.fc00000000000p+6f;
  v48 = v46 % v6;
  v49 = (char*)(v17 + 3 * (v48 + v16));
  LANES128(v47).n128_u64[1] =
      COERCE_UNSIGNED_INT((float)v44[2] / 0x1.fc00000000000p+6f);
  *(float*)&v50 = (float)*v49 / 0x1.fc00000000000p+6f;
  *(float*)&v51 = (float)v49[1] / 0x1.fc00000000000p+6f;
  v52 = (float)v49[2];
  v53 = (char*)(v17 + 3 * (v48 + v25));
  *(float*)&v54 = v52 / 0x1.fc00000000000p+6f;
  LANES128(v55).n128_u64[0] = __PAIR64__(v51, v50);
  v56 = (float)v53[1] / 0x1.fc00000000000p+6f;
  LANES128(v55).n128_u64[1] = v54;
  v57 = (float)v53[2];
  LANES128(v7).n128_f32[0] = (float)*v53 / 0x1.fc00000000000p+6f;
  v58 = (char*)(v17 + 3 * (v48 + v36));
  v59 = (char*)(v17 + 3 * (v48 + v42));
  LANES128(v7).n128_f32[1] = v56;
  LANES128(v7).n128_f32[2] = v57 / 0x1.fc00000000000p+6f;
  LANES128(v8).n128_f32[0] = (float)*v58 / 0x1.fc00000000000p+6f;
  LANES128(v8).n128_f32[1] = (float)v58[1] / 0x1.fc00000000000p+6f;
  LANES128(v8).n128_f32[2] = (float)v58[2] / 0x1.fc00000000000p+6f;
  LANES128(v33).n128_f32[0] = (float)*v59 / 0x1.fc00000000000p+6f;
  LANES128(v33).n128_f32[1] = (float)v59[1] / 0x1.fc00000000000p+6f;
  LANES128(v33).n128_f32[2] = (float)v59[2] / 0x1.fc00000000000p+6f;
  v60 = vmlaq_n_f32(v30, vsubq_f32(v38, v30), v28);
  v61 = vmlaq_n_f32(
      v60, vsubq_f32(vmlaq_n_f32(v45, vsubq_f32(v47, v45), v28), v60), v29);
  v62 = vmlaq_n_f32(v55, vsubq_f32(v7, v55), v28);
  *a2 = vmlaq_n_f32(
      v61,
      vsubq_f32(
          vmlaq_n_f32(v62,
                      vsubq_f32(vmlaq_n_f32(v8, vsubq_f32(v33, v8), v28), v62),
                      v29),
          v61),
      result);
  return result;
}

__int64 game_615300(__int64 a1, _QWORD* a2, int* a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;

  *(_QWORD*)a1 = *a2;
  v5 = a2[1];
  *(_QWORD*)(a1 + 8) = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_DWORD*)(a1 + 64) = 1065353216;
  *(_DWORD*)(a1 + 104) = 1065353216;
  GameRoutine_5fe220((_QWORD*)(a1 + 112));
  GameRoutine_5fe220((_QWORD*)(a1 + 176));
  GameRoutine_53b80((void*)(&v11), a3);
  v6 = v11;
  v7 = *(_QWORD*)(a1 + 16);
  v11 = 0;
  *(_QWORD*)(a1 + 16) = v6;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
    v8 = v11;
    v11 = 0;
    if (v8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
    }
  }
  v9 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 24) = v9;
  GameRoutine_5fc570(a1 + 112, v9 + 8);
  return GameRoutine_5fc5e0(a1 + 176, *(_QWORD*)(a1 + 24) + 40LL);
}

__int64 game_615760(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  __int64 v3;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  unsigned int v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  int v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  float v26;
  float v27;
  float v28;
  _BOOL8 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 primeEm;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  _QWORD* v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  _QWORD* v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64* v56;
  _QWORD* v57;
  unsigned __int64 v58;
  _QWORD v60[2];
  unsigned int v61;
  float v62;
  _BYTE v63[64];
  __int64 v64;

  v3 = *(_QWORD*)(a1 + 24);
  nn_os_LockMutex(v3 + 216);
  v7 = (__int64*)(a1 + 48);
  v6 = *(__int64**)(a1 + 48);
  v64 = -1;
  if (v6 == nullptr) {
  LABEL_4:
    v8 = *(_QWORD*)(a1 + 24);
    nn_os_LockMutex(v8 + 216);
    v9 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 16) + 64LL))(
        *(_QWORD*)(a1 + 16));
    nn_os_UnlockMutex(v8 + 216);
    v10 = *(_QWORD*)(a2 + 8);
    v11 = (__int64*)fw_memory_g_heap_manager_ptr;
    v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         64, 16, 0);
    (*(void (**)(_BYTE*))GameData_212c098[0])(v63);
    (*(void (**)(_BYTE*, __int64))GameData_212c0a0[0])(v63, *(_QWORD*)a1 + 8LL);
    (*(void (**)(__int64, _QWORD*, float*))GameData_212c0a8[0])(v10, v60, &v62);
    (*(void (**)(_BYTE*, _QWORD, _QWORD))GameData_212c0b0[0])(
        v63, LODWORD(v60[0]), LODWORD(v62));
    (*(void (**)(__int64, _QWORD*, float*, unsigned int*))GameData_212c0b8[0])(
        v10, v60, &v62, &v61);
    (*(void (**)(_BYTE*, _QWORD, _QWORD, _QWORD))GameData_212c0c0[0])(
        v63, LODWORD(v60[0]), LODWORD(v62), v61);
    (*(void (**)(__int64, _QWORD*, float*))GameData_212c0c8[0])(v10, v60, &v62);
    (*(void (**)(_BYTE*, float, float))GameData_212c0d0[0])(v63, *(float*)v60,
                                                            v62);
    (*(void (**)(__int64))GameData_212c0d8[0])(v10);
    (*(void (**)(_BYTE*))GameData_212c0e0[0])(v63);
    (*(void (**)(__int64, _QWORD*, float*))GameData_212c0e8[0])(v10, v60, &v62);
    (*(void (**)(_BYTE*, _QWORD, _QWORD))GameData_212c0f0[0])(
        v63, LODWORD(v60[0]), LODWORD(v62));
    v60[0] = 0;
    v60[1] = 0;
    (*(void (**)(__int64, _QWORD*))GameData_212c0f8[0])(v10, v60);
    (*(void (**)(_BYTE*, _QWORD*))GameData_212c100[0])(v63, v60);
    (*(void (**)(__int64))GameData_212c108[0])(v10);
    (*(void (**)(_BYTE*))GameData_212c110[0])(v63);
    v13 = (*(__int64 (**)(__int64))GameData_212c118[0])(v10);
    (*(void (**)(_BYTE*, _QWORD))GameData_212c120[0])(v63, v13);
    (*(void (**)(__int64, _BYTE*))GameData_212c128[0])(v12, v63);
    v60[0] = v12;
    v14 = std___1___hash_memory(v60, 8);
    v15 = *(_QWORD*)(a1 + 40);
    v16 = v14;
    if (v15 != 0) {
      v17 = v15 - 1;
      if ((v15 & (v15 - 1)) != 0) {
        v2 = v14;
        if (v14 >= v15) {
          v2 = v14 % v15;
        }
      }
      else {
        v2 = v17 & v14;
      }
      v20 = *(__int64**)(*(_QWORD*)(a1 + 32) + 8 * v2);
      if (v20 != nullptr) {
        v21 = *v20;
        if (*v20 != 0) {
          if ((v15 & v17) == 0) {
            while (1) {
              v23 = *(_QWORD*)(v21 + 8);
              if (v23 == v14) {
                if (*(_QWORD*)(v21 + 16) == v12) {
                  goto LABEL_101;
                }
              }
              else if ((v23 & v17) != v2) {
                goto LABEL_26;
              }
              v21 = *(_QWORD*)v21;
              if (v21 == 0) {
                goto LABEL_26;
              }
            }
          }
          do {
            v22 = *(_QWORD*)(v21 + 8);
            if (v22 == v14) {
              if (*(_QWORD*)(v21 + 16) == v12) {
                goto LABEL_101;
              }
            }
            else {
              if (v22 >= v15) {
                v22 %= v15;
              }
              if (v22 != v2) {
                break;
              }
            }
            v21 = *(_QWORD*)v21;
          } while (v21 != 0);
        }
      }
    }
  LABEL_26:
    v24 = fw_memory_HeapManager_Allocate(*v11, 32, 16, 0);
    v25 = *(_QWORD*)(a1 + 56);
    v26 = *(float*)(a1 + 64);
    v21 = v24;
    *(_QWORD*)v24 = 0;
    *(_QWORD*)(v24 + 8) = v16;
    *(_QWORD*)(v24 + 16) = v12;
    *(_DWORD*)(v24 + 24) = 0;
    v27 = (float)(unsigned __int64)(v25 + 1);
    if (v15 != 0 && (float)(v26 * (float)v15) >= v27) {
      goto LABEL_92;
    }
    v28 = v27 / v26;
    v29 = true;
    if (v15 >= 3) {
      v29 = (v15 & (v15 - 1)) != 0;
    }
    v30 = v29 | (2 * v15);
    v31 = vcvtps_u64_f32(v28);
    if (v30 <= v31) {
      v32 = v31;
    }
    else {
      v32 = v30;
    }
    if (v32 == 1) {
      v32 = 2;
    }
    else if ((v32 & (v32 - 1)) != 0) {
      primeEm = std___1___next_prime(v32);
      v15 = *(_QWORD*)(a1 + 40);
      v32 = primeEm;
    }
    if (v32 <= v15) {
      if (v32 >= v15) {
        goto LABEL_87;
      }
      v39 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 56) /
                           *(float*)(a1 + 64));
      if (v15 < 3 || (v15 & (v15 - 1)) != 0) {
        v39 = std___1___next_prime(v39);
      }
      else {
        v40 = 1LL << (-(char)__clz(v39 - 1) & 63);
        if (v39 >= 2) {
          v39 = v40;
        }
      }
      if (v32 <= v39) {
        v32 = v39;
      }
      if (v32 >= v15) {
        goto LABEL_87;
      }
      if (v32 == 0) {
        v53 = *(_QWORD*)(a1 + 32);
        *(_QWORD*)(a1 + 32) = 0;
        if (v53 != 0) {
          v54 = 128;
          if (*(_QWORD*)(*v11 + 200) == 0) {
            v54 = 56;
          }
          nn_mem_StandardAllocator_Free(*v11 + v54, v53);
        }
        *(_QWORD*)(a1 + 40) = 0;
        goto LABEL_87;
      }
    }
    if (v32 >> 61 != 0) {
      GameRoutine_60a210();
    }
    v34 = fw_memory_HeapManager_Allocate(*v11, 8 * v32, 16, 0);
    v35 = *(_QWORD*)(a1 + 32);
    *(_QWORD*)(a1 + 32) = v34;
    if (v35 != 0) {
      v36 = 128;
      if (*(_QWORD*)(*v11 + 200) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free(*v11 + v36, v35);
    }
    v37 = v32 & 7;
    *(_QWORD*)(a1 + 40) = v32;
    if (v32 >= 8) {
      v38 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v38) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v38 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v38 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v38 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v38 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v38 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v38 + 48) = 0;
        v41 = *(_QWORD*)(a1 + 32) + 8 * v38;
        v38 += 8;
        *(_QWORD*)(v41 + 56) = 0;
      } while ((v32 & 0x1FFFFFFFFFFFFFF8LL) != v38);
    }
    else {
      v38 = 0;
    }
    if ((v32 & 7) != 0) {
      v42 = 8 * v38;
      do {
        --v37;
        *(_QWORD*)(*(_QWORD*)(a1 + 32) + v42) = 0;
        v42 += 8;
      } while (v37 != 0);
    }
    v43 = (_QWORD*)*v7;
    if (*v7 != 0) {
      v44 = v43[1];
      v45 = v32 - 1;
      if ((v32 & (v32 - 1)) != 0) {
        if (v44 >= v32) {
          v44 %= v32;
        }
        *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v44) = v7;
        v46 = (_QWORD*)*v43;
        if (*v43 == 0) {
          goto LABEL_87;
        }
        while (1) {
          v47 = v46[1];
          if (v47 >= v32) {
            v47 %= v32;
          }
          if (v47 != v44) {
            v48 = *(_QWORD*)(a1 + 32);
            if (*(_QWORD*)(v48 + 8 * v47) == 0) {
              *(_QWORD*)(v48 + 8 * v47) = v43;
              goto LABEL_64;
            }
            *v43 = *v46;
            *v46 = **(_QWORD**)(*(_QWORD*)(a1 + 32) + 8 * v47);
            **(_QWORD**)(*(_QWORD*)(a1 + 32) + 8 * v47) = v46;
            v46 = v43;
          }
          v47 = v44;
        LABEL_64:
          v43 = v46;
          v46 = (_QWORD*)*v46;
          v44 = v47;
          if (v46 == nullptr) {
            goto LABEL_87;
          }
        }
      }
      v49 = v44 & v45;
      *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v49) = v7;
      while (1) {
        v50 = (_QWORD*)*v43;
        if (*v43 == 0) {
          break;
        }
        v51 = v50[1] & v45;
        if (v51 == v49) {
          v43 = (_QWORD*)*v43;
        }
        else {
          v52 = *(_QWORD*)(a1 + 32);
          if (*(_QWORD*)(v52 + 8 * v51) != 0) {
            *v43 = *v50;
            *v50 = **(_QWORD**)(*(_QWORD*)(a1 + 32) + 8 * v51);
            **(_QWORD**)(*(_QWORD*)(a1 + 32) + 8 * v51) = v50;
          }
          else {
            *(_QWORD*)(v52 + 8 * v51) = v43;
            v43 = v50;
            v49 = v51;
          }
        }
      }
    }
  LABEL_87:
    v15 = *(_QWORD*)(a1 + 40);
    if ((v15 & (v15 - 1)) != 0) {
      if (v16 >= v15) {
        v2 = v16 % v15;
      }
      else {
        v2 = v16;
      }
    }
    else {
      v2 = (v15 - 1) & v16;
    }
  LABEL_92:
    v55 = *(_QWORD*)(a1 + 32);
    v56 = *(__int64**)(v55 + 8 * v2);
    if (v56 != nullptr) {
      *(_QWORD*)v21 = *v56;
      *v56 = v21;
    }
    else {
      v57 = (_QWORD*)*v7;
      *v7 = v21;
      *(_QWORD*)v21 = v57;
      *(_QWORD*)(v55 + 8 * v2) = v7;
      if (v57 != nullptr) {
        v58 = v57[1];
        if ((v15 & (v15 - 1)) != 0) {
          if (v58 >= v15) {
            v58 %= v15;
          }
        }
        else {
          v58 &= v15 - 1;
        }
        *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v58) = v21;
      }
    }
    ++*(_QWORD*)(a1 + 56);
  LABEL_101:
    *(_DWORD*)(v21 + 24) = v9;
    GameRoutine_5fe250((_BYTE*)(a1 + 176));
    (*(void (**)(_QWORD, _QWORD, __int64))GameData_212c130)(
        *(_QWORD*)(a1 + 192), v9, v12);
    GameRoutine_5fe260((_BYTE*)(a1 + 176));
    v19 = a1 + 176;
    v18 = v9;
    goto LABEL_102;
  }
  while ((unsigned __int8)GameData_21a4698(v6[2], *(_QWORD*)(a2 + 8)) == 0) {
    v6 = (__int64*)*v6;
    if (v6 == nullptr) {
      goto LABEL_4;
    }
  }
  v18 = *((_DWORD*)v6 + 6);
  v19 = a1 + 176;
LABEL_102:
  GameRoutine_5fe290(v19, &v64, v18);
  nn_os_UnlockMutex(v3 + 216);
  return v64;
}

__n128 game_6160c0(__int64 a1, __int64 a2)
{
  __int64 v2;
  _QWORD* v4;
  unsigned int* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    __int64 v16;
    char gap16_[8];
    char v17;
  } v16_;
  __int64 v18;

  v2 = *(_QWORD*)(a1 + 24);
  v18 = a2;
  nn_os_LockMutex(v2 + 216);
  v4 = GameRoutine_616580((_QWORD*)(a1 + 72), &v18);
  if (v4 != nullptr) {
    --*(_DWORD*)(v4[3] + 4LL);
    v5 = (unsigned int*)v4[3];
    if ((int)v5[1] <= 0) {
      v6 = *(_QWORD*)(a1 + 24);
      v7 = *v5;
      v8 = v4;
      nn_os_LockMutex(v6 + 216);
      (*(void (**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 16) + 40LL))(
          *(_QWORD*)(a1 + 16), 0, v7);
      nn_os_UnlockMutex(v6 + 216);
      GameRoutine_616c40((void*)((__int64)&v16_.v16), (_QWORD*)(a1 + 72), v8);
      v9 = v16_.v16;
      v16_.v16 = 0;
      if (v9 != 0) {
        v10 = fw_memory_g_heap_manager_ptr;
        if (v16_.v17 == 1) {
          v11 = *(_QWORD*)(v9 + 24);
          *(_QWORD*)(v9 + 24) = 0;
          if (v11 != 0) {
            v12 = v9;
            v13 = 128;
            if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
              v13 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v13, v11);
            v9 = v12;
          }
        }
        v14 = 128;
        if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v14, v9);
      }
    }
  }
  return nn_os_UnlockMutex(v2 + 216);
}

__n128 game_6163e0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  unsigned int* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  struct {
    __int64 v20;
    char gap16_[8];
    char v21;
  } v20_;

  v2 = *(_QWORD*)(a1 + 24);
  nn_os_LockMutex(v2 + 216);
  v5 = *(unsigned int*)(*(_QWORD*)(a2 + 56) + 4LL);
  if ((int)v5 >= 1) {
    v6 = 8 * v5;
    v7 = 0;
    do {
      v19 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 40) + v7) + 136LL);
      v9 = GameRoutine_616580((_QWORD*)(a1 + 72), &v19);
      if (v9 != nullptr) {
        --*(_DWORD*)(v9[3] + 4LL);
        v10 = (unsigned int*)v9[3];
        if ((int)v10[1] <= 0) {
          v11 = *(_QWORD*)(a1 + 24);
          v12 = *v10;
          v13 = v9;
          nn_os_LockMutex(v11 + 216);
          (*(void (**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 16) + 40LL))(
              *(_QWORD*)(a1 + 16), 0, v12);
          nn_os_UnlockMutex(v11 + 216);
          GameRoutine_616c40((void*)((__int64)&v20_.v20), (_QWORD*)(a1 + 72),
                             v13);
          v14 = v20_.v20;
          v20_.v20 = 0;
          if (v14 != 0) {
            if (v20_.v21 == 1) {
              v15 = *(_QWORD*)(v14 + 24);
              *(_QWORD*)(v14 + 24) = 0;
              if (v15 != 0) {
                v16 = v14;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) != 0) {
                  v17 = 128;
                }
                else {
                  v17 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v15);
                v14 = v16;
              }
            }
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
              v8 = 128;
            }
            else {
              v8 = 56;
            }
            nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v8, v14);
          }
        }
      }
      v7 += 8;
    } while (v6 != v7);
  }
  return nn_os_UnlockMutex(v2 + 216);
}

_QWORD* game_6166c0(float* a1, __int64* a2, __int64 a3, _QWORD** a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD** v12;
  _QWORD* result;
  unsigned __int64 v14;
  __int64 v15;
  __int64* v16;
  _QWORD* v17;
  float v18;
  float v19;
  float v20;
  _BOOL8 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 primeEm;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64* v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  _QWORD* v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  _QWORD* v43;
  unsigned __int64 v44;
  _QWORD* v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;

  v5 = *a2;
  v53 = *a2;
  v8 = std___1___hash_memory(&v53, 8);
  v9 = *((_QWORD*)a1 + 1);
  v10 = v8;
  if (v9 != 0) {
    v11 = v9 - 1;
    if ((v9 & (v9 - 1)) != 0) {
      v4 = v8;
      if (v8 >= v9) {
        v4 = v8 % v9;
      }
    }
    else {
      v4 = v11 & v8;
    }
    v12 = *(_QWORD***)(*(_QWORD*)a1 + 8 * v4);
    if (v12 != nullptr) {
      result = *v12;
      if (*v12 != nullptr) {
        if ((v9 & v11) == 0) {
          while (1) {
            v15 = result[1];
            if (v15 == v10) {
              if (result[2] == v5) {
                return result;
              }
            }
            else if ((v15 & v11) != v4) {
              goto LABEL_23;
            }
            result = (_QWORD*)*result;
            if (result == nullptr) {
              goto LABEL_23;
            }
          }
        }
        do {
          v14 = result[1];
          if (v14 == v10) {
            if (result[2] == v5) {
              return result;
            }
          }
          else {
            if (v14 >= v9) {
              v14 %= v9;
            }
            if (v14 != v4) {
              break;
            }
          }
          result = (_QWORD*)*result;
        } while (result != nullptr);
      }
    }
  }
LABEL_23:
  v16 = (__int64*)fw_memory_g_heap_manager_ptr;
  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v17 = *a4;
  *result = 0;
  result[1] = v10;
  v18 = a1[8];
  result[2] = *v17;
  result[3] = 0;
  v19 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v9 == 0 || (float)(v18 * (float)v9) < v19) {
    v20 = v19 / v18;
    v21 = true;
    if (v9 >= 3) {
      v21 = (v9 & (v9 - 1)) != 0;
    }
    v22 = v21 | (2 * v9);
    v23 = vcvtps_u64_f32(v20);
    if (v22 <= v23) {
      primeEm = v23;
    }
    else {
      primeEm = v22;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v25 = result;
      primeEm = std___1___next_prime(primeEm);
      result = v25;
      v9 = *((_QWORD*)a1 + 1);
    }
    if (primeEm <= v9) {
      if (primeEm >= v9) {
        goto LABEL_84;
      }
      v32 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v9 < 3 || (v9 & (v9 - 1)) != 0) {
        v45 = result;
        v32 = std___1___next_prime(v32);
        result = v45;
      }
      else {
        v33 = 1LL << (-(char)__clz(v32 - 1) & 63);
        if (v32 >= 2) {
          v32 = v33;
        }
      }
      if (primeEm <= v32) {
        primeEm = v32;
      }
      if (primeEm >= v9) {
        goto LABEL_84;
      }
      if (primeEm == 0) {
        v46 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v46 != 0) {
          v47 = result;
          v48 = 128;
          if (*(_QWORD*)(*v16 + 200) == 0) {
            v48 = 56;
          }
          nn_mem_StandardAllocator_Free(*v16 + v48, v46);
          result = v47;
        }
        *((_QWORD*)a1 + 1) = 0;
        goto LABEL_84;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v26 = result;
    v27 = fw_memory_HeapManager_Allocate(*v16, 8 * primeEm, 16, 0);
    v28 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v27;
    if (v28 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*v16 + 200) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free(*v16 + v29, v28);
    }
    v30 = primeEm & 7;
    *((_QWORD*)a1 + 1) = primeEm;
    if (primeEm >= 8) {
      v31 = 0;
      result = v26;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 48) = 0;
        v34 = *(_QWORD*)a1 + 8 * v31;
        v31 += 8;
        *(_QWORD*)(v34 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v31);
    }
    else {
      v31 = 0;
      result = v26;
    }
    if ((primeEm & 7) != 0) {
      v35 = 8 * v31;
      do {
        --v30;
        *(_QWORD*)(*(_QWORD*)a1 + v35) = 0;
        v35 += 8;
      } while (v30 != 0);
    }
    v37 = (__int64*)(a1 + 4);
    v36 = *((_QWORD**)a1 + 2);
    if (v36 != nullptr) {
      v38 = v36[1];
      v39 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v38 >= primeEm) {
          v38 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v38) = v37;
        v40 = (_QWORD*)*v36;
        if (*v36 == 0) {
          goto LABEL_84;
        }
        while (1) {
          v41 = v40[1];
          if (v41 >= primeEm) {
            v41 %= primeEm;
          }
          if (v41 != v38) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v41) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v41) = v36;
              goto LABEL_61;
            }
            *v36 = *v40;
            *v40 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v41);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v41) = v40;
            v40 = v36;
          }
          v41 = v38;
        LABEL_61:
          v36 = v40;
          v40 = (_QWORD*)*v40;
          v38 = v41;
          if (v40 == nullptr) {
            goto LABEL_84;
          }
        }
      }
      v42 = v38 & v39;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v42) = v37;
      while (1) {
        v43 = (_QWORD*)*v36;
        if (*v36 == 0) {
          break;
        }
        v44 = v43[1] & v39;
        if (v44 == v42) {
          v36 = (_QWORD*)*v36;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v44) != 0) {
          *v36 = *v43;
          *v43 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v44);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v44) = v43;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v44) = v36;
          v36 = v43;
          v42 = v44;
        }
      }
    }
  LABEL_84:
    v9 = *((_QWORD*)a1 + 1);
    if ((v9 & (v9 - 1)) != 0) {
      if (v10 >= v9) {
        v4 = v10 % v9;
      }
      else {
        v4 = v10;
      }
    }
    else {
      v4 = (v9 - 1) & v10;
    }
  }
  v49 = *(_QWORD*)a1;
  v50 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
  if (v50 != nullptr) {
    *result = *v50;
    *v50 = result;
  }
  else {
    v51 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = result;
    *result = v51;
    *(_QWORD*)(v49 + 8 * v4) = a1 + 4;
    if (*result != 0) {
      v52 = *(_QWORD*)(*result + 8LL);
      if ((v9 & (v9 - 1)) != 0) {
        if (v52 >= v9) {
          v52 %= v9;
        }
      }
      else {
        v52 &= v9 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v52) = result;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return result;
}

int* game_64c980(int* result, int* a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4;
  int* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int* v22;
  int v23;
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
  int v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  char v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  char v50;
  _QWORD* v51;
  __int64 v52;
  _QWORD* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  int* v59;
  unsigned __int64 v61;
  int* v62;
  _QWORD* v63;
  int* v64;
  int* v65;
  __int64 v66;
  __int64 v67;
  _QWORD* v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  int* v72;
  _QWORD* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;

  if (a3 != 0) {
    v4 = a4;
    v5 = a2;
    if (a3 == 2) {
      v9 = *(a2 - 18);
      if (v9 >= *result) {
        *(_DWORD*)a4 = *result;
        *(_QWORD*)(a4 + 8) = *((_QWORD*)result + 1);
        *(_QWORD*)(a4 + 16) = *((_QWORD*)result + 2);
        *((_QWORD*)result + 1) = 0;
        *((_QWORD*)result + 2) = 0;
        *(_QWORD*)(a4 + 32) = 0;
        *(_QWORD*)(a4 + 40) = 0;
        *(_QWORD*)(a4 + 24) = 0;
        *(_QWORD*)(a4 + 24) = *((_QWORD*)result + 3);
        *(_QWORD*)(a4 + 32) = *((_QWORD*)result + 4);
        *(_QWORD*)(a4 + 40) = *((_QWORD*)result + 5);
        *((_QWORD*)result + 4) = 0;
        *((_QWORD*)result + 5) = 0;
        *((_QWORD*)result + 3) = 0;
        v56 = *((_QWORD*)result + 6);
        v57 = *((_QWORD*)result + 8);
        *(_QWORD*)(a4 + 56) = *((_QWORD*)result + 7);
        *(_QWORD*)(a4 + 64) = v57;
        *(_QWORD*)(a4 + 48) = v56;
        *((_QWORD*)result + 7) = 0;
        *((_QWORD*)result + 8) = 0;
        *((_QWORD*)result + 6) = 0;
        *(_DWORD*)(a4 + 72) = *(a2 - 18);
        *(_QWORD*)(a4 + 80) = *((_QWORD*)a2 - 8);
        *(_QWORD*)(a4 + 88) = *((_QWORD*)a2 - 7);
        *((_QWORD*)a2 - 8) = 0;
        *((_QWORD*)a2 - 7) = 0;
        *(_QWORD*)(a4 + 104) = 0;
        *(_QWORD*)(a4 + 112) = 0;
        *(_QWORD*)(a4 + 96) = 0;
        *(_QWORD*)(a4 + 96) = *((_QWORD*)a2 - 6);
        *(_QWORD*)(a4 + 104) = *((_QWORD*)a2 - 5);
        *(_QWORD*)(a4 + 112) = *((_QWORD*)a2 - 4);
        *((_QWORD*)a2 - 5) = 0;
        *((_QWORD*)a2 - 4) = 0;
        *((_QWORD*)a2 - 6) = 0;
        v12 = *((_QWORD*)a2 - 3);
        v13 = *((_QWORD*)a2 - 2);
        v14 = *((_QWORD*)a2 - 1);
        result = a2 - 6;
      }
      else {
        *(_DWORD*)a4 = v9;
        *(_QWORD*)(a4 + 8) = *((_QWORD*)a2 - 8);
        *(_QWORD*)(a4 + 16) = *((_QWORD*)a2 - 7);
        *((_QWORD*)a2 - 8) = 0;
        *((_QWORD*)a2 - 7) = 0;
        *(_QWORD*)(a4 + 32) = 0;
        *(_QWORD*)(a4 + 40) = 0;
        *(_QWORD*)(a4 + 24) = 0;
        *(_QWORD*)(a4 + 24) = *((_QWORD*)a2 - 6);
        *(_QWORD*)(a4 + 32) = *((_QWORD*)a2 - 5);
        *(_QWORD*)(a4 + 40) = *((_QWORD*)a2 - 4);
        *((_QWORD*)a2 - 5) = 0;
        *((_QWORD*)a2 - 4) = 0;
        *((_QWORD*)a2 - 6) = 0;
        v10 = *((_QWORD*)a2 - 3);
        v11 = *((_QWORD*)a2 - 1);
        *(_QWORD*)(a4 + 56) = *((_QWORD*)a2 - 2);
        *(_QWORD*)(a4 + 64) = v11;
        *(_QWORD*)(a4 + 48) = v10;
        *((_QWORD*)a2 - 2) = 0;
        *((_QWORD*)a2 - 1) = 0;
        *((_QWORD*)a2 - 3) = 0;
        *(_DWORD*)(a4 + 72) = *result;
        *(_QWORD*)(a4 + 80) = *((_QWORD*)result + 1);
        *(_QWORD*)(a4 + 88) = *((_QWORD*)result + 2);
        *((_QWORD*)result + 1) = 0;
        *((_QWORD*)result + 2) = 0;
        *(_QWORD*)(a4 + 104) = 0;
        *(_QWORD*)(a4 + 112) = 0;
        *(_QWORD*)(a4 + 96) = 0;
        *(_QWORD*)(a4 + 96) = *((_QWORD*)result + 3);
        *(_QWORD*)(a4 + 104) = *((_QWORD*)result + 4);
        *(_QWORD*)(a4 + 112) = *((_QWORD*)result + 5);
        *((_QWORD*)result + 4) = 0;
        *((_QWORD*)result + 5) = 0;
        *((_QWORD*)result + 3) = 0;
        v12 = *((_QWORD*)result + 6);
        v13 = *((_QWORD*)result + 7);
        result += 12;
        v14 = *((_QWORD*)result + 2);
      }
      *(_QWORD*)(a4 + 120) = v12;
      *(_QWORD*)(a4 + 128) = v13;
      *(_QWORD*)(a4 + 136) = v14;
      goto LABEL_48;
    }
    if (a3 == 1) {
      *(_DWORD*)a4 = *result;
      *(_QWORD*)(a4 + 8) = *((_QWORD*)result + 1);
      *(_QWORD*)(a4 + 16) = *((_QWORD*)result + 2);
      *((_QWORD*)result + 1) = 0;
      *((_QWORD*)result + 2) = 0;
      *(_QWORD*)(a4 + 32) = 0;
      *(_QWORD*)(a4 + 40) = 0;
      *(_QWORD*)(a4 + 24) = 0;
      *(_QWORD*)(a4 + 24) = *((_QWORD*)result + 3);
      *(_QWORD*)(a4 + 32) = *((_QWORD*)result + 4);
      *(_QWORD*)(a4 + 40) = *((_QWORD*)result + 5);
      *((_QWORD*)result + 4) = 0;
      *((_QWORD*)result + 5) = 0;
      *((_QWORD*)result + 3) = 0;
      v6 = *((_QWORD*)result + 6);
      v7 = *((_QWORD*)result + 7);
      result += 12;
      v8 = *((_QWORD*)result + 2);
      *(_QWORD*)(a4 + 48) = v6;
      *(_QWORD*)(a4 + 56) = v7;
      *(_QWORD*)(a4 + 64) = v8;
    LABEL_48:
      *((_QWORD*)result + 1) = 0;
      *((_QWORD*)result + 2) = 0;
      *(_QWORD*)result = 0;
      return result;
    }
    if ((__int64)a3 > 8) {
      v58 = a3 >> 1;
      v59 = result;
      v61 = 9 * (a3 >> 1);
      v62 = &result[18 * (a3 >> 1)];
      GameRoutine_64c460(result, v62, v58, (_DWORD*)a4, v58);
      result = GameRoutine_64c460(v62, v5, a3 - v58, (_DWORD*)(v4 + 8 * v61),
                                  a3 - v58);
      if (8 * v61 != 0) {
        v63 = (_QWORD*)(v4 + 48);
        v64 = v62;
        v65 = v59;
        while (v64 != v5) {
          v68 = v63 - 3;
          if (*v64 >= *v65) {
            *((_DWORD*)v63 - 12) = *v65;
            *(v63 - 5) = *((_QWORD*)v65 + 1);
            *(v63 - 4) = *((_QWORD*)v65 + 2);
            *((_QWORD*)v65 + 1) = 0;
            *((_QWORD*)v65 + 2) = 0;
            *(v63 - 2) = 0;
            *(v63 - 1) = 0;
            *v68 = 0;
            *(v63 - 3) = *((_QWORD*)v65 + 3);
            *(v63 - 2) = *((_QWORD*)v65 + 4);
            *(v63 - 1) = *((_QWORD*)v65 + 5);
            *((_QWORD*)v65 + 4) = 0;
            *((_QWORD*)v65 + 5) = 0;
            *((_QWORD*)v65 + 3) = 0;
            v66 = *((_QWORD*)v65 + 6);
            v67 = *((_QWORD*)v65 + 8);
            v63[1] = *((_QWORD*)v65 + 7);
            v63[2] = v67;
            *v63 = v66;
            *((_QWORD*)v65 + 7) = 0;
            *((_QWORD*)v65 + 8) = 0;
            *((_QWORD*)v65 + 6) = 0;
            v65 += 18;
          }
          else {
            *((_DWORD*)v63 - 12) = *v64;
            *(v63 - 5) = *((_QWORD*)v64 + 1);
            *(v63 - 4) = *((_QWORD*)v64 + 2);
            *((_QWORD*)v64 + 1) = 0;
            *((_QWORD*)v64 + 2) = 0;
            *(v63 - 2) = 0;
            *(v63 - 1) = 0;
            *v68 = 0;
            *(v63 - 3) = *((_QWORD*)v64 + 3);
            *(v63 - 2) = *((_QWORD*)v64 + 4);
            *(v63 - 1) = *((_QWORD*)v64 + 5);
            *((_QWORD*)v64 + 4) = 0;
            *((_QWORD*)v64 + 5) = 0;
            *((_QWORD*)v64 + 3) = 0;
            v69 = *((_QWORD*)v64 + 6);
            v70 = *((_QWORD*)v64 + 8);
            v63[1] = *((_QWORD*)v64 + 7);
            v63[2] = v70;
            *v63 = v69;
            *((_QWORD*)v64 + 7) = 0;
            *((_QWORD*)v64 + 8) = 0;
            *((_QWORD*)v64 + 6) = 0;
            v64 += 18;
          }
          v63 += 9;
          if (v65 == v62) {
            v4 = (__int64)(v63 - 6);
            goto LABEL_64;
          }
        }
        if (v65 != v62) {
          v71 = 0;
          do {
            v72 = &v65[v71 / 4];
            v73 = &v63[v71 / 8];
            v71 += 72LL;
            *((_DWORD*)v73 - 12) = *v72;
            *(v73 - 5) = *((_QWORD*)v72 + 1);
            *(v73 - 4) = *((_QWORD*)v72 + 2);
            *((_QWORD*)v72 + 1) = 0;
            *((_QWORD*)v72 + 2) = 0;
            *(v73 - 2) = 0;
            *(v73 - 1) = 0;
            *(v73 - 3) = 0;
            *(v73 - 3) = *((_QWORD*)v72 + 3);
            *(v73 - 2) = *((_QWORD*)v72 + 4);
            *(v73 - 1) = *((_QWORD*)v72 + 5);
            *((_QWORD*)v72 + 4) = 0;
            *((_QWORD*)v72 + 5) = 0;
            *((_QWORD*)v72 + 3) = 0;
            v74 = *((_QWORD*)v72 + 6);
            v75 = *((_QWORD*)v72 + 8);
            v73[1] = *((_QWORD*)v72 + 7);
            v73[2] = v75;
            *v73 = v74;
            *((_QWORD*)v72 + 7) = 0;
            *((_QWORD*)v72 + 8) = 0;
            *((_QWORD*)v72 + 6) = 0;
          } while (v72 + 18 != v62);
        }
      }
      else {
        v64 = v62;
      LABEL_64:
        while (v64 != v5) {
          *(_DWORD*)v4 = *v64;
          *(_QWORD*)(v4 + 8) = *((_QWORD*)v64 + 1);
          *(_QWORD*)(v4 + 16) = *((_QWORD*)v64 + 2);
          *((_QWORD*)v64 + 1) = 0;
          *((_QWORD*)v64 + 2) = 0;
          *(_QWORD*)(v4 + 32) = 0;
          *(_QWORD*)(v4 + 40) = 0;
          *(_QWORD*)(v4 + 24) = 0;
          *(_QWORD*)(v4 + 24) = *((_QWORD*)v64 + 3);
          *(_QWORD*)(v4 + 32) = *((_QWORD*)v64 + 4);
          *(_QWORD*)(v4 + 40) = *((_QWORD*)v64 + 5);
          *((_QWORD*)v64 + 4) = 0;
          *((_QWORD*)v64 + 5) = 0;
          *((_QWORD*)v64 + 3) = 0;
          v76 = *((_QWORD*)v64 + 6);
          v77 = *((_QWORD*)v64 + 8);
          *(_QWORD*)(v4 + 56) = *((_QWORD*)v64 + 7);
          *(_QWORD*)(v4 + 64) = v77;
          *(_QWORD*)(v4 + 48) = v76;
          *((_QWORD*)v64 + 7) = 0;
          *((_QWORD*)v64 + 8) = 0;
          *((_QWORD*)v64 + 6) = 0;
          v64 += 18;
          v4 += 72;
        }
      }
    }
    else if (result != a2) {
      *(_DWORD*)a4 = *result;
      *(_QWORD*)(a4 + 8) = *((_QWORD*)result + 1);
      *(_QWORD*)(a4 + 16) = *((_QWORD*)result + 2);
      *((_QWORD*)result + 1) = 0;
      *((_QWORD*)result + 2) = 0;
      *(_QWORD*)(a4 + 32) = 0;
      *(_QWORD*)(a4 + 40) = 0;
      *(_QWORD*)(a4 + 24) = 0;
      *(_QWORD*)(a4 + 24) = *((_QWORD*)result + 3);
      *(_QWORD*)(a4 + 32) = *((_QWORD*)result + 4);
      *(_QWORD*)(a4 + 40) = *((_QWORD*)result + 5);
      *((_QWORD*)result + 4) = 0;
      *((_QWORD*)result + 5) = 0;
      *((_QWORD*)result + 3) = 0;
      v15 = *((_QWORD*)result + 7);
      v16 = *((_QWORD*)result + 8);
      *(_QWORD*)(a4 + 48) = *((_QWORD*)result + 6);
      v17 = result + 18;
      *(_QWORD*)(a4 + 56) = v15;
      *(_QWORD*)(a4 + 64) = v16;
      *((_QWORD*)result + 7) = 0;
      *((_QWORD*)result + 8) = 0;
      *((_QWORD*)result + 6) = 0;
      if (result + 18 != a2) {
        v18 = a4;
        v19 = fw_memory_g_heap_manager_ptr;
        do {
          v22 = v17;
          v23 = result[18];
          if (v23 >= *(_DWORD*)v18) {
            *(_DWORD*)(v18 + 72) = v23;
            *(_QWORD*)(v18 + 80) = *((_QWORD*)result + 10);
            *(_QWORD*)(v18 + 88) = *((_QWORD*)result + 11);
            *((_QWORD*)result + 10) = 0;
            *((_QWORD*)result + 11) = 0;
            *(_QWORD*)(v18 + 104) = 0;
            *(_QWORD*)(v18 + 112) = 0;
            *(_QWORD*)(v18 + 96) = 0;
            *(_QWORD*)(v18 + 96) = *((_QWORD*)result + 12);
            *(_QWORD*)(v18 + 104) = *((_QWORD*)result + 13);
            *(_QWORD*)(v18 + 112) = *((_QWORD*)result + 14);
            *((_QWORD*)result + 13) = 0;
            *((_QWORD*)result + 14) = 0;
            *((_QWORD*)result + 12) = 0;
            v20 = *((_QWORD*)result + 15);
            v21 = *((_QWORD*)result + 17);
            *(_QWORD*)(v18 + 128) = *((_QWORD*)result + 16);
            *(_QWORD*)(v18 + 136) = v21;
            *(_QWORD*)(v18 + 120) = v20;
            *((_QWORD*)result + 16) = 0;
            *((_QWORD*)result + 17) = 0;
            *((_QWORD*)result + 15) = 0;
            goto LABEL_12;
          }
          v24 = *(_QWORD*)(v18 + 8);
          v25 = *(_QWORD*)(v18 + 16);
          *(_DWORD*)(v18 + 72) = *(_DWORD*)v18;
          v26 = v4;
          *(_QWORD*)(v18 + 8) = 0;
          *(_QWORD*)(v18 + 16) = 0;
          *(_QWORD*)(v18 + 80) = v24;
          *(_QWORD*)(v18 + 88) = v25;
          v27 = *(_QWORD*)(v18 + 56);
          v28 = *(_QWORD*)(v18 + 64);
          v29 = *(_QWORD*)(v18 + 24);
          v30 = *(_QWORD*)(v18 + 32);
          *(_QWORD*)(v18 + 24) = 0;
          *(_QWORD*)(v18 + 32) = 0;
          *(_QWORD*)(v18 + 96) = v29;
          *(_QWORD*)(v18 + 104) = v30;
          *(_QWORD*)(v18 + 56) = 0;
          *(_QWORD*)(v18 + 64) = 0;
          *(_QWORD*)(v18 + 128) = v27;
          *(_QWORD*)(v18 + 136) = v28;
          v31 = *(_QWORD*)(v18 + 40);
          v32 = *(_QWORD*)(v18 + 48);
          *(_QWORD*)(v18 + 40) = 0;
          *(_QWORD*)(v18 + 48) = 0;
          *(_QWORD*)(v18 + 112) = v31;
          *(_QWORD*)(v18 + 120) = v32;
          if (v18 == v4) {
            goto LABEL_45;
          }
          v26 = v18;
          v33 = v18;
          while (1) {
            v38 = *(_DWORD*)(v33 - 72);
            v33 -= 72;
            v37 = v38;
            if (*v22 >= v38) {
              break;
            }
            *(_DWORD*)v26 = v37;
            v39 = *(_QWORD*)(v26 - 64);
            v40 = *(_QWORD*)(v26 - 56);
            v41 = *(_QWORD*)(v26 + 16);
            *(_QWORD*)(v26 - 64) = 0;
            *(_QWORD*)(v26 - 56) = 0;
            *(_QWORD*)(v26 + 8) = v39;
            *(_QWORD*)(v26 + 16) = v40;
            if (v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
              std___1___shared_weak_count___release_weak(v41);
              v42 = *(_QWORD*)(v26 + 24);
              if (v42 != 0) {
              LABEL_21:
                v43 = *(_QWORD*)(v26 + 32);
                if (v42 == v43) {
                  goto LABEL_31;
                }
                v44 = *(_QWORD*)(v26 + 32);
                do {
                  v45 = *(_BYTE*)(v44 - 24);
                  v44 -= 24;
                  if ((v45 & 1) != 0) {
                    v46 = *(_QWORD*)(v43 - 8);
                    if (v46 != 0) {
                      if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
                        v47 = 128;
                      }
                      else {
                        v47 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v47, v46);
                    }
                  }
                  v43 = v44;
                } while (v44 != v42);
                v48 = *(_QWORD*)(v26 + 24);
                *(_QWORD*)(v26 + 32) = v42;
                v42 = v48;
                if (v48 != 0) {
                LABEL_31:
                  if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
                    v49 = 128;
                  }
                  else {
                    v49 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v49, v42);
                }
              }
            }
            else {
              v42 = *(_QWORD*)(v26 + 24);
              if (v42 != 0) {
                goto LABEL_21;
              }
            }
            v51 = (_QWORD*)(v26 + 48);
            v50 = *(_BYTE*)(v26 + 48);
            v52 = *(_QWORD*)(v26 - 40);
            *(_QWORD*)(v26 + 24) = *(_QWORD*)(v26 - 48);
            *(_QWORD*)(v26 + 32) = v52;
            *(_QWORD*)(v26 + 40) = *(_QWORD*)(v26 - 32);
            v53 = (_QWORD*)(v26 - 48);
            v53[1] = 0;
            v53[2] = 0;
            *v53 = 0;
            if ((v50 & 1) != 0) {
              v54 = *(_QWORD*)(v26 + 64);
              if (v54 != 0) {
                if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
                  v55 = 128;
                }
                else {
                  v55 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v55, v54);
              }
            }
            v34 = *(_QWORD*)(v26 - 24);
            v35 = *(_QWORD*)(v26 - 16);
            *(_WORD*)(v26 - 24) = 0;
            *v51 = v34;
            *(_QWORD*)(v26 + 56) = v35;
            v36 = *(_QWORD*)(v26 - 8);
            v26 = v33;
            v51[2] = v36;
            if (v33 == v4) {
              v26 = v4;
              break;
            }
          }
          v5 = a2;
        LABEL_45:
          GameRoutine_64d860(v26, (__int64)v22);
        LABEL_12:
          v18 += 72;
          v17 = v22 + 18;
          result = v22;
        } while (v22 + 18 != v5);
      }
    }
  }
  return result;
}

unsigned __int64* game_64d0e0(unsigned __int64* result, int* a2, int* a3,
                              __int64 a4, __int64 a5, _DWORD* a6, __int64 a7)
{
  int* v10;
  __int64 v11;
  __int64 i;
  __int64 v14;
  int* v15;
  unsigned __int64 v16;
  int* v17;
  int* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  int* v21;
  int* v22;
  int v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  int* v27;
  int* v28;
  int v29;
  int* v30;
  __int64 v31;
  unsigned __int64 v32;
  int* j;
  int* v34;
  int* v35;
  _BOOL4 v36;
  bool v37;
  __int64 v38;
  int* v39;
  int* v40;
  __int64 v41;
  int* v42;
  int* v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  int* v49;
  int* v50;
  __int64 v51;
  __int64 v52;
  _DWORD* v53;
  int v54;
  int v55;
  int* v56;
  unsigned __int64 v57;
  int* v58;
  int* v59;
  __int64 v60;
  __int64 v61;
  int* v62;
  int* v63;
  unsigned __int64 v64;
  int* v65;
  int* v66;
  __int64 v67;
  _DWORD* v68;
  unsigned __int64 v69;

  if (a5 == 0) {
    return result;
  }
  v10 = (int*)result;
  while (a4 > a7 && a5 > a7) {
    if (a4 == 0) {
      return result;
    }
    v11 = -a4;
    for (i = 0; *a2 >= v10[i]; i += 18) {
      if (__CFADD__(v11++, 1)) {
        return result;
      }
    }
    v14 = -v11;
    v15 = &v10[i];
    v68 = a6;
    if (-v11 >= a5) {
      if (v11 == -1) {
        return (unsigned __int64*)GameRoutine_64d6c0(&v10[i], (__int64)a2);
      }
      v24 = v14 / 2;
      v18 = &v10[18 * (v14 / 2) + i];
      if (a3 == a2) {
        v17 = a3;
      }
      else {
        v17 = a2;
        v25 = 0x8E38E38E38E38E39LL * (((char*)a3 - (char*)a2) >> 3);
        do {
          v26 = v25 >> 1;
          v27 = &v17[18 * (v25 >> 1)];
          v29 = *v27;
          v28 = v27 + 18;
          v25 += ~(v25 >> 1);
          if (v29 < *v18) {
            v17 = v28;
          }
          else {
            v25 = v26;
          }
        } while (v25 != 0);
      }
      v16 = 0x8E38E38E38E38E39LL * (((char*)v17 - (char*)a2) >> 3);
    }
    else {
      v16 = a5 / 2;
      v17 = &a2[18 * (a5 / 2)];
      if (v15 == a2) {
        v18 = a2;
      }
      else {
        v18 = &v10[i];
        v19 = 0x8E38E38E38E38E39LL * (((char*)a2 - (char*)v10 - i * 4) >> 3);
        do {
          v20 = v19 >> 1;
          v21 = &v18[18 * (v19 >> 1)];
          v23 = *v21;
          v22 = v21 + 18;
          v19 += ~(v19 >> 1);
          if (*v17 < v23) {
            v19 = v20;
          }
          else {
            v18 = v22;
          }
        } while (v19 != 0);
      }
      v24 = 0x8E38E38E38E38E39LL * (((char*)v18 - (char*)v10 - i * 4) >> 3);
    }
    v30 = v17;
    if (v18 != a2) {
      v30 = v18;
      if (a2 != v17) {
        v31 = a7;
        v64 = v24;
        v65 = v15;
        v32 = v16;
        v66 = a3;
        v67 = a5;
        GameRoutine_64d6c0(v18, (__int64)a2);
        v30 = v18 + 18;
        for (j = a2 + 18; j != v17; j += 18) {
          if (v30 == a2) {
            a2 = j;
          }
          GameRoutine_64d6c0(v30, (__int64)j);
          v30 += 18;
        }
        if (v30 != a2) {
          v34 = v30;
          v35 = a2;
          while (1) {
            GameRoutine_64d6c0(v34, (__int64)v35);
            v35 += 18;
            v36 = v34 + 18 == a2;
            if (v35 == v17) {
              if (v34 + 18 == a2) {
                break;
              }
              v35 = a2 + 18;
              v34 += 36;
              while (1) {
                GameRoutine_64d6c0(v34 - 18, (__int64)a2);
                v36 = v34 == a2;
                if (v35 != v17) {
                  break;
                }
                v37 = v34 == a2;
                v34 += 18;
                if (v37) {
                  goto LABEL_49;
                }
              }
            }
            else {
              v34 += 18;
            }
            if (v36) {
              a2 = v35;
            }
          }
        }
      LABEL_49:
        a3 = v66;
        a5 = v67;
        v24 = v64;
        v15 = v65;
        v16 = v32;
        a7 = v31;
      }
    }
    v38 = a5 - v16;
    a4 = -v11 - v24;
    if ((__int64)(v24 + v16) >= (__int64)(a5 - (v24 + v16) - v11)) {
      v43 = v15;
      v44 = v24;
      v45 = -v11 - v24;
      v41 = a7;
      v46 = v16;
      result =
          game_64d0e0((unsigned __int64*)v30, v17, a3, v45, a5 - v16, v68, a7);
      v42 = v43;
      v17 = v18;
      a6 = v68;
      v38 = v46;
      a4 = v44;
      a3 = v30;
    }
    else {
      v39 = v18;
      a6 = v68;
      v40 = a3;
      v41 = a7;
      result = game_64d0e0((unsigned __int64*)v15, v39, v30, v24, v16, v68, a7);
      a3 = v40;
      v42 = v30;
    }
    a5 = v38;
    v10 = v42;
    a2 = v17;
    a7 = v41;
    if (v38 == 0) {
      return result;
    }
  }
  if (a4 <= a5) {
    if (v10 != a2) {
      v57 = 0;
      v58 = a6;
      v59 = v10;
      do {
        ++v57;
        *v58 = *v59;
        *((_QWORD*)v58 + 1) = *((_QWORD*)v59 + 1);
        *((_QWORD*)v58 + 2) = *((_QWORD*)v59 + 2);
        *((_QWORD*)v59 + 1) = 0;
        *((_QWORD*)v59 + 2) = 0;
        *((_QWORD*)v58 + 4) = 0;
        *((_QWORD*)v58 + 5) = 0;
        *((_QWORD*)v58 + 3) = 0;
        *((_QWORD*)v58 + 3) = *((_QWORD*)v59 + 3);
        *((_QWORD*)v58 + 4) = *((_QWORD*)v59 + 4);
        *((_QWORD*)v58 + 5) = *((_QWORD*)v59 + 5);
        *((_QWORD*)v59 + 4) = 0;
        *((_QWORD*)v59 + 5) = 0;
        *((_QWORD*)v59 + 3) = 0;
        v60 = *((_QWORD*)v59 + 6);
        v61 = *((_QWORD*)v59 + 8);
        *((_QWORD*)v58 + 7) = *((_QWORD*)v59 + 7);
        *((_QWORD*)v58 + 8) = v61;
        *((_QWORD*)v58 + 6) = v60;
        *((_QWORD*)v59 + 7) = 0;
        *((_QWORD*)v59 + 8) = 0;
        *((_QWORD*)v59 + 6) = 0;
        v59 += 18;
        v58 += 18;
      } while (v59 != a2);
      v69 = v57;
      v62 = a6;
      while (a2 != a3) {
        v63 = a3;
        if (*a2 >= *v62) {
          result =
              (unsigned __int64*)GameRoutine_64d860((__int64)v10, (__int64)v62);
          v62 += 18;
        }
        else {
          result =
              (unsigned __int64*)GameRoutine_64d860((__int64)v10, (__int64)a2);
          a2 += 18;
        }
        v10 += 18;
        a3 = v63;
        if (v58 == v62) {
          goto LABEL_85;
        }
      }
      do {
        result =
            (unsigned __int64*)GameRoutine_64d860((__int64)v10, (__int64)v62);
        v10 += 18;
        v37 = v58 - 18 == v62;
        v62 += 18;
      } while (!v37);
      goto LABEL_85;
    }
  }
  else if (a2 != a3) {
    v47 = 0;
    v48 = 0;
    do {
      v49 = &a2[v47];
      v50 = &a6[v47];
      ++v48;
      v47 += 18;
      *v50 = *v49;
      *((_QWORD*)v50 + 1) = *((_QWORD*)v49 + 1);
      *((_QWORD*)v50 + 2) = *((_QWORD*)v49 + 2);
      *((_QWORD*)v49 + 1) = 0;
      *((_QWORD*)v49 + 2) = 0;
      *((_QWORD*)v50 + 4) = 0;
      *((_QWORD*)v50 + 5) = 0;
      *((_QWORD*)v50 + 3) = 0;
      *((_QWORD*)v50 + 3) = *((_QWORD*)v49 + 3);
      *((_QWORD*)v50 + 4) = *((_QWORD*)v49 + 4);
      *((_QWORD*)v50 + 5) = *((_QWORD*)v49 + 5);
      *((_QWORD*)v49 + 4) = 0;
      *((_QWORD*)v49 + 5) = 0;
      *((_QWORD*)v49 + 3) = 0;
      v51 = *((_QWORD*)v49 + 6);
      v52 = *((_QWORD*)v49 + 8);
      *((_QWORD*)v50 + 7) = *((_QWORD*)v49 + 7);
      *((_QWORD*)v50 + 8) = v52;
      *((_QWORD*)v50 + 6) = v51;
      *((_QWORD*)v49 + 7) = 0;
      *((_QWORD*)v49 + 8) = 0;
      *((_QWORD*)v49 + 6) = 0;
    } while (v49 + 18 != a3);
    result = (unsigned __int64*)(a3 - 18);
    v53 = &a6[v47];
    v69 = v48;
    while (a2 != v10) {
      v54 = *(a2 - 18);
      v55 = *(v53 - 18);
      if (v55 >= v54) {
        v56 = v53 - 18;
      }
      else {
        v56 = a2 - 18;
      }
      if (v55 >= v54) {
        v53 -= 18;
      }
      else {
        a2 -= 18;
      }
      result = (unsigned __int64*)(GameRoutine_64d860((__int64)result,
                                                      (__int64)v56) -
                                   72);
      if (v53 == a6) {
        goto LABEL_85;
      }
    }
    for (; v53 != a6;
         result = (unsigned __int64*)(GameRoutine_64d860((__int64)result,
                                                         (__int64)v53) -
                                      72)) {
      v53 -= 18;
    }
    goto LABEL_85;
  }
  v69 = 0;
LABEL_85:
  if (a6 != nullptr) {
    return GameRoutine_64da00(&v69, (__int64)a6);
  }
  return result;
}

_QWORD* game_65c780(float* a1, unsigned __int64* a2, __int64* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v8;
  _QWORD** v9;
  _QWORD* result;
  unsigned __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  _BOOL8 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 primeEm;
  _QWORD* v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64* v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  _QWORD* v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  _QWORD* v41;
  unsigned __int64 v42;
  _QWORD* v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v49;
  unsigned __int64 v50;

  v4 = *a2;
  v5 = *((_QWORD*)a1 + 1);
  if (v5 != 0) {
    v8 = v5 - 1;
    if ((v5 & (v5 - 1)) != 0) {
      v3 = *a2;
      if (v4 >= v5) {
        v3 = v4 % v5;
      }
    }
    else {
      v3 = v8 & v4;
    }
    v9 = *(_QWORD***)(*(_QWORD*)a1 + 8 * v3);
    if (v9 != nullptr) {
      result = *v9;
      if (*v9 != nullptr) {
        if ((v5 & v8) == 0) {
          while (1) {
            v12 = result[1];
            if (v12 == v4) {
              if (result[2] == v4) {
                return result;
              }
            }
            else if ((v12 & v8) != v3) {
              goto LABEL_23;
            }
            result = (_QWORD*)*result;
            if (result == nullptr) {
              goto LABEL_23;
            }
          }
        }
        do {
          v11 = result[1];
          if (v11 == v4) {
            if (result[2] == v4) {
              return result;
            }
          }
          else {
            if (v11 >= v5) {
              v11 %= v5;
            }
            if (v11 != v3) {
              break;
            }
          }
          result = (_QWORD*)*result;
        } while (result != nullptr);
      }
    }
  }
LABEL_23:
  v13 = (__int64*)fw_memory_g_heap_manager_ptr;
  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v14 = *a3;
  v15 = a3[1];
  v16 = a1[8];
  *result = 0;
  result[1] = v4;
  result[2] = v14;
  result[3] = v15;
  v17 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v5 == 0 || (float)(v16 * (float)v5) < v17) {
    v18 = v17 / v16;
    v19 = true;
    if (v5 >= 3) {
      v19 = (v5 & (v5 - 1)) != 0;
    }
    v20 = v19 | (2 * v5);
    v21 = vcvtps_u64_f32(v18);
    if (v20 <= v21) {
      primeEm = v21;
    }
    else {
      primeEm = v20;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v23 = result;
      primeEm = std___1___next_prime(primeEm);
      result = v23;
      v5 = *((_QWORD*)a1 + 1);
    }
    if (primeEm <= v5) {
      if (primeEm >= v5) {
        goto LABEL_84;
      }
      v30 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v5 < 3 || (v5 & (v5 - 1)) != 0) {
        v43 = result;
        v30 = std___1___next_prime(v30);
        result = v43;
      }
      else {
        v31 = 1LL << (-(char)__clz(v30 - 1) & 63);
        if (v30 >= 2) {
          v30 = v31;
        }
      }
      if (primeEm <= v30) {
        primeEm = v30;
      }
      if (primeEm >= v5) {
        goto LABEL_84;
      }
      if (primeEm == 0) {
        v44 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v44 != 0) {
          v45 = result;
          v46 = 128;
          if (*(_QWORD*)(*v13 + 200) == 0) {
            v46 = 56;
          }
          nn_mem_StandardAllocator_Free(*v13 + v46, v44);
          result = v45;
        }
        *((_QWORD*)a1 + 1) = 0;
        goto LABEL_84;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v24 = result;
    v25 = fw_memory_HeapManager_Allocate(*v13, 8 * primeEm, 16, 0);
    v26 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v25;
    if (v26 != 0) {
      v27 = 128;
      if (*(_QWORD*)(*v13 + 200) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free(*v13 + v27, v26);
    }
    v28 = primeEm & 7;
    *((_QWORD*)a1 + 1) = primeEm;
    if (primeEm >= 8) {
      v29 = 0;
      result = v24;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v29) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v29 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v29 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v29 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v29 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v29 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v29 + 48) = 0;
        v32 = *(_QWORD*)a1 + 8 * v29;
        v29 += 8;
        *(_QWORD*)(v32 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v29);
    }
    else {
      v29 = 0;
      result = v24;
    }
    if ((primeEm & 7) != 0) {
      v33 = 8 * v29;
      do {
        --v28;
        *(_QWORD*)(*(_QWORD*)a1 + v33) = 0;
        v33 += 8;
      } while (v28 != 0);
    }
    v35 = (__int64*)(a1 + 4);
    v34 = *((_QWORD**)a1 + 2);
    if (v34 != nullptr) {
      v36 = v34[1];
      v37 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v36 >= primeEm) {
          v36 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v36) = v35;
        v38 = (_QWORD*)*v34;
        if (*v34 == 0) {
          goto LABEL_84;
        }
        while (1) {
          v39 = v38[1];
          if (v39 >= primeEm) {
            v39 %= primeEm;
          }
          if (v39 != v36) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v39) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v39) = v34;
              goto LABEL_61;
            }
            *v34 = *v38;
            *v38 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v39);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v39) = v38;
            v38 = v34;
          }
          v39 = v36;
        LABEL_61:
          v34 = v38;
          v38 = (_QWORD*)*v38;
          v36 = v39;
          if (v38 == nullptr) {
            goto LABEL_84;
          }
        }
      }
      v40 = v36 & v37;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v40) = v35;
      while (1) {
        v41 = (_QWORD*)*v34;
        if (*v34 == 0) {
          break;
        }
        v42 = v41[1] & v37;
        if (v42 == v40) {
          v34 = (_QWORD*)*v34;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v42) != 0) {
          *v34 = *v41;
          *v41 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v42);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v42) = v41;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v42) = v34;
          v34 = v41;
          v40 = v42;
        }
      }
    }
  LABEL_84:
    v5 = *((_QWORD*)a1 + 1);
    if ((v5 & (v5 - 1)) != 0) {
      if (v4 >= v5) {
        v3 = v4 % v5;
      }
      else {
        v3 = v4;
      }
    }
    else {
      v3 = (v5 - 1) & v4;
    }
  }
  v47 = *(_QWORD*)a1;
  v48 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v48 != nullptr) {
    *result = *v48;
    *v48 = result;
  }
  else {
    v49 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = result;
    *result = v49;
    *(_QWORD*)(v47 + 8 * v3) = a1 + 4;
    if (*result != 0) {
      v50 = *(_QWORD*)(*result + 8LL);
      if ((v5 & (v5 - 1)) != 0) {
        if (v50 >= v5) {
          v50 %= v5;
        }
      }
      else {
        v50 &= v5 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v50) = result;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return result;
}

__int64 game_6616e0(__int64 a1, unsigned int* a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 result;
  unsigned __int64 v6;
  unsigned int v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64** v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  _BOOL8 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 primeEm;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  unsigned __int64 v34;

  v4 = fw_memory_g_heap_manager_ptr;
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
  v6 = *a2;
  v7 = a2[1];
  v8 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(result + 16) = v6;
  *(_DWORD*)(result + 20) = v7;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = v6;
  if (v8 != 0) {
    v9 = v8 - 1;
    if ((v8 & (v8 - 1)) != 0) {
      v10 = v6;
      if (v8 <= v6) {
        v10 = (unsigned int)v6 % (unsigned int)v8;
      }
    }
    else {
      v10 = ((_DWORD)v8 - 1) & (unsigned int)v6;
    }
    v11 = *(__int64***)(*(_QWORD*)a1 + 8 * v10);
    if (v11 != nullptr) {
      v12 = *v11;
      if (*v11 != nullptr) {
        if ((v8 & v9) == 0) {
          while (1) {
            v14 = v12[1];
            if (v14 == v6) {
              if (*((_DWORD*)v12 + 4) == (_DWORD)v6) {
                goto LABEL_21;
              }
            }
            else if ((v14 & v9) != v10) {
              goto LABEL_24;
            }
            v12 = (__int64*)*v12;
            if (v12 == nullptr) {
              goto LABEL_24;
            }
          }
        }
        do {
          v13 = v12[1];
          if (v13 == v6) {
            if (*((_DWORD*)v12 + 4) == (_DWORD)v6) {
            LABEL_21:
              v15 = 128;
              if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
                v15 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v15, result);
              return (__int64)v12;
            }
          }
          else {
            if (v13 >= v8) {
              v13 %= v8;
            }
            if (v13 != v10) {
              break;
            }
          }
          v12 = (__int64*)*v12;
        } while (v12 != nullptr);
      }
    }
  }
LABEL_24:
  v16 = *(float*)(a1 + 32);
  v17 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v8 == 0 || (float)(v16 * (float)v8) < v17) {
    v18 = v17 / v16;
    v19 = true;
    if (v8 >= 3) {
      v19 = (v8 & (v8 - 1)) != 0;
    }
    v20 = v19 | (2 * v8);
    v21 = vcvtps_u64_f32(v18);
    if (v20 <= v21) {
      primeEm = v21;
    }
    else {
      primeEm = v20;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v23 = result;
      primeEm = std___1___next_prime(primeEm);
      result = v23;
      v8 = *(_QWORD*)(a1 + 8);
    }
    if (primeEm > v8) {
      goto LABEL_36;
    }
    if (primeEm < v8) {
      v25 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v8 < 3 || (v8 & (v8 - 1)) != 0) {
        v27 = result;
        v25 = std___1___next_prime(v25);
        result = v27;
      }
      else {
        v26 = 1LL << (-(char)__clz(v25 - 1) & 63);
        if (v25 >= 2) {
          v25 = v26;
        }
      }
      if (primeEm <= v25) {
        primeEm = v25;
      }
      if (primeEm < v8) {
      LABEL_36:
        v24 = result;
        GameRoutine_6619e0((__int64*)a1, primeEm);
        result = v24;
      }
    }
  }
  v28 = *(_QWORD*)(a1 + 8);
  v29 = *(_QWORD*)(result + 8);
  v30 = v28 - 1;
  if ((v28 & (v28 - 1)) != 0) {
    if (v29 >= v28) {
      v29 %= v28;
    }
  }
  else {
    v29 &= v30;
  }
  v31 = *(_QWORD*)a1;
  v32 = *(__int64**)(*(_QWORD*)a1 + 8 * v29);
  if (v32 != nullptr) {
    *(_QWORD*)result = *v32;
    *v32 = result;
  }
  else {
    v33 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = result;
    *(_QWORD*)result = v33;
    *(_QWORD*)(v31 + 8 * v29) = a1 + 16;
    if (*(_QWORD*)result != 0) {
      v34 = *(_QWORD*)(*(_QWORD*)result + 8LL);
      if ((v28 & v30) != 0) {
        if (v34 >= v28) {
          v34 %= v28;
        }
      }
      else {
        v34 &= v30;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v34) = result;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return result;
}

__int64 game_66e940(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  atomic_uchar* v4;
  __int64* v5;
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
  _QWORD* v17;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  bool v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  char v28;
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

  v1 = *(_QWORD*)(result + 160);
  v2 = *(_QWORD*)(result + 168);
  v3 = result;
  if (v1 != v2) {
    v4 = (atomic_uchar*)GameData_212c840;
    v5 = GameData_212c838;
    do {
      if (*(_QWORD*)(v1 + 16) != 0) {
        if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
            (unsigned int)__cxa_guard_acquire(v4) != 0) {
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v5) = 0;
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v5 + 8) = 0;
          *v5 = 0;
          v5[1] = 0;
          *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v5) = 0;
          *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v5) = 0;
          *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v5) =
              (_UNKNOWN*)1065353216;
          *((_BYTE*)((char*)0x40LL) + (_QWORD)v5) = 0;
          *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v5) = 0;
          GameRoutine_14a0820(v5);
          GameRoutine_2b0();
          __cxa_guard_release(v4);
        }
        v6 = *(_QWORD**)(*v5 + 32);
        (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*v6 + 952LL))(*v6, 0,
                                                                      0);
        (*(void (**)(_QWORD, _QWORD, __int64))(*(_QWORD*)*v6 + 248LL))(
            *v6, *(_QWORD*)(v1 + 16), 1);
        (*(void (**)(_QWORD))(*(_QWORD*)*v6 + 960LL))(*v6);
        (***(void (****)(_QWORD))(v1 + 16))(*(_QWORD*)(v1 + 16));
      }
      result = *(_QWORD*)(v1 + 64);
      if (result != 0) {
        result = (**(__int64 (***)(__int64))result)(result);
      }
      v1 += 88;
    } while (v1 != v2);
  }
  v7 = *(_QWORD*)(v3 + 264);
  v8 = fw_memory_g_heap_manager_ptr;
  if (v7 != 0) {
    v9 = *(_QWORD*)(v3 + 272);
    if (v7 == v9) {
      goto LABEL_21;
    }
    do {
      v11 = *(_QWORD*)(v9 - 24);
      v9 -= 24;
      v10 = v11;
      if (v11 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v12, v10);
      }
    } while (v9 != v7);
    v13 = *(_QWORD*)(v3 + 264);
    *(_QWORD*)(v3 + 272) = v7;
    v7 = v13;
    if (v13 != 0) {
    LABEL_21:
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v14 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v14, v7);
    }
  }
  v15 = *(_QWORD*)(v3 + 240);
  if (v15 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
      v16 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v16, v15);
  }
  v17 = *(_QWORD**)(v3 + 160);
  if (v17 != nullptr) {
    v18 = *(_QWORD**)(v3 + 168);
    if (v17 == v18) {
      goto LABEL_34;
    }
    v19 = v18 - 11;
    v20 = v18 - 11;
    do {
      v21 = *v20;
      v20 -= 11;
      result = (*(__int64 (**)(_QWORD*))(v21 + 8))(v19);
      v22 = v19 == v17;
      v19 = v20;
    } while (!v22);
    v23 = *(_QWORD**)(v3 + 160);
    *(_QWORD*)(v3 + 168) = v17;
    v17 = v23;
    if (v23 != nullptr) {
    LABEL_34:
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v24 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v24, v17);
    }
  }
  v25 = *(_QWORD*)(v3 + 96);
  if (v25 != 0) {
    v26 = *(_QWORD*)(v3 + 104);
    if (v25 == v26) {
      goto LABEL_48;
    }
    v27 = *(_QWORD*)(v3 + 104);
    do {
      v28 = *(_BYTE*)(v27 - 40);
      v27 -= 40;
      if ((v28 & 1) != 0) {
        v29 = *(_QWORD*)(v26 - 24);
        if (v29 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
            v30 = 128;
          }
          else {
            v30 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v30, v29);
        }
      }
      v26 = v27;
    } while (v27 != v25);
    v31 = *(_QWORD*)(v3 + 96);
    *(_QWORD*)(v3 + 104) = v25;
    v25 = v31;
    if (v31 != 0) {
    LABEL_48:
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v32 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v32, v25);
    }
  }
  v33 = *(_QWORD*)(v3 + 72);
  if (v33 != 0) {
    v34 = *(_QWORD*)v8;
    *(_QWORD*)(v3 + 80) = v33;
    v35 = 128;
    if (*(_QWORD*)(v34 + 200) == 0) {
      v35 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v34 + v35, v33);
  }
  v36 = *(_QWORD*)(v3 + 48);
  if (v36 != 0) {
    v37 = *(_QWORD*)v8;
    *(_QWORD*)(v3 + 56) = v36;
    v38 = 128;
    if (*(_QWORD*)(v37 + 200) == 0) {
      v38 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v37 + v38, v36);
  }
  v39 = *(_QWORD*)(v3 + 24);
  if (v39 != 0) {
    v40 = *(_QWORD*)v8;
    *(_QWORD*)(v3 + 32) = v39;
    v41 = 128;
    if (*(_QWORD*)(v40 + 200) == 0) {
      v41 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v40 + v41, v39);
  }
  if ((*(_BYTE*)v3 & 1) != 0) {
    v42 = *(_QWORD*)(v3 + 16);
    if (v42 != 0) {
      v43 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v43 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v43, v42);
    }
  }
  return result;
}

__int64 game_66ed20(__int64 a1, __int64 a2, __int64 a3, int* a4,
                    unsigned __int64 a5)
{

#pragma clang fp contract(off)
  atomic_uchar* v9;
  unsigned __int8 explicit;
  __int64* v11;
  __int64 v12;
  char* v13;
  char* v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  char* v18;
  char* v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  char v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  int v33;
  __int64 v34;
  char v35;
  __int64 v36;
  int v37;
  int v38;
  int v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  _QWORD* v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  int v50;
  __int64 v51;
  int v52;
  int v53;
  int v54;
  __int64 v55;
  int v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  __int64 v60;
  __int64 v61;
  char v62;
  __int64 v63;
  _QWORD* v64;
  __int64 v65;
  __int64 v66;
  __int64 result;
  int* v68;
  int* v69;
  double v70;
  double v71;
  double v72;
  unsigned int v73;
  _QWORD* v74;
  float32x4_t v75;
  __int64 v76;
  __int64 v77;
  float32x4_t v78;
  float32x4_t v79;
  __int64 v80;
  unsigned int* v81;
  __int64 v82;
  __int64 v83;
  unsigned int v84;
  __int64 v85;
  float32x4_t v86;
  float32x4_t v87;
  float32x4_t v88;
  float32x4_t v89;
  float32x4_t v90;
  float32x4_t v91;
  float32x4_t v92;
  float32x4_t v93;
  float32x4_t v94;
  float32x4_t v95;
  float32x4_t v96;
  float32x4_t v97;
  float32x4_t v98;
  __int64 v99;
  float v100;
  float v101;
  unsigned int v102;
  __int128 v103;
  unsigned int v104;
  __int128 v105;
  unsigned __int64 v106;
  int* v107;
  __int64 v108;
  int v109;
  bool v110;
  int v111;
  __int64 v112;
  unsigned __int64 v113;
  __int64 v115;
  __int64 v116;
  double v117;
  __int64 v118;
  double v119;
  _QWORD* v120;
  double v121;
  struct {
    _QWORD v122[3];
    int v123;
  } v122_;
  struct {
    int v124;
    char gap84_[4];
    __int64 v125;
    __int64 v126;
    __int64 v127;
    __int64 v128;
    __int64 v129;
  } v124_;
  _BYTE v130[36];
  char v131[12];

  v9 = (atomic_uchar*)GameData_212c840;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                                  memory_order_acquire);
  v11 = GameData_212c838;
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_212c840) != 0) {
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11) = 0;
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11 + 8) = 0;
    *v11 = 0;
    v11[1] = 0;
    *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v11) = 0;
    *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v11) = 0;
    *((_BYTE*)((char*)0x40LL) + (_QWORD)v11) = 0;
    *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v11) = 0;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v11) =
        (_UNKNOWN*)1065353216;
    GameRoutine_14a0820(v11);
    GameRoutine_2b0();
    __cxa_guard_release(GameData_212c840);
  }
  v12 = *v11;
  v13 = *(char**)(a1 + 160);
  v116 = *(_QWORD*)(*v11 + 24);
  if (a5 > 0x2E8BA2E8BA2E8BA3LL *
               ((__int64)(*(_QWORD*)(a1 + 176) - (_QWORD)v13) >> 3)) {
    if (a5 > 0x2E8BA2E8BA2E8BALL) {
    LABEL_64:
      GameRoutine_670440();
    }
    v14 = *(char**)(a1 + 168);
    v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         88 * a5, 16, 0);
    v16 = v14 == v13;
    v17 = v15;
    v18 = v13;
    v19 = (char*)(v17 + v14 - v13);
    if (!v16) {
      v20 = v18;
      v21 = v17;
      do {
        *(_QWORD*)v21 = collision_Mesh_MeshUserData_vtable;
        v22 = *((_QWORD*)v20 + 2);
        *(_QWORD*)(v21 + 8) = *((_QWORD*)v20 + 1);
        *(_QWORD*)(v21 + 16) = v22;
        *(_DWORD*)(v21 + 24) = *((_DWORD*)v20 + 6);
        *(_DWORD*)(v21 + 32) = *((_DWORD*)v20 + 8);
        *(_DWORD*)(v21 + 36) = *((_DWORD*)v20 + 9);
        *(_DWORD*)(v21 + 40) = *((_DWORD*)v20 + 10);
        *(_DWORD*)(v21 + 44) = *((_DWORD*)v20 + 11);
        *(_DWORD*)(v21 + 48) = *((_DWORD*)v20 + 12);
        *(_DWORD*)(v21 + 52) = *((_DWORD*)v20 + 13);
        *(_DWORD*)(v21 + 56) = *((_DWORD*)v20 + 14);
        v23 = v20[60];
        *(_WORD*)(v21 + 61) = 0;
        *(_BYTE*)(v21 + 63) = 0;
        *(_BYTE*)(v21 + 60) = v23;
        *(_QWORD*)(v21 + 64) = *((_QWORD*)v20 + 8);
        v24 = *((_QWORD*)v20 + 9);
        LODWORD(v22) = *((_DWORD*)v20 + 20);
        v20 += 88;
        *(_DWORD*)(v21 + 80) = v22;
        *(_QWORD*)(v21 + 72) = v24;
        v21 += 88;
      } while (v20 != v14);
      v25 = v18;
      do {
        v26 = *(_QWORD*)v25;
        v25 += 88;
        (*(void (**)(void))(v26 + 8))();
      } while (v25 != v14);
      v18 = *(char**)(a1 + 160);
      v9 = (atomic_uchar*)GameData_212c840;
    }
    *(_QWORD*)(a1 + 160) = v17;
    *(_QWORD*)(a1 + 168) = v19;
    *(_QWORD*)(a1 + 176) = v17 + 88 * a5;
    v11 = GameData_212c838;
    if (v18 != nullptr) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v18);
    }
  }
  v113 = a5;
  v120 = *(_QWORD**)(v12 + 32);
  (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*v120 + 952LL))(*v120, 0, 0);
  v28 = v116;
  if (a3 != 0) {
    v29 = a2 + (a3 << 6);
    v115 = v29;
    do {
      physx_PxDefaultMemoryInputData_PxDefaultMemoryInputData(
          (__int64)v130, *(_QWORD*)(a2 + 16), *(_DWORD*)(a2 + 8));
      v124_.v129 =
          (*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v28 + 72LL))(v28, v130);
      v124_.v124 = 8;
      v124_.v125 = 0x3F8000003F800000LL;
      v124_.v126 = 1065353216;
      v124_.v127 = 0;
      v124_.v128 = 1065353216;
      if ((atomic_load_explicit(v9, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire(v9) != 0) {
        *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11) = 0;
        *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11 + 8) = 0;
        *v11 = 0;
        v11[1] = 0;
        *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v11) = 0;
        *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v11) = 0;
        *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v11) =
            (_UNKNOWN*)1065353216;
        *((_BYTE*)((char*)0x40LL) + (_QWORD)v11) = 0;
        *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v11) = 0;
        GameRoutine_14a0820(v11);
        GameRoutine_2b0();
        __cxa_guard_release(v9);
      }
      v122_.v122[0] = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v11);
      v131[0] = 11;
      v41 = (_QWORD*)(*(__int64 (**)(__int64, int*, _QWORD*, __int64, __int64,
                                     char*))(*(_QWORD*)v28 + 248LL))(
          v28, &v124_.v124, v122_.v122, 1, 1, v131);
      (*(void (**)(_QWORD*, __int64))(*v41 + 112LL))(v41, a2 + 32);
      (*(void (**)(_QWORD*, __int64))(*v41 + 128LL))(v41, a2 + 32);
      v122_.v122[2] = 0;
      v122_.v123 = 0;
      v122_.v122[0] = 0;
      v122_.v122[1] = 0x3F80000000000000LL;
      v42 = physx_PxCreateStatic(v28, (__int64)v122_.v122, (__int64)v41);
      (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*v120 + 224LL))(*v120,
                                                                       v42, 0);
      v44 = *(_QWORD*)(a1 + 168);
      v43 = *(_QWORD*)(a1 + 176);
      if (v44 < v43) {
        v30 = v124_.v125;
        v31 = v124_.v126;
        v32 = v124_.v128;
        v33 = v124_.v124;
        v34 = v124_.v127;
        v35 = BYTE4(v124_.v128);
        v36 = v124_.v129;
        v37 = *(_DWORD*)(a2 + 60);
        v39 = *(_DWORD*)(a2 + 48);
        v38 = *(_DWORD*)(a2 + 52);
        *(_QWORD*)v44 = collision_Mesh_MeshUserData_vtable;
        *(_QWORD*)(v44 + 8) = a1;
        *(_QWORD*)(v44 + 16) = v42;
        v40 = v44 + 88;
        *(_BYTE*)(v44 + 63) = 0;
        *(_WORD*)(v44 + 61) = 0;
        *(_DWORD*)(v44 + 24) = v33;
        *(_QWORD*)(v44 + 48) = v34;
        *(_BYTE*)(v44 + 60) = v35;
        *(_QWORD*)(v44 + 64) = v36;
        *(_DWORD*)(v44 + 72) = v38;
        *(_DWORD*)(v44 + 76) = v37;
        *(_DWORD*)(v44 + 80) = v39;
        *(_QWORD*)(v44 + 32) = v30;
        *(_QWORD*)(v44 + 40) = v31;
        *(_DWORD*)(v44 + 56) = v32;
      }
      else {
        v45 = *(_QWORD**)(a1 + 160);
        v46 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(v44 - (_QWORD)v45) >> 3) + 1;
        if (v46 > 0x2E8BA2E8BA2E8BALL) {
          goto LABEL_64;
        }
        v47 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(v43 - (_QWORD)v45) >> 3);
        if (2 * v47 > v46) {
          v46 = 2 * v47;
        }
        if (v47 >= 0x1745D1745D1745DLL) {
          v48 = 0x2E8BA2E8BA2E8BALL;
        }
        else {
          v48 = v46;
        }
        if (v48 > 0x2E8BA2E8BA2E8BALL) {
          GameRoutine_60a210();
        }
        v118 = 88 * v48;
        v49 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 88 * v48, 16, 0);
        v50 = v124_.v124;
        v51 = v49 + v44 - (_QWORD)v45;
        v52 = *(_DWORD*)(a2 + 60);
        v54 = *(_DWORD*)(a2 + 48);
        v53 = *(_DWORD*)(a2 + 52);
        v55 = v49;
        v56 = v124_.v128;
        v57 = v124_.v127;
        *(_QWORD*)v51 = collision_Mesh_MeshUserData_vtable;
        *(_QWORD*)(v51 + 8) = a1;
        *(_QWORD*)(v51 + 16) = v42;
        *(_WORD*)(v51 + 61) = 0;
        *(_BYTE*)(v51 + 63) = 0;
        *(_DWORD*)(v51 + 24) = v50;
        LOBYTE(v50) = BYTE4(v124_.v128);
        v58 = v124_.v126;
        *(_QWORD*)(v51 + 32) = v124_.v125;
        *(_QWORD*)(v51 + 40) = v58;
        *(_QWORD*)(v51 + 48) = v57;
        *(_DWORD*)(v51 + 72) = v53;
        *(_DWORD*)(v51 + 76) = v52;
        *(_DWORD*)(v51 + 80) = v54;
        *(_DWORD*)(v51 + 56) = v56;
        *(_BYTE*)(v51 + 60) = v50;
        *(_QWORD*)(v51 + 64) = v124_.v129;
        if (v45 != (_QWORD*)v44) {
          v59 = v45;
          v60 = v49;
          do {
            *(_QWORD*)v60 = collision_Mesh_MeshUserData_vtable;
            v61 = v59[2];
            *(_QWORD*)(v60 + 8) = v59[1];
            *(_QWORD*)(v60 + 16) = v61;
            *(_DWORD*)(v60 + 24) = *((_DWORD*)v59 + 6);
            *(_DWORD*)(v60 + 32) = *((_DWORD*)v59 + 8);
            *(_DWORD*)(v60 + 36) = *((_DWORD*)v59 + 9);
            *(_DWORD*)(v60 + 40) = *((_DWORD*)v59 + 10);
            *(_DWORD*)(v60 + 44) = *((_DWORD*)v59 + 11);
            *(_DWORD*)(v60 + 48) = *((_DWORD*)v59 + 12);
            *(_DWORD*)(v60 + 52) = *((_DWORD*)v59 + 13);
            *(_DWORD*)(v60 + 56) = *((_DWORD*)v59 + 14);
            v62 = *((_BYTE*)v59 + 60);
            *(_WORD*)(v60 + 61) = 0;
            *(_BYTE*)(v60 + 63) = 0;
            *(_BYTE*)(v60 + 60) = v62;
            *(_QWORD*)(v60 + 64) = v59[8];
            v63 = v59[9];
            LODWORD(v61) = *((_DWORD*)v59 + 20);
            v59 += 11;
            *(_DWORD*)(v60 + 80) = v61;
            *(_QWORD*)(v60 + 72) = v63;
            v60 += 88;
          } while (v59 != (_QWORD*)v44);
          v64 = v45;
          do {
            v65 = *v64;
            v64 += 11;
            (*(void (**)(_QWORD*))(v65 + 8))(v45);
            v45 = v64;
          } while (v64 != (_QWORD*)v44);
          v45 = *(_QWORD**)(a1 + 160);
        }
        v40 = v51 + 88;
        *(_QWORD*)(a1 + 160) = v55;
        *(_QWORD*)(a1 + 168) = v51 + 88;
        *(_QWORD*)(a1 + 176) = v55 + v118;
        if (v45 != nullptr) {
          v66 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v66 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v66, v45);
        }
        v11 = GameData_212c838;
        v29 = v115;
        v28 = v116;
      }
      *(_QWORD*)(a1 + 168) = v40;
      v41[2] = v40 - 88;
      (*(void (**)(_QWORD*))*v41)(v41);
      a2 += 64;
    } while (a2 != v29);
  }
  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v120 + 960LL))(*v120);
  v68 = *(int**)(a1 + 160);
  v69 = *(int**)(a1 + 168);
  if (v68 == v69) {
    goto LABEL_72;
  }
  v70 = 0x0.0p+0;
  v71 = 0x0.0p+0;
  v72 = 0x0.0p+0;
  v73 = 0;
  v74 = GameData_212c540;
  do {
    if ((*(_BYTE*)(*(_QWORD*)(a1 + 96) + 40LL * v68[20] + 29) & 4) != 0) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0) {
        v117 = v72;
        v119 = v70;
        v121 = v71;
        result = __cxa_guard_acquire(&GameData_21a6130);
        v70 = v119;
        v71 = v121;
        v72 = v117;
        if ((_DWORD)result != 0) {
          v99 = v74[1];
          *(_QWORD*)&GameData_21a6120 = *v74;
          *((_QWORD*)&GameData_21a6120 + 1) = v99;
          result = __cxa_guard_release(&GameData_21a6130);
          v70 = v119;
          v71 = v121;
          v72 = v117;
        }
      }
      v75 = COERCE_AS(float32x4_t, GameData_21a6120);
      LODWORD(v76) = v68[19];
      if ((int)v76 >= 1) {
        v77 = v68[18];
        v78 = *(float32x4_t*)(a1 + 208);
        v79 = *(float32x4_t*)(a1 + 224);
        v80 = *(_QWORD*)(a1 + 24);
        v81 = (unsigned int*)(*(_QWORD*)(a1 + 72) + 24LL * (int)v77 + 8);
        do {
          v82 = *(v81 - 2);
          v83 = *(v81 - 1);
          v84 = *v81;
          v81 += 6;
          ++v77;
          v82 *= 16;
          v83 *= 16;
          v85 = 16LL * v84;
          v86 = *(float32x4_t*)(v80 + v82);
          v87 = *(float32x4_t*)(v80 + v85);
          v88 = vminq_f32(v78, v86);
          v89 = vaddq_f32(v86, *(float32x4_t*)(v80 + v83));
          *(_QWORD*)(a1 + 208) = LANES128(v88).n128_u64[0];
          v90 = *(float32x4_t*)(a1 + 208);
          v75 = vaddq_f32(v75, vaddq_f32(v89, v87));
          LANES128(v90).n128_u64[1] = LANES128(v88).n128_u32[2];
          *(float32x4_t*)(a1 + 208) = v90;
          v91 = vmaxq_f32(v79, *(float32x4_t*)(v80 + v82));
          *(_QWORD*)(a1 + 224) = LANES128(v91).n128_u64[0];
          v92 = *(float32x4_t*)(a1 + 224);
          LANES128(v92).n128_u64[1] = LANES128(v91).n128_u32[2];
          *(float32x4_t*)(a1 + 224) = v92;
          v93 = vminq_f32(v90, *(float32x4_t*)(v80 + v83));
          *(_QWORD*)(a1 + 208) = LANES128(v93).n128_u64[0];
          v94 = *(float32x4_t*)(a1 + 208);
          LANES128(v94).n128_u64[1] = LANES128(v93).n128_u32[2];
          *(float32x4_t*)(a1 + 208) = v94;
          v95 = vmaxq_f32(v92, *(float32x4_t*)(v80 + v83));
          *(_QWORD*)(a1 + 224) = LANES128(v95).n128_u64[0];
          v96 = *(float32x4_t*)(a1 + 224);
          LANES128(v96).n128_u64[1] = LANES128(v95).n128_u32[2];
          *(float32x4_t*)(a1 + 224) = v96;
          v97 = vminq_f32(v94, *(float32x4_t*)(v80 + v85));
          *(_QWORD*)(a1 + 208) = LANES128(v97).n128_u64[0];
          v78 = *(float32x4_t*)(a1 + 208);
          LANES128(v78).n128_u64[1] = LANES128(v97).n128_u32[2];
          *(float32x4_t*)(a1 + 208) = v78;
          v98 = vmaxq_f32(v96, *(float32x4_t*)(v80 + v85));
          *(_QWORD*)(a1 + 224) = LANES128(v98).n128_u64[0];
          v79 = *(float32x4_t*)(a1 + 224);
          LANES128(v79).n128_u64[1] = LANES128(v98).n128_u32[2];
          *(float32x4_t*)(a1 + 224) = v79;
          v76 = v68[19];
        } while (v77 < v76 + v68[18]);
      }
      v73 += 3 * v76;
      v70 = v70 + LANES128(v75).n128_f32[0];
      v71 = v71 + LANES128(v75).n128_f32[1];
      v72 = v72 + LANES128(v75).n128_f32[2];
    }
    v68 += 22;
  } while (v68 != v69);
  if ((int)v73 <= 0) {
  LABEL_72:
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0) {
      result = __cxa_guard_acquire(&GameData_21a6130);
      if ((_DWORD)result != 0) {
        v112 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v112;
        result = __cxa_guard_release(&GameData_21a6130);
      }
    }
    v104 = DWORD2(GameData_21a6120);
    *(_QWORD*)(a1 + 192) = GameData_21a6120;
    v105 = *(_OWORD*)(a1 + 192);
    *((_QWORD*)&v105 + 1) = v104;
    *(_OWORD*)(a1 + 192) = v105;
  }
  else {
    v100 = v70 / (double)v73;
    v101 = v71 / (double)v73;
    *(float*)&v102 = v72 / (double)v73;
    *(float*)(a1 + 192) = v100;
    *(float*)(a1 + 196) = v101;
    v103 = *(_OWORD*)(a1 + 192);
    *((_QWORD*)&v103 + 1) = v102;
    *(_OWORD*)(a1 + 192) = v103;
  }
  *(_BYTE*)(a1 + 184) = 1;
  if (v113 != 0) {
    v106 = 16 * v113 - 16;
    v107 = a4;
    if ((~(_BYTE)v106 & 0x70) != 0) {
      v108 = -(__int64)(((unsigned __int8)((unsigned int)v106 >> 4) + 1) & 7);
      v107 = a4;
      do {
        v109 = *v107;
        v107 += 4;
        v110 = __CFADD__(v108++, 1);
        *(_BYTE*)(*(_QWORD*)(a1 + 96) + 40LL * v109 + 37) = 0;
      } while (!v110);
    }
    if (v106 >= 0x70) {
      do {
        *(_BYTE*)(*(_QWORD*)(a1 + 96) + 40LL * *v107 + 37) = 0;
        *(_BYTE*)(*(_QWORD*)(a1 + 96) + 40LL * v107[4] + 37) = 0;
        *(_BYTE*)(*(_QWORD*)(a1 + 96) + 40LL * v107[8] + 37) = 0;
        *(_BYTE*)(*(_QWORD*)(a1 + 96) + 40LL * v107[12] + 37) = 0;
        *(_BYTE*)(*(_QWORD*)(a1 + 96) + 40LL * v107[16] + 37) = 0;
        *(_BYTE*)(*(_QWORD*)(a1 + 96) + 40LL * v107[20] + 37) = 0;
        *(_BYTE*)(*(_QWORD*)(a1 + 96) + 40LL * v107[24] + 37) = 0;
        v111 = v107[28];
        v107 += 32;
        *(_BYTE*)(*(_QWORD*)(a1 + 96) + 40LL * v111 + 37) = 0;
      } while (v107 != &a4[4 * v113]);
    }
  }
  return result;
}

_QWORD* game_66f7e0(_QWORD* result, int a2, unsigned __int64 a3)
{
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned int v6;
  atomic_uchar* v8;
  __int64* v9;
  _QWORD* v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  _QWORD v14[2];
  __int64 v15;

  *(_QWORD*)(result[12] + 40LL * a2 + 24) = a3;
  v3 = result[20];
  v4 = result[21];
  if (v3 != v4) {
    v5 = HIDWORD(a3);
    v6 = a3;
    v8 = (atomic_uchar*)GameData_212c840;
    v9 = GameData_212c838;
    do {
      if (a2 == *(_DWORD*)(v3 + 80)) {
        if ((atomic_load_explicit(v8, memory_order_acquire) & 1) == 0 &&
            (unsigned int)__cxa_guard_acquire(v8) != 0) {
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9) = 0;
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 8) = 0;
          *v9 = 0;
          v9[1] = 0;
          *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v9) = 0;
          *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v9) = 0;
          *((_BYTE*)((char*)0x40LL) + (_QWORD)v9) = 0;
          *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v9) = 0;
          *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v9) =
              (_UNKNOWN*)1065353216;
          GameRoutine_14a0820(v9);
          GameRoutine_2b0();
          __cxa_guard_release(v8);
        }
        v10 = *(_QWORD**)(*v9 + 32);
        (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*v10 + 952LL))(*v10, 0,
                                                                       0);
        v11 = *(_QWORD*)(v3 + 16);
        v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 208LL))(v11);
        v15 = 0;
        v13 = v12;
        (*(void (**)(__int64, __int64*, _QWORD, _QWORD))(
            *(_QWORD*)v11 + 216LL))(v11, &v15, v12, 0);
        v14[0] = __PAIR64__(v5, v6);
        for (v14[1] = 0; v13 != 0; --v13) {
          (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v15 + 112LL))(v15, v14);
          (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v15 + 128LL))(v15, v14);
        }
        result =
            (_QWORD*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*v10 + 960LL))(*v10);
      }
      v3 += 88;
    } while (v3 != v4);
  }
  return result;
}

__attribute__((swiftcall)) void game_670240(PSEUDO_X8 x8_, __int64 result,
                                            __int64 a2, unsigned __int64 a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  _DWORD* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  struct {
    _QWORD v24[6];
    char v25;
    char gap65_[3];
    int v26;
    __int64 v27;
  } v24_;
  struct {
    __int64 v28;
    int v29;
    int v30;
    __int64 v31;
    int v32;
    int v33;
    __int16 v34;
    char gap114_[6];
    __int64 v35;
    __int64 v36;
    __int64 v37;
  } v28_;

  a4[1] = 0;
  a4[2] = 0;
  *a4 = 0;
  if (a3 != 0) {
    v5 = a3;
    if (a3 >> 58 != 0) {
      GameRoutine_670c40();
    }
    v6 = (_QWORD*)result;
    v7 = a3 << 6;
    v8 = (__int64*)fw_memory_g_heap_manager_ptr;
    v9 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, a3 << 6, 16, 0);
    v10 = v9 + v7;
    *a4 = v9;
    v11 = (_QWORD*)(v9 + 16);
    v12 = v9;
    a4[2] = v9 + v7;
    v13 = GameData_2132428 + 2;
    do {
      v14 = *v8;
      v11[4] = 0;
      v11[5] = 0;
      v11[2] = 0;
      v11[3] = 0;
      *v11 = 0;
      v11[1] = 0;
      *(v11 - 2) = v13;
      *(v11 - 1) = 0x100000000000LL;
      *v11 = fw_memory_HeapManager_Allocate_alt1(v14, 4096, 4096, 0);
      *((_BYTE*)v11 + 8) = 0;
      v7 -= 64;
      v11[2] = 0;
      v11[3] = 0;
      v11[4] = 0;
      v11[5] = 0;
      v11 += 8;
    } while (v7 != 0);
    a4[1] = v10;
    v15 = (_DWORD*)(a2 + 12);
    do {
      v17 = v6[3];
      v16 = v6[4];
      v28_.v34 = 0;
      v18 = v16 - v17;
      v28_.v35 = 0;
      v28_.v36 = 0;
      v28_.v37 = 0;
      v28_.v28 = v17;
      v19 = v6[9];
      v28_.v29 = 16;
      v28_.v30 = v18 >> 4;
      LODWORD(v18) = *v15;
      v28_.v32 = 24;
      v28_.v33 = v18;
      LODWORD(v18) = *(v15 - 2);
      LODWORD(v24_.v24[1]) = 0;
      *(_DWORD*)((char*)&v24_.v24[1] + 3) = 0;
      v24_.v26 = 1;
      v24_.v25 = 1;
      v24_.v27 = 0x7F7FFFFF00000020LL;
      v28_.v31 = v19 + 24LL * (int)v18;
      v24_.v24[0] = 0x3A3780343D75C28FLL;
      v24_.v24[2] = 0x412000003F800000LL;
      v24_.v24[3] = 0;
      v24_.v24[4] = 0x43FA000000000000LL;
      v24_.v24[5] = 0x100000004LL;
      result = GameRoutine_55c140(v24_.v24, &v28_.v28, v12, 0);
      v20 = *(v15 - 3);
      --v5;
      v21 = *(_QWORD*)(v6[12] + 40LL * v20 + 24);
      *(_QWORD*)(v12 + 40) = 0;
      *(_DWORD*)(v12 + 48) = v20;
      *(_QWORD*)(v12 + 32) = v21;
      *(_DWORD*)(v12 + 52) = *(v15 - 2);
      *(_DWORD*)(v12 + 56) = *(v15 - 1);
      v22 = *v15;
      v15 += 4;
      *(_DWORD*)(v12 + 60) = v22;
      v12 += 64;
    } while (v5 != 0);
  }
  {
    result;
    return;
  }
}

__int64 game_68ece0(_BYTE* a1, __int64 a2)
{
  __int64 v4;
  __int64 result;
  int v6;
  __int64 v7;
  unsigned int v8;
  char v9;
  int v10;
  struct {
    int v11;
    char v12;
    char gap9_[3];
    char v13;
  } v11_;

  if (a2 == 0) {
    return 0;
  }
  if (*(int*)(a2 + 592) > 1) {
    return 0;
  }
  v4 = game_g_shared_system_skills_ptr;
  v11_.v11 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x7CLL) +
                        game_g_shared_system_skills_ptr + 4) &
             0xFFF;
  if ((game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v11_.v11) & 1) !=
          0 ||
      (game_68e4c0((__int64)a1, (_QWORD*)a2) & 1) == 0) {
    return 0;
  }
  result = -(char)a1[66] & (unsigned int)~(-(char)a1[66] >> 31);
  if ((char)a1[67] < 0) {
    v11_.v12 = 0;
    result =
        (unsigned int)((int)(game_Unit_GetParam(a2) * (char)a1[67]) / -100 +
                       result);
  }
  v6 = (char)a1[68];
  if (v6 < 0) {
    v7 = (-1374389535LL * *(__int16*)(a2 + 492) * v6) >> 37;
    result = (unsigned int)v7 + ((unsigned int)v7 >> 31) + (unsigned int)result;
  }
  if (a1[57] == 8) {
    v8 = result;
    v10 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xFCLL) + v4) & 0xFFF;
    v9 = game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v10);
    result = v8;
    if ((v9 & 1) == 0) {
      v11_.v13 = 0;
      return (unsigned int)((int)game_Unit_GetParam(a2) / 2);
    }
  }
  return result;
}

__int64 game_734fc0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
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

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21cf828,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21cf828) != 0) {
    GameData_21cd1b0 = 0;
    GameData_21cd1b8 = (__int64)GameRoutine_7368a0;
    GameData_21cd168 = 3;
    GameData_21cd190 = 0;
    GameData_21cd198 = 0;
    GameData_21cd1a0 = 0;
    GameData_21cd170 = 0;
    GameData_21cd178 = 0;
    GameData_21cd180 = 0;
    GameData_21cd188 = 0;
    GameData_21cd1a8 = 8;
    GameData_21cd1c8 = 0;
    GameData_21cd1d0 = 0;
    GameData_21cd1d8 = 0;
    GameData_21cd1e0 = 0;
    GameData_21cd1e8 = 12;
    GameData_21cd1f0 = 0;
    GameData_21cd1f8 = 0;
    GameData_21cd200 = 0;
    GameData_21cd208 = 1;
    GameData_21cd210 = 0;
    GameData_21cd218 = 0;
    GameData_21cd220 = 0;
    GameData_21cd228 = 2;
    GameData_21cd230 = 0;
    GameData_21cd238 = 0;
    GameData_21cd240 = 0;
    GameData_21cd248 = 1;
    GameData_21cd250 = 0;
    GameData_21cd258 = 0;
    GameData_21cd260 = 0;
    GameData_21cd268 = 13;
    GameData_21cd270 = 0;
    GameData_21cd278 = (__int64)GameRoutine_7368c0;
    GameData_21cd280 = 0;
    GameData_21cd288 = 0;
    GameData_21cd290 = 0;
    GameData_21cd298 = 0;
    GameData_21cd2a0 = 0;
    GameData_21cd2a8 = 13;
    GameData_21cd2b0 = 0;
    GameData_21cd2b8 = (__int64)GameRoutine_7369b0;
    GameData_21cd2c0 = 0;
    GameData_21cd2c8 = 0;
    GameData_21cd2d0 = 0;
    GameData_21cd2d8 = 0;
    GameData_21cd2e0 = 0;
    GameData_21cd2e8 = 2;
    GameData_21cd2f8 = 0;
    GameData_21cd300 = 0;
    GameData_21cd2f0 = 0;
    GameData_21cd308 = 2;
    GameData_21cd310 = 0;
    GameData_21cd318 = 0;
    GameData_21cd320 = 0;
    GameData_21cd328 = 8;
    GameData_21cd378 = (__int64)GameRoutine_736a70;
    GameData_21cd5f8 = (__int64)GameRoutine_736a70;
    GameData_21cd638 = (__int64)GameRoutine_738060;
    GameData_21cd330 = (__int64)GameData_212d0e0[0];
    GameData_21cd338 = 0;
    GameData_21cd678 = (__int64)GameRoutine_738080;
    GameData_21cd508 = 4;
    GameData_21cd6b8 = (__int64)GameRoutine_738100;
    GameData_21cd3b8 = (__int64)GameRoutine_736ab0;
    GameData_21cd350 = 0;
    GameData_21cd358 = 0;
    GameData_21cd360 = 0;
    GameData_21cd340 = 0;
    GameData_21cd348 = 0;
    GameData_21cd368 = 13;
    GameData_21cd370 = 0;
    GameData_21cd380 = 0;
    GameData_21cd3f8 = (__int64)ProcMapSeqHuman_736ac0;
    GameData_21cd388 = 0;
    GameData_21cd390 = 0;
    GameData_21cd398 = 0;
    GameData_21cd3a0 = 0;
    GameData_21cd3a8 = 13;
    GameData_21cd3b0 = 0;
    GameData_21cd3c0 = 0;
    GameData_21cd3c8 = 0;
    GameData_21cd3d0 = 0;
    GameData_21cd3d8 = 0;
    GameData_21cd3e0 = 0;
    GameData_21cd3e8 = 14;
    GameData_21cd3f0 = 0;
    GameData_21cd400 = 0;
    GameData_21cd408 = 0;
    GameData_21cd410 = 0;
    GameData_21cd418 = 0;
    GameData_21cd420 = 0;
    GameData_21cd428 = 13;
    GameData_21cd430 = 0;
    GameData_21cd438 = (__int64)GameRoutine_737c80;
    GameData_21cd440 = 0;
    GameData_21cd448 = 0;
    GameData_21cd450 = 0;
    GameData_21cd458 = 0;
    GameData_21cd460 = 0;
    GameData_21cd468 = 13;
    GameData_21cd470 = 0;
    GameData_21cd478 = (__int64)GameRoutine_737cc0;
    GameData_21cd480 = 0;
    GameData_21cd488 = 0;
    GameData_21cd490 = 0;
    GameData_21cd498 = 0;
    GameData_21cd4a0 = 0;
    GameData_21cd4a8 = 12;
    GameData_21cd4c0 = 0;
    GameData_21cd4b8 = 0;
    GameData_21cd4b0 = 0;
    GameData_21cd4c8 = 28;
    GameData_21cd4d0 = 0;
    GameData_21cd4d8 = 0;
    GameData_21cd4e0 = 0;
    GameData_21cd4e8 = 2;
    GameData_21cd4f0 = 0;
    GameData_21cd4f8 = 0;
    GameData_21cd500 = 0;
    GameData_21cd510 = 0;
    GameData_21cd518 = 0;
    GameData_21cd520 = 0;
    GameData_21cd528 = 13;
    GameData_21cd530 = 0;
    GameData_21cd538 = (__int64)GameRoutine_737e40;
    GameData_21cd540 = 0;
    GameData_21cd548 = 0;
    GameData_21cd550 = 0;
    GameData_21cd558 = 0;
    GameData_21cd560 = 0;
    GameData_21cd568 = 3;
    GameData_21cd590 = 0;
    GameData_21cd598 = 0;
    GameData_21cd5a0 = 0;
    GameData_21cd588 = 0;
    GameData_21cd580 = 0;
    GameData_21cd578 = 0;
    GameData_21cd570 = 0;
    GameData_21cd5a8 = 2;
    GameData_21cd5b0 = 0;
    GameData_21cd5b8 = 0;
    GameData_21cd5c0 = 0;
    GameData_21cd5c8 = 5;
    GameData_21cd5d0 = 0;
    GameData_21cd5d8 = 0;
    GameData_21cd5e0 = 0;
    GameData_21cd5e8 = 13;
    GameData_21cd5f0 = 0;
    GameData_21cd600 = 0;
    GameData_21cd608 = 0;
    GameData_21cd610 = 0;
    GameData_21cd618 = 0;
    GameData_21cd620 = 0;
    GameData_21cd628 = 13;
    GameData_21cd630 = 0;
    GameData_21cd640 = 0;
    GameData_21cd648 = 0;
    GameData_21cd650 = 0;
    GameData_21cd658 = 0;
    GameData_21cd660 = 0;
    GameData_21cd668 = 13;
    GameData_21cd670 = 0;
    GameData_21cd680 = 0;
    GameData_21cd688 = 0;
    GameData_21cd690 = 0;
    GameData_21cd698 = 0;
    GameData_21cd6a0 = 0;
    GameData_21cd6a8 = 13;
    GameData_21cd6b0 = 0;
    GameData_21cd6c0 = 0;
    GameData_21cd6c8 = 0;
    GameData_21cd6d0 = 0;
    GameData_21cd6d8 = 0;
    GameData_21cd6e0 = 0;
    GameData_21cd6e8 = 13;
    GameData_21cd6f0 = 0;
    GameData_21cd6f8 = (__int64)GameRoutine_738180;
    GameData_21cd700 = 0;
    GameData_21cd708 = 0;
    GameData_21cd710 = 0;
    GameData_21cd718 = 0;
    GameData_21cd720 = 0;
    GameData_21cd728 = 8;
    GameData_21cd730 = 0;
    GameData_21cd778 = (__int64)GameRoutine_7381a0;
    GameData_21cd7b8 = (__int64)ProcMapSeqHuman_738230;
    GameData_21cd7f8 = (__int64)GameRoutine_738c80;
    GameData_21cd8f8 = (__int64)GameRoutine_738cc0;
    GameData_21cd738 = (__int64)GameData_212d0e8[0];
    GameData_21cd748 = 0;
    GameData_21cd750 = 0;
    GameData_21cd758 = 0;
    GameData_21cd760 = 0;
    GameData_21cd768 = 13;
    GameData_21cd770 = 0;
    GameData_21cd780 = 0;
    GameData_21cd788 = 0;
    GameData_21cd790 = 0;
    GameData_21cd798 = 0;
    GameData_21cd7a0 = 0;
    GameData_21cd7a8 = 14;
    GameData_21cd7b0 = 0;
    GameData_21cd7c0 = 0;
    GameData_21cd7c8 = 0;
    GameData_21cd7d0 = 0;
    GameData_21cd7d8 = 0;
    GameData_21cd7e0 = 0;
    GameData_21cd7e8 = 13;
    GameData_21cd7f0 = 0;
    GameData_21cd800 = 0;
    GameData_21cd808 = 0;
    GameData_21cd810 = 0;
    GameData_21cd818 = 0;
    GameData_21cd820 = 0;
    GameData_21cd828 = 13;
    GameData_21cd830 = 0;
    GameData_21cd838 = (__int64)GameRoutine_737cc0;
    GameData_21cd840 = 0;
    GameData_21cd848 = 0;
    GameData_21cd850 = 0;
    GameData_21cd858 = 0;
    GameData_21cd860 = 0;
    GameData_21cd868 = 12;
    GameData_21cd880 = 0;
    GameData_21cd878 = 0;
    GameData_21cd870 = 0;
    GameData_21cd888 = 28;
    GameData_21cd890 = 0;
    GameData_21cd898 = 0;
    GameData_21cd8a0 = 0;
    GameData_21cd8a8 = 2;
    GameData_21cd8b0 = 0;
    GameData_21cd8b8 = 0;
    GameData_21cd8c0 = 0;
    GameData_21cd8c8 = 8;
    GameData_21cd8d0 = 0;
    GameData_21cd8d8 = 0;
    GameData_21cd8e0 = 0;
    GameData_21cd8e8 = 13;
    GameData_21cd8f0 = 0;
    GameData_21cd900 = 0;
    GameData_21cd908 = 0;
    GameData_21cd910 = 0;
    GameData_21cd918 = 0;
    GameData_21cd920 = 0;
    GameData_21cd928 = 12;
    GameData_21cd940 = 0;
    GameData_21cd938 = 0;
    GameData_21cd930 = 0;
    GameData_21cd948 = 5;
    GameData_21cd950 = 0;
    GameData_21cd958 = 0;
    GameData_21cd960 = 0;
    GameData_21cd968 = 2;
    GameData_21cd970 = 0;
    GameData_21cd978 = 0;
    GameData_21cd980 = 0;
    GameData_21cd988 = 9;
    GameData_21cd990 = 0;
    GameData_21cd998 = 0;
    GameData_21cd9a0 = 0;
    GameData_21cd9a8 = 8;
    GameData_21cdba8 = 3;
    GameData_21cdbf8 = (__int64)GameRoutine_739270;
    GameData_21cd9b0 = (__int64)GameData_212d0f0[0];
    GameData_21cdc38 = (__int64)GameRoutine_7392c0;
    GameData_21cda08 = 6;
    GameData_21cda48 = 6;
    GameData_21cdcc8 = 10;
    GameData_21cda78 = (__int64)ProcMapSeqHuman_738de0;
    GameData_21cdd38 = (__int64)GameRoutine_739370;
    GameData_21cdb08 = 7;
    GameData_21cdd78 = (__int64)GameRoutine_739430;
    GameData_21cdb38 = (__int64)GameRoutine_739120;
    GameData_21cddb8 = (__int64)GameRoutine_7394a0;
    GameData_21cdb78 = (__int64)GameRoutine_739190;
    GameData_21cdeb8 = (__int64)GameRoutine_739670;
    GameData_21cd9d0 = 0;
    GameData_21cd9d8 = 0;
    GameData_21cd9e0 = 0;
    GameData_21cd9c8 = 0;
    GameData_21cd9c0 = 0;
    GameData_21cd9b8 = 0;
    GameData_21cd9e8 = 12;
    GameData_21cda00 = 0;
    GameData_21cd9f8 = 0;
    GameData_21cd9f0 = 0;
    GameData_21cda10 = 0;
    GameData_21cda18 = 0;
    GameData_21cda20 = 0;
    GameData_21cda28 = 2;
    GameData_21cda40 = 0;
    GameData_21cda38 = 0;
    GameData_21cda30 = 0;
    GameData_21cda50 = 0;
    GameData_21cda58 = 0;
    GameData_21cda60 = 0;
    GameData_21cda68 = 13;
    GameData_21cda70 = 0;
    GameData_21cda80 = 0;
    GameData_21cda88 = 0;
    GameData_21cda90 = 0;
    GameData_21cda98 = 0;
    GameData_21cdaa0 = 0;
    GameData_21cdaa8 = 12;
    GameData_21cdac0 = 0;
    GameData_21cdab8 = 0;
    GameData_21cdab0 = 0;
    GameData_21cdac8 = 1;
    GameData_21cdad0 = 0;
    GameData_21cdad8 = 0;
    GameData_21cdae0 = 0;
    GameData_21cdae8 = 2;
    GameData_21cdb00 = 0;
    GameData_21cdaf8 = 0;
    GameData_21cdaf0 = 0;
    GameData_21cdb10 = 0;
    GameData_21cdb18 = 0;
    GameData_21cdb20 = 0;
    GameData_21cdb28 = 13;
    GameData_21cdb30 = 0;
    GameData_21cdb40 = 0;
    GameData_21cdb48 = 0;
    GameData_21cdb50 = 0;
    GameData_21cdb58 = 0;
    GameData_21cdb60 = 0;
    GameData_21cdb68 = 13;
    GameData_21cdb70 = 0;
    GameData_21cdb80 = 0;
    GameData_21cdb88 = 0;
    GameData_21cdb90 = 0;
    GameData_21cdb98 = 0;
    GameData_21cdba0 = 0;
    GameData_21cdbd0 = 0;
    GameData_21cdbd8 = 0;
    GameData_21cdbe0 = 0;
    GameData_21cdbc8 = 0;
    GameData_21cdbc0 = 0;
    GameData_21cdbb8 = 0;
    GameData_21cdbb0 = 0;
    GameData_21cdbe8 = 14;
    GameData_21cdbf0 = 0;
    GameData_21cdc00 = 0;
    GameData_21cdc08 = 0;
    GameData_21cdc10 = 0;
    GameData_21cdc18 = 0;
    GameData_21cdc20 = 0;
    GameData_21cdc28 = 13;
    GameData_21cdc30 = 0;
    GameData_21cdc40 = 0;
    GameData_21cdc48 = 0;
    GameData_21cdc50 = 0;
    GameData_21cdc58 = 0;
    GameData_21cdc60 = 0;
    GameData_21cdc68 = 12;
    GameData_21cdc80 = 0;
    GameData_21cdc78 = 0;
    GameData_21cdc70 = 0;
    GameData_21cdc88 = 1;
    GameData_21cdc90 = 0;
    GameData_21cdc98 = 0;
    GameData_21cdca0 = 0;
    GameData_21cdca8 = 2;
    GameData_21cdcb0 = 0;
    GameData_21cdcb8 = 0;
    GameData_21cdcc0 = 0;
    GameData_21cdcd0 = 0;
    GameData_21cdcd8 = 0;
    GameData_21cdce0 = 0;
    GameData_21cdce8 = 13;
    GameData_21cdcf0 = 0;
    GameData_21cdcf8 = (__int64)GameRoutine_739330;
    GameData_21cdd00 = 0;
    GameData_21cdd08 = 0;
    GameData_21cdd10 = 0;
    GameData_21cdd18 = 0;
    GameData_21cdd20 = 0;
    GameData_21cdd28 = 13;
    GameData_21cdd30 = 0;
    GameData_21cdd40 = 0;
    GameData_21cdd48 = 0;
    GameData_21cdd50 = 0;
    GameData_21cdd58 = 0;
    GameData_21cdd60 = 0;
    GameData_21cdd68 = 14;
    GameData_21cdd70 = 0;
    GameData_21cdd80 = 0;
    GameData_21cdd88 = 0;
    GameData_21cdd90 = 0;
    GameData_21cdd98 = 0;
    GameData_21cdda0 = 0;
    GameData_21cdda8 = 13;
    GameData_21cddb0 = 0;
    GameData_21cddc0 = 0;
    GameData_21cddc8 = 0;
    GameData_21cddd0 = 0;
    GameData_21cddd8 = 0;
    GameData_21cdde0 = 0;
    GameData_21cdde8 = 12;
    GameData_21cde00 = 0;
    GameData_21cddf8 = 0;
    GameData_21cddf0 = 0;
    GameData_21cde08 = 12;
    GameData_21cde10 = 0;
    GameData_21cde18 = 0;
    GameData_21cde20 = 0;
    GameData_21cde28 = 2;
    GameData_21cde30 = 0;
    GameData_21cde38 = 0;
    GameData_21cde40 = 0;
    GameData_21cde48 = 11;
    GameData_21cdef8 = (__int64)GameRoutine_739690;
    GameData_21ce168 = 13;
    GameData_21ce178 = (__int64)GameRoutine_739720;
    GameData_21ce1a8 = 13;
    GameData_21ce1b8 = (__int64)GameRoutine_7397a0;
    GameData_21ce1e8 = 8;
    GameData_21ce228 = 13;
    GameData_21ce268 = 13;
    GameData_21ce278 = (__int64)GameRoutine_7398c0;
    GameData_21ce2c8 = 5;
    GameData_21ce2a8 = 12;
    GameData_21ce2e8 = 2;
    GameData_21ce4e8 = 17;
    GameData_21ce5e8 = 8;
    GameData_21ce5c8 = 17;
    GameData_21ce628 = 8;
    GameData_21ce630 = (__int64)GameData_212d120[0];
    GameData_21ce778 = (__int64)GameRoutine_739cc0;
    GameData_21ce668 = 8;
    GameData_21ce6a8 = 13;
    GameData_21ce6e8 = 12;
    GameData_21ce728 = 2;
    GameData_21ce748 = 18;
    GameData_21ce768 = 8;
    GameData_21ce7a8 = 8;
    GameData_21ce808 = 0;
    GameData_21ce7b0 = (__int64)GameData_212d128[0];
    GameData_21ce7e8 = 8;
    GameData_21ce828 = 13;
    GameData_21ce868 = 12;
    GameData_21ce8a8 = 2;
    GameData_21ce8c8 = 19;
    GameData_21ce8e8 = 8;
    GameData_21ce8f8 = (__int64)GameRoutine_739ce0;
    GameData_21ce928 = 8;
    GameData_21cef10 = 0;
    GameData_21cefd8 = 0;
    GameData_21cefe0 = 0;
    GameData_21cefc8 = 0;
    GameData_21cefc0 = 0;
    GameData_21cefb8 = 0;
    GameData_21cef70 = 0;
    GameData_21cef78 = (__int64)GameRoutine_739700;
    GameData_21cef88 = 0;
    GameData_21cef90 = 0;
    GameData_21cef98 = 0;
    GameData_21cefa0 = 0;
    GameData_21ce930 = (__int64)GameData_212d130[0];
    GameData_21ce968 = 8;
    GameData_21ce9a8 = 13;
    GameData_21ce9e8 = 12;
    GameData_21cea28 = 2;
    GameData_21cea48 = 20;
    GameData_21cea68 = 12;
    GameData_21cef68 = 8;
    GameData_21cefa8 = 8;
    GameData_21cefd0 = 0;
    GameData_21cef18 = 0;
    GameData_21cef20 = 0;
    GameData_21cef40 = 0;
    GameData_21cef38 = 0;
    GameData_21cef30 = 0;
    GameData_21cef50 = 0;
    GameData_21cef58 = 0;
    GameData_21cef60 = 0;
    GameData_21cea78 = 0;
    GameData_21cee20 = 0;
    GameData_21ceec8 = 0;
    GameData_21ceed0 = 0;
    GameData_21ceed8 = 0;
    GameData_21ceee0 = 0;
    GameData_21cef00 = 0;
    GameData_21ceef8 = 0;
    GameData_21ceef0 = 0;
    GameData_21cef08 = 12;
    GameData_21cee78 = (__int64)GameData_212d0f8[0];
    GameData_21cee88 = 0;
    GameData_21cee90 = 0;
    GameData_21cee98 = 0;
    GameData_21ceea0 = 0;
    GameData_21ceeb0 = 0;
    GameData_21ceeb8 = (__int64)GameRoutine_737cc0;
    GameData_21ceec0 = 0;
    GameData_21cefb0 = (__int64)GameData_212d150[0];
    GameData_21cef28 = 2;
    GameData_21cef48 = 15;
    GameData_21ceee8 = 12;
    GameData_21cee28 = 8;
    GameData_21ceea8 = 13;
    GameData_21cece8 = 8;
    GameData_21cee50 = 0;
    GameData_21cee58 = 0;
    GameData_21cee60 = 0;
    GameData_21cee48 = 0;
    GameData_21cee40 = 0;
    GameData_21cee38 = 0;
    GameData_21cee70 = 0;
    GameData_21cedb0 = 0;
    GameData_21cedc8 = 14;
    GameData_21cedd0 = 0;
    GameData_21cedd8 = 0;
    GameData_21cede0 = 0;
    GameData_21cedf0 = 0;
    GameData_21cedf8 = (__int64)GameRoutine_739700;
    GameData_21cee08 = 0;
    GameData_21cee10 = 0;
    GameData_21cee18 = 0;
    GameData_21ced18 = 0;
    GameData_21ced80 = 0;
    GameData_21ced78 = 0;
    GameData_21ced70 = 0;
    GameData_21ced88 = 12;
    GameData_21ced90 = 0;
    GameData_21ced98 = 0;
    GameData_21ceda0 = 0;
    GameData_21cedc0 = 0;
    GameData_21cedb8 = 0;
    GameData_21ced20 = 0;
    GameData_21ced30 = 0;
    GameData_21ced38 = (__int64)GameRoutine_737cc0;
    GameData_21ced40 = 0;
    GameData_21ced48 = 0;
    GameData_21ced50 = 0;
    GameData_21ced58 = 0;
    GameData_21ced60 = 0;
    GameData_21cec20 = 0;
    GameData_21cece0 = 0;
    GameData_21cecc8 = 0;
    GameData_21cecc0 = 0;
    GameData_21cecb8 = 0;
    GameData_21cecf0 = 0;
    GameData_21cecf8 = (__int64)GameData_212d0f8[0];
    GameData_21ced08 = 0;
    GameData_21ced10 = 0;
    GameData_21cec78 = (__int64)GameRoutine_739700;
    GameData_21cec88 = 0;
    GameData_21cec90 = 0;
    GameData_21cec98 = 0;
    GameData_21ceca0 = 0;
    GameData_21ceca8 = 8;
    GameData_21cee30 = (__int64)GameData_212d148[0];
    GameData_21cee68 = 8;
    GameData_21cede8 = 8;
    GameData_21ceda8 = 2;
    GameData_21ced28 = 13;
    GameData_21ced68 = 12;
    GameData_21cec28 = 2;
    GameData_21cecd0 = 0;
    GameData_21cecd8 = 0;
    GameData_21cec40 = 0;
    GameData_21cec38 = 0;
    GameData_21cec30 = 0;
    GameData_21cec50 = 0;
    GameData_21cec58 = 0;
    GameData_21cec60 = 0;
    GameData_21cec70 = 0;
    GameData_21cebd0 = 0;
    GameData_21cebd8 = 0;
    GameData_21cebe0 = 0;
    GameData_21cec00 = 0;
    GameData_21cebf8 = 0;
    GameData_21cebf0 = 0;
    GameData_21cec08 = 12;
    GameData_21cec10 = 0;
    GameData_21cec18 = 0;
    GameData_21cec48 = 22;
    GameData_21cec68 = 8;
    GameData_21cecb0 = (__int64)GameData_212d140[0];
    GameData_21cebe8 = 12;
    GameData_21ceba8 = 13;
    GameData_21ce588 = 1;
    GameData_21ceb28 = 8;
    GameData_21ceb88 = 0;
    GameData_21ceb90 = 0;
    GameData_21ceb98 = 0;
    GameData_21ceba0 = 0;
    GameData_21cebb0 = 0;
    GameData_21cebb8 = (__int64)GameRoutine_737cc0;
    GameData_21cebc0 = 0;
    GameData_21cebc8 = 0;
    GameData_21ceb50 = 0;
    GameData_21ceb58 = 0;
    GameData_21ceb60 = 0;
    GameData_21ceb48 = 0;
    GameData_21ceb40 = 0;
    GameData_21ceb38 = 0;
    GameData_21ceb70 = 0;
    GameData_21ceb78 = (__int64)GameData_212d0f8[0];
    GameData_21cea70 = 0;
    GameData_21cead8 = 0;
    GameData_21ceae0 = 0;
    GameData_21ceaf0 = 0;
    GameData_21ceaf8 = (__int64)GameRoutine_739700;
    GameData_21ceb08 = 0;
    GameData_21ceb10 = 0;
    GameData_21ceb18 = 0;
    GameData_21ceb20 = 0;
    GameData_21cea90 = 0;
    GameData_21cea98 = 0;
    GameData_21ceaa0 = 0;
    GameData_21ceac0 = 0;
    GameData_21ceab8 = 0;
    GameData_21ceab0 = 0;
    GameData_21cead0 = 0;
    GameData_21cde50 = 0;
    GameData_21cde58 = 0;
    GameData_21cde60 = 0;
    GameData_21cea18 = 0;
    GameData_21cea20 = 0;
    GameData_21cea40 = 0;
    GameData_21cea38 = 0;
    GameData_21cea30 = 0;
    GameData_21cea50 = 0;
    GameData_21cea58 = 0;
    GameData_21cea60 = 0;
    GameData_21cea80 = 0;
    GameData_21cde68 = 13;
    GameData_21ce9b8 = (__int64)GameRoutine_737cc0;
    GameData_21ce9c0 = 0;
    GameData_21ce9c8 = 0;
    GameData_21ce9d0 = 0;
    GameData_21ce9d8 = 0;
    GameData_21ce9e0 = 0;
    GameData_21cea00 = 0;
    GameData_21ce9f8 = 0;
    GameData_21ce9f0 = 0;
    GameData_21cea08 = 12;
    GameData_21cea10 = 0;
    GameData_21cde70 = 0;
    GameData_21cde78 = (__int64)GameRoutine_739330;
    GameData_21ce948 = 0;
    GameData_21ce940 = 0;
    GameData_21ce938 = 0;
    GameData_21ce970 = 0;
    GameData_21ce978 = (__int64)GameData_212d0f8[0];
    GameData_21ce988 = 0;
    GameData_21ce990 = 0;
    GameData_21ce998 = 0;
    GameData_21ce9a0 = 0;
    GameData_21ce9b0 = 0;
    GameData_21cde80 = 0;
    GameData_21cde88 = 0;
    GameData_21cde90 = 0;
    GameData_21cde98 = 0;
    GameData_21ce8f0 = 0;
    GameData_21ce908 = 0;
    GameData_21ce910 = 0;
    GameData_21ce918 = 0;
    GameData_21ce920 = 0;
    GameData_21ce950 = 0;
    GameData_21ce958 = 0;
    GameData_21ce960 = 0;
    GameData_21cdea0 = 0;
    GameData_21cdea8 = 8;
    GameData_21ce888 = 12;
    GameData_21ce890 = 0;
    GameData_21ce898 = 0;
    GameData_21ce8a0 = 0;
    GameData_21ce8c0 = 0;
    GameData_21ce8b8 = 0;
    GameData_21ce8b0 = 0;
    GameData_21ce8d0 = 0;
    GameData_21ce8d8 = 0;
    GameData_21ce8e0 = 0;
    GameData_21cdeb0 = 0;
    GameData_21cdec8 = 0;
    GameData_21ce830 = 0;
    GameData_21ce838 = (__int64)GameRoutine_737cc0;
    GameData_21ce840 = 0;
    GameData_21ce848 = 0;
    GameData_21ce850 = 0;
    GameData_21ce858 = 0;
    GameData_21ce860 = 0;
    GameData_21ce880 = 0;
    GameData_21ce878 = 0;
    GameData_21ce870 = 0;
    GameData_21cded0 = 0;
    GameData_21ce7d0 = 0;
    GameData_21ce7d8 = 0;
    GameData_21ce7e0 = 0;
    GameData_21ce7c8 = 0;
    GameData_21ce7c0 = 0;
    GameData_21ce7b8 = 0;
    GameData_21ce7f0 = 0;
    GameData_21ce7f8 = (__int64)GameData_212d0f8[0];
    GameData_21ce810 = 0;
    GameData_21ce818 = 0;
    GameData_21ce820 = 0;
    GameData_21cded8 = 0;
    GameData_21cdee0 = 0;
    GameData_21cdee8 = 13;
    GameData_21cdef0 = 0;
    GameData_21ce750 = 0;
    GameData_21ce758 = 0;
    GameData_21ce760 = 0;
    GameData_21ce770 = 0;
    GameData_21ce788 = 0;
    GameData_21ce790 = 0;
    GameData_21ce798 = 0;
    GameData_21ce7a0 = 0;
    GameData_21cdf00 = 0;
    GameData_21cdf08 = 0;
    GameData_21ce700 = 0;
    GameData_21ce6f8 = 0;
    GameData_21ce6f0 = 0;
    GameData_21ce708 = 12;
    GameData_21ce710 = 0;
    GameData_21ce718 = 0;
    GameData_21ce720 = 0;
    GameData_21ce740 = 0;
    GameData_21ce738 = 0;
    GameData_21ce730 = 0;
    GameData_21cdf10 = 0;
    GameData_21cdf18 = 0;
    GameData_21ce690 = 0;
    GameData_21ce698 = 0;
    GameData_21ce6a0 = 0;
    GameData_21ce6b0 = 0;
    GameData_21ce6b8 = (__int64)GameRoutine_737cc0;
    GameData_21ce6c0 = 0;
    GameData_21ce6c8 = 0;
    GameData_21ce6d0 = 0;
    GameData_21ce6d8 = 0;
    GameData_21ce6e0 = 0;
    GameData_21cdf20 = 0;
    GameData_21cdf28 = 8;
    GameData_21cdf30 = 0;
    GameData_21ce650 = 0;
    GameData_21ce658 = 0;
    GameData_21ce660 = 0;
    GameData_21ce648 = 0;
    GameData_21ce640 = 0;
    GameData_21ce638 = 0;
    GameData_21ce670 = 0;
    GameData_21ce678 = (__int64)GameData_212d0f8[0];
    GameData_21ce688 = 0;
    GameData_21cdf38 = (__int64)GameData_212d0f8[0];
    GameData_21cdf48 = 0;
    GameData_21cdf50 = 0;
    GameData_21ce5d0 = 0;
    GameData_21ce5d8 = 0;
    GameData_21ce5e0 = 0;
    GameData_21ce5f0 = 0;
    GameData_21ce5f8 = (__int64)GameRoutine_739700;
    GameData_21ce608 = 0;
    GameData_21ce610 = 0;
    GameData_21ce618 = 0;
    GameData_21ce620 = 0;
    GameData_21ce2f8 = 0;
    GameData_21ce578 = 0;
    GameData_21ce570 = 0;
    GameData_21ce590 = 0;
    GameData_21ce598 = 0;
    GameData_21ce5a0 = 0;
    GameData_21ce5b0 = 0;
    GameData_21ce5b8 = 0;
    GameData_21ce5c0 = 0;
    GameData_21ce530 = 0;
    GameData_21ce538 = (__int64)GameRoutine_737cc0;
    GameData_21ce540 = 0;
    GameData_21ce548 = 0;
    GameData_21ce550 = 0;
    GameData_21ce558 = 0;
    GameData_21ce560 = 0;
    GameData_21ce580 = 0;
    GameData_21ce4d0 = 0;
    GameData_21ce4d8 = 0;
    GameData_21ce4e0 = 0;
    GameData_21ce4f0 = 0;
    GameData_21ce500 = 0;
    GameData_21ce508 = 28;
    GameData_21ce510 = 0;
    GameData_21ce518 = 0;
    GameData_21ce520 = 0;
    GameData_21ce300 = 0;
    GameData_21ce358 = 0;
    GameData_21ce488 = 0;
    GameData_21ce490 = 0;
    GameData_21ce498 = 0;
    GameData_21ce4a0 = 0;
    GameData_21ce4b0 = 0;
    GameData_21ce4b8 = (__int64)GameData_212d0e8[0];
    GameData_21ce4c8 = 0;
    GameData_21ce5a8 = 2;
    GameData_21ceb68 = 8;
    GameData_21ce528 = 13;
    GameData_21ceae8 = 8;
    GameData_21ce568 = 12;
    GameData_21ceaa8 = 2;
    GameData_21ce4f8 = (__int64)GameRoutine_739bc0;
    GameData_21ceac8 = 21;
    GameData_21ceb30 = (__int64)GameData_212d138[0];
    GameData_21ce4a8 = 8;
    GameData_21cea88 = 24;
    GameData_21ce468 = 8;
    GameData_21ce478 = (__int64)GameData_212d118[0];
    GameData_21ce440 = 0;
    GameData_21ce448 = 0;
    GameData_21ce450 = 0;
    GameData_21ce458 = 0;
    GameData_21ce460 = 0;
    GameData_21ce470 = 0;
    GameData_21ce408 = 28;
    GameData_21ce410 = 0;
    GameData_21ce418 = 0;
    GameData_21ce420 = 0;
    GameData_21ce430 = 0;
    GameData_21ce3b0 = 0;
    GameData_21ce3f8 = (__int64)GameData_212cfa8;
    GameData_21ce428 = 13;
    GameData_21ce438 = (__int64)GameRoutine_739b20;
    GameData_21ce3a8 = 8;
    GameData_21ce3c8 = 0;
    GameData_21ce3d0 = 0;
    GameData_21ce3d8 = 0;
    GameData_21ce3e0 = 0;
    GameData_21ce3f0 = 0;
    GameData_21ce360 = 0;
    GameData_21ce3b8 = (__int64)GameData_212d110[0];
    GameData_21ce3e8 = 12;
    GameData_21ce368 = 8;
    GameData_21ce390 = 0;
    GameData_21ce398 = 0;
    GameData_21ce3a0 = 0;
    GameData_21ce388 = 0;
    GameData_21ce380 = 0;
    GameData_21ce378 = 0;
    GameData_21ce310 = 0;
    GameData_21ce318 = 0;
    GameData_21ce320 = 0;
    GameData_21ce330 = 0;
    GameData_21ce338 = (__int64)GameRoutine_739330;
    GameData_21ce340 = 0;
    GameData_21ce348 = 0;
    GameData_21ce350 = 0;
    GameData_21cdf58 = 0;
    GameData_21cdf60 = 0;
    GameData_21cdf68 = 13;
    GameData_21ce298 = 0;
    GameData_21ce2a0 = 0;
    GameData_21ce2c0 = 0;
    GameData_21ce2b8 = 0;
    GameData_21ce2b0 = 0;
    GameData_21ce2d0 = 0;
    GameData_21ce2d8 = 0;
    GameData_21ce2e0 = 0;
    GameData_21ce2f0 = 0;
    GameData_21cdf70 = 0;
    GameData_21cdf78 = (__int64)GameRoutine_737cc0;
    GameData_21ce238 = (__int64)GameRoutine_737cc0;
    GameData_21ce240 = 0;
    GameData_21ce248 = 0;
    GameData_21ce250 = 0;
    GameData_21ce258 = 0;
    GameData_21ce260 = 0;
    GameData_21ce270 = 0;
    GameData_21ce280 = 0;
    GameData_21ce288 = 0;
    GameData_21ce290 = 0;
    GameData_21cdf80 = 0;
    GameData_21cdf88 = 0;
    GameData_21ce1d0 = 0;
    GameData_21ce1d8 = 0;
    GameData_21ce1e0 = 0;
    GameData_21ce1f0 = 0;
    GameData_21ce1f8 = (__int64)GameData_212d0f8[0];
    GameData_21ce208 = 0;
    GameData_21ce210 = 0;
    GameData_21ce218 = 0;
    GameData_21ce220 = 0;
    GameData_21ce230 = 0;
    GameData_21cdf90 = 0;
    GameData_21cdf98 = 0;
    GameData_21cdfa0 = 0;
    GameData_21ce170 = 0;
    GameData_21ce180 = 0;
    GameData_21ce188 = 0;
    GameData_21ce190 = 0;
    GameData_21ce198 = 0;
    GameData_21ce1a0 = 0;
    GameData_21ce1b0 = 0;
    GameData_21ce1c0 = 0;
    GameData_21ce1c8 = 0;
    GameData_21cdfa8 = 12;
    GameData_21ce108 = 0;
    GameData_21ce110 = 0;
    GameData_21ce118 = 0;
    GameData_21ce120 = 0;
    GameData_21ce128 = 8;
    GameData_21ce130 = 0;
    GameData_21ce138 = (__int64)GameRoutine_739700;
    GameData_21ce148 = 0;
    GameData_21ce150 = 0;
    GameData_21ce158 = 0;
    GameData_21ce160 = 0;
    GameData_21ce0a8 = 2;
    GameData_21ce0b0 = 0;
    GameData_21ce0b8 = 0;
    GameData_21ce0c0 = 0;
    GameData_21ce0c8 = 12;
    GameData_21ce0d0 = 0;
    GameData_21ce0d8 = 0;
    GameData_21ce0e0 = 0;
    GameData_21ce0e8 = 13;
    GameData_21ce0f0 = 0;
    GameData_21ce0f8 = (__int64)GameRoutine_739330;
    GameData_21ce100 = 0;
    GameData_21cdfc0 = 0;
    GameData_21cdff8 = 0;
    GameData_21ce058 = 0;
    GameData_21ce060 = 0;
    GameData_21ce068 = 12;
    GameData_21ce080 = 0;
    GameData_21ce078 = 0;
    GameData_21ce070 = 0;
    GameData_21ce088 = 12;
    GameData_21ce090 = 0;
    GameData_21ce098 = 0;
    GameData_21ce0a0 = 0;
    GameData_21ce000 = 0;
    GameData_21ce008 = 13;
    GameData_21ce010 = 0;
    GameData_21ce018 = 0;
    GameData_21ce020 = 0;
    GameData_21ce028 = 8;
    GameData_21ce030 = 0;
    GameData_21ce370 = (__int64)GameData_212d108[0];
    GameData_21ce328 = 13;
    GameData_21ce308 = 26;
    GameData_21ce048 = 0;
    GameData_21ce050 = 0;
    GameData_21cdfb8 = 0;
    GameData_21cdfb0 = 0;
    GameData_21cdfc8 = 2;
    GameData_21cdfd0 = 0;
    GameData_21cdfd8 = 0;
    GameData_21cdfe0 = 0;
    GameData_21cdfe8 = 2;
    GameData_21cdff0 = 0;
    GameData_21ceff0 = 0;
    GameData_21ceff8 = (__int64)GameData_212d0f8[0];
    GameData_21cf008 = 0;
    GameData_21cf010 = 0;
    GameData_21cf018 = 0;
    GameData_21cf020 = 0;
    GameData_21cf030 = 0;
    GameData_21cf038 = (__int64)GameRoutine_737cc0;
    GameData_21cf040 = 0;
    GameData_21cf048 = 0;
    GameData_21cf050 = 0;
    GameData_21cf058 = 0;
    GameData_21cf060 = 0;
    GameData_21cf080 = 0;
    GameData_21cf078 = 0;
    GameData_21cf070 = 0;
    GameData_21cf088 = 12;
    GameData_21cf090 = 0;
    GameData_21cf098 = 0;
    GameData_21cf0a0 = 0;
    GameData_21cf0c0 = 0;
    GameData_21cf0b8 = 0;
    GameData_21cf0b0 = 0;
    GameData_21cf0d0 = 0;
    GameData_21cf0d8 = 0;
    GameData_21cf0e0 = 0;
    GameData_21cf0f0 = 0;
    GameData_21cf0f8 = (__int64)GameRoutine_739700;
    GameData_21cf108 = 0;
    GameData_21cf110 = 0;
    GameData_21cf118 = 0;
    GameData_21cf120 = 0;
    GameData_21ce038 = (__int64)MapUnitCommandMenu_19f6660_ptr[0];
    GameData_21cefe8 = 8;
    GameData_21cf028 = 13;
    GameData_21cf068 = 12;
    GameData_21cf0a8 = 2;
    GameData_21cf0c8 = 16;
    GameData_21cf0e8 = 8;
    GameData_21cf128 = 8;
    GameData_21cf388 = 14;
    GameData_21cf150 = 0;
    GameData_21cf158 = 0;
    GameData_21cf160 = 0;
    GameData_21cf148 = 0;
    GameData_21cf140 = 0;
    GameData_21cf138 = 0;
    GameData_21cf170 = 0;
    GameData_21cf178 = (__int64)GameData_212d0f8[0];
    GameData_21cf188 = 0;
    GameData_21cf190 = 0;
    GameData_21cf198 = 0;
    GameData_21cf1a0 = 0;
    GameData_21cf1b0 = 0;
    GameData_21cf1b8 = (__int64)GameRoutine_737cc0;
    GameData_21cf1c0 = 0;
    GameData_21cf1c8 = 0;
    GameData_21cf1d0 = 0;
    GameData_21cf1d8 = 0;
    GameData_21cf1e0 = 0;
    GameData_21cf200 = 0;
    GameData_21cf1f8 = 0;
    GameData_21cf1f0 = 0;
    GameData_21cf208 = 12;
    GameData_21cf210 = 0;
    GameData_21cf218 = 0;
    GameData_21cf220 = 0;
    GameData_21cf240 = 0;
    GameData_21cf238 = 0;
    GameData_21cf230 = 0;
    GameData_21cf250 = 0;
    GameData_21cf258 = 0;
    GameData_21cf260 = 0;
    GameData_21cf270 = 0;
    GameData_21cf278 = (__int64)GameRoutine_739700;
    GameData_21cf288 = 0;
    GameData_21cf290 = 0;
    GameData_21cf298 = 0;
    GameData_21cf2a0 = 0;
    GameData_21cf2b0 = (__int64)GameData_212d138[0];
    GameData_21cf2d0 = 0;
    GameData_21cf2d8 = 0;
    GameData_21cf2e0 = 0;
    GameData_21cf2c8 = 0;
    GameData_21cf2c0 = 0;
    GameData_21cf2b8 = 0;
    GameData_21cf2f0 = 0;
    GameData_21cf2f8 = (__int64)GameData_212d0f8[0];
    GameData_21cf308 = 0;
    GameData_21cf310 = 0;
    GameData_21cf318 = 0;
    GameData_21cf320 = 0;
    GameData_21cf330 = 0;
    GameData_21cf338 = (__int64)GameRoutine_737cc0;
    GameData_21cf340 = 0;
    GameData_21cf348 = 0;
    GameData_21cf350 = 0;
    GameData_21cf358 = 0;
    GameData_21cf360 = 0;
    GameData_21cf380 = 0;
    GameData_21cf378 = 0;
    GameData_21cf370 = 0;
    GameData_21cf390 = 0;
    GameData_21cf398 = 0;
    GameData_21cf3a0 = 0;
    GameData_21cf3c0 = 0;
    GameData_21cf3b8 = 0;
    GameData_21cf3b0 = 0;
    GameData_21cf3c8 = 24;
    GameData_21cf3d0 = 0;
    GameData_21cf3d8 = 0;
    GameData_21cf3e0 = 0;
    GameData_21cf3a8 = 2;
    GameData_21cf3e8 = 8;
    GameData_21cf130 = (__int64)GameData_212d158[0];
    GameData_21cf168 = 8;
    GameData_21cf1a8 = 13;
    GameData_21cf1e8 = 12;
    GameData_21cf228 = 2;
    GameData_21cf248 = 23;
    GameData_21cf268 = 8;
    GameData_21cf2a8 = 8;
    GameData_21cf2e8 = 8;
    GameData_21cf328 = 13;
    GameData_21cf368 = 12;
    GameData_21cf410 = 0;
    GameData_21cf418 = 0;
    GameData_21cf420 = 0;
    GameData_21cf408 = 0;
    GameData_21cf400 = 0;
    GameData_21cf3f8 = 0;
    GameData_21cf430 = 0;
    GameData_21cf438 = (__int64)GameRoutine_737cc0;
    GameData_21cf440 = 0;
    GameData_21cf448 = 0;
    GameData_21cf450 = 0;
    GameData_21cf458 = 0;
    GameData_21cf460 = 0;
    GameData_21cf480 = 0;
    GameData_21cf478 = 0;
    GameData_21cf470 = 0;
    GameData_21cf488 = 12;
    GameData_21cf490 = 0;
    GameData_21cf498 = 0;
    GameData_21cf4a0 = 0;
    GameData_21cf4c0 = 0;
    GameData_21cf4b8 = 0;
    GameData_21cf4b0 = 0;
    GameData_21cf4d0 = 0;
    GameData_21cf4d8 = 0;
    GameData_21cf4e0 = 0;
    GameData_21cf4f0 = 0;
    GameData_21cf500 = 0;
    GameData_21cf508 = 0;
    GameData_21cf510 = 0;
    GameData_21cf518 = 0;
    GameData_21cf520 = 0;
    GameData_21cf550 = 0;
    GameData_21cf558 = 0;
    GameData_21cf560 = 0;
    GameData_21cf548 = 0;
    GameData_21cf540 = 0;
    GameData_21cf538 = 0;
    GameData_21cf530 = 0;
    GameData_21cf580 = 0;
    GameData_21cf578 = 0;
    GameData_21cf570 = 0;
    GameData_21cf590 = 0;
    GameData_21cf598 = 0;
    GameData_21cf5a0 = 0;
    GameData_21cf3f0 = (__int64)GameData_212d160;
    GameData_21cf428 = 13;
    GameData_21cf468 = 12;
    GameData_21cf4a8 = 2;
    GameData_21cf4c8 = 25;
    GameData_21cf4e8 = 13;
    GameData_21cf4f8 = (__int64)GameRoutine_739d00;
    GameData_21cf528 = 26;
    GameData_21cf568 = 2;
    GameData_21cf588 = 27;
    GameData_21cf5a8 = 8;
    GameData_21cf5f8 = (__int64)GameRoutine_737cc0;
    GameData_21cf7b8 = (__int64)GameData_212d0f8[0];
    GameData_21cf5d0 = 0;
    GameData_21cf5d8 = 0;
    GameData_21cf5e0 = 0;
    GameData_21cf5c8 = 0;
    GameData_21cf5c0 = 0;
    GameData_21cf5b8 = 0;
    GameData_21cf5f0 = 0;
    GameData_21cf600 = 0;
    GameData_21cf608 = 0;
    GameData_21cf610 = 0;
    GameData_21cf618 = 0;
    GameData_21cf620 = 0;
    GameData_21cf640 = 0;
    GameData_21cf638 = 0;
    GameData_21cf630 = 0;
    GameData_21cf648 = 11;
    GameData_21cf650 = 0;
    GameData_21cf658 = 0;
    GameData_21cf660 = 0;
    GameData_21cf680 = 0;
    GameData_21cf678 = 0;
    GameData_21cf670 = 0;
    GameData_21cf688 = 28;
    GameData_21cf690 = 0;
    GameData_21cf698 = 0;
    GameData_21cf6a0 = 0;
    GameData_21cf6b0 = 0;
    GameData_21cf6b8 = (__int64)GameRoutine_7368c0;
    GameData_21cf6c0 = 0;
    GameData_21cf6c8 = 0;
    GameData_21cf6d0 = 0;
    GameData_21cf6d8 = 0;
    GameData_21cf6e0 = 0;
    GameData_21cf6f0 = 0;
    GameData_21cf6f8 = (__int64)GameRoutine_737c80;
    GameData_21cf700 = 0;
    GameData_21cf708 = 0;
    GameData_21cf710 = 0;
    GameData_21cf718 = 0;
    GameData_21cf720 = 0;
    GameData_21cf730 = 0;
    GameData_21cf740 = 0;
    GameData_21cf748 = 0;
    GameData_21cf750 = 0;
    GameData_21cf758 = 0;
    GameData_21cf760 = 0;
    GameData_21cf770 = 0;
    GameData_21cf778 = (__int64)GameData_212d0e8[0];
    GameData_21cf788 = 0;
    GameData_21cf790 = 0;
    GameData_21cf798 = 0;
    GameData_21cf7a0 = 0;
    GameData_21cf7b0 = 0;
    GameData_21cf7c8 = 0;
    GameData_21cf7d0 = 0;
    GameData_21cf7d8 = 0;
    GameData_21cf7e0 = 0;
    GameData_21cf810 = 0;
    GameData_21cf818 = 0;
    GameData_21cf820 = 0;
    GameData_21cf808 = 0;
    GameData_21cf800 = 0;
    GameData_21cf7f8 = 0;
    GameData_21cf7f0 = 0;
    GameData_21cf628 = 12;
    GameData_21cf668 = 2;
    GameData_21cf6a8 = 13;
    GameData_21cf5b0 = (__int64)GameData_212d090[0];
    GameData_21cf6e8 = 13;
    GameData_21cf5e8 = 13;
    GameData_21cf728 = 13;
    GameData_21cf738 = (__int64)GameRoutine_739d10;
    GameData_21cf768 = 8;
    GameData_21cf7a8 = 8;
    GameData_21cf7e8 = 0;
    __cxa_guard_release(&GameData_21cf828);
  }
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      240, 16, 0);
  v4 = GameData_212c608[0];
  *(_QWORD*)(v3 + 96) = 0;
  *(_QWORD*)(v3 + 104) = 0;
  *(_QWORD*)(v3 + 112) = 0;
  *(_QWORD*)(v3 + 120) = 0;
  *(_QWORD*)(v3 + 128) = 0;
  *(_WORD*)(v3 + 136) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = "NULL";
  *(_QWORD*)(v3 + 138) = 0;
  *(_QWORD*)(v3 + 144) = 0;
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  *(_QWORD*)(v3 + 88) = 0;
  *(_QWORD*)v3 = v4 + 16;
  *(_QWORD*)(v3 + 8) = 0;
  game_ProcInst_Register(v3);
  *(_QWORD*)(v3 + 152) = 0;
  *(_QWORD*)(v3 + 192) = 0;
  GameData_21cf830 = v3;
  *(_QWORD*)v3 = game_map_anonymous_ProcMapSeqHuman_vtable;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2258f50,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2258f50) != 0) {
    BYTE4(GameData_2258f40) = 0;
    GameData_2258f48 = 0;
    GameData_2258f28 = (__int64)"ShowDanger";
    GameData_2258f30 = (__int64)"MID_KeyHelp_ShowDanger";
    LOBYTE(GameData_2258f38) = 1;
    *(__int64*)((char*)&GameData_2258f38 + 4) = 6;
    __cxa_guard_release(&GameData_2258f50);
  }
  v9 = GameData_2258f38;
  v10 = GameData_2258f40;
  v11 = GameData_2258f48;
  v7 = GameData_2258f28;
  v8 = GameData_2258f30;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2258f80,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2258f80) != 0) {
    BYTE4(GameData_2258f70) = 0;
    GameData_2258f78 = 0;
    GameData_2258f58 = (__int64)&GameData_1a9f09e;
    GameData_2258f60 = (__int64)"MID_KeyHelp_Config";
    LOBYTE(GameData_2258f68) = 1;
    *(__int64*)((char*)&GameData_2258f68 + 4) = 7;
    __cxa_guard_release(&GameData_2258f80);
  }
  v14 = GameData_2258f68;
  v15 = GameData_2258f70;
  v16 = GameData_2258f78;
  v12 = GameData_2258f58;
  v13 = GameData_2258f60;
  v5 = (_QWORD*)fw_memory_HeapManager_Allocate(*v2, 80, 16, 0);
  *(_QWORD*)(v3 + 208) = v5;
  *(_BYTE*)(v3 + 232) = 0;
  v5[6] = v13;
  v5[7] = v14;
  v5[4] = v11;
  v5[5] = v12;
  v5[8] = v15;
  v5[9] = v16;
  v5[2] = v9;
  v5[3] = v10;
  *(_QWORD*)(v3 + 216) = v5 + 10;
  *(_QWORD*)(v3 + 224) = v5 + 10;
  *v5 = v7;
  v5[1] = v8;
  return ProcInst_657850(v3, (__int64)&GameData_21cd168,
                         (__int64)"ProcMapSeqHuman", 1, a1);
}

__attribute__((swiftcall)) void game_7a8a40(PSEUDO_X8 x8_, __int64 result)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  _BYTE* v6;
  unsigned __int64 v7;
  _BYTE* v8;
  unsigned __int64 v9;
  int v10;
  bool v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v3 = *(_BYTE*)result >> 1;
  if ((*(_BYTE*)result & 1) != 0) {
    v4 = *(_QWORD*)(result + 16);
  }
  else {
    v4 = result + 1;
  }
  if ((*(_BYTE*)result & 1) != 0) {
    v3 = *(_QWORD*)(result + 8);
  }
  if (v3 != 0) {
    v5 = v3 & 3;
    v6 = (_BYTE*)v4;
    if ((v3 & 3) != 0) {
      while (*v6 == 32) {
        ++v6;
        if (--v5 == 0) {
          goto LABEL_10;
        }
      }
      goto LABEL_22;
    }
  LABEL_10:
    if (v3 >= 4) {
      v6 += 3;
      while (1) {
        if (*(v6 - 3) != 32) {
          v6 -= 3;
          goto LABEL_22;
        }
        if (*(v6 - 2) != 32) {
          v6 -= 2;
          goto LABEL_22;
        }
        if (*(v6 - 1) != 32) {
          break;
        }
        if (*v6 != 32) {
          goto LABEL_22;
        }
        v8 = v6 + 1;
        v6 += 4;
        if (v8 == (_BYTE*)(v4 + v3)) {
          goto LABEL_11;
        }
      }
      --v6;
    LABEL_22:
      v7 = (unsigned __int64)&v6[-v4];
      goto LABEL_23;
    }
  }
LABEL_11:
  v7 = -1;
LABEL_23:
  v9 = v3;
  do {
    if (v9 == 0) {
      v12 = -1LL - v7;
      if (v7 == -1) {
        goto LABEL_37;
      }
    LABEL_28:
      if (v3 < v7) {
        String_60a230();
      }
      if (v3 - v7 >= v12 + 1) {
        v13 = v12 + 1;
      }
      else {
        v13 = v3 - v7;
      }
      if (v13 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      if (v13 >= 0x17) {
        if ((v13 | 7) == 0x17) {
          v16 = 26;
        }
        else {
          v16 = (v13 | 7) + 1;
        }
        v17 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v16,
                                                  16, 0);
        a2[1] = v13;
        a2[2] = v17;
        *a2 = v16 | 1;
        v14 = (char*)v17;
      }
      else {
        *(_BYTE*)a2 = 2 * v13;
        v14 = (char*)a2 + 1;
        if (v13 == 0) {
          goto LABEL_45;
        }
      }
      result = memmove(v14, v4 + v7, v13);
    LABEL_45:
      v14[v13] = 0;
      {
        result;
        return;
      }
    }
    v10 = *(unsigned __int8*)(v4 - 1 + v9--);
  } while (v10 == 32);
  v11 = v9 > v7;
  v12 = v9 - v7;
  if (v11) {
    goto LABEL_28;
  }
LABEL_37:
  if ((*(_BYTE*)result & 1) != 0) {
    fw_text_String_CopyTerminated(a2);
    return;
  }
  v15 = *(_QWORD*)(result + 8);
  *a2 = *(_QWORD*)result;
  a2[1] = v15;
  a2[2] = *(_QWORD*)(result + 16);
  {
    result;
    return;
  }
}

__int64 game_7bbe20()
{
  GameData_21d87a8 = 0;
  GameData_21d87b0 = 0;
  GameData_21d8798 = 0;
  GameData_21d87a0 = 0;
  GameData_21d8788 = 0;
  GameData_21d8790 = 0;
  GameRoutine_2b0();
  GameData_21d87b8 = 0;
  GameData_21d87c0 = 0;
  GameData_21d87c8 = 0;
  GameData_21d87d0 = 0;
  GameData_21d87d8 = 0;
  GameData_21d87e0 = 0;
  return GameRoutine_2b0();
}

__int64 game_7bc0e0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;

  v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                  24LL * *(unsigned __int8*)(*GameData_212ce90[0] + 24) +
                  556000);
  if (v1 != 0) {
    v2 = result;
    v3 = game_g_shared_system_skills_ptr;
    while (1) {
      v4 = v1;
      v1 = *(_QWORD*)(v1 + 432);
      v5 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x120LL) + v3) & 0xFFF;
      result = game_HasSkill((_QWORD*)(v4 + 1744), (unsigned int*)&v5);
      if ((result & 1) != 0) {
        break;
      }
      if (v1 == 0) {
        return result;
      }
    }
    return game_7bc4e0(v2, 1);
  }
  return result;
}

__int64 game_7bdbd0(__int64 result)
{
  int v1;
  int v2;
  __int64 v3;
  __int64 v4;
  __int128 v5;
  __int128 v6;
  __int128 v7;
  __int128 v8;

  v1 = *(_DWORD*)(result + 180);
  if (*(unsigned __int8*)(GameData_21ca300 + 26) >
      (unsigned int)(unsigned __int8)(v1 - *(_BYTE*)(GameData_21ca300 + 24))) {
    v2 = *(_DWORD*)(result + 184);
    if (*(unsigned __int8*)(GameData_21ca300 + 27) >
        (unsigned int)(unsigned __int8)(v2 -
                                        *(_BYTE*)(GameData_21ca300 + 25))) {
      Cursor_730b20(GameData_21cd130, v1, v2);
      v3 = *(_QWORD*)(GameData_21cd130 + 48);
      if (*(float*)(v3 + 28) == *(float*)(v3 + 24)) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
            *(_QWORD*)(v3 + 16) + 16LL))((void*)(&v8), v3 + 16);
      }
      else {
        v4 = *(_QWORD*)(v3 + 72);
        *(_QWORD*)&v8 = *(_QWORD*)(v3 + 64);
        *((_QWORD*)&v8 + 1) = v4;
      }
      DWORD1(v5) = DWORD1(v8);
      *(float*)&v5 =
          (float)((float)((float)(int)(float)((float)(*(float*)&v8 +
                                                      0x1.4000000000000p+10f) *
                                              0x1.99999a0000000p-3f) *
                          0x1.4000000000000p+2f) +
                  0x1.4000000000000p+1f) +
          -0x1.4000000000000p+10f;
      *((_QWORD*)&v5 + 1) = COERCE_UNSIGNED_INT(
          (float)((float)((float)(int)(float)((float)(*((float*)&v8 + 2) +
                                                      0x1.4000000000000p+10f) *
                                              0x1.99999a0000000p-3f) *
                          0x1.4000000000000p+2f) +
                  0x1.4000000000000p+1f) +
          -0x1.4000000000000p+10f);
      v6 = v5;
      v8 = v5;
      Cursor_734a80(v3 + 16, (__int64*)&v8);
      v7 = v6;
      result = Cursor_734a80(v3 + 80, (__int64*)&v7);
      *(_DWORD*)(v3 + 172) = 0;
      *(_QWORD*)(v3 + 176) = 0;
    }
  }
  *(_BYTE*)(GameData_21ca2f8 + 25) = 0;
  if (game_script_map_effect_g_sequence != 0) {
    *(_DWORD*)(game_script_map_effect_g_sequence + 152) = 4;
  }
  return result;
}

void game_7bdd40(__int64 a1)
{
  int v1;
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int128 v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  __int64 v20;
  float (**v21)(__int64);
  float v22;
  __int128 v23;
  __int128 v24;
  __int128 v25;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3 &&
      (((v1 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v2 = 2)
           : (v2 = 3),
       (v2 & v1) == 0)) {
    v9 = GameData_212cfc0[0];
    Cursor_730e40(*(_QWORD*)(*GameData_212cfc0[0] + 48),
                  *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL));
    v10 = *(_QWORD*)(*v9 + 48);
    if (*(float*)(v10 + 28) == *(float*)(v10 + 24)) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
          *(_QWORD*)(v10 + 16) + 16LL))((void*)&v25, v10 + 16);
    }
    else {
      v11 = *(_QWORD*)(v10 + 72);
      *(_QWORD*)&v25 = *(_QWORD*)(v10 + 64);
      *((_QWORD*)&v25 + 1) = v11;
    }
    DWORD1(v12) = DWORD1(v25);
    *(float*)&v12 =
        (float)((float)((float)(int)(float)((float)(*(float*)&v25 +
                                                    0x1.4000000000000p+10f) *
                                            0x1.99999a0000000p-3f) *
                        5.0f) +
                2.5f) +
        -0x1.4000000000000p+10f;
    *((_QWORD*)&v12 + 1) = COERCE_UNSIGNED_INT(
        (float)((float)((float)(int)(float)((float)(*((float*)&v25 + 2) +
                                                    0x1.4000000000000p+10f) *
                                            0x1.99999a0000000p-3f) *
                        5.0f) +
                2.5f) +
        -0x1.4000000000000p+10f);
    v23 = v12;
    v25 = v12;
    Cursor_734a80_alt1(v10 + 16, &v25);
    v24 = v23;
    Cursor_734a80_alt1(v10 + 80, &v24);
    v13 = *v9;
    *(_DWORD*)(v10 + 172) = 0;
    *(_QWORD*)(v10 + 176) = 0;
    v14 = *(_QWORD*)(v13 + 48);
    v15 = *(float*)(v14 + 24);
    v16 = *(float*)(v14 + 28);
    *(_BYTE*)(v14 + 41) = 0;
    if (v16 < v15) {
      v17 = v16 + (**(float (***)(__int64))(v14 + 16))(v14 + 16);
      if (*(float*)(v14 + 24) < v17) {
        v17 = *(float*)(v14 + 24);
      }
      *(float*)(v14 + 28) = v17;
    }
    v18 = *(float*)(v14 + 88);
    v19 = *(float*)(v14 + 92);
    *(_BYTE*)(v14 + 105) = 0;
    if (v19 < v18) {
      v21 = *(float (***)(__int64))(v14 + 80);
      v20 = v14 + 80;
      v22 = v19 + (*v21)(v20);
      if (*(float*)(v20 + 8) < v22) {
        v22 = *(float*)(v20 + 8);
      }
      *(float*)(v20 + 12) = v22;
    }
  }
  else if (*(_BYTE*)(a1 + 176) == 1 &&
           (game_GameModeData_instance_ == 0 ||
            ((v3 = game_GameVariableTable_Find(
                  *(_QWORD*)(game_GameModeData_instance_ + 48),
                  &GameData_21d1e50)) == 0 ||
             *(_DWORD*)(v3 + 32) == 0) &&
                (game_GameModeData_instance_ == 0 ||
                 (v4 = game_GameVariableTable_Find(
                      *(_QWORD*)(game_GameModeData_instance_ + 48),
                      &GameData_21d1e50)) != 0 &&
                     *(_DWORD*)(v4 + 32) != 0 ||
                 game_GameModeData_instance_ == 0 ||
                 (v5 = game_GameVariableTable_Find(
                      *(_QWORD*)(game_GameModeData_instance_ + 48),
                      &GameData_21d1e40)) == 0 ||
                 *(_DWORD*)(v5 + 32) == 0))) {
    v6 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL);
    if (v6 != 0) {
      v7 = game_g_shared_system_skills_ptr;
      while (1) {
        v8 = v6;
        v6 = *(_QWORD*)(v6 + 432);
        if ((*(_WORD*)(v8 + 416) & 0x1C01) == 0) {
          LODWORD(v25) =
              *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x11CLL) + v7 + 4) & 0xFFF;
          if ((game_HasSkill_alt1(v8 + 1744, &v25) & 1) == 0) {
            LODWORD(v25) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) + v7) & 0xFFF;
            if ((game_HasSkill_alt1(v8 + 1744, &v25) & 1) == 0) {
              if (*(_WORD*)(v8 + 492) != 0) {
                break;
              }
              if (*(_BYTE*)(v8 + 496) != 0) {
                break;
              }
              LODWORD(v25) =
                  *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v7) & 0xFFF;
              if ((game_HasSkill_alt1(v8 + 1744, &v25) & 1) == 0) {
                break;
              }
            }
          }
        }
        if (v6 == 0) {
          return;
        }
      }
      Cursor_730e40(*(_QWORD*)(*GameData_212cfc0[0] + 48), v8);
    }
  }
}

__int64 game_7c6330(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 result;
  _QWORD* v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
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
  _QWORD* v24;
  __int64* v25;
  __int64 v26;
  _QWORD* v27;
  __int64* v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64* v36;
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
  int v51[4];
  struct {
    __int64 v52;
    char gap24_[24];
    __int64* v53;
  } v52_;
  struct {
    _QWORD v54[4];
    _QWORD* v55;
  } v54_;
  struct {
    _QWORD v56[4];
    _QWORD* v57;
  } v56_;
  struct {
    _QWORD v58[4];
    _QWORD* v59;
  } v58_;
  struct {
    _QWORD v60[4];
    _QWORD* v61;
    char gap248_[8];
    __int64 v62;
    __int64 v63;
    char gap272_[32];
    __int64 v64;
    __int64 v65;
    __int64 v66;
    __int64 v67;
  } v60_;

  v2 = *GameData_212cfc0[0];
  v3 = *(_DWORD*)(*GameData_212cfc0[0] + 40);
  *(_DWORD*)(*GameData_212cfc0[0] + 40) = v3 + 1;
  if (v3 == 0) {
    (**(void (***)(__int64))(v2 + 32))(v2 + 32);
  }
  v4 = GameData_21cd140;
  v5 = *(_DWORD*)(GameData_21cd140 + 424);
  *(_DWORD*)(GameData_21cd140 + 424) = v5 + 1;
  if (v5 == 0) {
    (**(void (***)(__int64))(v4 + 416))(v4 + 416);
  }
  v6 = a1;
  result = *(_QWORD*)GameData_212d028[0];
  if ((*(_BYTE*)(*(_QWORD*)GameData_212d028[0] + 22LL) & 1) != 0) {
    return result;
  }
  v60_.v62 = v60_.v64;
  v60_.v63 = v60_.v65;
  v60_.v67 = v60_.v66;
  v8 = (_QWORD*)result;
  v9 = v6;
  *(_BYTE*)(result + 22) = 1;
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  v11 = (__int64*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  GameRoutine_e5e8c0(v11);
  v12 = (__int64*)v8[6];
  v8[6] = v11;
  if (v12 != nullptr) {
    v13 = v12[1];
    if (v13 != 0) {
      v14 = *v10;
      v12[2] = v13;
      v15 = 128;
      if (*(_QWORD*)(v14 + 200) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(v14 + v15, v13);
    }
    v16 = *v12;
    *v12 = 0;
    if (v16 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
    }
    v17 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*v10 + v17, v12);
  }
  v18 = fw_memory_HeapManager_Allocate(*v10, 8, 16, 0);
  v19 = v8[5];
  *(_DWORD*)v18 = 0;
  *(_BYTE*)(v18 + 4) = 0;
  v8[5] = v18;
  if (v19 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*v10 + v20, v19);
  }
  v21 = fw_memory_HeapManager_Allocate(*v10, 48, 16, 0);
  *(_QWORD*)v21 = GameData_212fb18[0] + 2;
  v22 = fw_memory_HeapManager_Allocate(*v10, 296, 16, 0);
  *(_DWORD*)(v22 + 48) = 0x2000;
  *(_WORD*)(v22 + 108) = 256;
  *(_QWORD*)(v22 + 8) = 0;
  *(_QWORD*)(v22 + 16) = 0;
  *(_DWORD*)(v22 + 32) = 0;
  *(_QWORD*)(v22 + 40) = 0;
  *(_DWORD*)(v22 + 104) = 0;
  *(_QWORD*)(v22 + 56) = 0;
  *(_QWORD*)(v22 + 64) = 0;
  *(_QWORD*)(v22 + 72) = 0;
  *(_WORD*)(v22 + 80) = 0;
  *(_DWORD*)(v22 + 112) = -1082130432;
  *(_WORD*)(v22 + 116) = 0;
  *(_WORD*)(v22 + 136) = 0;
  *(_BYTE*)(v22 + 160) = 0;
  *(_BYTE*)(v22 + 288) = 0;
  *(_QWORD*)(v22 + 272) = 0;
  *(_QWORD*)(v22 + 280) = 0;
  *(_QWORD*)(v22 + 256) = 0;
  *(_QWORD*)(v22 + 264) = 0;
  *(_QWORD*)(v22 + 240) = 0;
  *(_QWORD*)(v22 + 248) = 0;
  *(_QWORD*)(v22 + 224) = 0;
  *(_QWORD*)(v22 + 232) = 0;
  *(_QWORD*)(v22 + 208) = 0;
  *(_QWORD*)(v22 + 216) = 0;
  *(_QWORD*)(v22 + 192) = 0;
  *(_QWORD*)(v22 + 200) = 0;
  *(_QWORD*)(v22 + 176) = 0;
  *(_QWORD*)(v22 + 184) = 0;
  *(_QWORD*)(v22 + 168) = 0;
  *(_QWORD*)(v22 + 120) = 0;
  *(_DWORD*)(v22 + 127) = 0;
  *(_QWORD*)(v21 + 16) = v22;
  *(_BYTE*)(v21 + 24) = 0;
  *(_BYTE*)(v21 + 28) = 0;
  *(_DWORD*)(v21 + 32) = 0;
  *(_BYTE*)(v21 + 36) = 0;
  *(_BYTE*)(v21 + 40) = 0;
  *(_QWORD*)v22 = GameData_2044668;
  *(_DWORD*)(v22 + 292) = 2;
  *(_QWORD*)(v22 + 24) = 0;
  *(_QWORD*)v21 = GameData_212f958[0] + 2;
  *(_QWORD*)(v21 + 8) = v22 + 24;
  v23 = v8[7];
  v8[7] = v21;
  if (v23 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 8LL))(v23);
  }
  v24 = (_QWORD*)fw_memory_HeapManager_Allocate(*v10, 56, 16, 0);
  v25 = GameData_212fd80[0];
  v24[2] = 0;
  v24[3] = 0;
  v24[4] = 0;
  v24[5] = 0;
  v24[6] = 0;
  *v24 = v25 + 2;
  v24[1] = 0;
  v26 = v8[8];
  v8[8] = v24;
  if (v26 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 8LL))(v26);
  }
  v27 = (_QWORD*)fw_memory_HeapManager_Allocate(*v10, 32, 16, 0);
  v28 = GameData_212fd70[0];
  v27[2] = 0;
  v27[3] = 0;
  *v27 = v28 + 2;
  v27[1] = 0;
  v29 = v8[9];
  v8[9] = v27;
  if (v29 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 8LL))(v29);
  }
  v30 = (_QWORD*)fw_memory_HeapManager_Allocate(*v10, 8, 16, 0);
  *v30 = GameData_212fac0[0] + 2;
  v31 = v8[11];
  v8[11] = v30;
  if (v31 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 8LL))(v31);
  }
  v52_.v53 = nullptr;
  v54_.v55 = nullptr;
  v56_.v57 = nullptr;
  v58_.v59 = nullptr;
  v51[0] = 1;
  v60_.v61 = v60_.v60;
  v60_.v60[0] = GameData_1fdb5c8;
  v60_.v60[1] = v8;
  GameRoutine_654050(v60_.v60, v54_.v54);
  if (v60_.v61 == v60_.v60) {
    v32 = 32;
  }
  else {
    if (v60_.v61 == nullptr) {
      goto LABEL_33;
    }
    v32 = 40;
  }
  (*(void (**)(_QWORD*))(*v60_.v61 + v32))(v60_.v61);
LABEL_33:
  v60_.v61 = v60_.v60;
  v60_.v60[0] = GameData_1fdb648;
  GameRoutine_d30390(v60_.v60, v58_.v58);
  if (v60_.v61 == v60_.v60) {
    v33 = 32;
  }
  else {
    if (v60_.v61 == nullptr) {
      goto LABEL_38;
    }
    v33 = 40;
  }
  (*(void (**)(_QWORD*))(*v60_.v61 + v33))(v60_.v61);
LABEL_38:
  v60_.v61 = v60_.v60;
  v60_.v60[0] = GameData_1fdb6c8;
  v60_.v60[1] = v8;
  GameRoutine_654050(v60_.v60, v56_.v56);
  if (v60_.v61 == v60_.v60) {
    v34 = 32;
  }
  else {
    if (v60_.v61 == nullptr) {
      goto LABEL_43;
    }
    v34 = 40;
  }
  (*(void (**)(_QWORD*))(*v60_.v61 + v34))(v60_.v61);
LABEL_43:
  GameRoutine_d55fd0((__int64)GameData_212ec40[0], (__int64)v51);
  GameRoutine_d56220(v9);
  v35 = (__int64*)fw_memory_HeapManager_Allocate(*v10, 32, 16, 0);
  GameRoutine_e5e8c0(v35);
  v36 = (__int64*)v8[6];
  v8[6] = v35;
  if (v36 != nullptr) {
    v37 = v36[1];
    if (v37 != 0) {
      v38 = *v10;
      v36[2] = v37;
      v39 = 128;
      if (*(_QWORD*)(v38 + 200) == 0) {
        v39 = 56;
      }
      nn_mem_StandardAllocator_Free(v38 + v39, v37);
    }
    v40 = *v36;
    *v36 = 0;
    if (v40 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v40 + 8LL))(v40);
    }
    v41 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(*v10 + v41, v36);
  }
  v42 = fw_memory_HeapManager_Allocate(*v10, 8, 16, 0);
  v43 = v8[5];
  *(_DWORD*)v42 = 0;
  *(_BYTE*)(v42 + 4) = 0;
  v8[5] = v42;
  if (v43 != 0) {
    v44 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free(*v10 + v44, v43);
  }
  v45 = fw_memory_HeapManager_Allocate(*v10, 72, 16, 0);
  GameRoutine_f55b70(v45);
  v46 = v8[10];
  v8[10] = v45;
  if (v46 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v46 + 8LL))(v46);
  }
  if (v58_.v59 == v58_.v58) {
    v47 = 32;
  }
  else {
    if (v58_.v59 == nullptr) {
      goto LABEL_64;
    }
    v47 = 40;
  }
  (*(void (**)(_QWORD*))(*v58_.v59 + v47))(v58_.v59);
LABEL_64:
  if (v56_.v57 == v56_.v56) {
    v48 = 32;
  }
  else {
    if (v56_.v57 == nullptr) {
      goto LABEL_69;
    }
    v48 = 40;
  }
  (*(void (**)(_QWORD*))(*v56_.v57 + v48))(v56_.v57);
LABEL_69:
  if (v54_.v55 == v54_.v54) {
    v49 = 32;
    goto LABEL_73;
  }
  if (v54_.v55 != nullptr) {
    v49 = 40;
  LABEL_73:
    (*(void (**)(_QWORD*))(*v54_.v55 + v49))(v54_.v55);
  }
  result = (__int64)v52_.v53;
  if (v52_.v53 == &v52_.v52) {
    v50 = 32;
  }
  else {
    if (v52_.v53 == nullptr) {
      return result;
    }
    v50 = 40;
  }
  return (*(__int64 (**)(__int64*))(*v52_.v53 + v50))(v52_.v53);
}

__int64 game_80c680(__int64 result)
{
  _QWORD handle[2];
  const char* v1;
  _QWORD v2[25];

  if (game_cmdbtl_ProcCmdBtlSeqView_instance_ != 0) {
    if ((_BYTE)result != 0) {
      if ((unsigned __int8)result != 1) {
        return result;
      }
      v1 = "SE_SYS_Telop_CmdBtl_EnemyPhase";
    }
    else {
      v1 = "SE_SYS_Telop_CmdBtl_PlayerPhase";
    }
  }
  else {
    if ((unsigned __int8)result > 3u) {
      return result;
    }
    v1 = GameData_1f9d910[(unsigned __int8)result];
  }
  snd_Fade_Fade_10c830((__int64)v2, 0x0.0p+0f);
  snd_play_ff2d0((void*)(handle), (__int64)v1, (__int64)v1, (__int64)v2, 0,
                 0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade(v2);
  snd_Fade_Fade_10c830((__int64)v2, 0x0.0p+0f);
  snd_play_ff2d0((void*)(handle), (__int64)"VIB_PhaseChange",
                 (__int64)"VIB_PhaseChange", (__int64)v2, 0, 0x10001u, 0,
                 0x0.0p+0f, 0x1.0000000000000p+0f);
  return snd_Fade_Destroy_Fade(v2);
}

char* game_80e6f0(__int64 a1, __int64 a2)
{
  const char* v3;
  int v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;

  if (game_cmdbtl_ProcCmdBtlSeqView_instance_ != 0) {
    return &GameData_1a9f09e;
  }
  if (a2 != 0) {
    v3 = *(const char**)(a2 + 840);
    if (v3 != nullptr) {
      return (char*)v3;
    }
    v4 = *(unsigned __int8*)(a2 + 104);
    if (v4 == 6) {
      return "SE_SYS_Battle_In";
    }
    if ((((unsigned __int16)GameData_21ca458 >> v4) & 1) != 0) {
      if ((unsigned int)*(unsigned __int8*)(a2 + 106) - 2 < 5) {
        return "SE_SYS_Battle_In_Assist";
      }
      v5 = *(_QWORD*)(a2 + 576);
      if (v5 != 0) {
        v6 = *(unsigned __int8*)(v5 + 72);
        v7 = (1LL << *(_BYTE*)(v5 + 73)) & 0x7DC;
        if (v6 <= 7 && v7 != 0) {
          return "SE_SYS_Battle_In_Assist";
        }
      }
    }
    else {
      v3 = "SE_SYS_Battle_In_Assist";
      if (*(_QWORD*)(a2 + 664) != 0 || *(_BYTE*)(a2 + 250) == 28) {
        return (char*)v3;
      }
    }
  }
  if (a1 != 0) {
    if ((unsigned __int8)(*(_BYTE*)(*(_QWORD*)(a1 + 24) + 584LL) - 1) < 4u) {
      return GameData_1f9d930[(
          unsigned __int8)(*(_BYTE*)(*(_QWORD*)(a1 + 24) + 584LL) - 1)];
    }
    if (*(unsigned __int8*)(a1 + 72) < 5u) {
      return "SE_SYS_Battle_In_PhysicalWeapon";
    }
  }
  return "SE_SYS_Battle_In";
}

#pragma GCC visibility pop
