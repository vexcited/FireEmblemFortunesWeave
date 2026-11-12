#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
extern _UNKNOWN GameData_1a9c738;
extern _UNKNOWN GameData_1ab7bc4;
extern _UNKNOWN GameData_1ad29ae;
extern __int64 (*GameData_1fa2518[])();
extern __int64 (*GameData_1ff0600[])();
extern __int64 GameData_212bf68;
extern __int64 GameData_212c608[2];
extern __int64 GameData_212cf60;
extern __int64* GameData_212d458[7];
extern __int64* GameData_212eba8[8];
extern char GameData_21c67a8;
extern __int64 GameData_21c67b0;
extern __int64 GameData_21c67b8;
extern __int64 GameData_21c67c0;
extern int GameData_21c67c8;
extern __int64 GameData_21c67d0;
extern int GameData_21c67d8;
extern __int64 GameData_21c67e0;
extern char GameData_21c67e8;
extern __int64 GameData_21c67f0;
extern __int64 GameData_21c67f8;
extern __int64 GameData_21c6800;
extern int GameData_21c6808;
extern __int64 GameData_21c6810;
extern int GameData_21c6818;
extern __int64 GameData_21c6820;
extern char GameData_21c6828;
extern __int64 GameData_21c6830;
extern __int64 GameData_21c6838;
extern __int64 GameData_21c6840;
extern int GameData_21c6848;
extern __int64 GameData_21c6850;
extern int GameData_21c6858;
extern __int64 GameData_21c6860;
extern _UNKNOWN GameData_21c6868;
extern __int64 GameData_21c6978;
extern __int64 GameData_21caab0;
extern __int64 GameData_21d9150;
extern __int64 GameData_21d9158;
extern _UNKNOWN GameData_21d9160;
extern __int64 GameData_21d9168;
extern __int64 GameData_21d9170;
extern _UNKNOWN GameData_21d9178;
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21ee240;
extern __int64 GameData_21ee260;
extern __int64 GameData_21ee268;
extern __int64 GameData_220b6f0;
extern __int64 GameData_220f820;
extern __int64 GameData_2265ef0;
extern __int64 GameData_2265ef8;
__int64 GameRoutine_1120d0(_QWORD);
__int64 GameRoutine_112290(_QWORD);
__int64 GameRoutine_149a40(_QWORD, _QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09fd0(_QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD);
float GameRoutine_1a0a550(_QWORD, float, float);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_610540(_QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65a7c0(void);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
__int64 GameRoutine_7a86e0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
__int64 GameRoutine_869280(_QWORD, _QWORD);
__int16* GameRoutine_8697c0(__int16* result, char, float);
struct PseudoSret GameRoutine_86bbc0(_QWORD);
__int64 GameRoutine_cac250(_QWORD);
__int64 GameRoutine_ceca80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_cf12a0(void);
__int64 GameRoutine_cf2500(_QWORD, _QWORD);
__int64 GameRoutine_d523c0(_QWORD);
__int64 GameRoutine_d783a0(_QWORD, float);
struct PseudoSret GameRoutine_d98c0(void);
__int64 GameRoutine_e2920(_QWORD, _QWORD);
float GameRoutine_efb160(__int64, __int64*);
float GameRoutine_efc240(void);
void __attribute__((noreturn)) GameRoutine_efd940(void);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
int __cxa_guard_acquire(__int64);
void __cxa_guard_release(__int64);
void GameHr_7bd3a0(__int64 a1);
void GameHr_7bd590(__int64 a1);
_QWORD* HubCharacterNatives_cac250(__int64);
_QWORD* HubCharacterNatives_ceca80(_QWORD* result, __int64, char);
__int64 GameRoutine_d783a0_alt1(__int64 result,
                                float) __asm__("GameRoutine_d783a0");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter;
float powf(float, float);
void GameHr_cf2500(_QWORD*, __int64);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_efd940_alt1() __asm__("GameRoutine_efd940");
void nn_mem_StandardAllocator_Free(__int64, __int64);
void GameHr_d46e40();
void GameHr_efaca0(__int64 a1, __int64* a2);

void GameHr_7bd3a0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  int v3;
  int v4;
  int v5;
  int v6;
  float v7;
  float v8;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d9160,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21d9160) != 0) {
    GameData_21d9158 = (__int64)&GameData_1a9c738;
    GameData_21d9150 = game_HashString((__int64)&GameData_1a9c738);
    __cxa_guard_release((__int64)&GameData_21d9160);
  }
  if (game_GameModeData_instance_ != 0) {
    v2 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&GameData_21d9150);
    if (v2 != 0) {
      v3 = *(_DWORD*)(v2 + 32);
      if (v3 != 0) {
        v4 = (int)(float)((float)v3 * 0x1.eb851e0000000p-5f);
        if (v4 >= 1) {
          if (game_ProcGameSkipView_instance_ == 0 ||
              *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
              (((v5 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) !=
                       0
                   ? (v6 = 2)
                   : (v6 = 3),
               (v6 & v5) != 0)) {
            v7 = *(float*)(a1 + 144);
            v8 = (float)(unsigned int)v4;
            *(_WORD*)(a1 + 136) = *(_WORD*)(a1 + 136) & 0xFF97 | 0x60;
            if (v7 >= (float)(unsigned int)v4) {
              v8 = v7;
            }
            *(float*)(a1 + 144) = v8;
          }
        }
      }
    }
  }
}

void GameHr_7bd590(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  int v3;
  int v4;
  int v5;
  int v6;
  float v7;
  float v8;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d9178,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21d9178) != 0) {
    GameData_21d9170 = (__int64)&GameData_1ab7bc4;
    GameData_21d9168 = game_HashString((__int64)&GameData_1ab7bc4);
    __cxa_guard_release((__int64)&GameData_21d9178);
  }
  if (game_GameModeData_instance_ != 0) {
    v2 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&GameData_21d9168);
    if (v2 != 0) {
      v3 = *(_DWORD*)(v2 + 32);
      if (v3 != 0) {
        v4 = (int)(float)((float)v3 * 0x1.eb851e0000000p-5f);
        if (v4 >= 1) {
          if (game_ProcGameSkipView_instance_ == 0 ||
              *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
              (((v5 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) !=
                       0
                   ? (v6 = 2)
                   : (v6 = 3),
               (v6 & v5) != 0)) {
            v7 = *(float*)(a1 + 144);
            v8 = (float)(unsigned int)v4;
            *(_WORD*)(a1 + 136) = *(_WORD*)(a1 + 136) & 0xFF97 | 0x60;
            if (v7 >= (float)(unsigned int)v4) {
              v8 = v7;
            }
            *(float*)(a1 + 144) = v8;
          }
        }
      }
    }
  }
}

__int64 GameHr_80fde0(__int64 a1, __int64 a2, float* a3)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  int v7;
  float v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  _QWORD v18[2];

  if (a1 != 0) {
    result = GameRoutine_610540(a1, a2);
    if (result == 0) {
      return result;
    }
    if (*(_QWORD*)(result + 48) == 0) {
      return 0;
    }
  }
  *(struct PseudoSret*)(v18) = GameRoutine_d98c0();
  v5 = GameRoutine_112290(v18);
  if (v5 != 0 && (GameRoutine_149a40(v5 - 5592, 14) & 1) == 0) {
    return 0;
  }
  GameRoutine_e2920(*(_QWORD*)(GameData_2265ef8 + 32), a3);
  if (GameData_21c6978 == 0) {
    return 1;
  }
  v6 = *(_QWORD*)(GameData_2265ef8 + 32);
  v7 = *(_DWORD*)(v6 + 376);
  if (v7 < 0) {
    LOBYTE(v7) = 0;
    v9 = false;
  }
  else {
    v8 = *(float*)(v6 + 384);
    if (v7 != 0) {
      if (v7 != 1) {
        if (*(_DWORD*)(GameData_2265ef8 + 2808) == 1) {
          return 2;
        }
        else {
          return 1;
        }
      }
      v9 = false;
      LOBYTE(v7) = v8 > 0.0f;
    }
    else {
      v9 = v8 > 0.0f;
    }
  }
  if (*(_DWORD*)(GameData_2265ef8 + 2808) != 1 && v9) {
    result = 1;
  }
  else {
    result = 2;
  }
  if ((*(_DWORD*)(GameData_2265ef8 + 2808) == 1 || !v9) && (v7 & 1) == 0) {
    if (GameData_21ec7c0 != 0) {
      v10 = *(_QWORD*)(GameData_21ec7c0 + 80);
      if (v10 != 0) {
        v11 = *(_QWORD*)(GameData_21ec7c0 + 72);
        v12 = *(_QWORD*)(GameData_21ec7c0 + 80);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                                  memory_order_relaxed);
        v13 = GameRoutine_1a0a0c0(v12);
        if (v13 != 0) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v14 = v13;
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
            GameRoutine_1a09c50(v14);
          }
          GameRoutine_1a09c50(v10);
          if (v11 != 0) {
            v15 = a3[2];
            v16 = a3[3];
            if (v16 < 20.0f && v15 < -130.0f) {
              return 1;
            }
            if (v16 < 80.0f && v16 > 50.0f && v15 > -15.0f && v15 < -3.0f) {
              v17 = a3[4];
              if (v17 > -208.0f && v17 < -68.0f) {
                return 2;
              }
            }
          }
        }
        else {
          GameRoutine_1a09c50(v10);
        }
      }
    }
    return 0;
  }
  return result;
}

__int64 GameHr_86a320(__int64 a1, __int16* a2)
{
  int v2;
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int16* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int16 v20;
  __int64 v21;
  __int16 v22;
  __int16 v23;
  __int64 v24;
  __int16 v26;
  __int16 v27;
  __int64 v28;
  __int16 v29;
  __int64 v30;
  __int64 v31;
  __int16* v32;
  float v33;
  __int64 v34;
  float v35;
  __int64 v36;
  __int64 v38;
  __int16 v39;
  __int64 v40;
  __int16 v41;
  __int16 v42;
  __int64 v43;
  void* v44;
  __int64 v45;

  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  if (v3 * v2 * v4 == 0) {
    return 0;
  }
  v5 = *a2;
  v6 = a2[3];
  v7 = a2[4];
  v8 = a2[5];
  v9 = a2[2];
  v10 = (__int16*)(GameData_21ee260 + 8);
  if (GameData_21ee260 == 0) {
    v10 = (__int16*)GameData_212cf60;
  }
  v11 = *v10;
  v12 = v10[1];
  v13 = v10[2];
  v14 = v10[3];
  v15 = v10[4];
  v16 = v10[5];
  if (GameData_21ee260 != 0) {
    v17 = v10[1];
    v45 = v10[2];
    v18 = v14;
    v40 = v15;
    v19 = v16;
    v38 = v7;
    GameRoutine_869280(GameData_21ee260, a2);
    v5 = v2;
    v7 = v38;
    v15 = v40;
    v9 = v4;
    v16 = v19;
    v14 = v18;
    v12 = v17;
    v13 = v45;
  }
  if ((v12 << 24) + (v11 << 32) + (v13 << 18) + (v14 << 12) + (v15 << 6) +
          v16 >=
      (unsigned __int64)(((__int64)v3 << 24) + (v5 << 32) + (v9 << 18) +
                         (v6 << 12) + (v7 << 6) + v8)) {
    return 0;
  }
  v20 = v2;
  v21 = GameData_21ee268;
  v22 = v7;
  v23 = v8;
  if (GameData_21ee268 != 0) {
    *(struct PseudoSret*)(&v43) = GameRoutine_86bbc0(GameData_21ee268);
    v24 = v43;
    *(_WORD*)(v21 + 164) = v20;
    *(_WORD*)(v21 + 166) = v3;
    *(_WORD*)(v21 + 168) = v4;
    *(_WORD*)(v21 + 170) = v6;
    *(_WORD*)(v21 + 172) = v22;
    *(_WORD*)(v21 + 174) = v8;
    *(_DWORD*)(v21 + 180) = 0;
    *(_QWORD*)(v21 + 152) = v24;
    *(_DWORD*)(v21 + 160) = (_DWORD)v44;
  }
  else {
    v26 = v11;
    LODWORD(v45) = (unsigned __int16)v12;
    v27 = v16;
    v42 = v13;
    v41 = v14;
    v39 = v15;
    v21 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 184, 16, 0);
    v28 = GameData_212c608[0];
    *(_QWORD*)(v21 + 96) = 0;
    *(_QWORD*)(v21 + 104) = 0;
    *(_QWORD*)(v21 + 112) = 0;
    *(_QWORD*)(v21 + 120) = 0;
    *(_QWORD*)(v21 + 128) = 0;
    *(_WORD*)(v21 + 136) = 0;
    *(_QWORD*)(v21 + 16) = 0;
    *(_QWORD*)(v21 + 24) = "NULL";
    *(_QWORD*)(v21 + 138) = 0;
    *(_QWORD*)(v21 + 144) = 0;
    *(_QWORD*)(v21 + 32) = 0;
    *(_QWORD*)(v21 + 40) = 0;
    *(_QWORD*)(v21 + 48) = 0;
    *(_QWORD*)(v21 + 56) = 0;
    *(_QWORD*)(v21 + 64) = 0;
    *(_QWORD*)(v21 + 72) = 0;
    *(_QWORD*)(v21 + 80) = 0;
    *(_QWORD*)(v21 + 88) = 0;
    *(_QWORD*)v21 = v28 + 16;
    *(_QWORD*)(v21 + 8) = 0;
    GameRoutine_65a7c0();
    *(_WORD*)(v21 + 152) = v26;
    GameData_21ee268 = v21;
    *(_WORD*)(v21 + 162) = v27;
    *(_WORD*)(v21 + 164) = v20;
    *(_WORD*)(v21 + 166) = v3;
    *(_WORD*)(v21 + 168) = v4;
    *(_WORD*)(v21 + 170) = v6;
    *(_WORD*)(v21 + 172) = v22;
    *(_QWORD*)v21 = GameData_1fa2518;
    v29 = v45;
    *(_WORD*)(v21 + 174) = v23;
    *(_QWORD*)(v21 + 176) = 0;
    *(_WORD*)(v21 + 154) = v29;
    *(_WORD*)(v21 + 156) = v42;
    *(_WORD*)(v21 + 158) = v41;
    *(_WORD*)(v21 + 160) = v39;
    v30 = GameData_21ee260;
    if (GameData_21ee260 != 0) {
      v31 = *(_QWORD*)(v21 + 152);
      *(_DWORD*)(GameData_21ee260 + 40) = *(_DWORD*)(v21 + 160);
      *(_QWORD*)(v30 + 32) = v31;
    }
    if (v30 != 0) {
      v32 = (__int16*)(v30 + 32);
    }
    else {
      v32 = (__int16*)GameData_212cf60;
    }
    if (v32[1] * *v32 * v32[2] != 0 ||
        (v30 != 0 ? (v32 = (__int16*)(v30 + 8))
                  : (v32 = (__int16*)GameData_212cf60),
         v30 == 0)) {
      v33 = 0.0f;
    }
    else {
      v33 = *(float*)(v30 + 44);
    }
    GameRoutine_8697c0(v32, 0, v33);
    v44 = &GameData_1ad29ae;
    v35 = 0.0f;
    v43 = GameRoutine_7a86e0(&GameData_1ad29ae, v34);
    if (GameData_21caab0 != 0) {
      v36 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), &v43);
      if (v36 != 0) {
        v35 = (float)(int)(float)((float)*(int*)(v36 + 32) * 0.06f);
      }
    }
    *(float*)(v21 + 176) = v35;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)GameRoutine_1a09fd0(&GameData_21c6868) != 0) {
      GameData_21c67a8 = 3;
      GameData_21c67d0 = 0;
      GameData_21c67d8 = 0;
      GameData_21c67e0 = 0;
      GameData_21c67b0 = 0;
      GameData_21c67b8 = 0;
      GameData_21c67c0 = 0;
      GameData_21c67c8 = 0;
      GameData_21c6808 = 0;
      GameData_21c6810 = 0;
      GameData_21c6818 = 0;
      GameData_21c6820 = 0;
      GameData_21c6828 = 0;
      GameData_21c6850 = 0;
      GameData_21c6858 = 0;
      GameData_21c6860 = 0;
      GameData_21c6848 = 0;
      GameData_21c6838 = 0;
      GameData_21c6840 = 0;
      GameData_21c6830 = 0;
      GameData_21c67e8 = 14;
      GameData_21c67f0 = 0;
      GameData_21c67f8 = 16;
      GameData_21c6800 = 1;
      GameRoutine_1a09fe0(&GameData_21c6868);
    }
    GameRoutine_657850(v21, &GameData_21c67a8, "ProcProgressAsync", 0, a1);
  }
  return v21;
}

float* GameHr_a1b580(__int64 a1, float a2)
{
  __int64 v2;
  float v5;
  __int64 v6;
  float v7;
  float* result;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (*(_BYTE*)(a1 + 40) != 1) {
    return nullptr;
  }
  v2 = *(_QWORD*)(a1 + 8);
  if (*(_DWORD*)(a1 + 16) == 0) {
    if (v2 != 0) {
      return nullptr;
    }
  LABEL_13:
    if ((GameRoutine_1120d0(a1 + 24) & 1) != 0) {
      v9 = GameRoutine_112290(a1 + 24);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 56LL))(v9) & 1) != 0) {
        v10 = GameRoutine_112290(a1 + 24);
        *(_QWORD*)(a1 + 8) =
            (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 72LL))(v10);
        v11 = GameRoutine_112290(a1 + 24);
        *(_DWORD*)(a1 + 16) =
            (*(unsigned int (**)(__int64))(*(_QWORD*)v11 + 80LL))(v11) >> 3;
        return nullptr;
      }
    }
    return nullptr;
  }
  if (v2 == 0) {
    goto LABEL_13;
  }
  v5 = (*(float (**)(__int64))(*(_QWORD*)(*(_QWORD*)a1 + 40LL) + 1088LL))(
      *(_QWORD*)a1 + 40LL);
  v6 = *(unsigned int*)(a1 + 16);
  v7 = (float)((float)(a2 * 1000.0f) / 16.667f) + v5;
  if (v7 < 0.0f) {
    v7 = 0.0f;
  }
  if ((int)v6 < 1) {
    return nullptr;
  }
  for (result = *(float**)(a1 + 8);
       v7 >= (float)((float)(*result * 1000.0f) / 16.667f); result += 2) {
    if (--v6 == 0) {
      return nullptr;
    }
  }
  return result;
}

void GameHr_d46e40()
{
  __int64 v0;
  __int64* v1;
  __int64 v2;
  __int64 v3;
  float v4;
  __int64 v5;
  float* v6;
  float v7;
  float v8;
  float v9;
  float v10;
  _BYTE* v11;

  v0 = GameData_220f820;
  if (GameData_220f820 != 0) {
    GameRoutine_d783a0_alt1(
        *(_QWORD*)(GameData_220f820 + 8),
        (float)(*(float*)(game_script_hub_g_frame_counter + 48) *
                0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f);
    v1 = *(__int64**)(v0 + 8);
    v2 = *v1;
    v3 = v1[1];
    if (*v1 == v3) {
      v11 = (_BYTE*)(v0 + 16);
    }
    else {
      v4 = 0x1.0000000000000p+0f;
      do {
        v6 = *(float**)v2;
        v5 = *(_QWORD*)(v2 + 8);
        if (v5 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v6 != nullptr) {
          v7 = v6[3];
          if (v7 <= 0x0.0p+0f) {
            v10 = *v6;
          }
          else {
            v8 = v6[1];
            v9 = v6[2] / v7;
            if (v8 > 0x0.0p+0f) {
              v9 = powf(v9, v8);
            }
            v10 = (float)(fminf(fmaxf(v9, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                          (float)(*v6 + -0x1.0000000000000p+0f)) +
                  0x1.0000000000000p+0f;
          }
          v4 = v4 * v10;
        }
        if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          std___1___shared_weak_count___release_weak(v5);
        }
        v2 += 16;
      } while (v2 != v3);
      v11 = (_BYTE*)(v0 + 16);
      if (v4 != 0x1.0000000000000p+0f) {
        *v11 = 1;
      LABEL_21:
        *(float*)(game_script_hub_g_frame_counter + 156) = v4;
        return;
      }
    }
    v4 = 0x1.0000000000000p+0f;
    if (*v11 != 1) {
      return;
    }
    goto LABEL_21;
  }
}

void GameHr_efaca0(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64** v8;
  __int64** v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  _QWORD* v16;
  atomic_ullong* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  float v26;
  __int64** v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64** v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;

  if (*(int*)(a1 + 16) >= 1) {
    v3 = a2[1];
    if (v3 != 0) {
      v5 = std___1___shared_weak_count_lock(v3);
      if (v5 != 0) {
        v6 = *a2;
        v7 = v5;
        if (*a2 != 0) {
          v8 = *(__int64***)(a1 + 40);
          v9 = *(__int64***)(a1 + 48);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                    memory_order_relaxed);
          if (v8 != v9) {
            while (1) {
              v10 = *v8;
              v11 = (*v8)[1];
              if (v11 != 0) {
                v12 = std___1___shared_weak_count_lock(v11);
                if (v12 != 0) {
                  v13 = *v10;
                  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v14 = v12;
                    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
                    std___1___shared_weak_count___release_weak(v14);
                  }
                  if (v13 == v6) {
                    break;
                  }
                }
              }
              v8 += 2;
              if (v8 == v9) {
                v8 = v9;
                break;
              }
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
            std___1___shared_weak_count___release_weak(v7);
          }
          if (v8 == *(__int64***)(a1 + 48)) {
            v15 = (__int64*)fw_memory_g_heap_manager_ptr;
            v16 = (_QWORD*)fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
            v16[1] = 0;
            v17 = (atomic_ullong*)(v16 + 1);
            v16[3] = 0;
            v18 = v16 + 3;
            v19 = (__int64)v16;
            v16[2] = 0;
            v16[4] = 0;
            v16[5] = 0;
            v16[6] = 0;
            *v16 = GameData_1ff0600;
            v20 = *a2;
            v21 = a2[1];
            if (v21 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                                        memory_order_relaxed);
              v16[3] = v20;
              v16[4] = v21;
              v22 = a2[1];
              if (v22 != 0) {
                v23 = std___1___shared_weak_count_lock(v22);
                if (v23 != 0) {
                  v24 = *a2;
                  v25 = v23;
                  if (v24 != 0) {
                    HubCharacterNatives_ceca80(*(_QWORD**)(v24 + 24), 1024, 1);
                    HubCharacterNatives_ceca80(*(_QWORD**)(v24 + 24), 4096, 1);
                    HubCharacterNatives_ceca80(*(_QWORD**)(v24 + 24), 0x4000,
                                               1);
                    GameHr_cf2500((_QWORD*)GameData_220b6f0,
                                  *(_QWORD*)(v24 + 24));
                    HubCharacterNatives_cac250(v24);
                  }
                  if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
                    std___1___shared_weak_count___release_weak(v25);
                  }
                }
              }
            }
            else {
              *v18 = v20;
            }
            if (*(_DWORD*)(v6 + 1112) == 0) {
              v26 = *(float*)(v6 + 404);
              *(_BYTE*)(v19 + 44) = 1;
              *(float*)(v19 + 40) = v26 * 0x1.1df46a0000000p-6f;
            }
            v27 = *(__int64***)(a1 + 48);
            v28 = *(_QWORD*)(a1 + 56);
            if ((unsigned __int64)v27 >= v28) {
              v30 = *(_QWORD*)(a1 + 40);
              v31 = (unsigned __int64)v27 - v30;
              v32 = ((__int64)v27 - v30) >> 4;
              v33 = v32 + 1;
              if ((unsigned __int64)(v32 + 1) >> 60 != 0) {
                GameRoutine_efd940_alt1();
              }
              v34 = v28 - v30;
              if (v34 >> 3 > v33) {
                v33 = v34 >> 3;
              }
              if ((unsigned __int64)v34 >= 0x7FFFFFFFFFFFFFF0LL) {
                v35 = 0xFFFFFFFFFFFFFFFLL;
              }
              else {
                v35 = v33;
              }
              if (v35 >> 60 != 0) {
                GameRoutine_60a210_alt1();
              }
              v36 = fw_memory_HeapManager_Allocate(*v15, 16 * v35, 16, 0);
              v37 = (__int64**)(v36 + v31);
              v38 = v36 + 16 * v35;
              *v37 = v18;
              v37[1] = (__int64*)v19;
              v39 = v36 + v31 - 16 * v32;
              v29 = v36 + v31 + 16;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                        memory_order_relaxed);
              memcpy(v39, v30, v31);
              *(_QWORD*)(a1 + 40) = v39;
              *(_QWORD*)(a1 + 48) = v29;
              *(_QWORD*)(a1 + 56) = v38;
              if (v30 != 0) {
                v40 = 128;
                if (*(_QWORD*)(*v15 + 200) == 0) {
                  v40 = 56;
                }
                nn_mem_StandardAllocator_Free(*v15 + v40, v30);
              }
            }
            else {
              *v27 = v18;
              v27[1] = (__int64*)v19;
              v29 = (__int64)(v27 + 2);
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                        memory_order_relaxed);
            }
            *(_QWORD*)(a1 + 48) = v29;
            if (atomic_fetch_add(v17, 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
              std___1___shared_weak_count___release_weak(v19);
            }
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak(v7);
        }
      }
    }
  }
}

__int64 GameHr_efbda0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64** v7;
  __int64** v8;
  __int64* v9;
  float v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  _BOOL8 v21;
  __int64 v22;
  __int64 v23;
  float v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 result;
  __int64 v37;
  __int64 v38[4];
  __int64 v39;

  v2 = *(_QWORD*)(*GameData_212d458[0] + 80);
  if (v2 != 0) {
    v3 = *(_QWORD*)(*GameData_212d458[0] + 72);
    v4 = *(_QWORD*)(*GameData_212d458[0] + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    v5 = GameRoutine_1a0a0c0(v4);
    if (v5 != 0) {
      v6 = v3;
    }
    else {
      v6 = 0;
    }
  }
  else {
    v5 = 0;
    v6 = 0;
  }
  v7 = (__int64**)a1[5];
  v8 = (__int64**)a1[6];
  if (v7 != v8) {
    v39 = v5;
    v9 = GameData_212eba8[0];
    while (1) {
      v11 = *v7;
      v12 = (*v7)[1];
      if (v12 != 0) {
        v13 = GameRoutine_1a0a0c0(v12);
        if (v13 != 0) {
          break;
        }
      }
    LABEL_13:
      v7 += 2;
      if (v7 == v8) {
        v7 = (__int64**)a1[5];
        v8 = (__int64**)a1[6];
        v5 = v39;
        goto LABEL_57;
      }
    }
    v14 = *v11;
    v15 = v13;
    if (v14 == 0) {
    LABEL_11:
      if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        GameRoutine_1a09c50(v15);
      }
      goto LABEL_13;
    }
    if (((*v7)[3] & 2) == 0) {
    LABEL_25:
      if (((*v7)[3] & 4) != 0) {
        v17 = *(_QWORD*)(*(_QWORD*)(v14 + 24) + 24LL);
        if (*(_BYTE*)(v17 + 336) == 1) {
          *(_BYTE*)(v17 + 336) = 0;
        }
      }
      GameRoutine_ceca80(*(_QWORD*)(v14 + 24), 1024, 0);
      GameRoutine_ceca80(*(_QWORD*)(v14 + 24), 4096, 0);
      GameRoutine_ceca80(*(_QWORD*)(v14 + 24), 0x4000, 0);
      v18 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v14 + 24) + 8LL) + 232LL);
      if (v18 != 0) {
        *(_DWORD*)(*(_QWORD*)(v18 + 88) + 340LL) = 0;
      }
      v19 = *(_DWORD*)(v14 + 1208) - 1;
      *(_DWORD*)(v14 + 1208) = v19;
      if (v19 == 0) {
        (*(void (**)(__int64))(*(_QWORD*)(v14 + 1200) + 8LL))(v14 + 1200);
        v19 = *(_DWORD*)(v14 + 1208);
      }
      v21 = v19 > 0 || *(_DWORD*)(v14 + 1216) == 1;
      GameRoutine_ceca80(*(_QWORD*)(v14 + 24), 256, v21);
      v22 = *(_QWORD*)(*v9 + 232);
      v23 = *(_QWORD*)(*v9 + 240);
      if (v22 != v23) {
        while (*(_QWORD*)v22 != *(_QWORD*)(v14 + 24)) {
          v22 += 16;
          if (v22 == v23) {
            goto LABEL_11;
          }
        }
      }
      if (v22 != v23) {
        if (*(_BYTE*)(v22 + 12) == 1) {
          v10 = *(float*)(v22 + 8);
          if (v10 < 0.2f) {
            v10 = 0.2f;
          }
        }
        else {
          v10 = 0.2f;
        }
        *(float*)(v22 + 8) = v10;
        *(_BYTE*)(v22 + 12) = 1;
        GameRoutine_cf12a0();
      }
      goto LABEL_11;
    }
    if (v14 == v6 || *((_BYTE*)*v7 + 20) != 1 || *(_DWORD*)(v14 + 1112) != 0 ||
        (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v14 + 24) + 24LL) + 176LL) & 1) != 0) {
      v16 = *(_QWORD*)(*(_QWORD*)(v14 + 24) + 24LL);
      if (*(_BYTE*)(v16 + 96) == 1) {
        *(_BYTE*)(v16 + 96) = 0;
      }
      *(_BYTE*)(v16 + 25) = 0;
      goto LABEL_25;
    }
    v38[2] = v14;
    v38[3] = v13;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
    v24 = GameRoutine_efc240();
    GameRoutine_1a09c50(v15);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                              memory_order_relaxed);
    v25 = GameRoutine_1a0a0c0(v15);
    if (v25 != 0) {
      v26 = *(_QWORD*)(v14 + 24);
      if (*(_BYTE*)(v26 + 272) == 1) {
        v27 = *(_QWORD*)(v26 + 264);
        v28 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v26 + 8) + 344LL) + 352LL);
        if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v37 = v25;
          (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
          GameRoutine_1a09c50(v37);
        }
        v29 = GameRoutine_1a09c50(v15);
        if (v28 != v27) {
          goto LABEL_54;
        }
        v38[0] = v14;
        v38[1] = v15;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                                  memory_order_relaxed);
        v24 = GameRoutine_efb160(v29, v38);
      }
      else if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
        v30 = v25;
        (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
        GameRoutine_1a09c50(v30);
      }
    }
    v29 = GameRoutine_1a09c50(v15);
  LABEL_54:
    v31 = *v7;
    if ((*((_BYTE*)*v7 + 20) & 1) == 0) {
      GameRoutine_8123d0(v29);
    }
    v32 = *(_QWORD*)(*(_QWORD*)(v14 + 24) + 24LL);
    *(_BYTE*)(v32 + 25) = 0;
    *(_QWORD*)(v32 + 32) = 0;
    *(_QWORD*)(v32 + 37) = 0;
    *(_BYTE*)(v32 + 48) = 0;
    *(_BYTE*)(v32 + 64) = 0;
    *(_QWORD*)(v32 + 80) = 0;
    *(_BYTE*)(v32 + 96) = 1;
    *(float*)(v32 + 32) = v24;
    v33 = *((_DWORD*)v31 + 4);
    v34 = *(_QWORD*)(v32 + 16);
    *(_BYTE*)(v32 + 84) = 1;
    *(_DWORD*)(v32 + 80) = v33;
    GameRoutine_d523c0(*(_QWORD*)(v34 + 488));
    *(_BYTE*)(v32 + 25) = 1;
    v9 = &GameData_220b6f0;
    goto LABEL_25;
  }
LABEL_57:
  while (v8 != v7) {
    v35 = (__int64)*(v8 - 1);
    if (v35 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
      GameRoutine_1a09c50(v35);
    }
    v8 -= 2;
  }
  result = a1[4];
  a1[6] = v7;
  a1[3] = 0;
  a1[4] = 0;
  if (result != 0) {
    result = GameRoutine_1a09c50(result);
  }
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = GameRoutine_1a09c50(v5);
    if (v2 != 0) {
      return GameRoutine_1a09c50(v2);
    }
  }
  else if (v2 != 0) {
    return GameRoutine_1a09c50(v2);
  }
  return result;
}

#pragma GCC visibility pop
