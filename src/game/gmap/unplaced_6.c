#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* game_gameui_157b310(__int64*, unsigned __int16*, __int64);
__attribute__((swiftcall)) void GameHr_ae1fe0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameRoutine_134b980(PSEUDO_X8,
                                                    __int64(__fastcall*)());
__attribute__((swiftcall)) void GameRoutine_1572700(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void GameRoutine_1587740(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void GameRoutine_9d5180(PSEUDO_X8, __int64*,
                                                   _QWORD*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void TroopMgr_134b820(PSEUDO_X8, __int64);
__int64* GameRoutine_888970(__int64* result, __int64, __int64,
                            unsigned __int64);
__int64 GameHr_154eaa0();
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameRoutine_154e870();
__int64 GameRoutine_154e8a0();
__int64 GameRoutine_154e9c0();
__int64 GameRoutine_154ea10();
__int64 GameRoutine_154ea40();
__int64 GameRoutine_154eda0();
__int64 GameRoutine_154ee80();
__int64 GameRoutine_154eed0();
__int64 GameRoutine_18422d0(__int64, __int64, unsigned int);
__int64 GameRoutine_ae0560();
__int64 JobIcon_19a8c50(__int64, __int64);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 ProcBeforeEncountSeq_154f0e0();
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 StatusHP_18920d0(_QWORD*, __int64, char);
__int64 StatusNum_1890220(__int64, unsigned int, unsigned int, unsigned int,
                          char, char, int);
__int64 UnitItemList_710640(__int64);
__int64 UnitItemList_710b30(__int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_ProcInst_Register(__int64);
__int64 game_gmap_1340560(__int64 result, char);
__int64 game_gmap_154e7f0();
__int64 game_gmap_ProcBeforeEncountSeq_EndStartBattle();
__int64 game_gmap_ProcBeforeEncountSeq_HideAnimal();
__int64 game_gmap_TroopMgr_PlayEncountMotion();
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
__int64 wmemchr(__int64, unsigned int, unsigned __int64);
char* GameHr_67ed20(_QWORD*);
char* TroopMgr_1353fb0(__int64*, __int64, char*);
char* game_util_Format(const char*, ...);
extern _UNKNOWN GameData_2257a60;
extern __int64 (*Camera_13156b0_ptr[2])();
extern __int64 (*Camera_13156f0_ptr)();
extern __int64 (*GameData_204d688[])();
extern __int64 (*GameData_212c710[3])();
extern __int64 (*GameData_212d298)();
extern __int64 (*game_gmap_ProcBeforeEncountSeq_vtable[])();
extern __int64* GameData_212c790;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212d728[2];
extern __int64* game_g_empty_item_ptr;
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c7a0[13];
extern __int64 GameData_212d690;
extern __int64 GameData_21c96e8;
extern __int64 GameData_22575a8;
extern __int64 GameData_22575b0;
extern __int64 GameData_22575c8;
extern __int64 GameData_22575d8;
extern __int64 GameData_22575e8;
extern __int64 GameData_22575f0;
extern __int64 GameData_2257608;
extern __int64 GameData_2257618;
extern __int64 GameData_2257628;
extern __int64 GameData_2257630;
extern __int64 GameData_2257638;
extern __int64 GameData_2257648;
extern __int64 GameData_2257658;
extern __int64 GameData_2257668;
extern __int64 GameData_2257670;
extern __int64 GameData_2257678;
extern __int64 GameData_2257688;
extern __int64 GameData_2257698;
extern __int64 GameData_22576a8;
extern __int64 GameData_22576b0;
extern __int64 GameData_22576c8;
extern __int64 GameData_22576d8;
extern __int64 GameData_22576e8;
extern __int64 GameData_22576f0;
extern __int64 GameData_22576f8;
extern __int64 GameData_2257708;
extern __int64 GameData_2257718;
extern __int64 GameData_2257728;
extern __int64 GameData_2257730;
extern __int64 GameData_2257738;
extern __int64 GameData_2257748;
extern __int64 GameData_2257758;
extern __int64 GameData_2257768;
extern __int64 GameData_2257770;
extern __int64 GameData_2257778;
extern __int64 GameData_2257788;
extern __int64 GameData_2257798;
extern __int64 GameData_22577a8;
extern __int64 GameData_22577b0;
extern __int64 GameData_22577b8;
extern __int64 GameData_22577c8;
extern __int64 GameData_22577d8;
extern __int64 GameData_22577e8;
extern __int64 GameData_22577f0;
extern __int64 GameData_22577f8;
extern __int64 GameData_2257808;
extern __int64 GameData_2257818;
extern __int64 GameData_2257828;
extern __int64 GameData_2257830;
extern __int64 GameData_2257838;
extern __int64 GameData_2257848;
extern __int64 GameData_2257858;
extern __int64 GameData_2257868;
extern __int64 GameData_2257870;
extern __int64 GameData_2257878;
extern __int64 GameData_2257888;
extern __int64 GameData_2257898;
extern __int64 GameData_22578a8;
extern __int64 GameData_22578b0;
extern __int64 GameData_22578b8;
extern __int64 GameData_22578c8;
extern __int64 GameData_22578d8;
extern __int64 GameData_22578e8;
extern __int64 GameData_22578f0;
extern __int64 GameData_22578f8;
extern __int64 GameData_2257908;
extern __int64 GameData_2257918;
extern __int64 GameData_2257928;
extern __int64 GameData_2257930;
extern __int64 GameData_2257938;
extern __int64 GameData_2257948;
extern __int64 GameData_2257958;
extern __int64 GameData_2257968;
extern __int64 GameData_2257970;
extern __int64 GameData_2257988;
extern __int64 GameData_2257998;
extern __int64 GameData_22579a8;
extern __int64 GameData_22579b0;
extern __int64 GameData_22579c8;
extern __int64 GameData_22579d8;
extern __int64 GameData_22579e8;
extern __int64 GameData_22579f0;
extern __int64 GameData_22579f8;
extern __int64 GameData_2257a08;
extern __int64 GameData_2257a18;
extern __int64 GameData_2257a28;
extern __int64 GameData_2257a30;
extern __int64 GameData_2257a38;
extern __int64 GameData_2257a48;
extern __int64 GameData_2257a58;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_22575a0;
extern char GameData_22575e0;
extern char GameData_2257620;
extern char GameData_2257660;
extern char GameData_22576a0;
extern char GameData_22576e0;
extern char GameData_2257720;
extern char GameData_2257760;
extern char GameData_22577a0;
extern char GameData_22577e0;
extern char GameData_2257820;
extern char GameData_2257860;
extern char GameData_22578a0;
extern char GameData_22578e0;
extern char GameData_2257920;
extern char GameData_2257960;
extern char GameData_22579a0;
extern char GameData_22579e0;
extern char GameData_2257a20;
extern int GameData_22575c0;
extern int GameData_22575d0;
extern int GameData_2257600;
extern int GameData_2257610;
extern int GameData_2257640;
extern int GameData_2257650;
extern int GameData_2257680;
extern int GameData_2257690;
extern int GameData_22576c0;
extern int GameData_22576d0;
extern int GameData_2257700;
extern int GameData_2257710;
extern int GameData_2257740;
extern int GameData_2257750;
extern int GameData_2257780;
extern int GameData_2257790;
extern int GameData_22577c0;
extern int GameData_22577d0;
extern int GameData_2257800;
extern int GameData_2257810;
extern int GameData_2257840;
extern int GameData_2257850;
extern int GameData_2257880;
extern int GameData_2257890;
extern int GameData_22578c0;
extern int GameData_22578d0;
extern int GameData_2257900;
extern int GameData_2257910;
extern int GameData_2257940;
extern int GameData_2257950;
extern int GameData_2257980;
extern int GameData_2257990;
extern int GameData_22579c0;
extern int GameData_22579d0;
extern int GameData_2257a00;
extern int GameData_2257a10;
extern int GameData_2257a40;
extern int GameData_2257a50;
int __cxa_guard_acquire(__int64);
unsigned int* TroopMgr_134c680();
void* game_97b2f0(__int64);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_156c910(__int64 result, const char*, int, ...);
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
_QWORD* game_gmap_154aa00(__int64 a1);
unsigned int* game_gmap_154d9a0(__int64 a1);
__int64 game_gmap_1729080(__int64 a1);

_QWORD* game_gmap_154aa00(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  _QWORD* result;
  __int64 v10;
  __int64 v11;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  struct {
    __int64 v22;
    __int64 v23;
  } v22_;

  v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c7a0[0] + 16LL) + 8LL);
  if (v2 != 0) {
    v3 = *(_QWORD*)(a1 + 224);
    if (v3 == 0) {
      v4 = *(_QWORD*)(GameData_21c96e8 + 8);
      v5 = *(_DWORD*)(v4 + 56);
      v6 = *(__int64**)(v4 + 8);
      v7 = *(__int64**)(v4 + 16);
      if (v5 < 0) {
        for (; v6 != v7; ++v6) {
          v3 = *v6;
          if (*(_QWORD*)(*v6 + 96) == 0 && *(_QWORD*)(v3 + 552) == 0) {
            goto LABEL_23;
          }
        }
      }
      else {
        while (v6 != v7) {
          v8 = *v6++;
          v3 = v8;
          if (*(_DWORD*)(v8 + 84) == v5) {
            goto LABEL_23;
          }
        }
      }
      v3 = 0;
    }
  LABEL_23:
    GameHr_ae1fe0((void*)(&v22_.v22), v2);
    if ((__int64*)(v3 + 24) != &v22_.v22) {
      GameRoutine_888970((__int64*)(v3 + 24), v22_.v22, v22_.v23,
                         (v22_.v23 - v22_.v22) >> 3);
    }
    if (v22_.v22 != 0) {
      v22_.v23 = v22_.v22;
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v22_.v22);
    }
    v15 = *(_QWORD*)(a1 + 224);
    if (v15 == 0) {
      v16 = *(_QWORD*)(GameData_21c96e8 + 8);
      v17 = *(_DWORD*)(v16 + 56);
      v18 = *(__int64**)(v16 + 8);
      if (v17 < 0) {
        while (1) {
          v15 = *v18;
          if (*(_QWORD*)(*v18 + 96) == 0 && *(_QWORD*)(v15 + 552) == 0) {
            break;
          }
          ++v18;
        }
      }
      else {
        v20 = *v18;
        v19 = v18 + 1;
        v15 = v20;
        if (*(_DWORD*)(v20 + 84) != v17) {
          do {
            v21 = *v19++;
            v15 = v21;
          } while (*(_DWORD*)(v21 + 84) != v17);
        }
      }
    }
    result = (_QWORD*)game_gmap_1340560(v15, 0);
    *(_DWORD*)(a1 + 216) = 0;
    return result;
  }
  result = *(_QWORD**)(a1 + 192);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  if (result == (_QWORD*)(a1 + 160)) {
    v10 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_13;
    }
    v10 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v10))((__int64)result);
LABEL_13:
  v11 = *(_QWORD*)(a1 + 8);
  if (v11 != 0) {
    while (1) {
      if (*(_BYTE*)v11 == 2) {
        if (*(_DWORD*)(v11 + 32) == 4) {
          *(_QWORD*)(a1 + 16) = v11;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v11 == 0) {
        return result;
      }
      v11 += 64;
    }
  }
  return result;
}

unsigned int* game_gmap_154d9a0(__int64 a1)
{
  unsigned int* result;
  __int64 (*v3)();
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2257a60,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2257a60) != 0) {
    GameData_22575a0 = 8;
    GameData_22575a8 = 0;
    GameData_22575b0 = (__int64)game_gmap_154e7f0;
    GameData_22575c0 = 0;
    GameData_22575c8 = 0;
    GameData_22575d0 = 0;
    GameData_22575d8 = 0;
    GameData_22575e0 = 8;
    GameData_2257600 = 0;
    GameData_2257608 = 0;
    GameData_2257610 = 0;
    GameData_2257618 = 0;
    GameData_2257638 = 0;
    GameData_2257640 = 0;
    GameData_2257648 = 0;
    GameData_2257650 = 0;
    GameData_2257658 = 0;
    GameData_2257678 = 0;
    GameData_2257680 = 0;
    GameData_2257688 = 0;
    GameData_2257690 = 0;
    GameData_2257698 = 0;
    GameData_2257620 = 13;
    GameData_22575e8 = 0;
    GameData_22575f0 = (__int64)Camera_13156b0_ptr[0];
    GameData_2257628 = 0;
    GameData_2257630 = (__int64)GameRoutine_154e870;
    GameData_2257660 = 15;
    GameData_2257668 = 0;
    GameData_2257670 = (__int64)GameRoutine_154e8a0;
    GameData_22576a0 = 8;
    GameData_22576c0 = 0;
    GameData_22576c8 = 0;
    GameData_22576d0 = 0;
    GameData_22576d8 = 0;
    GameData_22576e0 = 13;
    GameData_22576f8 = 0;
    GameData_2257700 = 0;
    GameData_2257708 = 0;
    GameData_2257710 = 0;
    GameData_2257718 = 0;
    GameData_2257720 = 13;
    GameData_2257738 = 0;
    GameData_2257740 = 0;
    GameData_2257748 = 0;
    GameData_2257750 = 0;
    GameData_2257758 = 0;
    GameData_2257760 = 13;
    GameData_2257778 = 0;
    GameData_2257780 = 0;
    GameData_2257788 = 0;
    GameData_2257790 = 0;
    GameData_2257798 = 0;
    GameData_22577a0 = 13;
    GameData_22577a8 = 0;
    GameData_22577b8 = 0;
    GameData_22577c0 = 0;
    GameData_22577c8 = 0;
    GameData_22577d0 = 0;
    GameData_22577d8 = 0;
    GameData_22577e0 = 13;
    GameData_22577e8 = 0;
    GameData_22577f8 = 0;
    GameData_2257800 = 0;
    GameData_2257808 = 0;
    GameData_2257810 = 0;
    GameData_2257818 = 0;
    GameData_2257820 = 13;
    GameData_2257828 = 0;
    GameData_2257838 = 0;
    GameData_2257840 = 0;
    GameData_2257848 = 0;
    GameData_2257850 = 0;
    GameData_2257858 = 0;
    GameData_2257860 = 13;
    GameData_2257868 = 0;
    GameData_2257878 = 0;
    GameData_2257880 = 0;
    GameData_2257888 = 0;
    GameData_2257890 = 0;
    GameData_2257898 = 0;
    GameData_22578a0 = 13;
    GameData_22578a8 = 0;
    GameData_22578b8 = 0;
    GameData_22578c0 = 0;
    GameData_22578c8 = 0;
    GameData_22578d0 = 0;
    GameData_22578d8 = 0;
    GameData_22578e8 = 0;
    GameData_22578f8 = 0;
    GameData_2257900 = 0;
    GameData_2257908 = 0;
    GameData_2257910 = 0;
    GameData_2257918 = 0;
    GameData_2257920 = 13;
    GameData_2257928 = 0;
    GameData_2257938 = 0;
    GameData_2257940 = 0;
    GameData_2257948 = 0;
    GameData_2257950 = 0;
    GameData_2257958 = 0;
    GameData_2257960 = 8;
    GameData_2257968 = 0;
    GameData_22576a8 = 0;
    GameData_22576b0 = (__int64)GameData_212d298;
    GameData_22576e8 = 0;
    GameData_22576f0 = (__int64)game_gmap_ProcBeforeEncountSeq_HideAnimal;
    GameData_2257728 = 0;
    GameData_2257730 = (__int64)GameRoutine_154e9c0;
    GameData_2257768 = 0;
    GameData_2257770 = (__int64)GameRoutine_154ea10;
    GameData_22577b0 = (__int64)GameRoutine_154ea40;
    GameData_22577f0 = (__int64)GameHr_154eaa0;
    GameData_2257830 = (__int64)GameRoutine_154eda0;
    GameData_2257870 = (__int64)game_gmap_TroopMgr_PlayEncountMotion;
    GameData_22578b0 = (__int64)GameRoutine_154ee80;
    GameData_22578e0 = 14;
    GameData_22578f0 = (__int64)GameRoutine_154eed0;
    GameData_2257930 = (__int64)ProcBeforeEncountSeq_154f0e0;
    GameData_2257980 = 0;
    GameData_2257988 = 0;
    GameData_2257990 = 0;
    GameData_2257998 = 0;
    GameData_22579a0 = 8;
    GameData_2257970 = (__int64)GameData_212c710[0];
    GameData_22579a8 = 0;
    GameData_22579c0 = 0;
    GameData_22579c8 = 0;
    GameData_22579d0 = 0;
    GameData_22579d8 = 0;
    GameData_22579e0 = 13;
    GameData_22579e8 = 0;
    GameData_22579f8 = 0;
    GameData_2257a00 = 0;
    GameData_2257a08 = 0;
    GameData_2257a10 = 0;
    GameData_2257a18 = 0;
    GameData_2257a20 = 0;
    GameData_2257a48 = 0;
    GameData_2257a50 = 0;
    GameData_2257a58 = 0;
    GameData_2257a40 = 0;
    GameData_2257a38 = 0;
    GameData_2257a30 = 0;
    GameData_2257a28 = 0;
    GameData_22579b0 = (__int64)Camera_13156f0_ptr;
    GameData_22579f0 = (__int64)game_gmap_ProcBeforeEncountSeq_EndStartBattle;
    __cxa_guard_release((__int64)&GameData_2257a60);
  }
  result = TroopMgr_134c680();
  if (result != nullptr) {
    v3 = (__int64 (*)())result;
    v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        216, 16, 0);
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
    game_ProcInst_Register(v4);
    *(_QWORD*)(v4 + 152) = v3;
    *(_QWORD*)v4 = game_gmap_ProcBeforeEncountSeq_vtable;
    TroopMgr_134b820((void*)((_QWORD*)(v4 + 160)), (__int64)v3);
    GameRoutine_134b980((void*)((__int64 (**)(void))(v4 + 184)), v3);
    v6 = *(_QWORD*)(v4 + 152);
    *(_DWORD*)(v4 + 208) = 0;
    v7 = *(_QWORD*)(v6 + 120);
    if (v7 == GameRoutine_ae0560() ||
        (v8 = *(_QWORD*)(v4 + 160), *(_QWORD*)(v4 + 168) == v8)) {
      *(_DWORD*)(*(_QWORD*)(*GameData_212c790 + 8) + 56LL) = -1;
    }
    else {
      v9 = *(_DWORD*)(*(_QWORD*)v8 + 84LL);
      v16 = v9;
      v10 = *(_QWORD*)(*GameData_212c790 + 8);
      *(_DWORD*)(v10 + 56) = v9;
      if ((v9 & 0x80000000) == 0) {
        v11 = *(_QWORD*)(v10 + 40);
        v12 = wmemchr(*(_QWORD*)(v10 + 32), v9,
                      (v11 - *(_QWORD*)(v10 + 32)) >> 2);
        v13 = *(_QWORD*)(v10 + 32);
        v14 = *(_QWORD*)(v10 + 40);
        if (v12 != 0) {
          v11 = v12;
        }
        if (v11 != v14) {
          v15 = v14 - (v11 + 4);
          if (v14 != v11 + 4) {
            memmove(v11, v11 + 4, v14 - (v11 + 4));
            v13 = *(_QWORD*)(v10 + 32);
          }
          *(_QWORD*)(v10 + 40) = v11 + v15;
        }
        TroopMgr_1353fb0((__int64*)(v10 + 32), v13, (char*)&v16);
        return (unsigned int*)ProcInst_657850(v4, (__int64)&GameData_22575a0,
                                              (__int64)"ProcBeforeEncountSeq",
                                              1, a1);
      }
    }
    *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5844LL) = 0;
    return (unsigned int*)ProcInst_657850(
        v4, (__int64)&GameData_22575a0, (__int64)"ProcBeforeEncountSeq", 1, a1);
  }
  return result;
}

__int64 game_gmap_1729080(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  void* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 (**v13)();
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 (***v22)();
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  unsigned int v34;
  int v35;
  char* v36;
  _QWORD v37[2];
  struct {
    __int64 (**v38)();
    __int64 v39;
    char gap32_[16];
    __int64 (***v40)();
  } v38_;

  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(__int64**)(a1 + 48);
      v4 = result;
      if (v3 == nullptr) {
      LABEL_84:
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          return std___1___shared_weak_count___release_weak(v4);
        }
        return result;
      }
      if (*(_QWORD*)(a1 + 96) == 0) {
      LABEL_80:
        v35 = *(_DWORD*)(a1 + 108);
        if (v35 == -1) {
          v36 = "InfoOff";
        }
        else {
          v36 = game_util_Format("Info%02d", v35);
        }
        result = LayoutAccessor_1562cf0((__int64)v3, v36);
        goto LABEL_84;
      }
      v5 = ui_LayoutAccessor_FindPane(*(__int64**)(a1 + 48), (__int64)"Face");
      if (v5 != 0) {
        v5 = __dynamic_cast(v5, GameData_212d670[0], GameData_212d678[0], 0);
      }
      GameHr_1840740(v5, 0, *(_QWORD*)(a1 + 96), 6u, 1);
      v6 = *(_QWORD*)(a1 + 96);
      if (*(_BYTE*)(v6 + 2136) != 0) {
        v7 = game_97b2f0(v6 + 2104);
        if (v7 == nullptr) {
          goto LABEL_13;
        }
      }
      else {
        v7 = GameHr_67ed20(*(_QWORD**)(v6 + 392));
        if (v7 == nullptr) {
          goto LABEL_13;
        }
      }
      v8 = ui_LayoutAccessor_FindTextBox(v3, (__int64)"T_Txt");
      if (v8 != 0) {
        GameRoutine_156c5d0(v8, (__int64)v7, 0);
      }
    LABEL_13:
      v37[0] = "L_Lv";
      v37[1] = 4;
      GameRoutine_9d5180((void*)(&v38_.v38), v3, v37);
      if (v38_.v39 == 0) {
        goto LABEL_22;
      }
      v9 = std___1___shared_weak_count_lock(v38_.v39);
      v10 = (__int64)v38_.v38;
      if (v38_.v39 != 0) {
        std___1___shared_weak_count___release_weak(v38_.v39);
      }
      if (v9 != 0 && v10 != 0) {
        v11 = *(unsigned __int8*)(*(_QWORD*)(a1 + 96) + 498LL);
        StatusNum_1890220(v10, v11, v11, 0x63u, 1, 0, -1);
      }
      else if (v9 == 0) {
        goto LABEL_22;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v9);
      }
    LABEL_22:
      v37[0] = "L_HP";
      v37[1] = 4;
      GameRoutine_1572700((void*)(&v38_.v38), v3, v37);
      if (v38_.v39 != 0) {
        v12 = std___1___shared_weak_count_lock(v38_.v39);
        v13 = v38_.v38;
        if (v38_.v39 != 0) {
          std___1___shared_weak_count___release_weak(v38_.v39);
        }
        if (v12 != 0 && v13 != nullptr) {
          StatusHP_18920d0(v13, *(_QWORD*)(a1 + 96), 0);
        }
        else if (v12 == 0) {
          goto LABEL_31;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          std___1___shared_weak_count___release_weak(v12);
        }
      }
    LABEL_31:
      v37[0] = "L_Class";
      v37[1] = 7;
      GameRoutine_1587740((void*)(&v38_.v38), v3, v37);
      if (v38_.v39 != 0) {
        v14 = std___1___shared_weak_count_lock(v38_.v39);
        v15 = (__int64)v38_.v38;
        if (v38_.v39 != 0) {
          std___1___shared_weak_count___release_weak(v38_.v39);
        }
        if (v14 != 0 && v15 != 0) {
          JobIcon_19a8c50(v15, *(_QWORD*)(a1 + 96));
        }
        else if (v14 == 0) {
          goto LABEL_40;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
          std___1___shared_weak_count___release_weak(v14);
        }
      }
    LABEL_40:
      LayoutAccessor_1560070((void*)(&v38_.v38), v3, "L_Icon");
      if (v38_.v39 != 0) {
        v16 = std___1___shared_weak_count_lock(v38_.v39);
        v17 = (__int64*)v38_.v38;
        if (v38_.v39 != 0) {
          std___1___shared_weak_count___release_weak(v38_.v39);
        }
        if (v16 != 0 && v17 != nullptr) {
          v18 = *(_QWORD*)(a1 + 96);
          v19 = *(unsigned __int16*)(v18 + 1952);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                                    memory_order_relaxed);
          v20 = std___1___shared_weak_count_lock(v16);
          v21 = v20;
          if (v19 != 0) {
            if (v20 != 0) {
              v38_.v38 = GameData_204d688;
              v38_.v40 = &v38_.v38;
              game_gameui_157b310(v17, (unsigned __int16*)(v18 + 1952),
                                  (__int64)&v38_.v38);
              v22 = v38_.v40;
              if (v38_.v40 != &v38_.v38) {
              LABEL_48:
                if (v22 != nullptr) {
                  v23 = 5;
                LABEL_55:
                  ((__int64 (*)(__int64))(*v22)[v23])((__int64)v22);
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
                  std___1___shared_weak_count___release_weak(v21);
                }
                goto LABEL_58;
              }
            LABEL_54:
              v23 = 4;
              goto LABEL_55;
            }
          }
          else if (v20 != 0) {
            v38_.v38 = GameData_204d688;
            v38_.v40 = &v38_.v38;
            game_gameui_157b310(v17, (unsigned __int16*)game_g_empty_item_ptr,
                                (__int64)&v38_.v38);
            v22 = v38_.v40;
            if (v38_.v40 != &v38_.v38) {
              goto LABEL_48;
            }
            goto LABEL_54;
          }
        LABEL_58:
          std___1___shared_weak_count___release_weak(v16);
        LABEL_59:
          if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
            std___1___shared_weak_count___release_weak(v16);
          }
          goto LABEL_61;
        }
        if (v16 != 0) {
          goto LABEL_59;
        }
      }
    LABEL_61:
      v24 = *(_QWORD*)(a1 + 96);
      if (v24 != 0) {
        v25 = UnitItemList_710b30(v24 + 828);
        ui_LayoutAccessor_SetPaneVisible((__int64)v3, (__int64)"N_MagicEndure",
                                         v25 > 0);
        if (v25 >= 1) {
          v26 = *(_QWORD*)(a1 + 96);
          if (v26 != 0 && (v27 = UnitItemList_710640(v26 + 828),
                           (int)(v28 = UnitItemList_710b30(v26 + 828)) >= 1)) {
            v29 = (int)(float)((float)(100 * v27) / (float)v28);
          }
          else {
            v29 = 0;
          }
          v30 = ui_LayoutAccessor_FindPane(v3, (__int64)"T_MagicEndureNum");
          if (v30 != 0) {
            v31 = __dynamic_cast(v30, GameData_212d670[0], GameData_212d690, 0);
            if (v31 != 0) {
              GameRoutine_156c910(v31, "%d", 1, v29);
            }
          }
        }
      }
      else {
        ui_LayoutAccessor_SetPaneVisible((__int64)v3, (__int64)"N_MagicEndure",
                                         0);
      }
      if ((*(_DWORD*)(a1 + 108) & 0x80000000) != 0) {
        ui_LayoutAccessor_SetPaneVisible((__int64)v3, (__int64)"IconNum", 0);
      }
      else {
        v32 = *(unsigned __int8*)(a1 + 116);
        ui_LayoutAccessor_SetPaneVisible((__int64)v3, (__int64)"IconNum",
                                         *(_BYTE*)(a1 + 116));
        if (v32 == 1) {
          v33 = ui_LayoutAccessor_FindPane(v3, (__int64)"IconNum");
          if (v33 != 0) {
            v33 = __dynamic_cast(v33, GameData_212d670[0], GameData_212d678[0],
                                 0);
          }
          if (*(_BYTE*)(a1 + 116) != 0) {
            v34 = 2;
          }
          else {
            v34 = 1;
          }
          GameRoutine_18422d0(v33, (unsigned int)(*(_DWORD*)(a1 + 108) + 1),
                              v34);
        }
      }
      goto LABEL_80;
    }
  }
  return result;
}

#pragma GCC visibility pop
