#include "decomp/pseudo_helpers.h"

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

#pragma GCC visibility pop
