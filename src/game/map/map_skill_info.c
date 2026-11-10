#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1563030(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1563380(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_17cf0c0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPartsLayout(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_Setup_155dda0(_QWORD, _QWORD);
extern __int64 (*GameData_20d91a0[])();
extern __int64 (*GameData_20d9268[])();
extern __int64 (*game_map_MapSkillInfo_vtable[])();
extern __int64 GameData_21ed090;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2265a00;
void __attribute__((noreturn)) GameRoutine_17cf2d0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 MapSkillInfo_Destructor(_QWORD* a1);
__int64 MapSkillInfo_17ce320(__int64 result);
__int64 MapSkillInfo_17ce880(_QWORD* a1);
__int64* MapSkillInfo_17ceb30(__int64* result, _QWORD* a2);
__int64 MapSkillInfo_Unknown5(__int64 result);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 LayoutAccessor_15636c0(_QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_Setup_155dea0(_QWORD, _QWORD);
extern __int64 (*game_map_MapSkillInfo_SkillParts_vtable[])();
__int64 MapSkillInfo_17cecb0(__int64 result);
__int64 MapSkillInfo_17cf0c0(__int64 a1, _QWORD* a2);
__attribute__((swiftcall)) void UnitActor_81d430(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void snd_playAt_ff5f0(PSEUDO_X8, _QWORD, _QWORD,
                                                 _QWORD, _QWORD, _QWORD, _QWORD,
                                                 _QWORD, double, float);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_17cece0(void);
__int64 GameRoutine_18c63a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6fb960(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64* GameData_212d1e0[2];
extern __int64 GameData_21ec7b0;
extern __int64 GameData_21ed098;
__int64 MapSkillInfo_17ce980(__int64 result, __int64 a2, char a3, __int64 a4);

__int64 MapSkillInfo_Destructor(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 result;
  __int64 v28;

  v1 = (_QWORD*)a1[20];
  v2 = (_QWORD*)a1[21];
  *a1 = game_map_MapSkillInfo_vtable;
  a1[1] = GameData_20d91a0;
  while (v2 != v1) {
    v11 = *--v2;
    v10 = v11;
    *v2 = 0;
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
    }
  }
  a1[21] = v1;
  v4 = (_QWORD*)a1[23];
  v5 = (_QWORD*)a1[24];
  while (v5 != v4) {
    v13 = *--v5;
    v12 = v13;
    *v5 = 0;
    if (v13 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
    }
  }
  a1[24] = v4;
  GameRoutine_155e140(a1 + 5);
  v6 = a1[3];
  if (v6 != 0) {
    *(_BYTE*)(v6 + 2376) = 1;
  }
  v7 = a1[4];
  a1[3] = 0;
  a1[4] = 0;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  v8 = (_QWORD*)a1[23];
  if (v8 != nullptr) {
    v9 = (_QWORD*)a1[24];
    if (v8 == v9) {
      goto LABEL_21;
    }
    do {
      v15 = *--v9;
      v14 = v15;
      *v9 = 0;
      if (v15 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
      }
    } while (v9 != v8);
    v16 = (_QWORD*)a1[23];
    a1[24] = v8;
    v8 = v16;
    if (v16 != nullptr) {
    LABEL_21:
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v8);
    }
  }
  v18 = (_QWORD*)a1[20];
  if (v18 != nullptr) {
    v19 = (_QWORD*)a1[21];
    if (v18 == v19) {
      goto LABEL_31;
    }
    do {
      v21 = *--v19;
      v20 = v21;
      *v19 = 0;
      if (v21 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
      }
    } while (v19 != v18);
    v22 = (_QWORD*)a1[20];
    a1[21] = v18;
    v18 = v22;
    if (v22 != nullptr) {
    LABEL_31:
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v18);
    }
  }
  v24 = a1[19];
  a1[19] = 0;
  if (v24 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 8LL))(v24);
  }
  v25 = a1[18];
  a1[18] = 0;
  if (v25 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 8LL))(v25);
  }
  GameRoutine_155e140(a1 + 5);
  v26 = a1[17];
  if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    std___1___shared_weak_count___release_weak(v26);
  }
  GameRoutine_1564060(a1 + 11);
  GameRoutine_1563f90(a1 + 8, a1[9]);
  result = a1[6];
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v28 = a1[4];
  if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    result = std___1___shared_weak_count___release_weak(v28);
  }
  *a1 = GameData_20d9268;
  if ((_QWORD*)GameData_21ed090 == a1) {
    GameData_21ed090 = 0;
    GameData_2265a00 = 0;
  }
  return result;
}

__int64 MapSkillInfo_17ce320(__int64 result)
{
  __int64 v1;
  __int64 v2;
  char* v3;
  __int64 v4;
  char* v5;
  __int64* v6;
  __int64* i;
  __int64 v8;
  char* v9;
  __int64 v10;
  __int64* j;
  __int64* v12;
  __int64 v13;
  const char* v14;
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
  int k;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int m;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD v44[2];
  _QWORD v45[2];
  __int64 v46;

  v1 = result;
  if ((*(_BYTE*)(result + 216) & 1) != 0) {
    v2 = *(_QWORD*)(result + 144);
    if (*(_DWORD*)(v2 + 112) == 1) {
      v3 = *(_BYTE*)(v2 + 116) != 0 ? "R_IO" : "L_IO";
      result = GameRoutine_1563380(v2 + 8, v3, 0);
      if ((result & 1) != 0) {
        *(_DWORD*)(v2 + 112) = 0;
        result = GameRoutine_155e830(v2 + 8, 0);
      }
    }
    v4 = *(_QWORD*)(v1 + 152);
    if (*(_DWORD*)(v4 + 112) == 1) {
      v5 = *(_BYTE*)(v4 + 116) != 0 ? "R_IO" : "L_IO";
      result = GameRoutine_1563380(v4 + 8, v5, 0);
      if ((result & 1) != 0) {
        *(_DWORD*)(v4 + 112) = 0;
        result = GameRoutine_155e830(v4 + 8, 0);
      }
    }
    v6 = *(__int64**)(v1 + 160);
    for (i = *(__int64**)(v1 + 168); v6 != i; ++v6) {
      v8 = *v6;
      if (*(_DWORD*)(*v6 + 112) == 1) {
        v9 = *(_BYTE*)(v8 + 116) != 0 ? "R_IO" : "L_IO";
        result = GameRoutine_1563380(v8 + 8, v9, 0);
        if ((result & 1) != 0) {
          *(_DWORD*)(v8 + 112) = 0;
          result = GameRoutine_155e830(v8 + 8, 0);
        }
      }
    }
    v12 = *(__int64**)(v1 + 184);
    for (j = *(__int64**)(v1 + 192); v12 != j; ++v12) {
      v13 = *v12;
      if (*(_DWORD*)(*v12 + 112) == 1) {
        if (*(_BYTE*)(v13 + 116) != 0) {
          v14 = "R_IO";
        }
        else {
          v14 = "L_IO";
        }
        result = GameRoutine_1563380(v13 + 8, v14, 0);
        if ((result & 1) != 0) {
          *(_DWORD*)(v13 + 112) = 0;
          result = GameRoutine_155e830(v13 + 8, 0);
        }
      }
    }
  }
  else if (*(_QWORD*)(result + 24) != 0) {
    v10 = *(_QWORD*)(result + 32);
    v44[0] = *(_QWORD*)(result + 24);
    v44[1] = v10;
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
      ui_LayoutAccessor_Setup_155dda0(result + 40, v44);
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
    else {
      ui_LayoutAccessor_Setup_155dda0(result + 40, v44);
    }
    GameRoutine_155e830(v1 + 40, 1);
    v15 = ui_LayoutAccessor_FindPartsLayout(v1 + 40, "L_SkillInfoActive_L");
    if (v15 != 0) {
      v16 = v15;
      v17 = *(_QWORD*)(v1 + 48);
      if (v17 != 0) {
        v18 = std___1___shared_weak_count_lock(v17);
        if (v18 != 0) {
          v19 = *(_QWORD*)(v1 + 40);
        }
        else {
          v19 = 0;
        }
      }
      else {
        v18 = 0;
        v19 = 0;
      }
      v20 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 120, 16, 0);
      v45[0] = v19;
      v45[1] = v18;
      GameRoutine_17cf0c0(v20, v45, v16);
      if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        std___1___shared_weak_count___release_weak(v18);
      }
      v21 = *(_QWORD*)(v1 + 144);
      *(_QWORD*)(v1 + 144) = v20;
      if (v21 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 8LL))(v21);
      }
    }
    v22 = ui_LayoutAccessor_FindPartsLayout(v1 + 40, "L_SkillInfoActive_R");
    if (v22 != 0) {
      v23 = v22;
      v24 = *(_QWORD*)(v1 + 48);
      if (v24 != 0) {
        v25 = std___1___shared_weak_count_lock(v24);
        if (v25 != 0) {
          v26 = *(_QWORD*)(v1 + 40);
        }
        else {
          v26 = 0;
        }
      }
      else {
        v26 = 0;
        v25 = 0;
      }
      v27 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 120, 16, 0);
      v45[0] = v26;
      v45[1] = v25;
      GameRoutine_17cf0c0(v27, v45, v23);
      if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
        std___1___shared_weak_count___release_weak(v25);
      }
      v28 = *(_QWORD*)(v1 + 152);
      *(_QWORD*)(v1 + 152) = v27;
      if (v28 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v28 + 8LL))(v28);
      }
    }
    for (k = 0; k != 6; ++k) {
      v30 = game_util_Format("L_SkillInfo_L%02d", k);
      v31 = ui_LayoutAccessor_FindPartsLayout(v1 + 40, v30);
      if (v31 != 0) {
        v32 = v31;
        v33 = *(_QWORD*)(v1 + 48);
        if (v33 != 0) {
          v34 = std___1___shared_weak_count_lock(v33);
          if (v34 != 0) {
            v35 = *(_QWORD*)(v1 + 40);
          }
          else {
            v35 = 0;
          }
        }
        else {
          v35 = 0;
          v34 = 0;
        }
        v36 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 120, 16,
                                             0);
        v45[0] = v35;
        v45[1] = v34;
        GameRoutine_17cf0c0(v36, v45, v32);
        v46 = v36;
        if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
          std___1___shared_weak_count___release_weak(v34);
        }
        MapSkillInfo_17ceb30(v1 + 160, &v46);
        if (v46 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v46 + 8LL))(v46);
        }
      }
    }
    for (m = 0; m != 6; ++m) {
      v38 = game_util_Format("L_SkillInfo_R%02d", m);
      result = ui_LayoutAccessor_FindPartsLayout(v1 + 40, v38);
      if (result != 0) {
        v39 = result;
        v40 = *(_QWORD*)(v1 + 48);
        if (v40 != 0) {
          v41 = std___1___shared_weak_count_lock(v40);
          if (v41 != 0) {
            v42 = *(_QWORD*)(v1 + 40);
          }
          else {
            v42 = 0;
          }
        }
        else {
          v42 = 0;
          v41 = 0;
        }
        v43 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 120, 16,
                                             0);
        v45[0] = v42;
        v45[1] = v41;
        GameRoutine_17cf0c0(v43, v45, v39);
        v46 = v43;
        if (v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
          std___1___shared_weak_count___release_weak(v41);
        }
        MapSkillInfo_17ceb30(v1 + 184, &v46);
        result = v46;
        if (v46 != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)v46 + 8LL))(v46);
        }
      }
    }
    *(_BYTE*)(v1 + 216) = 1;
  }
  return result;
}

__int64 MapSkillInfo_17ce880(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64* v5;
  __int64* i;
  __int64 v7;
  __int64* j;
  __int64* v9;
  __int64 v10;

  GameRoutine_155e830(a1 + 5, 0);
  v2 = a1[18];
  *(_DWORD*)(v2 + 112) = 0;
  GameRoutine_1563030(v2 + 8, 0, 0);
  GameRoutine_155e830(v2 + 8, 0);
  v3 = a1[19];
  *(_DWORD*)(v3 + 112) = 0;
  GameRoutine_1563030(v3 + 8, 0, 0);
  result = GameRoutine_155e830(v3 + 8, 0);
  v5 = (__int64*)a1[20];
  for (i = (__int64*)a1[21]; v5 != i; result = GameRoutine_155e830(v7 + 8, 0)) {
    v7 = *v5++;
    *(_DWORD*)(v7 + 112) = 0;
    GameRoutine_1563030(v7 + 8, 0, 0);
  }
  v9 = (__int64*)a1[23];
  for (j = (__int64*)a1[24]; v9 != j;
       result = GameRoutine_155e830(v10 + 8, 0)) {
    v10 = *v9++;
    *(_DWORD*)(v10 + 112) = 0;
    GameRoutine_1563030(v10 + 8, 0, 0);
  }
  return result;
}

__int64 MapSkillInfo_17ce980(__int64 result, __int64 a2, char a3, __int64 a4)
{
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  const char* v14;
  __int64 v15;
  _QWORD v16[3];
  _QWORD v17[2];
  int v18;
  _QWORD v19[26];

  v4 = 160;
  if ((a3 & 1) != 0) {
    v4 = 184;
  }
  if (GameData_21ec7b0 != 0 && (v6 = *(_QWORD*)(GameData_21ec7b0 + 8)) != 0 &&
      (*(_BYTE*)(v6 + 113) & 0x80) != 0 &&
      (v7 = GameData_21ed098, GameData_21ed098 != 0)) {
    if (a2 != 0 && a4 != 0) {
      UnitActor_81d430((void*)(v19), a4);
      v9 = GameRoutine_6fb960(a2, a4);
      GameRoutine_18c63a0(v7, v19, a2, v9, 0);
    }
    else if (a4 == 0) {
      return result;
    }
    UnitActor_81d430((void*)(v16), a4);
    v17[1] = v16[0];
    v18 = v16[1];
    v17[0] = GameData_212d1e0[0] + 2;
    snd_Fade_Fade_10c830(v19, 0.0f);
    snd_playAt_ff5f0((void*)(&v15), "SE_SYS_Telop_SkillActive_Bmap",
                     "SE_SYS_Telop_SkillActive_Bmap", v17, v19, 0, 65537, 0,
                     0.0f, 1.0f);
  }
  else {
    v10 = result + v4;
    v11 = *(__int64**)(result + v4);
    v12 = *(__int64**)(v10 + 8);
    if (v11 == v12) {
      return result;
    }
    while (1) {
      v13 = *v11++;
      result = v13;
      if (*(_DWORD*)(v13 + 112) != 1) {
        break;
      }
      if (v11 == v12) {
        return result;
      }
    }
    if ((a3 & 1) != 0) {
      v14 = "SE_SYS_Telop_SkillActive_Enemy";
    }
    else {
      v14 = "SE_SYS_Telop_SkillActive_Player";
    }
    GameRoutine_17cece0();
    snd_Fade_Fade_10c830(v19, 0.0f);
    snd_play_ff2d0((void*)(v17), v14, v14, v19, 0, 65537, 0, 0.0f, 1.0f);
  }
  return snd_Fade_Destroy_Fade(v19);
}

__int64* MapSkillInfo_17ceb30(__int64* result, _QWORD* a2)
{
  unsigned __int64 v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  __int64 v22;

  v3 = (_QWORD*)result[1];
  v2 = result[2];
  v4 = result;
  if ((unsigned __int64)v3 >= v2) {
    v7 = (__int64)v3 - *result;
    v8 = (v7 >> 3) + 1;
    if (v8 >> 61 != 0) {
      GameRoutine_17cf2d0();
    }
    v9 = v2 - *result;
    v10 = v9 >> 2;
    v11 = fw_memory_g_heap_manager_ptr;
    if (v9 >> 2 <= v8) {
      v10 = (v7 >> 3) + 1;
    }
    if ((unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFF8LL) {
      v12 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v12 = v10;
    }
    if (v12 != 0) {
      if (v12 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v13 = a2;
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
      a2 = v13;
    }
    else {
      v14 = 0;
    }
    v15 = *a2;
    *a2 = 0;
    v16 = (_QWORD*)(v14 + v7);
    v17 = v14 + 8 * v12;
    v18 = *v4;
    v19 = v4[1] - *v4;
    v20 = *v4;
    v21 = (char*)v16 - v19;
    *v16 = v15;
    v6 = v16 + 1;
    result = (__int64*)memcpy(v21, v20, v19);
    *v4 = (__int64)v21;
    v4[1] = (__int64)v6;
    v4[2] = v17;
    if (v18 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v22 = 56;
      }
      result =
          (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v22, v18);
    }
  }
  else {
    v5 = *a2;
    *a2 = 0;
    *v3 = v5;
    v6 = v3 + 1;
  }
  v4[1] = (__int64)v6;
  return result;
}

__int64 MapSkillInfo_Unknown5(__int64 result)
{
  if (GameData_21ed090 == 0 || *(int*)(GameData_21ed090 + 16) <= 0) {
    return GameRoutine_155e830(result + 40, 1);
  }
  return result;
}

__int64 MapSkillInfo_17cecb0(__int64 result)
{
  if (GameData_21ed090 == 0 || *(int*)(GameData_21ed090 + 16) <= 0) {
    return LayoutAccessor_155e830(result + 32, 1);
  }
  return result;
}

__int64 MapSkillInfo_17cf0c0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD v5[2];

  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 109) = 0;
  *(_QWORD*)(a1 + 8) = 0;
  v2 = a1 + 8;
  *(_QWORD*)a1 = game_map_MapSkillInfo_SkillParts_vtable;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 32) = a1 + 40;
  *(_DWORD*)(a1 + 88) = 1065353216;
  v3 = a2[1];
  v5[0] = *a2;
  v5[1] = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dea0(a1 + 8, v5);
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dea0(a1 + 8, v5);
  }
  LayoutAccessor_1562cf0(v2, "Out");
  LayoutAccessor_15636c0(v2, "Out", 0);
  return LayoutAccessor_155e830(v2, 0);
}

#pragma GCC visibility pop
