#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void game_hub_e1c160(PSEUDO_X8, __int64, char*,
                                                __int64*);
__int64 GameHr_10c0c60(__int64);
__int64 GameHr_c08540(__int64, __int64, __int64, unsigned int, float);
__int64 GameHr_d70540(__int64, const char*);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_e18130(__int64 result);
__int64 HubCharacterNatives_cee990(__int64, unsigned __int32, int, __int64,
                                   __int64, __int64, float);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, __int64, __int64,
                                               __int64, unsigned int,
                                               unsigned int, int, float, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern _UNKNOWN* GameData_212d308;
extern _UNKNOWN* GameData_212df10;
extern __int64* GameData_212ebc0[5];
extern __int64 GameData_212dbc0[8];
extern __int64 GameData_212dc48[5];
extern __int64 GameData_21c9608;
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21f3cd8;
extern __int64 GameData_220d630;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int* GameData_212d300;
extern int* GameData_212df08;
float atan2f(float, float);
int __cxa_guard_acquire(__int64);
long double GameRoutine_a7f140(__int64, __int64, const char*);
void CharacterRotate_d519c0(int8x16_t*);
void GameHr_da5c00(__int64*);
void __attribute__((noreturn)) GameRoutine_8123d0();
void __cxa_guard_release(__int64);
void game_d523c0(__int64);
void game_hub_d799f0(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
void game_hub_anonymous_da6360(__int64 a1);
void game_hub_anonymous_da7680();
void game_hub_anonymous_f8dc00(__int64 a1);

void game_hub_anonymous_da6360(__int64 a1)
{
  _QWORD handle[2];
  int v1;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  float32x4_t v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  _QWORD* v27;
  __int64 v28;
  int8x16_t* v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 i;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v39;
  __int64 v40;
  float32x4_t v41;
  float v42;
  float v43;
  float v44;
  __int64 v45;
  int v46;
  __int64 v47;
  __int64 v48;
  _BYTE v49[24];
  __int64 v50[3];
  struct {
    _QWORD v51[26];
    char gap272_[8];
    __int64 v52;
  } v51_;

  if ((*(_BYTE*)(GameData_220d630 + 64) & 1) == 0) {
    GameRoutine_8123d0();
  }
  v1 = *(_DWORD*)(GameData_220d630 + 16);
  v3 = *GameData_212ebc0[0];
  if ((*(_BYTE*)(*GameData_212ebc0[0] + 161) & 1) == 0) {
    *(_BYTE*)(v3 + 161) = 1;
    v4 = *(_DWORD*)(v3 + 176);
    *(_DWORD*)(v3 + 176) = v4 + 1;
    if (v4 == 0) {
      (**(void (***)(__int64))(v3 + 168))(v3 + 168);
    }
    game_hub_d799f0(v3);
  }
  if ((*(_BYTE*)(v3 + 162) & 1) == 0) {
    *(_BYTE*)(v3 + 162) = 1;
    v5 = *(_DWORD*)(v3 + 192);
    *(_DWORD*)(v3 + 192) = v5 + 1;
    if (v5 == 0) {
      (**(void (***)(__int64))(v3 + 184))(v3 + 184);
    }
    game_hub_d799f0(v3);
  }
  v51_.v52 = a1;
  GameHr_da5c00(v50);
  v6 = v50[0];
  v7 = v50[1];
  if (v50[0] == v50[1]) {
    if (v1 != 1) {
      goto LABEL_75;
    }
  LABEL_35:
    *(_WORD*)(v51_.v52 + 193) = 257;
    v17 = fw_memory_g_heap_manager_ptr;
    v18 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    strcpy(v18, "SE_SYS_CmdBtl_PreEmptive_In");
    snd_Fade_Fade_10c830((__int64)v51_.v51, 0x0.0p+0f);
    snd_play_ff2d0((void*)(handle), (__int64)v18, (__int64)v18,
                   (__int64)v51_.v51, 0, 0x10001u, 0, 0x0.0p+0f,
                   0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v51_.v51);
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v19, (__int64)v18);
    if (v6 != 0) {
      goto LABEL_81;
    }
    return;
  }
  v8 = v50[0];
  do {
    v9 = *(_QWORD*)(*(_QWORD*)v8 + 56LL);
    if (*(_DWORD*)(*(_QWORD*)v8 + 1112LL) == 1 && v9 != 0) {
      if (*(_BYTE*)(v9 + 76) != 1 || *(_DWORD*)(v9 + 72) != 9) {
        *(_DWORD*)(v9 + 80) = 9;
        *(_BYTE*)(v9 + 84) = 1;
      }
      if ((*(_BYTE*)(v9 + 160) & 1) == 0 && (*(_BYTE*)(v9 + 161) & 1) != 0) {
        GameRoutine_e18130(v9 + 64);
      }
    }
    v8 += 8;
  } while (v8 != v7);
  if (v1 == 1) {
    goto LABEL_35;
  }
  HubCharacterNatives_cee990(*(_QWORD*)(*(_QWORD*)v6 + 24LL), 0xDDBB78CE, 2,
                             0x100000000LL, 0x100000000LL, 0x140555555LL,
                             0x1.0000000000000p+0f);
  v12 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v12 == 0) {
    goto LABEL_56;
  }
  v13 = *(_QWORD*)(GameData_21ec7c0 + 72);
  v14 = *(_QWORD*)(GameData_21ec7c0 + 80);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                            memory_order_relaxed);
  v15 = std___1___shared_weak_count_lock(v14);
  std___1___shared_weak_count___release_weak(v12);
  if (v15 == 0 || v13 == 0) {
    if (v15 == 0) {
      goto LABEL_56;
    }
    goto LABEL_54;
  }
  v20 = *(_QWORD*)v6;
  v21 = vsubq_f32(
      *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v13 + 24) + 16LL) + 560LL),
      *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v6 + 24LL) + 16LL) +
                      560LL));
  v22 = LANES128(v21).n128_f32[2];
  v23 = vmuls_lane_f32(LANES128(v21).n128_f32[2], v21, 2) +
        (float)(LANES128(v21).n128_f32[0] * LANES128(v21).n128_f32[0]);
  if (v23 <= 0x0.0p+0f) {
    v26 = 0x0.0p+0f;
    if ((*(_BYTE*)(v20 + 1329) & 1) != 0) {
      goto LABEL_47;
    }
  }
  else {
    if (LANES128(v21).n128_f32[0] != 0x0.0p+0f ||
        LANES128(v21).n128_f32[2] != 0x0.0p+0f) {
      v24 = sqrtf(v23);
      LANES128(v21).n128_f32[0] = LANES128(v21).n128_f32[0] / v24;
      v22 = LANES128(v21).n128_f32[2] / v24;
    }
    v25 = atan2f(LANES128(v21).n128_f32[0], v22);
    v20 = *(_QWORD*)v6;
    v26 = (float)(v25 * 0x1.ca5dc20000000p+5f) * 0x1.1df46a0000000p-6f;
    if ((*(_BYTE*)(*(_QWORD*)v6 + 1329LL) & 1) != 0) {
      goto LABEL_47;
    }
  }
  *(_BYTE*)(v20 + 1329) = 1;
LABEL_47:
  v27 = *(_QWORD**)(*(_QWORD*)(v20 + 24) + 16LL);
  if (v27[107] != 0) {
    v28 = v27[108];
    v27[107] = 0;
    v27[108] = 0;
    if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
      std___1___shared_weak_count___release_weak(v28);
    }
  }
  v29 = (int8x16_t*)v27[61];
  v30 = LANES128(v29[11]).n128_u8[4];
  LANES128(v29[2]).n128_f32[0] = v26;
  LANES128(v29[2]).n128_f32[1] = v26;
  if (v30 == 1) {
    LANES128(v29[11]).n128_u8[4] = 0;
  }
  CharacterRotate_d519c0(v29);
  v31 = *(_QWORD*)(v13 + 24);
  v32 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v6 + 24LL) + 24LL);
  *(_BYTE*)(v32 + 25) = 0;
  *(_QWORD*)(v32 + 32) = 0;
  *(_QWORD*)(v32 + 37) = 0;
  *(_BYTE*)(v32 + 48) = 0;
  *(_BYTE*)(v32 + 64) = 0;
  *(_QWORD*)(v32 + 80) = 0;
  *(_BYTE*)(v32 + 96) = 1;
  *(_DWORD*)(v32 + 32) = 1112084432;
  LODWORD(v31) = *(_DWORD*)(v31 + 184);
  *(_BYTE*)(v32 + 44) = 1;
  *(_DWORD*)(v32 + 40) = v31;
  game_d523c0(*(_QWORD*)(*(_QWORD*)(v32 + 16) + 488LL));
LABEL_54:
  if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v15);
  }
LABEL_56:
  for (i = v6 + 8; i != v7; i += 8) {
    HubCharacterNatives_cee990(*(_QWORD*)(*(_QWORD*)i + 24LL), 0xDDBB78CE, 2,
                               0x100000000LL, 0x100000000LL, 0x140555555LL,
                               0x1.0000000000000p+0f);
    v34 = *(_QWORD*)(GameData_21ec7c0 + 80);
    if (v34 != 0) {
      v35 = *(_QWORD*)(GameData_21ec7c0 + 72);
      v36 = *(_QWORD*)(GameData_21ec7c0 + 80);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 16), 1u,
                                memory_order_relaxed);
      v37 = std___1___shared_weak_count_lock(v36);
      std___1___shared_weak_count___release_weak(v34);
      if (v37 != 0 && v35 != 0) {
        v39 = *(_QWORD*)(v35 + 24);
        v40 = *(_QWORD*)(*(_QWORD*)i + 24LL);
        v41 = vsubq_f32(*(float32x4_t*)(*(_QWORD*)(v39 + 16) + 560LL),
                        *(float32x4_t*)(*(_QWORD*)(v40 + 16) + 560LL));
        v42 = LANES128(v41).n128_f32[2];
        v43 = vmuls_lane_f32(LANES128(v41).n128_f32[2], v41, 2) +
              (float)(LANES128(v41).n128_f32[0] * LANES128(v41).n128_f32[0]);
        if (v43 > 0x0.0p+0f) {
          if (LANES128(v41).n128_f32[0] != 0x0.0p+0f ||
              LANES128(v41).n128_f32[2] != 0x0.0p+0f) {
            v44 = sqrtf(v43);
            LANES128(v41).n128_f32[0] = LANES128(v41).n128_f32[0] / v44;
            v42 = LANES128(v41).n128_f32[2] / v44;
          }
          atan2f(LANES128(v41).n128_f32[0], v42);
          v39 = *(_QWORD*)(v35 + 24);
          v40 = *(_QWORD*)(*(_QWORD*)i + 24LL);
        }
        v45 = *(_QWORD*)(v40 + 24);
        *(_BYTE*)(v45 + 25) = 0;
        *(_QWORD*)(v45 + 32) = 0;
        *(_QWORD*)(v45 + 37) = 0;
        *(_BYTE*)(v45 + 48) = 0;
        *(_BYTE*)(v45 + 64) = 0;
        *(_QWORD*)(v45 + 80) = 0;
        *(_BYTE*)(v45 + 96) = 1;
        *(_DWORD*)(v45 + 32) = 1112084432;
        v46 = *(_DWORD*)(v39 + 184);
        *(_BYTE*)(v45 + 44) = 1;
        *(_DWORD*)(v45 + 40) = v46;
        game_d523c0(*(_QWORD*)(*(_QWORD*)(v45 + 16) + 488LL));
      LABEL_73:
        if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
          std___1___shared_weak_count___release_weak(v37);
        }
        continue;
      }
      if (v37 != 0) {
        goto LABEL_73;
      }
    }
  }
LABEL_75:
  v49[17] = 0;
  *(_WORD*)(v51_.v52 + 193) = 257;
  qmemcpy(v49, " SE_SYS_CmdBtl_In", 17);
  snd_Fade_Fade_10c830((__int64)v51_.v51, 0x0.0p+0f);
  snd_play_ff2d0((void*)(handle), (__int64)&v49[1], (__int64)&v49[1],
                 (__int64)v51_.v51, 0, 0x10001u, 0, 0x0.0p+0f,
                 0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade(v51_.v51);
  if ((v49[0] & 1) != 0 && *(_QWORD*)&v49[16] != 0) {
    v47 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v47,
                                  *(__int64*)&v49[16]);
  }
  v6 = v50[0];
  if (v50[0] != 0) {
  LABEL_81:
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v48,
                                  v6);
  }
}

void game_hub_anonymous_da7680()
{
  _QWORD handle[2];
  __int64 v0;
  __int64 v1[3];
  _QWORD v2[25];

  if ((*(_BYTE*)(GameData_21c9608 + 896) & 1) == 0) {
    GameHr_10c0c60(GameData_21f3cd8);
    strcpy((char*)v1, "\"SE_SYS_CmdBtl_Out");
    snd_Fade_Fade_10c830((__int64)v2, 0x0.0p+0f);
    snd_play_ff2d0((void*)(handle), (__int64)v1 + 1, (__int64)v1 + 1,
                   (__int64)v2, 0, 0x10001u, 0, 0x0.0p+0f,
                   0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v2);
    if ((v1[0] & 1) != 0 && v1[2] != 0) {
      v0 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v0 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v0,
                                    v1[2]);
    }
  }
}

void game_hub_anonymous_f8dc00(__int64 a1)
{
  _QWORD handle[2];
  __int64 v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  unsigned __int8 explicit;
  int* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  unsigned __int8 v12;
  int* v13;
  __int64 v14;
  __int64 i;
  int v16;
  __int64 v17;
  char v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  int v28;
  struct {
    __int64 v29;
    __int64 v30;
  } v29_;
  __int64 v31[3];
  struct {
    __int64 v32;
    __int64 v33;
  } v32_;
  __int64 v34[26];

  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v2 = fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 26, 16, 0),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  strcpy(v3, "SE_OBJ_Door_Open_Future");
  snd_Fade_Fade_10c830((__int64)v34, 0x0.0p+0f),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  snd_play_ff2d0((void*)(handle), (__int64)v3, (__int64)v3, (__int64)v34, 0,
                 0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  snd_Fade_Destroy_Fade(v34),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  GameRoutine_112180(a1 + 200, (__int64)v31),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v4 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4, (__int64)v3),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v5 = GameHr_d70540(*(_QWORD*)GameData_212dbc0[0], "Bg_Gate_A000_001"),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v5 != 0) {
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d308,
                                    memory_order_acquire);
    v7 = GameData_212d300;
    if ((explicit & 1) == 0) {
      v25 = v5;
      v26 = __cxa_guard_acquire((__int64)GameData_212d308),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v5 = v25;
      if (v26 != 0) {
        *v7 = wld_Crc32(0, "MapAnimModule", 0xDu),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        __cxa_guard_release((__int64)GameData_212d308),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v5 = v25;
      }
    }
    v8 = *(_QWORD*)(v5 + 512);
    v9 = v8;
    while (v9 != *(_QWORD*)(v5 + 504)) {
      v10 = *(_DWORD*)(v9 - 16);
      v9 -= 16;
      v8 -= 16;
      if (v10 == *v7) {
        if (*(_QWORD*)(v5 + 512) != v8 && *(_QWORD*)(v8 + 8) != 0) {
          v11 = v5;
          GameHr_c08540(*(_QWORD*)(v8 + 8), (__int64)"Done", 4, 0, 0x0.0p+0f),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          v5 = v11;
        }
        break;
      }
    }
    v12 = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                               memory_order_acquire);
    v13 = GameData_212df08;
    if ((v12 & 1) == 0) {
      v27 = v5;
      v28 = __cxa_guard_acquire((__int64)GameData_212df10),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v5 = v27;
      if (v28 != 0) {
        *v13 = wld_Crc32(0, "ModelModule", 0xBu),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        __cxa_guard_release((__int64)GameData_212df10),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v5 = v27;
      }
    }
    v14 = *(_QWORD*)(v5 + 512);
    for (i = v14; i != *(_QWORD*)(v5 + 504); i -= 16) {
      v16 = *(_DWORD*)(i - 16);
      v14 -= 16;
      if (v16 == *v13) {
        if (*(_QWORD*)(v5 + 512) != v14) {
          v17 = *(_QWORD*)(v14 + 8);
          if (v17 != 0) {
            GameRoutine_a7f140(v17, (__int64)v34, "Loc_Eff_Gmc_Gate"),
                v18 =
                    COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            if ((v18 & 1) != 0) {
              v19 = (__int64*)GameData_212dc48[0];
              strcpy((char*)v31, ",Gim_Obelisk_Door_Plate");
              game_hub_e1c160((void*)(&v32_.v32), *(_QWORD*)GameData_212dc48[0],
                              (char*)v31, v34),
                  v18 = COERCE_AS(
                      __typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              v20 = v32_.v33;
              if (v32_.v33 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v32_.v33 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20),
                    v18 = COERCE_AS(
                        __typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                std___1___shared_weak_count___release_weak(v20),
                    v18 = COERCE_AS(
                        __typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              }
              if ((v31[0] & 1) != 0 && v31[2] != 0) {
                v21 = 128;
                if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
                  v21 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v21, v31[2]),
                    v18 = COERCE_AS(
                        __typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              }
              v22 = *v19;
              strcpy((char*)v31, ",Gim_Obelisk_Door_Light");
              game_hub_e1c160((void*)(&v29_.v29), v22, (char*)v31, v34),
                  v18 = COERCE_AS(
                      __typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              v23 = v29_.v30;
              if (v29_.v30 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v29_.v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23),
                    v18 = COERCE_AS(
                        __typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                std___1___shared_weak_count___release_weak(v23),
                    v18 = COERCE_AS(
                        __typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              }
              if ((v31[0] & 1) != 0 && v31[2] != 0) {
                v24 = 128;
                if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
                  v24 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v24, v31[2]),
                    v18 = COERCE_AS(
                        __typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              }
            }
          }
        }
        return;
      }
    }
  }
}

#pragma GCC visibility pop
