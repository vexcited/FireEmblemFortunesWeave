#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_menu_UnitMakeZoomCamera_vtable[])();
extern __int64 GameData_2264528;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 UnitMakeZoomCamera_Destructor_alt1(__int64 a1) __asm__(
    "UnitMakeZoomCamera_Destructor");
__int64 UnitMakeZoomCamera_DeletingDestructor_alt1(__int64 a1) __asm__(
    "UnitMakeZoomCamera_DeletingDestructor");
__int64 GameRoutine_b3aee0(_QWORD);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern __int128 GameData_1a833b0;
extern __int128 GameData_1a83920;
float GameRoutine_618640(_QWORD, float, float, float, float);
bool UnitMakeZoomCamera_1797ef0(__int64 a1, char a2);
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void UnitMakeZoomCamera_Destructor(__int64 a1);
void UnitMakeZoomCamera_DeletingDestructor(__int64 a1);

void UnitMakeZoomCamera_Destructor(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)a1 = game_menu_UnitMakeZoomCamera_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt1(v1);
  }
  GameData_2264528 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

void UnitMakeZoomCamera_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)a1 = game_menu_UnitMakeZoomCamera_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt1(v1);
  }
  GameData_2264528 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

bool UnitMakeZoomCamera_1797ef0(__int64 a1, char a2)
{
  float v2;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  __int128 v14;
  int v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
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
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  __int128 v62;
  __int128 v63;
  float v64;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  unsigned int v77;
  float v78;
  float v79;
  __int128 v80;
  float v81;
  float v82;
  float v83;
  float v84;

  v2 = 24.0f;
  v4 = 3.0f;
  v5 = 0x1.0000000000000p-1f;
  if ((float)(*(float*)(a1 + 172) + 0x1.0aaaaa0000000p+4f) <
      0x1.4000000000000p+6f) {
    v6 = *(float*)(a1 + 172) + 0x1.0aaaaa0000000p+4f;
  }
  else {
    v6 = 0x1.4000000000000p+6f;
  }
  v7 = 0x1.4ccccc0000000p+0f;
  v8 = 0x1.0a3d700000000p+0f;
  *(float*)(a1 + 172) = v6;
  if ((a2 & 1) != 0) {
    v7 = 0x1.0a3d700000000p+0f;
    v8 = 0x1.4ccccc0000000p+0f;
    v9 = 24.0f;
  }
  else {
    v9 = 14.0f;
  }
  if ((a2 & 1) != 0) {
    v2 = 14.0f;
  }
  v74 = v2;
  v75 = v9;
  if ((a2 & 1) != 0) {
    v10 = 0x1.5333340000000p+2f;
  }
  else {
    v10 = 3.0f;
  }
  if ((a2 & 1) == 0) {
    v4 = 0x1.5333340000000p+2f;
  }
  v78 = v10;
  v76 = v4;
  if ((a2 & 1) != 0) {
    v11 = 0x1.0000000000000p-1f;
  }
  else {
    v11 = 0.0f;
  }
  if ((a2 & 1) != 0) {
    v5 = 0.0f;
  }
  v83 = v5;
  v84 = v11;
  if (*(_BYTE*)(a1 + 168) == 1) {
    if ((a2 & 1) != 0) {
      v12 = 0x1.7ffffe0000000p-1f;
    }
    else {
      v12 = 0x1.8ccccc0000000p+0f;
    }
    if ((a2 & 1) != 0) {
      v13 = 0x1.8ccccc0000000p+0f;
    }
    else {
      v13 = 0x1.7ffffe0000000p-1f;
    }
    v14 = GameData_1a83920;
    *(float*)&v15 = -0x1.a666660000000p+0f;
  }
  else {
    if ((a2 & 1) != 0) {
      v12 = 0x1.5c28f20000000p-1f;
    }
    else {
      v12 = 0x1.7ae1460000000p+0f;
    }
    if ((a2 & 1) != 0) {
      v13 = 0x1.7ae1460000000p+0f;
    }
    else {
      v13 = 0x1.5c28f20000000p-1f;
    }
    v14 = GameData_1a833b0;
    *(float*)&v15 = -0x1.b333340000000p+0f;
  }
  v72 = v12;
  v80 = v14;
  v16 = *(float*)&v15;
  v17 = *(float*)(*(_QWORD*)(a1 + 152) + 68LL);
  v18 = GameRoutine_618640(5, v8, v7, v6, 0x1.4000000000000p+6f);
  v19 = (float)(v17 * 0x1.1df46a0000000p-6f) +
        (float)(roundf((float)(v17 * 0x1.1df46a0000000p-6f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  v20 = -0x1.921fb60000000p+1f - v19;
  if (v19 >= -0x1.921fb60000000p+0f) {
    v20 = v19;
  }
  if (v19 > 0x1.921fb60000000p+0f) {
    v21 = 0x1.921fb60000000p+1f - v19;
  }
  else {
    v21 = v20;
  }
  v22 = *((float*)GameData_212c190 + 1);
  v23 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v24 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v25 = -v23;
  v71 = v22;
  v69 = -v23;
  v70 = -*(float*)GameData_212c190;
  v26 = -(float)(v23 - (float)((float)(v22 - (float)(*(float*)GameData_212c190 *
                                                     (float)(v21 * v21))) *
                               (float)(v21 * v21)));
  v27 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  v28 = -v27;
  v67 = -v27;
  v68 = v24;
  v29 =
      *(float*)&v80 +
      (float)((float)(v21 *
                      (float)((float)((float)-(
                                          float)(v27 -
                                                 (float)((float)(v24 +
                                                                 (float)(v26 *
                                                                         (float)(v21 *
                                                                                 v21))) *
                                                         (float)(v21 * v21))) *
                                      (float)(v21 * v21)) +
                              1.0f)) *
              v16);
  v30 = (float)((float)(v17 + -0x1.6800000000000p+6f) * 0x1.1df46a0000000p-6f) +
        (float)(roundf((float)((float)(v17 + -0x1.6800000000000p+6f) *
                               0x1.1df46a0000000p-6f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  v31 = -0x1.921fb60000000p+1f - v30;
  if (v30 >= -0x1.921fb60000000p+0f) {
    v31 = v30;
  }
  if (v30 > 0x1.921fb60000000p+0f) {
    v32 = 0x1.921fb60000000p+1f - v30;
  }
  else {
    v32 = v31;
  }
  v82 =
      v29 +
      (float)((float)(v32 *
                      (float)((float)((float)(v28 +
                                              (float)((float)(v24 +
                                                              (float)((float)(v25 +
                                                                              (float)((float)(v22 +
                                                                                              (float)((float)-*(
                                                                                                          float*)
                                                                                                          GameData_212c190 *
                                                                                                      (float)(v32 *
                                                                                                              v32))) *
                                                                                      (float)(v32 *
                                                                                              v32))) *
                                                                      (float)(v32 *
                                                                              v32))) *
                                                      (float)(v32 * v32))) *
                                      (float)(v32 * v32)) +
                              1.0f)) *
              v18);
  if (v19 < -0x1.921fb60000000p+0f) {
    v33 = -1.0f;
  }
  else {
    v33 = 1.0f;
  }
  v34 = -0x1.921fb60000000p+1f - v19;
  if (v19 >= -0x1.921fb60000000p+0f) {
    v34 = v19;
  }
  if (v19 > 0x1.921fb60000000p+0f) {
    v35 = 0x1.921fb60000000p+1f - v19;
  }
  else {
    v35 = v34;
  }
  v36 = *(float*)GameData_212c188;
  v37 = *((float*)GameData_212c188 + 1);
  if (v19 > 0x1.921fb60000000p+0f) {
    v38 = -1.0f;
  }
  else {
    v38 = v33;
  }
  v39 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v40 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v41 = v35 * v35;
  v42 = -v36;
  v43 = -v39;
  v66 = -v36;
  v44 = -(float)(v39 - (float)((float)(v37 - (float)(v36 * v41)) * v41));
  v45 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  v46 = -v45;
  v47 =
      *((float*)&v80 + 2) +
      (float)((float)(v38 *
                      (float)((float)((float)-(
                                          float)(v45 -
                                                 (float)((float)(v40 +
                                                                 (float)(v44 *
                                                                         v41)) *
                                                         v41)) *
                                      v41) +
                              1.0f)) *
              v16);
  if (v30 < -0x1.921fb60000000p+0f) {
    v48 = -1.0f;
  }
  else {
    v48 = 1.0f;
  }
  v49 = -0x1.921fb60000000p+1f - v30;
  if (v30 >= -0x1.921fb60000000p+0f) {
    v49 = v30;
  }
  if (v30 > 0x1.921fb60000000p+0f) {
    v50 = 0x1.921fb60000000p+1f - v30;
  }
  else {
    v50 = v49;
  }
  if (v30 > 0x1.921fb60000000p+0f) {
    v51 = -1.0f;
  }
  else {
    v51 = v48;
  }
  v81 =
      v47 +
      (float)((float)(v51 *
                      (float)((float)((float)(v46 +
                                              (float)((float)(v40 +
                                                              (float)((float)(v43 +
                                                                              (float)((float)(v37 +
                                                                                              (float)(v42 *
                                                                                                      (float)(v50 *
                                                                                                              v50))) *
                                                                                      (float)(v50 *
                                                                                              v50))) *
                                                                      (float)(v50 *
                                                                              v50))) *
                                                      (float)(v50 * v50))) *
                                      (float)(v50 * v50)) +
                              1.0f)) *
              v18);
  v73 = GameRoutine_618640(5, v72, v13, *(float*)(a1 + 172),
                           0x1.4000000000000p+6f);
  v52 = GameRoutine_618640(5, v74, v75, *(float*)(a1 + 172),
                           0x1.4000000000000p+6f);
  v53 = GameRoutine_618640(5, v78, v76, *(float*)(a1 + 172),
                           0x1.4000000000000p+6f);
  v54 = (float)((float)(v17 + v52) * 0x1.1df46a0000000p-6f) +
        (float)(roundf((float)((float)(v17 + v52) * 0x1.1df46a0000000p-6f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  v55 = -0x1.921fb60000000p+1f - v54;
  if (v54 >= -0x1.921fb60000000p+0f) {
    v55 = v54;
  }
  if (v54 > 0x1.921fb60000000p+0f) {
    v56 = 0x1.921fb60000000p+1f - v54;
  }
  else {
    v56 = v55;
  }
  v79 =
      v82 +
      (float)((float)(v56 *
                      (float)((float)((float)(v67 +
                                              (float)((float)(v68 +
                                                              (float)((float)(v69 +
                                                                              (float)((float)(v71 +
                                                                                              (float)(v70 *
                                                                                                      (float)(v56 *
                                                                                                              v56))) *
                                                                                      (float)(v56 *
                                                                                              v56))) *
                                                                      (float)(v56 *
                                                                              v56))) *
                                                      (float)(v56 * v56))) *
                                      (float)(v56 * v56)) +
                              1.0f)) *
              v53);
  if (v54 < -0x1.921fb60000000p+0f) {
    v57 = -1.0f;
  }
  else {
    v57 = 1.0f;
  }
  v58 = -0x1.921fb60000000p+1f - v54;
  if (v54 >= -0x1.921fb60000000p+0f) {
    v58 = v54;
  }
  if (v54 > 0x1.921fb60000000p+0f) {
    v59 = 0x1.921fb60000000p+1f - v54;
  }
  else {
    v59 = v58;
  }
  if (v54 > 0x1.921fb60000000p+0f) {
    v60 = -1.0f;
  }
  else {
    v60 = v57;
  }
  *(float*)&v77 =
      v81 +
      (float)((float)(v60 *
                      (float)((float)((float)(v46 +
                                              (float)((float)(v40 +
                                                              (float)((float)(v43 +
                                                                              (float)((float)(v37 +
                                                                                              (float)(v66 *
                                                                                                      (float)(v59 *
                                                                                                              v59))) *
                                                                                      (float)(v59 *
                                                                                              v59))) *
                                                                      (float)(v59 *
                                                                              v59))) *
                                                      (float)(v59 * v59))) *
                                      (float)(v59 * v59)) +
                              1.0f)) *
              v53);
  v61 = GameRoutine_618640(5, v84, v83, *(float*)(a1 + 172),
                           0x1.4000000000000p+6f);
  *(_QWORD*)&v62 = __PAIR64__(LODWORD(v73), LODWORD(v82));
  *((_QWORD*)&v62 + 1) = LODWORD(v81);
  *(_OWORD*)(*(_QWORD*)(a1 + 152) + 32LL) = v62;
  *(float*)&v63 = v79;
  *((float*)&v63 + 1) = v73 + v61;
  *((_QWORD*)&v63 + 1) = v77;
  *(_OWORD*)(*(_QWORD*)(a1 + 152) + 16LL) = v63;
  GameRoutine_b3aee0(*(_QWORD*)(a1 + 152));
  v64 = *(float*)(a1 + 172);
  if (v64 >= 0x1.4000000000000p+6f) {
    *(_DWORD*)(a1 + 172) = 0;
  }
  return v64 >= 0x1.4000000000000p+6f;
}

#pragma GCC visibility pop
