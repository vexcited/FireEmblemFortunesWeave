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
_DWORD* GameRoutine_72dcc0(_DWORD* result, _DWORD*);
__int64 game_68e4c0(__int64, _QWORD*);
__int64 game_68e930(__int64 result, __int64);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_UnitPool_GetFirst_alt1(int*) __asm__("game_UnitPool_GetFirst");
__int64 game_Unit_GetParam(__int64);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 GameData_21c9bd0;
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21ca300;
extern __int64 GameData_21cd158;
_DWORD* SightMapsImpl_Unknown4(_DWORD* result);

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

_DWORD* SightMapsImpl_Unknown4(_DWORD* result)
{
  _DWORD* v3;
  _DWORD* v4;
  _BYTE* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  int v11;
  int v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  bool v31;
  __int64 v32;
  unsigned int v33;
  unsigned int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  unsigned int v44;
  int v45;
  __int64 v46;
  _QWORD* v47;
  _QWORD* v48;
  __int64 v49;
  unsigned int v50;
  unsigned int v51;
  unsigned __int8* v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  unsigned int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  unsigned int v67;
  _DWORD* v68;
  _QWORD* v69;
  __int64 v70;
  _QWORD* v71;
  int v72[2];
  int v73;

  if (result[132] == 0) {
    if (GameData_21ca2f8 == 0 || (*(_BYTE*)(GameData_21ca2f8 + 21) & 2) == 0) {
      v3 = result;
      (*(void (**)(_DWORD*))(*(_QWORD*)result + 24LL))(result);
      v4 = v3;
      return (_DWORD*)(*(__int64 (**)(_DWORD*))(*(_QWORD*)v4 + 40LL))(v4);
    }
    v5 = (_BYTE*)GameData_21ca300;
    v68 = result;
    v70 = GameData_21cd158;
    (*(void (**)(_DWORD*))(*(_QWORD*)result + 16LL))(result);
    v72[0] = 9;
    v6 = game_UnitPool_GetFirst_alt1(v72);
    if (v6 == 0) {
    LABEL_78:
      v46 = *(_QWORD*)(v70 + 16);
      v47 = *(_QWORD**)(v46 + 32);
      v69 = *(_QWORD**)(v46 + 40);
      if (v47 != v69) {
        v48 = v68 + 2;
        do {
          v49 = *v47;
          v71 = v47;
          v50 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v47 + 264LL))(*v47);
          if ((v50 & 0x80000000) == 0) {
            v51 = v50;
            if (v50 >= 0x41) {
              *((_QWORD*)v68 + 15) = -1;
              *((_QWORD*)v68 + 16) = -1;
              *((_QWORD*)v68 + 13) = -1;
              *((_QWORD*)v68 + 14) = -1;
              *((_QWORD*)v68 + 11) = -1;
              *((_QWORD*)v68 + 12) = -1;
              *((_QWORD*)v68 + 9) = -1;
              *((_QWORD*)v68 + 10) = -1;
              *((_QWORD*)v68 + 7) = -1;
              *((_QWORD*)v68 + 8) = -1;
              *((_QWORD*)v68 + 5) = -1;
              *((_QWORD*)v68 + 6) = -1;
              *((_QWORD*)v68 + 3) = -1;
              *((_QWORD*)v68 + 4) = -1;
              *v48 = -1;
              *((_QWORD*)v68 + 2) = -1;
            }
            else {
              v52 = (unsigned __int8*)*GameData_212ce98[0];
              v53 = (*(__int64 (**)(__int64))(*(_QWORD*)v49 + 56LL))(v49);
              if ((int)(v53 - v51) <= v52[28]) {
                v54 = v52[28];
              }
              else {
                v54 = v53 - v51;
              }
              v55 = (*(__int64 (**)(__int64))(*(_QWORD*)v49 + 64LL))(v49);
              if ((int)(v55 - v51) <= v52[29]) {
                v56 = v52[29];
              }
              else {
                v56 = v55 - v51;
              }
              v57 = (*(__int64 (**)(__int64))(*(_QWORD*)v49 + 56LL))(v49);
              if ((int)(v57 + v51) >= v52[30]) {
                v58 = v52[30];
              }
              else {
                v58 = v57 + v51;
              }
              v59 = (*(__int64 (**)(__int64))(*(_QWORD*)v49 + 64LL))(v49);
              if ((int)(v59 + v51) >= v52[31]) {
                v60 = v52[31];
              }
              else {
                v60 = v59 + v51;
              }
              if (v56 <= v60 && v54 <= v58) {
                do {
                  v62 = v54;
                  do {
                    v63 = (*(__int64 (**)(__int64))(*(_QWORD*)v49 + 56LL))(v49);
                    v64 = (*(__int64 (**)(__int64))(*(_QWORD*)v49 + 64LL))(v49);
                    v65 = v62 - v63;
                    if ((int)(v62 - v63) < 0) {
                      v65 = v63 - v62;
                    }
                    v66 = v56 - v64;
                    if (v56 - v64 < 0) {
                      v66 = v64 - v56;
                    }
                    if (v66 + v65 <= v51) {
                      *((_DWORD*)v48 + ((v56 + (v62 >> 5)) & 0x7FFFFFF)) |=
                          1 << v62;
                    }
                    v31 = (int)v62++ < v58;
                  } while (v31);
                  v31 = v56++ < v60;
                } while (v31);
              }
            }
          }
          v47 = v71 + 1;
        } while (v71 + 1 != v69);
      }
      GameRoutine_72dcc0(v68 + 2, v68 + 98);
      GameRoutine_72dcc0(v68 + 98, v68 + 2);
      v4 = v68;
      *((_QWORD*)v68 + 47) = -1;
      *((_QWORD*)v68 + 48) = -1;
      *((_QWORD*)v68 + 45) = -1;
      *((_QWORD*)v68 + 46) = -1;
      *((_QWORD*)v68 + 43) = -1;
      *((_QWORD*)v68 + 44) = -1;
      *((_QWORD*)v68 + 41) = -1;
      *((_QWORD*)v68 + 42) = -1;
      *((_QWORD*)v68 + 39) = -1;
      *((_QWORD*)v68 + 40) = -1;
      *((_QWORD*)v68 + 37) = -1;
      *((_QWORD*)v68 + 38) = -1;
      *((_QWORD*)v68 + 35) = -1;
      *((_QWORD*)v68 + 36) = -1;
      *((_QWORD*)v68 + 33) = -1;
      *((_QWORD*)v68 + 34) = -1;
      *((_QWORD*)v68 + 31) = -1;
      *((_QWORD*)v68 + 32) = -1;
      *((_QWORD*)v68 + 29) = -1;
      *((_QWORD*)v68 + 30) = -1;
      *((_QWORD*)v68 + 27) = -1;
      *((_QWORD*)v68 + 28) = -1;
      *((_QWORD*)v68 + 25) = -1;
      *((_QWORD*)v68 + 26) = -1;
      *((_QWORD*)v68 + 23) = -1;
      *((_QWORD*)v68 + 24) = -1;
      *((_QWORD*)v68 + 21) = -1;
      *((_QWORD*)v68 + 22) = -1;
      *((_QWORD*)v68 + 19) = -1;
      *((_QWORD*)v68 + 20) = -1;
      *((_QWORD*)v68 + 17) = -1;
      *((_QWORD*)v68 + 18) = -1;
      return (_DWORD*)(*(__int64 (**)(_DWORD*))(*(_QWORD*)v4 + 40LL))(v4);
    }
    v7 = *(_QWORD*)(v6 + 432);
    v8 = v6;
    if (v7 == 0) {
      v7 = *(_QWORD*)(v6 + 440);
      if (v7 == 0) {
        goto LABEL_12;
      }
      v9 = *(unsigned __int8*)(v7 + 16);
      if (v9 <= 8) {
        v67 = v9 - 2;
        do {
          if (v67 == 0) {
            v7 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556072LL);
            if (v7 != 0) {
              goto LABEL_12;
            }
          }
          ++v67;
        } while (v67 != 7);
      }
      v7 = 0;
    }
  LABEL_12:
    while (1) {
      v10 = v7;
      v11 = *(char*)(v8 + 584);
      if ((unsigned __int8)v5[26] >
          (unsigned int)(unsigned __int8)(*(_BYTE*)(v8 + 584) - v5[24])) {
        v12 = *(char*)(v8 + 585);
        if ((unsigned __int8)v5[27] >
            (unsigned int)(unsigned __int8)(*(_BYTE*)(v8 + 585) - v5[25])) {
          v13 = *(_DWORD*)(v8 + 592);
          v14 = *(_QWORD*)(v8 + 440);
          LOBYTE(v72[1]) = 9;
          v15 = game_Unit_GetParam(v8);
          v16 = *(unsigned __int8*)(v14 + 16);
          v17 = v15;
          v18 = *(_QWORD*)(v70 + 16);
          v19 = v11 + 32 * v12;
          if (v19 >= 0x400) {
            v19 = 0;
          }
          v20 = *(__int16*)(v18 + 2LL * v19 + 104);
          if (v20 < 0 || (v21 = *(_QWORD*)(v18 + 8)) == 0 ||
              (v22 = v21 + 144LL * (unsigned int)v20,
               (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v22 + 40LL))(v22) !=
                   2) ||
              ((*(__int64 (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22) & 1) ==
                  0 ||
              (v23 = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 224LL))(v22)) ==
                  0) {
            v23 = **(_QWORD**)(GameData_21c9bd0 + 64);
          }
          v24 = game_68e930(v23, v8);
          if (v24 != 0 && *(int*)(v8 + 592) <= 1) {
            v25 = v24;
            v73 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x7CLL) +
                             game_g_shared_system_skills_ptr + 4) &
                  0xFFF;
            if ((game_HasSkill((_QWORD*)(v8 + 1744), (unsigned int*)&v73) &
                 1) == 0 &&
                (game_68e4c0(v25, (_QWORD*)v8) & 1) != 0) {
              v26 = v17 >= 1 ? 1 : v17;
              if ((*(_BYTE*)(v25 + 216) & 0x20) != 0) {
                v17 = v26;
              }
            }
          }
          v27 = v11 - v17;
          v28 = *(unsigned __int8*)(GameData_21ca300 + 29);
          v29 = *(unsigned __int8*)(GameData_21ca300 + 31);
          if (v11 - v17 <= *(unsigned __int8*)(GameData_21ca300 + 28)) {
            v27 = *(unsigned __int8*)(GameData_21ca300 + 28);
          }
          if (v12 - v17 > v28) {
            v28 = v12 - v17;
          }
          v30 = v17 + v13 + v11;
          if (v30 >= *(unsigned __int8*)(GameData_21ca300 + 30)) {
            v30 = *(unsigned __int8*)(GameData_21ca300 + 30);
          }
          if (v17 + v13 + v12 < v29) {
            v29 = v17 + v13 + v12;
          }
          v31 = v28 <= v29 && v27 <= v30;
          if (v31) {
            break;
          }
        }
      }
    LABEL_43:
      if (v10 == 0) {
        goto LABEL_78;
      }
      v7 = *(_QWORD*)(v10 + 432);
      v8 = v10;
      if (v7 == 0) {
        v32 = *(_QWORD*)(v10 + 440);
        v8 = v10;
        if (v32 != 0) {
          v33 = *(unsigned __int8*)(v32 + 16);
          v7 = 0;
          v8 = v10;
          if (v33 <= 8) {
            v34 = v33 - 2;
            while (1) {
              if (v34 == 0) {
                v7 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556072LL);
                if (v7 != 0) {
                  break;
                }
              }
              if (++v34 == 7) {
                v7 = 0;
                v8 = v10;
                goto LABEL_12;
              }
            }
            v8 = v10;
          }
        }
      }
    }
  LABEL_55:
    v35 = v28 - v12;
    v36 = v27 - v11;
    v37 = v27;
    if (v28 - v12 < 0) {
      v35 = v12 - v28;
    }
    while (1) {
      if ((unsigned int)(v13 * v13) < 2) {
        v45 = v37 - v11;
        if (v37 - v11 < 0) {
          v45 = v11 - v37;
        }
        if (v45 + v35 > v17) {
          goto LABEL_58;
        }
      }
      else {
        v38 = 10000;
        if (v13 >= 1) {
          v39 = v12;
          do {
            v40 = v28 - v39;
            v41 = v36;
            v42 = v11;
            if (v28 - v39 < 0) {
              v40 = v39 - v28;
            }
            do {
              ++v42;
              if (v41 >= 0) {
                v43 = v41;
              }
              else {
                v43 = -v41;
              }
              --v41;
              v44 = v43 + v40;
              if (v44 < v38) {
                v38 = v44;
              }
            } while (v42 < v13 + v11);
            ++v39;
          } while (v39 < v13 + v12);
        }
        if (v38 > v17) {
          goto LABEL_58;
        }
      }
      v68[32 * v16 + 2 + ((v28 + ((unsigned int)v37 >> 5)) & 0x7FFFFFF)] |=
          1 << v37;
    LABEL_58:
      ++v36;
      v31 = v37++ < v30;
      if (!v31) {
        v31 = v28++ < v29;
        if (!v31) {
          goto LABEL_43;
        }
        goto LABEL_55;
      }
    }
  }
  return result;
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
          *(_DWORD*)(*(_QWORD*)(v13 + 24) + 172LL) = DWORD3(v14);
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
