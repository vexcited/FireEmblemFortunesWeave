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
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  char* v21;
  __int64* v22;
  __int64* v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  bool v27;
  unsigned __int64 add;
  bool v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  char* v33;
  char* v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  char* v40;
  __int64 v41;
  unsigned __int64 v42;
  char* v43;
  __int64 v44;
  char* v45;
  char* v46;
  _QWORD* v47;
  _QWORD* v48;
  _QWORD* v49;
  __int64 v50;
  char* v51;
  char* v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  char* v58;
  __int64 v59;
  char* v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64* v63;
  __int64* v64;
  __int64 v65;
  char* v66;
  _QWORD* v67;
  __int64 v68;
  char* v69;
  char* v70;
  __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  char* v76;
  __int64 v77;
  char* v78;
  unsigned __int64 v79;
  __int64 v80;
  char* v81;
  __int64 v82;
  __int64 v83;
  _QWORD* v84;
  _QWORD* v85;
  __int64 v86;
  __int64 v87;
  __n128 result;
  __int64 v89;
  char* v90;
  char* v91;
  __int64 v92;
  __int64 v93;
  _BYTE* v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  char* v104;
  char* v105;
  unsigned __int64 v106;
  _QWORD* v107;
  _QWORD* v108;
  __int64 v109;
  char* v110;
  char* v111;
  unsigned __int64 v112;

  v2 = a2;
  if ((*(_BYTE*)(a1 + 28) & 1) == 0) {
    *a2 = 0;
    a2[16] = 0;
    {
      result;
      return;
    }
  }
  v3 = (_QWORD*)a1;
  v111 = nullptr;
  v112 = 0;
  v110 = nullptr;
  v4 = *GameData_212ea58;
  v5 = *(int*)(a1 + 24);
  if ((_DWORD)v5 == -1) {
    v9 = *(__int64**)(v4 + 712);
    v10 = *(__int64**)(v4 + 720);
    v94 = v2;
    v95 = *GameData_212ea58;
    v108 = nullptr;
    v109 = 0;
    v106 = 0;
    v107 = nullptr;
    v104 = nullptr;
    v105 = nullptr;
    if (v9 == v10) {
      goto LABEL_83;
    }
    while (1) {
      v102 = *v9;
      v11 = v9[1];
      v103 = v11;
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
      }
      a1 = game_cmdbtl_e76940(v95 + 672, &v102);
      if ((a1 & 1) != 0) {
        v12 = 1;
      }
      else {
        v100 = *v9;
        v13 = v9[1];
        v101 = v13;
        if (v13 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                    memory_order_relaxed);
        }
        a1 = game_cmdbtl_e76c00(v95 + 672, &v100);
        if ((a1 & 1) != 0) {
          v12 = 1;
        }
        else {
          v98 = *v9;
          v14 = v9[1];
          v99 = v14;
          if (v14 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                      memory_order_relaxed);
          }
          a1 = CmdBtlParty_e77750(v95 + 672, &v98);
          v15 = v99;
          v12 = a1;
          if (v99 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v99 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
            a1 = std___1___shared_weak_count___release_weak(v15);
          }
        }
        v16 = v101;
        if (v101 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v101 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
          a1 = std___1___shared_weak_count___release_weak(v16);
        }
      }
      v17 = v103;
      if (v103 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v103 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        a1 = std___1___shared_weak_count___release_weak(v17);
        if ((v12 & 1) != 0) {
        LABEL_29:
          v96 = *v9;
          v18 = v9[1];
          v97 = v18;
          if (v18 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                                      memory_order_relaxed);
          }
          GameRoutine_edd530(&v107, &v96);
          a1 = v97;
          if (v97 != 0) {
            a1 = std___1___shared_weak_count___release_weak(v97);
          }
        }
      }
      else if ((v12 & 1) != 0) {
        goto LABEL_29;
      }
      v9 += 2;
      if (v9 == v10) {
        v20 = v107;
        v19 = v108;
        while (v20 != v19) {
          v22 = (__int64*)v3[4];
          v23 = (__int64*)v3[5];
          v24 = v3;
          while (v22 != v23) {
            a1 = v22[1];
            if (a1 == 0 || *(_QWORD*)(a1 + 8) == -1) {
              goto LABEL_49;
            }
            v25 = std___1___shared_weak_count_lock(a1);
            if (v25 != 0) {
              v26 = *v22;
              a1 = v20[1];
              if (a1 == 0) {
                goto LABEL_63;
              }
            }
            else {
              v26 = 0;
              a1 = v20[1];
              if (a1 == 0) {
                goto LABEL_63;
              }
            }
            a1 = std___1___shared_weak_count_lock(a1);
            if (a1 == 0) {
            LABEL_63:
              v29 = v26 == 0;
              goto LABEL_64;
            }
            v27 = v26 == *v20;
            add = atomic_fetch_add((atomic_ullong* volatile)(a1 + 8),
                                   0xFFFFFFFFFFFFFFFFLL);
            v29 = v27;
            if (add == 0) {
              v30 = a1;
              (*(void (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1);
              a1 = std___1___shared_weak_count___release_weak(v30);
            }
          LABEL_64:
            if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
              a1 = std___1___shared_weak_count___release_weak(v25);
            }
            if (v29) {
              goto LABEL_46;
            }
          LABEL_49:
            v22 += 2;
          }
          v31 = v105;
          if ((unsigned __int64)v105 >= v106) {
            v33 = v104;
            v34 = (char*)(v105 - v104);
            v35 = (v105 - v104) >> 4;
            v36 = v35 + 1;
            if ((unsigned __int64)(v35 + 1) >> 60 != 0) {
            LABEL_166:
              GameRoutine_e66f60(a1);
            }
            v37 = v106 - (_QWORD)v104;
            if ((__int64)(v106 - (_QWORD)v104) >> 3 > v36) {
              v36 = v37 >> 3;
            }
            if ((unsigned __int64)v37 >= 0x7FFFFFFFFFFFFFF0LL) {
              v38 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v38 = v36;
            }
            if (v38 >> 60 != 0) {
            LABEL_167:
              GameRoutine_60a210(a1);
            }
            v39 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v38, 16, 0);
            v40 = &v34[v39];
            *(_QWORD*)v40 = *v20;
            v41 = v20[1];
            *((_QWORD*)v40 + 1) = v41;
            if (v41 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 16), 1u,
                                        memory_order_relaxed);
            }
            v42 = v39 + 16 * v38;
            v43 = &v40[-16 * v35];
            v21 = v40 + 16;
            a1 = memcpy(v43, v33, v34);
            v104 = v43;
            v106 = v42;
            if (v33 != nullptr) {
              v44 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v44 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v44);
            }
          }
          else {
            *(_QWORD*)v105 = *v20;
            v32 = v20[1];
            *((_QWORD*)v31 + 1) = v32;
            if (v32 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 16), 1u,
                                        memory_order_relaxed);
            }
            v21 = v31 + 16;
          }
          v105 = v21;
        LABEL_46:
          v20 += 2;
          v3 = v24;
        }
      LABEL_83:
        v45 = v104;
        v46 = v105;
        if (v105 == v104) {
          v47 = v107;
          v48 = v108;
          if (v107 != v108) {
            v49 = (_QWORD*)fw_memory_g_heap_manager_ptr;
            do {
              if ((unsigned __int64)v46 >= v106) {
                v51 = v104;
                v52 = (char*)(v46 - v104);
                v53 = (v46 - v104) >> 4;
                v54 = v53 + 1;
                if ((unsigned __int64)(v53 + 1) >> 60 != 0) {
                  goto LABEL_166;
                }
                v55 = v106 - (_QWORD)v104;
                if ((__int64)(v106 - (_QWORD)v104) >> 3 > v54) {
                  v54 = v55 >> 3;
                }
                if ((unsigned __int64)v55 >= 0x7FFFFFFFFFFFFFF0LL) {
                  v56 = 0xFFFFFFFFFFFFFFFLL;
                }
                else {
                  v56 = v54;
                }
                if (v56 >> 60 != 0) {
                  goto LABEL_167;
                }
                v57 = fw_memory_HeapManager_Allocate(*v49, 16 * v56, 16, 0);
                v58 = &v52[v57];
                *(_QWORD*)v58 = *v47;
                v59 = v47[1];
                *((_QWORD*)v58 + 1) = v59;
                if (v59 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v59 + 16),
                                            1u, memory_order_relaxed);
                }
                v60 = &v58[-16 * v53];
                v61 = v57 + 16 * v56;
                v46 = v58 + 16;
                a1 = memcpy(v60, v51, v52);
                v104 = v60;
                v106 = v61;
                if (v51 != nullptr) {
                  v62 = 128;
                  if (*(_QWORD*)(*v49 + 200LL) == 0) {
                    v62 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(*v49 + v62);
                }
              }
              else {
                *(_QWORD*)v46 = *v47;
                v50 = v47[1];
                *((_QWORD*)v46 + 1) = v50;
                if (v50 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v50 + 16),
                                            1u, memory_order_relaxed);
                }
                v46 += 16;
              }
              v47 += 2;
              v105 = v46;
            } while (v47 != v48);
            v45 = v104;
          }
        }
        if (v46 == v45) {
          v63 = *(__int64**)(v95 + 712);
          v64 = *(__int64**)(v95 + 720);
          if (v63 != v64) {
            do {
              v96 = *v63;
              v65 = v63[1];
              v97 = v65;
              if (v65 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v65 + 16),
                                          1u, memory_order_relaxed);
              }
              GameRoutine_edd530(&v104, &v96);
              a1 = v97;
              if (v97 != 0) {
                a1 = std___1___shared_weak_count___release_weak(v97);
              }
              v63 += 2;
            } while (v63 != v64);
            v45 = v104;
            v46 = v105;
          }
        }
        if (v45 != v46) {
          v66 = v111;
          v67 = (_QWORD*)fw_memory_g_heap_manager_ptr;
          do {
            if ((unsigned __int64)v66 >= v112) {
              v69 = v110;
              v70 = (char*)(v66 - v110);
              v71 = (v66 - v110) >> 4;
              v72 = v71 + 1;
              if ((unsigned __int64)(v71 + 1) >> 60 != 0) {
                goto LABEL_166;
              }
              v73 = v112 - (_QWORD)v110;
              if ((__int64)(v112 - (_QWORD)v110) >> 3 > v72) {
                v72 = v73 >> 3;
              }
              if ((unsigned __int64)v73 >= 0x7FFFFFFFFFFFFFF0LL) {
                v74 = 0xFFFFFFFFFFFFFFFLL;
              }
              else {
                v74 = v72;
              }
              if (v74 >> 60 != 0) {
                goto LABEL_167;
              }
              v75 = fw_memory_HeapManager_Allocate(*v67, 16 * v74, 16, 0);
              v76 = &v70[v75];
              *(_QWORD*)v76 = *(_QWORD*)v45;
              v77 = *((_QWORD*)v45 + 1);
              *((_QWORD*)v76 + 1) = v77;
              if (v77 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v77 + 16),
                                          1u, memory_order_relaxed);
              }
              v78 = &v76[-16 * v71];
              v79 = v75 + 16 * v74;
              v66 = v76 + 16;
              a1 = memcpy(v78, v69, v70);
              v110 = v78;
              v111 = v66;
              v112 = v79;
              if (v69 != nullptr) {
                v80 = 128;
                if (*(_QWORD*)(*v67 + 200LL) == 0) {
                  v80 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*v67 + v80);
              }
            }
            else {
              *(_QWORD*)v66 = *(_QWORD*)v45;
              v68 = *((_QWORD*)v45 + 1);
              *((_QWORD*)v66 + 1) = v68;
              if (v68 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v68 + 16),
                                          1u, memory_order_relaxed);
              }
              v66 += 16;
            }
            v45 += 16;
            v111 = v66;
          } while (v45 != v46);
          v45 = v104;
        }
        v2 = v94;
        if (v45 != nullptr) {
          v81 = v105;
          if (v45 == v105) {
            goto LABEL_142;
          }
          do {
            v82 = *((_QWORD*)v81 - 1);
            if (v82 != 0) {
              std___1___shared_weak_count___release_weak(v82);
            }
            v81 -= 16;
          } while (v81 != v45);
          v105 = v45;
          if (v104 != nullptr) {
          LABEL_142:
            v83 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v83 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v83);
          }
        }
        v84 = v107;
        if (v107 != nullptr) {
          v85 = v108;
          if (v107 == v108) {
            goto LABEL_152;
          }
          do {
            v86 = *(v85 - 1);
            if (v86 != 0) {
              std___1___shared_weak_count___release_weak(v86);
            }
            v85 -= 2;
          } while (v85 != v84);
          v108 = v84;
          if (v107 != nullptr) {
          LABEL_152:
            v87 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v87 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v87);
          }
        }
        goto LABEL_155;
      }
    }
  }
  v6 = (_QWORD*)(*(_QWORD*)(v4 + 712) + 16 * v5);
  v7 = (_QWORD*)*v6;
  v8 = v6[1];
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
    if (v7 == nullptr) {
    LABEL_40:
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v8);
      }
      goto LABEL_155;
    }
    v107 = v7;
    v108 = (_QWORD*)v8;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                              memory_order_relaxed);
  LABEL_37:
    GameRoutine_edd530(&v110, &v107);
    if (v108 != nullptr) {
      std___1___shared_weak_count___release_weak(v108);
    }
    if (v8 == 0) {
      goto LABEL_155;
    }
    goto LABEL_40;
  }
  if (v7 != nullptr) {
    v107 = (_QWORD*)*v6;
    v108 = nullptr;
    goto LABEL_37;
  }
LABEL_155:
  LODWORD(v107) = 15;
  CmdBtlMindEnumeration_ea3900(v3 + 7, &v110, &v107, 0);
  v89 = v3[17];
  v90 = v110;
  *(_QWORD*)v2 = v3[16];
  *((_QWORD*)v2 + 1) = v89;
  v2[16] = 1;
  if (v90 != nullptr) {
    v91 = v111;
    if (v90 == v111) {
      goto LABEL_162;
    }
    do {
      v92 = *((_QWORD*)v91 - 1);
      if (v92 != 0) {
        std___1___shared_weak_count___release_weak(v92);
      }
      v91 -= 16;
    } while (v91 != v90);
    v111 = v90;
    if (v110 != nullptr) {
    LABEL_162:
      v93 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v93 = 56;
      }
      {
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v93);
        return;
      }
    }
  }
  {
    result;
    return;
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
      GameRoutine_8123d0();
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
        std___1___shared_weak_count___release_weak(v9);
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
  __int64 v3;
  __int64 result;
  int v5;
  int v6;
  char v7;
  char v8;
  __int64 v9;
  void* v10;

  v2 = GameData_212dec0[0];
  if ((GameRoutine_ec13d0(*GameData_212dec0[0]) & 1) != 0) {
    v10 = &GameData_1acfb96;
    v9 = game_HashString();
    game_VariableManager_SetFlag(&v9, 0xFFFFFFFFLL);
    v10 = &GameData_1abc9d5;
    v9 = game_HashString();
    game_VariableManager_SetFlag(&v9, 0);
  }
  v3 = *v2;
  LODWORD(v9) = 0;
  result = GameRoutine_ec1530(v3);
  if ((result & 1) == 0) {
    result = GameRoutine_eb6820(&v9);
    if ((result & 1) != 0) {
      v5 = v9;
      if ((*(_BYTE*)(*v2 + 13) & 1) != 0) {
        goto LABEL_25;
      }
      if ((GameData_2216858 & 1) == 0) {
        GameRoutine_8123d0();
      }
      if ((GameData_2216820 & 8) == 0) {
      LABEL_25:
        if ((int)v9 >= -1 && (*(_BYTE*)(*v2 + 12) & 1) == 0) {
          result = AutoPlay_f83060();
          if (v5 < (int)result) {
            v6 = *(_DWORD*)(a1 + 16);
            v7 = *(_BYTE*)(a1 + 20);
            *(_DWORD*)(a1 + 16) = v5;
            *(_BYTE*)(a1 + 20) = 1;
            *(_BYTE*)(a1 + 13) = 1;
            if (v6 == v5) {
              v8 = v7;
            }
            else {
              v8 = 0;
            }
            if (*(_BYTE*)(a1 + 28) != 1 || *(_DWORD*)(a1 + 24) != v5) {
              result = GameRoutine_eb6750((unsigned int)v5);
              *(_DWORD*)(a1 + 24) = v5;
              *(_BYTE*)(a1 + 28) = 1;
            }
            if ((v8 & 1) == 0 && GameData_225ca88 != 0) {
              result = *(_QWORD*)(GameData_225ca88 + 1968);
              if (result != 0) {
                return GameRoutine_1626290();
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
  void* v9;

  if ((*(_BYTE*)(*GameData_212dec0[0] + 13) & 1) != 0) {
    goto LABEL_6;
  }
  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0();
  }
  if ((GameData_2216820 & 8) == 0) {
  LABEL_6:
    result = 0;
    if (a2 < -1 || (*(_BYTE*)(*GameData_212dec0[0] + 12) & 1) != 0) {
      return result;
    }
    if (a2 < (int)AutoPlay_f83060(0)) {
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
        v9 = &GameData_1abc9d5;
        v8 = game_HashString();
        game_VariableManager_SetFlag(&v8, 1);
        v9 = &GameData_1acfb96;
        v8 = game_HashString();
        game_VariableManager_SetFlag(&v8, (unsigned int)a2);
        *(_DWORD*)(a1 + 24) = a2;
        *(_BYTE*)(a1 + 28) = 1;
      }
      if ((v7 & 1) == 0 && GameData_225ca88 != 0 &&
          *(_QWORD*)(GameData_225ca88 + 1968) != 0) {
        GameRoutine_1626290();
      }
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
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
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
  _QWORD v17[4];
  _QWORD* v18;

  result = ProcList_9bd480(a2);
  if (result == 0) {
    return result;
  }
  v4 = *(_QWORD*)(result + 152);
  v5 = result;
  v18 = v17;
  v17[0] = GameData_1ff7bd0;
  v6 = *(_QWORD*)(v4 + 8);
  if (v6 >= *(_QWORD*)(v4 + 16)) {
    v8 = GameRoutine_9bd620(v4, v17);
  }
  else {
    *(_QWORD*)(v6 + 32) = v6;
    (*(void (**)(_QWORD*, unsigned __int64))(*v18 + 24LL))(v18, v6);
    v8 = v6 + 48;
  }
  *(_QWORD*)(v4 + 8) = v8;
  if (v18 == v17) {
    v9 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_10;
    }
    v9 = 40;
  }
  (*(void (**)(_QWORD*))(*v18 + v9))(v18);
LABEL_10:
  v17[0] = GameData_1ff7c50;
  v18 = v17;
  game_ProcList_Call_9bcfa0(v5, v17, v7);
  if (v18 == v17) {
    v11 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_15;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v18 + v11))((__int64)v18);
LABEL_15:
  v17[0] = GameData_1ff7cd0;
  v18 = v17;
  game_ProcList_Call_9bcfa0(v5, v17, v10);
  if (v18 == v17) {
    v13 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_20;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v18 + v13))((__int64)v18);
LABEL_20:
  v17[0] = GameData_1ff7d50;
  v18 = v17;
  game_ProcList_Call_9bcfa0(v5, v17, v12);
  if (v18 == v17) {
    v15 = 32;
    goto LABEL_24;
  }
  if (v18 != nullptr) {
    v15 = 40;
  LABEL_24:
    (*(void (**)(__int64))(*v18 + v15))((__int64)v18);
  }
  v17[0] = GameData_1ff7dd0;
  v17[1] = a1;
  v18 = v17;
  game_ProcList_Call_9bcfa0(v5, v17, v14);
  result = (__int64)v18;
  if (v18 == v17) {
    v16 = 32;
  }
  else {
    if (v18 == nullptr) {
      return result;
    }
    v16 = 40;
  }
  return (*(__int64 (**)(__int64))(*v18 + v16))((__int64)v18);
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
  __int64 v4;
  void* v5;

  v1 = *(_QWORD*)(a1 + 8);
  v5 = &GameData_1acfb96;
  v4 = game_HashString();
  game_VariableManager_SetFlag(&v4, 0xFFFFFFFFLL);
  v5 = &GameData_1abc9d5;
  v4 = game_HashString();
  result = game_VariableManager_SetFlag(&v4, 0);
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
