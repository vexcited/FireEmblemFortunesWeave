#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* CmdbtlPartyNatives_e9a800(_QWORD*, __int64);
__attribute__((swiftcall)) void GameRoutine_1085a10(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD, _QWORD);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__int64 CmdBtlUnit_e7c3f0(__int64, int, __int16, float);
__int64 CmdBtlWindow_17c8500(__int64);
__int64 CmdbtlPartyNatives_e9cce0(__int64 result);
__int64 GameRoutine_1551d30();
__int64 GameRoutine_1551f00();
__int64 GameRoutine_176caa0(_QWORD, _QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_18aff60(__int64 result, __int64);
__int64 GameRoutine_19f38c0(_QWORD*, char);
__int64 GameRoutine_6c6da0(__int64);
__int64 GameRoutine_e720a0(__int64);
__int64 GameRoutine_e724e0(__int64, char);
__int64 GameRoutine_ed7d70(__int64);
__int64 GameRoutine_ed7e70(__int64);
__int64 GameRoutine_f90c20(__int64 result);
__int64 MapCombatPrediction_19f2a10(__int64, __int64, __int64*);
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_8ae640(_QWORD, _QWORD, _QWORD);
__int64 game_8aef60(_QWORD, _QWORD);
__int64 game_UnitItemList_Sort(__int64, unsigned int, int);
__int64 game_Unit_EquipItem_6d8f40(__int64, unsigned int);
__int64 game_cmdbtl_Manager_UnitRelocationImpl(_QWORD*, __int64);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, __int64, __int64,
                                               __int64, unsigned int,
                                               unsigned int, int, float, float);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 GameRoutine_1832df0(__int64, char, char);
__n128 GameRoutine_bfe5c0(__int64, __int64*, unsigned __int16*, __int64,
                          __n128 result);
__n128 GameRoutine_ed7fe0(__int64);
__n128 GameRoutine_ed8c10(__int64, __n128 result);
__n128 GameRoutine_ed90e0(__int64);
__n128 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
bool CmdbtlPartyNatives_e73070(_QWORD*, __int64*);
bool GameRoutine_e726b0(_QWORD*, char);
char* GameRoutine_162a080(char*, char*, char*);
double ui_LayoutAccessor_GetTranslate(__int64*);
extern _QWORD GameData_1b01768[];
extern _QWORD GameData_1b91358[3];
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82e50;
extern __int128 GameData_1a832e0;
extern __int128 GameData_1a83800;
extern __int16 GameData_2216840;
extern __int64 (*GameData_1fef008[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212cff8[3];
extern __int64* GameData_212ea58;
extern __int64* GameData_212f2e0;
extern __int64* GameData_212f628[9];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212d8b0[3];
extern __int64 GameData_212f538;
extern __int64 GameData_21ec7a8;
extern __int64 GameData_21f4cc0;
extern __int64 GameData_2203490;
extern __int64 GameData_2216828;
extern __int64 GameData_2216830;
extern __int64 GameData_221a540;
extern __int64 GameData_225ca88;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting_ptr;
extern char GameData_2216850;
extern char GameData_2216858;
extern int GameData_2216848;
float CmdBtlUnit_e7d750(_QWORD*);
void CmdBtlUnit_e7ada0(__int64);
void CmdBtlUnit_e7c6f0(__int64, char, float);
void CmdBtlUnit_e7c980(__int64);
void CmdBtlUnit_e7d890(__int64);
void GameRoutine_e7bed0(__int64, char);
void GameRoutine_e7fde0(__int64, __int64*, _QWORD*, int, float, float);
void GameRoutine_e80c40(__int64, __int64, float);
void GameRoutine_e9f200(__int64);
void MindBtlInfo_edb740(__int64);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
void game_cmdbtl_MindBtlInfo_CalcCmdBtlInfo(__int64, __int64, int);
void snd_Fade_Fade_10c830(__int64, float);
void game_cmdbtl_anonymous_e6e3c0();
__n128 game_cmdbtl_anonymous_e6f620();
__n128 game_cmdbtl_anonymous_e6f8d0();
__n128 game_cmdbtl_anonymous_e6fb70();
__n128 game_cmdbtl_anonymous_e70790(__int64 a1);
void game_cmdbtl_anonymous_e70e60(__int64 a1);
bool game_cmdbtl_anonymous_e72290(__int64 a1, __int64* a2);
void game_cmdbtl_anonymous_f40240();
__int64 game_cmdbtl_anonymous_f40d80(__int64 result);
void game_cmdbtl_anonymous_1629760(__int64** a1, __int64** a2,
                                   unsigned __int64 a3, __int64** a4,
                                   __int64 a5);
void game_cmdbtl_anonymous_1629a00(__int64** a1, __int64** a2,
                                   unsigned __int64 a3, __int64** a4);
void game_cmdbtl_anonymous_1629c80(__int64** a1, __int64** a2, __int64** a3,
                                   __int64 a4, __int64 a5, __int64** a6,
                                   __int64 a7);
void game_cmdbtl_anonymous_162a200(__int64** a1, __int64** a2,
                                   unsigned __int64 a3, __int64** a4,
                                   __int64 a5);
void game_cmdbtl_anonymous_162a4a0(__int64** a1, __int64** a2,
                                   unsigned __int64 a3, __int64** a4);
void game_cmdbtl_anonymous_162a720(__int64** a1, __int64** a2, __int64** a3,
                                   __int64 a4, __int64 a5, __int64** a6,
                                   __int64 a7);

void game_cmdbtl_anonymous_e6e3c0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v0 = GameData_2203490;
  v1 = *(_QWORD*)(GameData_2203490 + 640);
  v2 = *(_QWORD*)(GameData_2203490 + 648);
  if (v2 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
    if (v1 != 0) {
      goto LABEL_4;
    }
  }
  else if (v1 != 0) {
    goto LABEL_4;
  }
  v1 = *(_QWORD*)(v0 + 656);
  v3 = *(_QWORD*)(v0 + 664);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
LABEL_4:
  *(_DWORD*)(v1 + 56) |= 2u;
}

__n128 game_cmdbtl_anonymous_e6f620()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __n128 v7;
  __int64 v8;
  __int64 v9;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v16;
  __n128 result;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v0 = GameData_2203490;
  v1 = *(_QWORD*)(GameData_2203490 + 640);
  v2 = *(_QWORD*)(GameData_2203490 + 648);
  if (v2 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak(v2),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v1 != 0) {
      goto LABEL_4;
    }
  }
  else if (v1 != 0) {
    goto LABEL_4;
  }
  v1 = *(_QWORD*)(v0 + 656);
  v5 = *(_QWORD*)(v0 + 664);
  if (v5 == 0 || (atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0)) {
  LABEL_4:
    v3 = *(_QWORD*)(v1 + 40);
    if (v3 == 0) {
      goto LABEL_11;
    }
    goto LABEL_5;
  }
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  std___1___shared_weak_count___release_weak(v5),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = *(_QWORD*)(v1 + 40);
  if (v3 != 0) {
  LABEL_5:
    if (*(_QWORD*)(v3 + 8) != -1) {
      v4 = (__int64*)(v1 + 32);
      goto LABEL_13;
    }
  }
LABEL_11:
  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 32LL))(v1),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = *(_QWORD*)(v6 + 88);
  if (v3 != 0) {
    v4 = (__int64*)(v6 + 80);
  LABEL_13:
    v8 = *v4;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    v9 = std___1___shared_weak_count_lock(v3),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v7 = std___1___shared_weak_count___release_weak(v3),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v9 == 0 || v8 == 0) {
      if (v9 == 0) {
        goto LABEL_21;
      }
    }
    else {
      CmdBtlUnit_e7c980(v8),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v9 + 16LL))(
          v9, *(long double*)&v7),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v7 = std___1___shared_weak_count___release_weak(v9),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
LABEL_21:
  if ((*(_DWORD*)(v1 + 48) & 0x80000000) == 0) {
    v11 = (__int64*)(*(_QWORD*)((*(__int64 (**)(__int64, long double))(
                                    *(_QWORD*)v1 + 32LL))(v1,
                                                          *(long double*)&v7) +
                                40) +
                     16LL * *(int*)(v1 + 48)),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v12 = v11[1];
    if (v12 != 0) {
      v13 = *v11;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                memory_order_relaxed);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak(v12),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v14 = std___1___shared_weak_count_lock(v12),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v7 = std___1___shared_weak_count___release_weak(v12),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v14 == 0 || v13 == 0) {
        if (v14 == 0) {
          goto LABEL_33;
        }
      }
      else {
        CmdBtlUnit_e7c980(v13),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v14 + 16LL))(
            v14, *(long double*)&v7),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        v7 = std___1___shared_weak_count___release_weak(v14),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
  }
LABEL_33:
  v16 = (*(__int64 (**)(__int64, long double))(*(_QWORD*)v1 + 40LL))(
      v1, *(long double*)&v7),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v18 = *(_QWORD*)(v16 + 88);
  if (v18 == 0) {
    return result;
  }
  v19 = *(_QWORD*)(v16 + 80);
  v20 = *(_QWORD*)(v16 + 88);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                            memory_order_relaxed);
  v21 = std___1___shared_weak_count_lock(v20),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  result = std___1___shared_weak_count___release_weak(v18);
  if (v21 == 0 || v19 == 0) {
    if (v21 == 0) {
      return result;
    }
  }
  else {
    CmdBtlUnit_e7c980(v19),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v21 + 16LL))(
        v21, *(long double*)&result),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return std___1___shared_weak_count___release_weak(v21);
  }
  return result;
}

__n128 game_cmdbtl_anonymous_e6f8d0()
{
  __int64 v0;
  unsigned __int8* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  bool v9;
  __n128 result;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  struct {
    __int64 v22;
    __int64 v23;
  } v22_;
  _QWORD v24[2];
  __int64 v25[2];

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v0 = GameData_2203490;
  v1 = *(unsigned __int8**)(GameData_2203490 + 640);
  v2 = *(_QWORD*)(GameData_2203490 + 648);
  if (v2 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak(v2),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v1 != nullptr) {
      goto LABEL_4;
    }
  }
  else if (v1 != nullptr) {
    goto LABEL_4;
  }
  v1 = *(unsigned __int8**)(v0 + 656);
  v5 = *(_QWORD*)(v0 + 664);
  if (v5 == 0 || (atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0)) {
  LABEL_4:
    v3 = *((_QWORD*)v1 + 5);
    if (v3 == 0) {
      goto LABEL_11;
    }
    goto LABEL_5;
  }
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  std___1___shared_weak_count___release_weak(v5),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = *((_QWORD*)v1 + 5);
  if (v3 == 0) {
  LABEL_11:
    v6 = (*(__int64 (**)(unsigned __int8*))(*(_QWORD*)v1 + 32LL))(v1),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v4 = *(_QWORD*)(v6 + 80);
    v3 = *(_QWORD*)(v6 + 88);
    if (v3 == 0) {
      goto LABEL_13;
    }
    goto LABEL_12;
  }
LABEL_5:
  if (*(_QWORD*)(v3 + 8) == -1) {
    goto LABEL_11;
  }
  v4 = *((_QWORD*)v1 + 4);
LABEL_12:
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                            memory_order_relaxed);
LABEL_13:
  v7 = (_QWORD*)(*(__int64 (**)(unsigned __int8*))(*(_QWORD*)v1 + 16LL))(v1),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v22_.v22 = v4;
  v22_.v23 = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
  }
  v9 = CmdbtlPartyNatives_e73070(v7, &v22_.v22),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v22_.v23 != 0) {
    result = std___1___shared_weak_count___release_weak(v22_.v23);
  }
  v11 = v1[8];
  if (v9 && v11 == 6) {
    CmdbtlPartyNatives_e9cce0(GameData_2203490),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v12 = GameData_2203490;
    v13 = *(int*)(GameData_2203490 + 608);
    v14 = GameData_2203490 + 672;
    v15 = GameData_2203490 + 672 + (v13 << 7);
    v16 = *(_QWORD*)(v15 + 80);
    v17 = *(_QWORD*)(v15 + 88);
    if (v17 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                                memory_order_relaxed);
    }
    if ((unsigned int)v13 > 2) {
      v18 = 3;
    }
    else {
      v18 = GameData_1b91358[v13];
    }
    v19 = v14 + (v18 << 7);
    v20 = *(_QWORD*)(v19 + 80);
    v21 = *(_QWORD*)(v19 + 88);
    if (v21 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                                memory_order_relaxed);
    }
    v25[0] = v16;
    v25[1] = v17;
    if (v17 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                                memory_order_relaxed);
    }
    v24[0] = v20;
    v24[1] = v21;
    if (v21 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_e7fde0(v12 + 16, v25, v24, 1, 0x1.3333340000000p-1f,
                         0x0.0p+0f),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      result = std___1___shared_weak_count___release_weak(v21);
      if (v17 == 0) {
      LABEL_33:
        if (v21 != 0) {
          result = std___1___shared_weak_count___release_weak(v21);
        }
        if (v17 != 0) {
          result = std___1___shared_weak_count___release_weak(v17);
        }
        goto LABEL_37;
      }
    }
    else {
      GameRoutine_e7fde0(v12 + 16, v25, v24, 1, 0x1.3333340000000p-1f,
                         0x0.0p+0f),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v17 == 0) {
        goto LABEL_33;
      }
    }
    result = std___1___shared_weak_count___release_weak(v17);
    goto LABEL_33;
  }
  if (v11 != 10 && (*(_BYTE*)(GameData_21f4cc0 + 12) & 1) == 0) {
    *(_DWORD*)(GameData_2203490 + 1204) |= 1u;
  }
LABEL_37:
  if (v3 != 0) {
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__n128 game_cmdbtl_anonymous_e6fb70()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v0 = GameData_2203490;
  v1 = *(_QWORD*)(GameData_2203490 + 640);
  v2 = *(_QWORD*)(GameData_2203490 + 648);
  if (v2 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
    if (v1 != 0) {
      goto LABEL_4;
    }
  }
  else if (v1 != 0) {
    goto LABEL_4;
  }
  v1 = *(_QWORD*)(v0 + 656);
  v6 = *(_QWORD*)(v0 + 664);
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
  }
LABEL_4:
  GameRoutine_ed7d70(v1);
  GameRoutine_ed7e70(v1);
  v3 = GameData_2203490;
  v4 = *(_QWORD*)(GameData_2203490 + 640);
  v5 = *(_QWORD*)(GameData_2203490 + 648);
  if (v5 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v7 = v4;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
    v4 = v7;
    if (v7 != 0) {
      return GameRoutine_ed7fe0(v4);
    }
  }
  else if (v4 != 0) {
    return GameRoutine_ed7fe0(v4);
  }
  v4 = *(_QWORD*)(v3 + 656);
  v8 = *(_QWORD*)(v3 + 664);
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v9 = v4;
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
      v4 = v9;
    }
  }
  return GameRoutine_ed7fe0(v4);
}

__n128 game_cmdbtl_anonymous_e70790(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __n128 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16;
  _DWORD* v17;
  int v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 (***v25)();
  __int64 (**v26)();
  __int64 (**v27)();
  __int64 v28;
  __int64 v29;
  unsigned __int16* v30;
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
  __int64 v44;
  __n128 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  int v50;
  __int64 v51;
  _QWORD* v52;
  __n128 result;
  __int64 v54;
  struct {
    __int64 (**v55)();
    __int64 v56;
    char gap16_[16];
    __int64* v57;
  } v55_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = GameData_212ea58;
  v3 = *GameData_212ea58;
  v4 = *(_QWORD*)(*GameData_212ea58 + 640);
  v5 = *(_QWORD*)(*GameData_212ea58 + 648);
  if (v5 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak(v5),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v4 != 0) {
      goto LABEL_4;
    }
  }
  else if (v4 != 0) {
    goto LABEL_4;
  }
  v4 = *(_QWORD*)(v3 + 656);
  v32 = *(_QWORD*)(v3 + 664);
  if (v32 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
      std___1___shared_weak_count___release_weak(v32),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
LABEL_4:
  GameRoutine_ed7d70(v4),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
  GameRoutine_ed7e70(v4),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v7 = *v2;
  v8 = *(_QWORD*)(*v2 + 640);
  v9 = *(_QWORD*)(*v2 + 648);
  if (v9 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v6 = std___1___shared_weak_count___release_weak(v9),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v8 != 0) {
      goto LABEL_7;
    }
  }
  else if (v8 != 0) {
    goto LABEL_7;
  }
  v8 = *(_QWORD*)(v7 + 656);
  v33 = *(_QWORD*)(v7 + 664);
  if (v33 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v6 = std___1___shared_weak_count___release_weak(v33),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
LABEL_7:
  v10 = *(unsigned __int8*)(v8 + 8);
  v11 = (_QWORD*)*v2;
  if (v10 == 1) {
    goto LABEL_12;
  }
  v12 = v11[80];
  v13 = v11[81];
  if (v13 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v6 = std___1___shared_weak_count___release_weak(v13),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v12 != 0) {
      goto LABEL_11;
    }
  }
  else if (v12 != 0) {
    goto LABEL_11;
  }
  v12 = v11[82];
  v35 = v11[83];
  if (v35 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v6 = std___1___shared_weak_count___release_weak(v35),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
LABEL_11:
  v11 = (_QWORD*)*v2;
  if (*(_BYTE*)(v12 + 8) != 3) {
    goto LABEL_19;
  }
LABEL_12:
  v14 = v11[80];
  v15 = v11[81];
  if (v15 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v6 = std___1___shared_weak_count___release_weak(v15),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v14 != 0) {
        goto LABEL_15;
      }
    LABEL_51:
      v14 = v11[82];
      v34 = v11[83];
      if (v34 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
              v45 = COERCE_AS(__typeof__(v45),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          v6 = std___1___shared_weak_count___release_weak(v34),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
      goto LABEL_15;
    }
  }
  if (v14 == 0) {
    goto LABEL_51;
  }
LABEL_15:
  v11 = (_QWORD*)*v2;
  if (*(_QWORD*)(v14 + 24) != 0) {
    v16 = 3;
  }
  else {
    v16 = 1;
  }
  *(_BYTE*)(*(_QWORD*)(*v2 + 640) + 8LL) = v16;
LABEL_19:
  v17 = (_DWORD*)v11[80];
  if (v17 == nullptr) {
    goto LABEL_67;
  }
  v18 = v17[12];
  if (*(_DWORD*)(a1 + 22776) == v18) {
    goto LABEL_67;
  }
  *(_DWORD*)(a1 + 22776) = v18;
  MindBtlInfo_edb740((__int64)v17),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v19 = (_QWORD*)*v2;
  *(_BYTE*)(*GameData_212f628[0] + 280) = 1;
  v20 = v19[80];
  v21 = v19[81];
  if (v21 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v6 = std___1___shared_weak_count___release_weak(v21),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v20 != 0) {
      goto LABEL_24;
    }
  }
  else if (v20 != 0) {
    goto LABEL_24;
  }
  v20 = v19[82];
  v36 = v19[83];
  if (v36 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v6 = std___1___shared_weak_count___release_weak(v36),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
LABEL_24:
  if (*(_BYTE*)(v20 + 8) == 7) {
    goto LABEL_96;
  }
  v22 = *v2;
  v23 = *(_QWORD*)(*v2 + 640);
  v24 = *(_QWORD*)(*v2 + 648);
  if (v24 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v6 = std___1___shared_weak_count___release_weak(v24),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  if (v23 == 0) {
    v23 = *(_QWORD*)(v22 + 656);
    v37 = *(_QWORD*)(v22 + 664);
    if (v37 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v37 + 16LL))(
            v37, *(long double*)&v6),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v45 =
                COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v6 = std___1___shared_weak_count___release_weak(v37),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
  }
  if (*(_BYTE*)(v23 + 8) == 8) {
  LABEL_96:
    if ((v17[12] & 0x80000000) == 0) {
      v25 = (__int64 (***)(void))(
          *(_QWORD*)((*(__int64 (**)(_DWORD*))(*(_QWORD*)v17 + 32LL))(v17) +
                     40) +
          16LL * (int)v17[12]),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v26 = v25[1];
      if (v26 != nullptr) {
        v27 = *v25;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 1), 1u,
                                  memory_order_relaxed);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 2), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 1),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*((void (**)(__int64 (**)(void)))*v26 + 2))(v26),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
              v45 = COERCE_AS(__typeof__(v45),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          std___1___shared_weak_count___release_weak(v26),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
              v45 = COERCE_AS(__typeof__(v45),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v28 = std___1___shared_weak_count_lock(v26),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v55_.v56 = v28;
        if (v28 == 0) {
          v31 = (__int64)v26;
          goto LABEL_66;
        }
        v29 = v28;
        v55_.v55 = v27;
        v6 = std___1___shared_weak_count___release_weak(v26),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v27 == nullptr ||
            (*((_WORD*)v27[2] + 976) != 0
                 ? (v30 = (unsigned __int16*)((char*)v27[2] + 1952))
                 : (v30 = nullptr),
             v6 = GameRoutine_bfe5c0(a1 + 22904, (__int64*)&v55_.v55, v30, 0,
                                     v6),
             v29 = v55_.v56, v55_.v56 != 0)) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64, long double))(*(_QWORD*)v29 + 16LL))(
                v29, *(long double*)&v6),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                v45 = COERCE_AS(__typeof__(v45),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            v31 = v29;
          LABEL_66:
            v6 = std___1___shared_weak_count___release_weak(v31),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v45 =
                COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
        }
      }
    }
  }
LABEL_67:
  v38 = *v2;
  v39 = *(_QWORD*)(*v2 + 640);
  v40 = *(_QWORD*)(*v2 + 648);
  if (v40 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v41 = v39;
    (*(void (**)(__int64, long double))(*(_QWORD*)v40 + 16LL))(
        v40, *(long double*)&v6),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v6 = std___1___shared_weak_count___release_weak(v40),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v39 = v41;
    if (v41 != 0) {
      goto LABEL_75;
    }
  }
  else if (v39 != 0) {
    goto LABEL_75;
  }
  v39 = *(_QWORD*)(v38 + 656);
  v42 = *(_QWORD*)(v38 + 664);
  if (v42 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v43 = v39;
      (*(void (**)(__int64, long double))(*(_QWORD*)v42 + 16LL))(
          v42, *(long double*)&v6),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v6 = std___1___shared_weak_count___release_weak(v42),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v39 = v43;
    }
  }
LABEL_75:
  v44 = (*(__int64 (**)(__int64, long double))(*(_QWORD*)v39 + 16LL))(
      v39, *(long double*)&v6),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v46 = *(_QWORD*)(v44 + 88);
  if (v46 != 0) {
    v47 = *(_QWORD*)(v44 + 88);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v46 + 16), 1u,
                              memory_order_relaxed);
    v48 = std___1___shared_weak_count_lock(v47),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v45 = std___1___shared_weak_count___release_weak(v46),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else {
    v48 = 0;
  }
  if (*(_QWORD*)(a1 + 22808) - *(_QWORD*)(a1 + 22800) <= 0x10u) {
    v49 = 0;
  }
  else {
    v49 = 0x100000;
  }
  if (*(_QWORD*)(a1 + 22856) - *(_QWORD*)(a1 + 22848) > 8u) {
    v49 |= 0x200000u;
  }
  if (*(_QWORD*)(a1 + 22920) - *(_QWORD*)(a1 + 22912) <= 0x10u) {
    v50 = v49;
  }
  else {
    v50 = v49 | 0x400000;
  }
  v51 = *(_QWORD*)(*v2 + 640);
  GameRoutine_ed8c10(v51, v45),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
  GameRoutine_ed90e0(v51),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
  game_cmdbtl_MindBtlInfo_CalcCmdBtlInfo(v51, a1 + 152, v50 | 1),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
  game_cmdbtl_MindBtlInfo_CalcCmdBtlInfo(v51, a1 + 11464, v50 | 0x21),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v52 = (_QWORD*)*v2;
  v55_.v55 = GameData_1fef008;
  v55_.v57 = (__int64*)&v55_.v55;
  CmdbtlPartyNatives_e9a800(v52, (__int64)&v55_.v55),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v55_.v57 == (__int64*)&v55_.v55) {
    v54 = 32;
  }
  else {
    if (v55_.v57 == nullptr) {
      goto LABEL_91;
    }
    v54 = 40;
  }
  (*(void (**)(__int64))(*v55_.v57 + v54))((__int64)v55_.v57),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_91:
  if (v48 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v45 = COERCE_AS(__typeof__(v45), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return std___1___shared_weak_count___release_weak(v48);
  }
  return result;
}

void game_cmdbtl_anonymous_e70e60(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD handle[2];
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  char v5;
  __int64* v6;
  _DWORD* v7;
  __int64 v8;
  __n128 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  bool v22;
  __int64 v23;
  int v24;
  int v25;
  int v26;
  int v27;
  __int64 v28;
  char v29;
  char v30;
  int v31;
  int* v32;
  _QWORD* i;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  __int64* v39;
  int v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64* v52;
  int v53;
  __int64 v54;
  int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64* v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64* v71;
  __int64* v72;
  int v73;
  __int64 v74;
  __int64 v75;
  char v76;
  char v77;
  int v78;
  unsigned __int8* v79;
  unsigned int v80;
  bool v81;
  int v82;
  __int64 v84;
  int* v85;
  int* v86;
  __int64* v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64* v96;
  __int64* v97;
  int v98;
  __int64 v99;
  int v100;
  __int64 v101;
  __n128 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64* v110;
  __int64* v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64* v117;
  __int64* v118;
  int v119;
  __int64 v120;
  __int64 v121;
  char v122;
  char v123;
  int v124;
  __int64 v125;
  __int64 v126;
  int v127;
  int v128;
  int v129;
  unsigned __int8* v130;
  unsigned int v131;
  int v132;
  unsigned __int64 v134;
  unsigned __int64 v135;
  int v136;
  bool v137;
  _BYTE* v138;
  unsigned __int64 v139;
  unsigned __int64 v140;
  int v141;
  bool v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  char v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  int v150;
  float v151;
  _BYTE* v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  int* v158;
  __int64 v159[26];

  v147 = COERCE_AS(__typeof__(v147),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v149 = COERCE_AS(__typeof__(v149),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v1 = a1;
  v2 = game_g_game_setting_ptr;
  v3 = *(_QWORD*)game_g_game_setting_ptr;
  v4 = *(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 952LL);
  if ((v4 & 1) != 0) {
    if (GameData_221a540 != 0) {
      *(_DWORD*)(GameData_221a540 + 152) = 11;
    }
    if (*(_QWORD*)GameData_212f538 != 0) {
      CmdBtlWindow_17c8500(*(_QWORD*)GameData_212f538),
          v147 = COERCE_AS(__typeof__(v147),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v149 = COERCE_AS(__typeof__(v149),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    snd_Fade_Fade_10c830((__int64)v159, 0x0.0p+0f),
        v147 = COERCE_AS(__typeof__(v147),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    snd_play_ff2d0((void*)(handle), (__int64)"SE_SYS_Decide_CmdBtl",
                   (__int64)"SE_SYS_Decide_CmdBtl", (__int64)v159, 0, 0x10001u,
                   0, 0x0.0p+0f, 0x1.0000000000000p+0f),
        v147 = COERCE_AS(__typeof__(v147),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    snd_Fade_Destroy_Fade(v159),
        v147 = COERCE_AS(__typeof__(v147),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v6 = GameData_212ea58;
    v7 = *(_DWORD**)(*GameData_212ea58 + 640);
    if ((v7[12] & 0x80000000) != 0) {
      goto LABEL_124;
    }
    v8 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v7 + 32LL))(
        *(_QWORD*)(*GameData_212ea58 + 640)),
    v147 = COERCE_AS(__typeof__(v147),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v149 = COERCE_AS(__typeof__(v149),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v10 = (int)v7[12];
    v156 = v1;
    v11 = *(_QWORD*)(*(_QWORD*)(v8 + 40) + 16 * v10 + 8);
    if (v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v11),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v12 = std___1___shared_weak_count_lock(v11),
      v147 = COERCE_AS(__typeof__(v147),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v149 = COERCE_AS(__typeof__(v149),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v9 = std___1___shared_weak_count___release_weak(v11),
      v147 = COERCE_AS(__typeof__(v147),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v149 = COERCE_AS(__typeof__(v149),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((v7[12] & 0x80000000) != 0) {
        goto LABEL_121;
      }
    }
    else {
      v12 = 0;
      if ((v10 & 0x80000000) != 0) {
        goto LABEL_121;
      }
    }
    v18 = (__int64*)(*(_QWORD*)((*(__int64 (**)(_DWORD*, long double))(
                                    *(_QWORD*)v7 + 32LL))(v7,
                                                          *(long double*)&v9) +
                                40) +
                     16LL * (int)v7[12]),
    v147 = COERCE_AS(__typeof__(v147),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v149 = COERCE_AS(__typeof__(v149),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v19 = v18[1];
    if (v19 != 0) {
      v155 = v12;
      v20 = *v18;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                memory_order_relaxed);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v19),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v21 = std___1___shared_weak_count_lock(v19),
      v147 = COERCE_AS(__typeof__(v147),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v149 = COERCE_AS(__typeof__(v149),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v9 = std___1___shared_weak_count___release_weak(v19),
      v147 = COERCE_AS(__typeof__(v147),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v149 = COERCE_AS(__typeof__(v149),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v154 = v21;
      v22 = v21 == 0 || v20 == 0;
      if (!v22) {
        v28 = *(_QWORD*)(v20 + 16);
        v29 = game_UnitItemList_Sort(v28 + 828, 0, 6),
        v147 = COERCE_AS(__typeof__(v147),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v30 = game_UnitItemList_Sort(v28 + 828, 6u, 24),
        v147 = COERCE_AS(__typeof__(v147),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if ((v29 & 1) != 0 || (v30 & 1) != 0) {
          v31 = *(_DWORD*)(v28 + 416);
          if ((v31 & 0x10000000) == 0) {
            *(_DWORD*)(v28 + 416) = v31 | 0x10000000;
            game_6c51e0(v28),
                v147 =
                    COERCE_AS(__typeof__(v147),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v149 =
                    COERCE_AS(__typeof__(v149),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            GameRoutine_6c6da0(v28),
                v147 =
                    COERCE_AS(__typeof__(v147),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v149 =
                    COERCE_AS(__typeof__(v149),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            game_6c6ec0(v28),
                v147 =
                    COERCE_AS(__typeof__(v147),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v149 =
                    COERCE_AS(__typeof__(v149),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            *(_DWORD*)(v28 + 416) &= ~0x10000000u;
          }
        }
        v12 = v155;
        v23 = v154;
        v32 = *(int**)(v156 + 23016);
        v158 = *(int**)(v156 + 23024);
        if (v32 != v158) {
          i = GameData_1b01768;
          while (1) {
            if (*((_BYTE*)v32 + 8) != 1) {
              goto LABEL_63;
            }
            v34 = *(_QWORD*)(*(_QWORD*)(v20 + 16) + 440LL);
            if (v34 != 0 &&
                (unsigned __int64)(v35 = *(unsigned __int8*)(v34 + 16)) <= 3) {
              v36 = i[v35];
            }
            else {
              v36 = 3;
            }
            v37 = *v6 + (v36 << 7);
            v38 = *(__int64**)(v37 + 712);
            v39 = *(__int64**)(v37 + 720);
            if (v38 == v39) {
              v40 = 0;
            }
            else {
              v40 = 0;
              do {
                v41 = *v38;
                v38 += 2;
                if (v41 == v20) {
                  break;
                }
                ++v40;
              } while (v38 != v39);
            }
            if (v40 == *v32) {
              goto LABEL_63;
            }
            v42 = i;
            v43 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)v7 + 16LL))(v7),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v44 = *(_QWORD*)(v43 + 80);
            v45 = *(_QWORD*)(v43 + 88);
            if (v45 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 16), 1u,
                                        memory_order_relaxed);
            }
            v46 = std___1___shared_weak_count_lock(v45),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v47 = *(_QWORD*)(*(_QWORD*)(v44 + 16) + 440LL);
            if (v47 != 0 &&
                (unsigned __int64)(v48 = *(unsigned __int8*)(v47 + 16)) <= 3) {
              v49 = v42[v48];
            }
            else {
              v49 = 3;
            }
            v50 = *v6 + (v49 << 7);
            v51 = *(__int64**)(v50 + 712);
            v52 = *(__int64**)(v50 + 720);
            if (v51 == v52) {
              v53 = 0;
            }
            else {
              v53 = 0;
              do {
                v54 = *v51;
                v51 += 2;
                if (v54 == v44) {
                  break;
                }
                ++v53;
              } while (v51 != v52);
            }
            v55 = *v32;
            if (atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v56 = v46;
              (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46),
                  v147 = COERCE_AS(
                      __typeof__(v147),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v149 = COERCE_AS(
                      __typeof__(v149),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              std___1___shared_weak_count___release_weak(v56),
                  v147 = COERCE_AS(
                      __typeof__(v147),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v149 = COERCE_AS(
                      __typeof__(v149),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v9 = std___1___shared_weak_count___release_weak(v45),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v22 = v53 == v55;
            i = v42;
            if (v22) {
              goto LABEL_63;
            }
            v57 = *v6;
            v58 = *(_QWORD*)(*v6 + 640);
            v59 = *(_QWORD*)(*v6 + 648);
            if (v59 != 0 &&
                (atomic_fetch_add_explicit((atomic_ullong* volatile)(v59 + 8),
                                           1u, memory_order_relaxed),
                 atomic_fetch_add((atomic_ullong* volatile)(v59 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0)) {
              v60 = v58;
              (*(void (**)(__int64, long double))(*(_QWORD*)v59 + 16LL))(
                  v59, *(long double*)&v9),
                  v147 = COERCE_AS(
                      __typeof__(v147),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v149 = COERCE_AS(
                      __typeof__(v149),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v9 = std___1___shared_weak_count___release_weak(v59),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v149 = COERCE_AS(__typeof__(v149),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v58 = v60;
              if (v60 == 0) {
              LABEL_96:
                v58 = *(_QWORD*)(v57 + 656);
                v61 = *(_QWORD*)(v57 + 664);
                if (v61 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v61 + 8),
                                            1u, memory_order_relaxed);
                  if (atomic_fetch_add((atomic_ullong* volatile)(v61 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v62 = v58;
                    (*(void (**)(__int64, long double))(*(_QWORD*)v61 + 16LL))(
                        v61, *(long double*)&v9),
                        v147 = COERCE_AS(
                            __typeof__(v147),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v149 = COERCE_AS(
                            __typeof__(v149),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v9 = std___1___shared_weak_count___release_weak(v61),
                    v147 = COERCE_AS(
                        __typeof__(v147),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v149 = COERCE_AS(
                        __typeof__(v149),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v58 = v62;
                  }
                }
              }
            }
            else if (v58 == 0) {
              goto LABEL_96;
            }
            v63 = (*(__int64 (**)(__int64, long double))(*(_QWORD*)v58 + 16LL))(
                v58, *(long double*)&v9),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v65 = *(__int64**)(v63 + 40);
            v64 = *(__int64**)(v63 + 48);
            for (i = v42; v65 != v64; v65 += 2) {
              v66 = *(_QWORD*)(*v65 + 16);
              v67 = *(_QWORD*)(v66 + 440);
              if (v67 != 0 &&
                  (unsigned __int64)(v68 = *(unsigned __int8*)(v67 + 16)) <=
                      3) {
                v69 = v42[v68];
              }
              else {
                v69 = 3;
              }
              v70 = *v6 + (v69 << 7);
              v71 = *(__int64**)(v70 + 712);
              v72 = *(__int64**)(v70 + 720);
              if (v71 == v72) {
                v73 = 0;
              }
              else {
                v73 = 0;
                do {
                  v74 = *v71;
                  v71 += 2;
                  if (v74 == *v65) {
                    break;
                  }
                  ++v73;
                } while (v71 != v72);
              }
              if (v73 == *v32 &&
                  (game_Unit_EquipItem_6d8f40(v66, v32[1]) & 1) != 0) {
                v75 = *(_QWORD*)(*v65 + 16);
                v76 = game_UnitItemList_Sort(v75 + 828, 0, 6),
                v147 =
                    COERCE_AS(__typeof__(v147),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v149 =
                    COERCE_AS(__typeof__(v149),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v77 = game_UnitItemList_Sort(v75 + 828, 6u, 24),
                v147 =
                    COERCE_AS(__typeof__(v147),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v149 =
                    COERCE_AS(__typeof__(v149),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                if ((v76 & 1) != 0 || (v77 & 1) != 0) {
                  v78 = *(_DWORD*)(v75 + 416);
                  if ((v78 & 0x10000000) == 0) {
                    *(_DWORD*)(v75 + 416) = v78 | 0x10000000;
                    game_6c51e0(v75),
                        v147 = COERCE_AS(
                            __typeof__(v147),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v149 = COERCE_AS(
                            __typeof__(v149),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    GameRoutine_6c6da0(v75),
                        v147 = COERCE_AS(
                            __typeof__(v147),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v149 = COERCE_AS(
                            __typeof__(v149),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    game_6c6ec0(v75),
                        v147 = COERCE_AS(
                            __typeof__(v147),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v149 = COERCE_AS(
                            __typeof__(v149),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    *(_DWORD*)(v75 + 416) &= ~0x10000000u;
                  }
                }
                CmdBtlUnit_e7d890(*v65),
                    v147 = COERCE_AS(
                        __typeof__(v147),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v149 = COERCE_AS(
                        __typeof__(v149),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
            }
          LABEL_63:
            v32 += 3;
            if (v32 == v158) {
              goto LABEL_41;
            }
          }
        }
        goto LABEL_119;
      }
    LABEL_41:
      v23 = v154;
      v12 = v155;
      if (v154 != 0) {
      LABEL_119:
        if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v23 + 16LL))(
              v23, *(long double*)&v9),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v149 = COERCE_AS(__typeof__(v149),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v9 = std___1___shared_weak_count___release_weak(v23),
          v147 = COERCE_AS(__typeof__(v147),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v149 = COERCE_AS(__typeof__(v149),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
    }
  LABEL_121:
    v1 = v156;
    if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v12 + 16LL))(
          v12, *(long double*)&v9),
          v147 = COERCE_AS(__typeof__(v147),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v149 = COERCE_AS(__typeof__(v149),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v12),
          v147 = COERCE_AS(__typeof__(v147),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v149 = COERCE_AS(__typeof__(v149),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  LABEL_124:
    v79 = *(unsigned __int8**)(v1 + 16);
    if (v79 != nullptr) {
      v80 = *v79;
      v81 = v80 > 0x10;
      v82 = (1 << v80) & 0x1CE00;
      if (!v81 && v82 != 0) {
        *(_WORD*)(v1 + 136) |= 0x80u;
      }
    }
    return;
  }
  if ((v4 & 2) != 0) {
    v13 = *(_DWORD*)(a1 + 22780);
    if (v13 < 0) {
      goto LABEL_139;
    }
    v14 = (_QWORD*)*GameData_212ea58;
    v15 = *(_QWORD*)(*GameData_212ea58 + 640);
    if (v15 != 0) {
      *(_DWORD*)(v15 + 16) = v13;
      v16 = v14[80];
      v17 = v14[81];
      if (v17 == 0) {
        goto LABEL_134;
      }
    }
    else {
      v17 = v14[81];
      if (v17 == 0) {
        goto LABEL_135;
      }
      v16 = 0;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17),
          v147 = COERCE_AS(__typeof__(v147),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v149 = COERCE_AS(__typeof__(v149),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v17),
          v147 = COERCE_AS(__typeof__(v147),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v149 = COERCE_AS(__typeof__(v149),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  LABEL_134:
    if (v16 != 0) {
    LABEL_138:
      GameRoutine_ed7d70(v16),
          v147 = COERCE_AS(__typeof__(v147),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v149 = COERCE_AS(__typeof__(v149),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      GameRoutine_ed7e70(v16),
          v147 = COERCE_AS(__typeof__(v147),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v149 = COERCE_AS(__typeof__(v149),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LABEL_139:
      v85 = *(int**)(v1 + 23016);
      v157 = v1;
      v86 = *(int**)(v1 + 23024);
      if (v85 != v86) {
        v87 = GameData_212ea58;
        do {
          if (*((_BYTE*)v85 + 8) != 1) {
            goto LABEL_141;
          }
          v88 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(*v87 + 640) + 16LL))(
              *(_QWORD*)(*v87 + 640)),
          v147 = COERCE_AS(__typeof__(v147),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v149 = COERCE_AS(__typeof__(v149),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v89 = *(_QWORD*)(v88 + 80);
          v90 = *(_QWORD*)(v88 + 88);
          if (v90 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v90 + 16), 1u,
                                      memory_order_relaxed);
          }
          v91 = std___1___shared_weak_count_lock(v90),
          v147 = COERCE_AS(__typeof__(v147),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v149 = COERCE_AS(__typeof__(v149),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v92 = *(_QWORD*)(*(_QWORD*)(v89 + 16) + 440LL);
          if (v92 != 0 &&
              (unsigned __int64)(v93 = *(unsigned __int8*)(v92 + 16)) <= 3) {
            v94 = GameData_1b01768[v93];
          }
          else {
            v94 = 3;
          }
          v95 = *v87 + (v94 << 7);
          v96 = *(__int64**)(v95 + 712);
          v97 = *(__int64**)(v95 + 720);
          if (v96 == v97) {
            v98 = 0;
          }
          else {
            v98 = 0;
            do {
              v99 = *v96;
              v96 += 2;
              if (v99 == v89) {
                break;
              }
              ++v98;
            } while (v96 != v97);
          }
          v100 = *v85;
          if (atomic_fetch_add((atomic_ullong* volatile)(v91 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v101 = v91;
            (*(void (**)(__int64))(*(_QWORD*)v91 + 16LL))(v91),
                v147 =
                    COERCE_AS(__typeof__(v147),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v149 =
                    COERCE_AS(__typeof__(v149),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            std___1___shared_weak_count___release_weak(v101),
                v147 =
                    COERCE_AS(__typeof__(v147),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v149 =
                    COERCE_AS(__typeof__(v149),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v102 = std___1___shared_weak_count___release_weak(v90),
          v147 = COERCE_AS(__typeof__(v147),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v149 = COERCE_AS(__typeof__(v149),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v98 == v100) {
            goto LABEL_141;
          }
          v103 = *v87;
          v104 = *(_QWORD*)(*v87 + 640);
          v105 = *(_QWORD*)(*v87 + 648);
          if (v105 != 0 &&
              (atomic_fetch_add_explicit((atomic_ullong* volatile)(v105 + 8),
                                         1u, memory_order_relaxed),
               atomic_fetch_add((atomic_ullong* volatile)(v105 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0)) {
            v106 = v104;
            (*(void (**)(__int64, long double))(*(_QWORD*)v105 + 16LL))(
                v105, *(long double*)&v102),
                v147 =
                    COERCE_AS(__typeof__(v147),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v149 =
                    COERCE_AS(__typeof__(v149),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v102 = std___1___shared_weak_count___release_weak(v105),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v104 = v106;
            if (v106 == 0) {
            LABEL_163:
              v104 = *(_QWORD*)(v103 + 656);
              v107 = *(_QWORD*)(v103 + 664);
              if (v107 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v107 + 8),
                                          1u, memory_order_relaxed);
                if (atomic_fetch_add((atomic_ullong* volatile)(v107 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v108 = v104;
                  (*(void (**)(__int64, long double))(*(_QWORD*)v107 + 16LL))(
                      v107, *(long double*)&v102),
                      v147 = COERCE_AS(
                          __typeof__(v147),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v149 = COERCE_AS(
                          __typeof__(v149),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v102 = std___1___shared_weak_count___release_weak(v107),
                  v147 = COERCE_AS(
                      __typeof__(v147),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v149 = COERCE_AS(
                      __typeof__(v149),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v104 = v108;
                }
              }
            }
          }
          else if (v104 == 0) {
            goto LABEL_163;
          }
          v109 = (*(__int64 (**)(__int64, long double))(*(_QWORD*)v104 + 16LL))(
              v104, *(long double*)&v102),
          v147 = COERCE_AS(__typeof__(v147),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v149 = COERCE_AS(__typeof__(v149),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v111 = *(__int64**)(v109 + 40);
          v110 = *(__int64**)(v109 + 48);
          while (v111 != v110) {
            v112 = *(_QWORD*)(*v111 + 16);
            v113 = *(_QWORD*)(v112 + 440);
            if (v113 != 0 &&
                (unsigned __int64)(v114 = *(unsigned __int8*)(v113 + 16)) <=
                    3) {
              v115 = GameData_1b01768[v114];
            }
            else {
              v115 = 3;
            }
            v116 = *v87 + (v115 << 7);
            v117 = *(__int64**)(v116 + 712);
            v118 = *(__int64**)(v116 + 720);
            if (v117 == v118) {
              v119 = 0;
            }
            else {
              v119 = 0;
              do {
                v120 = *v117;
                v117 += 2;
                if (v120 == *v111) {
                  break;
                }
                ++v119;
              } while (v117 != v118);
            }
            if (v119 == *v85 &&
                (game_Unit_EquipItem_6d8f40(v112, v85[1]) & 1) != 0) {
              v121 = *(_QWORD*)(*v111 + 16);
              v122 = game_UnitItemList_Sort(v121 + 828, 0, 6),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v149 = COERCE_AS(__typeof__(v149),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v123 = game_UnitItemList_Sort(v121 + 828, 6u, 24),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v149 = COERCE_AS(__typeof__(v149),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if ((v122 & 1) != 0 || (v123 & 1) != 0) {
                v124 = *(_DWORD*)(v121 + 416);
                if ((v124 & 0x10000000) == 0) {
                  *(_DWORD*)(v121 + 416) = v124 | 0x10000000;
                  game_6c51e0(v121),
                      v147 = COERCE_AS(
                          __typeof__(v147),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v149 = COERCE_AS(
                          __typeof__(v149),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  GameRoutine_6c6da0(v121),
                      v147 = COERCE_AS(
                          __typeof__(v147),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v149 = COERCE_AS(
                          __typeof__(v149),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  game_6c6ec0(v121),
                      v147 = COERCE_AS(
                          __typeof__(v147),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v149 = COERCE_AS(
                          __typeof__(v149),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  *(_DWORD*)(v121 + 416) &= ~0x10000000u;
                }
              }
              CmdBtlUnit_e7d890(*v111),
                  v147 = COERCE_AS(
                      __typeof__(v147),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v149 = COERCE_AS(
                      __typeof__(v149),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v111 += 2;
          }
        LABEL_141:
          v85 += 3;
        } while (v85 != v86);
      }
      v125 = *(_QWORD*)(*GameData_212ea58 + 640);
      if (v125 != 0) {
        *(_QWORD*)(v125 + 24) = *(_QWORD*)(v157 + 22784);
      }
      v126 = GameData_225ca88;
      if (GameData_225ca88 != 0 &&
          (*(_BYTE*)(GameData_225ca88 + 1977) & 1) == 0) {
        v127 = *(_DWORD*)(GameData_225ca88 + 1984);
        if (v127 < 1) {
          if (v127 != 0) {
            goto LABEL_201;
          }
        }
        else {
          *(_DWORD*)(GameData_225ca88 + 1984) = 0;
        }
        *(_BYTE*)(v126 + 1977) = 1;
        *(_DWORD*)(v126 + 1980) = 2;
      }
    LABEL_201:
      if (*(_QWORD*)GameData_212f538 != 0) {
        CmdBtlWindow_17c8500(*(_QWORD*)GameData_212f538),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      snd_Fade_Fade_10c830((__int64)v159, 0x0.0p+0f),
          v147 = COERCE_AS(__typeof__(v147),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v149 = COERCE_AS(__typeof__(v149),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      snd_play_ff2d0((void*)(handle), (__int64)"SE_SYS_Cancel_M",
                     (__int64)"SE_SYS_Cancel_M", (__int64)v159, 0, 0x10001u, 0,
                     0x0.0p+0f, 0x1.0000000000000p+0f),
          v147 = COERCE_AS(__typeof__(v147),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v149 = COERCE_AS(__typeof__(v149),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      snd_Fade_Destroy_Fade(v159),
          v147 = COERCE_AS(__typeof__(v147),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v149 = COERCE_AS(__typeof__(v149),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v130 = *(unsigned __int8**)(v157 + 16);
      if (v130 != nullptr) {
        v131 = *v130;
        v81 = v131 > 0x10;
        v132 = (1 << v131) & 0x1CE00;
        if (!v81 && v132 != 0) {
          *(_WORD*)(v157 + 136) |= 0x80u;
        }
      }
      return;
    }
  LABEL_135:
    v16 = v14[82];
    v84 = v14[83];
    if (v84 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v84 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v84 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v84 + 16LL))(v84),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v84),
            v147 = COERCE_AS(__typeof__(v147),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    goto LABEL_138;
  }
  if ((v4 & 4) != 0 &&
      (*(_QWORD*)GameData_212d8b0[0] == 0 ||
       (*(_BYTE*)(*(_QWORD*)GameData_212d8b0[0] + 256LL) & 1) == 0) &&
      (*GameData_212cff8[0] == 0 ||
       *(_QWORD*)(*GameData_212cff8[0] + 96) ==
           *(_QWORD*)(*GameData_212cff8[0] + 88))) {
    v159[0] = 0;
    v159[1] = 0;
    if ((GameRoutine_18aff60(a1, (__int64)v159) & 1) != 0) {
      return;
    }
    v3 = *(_QWORD*)v2;
  }
  if (*(_BYTE*)(v3 + 807) == 1 &&
      ((*(_BYTE*)(v3 + 804) & 1) != 0 || *(_BYTE*)(v3 + 940) == 1 &&
                                             (*(_BYTE*)(v3 + 805) & 1) != 0 &&
                                             (*(_BYTE*)(v3 + 806) & 1) != 0)) {
    goto LABEL_17;
  }
  if (*(_BYTE*)(v3 + 903) == 1) {
    if ((*(_BYTE*)(v3 + 900) & 1) != 0) {
    LABEL_17:
      v5 = 1;
      goto LABEL_44;
    }
    v5 = 0;
    if (*(_BYTE*)(v3 + 940) == 1 && (*(_BYTE*)(v3 + 901) & 1) != 0) {
      v5 = *(_BYTE*)(v3 + 902);
    }
  }
  else {
    v5 = 0;
  }
LABEL_44:
  if ((*(_BYTE*)(*(_QWORD*)(*GameData_212ea58 + 640) + 8LL) & 0xFD) != 1) {
    if ((v5 & 1) == 0) {
      v129 = 0;
      goto LABEL_196;
    }
    v26 = *(_DWORD*)(v1 + 23040);
    if (v26 != 0) {
      if ((*(_WORD*)(v3 + 954) & 0x180) == 0) {
        goto LABEL_243;
      }
      if (v26 == 1) {
        v27 = 3;
      }
      else {
        v27 = 1;
      }
    }
    else {
      *(_DWORD*)(v1 + 23040) = 1;
      if ((*(_WORD*)(v3 + 954) & 0x180) == 0) {
        goto LABEL_243;
      }
      v27 = 3;
    }
    *(_DWORD*)(v1 + 23040) = v27;
  LABEL_243:
    v139 = *(_QWORD*)(v1 + 22808) - *(_QWORD*)(v1 + 22800);
    v140 = *(_QWORD*)(v1 + 22920) - *(_QWORD*)(v1 + 22912);
    if (v140 < 0x11) {
      v141 = 1;
    }
    else {
      v141 = 3;
    }
    v142 = v139 >= 0x11;
    if (v139 >= 0x11) {
      v129 = 1;
    }
    else {
      v129 = v141;
    }
    if (v142 && v140 > 0x10) {
    LABEL_252:
      if ((GameRoutine_e720a0(v1) & 1) != 0) {
        return;
      }
      v143 = *(_QWORD*)v2;
      if ((*(_BYTE*)(*(_QWORD*)v2 + 807LL) != 1 ||
           (*(_BYTE*)(v143 + 804) & 1) == 0 &&
               (*(_BYTE*)(v143 + 940) != 1 ||
                (*(_BYTE*)(v143 + 805) & 1) == 0 ||
                (*(_BYTE*)(v143 + 806) & 1) == 0)) &&
          (*(_BYTE*)(v143 + 903) != 1 ||
           (*(_BYTE*)(v143 + 900) & 1) == 0 &&
               (*(_BYTE*)(v143 + 940) != 1 ||
                (*(_BYTE*)(v143 + 901) & 1) == 0 ||
                *(_BYTE*)(v143 + 902) != 1))) {
        v150 = *(_DWORD*)(v143 + 952);
        if ((v150 & 0x440000) != 0) {
          if ((GameRoutine_e724e0(v1, 0) & 1) != 0) {
            return;
          }
          v150 = *(_DWORD*)(*(_QWORD*)v2 + 952LL);
        }
        if ((v150 & 0x220000) != 0 && (GameRoutine_e724e0(v1, 1) & 1) != 0) {
          return;
        }
        goto LABEL_320;
      }
      if (*(float*)(v1 + 23044) <= 0x0.0p+0f) {
        v144 = GameRoutine_1551f00(),
        v147 = COERCE_AS(__typeof__(v147),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if ((_DWORD)v144 == 4 && (v144 & 0x100000000LL) != 0) {
          v145 = v1;
          v146 = 0;
          goto LABEL_316;
        }
        if ((v144 & 0x100000000LL) != 0 && (_DWORD)v144 == 3) {
          v145 = v1;
          v146 = 1;
        LABEL_316:
          if ((GameRoutine_e724e0(v145, v146) & 1) != 0) {
            v151 = *(float*)(v1 + 23044);
            if (v151 < 0x1.3333340000000p-3f) {
              v151 = 0x1.3333340000000p-3f;
            }
            *(float*)(v1 + 23044) = v151;
            return;
          }
        }
      }
    LABEL_320:
      v152 = *(_BYTE**)v2;
      if (*(_BYTE*)(*(_QWORD*)v2 + 807LL) != 1) {
        goto LABEL_330;
      }
      if ((v152[804] & 1) != 0) {
        goto LABEL_340;
      }
      if (v152[940] != 1 || (v152[805] & 1) == 0 || (v152[806] & 1) == 0) {
      LABEL_330:
        if ((v152[903] != 1 ||
             (v152[900] & 1) == 0 && (v152[940] != 1 || (v152[901] & 1) == 0 ||
                                      (v152[902] & 1) == 0)) &&
            (v152[953] & 8) != 0) {
          goto LABEL_346;
        }
        if (*(_BYTE*)(*(_QWORD*)v2 + 807LL) == 0) {
          if (v152[903] == 0) {
            goto LABEL_348;
          }
          goto LABEL_339;
        }
        if ((v152[804] & 1) != 0) {
          goto LABEL_340;
        }
      }
      if (v152[940] != 1 || (v152[805] & 1) == 0 || (v152[806] & 1) == 0) {
        if ((v152[903] & 1) == 0) {
          goto LABEL_348;
        }
      LABEL_339:
        if ((v152[900] & 1) == 0 &&
            (v152[940] != 1 || (v152[901] & 1) == 0 || v152[902] != 1)) {
          goto LABEL_348;
        }
      }
    LABEL_340:
      if ((GameRoutine_1551d30() & 1) != 0) {
        v152 = *(_BYTE**)v2;
        if (*(_DWORD*)(v1 + 23040) == 3 && (v152[953] & 0x20) != 0) {
        LABEL_346:
          if (GameRoutine_e726b0((_QWORD*)v1, 0)) {
            return;
          }
          v152 = *(_BYTE**)v2;
        LABEL_348:
          if (v152[807] == 1 && ((v152[804] & 1) != 0 ||
                                 v152[940] == 1 && (v152[805] & 1) != 0 &&
                                     (v152[806] & 1) != 0) ||
              v152[903] == 1 && ((v152[900] & 1) != 0 ||
                                 v152[940] == 1 && (v152[901] & 1) != 0 &&
                                     (v152[902] & 1) != 0) ||
              (v152[953] & 4) == 0) {
            if ((GameRoutine_1551d30() & 1) == 0) {
              return;
            }
            if ((GameRoutine_1551d30() & 1) != 0) {
              v153 = *(_QWORD*)v2;
              if (*(_DWORD*)(v1 + 23040) == 3 &&
                  (*(_BYTE*)(v153 + 953) & 0x10) != 0) {
                goto LABEL_366;
              }
            }
            else {
              v153 = *(_QWORD*)v2;
            }
            if ((*(_BYTE*)(v153 + 955) & 2) == 0) {
              return;
            }
          }
        LABEL_366:
          GameRoutine_e726b0((_QWORD*)v1, 1),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v149 = COERCE_AS(__typeof__(v149),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          return;
        }
      }
      else {
        v152 = *(_BYTE**)v2;
      }
      if ((v152[955] & 4) == 0) {
        goto LABEL_348;
      }
      goto LABEL_346;
    }
  LABEL_196:
    *(_DWORD*)(v1 + 23040) = v129;
    goto LABEL_252;
  }
  if ((v5 & 1) == 0) {
    v128 = 0;
  LABEL_194:
    *(_DWORD*)(v1 + 23040) = v128;
    goto LABEL_221;
  }
  v24 = *(_DWORD*)(v1 + 23040);
  if (v24 != 0) {
    if ((*(_WORD*)(v3 + 954) & 0x180) == 0) {
      goto LABEL_212;
    }
    if (v24 == 1) {
      v25 = 2;
    }
    else {
      v25 = 1;
    }
  }
  else {
    *(_DWORD*)(v1 + 23040) = 1;
    if ((*(_WORD*)(v3 + 954) & 0x180) == 0) {
      goto LABEL_212;
    }
    v25 = 2;
  }
  *(_DWORD*)(v1 + 23040) = v25;
LABEL_212:
  v134 = *(_QWORD*)(v1 + 22808) - *(_QWORD*)(v1 + 22800);
  v135 = *(_QWORD*)(v1 + 22856) - *(_QWORD*)(v1 + 22848);
  if (v135 < 9) {
    v136 = 1;
  }
  else {
    v136 = 2;
  }
  v137 = v134 >= 0x11;
  if (v134 >= 0x11) {
    v128 = 1;
  }
  else {
    v128 = v136;
  }
  if (!v137 || v135 <= 8) {
    goto LABEL_194;
  }
LABEL_221:
  if ((GameRoutine_e720a0(v1) & 1) != 0) {
    return;
  }
  v138 = *(_BYTE**)v2;
  if (*(_BYTE*)(*(_QWORD*)v2 + 807LL) == 1) {
    if ((v138[804] & 1) != 0) {
      goto LABEL_267;
    }
    if (v138[940] == 1 && (v138[805] & 1) != 0 && (v138[806] & 1) != 0) {
      goto LABEL_237;
    }
  }
  if ((v138[903] != 1 ||
       (v138[900] & 1) == 0 &&
           (v138[940] != 1 || (v138[901] & 1) == 0 || (v138[902] & 1) == 0)) &&
      (v138[953] & 8) != 0) {
  LABEL_273:
    if (*(_QWORD*)(v1 + 22856) - *(_QWORD*)(v1 + 22848) >= 9u) {
      v159[0] = GameRoutine_19f38c0((_QWORD*)(v1 + 22792), 0),
      v147 = COERCE_AS(__typeof__(v147),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v149 = COERCE_AS(__typeof__(v149),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v159[1] = v147;
      GameRoutine_1832df0(*GameData_212f628[0], 1, 0),
          v147 = COERCE_AS(__typeof__(v147),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v149 = COERCE_AS(__typeof__(v149),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (game_cmdbtl_anonymous_e72290(v1, v159)) {
        return;
      }
      v138 = *(_BYTE**)v2;
    }
    goto LABEL_276;
  }
  if (*(_BYTE*)(*(_QWORD*)v2 + 807LL) == 0) {
    if (v138[903] == 0) {
      goto LABEL_276;
    }
    goto LABEL_266;
  }
  if ((v138[804] & 1) == 0) {
  LABEL_237:
    if (v138[940] != 1 || (v138[805] & 1) == 0 || (v138[806] & 1) == 0) {
      if ((v138[903] & 1) == 0) {
        goto LABEL_276;
      }
    LABEL_266:
      if ((v138[900] & 1) == 0 &&
          (v138[940] != 1 || (v138[901] & 1) == 0 || v138[902] != 1)) {
        goto LABEL_276;
      }
    }
  }
LABEL_267:
  if ((GameRoutine_1551d30() & 1) != 0) {
    v138 = *(_BYTE**)v2;
    if (*(_DWORD*)(v1 + 23040) == 2 && (v138[953] & 0x20) != 0) {
      goto LABEL_273;
    }
  }
  else {
    v138 = *(_BYTE**)v2;
  }
  if ((v138[955] & 4) != 0) {
    goto LABEL_273;
  }
LABEL_276:
  if (v138[807] == 1) {
    if ((v138[804] & 1) != 0) {
      goto LABEL_296;
    }
    if (v138[940] == 1 && (v138[805] & 1) != 0 && (v138[806] & 1) != 0) {
    LABEL_289:
      if (v138[940] == 1 && (v138[805] & 1) != 0 && (v138[806] & 1) != 0) {
      LABEL_296:
        if ((GameRoutine_1551d30() & 1) != 0) {
          v148 = *(_QWORD*)v2;
          if (*(_DWORD*)(v1 + 23040) == 2 &&
              (*(_BYTE*)(v148 + 953) & 0x10) != 0) {
          LABEL_302:
            if (*(_QWORD*)(v1 + 22856) - *(_QWORD*)(v1 + 22848) >= 9u) {
              v159[0] = GameRoutine_19f38c0((_QWORD*)(v1 + 22792), 1),
              v147 = COERCE_AS(__typeof__(v147),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v149 = COERCE_AS(__typeof__(v149),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v159[1] = v149;
              GameRoutine_1832df0(*GameData_212f628[0], 1, 1),
                  v147 = COERCE_AS(
                      __typeof__(v147),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v149 = COERCE_AS(
                      __typeof__(v149),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              game_cmdbtl_anonymous_e72290(v1, v159),
                  v147 = COERCE_AS(
                      __typeof__(v147),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v149 = COERCE_AS(
                      __typeof__(v149),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            return;
          }
        }
        else {
          v148 = *(_QWORD*)v2;
        }
        if ((*(_BYTE*)(v148 + 955) & 2) == 0) {
          return;
        }
        goto LABEL_302;
      }
      if ((v138[903] & 1) == 0) {
        return;
      }
      goto LABEL_295;
    }
  }
  if ((v138[903] != 1 ||
       (v138[900] & 1) == 0 &&
           (v138[940] != 1 || (v138[901] & 1) == 0 || (v138[902] & 1) == 0)) &&
      (v138[953] & 4) != 0) {
    goto LABEL_302;
  }
  if (v138[807] != 0) {
    if ((v138[804] & 1) != 0) {
      goto LABEL_296;
    }
    goto LABEL_289;
  }
  if (v138[903] == 0) {
    return;
  }
LABEL_295:
  if ((v138[900] & 1) != 0 ||
      v138[940] == 1 && (v138[901] & 1) != 0 && v138[902] == 1) {
    goto LABEL_296;
  }
}

bool game_cmdbtl_anonymous_e72290(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  _QWORD handle[2];
  __int64 v2;
  __int64* v5;
  __int64 v6;
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
  __int64 v17;
  __int64 v18;
  const char* v19;
  long double v20;
  __int64 v21;
  __int64 v22;
  _QWORD v24[25];

  v2 = *a2;
  if (*a2 == 0) {
    return v2 != 0;
  }
  v5 = GameData_212ea58;
  v6 = *GameData_212ea58;
  v7 = *(_QWORD*)(*GameData_212ea58 + 640);
  v8 = *(_QWORD*)(*GameData_212ea58 + 648);
  if (v8 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v9 = v7;
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
    v7 = v9;
    if (v9 == 0) {
    LABEL_7:
      v7 = *(_QWORD*)(v6 + 656);
      v10 = *(_QWORD*)(v6 + 664);
      if (v10 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v11 = v7;
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          std___1___shared_weak_count___release_weak(v10);
          v7 = v11;
        }
      }
    }
  }
  else if (v7 == 0) {
    goto LABEL_7;
  }
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
  v14 = *(_QWORD*)(v12 + 80);
  v13 = *(_QWORD*)(v12 + 88);
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
  }
  v15 = std___1___shared_weak_count_lock(v13);
  std___1___shared_weak_count___release_weak(v13);
  v16 = *(_QWORD*)(*v5 + 640);
  *(_DWORD*)(v16 + 16) =
      MapCombatPrediction_19f2a10(a1 + 22792, *(_QWORD*)(v14 + 16), a2);
  v17 = a2[1];
  *(_QWORD*)(v16 + 24) = v17;
  v18 = *GameData_212f628[0];
  if (*(_QWORD*)(*GameData_212f628[0] + 176) != *a2) {
    snd_Fade_Fade_10c830((__int64)v24, 0x0.0p+0f);
    snd_play_ff2d0((void*)(handle), (__int64)"SE_SYS_Weapon_Change",
                   (__int64)"SE_SYS_Weapon_Change", (__int64)v24, 0, 0x10001u,
                   0, 0x0.0p+0f, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v24);
    v17 = a2[1];
  }
  if (*(_QWORD*)(v18 + 184) != v17) {
    if (v17 != 0) {
      snd_Fade_Fade_10c830((__int64)v24, 0x0.0p+0f);
      v19 = "SE_SYS_Skill_Equip";
    }
    else {
      snd_Fade_Fade_10c830((__int64)v24, 0x0.0p+0f);
      v19 = "SE_SYS_Skill_Remove";
    }
    snd_play_ff2d0((void*)(handle), (__int64)v19, (__int64)v19, (__int64)v24, 0,
                   0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v24);
  }
  *(__n128*)&v20 = game_cmdbtl_anonymous_e70790(a1);
  v21 = *a2;
  v22 = a2[1];
  *(_BYTE*)(v18 + 192) = 0;
  *(_QWORD*)(v18 + 176) = v21;
  *(_QWORD*)(v18 + 184) = v22;
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v15 + 16LL))(v15, v20);
    std___1___shared_weak_count___release_weak(v15);
  }
  return v2 != 0;
}

void game_cmdbtl_anonymous_f40240()
{
  _QWORD* v0;
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  float32x4_t* v5;
  __int64 v6;
  __int64 v7;
  long double v8;
  float v10;
  unsigned __int64 v11;
  float v12;
  float v13;
  unsigned __int64 v14;
  __int64 v15;
  float32x4_t v16;
  float v17;
  float v18;
  float v19;
  float32x4_t v20;
  int8x16_t v21;
  float32x4_t v22;
  unsigned __int64 v23;
  int8x16_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  int8x16_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  int8x16_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  int8x16_t v41;
  float32x4_t v42;
  float32x4_t v43;
  int8x16_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  int8x16_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  unsigned __int64 v58;
  int8x16_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
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
  float32x4_t v74;
  int8x16_t v75;
  float32x4_t v76;
  __int64* v77;
  __int64* i;
  __int64 v79;
  unsigned __int64 v80;
  float32x4_t v81;
  unsigned __int64 v82;
  float32x4_t v83;
  float32x4_t v84;
  float v85;
  float32x4_t v86;
  float v87;
  float32x4_t v88;
  float32x4_t v89;
  float32x4_t v90;
  int8x16_t v91;
  struct {
    unsigned __int64 v92;
    __int64 v93;
    __int64 v94;
  } v92_;
  int8x16_t v95;
  int8x16_t v96;

  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
  GameRoutine_f90c20(GameData_21ec7a8),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
  v0 = (_QWORD*)GameData_2203490;
  v1 = *(__int64**)(GameData_2203490 + 712);
  v2 = *(__int64**)(GameData_2203490 + 720);
  *(_DWORD*)(GameData_2203490 + 1204) |= 8u;
  if (v1 != v2) {
    do {
      v3 = *v1;
      v1 += 2;
      CmdBtlUnit_e7c3f0(v3, 1, 256, 0x0.0p+0f),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
    } while (v1 != v2);
    v0 = (_QWORD*)GameData_2203490;
  }
  LOWORD(v92_.v92) = 0;
  v92_.v93 = 0;
  v92_.v94 = 0;
  *(_BYTE*)(*GameData_212f2e0 + 112) = 1;
  game_cmdbtl_Manager_UnitRelocationImpl(v0, (__int64)&v92_.v92),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v92_.v94 != 0) {
    std___1___shared_weak_count___release_weak(v92_.v94),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v4 = *(_QWORD*)(GameData_2203490 + 888);
  if (v4 != 0) {
    v5 = *(float32x4_t**)(GameData_2203490 + 880);
    v6 = *(_QWORD*)(GameData_2203490 + 888);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v7 = std___1___shared_weak_count_lock(v6),
    v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
    *(__n128*)&v8 = std___1___shared_weak_count___release_weak(v4),
    v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v7 == 0 || v5 == nullptr) {
      if (v7 == 0) {
        goto LABEL_31;
      }
    }
    else {
      CmdBtlUnit_e7c6f0((__int64)v5, 1, 0x0.0p+0f),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
      v10 = LANES128(v5[8]).n128_f32[1];
      v11 = LANES128(v5[19]).n128_u64[0];
      LANES128(v5[5]).n128_u8[0] = 1;
      LANES128(v5[18]).n128_u64[1] = 0;
      LANES128(v5[19]).n128_u64[0] = 0;
      v12 = v10 + 0x1.6800000000000p+7f;
      LANES128(v5[8]).n128_f32[1] = v12;
      LANES128(v5[2]).n128_f32[0] = v12;
      if (v11 != 0) {
        std___1___shared_weak_count___release_weak(v11),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      GameRoutine_e7bed0((__int64)v5, 1),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
      v13 = LANES128(v5[8]).n128_f32[1] + 0x1.4000000000000p+2f;
      v85 = CmdBtlUnit_e7d750(v5) + 0x1.99999a0000000p-3f,
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
      v88 = v5[7];
      math_Quat_FromYawPitchRoll((void*)(&v96), v13 * 0x1.1df46a0000000p-6f,
                                 0x0.0p+0f, 0x0.0p+0f),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
      math_Quat_FromYawPitchRoll((void*)(&v95),
                                 (float)(v13 + 0x1.6800000000000p+6f) *
                                     0x1.1df46a0000000p-6f,
                                 0x0.0p+0f, 0x0.0p+0f),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
      v15 = LANES128(v5[13]).n128_i64[1];
      v14 = LANES128(v5[14]).n128_u64[0];
      if (v14 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                  memory_order_relaxed);
      }
      LANES128(v16).n128_u32[0] = 0;
      LANES128(v16).n128_u64[1] = 0;
      LANES128(v16).n128_f32[1] = v85;
      if (v15 != 0) {
        v86 = v16;
        GameRoutine_e9f200(v15),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
        v18 = fmaxf(v17, 0x1.3333340000000p-1f);
        if ((*(_BYTE*)(v15 + 92) & (*(float*)(v15 + 88) < v18)) != 0) {
          v18 = *(float*)(v15 + 88);
        }
        v19 = v18 + 0x1.0000000000000p+2f;
        v16 = v86;
      }
      else {
        v19 = 0x1.2000000000000p+2f;
      }
      v20 = vaddq_f32(v88, v16);
      if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        v87 = v19;
        v89 = v20;
        (*(void (**)(unsigned __int64))(*(_QWORD*)v14 + 16LL))(v14),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
        std___1___shared_weak_count___release_weak(v14),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
        v19 = v87;
        v20 = v89;
      }
      LANES128(v21).n128_u64[0] = 0;
      HIDWORD(v92_.v94) = 0;
      LANES128(v22).n128_u64[0] = 0;
      v23 = LODWORD(v19);
      v24 = vmulq_f32(v96, COERCE_AS(float32x4_t, GameData_1a829d0));
      LANES128(v21).n128_u64[1] = v23;
      LANES128(v25).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v22).n128_i8[8] =
          vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      LANES128(v26).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v27).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v21).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v26).n128_u64[1] = LANES128(v26).n128_u64[0];
      LANES128(v25).n128_u64[1] = LANES128(v27).n128_u64[0];
      LANES128(v27).n128_u64[1] = LANES128(v21).n128_u64[0];
      *(int32x2_t*)&LANES128(v21).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v24).n128_u64[0]), 1);
      LANES128(v28).n128_u64[0] = LANES128(v96).n128_u64[0];
      v29 = vmulq_f32(v22, v25);
      v30 = vmlaq_f32(vmulq_f32(v24, v26),
                      COERCE_AS(float32x4_t, GameData_1a83800), v29);
      LANES128(v29).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      v31 = vmlaq_f32(v30, COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v21, v29));
      LANES128(v21).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v21).n128_i8[8] =
          vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      LANES128(v24).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v96, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v24).n128_u64[1] = LANES128(v24).n128_u64[0];
      v32 = vmlsq_f32(v31, v21, v27);
      LANES128(v21).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v96, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v27).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v28).n128_u64[1] = LANES128(v21).n128_u64[0];
      *(int8x8_t*)&LANES128(v27).n128_i8[8] =
          vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      LANES128(v29).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      v33 = vmlaq_f32(vmulq_f32(v24, v32),
                      COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v28, v27));
      LANES128(v27).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v96, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int32x2_t*)&LANES128(v29).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v32).n128_u64[0]), 1);
      LANES128(v21).n128_u64[1] = LANES128(v27).n128_u64[0];
      LANES128(v27).n128_u64[1] = LANES128(v96).n128_u64[0];
      v34 = vmulq_f32(v27, v29);
      LANES128(v27).n128_u64[1] = 1056964608;
      v35 = vmlaq_f32(v33, COERCE_AS(float32x4_t, GameData_1a83800), v34);
      LANES128(v34).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v34).n128_i8[8] =
          vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      v80 = LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82e50),
                                 COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
      v36 = vmlsq_f32(v35, v34, v21);
      v37 = vmulq_f32(v95, COERCE_AS(float32x4_t, GameData_1a829d0));
      LANES128(v29).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v36).n128_u32[3] = 0;
      LANES128(v29).n128_u64[1] = v80;
      LANES128(v22).n128_u64[0] = 0;
      v38 = vaddq_f32(v20, v36);
      LANES128(v36).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82e50),
                               COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v22).n128_i8[8] =
          vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      LANES128(v36).n128_u64[1] = LANES128(v36).n128_u64[0];
      LANES128(v27).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      v84 = v36;
      LANES128(v28).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82e50),
                               COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      v39 = vmlaq_f32(vmulq_f32(v37, v36),
                      COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v22, v29));
      *(int32x2_t*)&LANES128(v28).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v37).n128_u64[0]), 1);
      LANES128(v29).n128_u64[0] = v80;
      LANES128(v29).n128_u64[1] = LANES128(v28).n128_u64[0];
      v40 = vmlaq_f32(v39, COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v28, v27));
      LANES128(v27).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      v82 = LANES128(v28).n128_u64[0];
      v83 = v29;
      LANES128(v22).n128_u64[0] = LANES128(v95).n128_u64[0];
      *(int8x8_t*)&LANES128(v27).n128_i8[8] =
          vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      LANES128(v37).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v95, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v37).n128_u64[1] = LANES128(v37).n128_u64[0];
      v41 = vmlsq_f32(v40, v27, v29);
      LANES128(v27).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v95, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v29).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v41, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v22).n128_u64[1] = LANES128(v27).n128_u64[0];
      *(int8x8_t*)&LANES128(v29).n128_i8[8] =
          vqtbl1_s8(v41, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      LANES128(v28).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v41, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      v42 = vmlaq_f32(vmulq_f32(v37, v41),
                      COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v22, v29));
      LANES128(v29).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v95, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int32x2_t*)&LANES128(v28).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v41).n128_u64[0]), 1);
      LANES128(v27).n128_u64[1] = LANES128(v29).n128_u64[0];
      LANES128(v29).n128_u64[1] = LANES128(v95).n128_u64[0];
      LANES128(v32).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v41, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v32).n128_i8[8] =
          vqtbl1_s8(v41, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      v43 = vmlsq_f32(vmlaq_f32(v42, COERCE_AS(float32x4_t, GameData_1a83800),
                                vmulq_f32(v29, v28)),
                      v32, v27);
      LANES128(v43).n128_u32[3] = 0;
      v81 = vaddq_f32(v38, v43);
      v92_.v92 = LANES128(v81).n128_u64[0];
      v92_.v93 = LANES128(v81).n128_u32[2] | 0x4080000000000000LL;
      *(float*)&v92_.v94 = v13 + 0x1.6800000000000p+7f;
      GameRoutine_e80c40(GameData_2203490 + 16, (__int64)&v92_.v92, 0x0.0p+0f),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
      v44 = vmulq_f32(v96, COERCE_AS(float32x4_t, GameData_1a829d0));
      LANES128(v45).n128_u64[0] = v82;
      LANES128(v46).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v46).n128_u64[1] = v80;
      LANES128(v47).n128_u64[0] = 0;
      *(int8x8_t*)&LANES128(v47).n128_i8[8] =
          vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      *(int32x2_t*)&LANES128(v45).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v44).n128_u64[0]), 1);
      v48 = vmulq_f32(v47, v46);
      v49 = vmlaq_f32(vmulq_f32(v84, v44),
                      COERCE_AS(float32x4_t, GameData_1a83800), v48);
      LANES128(v48).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      v50 = vmulq_f32(v45, v48);
      LANES128(v45).n128_u64[0] = LANES128(v96).n128_u64[0];
      v51 = vmlaq_f32(v49, COERCE_AS(float32x4_t, GameData_1a83800), v50);
      LANES128(v50).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v50).n128_i8[8] =
          vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      v52 = vmlsq_f32(v51, v50, v83);
      LANES128(v44).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v96, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v50).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v96, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v53).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v44).n128_u64[1] = LANES128(v44).n128_u64[0];
      LANES128(v45).n128_u64[1] = LANES128(v50).n128_u64[0];
      *(int8x8_t*)&LANES128(v53).n128_i8[8] =
          vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      LANES128(v47).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      v54 = vmlaq_f32(vmulq_f32(v44, v52),
                      COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v45, v53));
      LANES128(v53).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v96, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int32x2_t*)&LANES128(v47).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v52).n128_u64[0]), 1);
      LANES128(v50).n128_u64[1] = LANES128(v53).n128_u64[0];
      LANES128(v53).n128_u64[1] = LANES128(v96).n128_u64[0];
      LANES128(v55).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v55).n128_i8[8] =
          vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      v56 = vaddq_f32(
          v81,
          vmlsq_f32(vmlaq_f32(v54, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v53, v47)),
                    v55, v50));
      v92_.v92 = LANES128(v56).n128_u64[0];
      LODWORD(v92_.v93) = LANES128(v56).n128_u32[2];
      GameRoutine_e80c40(GameData_2203490 + 16, (__int64)&v92_.v92,
                         0x1.e000000000000p+4f),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
      math_Quat_FromYawPitchRoll(
          (void*)(&v91), LANES128(v5[8]).n128_f32[1] * 0x1.1df46a0000000p-6f,
          0x0.0p+0f, 0x0.0p+0f),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
      LANES128(v57).n128_u64[0] = 0;
      v58 = LANES128(v5[13]).n128_u64[0];
      v59 = vmulq_f32(v91, COERCE_AS(float32x4_t, GameData_1a829d0));
      LANES128(v60).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a832e0),
                               COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v61).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a832e0),
                               COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v62).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a832e0),
                               COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v63).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v59, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v61).n128_u64[1] = LANES128(v61).n128_u64[0];
      LANES128(v63).n128_u64[1] = LANES128(v60).n128_u64[0];
      *(int8x8_t*)&LANES128(v57).n128_i8[8] =
          vqtbl1_s8(v59, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      LANES128(v60).n128_u64[1] = LANES128(v62).n128_u64[0];
      *(int32x2_t*)&LANES128(v62).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v59).n128_u64[0]), 1);
      LANES128(v64).n128_u64[0] = LANES128(v91).n128_u64[0];
      v65 = vmulq_f32(v57, v63);
      v66 = vmlaq_f32(vmulq_f32(v59, v61),
                      COERCE_AS(float32x4_t, GameData_1a83800), v65);
      LANES128(v65).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v59, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      v67 = vmlaq_f32(v66, COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v62, v65));
      LANES128(v62).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v59, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v62).n128_i8[8] =
          vqtbl1_s8(v59, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      LANES128(v59).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v91, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v59).n128_u64[1] = LANES128(v59).n128_u64[0];
      v68 = vmlsq_f32(v67, v62, v60);
      LANES128(v62).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v91, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v60).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v64).n128_u64[1] = LANES128(v62).n128_u64[0];
      *(int8x8_t*)&LANES128(v60).n128_i8[8] =
          vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      LANES128(v65).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      v69 = vmlaq_f32(vmulq_f32(v59, v68),
                      COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v64, v60));
      LANES128(v60).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v91, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int32x2_t*)&LANES128(v65).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v68).n128_u64[0]), 1);
      LANES128(v62).n128_u64[1] = LANES128(v60).n128_u64[0];
      LANES128(v60).n128_u64[1] = LANES128(v91).n128_u64[0];
      LANES128(v70).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v70).n128_i8[8] =
          vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      v71 = vaddq_f32(
          v5[7],
          vmlsq_f32(vmlaq_f32(v69, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v60, v65)),
                    v70, v62));
      LANES128(v5[6]).n128_u64[0] = LANES128(v71).n128_u64[0];
      LANES128(v5[7]).n128_u64[0] = LANES128(v71).n128_u64[0];
      v73 = v5[6];
      v72 = v5[7];
      LANES128(v74).n128_u64[0] = LANES128(v5[7]).n128_u64[0];
      LANES128(v73).n128_u64[1] = LANES128(v71).n128_u32[2];
      LANES128(v74).n128_u64[1] = LANES128(v71).n128_u32[2];
      v5[6] = v73;
      v5[7] = v74;
      if (v58 != 0) {
        v90 = v74;
        LANES128(v75).n128_u64[0] =
            LANES128(v72).n128_u32[0] | 0x4348000000000000LL;
        LANES128(v72).n128_u32[1] = -1027080192;
        LANES128(v75).n128_u64[1] =
            LANES128_OF(vextq_s8(v71, v71, 8u)).n128_u32[0];
        LANES128(v72).n128_u64[1] = LANES128(v75).n128_u64[1];
        v95 = v72;
        v96 = v75;
        GameRoutine_1085a10((void*)(&v92_.v92), v58 + 160, &v96, &v95, 0),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
        v74 = v90;
        LANES128(v74).n128_u32[1] = HIDWORD(v92_.v92);
      }
      LANES128(v5[7]).n128_u64[0] = LANES128(v74).n128_u64[0];
      v76 = v5[7];
      LANES128(v5[6]).n128_u32[1] = LANES128(v76).n128_u32[1];
      LANES128(v76).n128_u64[1] = LANES128(v74).n128_u32[2];
      v5[7] = v76;
      GameRoutine_e7bed0((__int64)v5, 1),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v7 + 16LL))(v7, v8),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
      std___1___shared_weak_count___release_weak(v7),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
    }
  }
LABEL_31:
  v77 = *(__int64**)(GameData_2203490 + 712);
  for (i = *(__int64**)(GameData_2203490 + 720); v77 != i; v77 += 2) {
    v79 = *v77;
    if ((*(_BYTE*)(*v77 + 172) & 1) == 0) {
      *(_BYTE*)(v79 + 172) = 1;
    }
    *(_DWORD*)(v79 + 136) = 1669996436;
    *(_BYTE*)(v79 + 140) = 1;
    *(_BYTE*)(v79 + 148) = 0;
    *(_DWORD*)(v79 + 144) = 0;
    *(_BYTE*)(v79 + 152) = 0;
    *(_BYTE*)(v79 + 156) = 0;
    *(_BYTE*)(v79 + 160) = 0;
    *(_BYTE*)(v79 + 164) = 0;
    *(_BYTE*)(v79 + 168) = 0;
    CmdBtlUnit_e7ada0(v79),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
  }
}

__int64 game_cmdbtl_anonymous_f40d80(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v7;
  __int64* v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  int v13;
  __int64 v14;
  int v15;
  long double v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v1 = *(_QWORD*)(GameData_2203490 + 888);
  if (v1 != 0) {
    v2 = *(_QWORD*)(GameData_2203490 + 880);
    v3 = result;
    v4 = *(_QWORD*)(GameData_2203490 + 888);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                              memory_order_relaxed);
    v5 = std___1___shared_weak_count_lock(v4);
    result = std___1___shared_weak_count___release_weak_alt1(v1);
    if (v5 == 0 || v2 == 0) {
      if (v5 == 0) {
        return result;
      }
    }
    else {
      if ((GameData_2216858 & 1) == 0) {
        GameRoutine_8123d0(result);
      }
      if (GameData_2216850 == 1) {
        if (GameData_2216830 == GameData_2216828) {
          v14 = 0;
        }
        else {
          v7 = (unsigned __int64)(GameData_2216830 - GameData_2216828) >> 3;
          nn_os_LockMutex(&game_g_random_mutex);
          v8 = game_map_MapRandom_instance__ptr[0];
          v9 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                          (unsigned __int64)((_UNKNOWN**)0x8LL));
          v10 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v11 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v8 + 1) = v9;
          v12 = (v11 >> 8) ^ (v10 >> 19) ^ v11 ^ v10;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8) = v10;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8 + 4) = v12;
          v13 = v12 & 0x7FFFFFFF;
          nn_os_UnlockMutex(&game_g_random_mutex);
          v14 = *(_QWORD*)(GameData_2216828 +
                           8LL * (unsigned int)(v13 % (int)v7));
        }
        v19 = 0;
        v20 = 0;
        v18 = 0;
        v15 = GameData_2216848 - 1;
        if (GameData_2216848 >= 1 && GameData_2216840 != 0) {
        LABEL_16:
          game_8aef60(&v18, &GameData_2216840);
          while (v15 != 0) {
            --v15;
            if (GameData_2216840 != 0) {
              goto LABEL_16;
            }
          }
        }
        game_8ae640(&v18, 0, 0);
        if (v18 != 0) {
          v19 = v18;
          v17 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v17 = 56;
          }
          *(__n128*)&v16 = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, (_QWORD)(v18));
        }
        result = GameRoutine_176caa0(
            v3,
            *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                       8LL * (unsigned __int16)GameData_2216840),
            (unsigned int)GameData_2216848, v14, v16);
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      return std___1___shared_weak_count___release_weak_alt1(v5);
    }
  }
  return result;
}

void game_cmdbtl_anonymous_1629760(__int64** a1, __int64** a2,
                                   unsigned __int64 a3, __int64** a4,
                                   __int64 a5)
{

#pragma clang fp contract(off)
  __int64** v6;
  __int64* v7;
  float v8;
  __int64* v9;
  __int64** v10;
  __int64 v11;
  __int64** v12;
  __int64** v13;
  __int64* v14;
  __int64* v15;
  float v16;
  __int64* v17;
  __int64 v18;
  __int64* v19;
  float v20;
  unsigned __int64 v21;
  __int64** v22;
  unsigned __int64 v23;
  __int64** v26;
  __int64** v27;
  __int64** v28;
  __int64* v29;
  float v30;
  float v31;
  __int64** v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64* v36;
  __int64* v37;

  if (a3 >= 2) {
    v6 = a1;
    if (a3 == 2) {
      v7 = *a1;
      v8 = fabsf(COERCE_FLOAT(
          COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(*(a2 - 1)))));
      if (v8 < fabsf(COERCE_FLOAT(COERCE_UNSIGNED_INT64(
                   ui_LayoutAccessor_GetTranslate(v7))))) {
        v9 = *v6;
        *v6 = *(a2 - 1);
        *(a2 - 1) = v9;
      }
    }
    else if ((__int64)a3 > 128) {
      v21 = a3 >> 1;
      v22 = a4;
      v23 = a3 - (a3 >> 1);
      if ((__int64)a3 <= a5) {
        game_cmdbtl_anonymous_1629a00(a1, &a1[v21], a3 >> 1, a4);
        v26 = &v22[v21];
        game_cmdbtl_anonymous_1629a00(&v6[v21], a2, v23, v26);
        v27 = &v22[a3];
        v28 = v26;
        while (v28 != v27) {
          v29 = *v22;
          v30 = fabsf(COERCE_FLOAT(
              COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(*v28))));
          v31 = fabsf(COERCE_FLOAT(
              COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(v29))));
          if (v30 >= v31) {
            v32 = v22;
          }
          else {
            v32 = v28;
          }
          if (v30 >= v31) {
            v33 = 8;
          }
          else {
            v33 = 0;
          }
          v34 = *v32;
          v22 = (__int64**)((char*)v22 + v33);
          if (v30 >= v31) {
            v35 = 0;
          }
          else {
            v35 = 8;
          }
          v28 = (__int64**)((char*)v28 + v35);
          *v6++ = v34;
          if (v22 == v26) {
            while (v28 != v27) {
              v37 = *v28++;
              *v6++ = v37;
            }
            return;
          }
        }
        while (v22 != v26) {
          v36 = *v22++;
          *v6++ = v36;
        }
      }
      else {
        game_cmdbtl_anonymous_1629760(a1, &a1[v21], a3 >> 1, a4, a5);
        game_cmdbtl_anonymous_1629760(&v6[v21], a2, v23, v22, a5);
        game_cmdbtl_anonymous_1629c80(v6, &v6[v21], a2, v21, v23, v22, a5);
      }
    }
    else if (a1 != a2) {
      v10 = a1 + 1;
      if (a1 + 1 != a2) {
        v11 = 0;
        v12 = a1;
        do {
          v15 = *v12;
          v14 = v12[1];
          v12 = v10;
          v16 = fabsf(COERCE_FLOAT(
              COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(v14))));
          if (v16 < fabsf(COERCE_FLOAT(COERCE_UNSIGNED_INT64(
                        ui_LayoutAccessor_GetTranslate(v15))))) {
            v17 = *v12;
            v18 = v11;
            do {
              *(__int64**)((char*)v6 + v18 + 8) = *(__int64**)((char*)v6 + v18);
              if (v18 == 0) {
                v13 = v6;
                goto LABEL_11;
              }
              v19 = *(__int64**)((char*)v6 + v18 - 8);
              v20 = fabsf(COERCE_FLOAT(
                  COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(v17))));
              v18 -= 8;
            } while (v20 < fabsf(COERCE_FLOAT(COERCE_UNSIGNED_INT64(
                               ui_LayoutAccessor_GetTranslate(v19)))));
            v13 = (__int64**)((char*)v6 + v18 + 8);
          LABEL_11:
            *v13 = v17;
          }
          v10 = v12 + 1;
          v11 += 8;
        } while (v12 + 1 != a2);
      }
    }
  }
}

void game_cmdbtl_anonymous_1629a00(__int64** a1, __int64** a2,
                                   unsigned __int64 a3, __int64** a4)
{

#pragma clang fp contract(off)
  __int64** v4;
  __int64** v6;
  __int64* v7;
  float v8;
  __int64* v9;
  __int64** v10;
  __int64 v11;
  __int64** v12;
  __int64** v13;
  __int64* v14;
  float v15;
  __int64** v16;
  __int64 v17;
  __int64* v18;
  float v19;
  unsigned __int64 v20;
  __int64** v22;
  unsigned __int64 v23;
  __int64** v24;
  __int64* v25;
  float v26;
  float v27;
  __int64** v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64* v32;
  __int64* v33;

  if (a3 != 0) {
    v4 = a4;
    v6 = a1;
    if (a3 == 2) {
      v7 = *a1;
      v8 = fabsf(COERCE_FLOAT(
          COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(*(a2 - 1)))));
      if (v8 >= fabsf(COERCE_FLOAT(COERCE_UNSIGNED_INT64(
                    ui_LayoutAccessor_GetTranslate(v7))))) {
        *v4 = *v6;
        v9 = *(a2 - 1);
      }
      else {
        *v4 = *(a2 - 1);
        v9 = *v6;
      }
      v4[1] = v9;
    }
    else if (a3 == 1) {
      *a4 = *a1;
    }
    else if ((__int64)a3 > 8) {
      v20 = a3 >> 1;
      v22 = &a1[a3 >> 1];
      v23 = 8 * (a3 >> 1);
      game_cmdbtl_anonymous_1629760(a1, v22, v20, a4, v20);
      game_cmdbtl_anonymous_1629760(v22, a2, a3 - v20, &v4[v20], a3 - v20);
      if (v23 != 0) {
        v24 = v22;
        while (v24 != a2) {
          v25 = *v6;
          v26 = fabsf(COERCE_FLOAT(
              COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(*v24))));
          v27 = fabsf(COERCE_FLOAT(
              COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(v25))));
          if (v26 >= v27) {
            v28 = v6;
          }
          else {
            v28 = v24;
          }
          if (v26 >= v27) {
            v29 = 0;
          }
          else {
            v29 = 8;
          }
          v30 = *v28;
          v24 = (__int64**)((char*)v24 + v29);
          if (v26 >= v27) {
            v31 = 8;
          }
          else {
            v31 = 0;
          }
          v6 = (__int64**)((char*)v6 + v31);
          *v4++ = v30;
          if (v6 == v22) {
            goto LABEL_41;
          }
        }
        while (v6 != v22) {
          v32 = *v6++;
          *v4++ = v32;
        }
      }
      else {
        v24 = v22;
      LABEL_41:
        while (v24 != a2) {
          v33 = *v24++;
          *v4++ = v33;
        }
      }
    }
    else if (a1 != a2) {
      v10 = a1 + 1;
      *a4 = *a1;
      if (a1 + 1 != a2) {
        v11 = 0;
        v12 = a4;
        v13 = a4;
        do {
          v14 = *v13++;
          v15 = fabsf(COERCE_FLOAT(
              COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(*v10))));
          if (v15 >= fabsf(COERCE_FLOAT(COERCE_UNSIGNED_INT64(
                         ui_LayoutAccessor_GetTranslate(v14))))) {
            *v13 = *v10;
          }
          else {
            v16 = v4;
            v12[1] = *v12;
            if (v12 != v4) {
              v17 = v11;
              while (1) {
                v16 = (__int64**)((char*)v4 + v17);
                v18 = *(__int64**)((char*)v4 + v17 - 8);
                v19 = fabsf(COERCE_FLOAT(COERCE_UNSIGNED_INT64(
                    ui_LayoutAccessor_GetTranslate(*v10))));
                if (v19 >= fabsf(COERCE_FLOAT(COERCE_UNSIGNED_INT64(
                               ui_LayoutAccessor_GetTranslate(v18))))) {
                  break;
                }
                v17 -= 8;
                *v16 = *(v16 - 1);
                if (v17 == 0) {
                  v16 = v4;
                  break;
                }
              }
            }
            *v16 = *v10;
          }
          ++v10;
          v11 += 8;
          v12 = v13;
        } while (v10 != a2);
      }
    }
  }
}

void game_cmdbtl_anonymous_1629c80(__int64** a1, __int64** a2, __int64** a3,
                                   __int64 a4, __int64 a5, __int64** a6,
                                   __int64 a7)
{

#pragma clang fp contract(off)
  __int64 v9;
  __int64* v14;
  float v15;
  __int64 v16;
  __int64** v17;
  __int64** v18;
  unsigned __int64 v19;
  __int64** v20;
  __int64** v21;
  __int64* v22;
  float v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64* v26;
  __int64** v27;
  __int64** v28;
  __int64* v29;
  float v30;
  float v31;
  char* v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  __int64** v37;
  __int64** v38;
  __int64 v39;
  __int64 v40;
  __int64** v41;
  __int64* v42;
  float v43;
  float v44;
  __int64** v45;
  __int64 v46;
  __int64** v47;
  __int64** v48;
  __int64* v49;
  __int64* v50;
  float v51;
  float v52;
  __int64** v53;
  __int64 v54;
  __int64* v55;
  __int64 v56;
  __int64* v57;
  __int64 v58;
  __int64* v59;
  __int64** v60;
  __int64** v61;
  __int64** v62;
  __int64** v63;

  if (a5 != 0) {
    v9 = a5;
    while (a4 > a7 && v9 > a7) {
      if (a4 == 0) {
        return;
      }
      while (1) {
        v14 = *a1;
        v15 = fabsf(COERCE_FLOAT(
            COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(*a2))));
        if (v15 < fabsf(COERCE_FLOAT(COERCE_UNSIGNED_INT64(
                      ui_LayoutAccessor_GetTranslate(v14))))) {
          break;
        }
        ++a1;
        if (--a4 == 0) {
          return;
        }
      }
      if (a4 >= v9) {
        if (a4 == 1) {
          v57 = *a1;
          *a1 = *a2;
          *a2 = v57;
          return;
        }
        v24 = a4 / 2;
        v18 = &a1[a4 / 2];
        if (a3 == a2) {
          v17 = a3;
        }
        else {
          v61 = a3;
          v25 = a3 - a2;
          v17 = a2;
          v63 = a6;
          do {
            v26 = *v18;
            v27 = &v17[v25 >> 1];
            v29 = *v27;
            v28 = v27 + 1;
            v30 = fabsf(COERCE_FLOAT(
                COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(v29))));
            v31 = fabsf(COERCE_FLOAT(
                COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(v26))));
            if (v30 >= v31) {
              v25 >>= 1;
            }
            else {
              v25 += ~(v25 >> 1);
            }
            if (v30 < v31) {
              v17 = v28;
            }
          } while (v25 != 0);
          a6 = v63;
          a3 = v61;
          v24 = a4 / 2;
        }
        v16 = v17 - a2;
      }
      else {
        v16 = v9 / 2;
        v17 = &a2[v9 / 2];
        if (a1 == a2) {
          v18 = a2;
        }
        else {
          v60 = a3;
          v18 = a1;
          v19 = a2 - a1;
          v62 = a6;
          do {
            v20 = &v18[v19 >> 1];
            v22 = *v20;
            v21 = v20 + 1;
            v23 = fabsf(COERCE_FLOAT(
                COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(*v17))));
            if (v23 < fabsf(COERCE_FLOAT(COERCE_UNSIGNED_INT64(
                          ui_LayoutAccessor_GetTranslate(v22))))) {
              v19 >>= 1;
            }
            else {
              v18 = v21;
              v19 += ~(v19 >> 1);
            }
          } while (v19 != 0);
          a6 = v62;
          a3 = v60;
          v16 = v9 / 2;
        }
        v24 = v18 - a1;
      }
      a4 -= v24;
      v9 -= v16;
      v32 = (char*)a2;
      v33 = v24;
      v34 = GameRoutine_162a080((char*)v18, v32, (char*)v17);
      v35 = v33;
      v36 = v33 + v16;
      v37 = (__int64**)v34;
      if (v36 >= a4 + v9) {
        v38 = a3;
        v39 = v35;
        game_cmdbtl_anonymous_1629c80((__int64**)v34, v17, v38, a4, v9, a6, a7);
        v9 = v16;
        a4 = v39;
        a3 = v37;
        a2 = v18;
        if (v16 == 0) {
          return;
        }
      }
      else {
        game_cmdbtl_anonymous_1629c80(a1, v18, (__int64**)v34, v35, v16, a6,
                                      a7);
        a1 = v37;
        a2 = v17;
        if (v9 == 0) {
          return;
        }
      }
    }
    if (a4 <= v9) {
      if (a1 != a2) {
        v46 = -(__int64)a6;
        v47 = a6;
        v48 = a1;
        do {
          v49 = *v48++;
          v46 -= 8;
          *v47++ = v49;
        } while (v48 != a2);
        while (a2 != a3) {
          v50 = *a6;
          v51 = fabsf(COERCE_FLOAT(
              COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(*a2))));
          v52 = fabsf(COERCE_FLOAT(
              COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(v50))));
          if (v51 >= v52) {
            v53 = a6;
          }
          else {
            v53 = a2;
          }
          if (v51 >= v52) {
            v54 = 0;
          }
          else {
            v54 = 8;
          }
          v55 = *v53;
          a2 = (__int64**)((char*)a2 + v54);
          if (v51 >= v52) {
            v56 = 8;
          }
          else {
            v56 = 0;
          }
          a6 = (__int64**)((char*)a6 + v56);
          *a1++ = v55;
          if (v47 == a6) {
            return;
          }
        }
        memmove(a1, a6, -((__int64)a6 + v46));
      }
    }
    else if (a2 != a3) {
      v40 = 0;
      do {
        a6[v40] = a2[v40];
        ++v40;
      } while (&a2[v40] != a3);
      v41 = &a6[v40];
      while (a2 != a1) {
        v42 = *(a2 - 1);
        v43 = fabsf(COERCE_FLOAT(
            COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(*(v41 - 1)))));
        v44 = fabsf(COERCE_FLOAT(
            COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(v42))));
        if (v43 >= v44) {
          v45 = v41;
        }
        else {
          v45 = a2;
        }
        if (v43 >= v44) {
          --v41;
        }
        else {
          --a2;
        }
        *--a3 = *(v45 - 1);
        if (v41 == a6) {
          return;
        }
      }
      if (a6 != v41) {
        v58 = 0x1FFFFFFFFFFFFFFFLL;
        do {
          v59 = *--v41;
          a3[v58--] = v59;
        } while (v41 != a6);
      }
    }
  }
}

void game_cmdbtl_anonymous_162a200(__int64** a1, __int64** a2,
                                   unsigned __int64 a3, __int64** a4,
                                   __int64 a5)
{

#pragma clang fp contract(off)
  __int64** v6;
  __int64* v7;
  float v8;
  __int64* v9;
  __int64** v10;
  __int64 v11;
  __int64** v12;
  __int64** v13;
  __int64* v14;
  __int64* v15;
  float v16;
  __int64* v17;
  __int64 v18;
  __int64* v19;
  float v20;
  unsigned __int64 v21;
  __int64** v22;
  unsigned __int64 v23;
  __int64** v26;
  __int64** v27;
  __int64** v28;
  __int64* v29;
  float v30;
  float v31;
  __int64** v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64* v36;
  __int64* v37;

  if (a3 >= 2) {
    v6 = a1;
    if (a3 == 2) {
      v7 = *a1;
      v8 = fabsf(COERCE_FLOAT(
          COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(*(a2 - 1)))));
      if (v8 < fabsf(COERCE_FLOAT(COERCE_UNSIGNED_INT64(
                   ui_LayoutAccessor_GetTranslate(v7))))) {
        v9 = *v6;
        *v6 = *(a2 - 1);
        *(a2 - 1) = v9;
      }
    }
    else if ((__int64)a3 > 128) {
      v21 = a3 >> 1;
      v22 = a4;
      v23 = a3 - (a3 >> 1);
      if ((__int64)a3 <= a5) {
        game_cmdbtl_anonymous_162a4a0(a1, &a1[v21], a3 >> 1, a4);
        v26 = &v22[v21];
        game_cmdbtl_anonymous_162a4a0(&v6[v21], a2, v23, v26);
        v27 = &v22[a3];
        v28 = v26;
        while (v28 != v27) {
          v29 = *v22;
          v30 = fabsf(COERCE_FLOAT(
              COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(*v28))));
          v31 = fabsf(COERCE_FLOAT(
              COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(v29))));
          if (v30 >= v31) {
            v32 = v22;
          }
          else {
            v32 = v28;
          }
          if (v30 >= v31) {
            v33 = 8;
          }
          else {
            v33 = 0;
          }
          v34 = *v32;
          v22 = (__int64**)((char*)v22 + v33);
          if (v30 >= v31) {
            v35 = 0;
          }
          else {
            v35 = 8;
          }
          v28 = (__int64**)((char*)v28 + v35);
          *v6++ = v34;
          if (v22 == v26) {
            while (v28 != v27) {
              v37 = *v28++;
              *v6++ = v37;
            }
            return;
          }
        }
        while (v22 != v26) {
          v36 = *v22++;
          *v6++ = v36;
        }
      }
      else {
        game_cmdbtl_anonymous_162a200(a1, &a1[v21], a3 >> 1, a4, a5);
        game_cmdbtl_anonymous_162a200(&v6[v21], a2, v23, v22, a5);
        game_cmdbtl_anonymous_162a720(v6, &v6[v21], a2, v21, v23, v22, a5);
      }
    }
    else if (a1 != a2) {
      v10 = a1 + 1;
      if (a1 + 1 != a2) {
        v11 = 0;
        v12 = a1;
        do {
          v15 = *v12;
          v14 = v12[1];
          v12 = v10;
          v16 = fabsf(COERCE_FLOAT(
              COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(v14))));
          if (v16 < fabsf(COERCE_FLOAT(COERCE_UNSIGNED_INT64(
                        ui_LayoutAccessor_GetTranslate(v15))))) {
            v17 = *v12;
            v18 = v11;
            do {
              *(__int64**)((char*)v6 + v18 + 8) = *(__int64**)((char*)v6 + v18);
              if (v18 == 0) {
                v13 = v6;
                goto LABEL_11;
              }
              v19 = *(__int64**)((char*)v6 + v18 - 8);
              v20 = fabsf(COERCE_FLOAT(
                  COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(v17))));
              v18 -= 8;
            } while (v20 < fabsf(COERCE_FLOAT(COERCE_UNSIGNED_INT64(
                               ui_LayoutAccessor_GetTranslate(v19)))));
            v13 = (__int64**)((char*)v6 + v18 + 8);
          LABEL_11:
            *v13 = v17;
          }
          v10 = v12 + 1;
          v11 += 8;
        } while (v12 + 1 != a2);
      }
    }
  }
}

void game_cmdbtl_anonymous_162a4a0(__int64** a1, __int64** a2,
                                   unsigned __int64 a3, __int64** a4)
{

#pragma clang fp contract(off)
  __int64** v4;
  __int64** v6;
  __int64* v7;
  float v8;
  __int64* v9;
  __int64** v10;
  __int64 v11;
  __int64** v12;
  __int64** v13;
  __int64* v14;
  float v15;
  __int64** v16;
  __int64 v17;
  __int64* v18;
  float v19;
  unsigned __int64 v20;
  __int64** v22;
  unsigned __int64 v23;
  __int64** v24;
  __int64* v25;
  float v26;
  float v27;
  __int64** v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64* v32;
  __int64* v33;

  if (a3 != 0) {
    v4 = a4;
    v6 = a1;
    if (a3 == 2) {
      v7 = *a1;
      v8 = fabsf(COERCE_FLOAT(
          COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(*(a2 - 1)))));
      if (v8 >= fabsf(COERCE_FLOAT(COERCE_UNSIGNED_INT64(
                    ui_LayoutAccessor_GetTranslate(v7))))) {
        *v4 = *v6;
        v9 = *(a2 - 1);
      }
      else {
        *v4 = *(a2 - 1);
        v9 = *v6;
      }
      v4[1] = v9;
    }
    else if (a3 == 1) {
      *a4 = *a1;
    }
    else if ((__int64)a3 > 8) {
      v20 = a3 >> 1;
      v22 = &a1[a3 >> 1];
      v23 = 8 * (a3 >> 1);
      game_cmdbtl_anonymous_162a200(a1, v22, v20, a4, v20);
      game_cmdbtl_anonymous_162a200(v22, a2, a3 - v20, &v4[v20], a3 - v20);
      if (v23 != 0) {
        v24 = v22;
        while (v24 != a2) {
          v25 = *v6;
          v26 = fabsf(COERCE_FLOAT(
              COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(*v24))));
          v27 = fabsf(COERCE_FLOAT(
              COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(v25))));
          if (v26 >= v27) {
            v28 = v6;
          }
          else {
            v28 = v24;
          }
          if (v26 >= v27) {
            v29 = 0;
          }
          else {
            v29 = 8;
          }
          v30 = *v28;
          v24 = (__int64**)((char*)v24 + v29);
          if (v26 >= v27) {
            v31 = 8;
          }
          else {
            v31 = 0;
          }
          v6 = (__int64**)((char*)v6 + v31);
          *v4++ = v30;
          if (v6 == v22) {
            goto LABEL_41;
          }
        }
        while (v6 != v22) {
          v32 = *v6++;
          *v4++ = v32;
        }
      }
      else {
        v24 = v22;
      LABEL_41:
        while (v24 != a2) {
          v33 = *v24++;
          *v4++ = v33;
        }
      }
    }
    else if (a1 != a2) {
      v10 = a1 + 1;
      *a4 = *a1;
      if (a1 + 1 != a2) {
        v11 = 0;
        v12 = a4;
        v13 = a4;
        do {
          v14 = *v13++;
          v15 = fabsf(COERCE_FLOAT(
              COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(*v10))));
          if (v15 >= fabsf(COERCE_FLOAT(COERCE_UNSIGNED_INT64(
                         ui_LayoutAccessor_GetTranslate(v14))))) {
            *v13 = *v10;
          }
          else {
            v16 = v4;
            v12[1] = *v12;
            if (v12 != v4) {
              v17 = v11;
              while (1) {
                v16 = (__int64**)((char*)v4 + v17);
                v18 = *(__int64**)((char*)v4 + v17 - 8);
                v19 = fabsf(COERCE_FLOAT(COERCE_UNSIGNED_INT64(
                    ui_LayoutAccessor_GetTranslate(*v10))));
                if (v19 >= fabsf(COERCE_FLOAT(COERCE_UNSIGNED_INT64(
                               ui_LayoutAccessor_GetTranslate(v18))))) {
                  break;
                }
                v17 -= 8;
                *v16 = *(v16 - 1);
                if (v17 == 0) {
                  v16 = v4;
                  break;
                }
              }
            }
            *v16 = *v10;
          }
          ++v10;
          v11 += 8;
          v12 = v13;
        } while (v10 != a2);
      }
    }
  }
}

void game_cmdbtl_anonymous_162a720(__int64** a1, __int64** a2, __int64** a3,
                                   __int64 a4, __int64 a5, __int64** a6,
                                   __int64 a7)
{

#pragma clang fp contract(off)
  __int64 v9;
  __int64* v14;
  float v15;
  __int64 v16;
  __int64** v17;
  __int64** v18;
  unsigned __int64 v19;
  __int64** v20;
  __int64** v21;
  __int64* v22;
  float v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64* v26;
  __int64** v27;
  __int64** v28;
  __int64* v29;
  float v30;
  float v31;
  char* v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  __int64** v37;
  __int64** v38;
  __int64 v39;
  __int64 v40;
  __int64** v41;
  __int64* v42;
  float v43;
  float v44;
  __int64** v45;
  __int64 v46;
  __int64** v47;
  __int64** v48;
  __int64* v49;
  __int64* v50;
  float v51;
  float v52;
  __int64** v53;
  __int64 v54;
  __int64* v55;
  __int64 v56;
  __int64* v57;
  __int64 v58;
  __int64* v59;
  __int64** v60;
  __int64** v61;
  __int64** v62;
  __int64** v63;

  if (a5 != 0) {
    v9 = a5;
    while (a4 > a7 && v9 > a7) {
      if (a4 == 0) {
        return;
      }
      while (1) {
        v14 = *a1;
        v15 = fabsf(COERCE_FLOAT(
            COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(*a2))));
        if (v15 < fabsf(COERCE_FLOAT(COERCE_UNSIGNED_INT64(
                      ui_LayoutAccessor_GetTranslate(v14))))) {
          break;
        }
        ++a1;
        if (--a4 == 0) {
          return;
        }
      }
      if (a4 >= v9) {
        if (a4 == 1) {
          v57 = *a1;
          *a1 = *a2;
          *a2 = v57;
          return;
        }
        v24 = a4 / 2;
        v18 = &a1[a4 / 2];
        if (a3 == a2) {
          v17 = a3;
        }
        else {
          v61 = a3;
          v25 = a3 - a2;
          v17 = a2;
          v63 = a6;
          do {
            v26 = *v18;
            v27 = &v17[v25 >> 1];
            v29 = *v27;
            v28 = v27 + 1;
            v30 = fabsf(COERCE_FLOAT(
                COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(v29))));
            v31 = fabsf(COERCE_FLOAT(
                COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(v26))));
            if (v30 >= v31) {
              v25 >>= 1;
            }
            else {
              v25 += ~(v25 >> 1);
            }
            if (v30 < v31) {
              v17 = v28;
            }
          } while (v25 != 0);
          a6 = v63;
          a3 = v61;
          v24 = a4 / 2;
        }
        v16 = v17 - a2;
      }
      else {
        v16 = v9 / 2;
        v17 = &a2[v9 / 2];
        if (a1 == a2) {
          v18 = a2;
        }
        else {
          v60 = a3;
          v18 = a1;
          v19 = a2 - a1;
          v62 = a6;
          do {
            v20 = &v18[v19 >> 1];
            v22 = *v20;
            v21 = v20 + 1;
            v23 = fabsf(COERCE_FLOAT(
                COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(*v17))));
            if (v23 < fabsf(COERCE_FLOAT(COERCE_UNSIGNED_INT64(
                          ui_LayoutAccessor_GetTranslate(v22))))) {
              v19 >>= 1;
            }
            else {
              v18 = v21;
              v19 += ~(v19 >> 1);
            }
          } while (v19 != 0);
          a6 = v62;
          a3 = v60;
          v16 = v9 / 2;
        }
        v24 = v18 - a1;
      }
      a4 -= v24;
      v9 -= v16;
      v32 = (char*)a2;
      v33 = v24;
      v34 = GameRoutine_162a080((char*)v18, v32, (char*)v17);
      v35 = v33;
      v36 = v33 + v16;
      v37 = (__int64**)v34;
      if (v36 >= a4 + v9) {
        v38 = a3;
        v39 = v35;
        game_cmdbtl_anonymous_162a720((__int64**)v34, v17, v38, a4, v9, a6, a7);
        v9 = v16;
        a4 = v39;
        a3 = v37;
        a2 = v18;
        if (v16 == 0) {
          return;
        }
      }
      else {
        game_cmdbtl_anonymous_162a720(a1, v18, (__int64**)v34, v35, v16, a6,
                                      a7);
        a1 = v37;
        a2 = v17;
        if (v9 == 0) {
          return;
        }
      }
    }
    if (a4 <= v9) {
      if (a1 != a2) {
        v46 = -(__int64)a6;
        v47 = a6;
        v48 = a1;
        do {
          v49 = *v48++;
          v46 -= 8;
          *v47++ = v49;
        } while (v48 != a2);
        while (a2 != a3) {
          v50 = *a6;
          v51 = fabsf(COERCE_FLOAT(
              COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(*a2))));
          v52 = fabsf(COERCE_FLOAT(
              COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(v50))));
          if (v51 >= v52) {
            v53 = a6;
          }
          else {
            v53 = a2;
          }
          if (v51 >= v52) {
            v54 = 0;
          }
          else {
            v54 = 8;
          }
          v55 = *v53;
          a2 = (__int64**)((char*)a2 + v54);
          if (v51 >= v52) {
            v56 = 8;
          }
          else {
            v56 = 0;
          }
          a6 = (__int64**)((char*)a6 + v56);
          *a1++ = v55;
          if (v47 == a6) {
            return;
          }
        }
        memmove(a1, a6, -((__int64)a6 + v46));
      }
    }
    else if (a2 != a3) {
      v40 = 0;
      do {
        a6[v40] = a2[v40];
        ++v40;
      } while (&a2[v40] != a3);
      v41 = &a6[v40];
      while (a2 != a1) {
        v42 = *(a2 - 1);
        v43 = fabsf(COERCE_FLOAT(
            COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(*(v41 - 1)))));
        v44 = fabsf(COERCE_FLOAT(
            COERCE_UNSIGNED_INT64(ui_LayoutAccessor_GetTranslate(v42))));
        if (v43 >= v44) {
          v45 = v41;
        }
        else {
          v45 = a2;
        }
        if (v43 >= v44) {
          --v41;
        }
        else {
          --a2;
        }
        *--a3 = *(v45 - 1);
        if (v41 == a6) {
          return;
        }
      }
      if (a6 != v41) {
        v58 = 0x1FFFFFFFFFFFFFFFLL;
        do {
          v59 = *--v41;
          a3[v58--] = v59;
        } while (v41 != a6);
      }
    }
  }
}

#pragma GCC visibility pop
