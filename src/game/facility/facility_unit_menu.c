#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenu_16e2460(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_15b7780(_QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 (*GameData_205e148[])();
extern __int64 GameData_205d9d8;
extern __int64 GameData_212d690;
extern __int64 game_g_game_setting_ptr;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212e008[9];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 FacilityUnitMenu_15e8f40(__int64* a1, _BYTE* a2);
_QWORD* game_facility_FacilityUnitMenu_Cancel(_QWORD* a1);
bool game_facility_FacilityUnitMenu_Cancel_lambda0_Invoke(__int64 a1,
                                                          __int64 a2);
_QWORD* game_UnitPool_Find_6ead60(__int64*, _DWORD*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 GameHr_157db40(__int64*, __int64**);
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 Util_1574d80(__int64*, char);
__int64 Util_15758f0(__int64, __int64, unsigned int, unsigned int, unsigned int,
                     char, char);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_gameui_15997d0(__int64 result, __int64, char);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern _UNKNOWN* game_kNoUnitListFlags_ptr;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_UnitListSet_instance_;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_740050();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void FacilityUnitMenu_15e8760(__int64* a1);

void FacilityUnitMenu_15e8760(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int16* v10;
  _WORD* v11;
  __int16 v12;
  int v13;
  char v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  char v18;
  __int64 v19;
  __int64* v20;
  char v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  _QWORD* v28;
  _WORD* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64* v35;
  __int64* v36;
  __int64 v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;
  __int64* v56;
  signed __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  __int64* v66;
  __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  __int64* v70;
  __int64* v71;
  unsigned __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64* v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  struct {
    __int64* v86;
    __int64 v87;
  } v86_;
  struct {
    __int64* v88;
    __int64* v89;
    __int64* v90;
  } v88_;
  struct {
    __int64 v91;
    __int64 v92;
  } v91_;
  int v93;
  __int64 v94;

  v2 = a1[42];
  if (v2 != 0) {
    v3 = __dynamic_cast(v2, GameData_212e008[0], &GameData_205d9d8, 0);
    if (v3 != 0) {
      v4 = *(_QWORD*)(v3 + 88);
      v5 = v3;
      if (v4 == 0 || (v6 = *(_QWORD*)(game_UnitListSet_instance_ +
                                      8LL * *(unsigned __int8*)(v3 + 96)),
                      v7 = *(_QWORD**)v6, v8 = *(_QWORD**)(v6 + 8), v7 == v8)) {
      LABEL_7:
        v9 = nullptr;
      }
      else {
        while (1) {
          v9 = (_QWORD*)*v7;
          if (*(_QWORD*)*v7 == v4) {
            break;
          }
          v7 += 2;
          if (v7 == v8) {
            goto LABEL_7;
          }
        }
        v22 = v7[1];
        if (v22 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
            std___1___shared_weak_count___release_weak(v22);
          }
        }
      }
      v10 = (__int16*)(v9 + 6);
      v11 = game_kNoUnitListFlags_ptr;
      if (v9 == nullptr) {
        v10 = (__int16*)game_kNoUnitListFlags_ptr;
      }
      v12 = *v10;
      v13 = *v10 & 0x3B;
      v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 616LL))(v5);
      v15 = -1;
      if (v13 == 0 && (v14 & 1) != 0) {
        v15 = *(char*)(v4 + 2090);
      }
      if ((v12 & 0x1B) != 0) {
        v16 = 6;
        v17 = 2;
      }
      else {
        v17 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 632LL))(v5);
        v16 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 640LL))(v5);
      }
      LayoutAccessor_1560070((void*)(&v91_.v91), a1 + 106, "L_HubUnitInfo");
      v18 = (*(__int64 (**)(__int64*))(*a1 + 1224))(a1);
      Util_15758f0((__int64)&v91_.v91, v4, v15, v17, v16, v18 & 1, 0);
      if (v91_.v92 != 0) {
        std___1___shared_weak_count___release_weak(v91_.v92);
      }
      LayoutAccessor_1560070((void*)(&v88_.v88), a1 + 106, "L_HubUnitInfo");
      if (v88_.v89 != nullptr) {
        v19 = std___1___shared_weak_count_lock((__int64)v88_.v89);
        v20 = v88_.v88;
        if (v88_.v89 != nullptr) {
          std___1___shared_weak_count___release_weak((__int64)v88_.v89);
        }
        if (v19 != 0 && v20 != nullptr) {
          if (((*(__int64 (**)(__int64*))(*a1 + 1216))(a1) & 1) != 0) {
            v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 592LL))(v5);
            game_gameui_15997d0((__int64)v20, v4, v21 & 1);
          }
          else {
            LayoutAccessor_1562cf0((__int64)v20,
                                   (unsigned int*)"Condition_Off");
          }
          v23 = LayoutAccessor_155fbe0(v20, "L_UnitInfo");
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 576LL))(v5) & 1) != 0) {
            goto LABEL_40;
          }
          v24 = *(_QWORD*)(v5 + 88);
          if (v24 == 0 ||
              (v25 = *(_QWORD*)(game_UnitListSet_instance_ +
                                8LL * *(unsigned __int8*)(v5 + 96)),
               v26 = *(_QWORD**)v25, v27 = *(_QWORD**)(v25 + 8), v26 == v27)) {
          LABEL_36:
            v28 = nullptr;
          }
          else {
            while (1) {
              v28 = (_QWORD*)*v26;
              if (*(_QWORD*)*v26 == v24) {
                break;
              }
              v26 += 2;
              if (v26 == v27) {
                goto LABEL_36;
              }
            }
            v84 = v26[1];
            if (v84 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v84 + 8), 1u,
                                        memory_order_relaxed);
              if (atomic_fetch_add((atomic_ullong* volatile)(v84 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v84 + 16LL))(v84);
                std___1___shared_weak_count___release_weak(v84);
              }
            }
          }
          v29 = v28 + 6;
          if (v28 == nullptr) {
            v29 = v11;
          }
          if ((*v29 & 0x3B) == 0) {
          LABEL_40:
            LOBYTE(v12) = 0;
          }
          Util_1574d80(v23, v12);
        }
        else if (v19 == 0) {
          goto LABEL_44;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
          std___1___shared_weak_count___release_weak(v19);
        }
      }
    }
  }
LABEL_44:
  if (((*(__int64 (**)(__int64*))(*a1 + 1200))(a1) & 1) != 0) {
    v30 = a1[149];
    v31 = a1[148];
    v88_.v89 = nullptr;
    v88_.v90 = nullptr;
    v88_.v88 = nullptr;
    v32 = (v30 - v31) >> 3;
    if (((*(__int64 (**)(__int64*))(*a1 + 1192))(a1) & 1) != 0) {
      v33 = game_GameModeData_instance_;
      v85 = v32 + 1;
      if (game_GameModeData_instance_ != 0) {
        v33 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      v94 = v33;
      v93 = 241;
      v34 = game_UnitPool_Find_6ead60(&v94, &v93);
      v35 = (__int64*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
      *v35 = (__int64)v34;
      v36 = v35 + 1;
      v88_.v90 = v35 + 1;
      v88_.v88 = v35;
      v88_.v89 = v35 + 1;
    }
    else {
      v85 = v32;
      v36 = nullptr;
    }
    if (*((int*)a1 + 302) >= 1) {
      v37 = 0;
      v38 = (__int64*)fw_memory_g_heap_manager_ptr;
      do {
        v40 = a1[148];
        if (v36 < v88_.v90) {
          *v36++ = *(_QWORD*)(v40 + 8 * v37);
        }
        else {
          v41 = v88_.v88;
          v42 = (char*)v36 - (char*)v88_.v88;
          v43 = v36 - v88_.v88;
          v44 = v43 + 1;
          if ((unsigned __int64)(v43 + 1) >> 61 != 0) {
            goto LABEL_130;
          }
          v45 = (char*)v88_.v90 - (char*)v88_.v88;
          if (((char*)v88_.v90 - (char*)v88_.v88) >> 2 > v44) {
            v44 = v45 >> 2;
          }
          if ((unsigned __int64)v45 >= 0x7FFFFFFFFFFFFFF8LL) {
            v46 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v46 = v44;
          }
          if (v46 != 0) {
            if (v46 >> 61 != 0) {
              goto LABEL_131;
            }
            v47 = fw_memory_HeapManager_Allocate(*v38, 8 * v46, 16, 0);
          }
          else {
            v47 = 0;
          }
          v48 = *(_QWORD*)(v40 + 8 * v37);
          v49 = v47 + 8 * v46;
          v50 = (__int64*)(v47 + v42 - 8 * v43);
          *(_QWORD*)(v47 + v42) = v48;
          v36 = (__int64*)(v47 + v42 + 8);
          memcpy((__int64)v50, (__int64)v41, v42);
          v88_.v88 = v50;
          v88_.v90 = (__int64*)v49;
          if (v41 != nullptr) {
            v51 = 128;
            if (*(_QWORD*)(*v38 + 200) == 0) {
              v51 = 56;
            }
            nn_mem_StandardAllocator_Free(*v38 + v51, (__int64)v41);
          }
        }
        v39 = *((int*)a1 + 302);
        ++v37;
        v88_.v89 = v36;
      } while (v37 < v39);
    }
    v52 = a1[42];
    if (v52 != 0) {
      v53 = __dynamic_cast(v52, GameData_212e008[0], &GameData_205d9d8, 0);
      if (v53 != 0) {
        v54 = *(_QWORD*)(v53 + 88);
        if (v54 != 0) {
          v55 = v88_.v88;
          if (v88_.v88 == v36) {
            goto LABEL_78;
          }
          v56 = v88_.v88;
          while (*v56 != v54) {
            if (++v56 == v36) {
              goto LABEL_78;
            }
          }
          if (v56 == v36) {
          LABEL_78:
            if (v36 >= v88_.v90) {
              v57 = (char*)v36 - (char*)v88_.v88;
              v58 = v36 - v88_.v88;
              v59 = v58 + 1;
              if ((unsigned __int64)(v58 + 1) >> 61 != 0) {
              LABEL_130:
                GameRoutine_740050();
              }
              v60 = (char*)v88_.v90 - (char*)v88_.v88;
              v61 = fw_memory_g_heap_manager_ptr;
              if (((char*)v88_.v90 - (char*)v88_.v88) >> 2 > v59) {
                v59 = v60 >> 2;
              }
              if ((unsigned __int64)v60 >= 0x7FFFFFFFFFFFFFF8LL) {
                v62 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v62 = v59;
              }
              if (v62 != 0) {
                if (v62 >> 61 != 0) {
                LABEL_131:
                  GameRoutine_60a210();
                }
                v63 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v62, 16, 0);
              }
              else {
                v63 = 0;
              }
              v64 = v63 + 8 * v62;
              v65 = (char*)v36 - (char*)v55;
              v66 = (__int64*)(v63 + v57 - 8 * v58);
              *(_QWORD*)(v63 + v57) = v54;
              v36 = (__int64*)(v63 + v57 + 8);
              memcpy((__int64)v66, (__int64)v55, v65);
              v88_.v88 = v66;
              v88_.v90 = (__int64*)v64;
              if (v55 != nullptr) {
                v67 = 128;
                if (*(_QWORD*)(*(_QWORD*)v61 + 200LL) == 0) {
                  v67 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v61 + v67,
                                              (__int64)v55);
              }
            }
            else {
              *v36++ = v54;
            }
            v88_.v89 = v36;
          }
        }
      }
    }
    v68 = v36 - v88_.v88;
    v69 = v85 - v68;
    if (v85 > v68) {
      v70 = (__int64*)fw_memory_g_heap_manager_ptr;
      do {
        if (v36 < v88_.v90) {
          *v36++ = 0;
        }
        else {
          v71 = v88_.v88;
          v72 = (char*)v36 - (char*)v88_.v88;
          v73 = v36 - v88_.v88;
          v74 = v73 + 1;
          if ((unsigned __int64)(v73 + 1) >> 61 != 0) {
            goto LABEL_130;
          }
          v75 = (char*)v88_.v90 - (char*)v88_.v88;
          if (((char*)v88_.v90 - (char*)v88_.v88) >> 2 > v74) {
            v74 = v75 >> 2;
          }
          if ((unsigned __int64)v75 >= 0x7FFFFFFFFFFFFFF8LL) {
            v76 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v76 = v74;
          }
          if (v76 != 0) {
            if (v76 >> 61 != 0) {
              goto LABEL_131;
            }
            v77 = fw_memory_HeapManager_Allocate(*v70, 8 * v76, 16, 0);
          }
          else {
            v77 = 0;
          }
          v78 = v77 + 8 * v76;
          v79 = (__int64*)(v77 + v72 - 8 * v73);
          *(_QWORD*)(v77 + v72) = 0;
          v36 = (__int64*)(v77 + v72 + 8);
          memcpy((__int64)v79, (__int64)v71, v72);
          v88_.v88 = v79;
          v88_.v90 = (__int64*)v78;
          if (v71 != nullptr) {
            v80 = 128;
            if (*(_QWORD*)(*v70 + 200) == 0) {
              v80 = 56;
            }
            nn_mem_StandardAllocator_Free(*v70 + v80, (__int64)v71);
          }
        }
        --v69;
        v88_.v89 = v36;
      } while (v69 != 0);
    }
    LayoutAccessor_1560070((void*)(&v86_.v86), a1 + 106, "L_Reliance");
    if (v86_.v87 != 0) {
      v81 = std___1___shared_weak_count_lock(v86_.v87);
      if (v81 != 0) {
        v82 = v81;
        if (v86_.v86 != nullptr) {
          GameHr_157db40(v86_.v86, &v88_.v88);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v82 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v82 + 16LL))(v82);
          std___1___shared_weak_count___release_weak(v82);
        }
      }
      if (v86_.v87 != 0) {
        std___1___shared_weak_count___release_weak(v86_.v87);
      }
    }
    if (v88_.v88 != nullptr) {
      v83 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v83 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v83, (__int64)v88_.v88);
    }
  }
}

__int64 FacilityUnitMenu_15e8f40(__int64* a1, _BYTE* a2)
{
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  if (((*(__int64 (**)(_BYTE*))(*(_QWORD*)a2 + 464LL))(a2) & 1) == 0 ||
      (a2[79] & 1) != 0) {
    return 0;
  }
  (*(void (**)(_BYTE*, __int64))(*(_QWORD*)a2 + 56LL))(a2, 1);
  v5 = (__int64*)a1[148];
  v6 = a1[149] - (_QWORD)v5;
  if (v6 != 0) {
    v7 = v6 >> 3;
    v8 = 1;
    while (1) {
      v9 = *v5++;
      if (v9 == 0) {
        break;
      }
      ++v8;
      if (--v7 == 0) {
        goto LABEL_8;
      }
    }
  }
  else {
  LABEL_8:
    v8 = 0;
  }
  *((_DWORD*)a2 + 10) = v8 + ((*(__int64 (**)(__int64*))(*a1 + 1192))(a1) & 1);
  v10 = a1[149];
  v11 = a1[148];
  if (v10 == v11) {
  LABEL_13:
    v16 = -1;
  }
  else {
    v12 = (v10 - v11) >> 3;
    v13 = 0;
    v14 = (__int64*)a1[148];
    while (1) {
      v15 = *v14++;
      if (v15 == 0) {
        break;
      }
      v13 += 0x100000000LL;
      if (--v12 == 0) {
        goto LABEL_13;
      }
    }
    v16 = v13 >> 32;
  }
  *(_QWORD*)(v11 + 8 * v16) = *((_QWORD*)a2 + 11);
  (*(void (**)(__int64*, _BYTE*))(*a1 + 1248))(a1, a2);
  GameRoutine_15b7780(a2);
  v17 = *a1;
  ++*((_DWORD*)a1 + 302);
  (*(void (**)(__int64*))(v17 + 1192))(a1);
  v18 = ui_LayoutAccessor_FindPane(a1 + 119, "L_Num/T_Num");
  if (v18 != 0) {
    v19 = __dynamic_cast(v18, GameData_212d670[0], GameData_212d690, 0);
    if (v19 != 0) {
      GameRoutine_156c910(v19, "%d", 1);
    }
  }
  return 1;
}

_QWORD* game_facility_FacilityUnitMenu_Cancel(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* result;
  char* v8;
  char* v9;
  unsigned __int64 v10;
  __int64 v11;
  char* v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64* v15;
  __int64 v16;
  _DWORD* v17;
  __int64 v18;
  _DWORD* v19;
  __int64 v20;
  int v21;
  _QWORD* v22;
  __int64 v23;
  int v24;
  _QWORD v25[4];
  _QWORD* v26;
  __int64 v27;

  v2 = (__int64*)(a1[149] - 8LL);
  do {
    v4 = *v2--;
    v3 = v4;
  } while (v4 == 0);
  if (((*(__int64 (**)(_QWORD*))(*a1 + 1208LL))(a1) & 1) == 0 ||
      (v6 = a1[42]) == 0 ||
      (result = (_QWORD*)__dynamic_cast(v6, GameData_212e008[0],
                                        &GameData_205d9d8, 0)) == nullptr ||
      *((_BYTE*)result + 79) != 1 || (v3 = result[11]) != 0) {
    v8 = (char*)a1[148];
    v9 = (char*)a1[149];
    if (v8 != v9) {
      v10 = v9 - v8 - 8;
      if ((~(_BYTE)v10 & 0x18) != 0) {
        v11 = ((unsigned __int8)((unsigned int)v10 >> 3) + 1) & 3;
        while (*(_QWORD*)v8 != v3) {
          v8 += 8;
          if (--v11 == 0) {
            goto LABEL_13;
          }
        }
      LABEL_23:
        *(_QWORD*)v8 = 0;
      }
      else {
      LABEL_13:
        if (v10 >= 0x18) {
          v8 += 16;
          while (1) {
            if (*((_QWORD*)v8 - 2) == v3) {
              *((_QWORD*)v8 - 2) = 0;
              goto LABEL_24;
            }
            if (*((_QWORD*)v8 - 1) == v3) {
              v8 -= 8;
              goto LABEL_23;
            }
            if (*(_QWORD*)v8 == v3) {
              goto LABEL_23;
            }
            if (*((_QWORD*)v8 + 1) == v3) {
              break;
            }
            v12 = v8 + 16;
            v8 += 32;
            if (v12 == v9) {
              goto LABEL_24;
            }
          }
          *((_QWORD*)v8 + 1) = 0;
        }
      }
    }
  LABEL_24:
    v13 = (_QWORD*)a1[29];
    v14 = (_QWORD*)a1[30];
    result = v25;
    v25[0] = GameData_205e148;
    v25[1] = v3;
    v26 = v25;
    if (v13 == v14) {
      v17 = nullptr;
    }
    else {
      v15 = GameData_212e008[0];
      while (1) {
        if (*v13 != 0) {
          v16 = __dynamic_cast(*v13, v15, &GameData_205d9d8, 0);
          if (v16 != 0) {
            v17 = (_DWORD*)v16;
            v27 = v16;
            if (v26 == nullptr) {
              GameRoutine_60a310(0, v5);
            }
            if (((*(__int64 (**)(_QWORD*, __int64*))(*v26 + 48LL))(v26, &v27) &
                 1) != 0) {
              break;
            }
          }
        }
        if (++v13 == v14) {
          v17 = nullptr;
          break;
        }
      }
      result = v26;
      if (v26 != v25) {
        if (v26 != nullptr) {
          v18 = 40;
        LABEL_38:
          result = (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v18))(
              result, v5);
        }
        if (v17 == nullptr) {
          return result;
        }
        (*(void (**)(_DWORD*, _QWORD))(*(_QWORD*)v17 + 56LL))(v17, 0);
        (*(void (**)(_QWORD*, _DWORD*))(*a1 + 1256LL))(a1, v17);
        v17[10] = 0;
        GameRoutine_15b7780(v17);
        v19 = (_DWORD*)a1[42];
        if (v19 != v17) {
          if (v19 != nullptr) {
            (*(void (**)(_DWORD*))(*(_QWORD*)v19 + 168LL))(v19);
          }
          a1[42] = v17;
          _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 0, 1, 0);
          v20 = a1[42];
          if (v20 == 0) {
            v21 = 4;
          LABEL_50:
            v23 = a1[22];
            v22 = a1 + 22;
            *((_DWORD*)v22 + 45) = *((_DWORD*)v22 + 45) & 0xFFFFFFFB | v21;
            v24 = (*(__int64 (**)(_QWORD*))(v23 + 16))(v22);
            result = (_QWORD*)BasicMenu_16e2460(v22[1], 1, 0);
            *((_DWORD*)v22 + 4) = (int)result % v24;
            return result;
          }
          (*(void (**)(__int64))(*(_QWORD*)v20 + 160LL))(v20);
          game_IsVibrationEnabled(*(_QWORD*)game_g_game_setting_ptr + 712LL);
          v19 = (_DWORD*)a1[42];
        }
        v21 = 4;
        if (v19 != nullptr) {
          if (((*(__int64 (**)(_DWORD*))(*(_QWORD*)v19 + 120LL))(v19) & 1) !=
              0) {
            v21 = 4;
          }
          else {
            v21 = 0;
          }
        }
        goto LABEL_50;
      }
    }
    v18 = 32;
    goto LABEL_38;
  }
  return result;
}

bool game_facility_FacilityUnitMenu_Cancel_lambda0_Invoke(__int64 a1,
                                                          __int64 a2)
{
  return *(_QWORD*)(*(_QWORD*)a2 + 88LL) == *(_QWORD*)(a1 + 8);
}

#pragma GCC visibility pop
