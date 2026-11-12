#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d8bf80();
__int64 GameRoutine_d8c140();
__int64 GameRoutine_d8c2c0();
__int64 GameRoutine_d8c6e0();
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_809ba0(__int64, float);
__int64 game_ProcInst_Register(__int64);
__int64 game_hub_anonymous_d8c0b0();
extern _UNKNOWN GameData_2212790;
extern __int64 (*game_hub_anonymous_ProcHubSeqPlay_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dc68;
extern __int64 GameData_2212518;
extern __int64 GameData_2212520;
extern __int64 GameData_2212528;
extern __int64 GameData_2212538;
extern __int64 GameData_2212548;
extern __int64 GameData_2212558;
extern __int64 GameData_2212560;
extern __int64 GameData_2212568;
extern __int64 GameData_2212578;
extern __int64 GameData_2212588;
extern __int64 GameData_2212598;
extern __int64 GameData_22125a0;
extern __int64 GameData_22125a8;
extern __int64 GameData_22125b8;
extern __int64 GameData_22125c8;
extern __int64 GameData_22125d8;
extern __int64 GameData_22125e0;
extern __int64 GameData_22125e8;
extern __int64 GameData_22125f8;
extern __int64 GameData_2212608;
extern __int64 GameData_2212618;
extern __int64 GameData_2212620;
extern __int64 GameData_2212628;
extern __int64 GameData_2212638;
extern __int64 GameData_2212648;
extern __int64 GameData_2212658;
extern __int64 GameData_2212660;
extern __int64 GameData_2212668;
extern __int64 GameData_2212678;
extern __int64 GameData_2212688;
extern __int64 GameData_2212698;
extern __int64 GameData_22126a0;
extern __int64 GameData_22126a8;
extern __int64 GameData_22126b8;
extern __int64 GameData_22126c8;
extern __int64 GameData_22126d8;
extern __int64 GameData_22126e0;
extern __int64 GameData_22126e8;
extern __int64 GameData_22126f8;
extern __int64 GameData_2212708;
extern __int64 GameData_2212718;
extern __int64 GameData_2212720;
extern __int64 GameData_2212728;
extern __int64 GameData_2212738;
extern __int64 GameData_2212748;
extern __int64 GameData_2212758;
extern __int64 GameData_2212760;
extern __int64 GameData_2212768;
extern __int64 GameData_2212778;
extern __int64 GameData_2212788;
extern __int64 GameData_2212798;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
extern char GameData_2212510;
extern char GameData_2212550;
extern char GameData_2212590;
extern char GameData_22125d0;
extern char GameData_2212610;
extern char GameData_2212650;
extern char GameData_2212690;
extern char GameData_22126d0;
extern char GameData_2212710;
extern char GameData_2212750;
extern int GameData_2212530;
extern int GameData_2212540;
extern int GameData_2212570;
extern int GameData_2212580;
extern int GameData_22125b0;
extern int GameData_22125c0;
extern int GameData_22125f0;
extern int GameData_2212600;
extern int GameData_2212630;
extern int GameData_2212640;
extern int GameData_2212670;
extern int GameData_2212680;
extern int GameData_22126b0;
extern int GameData_22126c0;
extern int GameData_22126f0;
extern int GameData_2212700;
extern int GameData_2212730;
extern int GameData_2212740;
extern int GameData_2212770;
extern int GameData_2212780;
__int64 game_hub_anonymous_d8bc80(__int64 a1);
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");

__int64 game_hub_anonymous_d8bc80(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int128 v5;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2212790,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_2212790) != 0) {
    GameData_2212558 = 0;
    GameData_2212560 = (__int64)GameRoutine_d8bf80;
    GameData_2212510 = 2;
    GameData_2212530 = 1;
    GameData_2212610 = 2;
    GameData_2212630 = 2;
    GameData_22126d0 = 2;
    GameData_2212518 = 0;
    GameData_2212520 = 0;
    GameData_2212528 = 0;
    GameData_2212538 = 0;
    GameData_2212540 = 0;
    GameData_2212548 = 0;
    GameData_2212598 = 0;
    GameData_22125a0 = (__int64)game_hub_anonymous_d8c0b0;
    GameData_2212550 = 13;
    GameData_2212568 = 0;
    GameData_2212570 = 0;
    GameData_2212578 = 0;
    GameData_2212580 = 0;
    GameData_2212588 = 0;
    GameData_2212590 = 13;
    GameData_22125a8 = 0;
    GameData_22125b0 = 0;
    GameData_22125d8 = 0;
    GameData_22125e0 = (__int64)GameRoutine_d8c140;
    GameData_22125b8 = 0;
    GameData_22125c0 = 0;
    GameData_22125c8 = 0;
    GameData_22125d0 = 13;
    GameData_22125e8 = 0;
    GameData_22125f0 = 0;
    GameData_22125f8 = 0;
    GameData_2212600 = 0;
    GameData_2212608 = 0;
    GameData_2212620 = 0;
    GameData_2212628 = 0;
    GameData_2212650 = 15;
    GameData_2212618 = 0;
    GameData_2212638 = 0;
    GameData_2212640 = 0;
    GameData_2212648 = 0;
    GameData_2212668 = 0;
    GameData_2212670 = 0;
    GameData_2212678 = 0;
    GameData_2212680 = 0;
    GameData_2212688 = 0;
    GameData_2212658 = 0;
    GameData_2212660 = (__int64)GameRoutine_d8c2c0;
    GameData_2212698 = 0;
    GameData_22126a0 = 0;
    GameData_22126a8 = 0;
    GameData_22126b8 = 0;
    GameData_22126c0 = 0;
    GameData_22126c8 = 0;
    GameData_22126d8 = 0;
    GameData_22126e0 = 0;
    GameData_22126e8 = 0;
    GameData_22126f8 = 0;
    GameData_2212700 = 0;
    GameData_2212708 = 0;
    GameData_2212690 = 12;
    GameData_2212710 = 13;
    GameData_2212718 = 0;
    GameData_2212720 = (__int64)GameRoutine_d8c6e0;
    GameData_2212728 = 0;
    GameData_2212730 = 0;
    GameData_2212738 = 0;
    GameData_2212740 = 0;
    GameData_2212748 = 0;
    GameData_2212750 = 0;
    GameData_2212778 = 0;
    GameData_22126b0 = 3;
    GameData_22126f0 = 3;
    GameData_2212780 = 0;
    GameData_2212788 = 0;
    GameData_2212770 = 0;
    GameData_2212768 = 0;
    GameData_2212760 = 0;
    GameData_2212758 = 0;
    __cxa_guard_release_alt1((__int64)&GameData_2212790);
  }
  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      224, 16, 0);
  v3 = GameData_212c608[0];
  *(_QWORD*)(v2 + 96) = 0;
  *(_QWORD*)(v2 + 104) = 0;
  *(_QWORD*)(v2 + 112) = 0;
  *(_QWORD*)(v2 + 120) = 0;
  *(_QWORD*)(v2 + 128) = 0;
  *(_WORD*)(v2 + 136) = 0;
  *(_QWORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 24) = "NULL";
  *(_QWORD*)(v2 + 138) = 0;
  *(_QWORD*)(v2 + 144) = 0;
  *(_QWORD*)(v2 + 32) = 0;
  *(_QWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_QWORD*)(v2 + 80) = 0;
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)v2 = v3 + 16;
  *(_QWORD*)(v2 + 8) = 0;
  game_ProcInst_Register(v2);
  *(_QWORD*)(v2 + 152) = 0;
  *(_QWORD*)(v2 + 192) = 0;
  *(_BYTE*)(v2 + 208) = 0;
  GameData_2212798 = v2;
  *(_QWORD*)v2 = game_hub_anonymous_ProcHubSeqPlay_vtable;
  if (game_ProcFadeView_instance_ != 0) {
    v4 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v4 + 172) == *(float*)(v4 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160);
    }
    else {
      v5 = *(_OWORD*)(v4 + 208);
    }
    if (*((float*)&v5 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(
                        v4 + 160, *((float*)&v5 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f &&
        game_ProcFadeView_instance_ != 0) {
      game_809ba0(game_ProcFadeView_instance_, 0x0.0p+0f);
    }
  }
  if (*(_BYTE*)(*(_QWORD*)GameData_212dc68 + 144LL) == 1) {
    *(_BYTE*)(*(_QWORD*)GameData_212dc68 + 144LL) = 0;
  }
  return ProcInst_657850(v2, (__int64)&GameData_2212510,
                         (__int64)"ProcHubSeqPlay", 1, a1);
}

#pragma GCC visibility pop
