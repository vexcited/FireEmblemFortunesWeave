#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1950100(PSEUDO_X8, __int64, __int64,
                                                    __int64, unsigned int);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void game_facility_19532e0(PSEUDO_X8, _QWORD*,
                                                      _QWORD*, float);
__int64 GameHr_14372d0();
__int64 GameRoutine_13892a0(__int64);
__int64 GameRoutine_1437140();
__int64 GameRoutine_1437150();
__int64 GameRoutine_1437560();
__int64 GameRoutine_1437860();
__int64 GameRoutine_1437970();
__int64 GameRoutine_1553130(__int64 result);
__int64 GameRoutine_1567590(__int64 result, char);
__int64 GameRoutine_2b0();
__int64 GameRoutine_60a020(__int64, const char*);
__int64 LayoutAccessor_155ea30(__int64*);
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 ProcPerchSceneGaze_14376e0();
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_ProcInst_Register(__int64);
__int64 game_ProcInst_Unregister(__int64 result);
__int64 game_facility_ReleaseGroups();
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 std___1___next_prime(unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern _DWORD* GameData_2130fb8;
extern _UNKNOWN* GameData_2122d78;
extern _UNKNOWN* GameData_2122da8;
extern _UNKNOWN* GameData_2122dd8;
extern _UNKNOWN* GameData_2122e08;
extern _UNKNOWN* GameData_2122e38;
extern _UNKNOWN* GameData_2122e68;
extern _UNKNOWN* GameData_2122e98;
extern _UNKNOWN* GameData_2122ec8;
extern _UNKNOWN* GameData_2122ef8;
extern _UNKNOWN* GameData_2122f28;
extern _UNKNOWN* GameData_2122f58;
extern _UNKNOWN* GameData_2122f88;
extern _UNKNOWN* GameData_2122fb8;
extern _UNKNOWN* GameData_2122fe8;
extern _UNKNOWN* GameData_2123018;
extern _UNKNOWN* GameData_2123030;
extern _UNKNOWN* GameData_2123048;
extern _UNKNOWN* GameData_2123078;
extern _UNKNOWN* GameData_2130228;
extern _UNKNOWN GameData_1ae375a;
extern _UNKNOWN GameData_1af6b05;
extern _UNKNOWN GameData_2246850;
extern __int64 (*GameData_203db08[])();
extern __int64 (*GameData_203dce8[])();
extern __int64 (*GameData_2060e00[])();
extern __int64 (*ProcPerchScene_15f1480_ptr[])();
extern __int64 (*ProcPerchScene_15f16f0_ptr[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_facility_FacilitySceneBase_vtable[])();
extern __int64 (
    *game_facility_anonymous_ProcPerchSceneGaze_CameraStateArm_vtable[])();
extern __int64 (
    *game_facility_anonymous_ProcPerchSceneGaze_CameraStateFromQuestion_vtable
        [])();
extern __int64 (
    *game_facility_anonymous_ProcPerchSceneGaze_CameraStateFront_vtable[])();
extern __int64 (
    *game_facility_anonymous_ProcPerchSceneGaze_CameraStateShoulder_vtable[])();
extern __int64 (*game_facility_anonymous_ProcPerchSceneGaze_vtable[])();
extern __int64* GameData_212d460[6];
extern __int64* GameData_2130240[8];
extern __int64* GameData_2132488;
extern __int64 GameData_2122d70;
extern __int64 GameData_2122d80;
extern __int64 GameData_2122d88;
extern __int64 GameData_2122d98;
extern __int64 GameData_2122da0;
extern __int64 GameData_2122db0;
extern __int64 GameData_2122db8;
extern __int64 GameData_2122dc8;
extern __int64 GameData_2122dd0;
extern __int64 GameData_2122de0;
extern __int64 GameData_2122de8;
extern __int64 GameData_2122df8;
extern __int64 GameData_2122e00;
extern __int64 GameData_2122e10;
extern __int64 GameData_2122e18;
extern __int64 GameData_2122e28;
extern __int64 GameData_2122e30;
extern __int64 GameData_2122e40;
extern __int64 GameData_2122e48;
extern __int64 GameData_2122e58;
extern __int64 GameData_2122e60;
extern __int64 GameData_2122e70;
extern __int64 GameData_2122e78;
extern __int64 GameData_2122e88;
extern __int64 GameData_2122e90;
extern __int64 GameData_2122ea0;
extern __int64 GameData_2122ea8;
extern __int64 GameData_2122eb8;
extern __int64 GameData_2122ec0;
extern __int64 GameData_2122ed0;
extern __int64 GameData_2122ed8;
extern __int64 GameData_2122ee8;
extern __int64 GameData_2122ef0;
extern __int64 GameData_2122f00;
extern __int64 GameData_2122f08;
extern __int64 GameData_2122f18;
extern __int64 GameData_2122f20;
extern __int64 GameData_2122f30;
extern __int64 GameData_2122f38;
extern __int64 GameData_2122f48;
extern __int64 GameData_2122f50;
extern __int64 GameData_2122f60;
extern __int64 GameData_2122f68;
extern __int64 GameData_2122f78;
extern __int64 GameData_2122f80;
extern __int64 GameData_2122f90;
extern __int64 GameData_2122f98;
extern __int64 GameData_2122fa8;
extern __int64 GameData_2122fb0;
extern __int64 GameData_2122fc0;
extern __int64 GameData_2122fc8;
extern __int64 GameData_2122fd8;
extern __int64 GameData_2122fe0;
extern __int64 GameData_2122ff0;
extern __int64 GameData_2122ff8;
extern __int64 GameData_2123008;
extern __int64 GameData_2123010;
extern __int64 GameData_2123020;
extern __int64 GameData_2123028;
extern __int64 GameData_2123038;
extern __int64 GameData_2123040;
extern __int64 GameData_2123050;
extern __int64 GameData_2123058;
extern __int64 GameData_2123068;
extern __int64 GameData_2123070;
extern __int64 GameData_2123080;
extern __int64 GameData_2123088;
extern __int64 GameData_2123098;
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_2130fc0[3];
extern __int64 GameData_21f4000;
extern __int64 GameData_2246358;
extern __int64 GameData_2246360;
extern __int64 GameData_2246368;
extern __int64 GameData_2246378;
extern __int64 GameData_2246388;
extern __int64 GameData_2246398;
extern __int64 GameData_22463a0;
extern __int64 GameData_22463a8;
extern __int64 GameData_22463b8;
extern __int64 GameData_22463c8;
extern __int64 GameData_22463d8;
extern __int64 GameData_22463e0;
extern __int64 GameData_22463e8;
extern __int64 GameData_22463f8;
extern __int64 GameData_2246408;
extern __int64 GameData_2246418;
extern __int64 GameData_2246420;
extern __int64 GameData_2246428;
extern __int64 GameData_2246438;
extern __int64 GameData_2246448;
extern __int64 GameData_2246458;
extern __int64 GameData_2246460;
extern __int64 GameData_2246468;
extern __int64 GameData_2246478;
extern __int64 GameData_2246488;
extern __int64 GameData_2246498;
extern __int64 GameData_22464a0;
extern __int64 GameData_22464a8;
extern __int64 GameData_22464b8;
extern __int64 GameData_22464c8;
extern __int64 GameData_22464d8;
extern __int64 GameData_22464e0;
extern __int64 GameData_22464e8;
extern __int64 GameData_22464f8;
extern __int64 GameData_2246508;
extern __int64 GameData_2246518;
extern __int64 GameData_2246520;
extern __int64 GameData_2246528;
extern __int64 GameData_2246538;
extern __int64 GameData_2246548;
extern __int64 GameData_2246558;
extern __int64 GameData_2246560;
extern __int64 GameData_2246568;
extern __int64 GameData_2246578;
extern __int64 GameData_2246588;
extern __int64 GameData_2246598;
extern __int64 GameData_22465a0;
extern __int64 GameData_22465a8;
extern __int64 GameData_22465b8;
extern __int64 GameData_22465c8;
extern __int64 GameData_22465d8;
extern __int64 GameData_22465e0;
extern __int64 GameData_22465e8;
extern __int64 GameData_22465f8;
extern __int64 GameData_2246608;
extern __int64 GameData_2246618;
extern __int64 GameData_2246620;
extern __int64 GameData_2246628;
extern __int64 GameData_2246638;
extern __int64 GameData_2246648;
extern __int64 GameData_2246658;
extern __int64 GameData_2246660;
extern __int64 GameData_2246668;
extern __int64 GameData_2246678;
extern __int64 GameData_2246688;
extern __int64 GameData_2246698;
extern __int64 GameData_22466a0;
extern __int64 GameData_22466a8;
extern __int64 GameData_22466b8;
extern __int64 GameData_22466c8;
extern __int64 GameData_22466d8;
extern __int64 GameData_22466e0;
extern __int64 GameData_22466e8;
extern __int64 GameData_22466f8;
extern __int64 GameData_2246708;
extern __int64 GameData_2246718;
extern __int64 GameData_2246720;
extern __int64 GameData_2246728;
extern __int64 GameData_2246738;
extern __int64 GameData_2246748;
extern __int64 GameData_2246758;
extern __int64 GameData_2246760;
extern __int64 GameData_2246768;
extern __int64 GameData_2246778;
extern __int64 GameData_2246788;
extern __int64 GameData_2246798;
extern __int64 GameData_22467a0;
extern __int64 GameData_22467a8;
extern __int64 GameData_22467b8;
extern __int64 GameData_22467c8;
extern __int64 GameData_22467d8;
extern __int64 GameData_22467e0;
extern __int64 GameData_22467e8;
extern __int64 GameData_22467f8;
extern __int64 GameData_2246808;
extern __int64 GameData_2246818;
extern __int64 GameData_2246820;
extern __int64 GameData_2246828;
extern __int64 GameData_2246838;
extern __int64 GameData_2246848;
extern __int64 GameData_22469e8;
extern __int64 GameData_225ae28;
extern __int64 GameData_2262ae0;
extern __int64 GameData_22736a8;
extern __int64 GameData_22736b0;
extern __int64 GameData_22736b8;
extern __int64 GameData_22736c0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_2122d90;
extern char* GameData_2122dc0;
extern char* GameData_2122df0;
extern char* GameData_2122e20;
extern char* GameData_2122e50;
extern char* GameData_2122e80;
extern char* GameData_2122eb0;
extern char* GameData_2122ee0;
extern char* GameData_2122f10;
extern char* GameData_2122f40;
extern char* GameData_2122f70;
extern char* GameData_2122fa0;
extern char* GameData_2122fd0;
extern char* GameData_2123000;
extern char* GameData_2123060;
extern char* GameData_2123090;
extern char GameData_2246350;
extern char GameData_2246390;
extern char GameData_22463d0;
extern char GameData_2246410;
extern char GameData_2246450;
extern char GameData_2246490;
extern char GameData_22464d0;
extern char GameData_2246510;
extern char GameData_2246550;
extern char GameData_2246590;
extern char GameData_22465d0;
extern char GameData_2246610;
extern char GameData_2246650;
extern char GameData_2246690;
extern char GameData_22466d0;
extern char GameData_2246710;
extern char GameData_2246750;
extern char GameData_2246790;
extern char GameData_22467d0;
extern char GameData_2246810;
extern char GameData_22469e0;
extern int GameData_2241730;
extern int GameData_2246370;
extern int GameData_2246380;
extern int GameData_22463b0;
extern int GameData_22463c0;
extern int GameData_22463f0;
extern int GameData_2246400;
extern int GameData_2246430;
extern int GameData_2246440;
extern int GameData_2246470;
extern int GameData_2246480;
extern int GameData_22464b0;
extern int GameData_22464c0;
extern int GameData_22464f0;
extern int GameData_2246500;
extern int GameData_2246530;
extern int GameData_2246540;
extern int GameData_2246570;
extern int GameData_2246580;
extern int GameData_22465b0;
extern int GameData_22465c0;
extern int GameData_22465f0;
extern int GameData_2246600;
extern int GameData_2246630;
extern int GameData_2246640;
extern int GameData_2246670;
extern int GameData_2246680;
extern int GameData_22466b0;
extern int GameData_22466c0;
extern int GameData_22466f0;
extern int GameData_2246700;
extern int GameData_2246730;
extern int GameData_2246740;
extern int GameData_2246770;
extern int GameData_2246780;
extern int GameData_22467b0;
extern int GameData_22467c0;
extern int GameData_22467f0;
extern int GameData_2246800;
extern int GameData_2246830;
extern int GameData_2246840;
extern int GameData_22736c8;
float ProcTheaterSceneAct_13e2420(__int64);
int __cxa_guard_acquire(__int64);
unsigned __int64 GameRoutine_1130770(__int64, const char*, __int64*);
unsigned __int64 strlen(const char*);
void FacilitySceneBase_1958ed0(__int64, __int64);
void GameRoutine_1418aa0();
void GameRoutine_658c00(__int64*);
void __attribute__((noreturn)) GameRoutine_19e2a00();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void game_170cea0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_facility_anonymous_14368c0(__int64 a1, char a2);
void game_facility_anonymous_15f15a0(__int64 a1);
void game_facility_anonymous_15f1810(_QWORD* a1);
__int64 game_facility_anonymous_16bc520(__int64 a1, const char* a2, int* a3);
__int64 game_facility_anonymous_1935e90(__int64 a1, char a2);
void game_facility_anonymous_196abd0(__int64 a1, char a2);
__int64 game_facility_anonymous_19e7820();

__int64 game_facility_anonymous_14368c0(__int64 a1, char a2)
{

#pragma clang fp contract(off)
  int v2;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64** v11;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 i;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 (**v30)();
  int v31;
  __int64 (*v32)(__int64);
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  float v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  float v43;
  struct {
    __int64* v44;
    __int64 v45;
  } v44_;
  struct {
    _QWORD v46[2];
    __int64 v47;
  } v46_;
  struct {
    __int64 v48;
    __int64 v49;
    __int64 v50;
  } v48_;
  _BYTE v51[8];

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2246850,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2246850) != 0) {
    GameData_2246350 = 18;
    v2 = 1;
    GameData_2246378 = 0;
    GameData_2246380 = 0;
    GameData_2246388 = 0;
    GameData_2246358 = 0;
    GameData_2246360 = 0;
    GameData_2246368 = 0;
    GameData_2246370 = 0;
    GameData_2246390 = 2;
    GameData_2246398 = 0;
    GameData_22463a0 = 0;
    GameData_22463a8 = 0;
    GameData_22463b0 = 1;
    GameData_22463b8 = 0;
    GameData_22463c0 = 0;
    GameData_22463c8 = 0;
    GameData_22463d0 = 14;
    GameData_22463d8 = 0;
    GameData_22463e0 = (__int64)GameRoutine_1437140;
    GameData_22463e8 = 0;
    GameData_22463f0 = 0;
    GameData_22463f8 = 0;
    GameData_2246400 = 0;
    GameData_2246408 = 0;
    GameData_2246410 = 13;
    GameData_2246418 = 0;
    GameData_2246420 = (__int64)GameRoutine_1437150;
    GameData_2246428 = 0;
    GameData_2246430 = 0;
    GameData_2246438 = 0;
    GameData_2246440 = 0;
    GameData_2246448 = 0;
    v43 = ProcTheaterSceneAct_13e2420((__int64)&GameData_1ae375a);
    GameData_2246458 = 0;
    GameData_2246460 = 0;
    GameData_2246468 = 0;
    GameData_2246470 = 1;
    GameData_2246490 = 12;
    GameData_2246590 = 12;
    GameData_2246690 = 12;
    GameData_2246750 = 15;
    GameData_2246450 = 4;
    GameData_22466f0 = 4;
    GameData_2246760 = (__int64)GameRoutine_1437860;
    GameData_22467d0 = 4;
    GameData_2246478 = 0;
    GameData_2246488 = 0;
    GameData_2246498 = 0;
    GameData_22464a0 = 0;
    GameData_22464a8 = 0;
    GameData_22464b8 = 0;
    GameData_22464c0 = 0;
    GameData_22464c8 = 0;
    GameData_22464d0 = 2;
    GameData_22464b0 = 3;
    GameData_22464d8 = 0;
    GameData_22464e0 = 0;
    GameData_22464e8 = 0;
    GameData_22464f0 = 2;
    GameData_22464f8 = 0;
    GameData_2246500 = 0;
    GameData_2246508 = 0;
    GameData_2246510 = 13;
    GameData_2246528 = 0;
    GameData_2246530 = 0;
    GameData_2246538 = 0;
    GameData_2246540 = 0;
    GameData_2246548 = 0;
    GameData_2246550 = 13;
    GameData_2246558 = 0;
    GameData_2246568 = 0;
    GameData_2246570 = 0;
    GameData_2246578 = 0;
    GameData_2246580 = 0;
    GameData_2246588 = 0;
    GameData_22465a8 = 0;
    GameData_22465a0 = 0;
    GameData_2246598 = 0;
    GameData_22465b0 = 3;
    GameData_22465b8 = 0;
    GameData_22465c0 = 0;
    GameData_22465c8 = 0;
    GameData_22465d0 = 2;
    GameData_22465d8 = 0;
    GameData_22465e0 = 0;
    GameData_22465e8 = 0;
    GameData_22465f0 = 3;
    GameData_22465f8 = 0;
    GameData_2246600 = 0;
    GameData_2246608 = 0;
    GameData_2246610 = 14;
    GameData_2246618 = 0;
    GameData_2246628 = 1;
    GameData_2246630 = 0;
    GameData_2246638 = 0;
    GameData_2246640 = 0;
    GameData_2246648 = 0;
    GameData_2246650 = 13;
    GameData_2246658 = 0;
    GameData_2246668 = 0;
    GameData_2246670 = 0;
    GameData_2246678 = 0;
    GameData_2246680 = 0;
    GameData_2246688 = 0;
    GameData_22466a8 = 0;
    GameData_22466a0 = 0;
    GameData_2246698 = 0;
    GameData_22466b0 = 3;
    GameData_22466b8 = 0;
    GameData_22466c0 = 0;
    GameData_22466c8 = 0;
    GameData_22466d0 = 2;
    GameData_22466d8 = 0;
    GameData_22466e0 = 0;
    GameData_22466e8 = 0;
    GameData_22466f8 = 0;
    GameData_2246700 = 0;
    GameData_2246708 = 0;
    GameData_2246710 = 14;
    GameData_2246718 = 0;
    GameData_2246720 = (__int64)GameRoutine_1437140;
    GameData_2246728 = 0;
    GameData_2246730 = 0;
    GameData_2246738 = 0;
    GameData_2246740 = 0;
    GameData_2246748 = 0;
    GameData_2246758 = 0;
    GameData_2246768 = 0;
    GameData_2246770 = 0;
    GameData_2246778 = 0;
    GameData_2246780 = 0;
    GameData_2246788 = 0;
    GameData_2246790 = 13;
    GameData_2246798 = 0;
    GameData_22467a0 = (__int64)GameRoutine_1437970;
    GameData_22467a8 = 0;
    GameData_22467b0 = 0;
    GameData_22467b8 = 0;
    GameData_22467c0 = 0;
    GameData_22467c8 = 0;
    GameData_22467f8 = 0;
    GameData_2246480 = (int)(float)(v43 * 0x1.f400000000000p+9f);
    GameData_22467f0 = 0;
    GameData_22467e8 = 0;
    GameData_22467e0 = 0;
    GameData_22467d8 = 0;
    GameData_2246800 = 500;
    GameData_2246808 = 0;
    GameData_2246810 = 0;
    GameData_2246838 = 0;
    GameData_2246840 = 0;
    GameData_2246518 = 0;
    GameData_2246520 = (__int64)GameHr_14372d0;
    GameData_2246848 = 0;
    GameData_2246818 = 0;
    GameData_2246820 = 0;
    GameData_2246828 = 0;
    GameData_2246830 = 0;
    GameData_2246560 = (__int64)GameRoutine_1437560;
    GameData_2246620 = 16;
    GameData_2246660 = (__int64)ProcPerchSceneGaze_14376e0;
    __cxa_guard_release((__int64)&GameData_2246850);
  }
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      288, 16, 0);
  *(_QWORD*)(v6 + 144) = 0;
  *(_QWORD*)(v6 + 152) = 0;
  *(_QWORD*)(v6 + 160) = 0;
  *(_QWORD*)(v6 + 168) = 0;
  v7 = v6;
  *(_QWORD*)(v6 + 176) = 0;
  *(_QWORD*)(v6 + 184) = 0;
  v8 = GameData_212c608[0];
  *(_QWORD*)(v6 + 192) = 0;
  *(_QWORD*)(v6 + 200) = 0;
  *(_QWORD*)(v6 + 96) = 0;
  *(_QWORD*)(v6 + 104) = 0;
  *(_QWORD*)(v6 + 112) = 0;
  *(_QWORD*)(v6 + 120) = 0;
  *(_QWORD*)(v6 + 128) = 0;
  *(_WORD*)(v6 + 136) = 0;
  *(_QWORD*)(v6 + 16) = 0;
  *(_QWORD*)(v6 + 24) = "NULL";
  *(_QWORD*)(v6 + 138) = 0;
  *(_QWORD*)(v6 + 144) = 0;
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 80) = 0;
  *(_QWORD*)(v6 + 88) = 0;
  *(_QWORD*)v6 = v8 + 16;
  *(_QWORD*)(v6 + 8) = 0;
  game_ProcInst_Register(v6);
  *(_WORD*)(v7 + 152) = 0;
  *(_QWORD*)(v7 + 192) = 0;
  GameData_22469e8 = v7;
  *(_QWORD*)v7 = GameData_203dce8;
  v9 = GameData_2132488;
  *(_BYTE*)(v7 + 216) = 0;
  *(_BYTE*)(v7 + 220) = 0;
  *(_QWORD*)(v7 + 208) = v9 + 2;
  v10 = GameData_2130240[0];
  *(_BYTE*)(v7 + 232) = 0;
  *(_BYTE*)(v7 + 236) = 0;
  *(_QWORD*)(v7 + 224) = v10 + 2;
  GameRoutine_1418aa0();
  v11 = (__int64**)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0) {
    ++*GameData_2130fb8;
  }
  else {
    v12 = (__int64*)fw_memory_HeapManager_Allocate(*v5, 336, 16, 0);
    GameRoutine_13892a0((__int64)v12);
    v13 = *v12;
    *v11 = v12;
    (*(void (**)(__int64*))(v13 + 16))(v12);
  }
  *(_QWORD*)(v7 + 240) = 0;
  v14 = (__int64*)(v7 + 240);
  *(_QWORD*)(v7 + 248) = 0;
  *(_QWORD*)(v7 + 256) = 0;
  *(_BYTE*)(v7 + 272) = 0;
  *(_BYTE*)(v7 + 276) = 0;
  *(_QWORD*)v7 = game_facility_anonymous_ProcPerchSceneGaze_vtable;
  *(_QWORD*)(v7 + 208) = GameData_203db08;
  *(_QWORD*)(v7 + 264) = v10 + 2;
  game_170cea0();
  v15 = fw_memory_HeapManager_Allocate(*v5, 40, 16, 0);
  *(_BYTE*)(v15 + 35) = 0;
  *(_DWORD*)(v15 + 31) = -1380391778;
  *(_QWORD*)v15 = 0x82E3BE81E3A2ADE6LL;
  *(_QWORD*)(v15 + 8) = 0xAD82E35FA89CE68ALL;
  *(_QWORD*)(v15 + 16) = 0x83E3AD82E3A983E3LL;
  *(_QWORD*)(v15 + 24) = 0x9EB3E8B3A6E85FA9LL;
  fw_text_String_CopyTerminated(&v48_.v48, v15, 0x23u);
  LOBYTE(v46_.v46[0]) = 0;
  LOBYTE(v46_.v47) = 0;
  v51[0] = 0;
  v51[4] = 0;
  GameRoutine_1950100((void*)(&v44_.v44), (__int64)&v48_.v48, (__int64)v46_.v46,
                      (__int64)v51, 1u);
  if ((v48_.v48 & 1) != 0 && v48_.v50 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*v5 + v16, v48_.v50);
  }
  v17 = 128;
  if (*(_QWORD*)(*v5 + 200) == 0) {
    v17 = 56;
  }
  nn_mem_StandardAllocator_Free(*v5 + v17, v15);
  v18 = v44_.v44;
  if (*v44_.v44 != 0 &&
      *(_DWORD*)(*v44_.v44 + 16) == *((_DWORD*)v44_.v44 + 2)) {
    v19 = GameData_2262ae0;
    if (GameData_2262ae0 != 0) {
      v20 = *(_QWORD*)(GameData_2262ae0 + 176);
      if (v20 != 0) {
        v21 = std___1___shared_weak_count_lock(v20);
        if (v21 != 0) {
          v22 = *(_QWORD*)(v19 + 168);
          if (v22 != 0) {
            v2 = *(_DWORD*)(v22 + 2372);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            if (v22 != 0) {
              goto LABEL_21;
            }
          }
          else {
            v24 = v21;
            (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
            std___1___shared_weak_count___release_weak(v24);
            if (v22 != 0) {
            LABEL_21:
              v23 = *v18;
              if (*v18 == 0) {
                goto LABEL_31;
              }
            LABEL_25:
              if (*(_DWORD*)(v23 + 16) == *((_DWORD*)v18 + 2)) {
                v25 = *(unsigned int*)(v23 + 36);
                if ((_DWORD)v25 != 0) {
                  for (i = 0; i < v25; ++i) {
                    v27 = *(_QWORD*)(v23 + 40 + 8 * i);
                    if (v27 != 0) {
                      *(_DWORD*)(v27 + 408) = v2 - 1;
                      v25 = *(unsigned int*)(v23 + 36);
                    }
                  }
                }
              }
              goto LABEL_31;
            }
          }
        }
      }
    }
    v2 = 0;
    v23 = *v18;
    if (*v18 == 0) {
      goto LABEL_31;
    }
    goto LABEL_25;
  }
LABEL_31:
  v28 = v44_.v45;
  if (v44_.v45 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v44_.v45 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
    if ((a2 & 1) != 0) {
      goto LABEL_34;
    }
  }
  else if ((a2 & 1) != 0) {
  LABEL_34:
    v29 = (_QWORD*)fw_memory_HeapManager_Allocate(*v5, 8, 16, 0);
    v30 =
        game_facility_anonymous_ProcPerchSceneGaze_CameraStateFromQuestion_vtable;
    goto LABEL_41;
  }
  v31 = (unsigned __int8)GameData_22469e0;
  v29 = (_QWORD*)fw_memory_HeapManager_Allocate(*v5, 8, 16, 0);
  if (v31 == 2) {
    v30 = game_facility_anonymous_ProcPerchSceneGaze_CameraStateShoulder_vtable;
  }
  else if (v31 == 1) {
    v30 = game_facility_anonymous_ProcPerchSceneGaze_CameraStateArm_vtable;
  }
  else {
    v30 = game_facility_anonymous_ProcPerchSceneGaze_CameraStateFront_vtable;
  }
LABEL_41:
  *v29 = v30;
  v32 = (__int64 (*)(__int64))v30[2];
  *v14 = (__int64)v29;
  v33 = v32((__int64)v29);
  if (v33 != 0) {
    *v14 = v33;
  }
  v34 = *(_QWORD**)GameData_2130fc0[0];
  v35 = fw_memory_HeapManager_Allocate(*v5, 40, 16, 0);
  *(_BYTE*)(v35 + 39) = 0;
  v46_.v46[0] = 41;
  v46_.v46[1] = 39;
  v46_.v47 = v35;
  *(_QWORD*)(v35 + 16) = 0xB382E38082E391ACLL;
  *(_QWORD*)(v35 + 24) = 0x83E3B383E39E83E3LL;
  *(_QWORD*)(v35 + 31) = 0x9099E9B688E58983LL;
  *(_QWORD*)v35 = 0x82E3BE81E3A2ADE6LL;
  *(_QWORD*)(v35 + 8) = 0xE7AEBEE5A89CE68ALL;
  v36 = ProcTheaterSceneAct_13e2420((__int64)&GameData_1af6b05);
  game_facility_19532e0((void*)(&v48_.v48), v34, v46_.v46, v36);
  v37 = v48_.v48;
  v38 = v48_.v49;
  v39 = *(_QWORD*)(v7 + 256);
  v48_.v48 = 0;
  v48_.v49 = 0;
  *(_QWORD*)(v7 + 248) = v37;
  *(_QWORD*)(v7 + 256) = v38;
  if (v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
    std___1___shared_weak_count___release_weak(v39);
  }
  v40 = v48_.v49;
  if (v48_.v49 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v48_.v49 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
    std___1___shared_weak_count___release_weak(v40);
    if ((v46_.v46[0] & 1) == 0) {
      goto LABEL_54;
    }
  }
  else if ((v46_.v46[0] & 1) == 0) {
    goto LABEL_54;
  }
  if (v46_.v47 != 0) {
    v41 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(*v5 + v41, v46_.v47);
  }
LABEL_54:
  if ((*(_BYTE*)(v7 + 276) & 1) == 0) {
    GameRoutine_1553130(18);
    *(_DWORD*)(v7 + 272) = 18;
    *(_BYTE*)(v7 + 276) = 1;
  }
  return ProcInst_657850(v7, (__int64)&GameData_2246350,
                         (__int64)"ProcPerchSceneGaze", 1, a1);
}

void game_facility_anonymous_15f15a0(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = ProcPerchScene_15f1480_ptr;
  *(_QWORD*)(a1 + 208) = ProcPerchScene_15f16f0_ptr;
  v2 = (_QWORD*)(a1 + 208);
  FacilitySceneBase_1958ed0(a1 + 208, a1);
  *v2 = game_facility_FacilitySceneBase_vtable;
  if (GameData_21f4000 != 0 && GameData_2241730-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 24LL))(
        (__int64)GameData_21f4000);
    if (GameData_21f4000 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 8LL))(
          GameData_21f4000);
    }
    GameData_21f4000 = 0;
  }
  game_facility_ReleaseGroups();
  v4 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_2060e00;
  if (v4 == (_QWORD*)(a1 + 160)) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_12;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
LABEL_12:
  GameData_225ae28 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00((__int64*)(a1 + 88));
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v6 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                a1);
}

void game_facility_anonymous_15f1810(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;

  *(a1 - 26) = ProcPerchScene_15f1480_ptr;
  v2 = (__int64)(a1 - 26);
  *a1 = ProcPerchScene_15f16f0_ptr;
  FacilitySceneBase_1958ed0((__int64)a1, (__int64)(a1 - 26));
  *a1 = GameData_2132488 + 2;
  v3 = (_QWORD*)GameData_212dce8;
  v4 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 &&
      (signed __int32)(*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4);
    if (*v3 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3);
    }
    *v3 = 0;
  }
  game_facility_ReleaseGroups();
  v6 = (_QWORD*)*(a1 - 2);
  *(a1 - 26) = GameData_2060e00;
  if (v6 == a1 - 6) {
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
  GameData_225ae28 = 0;
  *(a1 - 26) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 9) & 0x100) != 0) {
    *((_WORD*)a1 - 36) &= ~0x100u;
  }
  game_ProcInst_Unregister(v2);
  GameRoutine_658c00(a1 - 15);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v8 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                v2);
}

__int64 game_facility_anonymous_16bc520(__int64 a1, const char* a2, int* a3)
{
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  int v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64 v15;
    unsigned __int64 v16;
    char* v17;
  } v15_;

  v6 = strlen(a2);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16,
                                               0);
    v15_.v16 = v7;
    v15_.v17 = v8;
    v15_.v15 = v9 | 1;
    goto LABEL_9;
  }
  LOBYTE(v15_.v15) = 2 * v6;
  v8 = (char*)&v15_.v15 + 1;
  if (v6 != 0) {
  LABEL_9:
    memcpy((__int64)v8, (__int64)a2, v7);
  }
  v8[v7] = 0;
  v10 = *a3;
  if ((v15_.v15 & 1) != 0) {
    v12 = (__int64)v15_.v17;
    fw_text_String_CopyTerminated((__int64*)a1, (__int64)v15_.v17, v15_.v16);
    *(_DWORD*)(a1 + 24) = v10;
    *(_DWORD*)(a1 + 28) = -1;
    if (v12 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v12);
    }
  }
  else {
    v11 = v15_.v16;
    *(_QWORD*)a1 = v15_.v15;
    *(_QWORD*)(a1 + 8) = v11;
    *(_QWORD*)(a1 + 16) = v15_.v17;
    *(_DWORD*)(a1 + 24) = v10;
    *(_DWORD*)(a1 + 28) = -1;
  }
  return a1;
}

__int64 game_facility_anonymous_1935e90(__int64 a1, char a2)
{
  __int64 v3;
  __int64* v4;
  char v6;
  struct {
    __int64* v8;
    __int64 v9;
  } v8_;

  LayoutAccessor_1560070((void*)(&v8_.v8), (__int64*)(a1 + 200),
                         "L_UnitInfo00");
  if (v8_.v9 != 0) {
    v3 = std___1___shared_weak_count_lock(v8_.v9);
    v4 = v8_.v8;
    if (v8_.v9 != 0) {
      std___1___shared_weak_count___release_weak(v8_.v9);
    }
    if (v3 == 0 || v4 == nullptr) {
      v6 = 1;
      if (v3 == 0) {
        return GameRoutine_1567590((__int64)"ItemChange", (v6 & 1) == 0);
      }
    }
    else {
      v6 = LayoutAccessor_155ea30(v4) & (a2 ^ 1);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
  else {
    v6 = 1;
  }
  return GameRoutine_1567590((__int64)"ItemChange", (v6 & 1) == 0);
}

void game_facility_anonymous_196abd0(__int64 a1, char a2)
{
  const char* v3;
  int v4;
  const char* v5;
  __int64 v7;
  __int64 v8;
  struct {
    _WORD v9[8];
    const char* v10;
  } v9_;

  v9_.v9[0] = 0;
  if ((a2 & 1) != 0) {
    v3 = "MID_LGV_Divination_Continue_m02";
  }
  else {
    v3 = "MID_LGV_Divination_Continue_m01";
  }
  GameRoutine_60a020((__int64)v9_.v9, v3);
  v4 = v9_.v9[0] & 1;
  if ((v9_.v9[0] & 1) != 0) {
    v5 = v9_.v10;
  }
  else {
    v5 = (char*)v9_.v9 + 1;
  }
  if (*GameData_212d460[0] == 0 && v5 != nullptr) {
    v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1376, 16, 0);
    GameRoutine_1130770(v7, v5, nullptr);
    ProcInst_657850(v7, (__int64)GameData_2130228, (__int64)"talk::Seq", 1, a1);
    v4 = v9_.v9[0] & 1;
  }
  if (v4 != 0 && v9_.v10 != nullptr) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                  (__int64)v9_.v10);
  }
}

__int64 game_facility_anonymous_19e7820()
{

#pragma clang fp contract(off)
  unsigned __int64 v0;
  __int64* v1;
  __int64 v2;
  __int64 v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  char* v43;
  char* v44;
  __int64 v45;
  char* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  _QWORD* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  char* v55;
  __int64 v56;
  char* v57;
  __int64 v58;
  unsigned __int64 v59;
  _QWORD* v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64*** v63;
  __int64** v64;
  unsigned __int64 v65;
  __int64* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  _QWORD* v70;
  __int64 v71;
  __int64 v72;
  __int64* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  float v80;
  float v81;
  _BOOL8 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  __int64 primeEm;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  _QWORD** v96;
  unsigned __int64 v97;
  unsigned __int64 v98;
  _QWORD* v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  _QWORD* v102;
  unsigned __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  _QWORD* v107;
  __int64 v108;
  unsigned __int64 v109;
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
  __int64 v129;
  _QWORD* v130;
  _QWORD* v131;
  _QWORD* v132;
  _QWORD* v133;
  _QWORD* v134;
  _QWORD* v135;
  _QWORD* v136;
  _QWORD* v137;
  _QWORD* v138;
  _QWORD* v139;
  _QWORD* v140;
  _QWORD* v141;
  _QWORD* v142;
  _QWORD* v143;
  _QWORD* v144;
  _QWORD* v145;
  _QWORD* v146;
  __int64 v147;
  __int64 v148;
  struct {
    _BYTE v149[8];
    _QWORD* v150;
    _QWORD* v151;
    _QWORD* v152;
    _QWORD* v153;
    _QWORD* v154;
    _QWORD* v155;
    char v156;
    char gap217_[7];
    _QWORD* v157;
    _QWORD* v158;
    _QWORD* v159;
    _QWORD* v160;
    _QWORD* v161;
    _QWORD* v162;
    char v163;
    char gap273_[7];
    _QWORD* v164;
    _QWORD* v165;
    _QWORD* v166;
    _QWORD* v167;
    _QWORD* v168;
    _QWORD* v169;
    char v170;
    char gap329_[7];
    _QWORD* v171;
    _QWORD* v172;
    _QWORD* v173;
    _QWORD* v174;
    _QWORD* v175;
    _QWORD* v176;
    char v177;
    char gap385_[7];
    _QWORD* v178;
    _QWORD* v179;
    _QWORD* v180;
    _QWORD* v181;
    _QWORD* v182;
    _QWORD* v183;
    char v184;
    char gap441_[7];
    _QWORD* v185;
    _QWORD* v186;
    _QWORD* v187;
    _QWORD* v188;
    _QWORD* v189;
    _QWORD* v190;
    char v191;
    char gap497_[7];
    _QWORD* v192;
    _QWORD* v193;
    _QWORD* v194;
    _QWORD* v195;
    _QWORD* v196;
    _QWORD* v197;
    char v198;
    char gap553_[7];
    _QWORD* v199;
    _QWORD* v200;
    _QWORD* v201;
    _QWORD* v202;
    _QWORD* v203;
    _QWORD* v204;
    char v205;
    char gap609_[7];
    _QWORD* v206;
    _QWORD* v207;
    _QWORD* v208;
    _QWORD* v209;
    _QWORD* v210;
    _QWORD* v211;
  } v149_;

  v149_.v149[0] = 9;
  v1 = (__int64*)fw_memory_g_heap_manager_ptr;
  v146 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v149_.v150 = v146;
  v2 = GameData_2122d88;
  v149_.v151 = v146 + 6;
  v149_.v152 = v146 + 6;
  v146[2] = GameData_2122d80;
  v146[3] = v2;
  v3 = GameData_2122d98;
  v146[4] = GameData_2122d90;
  v146[5] = v3;
  v4 = GameData_2122d78;
  *v146 = GameData_2122d70;
  v146[1] = v4;
  v145 = (_QWORD*)fw_memory_HeapManager_Allocate(*v1, 48, 16, 0);
  v149_.v153 = v145;
  v5 = GameData_2122db8;
  v149_.v154 = v145 + 6;
  v149_.v155 = v145 + 6;
  v149_.v156 = 1;
  v145[2] = GameData_2122db0;
  v145[3] = v5;
  v6 = GameData_2122dc8;
  v145[4] = GameData_2122dc0;
  v145[5] = v6;
  v7 = GameData_2122da8;
  *v145 = GameData_2122da0;
  v145[1] = v7;
  v144 = (_QWORD*)fw_memory_HeapManager_Allocate(*v1, 48, 16, 0);
  v149_.v157 = v144;
  v8 = GameData_2122de8;
  v149_.v158 = v144 + 6;
  v149_.v159 = v144 + 6;
  v144[2] = GameData_2122de0;
  v144[3] = v8;
  v9 = GameData_2122df8;
  v144[4] = GameData_2122df0;
  v144[5] = v9;
  v10 = GameData_2122dd8;
  *v144 = GameData_2122dd0;
  v144[1] = v10;
  v143 = (_QWORD*)fw_memory_HeapManager_Allocate(*v1, 48, 16, 0);
  v149_.v160 = v143;
  v11 = GameData_2122e18;
  v149_.v161 = v143 + 6;
  v149_.v162 = v143 + 6;
  v149_.v163 = 2;
  v143[2] = GameData_2122e10;
  v143[3] = v11;
  v12 = GameData_2122e28;
  v143[4] = GameData_2122e20;
  v143[5] = v12;
  v13 = GameData_2122e08;
  *v143 = GameData_2122e00;
  v143[1] = v13;
  v142 = (_QWORD*)fw_memory_HeapManager_Allocate(*v1, 48, 16, 0);
  v149_.v164 = v142;
  v14 = GameData_2122e48;
  v149_.v165 = v142 + 6;
  v149_.v166 = v142 + 6;
  v142[2] = GameData_2122e40;
  v142[3] = v14;
  v15 = GameData_2122e58;
  v142[4] = GameData_2122e50;
  v142[5] = v15;
  v16 = GameData_2122e38;
  *v142 = GameData_2122e30;
  v142[1] = v16;
  v141 = (_QWORD*)fw_memory_HeapManager_Allocate(*v1, 48, 16, 0);
  v149_.v167 = v141;
  v17 = GameData_2122e78;
  v149_.v168 = v141 + 6;
  v149_.v169 = v141 + 6;
  v149_.v170 = 3;
  v141[2] = GameData_2122e70;
  v141[3] = v17;
  v18 = GameData_2122e88;
  v141[4] = GameData_2122e80;
  v141[5] = v18;
  v19 = GameData_2122e68;
  *v141 = GameData_2122e60;
  v141[1] = v19;
  v140 = (_QWORD*)fw_memory_HeapManager_Allocate(*v1, 48, 16, 0);
  v149_.v171 = v140;
  v20 = GameData_2122ea8;
  v149_.v172 = v140 + 6;
  v149_.v173 = v140 + 6;
  v140[2] = GameData_2122ea0;
  v140[3] = v20;
  v21 = GameData_2122eb8;
  v140[4] = GameData_2122eb0;
  v140[5] = v21;
  v22 = GameData_2122e98;
  *v140 = GameData_2122e90;
  v140[1] = v22;
  v139 = (_QWORD*)fw_memory_HeapManager_Allocate(*v1, 48, 16, 0);
  v149_.v174 = v139;
  v23 = GameData_2122ed8;
  v149_.v175 = v139 + 6;
  v149_.v176 = v139 + 6;
  v149_.v177 = 4;
  v139[2] = GameData_2122ed0;
  v139[3] = v23;
  v24 = GameData_2122ee8;
  v139[4] = GameData_2122ee0;
  v139[5] = v24;
  v25 = GameData_2122ec8;
  *v139 = GameData_2122ec0;
  v139[1] = v25;
  v138 = (_QWORD*)fw_memory_HeapManager_Allocate(*v1, 48, 16, 0);
  v149_.v178 = v138;
  v26 = GameData_2122f08;
  v149_.v179 = v138 + 6;
  v149_.v180 = v138 + 6;
  v138[2] = GameData_2122f00;
  v138[3] = v26;
  v27 = GameData_2122f18;
  v138[4] = GameData_2122f10;
  v138[5] = v27;
  v28 = GameData_2122ef8;
  *v138 = GameData_2122ef0;
  v138[1] = v28;
  v137 = (_QWORD*)fw_memory_HeapManager_Allocate(*v1, 48, 16, 0);
  v149_.v181 = v137;
  v29 = GameData_2122f38;
  v149_.v182 = v137 + 6;
  v149_.v183 = v137 + 6;
  v149_.v184 = 5;
  v137[2] = GameData_2122f30;
  v137[3] = v29;
  v30 = GameData_2122f48;
  v137[4] = GameData_2122f40;
  v137[5] = v30;
  v31 = GameData_2122f28;
  *v137 = GameData_2122f20;
  v137[1] = v31;
  v136 = (_QWORD*)fw_memory_HeapManager_Allocate(*v1, 48, 16, 0);
  v149_.v185 = v136;
  v32 = GameData_2122f68;
  v149_.v186 = v136 + 6;
  v149_.v187 = v136 + 6;
  v136[2] = GameData_2122f60;
  v136[3] = v32;
  v33 = GameData_2122f78;
  v136[4] = GameData_2122f70;
  v136[5] = v33;
  v34 = GameData_2122f58;
  *v136 = GameData_2122f50;
  v136[1] = v34;
  v135 = (_QWORD*)fw_memory_HeapManager_Allocate(*v1, 48, 16, 0);
  v149_.v188 = v135;
  v35 = GameData_2122f98;
  v149_.v189 = v135 + 6;
  v149_.v190 = v135 + 6;
  v149_.v191 = 6;
  v135[2] = GameData_2122f90;
  v135[3] = v35;
  v36 = GameData_2122fa8;
  v135[4] = GameData_2122fa0;
  v135[5] = v36;
  v37 = GameData_2122f88;
  *v135 = GameData_2122f80;
  v135[1] = v37;
  v134 = (_QWORD*)fw_memory_HeapManager_Allocate(*v1, 48, 16, 0);
  v38 = GameData_2122fc8;
  v149_.v192 = v134;
  v149_.v193 = v134 + 6;
  v149_.v194 = v134 + 6;
  v134[2] = GameData_2122fc0;
  v134[3] = v38;
  v39 = GameData_2122fd8;
  v134[4] = GameData_2122fd0;
  v134[5] = v39;
  v40 = GameData_2122fb8;
  *v134 = GameData_2122fb0;
  v134[1] = v40;
  v133 = (_QWORD*)fw_memory_HeapManager_Allocate(*v1, 48, 16, 0);
  v149_.v195 = v133;
  v41 = GameData_2122ff8;
  v149_.v197 = v133 + 6;
  v149_.v196 = v133 + 6;
  v149_.v198 = 7;
  v133[2] = GameData_2122ff0;
  v133[3] = v41;
  v42 = GameData_2123008;
  v133[4] = GameData_2123000;
  v133[5] = v42;
  v43 = GameData_2122fe8;
  *v133 = GameData_2122fe0;
  v133[1] = v43;
  v132 = (_QWORD*)fw_memory_HeapManager_Allocate(*v1, 24, 16, 0);
  v149_.v199 = v132;
  v44 = GameData_2123018;
  v45 = GameData_2123020;
  v149_.v201 = v132 + 3;
  v149_.v200 = v132 + 3;
  *v132 = GameData_2123010;
  v132[1] = v44;
  v132[2] = v45;
  v131 = (_QWORD*)fw_memory_HeapManager_Allocate(*v1, 24, 16, 0);
  v149_.v202 = v131;
  v46 = GameData_2123030;
  v47 = GameData_2123038;
  v149_.v204 = v131 + 3;
  v149_.v203 = v131 + 3;
  v149_.v205 = 8;
  *v131 = GameData_2123028;
  v131[1] = v46;
  v131[2] = v47;
  v130 = (_QWORD*)fw_memory_HeapManager_Allocate(*v1, 48, 16, 0);
  v149_.v206 = v130;
  v48 = GameData_2123058;
  v149_.v208 = v130 + 6;
  v149_.v207 = v130 + 6;
  v130[2] = GameData_2123050;
  v130[3] = v48;
  v49 = GameData_2123068;
  v130[4] = GameData_2123060;
  v130[5] = v49;
  v50 = GameData_2123048;
  *v130 = GameData_2123040;
  v130[1] = v50;
  v51 = (_QWORD*)fw_memory_HeapManager_Allocate(*v1, 48, 16, 0);
  v52 = 0;
  v53 = 0;
  v149_.v209 = v51;
  v129 = (__int64)v51;
  v149_.v211 = v51 + 6;
  v149_.v210 = v51 + 6;
  v54 = GameData_2123088;
  v55 = GameData_2123090;
  v56 = GameData_2123098;
  v51[2] = GameData_2123080;
  v51[3] = v54;
  v58 = GameData_2123070;
  v57 = GameData_2123078;
  v51[4] = v55;
  v51[5] = v56;
  GameData_22736a8 = 0;
  GameData_22736b0 = 0;
  GameData_22736b8 = 0;
  GameData_22736c0 = 0;
  GameData_22736c8 = 1065353216;
  *v51 = v58;
  v51[1] = v57;
  do {
    v59 = GameData_22736b0;
    v60 = &v149_.v149[v53];
    v61 = (unsigned __int8)v149_.v149[v53];
    if (GameData_22736b0 != 0) {
      v62 = GameData_22736b0 - 1;
      if ((GameData_22736b0 & (GameData_22736b0 - 1)) != 0) {
        v0 = (unsigned __int8)v149_.v149[v53];
        if (GameData_22736b0 <= v61) {
          v0 = (unsigned int)v61 % (unsigned int)GameData_22736b0;
        }
      }
      else {
        v0 = ((_DWORD)GameData_22736b0 - 1) & (unsigned int)v61;
      }
      v63 = *(__int64****)(GameData_22736a8 + 8 * v0);
      if (v63 != nullptr) {
        v64 = *v63;
        if (v64 != nullptr) {
          if ((GameData_22736b0 & v62) == 0) {
            while (1) {
              v66 = v64[1];
              if (v66 == (__int64*)v61) {
                if (*((unsigned __int8*)v64 + 16) == (_DWORD)v61) {
                  goto LABEL_103;
                }
              }
              else if (((unsigned __int64)v66 & v62) != v0) {
                goto LABEL_22;
              }
              v64 = (__int64**)*v64;
              if (v64 == nullptr) {
                goto LABEL_22;
              }
            }
          }
          do {
            v65 = (unsigned __int64)v64[1];
            if (v65 == v61) {
              if (*((unsigned __int8*)v64 + 16) == (_DWORD)v61) {
                goto LABEL_103;
              }
            }
            else {
              if (v65 >= GameData_22736b0) {
                v65 %= (unsigned __int64)GameData_22736b0;
              }
              if (v65 != v0) {
                break;
              }
            }
            v64 = (__int64**)*v64;
          } while (v64 != nullptr);
        }
      }
    }
  LABEL_22:
    v147 = v53;
    v148 = v52;
    v67 = fw_memory_HeapManager_Allocate(*v1, 72, 16, 0);
    v69 = v60[1];
    v68 = v60[2];
    v70 = (_QWORD*)v67;
    *(_QWORD*)v67 = 0;
    *(_QWORD*)(v67 + 8) = v61;
    v71 = v68 - v69;
    *(_BYTE*)(v67 + 16) = v61;
    *(_QWORD*)(v67 + 24) = 0;
    *(_QWORD*)(v67 + 32) = 0;
    *(_QWORD*)(v67 + 40) = 0;
    if (v68 != v69) {
      if (0xAAAAAAAAAAAAAAABLL * (v71 >> 3) > 0xAAAAAAAAAAAAAAALL) {
        goto LABEL_159;
      }
      v72 = fw_memory_HeapManager_Allocate(*v1, v71, 16, 0);
      v73 = v1;
      v74 = v72 + v71;
      v70[3] = v72;
      v70[4] = v72;
      v70[5] = v72 + v71;
      memcpy(v72, v69, v71);
      v70[4] = v74;
      v1 = v73;
    }
    v76 = v60[4];
    v75 = v60[5];
    v70[7] = 0;
    v70[8] = 0;
    v77 = v75 - v76;
    v70[6] = 0;
    if (v75 != v76) {
      if (0xAAAAAAAAAAAAAAABLL * (v77 >> 3) > 0xAAAAAAAAAAAAAAALL) {
      LABEL_159:
        GameRoutine_19e2a00();
      }
      v78 = fw_memory_HeapManager_Allocate(*v1, v77, 16, 0);
      v79 = v78 + v77;
      v70[6] = v78;
      v70[7] = v78;
      v70[8] = v78 + v77;
      memcpy(v78, v76, v77);
      v70[7] = v79;
    }
    v80 = (float)(unsigned __int64)(v148 + 1);
    if (v59 == 0 || (float)(*(float*)&GameData_22736c8 * (float)v59) < v80) {
      v81 = v80 / *(float*)&GameData_22736c8;
      v82 = (v59 & (v59 - 1)) != 0;
      if (v59 < 3) {
        v82 = true;
      }
      v83 = v82 | (2 * v59);
      v84 = vcvtps_u64_f32(v81);
      if (v83 <= v84) {
        v85 = v84;
      }
      else {
        v85 = v83;
      }
      if (v85 == 1) {
        v85 = 2;
      }
      else if ((v85 & (v85 - 1)) != 0) {
        primeEm = std___1___next_prime(v85);
        v59 = GameData_22736b0;
        v85 = primeEm;
      }
      if (v85 <= v59) {
        if (v85 >= v59) {
          goto LABEL_89;
        }
        v91 = vcvtps_u64_f32((float)(unsigned __int64)GameData_22736c0 /
                             *(float*)&GameData_22736c8);
        if (v59 < 3 || (v59 & (v59 - 1)) != 0) {
          v91 = std___1___next_prime(v91);
        }
        else {
          v92 = 1LL << -(char)__clz(v91 - 1);
          if (v91 >= 2) {
            v91 = v92;
          }
        }
        if (v85 <= v91) {
          v85 = v91;
        }
        if (v85 >= v59) {
          goto LABEL_89;
        }
        if (v85 == 0) {
          v104 = GameData_22736a8;
          GameData_22736a8 = 0;
          if (v104 != 0) {
            v105 = 128;
            if (*(_QWORD*)(*v1 + 200) == 0) {
              v105 = 56;
            }
            nn_mem_StandardAllocator_Free(*v1 + v105, v104);
          }
          GameData_22736b0 = 0;
          goto LABEL_89;
        }
      }
      if (v85 >> 61 != 0) {
        GameRoutine_60a210();
      }
      v87 = fw_memory_HeapManager_Allocate(*v1, 8 * v85, 16, 0);
      v88 = GameData_22736a8;
      GameData_22736a8 = v87;
      if (v88 != 0) {
        v89 = 128;
        if (*(_QWORD*)(*v1 + 200) == 0) {
          v89 = 56;
        }
        nn_mem_StandardAllocator_Free(*v1 + v89, v88);
      }
      GameData_22736b0 = v85;
      if (v85 >= 8) {
        v90 = 0;
        do {
          *(_QWORD*)(GameData_22736a8 + 8 * v90) = 0;
          *(_QWORD*)(GameData_22736a8 + 8 * v90 + 8) = 0;
          *(_QWORD*)(GameData_22736a8 + 8 * v90 + 16) = 0;
          *(_QWORD*)(GameData_22736a8 + 8 * v90 + 24) = 0;
          *(_QWORD*)(GameData_22736a8 + 8 * v90 + 32) = 0;
          *(_QWORD*)(GameData_22736a8 + 8 * v90 + 40) = 0;
          *(_QWORD*)(GameData_22736a8 + 8 * v90 + 48) = 0;
          v93 = GameData_22736a8 + 8 * v90;
          v90 += 8;
          *(_QWORD*)(v93 + 56) = 0;
        } while ((v85 & 0x1FFFFFFFFFFFFFF8LL) != v90);
      }
      else {
        v90 = 0;
      }
      v94 = v85 & 7;
      if ((v85 & 7) != 0) {
        v95 = 8 * v90;
        do {
          --v94;
          *(_QWORD*)(GameData_22736a8 + v95) = 0;
          v95 += 8;
        } while (v94 != 0);
      }
      v96 = (_QWORD**)GameData_22736b8;
      if (GameData_22736b8 != 0) {
        v97 = *(_QWORD*)(GameData_22736b8 + 8);
        v98 = v85 - 1;
        if ((v85 & (v85 - 1)) != 0) {
          if (v97 >= v85) {
            v97 %= v85;
          }
          *(_QWORD*)(GameData_22736a8 + 8 * v97) = &GameData_22736b8;
          v99 = *v96;
          if (*v96 == nullptr) {
            goto LABEL_89;
          }
          while (1) {
            v100 = v99[1];
            if (v100 >= v85) {
              v100 %= v85;
            }
            if (v100 != v97) {
              if (*(_QWORD*)(GameData_22736a8 + 8 * v100) == 0) {
                *(_QWORD*)(GameData_22736a8 + 8 * v100) = v96;
                goto LABEL_66;
              }
              *v96 = (_QWORD*)*v99;
              *v99 = **(_QWORD**)(GameData_22736a8 + 8 * v100);
              **(_QWORD**)(GameData_22736a8 + 8 * v100) = v99;
              v99 = v96;
            }
            v100 = v97;
          LABEL_66:
            v96 = (_QWORD**)v99;
            v99 = (_QWORD*)*v99;
            v97 = v100;
            if (v99 == nullptr) {
              goto LABEL_89;
            }
          }
        }
        v101 = v97 & v98;
        *(_QWORD*)(GameData_22736a8 + 8 * v101) = &GameData_22736b8;
        while (1) {
          v102 = *v96;
          if (*v96 == nullptr) {
            break;
          }
          v103 = v102[1] & v98;
          if (v103 == v101) {
            v96 = (_QWORD**)*v96;
          }
          else if (*(_QWORD*)(GameData_22736a8 + 8 * v103) != 0) {
            *v96 = (_QWORD*)*v102;
            *v102 = **(_QWORD**)(GameData_22736a8 + 8 * v103);
            **(_QWORD**)(GameData_22736a8 + 8 * v103) = v102;
          }
          else {
            *(_QWORD*)(GameData_22736a8 + 8 * v103) = v96;
            v96 = (_QWORD**)v102;
            v101 = v103;
          }
        }
      }
    LABEL_89:
      v59 = GameData_22736b0;
      if ((v59 & (v59 - 1)) != 0) {
        if (GameData_22736b0 <= v61) {
          v0 = v61 % GameData_22736b0;
        }
        else {
          v0 = v61;
        }
      }
      else {
        v0 = ((_DWORD)GameData_22736b0 - 1) & (unsigned int)v61;
      }
    }
    v106 = GameData_22736a8;
    v107 = *(_QWORD**)(GameData_22736a8 + 8 * v0);
    if (v107 != nullptr) {
      *v70 = *v107;
      *v107 = v70;
    }
    else {
      v108 = GameData_22736b8;
      GameData_22736b8 = (__int64)v70;
      *v70 = v108;
      *(_QWORD*)(v106 + 8 * v0) = &GameData_22736b8;
      if (*v70 != 0) {
        v109 = *(_QWORD*)(*v70 + 8LL);
        if ((v59 & (v59 - 1)) != 0) {
          if (v109 >= v59) {
            v109 %= v59;
          }
        }
        else {
          v109 &= v59 - 1;
        }
        *(_QWORD*)(GameData_22736a8 + 8 * v109) = v70;
      }
    }
    v53 = v147;
    v52 = ++GameData_22736c0;
  LABEL_103:
    v53 += 56;
  } while (v53 != 504);
  if (*(_QWORD*)(*v1 + 200) != 0) {
    v110 = 128;
  }
  else {
    v110 = 56;
  }
  nn_mem_StandardAllocator_Free(*v1 + v110, v129);
  if (*(_QWORD*)(*v1 + 200) != 0) {
    v111 = 128;
  }
  else {
    v111 = 56;
  }
  nn_mem_StandardAllocator_Free(*v1 + v111, (__int64)v130);
  if (*(_QWORD*)(*v1 + 200) != 0) {
    v112 = 128;
  }
  else {
    v112 = 56;
  }
  nn_mem_StandardAllocator_Free(*v1 + v112, (__int64)v131);
  if (*(_QWORD*)(*v1 + 200) != 0) {
    v113 = 128;
  }
  else {
    v113 = 56;
  }
  nn_mem_StandardAllocator_Free(*v1 + v113, (__int64)v132);
  if (*(_QWORD*)(*v1 + 200) != 0) {
    v114 = 128;
  }
  else {
    v114 = 56;
  }
  nn_mem_StandardAllocator_Free(*v1 + v114, (__int64)v133);
  if (*(_QWORD*)(*v1 + 200) != 0) {
    v115 = 128;
  }
  else {
    v115 = 56;
  }
  nn_mem_StandardAllocator_Free(*v1 + v115, (__int64)v134);
  if (*(_QWORD*)(*v1 + 200) != 0) {
    v116 = 128;
  }
  else {
    v116 = 56;
  }
  nn_mem_StandardAllocator_Free(*v1 + v116, (__int64)v135);
  if (*(_QWORD*)(*v1 + 200) != 0) {
    v117 = 128;
  }
  else {
    v117 = 56;
  }
  nn_mem_StandardAllocator_Free(*v1 + v117, (__int64)v136);
  if (*(_QWORD*)(*v1 + 200) != 0) {
    v118 = 128;
  }
  else {
    v118 = 56;
  }
  nn_mem_StandardAllocator_Free(*v1 + v118, (__int64)v137);
  if (*(_QWORD*)(*v1 + 200) != 0) {
    v119 = 128;
  }
  else {
    v119 = 56;
  }
  nn_mem_StandardAllocator_Free(*v1 + v119, (__int64)v138);
  if (*(_QWORD*)(*v1 + 200) != 0) {
    v120 = 128;
  }
  else {
    v120 = 56;
  }
  nn_mem_StandardAllocator_Free(*v1 + v120, (__int64)v139);
  if (*(_QWORD*)(*v1 + 200) != 0) {
    v121 = 128;
  }
  else {
    v121 = 56;
  }
  nn_mem_StandardAllocator_Free(*v1 + v121, (__int64)v140);
  if (*(_QWORD*)(*v1 + 200) != 0) {
    v122 = 128;
  }
  else {
    v122 = 56;
  }
  nn_mem_StandardAllocator_Free(*v1 + v122, (__int64)v141);
  if (*(_QWORD*)(*v1 + 200) != 0) {
    v123 = 128;
  }
  else {
    v123 = 56;
  }
  nn_mem_StandardAllocator_Free(*v1 + v123, (__int64)v142);
  if (*(_QWORD*)(*v1 + 200) != 0) {
    v124 = 128;
  }
  else {
    v124 = 56;
  }
  nn_mem_StandardAllocator_Free(*v1 + v124, (__int64)v143);
  if (*(_QWORD*)(*v1 + 200) != 0) {
    v125 = 128;
  }
  else {
    v125 = 56;
  }
  nn_mem_StandardAllocator_Free(*v1 + v125, (__int64)v144);
  if (*(_QWORD*)(*v1 + 200) != 0) {
    v126 = 128;
  }
  else {
    v126 = 56;
  }
  nn_mem_StandardAllocator_Free(*v1 + v126, (__int64)v145);
  if (*(_QWORD*)(*v1 + 200) != 0) {
    v127 = 128;
  }
  else {
    v127 = 56;
  }
  nn_mem_StandardAllocator_Free(*v1 + v127, (__int64)v146);
  return GameRoutine_2b0();
}

#pragma GCC visibility pop
