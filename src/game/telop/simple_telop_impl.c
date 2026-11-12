#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 LayoutAccessor_155e140(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 TelopParts_17cbd60(_QWORD);
__int64 TelopParts_Destructor(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_util_Format(const char*, ...);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPriority(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_Setup_155dda0(_QWORD, _QWORD);
extern __int64 (*GameData_20d9048[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 GameData_21f3d10;
extern __int64 GameData_2241720;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ea58;
__int64 SimpleTelopImpl_Destructor(__int64 a1);
__int64 SimpleTelopImpl_17c9460(__int64 a1);
__int64 SimpleTelopImpl_17c9920(__int64 result);
__int64 SimpleTelopImpl_17c9980(__int64 a1);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_17ca800(_QWORD);
__int64 GameRoutine_17ca960(_QWORD, _QWORD);
__int64 LayoutAccessor_155ea30(_QWORD);
__int64 TelopParts_17cbd60_alt1(_QWORD,
                                long double) __asm__("TelopParts_17cbd60");
__int64 TelopParts_17cdc40(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 ui_LayoutAccessor_SetTranslate(_QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 GameData_21f8018;
extern __int64 GameData_2203490;
extern __int64 GameData_225ca88;
extern __int64 game_ProcFadeView_instance_;
float GameRoutine_618640(_QWORD, double, double);
void SimpleTelopImpl_Unknown2(__int64 a1);
__int64 GameRoutine_17ca800_alt1(__int64 result) __asm__("GameRoutine_17ca800");
__int64 LayoutAccessor_155ea30_alt1(__int64*) __asm__("LayoutAccessor_155ea30");
__int64 TelopParts_17cdc40_alt1(__int64,
                                __int64*) __asm__("TelopParts_17cdc40");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_play_ff2d0_alt1(__int64, __int64, __int64, unsigned int,
                            unsigned int, int, float,
                            float) __asm__("snd_play_ff2d0");
float GameRoutine_618640_alt1(int, float result, float, float,
                              float) __asm__("GameRoutine_618640");
float ui_LayoutAccessor_SetTranslate_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_SetTranslate");
void GameRoutine_17ca960_alt1(__int64, __int64) __asm__("GameRoutine_17ca960");
void TelopParts_17cbd60_alt2(__int64) __asm__("TelopParts_17cbd60");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");

__int64 SimpleTelopImpl_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  *(_QWORD*)a1 = GameData_20d9048;
  LayoutAccessor_155e140(a1 + 168);
  v2 = *(_QWORD*)(a1 + 152);
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = *(_QWORD*)(a1 + 1664);
  if (v4 != 0) {
    v5 = *(_QWORD*)(a1 + 1672);
    if (v4 == v5) {
      goto LABEL_10;
    }
    do {
      v5 -= 248;
      TelopParts_17cbd60(v5);
    } while (v5 != v4);
    v6 = *(_QWORD*)(a1 + 1664);
    *(_QWORD*)(a1 + 1672) = v4;
    v4 = v6;
    if (v6 != 0) {
    LABEL_10:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v4);
    }
  }
  v8 = *(_QWORD*)(a1 + 1640);
  if (v8 != 0) {
    v9 = *(_QWORD*)(a1 + 1648);
    if (v8 == v9) {
      goto LABEL_17;
    }
    do {
      v9 -= 248;
      TelopParts_17cbd60(v9);
    } while (v9 != v8);
    v10 = *(_QWORD*)(a1 + 1640);
    *(_QWORD*)(a1 + 1648) = v8;
    v8 = v10;
    if (v10 != 0) {
    LABEL_17:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v8);
    }
  }
  TelopParts_Destructor(a1 + 1184);
  TelopParts_Destructor(a1 + 728);
  TelopParts_Destructor(a1 + 272);
  LayoutAccessor_155e140(a1 + 168);
  v12 = *(_QWORD*)(a1 + 264);
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
  GameRoutine_1564060(a1 + 216);
  GameRoutine_1563f90(a1 + 192, *(_QWORD*)(a1 + 200));
  v13 = *(_QWORD*)(a1 + 176);
  if (v13 != 0) {
    std___1___shared_weak_count___release_weak(v13);
  }
  v14 = *(_QWORD*)(a1 + 160);
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v14);
  }
  GameData_2241720 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 SimpleTelopImpl_17c9460(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;

  result = LayoutAccessor_155e140(a1 + 168);
  v3 = *(_QWORD*)(a1 + 152);
  if (v3 != 0) {
    *(_BYTE*)(v3 + 2376) = 1;
  }
  v4 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__int64 SimpleTelopImpl_17c9920(__int64 result)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;

  if (*(_BYTE*)(*(_QWORD*)(result + 152) + 24LL) == 1) {
    v1 = *(unsigned __int8**)(result + 16);
    if (v1 != nullptr) {
      v2 = *v1;
      v3 = v2 > 0x10;
      v4 = (1 << v2) & 0x1CE00;
      if (!v3 && v4 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    *(_WORD*)(result + 136) |= 8u;
  }
  return result;
}

__int64 SimpleTelopImpl_17c9980(__int64 a1)
{
  int v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _BOOL4 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 result;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  _BOOL4 v28;
  __int64 v29;
  __int64 v30;
  __int64 v32;
  _QWORD v33[2];

  v2 = *(_QWORD*)(a1 + 160);
  v33[0] = *(_QWORD*)(a1 + 152);
  v33[1] = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0(a1 + 168, v33);
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak(v2);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0(a1 + 168, v33);
  }
  LayoutAccessor_155e830(a1 + 168, 1);
  ui_LayoutAccessor_SetPriority(a1 + 168, 1311);
  v4 = game_util_Format("L_Tlp%02d", 0);
  v5 = LayoutAccessor_155fbe0(a1 + 168, v4);
  if (*(_QWORD*)(v5 + 16) == 0) {
    goto LABEL_18;
  }
  v6 = (__int64*)v5;
  v7 = *(_QWORD*)(v5 + 8);
  if (v7 == 0) {
    goto LABEL_18;
  }
  v8 = std___1___shared_weak_count_lock(v7);
  if (v8 != 0) {
    v9 = *v6;
    if (*v6 != 0) {
      v1 = *(unsigned __int8*)(v9 + 24);
      v10 = v9 + 152;
      if (v1 == 0) {
        v10 = 0;
      }
      v11 = v10 != v6[2];
    }
    else {
      v11 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v11) {
        goto LABEL_15;
      }
    }
    else {
      v21 = v8;
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v21);
      if (v11) {
        goto LABEL_15;
      }
    }
    if ((v1 & 1) == 0) {
      goto LABEL_18;
    }
    goto LABEL_17;
  }
LABEL_15:
  v12 = v6[1];
  if (v12 != 0 && *(_QWORD*)(v12 + 8) != -1) {
  LABEL_17:
    *(_QWORD*)(a1 + 280) = v6;
    LayoutAccessor_155e830(v6, 0);
  }
LABEL_18:
  v13 = game_util_Format("L_Tlp%02d", 1);
  v14 = LayoutAccessor_155fbe0(a1 + 168, v13);
  if (*(_QWORD*)(v14 + 16) == 0) {
    goto LABEL_34;
  }
  v15 = (__int64*)v14;
  v16 = *(_QWORD*)(v14 + 8);
  if (v16 == 0) {
    goto LABEL_34;
  }
  v17 = std___1___shared_weak_count_lock(v16);
  if (v17 != 0) {
    v18 = *v15;
    if (*v15 != 0) {
      v1 = *(unsigned __int8*)(v18 + 24);
      v19 = v18 + 152;
      if (v1 == 0) {
        v19 = 0;
      }
      v20 = v19 != v15[2];
    }
    else {
      v20 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v20) {
        goto LABEL_31;
      }
    }
    else {
      v29 = v17;
      (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
      std___1___shared_weak_count___release_weak(v29);
      if (v20) {
        goto LABEL_31;
      }
    }
    if ((v1 & 1) == 0) {
      goto LABEL_34;
    }
    goto LABEL_33;
  }
LABEL_31:
  v22 = v15[1];
  if (v22 != 0 && *(_QWORD*)(v22 + 8) != -1) {
  LABEL_33:
    *(_QWORD*)(a1 + 736) = v15;
    LayoutAccessor_155e830(v15, 0);
  }
LABEL_34:
  v23 = game_util_Format("L_Tlp%02d", 2);
  result = LayoutAccessor_155fbe0(a1 + 168, v23);
  if (*(_QWORD*)(result + 16) == 0) {
    goto LABEL_50;
  }
  v25 = (__int64*)result;
  result = *(_QWORD*)(result + 8);
  if (result == 0) {
    goto LABEL_50;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result != 0) {
    v26 = *v25;
    if (*v25 != 0) {
      v1 = *(unsigned __int8*)(v26 + 24);
      v27 = v26 + 152;
      if (v1 == 0) {
        v27 = 0;
      }
      v28 = v27 != v25[2];
    }
    else {
      v28 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v28) {
        goto LABEL_47;
      }
    }
    else {
      v32 = result;
      (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      result = std___1___shared_weak_count___release_weak(v32);
      if (v28) {
        goto LABEL_47;
      }
    }
    if ((v1 & 1) == 0) {
      goto LABEL_50;
    }
    goto LABEL_49;
  }
LABEL_47:
  v30 = v25[1];
  if (v30 != 0 && *(_QWORD*)(v30 + 8) != -1) {
  LABEL_49:
    *(_QWORD*)(a1 + 1192) = v25;
    result = LayoutAccessor_155e830(v25, 0);
  }
LABEL_50:
  if (GameData_21f3d10 != 0 && *(_BYTE*)(GameData_21f3d10 + 9) == 1 &&
      *(_DWORD*)(GameData_21f3d10 + 136) == 1 && *GameData_212ea58 == 0) {
    *(_DWORD*)(a1 + 1720) = -1028128768;
    *(_BYTE*)(a1 + 1690) = 1;
  }
  return result;
}

void SimpleTelopImpl_Unknown2(__int64 a1)
{
  int v1;
  __int64 v2;
  __int64 v4;
  __int64* v5;
  float v6;
  float v7;
  float v8;
  bool v9;
  char v10;
  float v11;
  float v12;
  __int64* v13;
  int v14;
  int v15;
  __int64 v16;
  float v17;
  float v18;
  float v19;
  float v20;
  __int64 v21;
  bool v22;
  char v23;
  float v24;
  float v25;
  __int64* v26;
  int v27;
  int v28;
  __int64 v29;
  float v30;
  float v31;
  float v32;
  float v33;
  __int64 v34;
  char v35;
  float v36;
  float v37;
  __int64* v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  int v45;
  int v46;
  int v47;
  int v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int128 v52;
  unsigned __int64 v53;
  int v54;
  __int64 v55;
  __int64* v56;
  char v57;
  bool v58;
  float v59;
  int v60;
  float v61;
  int v62;
  __int64* v63;
  __int64 v64;
  char v65;
  unsigned __int64 v66;
  __int128 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  int v71;
  __int64 v72;
  int v73;
  __int64 v74;
  __int64* v75;
  char v76;
  bool v77;
  float v78;
  int v79;
  float v80;
  int v81;
  __int64* v82;
  __int64 v83;
  struct {
    __int64 v84;
    int v85;
  } v84_;

  v1 = *(_DWORD*)(a1 + 1692);
  v2 = a1 + 272;
  if (v1 > 2) {
    v1 -= 3;
  }
  v4 = v2 + 456LL * v1;
  GameRoutine_17ca800_alt1(v4);
  v5 = game_g_frame_clock_ptr[0];
  v6 = 0x1.e000000000000p+5f / (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
  if (v6 <= 0x0.0p+0f) {
    v7 = -0x1.119ce00000000p-6f;
  }
  else {
    v7 = v6 * -0x1.119ce00000000p-6f;
  }
  v8 = fmaxf(*(float*)(a1 + 1704) + (float)(v7 * 0x1.f400000000000p+9f),
             0x0.0p+0f);
  *(float*)(a1 + 1704) = v8;
  *(float*)(a1 + 1700) = GameRoutine_618640_alt1(
      0, 0x0.0p+0f, 0x1.0400000000000p+6f, v8, 0x1.2c00000000000p+9f);
  if (GameData_21f3d10 != 0 && *(_BYTE*)(GameData_21f3d10 + 9) == 1 &&
      (*(_DWORD*)(GameData_21f3d10 + 136) == 1 ? (v9 = *GameData_212ea58 == 0)
                                               : (v9 = false),
       v9 && GameData_225ca88 != 0)) {
    v10 = LayoutAccessor_155ea30_alt1((__int64*)(GameData_225ca88 + 176));
  }
  else {
    v10 = 0;
  }
  v11 = *(float*)(a1 + 1720);
  if (*(_BYTE*)(a1 + 1690) != (v10 & 1)) {
    *(float*)(a1 + 1712) = v11;
    *(_BYTE*)(a1 + 1690) = v10 & 1;
    v12 = -0x1.7000000000000p+6f;
    *(_DWORD*)(a1 + 1708) = 1128792064;
    if ((v10 & 1) == 0) {
      v12 = 0x0.0p+0f;
    }
    *(float*)(a1 + 1716) = v12;
  }
  v13 = *(__int64**)(v4 + 8);
  LODWORD(v84_.v84) = 0;
  v84_.v85 = 0;
  *((float*)&v84_.v84 + 1) =
      (float)(v11 + 0x1.ee00000000000p+8f) - *(float*)(a1 + 1700);
  ui_LayoutAccessor_SetTranslate_alt1(v13, (__int64)&v84_.v84);
  v14 = *(_DWORD*)(a1 + 1692);
  if (v14 > 1) {
    v15 = -2;
  }
  else {
    v15 = 1;
  }
  v16 = v2 + 456LL * (v15 + v14);
  GameRoutine_17ca800_alt1(v16);
  v17 = 0x1.e000000000000p+5f / (float)*(int*)(*v5 + 476);
  if (v17 <= 0x0.0p+0f) {
    v18 = -0x1.119ce00000000p-6f;
  }
  else {
    v18 = v17 * -0x1.119ce00000000p-6f;
  }
  v19 = fmaxf(*(float*)(a1 + 1704) + (float)(v18 * 0x1.f400000000000p+9f),
              0x0.0p+0f);
  *(float*)(a1 + 1704) = v19;
  v20 = GameRoutine_618640_alt1(0, 0x0.0p+0f, 0x1.0400000000000p+6f, v19,
                                0x1.2c00000000000p+9f);
  v21 = GameData_21f3d10;
  *(float*)(a1 + 1700) = v20;
  if (v21 != 0 && *(_BYTE*)(v21 + 9) == 1 &&
      (*(_DWORD*)(v21 + 136) == 1 ? (v22 = *GameData_212ea58 == 0)
                                  : (v22 = false),
       v22 && GameData_225ca88 != 0)) {
    v23 = LayoutAccessor_155ea30_alt1((__int64*)(GameData_225ca88 + 176));
  }
  else {
    v23 = 0;
  }
  v24 = *(float*)(a1 + 1720);
  if (*(_BYTE*)(a1 + 1690) != (v23 & 1)) {
    *(float*)(a1 + 1712) = v24;
    *(_BYTE*)(a1 + 1690) = v23 & 1;
    v25 = -0x1.7000000000000p+6f;
    *(_DWORD*)(a1 + 1708) = 1128792064;
    if ((v23 & 1) == 0) {
      v25 = 0x0.0p+0f;
    }
    *(float*)(a1 + 1716) = v25;
  }
  v26 = *(__int64**)(v16 + 8);
  LODWORD(v84_.v84) = 0;
  v84_.v85 = 0;
  *((float*)&v84_.v84 + 1) =
      (float)((float)(v24 + 0x1.ee00000000000p+8f) - *(float*)(a1 + 1700)) +
      -0x1.0400000000000p+6f;
  ui_LayoutAccessor_SetTranslate_alt1(v26, (__int64)&v84_.v84);
  v27 = *(_DWORD*)(a1 + 1692);
  if (v27 > 0) {
    v28 = -1;
  }
  else {
    v28 = 2;
  }
  v29 = v2 + 456LL * (v28 + v27);
  GameRoutine_17ca800_alt1(v29);
  v30 = 0x1.e000000000000p+5f / (float)*(int*)(*v5 + 476);
  if (v30 <= 0x0.0p+0f) {
    v31 = -0x1.119ce00000000p-6f;
  }
  else {
    v31 = v30 * -0x1.119ce00000000p-6f;
  }
  v32 = fmaxf(*(float*)(a1 + 1704) + (float)(v31 * 0x1.f400000000000p+9f),
              0x0.0p+0f);
  *(float*)(a1 + 1704) = v32;
  v33 = GameRoutine_618640_alt1(0, 0x0.0p+0f, 0x1.0400000000000p+6f, v32,
                                0x1.2c00000000000p+9f);
  v34 = GameData_21f3d10;
  *(float*)(a1 + 1700) = v33;
  if (v34 == 0 || *(_BYTE*)(v34 + 9) != 1) {
  LABEL_52:
    v35 = 0;
    goto LABEL_53;
  }
  v35 = 0;
  if (*(_DWORD*)(v34 + 136) == 1 && GameData_2203490 == 0) {
    if (GameData_225ca88 != 0) {
      v35 = LayoutAccessor_155ea30_alt1((__int64*)(GameData_225ca88 + 176));
      goto LABEL_53;
    }
    goto LABEL_52;
  }
LABEL_53:
  v36 = *(float*)(a1 + 1720);
  if (*(_BYTE*)(a1 + 1690) != (v35 & 1)) {
    *(float*)(a1 + 1712) = v36;
    *(_BYTE*)(a1 + 1690) = v35 & 1;
    v37 = -0x1.7000000000000p+6f;
    *(_DWORD*)(a1 + 1708) = 1128792064;
    if ((v35 & 1) == 0) {
      v37 = 0x0.0p+0f;
    }
    *(float*)(a1 + 1716) = v37;
  }
  v38 = *(__int64**)(v29 + 8);
  LODWORD(v84_.v84) = 0;
  v84_.v85 = 0;
  *((float*)&v84_.v84 + 1) =
      (float)((float)(v36 + 0x1.ee00000000000p+8f) - *(float*)(a1 + 1700)) +
      -0x1.0400000000000p+7f;
  ui_LayoutAccessor_SetTranslate_alt1(v38, (__int64)&v84_.v84);
  v39 = *(float*)(a1 + 1708);
  if (v39 > 0x0.0p+0f) {
    v40 = 0x1.e000000000000p+5f / (float)*(int*)(*v5 + 476);
    if (v40 <= 0x0.0p+0f) {
      v41 = -0x1.119ce00000000p-6f;
    }
    else {
      v41 = v40 * -0x1.119ce00000000p-6f;
    }
    v42 = fmaxf(v39 + (float)(v41 * 0x1.f400000000000p+9f), 0x0.0p+0f);
    v43 = *(float*)(a1 + 1712);
    v44 = *(float*)(a1 + 1716);
    *(float*)(a1 + 1708) = v42;
    *(float*)(a1 + 1720) = GameRoutine_618640_alt1(
        11, v43, v44, 0x1.9000000000000p+7f - v42, 0x1.9000000000000p+7f);
  }
  v45 = *(_DWORD*)(a1 + 1696);
  v46 = v45 - 1;
  if (v45 >= 1) {
    v47 = *(_DWORD*)(a1 + 1692);
    if (*(_DWORD*)(a1 + 456LL * v47 + 720) == 0) {
      *(_DWORD*)(a1 + 1696) = v46;
      *(_QWORD*)(a1 + 1700) = 0x4416000042820000LL;
      if (v47 > 1) {
        v48 = -2;
      }
      else {
        v48 = 1;
      }
      *(_DWORD*)(a1 + 1692) = v48 + v47;
      v45 = v46;
    }
  }
  if (*(_BYTE*)(a1 + 1689) == 1) {
    if (v45 > 0) {
      return;
    }
    *(_BYTE*)(a1 + 1689) = 0;
    *(_QWORD*)(a1 + 1700) = 0;
  }
  v49 = *(_QWORD*)(a1 + 1640);
  v50 = *(_QWORD*)(a1 + 1648);
  if (v49 != v50 && v45 <= 2) {
    do {
      if (*(int*)(a1 + 1696) <= 2) {
        if (game_ProcFadeView_instance_ == 0) {
          goto LABEL_87;
        }
        v51 = game_ProcFadeView_instance_ +
              ((unsigned __int64)*(
                   unsigned __int8*)(game_ProcFadeView_instance_ + 480)
               << 6);
        if (*(float*)(v51 + 172) == *(float*)(v51 + 168)) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)(v51 + 160) + 16LL))(v51 +
                                                                         160);
        }
        else {
          v52 = *(_OWORD*)(v51 + 208);
        }
        if ((*((float*)&v52 + 3) != 0x1.0000000000000p+0f ||
             LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                          (_QWORD*)(*(_QWORD*)(v51 + 160) + 16LL))(
                             v51 + 160, *((float*)&v52 + 3)))
                     .n128_f32[3] != 0x1.0000000000000p+0f) &&
            (game_ProcFadeView_instance_ == 0 ||
             *(float*)((v53 =
                            game_ProcFadeView_instance_ +
                            ((unsigned __int64)*(
                                 unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
                             << 6)) +
                       172) == *(float*)(v53 + 168))) {
        LABEL_87:
          if (*(int*)(a1 + 1736) < 1 ||
              GameData_21f8018 == 0 && (unsigned int)(*(_DWORD*)v49 - 3) <= 1) {
            v54 = *(_DWORD*)(a1 + 1696) + *(_DWORD*)(a1 + 1692);
            if (v54 > 2) {
              v54 -= 3;
            }
            v55 = v2 + 456LL * v54;
            GameRoutine_17ca960_alt1(v55, v49);
            v56 = *(__int64**)(v55 + 8);
            v57 = GameData_21f3d10;
            if (GameData_21f3d10 != 0) {
              if (*(_BYTE*)(GameData_21f3d10 + 9) == 1 &&
                  (*(_DWORD*)(GameData_21f3d10 + 136) == 1
                       ? (v58 = *GameData_212ea58 == 0)
                       : (v58 = false),
                   v58)) {
                v57 = GameData_225ca88;
                if (GameData_225ca88 != 0) {
                  v63 = *(__int64**)(v55 + 8);
                  v57 = LayoutAccessor_155ea30_alt1(
                      (__int64*)(GameData_225ca88 + 176));
                  v56 = v63;
                }
              }
              else {
                v57 = 0;
              }
            }
            v59 = *(float*)(a1 + 1720);
            v60 = v57 & 1;
            if (*(unsigned __int8*)(a1 + 1690) != v60) {
              *(float*)(a1 + 1712) = v59;
              *(_BYTE*)(a1 + 1690) = v60;
              v61 = -0x1.7000000000000p+6f;
              *(_DWORD*)(a1 + 1708) = 1128792064;
              if (v60 == 0) {
                v61 = 0x0.0p+0f;
              }
              *(float*)(a1 + 1716) = v61;
            }
            LODWORD(v84_.v84) = 0;
            v84_.v85 = 0;
            *((float*)&v84_.v84 + 1) =
                (float)((float)(v59 + 0x1.ee00000000000p+8f) +
                        *(float*)(a1 + 1700)) +
                (float)((float)*(int*)(a1 + 1696) * -0x1.0400000000000p+6f);
            ui_LayoutAccessor_SetTranslate_alt1(v56, (__int64)&v84_.v84);
            v62 = *(_DWORD*)(a1 + 1696);
            *(_DWORD*)(a1 + 1696) = v62 + 1;
            if (v62 >= 2) {
              *(_BYTE*)(a1 + 1689) = 1;
            }
            *(_BYTE*)(v49 + 186) = 1;
          }
        }
      }
      v49 += 248;
    } while (v49 != v50);
    v49 = *(_QWORD*)(a1 + 1640);
    v50 = *(_QWORD*)(a1 + 1648);
  }
  if (v49 != v50) {
    while ((*(_BYTE*)(v49 + 186) & 1) == 0) {
      v49 += 248;
      if (v49 == v50) {
        goto LABEL_120;
      }
    }
  }
  if (v49 != v50) {
    v64 = v49 + 248;
    if (v49 + 248 != v50) {
      do {
        if ((*(_BYTE*)(v64 + 186) & 1) == 0) {
          TelopParts_17cdc40_alt1(v49, (__int64*)v64);
          v49 += 248;
        }
        v64 += 248;
      } while (v64 != v50);
      v50 = *(_QWORD*)(a1 + 1648);
    }
  }
  if (v49 != v50) {
    do {
      v50 -= 248;
      TelopParts_17cbd60_alt2(v50);
    } while (v50 != v49);
    *(_QWORD*)(a1 + 1648) = v49;
  }
LABEL_120:
  v65 = game_ProcFadeView_instance_;
  if (game_ProcFadeView_instance_ != 0) {
    v66 = game_ProcFadeView_instance_ +
          ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                 480)
           << 6);
    if (*(float*)(v66 + 172) == *(float*)(v66 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v66 + 160) + 16LL))(v66 + 160);
    }
    else {
      v67 = *(_OWORD*)(v66 + 208);
    }
    if (*((float*)&v67 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v66 + 160) + 16LL))(
                        v66 + 160, *((float*)&v67 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
      return;
    }
    v65 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      v68 = game_ProcFadeView_instance_ +
            ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
             << 6);
      v65 = *(float*)(v68 + 172) != *(float*)(v68 + 168);
    }
  }
  if ((v65 & 1) == 0 && *(int*)(a1 + 1736) <= 0 && *(_BYTE*)(a1 + 1688) == 1) {
    v69 = *(_QWORD*)(a1 + 1672);
    v70 = *(_QWORD*)(a1 + 1664);
    if (v69 == v70) {
      *(_BYTE*)(a1 + 1688) = 0;
    }
    else {
      v71 = *(_DWORD*)(a1 + 1696);
      if (v71 <= 2) {
        v72 = v70 + 248;
      LABEL_135:
        v73 = *(_DWORD*)(a1 + 1692) + v71;
        if (v73 > 2) {
          v73 -= 3;
        }
        v74 = v2 + 456LL * v73;
        GameRoutine_17ca960_alt1(v74, v72 - 248);
        v75 = *(__int64**)(v74 + 8);
        v76 = GameData_21f3d10;
        if (GameData_21f3d10 != 0) {
          if (*(_BYTE*)(GameData_21f3d10 + 9) == 1 &&
              (*(_DWORD*)(GameData_21f3d10 + 136) == 1
                   ? (v77 = *GameData_212ea58 == 0)
                   : (v77 = false),
               v77)) {
            v76 = GameData_225ca88;
            if (GameData_225ca88 != 0) {
              v82 = *(__int64**)(v74 + 8);
              v76 = LayoutAccessor_155ea30_alt1(
                  (__int64*)(GameData_225ca88 + 176));
              v75 = v82;
            }
          }
          else {
            v76 = 0;
          }
        }
        v78 = *(float*)(a1 + 1720);
        v79 = v76 & 1;
        if (*(unsigned __int8*)(a1 + 1690) != v79) {
          *(float*)(a1 + 1712) = v78;
          *(_BYTE*)(a1 + 1690) = v79;
          v80 = -0x1.7000000000000p+6f;
          *(_DWORD*)(a1 + 1708) = 1128792064;
          if (v79 == 0) {
            v80 = 0x0.0p+0f;
          }
          *(float*)(a1 + 1716) = v80;
        }
        LODWORD(v84_.v84) = 0;
        v84_.v85 = 0;
        *((float*)&v84_.v84 + 1) =
            (float)((float)(v78 + 0x1.ee00000000000p+8f) +
                    *(float*)(a1 + 1700)) +
            (float)((float)*(int*)(a1 + 1696) * -0x1.0400000000000p+6f);
        ui_LayoutAccessor_SetTranslate_alt1(v75, (__int64)&v84_.v84);
        v81 = *(_DWORD*)(a1 + 1696);
        *(_DWORD*)(a1 + 1696) = v81 + 1;
        if (v81 >= 2) {
          *(_BYTE*)(a1 + 1689) = 1;
        }
        snd_Fade_Fade_10c830_alt1((__int64)&v84_.v84, 0x0.0p+0f);
        snd_play_ff2d0_alt1((__int64)"VIB_SideQuest", (__int64)"VIB_SideQuest",
                            (__int64)&v84_.v84, 0, 0x10001u, 0, 0x0.0p+0f,
                            0x1.0000000000000p+0f);
        snd_Fade_Destroy_Fade_alt1(&v84_.v84);
        *(_BYTE*)(a1 + 1688) = 0;
        *(_BYTE*)(v72 - 62) = 1;
        while (v72 != v69) {
          v71 = *(_DWORD*)(a1 + 1696);
          v72 += 248;
          if (v71 <= 2) {
            goto LABEL_135;
          }
        }
        v70 = *(_QWORD*)(a1 + 1664);
        v69 = *(_QWORD*)(a1 + 1672);
      }
      if (v70 != v69) {
        while ((*(_BYTE*)(v70 + 186) & 1) == 0) {
          v70 += 248;
          if (v70 == v69) {
            return;
          }
        }
      }
      if (v70 != v69) {
        v83 = v70 + 248;
        if (v70 + 248 != v69) {
          do {
            if ((*(_BYTE*)(v83 + 186) & 1) == 0) {
              TelopParts_17cdc40_alt1(v70, (__int64*)v83);
              v70 += 248;
            }
            v83 += 248;
          } while (v83 != v69);
          v69 = *(_QWORD*)(a1 + 1672);
        }
      }
      if (v70 != v69) {
        do {
          v69 -= 248;
          TelopParts_17cbd60_alt2(v69);
        } while (v69 != v70);
        *(_QWORD*)(a1 + 1672) = v70;
      }
    }
  }
}

#pragma GCC visibility pop
