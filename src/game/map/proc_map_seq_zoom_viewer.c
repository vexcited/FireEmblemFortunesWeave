#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 AssetTableFile_7e8000(_QWORD);
__int64 AssetTableFile_7e95e0(_QWORD, _QWORD, _QWORD);
__int64 CharacterAppearance_10735d0(_QWORD);
__int64 GameRoutine_1072580(_QWORD, _QWORD);
__int64 GameRoutine_10784f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1827b90(_QWORD);
__int64 GameRoutine_1829460(_QWORD, _QWORD);
__int64 GameRoutine_1829dc0(_QWORD);
__int64 GameRoutine_7c5ed0(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_155ea30(_QWORD);
__int64 MapInfo_825790(void);
__int64 MapUnitInfo_182aaa0(_QWORD, _QWORD);
__int64 TrickEntity_7d1480(_QWORD, long double);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_HashString32(void);
__int64 game_ProcInst_Register(void);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_1ae2edc;
extern _UNKNOWN GameData_21c6868;
extern __int64 (*GameData_1ffb888[])();
extern __int64 (*game_map_ProcZoomSeq_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212d0d0[2];
extern __int64 GameData_21c67b0;
extern __int64 GameData_21c67b8;
extern __int64 GameData_21c67c0;
extern __int64 GameData_21c67d0;
extern __int64 GameData_21c67e0;
extern __int64 GameData_21c67f0;
extern __int64 GameData_21c67f8;
extern __int64 GameData_21c6800;
extern __int64 GameData_21c6810;
extern __int64 GameData_21c6820;
extern __int64 GameData_21c6830;
extern __int64 GameData_21c6838;
extern __int64 GameData_21c6840;
extern __int64 GameData_21c6850;
extern __int64 GameData_21c6860;
extern __int64 GameData_21d9ce8;
extern __int64 GameData_21d9cf0;
extern __int64 GameData_21d9d00;
extern __int64 GameData_21d9d18;
extern __int64 GameData_21d9d20;
extern __int64 GameData_21d9d30;
extern __int64 GameData_21d9d38;
extern __int64 GameData_21d9d48;
extern __int64 GameData_21d9d50;
extern __int64 GameData_21d9d60;
extern __int64 GameData_21d9d68;
extern __int64 GameData_21d9d70;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c890[3];
extern __int64* GameData_212cff8[3];
extern __int64* GameData_212d3c8[3];
extern __int64* GameData_212d560[9];
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern char GameData_21d9d78;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
extern int GameData_21d9d7c;
__int64 game_map_ProcMapSeqZoomViewer_ViewerZoomIn(__int64 a1);
void game_map_ProcMapSeqZoomViewer_ViewerZoomIn_closure_Invoke(__int64 a1,
                                                               __int64 a2);
__attribute__((swiftcall)) void CharacterModel_cf7a40(PSEUDO_X8, __int64,
                                                      __int64);
__int64* GameRoutine_fb16c0(__int64* result, _DWORD*);
__int64 Cursor_730ff0(__int64, float*);
__int64 GameRoutine_1566440(_QWORD, _QWORD);
__int64 GameRoutine_175d500(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_cee580(_QWORD*);
__int64 GameRoutine_e5fa20(_DWORD*);
__int64 ProcMapSeqZoomViewer_fb13e0(__int64 result, char);
__int64 Situation_7677a0(__int64*, float, float, float);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_Unit_GetJob(_QWORD);
__int64 game_zview_d12d30(__int64 result, int32x2_t*, char);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__n128 nn_mem_StandardAllocator_Free(_QWORD);
bool GameRoutine_d1cdc0(__int64, unsigned int);
double cos(double);
double sin(double);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN GameData_2259040;
extern __int64* GameData_212cfc0[10];
extern __int64* GameData_212eba8[8];
extern __int64* GameData_212ed08[13];
extern __int64* GameData_212eda8[10];
extern __int64 GameData_212d028[4];
extern __int64 GameData_212dc38[7];
extern __int64 GameData_2131d28[21];
extern __int64 GameData_21cd140;
extern __int64 GameData_220f870;
extern __int64 GameData_2259018;
extern __int64 GameData_2259020;
extern __int64 GameData_2259028;
extern __int64 GameData_2259030;
extern __int64 GameData_2259038;
extern __int64 game_g_game_setting;
extern char GameData_1a9f09e;
float CharacterAnimator_1079580(__int64, int, long double, float, float);
float Unit_6c7fa0(__int64, __int64);
float fmodf(float, float);
void CharacterRotate_d519c0(int8x16_t*);
void GameRoutine_cfc7c0(__int64, float*, char, float);
void GameRoutine_f56340(__int64, int);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_a78a90();
void __attribute__((noreturn)) String_60a250(const char*);
void snd_Fade_Fade_10c830(__int64, float);
void ProcMapSeqZoomViewer_faf660(_QWORD* a1);
void ProcMapSeqZoomViewer_fafec0(__int64 a1);
bool ProcMapSeqZoomViewer_fb0ab0(__int64 a1);
void ProcMapSeqZoomViewer_fb0fc0();
__int64 game_HasSkill_alt1(_QWORD*, unsigned int*) __asm__("game_HasSkill");
__int64 game_Unit_GetJob_alt1(__int64) __asm__("game_Unit_GetJob");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
bool GameRoutine_175d500_alt1(__int64, __int64, __int64, int,
                              const char*) __asm__("GameRoutine_175d500");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void GameRoutine_1566440_alt1(__int64, char) __asm__("GameRoutine_1566440");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void game_cfc7c0(__int64, float*, char, float);
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
_QWORD* HubCharacterNatives_ceca80(_QWORD* result, __int64, char);
__int64 game_zview_CharacterModel_SetActiveSignal(__int64 result, char);
__int64 wld_AnimCtrlModule_SetRootMotionBone(__int64 result, __int64, __int64,
                                             int);
bool GameRoutine_108cb20(int);

__int64 game_map_ProcMapSeqZoomViewer_ViewerZoomIn(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  int* v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  _QWORD* v28;
  long double v29;
  __int64 v30;
  _QWORD* v31;
  _QWORD v33[4];
  _QWORD* v34;
  _QWORD* v35;
  _QWORD* v36;
  _QWORD v37[48];
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;

  v2 = *(_QWORD*)GameData_212d0d0[0];
  if (*(_QWORD*)GameData_212d0d0[0] != 0 && *(_BYTE*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 160);
    *(_BYTE*)(v2 + 152) = 0;
    GameRoutine_1829460(v2, v3);
    GameRoutine_1829dc0(v2);
    MapUnitInfo_182aaa0(v2, 0);
    if (*GameData_212cff8[0] != 0) {
      MapInfo_825790();
    }
  }
  v4 = *GameData_212d560[0];
  if (*GameData_212d560[0] != 0) {
    *(_BYTE*)(v4 + 224) = 1;
    v5 = LayoutAccessor_155ea30(v4 + 40) & 1;
    LayoutAccessor_155e830(v4 + 40, 0);
    if (v5 != (LayoutAccessor_155ea30(v4 + 40) & 1)) {
      GameRoutine_1827b90(v4);
    }
  }
  *(_DWORD*)(a1 + 152) = 1;
  v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      152, 16, 0);
  v8 = GameData_212c608[0];
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = 0;
  *(_QWORD*)(v7 + 128) = 0;
  *(_WORD*)(v7 + 136) = 0;
  *(_QWORD*)(v7 + 16) = 0;
  *(_QWORD*)(v7 + 24) = "NULL";
  *(_QWORD*)(v7 + 138) = 0;
  *(_QWORD*)(v7 + 144) = 0;
  *(_QWORD*)(v7 + 32) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 80) = 0;
  *(_QWORD*)(v7 + 88) = 0;
  *(_QWORD*)v7 = v8 + 16;
  *(_QWORD*)(v7 + 8) = 0;
  game_ProcInst_Register();
  *(_QWORD*)v7 = game_map_ProcZoomSeq_vtable;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21c6868) != 0) {
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
    GameData_21c67a8 = 3;
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
    __cxa_guard_release(&GameData_21c6868);
  }
  v9 = *(_QWORD*)(a1 + 40);
  if (v9 != 0) {
    *(_QWORD*)(v9 + 48) = v7;
    *(_QWORD*)(v7 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v7;
  *(_QWORD*)(v7 + 24) = "ProcZoomSeq";
  *(_QWORD*)(v7 + 32) = a1;
  *(_DWORD*)(v7 + 140) = game_HashString32();
  *(_QWORD*)(v7 + 8) = &GameData_21c67a8;
  *(_QWORD*)(v7 + 16) = &GameData_21c67a8;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 24;
  *(_QWORD*)(v7 + 80) = 1;
  (*(void (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 136LL))(v7) & 1) != 0 &&
      (*(_WORD*)(v7 + 136) & 0x100) == 0) {
    *(_WORD*)(v7 + 136) |= 0x100u;
  }
  *(_QWORD*)(a1 + 224) = v7;
  GameRoutine_7c5ed0(v7, 1);
  v37[25] = 0;
  v37[27] = 0;
  memset(v37, 0, 192);
  v38 = 1065353216;
  v10 = (int*)GameData_21d9d18;
  v11 = GameData_21d9d20;
  v37[40] = 0;
  v37[41] = 0;
  memset(&v37[43], 0, 40);
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  if (GameData_21d9d18 != GameData_21d9d20) {
    do {
      v12 = *v10++;
      *(_QWORD*)(GameData_21d9d00 + 8 * v12) = 0;
    } while (v10 != (int*)v11);
    v10 = (int*)GameData_21d9d18;
  }
  GameData_21d9d20 = (__int64)v10;
  GameData_21d9d60 = 0;
  GameData_21d9d68 = 0;
  GameData_21d9d70 = 0;
  GameData_21d9d7c = 0;
  GameData_21d9d38 = GameData_21d9d30;
  GameData_21d9cf0 = GameData_21d9ce8;
  GameData_21d9d50 = GameData_21d9d48;
  GameData_21d9d78 = 8;
  v13 = game_HashString(&GameData_1ae2edc);
  if (v13 == 0) {
    goto LABEL_41;
  }
  v14 = *(_QWORD*)(*GameData_212c890[0] + 96);
  if (v14 == 0 || *(_QWORD*)(*GameData_212c890[0] + 112) == 0) {
    goto LABEL_41;
  }
  v16 = v14 - 1;
  if ((v14 & (v14 - 1)) != 0) {
    v17 = v13;
    if (v13 >= v14) {
      v17 = v13 % v14;
    }
  }
  else {
    v17 = v16 & v13;
  }
  v18 = *(_QWORD**)(*(_QWORD*)(*GameData_212c890[0] + 88) + 8 * v17);
  if (v18 == nullptr || (v19 = (_QWORD*)*v18) == nullptr) {
  LABEL_41:
    v21 = 0;
    goto LABEL_42;
  }
  if ((v14 & v16) == 0) {
    while (1) {
      v22 = v19[1];
      if (v22 == v13) {
        if (v19[2] == v13) {
          goto LABEL_54;
        }
      }
      else if ((v22 & v16) != v17) {
        goto LABEL_41;
      }
      v19 = (_QWORD*)*v19;
      v21 = 0;
      if (v19 == nullptr) {
        goto LABEL_42;
      }
    }
  }
  while (1) {
    v20 = v19[1];
    if (v20 == v13) {
      break;
    }
    if (v20 >= v14) {
      v20 %= v14;
    }
    if (v20 != v17) {
      goto LABEL_41;
    }
  LABEL_31:
    v19 = (_QWORD*)*v19;
    if (v19 == nullptr) {
      goto LABEL_41;
    }
  }
  if (v19[2] != v13) {
    goto LABEL_31;
  }
LABEL_54:
  v21 = v19[3];
LABEL_42:
  v23 = (int*)GameData_21d9d18;
  v24 = GameData_21d9d20;
  if (GameData_21d9d18 != GameData_21d9d20) {
    do {
      v25 = *v23++;
      *(_QWORD*)(GameData_21d9d00 + 8 * v25) = 0;
    } while (v23 != (int*)v24);
    v23 = (int*)GameData_21d9d18;
  }
  GameData_21d9d20 = (__int64)v23;
  GameData_21d9d60 = 0;
  GameData_21d9d68 = 0;
  GameData_21d9d70 = 0;
  GameData_21d9d7c = 0;
  GameData_21d9d38 = GameData_21d9d30;
  GameData_21d9cf0 = GameData_21d9ce8;
  GameData_21d9d50 = GameData_21d9d48;
  GameData_21d9d78 = 8;
  AssetTableFile_7e95e0(v37, v21, 0);
  AssetTableFile_7e8000(v37);
  v26 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 11832, 16, 0);
  v26[2] = 0;
  v27 = v26 + 3;
  v28 = v26;
  *v26 = GameData_212d3c8[0] + 2;
  v26[1] = 0;
  CharacterAppearance_10735d0(v26 + 3);
  v35 = v27;
  v36 = v28;
  GameRoutine_1072580(v27, v37);
  v33[0] = GameData_1ffb888;
  v34 = v33;
  *(_QWORD*)(a1 + 232) = GameRoutine_10784f0(&v35, 0x2000, v33);
  if (v34 == v33) {
    v30 = 32;
  LABEL_49:
    (*(void (**)(__int64))(*v34 + v30))((__int64)v34);
  }
  else if (v34 != nullptr) {
    v30 = 40;
    goto LABEL_49;
  }
  v31 = v36;
  if (v36 != nullptr && atomic_fetch_add((atomic_ullong* volatile)(v36 + 1),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(_QWORD*))(*v31 + 16LL))(v31);
    *(__n128*)&v29 = std___1___shared_weak_count___release_weak(v31);
  }
  return TrickEntity_7d1480(v37, v29);
}

void ProcMapSeqZoomViewer_faf660(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  unsigned int v6;
  float v7;
  int8x16_t v8;
  int8x16_t v9;
  float (*v10)(__int64);
  float v11;
  _QWORD* v12;
  float v13;
  __int64 v14;
  int8x16_t* v15;
  int v16;
  int8x16_t v17;
  __int64 v18;
  int v19;
  int v20;
  long double v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  bool v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  int v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  int* v40;
  int v41;
  __int64 v42;
  unsigned int v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  int v49;
  unsigned int v50;
  unsigned int v51;
  float v52;
  float32x4_t v53;
  int8x16_t v54;
  float32x4_t v55;
  int v56;
  __int64 v57;
  float32x4_t v58;
  float32x4_t v59;
  int8x16_t v60;
  __int128 v61;
  unsigned __int64 v62;
  float v63;
  float32x4_t v64;
  int8x16_t v65;
  double v66;
  double v67;
  double v68;
  float v69;
  __int128 v70;
  float v71;
  float v72;
  int v73;
  __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  unsigned int v77;
  unsigned int v78;
  float32x4_t v79;
  int v80;
  int8x16_t v81;

  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = GameData_212d028[0];
  GameRoutine_e5fa20(*(_DWORD**)(*(_QWORD*)GameData_212d028[0] + 40LL)),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_f56340(*(_QWORD*)(*(_QWORD*)v2 + 80LL), 0),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = a1[27];
  v4 = *(_QWORD*)(v3 + 168);
  a1[30] = v3;
  a1[27] = 0;
  v5 = *(_DWORD*)(v4 + 592);
  v6 = *(char*)(v4 + 584) + 256;
  v7 = (float)(unsigned int)(v5 - 1) * 0x1.4000000000000p+1f;
  if (v5 <= 0) {
    v7 = 0x0.0p+0f;
  }
  LANES128(v8).n128_u64[0] = COERCE_UNSIGNED_INT(
      (float)((float)((float)((float)v6 * 0x1.4000000000000p+2f) +
                      0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f) +
      v7);
  v76 = COERCE_UNSIGNED_INT(
      (float)((float)((float)((float)(unsigned int)(*(char*)(v4 + 585) + 256) *
                              0x1.4000000000000p+2f) +
                      0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f) +
      v7);
  *(float*)&v78 = (float)((float)((float)((float)v6 * 0x1.4000000000000p+2f) +
                                  0x1.4000000000000p+1f) +
                          -0x1.4000000000000p+10f) +
                  v7;
  LANES128(v8).n128_u64[1] = v76;
  v81 = v8;
  LANES128(v9).n128_u64[0] =
      __PAIR64__(COERCE_UNSIGNED_INT(Unit_6c7fa0(v4, (__int64)&v81)), v78),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = *(float (**)(__int64))(*(_QWORD*)(v4 + 112) + 16LL),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LANES128(v9).n128_u64[1] = v76;
  v81 = v9;
  v11 = v10(v4 + 112),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_cee580((_QWORD*)a1[30]),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = *(_QWORD**)(a1[30] + 16LL);
  v13 = v11 * 0x1.1df46a0000000p-6f;
  if (v12[107] != 0) {
    v14 = v12[108];
    v12[107] = 0;
    v12[108] = 0;
    if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt1(v14),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v15 = (int8x16_t*)v12[61];
  v16 = LANES128(v15[11]).n128_u8[4];
  LANES128(v15[2]).n128_f32[0] = v13;
  LANES128(v15[2]).n128_f32[1] = v13;
  if (v16 == 1) {
    LANES128(v15[11]).n128_u8[4] = 0;
  }
  CharacterRotate_d519c0(v15),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  game_zview_d12d30(*(_QWORD*)(a1[30] + 16LL), (int32x2_t*)&v81, 1),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v17 = v81;
  v18 = *(_QWORD*)(*GameData_212eda8[0] + 8);
  *(_QWORD*)(v18 + 212) = 1065353216;
  v19 = *(unsigned __int8*)(v18 + 224);
  *(_QWORD*)(v18 + 192) = 0;
  *(_QWORD*)(v18 + 200) = 0;
  *(_DWORD*)(v18 + 208) = 0;
  *(int32x2_t*)(v18 + 280) = vzip1_s32(
      COERCE_AS(int32x2_t, LANES128(v17).n128_u64[0]),
      COERCE_AS(int32x2_t, LANES128_OF(vextq_s8(v17, v17, 8u)).n128_u64[0]));
  if (v19 == 1) {
    *(_BYTE*)(v18 + 224) = 0;
  }
  *(_BYTE*)(v18 + 232) = 0;
  *(_DWORD*)(v18 + 236) = 0;
  *(_DWORD*)(v18 + 228) = -1027080192;
  if (*(_BYTE*)(v18 + 248) == 1) {
    *(_BYTE*)(v18 + 248) = 0;
  }
  if (*(_BYTE*)(v18 + 256) == 1) {
    *(_BYTE*)(v18 + 256) = 0;
  }
  if (*(_BYTE*)(v18 + 261) == 1) {
    *(_BYTE*)(v18 + 261) = 0;
  }
  if (*(_BYTE*)(v18 + 263) == 1) {
    *(_BYTE*)(v18 + 263) = 0;
  }
  if (*(_BYTE*)(v18 + 265) == 1) {
    *(_BYTE*)(v18 + 265) = 0;
  }
  *(_DWORD*)(v18 + 168) = LANES128(v17).n128_u32[1];
  *(_DWORD*)(v18 + 172) = LANES128(v17).n128_u32[1];
  *(_DWORD*)(v18 + 220) = LANES128(v17).n128_u32[1];
  *(_DWORD*)(v18 + 268) = 0;
  *(_WORD*)(v18 + 272) = 256;
  *(_BYTE*)(v18 + 224) = 1;
  GameRoutine_cfc7c0(v18 + 128, (float*)(v18 + 280), 1, 0x0.0p+0f),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((*(_QWORD*)(a1[30] + 384LL) & 0x10LL) != 0) {
    v20 = -1101902990;
  }
  else {
    v20 = -574916402;
  }
  ProcMapSeqZoomViewer_fb13e0((__int64)a1, 1),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LODWORD(v21) = COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
  CharacterAnimator_1079580(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1[30] + 8LL) + 232LL) + 72LL), v20, v21,
      -0x1.0000000000000p+0f, 0x1.0000000000000p+0f),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v22 = a1[31];
  a1[34] = 0;
  a1[32] = v22;
  CharacterModel_cf7a40((void*)(&v81), *(_QWORD*)(a1[30] + 8LL), v23),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v24 = LANES128(v81).n128_u64[0];
  if (LANES128(v81).n128_u64[0] == 0) {
    v25 = LANES128(v81).n128_u64[1];
    if (LANES128(v81).n128_u64[1] != 0 &&
        atomic_fetch_add(
            (atomic_ullong* volatile)(LANES128(v81).n128_u64[1] + 8),
            0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)v25 + 16LL))(v25),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt1(v25),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v81 = (__typeof__(v81)){0};
  }
  v26 = *(unsigned __int8*)(v24 + 184);
  v27 = *(_QWORD*)(v24 + 192);
  v28 = (v26 & 1) == 0;
  v29 = v26 >> 1;
  if (v28) {
    v30 = v24 + 185;
  }
  else {
    v30 = *(_QWORD*)(v24 + 200);
  }
  if (v28) {
    v31 = v29;
  }
  else {
    v31 = v27;
  }
  if (v31 != 0) {
    v32 = 0;
    v33 = v30;
    while (v31 != v32) {
      v34 = v32;
      v35 = v33 + v31;
      --v33;
      v36 = *(unsigned __int8*)(v35 - 1);
      v32 = v34 + 1;
      if (v36 == 47) {
        if (v31 + 1 != v32) {
          if (v31 - v32 >= v31) {
            String_60a250("string_view::substr"),
                v23 =
                    COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v37 = v33 + v31;
          v31 = v34;
          v30 = v37 + 1;
        }
        break;
      }
    }
  }
  v38 = LANES128(v81).n128_u64[1];
  if (LANES128(v81).n128_u64[1] != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(LANES128(v81).n128_u64[1] + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v38 + 16LL))(v38),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak_alt1(v38),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v31 == 6) {
    LABEL_45:
      if (*(_DWORD*)v30 == 895435843 && *(_WORD*)(v30 + 4) == 13874) {
        LANES128(v81).n128_u32[0] = 603384300;
        if (!GameRoutine_d1cdc0(*(_QWORD*)(*(_QWORD*)(a1[30] + 8LL) + 344LL),
                                0x23F6E9ECu)) {
          goto LABEL_60;
        }
        v40 = (int*)&v81;
      LABEL_59:
        GameRoutine_fb16c0(a1 + 31, v40),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        goto LABEL_60;
      }
    }
  }
  else if (v31 == 6) {
    goto LABEL_45;
  }
  v41 = 989295306;
  v80 = 989295306;
  LANES128(v81).n128_u32[0] = 989295305;
  if (GameRoutine_d1cdc0(*(_QWORD*)(*(_QWORD*)(a1[30] + 8LL) + 344LL),
                         0x3AF772C9u)) {
    goto LABEL_54;
  }
  v80 = 603384301;
  LANES128(v81).n128_u32[0] = 603384300;
  if (GameRoutine_d1cdc0(*(_QWORD*)(*(_QWORD*)(a1[30] + 8LL) + 344LL),
                         0x23F6E9ECu)) {
    GameRoutine_fb16c0(a1 + 31, &v81),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v42 = a1[30];
    v43 = 603384301;
    goto LABEL_57;
  }
  v74 = a1[30];
  v41 = 603384487;
  v80 = 603384487;
  LANES128(v81).n128_u32[0] = 603384486;
  if (GameRoutine_d1cdc0(*(_QWORD*)(*(_QWORD*)(v74 + 8) + 344LL),
                         0x23F6EAA6u)) {
  LABEL_54:
    GameRoutine_fb16c0(a1 + 31, &v81),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v42 = a1[30];
    v43 = v41;
  LABEL_57:
    if (!GameRoutine_d1cdc0(*(_QWORD*)(*(_QWORD*)(v42 + 8) + 344LL), v43)) {
      goto LABEL_60;
    }
    v40 = &v80;
    goto LABEL_59;
  }
LABEL_60:
  *(_QWORD*)(*GameData_212ed08[0] + 192) =
      *(_QWORD*)(*GameData_212ed08[0] + 184);
  v44 = (*(float (**)(__int64))(*(_QWORD*)(v4 + 112) + 16LL))(v4 + 112),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v45 = (float)(PSEUDO_UNFUSED(v44 * 0x1.1df46a0000000p-6f)) +
        (float)(roundf((float)(v44 * 0x1.1df46a0000000p-6f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v45 <= 0x1.921fb60000000p+0f) {
    v47 = 0x1.0000000000000p+0f;
    if (v45 >= -0x1.921fb60000000p+0f) {
      goto LABEL_65;
    }
    v46 = -0x1.921fb60000000p+1f;
  }
  else {
    v46 = 0x1.921fb60000000p+1f;
  }
  v45 = v46 - v45;
  v47 = -0x1.0000000000000p+0f;
LABEL_65:
  v48 = v45 * v45;
  v49 = *(_DWORD*)(v4 + 592);
  v50 = *(char*)(v4 + 584) + 256;
  *(float*)&v51 =
      v47 *
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
                                                                                            v48)) *
                                                                            v48)) *
                                                         v48)) *
                                         v48)) *
                      v48) +
              0x1.0000000000000p+0f);
  LANES128(v53).n128_u32[1] = 0;
  LANES128(v53).n128_f32[0] =
      v45 *
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
                                                                                            (float)(v45 *
                                                                                                    v45))) *
                                                                            (float)(v45 *
                                                                                    v45))) *
                                                         (float)(v45 * v45))) *
                                         (float)(v45 * v45))) *
                      (float)(v45 * v45)) +
              0x1.0000000000000p+0f);
  v52 = (float)(unsigned int)(v49 - 1) * 0x1.4000000000000p+1f;
  LANES128(v53).n128_u64[1] = v51;
  if (v49 <= 0) {
    v52 = 0x0.0p+0f;
  }
  v79 = v53;
  LANES128(v54).n128_u64[0] = COERCE_UNSIGNED_INT(
      (float)((float)((float)((float)v50 * 0x1.4000000000000p+2f) +
                      0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f) +
      v52);
  v75 = COERCE_UNSIGNED_INT(
      (float)((float)((float)((float)(unsigned int)(*(char*)(v4 + 585) + 256) *
                              0x1.4000000000000p+2f) +
                      0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f) +
      v52);
  *(float*)&v77 = (float)((float)((float)((float)v50 * 0x1.4000000000000p+2f) +
                                  0x1.4000000000000p+1f) +
                          -0x1.4000000000000p+10f) +
                  v52;
  LANES128(v54).n128_u64[1] = v75;
  v81 = v54;
  LANES128(v55).n128_u64[0] =
      __PAIR64__(COERCE_UNSIGNED_INT(Unit_6c7fa0(v4, (__int64)&v81)), v77),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LANES128(v55).n128_u64[1] = v75;
  v56 = *(_DWORD*)(v4 + 592);
  v57 = a1[29];
  v58 = vaddq_f32(v55,
                  vmulq_n_f32(v79, (float)((float)v56 * 0x1.4000000000000p+1f) +
                                       0x1.4000000000000p+2f));
  v59 = vsubq_f32(*(float32x4_t*)(v57 + 304), v58);
  v60 = vmulq_f32(v59, v59);
  LANES128(v60).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v60, v60, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v60).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v60).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v60).n128_u64[0])))
          .n64_f32[0] != 0x0.0p+0f) {
    *(_QWORD*)(v57 + 304) = LANES128(v58).n128_u64[0];
    v61 = *(_OWORD*)(v57 + 304);
    *(_DWORD*)(v57 + 296) |= 1u;
    *((_QWORD*)&v61 + 1) = LANES128(v58).n128_u32[2];
    *(_OWORD*)(v57 + 304) = v61;
    v57 = a1[29];
  }
  LODWORD(v62) = 0;
  v63 = (float)(v44 + 0x1.6800000000000p+7f) * 0x1.1df46a0000000p-6f;
  *((float*)&v62 + 1) = v63;
  v64 = vsubq_f32(*(float32x4_t*)(v57 + 320), COERCE_AS(float32x4_t, v62));
  v65 = vmulq_f32(v64, v64);
  LANES128(v65).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v65, v65, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0])))
          .n64_f32[0] != 0x0.0p+0f) {
    *(_DWORD*)(v57 + 320) = 0;
    *(float*)(v57 + 324) = v63;
    *(_OWORD*)(v57 + 320) = *(unsigned __int64*)(v57 + 320);
    v66 = v63 * 0x1.0000000000000p-1;
    v67 = cos(v66),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v68 = sin(v66),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v69 = v67 + PSEUDO_UNFUSED(v68 * 0x0.0p+0);
    v70 = *(_OWORD*)(v57 + 336);
    v71 = PSEUDO_UNFUSED(v68 * -0x0.0p+0) + v67 * 0x0.0p+0;
    v72 = v68 + PSEUDO_UNFUSED(v67 * 0x0.0p+0);
    if (*(float*)&v70 != v71 || *((float*)&v70 + 1) != v72 ||
        *((float*)&v70 + 2) != v71 || *((float*)&v70 + 3) != v69) {
      v73 = *(_DWORD*)(v57 + 296);
      *(float*)(v57 + 336) = v71;
      *(float*)(v57 + 340) = v72;
      *(float*)(v57 + 344) = v71;
      *(float*)(v57 + 348) = v69;
      *(_DWORD*)(v57 + 296) = v73 | 1;
    }
  }
}

void ProcMapSeqZoomViewer_fafec0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _BYTE* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD v19[3];

  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 240) + 168LL);
  v3 = game_Unit_GetJob_alt1(v2);
  v4 = *(_QWORD*)GameData_2131d28[0];
  if (*(_QWORD*)GameData_2131d28[0] == 0) {
    GameRoutine_175d500_alt1(a1, v3, v2, 2, &GameData_1a9f09e);
  LABEL_6:
    v6 = *(_QWORD*)(v2 + 440);
    if (v6 == 0) {
      return;
    }
    goto LABEL_7;
  }
  if (*(_QWORD*)(v4 + 32) != a1) {
    goto LABEL_6;
  }
  *(_BYTE*)(v4 + 880) = 0;
  *(_QWORD*)(v4 + 832) = v3;
  *(_QWORD*)(v4 + 840) = v2;
  *(_DWORD*)(v4 + 848) = 2;
  if ((*(_BYTE*)(v4 + 856) & 1) != 0) {
    v5 = *(_BYTE**)(v4 + 872);
    *(_QWORD*)(v4 + 864) = 0;
  }
  else {
    v5 = (_BYTE*)(v4 + 857);
    *(_BYTE*)(v4 + 856) = 0;
  }
  *v5 = 0;
  (*(void (**)(__int64, __int64))(*(_QWORD*)v4 + 264LL))(v4, v3);
  v12 = *(_QWORD*)(v4 + 8);
  if (v12 != 0) {
    while (1) {
      if (*(_BYTE*)v12 == 2) {
        if (*(_DWORD*)(v12 + 32) == 1) {
          *(_QWORD*)(v4 + 16) = v12;
          *(_WORD*)(v4 + 136) &= ~0x80u;
          break;
        }
      }
      else if (*(_BYTE*)v12 == 0) {
        break;
      }
      v12 += 64;
    }
  }
  *(_WORD*)(v4 + 136) |= 8u;
  v6 = *(_QWORD*)(v2 + 440);
  if (v6 != 0) {
  LABEL_7:
    if (*(_BYTE*)(v6 + 16) == 0 && *(_DWORD*)(v2 + 592) == 1) {
      v7 = *(_QWORD*)(v2 + 264);
      v8 = *(_QWORD*)(v7 + 392);
      v9 = *(_QWORD*)(v7 + 400);
      if (v9 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (*(_DWORD*)(v8 + 11784) == 7 || (*(_BYTE*)(v2 + 416) & 1) != 0 ||
          (v10 = game_g_shared_system_skills_ptr,
           LODWORD(v19[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                                        game_g_shared_system_skills_ptr) &
                             0xFFF,
           (game_HasSkill_alt1((_QWORD*)(v2 + 1744), (unsigned int*)v19) & 1) !=
               0) ||
          *(_WORD*)(v2 + 492) == 0 && *(_BYTE*)(v2 + 496) == 0 &&
              (LODWORD(v19[0]) =
                   *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v10) & 0xFFF,
               (game_HasSkill_alt1((_QWORD*)(v2 + 1744), (unsigned int*)v19) &
                1) != 0) ||
          (*(_BYTE*)(v2 + 416) & 4) != 0) {
        v11 = 0;
      }
      else {
        LODWORD(v19[0]) = *(_DWORD*)((_BYTE*)((char*)0x40LL) + v10) & 0xFFF;
        v11 = game_HasSkill_alt1((_QWORD*)(v2 + 1744), (unsigned int*)v19) ^ 1;
      }
      if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak_alt2(v9);
      }
      if ((v11 & 1) != 0) {
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2259040,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire_alt1((__int64)&GameData_2259040) != 0) {
          BYTE4(GameData_2259030) = 0;
          GameData_2259038 = 0;
          GameData_2259018 = (__int64)&GameData_1a9f09e;
          GameData_2259020 = (__int64)"MID_KeyHelp_ZoomViewMove";
          LOBYTE(GameData_2259028) = 1;
          *(__int64*)((char*)&GameData_2259028 + 4) = 0xC0000000BLL;
          __cxa_guard_release_alt1((__int64)&GameData_2259040);
        }
        v13 = fw_memory_g_heap_manager_ptr;
        v14 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
        v15 = GameData_2259030;
        v16 = (__int64)v14;
        v19[0] = v14;
        v19[1] = v14 + 5;
        v19[2] = v14 + 5;
        v14[2] = GameData_2259028;
        v14[3] = v15;
        v14[4] = GameData_2259038;
        v17 = GameData_2259020;
        *v14 = GameData_2259018;
        v14[1] = v17;
        GameRoutine_1566440_alt1((__int64)v19, 0);
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v13 + v18, v16);
      }
    }
  }
}

bool ProcMapSeqZoomViewer_fb0ab0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64 v3;
  int32x2_t* v4;
  __int64 v5;
  unsigned __int32 v6;
  int v7;
  int v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  _QWORD v13[25];

  v2 = GameData_212eba8[0];
  v3 = *(_QWORD*)(*GameData_212eba8[0] + 56);
  if (v3 != 0) {
    v4 = *(int32x2_t**)(v3 + 16);
    v5 = *(_QWORD*)(GameData_220f870 + 8);
    *(int32x2_t*)(v5 + 280) = vzip1_s32(
        v4[70],
        COERCE_AS(
            int32x2_t,
            LANES128_OF(vextq_s8(*(int8x16_t*)LANES64(v4[70]).n64_u64,
                                 *(int8x16_t*)LANES64(v4[70]).n64_u64, 8u))
                .n128_u64[0]));
    v6 = LANES64(v4[70]).n64_u32[1];
    *(_QWORD*)(v5 + 208) = 0x3F80000000000000LL;
    v7 = *(unsigned __int8*)(v5 + 224);
    *(_QWORD*)(v5 + 192) = 0;
    *(_QWORD*)(v5 + 200) = 0;
    *(_DWORD*)(v5 + 216) = 0;
    if (v7 == 1) {
      *(_BYTE*)(v5 + 224) = 0;
    }
    *(_BYTE*)(v5 + 232) = 0;
    *(_DWORD*)(v5 + 236) = 0;
    *(_DWORD*)(v5 + 228) = -1027080192;
    if (*(_BYTE*)(v5 + 248) == 1) {
      *(_BYTE*)(v5 + 248) = 0;
    }
    if (*(_BYTE*)(v5 + 256) == 1) {
      *(_BYTE*)(v5 + 256) = 0;
    }
    if (*(_BYTE*)(v5 + 261) == 1) {
      *(_BYTE*)(v5 + 261) = 0;
    }
    if (*(_BYTE*)(v5 + 263) == 1) {
      *(_BYTE*)(v5 + 263) = 0;
    }
    if (*(_BYTE*)(v5 + 265) == 1) {
      *(_BYTE*)(v5 + 265) = 0;
    }
    *(_DWORD*)(v5 + 168) = v6;
    *(_DWORD*)(v5 + 172) = v6;
    *(_DWORD*)(v5 + 220) = v6;
    *(_DWORD*)(v5 + 268) = 0;
    *(_WORD*)(v5 + 272) = 256;
    *(_BYTE*)(v5 + 224) = 1;
    game_cfc7c0(v5 + 128, (float*)(v5 + 280), 1, 0x0.0p+0f);
  }
  v8 = *(_DWORD*)(game_g_game_setting + 952);
  if ((v8 & 2) != 0) {
    v9 = fw_memory_g_heap_manager_ptr;
    v10 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    strcpy(v10, "SE_SYS_Cancel_Move_ZoomView");
    snd_Fade_Fade_10c830((__int64)v13, 0x0.0p+0f);
    snd_play_ff2d0((__int64)v10, (__int64)v10, (__int64)v13, 0, 0x10001u, 0,
                   0x0.0p+0f, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v13);
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v11, (__int64)v10);
    *(_QWORD*)(a1 + 216) = *(_QWORD*)(*v2 + 56);
    *(_DWORD*)(a1 + 152) = 2;
  }
  else {
    ProcMapSeqZoomViewer_fb0fc0();
    *(_BYTE*)(*(_QWORD*)GameData_212d028[0] + 23LL) = 1;
  }
  return (v8 & 2) == 0;
}

void game_map_ProcMapSeqZoomViewer_ViewerZoomIn_closure_Invoke(__int64 a1,
                                                               __int64 a2)
{
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)a2 + 8LL) + 289LL) = 0;
}

void ProcMapSeqZoomViewer_fb0fc0()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int128 v1;
  __int64 v2;
  unsigned int v3;
  unsigned __int64 v4;
  float* v5;
  __int64 v6;
  float v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  float v17;
  float v18;
  __int64 v19;
  float v20;
  char* v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  float v30;
  float v31;
  float v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  __int64 v43;
  __int128 v44;

  v0 = *(_QWORD*)(*GameData_212eda8[0] + 8);
  *(_QWORD*)&v1 = *(_QWORD*)(v0 + 280);
  v2 = DWORD1(v1);
  DWORD1(v1) = *(_DWORD*)(v0 + 168);
  *((_QWORD*)&v1 + 1) = v2;
  v44 = v1;
  Cursor_730ff0(*GameData_212cfc0[0], (float*)&v44);
  v3 = -30;
  v4 = 0;
  v5 = nullptr;
  v6 = 0;
  do {
    v7 = (float)(v3 + 30);
    if ((unsigned __int64)v5 < v4) {
      *v5++ = v7;
    }
    else {
      v8 = (char*)v5 - v6;
      v9 = ((__int64)v5 - v6) >> 2;
      v10 = v9 + 1;
      if ((unsigned __int64)(v9 + 1) >> 62 != 0) {
        goto LABEL_55;
      }
      if ((__int64)(v4 - v6) >> 1 > v10) {
        v10 = (__int64)(v4 - v6) >> 1;
      }
      if (v4 - v6 >= 0x7FFFFFFFFFFFFFFCLL) {
        v11 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v11 = v10;
      }
      if (v11 != 0) {
        if (v11 >> 62 != 0) {
          GameRoutine_60a210();
        }
        v12 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v11, 16, 0);
      }
      else {
        v12 = 0;
      }
      v4 = v12 + 4 * v11;
      v13 = (unsigned __int64)v5 - v6;
      v14 = (__int64)&v8[v12 + -4 * v9];
      *(float*)&v8[v12] = v7;
      v5 = (float*)&v8[v12 + 4];
      memcpy_alt1(v14, v6, v13);
      if (v6 != 0) {
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v6);
      }
      v6 = v14;
    }
    v3 += 30;
  } while (v3 < 0x14A);
  v16 = (unsigned __int64)v5 - v6;
  v17 = *(float*)(*(_QWORD*)GameData_212dc38[0] + 100LL);
  v18 = v17 + 0x1.6800000000000p+7f;
  if (v5 == (float*)v6) {
    v20 = v17 + 0x1.6800000000000p+7f;
  }
  else {
    if ((v16 & 0x8000000000000000LL) != 0) {
    LABEL_55:
      GameRoutine_a78a90();
    }
    v19 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, (__int64)v5 - v6, 16, 0);
    memcpy_alt1(v19, v6, (unsigned __int64)v5 - v6);
    v20 = v18;
    v21 = nullptr;
    v22 = 0x1.fffffe0000000p+127f;
    do {
      v23 = fmodf(*(float*)&v21[v19] - v18, 0x1.6800000000000p+8f);
      if (v23 >= 0x0.0p+0f) {
        v24 = v23 + 0x0.0p+0f;
      }
      else {
        v24 = (float)(v23 + 0x0.0p+0f) + 0x1.6800000000000p+8f;
      }
      if (v24 > 0x1.6800000000000p+7f) {
        v24 = v24 + -0x1.6800000000000p+8f;
      }
      v25 = *(float*)&v21[v19];
      v21 += 4;
      v26 = fabsf(v24);
      if (v26 < v22) {
        v20 = v25;
        v22 = v26;
      }
    } while ((char*)v16 != v21);
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v19);
  }
  v28 = *(_QWORD**)(GameData_21cd140 + 432);
  v29 = v28[2];
  v28 += 2;
  v30 = (*(float (**)(_QWORD*))(v29 + 16))(v28);
  v31 = (*(float (**)(_QWORD*))(*v28 + 16LL))(v28);
  v32 = fmodf(v31, 0x1.6800000000000p+8f);
  if (v30 < 0x0.0p+0f) {
    v32 = v32 + 0x1.6800000000000p+8f;
  }
  if (vabds_f32(v20, v32) >= 0x1.dfd70a0000000p+4f) {
    v33 = *(_QWORD*)(GameData_21cd140 + 432);
    v35 = *(_QWORD*)(v33 + 16);
    v34 = (__int64*)(v33 + 16);
    v36 = (*(float (**)(__int64*))(v35 + 16))(v34);
    v37 = (*(float (**)(__int64*))(*v34 + 16))(v34);
    v38 = fmodf(v37, 0x1.6800000000000p+8f);
    if (v36 >= 0x0.0p+0f) {
      v39 = v38;
    }
    else {
      v39 = v38 + 0x1.6800000000000p+8f;
    }
    v40 = fmodf(v20, 0x1.6800000000000p+8f);
    v41 = v40 + 0x1.6800000000000p+8f;
    if (v20 >= 0x0.0p+0f) {
      v41 = v40;
    }
    if ((float)(v39 + 0x1.6800000000000p+7f) >= v41) {
      if ((float)(v39 + -0x1.6800000000000p+7f) <= v41) {
      LABEL_49:
        Situation_7677a0(v34, v39, v41, 0x1.8000000000000p-1f);
        goto LABEL_50;
      }
      v42 = -0x1.6800000000000p+8f;
    }
    else {
      v42 = 0x1.6800000000000p+8f;
    }
    v39 = v39 + v42;
    goto LABEL_49;
  }
LABEL_50:
  if (v6 != 0) {
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, v6);
  }
}

__int64 ProcMapSeqZoomViewer_fb13e0(__int64 result, char a2)
{
  int v2;
  __int64 v3;
  __int64 v5;
  __int64* v6;
  char v7;
  char v8;
  _BYTE* v9;
  __int64 v10;
  _BYTE* v11;
  bool v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;

  v2 = a2 & 1;
  if (v2 == *(unsigned __int8*)(result + 284)) {
    return result;
  }
  v3 = result;
  HubCharacterNatives_ceca80(*(_QWORD**)(result + 240), 2048, v2);
  v5 = *(_QWORD*)(*(_QWORD*)(v3 + 240) + 8LL);
  v6 = *(__int64**)(*(_QWORD*)(v5 + 232) + 72LL);
  result = game_zview_CharacterModel_SetActiveSignal(v5, v2);
  if (*((unsigned __int8*)v6 + 16) != v2) {
    v7 = *((_BYTE*)v6 + 17);
    *((_BYTE*)v6 + 16) = v2;
    if ((a2 & 1) != 0) {
      v8 = 0;
    }
    else {
      v8 = 2;
    }
    *((_BYTE*)v6 + 17) = v7 & 0xFD | v8;
    *((_BYTE*)v6 + 18) = *((_BYTE*)v6 + 18) & 0xFD | v8;
    *((_BYTE*)v6 + 19) = *((_BYTE*)v6 + 19) & 0xFD | v8;
    *((_BYTE*)v6 + 20) = *((_BYTE*)v6 + 20) & 0xFD | v8;
    v9 = (_BYTE*)v6[1];
    v9[632] = 0;
    v9[664] = 0;
    v9[696] = 0;
    v9[728] = 0;
    v10 = *v6;
    if ((a2 & 1) != 0) {
      result = (*(__int64 (**)(__int64*))(v10 + 64))(v6);
      v11 = (_BYTE*)v6[1];
      v12 = v11[300] == 3 && v11[301] == 3;
      if (!v12 && v11[302] != 1) {
        goto LABEL_15;
      }
      v10 = *v6;
    }
    result = (*(__int64 (**)(__int64*))(v10 + 72))(v6);
  }
  if ((a2 & 1) != 0) {
  LABEL_15:
    v13 = *(_QWORD*)(*(_QWORD*)(v3 + 240) + 168LL);
    if (v13 != 0) {
      v24 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1C4LL) +
                       game_g_shared_system_skills_ptr) &
            0xFFF;
      result = game_HasSkill_alt1((_QWORD*)(v13 + 1744), (unsigned int*)&v24);
      *((_BYTE*)v6 + 88) = result & 1;
    }
    *(_DWORD*)(v3 + 280) = *((_DWORD*)v6 + 28);
    *(_BYTE*)(v3 + 284) = 1;
    if (*((_DWORD*)v6 + 28) != 0) {
      *((_DWORD*)v6 + 28) = 0;
    }
    if (*((_BYTE*)v6 + 158) != 0) {
      v14 = v6[12];
      if (v14 != 0) {
        v15 = v6[13];
        result = wld_AnimCtrlModule_SetRootMotionBone(
            *(_QWORD*)(v14 + 24), (__int64)"Loc_C_Trans", 11, 7);
        *(_BYTE*)(*(_QWORD*)(v14 + 24) + 232LL) = 1;
        *(_DWORD*)(*(_QWORD*)(v14 + 24) + 236LL) = 0;
        if (v15 != 0) {
          result = wld_AnimCtrlModule_SetRootMotionBone(
              *(_QWORD*)(v15 + 24), (__int64)"Loc_C_Trans", 11, 7);
          *(_BYTE*)(*(_QWORD*)(v15 + 24) + 232LL) = 1;
          *(_DWORD*)(*(_QWORD*)(v15 + 24) + 236LL) = 0;
          v16 = v6[1];
          v17 = *(_QWORD*)(v15 + 24);
        }
        else {
          v16 = v6[1];
          v17 = *(_QWORD*)(v14 + 24);
        }
        *(_QWORD*)(v17 + 304) = v16;
      }
    }
    return result;
  }
  if (*(_BYTE*)(v3 + 284) == 1) {
    v18 = *(_DWORD*)(v3 + 280);
    if (v18 == 0 || ((result = GameRoutine_108cb20(v18)) & 1) != 0) {
      v19 = v18 == 119788728 ? 0 : v18;
      if (*((_DWORD*)v6 + 28) != v19) {
        *((_DWORD*)v6 + 28) = v19;
      }
    }
  }
  if (*((_BYTE*)v6 + 158) != 0) {
    v20 = v6[12];
    if (v20 != 0) {
      v22 = *(_QWORD*)(v20 + 24);
      v21 = v20 + 24;
      v23 = v6[13];
      result = wld_AnimCtrlModule_SetRootMotionBone(v22, (__int64)"Loc_C_Trans",
                                                    11, 7);
      *(_BYTE*)(*(_QWORD*)v21 + 232LL) = 1;
      *(_DWORD*)(*(_QWORD*)v21 + 236LL) = 1065353216;
      if (v23 != 0) {
        result = wld_AnimCtrlModule_SetRootMotionBone(
            *(_QWORD*)(v23 + 24), (__int64)"Loc_C_Trans", 11, 7);
        v21 = v23 + 24;
        *(_BYTE*)(*(_QWORD*)v21 + 232LL) = 1;
        *(_DWORD*)(*(_QWORD*)v21 + 236LL) = 1065353216;
      }
      *(_QWORD*)(*(_QWORD*)v21 + 304LL) = v6[1];
    }
  }
  if (*(_BYTE*)(v3 + 284) == 1) {
    *(_BYTE*)(v3 + 284) = 0;
  }
  return result;
}

#pragma GCC visibility pop
