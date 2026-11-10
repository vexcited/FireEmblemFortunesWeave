#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1f93bf8[])();
extern __int64 (*game_map_SightMapsImpl_vtable[])();
extern __int64 GameData_21c6978;
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* SightMapsImpl_Destructor(_QWORD* result);
__int64 SightMapsImpl_DeletingDestructor(_QWORD* a1);
__int64 GameRoutine_6c7cb0(_QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
extern _DWORD game_script_hub_schedule_kHourCycles[24];
extern __int64 GameData_21ca310;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
float GameRoutine_764490(_QWORD);
__int64 SightMapsImpl_Unknown5(__int64 result);

_QWORD* SightMapsImpl_Destructor(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;

  *result = game_map_SightMapsImpl_vtable;
  result[65] = GameData_1f93bf8;
  v1 = result[67];
  if (v1 ==
      **(_QWORD**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) -
                                         8LL) +
                              40LL) +
                   376LL)) {
    *(_BYTE*)(*(_QWORD*)(v1 + 24) + 136LL) = 0;
    result[67] = 0;
    v3 = result[68];
    result[68] = 0;
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      v4 = result;
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
      result = v4;
    }
  }
  v2 = result[68];
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return (_QWORD*)std___1___shared_weak_count___release_weak(v2);
  }
  return result;
}

__int64 SightMapsImpl_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;

  *a1 = game_map_SightMapsImpl_vtable;
  a1[65] = GameData_1f93bf8;
  v2 = a1[67];
  if (v2 ==
      **(_QWORD**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) -
                                         8LL) +
                              40LL) +
                   376LL)) {
    *(_BYTE*)(*(_QWORD*)(v2 + 24) + 136LL) = 0;
    a1[67] = 0;
    v6 = a1[68];
    a1[68] = 0;
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
  }
  v3 = a1[68];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, a1);
}

__int64 SightMapsImpl_Unknown5(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int16* v5;
  int v6;
  int v7;
  bool v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int128 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  char v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  char v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  int v48;

  v1 = *GameData_212ce90[0];
  if (*GameData_212ce90[0] != 0) {
    v2 = result;
    v3 = *(_QWORD*)(*(_QWORD*)(result + 536) + 24LL);
    if ((*(_BYTE*)(v1 + 21) & 2) != 0) {
      *(_BYTE*)(v3 + 136) = 1;
      if (game_GameModeData_instance_ != 0) {
        v4 = *(_QWORD*)(game_GameModeData_instance_ + 16);
        if (v4 != 0) {
          v5 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
          if (game_gmap_GmapClock_instance_ == 0) {
            v5 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
          }
          if (v5[1] * *v5 * v5[2] != 0) {
            v6 = game_script_hub_schedule_kHourCycles[v5[3] % 24];
            v7 = v6 & 3;
            v9 = -v6;
            v8 = v9 < 0;
            v10 = v9 & 3;
            if (v8) {
              LODWORD(v11) = v7;
            }
            else {
              LODWORD(v11) = -v10;
            }
            v11 = (int)v11;
          }
          else {
            v11 = -1;
          }
          v12 = *(_QWORD*)(v4 + 24) + 16 * v11;
          v13 = *(_QWORD*)(result + 536);
          v14 = *(_OWORD*)(v12 + 48);
          v15 = *(_QWORD*)(v13 + 24);
          *(_QWORD*)(v15 + 160) = v14;
          *(_DWORD*)(v15 + 168) = DWORD2(v14);
          *(_DWORD*)(*(_QWORD*)(v13 + 24) + 172LL) = HIDWORD(v14);
          v16 = *(_QWORD*)(result + 536);
          v17 = *(_DWORD*)(v4 + 196);
          *(_DWORD*)(*(_QWORD*)(v16 + 24) + 176LL) = *(_DWORD*)(v4 + 192);
          *(_DWORD*)(*(_QWORD*)(v16 + 24) + 180LL) = v17;
          *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(result + 536) + 24LL) + 184LL) =
              *(_DWORD*)(v4 + 200);
          if (*(_BYTE*)(v1 + *(unsigned __int8*)(v1 + 24) + 16) == 1) {
            v18 = *(unsigned __int8*)(v1 + 24);
          }
          else {
            v18 = 0;
          }
          v19 = *(unsigned __int8*)(*GameData_212ce98[0] + 21);
          v20 = *(unsigned __int8*)(*GameData_212ce98[0] + 22);
          v44 = *(unsigned __int8*)(*GameData_212ce98[0] + 23);
          v45 = *(unsigned __int8*)(*GameData_212ce98[0] + 20);
          if ((unsigned int)v19 <=
                  *(unsigned __int8*)(*GameData_212ce98[0] + 23) &&
              *(unsigned __int8*)(*GameData_212ce98[0] + 20) <=
                  (unsigned int)v20) {
            v30 = 0;
            v31 = result + (v18 << 7) + 8;
            v32 = v45 + 32 * v19;
            v43 = v20 - v45 + 1;
            do {
              v33 = v43;
              v47 = v19;
              v34 = v45;
              v46 = v32;
              do {
                v36 = *(_QWORD*)(v2 + 536);
                v37 = v32 >> 6;
                v38 = 1LL << v32;
                v39 = (1 << v34) &
                      *(_DWORD*)(v31 + 4LL * ((unsigned int)v32 >> 5));
                v40 = *(_QWORD*)(v36 + 24);
                if ((v39 != 0) != ((*(_QWORD*)(v40 + 8 * (v32 >> 6) + 8) &
                                    (1LL << v32)) != 0)) {
                  if ((v30 & 1) == 0) {
                    *(float*)v36 = GameRoutine_764490(v1);
                    *(_BYTE*)(v36 + 4) = 1;
                    v40 = *(_QWORD*)(*(_QWORD*)(v2 + 536) + 24LL);
                  }
                  v41 = v40 + 8;
                  if (v39 != 0) {
                    v35 = *(_QWORD*)(v41 + 8 * v37) | v38;
                  }
                  else {
                    v35 = *(_QWORD*)(v41 + 8 * v37) & ~v38;
                  }
                  *(_QWORD*)(v41 + 8 * v37) = v35;
                  v30 = 1;
                }
                --v33;
                ++v34;
                ++v32;
              } while (v33 != 0);
              v32 = v46 + 32;
              v19 = v47 + 1;
            } while (v47 != v44);
          }
        }
      }
    }
    else {
      *(_BYTE*)(v3 + 136) = 0;
    }
    v48 = 15;
    result = game_UnitPool_GetFirst(&v48);
    if (result != 0) {
      v22 = *(_QWORD*)(result + 432);
      if (v22 == 0) {
        v23 = *(_QWORD*)(result + 440);
        if (v23 != 0 && (v24 = *(unsigned __int8*)(v23 + 16)) <= 8) {
          v42 = 24LL * (unsigned int)v24 + 556024;
          while (1) {
            if (v24 <= 2) {
              v22 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v42);
              if (v22 != 0) {
                break;
              }
            }
            ++v24;
            v42 += 24;
            if (v24 == 9) {
              goto LABEL_26;
            }
          }
        }
        else {
        LABEL_26:
          v22 = 0;
        }
      }
      v25 = v22;
      result = GameRoutine_6c7cb0(result, (unsigned int)*(char*)(result + 584),
                                  (unsigned int)*(char*)(result + 585));
      if (v25 != 0) {
        result = v25;
        do {
          v26 = *(_QWORD*)(result + 432);
          if (v26 == 0) {
            v27 = *(_QWORD*)(result + 440);
            if (v27 != 0 && (v28 = *(unsigned __int8*)(v27 + 16)) <= 8) {
              v29 = 24LL * (unsigned int)v28 + 556024;
              while (1) {
                if (v28 <= 2) {
                  v26 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v29);
                  if (v26 != 0) {
                    break;
                  }
                }
                ++v28;
                v29 += 24;
                if (v28 == 9) {
                  goto LABEL_29;
                }
              }
            }
            else {
            LABEL_29:
              v26 = 0;
            }
          }
          GameRoutine_6c7cb0(result, (unsigned int)*(char*)(result + 584),
                             (unsigned int)*(char*)(result + 585));
          result = v26;
        } while (v26 != 0);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
