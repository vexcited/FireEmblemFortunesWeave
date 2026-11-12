#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19910e0(_QWORD);
__int64 GameRoutine_1999d60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_55c640(_QWORD);
__int64 GameRoutine_567cd0(_QWORD);
__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_ad1740(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ad4040(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_map_MapColorPalette_g_texture_archives;
extern __int64* game_g_frame_clock_ptr[3];
__int64 Processing_a95880();
__int64**
Processing_1991030_alt1(__int64** result) __asm__("Processing_1991030");
__int64 Processing_1994f10();
_QWORD* Processing_1998de0_alt1(_QWORD* result) __asm__("Processing_1998de0");
__int64 Processing_199a300(__int64 a1);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 GameRoutine_19910e0_alt1(__int64) __asm__("GameRoutine_19910e0");
__int64 GameRoutine_1999d60_alt1(__int64,
                                 __int64) __asm__("GameRoutine_1999d60");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Processing_1991030(__int64** a1);
void Processing_1998de0(__int64* a1);

__int64 Processing_a95880()
{
  __int64* v0;
  __int64 v1;
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
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD v32[2];

  v0 = game_g_frame_clock_ptr[0];
  v1 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13408);
  v32[0] = "Assign";
  v32[1] = 6;
  v2 = GameRoutine_ad4040(v1 + 56, v32);
  if (v2 == 0 || *(_QWORD*)(v2 + 40) == 0) {
    GameRoutine_ad1740(v1, "Assign", 6);
  }
  v3 = *(_QWORD*)(*v0 + 13408);
  v32[0] = "base";
  v32[1] = 4;
  v4 = GameRoutine_ad4040(v3 + 56, v32);
  if (v4 == 0 || *(_QWORD*)(v4 + 40) == 0) {
    GameRoutine_ad1740(v3, "base", 4);
  }
  v5 = *(_QWORD*)(*v0 + 13408);
  v32[0] = "Chara_Dress";
  v32[1] = 11;
  v6 = GameRoutine_ad4040(v5 + 56, v32);
  if (v6 == 0 || *(_QWORD*)(v6 + 40) == 0) {
    GameRoutine_ad1740(v5, "Chara_Dress", 11);
  }
  v7 = *(_QWORD*)(*v0 + 13408);
  v32[0] = "Chara_Skin";
  v32[1] = 10;
  v8 = GameRoutine_ad4040(v7 + 56, v32);
  if (v8 == 0 || *(_QWORD*)(v8 + 40) == 0) {
    GameRoutine_ad1740(v7, "Chara_Skin", 10);
  }
  v9 = *(_QWORD*)(*v0 + 13408);
  v32[0] = "Chara_Others";
  v32[1] = 12;
  v10 = GameRoutine_ad4040(v9 + 56, v32);
  if (v10 == 0 || *(_QWORD*)(v10 + 40) == 0) {
    GameRoutine_ad1740(v9, "Chara_Others", 12);
  }
  v11 = *(_QWORD*)(*v0 + 13408);
  v32[0] = "decal";
  v32[1] = 5;
  v12 = GameRoutine_ad4040(v11 + 56, v32);
  if (v12 == 0 || *(_QWORD*)(v12 + 40) == 0) {
    GameRoutine_ad1740(v11, "decal", 5);
  }
  v13 = *(_QWORD*)(*v0 + 13408);
  v32[0] = "effect";
  v32[1] = 6;
  v14 = GameRoutine_ad4040(v13 + 56, v32);
  if (v14 == 0 || *(_QWORD*)(v14 + 40) == 0) {
    GameRoutine_ad1740(v13, "effect", 6);
  }
  v15 = *(_QWORD*)(*v0 + 13408);
  v32[0] = "face";
  v32[1] = 4;
  v16 = GameRoutine_ad4040(v15 + 56, v32);
  if (v16 == 0 || *(_QWORD*)(v16 + 40) == 0) {
    GameRoutine_ad1740(v15, "face", 4);
  }
  v17 = *(_QWORD*)(*v0 + 13408);
  v32[0] = "filter";
  v32[1] = 6;
  v18 = GameRoutine_ad4040(v17 + 56, v32);
  if (v18 == 0 || *(_QWORD*)(v18 + 40) == 0) {
    GameRoutine_ad1740(v17, "filter", 6);
  }
  v19 = *(_QWORD*)(*v0 + 13408);
  v32[0] = "map";
  v32[1] = 3;
  v20 = GameRoutine_ad4040(v19 + 56, v32);
  if (v20 == 0 || *(_QWORD*)(v20 + 40) == 0) {
    GameRoutine_ad1740(v19, "map", 3);
  }
  v21 = *(_QWORD*)(*v0 + 13408);
  v32[0] = "ui";
  v32[1] = 2;
  v22 = GameRoutine_ad4040(v21 + 56, v32);
  if (v22 == 0 || *(_QWORD*)(v22 + 40) == 0) {
    GameRoutine_ad1740(v21, "ui", 2);
  }
  v23 = *(_QWORD*)(*v0 + 13408);
  v32[0] = "Lighting";
  v32[1] = 8;
  v24 = GameRoutine_ad4040(v23 + 56, v32);
  if (v24 == 0 || *(_QWORD*)(v24 + 40) == 0) {
    GameRoutine_ad1740(v23, "Lighting", 8);
  }
  v25 = *(_QWORD*)(*v0 + 13408);
  v32[0] = "Probe";
  v32[1] = 5;
  v26 = GameRoutine_ad4040(v25 + 56, v32);
  if (v26 == 0 || *(_QWORD*)(v26 + 40) == 0) {
    GameRoutine_ad1740(v25, "Probe", 5);
  }
  v27 = *(_QWORD*)(*v0 + 13408);
  v32[0] = "ImageProcessing";
  v32[1] = 15;
  v28 = GameRoutine_ad4040(v27 + 56, v32);
  if (v28 == 0 || *(_QWORD*)(v28 + 40) == 0) {
    GameRoutine_ad1740(v27, "ImageProcessing", 15);
  }
  v29 = *(_QWORD*)(*v0 + 13408);
  v32[0] = "primitive";
  v32[1] = 9;
  v30 = GameRoutine_ad4040(v29 + 56, v32);
  if (v30 == 0 || *(_QWORD*)(v30 + 40) == 0) {
    v30 = GameRoutine_ad1740(v29, "primitive", 9);
  }
  return Processing_1994f10(v30);
}

void Processing_1991030(__int64** a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v1 = *a1;
  *a1 = nullptr;
  if (v1 != nullptr) {
    v2 = *v1;
    *v1 = 0;
    if (v2 != 0) {
      Processing_199a300(v2);
      v3 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v3, v2);
    }
    v4 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v4,
                                       (__int64)v1);
  }
}

__int64 Processing_1994f10()
{
  __int64 v0;
  __int64* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v0 = *game_g_frame_clock_ptr[0];
  v1 = (__int64*)fw_memory_g_heap_manager_ptr;
  v2 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  v3 = fw_memory_HeapManager_Allocate_alt1(*v1, 248768, 16, 0);
  GameRoutine_1999d60_alt1(v3, v0);
  v4 = v3;
  *v2 = v3;
  v5 = (__int64*)game_map_MapColorPalette_g_texture_archives;
  game_map_MapColorPalette_g_texture_archives = (__int64)v2;
  if (v5 != nullptr) {
    v6 = *v5;
    *v5 = 0;
    if (v6 != 0) {
      Processing_199a300(v6);
      v7 = 128;
      if (*(_QWORD*)(*v1 + 200) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v1 + v7, v6);
    }
    v8 = 128;
    if (*(_QWORD*)(*v1 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v1 + v8, (__int64)v5);
    v4 = *(_QWORD*)game_map_MapColorPalette_g_texture_archives;
  }
  return GameRoutine_19910e0_alt1(v4);
}

void Processing_1998de0(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = *a1;
  v2 = a1[1];
  if (*a1 != v2) {
    v4 = fw_memory_g_heap_manager_ptr;
    do {
      if ((*(_BYTE*)(v2 - 1216) & 1) != 0) {
        v8 = *(_QWORD*)(v2 - 1200);
        if (v8 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v9, v8);
        }
      }
      v6 = *(_QWORD*)(v2 - 1368);
      if (v6 != 0) {
        v10 = *(_QWORD*)(v2 - 1360);
        if (v6 == v10) {
          goto LABEL_4;
        }
        do {
          if ((*(_BYTE*)(v10 - 32) & 1) != 0) {
            v11 = *(_QWORD*)(v10 - 16);
            if (v11 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
                v12 = 128;
              }
              else {
                v12 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v12, v11);
            }
          }
          v10 -= 40;
        } while (v10 != v6);
        v5 = *(_QWORD*)(v2 - 1368);
        *(_QWORD*)(v2 - 1360) = v6;
        v6 = v5;
        if (v5 != 0) {
        LABEL_4:
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v7 = 128;
          }
          else {
            v7 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v7, v6);
        }
      }
      v2 -= 1440;
    } while (v1 != v2);
  }
  a1[1] = v1;
}

__int64 Processing_199a300(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 i;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
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
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 result;
  __int64 v57;
  __int64 v58;
  __int64 j;
  __int64 v60;

  v2 = (__int64*)(a1 + 248584);
  v3 = *(_QWORD*)(a1 + 248736);
  v4 = fw_memory_g_heap_manager_ptr;
  if (v3 != 0) {
    v5 = *(_QWORD*)(a1 + 248744);
    if (v3 == v5) {
      goto LABEL_12;
    }
    v6 = *(_QWORD*)(a1 + 248744);
    do {
      v7 = *(_BYTE*)(v6 - 40);
      v6 -= 40;
      if ((v7 & 1) != 0) {
        v8 = *(_QWORD*)(v5 - 24);
        if (v8 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v9, v8);
        }
      }
      v5 = v6;
    } while (v6 != v3);
    v10 = v2[19];
    v2[20] = v3;
    v3 = v10;
    if (v10 != 0) {
    LABEL_12:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v11, v3);
    }
  }
  v12 = (_QWORD*)v2[17];
  if (v12 == (_QWORD*)(a1 + 248688)) {
    v13 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_20;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v12 + v13))((__int64)v12);
LABEL_20:
  v14 = v2[10];
  if (v14 != 0) {
    v2[11] = v14;
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v15, v14);
  }
  v16 = v2[6];
  v17 = (__int64*)(a1 + 133896);
  if (v16 != 0) {
    v18 = v2[7];
    if (v16 == v18) {
      goto LABEL_44;
    }
    do {
      if ((*(_BYTE*)(v18 - 32) & 1) != 0) {
        v19 = *(_QWORD*)(v18 - 16);
        if (v19 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v20 = 128;
          }
          else {
            v20 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v20, v19);
        }
      }
      if ((*(_BYTE*)(v18 - 56) & 1) != 0) {
        v21 = *(_QWORD*)(v18 - 40);
        if (v21 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v22 = 128;
          }
          else {
            v22 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v22, v21);
        }
      }
      v23 = *(_QWORD*)(v18 - 72);
      if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
        std___1___shared_weak_count___release_weak_alt1(v23);
      }
      v18 -= 88;
    } while (v18 != v16);
    v24 = v2[6];
    v2[7] = v16;
    v16 = v24;
    if (v24 != 0) {
    LABEL_44:
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v25, v16);
    }
  }
  v26 = -114688;
  for (i = -114688; i != 0; i += 56) {
    v28 = *v2;
    *v2 = 0;
    if (v28 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v28 + 8LL))(v28);
    }
    v29 = *(v2 - 1);
    *(v2 - 1) = 0;
    if (v29 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v29 + 8LL))(v29);
    }
    v2 -= 7;
  }
  do {
    v30 = *v17;
    *v17 = 0;
    if (v30 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v30 + 8LL))(v30);
    }
    v31 = *(v17 - 1);
    *(v17 - 1) = 0;
    if (v31 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v31 + 8LL))(v31);
    }
    v17 -= 7;
    v26 += 56;
  } while (v26 != 0);
  v32 = *(_QWORD*)(a1 + 19240);
  *(_QWORD*)(a1 + 19240) = 0;
  if (v32 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 8LL))(v32);
  }
  v33 = *(_QWORD*)(a1 + 19232);
  *(_QWORD*)(a1 + 19232) = 0;
  if (v33 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v33 + 8LL))(v33);
  }
  v34 = *(_QWORD*)(a1 + 19216);
  *(_QWORD*)(a1 + 19216) = 0;
  if (v34 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v34 + 8LL))(v34);
  }
  v35 = *(_QWORD*)(a1 + 19208);
  *(_QWORD*)(a1 + 19208) = 0;
  if (v35 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v35 + 8LL))(v35);
  }
  v36 = *(_QWORD*)(a1 + 19168);
  if (v36 != 0) {
    v37 = *(_QWORD*)(a1 + 19184);
    v38 = *(_QWORD*)(a1 + 19192);
    *(_QWORD*)(a1 + 19176) = v36;
    (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v38 + 24LL))(
        v38, v36, v37 - v36, 4);
  }
  v39 = *(_QWORD*)(a1 + 19136);
  if (v39 != 0) {
    v40 = *(_QWORD*)(a1 + 19152);
    v41 = *(_QWORD*)(a1 + 19160);
    *(_QWORD*)(a1 + 19144) = v39;
    (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v41 + 24LL))(
        v41, v39, v40 - v39, 4);
  }
  v42 = *(_QWORD*)(a1 + 19104);
  if (v42 != 0) {
    v43 = *(_QWORD*)(a1 + 19120);
    v44 = *(_QWORD*)(a1 + 19128);
    *(_QWORD*)(a1 + 19112) = v42;
    (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v44 + 24LL))(
        v44, v42, v43 - v42, 4);
  }
  GameRoutine_55c640(a1 + 18912);
  GameRoutine_567cd0(a1 + 18808);
  v45 = *(_QWORD*)(a1 + 18768);
  if (v45 != 0) {
    v46 = *(_QWORD*)(a1 + 18784);
    v47 = *(_QWORD*)(a1 + 18792);
    *(_QWORD*)(a1 + 18776) = v45;
    (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v47 + 24LL))(
        v47, v45, v46 - v45, 4);
  }
  if (*(_QWORD*)(a1 + 18736) != 0) {
    Processing_1998de0((__int64*)(a1 + 18736));
    (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 18760) +
                                                   24LL))(
        *(_QWORD*)(a1 + 18760), *(_QWORD*)(a1 + 18736),
        *(_QWORD*)(a1 + 18752) - *(_QWORD*)(a1 + 18736), 16);
  }
  if ((*(_BYTE*)(a1 + 17520) & 1) != 0) {
    v48 = *(_QWORD*)(a1 + 17536);
    if (v48 != 0) {
      v49 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v49 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v49, v48);
    }
  }
  v50 = *(_QWORD*)(a1 + 17368);
  if (v50 != 0) {
    v51 = *(_QWORD*)(a1 + 17376);
    if (v50 == v51) {
      goto LABEL_92;
    }
    do {
      if ((*(_BYTE*)(v51 - 32) & 1) != 0) {
        v52 = *(_QWORD*)(v51 - 16);
        if (v52 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v53 = 128;
          }
          else {
            v53 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v53, v52);
        }
      }
      v51 -= 40;
    } while (v51 != v50);
    v54 = *(_QWORD*)(a1 + 17368);
    *(_QWORD*)(a1 + 17376) = v50;
    v50 = v54;
    if (v54 != 0) {
    LABEL_92:
      v55 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v55 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v55, v50);
    }
  }
  GameRoutine_604050(a1 + 17152);
  GameRoutine_604050(a1 + 17024);
  GameRoutine_604050(a1 + 16896);
  GameRoutine_604050(a1 + 16768);
  GameRoutine_604050(a1 + 16640);
  result = GameRoutine_604050(a1 + 16512);
  v57 = *(_QWORD*)(a1 + 16504);
  if (v57 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
    result = std___1___shared_weak_count___release_weak_alt1(v57);
  }
  v58 = *(_QWORD*)(a1 + 16488);
  if (v58 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
    result = std___1___shared_weak_count___release_weak_alt1(v58);
  }
  for (j = 16472; j != 88; j -= 16) {
    v60 = *(_QWORD*)(a1 + j);
    if (v60 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v60 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v60 + 16LL))(v60);
      result = std___1___shared_weak_count___release_weak_alt1(v60);
    }
  }
  return result;
}

#pragma GCC visibility pop
