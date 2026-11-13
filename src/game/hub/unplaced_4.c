#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* game_zview_d57520(_QWORD* result, __int64, char, float32x4_t*);
__attribute__((swiftcall)) void GameRoutine_fb48a0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void RouteNavMesh_fe7000(PSEUDO_X8, _QWORD*,
                                                    __int128*, float, float);
__attribute__((swiftcall)) void game_hub_d96ce0(PSEUDO_X8, _QWORD*, __int64,
                                                __int64);
__int64* GameRoutine_d6d880(__int64*, __int64*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 CharacterPath_d97500(_QWORD*);
__int64 Config_bc7520(__int64, const char*);
__int64 GameHr_d1fb60(__int64, char);
__int64 GameHr_d4e840(__int64, __int64);
__int64 GameHr_e02a40(__int64 result);
__int64 GameRoutine_14a1390(__int64*, char);
__int64 GameRoutine_629ac0(__int64 result, __int64);
__int64 GameRoutine_cae2c0(__int64, __int64*, long double);
__int64 GameRoutine_cfd8e0(__int64 result, char);
__int64 GameRoutine_d7ff80(__int64, __int64*);
__int64 GameRoutine_d8b5b0();
__int64 GameRoutine_d8b680();
__int64 GameRoutine_d8b6c0();
__int64 GameRoutine_d8b700();
__int64 GameRoutine_d95720(__int64, long double);
__int64 GameRoutine_efbda0(_QWORD*);
__int64 GameRoutine_f71d40(__int64, __int64, __int64);
__int64 GameRoutine_f72090(__int64);
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 RouteNavMesh_fe6c60(_QWORD*, unsigned int**);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_HashString(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 game_hub_anonymous_d8b720();
__int64 game_hub_d7f080_alt1(__int64 result, __int64*, unsigned __int64,
                             __int64) __asm__("game_hub_d7f080");
__int64 game_hub_d97a00(__int64 result, float);
__int64 game_hub_dfa180(__int64 result);
__int64 game_zview_d20140(__int64, int*);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
bool GameRoutine_d4eca0(__int64*, __int64);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN GameData_1afa065;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_22124c0;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fdce28[8])();
extern __int64 (*game_hub_anonymous_ProcPopWorldPostSeq_vtable[])();
extern __int64* GameData_212ebb0[7];
extern __int64* GameData_212ee30[4];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dc38[7];
extern __int64 GameData_212dc60[2];
extern __int64 GameData_212ef90[7];
extern __int64 GameData_21d96b8;
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21f3cb8;
extern __int64 GameData_21f3d10;
extern __int64 GameData_2212348;
extern __int64 GameData_2212350;
extern __int64 GameData_2212358;
extern __int64 GameData_2212368;
extern __int64 GameData_2212378;
extern __int64 GameData_2212388;
extern __int64 GameData_2212390;
extern __int64 GameData_2212398;
extern __int64 GameData_22123a8;
extern __int64 GameData_22123b8;
extern __int64 GameData_22123c8;
extern __int64 GameData_22123d0;
extern __int64 GameData_22123d8;
extern __int64 GameData_22123e8;
extern __int64 GameData_22123f8;
extern __int64 GameData_2212408;
extern __int64 GameData_2212410;
extern __int64 GameData_2212418;
extern __int64 GameData_2212428;
extern __int64 GameData_2212438;
extern __int64 GameData_2212448;
extern __int64 GameData_2212450;
extern __int64 GameData_2212458;
extern __int64 GameData_2212468;
extern __int64 GameData_2212478;
extern __int64 GameData_2212488;
extern __int64 GameData_2212490;
extern __int64 GameData_2212498;
extern __int64 GameData_22124a8;
extern __int64 GameData_22124b8;
extern __int64 as_g_script_manager;
extern __int64 eft_g_effectSystem;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern char GameData_2212340;
extern char GameData_2212380;
extern char GameData_22123c0;
extern char GameData_2212400;
extern char GameData_2212440;
extern char GameData_2212480;
extern int* GameData_212df08;
extern int GameData_2212360;
extern int GameData_2212370;
extern int GameData_22123a0;
extern int GameData_22123b0;
extern int GameData_22123e0;
extern int GameData_22123f0;
extern int GameData_2212420;
extern int GameData_2212430;
extern int GameData_2212460;
extern int GameData_2212470;
extern int GameData_22124a0;
extern int GameData_22124b0;
float* GameRoutine_104b900(float* result, char);
int __cxa_guard_acquire(__int64);
void CharacterRotate_d519c0(int8x16_t*);
void GameHr_cacc00(__int64);
void GameHr_cdeee0(__int64, __int64);
void GameHr_d7fde0(__int64*, __int64);
void GameRoutine_6b7aa0(__int64, __int64*, __int64*, unsigned __int64,
                        long double, long double, long double, long double);
void GameRoutine_d57390(__int64, __int64);
void GameRoutine_d80140(unsigned __int64*, __int64);
void GameRoutine_d98e20(__int64);
void GameRoutine_d99480(_QWORD*, const char*, char);
void HubCharacterNatives_cabfc0(__int64, char);
void HubScript_d98960(_QWORD*, __int64);
void Manager_d54e40(__int64);
void Manager_d9d980(_QWORD*);
void PopupController_d7f820(__int64*, __int64, __int64*, __int64, __int64,
                            __int64, __int64);
void __attribute__((noreturn)) GameRoutine_64aa00();
void __cxa_guard_release(__int64);
void game_1023ae0(__int64);
void game_hub_cabb20(float32x4_t*);
void game_zview_CharacterAnim_CommitReduceFlag(__int64);
void game_zview_d12d30(__int64, int32x2_t*, char);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c910(__int64, int);
void game_hub_caeae0(__int64 a1, __int64* a2, int a3);
void game_hub_cb7320(_QWORD* a1);
void game_hub_d5c4a0(__int64* a1, __int64* a2, __int64* a3, long double a4,
                     long double a5, long double a6, long double a7);
void game_hub_d7eb60(__int64 a1, __int64* a2, unsigned __int64 a3, __int64 a4,
                     __int64 a5);
void game_hub_d7f080(__int64 result, __int64* a2, unsigned __int64 a3,
                     __int64 a4);
__int64 game_hub_d856f0(__int64 a1);
__int64 game_hub_d889a0();
void game_hub_d97660(__int64 a1, __int64 a2, __int64 a3);
void game_hub_d977e0(_QWORD* a1);
void game_hub_d98820(_QWORD* a1, __int64 a2);
void game_hub_df9ca0(__int64 a1);
void game_hub_dfa040(_QWORD* a1);
void game_hub_e02d20(__int64 a1, __int64* a2);
__int64 game_hub_efa580(__int64 a1);
void game_hub_f8abd0();
void game_hub_f8baa0();
__int64 game_hub_fb5540(__int64 a1, __int64 a2);
__int64 game_hub_1001fd0(float32x4_t* a1);

void game_hub_caeae0(__int64 a1, __int64* a2, int a3)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v7;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  float v14;
  float v15;
  unsigned __int64 v16;
  float32x4_t v17;
  float32x4_t v18;
  __int64 v19;
  __int64* v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  float32x4_t v23;
  int v24;
  float32x4_t v25;
  __int64 v26;
  int v27;
  __int64 v28;
  int v29;
  __int64 v30;
  float32x4_t v31;
  float v32[254];
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;

  v4 = a2[1];
  if (v4 != 0) {
    v7 = std___1___shared_weak_count_lock(v4);
    if (v7 != 0) {
      v11 = *a2;
      v12 = v7;
      if (v11 != 0) {
        v31 = *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 16LL) + 560LL);
        GameRoutine_cae2c0((__int64)v32, (__int64*)(v11 + 120),
                           *(long double*)&v31);
        v32[37] = LANES128(v31).n128_f32[2];
        v13 = *(_QWORD*)(a1 + 24);
        *(_QWORD*)&v32[35] = LANES128(v31).n128_u64[0];
        v14 = 0x1.2000000000000p+2f;
        if (a3 == 1) {
          v14 = 0x1.e000000000000p+3f;
        }
        v15 = *(float*)(v13 + 528);
        v32[38] = *(float*)(*(_QWORD*)(*(_QWORD*)(v13 + 16) + 488LL) + 36LL) *
                  0x1.ca5dc20000000p+5f;
        v32[39] = v14 + v15;
        LODWORD(v16) = 0;
        *((float*)&v16 + 1) = v32[40] * 0x1.99999a0000000p-1f;
        v17 = vaddq_f32(v31, COERCE_AS(float32x4_t, v16));
        if (*(_BYTE*)(v11 + 80) == 1) {
          *(_QWORD*)(v11 + 64) = LANES128(v17).n128_u64[0];
          v18 = *(float32x4_t*)(v11 + 64);
          LANES128(v18).n128_u64[1] = LANES128(v17).n128_u32[2];
          v17 = v18;
        }
        else {
          *(_BYTE*)(v11 + 80) = 1;
        }
        *(float32x4_t*)(v11 + 64) = v17;
        GameRoutine_d6d880((__int64*)(v11 + 120), (__int64*)v32);
        *(_DWORD*)(v11 + 1208) = 0;
        v19 = *(_QWORD*)GameData_212dbb8[0];
        v20 = GameData_212ebb0[0];
        if ((GameRoutine_f72090(*GameData_212ebb0[0]) & 1) != 0) {
          if (*(_BYTE*)(v11 + 80) == 1) {
            v22 = *(_QWORD*)(v11 + 72);
            LODWORD(v21) = *(_DWORD*)(v11 + 268);
            LANES128(v33).n128_u64[0] = *(_QWORD*)(v11 + 64);
            LANES128(v33).n128_u64[1] = v22;
            LANES128(v23).n128_u64[0] = *(_QWORD*)(v11 + 260);
            LANES128(v23).n128_u64[1] = v21;
          }
          else {
            LODWORD(v21) = *(_DWORD*)(v11 + 268);
            LANES128(v23).n128_u64[0] = *(_QWORD*)(v11 + 260);
            LANES128(v23).n128_u64[1] = v21;
            v33 = vaddq_f32(v23, *(float32x4_t*)(v11 + 16));
          }
          LANES128(v25).n128_u32[0] = 0;
          LANES128(v25).n128_u32[3] = 0;
          v26 = *v20;
          *(unsigned __int64*)((char*)LANES128(v25).n128_u64 + 4) =
              *(unsigned int*)(v11 + 280);
          v34 = v23;
          v35 = vaddq_f32(v23, v25);
          v27 = 1 << GameRoutine_f71d40(v26, (__int64)&v33, v19 + 64);
          v28 = *v20;
          *(_DWORD*)(v11 + 1208) |= v27;
          v29 = 1 << GameRoutine_f71d40(v28, (__int64)&v34, v19 + 64);
          v30 = *v20;
          *(_DWORD*)(v11 + 1208) |= v29;
          v24 = *(_DWORD*)(v11 + 1208) |
                (1 << GameRoutine_f71d40(v30, (__int64)&v35, v19 + 64));
        }
        else {
          v24 = *(_DWORD*)(v11 + 1208) | 1;
        }
        *(_DWORD*)(v11 + 1208) = v24;
        GameHr_cacc00((__int64)v32);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak(v12);
      }
    }
  }
}

void game_hub_cb7320(_QWORD* a1)
{

#pragma clang fp contract(off)
  float32x4_t** v1;
  float32x4_t** v2;
  float32x4_t* v4;
  __int64 v5;
  char v6;
  unsigned __int64 v7;
  __int64 v8;
  __int128 v9;
  __int64 v10;
  float v11;
  unsigned __int64 v12;

  v1 = (float32x4_t**)a1[3];
  v2 = (float32x4_t**)a1[4];
  while (v1 != v2) {
    v4 = *v1;
    v1 += 2;
    game_hub_cabb20(v4);
  }
  v5 = a1[15];
  if (*(_BYTE*)(v5 + 14) == 1 && *(_BYTE*)(GameData_21f3d10 + 10) == 1) {
    *(_BYTE*)(v5 + 14) = 0;
  }
  if ((*(_BYTE*)(v5 + 15) & 1) == 0) {
    v6 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      v7 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v7 + 172) == *(float*)(v7 + 168)) {
        v8 = v5;
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v7 + 160) + 16LL))(v7 + 160);
        v5 = v8;
      }
      else {
        v9 = *(_OWORD*)(v7 + 208);
      }
      if (*((float*)&v9 + 3) == 0x1.0000000000000p+0f) {
        v10 = v5;
        LODWORD(v11) = LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                                    (_QWORD*)(*(_QWORD*)(v7 + 160) + 16LL))(
                                       v7 + 160, *((float*)&v9 + 3)))
                           .n128_u32[3];
        v5 = v10;
        if (v11 == 0x1.0000000000000p+0f) {
          goto LABEL_7;
        }
      }
      v6 = game_ProcFadeView_instance_;
      if (game_ProcFadeView_instance_ != 0) {
        v12 = game_ProcFadeView_instance_ +
              ((unsigned __int64)*(
                   unsigned __int8*)(game_ProcFadeView_instance_ + 480)
               << 6);
        v6 = *(float*)(v12 + 172) != *(float*)(v12 + 168);
      }
    }
    if ((v6 & 1) == 0 && (*(_BYTE*)(v5 + 14) & 1) == 0) {
      *(_BYTE*)(v5 + 15) = 1;
    }
  }
LABEL_7:
  game_1023ae0(v5);
}

void game_hub_d5c4a0(__int64* a1, __int64* a2, __int64* a3, long double a4,
                     long double a5, long double a6, long double a7)
{

#pragma clang fp contract(off)
  __int64 v7;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  bool v23;
  unsigned __int64 v24;
  __int64* v25;
  unsigned __int64 v26;
  struct {
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64* v30;
    __int64* v31;
    char* v32;
  } v27_;
  char v33;

  v7 = *a1;
  if (*(_DWORD*)(*a1 + 48) == 0) {
    if (a2 == a3) {
      return;
    }
    v10 = *(unsigned __int8*)a3;
    if ((*(_BYTE*)a2 & 1) != 0) {
      v22 = a3[2];
      v23 = (v10 & 1) == 0;
      v24 = v10 >> 1;
      v25 = a2;
      if (v23) {
        v22 = (__int64)a3 + 1;
      }
      if (v23) {
        v26 = v24;
      }
      else {
        v26 = a3[1];
      }
      SpineModel_64dde0(a2, v22, v26);
    }
    else {
      if ((v10 & 1) == 0) {
        a2[1] = a3[1];
        v11 = *a3;
        a2[2] = a3[2];
        *a2 = v11;
      LABEL_31:
        GameRoutine_6b7aa0((__int64)(a2 + 3), (__int64*)a3[3], (__int64*)a3[4],
                           0xAAAAAAAAAAAAAAABLL * ((a3[4] - a3[3]) >> 3), a4,
                           a5, a6, a7);
        return;
      }
      v25 = a2;
      GameRoutine_64df20(a2, a3[2], a3[1]);
    }
    a2 = v25;
    goto LABEL_31;
  }
  if ((*(_BYTE*)a3 & 1) != 0) {
    fw_text_String_CopyTerminated(&v27_.v27, a3[2], a3[1]);
  }
  else {
    v9 = a3[1];
    v27_.v27 = *a3;
    v27_.v28 = v9;
    v27_.v29 = a3[2];
  }
  v12 = (__int64*)a3[3];
  v13 = (__int64*)a3[4];
  v27_.v31 = nullptr;
  v27_.v32 = nullptr;
  v14 = (char*)v13 - (char*)v12;
  v27_.v30 = nullptr;
  if (v13 == v12) {
    v15 = nullptr;
  }
  else {
    if (0xAAAAAAAAAAAAAAABLL * (v14 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
      GameRoutine_64aa00();
    }
    v15 = (__int64*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, (char*)v13 - (char*)v12, 16, 0);
    v27_.v30 = v15;
    v27_.v31 = v15;
    v27_.v32 = (char*)v15 + v14;
    do {
      if ((*(_BYTE*)v12 & 1) != 0) {
        fw_text_String_CopyTerminated(v15, v12[2], v12[1]);
      }
      else {
        v16 = *v12;
        v17 = v12[2];
        v15[1] = v12[1];
        v15[2] = v17;
        *v15 = v16;
      }
      v12 += 3;
      v15 += 3;
    } while (v12 != v13);
    v27_.v31 = v15;
  }
  v18 = *(unsigned int*)(v7 + 48);
  if ((_DWORD)v18 != -1) {
    ((void (*)(char*, __int64))GameData_1fdce28[v18])(&v33, v7);
    v15 = v27_.v31;
  }
  v19 = v27_.v27;
  v20 = v27_.v28;
  v21 = v27_.v29;
  *(_DWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 8) = v20;
  *(_QWORD*)(v7 + 16) = v21;
  *(_QWORD*)v7 = v19;
  *(_QWORD*)(v7 + 24) = v27_.v30;
  *(_QWORD*)(v7 + 32) = v15;
  *(_QWORD*)(v7 + 40) = v27_.v32;
}

void game_hub_d7eb60(__int64 a1, __int64* a2, unsigned __int64 a3, __int64 a4,
                     __int64 a5)
{
  __int64* v5;
  __int64* v6;
  unsigned __int64 v7;
  unsigned __int64 v10;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
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
  char v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  char v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  struct {
    __int64 v57[2];
    __int64 v58;
    int v59;
    char gap44_[4];
    __int64 v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
    __int64 v64;
    __int64 v65;
  } v57_;

  if (a3 >= 2) {
    v5 = a2;
    v6 = (__int64*)a1;
    if (a3 == 2) {
      if ((signed __int32)*((_DWORD*)a2 - 14) <
          (signed __int32)*(_DWORD*)(a1 + 24)) {
        GameHr_d7fde0((__int64*)a1, (__int64)(a2 - 10));
      }
    }
    else if ((__int64)a3 <= 0) {
      if ((__int64*)a1 != a2) {
        v12 = (_QWORD*)(a1 + 80);
        if ((__int64*)(a1 + 80) != a2) {
          v13 = a1;
          v14 = fw_memory_g_heap_manager_ptr;
          do {
            v15 = v12;
            if ((signed __int32)*(_DWORD*)(v13 + 104) <
                (signed __int32)*(_DWORD*)(v13 + 24)) {
              v16 = *v12;
              v17 = v12[1];
              v57_.v59 = *(_DWORD*)(v13 + 104);
              v18 = v12;
              v19 = v12[2];
              *v15 = 0;
              v15[1] = 0;
              v15[2] = 0;
              v57_.v57[0] = v16;
              v57_.v57[1] = v17;
              v57_.v58 = v19;
              v20 = *(_QWORD*)(v13 + 112);
              v21 = *(_QWORD*)(v13 + 120);
              *(_QWORD*)(v13 + 112) = 0;
              *(_QWORD*)(v13 + 120) = 0;
              v57_.v60 = v20;
              v57_.v61 = v21;
              v22 = *(_QWORD*)(v13 + 128);
              v23 = *(_QWORD*)(v13 + 136);
              *(_QWORD*)(v13 + 128) = 0;
              *(_QWORD*)(v13 + 136) = 0;
              v57_.v62 = v22;
              v24 = *(_QWORD*)(v13 + 144);
              v25 = *(_QWORD*)(v13 + 152);
              *(_QWORD*)(v13 + 144) = 0;
              *(_QWORD*)(v13 + 152) = 0;
              v57_.v63 = v23;
              v57_.v64 = v24;
              v57_.v65 = v25;
              while (1) {
                v26 = v13;
                if ((*(_BYTE*)v18 & 1) != 0) {
                  v27 = v18[2];
                  if (v27 != 0) {
                    if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
                      v28 = 128;
                    }
                    else {
                      v28 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v28, v27);
                  }
                }
                v29 = *(_QWORD*)(v26 + 8);
                *v18 = *(_QWORD*)v26;
                v18[1] = v29;
                v18[2] = *(_QWORD*)(v26 + 16);
                *(_WORD*)v26 = 0;
                LOBYTE(v29) = *((_BYTE*)v18 + 32);
                *((_DWORD*)v18 + 6) = *(_DWORD*)(v26 + 24);
                if ((v29 & 1) != 0) {
                  v30 = v18[6];
                  if (v30 != 0) {
                    if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
                      v31 = 128;
                    }
                    else {
                      v31 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v31, v30);
                  }
                }
                v32 = *(_QWORD*)(v26 + 40);
                v18[4] = *(_QWORD*)(v26 + 32);
                v18[5] = v32;
                v18[6] = *(_QWORD*)(v26 + 48);
                *(_WORD*)(v26 + 32) = 0;
                v33 = v18[7];
                if (v33 != 0) {
                  v34 = v18[8];
                  if (v33 == v34) {
                    goto LABEL_38;
                  }
                  v35 = v18[8];
                  do {
                    v36 = *(_BYTE*)(v35 - 24);
                    v35 -= 24;
                    if ((v36 & 1) != 0) {
                      v37 = *(_QWORD*)(v34 - 8);
                      if (v37 != 0) {
                        if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
                          v38 = 128;
                        }
                        else {
                          v38 = 56;
                        }
                        nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v38, v37);
                      }
                    }
                    v34 = v35;
                  } while (v35 != v33);
                  v39 = v18[7];
                  v18[8] = v33;
                  v33 = v39;
                  if (v39 != 0) {
                  LABEL_38:
                    if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
                      v40 = 128;
                    }
                    else {
                      v40 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v40, v33);
                  }
                  v18[8] = 0;
                  v18[9] = 0;
                }
                v18[7] = *(_QWORD*)(v26 + 56);
                v18[8] = *(_QWORD*)(v26 + 64);
                v18[9] = *(_QWORD*)(v26 + 72);
                *(_QWORD*)(v26 + 56) = 0;
                *(_QWORD*)(v26 + 64) = 0;
                *(_QWORD*)(v26 + 72) = 0;
                if ((__int64*)v26 == v6) {
                  break;
                }
                v13 = v26 - 80;
                v18 = (_QWORD*)v26;
                if (v57_.v59 >= (signed __int32)*(_DWORD*)(v26 - 56)) {
                  goto LABEL_47;
                }
              }
              v26 = (__int64)v6;
            LABEL_47:
              GameRoutine_d7ff80(v26, v57_.v57);
              v41 = v57_.v63;
              v5 = a2;
              if (v57_.v63 != 0) {
                v42 = v57_.v64;
                if (v57_.v63 != v57_.v64) {
                  v43 = v57_.v64;
                  do {
                    v44 = *(_BYTE*)(v43 - 24);
                    v43 -= 24;
                    if ((v44 & 1) != 0) {
                      v45 = *(_QWORD*)(v42 - 8);
                      if (v45 != 0) {
                        if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
                          v46 = 128;
                        }
                        else {
                          v46 = 56;
                        }
                        nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v46, v45);
                      }
                    }
                    v42 = v43;
                  } while (v43 != v41);
                }
                if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
                  v47 = 128;
                }
                else {
                  v47 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v47, v41);
              }
              if ((v57_.v60 & 1) != 0 && v57_.v62 != 0) {
                if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
                  v48 = 128;
                }
                else {
                  v48 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v48, v57_.v62);
              }
              if ((v57_.v57[0] & 1) != 0 && v57_.v58 != 0) {
                if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
                  v49 = 128;
                }
                else {
                  v49 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v49, v57_.v58);
              }
            }
            v12 = v15 + 10;
            v13 = (__int64)v15;
          } while (v15 + 10 != v5);
        }
      }
    }
    else {
      v7 = a3 >> 1;
      v10 = 5 * (a3 >> 1);
      if ((__int64)a3 <= a5) {
        v50 = 80 * (a3 >> 1);
        game_hub_d7f080_alt1(a1, (__int64*)(a1 + v50), a3 >> 1, a4);
        v51 = a3 - v7;
        v52 = a4 + v50;
        game_hub_d7f080_alt1((__int64)&v6[2 * v10], v5, v51, a4 + v50);
        v57_.v57[0] = a3;
        v53 = a4;
        v54 = a4 + 80 * a3;
        v55 = v52;
        while (v55 != v54) {
          if ((signed __int32)*(_DWORD*)(v55 + 24) >=
              (signed __int32)*(_DWORD*)(v53 + 24)) {
            GameRoutine_d7ff80((__int64)v6, (__int64*)v53);
            v53 += 80;
          }
          else {
            GameRoutine_d7ff80((__int64)v6, (__int64*)v55);
            v55 += 80;
          }
          v6 += 10;
          if (v53 == v52) {
            while (v55 != v54) {
              GameRoutine_d7ff80((__int64)v6, (__int64*)v55);
              v55 += 80;
              v6 += 10;
            }
            goto LABEL_84;
          }
        }
        while (v53 != v52) {
          GameRoutine_d7ff80((__int64)v6, (__int64*)v53);
          v53 += 80;
          v6 += 10;
        }
      LABEL_84:
        if (a4 != 0) {
          GameRoutine_d80140((unsigned __int64*)v57_.v57, a4);
        }
      }
      else {
        game_hub_d7eb60(a1, (__int64*)(a1 + 80 * (a3 >> 1)), a3 >> 1, a4, a5);
        game_hub_d7eb60((__int64)&v6[2 * v10], v5, a3 - v7, a4, a5);
        PopupController_d7f820(v6, (__int64)&v6[2 * v10], v5, v7, a3 - v7, a4,
                               a5);
      }
    }
  }
}

void game_hub_d7f080(__int64 result, __int64* a2, unsigned __int64 a3,
                     __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
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
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  int v33;
  __int64* v34;
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
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  char v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  char v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v77;
  __int64* v78;
  _QWORD* v79;
  unsigned __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64* v85;
  _QWORD* v86;
  _QWORD* v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  _QWORD* v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64* v103;
  __int64* v104;

  if (a3 != 0) {
    v4 = a4;
    v5 = result;
    if (a3 == 2) {
      v11 = a2 - 10;
      if ((signed __int32)*((_DWORD*)a2 - 14) >=
          (signed __int32)*(_DWORD*)(result + 24)) {
        v67 = *(_QWORD*)result;
        v68 = *(_QWORD*)(result + 16);
        *(_QWORD*)(a4 + 8) = *(_QWORD*)(result + 8);
        *(_QWORD*)(a4 + 16) = v68;
        *(_QWORD*)a4 = v67;
        *(_QWORD*)(result + 8) = 0;
        *(_QWORD*)(result + 16) = 0;
        *(_QWORD*)result = 0;
        *(_DWORD*)(a4 + 24) = *(_DWORD*)(result + 24);
        v69 = *(_QWORD*)(result + 32);
        v70 = *(_QWORD*)(result + 48);
        *(_QWORD*)(a4 + 40) = *(_QWORD*)(result + 40);
        *(_QWORD*)(a4 + 48) = v70;
        *(_QWORD*)(a4 + 32) = v69;
        *(_QWORD*)(result + 40) = 0;
        *(_QWORD*)(result + 48) = 0;
        *(_QWORD*)(result + 32) = 0;
        *(_QWORD*)(a4 + 64) = 0;
        *(_QWORD*)(a4 + 72) = 0;
        *(_QWORD*)(a4 + 56) = 0;
        *(_QWORD*)(a4 + 56) = *(_QWORD*)(result + 56);
        *(_QWORD*)(a4 + 64) = *(_QWORD*)(result + 64);
        *(_QWORD*)(a4 + 72) = *(_QWORD*)(result + 72);
        *(_QWORD*)(result + 64) = 0;
        *(_QWORD*)(result + 72) = 0;
        *(_QWORD*)(result + 56) = 0;
        v71 = *v11;
        v72 = *(a2 - 8);
        *(_QWORD*)(a4 + 88) = *(a2 - 9);
        *(_QWORD*)(a4 + 96) = v72;
        *(_QWORD*)(a4 + 80) = v71;
        *(a2 - 9) = 0;
        *(a2 - 8) = 0;
        *v11 = 0;
        *(_DWORD*)(a4 + 104) = *((_DWORD*)a2 - 14);
        v73 = *(a2 - 4);
        v74 = *(a2 - 6);
        *(_QWORD*)(a4 + 120) = *(a2 - 5);
        *(_QWORD*)(a4 + 128) = v73;
        *(_QWORD*)(a4 + 112) = v74;
        *(a2 - 5) = 0;
        *(a2 - 4) = 0;
        *(a2 - 6) = 0;
        *(_QWORD*)(a4 + 144) = 0;
        *(_QWORD*)(a4 + 152) = 0;
        *(_QWORD*)(a4 + 136) = 0;
        v10 = a2 - 3;
        *(_QWORD*)(a4 + 136) = *(a2 - 3);
        *(_QWORD*)(a4 + 144) = *(a2 - 2);
        v20 = *(a2 - 1);
      }
      else {
        v12 = *v11;
        v13 = *(a2 - 8);
        *(_QWORD*)(a4 + 8) = *(a2 - 9);
        *(_QWORD*)(a4 + 16) = v13;
        *(_QWORD*)a4 = v12;
        *(a2 - 9) = 0;
        *(a2 - 8) = 0;
        *v11 = 0;
        *(_DWORD*)(a4 + 24) = *((_DWORD*)a2 - 14);
        v14 = *(a2 - 6);
        v15 = *(a2 - 4);
        *(_QWORD*)(a4 + 40) = *(a2 - 5);
        *(_QWORD*)(a4 + 48) = v15;
        *(_QWORD*)(a4 + 32) = v14;
        *(a2 - 5) = 0;
        *(a2 - 4) = 0;
        *(a2 - 6) = 0;
        *(_QWORD*)(a4 + 64) = 0;
        *(_QWORD*)(a4 + 72) = 0;
        *(_QWORD*)(a4 + 56) = 0;
        *(_QWORD*)(a4 + 56) = *(a2 - 3);
        *(_QWORD*)(a4 + 64) = *(a2 - 2);
        *(_QWORD*)(a4 + 72) = *(a2 - 1);
        *(a2 - 2) = 0;
        *(a2 - 1) = 0;
        *(a2 - 3) = 0;
        v16 = *(_QWORD*)result;
        v17 = *(_QWORD*)(result + 16);
        *(_QWORD*)(a4 + 88) = *(_QWORD*)(result + 8);
        *(_QWORD*)(a4 + 96) = v17;
        *(_QWORD*)(a4 + 80) = v16;
        *(_QWORD*)(result + 8) = 0;
        *(_QWORD*)(result + 16) = 0;
        *(_QWORD*)result = 0;
        *(_DWORD*)(a4 + 104) = *(_DWORD*)(result + 24);
        v18 = *(_QWORD*)(result + 48);
        v19 = *(_QWORD*)(result + 32);
        *(_QWORD*)(a4 + 120) = *(_QWORD*)(result + 40);
        *(_QWORD*)(a4 + 128) = v18;
        *(_QWORD*)(a4 + 112) = v19;
        *(_QWORD*)(result + 40) = 0;
        *(_QWORD*)(result + 48) = 0;
        *(_QWORD*)(result + 32) = 0;
        *(_QWORD*)(a4 + 144) = 0;
        *(_QWORD*)(a4 + 152) = 0;
        *(_QWORD*)(a4 + 136) = 0;
        v10 = (__int64*)(result + 56);
        *(_QWORD*)(a4 + 136) = *(_QWORD*)(result + 56);
        *(_QWORD*)(a4 + 144) = *(_QWORD*)(result + 64);
        v20 = *(_QWORD*)(result + 72);
      }
      *(_QWORD*)(a4 + 152) = v20;
      goto LABEL_49;
    }
    if (a3 == 1) {
      v6 = *(_QWORD*)result;
      v7 = *(_QWORD*)(result + 16);
      *(_QWORD*)(a4 + 8) = *(_QWORD*)(result + 8);
      *(_QWORD*)(a4 + 16) = v7;
      *(_QWORD*)a4 = v6;
      *(_QWORD*)(result + 8) = 0;
      *(_QWORD*)(result + 16) = 0;
      *(_QWORD*)result = 0;
      *(_DWORD*)(a4 + 24) = *(_DWORD*)(result + 24);
      v8 = *(_QWORD*)(result + 32);
      v9 = *(_QWORD*)(result + 48);
      *(_QWORD*)(a4 + 40) = *(_QWORD*)(result + 40);
      *(_QWORD*)(a4 + 48) = v9;
      *(_QWORD*)(a4 + 32) = v8;
      *(_QWORD*)(result + 40) = 0;
      *(_QWORD*)(result + 48) = 0;
      *(_QWORD*)(result + 32) = 0;
      *(_QWORD*)(a4 + 64) = 0;
      *(_QWORD*)(a4 + 72) = 0;
      *(_QWORD*)(a4 + 56) = 0;
      v10 = (__int64*)(result + 56);
      *(_QWORD*)(a4 + 56) = *(_QWORD*)(result + 56);
      *(_QWORD*)(a4 + 64) = *(_QWORD*)(result + 64);
      *(_QWORD*)(a4 + 72) = *(_QWORD*)(result + 72);
    LABEL_49:
      v10[1] = 0;
      v10[2] = 0;
      *v10 = 0;
      return;
    }
    v103 = a2;
    if ((__int64)a3 > 8) {
      v75 = a3 >> 1;
      v77 = 5 * (a3 >> 1);
      v78 = (__int64*)(result + 80 * (a3 >> 1));
      game_hub_d7eb60(result, v78, v75, a4, v75);
      game_hub_d7eb60(v5 + 16 * v77, v103, a3 - v75, v4 + 16 * v77, a3 - v75);
      if (16 * v77 != 0) {
        v79 = (_QWORD*)(v4 + 72);
        v80 = v5 + 16 * v77;
        while ((__int64*)v80 != v103) {
          v85 = v79 - 9;
          v86 = v79 - 5;
          v87 = v79 - 2;
          if ((signed __int32)*(_DWORD*)(v80 + 24) >=
              (signed __int32)*(_DWORD*)(v5 + 24)) {
            v81 = *(_QWORD*)v5;
            v82 = *(_QWORD*)(v5 + 16);
            *(v79 - 8) = *(_QWORD*)(v5 + 8);
            *(v79 - 7) = v82;
            *v85 = v81;
            *(_QWORD*)(v5 + 8) = 0;
            *(_QWORD*)(v5 + 16) = 0;
            *(_QWORD*)v5 = 0;
            *((_DWORD*)v79 - 12) = *(_DWORD*)(v5 + 24);
            v83 = *(_QWORD*)(v5 + 32);
            v84 = *(_QWORD*)(v5 + 48);
            *(v79 - 4) = *(_QWORD*)(v5 + 40);
            *(v79 - 3) = v84;
            *v86 = v83;
            *(_QWORD*)(v5 + 40) = 0;
            *(_QWORD*)(v5 + 48) = 0;
            *(_QWORD*)(v5 + 32) = 0;
            *(v79 - 1) = 0;
            *v79 = 0;
            *v87 = 0;
            *(v79 - 2) = *(_QWORD*)(v5 + 56);
            *(v79 - 1) = *(_QWORD*)(v5 + 64);
            *v79 = *(_QWORD*)(v5 + 72);
            *(_QWORD*)(v5 + 64) = 0;
            *(_QWORD*)(v5 + 72) = 0;
            *(_QWORD*)(v5 + 56) = 0;
            v5 += 80;
          }
          else {
            v88 = *(_QWORD*)v80;
            v89 = *(_QWORD*)(v80 + 16);
            *(v79 - 8) = *(_QWORD*)(v80 + 8);
            *(v79 - 7) = v89;
            *v85 = v88;
            *(_QWORD*)(v80 + 8) = 0;
            *(_QWORD*)(v80 + 16) = 0;
            *(_QWORD*)v80 = 0;
            *((_DWORD*)v79 - 12) = *(_DWORD*)(v80 + 24);
            v90 = *(_QWORD*)(v80 + 32);
            v91 = *(_QWORD*)(v80 + 48);
            *(v79 - 4) = *(_QWORD*)(v80 + 40);
            *(v79 - 3) = v91;
            *v86 = v90;
            *(_QWORD*)(v80 + 40) = 0;
            *(_QWORD*)(v80 + 48) = 0;
            *(_QWORD*)(v80 + 32) = 0;
            *(v79 - 1) = 0;
            *v79 = 0;
            *v87 = 0;
            *(v79 - 2) = *(_QWORD*)(v80 + 56);
            *(v79 - 1) = *(_QWORD*)(v80 + 64);
            *v79 = *(_QWORD*)(v80 + 72);
            *(_QWORD*)(v80 + 64) = 0;
            *(_QWORD*)(v80 + 72) = 0;
            *(_QWORD*)(v80 + 56) = 0;
            v80 += 80LL;
          }
          v79 += 10;
          if ((__int64*)v5 == v78) {
            v4 = (__int64)(v79 - 9);
            goto LABEL_65;
          }
        }
        if ((__int64*)v5 != v78) {
          v92 = 0;
          do {
            v93 = v5 + v92 * 8;
            v94 = &v79[v92];
            v92 += 10;
            v95 = *(_QWORD*)v93;
            v96 = *(_QWORD*)(v93 + 16);
            *(v94 - 8) = *(_QWORD*)(v93 + 8);
            *(v94 - 7) = v96;
            *(v94 - 9) = v95;
            *(_QWORD*)(v93 + 8) = 0;
            *(_QWORD*)(v93 + 16) = 0;
            *(_QWORD*)v93 = 0;
            *((_DWORD*)v94 - 12) = *(_DWORD*)(v93 + 24);
            v97 = *(_QWORD*)(v93 + 32);
            v98 = *(_QWORD*)(v93 + 48);
            *(v94 - 4) = *(_QWORD*)(v93 + 40);
            *(v94 - 3) = v98;
            *(v94 - 5) = v97;
            *(_QWORD*)(v93 + 40) = 0;
            *(_QWORD*)(v93 + 48) = 0;
            *(_QWORD*)(v93 + 32) = 0;
            *(v94 - 1) = 0;
            *v94 = 0;
            *(v94 - 2) = 0;
            *(v94 - 2) = *(_QWORD*)(v93 + 56);
            *(v94 - 1) = *(_QWORD*)(v93 + 64);
            *v94 = *(_QWORD*)(v93 + 72);
            *(_QWORD*)(v93 + 64) = 0;
            *(_QWORD*)(v93 + 72) = 0;
            *(_QWORD*)(v93 + 56) = 0;
          } while ((__int64*)(v93 + 80) != v78);
        }
      }
      else {
        v80 = v5 + 16 * v77;
      LABEL_65:
        while ((__int64*)v80 != v103) {
          v99 = *(_QWORD*)v80;
          v100 = *(_QWORD*)(v80 + 16);
          *(_QWORD*)(v4 + 8) = *(_QWORD*)(v80 + 8);
          *(_QWORD*)(v4 + 16) = v100;
          *(_QWORD*)v4 = v99;
          *(_QWORD*)(v80 + 8) = 0;
          *(_QWORD*)(v80 + 16) = 0;
          *(_QWORD*)v80 = 0;
          *(_DWORD*)(v4 + 24) = *(_DWORD*)(v80 + 24);
          v101 = *(_QWORD*)(v80 + 32);
          v102 = *(_QWORD*)(v80 + 48);
          *(_QWORD*)(v4 + 40) = *(_QWORD*)(v80 + 40);
          *(_QWORD*)(v4 + 48) = v102;
          *(_QWORD*)(v4 + 32) = v101;
          *(_QWORD*)(v80 + 40) = 0;
          *(_QWORD*)(v80 + 48) = 0;
          *(_QWORD*)(v80 + 32) = 0;
          *(_QWORD*)(v4 + 64) = 0;
          *(_QWORD*)(v4 + 72) = 0;
          *(_QWORD*)(v4 + 56) = 0;
          *(_QWORD*)(v4 + 56) = *(_QWORD*)(v80 + 56);
          *(_QWORD*)(v4 + 64) = *(_QWORD*)(v80 + 64);
          *(_QWORD*)(v4 + 72) = *(_QWORD*)(v80 + 72);
          *(_QWORD*)(v80 + 64) = 0;
          *(_QWORD*)(v80 + 72) = 0;
          *(_QWORD*)(v80 + 56) = 0;
          v80 += 80LL;
          v4 += 80;
        }
      }
    }
    else if ((__int64*)result != a2) {
      v21 = *(_QWORD*)result;
      v22 = *(_QWORD*)(result + 16);
      *(_QWORD*)(a4 + 8) = *(_QWORD*)(result + 8);
      *(_QWORD*)(a4 + 16) = v22;
      *(_QWORD*)a4 = v21;
      *(_QWORD*)(result + 8) = 0;
      *(_QWORD*)(result + 16) = 0;
      *(_QWORD*)result = 0;
      *(_DWORD*)(a4 + 24) = *(_DWORD*)(result + 24);
      v23 = *(_QWORD*)(result + 32);
      v24 = *(_QWORD*)(result + 48);
      *(_QWORD*)(a4 + 40) = *(_QWORD*)(result + 40);
      *(_QWORD*)(a4 + 48) = v24;
      *(_QWORD*)(a4 + 32) = v23;
      *(_QWORD*)(result + 40) = 0;
      *(_QWORD*)(result + 48) = 0;
      *(_QWORD*)(result + 32) = 0;
      *(_QWORD*)(a4 + 64) = 0;
      *(_QWORD*)(a4 + 72) = 0;
      *(_QWORD*)(a4 + 56) = 0;
      *(_QWORD*)(a4 + 56) = *(_QWORD*)(result + 56);
      *(_QWORD*)(a4 + 64) = *(_QWORD*)(result + 64);
      *(_QWORD*)(a4 + 72) = *(_QWORD*)(result + 72);
      v25 = (__int64*)(result + 80);
      *(_QWORD*)(result + 64) = 0;
      *(_QWORD*)(result + 72) = 0;
      *(_QWORD*)(result + 56) = 0;
      if ((__int64*)(result + 80) != a2) {
        v26 = a4;
        v27 = fw_memory_g_heap_manager_ptr;
        do {
          v32 = v25;
          v33 = *(_DWORD*)(v26 + 24);
          v34 = (__int64*)(v26 + 80);
          if ((signed __int32)*(_DWORD*)(v5 + 104) >= v33) {
            v28 = *v32;
            v29 = v32[2];
            *(_QWORD*)(v26 + 88) = v32[1];
            *(_QWORD*)(v26 + 96) = v29;
            *v34 = v28;
            v32[1] = 0;
            v32[2] = 0;
            *v32 = 0;
            *(_DWORD*)(v26 + 104) = *(_DWORD*)(v5 + 104);
            v30 = *(_QWORD*)(v5 + 112);
            v31 = *(_QWORD*)(v5 + 128);
            *(_QWORD*)(v26 + 120) = *(_QWORD*)(v5 + 120);
            *(_QWORD*)(v26 + 128) = v31;
            *(_QWORD*)(v26 + 112) = v30;
            *(_QWORD*)(v5 + 120) = 0;
            *(_QWORD*)(v5 + 128) = 0;
            *(_QWORD*)(v5 + 112) = 0;
            *(_QWORD*)(v26 + 144) = 0;
            *(_QWORD*)(v26 + 152) = 0;
            *(_QWORD*)(v26 + 136) = 0;
            *(_QWORD*)(v26 + 136) = *(_QWORD*)(v5 + 136);
            *(_QWORD*)(v26 + 144) = *(_QWORD*)(v5 + 144);
            *(_QWORD*)(v26 + 152) = *(_QWORD*)(v5 + 152);
            *(_QWORD*)(v5 + 144) = 0;
            *(_QWORD*)(v5 + 152) = 0;
            *(_QWORD*)(v5 + 136) = 0;
          }
          else {
            v35 = *(_QWORD*)v26;
            v36 = *(_QWORD*)(v26 + 8);
            *(_DWORD*)(v26 + 104) = v33;
            v37 = v4;
            v38 = *(_QWORD*)(v26 + 16);
            *(_QWORD*)v26 = 0;
            *(_QWORD*)(v26 + 8) = 0;
            *(_QWORD*)(v26 + 16) = 0;
            v104 = (__int64*)(v26 + 80);
            *v34 = v35;
            *(_QWORD*)(v26 + 88) = v36;
            *(_QWORD*)(v26 + 96) = v38;
            v39 = *(_QWORD*)(v26 + 32);
            v40 = *(_QWORD*)(v26 + 40);
            *(_QWORD*)(v26 + 32) = 0;
            *(_QWORD*)(v26 + 40) = 0;
            *(_QWORD*)(v26 + 112) = v39;
            *(_QWORD*)(v26 + 120) = v40;
            v41 = *(_QWORD*)(v26 + 48);
            v42 = *(_QWORD*)(v26 + 56);
            *(_QWORD*)(v26 + 48) = 0;
            *(_QWORD*)(v26 + 56) = 0;
            *(_QWORD*)(v26 + 128) = v41;
            *(_QWORD*)(v26 + 136) = v42;
            v43 = *(_QWORD*)(v26 + 64);
            v44 = *(_QWORD*)(v26 + 72);
            *(_QWORD*)(v26 + 64) = 0;
            *(_QWORD*)(v26 + 72) = 0;
            *(_QWORD*)(v26 + 144) = v43;
            *(_QWORD*)(v26 + 152) = v44;
            if (v26 != v4) {
              while (1) {
                v51 = *(_DWORD*)(v26 - 56);
                v37 = v26;
                if ((signed __int32)*(_DWORD*)(v5 + 104) >= v51) {
                  break;
                }
                if ((*(_BYTE*)v26 & 1) != 0) {
                  v52 = *(_QWORD*)(v26 + 16);
                  if (v52 != 0) {
                    if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) != 0) {
                      v53 = 128;
                    }
                    else {
                      v53 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*(_QWORD*)v27 + v53, v52);
                    v51 = *(_DWORD*)(v26 - 56);
                  }
                }
                v26 -= 80;
                *(_DWORD*)(v37 + 24) = v51;
                v54 = *(_BYTE*)(v37 + 32);
                v55 = *(_QWORD*)(v37 - 72);
                *(_QWORD*)v37 = *(_QWORD*)(v37 - 80);
                *(_QWORD*)(v37 + 8) = v55;
                v56 = *(_QWORD*)(v37 - 64);
                *(_WORD*)(v37 - 80) = 0;
                *(_QWORD*)(v37 + 16) = v56;
                if ((v54 & 1) != 0) {
                  v57 = *(_QWORD*)(v37 + 48);
                  if (v57 != 0) {
                    if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) != 0) {
                      v58 = 128;
                    }
                    else {
                      v58 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*(_QWORD*)v27 + v58, v57);
                  }
                }
                v46 = *(_QWORD*)(v37 + 56);
                v59 = *(_QWORD*)(v37 - 48);
                v60 = *(_QWORD*)(v37 - 40);
                v61 = *(_QWORD*)(v37 - 32);
                *(_WORD*)(v37 - 48) = 0;
                *(_QWORD*)(v37 + 32) = v59;
                *(_QWORD*)(v37 + 40) = v60;
                *(_QWORD*)(v37 + 48) = v61;
                if (v46 != 0) {
                  v62 = *(_QWORD*)(v37 + 64);
                  if (v46 == v62) {
                    goto LABEL_17;
                  }
                  v63 = *(_QWORD*)(v37 + 64);
                  do {
                    v64 = *(_BYTE*)(v63 - 24);
                    v63 -= 24;
                    if ((v64 & 1) != 0) {
                      v65 = *(_QWORD*)(v62 - 8);
                      if (v65 != 0) {
                        if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) != 0) {
                          v66 = 128;
                        }
                        else {
                          v66 = 56;
                        }
                        nn_mem_StandardAllocator_Free(*(_QWORD*)v27 + v66, v65);
                      }
                    }
                    v62 = v63;
                  } while (v63 != v46);
                  v45 = *(_QWORD*)(v37 + 56);
                  *(_QWORD*)(v37 + 64) = v46;
                  v46 = v45;
                  if (v45 != 0) {
                  LABEL_17:
                    if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) != 0) {
                      v47 = 128;
                    }
                    else {
                      v47 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*(_QWORD*)v27 + v47, v46);
                  }
                }
                v48 = *(_QWORD*)(v37 - 24);
                v49 = *(_QWORD*)(v37 - 16);
                *(_QWORD*)(v37 - 24) = 0;
                *(_QWORD*)(v37 + 56) = v48;
                *(_QWORD*)(v37 + 64) = v49;
                v50 = *(_QWORD*)(v37 - 8);
                *(_QWORD*)(v37 - 16) = 0;
                *(_QWORD*)(v37 - 8) = 0;
                *(_QWORD*)(v37 + 72) = v50;
                if (v26 == v4) {
                  v37 = v4;
                  break;
                }
              }
            }
            GameRoutine_d7ff80(v37, v32);
            a2 = v103;
            v34 = v104;
          }
          v25 = v32 + 10;
          v26 = (__int64)v34;
          v5 = (__int64)v32;
        } while (v32 + 10 != a2);
      }
    }
  }
}

__int64 game_hub_d856f0(__int64 a1)
{
  __int64 v4;
  __int64 v5;

  if (game_hub_ProcHubSeqView_instance_ == 0) {
    return 0;
  }
  if (*(_QWORD*)GameData_212dbb8[0] == 0 ||
      (signed __int32)*(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 232) > 0) {
    return 0;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22124c0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_22124c0) != 0) {
    GameData_2212348 = 0;
    GameData_2212350 = (__int64)GameRoutine_d8b5b0;
    GameData_2212340 = 13;
    GameData_2212380 = 13;
    GameData_2212400 = 13;
    GameData_2212440 = 13;
    GameData_2212358 = 0;
    GameData_2212360 = 0;
    GameData_2212368 = 0;
    GameData_2212370 = 0;
    GameData_2212378 = 0;
    GameData_2212398 = 0;
    GameData_22123a0 = 0;
    GameData_22123a8 = 0;
    GameData_2212388 = 0;
    GameData_2212390 = (__int64)GameRoutine_d8b680;
    GameData_22123b0 = 0;
    GameData_22123b8 = 0;
    GameData_22123d8 = 0;
    GameData_22123e0 = 0;
    GameData_22123e8 = 0;
    GameData_22123f0 = 0;
    GameData_22123f8 = 0;
    GameData_2212418 = 0;
    GameData_2212420 = 0;
    GameData_2212428 = 0;
    GameData_22123c0 = 15;
    GameData_2212430 = 0;
    GameData_2212438 = 0;
    GameData_2212448 = 0;
    GameData_2212450 = (__int64)game_hub_anonymous_d8b720;
    GameData_2212458 = 0;
    GameData_2212460 = 0;
    GameData_2212468 = 0;
    GameData_2212470 = 0;
    GameData_2212478 = 0;
    GameData_2212480 = 0;
    GameData_22123c8 = 0;
    GameData_22123d0 = (__int64)GameRoutine_d8b6c0;
    GameData_22124a8 = 0;
    GameData_22124b0 = 0;
    GameData_22124b8 = 0;
    GameData_22124a0 = 0;
    GameData_2212490 = 0;
    GameData_2212498 = 0;
    GameData_2212488 = 0;
    GameData_2212408 = 0;
    GameData_2212410 = (__int64)GameRoutine_d8b700;
    __cxa_guard_release((__int64)&GameData_22124c0);
  }
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      152, 16, 0);
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
  *(_QWORD*)v4 = game_hub_anonymous_ProcPopWorldPostSeq_vtable;
  return ProcInst_657850(v4, (__int64)&GameData_2212340,
                         (__int64)"ProcPopWorldPostSeq", 1, a1);
}

__int64 game_hub_d889a0()
{
  __int64 result;
  __int64 v1;
  bool v2;
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  char v7;
  int v8;
  bool v10;
  int v11;

  result = GameData_21f3cb8;
  v1 = GameData_21d96b8;
  v2 = *(int*)(GameData_21f3cb8 + 32) <= 0 &&
       (signed __int32)*(_DWORD*)(GameData_21f3cb8 + 16) <= 0;
  if (!v2 ||
      game_ProcGameSkipView_instance_ != 0 &&
          (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                            152) -
                  1 <=
              2 &&
          (((v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v4 = 2)
               : (v4 = 3),
           (v4 & v3) == 0) ||
      game_hub_ProcHubSeqView_instance_ != 0 &&
          (v5 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408)) != 0 &&
          *(_QWORD*)(v5 + 40) != 0 ||
      (v6 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416)) != 0 &&
          *(_QWORD*)(v6 + 40) != 0) {
    v7 = 0;
  }
  else {
    v7 = *(_BYTE*)(GameData_21f3d10 + 10);
  }
  v8 = *(unsigned __int8*)(GameData_21d96b8 + 14);
  *(_BYTE*)(GameData_21d96b8 + 12) = v7 & 1;
  v10 = *(int*)(result + 32) < 1 && (signed __int32)*(_DWORD*)(result + 48) < 1;
  *(_BYTE*)(v1 + 13) = v10;
  v11 = (signed __int32)*(_DWORD*)(result + 32) < 1;
  if (v8 != v11) {
    *(_BYTE*)(v1 + 14) = v11;
  }
  return result;
}

void game_hub_d97660(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  _BYTE* v16;
  __int128 v17;

  CharacterPath_d97500((_QWORD*)a1);
  game_hub_d96ce0((void*)((__int64*)&v17), *(_QWORD**)GameData_212ef90[0], a2,
                  a3);
  v6 = *((_QWORD*)&v17 + 1);
  v7 = *(_QWORD*)(a1 + 24);
  *(_OWORD*)(a1 + 16) = v17;
  if (v7 != 0) {
    std___1___shared_weak_count___release_weak(v7);
    v6 = *(_QWORD*)(a1 + 24);
  }
  if (v6 != 0) {
    v8 = std___1___shared_weak_count_lock(v6);
    if (v8 != 0) {
      v9 = *(_QWORD*)(a1 + 16);
      v10 = v8;
      if (v9 != 0) {
        *(_DWORD*)(v9 + 32) = 0;
        *(_BYTE*)(v9 + 16) = 1;
        v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + 16LL);
        *(_BYTE*)(v11 + 288) = 1;
        GameRoutine_cfd8e0(v11 + 136, 1);
        v12 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + 8LL);
        if (*(_BYTE*)(v12 + 224) != 0) {
          v13 = *(_QWORD*)(v12 + 232);
          *(_BYTE*)(v12 + 224) = 0;
          if (v13 != 0) {
            v14 = *(_QWORD*)(v13 + 104);
            if (*(_BYTE*)(v14 + 16) == 1) {
              v15 = *(_BYTE*)(v14 + 17);
              *(_BYTE*)(v14 + 16) = 0;
              *(_BYTE*)(v14 + 17) = v15 | 2;
              *(_BYTE*)(v14 + 18) |= 2u;
              *(_BYTE*)(v14 + 19) |= 2u;
              *(_BYTE*)(v14 + 20) |= 2u;
              v16 = *(_BYTE**)(v14 + 8);
              v16[632] = 0;
              v16[664] = 0;
              v16[696] = 0;
              v16[728] = 0;
              (*(void (**)(__int64))(*(_QWORD*)v14 + 72LL))(v14);
            }
          }
          game_zview_CharacterAnim_CommitReduceFlag(*(_QWORD*)(v12 + 344));
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
  }
}

void game_hub_d977e0(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  long double v4;
  __int64 v6;
  __int64 v7;
  float32x4_t* v8;
  float32x4_t v9;
  int8x16_t v10;
  __int64 v11;
  unsigned int v12;
  float32x4_t v13;
  __int64 v14;
  int8x16_t v15;
  int8x16_t v16;
  struct {
    int32x2_t v17;
    unsigned int v18;
    char gap12_[4];
    int8x16_t v19;
  } v17_;

  v2 = a1[3];
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v6 = a1[2];
      v7 = v3;
      if (v6 != 0) {
        LODWORD(v4) = *(_DWORD*)(v6 + 32);
        GameRoutine_d95720(*(_QWORD*)v6, v4);
        v8 = (float32x4_t*)a1[1];
        game_zview_d12d30(*(_QWORD*)(LANES128(v8[1]).n128_u64[1] + 16),
                          &v17_.v17, 1);
        v9 = vsubq_f32(
            v8[79],
            *(float32x4_t*)(*(_QWORD*)(LANES128(v8[1]).n128_u64[1] + 16) +
                            560LL));
        v10 = vmulq_f32(v9, v9);
        LANES128(v10).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
                .n64_f32[0] > 0x1.0000000000000p-23f) {
          v11 = *(_QWORD*)(GameData_21ec7c0 + 120);
          if ((*(_BYTE*)(v11 + 12) & 1) == 0) {
            *(_BYTE*)(v11 + 12) = 1;
          }
        }
        v12 = v17_.v18;
        LANES128(v8[79]).n128_u64[0] = LANES64(v17_.v17).n64_u64[0];
        v13 = v8[79];
        LANES128(v13).n128_u64[1] = v12;
        v8[79] = v13;
        HubCharacterNatives_cabfc0((__int64)v8, 1);
        v14 = *(_QWORD*)(*(_QWORD*)(a1[1] + 24LL) + 16LL);
        if (*(_BYTE*)(v14 + 320) == 1) {
          v15 = v17_.v19;
          *(_QWORD*)(v14 + 304) = LANES128(v17_.v19).n128_u64[0];
          *(_QWORD*)(v14 + 312) =
              LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u64[0];
        }
        else {
          v16 = v17_.v19;
          *(_BYTE*)(v14 + 320) = 1;
          *(int8x16_t*)(v14 + 304) = v16;
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

void game_hub_d98820(_QWORD* a1, __int64 a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v6;
  __int64 v7;

  v2 = (__int64*)a1[4];
  v3 = (__int64*)a1[5];
  if (v2 != v3) {
    do {
      v6 = *v2;
      v2 += 3;
      GameRoutine_629ac0(as_g_script_manager, v6);
    } while (v2 != v3);
    v2 = (__int64*)a1[4];
    v3 = (__int64*)a1[5];
  }
  for (; v3 != v2; v3 -= 3) {
    v7 = *(v3 - 2);
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
  }
  a1[5] = v2;
  Manager_d9d980(a1 + 12);
  GameRoutine_d98e20((__int64)a1);
  GameRoutine_d99480(a1, "HubXml_Common", 0);
  GameRoutine_d99480(a1, "HubXml_Character", 0);
  GameRoutine_d99480(a1, "HubXml_Conditions", 0);
  GameRoutine_d99480(a1, "HubXml_Timeline", 0);
  HubScript_d98960(a1, a2);
}

void game_hub_df9ca0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  _QWORD* v3;
  float v4;
  float v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int128* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int8 explicit;
  int* v17;
  int v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  float32x4_t v23;
  int8x16_t v24;
  float32x2_t v25;
  _QWORD* v26;
  int v27;
  __int64 v28;
  int v29;
  float v30;
  struct {
    unsigned int* v31;
    __int64 v32;
  } v31_;
  struct {
    __int64 v33;
    __int64 v34;
    char gap48_[24];
    _QWORD* v35;
  } v33_;

  if (*(_BYTE*)(a1 + 848) == 1) {
    v2 = *(_QWORD*)(a1 + 864);
    if (v2 == 0 || *(_QWORD*)(v2 + 8) == -1) {
      v3 = *(_QWORD**)(*GameData_212ee30[0] + 8);
      if (v3 != nullptr) {
        v4 = 0x1.0000000000000p+0f;
        v5 = 0x1.0000000000000p-1f;
        v7 = *(_QWORD*)(*(_QWORD*)(a1 + 800) + 8LL);
        v6 = *(_QWORD*)(*(_QWORD*)(a1 + 800) + 16LL);
        if (v6 != v7) {
          while (1) {
            v8 = *(_QWORD*)(v7 + 8);
            if (*(_DWORD*)(v8 + 284) == 2) {
              break;
            }
            v7 += 32;
            if (v7 == v6) {
              goto LABEL_8;
            }
          }
          explicit = atomic_load_explicit(
              (atomic_uchar* volatile)GameData_212df10, memory_order_acquire);
          v17 = GameData_212df08;
          if ((explicit & 1) == 0) {
            v33_.v35 = v3;
            v29 = __cxa_guard_acquire((__int64)GameData_212df10);
            v5 = 0x1.0000000000000p-1f;
            v4 = 0x1.0000000000000p+0f;
            v17 = GameData_212df08;
            v3 = v33_.v35;
            if (v29 != 0) {
              *GameData_212df08 = wld_Crc32(0, "ModelModule", 0xBu);
              __cxa_guard_release((__int64)GameData_212df10);
              v5 = 0x1.0000000000000p-1f;
              v4 = 0x1.0000000000000p+0f;
              v17 = GameData_212df08;
              v3 = v33_.v35;
            }
          }
          v18 = *v17;
          v19 = *(_QWORD*)(v8 + 512);
          v20 = v19;
          while (v20 != *(_QWORD*)(v8 + 504)) {
            v21 = *(_DWORD*)(v20 - 16);
            v20 -= 16;
            v19 -= 16;
            if (v21 == v18) {
              if (*(_QWORD*)(v8 + 512) != v19) {
                v22 = *(_QWORD*)(v19 + 8);
                if (v22 != 0) {
                  v23 = vsubq_f32(*(float32x4_t*)(*(_QWORD*)(v22 + 24) + 64LL),
                                  *(float32x4_t*)(*(_QWORD*)(v22 + 24) + 48LL));
                  v4 = LANES128(v23).n128_f32[1];
                  LANES128(v23).n128_u32[1] = 0;
                  v24 = vmulq_f32(v23, v23);
                  LANES64(v25).n64_u64[0] =
                      LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                             LANES128_OF(vextq_s8(v24, v24, 8u))
                                                 .n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v24).n128_u64[0])))
                          .n64_u64[0];
                  if (v4 < 0x0.0p+0f) {
                    v4 = 0x0.0p+0f;
                  }
                  v5 = 0x1.0000000000000p-1f *
                       LANES64_OF(vsqrt_f32(vpadd_f32(v25, v25))).n64_f32[0];
                }
              }
              break;
            }
          }
        }
      LABEL_8:
        if ((*(_BYTE*)(a1 + 976) & 1) != 0) {
          v9 = (__int128*)(a1 + 960);
        }
        else if ((atomic_load_explicit(
                      (atomic_uchar* volatile)&GameData_21a6130,
                      memory_order_acquire) &
                  1) != 0) {
          v9 = &GameData_21a6120;
        }
        else {
          v26 = v3;
          *(float*)&v33_.v35 = v5;
          v30 = v4;
          v27 = __cxa_guard_acquire((__int64)&GameData_21a6130);
          v9 = &GameData_21a6120;
          if (v27 != 0) {
            v28 = *((_QWORD*)GameData_212c540 + 1);
            *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
            *((_QWORD*)&GameData_21a6120 + 1) = v28;
            __cxa_guard_release((__int64)&GameData_21a6130);
            v9 = &GameData_21a6120;
          }
          v4 = v30;
          v5 = *(float*)&v33_.v35;
          v3 = v26;
        }
        RouteNavMesh_fe7000((void*)(&v33_.v33), v3, v9, v5, v4);
        v13 = v33_.v34;
        if (v33_.v34 != 0) {
          if (*(_QWORD*)(v33_.v34 + 8) != -1) {
            v14 = v33_.v33;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v33_.v34 + 16),
                                      1u, memory_order_relaxed);
            v15 = *(_QWORD*)(a1 + 864);
            *(_QWORD*)(a1 + 864) = v13;
            *(_QWORD*)(a1 + 856) = v14;
            if (v15 != 0) {
              std___1___shared_weak_count___release_weak(v15);
            }
          }
          v12 = v13;
        LABEL_24:
          std___1___shared_weak_count___release_weak(v12);
        }
      }
    }
  }
  else {
    v10 = *(_QWORD**)(*GameData_212ee30[0] + 8);
    if (v10 != nullptr) {
      v11 = *(_QWORD*)(a1 + 864);
      v31_.v31 = *(unsigned int**)(a1 + 856);
      v31_.v32 = v11;
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                  memory_order_relaxed);
      }
      RouteNavMesh_fe6c60(v10, &v31_.v31);
      if (v31_.v32 != 0) {
        std___1___shared_weak_count___release_weak(v31_.v32);
      }
    }
    v12 = *(_QWORD*)(a1 + 864);
    *(_QWORD*)(a1 + 856) = 0;
    *(_QWORD*)(a1 + 864) = 0;
    if (v12 != 0) {
      goto LABEL_24;
    }
  }
}

void game_hub_dfa040(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  const char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  const char* v9;
  __int64 v10;
  __int64 v11;

  v2 = a1[100];
  if (v2 == 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 24LL))(v2) & 1) == 0) {
    v3 = a1[103];
    v4 = a1[104];
    if (v3 == v4) {
    LABEL_10:
      v6 = a1[100];
      if (v6 == 0 ||
          ((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6) & 1) == 0) {
        v7 = a1[103];
        v8 = a1[104];
        if (v7 == v8) {
        LABEL_18:
          v10 = a1[92];
          if (v10 != 0 && (*(_BYTE*)(v10 + 16) & 1) == 0) {
            GameHr_e02a40(v10);
          }
        }
        else {
          while (1) {
            v9 = (*(_BYTE*)v7 & 1) != 0 ? *(const char**)(v7 + 16)
                                        : (const char*)(v7 + 1);
            if ((Config_bc7520(eft_g_effectSystem, v9) & 1) == 0) {
              break;
            }
            v7 += 24;
            if (v7 == v8) {
              goto LABEL_18;
            }
          }
        }
      }
      game_hub_dfa180((__int64)a1);
      v11 = a1[92];
      if (v11 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      }
      game_hub_df9ca0((__int64)a1);
    }
    else {
      while (1) {
        v5 = (*(_BYTE*)v3 & 1) != 0 ? *(const char**)(v3 + 16)
                                    : (const char*)(v3 + 1);
        if ((Config_bc7520(eft_g_effectSystem, v5) & 1) == 0) {
          break;
        }
        v3 += 24;
        if (v3 == v4) {
          goto LABEL_10;
        }
      }
    }
  }
}

void game_hub_e02d20(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  bool v18;
  __int64 v19;
  __int128* v20;
  __int64 v21;
  __int64 v22;
  float32x4_t v23;
  int8x16_t v24;
  int8x16_t v25;
  unsigned int v26;
  int8x16_t v27;
  int v28;
  int8x16_t v29;
  int8x16_t v30;
  __int64 v31;
  unsigned int v32;
  int8x16_t v33;
  char v34;
  __int64 v35;
  _QWORD v36[2];
  __int64 v37[2];
  _WORD v38[8];
  __int64 v39;
  __int16 v40;
  __int64 v41;
  int v42;
  char v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  _QWORD v48[2];
  char v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  float32x4_t v53;
  struct {
    __int64 v54;
    int v55;
  } v54_;

  v3 = a2[1];
  if (v3 != 0) {
    v5 = std___1___shared_weak_count_lock(v3);
    if (v5 != 0) {
      v6 = *a2;
      v7 = v5;
      if (*a2 == 0) {
      LABEL_28:
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak(v7);
        }
        return;
      }
      v8 = a2[1];
      v54_.v54 = 0;
      v54_.v55 = 0;
      v38[0] = 0;
      v40 = 0;
      v42 = 0;
      v43 = 0;
      v44 = 0;
      v49 = 0;
      v50 = 0;
      v51 = 0;
      v52 = 0;
      v45 = 1065353216;
      v53 = (__typeof__(v53)){0};
      v46 = 0;
      v47 = 0;
      v48[0] = 0;
      *(_QWORD*)((char*)v48 + 5) = 0;
      if (v8 == 0) {
        goto LABEL_13;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                memory_order_relaxed);
      v9 = std___1___shared_weak_count_lock(v8);
      if (v9 != 0) {
        v10 = v9;
        v11 = GameHr_d4e840(v6, (__int64)v38);
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if ((v11 & 1) != 0) {
            goto LABEL_8;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          std___1___shared_weak_count___release_weak(v10);
          if ((v11 & 1) != 0) {
          LABEL_8:
            v12 = *a2;
            v13 = a2[1];
            v37[0] = v12;
            v37[1] = v13;
            if (v13 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                        memory_order_relaxed);
              v14 = GameRoutine_d4eca0(v37, (__int64)&v54_.v54);
              std___1___shared_weak_count___release_weak(v13);
              std___1___shared_weak_count___release_weak(v8);
              if (v14) {
                goto LABEL_32;
              }
            }
            else {
              v18 = GameRoutine_d4eca0(v37, (__int64)&v54_.v54);
              std___1___shared_weak_count___release_weak(v8);
              if (v18) {
              LABEL_32:
                v19 = *(_QWORD*)(a1 + 8);
                if ((*(_BYTE*)(v19 + 976) & 1) != 0) {
                  v20 = (__int128*)(v19 + 960);
                }
                else if ((atomic_load_explicit(
                              (atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
                          1) != 0) {
                  v20 = &GameData_21a6120;
                }
                else {
                  v20 = &GameData_21a6120;
                  if (__cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
                    v35 = *((_QWORD*)GameData_212c540 + 1);
                    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
                    *((_QWORD*)&GameData_21a6120 + 1) = v35;
                    __cxa_guard_release((__int64)&GameData_21a6130);
                  }
                }
                v21 = *((_QWORD*)v20 + 1);
                v36[0] = *(_QWORD*)v20;
                v36[1] = v21;
                v22 = *(_QWORD*)(v6 + 168);
                if (v22 != 0) {
                  v23 = *(float32x4_t*)(*(_QWORD*)(v22 + 8) + 304LL);
                  v24 = vaddq_f32(v23, *(float32x4_t*)(v6 + 80));
                  v25 = vaddq_f32(v23, *(float32x4_t*)(v6 + 96));
                  LANES128(v24).n128_u32[3] = 0;
                  LANES128(v25).n128_u32[3] = 0;
                }
                else {
                  v25 = (__typeof__(v25)){0};
                  v24 = (__typeof__(v24)){0};
                }
                if (*(_BYTE*)(v6 + 32) != 0) {
                  v26 = -1;
                }
                else {
                  v26 = 0;
                }
                v27 = vdupq_n_s32(v26);
                v28 = *(unsigned __int8*)(v6 + 64);
                v29 = vbslq_s8(v27, *(int8x16_t*)(v6 + 16), v24);
                v30 = *(int8x16_t*)(v6 + 48);
                v31 = *(_QWORD*)(v54_.v54 + 48);
                if (v28 != 0) {
                  v32 = -1;
                }
                else {
                  v32 = 0;
                }
                v33 = vdupq_n_s32(v32);
                v34 = *(_BYTE*)(v31 + 16);
                HIDWORD(v36[0]) = COERCE_UNSIGNED_INT(vmuls_lane_f32(
                    0x1.0000000000000p-1f,
                    COERCE_AS(
                        float32x2_t,
                        LANES128_OF(vaddq_f32(v29, vbslq_s8(v33, v30, v25)))
                            .n128_u64[0]),
                    1));
                if ((v34 & 1) == 0) {
                  GameRoutine_d57390(v31, v54_.v54);
                  game_zview_d57520((_QWORD*)v31, (__int64)v36, 0, &v53);
                  *(_BYTE*)(v31 + 16) = 1;
                }
              }
            }
          LABEL_13:
            if ((v50 & 1) != 0 && v52 != 0) {
              v15 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v15 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v52);
            }
            if ((v40 & 1) != 0 && v41 != 0) {
              v16 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v16 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v41);
            }
            if ((v38[0] & 1) != 0 && v39 != 0) {
              v17 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v17 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v39);
            }
            goto LABEL_28;
          }
        }
      }
      std___1___shared_weak_count___release_weak(v8);
      goto LABEL_13;
    }
  }
}

__int64 game_hub_efa580(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  int v3;
  int v4;
  unsigned __int64 v5;
  __int128 v6;
  unsigned __int64 v7;
  float v8;
  float* v9;
  float v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  float* v14;
  bool v15;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  struct {
    float v31;
    char v32;
    char gap5_[3];
    char v33;
    char gap9_[3];
    char v34;
    char gap13_[3];
    char v35;
    char gap17_[3];
    char v36;
    char gap21_[3];
    char v37;
    char gap25_[3];
    int v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 vars0;
    __int64 vars8;
  } v31_;

  v2 = game_script_hub_g_frame_counter_ptr[0];
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v4 = (v3 & 8) != 0 ? 2 : 3;
    if ((v4 & v3) == 0) {
      v9 = (float*)(a1 + 140);
      goto LABEL_22;
    }
  }
  if (game_ProcFadeView_instance_ == 0) {
    goto LABEL_14;
  }
  v5 = game_ProcFadeView_instance_ +
       ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ + 480)
        << 6);
  if (*(float*)(v5 + 172) == *(float*)(v5 + 168)) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)(v5 + 160) + 16LL))(v5 + 160);
  }
  else {
    v6 = *(_OWORD*)(v5 + 208);
  }
  if (*((float*)&v6 + 3) == 0x1.0000000000000p+0f) {
    v7 = LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                      (_QWORD*)(*(_QWORD*)(v5 + 160) + 16LL))(
                         v5 + 160, *((float*)&v6 + 3)))
             .n128_u64[1];
    v8 = 0x0.0p+0f;
    v9 = (float*)(a1 + 140);
    if (*((float*)&v7 + 1) == 0x1.0000000000000p+0f) {
      goto LABEL_23;
    }
  }
  else {
  LABEL_14:
    v9 = (float*)(a1 + 140);
  }
  v8 = *v9;
  v10 = fabsf((float)(*(float*)(*(_QWORD*)v2 + 104LL) * 0x1.0aef000000000p+4f) /
              0x1.f400000000000p+9f);
  if (*v9 > 0x0.0p+0f) {
    v8 = v8 - v10;
    if (v8 >= 0x0.0p+0f) {
      goto LABEL_23;
    }
    goto LABEL_22;
  }
  if (*v9 < 0x0.0p+0f) {
    v8 = v8 + v10;
    if (v8 > 0x0.0p+0f) {
    LABEL_22:
      v8 = 0x0.0p+0f;
    }
  }
LABEL_23:
  *v9 = v8;
  v11 = *(_QWORD*)GameData_212dc60[0];
  v12 = *(_QWORD*)(*(_QWORD*)GameData_212dc60[0] + 16LL);
  result = *(_QWORD*)(v12 + 24);
  if (result == 0) {
    goto LABEL_33;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    goto LABEL_33;
  }
  v14 = *(float**)(v12 + 16);
  v15 = v14 != nullptr && ((*(_BYTE*)(*(_QWORD*)v14 + 12LL) & 1) != 0 ||
                           v14[8] < *(float*)(*(_QWORD*)v14 + 8LL));
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v17 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = std___1___shared_weak_count___release_weak(v17);
    if (v15) {
      goto LABEL_34;
    }
  LABEL_33:
    if (*(float*)(v11 + 8) <= 0x0.0p+0f) {
      goto LABEL_35;
    }
    goto LABEL_34;
  }
  if (!v15) {
    goto LABEL_33;
  }
LABEL_34:
  *(float*)(a1 + 132) =
      *(float*)(a1 + 132) +
      (float)((float)(*(float*)(*(_QWORD*)v2 + 160LL) * 0x1.0aef000000000p+4f) /
              0x1.f400000000000p+9f);
LABEL_35:
  if (*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 10LL) == 1 &&
      (signed __int32)*(_DWORD*)(a1 + 16) <= 0) {
    result = a1;
    if (*(_BYTE*)(a1 + 64) != 0) {
      v31_.v39 = v31_.v41;
      v31_.v40 = v31_.vars0;
      v31_.v41 = v31_.vars8;
      v18 = *(unsigned __int8*)(a1 + 96);
      *(_BYTE*)(a1 + 64) = 0;
      *(_DWORD*)(a1 + 140) = 0;
      if (v18 == 1) {
        v19 = *(_QWORD*)(a1 + 72);
        if (v19 != 0) {
          v20 = *(_QWORD*)(a1 + 80);
          v21 = fw_memory_g_heap_manager_ptr;
          if (v19 == v20) {
            goto LABEL_56;
          }
          v22 = *(_QWORD*)(a1 + 80);
          do {
            v23 = *(_BYTE*)(v22 - 24);
            v22 -= 24;
            if ((v23 & 1) != 0) {
              v24 = *(_QWORD*)(v20 - 8);
              if (v24 != 0) {
                if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) != 0) {
                  v25 = 128;
                }
                else {
                  v25 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v25, v24);
              }
            }
            v20 = v22;
          } while (v22 != v19);
          v26 = *(_QWORD*)(a1 + 72);
          *(_QWORD*)(a1 + 80) = v19;
          v19 = v26;
          if (v26 != 0) {
          LABEL_56:
            v27 = 128;
            if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) == 0) {
              v27 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v27, v19);
          }
        }
        *(_BYTE*)(a1 + 96) = 0;
      }
      if (*(_BYTE*)(a1 + 145) == 1) {
        *(_BYTE*)(a1 + 145) = 0;
      }
      result = GameRoutine_efbda0((_QWORD*)a1);
      if (*(_DWORD*)(a1 + 68) != 0) {
        v28 = *(_QWORD*)GameData_212dc38[0];
        v29 = *(_QWORD*)(*(_QWORD*)GameData_212dc38[0] + 984LL);
        *(_QWORD*)(v28 + 976) = 0;
        *(_QWORD*)(v28 + 984) = 0;
        if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          v30 = v28;
          (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
          std___1___shared_weak_count___release_weak(v29);
          v28 = v30;
        }
        v31_.v32 = 0;
        v31_.v33 = 0;
        v31_.v34 = 0;
        v31_.v35 = 0;
        v31_.v36 = 0;
        v31_.v37 = 0;
        v31_.v31 = 0x1.0000000000000p-1f;
        v31_.v38 = 1065353216;
        result = game_zview_d20140(v28, (int*)&v31_.v31);
        *(_DWORD*)(a1 + 68) = 0;
      }
    }
  }
  return result;
}

void game_hub_f8abd0()
{
  __int64 v0;
  int v1;

  v0 = GameData_21f3d10;
  v1 = *(_DWORD*)(GameData_21f3d10 + 24);
  *(_DWORD*)(GameData_21f3d10 + 24) = v1 + 1;
  if (v1 == 0) {
    (**(void (***)(__int64))(v0 + 16))(v0 + 16);
  }
  Manager_d54e40(v0);
}

void game_hub_f8baa0()
{
  __int64 v0;
  int v1;

  v0 = GameData_21f3d10;
  v1 = *(_DWORD*)(GameData_21f3d10 + 24) - 1;
  *(_DWORD*)(GameData_21f3d10 + 24) = v1;
  if (v1 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v0 + 16) + 8LL))(v0 + 16);
  }
  Manager_d54e40(v0);
}

__int64 game_hub_fb5540(__int64 a1, __int64 a2)
{
  __int64 v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  bool v11;
  float v12;
  float v13;
  float v14;
  unsigned int v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  __int64 v20;
  float32x4_t* v21;
  __int64 v22;
  __int64 v23;
  float32x4_t v25;
  int8x16_t v26;
  __int64 v27;
  unsigned __int32 v28;
  float32x4_t v29;
  float v30;
  _QWORD* v31;
  float v32;
  __int64 v33;
  int8x16_t* v34;
  int v35;
  __int64 v36;
  struct {
    float32x4_t v38;
    float v39;
  } v38_;
  struct {
    int v40;
    __int16 v41;
    char gap42_[2];
    int v42;
  } v40_;

  LANES128(v38_.v38).n128_u64[1] = (unsigned __int64)&GameData_1afa065;
  LANES128(v38_.v38).n128_u64[0] = game_HashString((__int64)&GameData_1afa065);
  v3 = game_VariableManager_SetFlag((__int64)&v38_.v38, 1);
  GameRoutine_fb48a0((void*)(&v38_.v38), v3, a2);
  if (*(_DWORD*)(a2 + 8) != 9) {
    goto LABEL_19;
  }
  v38_.v39 = v38_.v39 + 0x1.6800000000000p+7f;
  v4 = (float)(PSEUDO_UNFUSED(v38_.v39 * 0x1.1df46a0000000p-6f)) +
       (float)(roundf((float)(v38_.v39 * 0x1.1df46a0000000p-6f) *
                      0x1.45f3060000000p-3f) *
               -0x1.921fb60000000p+2f);
  if (v4 > 0x1.921fb60000000p+0f) {
    v5 = 0x1.921fb60000000p+1f;
  LABEL_6:
    v6 = v5 - v4;
    goto LABEL_7;
  }
  v6 = v4;
  if (v4 < -0x1.921fb60000000p+0f) {
    v5 = -0x1.921fb60000000p+1f;
    goto LABEL_6;
  }
LABEL_7:
  v7 =
      v6 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c190) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c190 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c190) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c190 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c190 *
                                                                                            (float)(v6 *
                                                                                                    v6))) *
                                                                            (float)(v6 *
                                                                                    v6))) *
                                                         (float)(v6 * v6))) *
                                         (float)(v6 * v6))) *
                      (float)(v6 * v6)) +
              0x1.0000000000000p+0f);
  if (v4 < -0x1.921fb60000000p+0f) {
    v8 = -0x1.0000000000000p+0f;
  }
  else {
    v8 = 0x1.0000000000000p+0f;
  }
  v9 = -0x1.921fb60000000p+1f - v4;
  if (v4 >= -0x1.921fb60000000p+0f) {
    v9 = v4;
  }
  v10 = 0x1.921fb60000000p+1f - v4;
  v11 = v4 <= 0x1.921fb60000000p+0f;
  if (v4 > 0x1.921fb60000000p+0f) {
    v12 = -0x1.0000000000000p+0f;
  }
  else {
    v12 = v8;
  }
  if (v11) {
    v13 = v9;
  }
  else {
    v13 = v10;
  }
  v14 = v13 * v13;
  *(float*)&v15 =
      v12 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c188) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c188 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c188) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c188 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c188 *
                                                                                            v14)) *
                                                                            v14)) *
                                                         v14)) *
                                         v14)) *
                      v14) +
              0x1.0000000000000p+0f);
  LANES128(v16).n128_u64[0] = LODWORD(v7);
  LANES128(v16).n128_u64[1] = v15;
  LANES128(v17).n128_u64[0] = 0x4040000040400000LL;
  LANES128(v17).n128_u64[1] = 0x4040000040400000LL;
  v18 = vaddq_f32(v38_.v38, vmulq_f32(v16, v17));
  LANES128(v19).n128_u64[0] = LANES128(v18).n128_u64[0];
  LANES128(v19).n128_u64[1] = LANES128(v18).n128_u32[2];
  v38_.v38 = v19;
LABEL_19:
  v20 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v20 != 0) {
    v21 = *(float32x4_t**)(GameData_21ec7c0 + 72);
    v22 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                              memory_order_relaxed);
    v23 = std___1___shared_weak_count_lock(v22);
    std___1___shared_weak_count___release_weak(v20);
    if (v23 == 0 || v21 == nullptr) {
      if (v23 == 0) {
        goto LABEL_41;
      }
    }
    else {
      game_zview_d12d30(*(_QWORD*)(LANES128(v21[1]).n128_u64[1] + 16),
                        (int32x2_t*)&v38_.v38, 1);
      v25 = vsubq_f32(
          v21[79],
          *(float32x4_t*)(*(_QWORD*)(LANES128(v21[1]).n128_u64[1] + 16) +
                          560LL));
      v26 = vmulq_f32(v25, v25);
      LANES128(v26).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v26, v26, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
              .n64_f32[0] > 0x1.0000000000000p-23f) {
        v27 = *(_QWORD*)(GameData_21ec7c0 + 120);
        if ((*(_BYTE*)(v27 + 12) & 1) == 0) {
          *(_BYTE*)(v27 + 12) = 1;
        }
      }
      v28 = LANES128(v38_.v38).n128_u32[2];
      LANES128(v21[79]).n128_u64[0] = LANES128(v38_.v38).n128_u64[0];
      v29 = v21[79];
      LANES128(v29).n128_u64[1] = v28;
      v21[79] = v29;
      HubCharacterNatives_cabfc0((__int64)v21, 1);
      v30 = v38_.v39;
      if ((LANES128(v21[83]).n128_u8[1] & 1) == 0) {
        LANES128(v21[83]).n128_u8[1] = 1;
      }
      v31 = *(_QWORD**)(LANES128(v21[1]).n128_u64[1] + 16);
      v32 = v30 * 0x1.1df46a0000000p-6f;
      if (v31[107] != 0) {
        v33 = v31[108];
        v31[107] = 0;
        v31[108] = 0;
        if (v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
          std___1___shared_weak_count___release_weak(v33);
        }
      }
      v34 = (int8x16_t*)v31[61];
      v35 = LANES128(v34[11]).n128_u8[4];
      LANES128(v34[2]).n128_f32[0] = v32;
      LANES128(v34[2]).n128_f32[1] = v32;
      if (v35 == 1) {
        LANES128(v34[11]).n128_u8[4] = 0;
      }
      CharacterRotate_d519c0(v34);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
      std___1___shared_weak_count___release_weak(v23);
    }
  }
LABEL_41:
  v36 = *(_QWORD*)GameData_212dc60[0];
  game_hub_d97a00(*(_QWORD*)(*(_QWORD*)GameData_212dc60[0] + 16LL), 0x0.0p+0f);
  v40_.v40 = 0;
  v40_.v41 = 0;
  v40_.v42 = 1065353216;
  GameHr_cdeee0(v36, (__int64)&v40_.v40);
  return GameHr_d1fb60(*(_QWORD*)GameData_212dc38[0], 1);
}

__int64 game_hub_1001fd0(float32x4_t* a1)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  float32x4_t* v3;
  float32x4_t v4;
  float32x4_t v5;
  int8x16_t v6;
  float32x4_t v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v13;
  _DWORD* v14;
  __int64 result;
  __int64 v16;
  _QWORD v17[25];

  LANES128(a1[17]).n128_u32[1] = 1065353216;
  v2 = LANES128(a1[10]).n128_u64[0];
  if (v2 != 0) {
    v3 = *(float32x4_t**)(v2 + 24);
    v4 = a1[11];
    v5 = vsubq_f32(v3[19], v4);
    v6 = vmulq_f32(v5, v5);
    LANES128(v6).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v6, v6, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
            .n64_u64[0];
    if (__builtin_islessgreater(
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
                .n64_f32[0],
            0x0.0p+0f)) {
      LANES128(v3[19]).n128_u32[0] = LANES128(v4).n128_u32[0];
      LANES128(v3[19]).n128_u32[1] = LANES128(a1[11]).n128_u32[1];
      v7 = v3[19];
      LANES128(v7).n128_u32[2] = LANES128(a1[11]).n128_u32[2];
      LANES128(v3[18]).n128_u32[2] |= 1u;
      LANES128(v7).n128_u64[1] = LANES128(v7).n128_u32[2];
      v3[19] = v7;
      v2 = LANES128(a1[10]).n128_u64[0];
    }
    *(_DWORD*)(v2 + 68) = 0;
    GameRoutine_104b900((float*)v2, 1);
  }
  v8 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v8 != 0) {
    v9 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v10 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                              memory_order_relaxed);
    v11 = std___1___shared_weak_count_lock(v10);
    std___1___shared_weak_count___release_weak(v8);
    if (v11 == 0 || v9 == 0) {
      if (v11 == 0) {
        goto LABEL_18;
      }
    }
    else {
      v13 = *(_QWORD*)(*(_QWORD*)(v9 + 24) + 24LL);
      if (*(_BYTE*)(v13 + 96) == 1) {
        *(_BYTE*)(v13 + 96) = 0;
      }
      *(_BYTE*)(v13 + 25) = 0;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
    }
  }
LABEL_18:
  v14 = (_DWORD*)LANES128(a1[16]).n128_u64[0];
  if (*(_QWORD*)v14 != 0 && *(_DWORD*)(*(_QWORD*)v14 + 16LL) == v14[2]) {
    GameRoutine_14a1390((__int64*)&a1[16], 1);
  }
  result = snd_fnd_WeakHandle_isValid(&LANES128(a1[17]).n128_i64[1]);
  if ((result & 1) != 0) {
    v16 = snd_fnd_WeakHandle_get((__int64)&LANES128(a1[17]).n128_i64[1]);
    snd_Fade_Fade_10c910((__int64)v17, 500);
    (*(void (**)(__int64, _QWORD*, _QWORD, double))(
        *(_QWORD*)(v16 - 5592) + 248LL))(v16 - 5592, v17, 0, 0x0.0p+0);
    return snd_Fade_Destroy_Fade(v17);
  }
  return result;
}

#pragma GCC visibility pop
