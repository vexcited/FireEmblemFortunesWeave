#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CmdBtlMindEnumeration_Destructor(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1ff7ba0[])();
extern __int64 (*game_cmdbtl_AutoPlay_vtable[])();
extern __int64 GameData_22190a8;
extern __int64 GameData_225ca88;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_22265e0;
__int64 AutoPlay_Destructor(_QWORD* a1);
__int64 CmdbtlPartyNatives_e9a800(_QWORD, _QWORD);
__int64 GameRoutine_1007060(_QWORD);
__int64 GameRoutine_1626290(void);
__int64 GameRoutine_9bd620(_QWORD, _QWORD);
__int64 GameRoutine_eb6750(_QWORD);
__int64 GameRoutine_eb6820(_QWORD);
__int64 GameRoutine_ec13d0(_QWORD);
__int64 GameRoutine_ec1530(_QWORD);
__int64 ProcList_9bd480(_QWORD);
__int64 game_HashString(void);
__int64 game_ProcList_Call_9bcfa0(_QWORD, _QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN GameData_1abc9d5;
extern _UNKNOWN GameData_1acfb96;
extern __int64 (*GameData_1fecb98[])();
extern __int64 (*GameData_1ff7bd0[])();
extern __int64 (*GameData_1ff7c50[])();
extern __int64 (*GameData_1ff7cd0[])();
extern __int64 (*GameData_1ff7d50[])();
extern __int64 (*GameData_1ff7dd0[])();
extern __int64 GameData_212f510[6];
extern __int64 GameData_21ec7b8;
extern __int64 GameData_21f4cc0;
extern __int64 GameData_2203490;
extern __int64 GameData_22054a8;
extern __int64 GameData_2216820;
extern __int64 GameData_22190a0;
extern __int64 GameData_22190c0;
extern __int64 game_ProcFadeView_instance_;
extern __int64* GameData_212dec0[4];
extern __int64* GameData_212ea58;
extern char GameData_2216858;
void __attribute__((noreturn)) GameRoutine_8123d0(void);
__int64 AutoPlay_f82840();
__int64 AutoPlay_f82a70(__int64 a1);
__int64 AutoPlay_f82bc0(__int64 a1, int a2);
__int64 AutoPlay_f82ee0(__int64 a1, __int64 a2);
__int64 AutoPlay_f83060();
__int64 game_cmdbtl_AutoPlay_CallFailedAutoPlayDialog(__int64 a1, __int64 a2);
bool game_cmdbtl_AutoPlay_CallFailedAutoPlayDialog_lambda0_Invoke();
__int64 game_cmdbtl_AutoPlay_CallFailedAutoPlayDialog_lambda2_Invoke();
__int64
game_cmdbtl_AutoPlay_CallFailedAutoPlayDialog_lambda4_Invoke(__int64 a1);
__attribute__((swiftcall)) void game_80c770(PSEUDO_X8, __int64 result);
__attribute__((swiftcall)) void game_sound_PlayVibration(PSEUDO_X8,
                                                         __int64 result, char);
__int64 AutoPlay_f83360(__int64, int, char);
__int64 CmdBtlMindEnumeration_ea3900(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CmdBtlParty_e77750(_QWORD, _QWORD);
__int64 CmdBtlUnit_e7cbc0(__int64);
__int64 GameRoutine_1551f00();
__int64 GameRoutine_1626290_alt1(__int64) __asm__("GameRoutine_1626290");
__int64 GameRoutine_eb6750_alt1(int) __asm__("GameRoutine_eb6750");
__int64 GameRoutine_eb67c0();
__int64 GameRoutine_ec1530_alt1() __asm__("GameRoutine_ec1530");
__int64 GameRoutine_edd530(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_cmdbtl_e76940(_QWORD, _QWORD);
__int64 game_cmdbtl_e76c00(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
bool GameRoutine_1011550(unsigned __int8*, int, char);
extern __int64 game_g_game_setting;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn))
GameRoutine_8123d0_alt1() __asm__("GameRoutine_8123d0");
void __attribute__((noreturn)) GameRoutine_e66f60(_QWORD);
void snd_Fade_Fade_10c830(__int64, float);
void AutoPlay_f81a10(__int64 a1);
__attribute__((swiftcall)) void AutoPlay_f81f00(PSEUDO_X8 x8_, __int64 a1);
__int64 CmdBtlParty_e77750_alt1(__int64,
                                __int64*) __asm__("CmdBtlParty_e77750");
__int64 GameRoutine_9bd620_alt1(__int64*,
                                __int64) __asm__("GameRoutine_9bd620");
__int64 ProcList_9bd480_alt1(__int64) __asm__("ProcList_9bd480");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64
game_ProcList_Call_9bcfa0_alt1(__int64,
                               __int64) __asm__("game_ProcList_Call_9bcfa0");
__int64
game_VariableManager_SetFlag_alt1(__int64 result,
                                  int) __asm__("game_VariableManager_SetFlag");
__int64 game_cmdbtl_e76940_alt1(__int64,
                                __int64*) __asm__("game_cmdbtl_e76940");
__int64 game_cmdbtl_e76c00_alt1(__int64,
                                __int64*) __asm__("game_cmdbtl_e76c00");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void CmdBtlMindEnumeration_ea3900_alt1(
    __int64, __int64*, _DWORD*,
    __int64) __asm__("CmdBtlMindEnumeration_ea3900");
void GameRoutine_edd530_alt1(__int64*, _QWORD*) __asm__("GameRoutine_edd530");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_e66f60_alt1() __asm__("GameRoutine_e66f60");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 GameHr_1626290(__int64);
__int64 GameHr_eb6750(int);
__int64 GameHr_eb6820(_DWORD*);
bool GameHr_ec13d0();
extern __int64 GameData_212f520[4];
__int64 AutoPlay_f82cf0(__int64 a1, __int64 a2);

__int64 AutoPlay_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *a1 = game_cmdbtl_AutoPlay_vtable;
  if (GameData_225ca88 != 0) {
    v2 = *(_QWORD*)(GameData_225ca88 + 1968);
    if (v2 != 0 && *(_BYTE*)(v2 + 408) != 0) {
      *(_BYTE*)(v2 + 408) = 0;
    }
  }
  result = CmdBtlMindEnumeration_Destructor(a1 + 7);
  v4 = a1[4];
  if (v4 != 0) {
    v5 = a1[5];
    if (v4 == v5) {
      goto LABEL_12;
    }
    do {
      result = *(_QWORD*)(v5 - 8);
      if (result != 0) {
        result = std___1___shared_weak_count___release_weak(result);
      }
      v5 -= 16;
    } while (v5 != v4);
    v6 = a1[4];
    a1[5] = v4;
    if (v6 != 0) {
    LABEL_12:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
    }
  }
  *a1 = GameData_1ff7ba0;
  if ((_QWORD*)GameData_22190a8 == a1) {
    GameData_22190a8 = 0;
    GameData_22265e0 = 0;
  }
  return result;
}

void AutoPlay_f81a10(__int64 a1)
{
  int v2;
  __int64 v3;
  int v4;
  char v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  char v12;
  int v13;
  const char* v14;
  int v15;
  char v16;
  char v17;
  __int64 v18;
  _QWORD v19[25];

  if (!GameRoutine_1011550(*(unsigned __int8**)GameData_212f510[0], 1, 1)) {
    return;
  }
  if (*(_BYTE*)(a1 + 168) != 1 || *(_BYTE*)(a1 + 9) == 0 ||
      *(_BYTE*)(a1 + 10) == 0 || *(_BYTE*)(a1 + 11) == 0 ||
      *(_BYTE*)(a1 + 12) == 0 || *(_BYTE*)(a1 + 13) == 0) {
    if ((GameRoutine_ec1530_alt1() & 1) != 0 ||
        (*(_BYTE*)(a1 + 168) & 1) == 0 || *(_BYTE*)(a1 + 9) == 0 ||
        *(_BYTE*)(a1 + 10) == 0 || *(_BYTE*)(a1 + 11) == 0 ||
        *(_BYTE*)(a1 + 12) == 0 ||
        (*(_BYTE*)(game_g_game_setting + 952) & 4) == 0) {
      return;
    }
    if ((*(_BYTE*)(a1 + 20) & 1) != 0) {
      v6 = *(_DWORD*)(a1 + 16);
    }
    else {
      v7 = *(_QWORD*)(GameData_2203490 + 760);
      if (v7 == 0) {
        return;
      }
      v8 = *(_QWORD*)(GameData_2203490 + 752);
      v9 = *(_QWORD*)(GameData_2203490 + 760);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                memory_order_relaxed);
      v10 = std___1___shared_weak_count_lock(v9);
      std___1___shared_weak_count___release_weak_alt1(v7);
      if (v10 != 0 && v8 != 0) {
        v6 = CmdBtlUnit_e7cbc0(v8);
      }
      else {
        if (v10 == 0) {
          return;
        }
        v6 = 0;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak_alt1(v10);
      }
      if (v8 == 0) {
        return;
      }
    }
    if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) == 0) {
      if ((GameData_2216858 & 1) == 0) {
        GameRoutine_8123d0_alt1();
      }
      if ((GameData_2216820 & 8) != 0) {
        return;
      }
    }
    if (v6 < -1 || (*(_BYTE*)(GameData_21f4cc0 + 12) & 1) != 0 ||
        v6 >= (int)AutoPlay_f83060()) {
      return;
    }
    v15 = *(_DWORD*)(a1 + 16);
    v16 = *(_BYTE*)(a1 + 20);
    *(_DWORD*)(a1 + 16) = v6;
    *(_BYTE*)(a1 + 20) = 1;
    *(_BYTE*)(a1 + 13) = 1;
    if (v15 == v6) {
      v17 = v16;
    }
    else {
      v17 = 0;
    }
    if (*(_BYTE*)(a1 + 28) != 1 || *(_DWORD*)(a1 + 24) != v6) {
      GameRoutine_eb6750_alt1(v6);
      *(_DWORD*)(a1 + 24) = v6;
      *(_BYTE*)(a1 + 28) = 1;
    }
    if ((v17 & 1) == 0 && GameData_225ca88 != 0) {
      v18 = *(_QWORD*)(GameData_225ca88 + 1968);
      if (v18 != 0) {
        GameRoutine_1626290_alt1(v18);
      }
    }
    v14 = "SE_SYS_CmdBtl_AutoStart";
    goto LABEL_92;
  }
  v2 = *(_DWORD*)(game_g_game_setting + 948);
  v3 = GameRoutine_1551f00();
  if (*(_BYTE*)(game_g_game_setting + 807) == 1 &&
          ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
           *(_BYTE*)(game_g_game_setting + 940) == 1 &&
               (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
               (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0) ||
      *(_BYTE*)(game_g_game_setting + 903) == 1 &&
          ((*(_BYTE*)(game_g_game_setting + 900) & 1) != 0 ||
           *(_BYTE*)(game_g_game_setting + 940) == 1 &&
               (*(_BYTE*)(game_g_game_setting + 901) & 1) != 0 &&
               *(_BYTE*)(game_g_game_setting + 902) == 1)) {
    v4 = BYTE4(v3) & ((_DWORD)v3 == 3);
    if ((v3 & 0x100000000LL) == 0 || (_DWORD)v3 != 4) {
      goto LABEL_44;
    }
  }
  else {
    v4 = (v2 & 0x220000) != 0;
    if ((v2 & 0x440000) == 0) {
    LABEL_44:
      v11 = *(_DWORD*)(game_g_game_setting + 952);
      if (v4 != 0) {
        v12 = (v11 & 0x220000) != 0;
        if (*(_BYTE*)(game_g_game_setting + 807) != 0 &&
                ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
                 *(_BYTE*)(game_g_game_setting + 940) == 1 &&
                     (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
                     (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0) ||
            *(_BYTE*)(game_g_game_setting + 903) == 1 &&
                ((*(_BYTE*)(game_g_game_setting + 900) & 1) != 0 ||
                 *(_BYTE*)(game_g_game_setting + 940) == 1 &&
                     (*(_BYTE*)(game_g_game_setting + 901) & 1) != 0 &&
                     *(_BYTE*)(game_g_game_setting + 902) == 1)) {
          v12 = (v3 & 0x100FFFFFFFFLL) == 0x10000000003LL;
        }
        if ((AutoPlay_f83360(a1, -1, v12) & 1) != 0) {
          game_80c770((void*)((__int64)v19),
                      (__int64)"SE_SYS_Cursor_Chara_CmdBtl");
          goto LABEL_55;
        }
        return;
      }
      if ((v11 & 4) == 0 || (GameRoutine_ec1530_alt1() & 1) != 0 ||
          (*(_BYTE*)(a1 + 168) & 1) == 0 || *(_BYTE*)(a1 + 9) == 0 ||
          *(_BYTE*)(a1 + 10) == 0 || *(_BYTE*)(a1 + 11) == 0 ||
          *(_BYTE*)(a1 + 12) == 0) {
        return;
      }
      GameRoutine_eb67c0();
      v13 = *(unsigned __int8*)(a1 + 28);
      *(_BYTE*)(a1 + 13) = 0;
      if (v13 == 1) {
        *(_BYTE*)(a1 + 28) = 0;
      }
      v14 = "SE_SYS_CmdBtl_AutoStop";
    LABEL_92:
      game_80c770((void*)((__int64)v19), (__int64)v14);
      return;
    }
  }
  v5 = (*(_BYTE*)(game_g_game_setting + 954) & 0x44) != 0;
  if (*(_BYTE*)(game_g_game_setting + 807) != 0 &&
          ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
           *(_BYTE*)(game_g_game_setting + 940) == 1 &&
               (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
               (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0) ||
      *(_BYTE*)(game_g_game_setting + 903) == 1 &&
          ((*(_BYTE*)(game_g_game_setting + 900) & 1) != 0 ||
           *(_BYTE*)(game_g_game_setting + 940) == 1 &&
               (*(_BYTE*)(game_g_game_setting + 901) & 1) != 0 &&
               *(_BYTE*)(game_g_game_setting + 902) == 1)) {
    v5 = (v3 & 0x100FFFFFFFFLL) == 0x10000000004LL;
  }
  if ((AutoPlay_f83360(a1, 1, v5) & 1) != 0) {
    snd_Fade_Fade_10c830((__int64)v19, 0x0.0p+0f);
    snd_play_ff2d0((__int64)"SE_SYS_Cursor_Chara_CmdBtl",
                   (__int64)"SE_SYS_Cursor_Chara_CmdBtl", (__int64)v19, 0,
                   0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v19);
  LABEL_55:
    game_sound_PlayVibration((void*)((__int64)v19), (__int64)"VIB_Cursor_Chara",
                             0);
  }
}

__attribute__((swiftcall)) void AutoPlay_f81f00(PSEUDO_X8 x8_, __int64 a1)
{
  _BYTE* a2 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  _BYTE* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  char* v22;
  __int64* v23;
  __int64* v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  bool v31;
  unsigned __int64 add;
  bool v33;
  __int64 v34;
  char* v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  _QWORD* v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  char* v49;
  char* v50;
  _QWORD* v51;
  __int64 v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  _QWORD* v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64* v67;
  __int64* v68;
  __int64 v69;
  _QWORD* v70;
  __int64* v71;
  __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  _QWORD* v80;
  __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  char* v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  _QWORD* v94;
  __int64 v95;
  __int64 v96;
  _BYTE* v97;
  __int64 v98;
  struct {
    __int64 v99;
    __int64 v100;
  } v99_;
  struct {
    __int64 v101;
    __int64 v102;
  } v101_;
  struct {
    __int64 v103;
    __int64 v104;
  } v103_;
  struct {
    __int64 v105;
    __int64 v106;
  } v105_;
  struct {
    char* v107;
    char* v108;
    unsigned __int64 v109;
  } v107_;
  struct {
    _QWORD* v110;
    _QWORD* v111;
    __int64 v112;
  } v110_;
  struct {
    __int64 v113;
    _QWORD* v114;
    unsigned __int64 v115;
  } v113_;

  v2 = a2;
  if ((*(_BYTE*)(a1 + 28) & 1) == 0) {
    *a2 = 0;
    a2[16] = 0;
    return;
  }
  v3 = (_QWORD*)a1;
  v113_.v114 = nullptr;
  v113_.v115 = 0;
  v113_.v113 = 0;
  v4 = *GameData_212ea58;
  v5 = *(int*)(a1 + 24);
  if ((_DWORD)v5 == -1) {
    v9 = *(__int64**)(v4 + 712);
    v10 = *(__int64**)(v4 + 720);
    v97 = v2;
    v98 = *GameData_212ea58;
    v110_.v111 = nullptr;
    v110_.v112 = 0;
    v107_.v109 = 0;
    v110_.v110 = nullptr;
    v107_.v107 = nullptr;
    v107_.v108 = nullptr;
    if (v9 == v10) {
      goto LABEL_83;
    }
    while (1) {
      v105_.v105 = *v9;
      v11 = v9[1];
      v105_.v106 = v11;
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
      }
      if ((game_cmdbtl_e76940_alt1(v98 + 672, &v105_.v105) & 1) != 0) {
        v12 = 1;
      }
      else {
        v103_.v103 = *v9;
        v13 = v9[1];
        v103_.v104 = v13;
        if (v13 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                    memory_order_relaxed);
        }
        if ((game_cmdbtl_e76c00_alt1(v98 + 672, &v103_.v103) & 1) != 0) {
          v12 = 1;
        }
        else {
          v101_.v101 = *v9;
          v14 = v9[1];
          v101_.v102 = v14;
          if (v14 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                      memory_order_relaxed);
          }
          v15 = CmdBtlParty_e77750_alt1(v98 + 672, &v101_.v101);
          v16 = v101_.v102;
          v12 = v15;
          if (v101_.v102 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v101_.v102 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
            std___1___shared_weak_count___release_weak_alt2(v16);
          }
        }
        v17 = v103_.v104;
        if (v103_.v104 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v103_.v104 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak_alt2(v17);
        }
      }
      v18 = v105_.v106;
      if (v105_.v106 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v105_.v106 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        std___1___shared_weak_count___release_weak_alt2(v18);
        if ((v12 & 1) != 0) {
        LABEL_29:
          v99_.v99 = *v9;
          v19 = v9[1];
          v99_.v100 = v19;
          if (v19 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                                      memory_order_relaxed);
          }
          GameRoutine_edd530_alt1((__int64*)&v110_.v110, &v99_.v99);
          if (v99_.v100 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v99_.v100);
          }
        }
      }
      else if ((v12 & 1) != 0) {
        goto LABEL_29;
      }
      v9 += 2;
      if (v9 == v10) {
        v21 = v110_.v110;
        v20 = (__int64)v110_.v111;
        while (v21 != (_QWORD*)v20) {
          v23 = (__int64*)v3[4];
          v24 = (__int64*)v3[5];
          v25 = v3;
          while (v23 != v24) {
            v26 = v23[1];
            if (v26 == 0 || *(_QWORD*)(v26 + 8) == -1) {
              goto LABEL_49;
            }
            v27 = std___1___shared_weak_count_lock_alt1(v26);
            if (v27 != 0) {
              v28 = *v23;
              v29 = v21[1];
              if (v29 == 0) {
                goto LABEL_63;
              }
            }
            else {
              v28 = 0;
              v29 = v21[1];
              if (v29 == 0) {
                goto LABEL_63;
              }
            }
            v30 = std___1___shared_weak_count_lock_alt1(v29);
            if (v30 == 0) {
            LABEL_63:
              v33 = v28 == 0;
              goto LABEL_64;
            }
            v31 = v28 == *v21;
            add = atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL);
            v33 = v31;
            if (add == 0) {
              v34 = v30;
              (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
              std___1___shared_weak_count___release_weak_alt2(v34);
            }
          LABEL_64:
            if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
              std___1___shared_weak_count___release_weak_alt2(v27);
            }
            if (v33) {
              goto LABEL_46;
            }
          LABEL_49:
            v23 += 2;
          }
          v35 = v107_.v108;
          if ((unsigned __int64)v107_.v108 >= v107_.v109) {
            v37 = (__int64)v107_.v107;
            v38 = v107_.v108 - v107_.v107;
            v39 = (v107_.v108 - v107_.v107) >> 4;
            v40 = v39 + 1;
            if ((unsigned __int64)(v39 + 1) >> 60 != 0) {
            LABEL_166:
              GameRoutine_e66f60_alt1();
            }
            v41 = v107_.v109 - (_QWORD)v107_.v107;
            if ((__int64)(v107_.v109 - (_QWORD)v107_.v107) >> 3 > v40) {
              v40 = v41 >> 3;
            }
            if ((unsigned __int64)v41 >= 0x7FFFFFFFFFFFFFF0LL) {
              v42 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v42 = v40;
            }
            if (v42 >> 60 != 0) {
            LABEL_167:
              GameRoutine_60a210_alt1();
            }
            v43 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v42, 16, 0);
            v44 = (_QWORD*)(v43 + v38);
            *v44 = *v21;
            v45 = v21[1];
            v44[1] = v45;
            if (v45 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 16), 1u,
                                        memory_order_relaxed);
            }
            v46 = v43 + 16 * v42;
            v47 = (__int64)&v44[-2 * v39];
            v22 = (char*)(v44 + 2);
            memcpy_alt1(v47, v37, v38);
            v107_.v107 = (char*)v47;
            v107_.v109 = v46;
            if (v37 != 0) {
              v48 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v48 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, v37);
            }
          }
          else {
            *(_QWORD*)v107_.v108 = *v21;
            v36 = v21[1];
            *((_QWORD*)v35 + 1) = v36;
            if (v36 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 16), 1u,
                                        memory_order_relaxed);
            }
            v22 = v35 + 16;
          }
          v107_.v108 = v22;
        LABEL_46:
          v21 += 2;
          v3 = v25;
        }
      LABEL_83:
        v49 = v107_.v107;
        v50 = v107_.v108;
        if (v107_.v108 == v107_.v107) {
          v51 = v110_.v110;
          v52 = (__int64)v110_.v111;
          if (v110_.v110 != v110_.v111) {
            v53 = (__int64*)fw_memory_g_heap_manager_ptr;
            do {
              if ((unsigned __int64)v50 >= v107_.v109) {
                v55 = (__int64)v107_.v107;
                v56 = v50 - v107_.v107;
                v57 = (v50 - v107_.v107) >> 4;
                v58 = v57 + 1;
                if ((unsigned __int64)(v57 + 1) >> 60 != 0) {
                  goto LABEL_166;
                }
                v59 = v107_.v109 - (_QWORD)v107_.v107;
                if ((__int64)(v107_.v109 - (_QWORD)v107_.v107) >> 3 > v58) {
                  v58 = v59 >> 3;
                }
                if ((unsigned __int64)v59 >= 0x7FFFFFFFFFFFFFF0LL) {
                  v60 = 0xFFFFFFFFFFFFFFFLL;
                }
                else {
                  v60 = v58;
                }
                if (v60 >> 60 != 0) {
                  goto LABEL_167;
                }
                v61 =
                    fw_memory_HeapManager_Allocate_alt1(*v53, 16 * v60, 16, 0);
                v62 = (_QWORD*)(v61 + v56);
                *v62 = *v51;
                v63 = v51[1];
                v62[1] = v63;
                if (v63 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v63 + 16),
                                            1u, memory_order_relaxed);
                }
                v64 = (__int64)&v62[-2 * v57];
                v65 = v61 + 16 * v60;
                v50 = (char*)(v62 + 2);
                memcpy_alt1(v64, v55, v56);
                v107_.v107 = (char*)v64;
                v107_.v109 = v65;
                if (v55 != 0) {
                  v66 = 128;
                  if (*(_QWORD*)(*v53 + 200) == 0) {
                    v66 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v53 + v66, v55);
                }
              }
              else {
                *(_QWORD*)v50 = *v51;
                v54 = v51[1];
                *((_QWORD*)v50 + 1) = v54;
                if (v54 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v54 + 16),
                                            1u, memory_order_relaxed);
                }
                v50 += 16;
              }
              v51 += 2;
              v107_.v108 = v50;
            } while (v51 != (_QWORD*)v52);
            v49 = v107_.v107;
          }
        }
        if (v50 == v49) {
          v67 = *(__int64**)(v98 + 712);
          v68 = *(__int64**)(v98 + 720);
          if (v67 != v68) {
            do {
              v99_.v99 = *v67;
              v69 = v67[1];
              v99_.v100 = v69;
              if (v69 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v69 + 16),
                                          1u, memory_order_relaxed);
              }
              GameRoutine_edd530_alt1((__int64*)&v107_.v107, &v99_.v99);
              if (v99_.v100 != 0) {
                std___1___shared_weak_count___release_weak_alt2(v99_.v100);
              }
              v67 += 2;
            } while (v67 != v68);
            v49 = v107_.v107;
            v50 = v107_.v108;
          }
        }
        if (v49 != v50) {
          v70 = v113_.v114;
          v71 = (__int64*)fw_memory_g_heap_manager_ptr;
          do {
            if ((unsigned __int64)v70 >= v113_.v115) {
              v73 = v113_.v113;
              v74 = (unsigned __int64)v70 - v113_.v113;
              v75 = ((__int64)v70 - v113_.v113) >> 4;
              v76 = v75 + 1;
              if ((unsigned __int64)(v75 + 1) >> 60 != 0) {
                goto LABEL_166;
              }
              v77 = v113_.v115 - v113_.v113;
              if ((__int64)(v113_.v115 - v113_.v113) >> 3 > v76) {
                v76 = v77 >> 3;
              }
              if ((unsigned __int64)v77 >= 0x7FFFFFFFFFFFFFF0LL) {
                v78 = 0xFFFFFFFFFFFFFFFLL;
              }
              else {
                v78 = v76;
              }
              if (v78 >> 60 != 0) {
                goto LABEL_167;
              }
              v79 = fw_memory_HeapManager_Allocate_alt1(*v71, 16 * v78, 16, 0);
              v80 = (_QWORD*)(v79 + v74);
              *v80 = *(_QWORD*)v49;
              v81 = *((_QWORD*)v49 + 1);
              v80[1] = v81;
              if (v81 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v81 + 16),
                                          1u, memory_order_relaxed);
              }
              v82 = (__int64)&v80[-2 * v75];
              v83 = v79 + 16 * v78;
              v70 = v80 + 2;
              memcpy_alt1(v82, v73, v74);
              v113_.v113 = v82;
              v113_.v114 = v70;
              v113_.v115 = v83;
              if (v73 != 0) {
                v84 = 128;
                if (*(_QWORD*)(*v71 + 200) == 0) {
                  v84 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*v71 + v84, v73);
              }
            }
            else {
              *v70 = *(_QWORD*)v49;
              v72 = *((_QWORD*)v49 + 1);
              v70[1] = v72;
              if (v72 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v72 + 16),
                                          1u, memory_order_relaxed);
              }
              v70 += 2;
            }
            v49 += 16;
            v113_.v114 = v70;
          } while (v49 != v50);
          v49 = v107_.v107;
        }
        v2 = v97;
        if (v49 != nullptr) {
          v85 = v107_.v108;
          if (v49 == v107_.v108) {
            goto LABEL_142;
          }
          do {
            v86 = *((_QWORD*)v85 - 1);
            if (v86 != 0) {
              std___1___shared_weak_count___release_weak_alt2(v86);
            }
            v85 -= 16;
          } while (v85 != v49);
          v107_.v108 = v49;
          v49 = v107_.v107;
          if (v107_.v107 != nullptr) {
          LABEL_142:
            v87 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v87 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v87, (__int64)v49);
          }
        }
        v88 = (__int64)v110_.v110;
        if (v110_.v110 != nullptr) {
          v89 = (__int64)v110_.v111;
          if (v110_.v110 == v110_.v111) {
            goto LABEL_152;
          }
          do {
            v90 = *(_QWORD*)(v89 - 8);
            if (v90 != 0) {
              std___1___shared_weak_count___release_weak_alt2(v90);
            }
            v89 -= 16;
          } while (v89 != v88);
          v110_.v111 = (_QWORD*)v88;
          v88 = (__int64)v110_.v110;
          if (v110_.v110 != nullptr) {
          LABEL_152:
            v91 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v91 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v91, v88);
          }
        }
        goto LABEL_155;
      }
    }
  }
  v6 = (__int64*)(*(_QWORD*)(v4 + 712) + 16 * v5);
  v7 = *v6;
  v8 = v6[1];
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
    if (v7 == 0) {
    LABEL_40:
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak_alt2(v8);
      }
      goto LABEL_155;
    }
    v110_.v110 = (_QWORD*)v7;
    v110_.v111 = (_QWORD*)v8;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                              memory_order_relaxed);
  LABEL_37:
    GameRoutine_edd530_alt1(&v113_.v113, &v110_.v110);
    if (v110_.v111 != nullptr) {
      std___1___shared_weak_count___release_weak_alt2((__int64)v110_.v111);
    }
    if (v8 == 0) {
      goto LABEL_155;
    }
    goto LABEL_40;
  }
  if (v7 != 0) {
    v110_.v110 = (_QWORD*)*v6;
    v110_.v111 = nullptr;
    goto LABEL_37;
  }
LABEL_155:
  LODWORD(v110_.v110) = 15;
  CmdBtlMindEnumeration_ea3900_alt1((__int64)(v3 + 7), &v113_.v113, &v110_.v110,
                                    0);
  v92 = v3[17];
  v93 = v113_.v113;
  *(_QWORD*)v2 = v3[16];
  *((_QWORD*)v2 + 1) = v92;
  v2[16] = 1;
  if (v93 != 0) {
    v94 = v113_.v114;
    if ((_QWORD*)v93 == v113_.v114) {
      goto LABEL_162;
    }
    do {
      v95 = *(v94 - 1);
      if (v95 != 0) {
        std___1___shared_weak_count___release_weak_alt2(v95);
      }
      v94 -= 2;
    } while (v94 != (_QWORD*)v93);
    v113_.v114 = (_QWORD*)v93;
    v93 = v113_.v113;
    if (v113_.v113 != 0) {
    LABEL_162:
      v96 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v96 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v96, v93);
    }
  }
}

__int64 AutoPlay_f82840()
{
  int v0;
  char v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;

  if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) == 0) {
    if ((GameData_2216858 & 1) == 0) {
      GameRoutine_8123d0_alt1();
    }
    if ((GameData_2216820 & 8) != 0) {
      goto LABEL_6;
    }
  }
  if ((*(_BYTE*)(GameData_21f4cc0 + 12) & 1) != 0 || GameData_21ec7b8 != 0) {
    goto LABEL_6;
  }
  if (GameData_22054a8 != 0) {
    v3 = *(_QWORD*)(GameData_22054a8 + 80);
    if (v3 != 0) {
      v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_22054a8 + 48) +
                                 8 * ((v3 + *(_QWORD*)(GameData_22054a8 + 72) -
                                       1) /
                                      0x33uLL)) +
                      80 * ((v3 + *(_QWORD*)(GameData_22054a8 + 72) - 1) %
                            0x33uLL) +
                      72);
      if (v4 != 0 && *(_BYTE*)(v4 + 138) != 0) {
        goto LABEL_6;
      }
    }
    v1 = 0;
    if ((*(_BYTE*)(GameData_22190a0 + 11) & 1) == 0 &&
        (*(_BYTE*)(GameData_22190a0 + 13) & 1) == 0 &&
        (*(_BYTE*)(GameData_22190a0 + 14) & 1) == 0) {
      v5 = *(_QWORD*)(GameData_22054a8 + 80);
      if (v5 == 0) {
        goto LABEL_22;
      }
      v6 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_22054a8 + 48) +
                                 8 * ((v5 + *(_QWORD*)(GameData_22054a8 + 72) -
                                       1) /
                                      0x33uLL)) +
                      80 * ((v5 + *(_QWORD*)(GameData_22054a8 + 72) - 1) %
                            0x33uLL) +
                      72);
      if (v6 == 0 || *(_BYTE*)(v6 + 138) == 0) {
        goto LABEL_22;
      }
    LABEL_6:
      v1 = 0;
    }
  }
  else {
    v1 = 0;
    if ((*(_BYTE*)(GameData_22190a0 + 11) & 1) == 0 &&
        (*(_BYTE*)(GameData_22190a0 + 13) & 1) == 0 &&
        (*(_BYTE*)(GameData_22190a0 + 14) & 1) == 0) {
    LABEL_22:
      v7 = *(__int64**)(GameData_2203490 + 432);
      if (*(__int64**)(GameData_2203490 + 440) == v7) {
        goto LABEL_31;
      }
      v8 = *v7;
      v9 = v7[1];
      if (v9 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v8 != 0) {
        v0 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 24LL))(v8) ^ 1;
      }
      if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak_alt2(v9);
      }
      if (((v8 != 0) & (v0 ^ 1)) == 0) {
      LABEL_31:
        if ((*(_BYTE*)(GameData_22190c0 + 11) & 1) == 0) {
          v1 = *(_BYTE*)(GameData_22190c0 + 9) ^ 1;
          return v1 & 1;
        }
      }
      goto LABEL_6;
    }
  }
  return v1 & 1;
}

__int64 AutoPlay_f82a70(__int64 a1)
{
  __int64* v2;
  __int64 result;
  int v4;
  int v5;
  char v6;
  char v7;
  struct {
    __int64 v8;
    void* v9;
  } v8_;

  v2 = GameData_212dec0[0];
  if (GameHr_ec13d0()) {
    v8_.v9 = &GameData_1acfb96;
    v8_.v8 = game_HashString_alt1((__int64)&GameData_1acfb96);
    game_VariableManager_SetFlag_alt1((__int64)&v8_.v8, -1);
    v8_.v9 = &GameData_1abc9d5;
    v8_.v8 = game_HashString_alt1((__int64)&GameData_1abc9d5);
    game_VariableManager_SetFlag_alt1((__int64)&v8_.v8, 0);
  }
  LODWORD(v8_.v8) = 0;
  result = GameRoutine_ec1530_alt1();
  if ((result & 1) == 0) {
    result = GameHr_eb6820(&v8_.v8);
    if ((result & 1) != 0) {
      v4 = v8_.v8;
      if ((*(_BYTE*)(*v2 + 13) & 1) != 0) {
        goto LABEL_25;
      }
      if ((GameData_2216858 & 1) == 0) {
        GameRoutine_8123d0_alt1();
      }
      if ((GameData_2216820 & 8) == 0) {
      LABEL_25:
        if ((int)v8_.v8 >= -1 && (*(_BYTE*)(*v2 + 12) & 1) == 0) {
          result = AutoPlay_f83060();
          if (v4 < (int)result) {
            v5 = *(_DWORD*)(a1 + 16);
            v6 = *(_BYTE*)(a1 + 20);
            *(_DWORD*)(a1 + 16) = v4;
            *(_BYTE*)(a1 + 20) = 1;
            *(_BYTE*)(a1 + 13) = 1;
            if (v5 == v4) {
              v7 = v6;
            }
            else {
              v7 = 0;
            }
            if (*(_BYTE*)(a1 + 28) != 1 || *(_DWORD*)(a1 + 24) != v4) {
              result = GameHr_eb6750(v4);
              *(_DWORD*)(a1 + 24) = v4;
              *(_BYTE*)(a1 + 28) = 1;
            }
            if ((v7 & 1) == 0 && GameData_225ca88 != 0) {
              result = *(_QWORD*)(GameData_225ca88 + 1968);
              if (result != 0) {
                return GameHr_1626290(result);
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 AutoPlay_f82bc0(__int64 a1, int a2)
{
  __int64 result;
  int v5;
  char v6;
  char v7;
  __int64 v8;
  struct {
    __int64 v9;
    void* v10;
  } v9_;

  if ((*(_BYTE*)(*GameData_212dec0[0] + 13) & 1) != 0) {
    goto LABEL_6;
  }
  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0_alt1();
  }
  if ((GameData_2216820 & 8) == 0) {
  LABEL_6:
    result = 0;
    if (a2 < -1 || (*(_BYTE*)(*GameData_212dec0[0] + 12) & 1) != 0) {
      return result;
    }
    if (a2 < (int)AutoPlay_f83060()) {
      v5 = *(_DWORD*)(a1 + 16);
      v6 = *(_BYTE*)(a1 + 20);
      *(_DWORD*)(a1 + 16) = a2;
      *(_BYTE*)(a1 + 20) = 1;
      *(_BYTE*)(a1 + 13) = 1;
      if (v5 == a2) {
        v7 = v6;
      }
      else {
        v7 = 0;
      }
      if (*(_BYTE*)(a1 + 28) != 1 || *(_DWORD*)(a1 + 24) != a2) {
        v9_.v10 = &GameData_1abc9d5;
        v9_.v9 = game_HashString_alt1((__int64)&GameData_1abc9d5);
        game_VariableManager_SetFlag_alt1((__int64)&v9_.v9, 1);
        v9_.v10 = &GameData_1acfb96;
        v9_.v9 = game_HashString_alt1((__int64)&GameData_1acfb96);
        game_VariableManager_SetFlag_alt1((__int64)&v9_.v9, a2);
        *(_DWORD*)(a1 + 24) = a2;
        *(_BYTE*)(a1 + 28) = 1;
      }
      if ((v7 & 1) == 0 && GameData_225ca88 != 0) {
        v8 = *(_QWORD*)(GameData_225ca88 + 1968);
        if (v8 != 0) {
          GameHr_1626290(v8);
        }
      }
      return 1;
    }
  }
  return 0;
}

__int64 AutoPlay_f82cf0(__int64 a1, __int64 a2)
{
  __int64 v3;
  int v4;
  int v5;
  char v6;
  char v7;
  __int64 v8;
  __int64 v9;
  int v10;
  void* v11;
  struct {
    __int64 v13;
    void* v14;
    char v15;
  } v13_;

  if (*(_BYTE*)(*(_QWORD*)GameData_212f520[0] + 11LL) == 1) {
    if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
      goto LABEL_35;
    }
    if ((GameData_2216858 & 1) == 0) {
      goto LABEL_32;
    }
    if ((GameData_2216820 & 8) == 0) {
    LABEL_35:
      if ((*(_BYTE*)(GameData_21f4cc0 + 12) & 1) == 0) {
        v3 = a2;
        v4 = AutoPlay_f83060();
        a2 = v3;
        if ((v4 & 0x80000000) == 0) {
          v5 = *(_DWORD*)(a1 + 16);
          v6 = *(_BYTE*)(a1 + 20);
          *(_DWORD*)(a1 + 16) = -1;
          *(_BYTE*)(a1 + 20) = 1;
          *(_BYTE*)(a1 + 13) = 1;
          if (v5 == -1) {
            v7 = v6;
          }
          else {
            v7 = 0;
          }
          if (*(_BYTE*)(a1 + 28) != 1 || *(_DWORD*)(a1 + 24) != -1) {
            v13_.v14 = &GameData_1abc9d5;
            v13_.v13 = game_HashString_alt1((__int64)&GameData_1abc9d5);
            game_VariableManager_SetFlag_alt1((__int64)&v13_.v13, 1);
            v13_.v14 = &GameData_1acfb96;
            v13_.v13 = game_HashString_alt1((__int64)&GameData_1acfb96);
            game_VariableManager_SetFlag_alt1((__int64)&v13_.v13, -1);
            a2 = v3;
            *(_DWORD*)(a1 + 24) = -1;
            *(_BYTE*)(a1 + 28) = 1;
          }
          if ((v7 & 1) == 0 && GameData_225ca88 != 0) {
            v8 = *(_QWORD*)(GameData_225ca88 + 1968);
            if (v8 != 0) {
              GameHr_1626290(v8);
              a2 = v3;
            }
          }
        }
      }
    }
  }
  if ((AutoPlay_f82ee0(a1, a2) & 1) != 0) {
    return 0;
  }
  v9 = GameData_21f4cc0;
  v10 = *(unsigned __int8*)(GameData_21f4cc0 + 13);
  if (*(_BYTE*)(GameData_21f4cc0 + 13) == 0) {
    if ((GameData_2216858 & 1) == 0) {
      goto LABEL_32;
    }
    if ((GameData_2216820 & 8) != 0) {
      return 0;
    }
  }
  if ((*(_BYTE*)(GameData_21f4cc0 + 12) & 1) != 0) {
    return 0;
  }
  if (*(_BYTE*)(a1 + 160) == 1) {
    *(_BYTE*)(a1 + 160) = 0;
    v10 = *(unsigned __int8*)(v9 + 13);
  }
  if (v10 == 0) {
    if ((GameData_2216858 & 1) == 0) {
    LABEL_32:
      GameRoutine_8123d0_alt1();
    }
    if ((GameData_2216820 & 8) != 0) {
      return 0;
    }
  }
  if ((*(_BYTE*)(v9 + 12) & 1) == 0) {
    AutoPlay_f81f00((void*)(&v13_.v13), a1);
    v11 = v13_.v14;
    *(_QWORD*)(a1 + 144) = v13_.v13;
    *(_QWORD*)(a1 + 152) = v11;
    *(_BYTE*)(a1 + 160) = v13_.v15;
    if ((*(_BYTE*)(a1 + 160) & 1) != 0) {
      return 1;
    }
  }
  return 0;
}

__int64 AutoPlay_f82ee0(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  _QWORD v15[4];
  _QWORD* v16;

  v4 = GameData_212ea58;
  v15[0] = GameData_1fecb98;
  v16 = v15;
  CmdbtlPartyNatives_e9a800(*GameData_212ea58, v15);
  if (v16 == v15) {
    v5 = 32;
  }
  else {
    if (v16 == nullptr) {
      goto LABEL_6;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v16 + v5))((__int64)v16);
LABEL_6:
  if (*(_BYTE*)(a1 + 28) != 1) {
    return 0;
  }
  v6 = *v4;
  v7 = *(int*)(a1 + 24);
  if ((_DWORD)v7 == -1) {
    v12 = *(__int64**)(v6 + 712);
    v13 = *(__int64**)(v6 + 720);
    if (v12 == v13) {
    LABEL_20:
      game_cmdbtl_AutoPlay_CallFailedAutoPlayDialog(a1, a2);
      return 1;
    }
    while (1) {
      v14 = *v12;
      v12 += 2;
      if ((*(_BYTE*)(v14 + 190) & 1) != 0) {
        return 0;
      }
      if (v12 == v13) {
        goto LABEL_20;
      }
    }
  }
  v8 = (__int64*)(*(_QWORD*)(v6 + 712) + 16 * v7);
  v9 = *v8;
  v10 = v8[1];
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v9 == 0 || (*(_BYTE*)(v9 + 190) & 1) != 0) {
    if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
    }
    return 0;
  }
  game_cmdbtl_AutoPlay_CallFailedAutoPlayDialog(a1, a2);
  if (v10 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
    return 1;
  }
  (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
  std___1___shared_weak_count___release_weak(v10);
  return 1;
}

__int64 AutoPlay_f83060()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v0 = GameData_2203490;
  v1 = *(_QWORD*)(GameData_2203490 + 712);
  if ((int)((unsigned __int64)(*(_QWORD*)(GameData_2203490 + 720) - v1) >> 4) <
      1) {
    return 0;
  }
  else {
    v2 = 0;
    v3 = 0;
    v4 = 0;
    do {
      v5 = *(_QWORD*)(v1 + v2);
      v6 = *(_QWORD*)(v5 + 320);
      if (v6 != 0) {
        v7 = *(_QWORD*)(v5 + 312);
        v8 = *(_QWORD*)(v5 + 320);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                  memory_order_relaxed);
        v9 = std___1___shared_weak_count_lock(v8);
        std___1___shared_weak_count___release_weak(v6);
        if (v9 != 0) {
          if (v7 != 0 && (*(_DWORD*)(*(_QWORD*)v7 + 76LL) & 0x10) == 0) {
            v4 += (*(_DWORD*)(*(_QWORD*)v7 + 76LL) & 0x20) == 0;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
            std___1___shared_weak_count___release_weak(v9);
          }
        }
      }
      v1 = *(_QWORD*)(v0 + 712);
      ++v3;
      v2 += 16;
    } while (v3 < (int)((unsigned __int64)(*(_QWORD*)(v0 + 720) - v1) >> 4));
  }
  return v4;
}

__int64 game_cmdbtl_AutoPlay_CallFailedAutoPlayDialog(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;

  result = ProcList_9bd480_alt1(a2);
  if (result == 0) {
    return result;
  }
  v4 = *(__int64**)(result + 152);
  v5 = result;
  v13_.v14 = v13_.v13;
  v13_.v13[0] = GameData_1ff7bd0;
  v6 = v4[1];
  if (v6 >= v4[2]) {
    v7 = GameRoutine_9bd620_alt1(v4, (__int64)v13_.v13);
  }
  else {
    *(_QWORD*)(v6 + 32) = v6;
    (*(void (**)(_QWORD*, unsigned __int64))(*v13_.v14 + 24LL))(v13_.v14, v6);
    v7 = v6 + 48;
  }
  v4[1] = v7;
  if (v13_.v14 == v13_.v13) {
    v8 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      goto LABEL_10;
    }
    v8 = 40;
  }
  (*(void (**)(_QWORD*))(*v13_.v14 + v8))(v13_.v14);
LABEL_10:
  v13_.v13[0] = GameData_1ff7c50;
  v13_.v14 = v13_.v13;
  game_ProcList_Call_9bcfa0_alt1(v5, (__int64)v13_.v13);
  if (v13_.v14 == v13_.v13) {
    v9 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      goto LABEL_15;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v13_.v14 + v9))((__int64)v13_.v14);
LABEL_15:
  v13_.v13[0] = GameData_1ff7cd0;
  v13_.v14 = v13_.v13;
  game_ProcList_Call_9bcfa0_alt1(v5, (__int64)v13_.v13);
  if (v13_.v14 == v13_.v13) {
    v10 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      goto LABEL_20;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v13_.v14 + v10))((__int64)v13_.v14);
LABEL_20:
  v13_.v13[0] = GameData_1ff7d50;
  v13_.v14 = v13_.v13;
  game_ProcList_Call_9bcfa0_alt1(v5, (__int64)v13_.v13);
  if (v13_.v14 == v13_.v13) {
    v11 = 32;
    goto LABEL_24;
  }
  if (v13_.v14 != nullptr) {
    v11 = 40;
  LABEL_24:
    (*(void (**)(__int64))(*v13_.v14 + v11))((__int64)v13_.v14);
  }
  v13_.v13[0] = GameData_1ff7dd0;
  v13_.v13[1] = a1;
  v13_.v14 = v13_.v13;
  game_ProcList_Call_9bcfa0_alt1(v5, (__int64)v13_.v13);
  result = (__int64)v13_.v14;
  if (v13_.v14 == v13_.v13) {
    v12 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      return result;
    }
    v12 = 40;
  }
  return (*(__int64 (**)(__int64))(*v13_.v14 + v12))((__int64)v13_.v14);
}

bool game_cmdbtl_AutoPlay_CallFailedAutoPlayDialog_lambda0_Invoke()
{
  char v0;
  __int64 v1;
  __int64 v2;

  if (game_ProcFadeView_instance_ == 0) {
    return true;
  }
  v0 = *(_BYTE*)(game_ProcFadeView_instance_ + 480);
  *(_BYTE*)(game_ProcFadeView_instance_ + 480) = 3;
  v1 = game_ProcFadeView_instance_;
  if (game_ProcFadeView_instance_ == 0) {
    return true;
  }
  v2 = *(unsigned __int8*)(game_ProcFadeView_instance_ + 480);
  *(_BYTE*)(game_ProcFadeView_instance_ + 480) = v0;
  return *(float*)(v1 + (v2 << 6) + 172) == *(float*)(v1 + (v2 << 6) + 168);
}

void game_cmdbtl_AutoPlay_CallFailedAutoPlayDialog_lambda1_Invoke()
{
  *(_BYTE*)(*(_QWORD*)GameData_212f510[0] + 9LL) = 1;
}

__int64 game_cmdbtl_AutoPlay_CallFailedAutoPlayDialog_lambda2_Invoke()
{
  __int64 result;
  __int64 v1;
  int v2;

  result = GameRoutine_1007060(GameData_22190c0);
  v1 = GameData_225ca88;
  if (GameData_225ca88 != 0 && *(_BYTE*)(GameData_225ca88 + 1977) == 1) {
    v2 = *(_DWORD*)(GameData_225ca88 + 1984);
    *(_BYTE*)(GameData_225ca88 + 1977) = 0;
    *(_DWORD*)(v1 + 1984) = (v2 & ~(v2 >> 31)) + 1;
    *(_DWORD*)(v1 + 1980) = 2;
  }
  return result;
}

__int64 game_cmdbtl_AutoPlay_CallFailedAutoPlayDialog_lambda4_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 result;
  int v3;
  struct {
    __int64 v4;
    void* v5;
  } v4_;

  v1 = *(_QWORD*)(a1 + 8);
  v4_.v5 = &GameData_1acfb96;
  v4_.v4 = game_HashString_alt1((__int64)&GameData_1acfb96);
  game_VariableManager_SetFlag_alt1((__int64)&v4_.v4, -1);
  v4_.v5 = &GameData_1abc9d5;
  v4_.v4 = game_HashString_alt1((__int64)&GameData_1abc9d5);
  result = game_VariableManager_SetFlag_alt1((__int64)&v4_.v4, 0);
  v3 = *(unsigned __int8*)(v1 + 28);
  *(_BYTE*)(v1 + 13) = 0;
  if (v3 == 1) {
    *(_BYTE*)(v1 + 28) = 0;
  }
  if (*(_BYTE*)(GameData_22190a0 + 9) == 1) {
    *(_BYTE*)(GameData_22190a0 + 9) = 0;
  }
  return result;
}

#pragma GCC visibility pop
