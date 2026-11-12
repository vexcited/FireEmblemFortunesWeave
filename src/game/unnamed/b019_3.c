#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int128 GameData_1a837f0;
extern char GameData_1a9f09e;
extern __int64 (*GameData_2049620[])();
extern __int64 GameData_212bf68;
extern _UNKNOWN* GameData_212c540;
extern __int64 GameData_212c638;
extern __int64* GameData_212c780;
extern __int64 GameData_212cf60;
extern __int64* GameData_212d728[2];
extern __int64* GameData_212de58[3];
extern __int64* GameData_21316e0[15];
extern __int64 GameData_21c96e8;
extern __int64 GameData_21c9718;
extern __int64 GameData_21ca310;
extern __int64 GameData_21caab0;
extern __int64 GameData_21ee260;
extern __int64 GameData_21f1648;
extern __int64 GameData_21f49b8;
extern __int64 GameData_224b698;
extern __int64 GameData_224b6a0;
extern __int64 GameData_224b6a8;
extern __int64 GameData_2265ef8;
__int64 GameRoutine_125d3e0(_QWORD);
__int64 GameRoutine_1328d60(_QWORD);
__int64 GameRoutine_13305c0(_QWORD, _QWORD);
__int64 GameRoutine_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameRoutine_14a1cc0(__int64*, float);
__int64 GameRoutine_14a36c0(_QWORD*, __int64*, int*);
__int64 GameRoutine_14cd5c0();
__int64 GameRoutine_1515ac0(_QWORD);
__int64 GameRoutine_15317a0(_QWORD);
__int64 GameRoutine_175b880(_QWORD);
__int64 GameRoutine_1a09c50();
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_682780(_QWORD);
void __attribute__((noreturn)) GameRoutine_6c1f60(_QWORD);
__int64 GameRoutine_6c47b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6d8390(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6ead60(_QWORD, _QWORD);
__int64 GameRoutine_70d7a0(_QWORD);
__int64 GameRoutine_70ea50(_QWORD, _QWORD);
__int64 GameRoutine_a2d080(_QWORD);
__int64 GameRoutine_a6c440(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_bc6460(_QWORD, _QWORD, _QWORD);
_BYTE* GmapSound_15317a0(_BYTE* result);
__attribute__((swiftcall)) void Dir_70ea50(PSEUDO_X8, __int16* result, __int64);
__int64* Manager_bc6460(_QWORD*, __int64, char);
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameManager_a2d080(__int64);
__int64 GameRoutine_1328d60_alt1(__int64) __asm__("GameRoutine_1328d60");
__int64 GameRoutine_14a36c0_alt1(__int64*, __int64*,
                                 int*) __asm__("GameRoutine_14a36c0");
__int64 GameRoutine_175b880_alt1(__int64) __asm__("GameRoutine_175b880");
__int64 game_14a1cc0(__int64*, float);
__int64 game_gmap_SpotAttachmentFarm_GetGrowthData();
__int64 std___1___shared_weak_count___release_weak(__int64);
__n64 GameRoutine_a6c440_alt1(float32x4_t*, __int128*,
                              float32x4_t*) __asm__("GameRoutine_a6c440");
extern __int64 (*game_gmap_SpotAttachmentFarm_vtable[])();
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 game_sound_g_game_sound;
unsigned __int16* Dir_70d7a0(unsigned __int16* result);
unsigned int* game_gmap_SpotMgr_GetCurrentSpot();
void GameSubquestData_125d3e0(__int64);
__int64 GameHr_14b8ca0(__int64 a1);
__int64 GameHr_14cd7c0(__int64 a1);
__int64 GameHr_15154c0();
unsigned __int16* GameHr_1515810(__int64* a1, __int64 a2, __int64 a3);

__int64 GameHr_149e3e0(_QWORD* a1, __int64* a2, int* a3)
{
  int v3;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64* i;
  __int64* v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64* v39;

  if (a2 != nullptr) {
    v3 = *a3;
    v39 = a2;
    v38 = v3 | 0x100;
    result = GameRoutine_6ead60(&v39, &v38);
    if (result != 0) {
      return result;
    }
    LOBYTE(v39) = 8;
    v7 = *(_QWORD*)(GameData_21ca310 + 56);
    v8 = *(_QWORD*)(v7 + 556216);
    if (v8 != 0) {
      GameRoutine_6c47b0(*(_QWORD*)(v7 + 556216), &v39, 1, 0);
      v9 = v8;
      GameRoutine_6d8390(v8, a2, 0);
      v10 = (__int64*)GameRoutine_682780(9);
      if (a2 == v10) {
        v10 = (__int64*)GameRoutine_682780(9);
        v11 = v8;
        if (v10 == nullptr) {
          goto LABEL_16;
        }
        for (i = v10; i != nullptr; i = (__int64*)i[78]) {
          v13 = i;
        }
        if (*((_BYTE*)v13 + 441) != 3) {
          goto LABEL_16;
        }
        v14 = (__int64*)v10[78];
        if (v14 == nullptr) {
          v14 = v10;
        }
        v39 = v14;
        v38 = 241;
        v10 = (__int64*)GameRoutine_6ead60(&v39, &v38);
        if (v10 != nullptr) {
          v15 = v10 + 263;
          v11 = v8;
          goto LABEL_17;
        }
        v16 = *(_QWORD*)(GameData_21caab0 + 176);
        v11 = v8;
        if (*(_BYTE*)(v16 + 144) != 0) {
          v15 = (__int64*)(v16 + 112);
        }
        else {
        LABEL_16:
          v15 = &GameData_21f49b8;
        }
      LABEL_17:
        if (*((_BYTE*)v15 + 32) == 0) {
          if ((*(_BYTE*)(v11 + 2112) & 1) != 0) {
            **(_BYTE**)(v11 + 2128) = 0;
            *(_QWORD*)(v11 + 2120) = 0;
          }
          else {
            *(_WORD*)(v11 + 2112) = 0;
          }
          *(_BYTE*)(v11 + 2136) = 1;
          *(_DWORD*)(v11 + 2137) = 0;
          goto LABEL_36;
        }
        if ((__int64*)(v11 + 2104) == v15) {
          goto LABEL_35;
        }
        v10 = (__int64*)(v11 + 2112);
        v17 = *((unsigned __int8*)v15 + 8);
        if ((*(_BYTE*)(v11 + 2112) & 1) != 0) {
          if ((v17 & 1) != 0) {
            v20 = (char*)v15[3];
          }
          else {
            v20 = (char*)v15 + 9;
          }
          if ((v17 & 1) != 0) {
            v21 = v15[2];
          }
          else {
            v21 = v17 >> 1;
          }
          v10 = (__int64*)GameRoutine_64dde0(v10, v20, v21);
        }
        else {
          if ((v17 & 1) == 0) {
            v18 = v15[1];
            v19 = v15[3];
            *(_QWORD*)(v11 + 2120) = v15[2];
            *(_QWORD*)(v11 + 2128) = v19;
            *v10 = v18;
          LABEL_35:
            *(_BYTE*)(v11 + 2136) = *((_BYTE*)v15 + 32);
            *(_BYTE*)(v11 + 2137) = *((_BYTE*)v15 + 33);
            *(_BYTE*)(v11 + 2138) = *((_BYTE*)v15 + 34);
            *(_BYTE*)(v11 + 2139) = *((_BYTE*)v15 + 35);
            *(_BYTE*)(v11 + 2140) = *((_BYTE*)v15 + 36);
            goto LABEL_36;
          }
          v10 = (__int64*)GameRoutine_64df20(v10, v15[3], v15[2]);
        }
        v11 = v8;
        goto LABEL_35;
      }
    LABEL_36:
      v23 = (__int64*)a1[2];
      v22 = a1[3];
      if ((unsigned __int64)v23 >= v22) {
        v25 = a1[1];
        v26 = (char*)v23 - v25;
        v27 = ((__int64)v23 - v25) >> 3;
        v28 = v27 + 1;
        if ((unsigned __int64)(v27 + 1) >> 61 != 0) {
          GameRoutine_6c1f60(v10);
        }
        v29 = v22 - v25;
        v30 = GameData_212bf68;
        if (v29 >> 2 > v28) {
          v28 = v29 >> 2;
        }
        if ((unsigned __int64)v29 >= 0x7FFFFFFFFFFFFFF8LL) {
          v31 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v31 = v28;
        }
        if (v31 != 0) {
          if (v31 >> 61 != 0) {
            GameRoutine_60a210(v10);
          }
          v32 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v31, 16, 0);
          v33 = v9;
        }
        else {
          v33 = v9;
          v32 = 0;
        }
        v34 = v32 + 8 * v31;
        v35 = (char*)v23 - v25;
        v36 = (__int64)&v26[v32 + -8 * v27];
        *(_QWORD*)&v26[v32] = v33;
        v24 = (__int64)&v26[v32 + 8];
        GameRoutine_1a0b950(v36, v25, v35);
        a1[1] = v36;
        a1[2] = v24;
        a1[3] = v34;
        if (v25 != 0) {
          v37 = 128;
          if (*(_QWORD*)(*(_QWORD*)v30 + 200LL) == 0) {
            v37 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)v30 + v37, v25);
        }
        result = v9;
      }
      else {
        result = v8;
        *v23 = v8;
        v24 = (__int64)(v23 + 1);
      }
      a1[2] = v24;
      return result;
    }
  }
  return 0;
}

__int64 GameHr_14a3a60(__int64 a1, unsigned __int8* a2)
{
  unsigned __int64 v3;
  __int64 v5;
  __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  bool v15;
  unsigned __int64 v16;
  unsigned __int8* v17;
  unsigned __int64 v18;
  _QWORD* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  bool v23;
  unsigned __int64 v24;
  unsigned __int8* v25;
  unsigned __int64 v26;
  _QWORD* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  bool v31;
  unsigned __int64 v32;
  unsigned __int8* v33;
  unsigned __int64 v34;
  _QWORD* v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  bool v39;
  unsigned __int64 v40;
  unsigned __int8* v41;
  unsigned __int64 v42;

  if ((unsigned __int8*)a1 != a2) {
    v3 = *a2;
    if ((*(_BYTE*)a1 & 1) != 0) {
      v7 = (v3 & 1) == 0;
      v8 = v3 >> 1;
      if (v7) {
        v9 = a2 + 1;
      }
      else {
        v9 = *((unsigned __int8**)a2 + 2);
      }
      if (v7) {
        v10 = v8;
      }
      else {
        v10 = *((_QWORD*)a2 + 1);
      }
      GameRoutine_64dde0(a1, v9, v10);
    }
    else if ((v3 & 1) != 0) {
      GameRoutine_64df20(a1, *((_QWORD*)a2 + 2), *((_QWORD*)a2 + 1));
    }
    else {
      v5 = *(_QWORD*)a2;
      v6 = *((_QWORD*)a2 + 2);
      *(_QWORD*)(a1 + 8) = *((_QWORD*)a2 + 1);
      *(_QWORD*)(a1 + 16) = v6;
      *(_QWORD*)a1 = v5;
    }
    v11 = (_QWORD*)(a1 + 24);
    v12 = a2[24];
    if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
      v15 = (v12 & 1) == 0;
      v16 = v12 >> 1;
      if (v15) {
        v17 = a2 + 25;
      }
      else {
        v17 = *((unsigned __int8**)a2 + 5);
      }
      if (v15) {
        v18 = v16;
      }
      else {
        v18 = *((_QWORD*)a2 + 4);
      }
      GameRoutine_64dde0(v11, v17, v18);
    }
    else if ((v12 & 1) != 0) {
      GameRoutine_64df20(v11, *((_QWORD*)a2 + 5), *((_QWORD*)a2 + 4));
    }
    else {
      v13 = *((_QWORD*)a2 + 3);
      v14 = *((_QWORD*)a2 + 5);
      *(_QWORD*)(a1 + 32) = *((_QWORD*)a2 + 4);
      *(_QWORD*)(a1 + 40) = v14;
      *v11 = v13;
    }
    v19 = (_QWORD*)(a1 + 48);
    v20 = a2[48];
    if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
      v23 = (v20 & 1) == 0;
      v24 = v20 >> 1;
      if (v23) {
        v25 = a2 + 49;
      }
      else {
        v25 = *((unsigned __int8**)a2 + 8);
      }
      if (v23) {
        v26 = v24;
      }
      else {
        v26 = *((_QWORD*)a2 + 7);
      }
      GameRoutine_64dde0(v19, v25, v26);
    }
    else if ((v20 & 1) != 0) {
      GameRoutine_64df20(v19, *((_QWORD*)a2 + 8), *((_QWORD*)a2 + 7));
    }
    else {
      v21 = *((_QWORD*)a2 + 6);
      v22 = *((_QWORD*)a2 + 8);
      *(_QWORD*)(a1 + 56) = *((_QWORD*)a2 + 7);
      *(_QWORD*)(a1 + 64) = v22;
      *v19 = v21;
    }
    v27 = (_QWORD*)(a1 + 72);
    v28 = a2[72];
    if ((*(_BYTE*)(a1 + 72) & 1) != 0) {
      v31 = (v28 & 1) == 0;
      v32 = v28 >> 1;
      if (v31) {
        v33 = a2 + 73;
      }
      else {
        v33 = *((unsigned __int8**)a2 + 11);
      }
      if (v31) {
        v34 = v32;
      }
      else {
        v34 = *((_QWORD*)a2 + 10);
      }
      GameRoutine_64dde0(v27, v33, v34);
    }
    else if ((v28 & 1) != 0) {
      GameRoutine_64df20(v27, *((_QWORD*)a2 + 11), *((_QWORD*)a2 + 10));
    }
    else {
      v29 = *((_QWORD*)a2 + 9);
      v30 = *((_QWORD*)a2 + 11);
      *(_QWORD*)(a1 + 80) = *((_QWORD*)a2 + 10);
      *(_QWORD*)(a1 + 88) = v30;
      *v27 = v29;
    }
    v35 = (_QWORD*)(a1 + 96);
    v36 = a2[96];
    if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
      v39 = (v36 & 1) == 0;
      v40 = v36 >> 1;
      if (v39) {
        v41 = a2 + 97;
      }
      else {
        v41 = *((unsigned __int8**)a2 + 14);
      }
      if (v39) {
        v42 = v40;
      }
      else {
        v42 = *((_QWORD*)a2 + 13);
      }
      GameRoutine_64dde0(v35, v41, v42);
    }
    else if ((v36 & 1) != 0) {
      GameRoutine_64df20(v35, *((_QWORD*)a2 + 14), *((_QWORD*)a2 + 13));
    }
    else {
      v37 = *((_QWORD*)a2 + 12);
      v38 = *((_QWORD*)a2 + 14);
      *(_QWORD*)(a1 + 104) = *((_QWORD*)a2 + 13);
      *(_QWORD*)(a1 + 112) = v38;
      *v35 = v37;
    }
  }
  return a1;
}

__int64 GameHr_14b8ca0(__int64 a1)
{

#pragma clang fp contract(off)
  char v2;
  __int64* v3;
  long double v4;
  long double v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v13;
  int v14;

  v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = (**(__int64 (***)(__int64))a1)(a1),
  v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v2 & 1) != 0) {
    v3 = *(__int64**)(a1 + 56);
    v14 = 1106247680;
    game_14a1cc0(v3, 0x1.0000000000000p+0f),
        v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v6 = (_QWORD*)GameData_224b6a0;
    if (GameData_224b6a0 >= (unsigned __int64)GameData_224b6a8) {
      v9 = GameRoutine_14a36c0_alt1(&GameData_224b698, (__int64*)(a1 + 56),
                                    &v14),
      v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      v7 = *(_QWORD*)(a1 + 56);
      v8 = *(_QWORD*)(a1 + 64);
      if (v8 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                  memory_order_relaxed);
        *v6 = v7;
        v6[1] = v8;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                  memory_order_relaxed);
        v6[2] = 0x41F0000000000000LL;
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
              v4 = COERCE_AS(__typeof__(v4),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
          std___1___shared_weak_count___release_weak(v8),
              v4 = COERCE_AS(__typeof__(v4),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v9 = (__int64)(v6 + 3);
      }
      else {
        *(_QWORD*)GameData_224b6a0 = v7;
        v6[1] = 0;
        v9 = (__int64)(v6 + 3);
        v6[2] = 0x41F0000000000000LL;
      }
    }
    v13 = 0;
    GameData_224b6a0 = v9;
    if (*(_BYTE*)(a1 + 32) == 1) {
      v10 = *(_QWORD*)(a1 + 8);
      v11 = a1 + 8;
      *(_QWORD*)&v4 = 0;
    }
    else {
      if (*(float*)(a1 + 16) <= 0x0.0p+0f) {
        if (((*(__int64 (**)(__int64, int*, __int64))(
                 *(_QWORD*)(a1 + 8) + 8LL))(a1 + 8, &v13, a1 + 40) &
             1) != 0) {
          (*(void (**)(__int64))(*(_QWORD*)(a1 + 8) + 16LL))(a1 + 8),
              v4 = COERCE_AS(__typeof__(v4),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
          v10 = *(_QWORD*)(a1 + 8);
          LODWORD(v5) = v13;
          v11 = a1 + 8;
        LABEL_14:
          (*(void (**)(__int64, long double, long double))(v10 + 24))(v11, v4,
                                                                      v5),
              v4 = COERCE_AS(__typeof__(v4),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
          *(_QWORD*)(a1 + 16) = 0;
          *(_WORD*)(a1 + 32) = 256;
        }
        *(_DWORD*)(a1 + 52) = 0;
        return v2 & 1;
      }
      (*(void (**)(__int64))(*(_QWORD*)(a1 + 8) + 16LL))(a1 + 8),
          v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v10 = *(_QWORD*)(a1 + 8);
      v11 = a1 + 8;
    }
    *(_QWORD*)&v5 = 0;
    goto LABEL_14;
  }
  return v2 & 1;
}

__int64 GameHr_14cd7c0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  float32x4_t** v2;
  float32x4_t** v3;
  __int64 v4;
  __int64* v5;
  float32x4_t* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int128 v10;
  __int128 v11;
  __int128 v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  __int128 v16;
  const char* v18;
  _QWORD* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64* v22;
  unsigned int v23;
  __int64 v24;
  __int128 v26;
  float32x4_t v27[4];
  struct {
    long double v28;
    __int128 v29;
    __int128 v30;
    __int128 v31;
    __int64 v32;
    __int64 v33;
  } v28_;

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_DWORD*)(a1 + 152) = 0;
  v1 = *(_QWORD*)(*GameData_212c780 + 8);
  v2 = *(float32x4_t***)(v1 + 48);
  v3 = *(float32x4_t***)(v1 + 56);
  if (v2 != v3) {
    v4 = GameData_212c638;
    v5 = (__int64*)GameData_212c540;
    do {
      v6 = *v2;
      if (LANES128((*v2)[11]).n128_u8[0] == 1 &&
          LANES128(v6[18]).n128_f32[0] != 0x0.0p+0f &&
          LANES128(v6[7]).n128_u8[3] == 1) {
        v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v4 + 32LL) - 8LL);
        v9 = *(_QWORD*)(v7 + 24);
        v8 = *(_QWORD*)(v7 + 32);
        if (v8 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                    memory_order_relaxed);
        }
        v28_.v28 =
            ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v9 + 16LL))(v9),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v28_.v29 = v10;
        v28_.v30 = v11;
        v28_.v31 = v12;
        v27[0] = COERCE_FLOAT32X4_T(
            ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v9 + 24LL))(v9)),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v27[1] = v13;
        v27[2] = v14;
        v27[3] = v15;
        *(__n64*)&v16 =
            GameRoutine_a6c440_alt1(v6 + 2, (__int128*)&v28_.v28, v27),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          v26 = v16;
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v8),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v16 = v26;
        }
        if (*((float*)&v16 + 2) <= 0x0.0p+0f && *(float*)&v16 >= 0x0.0p+0f &&
            *(float*)&v16 <= 0x1.e000000000000p+10f &&
            *((float*)&v16 + 1) >= 0x0.0p+0f &&
            *((float*)&v16 + 1) <= 0x1.0e00000000000p+10f) {
          v18 = "Gmap_Spot_Crash_Sand";
          if (LANES128(v6[7]).n128_u8[2] != 0) {
            v18 = "Gmap_Spot_Crash_Splash";
          }
          *(_OWORD*)&v28_.v28 = (__typeof__(*(_OWORD*)&v28_.v28)){0};
          *(_QWORD*)&v28_.v29 = v18;
          v19 = (_QWORD*)*eft_g_effectSystem_ptr[0];
          DWORD2(v28_.v29) = 5;
          *(_QWORD*)&v28_.v30 = LANES128(v6[2]).n128_u64[0];
          v20 = LANES128(v6[2]).n128_u64[1];
          v28_.v31 = GameData_1a837f0;
          *((_QWORD*)&v28_.v30 + 1) = v20;
          v21 = v5[1];
          v28_.v32 = *v5;
          v28_.v33 = v21;
          v22 = Manager_bc6460(v19, (__int64)&v28_.v28, 1),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          GameHr_14a10d0(&v28_.v28, (__int64)v22, v23,
                         (__int64)&GameData_1a9f09e),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v24 = *((_QWORD*)&v28_.v28 + 1);
          if (*((_QWORD*)&v28_.v28 + 1) != 0 &&
              atomic_fetch_add(
                  (atomic_ullong* volatile)(*((_QWORD*)&v28_.v28 + 1) + 8LL),
                  0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24),
                v10 = COERCE_AS(__typeof__(v10),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v11 = COERCE_AS(__typeof__(v11),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v12 = COERCE_AS(__typeof__(v12),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v13 = COERCE_AS(__typeof__(v13),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v23 =
                    COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            std___1___shared_weak_count___release_weak(v24),
                v10 = COERCE_AS(__typeof__(v10),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v11 = COERCE_AS(__typeof__(v11),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v12 = COERCE_AS(__typeof__(v12),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v13 = COERCE_AS(__typeof__(v13),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v23 =
                    COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
      }
      ++v2;
    } while (v2 != v3);
  }
  return GameRoutine_14cd5c0();
}

__int64 GameHr_15154c0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned int* v9;

  v0 = *(_QWORD*)(GameData_21f1648 + 8);
  GameManager_a2d080(game_sound_g_game_sound);
  v1 = GameData_21f1648;
  *(_BYTE*)(*(_QWORD*)(GameData_21f1648 + 8) + 40LL) = 1;
  GmapSound_15317a0((_BYTE*)(*(_QWORD*)(v1 + 8) + 40LL));
  *(_BYTE*)(v0 + 56) = 0;
  if (game_GameModeData_instance_ != 0) {
    *(_DWORD*)(game_GameModeData_instance_ + 92) &= 0xFFFFFBE3;
  }
  GameSubquestData_125d3e0(GameData_21c9718);
  v2 = *GameData_212d728[0];
  *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5835LL) = 1;
  GameRoutine_175b880_alt1(*(_QWORD*)(v2 + 8) + 5800LL);
  v3 = *(_QWORD*)(GameData_21c96e8 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64**)(v3 + 8);
  v6 = *(__int64**)(v3 + 16);
  if (v4 < 0) {
    for (; v5 != v6; ++v5) {
      v7 = *v5;
      if (*(_QWORD*)(*v5 + 96) == 0 && *(_QWORD*)(v7 + 552) == 0) {
        goto LABEL_13;
      }
    }
  }
  else if (v5 != v6) {
    while (1) {
      v8 = *v5++;
      v7 = v8;
      if (*(_DWORD*)(v8 + 84) == v4) {
        break;
      }
      if (v5 == v6) {
        goto LABEL_9;
      }
    }
  LABEL_13:
    v9 = *(unsigned int**)v7;
    return GameRoutine_1328d60_alt1((__int64)v9);
  }
LABEL_9:
  v9 = game_gmap_SpotMgr_GetCurrentSpot();
  return GameRoutine_1328d60_alt1((__int64)v9);
}

unsigned __int16* GameHr_1515810(__int64* a1, __int64 a2, __int64 a3)
{
  __int64* v6;
  unsigned __int16* v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  unsigned __int16* result;
  unsigned int v15;
  __int16 v16;
  __int16 v17;
  int v18;
  __int16 v19;
  int v20;

  v6 = GameData_21316e0[0];
  a1[1] = 0;
  v7 = (unsigned __int16*)(a1 + 1);
  *((_DWORD*)a1 + 4) = 0;
  *a1 = (__int64)(v6 + 2);
  if (game_gmap_GmapClock_instance_ != 0) {
    v8 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v8 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v17 = *(_WORD*)v8;
  v9 = *(_DWORD*)(v8 + 2);
  v20 = 0;
  v18 = v9;
  v19 = *(_WORD*)(v8 + 6) + 6;
  Dir_70d7a0((unsigned __int16*)&v17);
  Dir_70ea50((void*)((__int64)a1 + 20), (__int16*)v8, (__int64)&v17);
  a1[4] = a2;
  *((_BYTE*)a1 + 42) = 0;
  *(__int64*)((char*)a1 + 44) = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  *((_BYTE*)a1 + 88) = 0;
  *((_WORD*)a1 + 20) = 256;
  *a1 = (__int64)game_gmap_SpotAttachmentFarm_vtable;
  v10 = *(unsigned __int8*)(game_gmap_SpotAttachmentFarm_GetGrowthData() + 48);
  v11 = *((_DWORD*)a1 + 7);
  *(_QWORD*)v7 = *(__int64*)((char*)a1 + 20);
  v12 = *a1;
  *((_DWORD*)a1 + 4) = v11;
  v13 = 40;
  if (v10 == 0) {
    v13 = 16;
  }
  result = (unsigned __int16*)(*(__int64 (**)(__int64*))(v12 + v13))(a1);
  if ((_DWORD)result != 0) {
    if ((int)result < 1) {
      v16 = *((_WORD*)a1 + 7);
      v15 = -(int)result / 0x18u;
      *((_WORD*)a1 + 6) -= v15;
      LOWORD(v15) = v16 + (_WORD)result + 24 * v15;
    }
    else {
      *((_WORD*)a1 + 6) += (unsigned int)result / 0x18;
      v15 = *((unsigned __int16*)a1 + 7) + (unsigned int)result % 0x18;
    }
    *((_WORD*)a1 + 7) = v15;
    *((_DWORD*)a1 + 4) = 0;
    result = Dir_70d7a0(v7);
  }
  *((_BYTE*)a1 + 41) = v10 == 0;
  *(_QWORD*)(*(_QWORD*)(a1[4] + 160) + 8LL) = a3;
  return result;
}

#pragma GCC visibility pop
