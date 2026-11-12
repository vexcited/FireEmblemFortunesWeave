#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1524e70();
__int64 GameRoutine_1524e80();
__int64 GameRoutine_1524f00();
__int64 GameRoutine_1524f30();
__int64 GameRoutine_1525070();
__int64 GameRoutine_1525190();
__int64 GameRoutine_1525270();
__int64 GameRoutine_15252b0();
__int64 GameRoutine_15252f0();
__int64 GameRoutine_1525390();
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65f240(_QWORD, _QWORD);
__int64 GameRoutine_70e760(void);
__int64 SpotMgr_132ffa0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Register(void);
extern _UNKNOWN GameData_2253798;
extern __int64 (*game_gmap_ProcFinishReconstruction_vtable[])();
extern __int64 (*game_gmap_SpotAttachmentReconstruction_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212cf80[5];
extern __int64 GameData_2253460;
extern __int64 GameData_2253468;
extern __int64 GameData_2253470;
extern __int64 GameData_2253480;
extern __int64 GameData_2253490;
extern __int64 GameData_22534a0;
extern __int64 GameData_22534a8;
extern __int64 GameData_22534b0;
extern __int64 GameData_22534c0;
extern __int64 GameData_22534d0;
extern __int64 GameData_22534e0;
extern __int64 GameData_22534e8;
extern __int64 GameData_22534f0;
extern __int64 GameData_2253500;
extern __int64 GameData_2253510;
extern __int64 GameData_2253520;
extern __int64 GameData_2253528;
extern __int64 GameData_2253530;
extern __int64 GameData_2253540;
extern __int64 GameData_2253550;
extern __int64 GameData_2253560;
extern __int64 GameData_2253568;
extern __int64 GameData_2253570;
extern __int64 GameData_2253580;
extern __int64 GameData_2253590;
extern __int64 GameData_22535a0;
extern __int64 GameData_22535a8;
extern __int64 GameData_22535b0;
extern __int64 GameData_22535c0;
extern __int64 GameData_22535d0;
extern __int64 GameData_22535e0;
extern __int64 GameData_22535e8;
extern __int64 GameData_22535f0;
extern __int64 GameData_2253600;
extern __int64 GameData_2253610;
extern __int64 GameData_2253620;
extern __int64 GameData_2253628;
extern __int64 GameData_2253630;
extern __int64 GameData_2253640;
extern __int64 GameData_2253650;
extern __int64 GameData_2253660;
extern __int64 GameData_2253668;
extern __int64 GameData_2253670;
extern __int64 GameData_2253680;
extern __int64 GameData_2253690;
extern __int64 GameData_22536a0;
extern __int64 GameData_22536a8;
extern __int64 GameData_22536b0;
extern __int64 GameData_22536c0;
extern __int64 GameData_22536d0;
extern __int64 GameData_22536e0;
extern __int64 GameData_22536e8;
extern __int64 GameData_22536f0;
extern __int64 GameData_2253700;
extern __int64 GameData_2253710;
extern __int64 GameData_2253720;
extern __int64 GameData_2253728;
extern __int64 GameData_2253730;
extern __int64 GameData_2253740;
extern __int64 GameData_2253750;
extern __int64 GameData_2253760;
extern __int64 GameData_2253768;
extern __int64 GameData_2253770;
extern __int64 GameData_2253780;
extern __int64 GameData_2253790;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64* GameData_212c780;
extern __int64* GameData_212c998[148];
extern char GameData_1a9f09e;
extern char GameData_2253458;
extern char GameData_2253498;
extern char GameData_22534d8;
extern char GameData_2253518;
extern char GameData_2253558;
extern char GameData_2253598;
extern char GameData_22535d8;
extern char GameData_2253618;
extern char GameData_2253658;
extern char GameData_2253698;
extern char GameData_22536d8;
extern char GameData_2253718;
extern char GameData_2253758;
extern int GameData_2253478;
extern int GameData_2253488;
extern int GameData_22534b8;
extern int GameData_22534c8;
extern int GameData_22534f8;
extern int GameData_2253508;
extern int GameData_2253538;
extern int GameData_2253548;
extern int GameData_2253578;
extern int GameData_2253588;
extern int GameData_22535b8;
extern int GameData_22535c8;
extern int GameData_22535f8;
extern int GameData_2253608;
extern int GameData_2253638;
extern int GameData_2253648;
extern int GameData_2253678;
extern int GameData_2253688;
extern int GameData_22536b8;
extern int GameData_22536c8;
extern int GameData_22536f8;
extern int GameData_2253708;
extern int GameData_2253738;
extern int GameData_2253748;
extern int GameData_2253778;
extern int GameData_2253788;
_QWORD* SpotAttachmentReconstruction_Destructor(_QWORD* result);
__int64 SpotAttachmentReconstruction_Unknown11(__int64 a1, __int64 a2);
__int64 SpotAttachmentReconstruction_Unknown18(__int64 a1);
__int16* SpotAttachmentReconstruction_Unknown17(__int16* a1, int a2);
__int64 SpotAttachmentReconstruction_Unknown33(__int64 a1);
__int64 SpotAttachmentReconstruction_Unknown36(__int64 a1, __int64 a2);
__int64 SpotMgr_132ffa0_alt1(unsigned int*) __asm__("SpotMgr_132ffa0");

_QWORD* SpotAttachmentReconstruction_Destructor(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  unsigned int v7;
  __int64 v9;
  unsigned int v10;
  struct {
    unsigned int v12[2];
    char* v13;
  } v12_;

  v1 = (_QWORD*)result[4];
  *result = game_gmap_SpotAttachmentReconstruction_vtable;
  if (v1 == nullptr) {
    return result;
  }
  v2 = 0;
  v3 = GameData_212cf80[0];
  v4 = *(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL);
  v5 = GameData_212c780;
  while (1) {
    v6 = *(_QWORD*)(v4 + 48);
    if (*(_BYTE*)(v6 + v2) != 0) {
      v7 = *(_DWORD*)(v6 + v2 + 4);
      if (v7 == 0 || *v5 == 0) {
        result = nullptr;
        goto LABEL_12;
      }
      v12_.v13 = &GameData_1a9f09e;
      v12_.v12[0] = v7;
      v12_.v12[1] = 0;
      result = (_QWORD*)SpotMgr_132ffa0_alt1(v12_.v12);
      if (result == v1) {
        break;
      }
    }
  LABEL_12:
    v2 += 8;
    if (v2 == 2400) {
      return result;
    }
  }
  v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL) + 48LL) + v2;
  v10 = *(_DWORD*)(v9 + 4);
  if (v10 != 0 && *v5 != 0) {
    v12_.v13 = &GameData_1a9f09e;
    v12_.v12[0] = v10;
    v12_.v12[1] = 0;
    result = (_QWORD*)SpotMgr_132ffa0_alt1(v12_.v12);
    if (result != nullptr) {
      *(_DWORD*)(v9 + 4) = 0;
    }
  }
  return result;
}

__int64 SpotAttachmentReconstruction_Unknown11(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 32);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2253798,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2253798) != 0) {
    GameData_2253560 = 0;
    GameData_2253568 = (__int64)GameRoutine_1525070;
    GameData_2253460 = 0;
    GameData_2253468 = (__int64)GameRoutine_1524e70;
    GameData_2253470 = 0;
    GameData_2253478 = 0;
    GameData_2253480 = 0;
    GameData_2253458 = 13;
    GameData_2253498 = 13;
    GameData_22534d8 = 13;
    GameData_2253558 = 13;
    GameData_22535a0 = 0;
    GameData_22535a8 = (__int64)GameRoutine_1525190;
    GameData_22534a0 = 0;
    GameData_22534a8 = (__int64)GameRoutine_1524e80;
    GameData_2253598 = 13;
    GameData_22535d8 = 13;
    GameData_2253618 = 13;
    GameData_2253698 = 13;
    GameData_2253718 = 13;
    GameData_22535e0 = 0;
    GameData_22535e8 = (__int64)GameRoutine_1525270;
    GameData_22534e0 = 0;
    GameData_22534e8 = (__int64)GameRoutine_1524f00;
    GameData_2253488 = 0;
    GameData_2253490 = 0;
    GameData_22534b0 = 0;
    GameData_22534b8 = 0;
    GameData_22534c0 = 0;
    GameData_22534c8 = 0;
    GameData_2253620 = 0;
    GameData_2253628 = (__int64)GameRoutine_15252b0;
    GameData_22534d0 = 0;
    GameData_22534f0 = 0;
    GameData_22534f8 = 0;
    GameData_2253500 = 0;
    GameData_2253508 = 0;
    GameData_2253510 = 0;
    GameData_2253518 = 14;
    GameData_2253520 = 0;
    GameData_2253528 = (__int64)GameRoutine_1524f30;
    GameData_2253530 = 0;
    GameData_2253538 = 0;
    GameData_2253658 = 4;
    GameData_2253540 = 0;
    GameData_2253548 = 0;
    GameData_2253550 = 0;
    GameData_2253570 = 0;
    GameData_2253578 = 0;
    GameData_2253580 = 0;
    GameData_2253588 = 0;
    GameData_2253590 = 0;
    GameData_22535b0 = 0;
    GameData_22535b8 = 0;
    GameData_2253678 = 1;
    GameData_22535c0 = 0;
    GameData_22535c8 = 0;
    GameData_22535d0 = 0;
    GameData_22535f0 = 0;
    GameData_22535f8 = 0;
    GameData_2253600 = 0;
    GameData_2253608 = 0;
    GameData_2253610 = 0;
    GameData_2253630 = 0;
    GameData_2253638 = 0;
    GameData_2253688 = 200;
    GameData_2253640 = 0;
    GameData_2253648 = 0;
    GameData_2253650 = 0;
    GameData_2253670 = 0;
    GameData_2253668 = 0;
    GameData_2253660 = 0;
    GameData_2253680 = 0;
    GameData_2253690 = 0;
    GameData_22536a0 = 0;
    GameData_22536a8 = (__int64)GameRoutine_15252f0;
    GameData_22536b0 = 0;
    GameData_22536b8 = 0;
    GameData_22536c0 = 0;
    GameData_22536c8 = 0;
    GameData_22536d0 = 0;
    GameData_22536d8 = 14;
    GameData_22536e0 = 0;
    GameData_22536e8 = (__int64)GameRoutine_1524f30;
    GameData_22536f0 = 0;
    GameData_22536f8 = 0;
    GameData_2253700 = 0;
    GameData_2253708 = 0;
    GameData_2253710 = 0;
    GameData_2253720 = 0;
    GameData_2253728 = (__int64)GameRoutine_1525390;
    GameData_2253730 = 0;
    GameData_2253738 = 0;
    GameData_2253740 = 0;
    GameData_2253748 = 0;
    GameData_2253750 = 0;
    GameData_2253758 = 0;
    GameData_2253780 = 0;
    GameData_2253788 = 0;
    GameData_2253790 = 0;
    GameData_2253778 = 0;
    GameData_2253770 = 0;
    GameData_2253768 = 0;
    GameData_2253760 = 0;
    __cxa_guard_release(&GameData_2253798);
  }
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      160, 16, 0);
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  game_ProcInst_Register();
  *(_QWORD*)(v4 + 152) = v2;
  *(_QWORD*)v4 = game_gmap_ProcFinishReconstruction_vtable;
  return GameRoutine_657850(v4, &GameData_2253458, "ProcFinishReconstruction",
                            1, a2);
}

__int64 SpotAttachmentReconstruction_Unknown18(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  unsigned int v6;
  _QWORD v9[2];

  v1 = *(_QWORD*)(a1 + 32);
  if (v1 == 0) {
    return 1;
  }
  v2 = 0;
  v3 = *(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL);
  v4 = GameData_212c780;
  while (1) {
    v5 = *(_QWORD*)(v3 + 48);
    if (*(_BYTE*)(v5 + v2) != 0) {
      v6 = *(_DWORD*)(v5 + v2 + 4);
      if (v6 != 0 && *v4 != 0) {
        v9[1] = &GameData_1a9f09e;
        v9[0] = v6;
        if (SpotMgr_132ffa0(v9) == v1) {
          break;
        }
      }
    }
    v2 += 8;
    if (v2 == 2400) {
      return 1;
    }
  }
  return 0;
}

__int16* SpotAttachmentReconstruction_Unknown17(__int16* a1, int a2)
{
  __int16* v3;
  __int64 v4;
  __int64 v6;
  __int16* result;
  int v8;
  int v9;
  __int64 v10;

  v3 = a1 + 10;
  v4 = a1[10];
  v6 = a1[11];
  if (game_gmap_GmapClock_instance_ != 0) {
    result = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    result = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if ((v6 << 24) + (v4 << 32) + ((__int64)v3[2] << 18) +
          ((__int64)v3[3] << 12) + ((__int64)v3[4] << 6) + v3[5] >=
      (unsigned __int64)(((__int64)result[1] << 24) + ((__int64)*result << 32) +
                         ((__int64)result[2] << 18) +
                         ((__int64)result[3] << 12) +
                         ((__int64)result[4] << 6) + result[5])) {
    result = (__int16*)GameRoutine_70e760();
    a2 += ~(_DWORD)result;
  }
  if (a2 >= 1) {
    while (1) {
      v8 = (*(__int64 (**)(__int16*))(*(_QWORD*)a1 + 264LL))(a1) != 0 ? 2 : 1;
      v9 = v8 + *((_DWORD*)a1 + 11);
      v10 = *(_QWORD*)a1;
      *((_DWORD*)a1 + 11) = v9;
      result = (__int16*)(*(__int64 (**)(__int16*))(v10 + 240))(a1);
      if (v9 > (int)result) {
        break;
      }
      if (--a2 == 0) {
        return result;
      }
    }
    result = (__int16*)(*(__int64 (**)(__int16*))(*(_QWORD*)a1 + 240LL))(a1);
    *((_DWORD*)a1 + 11) = (_DWORD)result;
  }
  return result;
}

__int64 SpotAttachmentReconstruction_Unknown33(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  unsigned int v7;
  _QWORD v10[2];

  v1 = *(_QWORD*)(a1 + 32);
  if (v1 == 0) {
    return 0;
  }
  v2 = 0;
  v3 = GameData_212cf80[0];
  v4 = *(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL);
  v5 = GameData_212c780;
  while (1) {
    v6 = *(_QWORD*)(v4 + 48);
    if (*(_BYTE*)(v6 + v2) != 0) {
      v7 = *(_DWORD*)(v6 + v2 + 4);
      if (v7 != 0 && *v5 != 0) {
        v10[1] = &GameData_1a9f09e;
        v10[0] = v7;
        if (SpotMgr_132ffa0(v10) == v1) {
          break;
        }
      }
    }
    v2 += 8;
    if (v2 == 2400) {
      return 0;
    }
  }
  return *(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                    8LL *
                        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 +
                                                                  8LL) +
                                                       48LL) +
                                            v2));
}

__int64 SpotAttachmentReconstruction_Unknown36(__int64 a1, __int64 a2)
{
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  char v9;
  __int64 v10;
  char v11;
  __int64 v12;
  int v13;

  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  v5 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = v4;
  v6 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = 9;
  GameRoutine_65f240(a2, ((__int64)*(__int16*)(a1 + 22) << 24) +
                             ((__int64)*(__int16*)(a1 + 20) << 32) +
                             ((__int64)*(__int16*)(a1 + 24) << 18) +
                             ((__int64)*(__int16*)(a1 + 26) << 12) +
                             ((__int64)*(__int16*)(a1 + 28) << 6) +
                             *(__int16*)(a1 + 30));
  result = GameRoutine_65f240(a2, ((__int64)*(__int16*)(a1 + 10) << 24) +
                                      ((__int64)*(__int16*)(a1 + 8) << 32) +
                                      ((__int64)*(__int16*)(a1 + 12) << 18) +
                                      ((__int64)*(__int16*)(a1 + 14) << 12) +
                                      ((__int64)*(__int16*)(a1 + 16) << 6) +
                                      *(__int16*)(a1 + 18));
  v8 = *(int*)(a2 + 20);
  v9 = *(_BYTE*)(a1 + 41);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = v9;
  v10 = *(int*)(a2 + 20);
  v11 = *(_BYTE*)(a1 + 40);
  *(_DWORD*)(a2 + 20) = v10 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = v11;
  v12 = *(int*)(a2 + 20);
  v13 = *(_DWORD*)(a1 + 44);
  *(_DWORD*)(a2 + 20) = v12 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = v13;
  return result;
}

#pragma GCC visibility pop
