#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1553220(_QWORD);
__int64 GameRoutine_1566440(_QWORD, _QWORD);
__int64 GameRoutine_182ae70(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_743a00(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fa4240[])();
extern __int64 (*GameData_1ff1408[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_map_anonymous_ProcMapSeqSortie_Pickup_vtable[])();
extern __int64 (*game_map_anonymous_ProcMapSeqSortie_vtable[])();
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d0d0[2];
extern __int64 GameData_21cd108;
extern __int64 GameData_21cd120;
extern __int64 GameData_21ee318;
extern __int64 GameData_21eea38;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcMapSeqSortie_Destructor(__int64 a1);
__int64 ProcMapSeqSortie_DeletingDestructor(__int64 a1);
_QWORD* ProcMapSeqSortie_Unknown3(__int64 a1);
__int64 ProcMapSeqSortie_Unknown9(__int64 a1);
_QWORD* ProcMapSeqSortie_Unknown12(__int64 a1);
_QWORD* MapInfo_825790(_QWORD* result);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
extern __int64 game_gameui_Footer_instance_;
extern __int64* GameData_212cff8[3];
__int64
game_map_anonymous_ProcMapSeqSortie_PickCursorTick_closure_Invoke_8701f0(
    __int64 a1);
__int64
game_map_anonymous_ProcMapSeqSortie_PickCursorTick_closure_Invoke_870380();
_QWORD* GameRoutine_743a00_alt1(_QWORD* result) __asm__("GameRoutine_743a00");
__attribute__((swiftcall)) void game_80c770(PSEUDO_X8, __int64 result);
__int64 GameRoutine_18b04e0(__int64);
__int64 GameRoutine_86fe60(__int64, int, int, __int64);
__int64 IDeploy_748f80(__int64, __int64, int, int, int, unsigned int*);
__int64 LayoutAccessor_1567000_alt1(__int64,
                                    char) __asm__("LayoutAccessor_1567000");
__int64 MapUtil_755bb0(int, int);
__int64 Mind_743fc0(__int64, char*);
__int64 ProcList_9bd480(__int64);
__int64 game_ProcList_Call_9bcfa0(__int64, __int64);
__int64 game_map_752480(int, int, char);
__int64 game_map_Dispos_GetSortiePos(_DWORD*, _DWORD*);
__int64 game_map_MapSortieMenu_CreateBattleStartDialog(__int64, __int64);
__int64 game_sound_PlayCancelSe();
__int64 game_sound_PlayDangerZoneOffSe();
__int64 game_sound_PlayDangerZoneOnSe();
__int64 game_sound_PlayNgSe();
__int64 memset(_QWORD, _QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
bool GameRoutine_73baa0(int, int, int, int);
bool game_map_Cursor_Impl_Tick(_QWORD*, __int64, double, double, double,
                               long double, long double, long double,
                               long double, long double);
extern __int64 (*GameData_1fa3f58[])();
extern __int64 (*GameData_1fa3fd8[])();
extern __int64 (*GameData_1fa4058[])();
extern __int64 (*GameData_1fa40d8[])();
extern __int64* GameData_212ce88[4];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfc0[10];
extern __int64* GameData_212cfd0[8];
extern __int64 GameData_21ca240;
extern __int64 GameData_21ca248;
extern __int64 GameData_21ca310;
extern __int64 game_g_game_setting_ptr;
void Cursor_730b20(__int64, int, int);
void Cursor_730e40(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
__int64 game_map_anonymous_ProcMapSeqSortie_PickCursorTick(
    __int64 a1, double a2, double a3, double a4, long double a5, long double a6,
    long double a7, long double a8, long double a9);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");

__int64 game_map_anonymous_ProcMapSeqSortie_PickCursorTick(
    __int64 a1, double a2, double a3, double a4, long double a5, long double a6,
    long double a7, long double a8, long double a9)
{

#pragma clang fp contract(off)
  int v9;
  __int64* v11;
  bool v12;
  const char* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64* v21;
  __int64 v22;
  bool v23;
  __int64 v24;
  __int64 result;
  __int64 v26;
  __int64 v30;
  __int64 v31;
  int v32;
  const char* v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  bool v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  int v48;
  __int64 v49;
  __int64 v50;
  int v51;
  _QWORD* v52;
  __int64 v53;
  const char* v54;
  unsigned __int8* v55;
  unsigned int v56;
  __int64 v57;
  unsigned int v58;
  __int64 v59;
  __int64 v61;
  __int64 v62;
  _BYTE* v63;
  int v64;
  __int64 v65;
  __int64 v66;
  int v67;
  int v68;
  struct {
    _QWORD v69[4];
    _QWORD* v70;
  } v69_;

  v9 = *(_DWORD*)(a1 + 216);
  v11 = GameData_212cfc0[0];
  v12 = game_map_Cursor_Impl_Tick(*(_QWORD**)(*GameData_212cfc0[0] + 48), 0, a2,
                                  a3, a4, a5, a6, a7, a8, a9);
  if (v9 < 1) {
    if (!v12) {
      goto LABEL_7;
    }
    snd_Fade_Fade_10c830((__int64)v69_.v69, 0x0.0p+0f);
    v16 = "SE_SYS_Cursor_M";
  }
  else {
    if (!v12) {
      goto LABEL_7;
    }
    snd_Fade_Fade_10c830((__int64)v69_.v69, 0x0.0p+0f);
    v16 = "SE_SYS_Cursor_L";
  }
  snd_play_ff2d0((__int64)v16, (__int64)v16, (__int64)v69_.v69, 0, 0x10001u, 0,
                 0x0.0p+0f, 0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade(v69_.v69);
LABEL_7:
  v17 = GameData_212ce98[0];
  LODWORD(v18) = *(_DWORD*)(*(_QWORD*)(*v11 + 48) + 8LL) +
                 32 * *(_DWORD*)(*(_QWORD*)(*v11 + 48) + 12LL);
  if ((unsigned int)v18 >= 0x400) {
    v18 = 0;
  }
  else {
    v18 = (unsigned int)v18;
  }
  v19 = *(_QWORD*)(*GameData_212ce98[0] + 96) + v18;
  v20 = *(unsigned __int8*)(v19 + 8);
  v21 = GameData_212ce88[0];
  if (*(_BYTE*)(v19 + 8) != 0 && ((v22 = *(_QWORD*)(GameData_21ca310 + 56) +
                                         2224LL * *(unsigned __int8*)(v19 + 8),
                                   v20 <= 0xFA)
                                      ? (v23 = v22 == 2224)
                                      : (v23 = true),
                                  !v23 && *(_QWORD*)(v22 - 1832) != 0)) {
    v24 = *GameData_212ce88[0];
    LODWORD(v69_.v69[0]) = 170987522;
    result = IDeploy_748f80(v24, v22 - 2224, *(char*)(v22 - 1640),
                            *(char*)(v22 - 1639), -1, (unsigned int*)v69_.v69);
  }
  else {
    v26 = *(_QWORD*)(*GameData_212ce88[0] + 8);
    *(_WORD*)(v26 + 4) = 9;
    *(_DWORD*)v26 = 0;
    *(_DWORD*)(v26 + 16) = 0;
    *(_DWORD*)(v26 + 48) = 0;
    *(_QWORD*)(v26 + 8) = 0x100000000LL;
    *(_QWORD*)(v26 + 32) = *(_QWORD*)(v26 + 24);
    memset(v26 + 64, 255, 1024);
    result = memset(v26 + 1096, 0, 1536);
    v30 = *(_QWORD*)(v26 + 2640);
    *(_DWORD*)(v26 + 2632) = 0;
    *(_QWORD*)(v26 + 2664) = 0;
    *(_QWORD*)(v26 + 2672) = 0;
    *(_QWORD*)(v26 + 2648) = v30;
  }
  v31 = game_g_game_setting_ptr;
  v32 = *(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 952LL);
  if ((v32 & 0x80) != 0) {
    v69_.v69[0] = GameData_1fa3f58;
    v69_.v69[1] = a1;
    v69_.v70 = v69_.v69;
    v34 = game_map_MapSortieMenu_CreateBattleStartDialog(a1, (__int64)v69_.v69);
    result = (__int64)v69_.v70;
    if (v69_.v70 == v69_.v69) {
      v35 = 32;
    }
    else {
      if (v69_.v70 == nullptr) {
        goto LABEL_32;
      }
      v35 = 40;
    }
    result = (*(__int64 (**)(__int64))(*v69_.v70 + v35))((__int64)v69_.v70);
  LABEL_32:
    if (v34 != 0) {
      return result;
    }
  LABEL_33:
    snd_Fade_Fade_10c830((__int64)v69_.v69, 0x0.0p+0f);
    v33 = "SE_SYS_NG";
    goto LABEL_34;
  }
  if ((v32 & 2) != 0) {
    v36 = *(_DWORD*)(a1 + 216);
    if (v36 < 1) {
      if (*GameData_212cff8[0] != 0) {
        MapInfo_825790(*(_QWORD**)GameData_212cff8[0]);
      }
      snd_Fade_Fade_10c830((__int64)v69_.v69, 0x0.0p+0f);
      snd_play_ff2d0((__int64)"SE_SYS_Cancel_M", (__int64)"SE_SYS_Cancel_M",
                     (__int64)v69_.v69, 0, 0x10001u, 0, 0x0.0p+0f,
                     0x1.0000000000000p+0f);
      result = snd_Fade_Destroy_Fade(v69_.v69);
      *(_DWORD*)(a1 + 152) = 1;
      v55 = *(unsigned __int8**)(a1 + 16);
      if (v55 != nullptr) {
        v56 = *v55;
        if (v56 <= 0x10 && ((1 << v56) & 0x1CE00) != 0) {
          *(_WORD*)(a1 + 136) |= 0x80u;
        }
      }
      return result;
    }
    Cursor_730b20(*v11, v36, *(_DWORD*)(a1 + 220));
    *(_QWORD*)(a1 + 216) = -1;
    *(_QWORD*)(a1 + 224) = 0;
    GameRoutine_743a00_alt1(*(_QWORD**)GameData_212cfd0[0]);
    snd_Fade_Fade_10c830((__int64)v69_.v69, 0x0.0p+0f);
    v33 = "SE_SYS_Cancel_M";
  LABEL_34:
    snd_play_ff2d0((__int64)v33, (__int64)v33, (__int64)v69_.v69, 0, 0x10001u,
                   0, 0x0.0p+0f, 0x1.0000000000000p+0f);
    return snd_Fade_Destroy_Fade(v69_.v69);
  }
  if ((v32 & 1) != 0) {
    v37 = *(_QWORD*)(*v11 + 48);
    v38 = *(_DWORD*)(v37 + 8);
    v67 = *(_DWORD*)(v37 + 12);
    v68 = v38;
    game_map_Dispos_GetSortiePos(&v68, &v67);
    v39 = v67;
    LODWORD(v40) = v68 + 32 * v67;
    if ((unsigned int)v40 >= 0x400) {
      v40 = 0;
    }
    else {
      v40 = (unsigned int)v40;
    }
    if (*(_BYTE*)(*(_QWORD*)(*v17 + 96) + v40 + 8) != 0 &&
        ((v41 = *(_QWORD*)(GameData_21ca310 + 56) +
                2224LL * *(unsigned __int8*)(*(_QWORD*)(*v17 + 96) + v40 + 8),
          v42 = (char*)(v41 - 2224),
          *(unsigned __int8*)(*(_QWORD*)(*v17 + 96) + v40 + 8) <= 0xFAu)
             ? (v43 = v41 == 2224)
             : (v43 = true),
         !v43 && *(_QWORD*)(v41 - 1832) != 0)) {
      if ((*(_BYTE*)(v41 - 1807) & 2) == 0) {
        v44 = *(_QWORD*)(v41 - 1784);
        if (v44 != 0 && *(_BYTE*)(v44 + 16) == 0) {
          v45 = GameData_21ca240;
          if (GameData_21ca240 != GameData_21ca248) {
            v46 = GameData_21ca240;
            v47 = *(unsigned __int8*)(v41 - 1640);
            v48 = *(unsigned __int8*)(v41 - 1639);
            while (v47 != *(unsigned __int8*)(*(_QWORD*)v46 + 54LL) ||
                   v48 != *(unsigned __int8*)(*(_QWORD*)v46 + 55LL)) {
              v46 += 8;
              if (v46 == GameData_21ca248) {
                goto LABEL_90;
              }
            }
            v51 = *(_DWORD*)(a1 + 216);
            if (v51 >= 1) {
              v52 = (_QWORD*)(a1 + 224);
              if (*(char**)(a1 + 224) == v42) {
                goto LABEL_58;
              }
              goto LABEL_57;
            }
            while (v47 != *(unsigned __int8*)(*(_QWORD*)v45 + 54LL) ||
                   v48 != *(unsigned __int8*)(*(_QWORD*)v45 + 55LL)) {
              v45 += 8;
              if (v45 == GameData_21ca248) {
                return game_sound_PlayNgSe();
              }
            }
            goto LABEL_63;
          }
        }
      }
    }
    else {
      v49 = GameData_21ca240;
      if (GameData_21ca240 != GameData_21ca248) {
        v50 = GameData_21ca240;
        while (v68 != *(char*)(*(_QWORD*)v50 + 54LL) ||
               v67 != *(char*)(*(_QWORD*)v50 + 55LL)) {
          v50 += 8;
          if (v50 == GameData_21ca248) {
            goto LABEL_90;
          }
        }
        v51 = *(_DWORD*)(a1 + 216);
        if (v51 >= 1) {
          v42 = nullptr;
          v52 = (_QWORD*)(a1 + 224);
        LABEL_57:
          if (GameRoutine_73baa0(v51, *(_DWORD*)(a1 + 220), v68, v67)) {
          LABEL_58:
            *(_QWORD*)(a1 + 216) = -1;
            *v52 = 0;
            GameRoutine_743a00_alt1(*(_QWORD**)GameData_212cfd0[0]);
            return game_sound_PlayCancelSe();
          }
          if ((GameRoutine_86fe60(a1 + 208, v68, v67, (__int64)v42) & 1) == 0) {
            return game_sound_PlayNgSe();
          }
          v54 = "SE_SYS_Change_Unit";
          return X8CALL_X0(
              __int64, game_80c770((void*)((__int64)v69_.v69), (__int64)v54));
        }
        while (v68 != *(char*)(*(_QWORD*)v49 + 54LL) ||
               v67 != *(char*)(*(_QWORD*)v49 + 55LL)) {
          v49 += 8;
          if (v49 == GameData_21ca248) {
            return game_sound_PlayNgSe();
          }
        }
        v42 = nullptr;
      LABEL_63:
        *(_DWORD*)(a1 + 216) = v68;
        *(_DWORD*)(a1 + 220) = v39;
        *(_QWORD*)(a1 + 224) = v42;
        v53 = Mind_743fc0(*GameData_212cfd0[0], v42);
        *(_QWORD*)(v53 + 12672) |= 1uLL;
        v54 = "SE_SYS_Select_Unit";
        return X8CALL_X0(__int64,
                         game_80c770((void*)((__int64)v69_.v69), (__int64)v54));
      }
    }
  LABEL_90:
    result = MapUtil_755bb0(v68, v67);
    if ((result & 1) != 0) {
      return result;
    }
    v63 = *(_BYTE**)v31;
    if (*(_BYTE*)(*(_QWORD*)v31 + 807LL) == 1 &&
            ((v63[804] & 1) != 0 ||
             v63[940] == 1 && (v63[805] & 1) != 0 && (v63[806] & 1) != 0) ||
        v63[903] == 1 &&
            ((v63[900] & 1) != 0 ||
             v63[940] == 1 && (v63[901] & 1) != 0 && v63[902] == 1)) {
      if (*(_BYTE*)(*v21 + 12888) == 1) {
        v64 = *(_DWORD*)(*GameData_212ce90[0] + 20);
        *(_DWORD*)(*GameData_212ce90[0] + 20) = v64 ^ 0x100;
        if ((v64 & 0x100) != 0) {
          return game_sound_PlayDangerZoneOffSe();
        }
        else {
          return game_sound_PlayDangerZoneOnSe();
        }
      }
      return result;
    }
    goto LABEL_33;
  }
  if ((v32 & 4) != 0) {
    LODWORD(v57) = *(_DWORD*)(*(_QWORD*)(*v11 + 48) + 8LL) +
                   32 * *(_DWORD*)(*(_QWORD*)(*v11 + 48) + 12LL);
    if ((unsigned int)v57 >= 0x400) {
      v57 = 0;
    }
    else {
      v57 = (unsigned int)v57;
    }
    v58 = *(unsigned __int8*)(*(_QWORD*)(*v17 + 96) + v57 + 8);
    if (v58 == 0) {
      return result;
    }
    v59 = *(_QWORD*)(GameData_21ca310 + 56) + 2224LL * v58;
    if (v58 > 0xFA || v59 == 2224) {
      return result;
    }
    if (*(_QWORD*)(v59 - 1832) == 0) {
      return result;
    }
    if ((*(_BYTE*)(v59 - 1807) & 0x1C) != 0) {
      return result;
    }
    result = ProcList_9bd480(a1);
    if (result == 0) {
      return result;
    }
    v61 = result;
    v69_.v69[0] = GameData_1fa3fd8;
    v69_.v69[1] = a1;
    v69_.v70 = v69_.v69;
    game_ProcList_Call_9bcfa0(result, (__int64)v69_.v69);
    if (v69_.v70 == v69_.v69) {
      v62 = 32;
    }
    else {
      if (v69_.v70 == nullptr) {
        goto LABEL_120;
      }
      v62 = 40;
    }
    (*(void (**)(__int64))(*v69_.v70 + v62))((__int64)v69_.v70);
  LABEL_120:
    v69_.v69[0] = GameData_1fa4058;
    v69_.v70 = v69_.v69;
    game_ProcList_Call_9bcfa0(v61, (__int64)v69_.v69);
    if (v69_.v70 == v69_.v69) {
      v65 = 32;
    }
    else {
      if (v69_.v70 == nullptr) {
        goto LABEL_125;
      }
      v65 = 40;
    }
    (*(void (**)(__int64))(*v69_.v70 + v65))((__int64)v69_.v70);
  LABEL_125:
    v69_.v69[0] = GameData_1fa40d8;
    v69_.v69[1] = a1;
    v69_.v70 = v69_.v69;
    game_ProcList_Call_9bcfa0(v61, (__int64)v69_.v69);
    result = (__int64)v69_.v70;
    if (v69_.v70 == v69_.v69) {
      v66 = 32;
    }
    else {
      if (v69_.v70 == nullptr) {
        return result;
      }
      v66 = 40;
    }
    return (*(__int64 (**)(__int64))(*v69_.v70 + v66))((__int64)v69_.v70);
  }
  if ((v32 & 0x3000) != 0) {
    result = game_map_752480(
        *(_DWORD*)(*(_QWORD*)(*v11 + 48) + 8LL),
        *(_DWORD*)(*(_QWORD*)(*v11 + 48) + 12LL),
        (*(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 952LL) & 0x1000) != 0);
    if (result == 0) {
      return result;
    }
    Cursor_730e40(*(_QWORD*)(*v11 + 48), result);
    snd_Fade_Fade_10c830((__int64)v69_.v69, 0x0.0p+0f);
    v33 = "SE_SYS_Send_Unit";
    goto LABEL_34;
  }
  if ((v32 & 0x40) != 0) {
    result = GameRoutine_18b04e0(a1);
    if ((result & 1) != 0) {
      *(_BYTE*)(a1 + 232) = 1;
      result = game_gameui_Footer_instance_;
      if (game_gameui_Footer_instance_ != 0) {
        return LayoutAccessor_1567000_alt1(game_gameui_Footer_instance_, 0);
      }
    }
  }
  return result;
}

__int64

game_map_anonymous_ProcMapSeqSortie_PickCursorTick_closure_Invoke_8701f0(
    __int64 a1)
{
  __int64 v1;
  unsigned __int8* v2;
  unsigned int v3;
  bool v4;
  int v5;

  v1 = *(_QWORD*)(a1 + 8);
  if (*GameData_212cff8[0] != 0) {
    MapInfo_825790(*(_QWORD**)GameData_212cff8[0]);
  }
  if (*(int*)(v1 + 216) >= 1) {
    *(_QWORD*)(v1 + 216) = -1;
    *(_QWORD*)(v1 + 224) = 0;
    GameRoutine_743a00(GameData_21cd108);
  }
  *(_DWORD*)(v1 + 152) = 4;
  v2 = *(unsigned __int8**)(v1 + 16);
  if (v2 != nullptr) {
    v3 = *v2;
    v4 = v3 > 0x10;
    v5 = (1 << v3) & 0x1CE00;
    if (!v4 && v5 != 0) {
      *(_WORD*)(v1 + 136) |= 0x80u;
    }
  }
  return 4;
}

__int64

game_map_anonymous_ProcMapSeqSortie_PickCursorTick_closure_Invoke_870380()
{
  __int64 result;

  result = game_gameui_Footer_instance_;
  if (game_gameui_Footer_instance_ != 0) {
    return LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
  }
  return result;
}

__int64 ProcMapSeqSortie_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;

  *(_QWORD*)a1 = game_map_anonymous_ProcMapSeqSortie_vtable;
  v2 = GameData_21cd120;
  v3 = *(_QWORD*)(GameData_21cd120 + 120);
  *(_QWORD*)(GameData_21cd120 + 112) = 0;
  *(_QWORD*)(v2 + 120) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_1553220(22);
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 208) = game_map_anonymous_ProcMapSeqSortie_Pickup_vtable;
  *(_QWORD*)(a1 + 216) = -1;
  GameRoutine_743a00(GameData_21cd108);
  v4 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_1fa4240;
  if (v4 == (_QWORD*)(a1 + 160)) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_9;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);

LABEL_9:
  GameData_21eea38 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcMapSeqSortie_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = game_map_anonymous_ProcMapSeqSortie_vtable;
  v2 = GameData_21cd120;
  v3 = *(_QWORD*)(GameData_21cd120 + 120);
  *(_QWORD*)(GameData_21cd120 + 112) = 0;
  *(_QWORD*)(v2 + 120) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_1553220(22);
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 208) = game_map_anonymous_ProcMapSeqSortie_Pickup_vtable;
  *(_QWORD*)(a1 + 216) = -1;
  GameRoutine_743a00(GameData_21cd108);
  v4 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_1fa4240;
  if (v4 == (_QWORD*)(a1 + 160)) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_9;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);

LABEL_9:
  GameData_21eea38 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, a1);
}

_QWORD* ProcMapSeqSortie_Unknown3(__int64 a1)
{
  int v1;
  __int64 v2;
  int v3;
  int v4;
  __int64 v5;
  _QWORD* result;
  __int64 v7;
  __int64 v8;

  v1 = *(_DWORD*)(a1 + 216);
  if (v1 < 1) {
    v3 = 0;
    v4 = 0;
    v2 = 0;
  }
  else {
    v2 = *(_QWORD*)(a1 + 224);
    v3 = 1;
    v4 = (unsigned __int8)v1 | ((unsigned __int8)*(_DWORD*)(a1 + 220) << 8);
  }
  v5 = *(_QWORD*)GameData_212d020[0];
  result = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      fw_memory_g_heap_manager, 40, 16, 0);
  result[2] = 0;
  result[4] = 0;
  *result = GameData_1ff1408;
  result[1] = 0;
  result[3] = 0;
  v7 = *(_QWORD*)(v5 + 120);
  *(_QWORD*)(v5 + 112) = result + 3;
  *(_QWORD*)(v5 + 120) = result;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v7);
  }
  **(_QWORD**)(v5 + 112) = v2;
  v8 = *(_QWORD*)(v5 + 112);
  if (*(unsigned __int8*)(v8 + 12) == v3) {
    if (*(_BYTE*)(v8 + 12) != 0) {
      *(_DWORD*)(v8 + 8) = v4;
    }
  }
  else if (*(_BYTE*)(v8 + 12) != 0) {
    *(_BYTE*)(v8 + 12) = 0;
  }
  else {
    *(_BYTE*)(v8 + 8) = v4;
    *(_WORD*)(v8 + 10) = 0;
    *(_BYTE*)(v8 + 9) = BYTE1(v4);
    *(_BYTE*)(v8 + 12) = 1;
  }
  return result;
}

__int64 ProcMapSeqSortie_Unknown9(__int64 a1)
{
  if (*(_BYTE*)(a1 + 232) == 1) {
    GameRoutine_1566440(&GameData_21ee318, 0);
    *(_BYTE*)(a1 + 232) = 0;
  }
  return GameRoutine_182ae70(*(_QWORD*)GameData_212d0d0[0], 1);
}

_QWORD* ProcMapSeqSortie_Unknown12(__int64 a1)
{
  _QWORD* v2;
  _QWORD* result;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)(a1 + 152) = 0;
  v2 = (_QWORD*)(a1 + 160);
  result = *(_QWORD**)(a1 + 192);
  *(_QWORD*)(a1 + 192) = 0;
  if (result == v2) {
    v4 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v4))((__int64)result);

LABEL_6:
  v5 = *(_QWORD*)(a1 + 8);
  if (v5 != 0) {
    while (1) {
      if (*(_BYTE*)v5 == 2) {
        if (*(_DWORD*)(v5 + 32) == 4) {
          *(_QWORD*)(a1 + 16) = v5;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v5 == 0) {
        return result;
      }
      v5 += 64;
    }
  }
  return result;
}

#pragma GCC visibility pop
