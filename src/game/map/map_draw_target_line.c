#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6c8a80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c9cf0(_QWORD, _QWORD);
__int64 GameRoutine_752850(void);
__int64 GameRoutine_788a40(void);
__int64 GameRoutine_f0a0d0(__int64, int);
__int64 GameRoutine_f235c0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_1f94310[])();
extern __int64 (*game_map_MapDrawTargetLine_vtable[])();
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d038[2];
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd130;
extern __int64 GameData_21ed070;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern int GameData_21d92e0;
__int64 MapDrawTargetLine_Destructor(__int64 a1);
__int64 MapDrawTargetLine_f21270_alt1() __asm__("MapDrawTargetLine_f21270");
bool MapDrawTargetLine_f21470(__int64 a1, __int64 a2);
bool MapDrawTargetLine_Unknown6(__int64 a1);
__int64 game_map_MapDrawTargetLine_UpdateMesh_lambda0_Invoke(__int64 a1,
                                                             _DWORD* a2,
                                                             _DWORD* a3);
__int64 game_map_MapDrawTargetLine_UpdateMesh_lambda1_Invoke(__int64 a1,
                                                             _DWORD* a2,
                                                             _DWORD* a3);
__int64* GameRoutine_752850_alt1(unsigned int, unsigned int,
                                 unsigned __int8) __asm__("GameRoutine_752850");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_UnitPool_GetFirst(int*);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
bool game_gameui_UnitUtil_CheckDangerCritical(__int64, __int64);
extern __int64 game_script_hub_g_frame_counter_ptr[3];
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_740050();
void MapDrawTargetLine_Unknown2(__int64 a1);
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64* MapDrawTargetLine_f21270();

__int64 MapDrawTargetLine_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = game_map_MapDrawTargetLine_vtable;
  v2 = a1 + 144;
  if ((snd_fnd_WeakHandle_isValid(a1 + 144) & 1) != 0) {
    v3 = snd_fnd_WeakHandle_get(v2);
    (*(void (**)(__int64))(*(_QWORD*)(v3 - 5592) + 264LL))(v3 - 5592);
  }
  v4 = *(_QWORD*)(a1 + 168);
  if (v4 != 0) {
    *(_QWORD*)(a1 + 176) = v4;
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                  v4);
  }
  if ((*(_BYTE*)(a1 + 120) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 136);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v6);
    }
  }
  GameRoutine_f235c0(*(_QWORD*)(a1 + 96));
  GameRoutine_f235c0(*(_QWORD*)(a1 + 72));
  GameRoutine_f235c0(*(_QWORD*)(a1 + 48));
  return GameRoutine_f235c0(*(_QWORD*)(a1 + 24));
}

void MapDrawTargetLine_Unknown2(__int64 a1)
{

#pragma clang fp contract(off)
  int v1;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  long double v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  bool v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64* v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  char* v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  char* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;

  v1 = *(unsigned __int8*)(a1 + 8);
  *(float*)(a1 + 160) =
      *(float*)(a1 + 160) +
      (float)((float)(*(float*)(*(_QWORD*)
                                    game_script_hub_g_frame_counter_ptr[0] +
                                160LL) *
                      0x1.0aef000000000p+4f) /
              0x1.f400000000000p+9f);
  if (v1 != 1) {
    return;
  }
  v3 = GameData_212d038[0];
  *(_QWORD*)(a1 + 176) = *(_QWORD*)(a1 + 168);
  v4 = *(_QWORD*)v3;
  v5 = *(unsigned __int8*)(*GameData_212ce90[0] + 24);
  v6 = GameData_212d020[0];
  v7 = *(_QWORD*)v3;
  v8 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 24LL);
  v9 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL);
  if (v9 == 0) {
    goto LABEL_7;
  }
  v10 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 96LL);
  v11 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                            memory_order_relaxed);
  v12 = std___1___shared_weak_count_lock(v11);
  *(__n128*)&v13 = std___1___shared_weak_count___release_weak_alt1(v9);
  if (v12 == 0) {
    v7 = *(_QWORD*)v3;
  LABEL_7:
    if (*(_BYTE*)(v7 + 156) != 0) {
      v14 = 8;
    }
    else {
      v14 = 127472;
    }
    goto LABEL_15;
  }
  if (v10 != 0) {
    v14 = 254936;
  }
  else if (*(_BYTE*)(*(_QWORD*)v3 + 156LL) != 0) {
    v14 = 8;
  }
  else {
    v14 = 127472;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v12 + 16LL))(v12, v13);
    std___1___shared_weak_count___release_weak_alt1(v12);
  }
LABEL_15:
  v15 = *(_QWORD*)(v8 + v14 + 127192);
  v16 = (*(_QWORD*)(v8 + v14 + 127168) | v15) == 0 || v8 == 0;
  if (v16 || *(_DWORD*)(v8 + v14) != 0) {
    if (*(_DWORD*)(*(_QWORD*)v6 + 4368LL) == 1) {
      v17 = *(char*)(v4 + 82);
      v18 = *(char*)(v4 + 83);
      LODWORD(v19) = v17 + 32 * v18;
      if ((unsigned int)v19 >= 0x400) {
        v19 = 0;
      }
      else {
        v19 = (unsigned int)v19;
      }
      v20 =
          *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v19 + 8);
      if (*(_BYTE*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v19 + 8) != 0) {
        v21 =
            *(_QWORD*)(GameData_21ca310 + 56) +
            2224LL * *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) +
                                         v19 + 8);
        v15 = v21 - 2224;
        v22 = v20 > 0xFA || v21 == 2224;
        if (!v22 && *(_QWORD*)(v21 - 1832) != 0) {
          v23 = *(_QWORD*)(v21 - 1784);
          v24 = v23 != 0 ? *(unsigned __int8*)(v23 + 16) : 9;
          if (v24 == v5) {
            goto LABEL_34;
          }
        }
      }
    }
    else {
      v17 = *(char*)(v4 + 82);
      v18 = *(char*)(v4 + 83);
    }
    v15 = (__int64)GameRoutine_752850_alt1(v17, v18, v5);
  }
LABEL_34:
  v49 = 6;
  v25 = game_UnitPool_GetFirst(&v49);
  if (v25 != 0) {
    v26 = *(_QWORD*)(v25 + 432);
    v27 = v25;
    if (v26 == 0) {
      v26 = *(_QWORD*)(v25 + 440);
      if (v26 != 0) {
        v28 = *(unsigned __int8*)(v26 + 16);
        if (v28 <= 8) {
          v48 = 24LL * *(unsigned __int8*)(v26 + 16) + 556024;
          while (1) {
            if (v28 <= 1) {
              v26 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v48);
              if (v26 != 0) {
                break;
              }
            }
            ++v28;
            v48 += 24;
            if (v28 == 9) {
              goto LABEL_38;
            }
          }
        }
        else {
        LABEL_38:
          v26 = 0;
        }
      }
    }
    v29 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (1) {
    LABEL_41:
      v30 = v26;
      if (MapDrawTargetLine_f21470(v15, v27) &&
          game_gameui_UnitUtil_CheckDangerCritical(v27, v15)) {
        v32 = *(__int64**)(a1 + 176);
        v31 = *(_QWORD*)(a1 + 184);
        if ((unsigned __int64)v32 >= v31) {
          v34 = *(_QWORD*)(a1 + 168);
          v35 = (char*)v32 - v34;
          v36 = ((__int64)v32 - v34) >> 3;
          v37 = v36 + 1;
          if ((unsigned __int64)(v36 + 1) >> 61 != 0) {
            GameRoutine_740050();
          }
          v38 = v31 - v34;
          if (v38 >> 2 > v37) {
            v37 = v38 >> 2;
          }
          if ((unsigned __int64)v38 >= 0x7FFFFFFFFFFFFFF8LL) {
            v39 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v39 = v37;
          }
          if (v39 != 0) {
            if (v39 >> 61 != 0) {
              GameRoutine_60a210();
            }
            v40 = fw_memory_HeapManager_Allocate(*v29, 8 * v39, 16, 0);
          }
          else {
            v40 = 0;
          }
          v41 = v40 + 8 * v39;
          v42 = (char*)v32 - v34;
          v43 = (__int64)&v35[v40 + -8 * v36];
          *(_QWORD*)&v35[v40] = v27;
          v33 = (__int64)&v35[v40 + 8];
          memcpy(v43, v34, v42);
          *(_QWORD*)(a1 + 168) = v43;
          *(_QWORD*)(a1 + 176) = v33;
          *(_QWORD*)(a1 + 184) = v41;
          if (v34 != 0) {
            v44 = 128;
            if (*(_QWORD*)(*v29 + 200) == 0) {
              v44 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v29 + v44);
          }
        }
        else {
          *v32 = v27;
          v33 = (__int64)(v32 + 1);
        }
        *(_QWORD*)(a1 + 176) = v33;
      }
      if (v30 == 0) {
        break;
      }
      v26 = *(_QWORD*)(v30 + 432);
      v27 = v30;
      if (v26 == 0) {
        v45 = *(_QWORD*)(v30 + 440);
        v27 = v30;
        if (v45 != 0) {
          v46 = *(unsigned __int8*)(v45 + 16);
          v26 = 0;
          v27 = v30;
          if (v46 <= 8) {
            v47 = 24LL * (unsigned int)v46 + 556024;
            while (1) {
              if (v46 <= 1) {
                v26 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v47);
                if (v26 != 0) {
                  break;
                }
              }
              ++v46;
              v47 += 24;
              if (v46 == 9) {
                v26 = 0;
                v27 = v30;
                goto LABEL_41;
              }
            }
            v27 = v30;
          }
        }
      }
    }
  }
}

__int64* MapDrawTargetLine_f21270()
{
  __int64 v0;
  __int64 v1;
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  bool v19;
  __int64 v20;

  v0 = GameData_212d038[0];
  v1 = *(_QWORD*)GameData_212d038[0];
  v2 = *(unsigned __int8*)(*GameData_212ce90[0] + 24);
  v3 = GameData_212d020[0];
  v4 = *(_QWORD*)GameData_212d038[0];
  v5 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 24LL);
  v6 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL);
  if (v6 == 0) {
    goto LABEL_6;
  }
  v7 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 96LL);
  v8 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                            memory_order_relaxed);
  v9 = std___1___shared_weak_count_lock_alt1(v8);
  std___1___shared_weak_count___release_weak_alt2(v6);
  if (v9 == 0) {
    v4 = *(_QWORD*)v0;
  LABEL_6:
    if (*(_BYTE*)(v4 + 156) != 0) {
      v10 = 8;
    }
    else {
      v10 = 127472;
    }
    goto LABEL_14;
  }
  if (v7 != 0) {
    v10 = 254936;
  }
  else if (*(_BYTE*)(*(_QWORD*)v0 + 156LL) != 0) {
    v10 = 8;
  }
  else {
    v10 = 127472;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak_alt2(v9);
  }
LABEL_14:
  v11 = *(_QWORD*)(v5 + v10 + 127192);
  v12 = (*(_QWORD*)(v5 + v10 + 127168) | v11) == 0 || v5 == 0;
  if (!v12 && *(_DWORD*)(v5 + v10) == 0) {
    return (__int64*)v11;
  }
  if (*(_DWORD*)(*(_QWORD*)v3 + 4368LL) != 1) {
    v13 = *(char*)(v1 + 82);
    v14 = *(char*)(v1 + 83);
    return GameRoutine_752850_alt1(v13, v14, v2);
  }
  v13 = *(char*)(v1 + 82);
  v14 = *(char*)(v1 + 83);
  LODWORD(v15) = v13 + 32 * v14;
  if ((unsigned int)v15 >= 0x400) {
    v15 = 0;
  }
  else {
    v15 = (unsigned int)v15;
  }
  v16 = *(_QWORD*)(*GameData_212ce98[0] + 96) + v15;
  v17 = *(unsigned __int8*)(v16 + 8);
  if (*(_BYTE*)(v16 + 8) == 0) {
    return GameRoutine_752850_alt1(v13, v14, v2);
  }
  v18 =
      *(_QWORD*)(GameData_21ca310 + 56) + 2224LL * *(unsigned __int8*)(v16 + 8);
  v11 = v18 - 2224;
  v19 = v17 > 0xFA || v18 == 2224;
  if (v19 || *(_QWORD*)(v18 - 1832) == 0) {
    return GameRoutine_752850_alt1(v13, v14, v2);
  }
  v20 = *(_QWORD*)(v18 - 1784);
  if (v20 != 0) {
    if (*(unsigned __int8*)(v20 + 16) == v2) {
      return (__int64*)v11;
    }
    return GameRoutine_752850_alt1(v13, v14, v2);
  }
  if (v2 != 9) {
    return GameRoutine_752850_alt1(v13, v14, v2);
  }
  return (__int64*)v11;
}

bool MapDrawTargetLine_f21470(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v11[4];
  _QWORD* v12;
  char v13;

  if (a1 == 0) {
    v3 = GameData_212ce90[0];
    v4 = *GameData_212ce90[0];
    if ((*(_BYTE*)(*GameData_212ce90[0] + 21) & 2) == 0) {
    LABEL_12:
      if ((*(_BYTE*)(v4 + 21) & 1) == 0 &&
          (*(_QWORD*)(a2 + 392) == 0 || (*(_BYTE*)(a2 + 417) & 0x1C) != 0 ||
           (*(float (**)(__int64))(*(_QWORD*)(a2 + 152) + 16LL))(a2 + 152) <=
               0.0f ||
           *(_BYTE*)(*(_QWORD*)(a2 + 440) + 16LL) != 1 ||
           (*(_BYTE*)(a2 + 417) & 0x20) == 0)) {
        return false;
      }
      return *(_QWORD*)(a2 + 2200) != 0;
    }
    v6 = (unsigned int)*(char*)(a2 + 584);
    v7 = (unsigned int)*(char*)(a2 + 585);
    v13 = 0;
    v12 = v11;
    v8 = *(_QWORD*)(*GameData_212ce98[0] + 160) + 8LL;
    v11[0] = GameData_1f94310;
    v11[1] = v8;
    v11[2] = &v13;
    GameRoutine_6c8a80(a2, v6, v7, v11);
    if (v12 == v11) {
      v9 = 32;
    }
    else {
      if (v12 == nullptr) {
      LABEL_10:
        if (v13 != 1) {
          return false;
        }
        v4 = *v3;
        goto LABEL_12;
      }
      v9 = 40;
    }
    (*(void (**)(__int64))(*v12 + v9))((__int64)v12);
    goto LABEL_10;
  }
  if ((GameRoutine_6c9cf0(a1, a2) & 1) == 0) {
    return false;
  }
  return *(_QWORD*)(a2 + 2200) != 0;
}

bool MapDrawTargetLine_Unknown6(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  int v6;

  v2 = GameData_212d020[0];
  v3 = *(_QWORD*)GameData_212d020[0];
  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1);
  if ((GameRoutine_f0a0d0(v3, v4) & 1) == 0) {
    return false;
  }
  v5 = *(_QWORD*)v2;
  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
  if (GameData_21ed070 != 0) {
    if (v6 != 0) {
      return false;
    }
  }
  else if (*(_BYTE*)(v5 + 196) == 1) {
    if (*(_DWORD*)(v5 + 192) != v6) {
      return false;
    }
  }
  else if (GameData_21d92e0 != v6) {
    return false;
  }
  return *(_DWORD*)(*(_QWORD*)v2 + 4368LL) != 7 ||
         (GameRoutine_788a40() & 1) != 0 &&
             *(_BYTE*)(*(_QWORD*)(GameData_21cd130 + 48) + 240LL) == 1;
}

__int64 game_map_MapDrawTargetLine_UpdateMesh_lambda0_Invoke(__int64 a1,
                                                             _DWORD* a2,
                                                             _DWORD* a3)
{
  return (*(_DWORD*)(**(_QWORD**)(a1 + 8) + 4LL * ((*a2 + 32 * *a3) >> 5) +
                     2120) >>
          *a2) &
         1;
}

__int64 game_map_MapDrawTargetLine_UpdateMesh_lambda1_Invoke(__int64 a1,
                                                             _DWORD* a2,
                                                             _DWORD* a3)
{
  return (*(_DWORD*)(**(_QWORD**)(a1 + 8) + 4LL * ((*a2 + 32 * *a3) >> 5) +
                     2376) >>
          *a2) &
         1;
}

#pragma GCC visibility pop
