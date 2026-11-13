#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_658c00(_QWORD* result);
__int64* GameRoutine_64dfe0(__int64* result, __int64*);
__int64 CharacterBuilder_1084780(__int64 result);
__int64 Cursor_734a80(__int64, __int64*);
__int64 GameRoutine_76de80(__int64);
__int64 IRoute_751080(unsigned int*, __int64);
__int64 IRoute_751300(unsigned int*, __int64);
__int64 UnitActor_819f40(__int64);
__int64 UnitActor_81a540(__int64, unsigned int, __int64);
__int64 UnitActor_81ab40(__int64, float, float);
__int64 game_ProcInst_Unregister(__int64 result);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_startSlotVolume_100b50(int*, __int64, float);
double snd_getDefineValue(unsigned __int8*);
extern _UNKNOWN* GameData_21d21b8;
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitAction_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitMove_vtable[])();
extern __int64 GameData_21cd100;
extern __int64 GameData_21cd130;
extern __int64 GameData_21d21c0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_map_Action_units_;
extern __int64 game_sound_g_game_sound;
extern int GameData_21fa960;
float Unit_6c7fa0(__int64, _OWORD*);
long double UnitActor_81ba20(__int64);
unsigned __int64 UnitActor_81c4a0(unsigned __int64 result, _BYTE*);
void Cursor_730e40(__int64, __int64);
void GameRoutine_6c7cb0(__int64, int, int);
void snd_Fade_Fade_10c910(__int64, int);
_QWORD* ProcUnitMove_Destructor(__int64 a1);
_BYTE* ProcInst_657a50(__int64, char);
__attribute__((swiftcall)) void UnitActor_81d2c0(PSEUDO_X8, __int64);
__int64 GameRoutine_7435e0();
extern __int128 GameData_1a83090;
extern __int64* GameData_212cfc0[10];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_game_setting_ptr;
extern float GameData_1b3d0ac[12];
float math_Vec3_Angle(float32x4_t*, float32x4_t*);
void Cursor_730ff0(__int64, __int128*);
void GameRoutine_9a4ec0(__int64, __int64, long double*);
void UnitActor_81d540(__int64, long double);
void ProcUnitMove_Unknown2(__int64 a1);

_QWORD* ProcUnitMove_Destructor(__int64 a1)
{
  __int64 v2;
  char v3;
  char v4;
  __int64 v5;
  unsigned int v6;
  float v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  float v15;
  __int128 v16;
  __int128 v17;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  long double v22;
  long double v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  float v30;
  double v31;
  unsigned __int64 v32;
  unsigned int v33;
  __int64* v34;
  __int64* v35;
  unsigned int v36;
  bool v37;
  __int64 v38;
  __int64* v39;
  __int64* v40;
  long double v41;
  long double v42;
  __int64* v43;
  bool v44;
  __int64 v45;
  _BYTE* v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  int v52;
  __int64 v54;
  unsigned int v55;
  __int64 v56[26];

  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)a1 = game_map_anonymous_ProcUnitMove_vtable;
  while ((unsigned int)GameRoutine_76de80(a1) == 1)
    ;
  v2 = *(_QWORD*)(a1 + 152);
  v3 = IRoute_751080((unsigned int*)(a1 + 160), v2),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = IRoute_751300((unsigned int*)(a1 + 160), *(_QWORD*)(a1 + 152)),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_BYTE*)(v2 + 584) = v3;
  *(_BYTE*)(v2 + 585) = v4;
  v5 = *(_QWORD*)(a1 + 152);
  v6 = *(unsigned __int8*)(a1 + 473);
  if (v6 > 5) {
    if (*(unsigned __int8*)(a1 + 473) > 8u) {
      if (v6 == 9) {
        v7 = 0x1.0e00000000000p+7f;
        goto LABEL_21;
      }
      if (v6 == 12) {
        v7 = 0x1.6800000000000p+5f;
        goto LABEL_21;
      }
    }
    else {
      if (v6 == 6) {
        v7 = 0x1.3b00000000000p+8f;
        goto LABEL_21;
      }
      if (v6 == 8) {
        v7 = 0x1.6800000000000p+6f;
        goto LABEL_21;
      }
    }
  LABEL_20:
    v7 = 0x0.0p+0f;
    goto LABEL_21;
  }
  if (*(unsigned __int8*)(a1 + 473) > 1u) {
    if (v6 == 2) {
      v7 = 0x1.0e00000000000p+8f;
      goto LABEL_21;
    }
    if (v6 == 3) {
      v7 = 0x1.c200000000000p+7f;
      goto LABEL_21;
    }
    goto LABEL_20;
  }
  if (*(_BYTE*)(a1 + 473) != 0) {
    v7 = 0x1.6800000000000p+7f;
  LABEL_21:
    UnitActor_81ab40(v5, v7, -0x1.0000000000000p+0f),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v5 = *(_QWORD*)(a1 + 152);
  }
  GameRoutine_6c7cb0(v5, *(char*)(v5 + 584), *(char*)(v5 + 585)),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v8 = *(_QWORD*)(a1 + 152);
  v9 = *(_QWORD*)(v8 + 8);
  if (v9 != 0) {
    v10 = *(char*)(v9 + 584);
    if ((v10 & 0x80000000) == 0) {
      v11 = *(char*)(v9 + 585);
      if ((v11 & 0x80000000) == 0) {
        v12 = *(_DWORD*)(v9 + 592);
        v13 = v10 | 0x100;
        v14 = v11 | 0x100;
        v15 = (float)(unsigned int)(v12 - 1) * 0x1.4000000000000p+1f;
        if (v12 <= 0) {
          v15 = 0x0.0p+0f;
        }
        *(_QWORD*)&v16 = COERCE_UNSIGNED_INT(
            (float)((float)((float)((float)v13 * 0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                    -0x1.4000000000000p+10f) +
            v15);
        v54 = COERCE_UNSIGNED_INT(
            (float)((float)((float)((float)v14 * 0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                    -0x1.4000000000000p+10f) +
            v15);
        *(float*)&v55 =
            (float)((float)((float)((float)v13 * 0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                    -0x1.4000000000000p+10f) +
            v15;
        *((_QWORD*)&v16 + 1) = v54;
        *(_OWORD*)v56 = v16;
        *(_QWORD*)&v17 =
            __PAIR64__(COERCE_UNSIGNED_INT(Unit_6c7fa0(v9, v56)), v55),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w"));
        *((_QWORD*)&v17 + 1) = v54;
        *(_OWORD*)v56 = v17;
        Cursor_734a80(v8 + 48, v56),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w"));
        UnitActor_81ba20(v8),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    v19 = *(_QWORD*)(v8 + 264);
    if (v19 != 0) {
      CharacterBuilder_1084780(v19),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  v20 = *(_QWORD*)(a1 + 152);
  BYTE4(v56[1]) = 0;
  v56[0] = 0xBF800000BF800000LL;
  LODWORD(v56[1]) = 1065353216;
  v21 = UnitActor_819f40(*(_QWORD*)(v20 + 8)),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v21 != *(_DWORD*)(v20 + 16)) {
    UnitActor_81a540(v20, v21, (__int64)v56),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v24 = *(_QWORD*)(*(_QWORD*)(a1 + 152) + 264LL);
  if (v24 != 0) {
    *(_DWORD*)(*(_QWORD*)(v24 + 304) + 12LL) = 1065353216;
  }
  v25 = *(_BYTE*)(a1 + 472);
  if ((v25 & 1) != 0) {
    Cursor_730e40(*(_QWORD*)(GameData_21cd130 + 48), *(_QWORD*)(a1 + 152)),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v25 = *(_BYTE*)(a1 + 472);
  }
  if ((v25 & 2) != 0) {
    v26 = *(_QWORD*)(a1 + 152);
    LODWORD(v56[0]) = 0;
    if (*(_BYTE*)(v26 + 176) == 1) {
      v27 = *(_QWORD*)(v26 + 152);
      *(_QWORD*)&v22 = 0;
    }
    else {
      if (*(float*)(v26 + 160) <= 0x0.0p+0f) {
        if (((*(__int64 (**)(__int64, __int64*, __int64))(
                 *(_QWORD*)(v26 + 152) + 8LL))(v26 + 152, v56, v26 + 184) &
             1) == 0) {
          goto LABEL_43;
        }
        (*(void (**)(__int64))(*(_QWORD*)(v26 + 152) + 16LL))(v26 + 152),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w"));
        LODWORD(v41) = v56[0];
        (*(void (**)(__int64, long double, long double))(
            *(_QWORD*)(v26 + 152) + 24LL))(v26 + 152, v42, v41),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w"));
        goto LABEL_42;
      }
      (*(void (**)(__int64))(*(_QWORD*)(v26 + 152) + 16LL))(v26 + 152),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v27 = *(_QWORD*)(v26 + 152);
    }
    *(_QWORD*)&v23 = 0;
    (*(void (**)(__int64, long double, long double))(v27 + 24))(v26 + 152, v22,
                                                                v23),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LABEL_42:
    *(_QWORD*)(v26 + 160) = 0;
    *(_WORD*)(v26 + 176) = 256;
    *(_WORD*)(v26 + 20) |= 8u;
  }
LABEL_43:
  v28 = game_sound_g_game_sound;
  if (game_sound_g_game_sound != 0) {
    v29 = *(_DWORD*)(game_sound_g_game_sound + 2480);
    if (v29 != 0) {
      *(_DWORD*)(game_sound_g_game_sound + 2480) = v29 - 1;
      snd_Fade_Fade_10c910((__int64)v56, 125),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v30 = 0x1.0000000000000p+0f;
      if (*(_DWORD*)(v28 + 2752) == 1 && *(int*)(v28 + 2480) >= 1) {
        v31 = snd_getDefineValue("SetVolume_SE_Bmap_FootStep"),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v30 = *(float*)&v31 / 0x1.9000000000000p+6f;
      }
      snd_startSlotVolume_100b50(&GameData_21fa960, (__int64)v56, v30),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w"));
      snd_Fade_Destroy_Fade(v56),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  v32 = *(_QWORD*)(a1 + 152);
  if (GameData_21d21b8 != nullptr) {
    v33 = *(unsigned __int8*)(v32 + 2088);
    v34 = (__int64*)GameData_21d21b8;
    v35 = (__int64*)&GameData_21d21b8;
    do {
      v36 = *((unsigned __int8*)v34 + 25);
      v37 = v36 >= v33;
      v38 = v36 < v33;
      if (v37) {
        v35 = v34;
      }
      v34 = (__int64*)v34[v38];
    } while (v34 != nullptr);
    if (v35 != (__int64*)&GameData_21d21b8 &&
        v33 >= *((unsigned __int8*)v35 + 25)) {
      v39 = (__int64*)v35[1];
      if (v39 != nullptr) {
        do {
          v40 = v39;
          v39 = (__int64*)*v39;
        } while (v39 != nullptr);
      }
      else {
        v43 = v35;
        do {
          v40 = (__int64*)v43[2];
          v44 = v43 == (__int64*)*v40;
          v43 = v40;
        } while (!v44);
      }
      if ((__int64*)game_map_Action_units_ == v35) {
        game_map_Action_units_ = (__int64)v40;
      }
      --GameData_21d21c0;
      GameRoutine_64dfe0((__int64*)GameData_21d21b8, v35),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v45 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v45 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v45, v35),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v32 = *(_QWORD*)(a1 + 152);
    }
  }
  if ((*(_BYTE*)(a1 + 528) & 1) != 0) {
    v46 = *(_BYTE**)(a1 + 544);
  }
  else {
    v46 = (_BYTE*)(a1 + 529);
  }
  UnitActor_81c4a0(v32, v46),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((*(_BYTE*)(a1 + 528) & 1) != 0) {
    v47 = *(_QWORD*)(a1 + 544);
    if (v47 != 0) {
      v48 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v48 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, v47),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  v49 = *(_QWORD**)(a1 + 512);
  if (v49 == (_QWORD*)(a1 + 480)) {
    v50 = 32;
  }
  else {
    if (v49 == nullptr) {
      goto LABEL_86;
    }
    v50 = 40;
  }
  (*(void (**)(__int64))(*v49 + v50))((__int64)v49),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_86:
  *(_QWORD*)a1 = game_map_anonymous_ProcUnitAction_vtable;
  v51 = GameData_21cd100;
  v52 = *(_DWORD*)(GameData_21cd100 + 16) - 1;
  *(_DWORD*)(GameData_21cd100 + 16) = v52;
  if (v52 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v51 + 8) + 8LL))(v51 + 8),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w"));
  return GameRoutine_658c00((_QWORD*)(a1 + 88));
}

void ProcUnitMove_Unknown2(__int64 a1)
{
  int v2;
  int v3;
  unsigned __int64 v4;
  __int128 v5;
  float v6;
  bool v7;
  __int64 v8;
  float v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float v13;
  int v14;
  float v15;
  float v16;
  float32x4_t v17;
  float32x4_t v18;
  float v19;
  float32x4_t v20;
  float32x4_t v21;
  float v22;
  float v23;
  float32x4_t v24;
  float32x4_t v25;
  __int64 v26;
  __int128 v27;
  int v28;
  float v29;
  float v30;
  float v31;
  int v32;
  int v33;
  unsigned int v34;
  __int64 v35;
  float v36;
  float v37;
  float32x4_t v38;
  float32x4_t v39;
  int8x16_t v40;
  float v41;
  int8x16_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  __int64 v47;
  char v48;
  long double v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;
  int v54;
  float v55;
  __int64 v56;
  unsigned int v57;
  unsigned __int8* v58;
  unsigned int v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  float32x4_t v62;
  float32x4_t v63;
  __int128 v64;
  __int128 v65;

  v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      goto LABEL_15;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v4 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v4 + 172) == *(float*)(v4 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160),
          v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      v5 = *(_OWORD*)(v4 + 208);
    }
    if (*((float*)&v5 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(
                        v4 + 160, *((float*)&v5 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
      goto LABEL_15;
    }
  }
  if ((*(_BYTE*)(a1 + 472) & 4) != 0 &&
      (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 952LL) & 0x82) != 0) {
  LABEL_15:
    if ((*(_WORD*)(a1 + 136) & 1) == 0) {
      ProcInst_657a50(a1, 1),
          v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    return;
  }
  if (!((float)(0x1.e000000000000p+5f /
                (float)*(int*)(*game_g_frame_clock_ptr[0] + 476)) >
        0x0.0p+0f)) {
    v6 = 0x1.0000000000000p+0f;
  }
  else {
    v6 = 0x1.e000000000000p+5f /
         (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
  }
  v7 = (GameRoutine_7435e0() & 1) == 0,
  v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v8 = *(_QWORD*)(a1 + 152);
  v9 = 0x1.0000000000000p+1f;
  v12 = *(_QWORD*)(v8 + 48);
  v10 = v8 + 48;
  v11 = v12;
  if (v7) {
    v9 = 0x1.0000000000000p+0f;
  }
  v13 = (float)(v9 * v6) * 0x1.4000000000000p-1f;
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(v11 + 16))(
      (void*)(&v63), v10),
      v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (!(v13 > 0x0.0p+0f)) {
    v14 = 0;
  }
  else {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)(*(_QWORD*)(a1 + 152) + 48LL) + 16LL))(
        (void*)(&v64), *(_QWORD*)(a1 + 152) + 48LL),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*(_DWORD*)(a1 + 352) != 0) {
      v14 = 0;
    }
    else {
      v14 = GameRoutine_76de80(a1),
      v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v15 = *(float*)(a1 + 468) - *(float*)(a1 + 464);
    if (v15 <= v13) {
      v13 = v13 - v15;
      v14 = GameRoutine_76de80(a1),
      v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    if (((v14 - 2) & 0xFFFFFFFD) != 0) {
      v16 = *(float*)(a1 + 468);
      v17 = *(float32x4_t*)(a1 + 400);
      v18 = *(float32x4_t*)(a1 + 416);
      v19 = v13 + *(float*)(a1 + 464);
      v20 = *(float32x4_t*)(a1 + 432);
      v21 = *(float32x4_t*)(a1 + 448);
      *(float*)(a1 + 464) = v19;
      v22 = v19 / v16;
      v23 = v22 * (float)(v22 * v22);
      v24 = vaddq_f32(
          vmulq_n_f32(v21, v23 - (float)(PSEUDO_UNFUSED(v22 * v22))),
          vaddq_f32(
              vmulq_n_f32(
                  v20,
                  v22 + (float)((float)(PSEUDO_UNFUSED((float)(v22 * v22) *
                                                       0x1.0000000000000p+2f)) +
                                (float)(v23 * -0x1.8000000000000p+1f))),
              vaddq_f32(
                  vmulq_n_f32(
                      v17,
                      (float)-(float)(v23 - (float)((float)(v22 * v22) *
                                                    0x1.0000000000000p+1f)) -
                          v22),
                  vmulq_n_f32(
                      v18,
                      (float)((float)(PSEUDO_UNFUSED((float)(v22 * v22) *
                                                     -0x1.4000000000000p+2f)) +
                              (float)(v23 * 0x1.8000000000000p+1f)) +
                          0x1.0000000000000p+1f))));
      LANES128(v17).n128_u64[0] = 0x3F0000003F000000LL;
      LANES128(v17).n128_u64[1] = 0x3F0000003F000000LL;
      v25 = vmulq_f32(v24, v17);
    }
    else {
      v25 = *(float32x4_t*)(a1 + 384);
    }
    *(_QWORD*)&v64 = LANES128(v25).n128_u64[0];
    v26 = *(_QWORD*)(a1 + 152);
    *(_QWORD*)&v27 = LANES128(v25).n128_u64[0];
    *((_QWORD*)&v27 + 1) = LANES128(v25).n128_u32[2];
    v64 = v27;
    if (v26 != 0) {
      v28 = *(_DWORD*)(v26 + 592);
      v29 = (float)(unsigned int)(v28 - 1) * 0x1.4000000000000p+1f;
      if (v28 <= 0) {
        v29 = 0x0.0p+0f;
      }
      v30 = (float)((float)(LANES128(v25).n128_f32[0] - v29) +
                    0x1.4000000000000p+10f) *
            0x1.99999a0000000p-3f;
      v31 = (float)((float)(LANES128(v25).n128_f32[2] - v29) +
                    0x1.4000000000000p+10f) *
            0x1.99999a0000000p-3f;
      v32 = (int)v30 - 256;
      v33 = (int)v31 - 256;
      *(_BYTE*)(v26 + 584) = (int)v30;
      *(_BYTE*)(v26 + 585) = (int)v31;
      v65 = v64;
      Cursor_734a80(v26 + 48, (__int64*)&v65),
          v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v0", "=w"));
      GameRoutine_6c7cb0(v26, v32, v33),
          v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    if ((*(_BYTE*)(a1 + 472) & 1) != 0) {
      Cursor_730ff0(*GameData_212cfc0[0], &v64),
          v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  v34 = *(unsigned __int8*)(a1 + 473);
  if (*(_BYTE*)(a1 + 473) != 0) {
    v35 = *(_QWORD*)(a1 + 152);
    if (*(_DWORD*)(a1 + 352) == *(_DWORD*)(a1 + 296)) {
      v36 = 0x0.0p+0f;
      if (v34 <= 0xC) {
        v36 = GameData_1b3d0ac[(unsigned __int8)(v34 - 1)];
      }
      v37 = -0x1.0000000000000p+0f;
    LABEL_52:
      UnitActor_81ab40(v35, v36, v37),
          v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v0", "=w"));
      goto LABEL_53;
    }
  }
  else {
    v35 = *(_QWORD*)(a1 + 152);
  }
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)(v35 + 48) + 16LL))((void*)(&v62), v35 + 48),
      v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v38 = vsubq_f32(v62, v63);
  if (!((float)(vmuls_lane_f32(LANES128(v38).n128_f32[2], v38, 2) +
                (float)(LANES128(v38).n128_f32[0] *
                        LANES128(v38).n128_f32[0])) < 0x1.0000000000000p-4f)) {
    v36 = 0x0.0p+0f;
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 1065353216LL),
                             COERCE_AS(float32x2_t, 1065353216LL)))
            .n64_f32[0] > 0x0.0p+0f) {
      LANES128(v39).n128_u64[0] = LANES128(v38).n128_u32[0];
      LANES128(v39).n128_u64[1] = LANES128(v38).n128_u32[2];
      v40 = vmulq_f32(v39, v39);
      LANES128(v40).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v40, v40, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
              .n64_f32[0] > 0x0.0p+0f) {
        v60 = LANES128(v38).n128_u32[2];
        v61 = LANES128(v38).n128_u32[0];
        v64 = (__int128)v39;
        v65 = GameData_1a83090;
        v41 = math_Vec3_Angle((float32x4_t*)&v65, (float32x4_t*)&v64),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v0", "=w"));
        LANES128(v42).n128_u64[0] = v61;
        LANES128(v42).n128_u64[1] = v60;
        LANES128(v43).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                 COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v44).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v45).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v43).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                      COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        LANES128(v46).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                 COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v45).n128_i8[8] =
            vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        *(int8x8_t*)&LANES128(v44).n128_i8[8] =
            vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        *(int8x8_t*)&LANES128(v46).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                      COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        if (LANES128_OF(vmlsq_f32(vmulq_f32(v43, v44), v45, v46)).n128_f32[1] <
            0x0.0p+0f) {
          v41 = -v41;
        }
        v36 = v41 * 0x1.ca5dc00000000p+5f;
      }
    }
    v37 = 0x0.0p+0f;
    goto LABEL_52;
  }
LABEL_53:
  v47 = *(_QWORD*)(a1 + 152);
  v48 = GameRoutine_7435e0(),
  v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v50 = *(_QWORD*)(v47 + 264);
  if (v50 != 0) {
    LODWORD(v49) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
    v51 = *(_QWORD*)(v50 + 304);
    if ((v48 & 1) != 0) {
      *(float*)&v49 = 0x1.0000000000000p+1f;
    }
    *(_DWORD*)(v51 + 12) = LODWORD(v49);
  }
  UnitActor_81d540(*(_QWORD*)(a1 + 152), v49),
      v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (((v14 - 2) & 0xFFFFFFFD) == 0) {
    if (v14 == 2) {
      v52 = *(_QWORD*)(a1 + 152);
      if (v52 != 0) {
        UnitActor_81d2c0((void*)((float32x4_t*)&v65), v52),
            v49 =
                COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v0", "=w"));
        GameRoutine_9a4ec0(a1, (__int64)"UI_Deco_Bmap_Icon_Exclamation",
                           (long double*)&v65),
            v49 =
                COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if (game_ProcGameSkipView_instance_ == 0 ||
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
          (((v53 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v54 = 2)
               : (v54 = 3),
           (v54 & v53) != 0)) {
        v55 = *(float*)(a1 + 144);
        *(_WORD*)(a1 + 136) = *(_WORD*)(a1 + 136) & 0xFF97 | 0x60;
        if (v55 < 0x1.e000000000000p+4f) {
          v55 = 0x1.e000000000000p+4f;
        }
        *(float*)(a1 + 144) = v55;
      }
    }
    v56 = *(_QWORD*)(a1 + 152);
    BYTE12(v65) = 0;
    *(_QWORD*)&v65 = 0xBF800000BF800000LL;
    DWORD2(v65) = 1065353216;
    v57 = UnitActor_819f40(*(_QWORD*)(v56 + 8)),
    v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v57 != *(_DWORD*)(v56 + 16)) {
      UnitActor_81a540(v56, v57, (__int64)&v65),
          v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v58 = *(unsigned __int8**)(a1 + 16);
    if (v58 != nullptr) {
      v59 = *v58;
      if (v59 <= 0x10 && ((1 << v59) & 0x1CE00) != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
}

#pragma GCC visibility pop
