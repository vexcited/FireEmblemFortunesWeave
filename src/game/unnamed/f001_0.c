#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};

extern __int128 GameData_1a83090;

extern __int128 GameData_1a83610;

extern char GameData_1a9f09e;

extern __int64 (*GameData_2008a50[])();

extern __int64 (*GameData_200f2f8[])();

extern __int64 (*GameData_200f338[])();

extern __int64 (*GameData_2021368[])();

extern __int64 (*GameData_20fa540[])();

extern __int64 (*GameData_20fa9c8[])();

extern __int64 (*GameData_20faa98[])();

extern __int64 (*GameData_20fab30[])();

extern __int64 (*GameData_20fad00[])();

extern __int64 (*GameData_20fb180[])();

extern __int64 (*GameData_20fb250[])();

extern __int64 (*GameData_20fb7d8[])();

extern __int64 (*GameData_20fbe30[])();

extern __int64 (*GameData_20fd288[])();

extern __int64 GameData_212bf68;

extern __int64* GameData_212c010[3];

extern __int64* GameData_212c598[2];

extern __int64 GameData_212c5c0[3];

extern __int64 GameData_212c608[2];

extern _UNKNOWN* GameData_212c730;

extern __int64* GameData_212c880[5];

extern __int64 GameData_212d270;

extern _DWORD* GameData_212d280;

extern __int64* GameData_212d6a8;

extern __int64 GameData_212dc38[7];

extern __int64 GameData_212dce8;

extern int* GameData_212deb0;

extern _UNKNOWN* GameData_212deb8;

extern __int64* GameData_212ece8;

extern __int64* GameData_212ed08[13];

extern __int64* GameData_212fe80;

extern __int64 GameData_21c6978;

extern int GameData_21d9864;

extern __int64 GameData_21ee240;

extern __int64 GameData_21fdf18;

extern __int64 GameData_21fdf28;

extern __int64 GameData_21fdf38;

extern __int64 GameData_21fdf48;

extern __int64 GameData_21fdf58;

extern __int64 GameData_21fdf68;

extern __int64 GameData_22110ac;

extern _UNKNOWN GameData_22110b8;

extern __int64 GameData_22356f0;

extern __int64 GameData_22356f8;

extern __int64 GameData_2235708;

extern __int64 GameData_22365a0;

extern __int64 GameData_2241728;

extern __int64 GameData_2258178;

extern __int64 GameData_2265ae0;

extern __int64 GameData_2265ed8;

extern __int64 GameData_2265ee0;

__attribute__((swiftcall)) void GameRoutine_13f8ba0(PSEUDO_X8, _QWORD);

float GameRoutine_1552870(void);

__int64 GameRoutine_156d210(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_16dcd30(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_16e0c00(_QWORD, _QWORD);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a09c70(_QWORD);

__int64 GameRoutine_1a09fd0(_QWORD);

__int64 GameRoutine_1a09fe0(_QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);

float GameRoutine_1a0a550(float, float);

__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_540(_QWORD, _QWORD, _QWORD);

float GameRoutine_55c280(_QWORD);

__int64 GameRoutine_566340(_QWORD);

__int64 GameRoutine_5664a0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_58f8a0(_QWORD);

__int64 GameRoutine_58fac0(_QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);

float GameRoutine_618640(_QWORD, float, float, float, float);

__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_654050(_QWORD, _QWORD);

__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_657a50(_QWORD, _QWORD);

__int64 GameRoutine_65a7c0(void);

__int64 GameRoutine_6dd190(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_810380(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);

__int64 GameRoutine_8679c0(_QWORD);

__int64 GameRoutine_ce3880(_QWORD, _QWORD, _QWORD, float);

__int64 GameRoutine_d27850(_QWORD);

float GameRoutine_d27af0(_QWORD, float, float, float, float);

float GameRoutine_d28060(_QWORD);

__int64 GameRoutine_d78cb0(_QWORD, float);

__int64 GameRoutine_edede0(__int64, float, float, float);

__attribute__((swiftcall)) void
GameRoutine_a6ea10_alt1(PSEUDO_X8, __int64, int) __asm__("GameRoutine_a6ea10");

__int64 GameRoutine_ce5d20_alt1(__int64, __int64, __int64, __int64,
                                unsigned __int64,
                                char) __asm__("GameRoutine_ce5d20");

__int64 ResFile_5e5f00(__int64);

bool GameRoutine_ad7390_alt1(_QWORD*) __asm__("GameRoutine_ad7390");

extern __int64 (*game_character_d00fc0_ptr)();

extern __int64 as_g_base_frame_counter;

extern __int64 fw_memory_g_heap_manager_ptr;

extern __int64 game_g_game_setting;

float GameRoutine_618640_alt1(int, float result, float, float,
                              float) __asm__("GameRoutine_618640");

void GameHr_7f7720(__int64, __int64);

void GameRoutine_ce5aa0_alt1(__int64) __asm__("GameRoutine_ce5aa0");

void GameRoutine_ce5c00_alt1(__int64) __asm__("GameRoutine_ce5c00");

void game_10e7f80(int8x16_t*, int, __int64, int);

void nn_mem_StandardAllocator_Free(__int64, __int64);

_BYTE* GameHr_1070320(__int64 a1, int a2);

__int64 GameHr_174dbb0(__int64 a1, int a2);

__int64*
GameRoutine_18d0ec0_alt1(_QWORD*,
                         unsigned __int8*) __asm__("GameRoutine_18d0ec0");

__int64 LayoutAccessor_155e830(__int64 result, char);

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);

__int64 game_ProcInst_Unregister(__int64 result);

extern __int64 (*game_ProcInst_vtable[])();

extern __int64 (*game_combat_CombatTransitionBase_vtable)();

extern __int64 game_ProcGameSkipView_instance_;

float LayoutAccessor_15638b0(__int64*, const char*, char);

void BattleUtil_7a96a0(float);

void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");

void __attribute__((noreturn))
GameRoutine_10a0700_alt1() __asm__("GameRoutine_10a0700");

void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");

__int64 GameHr_10a04e0(__int64* a1, float* a2, float* a3, __int64 a4);

__int64 GameHr_10a0720(__int64* a1, float* a2, float* a3, __int64 a4);

void GameHr_10ec820(__int64 a1);

void GameHr_1385df0(__int64 a1);

__int64 GameHr_1001c70(__int64 a1)
{
  __int64 v2;

  v2 = GameData_212dc38[0];
  GameRoutine_edede0(*(_QWORD*)(*(_QWORD*)GameData_212dc38[0] + 912LL),
                     *(float*)(a1 + 152) * 0.6f, 0.012f, 1.0f);
  return GameRoutine_edede0(*(_QWORD*)(*(_QWORD*)v2 + 912LL),
                            *(float*)(a1 + 152) + 1.0f, 0.01f, 1.0f);
}

float GameHr_1016910(__int64 a1, float a2)
{
  __int64* v4;
  __int64 v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  __int64 v18;
  bool v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float result;
  float v30;
  float v31;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)GameRoutine_1a09fd0(&GameData_22110b8) != 0) {
    GameData_22110ac = 0;
    GameRoutine_1a09fe0(&GameData_22110b8);
  }
  v4 = GameData_212ed08[0];
  v5 = *GameData_212ed08[0];
  if (*(_BYTE*)(a1 + 68) == 1) {
    v6 = GameRoutine_d27af0(v5, 0.1f, 0.3f, 0.95f, 1.25f);
    v5 = *v4;
    v7 = v6;
  }
  else {
    v7 = *(float*)&GameData_22110ac;
  }
  v8 = GameRoutine_d28060(v5);
  v9 = fabsf(v7);
  v10 = v7 * (float)(v8 * 100.0f);
  v11 = GameRoutine_1a0a550(v9, 0.5f);
  v12 = 1.0f;
  v13 = 1.0f;
  v14 = fmaxf(v11, 0.0f);
  v15 = 1.0f;
  v16 = (float)(fminf(v14, 1.0f) * 0.5f) + 0.5f;
  if (v10 != 0.0f) {
    v17 = -1.0f;
    if (v10 >= 0.0f) {
      v17 = 1.0f;
    }
    v19 = v17 == *(float*)(a1 + 192);
    v13 = 1.0f;
    if (!v19) {
      v13 = 2.0f;
      v12 = 4.0f;
    }
  }
  v18 = *v4;
  v19 = v7 == 0.0f;
  v20 = fminf(fmaxf(v9, 0.0f), 1.0f);
  v21 = (float)(v20 * 0.5f) + 0.5f;
  if (v7 == 0.0f) {
    v21 = 1.0f;
  }
  v22 = (float)((float)((float)(a2 * 0.5f) * v8) * v21) * v12;
  v23 = v8 * (float)((float)(a2 * 600.0f) * v16);
  v24 = (float)(v20 * 0.9f) + 0.1f;
  if (!v19) {
    v15 = v24;
  }
  v25 = (float)(v15 * v23) * v13;
  v30 = v25;
  v31 = v22;
  if ((GameRoutine_d27850(v18) & 1) != 0) {
    GameRoutine_d78cb0(&v31, v10);
    GameRoutine_d78cb0(&v30, v10);
    v25 = v30;
    v22 = v31;
  }
  v26 = *(float*)(a1 + 192) + (float)(fminf(fmaxf(v22, 0.0f), 1.0f) *
                                      (float)(v10 - *(float*)(a1 + 192)));
  v27 = fabsf(v25);
  if (v26 > v10) {
    v26 = v26 - v27;
    if (v26 >= v10) {
      goto LABEL_22;
    }
  }
  else if (v26 >= v10 || (v26 = v27 + v26) <= v10) {
  LABEL_22:
    v28 = *(float*)(a1 + 8);
    *(float*)(a1 + 192) = v26;
    result = v28 + (float)(v26 * a2);
    *(float*)(a1 + 8) = result;
    return result;
  }
  v26 = v10;
  goto LABEL_22;
}

_BYTE* GameHr_1070320(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  unsigned __int64 v5;
  __int64** v6;
  __int64* v7;
  __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  _BYTE* v13;
  bool v16;
  __int64 v17;
  __int64 v18;
  bool v19;
  __int64 v20;
  bool v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64** v38;
  __int64* v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v44;
  int v45;
  float v46;
  __int64 v47;
  __int64 v48;
  struct {
    _QWORD v49[4];
    _QWORD* v50;
  } v49_;
  struct {
    _QWORD v51[3];
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
    __int16 v63;
    char gap162_[6];
    __int64 v64;
  } v51_;
  struct {
    _BYTE v65[32];
    _BYTE* v66;
  } v65_;

  if (GameData_22356f8 != 0 && GameData_2235708 != 0) {
    v4 = GameData_22356f8 - 1;
    if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
      v5 = a2;
      if (GameData_22356f8 <= (unsigned __int64)a2) {
        v5 = a2 % (unsigned __int64)GameData_22356f8;
      }
    }
    else {
      v5 = v4 & a2;
    }
    v6 = *(__int64***)(GameData_22356f0 + 8 * v5);
    if (v6 != nullptr) {
      v7 = *v6;
      if (v7 == nullptr) {
        v8 = 639;
      LABEL_28:
        v10 = *(_QWORD**)(a1 + 5112);
        if (v10 != nullptr) {
          goto LABEL_29;
        }
        return nullptr;
      }
      v8 = 639;
      if ((GameData_22356f8 & v4) == 0) {
        while (1) {
          v11 = v7[1];
          if (v11 == a2) {
            if (*((_DWORD*)v7 + 4) == a2) {
              goto LABEL_61;
            }
          }
          else if ((v11 & v4) != v5) {
            goto LABEL_28;
          }
          v7 = (__int64*)*v7;
          if (v7 == nullptr) {
            goto LABEL_28;
          }
        }
      }
      while (1) {
        v9 = v7[1];
        if (v9 == a2) {
          break;
        }
        if (v9 >= GameData_22356f8) {
          v9 %= (unsigned __int64)GameData_22356f8;
        }
        if (v9 != v5) {
          goto LABEL_28;
        }
      LABEL_14:
        v7 = (__int64*)*v7;
        if (v7 == nullptr) {
          goto LABEL_28;
        }
      }
      if (*((_DWORD*)v7 + 4) != a2) {
        goto LABEL_14;
      }
    LABEL_61:
      v8 = *((int*)v7 + 5);
      v10 = *(_QWORD**)(a1 + 8 * v8);
      if (v10 == nullptr) {
        return nullptr;
      }
    LABEL_29:
      v12 = v10 + 12;
      v13 = v10 + 9;
      v16 = v10[12] == 0 && v10[13] == 0 && v10[14] == 0 && v10[15] == 0;
      if (!v16 || v10[16] != 0) {
        return v13;
      }
      v17 = v10[7];
      if (v17 != 0 && *(_BYTE*)(v17 + 165) == 1) {
        v18 = a1;
        v19 = GameRoutine_ad7390_alt1((_QWORD*)v10[7]);
        a1 = v18;
        if (v19) {
          v20 = v10[7];
          if (*(_BYTE*)(v20 + 165) == 1) {
            v21 = GameRoutine_ad7390_alt1((_QWORD*)v10[7]);
            a1 = v18;
            if (v21) {
              v22 = ResFile_5e5f00(*(_QWORD*)(*(_QWORD*)(v20 + 8) + 592LL));
              a1 = v18;
              if (v22 != 0) {
                GameRoutine_a6ea10_alt1((void*)(v51_.v51), v22, 0);
                if ((*v13 & 1) != 0) {
                  v23 = v10[11];
                  if (v23 != 0) {
                    v24 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v24 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v23);
                  }
                }
                v25 = v51_.v51[1];
                v27 = v51_.v53;
                v26 = v51_.v54;
                *(_QWORD*)v13 = v51_.v51[0];
                v10[10] = v25;
                v28 = v51_.v52;
                v10[11] = v51_.v51[2];
                v29 = v51_.v55;
                v30 = v51_.v56;
                *v12 = v28;
                v10[13] = v27;
                v10[14] = v26;
                v10[15] = v29;
                v31 = v51_.v57;
                v10[16] = v30;
                v10[17] = v31;
                v32 = v10[17];
                if (v32 != 0) {
                  LODWORD(v51_.v52) = 0;
                  LOBYTE(v51_.v51[0]) = 16;
                  BYTE4(v51_.v52) = 0;
                  LODWORD(v51_.v53) = 0;
                  v51_.v54 = 0;
                  v51_.v55 = 0;
                  v51_.v56 = 0;
                  v51_.v57 = 0;
                  v51_.v58 = 0;
                  v51_.v59 = 0;
                  v51_.v60 = 0;
                  v51_.v61 = 0;
                  v51_.v63 = 0;
                  strcpy((char*)v51_.v51 + 1, "<noname>");
                  v51_.v62 = 0x3F80000000000000LL;
                  v51_.v64 = as_g_base_frame_counter + 88;
                  v33 = *(_QWORD*)v32;
                  v34 = *(unsigned int*)(v32 + 8);
                  v49_.v50 = v49_.v49;
                  v49_.v49[0] = GameData_212ece8 + 2;
                  v49_.v49[1] = game_character_d00fc0_ptr;
                  GameRoutine_ce5c00_alt1((__int64)v51_.v51);
                  if (v49_.v50 != nullptr) {
                    if (v49_.v50 == v49_.v49) {
                      v65_.v66 = v65_.v65;
                      (*(void (**)(__int64))(*v49_.v50 + 24LL))(
                          (__int64)v49_.v50);
                    }
                    else {
                      v65_.v66 = (_BYTE*)(*(__int64 (**)(__int64))(
                          *v49_.v50 + 16LL))((__int64)v49_.v50);
                    }
                  }
                  else {
                    v65_.v66 = nullptr;
                  }
                  GameRoutine_ce5d20_alt1((__int64)v51_.v51, v33, v34,
                                          (__int64)v65_.v65, 0, 1);
                  if (v65_.v66 == v65_.v65) {
                    v47 = 32;
                  LABEL_93:
                    (*(void (**)(__int64))(*(_QWORD*)v65_.v66 + v47))(
                        (__int64)v65_.v66);
                  }
                  else if (v65_.v66 != nullptr) {
                    v47 = 40;
                    goto LABEL_93;
                  }
                  if (v49_.v50 == v49_.v49) {
                    v48 = 32;
                  LABEL_98:
                    (*(void (**)(__int64))(*v49_.v50 + v48))((__int64)v49_.v50);
                  }
                  else if (v49_.v50 != nullptr) {
                    v48 = 40;
                    goto LABEL_98;
                  }
                  game_10e7f80((int8x16_t*)(*(_QWORD*)(v18 + 8 * v8) + 224LL),
                               a2, (__int64)v51_.v51, *(_DWORD*)(*v12 + 64LL));
                  GameRoutine_ce5aa0_alt1((__int64)v51_.v51);
                }
                else {
                  v44 = *(_QWORD*)(v18 + 8 * v8);
                  v45 = *(_DWORD*)(*v12 + 64LL);
                  *(_DWORD*)(v44 + 232) = a2;
                  v46 = (float)v45 / 0x1.e000000000000p+5f;
                  *(float*)(v44 + 236) = v46;
                  *(float*)(v44 + 256) = v46;
                  *(float*)(v44 + 224) =
                      (float)*(int*)(*(_QWORD*)GameData_212d270 + 16LL) *
                      0x1.1111120000000p-6f;
                }
                return v13;
              }
            }
          }
        }
      }
      v35 = 639;
      if (GameData_22356f8 == 0 || GameData_2235708 == 0) {
        goto LABEL_81;
      }
      v36 = GameData_22356f8 - 1;
      if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
        v37 = a2;
        if (GameData_22356f8 <= (unsigned __int64)a2) {
          v37 = a2 % (unsigned __int64)GameData_22356f8;
        }
      }
      else {
        v37 = v36 & a2;
      }
      v38 = *(__int64***)(GameData_22356f0 + 8 * v37);
      if (v38 != nullptr) {
        v39 = *v38;
        if (*v38 != nullptr) {
          v35 = 639;
          if ((GameData_22356f8 & v36) == 0) {
            while (1) {
              v41 = v39[1];
              if (v41 == a2) {
                if (*((_DWORD*)v39 + 4) == a2) {
                  goto LABEL_85;
                }
              }
              else if ((v41 & v36) != v37) {
                goto LABEL_81;
              }
              v39 = (__int64*)*v39;
              if (v39 == nullptr) {
                goto LABEL_81;
              }
            }
          }
          while (1) {
            v40 = v39[1];
            if (v40 == a2) {
              if (*((_DWORD*)v39 + 4) == a2) {
              LABEL_85:
                v35 = *((int*)v39 + 5);
                goto LABEL_81;
              }
            }
            else {
              if (v40 >= GameData_22356f8) {
                v40 %= (unsigned __int64)GameData_22356f8;
              }
              if (v40 != v37) {
                goto LABEL_81;
              }
            }
            v39 = (__int64*)*v39;
            if (v39 == nullptr) {
              goto LABEL_81;
            }
          }
        }
      }
      v35 = 639;
    LABEL_81:
      v42 = *(_QWORD*)(a1 + 8 * v35);
      *(_QWORD*)(a1 + 8 * v35) = 0;
      if (v42 != 0) {
        GameHr_7f7720(a1 + 8 * v35, v42);
      }
      return nullptr;
    }
  }
  v8 = 639;
  v10 = *(_QWORD**)(a1 + 5112);
  if (v10 == nullptr) {
    return nullptr;
  }
  goto LABEL_29;
}

__int64 GameHr_10a04e0(__int64* a1, float* a2, float* a3, __int64 a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  unsigned __int64 v5;
  __int64 v7;
  bool v8;
  unsigned __int64 v9;
  unsigned __int64 v11;
  __int64 v14;
  __int64 v15;
  float v16;
  float v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _BOOL4 v25;
  _BOOL4 v26;
  float v27;
  float v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;

  v4 = a1[1] - *a1;
  v5 = (v4 >> 6) + 1;
  if (v5 >> 58 != 0) {
    GameRoutine_10a0700_alt1();
  }
  v7 = a1[2] - *a1;
  if (v7 >> 5 > v5) {
    v5 = v7 >> 5;
  }
  v8 = (unsigned __int64)v7 >= 0x7FFFFFFFFFFFFFC0LL;
  v9 = 0x3FFFFFFFFFFFFFFLL;
  if (!v8) {
    v9 = v5;
  }
  if (v9 >> 58 != 0) {
    GameRoutine_60a210_alt1();
  }
  v11 = v9 << 6;
  v14 = fw_memory_g_heap_manager_ptr;
  v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       v9 << 6, 16, 0);
  v16 = *a2;
  v17 = *a3;
  v18 = v15;
  v19 = v15 + v4;
  v20 = *(_QWORD*)(a4 + 32);
  if (v20 != 0) {
    if (v20 == a4) {
      *(_QWORD*)(v19 + 48) = v19 + 16;
      (*(void (**)(__int64))(*(_QWORD*)v20 + 24LL))(v20);
    }
    else {
      *(_QWORD*)(v19 + 48) =
          (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    }
  }
  else {
    *(_QWORD*)(v19 + 48) = 0;
  }
  v21 = v18 + v11;
  v22 = *a1;
  v23 = a1[1];
  v24 = v19 + 64;
  v25 = v17 >= 0x0.0p+0f;
  v26 = v17 < v16;
  if (v25 && v26) {
    v27 = v17;
  }
  else {
    v27 = v16;
  }
  if (v25 && v26) {
    v28 = v16;
  }
  else {
    v28 = v17;
  }
  v29 = v19 + v22 - v23;
  *(float*)v19 = v27;
  *(float*)(v19 + 4) = v28;
  if (v22 != v23) {
    v30 = 0;
    do {
      v31 = v22 + v30;
      v32 = v29 + v30;
      *(_QWORD*)(v29 + v30) = *(_QWORD*)(v22 + v30);
      v33 = *(_QWORD*)(v22 + v30 + 48);
      if (v33 != 0) {
        if (v31 + 16 == v33) {
          *(_QWORD*)(v32 + 48) = v29 + v30 + 16;
          (*(void (**)(_QWORD))(**(_QWORD**)(v31 + 48) + 24LL))(
              *(_QWORD*)(v31 + 48));
        }
        else {
          *(_QWORD*)(v32 + 48) = v33;
          *(_QWORD*)(v31 + 48) = 0;
        }
      }
      else {
        *(_QWORD*)(v32 + 48) = 0;
      }
      v30 += 64;
    } while (v22 + v30 != v23);
    while (1) {
      v35 = *(_QWORD**)(v22 + 48);
      if ((_QWORD*)(v22 + 16) == v35) {
        v34 = 32;
      }
      else {
        if (v35 == nullptr) {
          goto LABEL_28;
        }
        v34 = 40;
      }
      (*(void (**)(__int64))(*v35 + v34))((__int64)v35);
    LABEL_28:
      v22 += 64;
      if (v22 == v23) {
        v22 = *a1;
        break;
      }
    }
  }
  *a1 = v29;
  a1[1] = v24;
  a1[2] = v21;
  if (v22 != 0) {
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v36, v22);
  }
  return v24;
}

__int64 GameHr_10a0720(__int64* a1, float* a2, float* a3, __int64 a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  unsigned __int64 v5;
  __int64 v7;
  bool v8;
  unsigned __int64 v9;
  unsigned __int64 v11;
  __int64 v14;
  __int64 v15;
  float v16;
  float v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _BOOL4 v25;
  _BOOL4 v26;
  float v27;
  float v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;

  v4 = a1[1] - *a1;
  v5 = (v4 >> 6) + 1;
  if (v5 >> 58 != 0) {
    GameRoutine_10a0700_alt1();
  }
  v7 = a1[2] - *a1;
  if (v7 >> 5 > v5) {
    v5 = v7 >> 5;
  }
  v8 = (unsigned __int64)v7 >= 0x7FFFFFFFFFFFFFC0LL;
  v9 = 0x3FFFFFFFFFFFFFFLL;
  if (!v8) {
    v9 = v5;
  }
  if (v9 >> 58 != 0) {
    GameRoutine_60a210_alt1();
  }
  v11 = v9 << 6;
  v14 = fw_memory_g_heap_manager_ptr;
  v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       v9 << 6, 16, 0);
  v16 = *a2;
  v17 = *a3;
  v18 = v15;
  v19 = v15 + v4;
  v20 = *(_QWORD*)(a4 + 32);
  if (v20 != 0) {
    if (v20 == a4) {
      *(_QWORD*)(v19 + 48) = v19 + 16;
      (*(void (**)(__int64))(*(_QWORD*)v20 + 24LL))(v20);
    }
    else {
      *(_QWORD*)(v19 + 48) =
          (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    }
  }
  else {
    *(_QWORD*)(v19 + 48) = 0;
  }
  v21 = v18 + v11;
  v22 = *a1;
  v23 = a1[1];
  v24 = v19 + 64;
  v25 = v17 >= 0x0.0p+0f;
  v26 = v17 < v16;
  if (v25 && v26) {
    v27 = v17;
  }
  else {
    v27 = v16;
  }
  if (v25 && v26) {
    v28 = v16;
  }
  else {
    v28 = v17;
  }
  v29 = v19 + v22 - v23;
  *(float*)v19 = v27;
  *(float*)(v19 + 4) = v28;
  if (v22 != v23) {
    v30 = 0;
    do {
      v31 = v22 + v30;
      v32 = v29 + v30;
      *(_QWORD*)(v29 + v30) = *(_QWORD*)(v22 + v30);
      v33 = *(_QWORD*)(v22 + v30 + 48);
      if (v33 != 0) {
        if (v31 + 16 == v33) {
          *(_QWORD*)(v32 + 48) = v29 + v30 + 16;
          (*(void (**)(_QWORD))(**(_QWORD**)(v31 + 48) + 24LL))(
              *(_QWORD*)(v31 + 48));
        }
        else {
          *(_QWORD*)(v32 + 48) = v33;
          *(_QWORD*)(v31 + 48) = 0;
        }
      }
      else {
        *(_QWORD*)(v32 + 48) = 0;
      }
      v30 += 64;
    } while (v22 + v30 != v23);
    while (1) {
      v35 = *(_QWORD**)(v22 + 48);
      if ((_QWORD*)(v22 + 16) == v35) {
        v34 = 32;
      }
      else {
        if (v35 == nullptr) {
          goto LABEL_28;
        }
        v34 = 40;
      }
      (*(void (**)(__int64))(*v35 + v34))((__int64)v35);
    LABEL_28:
      v22 += 64;
      if (v22 == v23) {
        v22 = *a1;
        break;
      }
    }
  }
  *a1 = v29;
  a1[1] = v24;
  a1[2] = v21;
  if (v22 != 0) {
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v36, v22);
  }
  return v24;
}

__int64 GameHr_10aa3c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, float a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;

  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  v10 = GameData_212c608[0];
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_WORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = "NULL";
  *(_QWORD*)(a1 + 138) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)a1 = v10 + 16;
  *(_QWORD*)(a1 + 8) = 0;
  GameRoutine_65a7c0();
  v11 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 32, 16, 0);
  *(_QWORD*)v11 = GameData_212fe80 + 2;
  *(_QWORD*)(v11 + 8) = 0;
  *(_DWORD*)(v11 + 24) = 0;
  *(_QWORD*)(a1 + 152) = v11 + 24;
  *(_QWORD*)(a1 + 160) = v11;
  *(_QWORD*)(a1 + 168) = v11 + 24;
  *(_QWORD*)(a1 + 176) = v11;
  *(_QWORD*)(v11 + 16) = 0;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                            memory_order_relaxed);
  *(_QWORD*)(a1 + 184) = a1;
  *(_DWORD*)(a1 + 192) = 0;
  *(float*)(a1 + 196) = a5;
  *(_QWORD*)(a1 + 200) = a2;
  *(_QWORD*)a1 = GameData_2008a50;
  v12 = *(_QWORD*)(a3 + 32);
  if (v12 != 0) {
    if (v12 == a3) {
      *(_QWORD*)(a1 + 240) = a1 + 208;
      (*(void (**)(_QWORD))(**(_QWORD**)(a3 + 32) + 24LL))(*(_QWORD*)(a3 + 32));
    }
    else {
      *(_QWORD*)(a1 + 240) =
          (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    }
  }
  else {
    *(_QWORD*)(a1 + 240) = 0;
  }
  result = *(_QWORD*)(a4 + 32);
  v14 = a1 + 256;
  if (result != 0) {
    if (result == a4) {
      *(_QWORD*)(a1 + 288) = v14;
      result = (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(a4 + 32) + 24LL))(
          *(_QWORD*)(a4 + 32), a1 + 256);
    }
    else {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      *(_QWORD*)(a1 + 288) = result;
    }
  }
  else {
    *(_QWORD*)(a1 + 288) = 0;
  }
  if (*(float*)(a1 + 196) > 0.0f) {
    if (*(_QWORD*)(a1 + 200) == 0) {
      *(_QWORD*)(a1 + 200) = *(_QWORD*)GameData_212c5c0[0] + 144LL;
    }
    return result;
  }
  v15 = *(_QWORD*)(a1 + 240);
  if (v15 != 0) {
    v17 = 1065353216;
    (*(void (**)(__int64, int*))(*(_QWORD*)v15 + 48LL))(v15, &v17);
  }
  result = *(_QWORD*)(a1 + 288);
  if (result != 0) {
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = *(_QWORD*)(a1 + 288);
    *(_QWORD*)(a1 + 288) = 0;
    if (result == v14) {
      v16 = 32;
    }
    else {
      if (result == 0) {
        goto LABEL_22;
      }
      v16 = 40;
    }
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)result + v16))((__int64)result);
  }
LABEL_22:
  if ((*(_WORD*)(a1 + 136) & 1) == 0) {
    return GameRoutine_657a50(a1, 1);
  }
  return result;
}

__int64 GameHr_10b3cb0(__int64 a1, __int64 a2, float a3)
{
  unsigned int v3;
  __int64 v4;
  __int64 v7;
  float v9;

  v3 = 0;
  if (a2 != 0) {
    v4 = *(_QWORD*)(a1 + 16);
    if (v4 != 0) {
      if (**(_DWORD**)a1 != 0) {
        return 0;
      }
      *(_QWORD*)(a1 + 32) = a2;
      v7 = a2 + 40;
      if (a3 >= 0.0f) {
        v9 = a3;
      }
      else {
        v9 = 0.16667f;
      }
      GameRoutine_ce3880(v4, v7, 1, v9);
      GameRoutine_ce3880(*(_QWORD*)(a1 + 16), a2 + 40, 3, v9);
      GameRoutine_ce3880(*(_QWORD*)(a1 + 16), a2 + 232, 4, v9);
      GameRoutine_ce3880(*(_QWORD*)(a1 + 16), a2 + 328, 5, v9);
      return 1;
    }
  }
  return v3;
}

__int64 GameHr_10bfee0(__int64 a1, __int64 a2, char a3)
{
  __int64 v4;
  char v5;
  int v7;
  __int64 v8;
  __int64 (**v9)();
  _QWORD* v10;
  __int64 (***v11)();

  *(_DWORD*)(a1 + 16) = 0;
  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 8) = 0;
  v4 = *(_QWORD*)(a1 + 192);
  v5 = a3 & 1;
  *(_QWORD*)(a1 + 192) = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  *(_QWORD*)(a1 + 96) = a2;
  *(_BYTE*)(a1 + 114) = v5;
  if (a2 == 0) {
    return 1;
  }
  if (*(float*)(a2 + 60) <= 0.2f) {
    *(_QWORD*)(a1 + 176) = 0;
    *(_QWORD*)(a1 + 184) = 0;
  }
  v7 = *(_DWORD*)(a2 + 24);
  if (v7 == 2052559) {
    v8 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 40, 16, 0);
    *(_QWORD*)(v8 + 16) = 0;
    *(_QWORD*)(v8 + 24) = 0;
    *(_DWORD*)(v8 + 32) = 0;
    v9 = GameData_200f2f8;
    *(_QWORD*)v8 = GameData_200f2f8;
    *(_QWORD*)(v8 + 8) = a1;
    goto LABEL_10;
  }
  if (v7 == 23504393) {
    v8 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 112, 16, 0);
    *(_DWORD*)(v8 + 16) = 0;
    *(_QWORD*)(v8 + 32) = 0;
    *(_QWORD*)(v8 + 40) = 0;
    *(_QWORD*)(v8 + 48) = 0;
    *(_QWORD*)(v8 + 56) = 0;
    *(_DWORD*)(v8 + 104) = 0;
    v9 = GameData_200f338;
    *(_QWORD*)v8 = GameData_200f338;
    *(_QWORD*)(v8 + 8) = a1;
    *(_QWORD*)(v8 + 96) = 1109393408;
    *(_OWORD*)(v8 + 64) = GameData_1a83090;
    *(_OWORD*)(v8 + 80) = GameData_1a83610;
  LABEL_10:
    v10 = *(_QWORD**)(a1 + 192);
    *(_QWORD*)(a1 + 192) = v8;
    if (v10 == nullptr) {
      *(_WORD*)(a1 + 112) = 257;
      goto LABEL_15;
    }
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v10 + 8LL))(
        (void*)v10, v10);
  }
  v11 = *(__int64 (****)())(a1 + 192);
  *(_WORD*)(a1 + 112) = 257;
  if (v11 != nullptr) {
    v9 = *v11;
  LABEL_15:
    v9[5]();
    (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 192) + 24LL))(*(_QWORD*)(a1 + 192));
  }
  return 1;
}

void GameHr_10ec820(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = &game_combat_CombatTransitionBase_vtable;
  BattleUtil_7a96a0(0x0.0p+0f);
  v2 = *(_QWORD*)(GameData_21c6978 + 32);
  if (*(_QWORD*)(GameData_21c6978 + 24) != v2 && *(_QWORD*)(v2 - 8) != 0) {
    *(_BYTE*)(GameData_21fdf18 + 58) = 1;
    *(_BYTE*)(GameData_21fdf28 + 58) = 1;
    *(_BYTE*)(GameData_21fdf38 + 58) = 1;
    *(_BYTE*)(GameData_21fdf48 + 58) = 1;
    *(_BYTE*)(GameData_21fdf58 + 58) = 1;
    *(_BYTE*)(GameData_21fdf68 + 58) = 1;
  }
  v3 = *(_QWORD*)(a1 + 152);
  if (v3 == 0) {
    goto LABEL_17;
  }
  v4 = *(_QWORD*)(a1 + 160);
  if (v3 == v4) {
  LABEL_14:
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                  v3);
    goto LABEL_17;
  }
  do {
    v6 = *(_QWORD**)(v4 - 16);
    if ((_QWORD*)(v4 - 48) == v6) {
      v5 = 32;
    LABEL_8:
      (*(void (**)(__int64))(*v6 + v5))((__int64)v6);
      goto LABEL_9;
    }
    if (v6 != nullptr) {
      v5 = 40;
      goto LABEL_8;
    }
  LABEL_9:
    v4 -= 64;
  } while (v4 != v3);
  v7 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)(a1 + 160) = v3;
  v3 = v7;
  if (v7 != 0) {
    goto LABEL_14;
  }
LABEL_17:
  GameData_22365a0 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

__int64 GameHr_11c4800(__int64 result, float a2, float a3)
{
  __int64 v3;
  int v4;
  float v5;
  int v6;
  int v7;
  unsigned __int8 explicit;
  int* v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  float v15;
  float v16;
  __int64 v17;
  float v18;

  v3 = *(_QWORD*)(result + 152);
  if (v3 != 0) {
    if (a2 == 0.0f || a3 <= 0.0f) {
      *(_DWORD*)(result + 376) = 0;
      v15 = 60.0f / (float)*(int*)(*GameData_212c010[0] + 476);
      if (v15 <= 0.0f) {
        v16 = -60.0f;
      }
      else {
        v16 = -60.0f / v15;
      }
      *(_DWORD*)(result + 380) = *GameData_212d280 + (int)v16;
    }
    else {
      if (a2 < 0.0f) {
        v4 = 1;
      }
      else {
        v4 = -1;
      }
      *(_DWORD*)(result + 376) = v4;
      v5 = 60.0f / (float)*(int*)(*GameData_212c010[0] + 476);
      if (v5 <= 0.0f) {
        v5 = 1.0f;
      }
      v6 = *GameData_212d280 + (int)(float)((float)(a3 * 60.0f) / v5);
      v7 = *(_DWORD*)(result + 384);
      *(_DWORD*)(result + 380) = v6;
      if ((unsigned int)(v6 - v7) <= 1) {
        *(_DWORD*)(result + 328) = v4;
      }
      if (fabsf(a2) >= 60.0f && a3 > 0.0f && a3 <= 1.0f) {
        explicit = atomic_load_explicit(
            (atomic_uchar* volatile)GameData_212deb8, memory_order_acquire);
        v9 = GameData_212deb0;
        if ((explicit & 1) == 0) {
          v18 = a3;
          v17 = v3;
          result = GameRoutine_1a09fd0(GameData_212deb8);
          v9 = GameData_212deb0;
          a3 = v18;
          v3 = v17;
          if ((_DWORD)result != 0) {
            *GameData_212deb0 = GameRoutine_540(0, "CharacterBuilder", 16);
            result = GameRoutine_1a09fe0(GameData_212deb8);
            v9 = GameData_212deb0;
            a3 = v18;
            v3 = v17;
          }
        }
        v10 = *v9;
        v11 = *(_QWORD*)(v3 + 512);
        v12 = v11;
        do {
          v13 = *(_DWORD*)(v12 - 16);
          v12 -= 16;
          v11 -= 16;
        } while (v13 != v10);
        v14 = *(_QWORD*)(*(_QWORD*)(v11 + 8) + 112LL);
        *(_DWORD*)(v14 + 432) = 3;
        *(_DWORD*)(v14 + 436) = (int)(float)((float)(a3 * 0.8f) * 30.0f);
      }
    }
  }
  return result;
}

float GameHr_12a2340(__int64 a1, __int64 a2, _DWORD* a3)
{
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  char v9;
  unsigned int v10;
  float result;
  __int64 v12;
  int v13;
  unsigned int v14;
  _BYTE v15[4];

  *(_QWORD*)a1 = GameData_2021368;
  v3 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a3 & 0xFFF));
  if (*(char*)(v3 + 276) < 0) {
    v10 = *(unsigned __int8*)(a2 + 499);
    if (*(_BYTE*)(a2 + 499) != 0) {
      if (v10 <= 0xB) {
        v4 = (int)(float)((float)((float)v10 / 12.0f) * 25.0f) + 15;
      }
      else {
        v4 = 40;
      }
    }
    else {
      v4 = 15;
    }
  }
  else if (*(unsigned __int8*)(v3 + 276) >= 3u) {
    v4 = 40;
  }
  else {
    v4 = 20;
  }
  v5 = 15;
  if (a2 != 0 && *(_BYTE*)(v3 + 275) != 0) {
    v6 = *(_QWORD*)(a2 + 1744);
    v7 = ((unsigned __int64)(unsigned int)GameData_21d9864 >> 5) & 0x7F;
    if (v7 + 1 <= (*(_QWORD*)(a2 + 1752) - v6) >> 2 &&
        ((*(_DWORD*)(v6 + 4LL * (unsigned int)v7) >> GameData_21d9864) & 1) !=
            0) {
      goto LABEL_17;
    }
    v8 = *(_QWORD*)(a2 + 440);
    v9 = v8 != 0 ? *(_BYTE*)(v8 + 16) : 9;
    if (((1 << v9) & 6) != 0) {
      goto LABEL_17;
    }
    v12 = a1;
    v15[0] = 0;
    v13 = GameRoutine_6dd190(a2, v15, 0);
    if (v13 < 1) {
      v5 = 15;
      a1 = v12;
    }
    else {
      v14 = v13 * *(unsigned __int8*)(v3 + 275);
      a1 = v12;
      if (v14 < 0x65) {
      LABEL_17:
        v5 = 15;
        goto LABEL_18;
      }
      if (v14 <= 0x2BC) {
        v5 = (int)(float)((float)((float)((v14 + 99) / 0x64 - 1) / 7.0f) *
                          25.0f) +
             15;
      }
      else {
        v5 = 40;
      }
    }
  }
LABEL_18:
  if (v4 > v5) {
    v5 = v4;
  }
  if (v5 <= 5) {
    v5 = 5;
  }
  if (v5 >= 95) {
    v5 = 95;
  }
  result = (float)(unsigned int)v5 * 0.01f;
  *(float*)(a1 + 8) = result;
  return result;
}

void GameHr_131b050(__int64 a1, __int128* a2)
{
  float v3;
  float v4;
  float v5;
  __int64 v6;
  float v7;
  float v8;
  __int64 v9;
  __int64 v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  __int128 v17;

  if (GameData_2258178 != 0) {
    v3 = *(float*)(GameData_2258178 + 244);
  }
  else {
    v3 = 0.0f;
  }
  v4 = GameRoutine_1552870();
  v5 = (float)(v3 * v4) + (float)(v3 * v4);
  if (GameData_2258178 == 0) {
    v7 = 0.0f;
    v8 = v5 * 0.0f;
    goto LABEL_26;
  }
  if (*(_BYTE*)(GameData_2265ed8 + 807) == 1 &&
      ((*(_BYTE*)(GameData_2265ed8 + 804) & 1) != 0 ||
       *(_BYTE*)(GameData_2265ed8 + 940) == 1 &&
           *(_BYTE*)(GameData_2265ed8 + 805) == 1 &&
           (*(_BYTE*)(GameData_2265ed8 + 806) & 1) != 0)) {
    v6 = 520;
  LABEL_15:
    v9 = *(_QWORD*)(GameData_2258178 + v6);
    goto LABEL_16;
  }
  LODWORD(v9) = 0;
  if (*(_BYTE*)(GameData_2265ed8 + 903) == 1 &&
      ((*(_BYTE*)(GameData_2265ed8 + 900) & 1) != 0 ||
       *(_BYTE*)(GameData_2265ed8 + 940) == 1 &&
           *(_BYTE*)(GameData_2265ed8 + 901) == 1 &&
           *(_BYTE*)(GameData_2265ed8 + 902) == 1)) {
    v6 = 528;
    goto LABEL_15;
  }
LABEL_16:
  v8 = v5 * *(float*)&v9;
  if (*(_BYTE*)(GameData_2265ed8 + 807) != 0 &&
      ((*(_BYTE*)(GameData_2265ed8 + 804) & 1) != 0 ||
       *(_BYTE*)(GameData_2265ed8 + 940) == 1 &&
           *(_BYTE*)(GameData_2265ed8 + 805) == 1 &&
           (*(_BYTE*)(GameData_2265ed8 + 806) & 1) != 0)) {
    v10 = 524;
  LABEL_25:
    v7 = *(float*)(GameData_2258178 + v10);
    goto LABEL_26;
  }
  v7 = 0.0f;
  if (*(_BYTE*)(GameData_2265ed8 + 903) == 1 &&
      ((*(_BYTE*)(GameData_2265ed8 + 900) & 1) != 0 ||
       *(_BYTE*)(GameData_2265ed8 + 940) == 1 &&
           *(_BYTE*)(GameData_2265ed8 + 901) == 1 &&
           *(_BYTE*)(GameData_2265ed8 + 902) == 1)) {
    v10 = 532;
    goto LABEL_25;
  }
LABEL_26:
  v11 = v5 * v7;
  v12 = fminf(v8 + 0.2f, 0.0f);
  if (v8 >= 0.0f) {
    v12 = v8;
  }
  v13 = fmaxf(v8 + -0.2f, 0.0f);
  if (v8 > 0.0f) {
    v14 = v13;
  }
  else {
    v14 = v12;
  }
  if (v11 <= 0.0f) {
    if (v11 < 0.0f) {
      v11 = fminf(v11 + 0.2f, 0.0f);
    }
  }
  else {
    v11 = fmaxf(v11 + -0.2f, 0.0f);
  }
  v15 = (float)(v11 * v11) + (float)(v14 * v14);
  if (v15 > 8.0f) {
    v16 = (float)(-8.0f / v15) + 2.0f;
    v14 = v14 * v16;
    v11 = v11 * v16;
  }
  *(float*)a2 = v14;
  *((_DWORD*)a2 + 1) = 0;
  v17 = *a2;
  *((_QWORD*)&v17 + 1) = LODWORD(v11);
  *a2 = v17;
}

void GameHr_1385df0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  float v3;
  float v4;
  const char* v5;
  float v6;
  const char* v7;
  float v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  LayoutAccessor_155e830(a1 + 168, 1);
  if (GameData_2241728 != 0) {
    v2 = GameRoutine_18d0ec0_alt1((_QWORD*)(*GameData_212c598[0] + 144),
                                  (unsigned __int8*)(GameData_2241728 + 160));
    if (v2 != nullptr) {
      v3 = (float)*(__int64*)(v2[5] + 4880);
    }
    else {
      v3 = 0x0.0p+0f;
    }
    v4 = (float)((float)(v3 / 0x1.e848000000000p+19f) * 0x1.f400000000000p+9f) /
         0x1.0aaaaa0000000p+4f;
    v5 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 208LL))(a1);
    v6 = v4 - LayoutAccessor_15638b0((__int64*)(a1 + 168), v5, 1);
    v7 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 216LL))(a1);
    v8 = v6 - LayoutAccessor_15638b0((__int64*)(a1 + 168), v7, 1);
    if (*(_DWORD*)(a1 + 320) == 2) {
      v9 = (_QWORD*)game_ProcGameSkipView_instance_;
      if (game_ProcGameSkipView_instance_ != 0) {
        v11 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
        v10 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
        v13 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
        v12 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
        v14 = v12 == v13;
        v15 = v10 - 1 + v11;
        v16 = v15 >> 7;
        v17 = v15 & 0x7F;
        v18 = 16 * (v12 - v13) - 1;
        v19 = *(_QWORD*)(v13 + 8 * v16);
        if (v14) {
          v18 = 0;
        }
        v20 = v19 + 32 * v17;
        *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
            *(_DWORD*)v20 & 0xFFFFFFFD |
            (2 *
             ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
        v9[21] = *(_QWORD*)(v20 + 24);
        v21 = *(_QWORD*)(v20 + 16);
        v9[27] = v10 - 1;
        v9[20] = v21;
        if ((unsigned __int64)(v18 - (v10 + v11) - 255) <=
            0xFFFFFFFFFFFFFEFFLL) {
          v22 = *(_QWORD*)(v12 - 8);
          if (v22 != 0) {
            v23 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v23 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v22);
            v12 = v9[24];
          }
          v9[24] = v12 - 8;
        }
      }
    }
    v24 = GameData_2241728;
    *(_DWORD*)(a1 + 320) = 1;
    *(float*)(a1 + 324) = v8;
    *(_BYTE*)(v24 + 153) = 1;
  }
}

__int64 GameHr_14877f0(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _BYTE* v20;
  unsigned __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  unsigned __int64 v26;
  char* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  float v32;
  unsigned __int64 v33;
  char* v34;
  unsigned __int64 v35;
  char v36;
  char* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  __int64 v43;
  __int64 result;
  __int64 v45;
  __int64 v46;
  struct {
    _QWORD v47[2];
    char* v48;
  } v47_;
  struct {
    __int64 v49;
    unsigned __int64 v50;
    char* v51;
  } v49_;
  struct {
    __int64 v52;
    unsigned __int64 v53;
    char* v54;
  } v52_;
  struct {
    __int64 v55;
    unsigned __int64 v56;
    char* v57;
  } v55_;
  struct {
    __int64 v58;
    unsigned __int64 v59;
    char* v60;
  } v58_;

  v4 = (__int64*)GameData_212dce8;
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dce8 + 8LL) & 1) != 0) {
    v5 = *(_QWORD*)(*(_QWORD*)GameData_212dce8 + 24LL);
  }
  else {
    v5 = *(_QWORD*)GameData_212dce8 + 9LL;
  }
  v6 = GameRoutine_1a09c70(v5);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_106;
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = (char*)GameRoutine_651b90(GameData_2265ee0, v9, 16, 0);
    v58_.v59 = v7;
    v58_.v60 = v8;
    v58_.v58 = v9 | 1;
    goto LABEL_12;
  }
  LOBYTE(v58_.v58) = 2 * v6;
  v8 = (char*)&v58_.v58 + 1;
  if (v6 != 0) {
  LABEL_12:
    GameRoutine_1a0b940(v8, v5, v7);
  }
  v10 = *v4;
  v8[v7] = 0;
  v11 = *(_BYTE*)(v10 + 32);
  v12 = *(_QWORD*)(v10 + 48);
  v13 = v10 + 33;
  if ((v11 & 1) != 0) {
    v14 = v12;
  }
  else {
    v14 = v13;
  }
  v6 = GameRoutine_1a09c70(v14);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_106;
  }
  v15 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (v6 | 7) + 1;
    }
    v16 = (char*)GameRoutine_651b90(GameData_2265ee0, v17, 16, 0);
    v55_.v56 = v15;
    v55_.v57 = v16;
    v55_.v55 = v17 | 1;
  }
  else {
    LOBYTE(v55_.v55) = 2 * v6;
    v16 = (char*)&v55_.v55 + 1;
    if (v6 == 0) {
      goto LABEL_25;
    }
  }
  GameRoutine_1a0b940(v16, v14, v15);
LABEL_25:
  v18 = *v4;
  v16[v15] = 0;
  v19 = *(_QWORD*)(v18 + 104);
  if (v19 == 0) {
    goto LABEL_75;
  }
  v20 = *(_BYTE**)(v19 + 40);
  if (v20 == nullptr || *v20 == 0) {
    goto LABEL_75;
  }
  v6 = GameRoutine_1a09c70(v20);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_106:
    GameRoutine_60a1d0(v6);
  }
  v21 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v23 = 26;
    }
    else {
      v23 = (v6 | 7) + 1;
    }
    v22 = (char*)GameRoutine_651b90(GameData_2265ee0, v23, 16, 0);
    v47_.v47[1] = v21;
    v47_.v48 = v22;
    v47_.v47[0] = v23 | 1;
  }
  else {
    LOBYTE(v47_.v47[0]) = 2 * v6;
    v22 = (char*)v47_.v47 + 1;
    if (v6 == 0) {
      goto LABEL_37;
    }
  }
  GameRoutine_1a0b940(v22, v20, v21);
LABEL_37:
  v22[v21] = 0;
  GameRoutine_13f8ba0((void*)(&v49_.v49), v47_.v47);
  if ((v47_.v47[0] & 1) != 0 && v47_.v48 != nullptr) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v24 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v24, (_QWORD)(v47_.v48));
  }
  if ((v58_.v58 & 1) != 0) {
    if ((v49_.v49 & 1) != 0) {
      v25 = v49_.v51;
    }
    else {
      v25 = (char*)&v49_.v49 + 1;
    }
    if ((v49_.v49 & 1) != 0) {
      v26 = v49_.v50;
    }
    else {
      v26 = (unsigned __int64)(unsigned __int8)v49_.v49 >> 1;
    }
    GameRoutine_64dde0(&v58_.v58, v25, v26);
  }
  else if ((v49_.v49 & 1) != 0) {
    GameRoutine_64df20(&v58_.v58, v49_.v51, v49_.v50);
  }
  else {
    v58_.v58 = v49_.v49;
    v58_.v59 = v49_.v50;
    v58_.v60 = v49_.v51;
  }
  if ((v55_.v55 & 1) != 0) {
    if ((v52_.v52 & 1) != 0) {
      v27 = v52_.v54;
    }
    else {
      v27 = (char*)&v52_.v52 + 1;
    }
    if ((v52_.v52 & 1) != 0) {
      v28 = v52_.v53;
    }
    else {
      v28 = (unsigned __int64)(unsigned __int8)v52_.v52 >> 1;
    }
    GameRoutine_64dde0(&v55_.v55, v27, v28);
    if ((v52_.v52 & 1) == 0) {
      goto LABEL_69;
    }
    goto LABEL_65;
  }
  if ((v52_.v52 & 1) == 0) {
    v55_.v55 = v52_.v52;
    v55_.v56 = v52_.v53;
    v55_.v57 = v52_.v54;
    goto LABEL_69;
  }
  GameRoutine_64df20(&v55_.v55, v52_.v54, v52_.v53);
  if ((v52_.v52 & 1) != 0) {
  LABEL_65:
    if (v52_.v54 != nullptr) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v29 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v29, (_QWORD)(v52_.v54));
    }
  }
LABEL_69:
  if ((v49_.v49 & 1) != 0 && v49_.v51 != nullptr) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v30 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v30, (_QWORD)(v49_.v51));
  }
  v18 = *v4;
LABEL_75:
  v31 = a2 & 0x100000000LL;
  v32 = *(float*)&a2 * 1000.0f;
  if ((v58_.v58 & 1) != 0) {
    v33 = v58_.v59;
  }
  else {
    v33 = (unsigned __int64)(unsigned __int8)v58_.v58 >> 1;
  }
  if ((v58_.v58 & 1) != 0) {
    v34 = v58_.v60;
  }
  else {
    v34 = (char*)&v58_.v58 + 1;
  }
  if ((v55_.v55 & 1) != 0) {
    v35 = v55_.v56;
  }
  else {
    v35 = (unsigned __int64)(unsigned __int8)v55_.v55 >> 1;
  }
  v36 = *(_BYTE*)(v18 + 56);
  if ((v55_.v55 & 1) != 0) {
    v37 = v55_.v57;
  }
  else {
    v37 = (char*)&v55_.v55 + 1;
  }
  v38 = *(_QWORD*)(v18 + 72);
  v39 = v18 + 57;
  if ((v36 & 1) != 0) {
    v40 = v38;
  }
  else {
    v40 = v39;
  }
  v41 = GameRoutine_1a09c70(v40);
  if (a1 != 0) {
    v42 = *(char**)(a1 + 32);
  }
  else {
    v42 = &GameData_1a9f09e;
  }
  v43 = LODWORD(v32);
  if (v31 == 0) {
    v43 = 0;
  }
  result = GameRoutine_810380(v34, v33, v37, v35, v40, v41, v42, v43 | v31);
  if ((v55_.v55 & 1) != 0 && v55_.v57 != nullptr) {
    v45 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v45 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v45,
                                 (_QWORD)(v55_.v57));
  }
  if ((v58_.v58 & 1) != 0 && v58_.v60 != nullptr) {
    v46 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v46 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v46,
                               (_QWORD)(v58_.v60));
  }
  return result;
}

__int64 GameHr_174da00(__int64 a1, int a2)
{
  char v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  int v12;
  float v13;
  float v14;
  float v15;
  float v16;
  int v17;
  float v18;
  float* v19;
  float v20;
  float v21;
  int v22;
  int v23;
  float v24;
  float v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  int v33;
  int v34;

  v4 = (**(__int64 (***)(__int64))a1)(a1);
  v5 = 0.0f;
  if ((v4 & 1) != 0) {
    if (a2 == 1) {
      v6 = *(float*)(a1 + 40);
      v7 = *(float*)(a1 + 44);
      v8 = (float)(*(float*)(GameData_2265ae0 + 104) * 16.683f) / 1000.0f;
      if ((*(_DWORD*)(GameData_2265ed8 + 944) & 0xB) != 0) {
        v8 = v8 * 8.0f;
      }
      v9 = v7 + v8;
      if (v6 >= v9) {
        v10 = v9;
      }
      else {
        v10 = *(float*)(a1 + 40);
      }
      if (v9 >= 0.0f) {
        v11 = v10;
      }
      else {
        v11 = 0.0f;
      }
      v13 = *(float*)(a1 + 16);
      v12 = *(_DWORD*)(a1 + 20);
      *(float*)(a1 + 44) = v11;
      v14 = (float)v12;
      v15 = GameRoutine_618640(4, 0.0f, (float)v12, v11, v6);
      v16 = *(float*)(a1 + 16);
      v17 = *(unsigned __int8*)(a1 + 48);
      *(float*)(a1 + 44) = v7;
      v5 = v15 - (float)(v14 - v16);
      if (v5 >= v13) {
        v18 = v5;
      }
      else {
        v18 = v13;
      }
      if (v13 < v5) {
        v5 = v13;
      }
      if (v17 != 0) {
        v5 = v18;
      }
    }
    else if (a2 == 2) {
      v5 = *(float*)(a1 + 16);
    }
  }
  v19 = (float*)(a1 + 16);
  v20 = *(float*)(a1 + 16);
  v21 = *(float*)(a1 + 32);
  v22 = *(_DWORD*)(a1 + 8);
  v23 = *(unsigned __int8*)(a1 + 48);
  v24 = v20 - v5;
  *(float*)(a1 + 16) = v20 - v5;
  if (v23 == 1) {
    v34 = 0;
    if (v24 >= 0.0f) {
      v19 = (float*)&v34;
    }
  }
  else {
    v33 = 0;
    if (v24 <= 0.0f) {
      v19 = (float*)&v33;
    }
  }
  v25 = *v19;
  v26 = *(_DWORD*)(a1 + 36);
  v27 = (int)(float)(v5 + v21);
  if (v25 == 0.0f) {
    v27 = *(_DWORD*)(a1 + 36);
  }
  *(_DWORD*)(a1 + 8) = v27;
  if (v27 >= v26) {
    v28 = 8;
  }
  else {
    v28 = 36;
  }
  if (v26 >= v27) {
    v29 = 8;
  }
  else {
    v29 = 36;
  }
  if (v23 != 0) {
    v30 = v28;
  }
  else {
    v30 = v29;
  }
  v31 = *(_DWORD*)(a1 + v30);
  *(float*)(a1 + 16) = v20;
  *(_DWORD*)(a1 + 8) = v22;
  return (unsigned int)(v31 - v22);
}

__int64 GameHr_174dbb0(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  char v8;
  float v9;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  int v16;
  float v17;
  float v18;
  float* v19;
  int v20;
  int v21;
  float v22;
  int v23;
  float v24;
  bool v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  int v31;
  int v32;

  if (*(_BYTE*)(a1 + 49) != 1) {
    return 0;
  }
  v8 = (**(__int64 (***)(__int64))a1)(a1);
  v9 = 0x0.0p+0f;
  if ((v8 & 1) != 0) {
    if (a2 == 1) {
      v11 = (float)(*(float*)(as_g_base_frame_counter + 104) *
                    0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f;
      if ((*(_DWORD*)(game_g_game_setting + 944) & 0xB) != 0) {
        v11 = v11 * 0x1.0000000000000p+3f;
      }
      v12 = *(float*)(a1 + 40);
      v13 = *(float*)(a1 + 44) + v11;
      if (v12 >= v13) {
        v14 = v13;
      }
      else {
        v14 = *(float*)(a1 + 40);
      }
      if (v13 >= 0x0.0p+0f) {
        v15 = v14;
      }
      else {
        v15 = 0x0.0p+0f;
      }
      v17 = *(float*)(a1 + 16);
      v16 = *(_DWORD*)(a1 + 20);
      *(float*)(a1 + 44) = v15;
      v9 = GameRoutine_618640_alt1(4, 0x0.0p+0f, (float)v16, v15, v12) -
           (float)((float)v16 - *(float*)(a1 + 16));
      if (v9 >= v17) {
        v18 = v9;
      }
      else {
        v18 = v17;
      }
      if (v17 < v9) {
        v9 = v17;
      }
      if (*(_BYTE*)(a1 + 48) != 0) {
        v9 = v18;
      }
    }
    else if (a2 == 2) {
      v9 = *(float*)(a1 + 16);
    }
  }
  v19 = (float*)(a1 + 16);
  v20 = *(_DWORD*)(a1 + 8);
  v21 = *(unsigned __int8*)(a1 + 48);
  v22 = *(float*)(a1 + 16) - v9;
  *(float*)(a1 + 16) = v22;
  if (v21 == 1) {
    v32 = 0;
    if (v22 >= 0x0.0p+0f) {
      v19 = (float*)&v32;
    }
  }
  else {
    v31 = 0;
    if (v22 <= 0x0.0p+0f) {
      v19 = (float*)&v31;
    }
  }
  v23 = *(_DWORD*)(a1 + 36);
  v24 = v9 + *(float*)(a1 + 32);
  v25 = *v19 == 0x0.0p+0f;
  *(float*)(a1 + 16) = *v19;
  v26 = (int)v24;
  *(float*)(a1 + 32) = v24;
  if (v25) {
    v26 = v23;
  }
  *(_DWORD*)(a1 + 8) = v26;
  if (v26 >= v23) {
    v27 = 8;
  }
  else {
    v27 = 36;
  }
  if (v23 >= v26) {
    v28 = 8;
  }
  else {
    v28 = 36;
  }
  if (v21 != 0) {
    v29 = v27;
  }
  else {
    v29 = v28;
  }
  v30 = *(_DWORD*)(a1 + v29);
  *(_BYTE*)(a1 + 30) = 0;
  *(_DWORD*)(a1 + 8) = v30;
  (*(void (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1);
  return (unsigned int)(*(_DWORD*)(a1 + 8) - v20);
}

__int64 GameHr_1840500(__int64 a1, unsigned int a2, __int64 a3, __int64* a4,
                       int a5)
{
  bool v5;
  unsigned int v6;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  float v17;
  float v18;
  bool v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  __int64 v36;
  __int64 v37;
  __int64 v39;

  v5 = a1 == 0 || a3 == 0;
  v6 = !v5;
  if (v5) {
    return v6;
  }
  if (a5 == 0) {
    v9 = a4;
    v10 = a1;
    v11 = GameRoutine_58fac0(a1, "FaceCenterType");
    if (v11 != 0) {
      a4 = v9;
      a5 = *(_DWORD*)(v11 + *(unsigned int*)(v11 + 4));
      a1 = v10;
      if (a5 != 3) {
        goto LABEL_13;
      }
    }
    else {
      v13 = GameRoutine_58f8a0(v10);
      v14 = *(_QWORD*)(v13 + 24);
      v15 = *(_DWORD*)(v13 + 16);
      v12 = 0x3F0000003F000000LL;
      a1 = v10;
      v16 = v14 + 16LL * (v15 & 3) + 20LL * (int)a2;
      v17 = *(float*)(v16 + 12);
      v18 = *(float*)(v16 + 16);
      v19 = v17 < 0.9f || v18 < 0.9f;
      if (!v19) {
        goto LABEL_24;
      }
      a4 = v9;
      if ((float)(v18 / v17) <= 0.6f) {
        goto LABEL_14;
      }
    }
  LABEL_21:
    v12 = a4[2];
    if (*(float*)&v12 < 0.0f || *((float*)&v12 + 1) < 0.0f) {
      v12 = a4[1];
    }
    goto LABEL_24;
  }
  if (a5 == 3) {
    goto LABEL_21;
  }
LABEL_13:
  v12 = 0x3F0000003F000000LL;
  if (a5 == 2) {
  LABEL_14:
    v12 = *a4;
  }
LABEL_24:
  v39 = v12;
  v20 = a1;
  *(_QWORD*)(*(_QWORD*)(GameRoutine_58f8a0(a1) + 24) + 16LL * (int)a2 + 8) = a3;
  GameRoutine_156d210(v20, a2, 0);
  v21 = GameRoutine_58f8a0(v20);
  v22 = 5LL * (int)a2;
  v23 = *(_QWORD*)(v21 + 24) + 16LL * (*(_DWORD*)(v21 + 16) & 3) + 4 * v22;
  v24 = fminf(*(float*)(v23 + 12) * 0.5f, 0.5f);
  v25 = fminf(*(float*)(v23 + 16) * 0.5f, 0.5f);
  v26 = v24 + v24;
  v27 = v25 + v25;
  if ((float)(*(float*)&v39 - v24) >= 0.0f) {
    v28 = *(float*)&v39;
  }
  else {
    v28 = *(float*)&v39 - (float)(*(float*)&v39 - v24);
  }
  v29 = 1.0f - (float)(v24 + v28);
  v30 = v28 + v29;
  v19 = v29 < 0.0f;
  v31 = *((float*)&v39 + 1) - v25;
  if (v19) {
    v28 = v30;
  }
  if (v31 >= 0.0f) {
    v32 = *((float*)&v39 + 1);
  }
  else {
    v32 = *((float*)&v39 + 1) - v31;
  }
  v33 = 1.0f - (float)(v25 + v32);
  if (v33 < 0.0f) {
    v32 = v32 + v33;
  }
  v34 = v28 + -0.5f;
  v35 = v32 + -0.5f;
  v36 = GameRoutine_58f8a0(v20);
  v37 = *(_QWORD*)(v36 + 24) + 16LL * (*(_DWORD*)(v36 + 16) & 3) + 4 * v22;
  *(float*)v37 = v34;
  *(float*)(v37 + 4) = v35;
  *(_DWORD*)(v37 + 8) = 0;
  *(float*)(v37 + 12) = v26;
  *(float*)(v37 + 16) = v27;
  return v6;
}

__int64 GameHr_187d880(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  float v13;
  __int64 v14;
  __int64 v15;
  _BYTE* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _BYTE v23[32];
  _BYTE* v24;
  _BYTE v25[32];
  _BYTE* v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;

  v4 = *(_QWORD*)(a3 + 32);
  if (v4 != 0) {
    if (v4 == a3) {
      v24 = v23;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 24LL))(v4, v23);
    }
    else {
      v24 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    }
  }
  else {
    v24 = nullptr;
  }
  v6 = (_QWORD*)GameData_212bf68;
  v7 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1104, 16, 0);
  v27 = 0;
  v28 = 0;
  v8 = GameRoutine_16dcd30(v7, "ProcTalkSelectQuestMenu", &v27, 0);
  v9 = GameData_212d6a8;
  v10 = v28;
  *(_QWORD*)v7 = GameData_212d6a8 + 2;
  *(_QWORD*)(v7 + 176) = v9 + 143;
  *(_QWORD*)(v7 + 1056) = v9 + 169;
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    v8 = GameRoutine_1a09c50(v10);
  }
  *(_BYTE*)(v7 + 1064) = 0;
  *(_QWORD*)v7 = GameData_20fad00;
  *(_BYTE*)(v7 + 361) = 1;
  *(_QWORD*)(v7 + 176) = GameData_20fb180;
  *(_QWORD*)(v7 + 1056) = GameData_20fb250;
  GameRoutine_8679c0(v8);
  v11 = GameData_21ee240;
  if (GameData_21ee240 != 0) {
    v12 = *(_DWORD*)(GameData_21ee240 + 156);
    if ((v12 & 0x10) == 0) {
      v13 = *(float*)(GameData_21ee240 + 224);
      *(_DWORD*)(GameData_21ee240 + 156) = v12 & 0xFFFFFFE2 | 1;
      if (v13 > 0.0f) {
        *(_DWORD*)(v11 + 224) = 0;
      }
    }
  }
  *(_BYTE*)(v7 + 1064) = 1;
  *(_QWORD*)(v7 + 1080) = a2;
  *(_BYTE*)(v7 + 1088) = 0;
  *(_QWORD*)v7 = GameData_20fa540;
  *(_QWORD*)(v7 + 176) = GameData_20fa9c8;
  *(_QWORD*)(v7 + 1056) = GameData_20faa98;
  *(_QWORD*)(v7 + 1072) = GameData_20fab30;
  GameRoutine_657850(v7, GameData_212c730, "ProcTalkSelectQuestMenu", 1, a1);
  v14 = *v6;
  if ((*(_BYTE*)(a2 + 9) & 0xFE) != 2) {
    v17 = GameRoutine_651b90(v14, 96, 16, 0);
    *(_WORD*)(v17 + 16) = 0;
    *(_DWORD*)(v17 + 40) = 0;
    *(_QWORD*)(v17 + 48) = 0;
    *(_QWORD*)(v17 + 56) = 0;
    *(_QWORD*)(v17 + 64) = 0;
    *(_QWORD*)(v17 + 72) = 0;
    *(_QWORD*)(v17 + 88) = a2;
    *(_WORD*)(v17 + 80) = 257;
    *(_BYTE*)(v17 + 82) = 1;
    *(_QWORD*)v17 = GameData_20fb7d8;
    *(_QWORD*)(v17 + 8) = 0;
    GameRoutine_16e0c00(v7, v17);
    goto LABEL_35;
  }
  v15 = GameRoutine_651b90(v14, 144, 16, 0);
  v16 = v24;
  if (v24 != nullptr) {
    if (v24 == v23) {
      v26 = v25;
      (*(void (**)(__int64))(*(_QWORD*)v24 + 24LL))((__int64)v24);
      v16 = v26;
    }
    else {
      v16 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v24 + 16LL))(
          (__int64)v24);
      v26 = v16;
    }
  }
  else {
    v26 = nullptr;
  }
  *(_WORD*)(v15 + 16) = 0;
  *(_DWORD*)(v15 + 40) = 0;
  *(_QWORD*)(v15 + 48) = 0;
  *(_QWORD*)(v15 + 56) = 0;
  *(_QWORD*)(v15 + 64) = 0;
  *(_QWORD*)(v15 + 72) = 0;
  *(_QWORD*)(v15 + 88) = a2;
  *(_QWORD*)(v15 + 128) = 0;
  *(_WORD*)(v15 + 80) = 257;
  *(_BYTE*)(v15 + 82) = 1;
  *(_QWORD*)v15 = GameData_20fd288;
  *(_QWORD*)(v15 + 8) = 0;
  if (v16 != nullptr) {
    if (v16 == v25) {
      v29 = &v27;
      (*(void (**)(_BYTE*, __int64*))(*(_QWORD*)v16 + 24LL))(v16, &v27);
    }
    else {
      v29 = (__int64*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v16 + 16LL))(v16);
    }
  }
  else {
    v29 = nullptr;
  }
  GameRoutine_654050(&v27, v15 + 96);
  if (v29 == &v27) {
    v18 = 32;
  }
  else {
    if (v29 == nullptr) {
      goto LABEL_30;
    }
    v18 = 40;
  }
  (*(void (**)(__int64))(*v29 + v18))((__int64)v29);
LABEL_30:
  GameRoutine_16e0c00(v7, v15);
  if (v26 == v25) {
    v19 = 32;
  }
  else {
    if (v26 == nullptr) {
      goto LABEL_35;
    }
    v19 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v26 + v19))((__int64)v26);
LABEL_35:
  v20 = GameRoutine_651b90(*v6, 96, 16, 0);
  *(_WORD*)(v20 + 16) = 0;
  *(_DWORD*)(v20 + 40) = 0;
  *(_QWORD*)(v20 + 48) = 0;
  *(_QWORD*)(v20 + 56) = 0;
  *(_QWORD*)(v20 + 64) = 0;
  *(_QWORD*)(v20 + 72) = 0;
  *(_QWORD*)(v20 + 88) = a2;
  *(_WORD*)(v20 + 80) = 257;
  *(_BYTE*)(v20 + 82) = 1;
  *(_QWORD*)v20 = GameData_20fbe30;
  *(_QWORD*)(v20 + 8) = 0;
  GameRoutine_16e0c00(v7, v20);
  if (v24 == v23) {
    v21 = 32;
    goto LABEL_39;
  }
  if (v24 != nullptr) {
    v21 = 40;
  LABEL_39:
    (*(void (**)(__int64))(*(_QWORD*)v24 + v21))((__int64)v24);
  }
  return v7;
}

float GameHr_1909d60(__int64 a1, unsigned __int8* a2, unsigned __int8* a3,
                     _QWORD* a4)
{
  __int64 v4;
  float v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  float v18;
  float v19;
  unsigned __int64 v20;
  bool v21;
  unsigned __int64 v22;
  unsigned __int8* v23;
  __int64 v24;
  unsigned __int64 v25;
  bool v26;
  unsigned __int64 v27;
  unsigned __int8* v28;
  __int64 v29;
  float v30;
  float v31;
  float result;

  v4 = *a4;
  v8 = GameRoutine_55c280(*a4);
  *(_QWORD*)(a1 + 8) = *(_QWORD*)v4;
  v9 = *(_QWORD*)(v4 + 56);
  v11 = *(_QWORD*)(v4 + 40);
  v10 = *(_QWORD*)(v4 + 48);
  *(_QWORD*)(a1 + 72) = *(_QWORD*)(v4 + 64);
  v12 = *(_QWORD*)(v4 + 8);
  v13 = *(_QWORD*)(v4 + 16);
  v14 = *(_QWORD*)(v4 + 24);
  v15 = *(_QWORD*)(v4 + 32);
  *(_QWORD*)(a1 + 56) = v10;
  *(_QWORD*)(a1 + 64) = v9;
  *(_QWORD*)(a1 + 48) = v11;
  *(_QWORD*)(a1 + 32) = v14;
  *(_QWORD*)(a1 + 40) = v15;
  *(_QWORD*)(a1 + 16) = v12;
  *(_QWORD*)(a1 + 24) = v13;
  v16 = *(_QWORD*)(v4 + 72);
  v17 = *(_QWORD*)(v4 + 88);
  LODWORD(v12) = *(_DWORD*)(v4 + 96);
  *(_QWORD*)(a1 + 88) = *(_QWORD*)(v4 + 80);
  *(_QWORD*)(a1 + 96) = v17;
  *(_DWORD*)(a1 + 104) = v12;
  *(_QWORD*)(a1 + 72) = 0x40000000;
  *(_QWORD*)(a1 + 80) = v16;
  v18 = *(float*)(v4 + 12);
  v19 = *(float*)(v4 + 16);
  *(_DWORD*)(a1 + 88) = 784;
  *(float*)(a1 + 20) = v18 * 0.45f;
  *(float*)(a1 + 24) = v19 * 0.45f;
  GameRoutine_566340(a1 + 8);
  v20 = *a3;
  v21 = (v20 & 1) == 0;
  v22 = v20 >> 1;
  if (v21) {
    v23 = a3 + 1;
  }
  else {
    v23 = *((unsigned __int8**)a3 + 2);
  }
  if (v21) {
    v24 = (unsigned int)v22;
  }
  else {
    v24 = *((unsigned int*)a3 + 2);
  }
  GameRoutine_5664a0(v4, a1 + 128, v23, v24);
  v25 = *a2;
  v26 = (v25 & 1) == 0;
  v27 = v25 >> 1;
  if (v26) {
    v28 = a2 + 1;
  }
  else {
    v28 = *((unsigned __int8**)a2 + 2);
  }
  if (v26) {
    v29 = (unsigned int)v27;
  }
  else {
    v29 = *((unsigned int*)a2 + 2);
  }
  GameRoutine_5664a0(a1 + 8, a1 + 112, v28, v29);
  v30 = *(float*)(a1 + 136) - *(float*)(a1 + 128);
  if (v30 < (float)(*(float*)(a1 + 120) - *(float*)(a1 + 112))) {
    *(_DWORD*)(a1 + 72) = 0;
  }
  v31 = *(float*)(a1 + 32) - v8;
  *(float*)(a1 + 28) = (float)(v30 * 0.5f) + *(float*)(a1 + 28);
  *(float*)(a1 + 32) = v31;
  *(_DWORD*)(a1 + 144) = *(_DWORD*)(v4 + 20);
  result = *(float*)(v4 + 24);
  *(_BYTE*)(a1 + 176) = 1;
  *(float*)(a1 + 148) = result;
  return result;
}

__int64 GameHr_1952d00(__int64 a1, __int64 a2, __int64 a3)
{
  float v4;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  float v11;
  float v12;
  __int64 result;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _BYTE v19[32];
  _BYTE* v20;

  v4 = *(float*)&a2;
  if ((*(_BYTE*)(a1 + 136) & 1) == 0) {
    v7 = *(_QWORD**)(a1 + 96);
    *(_QWORD*)(a1 + 96) = 0;
    *(_BYTE*)(a1 + 136) = 1;
    if (v7 == (_QWORD*)(a1 + 64)) {
      v8 = 32;
    }
    else {
      if (v7 == nullptr) {
        goto LABEL_7;
      }
      v8 = 40;
    }
    (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
  LABEL_7:
    v9 = *(_QWORD*)(a1 + 112);
    v10 = *(_QWORD*)(a1 + 120);
    if (v9 == v10) {
    LABEL_8:
      *(_QWORD*)(a1 + 120) = v9;
      goto LABEL_9;
    }
    while (1) {
      v15 = *(_QWORD**)(v10 - 16);
      *(_QWORD*)(v10 - 16) = 0;
      if ((_QWORD*)(v10 - 48) == v15) {
        v16 = 32;
      }
      else {
        if (v15 == nullptr) {
          goto LABEL_18;
        }
        v16 = 40;
      }
      (*(void (**)(__int64))(*v15 + v16))((__int64)v15);
      v17 = *(_QWORD**)(v10 - 16);
      if ((_QWORD*)(v10 - 48) == v17) {
        v14 = 32;
      }
      else {
        if (v17 == nullptr) {
          goto LABEL_18;
        }
        v14 = 40;
      }
      (*(void (**)(__int64))(*v17 + v14))((__int64)v17);
    LABEL_18:
      v10 -= 64;
      if (v10 == v9) {
        goto LABEL_8;
      }
    }
  }
LABEL_9:
  v11 = *(float*)(a1 + 32);
  v12 = 0.0f;
  *(_BYTE*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 36) = 0;
  *(_DWORD*)(a1 + 48) = 0;
  if (v4 >= 0.0f) {
    v12 = v4;
  }
  if ((a2 & 0x100000000LL) != 0) {
    v11 = v12;
  }
  *(float*)(a1 + 32) = v11;
  *(float*)(a1 + 44) = v11;
  result = *(_QWORD*)(a3 + 32);
  if (result != 0) {
    if (result == a3) {
      v20 = v19;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)result + 24LL))(result, v19);
    }
    else {
      v20 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    }
    GameRoutine_654050(v19, a1 + 64);
    result = (__int64)v20;
    if (v20 == v19) {
      v18 = 32;
    }
    else {
      if (v20 == nullptr) {
        return result;
      }
      v18 = 40;
    }
    return (*(__int64 (**)(__int64))(*(_QWORD*)v20 + v18))((__int64)v20);
  }
  return result;
}

#pragma GCC visibility pop
