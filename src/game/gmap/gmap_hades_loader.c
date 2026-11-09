#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1535b40();
__int64 GameRoutine_1535b50();
__int64 GameRoutine_1535c20();
__int64 GameRoutine_1535cc0();
__int64 GameRoutine_1535e90();
__int64 GameRoutine_1535ec0();
__int64 GameRoutine_1535ef0();
__int64 GameRoutine_1535f40();
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c73b90(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Register(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_22559a0;
extern __int64 (*GameData_212c720)();
extern __int64 (*GameData_212d760[12])();
extern __int64 (*game_gmap_anonymous_ProcGmapHadesLoad_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_22556e8;
extern __int64 GameData_22556f0;
extern __int64 GameData_22556f8;
extern __int64 GameData_2255708;
extern __int64 GameData_2255718;
extern __int64 GameData_2255728;
extern __int64 GameData_2255730;
extern __int64 GameData_2255738;
extern __int64 GameData_2255748;
extern __int64 GameData_2255758;
extern __int64 GameData_2255768;
extern __int64 GameData_2255770;
extern __int64 GameData_2255788;
extern __int64 GameData_2255798;
extern __int64 GameData_22557a8;
extern __int64 GameData_22557b0;
extern __int64 GameData_22557b8;
extern __int64 GameData_22557c8;
extern __int64 GameData_22557d8;
extern __int64 GameData_22557e8;
extern __int64 GameData_22557f0;
extern __int64 GameData_22557f8;
extern __int64 GameData_2255808;
extern __int64 GameData_2255818;
extern __int64 GameData_2255828;
extern __int64 GameData_2255830;
extern __int64 GameData_2255838;
extern __int64 GameData_2255848;
extern __int64 GameData_2255858;
extern __int64 GameData_2255868;
extern __int64 GameData_2255870;
extern __int64 GameData_2255888;
extern __int64 GameData_2255898;
extern __int64 GameData_22558a8;
extern __int64 GameData_22558b0;
extern __int64 GameData_22558b8;
extern __int64 GameData_22558c8;
extern __int64 GameData_22558d8;
extern __int64 GameData_22558e8;
extern __int64 GameData_22558f0;
extern __int64 GameData_22558f8;
extern __int64 GameData_2255908;
extern __int64 GameData_2255918;
extern __int64 GameData_2255928;
extern __int64 GameData_2255930;
extern __int64 GameData_2255938;
extern __int64 GameData_2255948;
extern __int64 GameData_2255958;
extern __int64 GameData_2255968;
extern __int64 GameData_2255970;
extern __int64 GameData_2255978;
extern __int64 GameData_2255988;
extern __int64 GameData_2255998;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern char GameData_22556e0;
extern char GameData_2255720;
extern char GameData_2255760;
extern char GameData_22557a0;
extern char GameData_22557e0;
extern char GameData_2255820;
extern char GameData_2255860;
extern char GameData_22558a0;
extern char GameData_22558e0;
extern char GameData_2255920;
extern char GameData_2255960;
extern int GameData_2255700;
extern int GameData_2255710;
extern int GameData_2255740;
extern int GameData_2255750;
extern int GameData_2255780;
extern int GameData_2255790;
extern int GameData_22557c0;
extern int GameData_22557d0;
extern int GameData_2255800;
extern int GameData_2255810;
extern int GameData_2255840;
extern int GameData_2255850;
extern int GameData_2255880;
extern int GameData_2255890;
extern int GameData_22558c0;
extern int GameData_22558d0;
extern int GameData_2255900;
extern int GameData_2255910;
extern int GameData_2255940;
extern int GameData_2255950;
extern int GameData_2255980;
extern int GameData_2255990;
__int64 GmapHadesLoader_Unknown3(__int64 result);
void GmapHadesLoader_1535820(__int64 a1, __int64 a2, char a3);

__int64 GmapHadesLoader_Unknown3(__int64 result)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(__int64**)(result + 8);
  if (v1 != nullptr) {
    v2 = *v1;
    *v1 = 0;
    v3 = result;
    v4 = fw_memory_g_heap_manager_ptr;
    if (v2 != 0) {
      GameRoutine_c73b90(v2);
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v5, v2);
    }
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v6 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6, v1);
    *(_QWORD*)(v3 + 8) = 0;
  }
  return result;
}

void GmapHadesLoader_1535820(__int64 a1, __int64 a2, char a3)
{
  __int64 v5;
  __int64 v6;

  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 1) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22559a0,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_22559a0) != 0) {
      GameData_22556e8 = 0;
      GameData_22556f0 = (__int64)GameRoutine_1535b40;
      GameData_22556e0 = 13;
      GameData_22556f8 = 0;
      GameData_2255700 = 0;
      GameData_2255708 = 0;
      GameData_2255710 = 0;
      GameData_2255718 = 0;
      GameData_2255720 = 13;
      GameData_2255738 = 0;
      GameData_2255740 = 0;
      GameData_2255748 = 0;
      GameData_2255750 = 0;
      GameData_2255758 = 0;
      GameData_2255728 = 0;
      GameData_2255730 = (__int64)GameRoutine_1535b50;
      GameData_2255760 = 10;
      GameData_2255828 = 0;
      GameData_2255830 = (__int64)GameRoutine_1535e90;
      GameData_2255780 = 0;
      GameData_2255788 = 0;
      GameData_2255790 = 0;
      GameData_2255798 = 0;
      GameData_22557a0 = 13;
      GameData_22557b8 = 0;
      GameData_22557c0 = 0;
      GameData_22557c8 = 0;
      GameData_22557d0 = 0;
      GameData_22557d8 = 0;
      GameData_22557e0 = 13;
      GameData_22557f8 = 0;
      GameData_2255800 = 0;
      GameData_2255808 = 0;
      GameData_2255810 = 0;
      GameData_2255818 = 0;
      GameData_2255838 = 0;
      GameData_2255840 = 0;
      GameData_2255848 = 0;
      GameData_2255850 = 0;
      GameData_2255858 = 0;
      GameData_2255860 = 8;
      GameData_2255768 = 0;
      GameData_2255770 = (__int64)GameData_212c720;
      GameData_22557a8 = 0;
      GameData_22557b0 = (__int64)GameRoutine_1535c20;
      GameData_22557e8 = 0;
      GameData_22557f0 = (__int64)GameRoutine_1535cc0;
      GameData_2255820 = 15;
      GameData_22558a0 = 13;
      GameData_22558e0 = 15;
      GameData_2255920 = 13;
      GameData_2255880 = 0;
      GameData_2255888 = 0;
      GameData_2255890 = 0;
      GameData_2255898 = 0;
      GameData_22558b8 = 0;
      GameData_22558c0 = 0;
      GameData_22558c8 = 0;
      GameData_22558d0 = 0;
      GameData_22558d8 = 0;
      GameData_22558e8 = 0;
      GameData_22558f8 = 0;
      GameData_2255900 = 0;
      GameData_2255908 = 0;
      GameData_2255910 = 0;
      GameData_2255918 = 0;
      GameData_2255928 = 0;
      GameData_2255938 = 0;
      GameData_2255940 = 0;
      GameData_2255948 = 0;
      GameData_2255950 = 0;
      GameData_2255958 = 0;
      GameData_2255960 = 0;
      GameData_2255988 = 0;
      GameData_2255990 = 0;
      GameData_2255998 = 0;
      GameData_2255980 = 0;
      GameData_2255978 = 0;
      GameData_2255970 = 0;
      GameData_2255968 = 0;
      GameData_22558f0 = (__int64)GameRoutine_1535ef0;
      GameData_2255930 = (__int64)GameRoutine_1535f40;
      GameData_2255868 = 0;
      GameData_2255870 = (__int64)GameData_212d760[0];
      GameData_22558a8 = 0;
      GameData_22558b0 = (__int64)GameRoutine_1535ec0;
      __cxa_guard_release(&GameData_22559a0);
    }
    v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        160, 16, 0);
    v6 = GameData_212c608[0];
    *(_QWORD*)(v5 + 96) = 0;
    *(_QWORD*)(v5 + 104) = 0;
    *(_QWORD*)(v5 + 112) = 0;
    *(_QWORD*)(v5 + 120) = 0;
    *(_QWORD*)(v5 + 128) = 0;
    *(_WORD*)(v5 + 136) = 0;
    *(_QWORD*)(v5 + 16) = 0;
    *(_QWORD*)(v5 + 24) = "NULL";
    *(_QWORD*)(v5 + 138) = 0;
    *(_QWORD*)(v5 + 144) = 0;
    *(_QWORD*)(v5 + 32) = 0;
    *(_QWORD*)(v5 + 40) = 0;
    *(_QWORD*)(v5 + 48) = 0;
    *(_QWORD*)(v5 + 56) = 0;
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 0;
    *(_QWORD*)(v5 + 80) = 0;
    *(_QWORD*)(v5 + 88) = 0;
    *(_QWORD*)v5 = v6 + 16;
    *(_QWORD*)(v5 + 8) = 0;
    game_ProcInst_Register();
    *(_BYTE*)(v5 + 152) = a3 & 1;
    *(_QWORD*)v5 = game_gmap_anonymous_ProcGmapHadesLoad_vtable;
    GameRoutine_657850(v5, &GameData_22556e0, "ProcGmapHadesLoad", 1, a2);
  }
}

#pragma GCC visibility pop
