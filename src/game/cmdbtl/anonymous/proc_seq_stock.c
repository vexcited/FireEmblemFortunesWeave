#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CmdBtlUnit_e7ada0(_QWORD);
__int64 CmdBtlWindow_17c8500(void);
__int64 CmdBtlWindow_17c8620(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CmdbtlPartyNatives_e73d00(_QWORD);
__int64 GameRoutine_17c1f00(void);
__int64 GameRoutine_17c2620(void);
__int64 GameRoutine_17c89c0(_QWORD);
__int64 GameRoutine_e734e0(_QWORD);
__int64 GameRoutine_e73e20(_QWORD);
__int64 GameRoutine_e7c6f0(_QWORD, _QWORD, double);
__int64 GameRoutine_eacc20(__int64, unsigned int, unsigned int, unsigned int);
__int64 Manager_e9cd90(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_cmdbtl_Manager_UnitRelocationImpl(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _DWORD GameData_1a83140[4];
extern _UNKNOWN GameData_1ad7123;
extern _UNKNOWN GameData_1af5ec9;
extern __int64 GameData_212f520[4];
extern __int64 GameData_212f538;
extern __int64 GameData_212f5c0[3];
extern __int64 GameData_21d3f90;
extern __int64 GameData_22190b8;
extern __int64 GameData_22197d8;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_frame_clock;
extern __int64* GameData_212dec0[4];
extern __int64* GameData_212ea58;
extern __int64* game_g_frame_clock_ptr[3];
__int64 ProcSeqStock_f4a980(__int64 a1);
float ProcSeqStock_f4ad30(__int64 a1);
float ProcSeqStock_f4add0(__int64 a1);
__int64 ProcSeqStock_f4aee0(__int64 a1);
__int64
game_cmdbtl_anonymous_ProcSeqStock_StockCamera_closure_Invoke(__int64 a1);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1ff5260[])();
extern __int64 fw_memory_g_heap_manager_ptr;
float CmdBtlUnit_e7d750(_QWORD*);
void GameRoutine_e81140(__int64, __int64, __int64, __int64);
void GameRoutine_e9f200(__int64);
void snd_Fade_Fade_10c830(__int64, float);
void game_cmdbtl_anonymous_ProcSeqStock_StockCamera(__int64 a1);

void game_cmdbtl_anonymous_ProcSeqStock_StockCamera(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  char* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  struct {
    _QWORD v23[4];
    _QWORD* v24;
  } v23_;
  struct {
    _QWORD* v25;
    __int64 v26;
    char v27;
    char gap81_[15];
    char v28;
    char gap97_[15];
    __int64 v29;
    float v30;
    char gap124_[4];
    float32x4_t v31;
    char v32;
    char gap145_[3];
    int v33;
    char v34;
  } v25_;

  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w"));
  v2 = fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w"));
  strcpy(v3, "SE_SYS_CmdBtl_HPStockErase_Blur");
  snd_Fade_Fade_10c830((__int64)&v25_.v25, 0x0.0p+0f),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w"));
  snd_play_ff2d0((__int64)v3, (__int64)v3, (__int64)&v25_.v25, 0, 0x10001u, 0,
                 0x0.0p+0f, 0x1.0000000000000p+0f),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w"));
  snd_Fade_Destroy_Fade(&v25_.v25),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w"));
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v4 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w"));
  v25_.v28 = 0;
  v25_.v27 = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v22 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v22;
    __cxa_guard_release(&GameData_21a6130),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v25_.v32 = 0;
  v25_.v31 = COERCE_AS(float32x4_t, GameData_21a6120);
  v25_.v33 = 1109393408;
  v25_.v34 = 1;
  v5 = GameData_212ea58;
  v6 = *GameData_212ea58 + ((__int64)*(int*)(a1 + 152) << 7);
  v7 = *(_QWORD**)(v6 + 752);
  v8 = *(_QWORD*)(v6 + 760);
  if (v8 == 0) {
    v25_.v25 = *(_QWORD**)(v6 + 752);
    v25_.v26 = 0;
    v25_.v29 = 0x3F00000000000000LL;
    v25_.v30 = 0x1.0000000000000p-1f;
    goto LABEL_26;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                            memory_order_relaxed);
  v25_.v25 = v7;
  v25_.v26 = v8;
  v25_.v29 = 0x3F00000000000000LL;
  v25_.v30 = 0x1.0000000000000p-1f;
  v9 = std___1___shared_weak_count_lock(v8),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v9 == 0) {
    goto LABEL_26;
  }
  v10 = v9;
  if (v7 != nullptr) {
    v12 = v7[27];
    v11 = v7[28];
    if (v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v12 != 0) {
      GameRoutine_e9f200(v12),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w"));
      v14 = fmaxf(v13, 0x1.3333340000000p-1f);
      if ((*(_BYTE*)(v12 + 92) & (*(float*)(v12 + 88) < v14)) != 0) {
        v14 = *(float*)(v12 + 88);
      }
      v15 = v14 + -0x1.3333340000000p-1f;
      if (v11 == 0) {
        goto LABEL_18;
      }
    }
    else {
      v15 = -0x1.9999a00000000p-4f;
      if (v11 == 0) {
      LABEL_18:
        if (v15 >= 0x0.0p+0f) {
          v16 = v15;
        }
        else {
          v16 = 0x0.0p+0f;
        }
        v17 = v16 + 0x1.0000000000000p-1f;
        v18 = CmdBtlUnit_e7d750(v7) + -0x1.0000000000000p+1f,
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v18 < 0x0.0p+0f) {
          v18 = 0x0.0p+0f;
        }
        v25_.v30 = v17 + v18;
        LODWORD(v19) = 0;
        *((float*)&v19 + 1) = v18 * 0x1.0000000000000p-1f;
        v25_.v31 = vsubq_f32(v25_.v31, COERCE_AS(float32x4_t, v19));
        goto LABEL_24;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w"));
      std___1___shared_weak_count___release_weak_alt1(v11),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    goto LABEL_18;
  }
LABEL_24:
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w"));
    std___1___shared_weak_count___release_weak_alt1(v10),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w"));
  }
LABEL_26:
  v20 = *v5;
  v23_.v23[0] = GameData_1ff5260;
  v23_.v23[1] = a1;
  v23_.v24 = v23_.v23;
  GameRoutine_e81140(v20 + 16, (__int64)&v25_.v25, a1, (__int64)v23_.v23),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v23_.v24 == v23_.v23) {
    v21 = 32;
  }
  else {
    if (v23_.v24 == nullptr) {
      goto LABEL_31;
    }
    v21 = 40;
  }
  (*(void (**)(__int64))(*v23_.v24 + v21))((__int64)v23_.v24),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w"));
LABEL_31:
  if (v25_.v26 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v25_.v26),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w"));
  }
}

__int64 ProcSeqStock_f4a980(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  int v3;
  int v4;
  __int64 v5;
  int v6;
  int v7;
  __int64 result;
  int v9;
  int v10;
  __int64* i;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  void* v24;

  v1 = GameData_212ea58;
  v2 = *GameData_212ea58 + ((__int64)*(int*)(a1 + 152) << 7);
  v3 = *(_DWORD*)(a1 + 160);
  v4 = *(_DWORD*)(v2 + 700);
  v5 = v2 + 672;
  if (v4 >= v3) {
    v4 = *(_DWORD*)(a1 + 160);
  }
  if (v3 >= 0) {
    v6 = v4;
  }
  else {
    v6 = 0;
  }
  *(_DWORD*)(v2 + 696) = v6;
  GameRoutine_e73e20(v2 + 672);
  if (*(_DWORD*)(v2 + 692) + *(_DWORD*)(v2 + 688) <= 1) {
    v7 = 1;
  }
  else {
    v7 = *(_DWORD*)(v2 + 692) + *(_DWORD*)(v2 + 688);
  }
  result = CmdbtlPartyNatives_e73d00(v2 + 672);
  v9 = *(_DWORD*)(v2 + 692) + *(_DWORD*)(v2 + 688);
  v10 = *(_DWORD*)(v2 + 684);
  if (v9 <= 1) {
    v9 = 1;
  }
  if (v9 >= v7) {
    v9 = v7;
  }
  *(_DWORD*)(v2 + 684) = v9;
  if (v9 != v10) {
    result = GameRoutine_e734e0(v2 + 672);
  }
  v12 = *(__int64**)(v2 + 712);
  for (i = *(__int64**)(v5 + 48); v12 != i; v12 += 2) {
    v13 = *v12;
    if ((*(_BYTE*)(*v12 + 172) & 1) == 0) {
      *(_BYTE*)(v13 + 172) = 1;
    }
    *(_DWORD*)(v13 + 136) = 2017201876;
    *(_BYTE*)(v13 + 140) = 1;
    *(_BYTE*)(v13 + 148) = 1;
    *(_DWORD*)(v13 + 144) = 1056964608;
    *(_BYTE*)(v13 + 152) = 0;
    *(_BYTE*)(v13 + 156) = 0;
    *(_BYTE*)(v13 + 160) = 0;
    *(_BYTE*)(v13 + 164) = 0;
    *(_BYTE*)(v13 + 168) = 0;
    result = CmdBtlUnit_e7ada0(v13);
  }
  v14 = *(_QWORD*)GameData_212f538;
  v15 = GameData_212f5c0[0];
  if (*(_QWORD*)GameData_212f538 != 0 && *(_QWORD*)GameData_212f5c0[0] != 0) {
    v17 = *(_QWORD*)(v14 + 48);
    v18 = *(_QWORD*)(v14 + 56);
    v19 = ((v18 - v17) << 7) - 1;
    if (v18 == v17) {
      v19 = 0;
    }
    v20 = *(_QWORD*)(v14 + 80) + *(_QWORD*)(v14 + 72);
    if (v19 == v20) {
      GameRoutine_17c89c0(v14 + 40);
      v17 = *(_QWORD*)(v14 + 48);
      v20 = *(_QWORD*)(v14 + 80) + *(_QWORD*)(v14 + 72);
    }
    *(_DWORD*)(*(_QWORD*)(v17 + 8 * (v20 >> 10)) + 4 * (v20 & 0x3FF)) =
        *(_DWORD*)(v14 + 88);
    ++*(_QWORD*)(v14 + 80);
    v23 = 0x100000002LL;
    result = CmdBtlWindow_17c8620(v14, &v23, 0, 0);
    *(_DWORD*)(v14 + 88) = 3;
    if (*(_QWORD*)v15 != 0) {
      v21 = *v1;
      if (*v1 != 0) {
        Manager_e9cd90(*v1);
        if (*(_QWORD*)v15 != 0) {
          *(_BYTE*)(*(_QWORD*)v15 + 348LL) = 1;
        }
        if (*(_DWORD*)(v21 + 680) == 0) {
          v22 = GameData_212dec0[0];
          if ((*(_BYTE*)(*GameData_212dec0[0] + 12) & 1) != 0) {
            goto LABEL_41;
          }
          v24 = &GameData_1af5ec9;
          v23 = game_HashString(&GameData_1af5ec9);
          if (game_GameModeData_instance_ != 0) {
            game_GameVariableTable_Find(
                *(_QWORD*)(game_GameModeData_instance_ + 48), &v23);
          }
          if (*(_DWORD*)(v21 + 680) == 0) {
          LABEL_41:
            if ((*(_BYTE*)(*v22 + 12) & 1) != 0) {
              goto LABEL_47;
            }
            v24 = &GameData_1af5ec9;
            v23 = game_HashString(&GameData_1af5ec9);
            if (game_GameModeData_instance_ != 0) {
              game_GameVariableTable_Find(
                  *(_QWORD*)(game_GameModeData_instance_ + 48), &v23);
            }
            if (*(_DWORD*)(v21 + 680) == 0) {
            LABEL_47:
              if ((*(_BYTE*)(*v22 + 12) & 1) == 0) {
                v24 = &GameData_1ad7123;
                v23 = game_HashString(&GameData_1ad7123);
                if (game_GameModeData_instance_ != 0 &&
                    game_GameVariableTable_Find(
                        *(_QWORD*)(game_GameModeData_instance_ + 48), &v23) !=
                        0) {
                  result = *(_QWORD*)v15;
                  if (*(_QWORD*)v15 == 0) {
                    return result;
                  }
                  return GameRoutine_17c2620();
                }
              }
            }
          }
        }
        result = *(_QWORD*)v15;
        if (*(_QWORD*)v15 != 0) {
          return GameRoutine_17c2620();
        }
      }
    }
  }
  return result;
}

float ProcSeqStock_f4ad30(__int64 a1)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;
  float v6;
  float v7;
  float result;

  if (GameData_22197d8 != 0 && *(int*)(GameData_22197d8 + 256) >= 1) {
    v1 = *(unsigned __int8**)(a1 + 16);
    if (v1 != nullptr) {
      v2 = *v1;
      v3 = v2 > 0x10;
      v4 = (1 << v2) & 0x1CE00;
      if (!v3 && v4 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
  }
  v6 = 60.0f / (float)*(int*)(game_g_frame_clock + 476);
  if (v6 <= 0.0f) {
    v7 = 0.0167f;
  }
  else {
    v7 = v6 * 0.0167f;
  }
  result = *(float*)(a1 + 164) + v7;
  *(float*)(a1 + 164) = result;
  return result;
}

float ProcSeqStock_f4add0(__int64 a1)
{
  __int64 v2;
  unsigned __int8* v4;
  unsigned int v5;
  bool v6;
  int v7;
  float v9;
  float v10;
  float result;

  v2 = GameData_212f5c0[0];
  if (*GameData_212ea58 != 0 && *(_QWORD*)GameData_212f5c0[0] != 0) {
    if ((GameRoutine_17c1f00(), *(_QWORD*)v2 != 0) &&
            (*(_BYTE*)(*(_QWORD*)v2 + 296LL) & 1 |
             (*(_DWORD*)(*(_QWORD*)v2 + 360LL) == 5)) != 0 &&
            *(float*)(a1 + 164) >= 1.5f ||
        *(_BYTE*)(*(_QWORD*)GameData_212f520[0] + 11LL) == 1) {
      v4 = *(unsigned __int8**)(a1 + 16);
      if (v4 != nullptr) {
        v5 = *v4;
        v6 = v5 > 0x10;
        v7 = (1 << v5) & 0x1CE00;
        if (!v6 && v7 != 0) {
          *(_WORD*)(a1 + 136) |= 0x80u;
        }
      }
    }
  }
  v9 = 60.0f / (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
  if (v9 <= 0.0f) {
    v10 = 0.0167f;
  }
  else {
    v10 = v9 * 0.0167f;
  }
  result = *(float*)(a1 + 164) + v10;
  *(float*)(a1 + 164) = result;
  return result;
}

__int64 ProcSeqStock_f4aee0(__int64 a1)
{
  unsigned __int64 v1;
  unsigned int v2;
  __int64 result;

  if (GameData_21d3f90 != 0) {
    v1 = *(unsigned __int8*)(a1 + 156);
    if (v1 > 3) {
      v2 = 3;
    }
    else {
      v2 = GameData_1a83140[v1];
    }
    GameRoutine_eacc20(a1, 2u, v2, *(_DWORD*)(a1 + 160));
  }
  result = GameData_22190b8;
  if (GameData_22190b8 != 0) {
    result = CmdBtlWindow_17c8500();
  }
  if (GameData_22197d8 != 0) {
    *(_BYTE*)(GameData_22197d8 + 348) = 0;
  }
  return result;
}

__int64

game_cmdbtl_anonymous_ProcSeqStock_StockCamera_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64* v2;
  __int64 result;
  __int64 v4;
  __int64* v5;
  __int64* i;
  __int64 v7;
  __int16 v8;
  __int64 v9;
  __int64 v10;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = GameData_212ea58;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  game_cmdbtl_Manager_UnitRelocationImpl(*GameData_212ea58, &v8);
  result = v10;
  if (v10 != 0) {
    result = std___1___shared_weak_count___release_weak(v10);
  }
  v4 = *v2 + ((__int64)*(int*)(v1 + 152) << 7);
  v5 = *(__int64**)(v4 + 712);
  for (i = *(__int64**)(v4 + 720); v5 != i;
       result = GameRoutine_e7c6f0(v7, 0, 0.0)) {
    v7 = *v5;
    v5 += 2;
  }
  return result;
}

#pragma GCC visibility pop
