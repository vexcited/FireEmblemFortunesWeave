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
  bool v8;
  char v9;
  float v10;
  float v11;
  __int64 v12;
  int v13;
  int v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  __int64 v19;
  bool v20;
  char v21;
  float v22;
  float v23;
  __int64 v24;
  int v25;
  int v26;
  __int64 v27;
  float v28;
  float v29;
  float v30;
  __int64 v31;
  char v32;
  float v33;
  float v34;
  __int64 v35;
  long double v36;
  float v37;
  float v38;
  float v39;
  double v40;
  int v41;
  int v42;
  int v43;
  int v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  char v52;
  bool v53;
  float v54;
  int v55;
  float v56;
  int v57;
  __int64 v58;
  __int64 v59;
  char v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;
  int v65;
  __int64 v66;
  int v67;
  __int64 v68;
  __int64 v69;
  char v70;
  bool v71;
  float v72;
  int v73;
  float v74;
  int v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  int v79;
  float v80;
  int v81;

  v1 = *(_DWORD*)(a1 + 1692);
  v2 = a1 + 272;
  if (v1 > 2) {
    v1 -= 3;
  }
  v4 = v2 + 456LL * v1;
  GameRoutine_17ca800(v4);
  v5 = game_g_frame_clock_ptr[0];
  v6 = 0x1.e000000000000p+5 / (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
  if (v6 <= 0.0) {
    v7 = -0x1.119ce00000000p-6;
  }
  else {
    v7 = v6 * -0x1.119ce00000000p-6;
  }
  *(float*)(a1 + 1704) =
      fmaxf(*(float*)(a1 + 1704) + (float)(v7 * 0x1.f400000000000p+9), 0.0);
  *(float*)(a1 + 1700) = GameRoutine_618640(0, 0.0, COERCE_DOUBLE(1115815936));
  if (GameData_21f3d10 != 0 && *(_BYTE*)(GameData_21f3d10 + 9) == 1 &&
      (*(_DWORD*)(GameData_21f3d10 + 136) == 1 ? (v8 = *GameData_212ea58 == 0)
                                               : (v8 = false),
       v8 && GameData_225ca88 != 0)) {
    v9 = LayoutAccessor_155ea30(GameData_225ca88 + 176);
  }
  else {
    v9 = 0;
  }
  v10 = *(float*)(a1 + 1720);
  if (*(_BYTE*)(a1 + 1690) != (v9 & 1)) {
    *(float*)(a1 + 1712) = v10;
    *(_BYTE*)(a1 + 1690) = v9 & 1;
    v11 = -0x1.7000000000000p+6;
    *(_DWORD*)(a1 + 1708) = 1128792064;
    if ((v9 & 1) == 0) {
      v11 = 0.0;
    }
    *(float*)(a1 + 1716) = v11;
  }
  v12 = *(_QWORD*)(v4 + 8);
  v79 = 0;
  v81 = 0;
  v80 = (float)(v10 + 0x1.ee00000000000p+8) - *(float*)(a1 + 1700);
  ui_LayoutAccessor_SetTranslate(v12, &v79);
  v13 = *(_DWORD*)(a1 + 1692);
  if (v13 > 1) {
    v14 = -2;
  }
  else {
    v14 = 1;
  }
  v15 = v2 + 456LL * (v14 + v13);
  GameRoutine_17ca800(v15);
  v16 = 0x1.e000000000000p+5 / (float)*(int*)(*v5 + 476);
  if (v16 <= 0.0) {
    v17 = -0x1.119ce00000000p-6;
  }
  else {
    v17 = v16 * -0x1.119ce00000000p-6;
  }
  *(float*)(a1 + 1704) =
      fmaxf(*(float*)(a1 + 1704) + (float)(v17 * 0x1.f400000000000p+9), 0.0);
  v18 = GameRoutine_618640(0, 0.0, COERCE_DOUBLE(1115815936));
  v19 = GameData_21f3d10;
  *(float*)(a1 + 1700) = v18;
  if (v19 != 0 && *(_BYTE*)(v19 + 9) == 1 &&
      (*(_DWORD*)(v19 + 136) == 1 ? (v20 = *GameData_212ea58 == 0)
                                  : (v20 = false),
       v20 && GameData_225ca88 != 0)) {
    v21 = LayoutAccessor_155ea30(GameData_225ca88 + 176);
  }
  else {
    v21 = 0;
  }
  v22 = *(float*)(a1 + 1720);
  if (*(_BYTE*)(a1 + 1690) != (v21 & 1)) {
    *(float*)(a1 + 1712) = v22;
    *(_BYTE*)(a1 + 1690) = v21 & 1;
    v23 = -0x1.7000000000000p+6;
    *(_DWORD*)(a1 + 1708) = 1128792064;
    if ((v21 & 1) == 0) {
      v23 = 0.0;
    }
    *(float*)(a1 + 1716) = v23;
  }
  v24 = *(_QWORD*)(v15 + 8);
  v79 = 0;
  v81 = 0;
  v80 = (float)((float)(v22 + 0x1.ee00000000000p+8) - *(float*)(a1 + 1700)) +
        -0x1.0400000000000p+6;
  ui_LayoutAccessor_SetTranslate(v24, &v79);
  v25 = *(_DWORD*)(a1 + 1692);
  if (v25 > 0) {
    v26 = -1;
  }
  else {
    v26 = 2;
  }
  v27 = v2 + 456LL * (v26 + v25);
  GameRoutine_17ca800(v27);
  v28 = 0x1.e000000000000p+5 / (float)*(int*)(*v5 + 476);
  if (v28 <= 0.0) {
    v29 = -0x1.119ce00000000p-6;
  }
  else {
    v29 = v28 * -0x1.119ce00000000p-6;
  }
  *(float*)(a1 + 1704) =
      fmaxf(*(float*)(a1 + 1704) + (float)(v29 * 0x1.f400000000000p+9), 0.0);
  v30 = GameRoutine_618640(0, 0.0, COERCE_DOUBLE(1115815936));
  v31 = GameData_21f3d10;
  *(float*)(a1 + 1700) = v30;
  if (v31 == 0 || *(_BYTE*)(v31 + 9) != 1) {
  LABEL_52:
    v32 = 0;
    goto LABEL_53;
  }
  v32 = 0;
  if (*(_DWORD*)(v31 + 136) == 1 && GameData_2203490 == 0) {
    if (GameData_225ca88 != 0) {
      v32 = LayoutAccessor_155ea30(GameData_225ca88 + 176);
      goto LABEL_53;
    }
    goto LABEL_52;
  }
LABEL_53:
  v33 = *(float*)(a1 + 1720);
  if (*(_BYTE*)(a1 + 1690) != (v32 & 1)) {
    *(float*)(a1 + 1712) = v33;
    *(_BYTE*)(a1 + 1690) = v32 & 1;
    v34 = -0x1.7000000000000p+6;
    *(_DWORD*)(a1 + 1708) = 1128792064;
    if ((v32 & 1) == 0) {
      v34 = 0.0;
    }
    *(float*)(a1 + 1716) = v34;
  }
  v35 = *(_QWORD*)(v27 + 8);
  v79 = 0;
  v81 = 0;
  v80 = (float)((float)(v33 + 0x1.ee00000000000p+8) - *(float*)(a1 + 1700)) +
        -0x1.0400000000000p+7;
  ui_LayoutAccessor_SetTranslate(v35, &v79);
  LODWORD(v36) = *(_DWORD*)(a1 + 1708);
  if (*(float*)&v36 > 0.0) {
    v37 = 0x1.e000000000000p+5 / (float)*(int*)(*v5 + 476);
    if (v37 <= 0.0) {
      v38 = -0x1.119ce00000000p-6;
    }
    else {
      v38 = v37 * -0x1.119ce00000000p-6;
    }
    v39 = fmaxf(*(float*)&v36 + (float)(v38 * 0x1.f400000000000p+9), 0.0);
    LODWORD(v36) = *(_DWORD*)(a1 + 1712);
    *(_QWORD*)&v40 = *(unsigned int*)(a1 + 1716);
    *(float*)(a1 + 1708) = v39;
    *(float*)&v36 = GameRoutine_618640(11, *(double*)&v36, v40);
    *(_DWORD*)(a1 + 1720) = LODWORD(v36);
  }
  v41 = *(_DWORD*)(a1 + 1696);
  v42 = v41 - 1;
  if (v41 >= 1) {
    v43 = *(_DWORD*)(a1 + 1692);
    if (*(_DWORD*)(a1 + 456LL * v43 + 720) == 0) {
      *(_DWORD*)(a1 + 1696) = v42;
      *(_QWORD*)(a1 + 1700) = 0x4416000042820000LL;
      if (v43 > 1) {
        v44 = -2;
      }
      else {
        v44 = 1;
      }
      *(_DWORD*)(a1 + 1692) = v44 + v43;
      v41 = v42;
    }
  }
  if (*(_BYTE*)(a1 + 1689) == 1) {
    if (v41 > 0) {
      return;
    }
    *(_BYTE*)(a1 + 1689) = 0;
    *(_QWORD*)(a1 + 1700) = 0;
  }
  v45 = *(_QWORD*)(a1 + 1640);
  v46 = *(_QWORD*)(a1 + 1648);
  if (v45 != v46 && v41 <= 2) {
    do {
      if (*(int*)(a1 + 1696) <= 2) {
        if (game_ProcFadeView_instance_ == 0) {
          goto LABEL_87;
        }
        v47 = game_ProcFadeView_instance_ +
              ((unsigned __int64)*(
                   unsigned __int8*)(game_ProcFadeView_instance_ + 480)
               << 6);
        if (*(float*)(v47 + 172) == *(float*)(v47 + 168)) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)(v47 + 160) + 16LL))(v47 +
                                                                         160);
        }
        else {
          v36 = *(long double*)(v47 + 208);
        }
        LODWORD(v36) = HIDWORD(v36);
        if (*((float*)&v36 + 3) != 1.0 ||
            (*(__n128*)& v36 = ((__n128 (*)(unsigned __int64, float)) *
                                (_QWORD*)(*(_QWORD*)(v47 + 160) + 16LL))(
                 v47 + 160, *((float*)&v36 + 3)),
             LODWORD(v36) = HIDWORD(v36), *((float*)&v36 + 3) != 1.0)) {
          if (game_ProcFadeView_instance_ == 0 ||
              (v48 = game_ProcFadeView_instance_ +
                     ((unsigned __int64)*(
                          unsigned __int8*)(game_ProcFadeView_instance_ + 480)
                      << 6),
               LODWORD(v36) = *(_DWORD*)(v48 + 172),
               *(float*)&v36 == *(float*)(v48 + 168))) {
          LABEL_87:
            if (*(int*)(a1 + 1736) < 1 ||
                GameData_21f8018 == 0 &&
                    (unsigned int)(*(_DWORD*)v45 - 3) <= 1) {
              v49 = *(_DWORD*)(a1 + 1696) + *(_DWORD*)(a1 + 1692);
              if (v49 > 2) {
                v49 -= 3;
              }
              v50 = v2 + 456LL * v49;
              GameRoutine_17ca960(v50, v45);
              v51 = *(_QWORD*)(v50 + 8);
              v52 = GameData_21f3d10;
              if (GameData_21f3d10 != 0) {
                if (*(_BYTE*)(GameData_21f3d10 + 9) == 1 &&
                    (*(_DWORD*)(GameData_21f3d10 + 136) == 1
                         ? (v53 = *GameData_212ea58 == 0)
                         : (v53 = false),
                     v53)) {
                  v52 = GameData_225ca88;
                  if (GameData_225ca88 != 0) {
                    v58 = *(_QWORD*)(v50 + 8);
                    v52 = LayoutAccessor_155ea30(GameData_225ca88 + 176);
                    v51 = v58;
                  }
                }
                else {
                  v52 = 0;
                }
              }
              v54 = *(float*)(a1 + 1720);
              v55 = v52 & 1;
              if (*(unsigned __int8*)(a1 + 1690) != v55) {
                *(float*)(a1 + 1712) = v54;
                *(_BYTE*)(a1 + 1690) = v55;
                v56 = -0x1.7000000000000p+6;
                *(_DWORD*)(a1 + 1708) = 1128792064;
                if (v55 == 0) {
                  v56 = 0.0;
                }
                *(float*)(a1 + 1716) = v56;
              }
              v79 = 0;
              v81 = 0;
              v80 = (float)((float)(v54 + 0x1.ee00000000000p+8) +
                            *(float*)(a1 + 1700)) +
                    (float)((float)*(int*)(a1 + 1696) * -0x1.0400000000000p+6);
              ui_LayoutAccessor_SetTranslate(v51, &v79);
              v57 = *(_DWORD*)(a1 + 1696);
              *(_DWORD*)(a1 + 1696) = v57 + 1;
              if (v57 >= 2) {
                *(_BYTE*)(a1 + 1689) = 1;
              }
              *(_BYTE*)(v45 + 186) = 1;
            }
          }
        }
      }
      v45 += 248;
    } while (v45 != v46);
    v45 = *(_QWORD*)(a1 + 1640);
    v46 = *(_QWORD*)(a1 + 1648);
  }
  if (v45 != v46) {
    while ((*(_BYTE*)(v45 + 186) & 1) == 0) {
      v45 += 248;
      if (v45 == v46) {
        goto LABEL_120;
      }
    }
  }
  if (v45 != v46) {
    v59 = v45 + 248;
    if (v45 + 248 != v46) {
      do {
        if ((*(_BYTE*)(v59 + 186) & 1) == 0) {
          TelopParts_17cdc40(v45, v59);
          v45 += 248;
        }
        v59 += 248;
      } while (v59 != v46);
      v46 = *(_QWORD*)(a1 + 1648);
    }
  }
  if (v45 != v46) {
    do {
      v46 -= 248;
      TelopParts_17cbd60_alt1(v46, v36);
    } while (v46 != v45);
    *(_QWORD*)(a1 + 1648) = v45;
  }
LABEL_120:
  v60 = game_ProcFadeView_instance_;
  if (game_ProcFadeView_instance_ != 0) {
    v61 = game_ProcFadeView_instance_ +
          ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                 480)
           << 6);
    if (*(float*)(v61 + 172) == *(float*)(v61 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v61 + 160) + 16LL))(v61 + 160);
    }
    else {
      v36 = *(long double*)(v61 + 208);
    }
    LODWORD(v36) = HIDWORD(v36);
    if (*((float*)&v36 + 3) == 1.0) {
      *(__n128*)&v36 = ((__n128 (*)(unsigned __int64, float)) *
                        (_QWORD*)(*(_QWORD*)(v61 + 160) + 16LL))(
          v61 + 160, *((float*)&v36 + 3));
      LODWORD(v36) = HIDWORD(v36);
      if (*((float*)&v36 + 3) == 1.0) {
        return;
      }
    }
    v60 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      v62 = game_ProcFadeView_instance_ +
            ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
             << 6);
      LODWORD(v36) = *(_DWORD*)(v62 + 172);
      v60 = *(float*)&v36 != *(float*)(v62 + 168);
    }
  }
  if ((v60 & 1) == 0 && *(int*)(a1 + 1736) <= 0 && *(_BYTE*)(a1 + 1688) == 1) {
    v63 = *(_QWORD*)(a1 + 1672);
    v64 = *(_QWORD*)(a1 + 1664);
    if (v63 == v64) {
      *(_BYTE*)(a1 + 1688) = 0;
    }
    else {
      v65 = *(_DWORD*)(a1 + 1696);
      if (v65 <= 2) {
        v66 = v64 + 248;
      LABEL_135:
        v67 = *(_DWORD*)(a1 + 1692) + v65;
        if (v67 > 2) {
          v67 -= 3;
        }
        v68 = v2 + 456LL * v67;
        GameRoutine_17ca960(v68, v66 - 248);
        v69 = *(_QWORD*)(v68 + 8);
        v70 = GameData_21f3d10;
        if (GameData_21f3d10 != 0) {
          if (*(_BYTE*)(GameData_21f3d10 + 9) == 1 &&
              (*(_DWORD*)(GameData_21f3d10 + 136) == 1
                   ? (v71 = *GameData_212ea58 == 0)
                   : (v71 = false),
               v71)) {
            v70 = GameData_225ca88;
            if (GameData_225ca88 != 0) {
              v76 = *(_QWORD*)(v68 + 8);
              v70 = LayoutAccessor_155ea30(GameData_225ca88 + 176);
              v69 = v76;
            }
          }
          else {
            v70 = 0;
          }
        }
        v72 = *(float*)(a1 + 1720);
        v73 = v70 & 1;
        if (*(unsigned __int8*)(a1 + 1690) != v73) {
          *(float*)(a1 + 1712) = v72;
          *(_BYTE*)(a1 + 1690) = v73;
          v74 = -0x1.7000000000000p+6;
          *(_DWORD*)(a1 + 1708) = 1128792064;
          if (v73 == 0) {
            v74 = 0.0;
          }
          *(float*)(a1 + 1716) = v74;
        }
        v79 = 0;
        v81 = 0;
        v80 = (float)((float)(v72 + 0x1.ee00000000000p+8) +
                      *(float*)(a1 + 1700)) +
              (float)((float)*(int*)(a1 + 1696) * -0x1.0400000000000p+6);
        ui_LayoutAccessor_SetTranslate(v69, &v79);
        v75 = *(_DWORD*)(a1 + 1696);
        *(_DWORD*)(a1 + 1696) = v75 + 1;
        if (v75 >= 2) {
          *(_BYTE*)(a1 + 1689) = 1;
        }
        snd_Fade_Fade_10c830(&v79, 0.0);
        snd_play_ff2d0((void*)(&v78), "VIB_SideQuest", "VIB_SideQuest", &v79, 0,
                       65537, 0, 0.0, 1.0);
        snd_Fade_Destroy_Fade(&v79);
        *(_BYTE*)(a1 + 1688) = 0;
        *(_BYTE*)(v66 - 62) = 1;
        while (v66 != v63) {
          v65 = *(_DWORD*)(a1 + 1696);
          v66 += 248;
          if (v65 <= 2) {
            goto LABEL_135;
          }
        }
        v64 = *(_QWORD*)(a1 + 1664);
        v63 = *(_QWORD*)(a1 + 1672);
      }
      if (v64 != v63) {
        while ((*(_BYTE*)(v64 + 186) & 1) == 0) {
          v64 += 248;
          if (v64 == v63) {
            return;
          }
        }
      }
      if (v64 != v63) {
        v77 = v64 + 248;
        if (v64 + 248 != v63) {
          do {
            if ((*(_BYTE*)(v77 + 186) & 1) == 0) {
              TelopParts_17cdc40(v64, v77);
              v64 += 248;
            }
            v77 += 248;
          } while (v77 != v63);
          v63 = *(_QWORD*)(a1 + 1672);
        }
      }
      if (v64 != v63) {
        do {
          v63 -= 248;
          TelopParts_17cbd60_alt1(v63, v36);
        } while (v63 != v64);
        *(_QWORD*)(a1 + 1672) = v64;
      }
    }
  }
}

#pragma GCC visibility pop
