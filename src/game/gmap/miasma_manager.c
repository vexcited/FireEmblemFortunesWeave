#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_13261c0(_QWORD);
__int64 GameRoutine_133f1d0(_QWORD);
__int64 GameRoutine_14a1520(__int64*, char);
__int64 GameRoutine_14a6a10(__int64 result);
__int64 GameRoutine_14a7070(__int64);
__int64 GameRoutine_14a7290(__int64*);
__int64 GameRoutine_14a7c40(__int64 result, __int64);
__int64 GameRoutine_14a80a0(__int64 result, __int64);
__int64 GameRoutine_14aa940(_QWORD);
__int64 GameRoutine_14aaa70(_QWORD, _QWORD);
__int64 GameRoutine_15241d0(_QWORD);
__int64 atoi(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_gmap_SpotMgr_FindSpot(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 strchr(_QWORD, _QWORD);
extern __int64 (*GameData_2044990[])();
extern __int64 GameData_2131678;
extern __int64 GameData_21c96e8;
extern __int64 GameData_22416b0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c790;
extern __int64* GameData_212ca58[124];
extern __int64* GameData_212ca60[123];
void __attribute__((noreturn)) GameRoutine_14aace0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 MiasmaManager_Unknown2(__int64 a1);
__int64 MiasmaManager_Unknown3(__int64 result);
__int64 MiasmaManager_14a91c0(__int64 a1);
__int64* MiasmaManager_14a9960(__int64* result);
__int64 MiasmaManager_14a9bc0(__int64 result);
bool MiasmaManager_14a9ce0(__int64 a1, _QWORD* a2);
_DWORD* MiasmaManager_14aa1a0(_DWORD* result, __int64 a2);
__int64 MiasmaManager_14aa340_alt1(__int64 result, __int64 a2,
                                   int a3) __asm__("MiasmaManager_14aa340");
__int64 GameRoutine_13289e0(_QWORD);
__int64 GameRoutine_133dba0(_QWORD, _QWORD);
__int64 GameRoutine_14a6dc0(__int64, __int64);
__int64 Impl_13261c0(_QWORD);
__int64 MiasmaManager_14a6a10(__int64 result);
__int64 TroopMgr_13460a0(_QWORD);
extern __int64 (*GameData_2044770[])();
void __attribute__((noreturn)) GameRoutine_14aacc0(void);
__int64 MiasmaManager_14a9f60();
_QWORD* MiasmaManager_14aa940(_QWORD* result, __int64 a2);
__int64 MiasmaManager_14aaa70(__int64* a1, __int64 a2);
__int64 game_gmap_MiasmaManager_CountRegionMiasma_lambda0_Invoke(__int64 a1,
                                                                 __int64 a2);
extern __int64 (*GameData_2044668[])();
void __attribute__((noreturn))
GameRoutine_14aace0_alt1(_QWORD, _QWORD, _QWORD) __asm__("GameRoutine_14aace0");
void game_gmap_MiasmaManager_DisposHellGateBarrier_lambda0_Invoke(__int64 a1,
                                                                  __int64** a2);
__int64 TroopMgr_13460a0_alt1(__int64) __asm__("TroopMgr_13460a0");
__n128 GameRoutine_14a1520_alt1(_QWORD*, char) __asm__("GameRoutine_14a1520");
__n128 MiasmaManager_14a7290(_QWORD*);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
unsigned int*
MiasmaManager_14aa940_alt1(unsigned int* result,
                           __int64) __asm__("MiasmaManager_14aa940");
void MiasmaManager_14a6a10_alt1(unsigned __int64) __asm__(
    "MiasmaManager_14a6a10");
void MiasmaManager_14a9060(__int64 a1);
void MiasmaManager_14a9e00();
void MiasmaManager_14aa080();
__int64 MiasmaManager_14a7070(__int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
extern __int64 GameData_212ca58_alt1[124] __asm__("GameData_212ca58");
void MiasmaManager_14a7290_alt1(__int64*) __asm__("MiasmaManager_14a7290");
void MiasmaManager_14a80a0(__int64, __int64);
void __attribute__((noreturn))
GameRoutine_14aace0_alt2() __asm__("GameRoutine_14aace0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MiasmaManager_14aa340(__int64 a1, __int64 a2, int a3);

__int64 MiasmaManager_Unknown2(__int64 a1)
{
  __int64 result;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  *(_QWORD*)(a1 + 8) = result;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_BYTE*)(result + 72) = 0;
  return result;
}

__int64 MiasmaManager_Unknown3(__int64 result)
{
  __int64*** v1;
  __int64 v2;
  __int64** v3;
  __int64** v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64** v8;
  __int64** v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v1 = *(__int64****)(result + 8);
  v2 = result;
  v3 = *v1;
  v4 = v1[1];
  if (*v1 != v4) {
    v5 = fw_memory_g_heap_manager_ptr;
    do {
      v6 = *v3;
      if (*v3 != nullptr) {
        GameRoutine_14a7290(*v3);
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v7, v6);
      }
      ++v3;
    } while (v3 != v4);
    v3 = *v1;
  }
  v1[1] = v3;
  v8 = v1[3];
  v9 = v1[4];
  if (v8 != v9) {
    v10 = fw_memory_g_heap_manager_ptr;
    do {
      v11 = *v8;
      if (*v8 != nullptr) {
        GameRoutine_14a7290(*v8);
        if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v12, v11);
      }
      ++v8;
    } while (v8 != v9);
    v8 = v1[3];
  }
  v1[4] = v8;
  v13 = *(__int64**)(v2 + 8);
  if (v13 != nullptr) {
    v14 = v13[6];
    if (v14 != 0) {
      v13[7] = v14;
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v14);
    }
    v16 = v13[3];
    if (v16 != 0) {
      v13[4] = v16;
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
    }
    v18 = *v13;
    if (*v13 != 0) {
      v13[1] = v18;
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v18);
    }
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v13);
  }
  return result;
}

void MiasmaManager_14a9060(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  __int64* v4;
  int v5;
  __int64 v6;
  unsigned __int64* v7;
  unsigned __int64* v8;
  unsigned __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;

  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v3 = *(__int64**)(*GameData_212ca60[0] + 64);
    v4 = *(__int64**)(*GameData_212ca60[0] + 72);
    if (v3 == v4) {
      goto LABEL_10;
    }
    v5 = *(_DWORD*)(game_GameModeData_instance_ + 64);
    do {
      v6 = *v3;
      if (v5 == *(unsigned __int8*)(*v3 + 32) && *(_QWORD*)(v6 + 64) == 0) {
        MiasmaManager_14aa940_alt1((unsigned int*)a1, v6);
      }
      ++v3;
    } while (v3 != v4);
    v1 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
    LABEL_10:
      if (*(_DWORD*)(v1 + 60) == 3) {
        v7 = *(unsigned __int64**)a1;
        v8 = *(unsigned __int64**)(a1 + 8);
        if (*(unsigned __int64**)a1 != v8) {
          while (1) {
            v9 = *v7;
            v10 = *(_DWORD*)(*v7 + 8);
            *(_DWORD*)(v9 + 8) = 0;
            v13_.v13[0] = GameData_2044770;
            v13_.v13[1] = v9;
            v13_.v14 = v13_.v13;
            TroopMgr_13460a0_alt1((__int64)v13_.v13);
            if (v13_.v14 == v13_.v13) {
              break;
            }
            if (v13_.v14 != nullptr) {
              v11 = 40;
            LABEL_19:
              (*(void (**)(__int64))(*v13_.v14 + v11))((__int64)v13_.v14);
            }
            v12 = *(_DWORD*)(v9 + 8);
            if (v10 != v12) {
              if (v12 != 0) {
                MiasmaManager_14a6a10_alt1(v9);
              }
              else {
                GameRoutine_14a1520_alt1((_QWORD*)(v9 + 32), 1);
              }
            }
            if (++v7 == v8) {
              return;
            }
          }
          v11 = 32;
          goto LABEL_19;
        }
      }
    }
  }
}

__int64 MiasmaManager_14a91c0(__int64 a1)
{
  char v1;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  char v17;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64 v31;
  __int64* v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  _QWORD* v42;
  _QWORD* v43;
  __int64 v44;
  __int64* v45;
  __int64* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  _QWORD* v54;
  _QWORD* v55;
  _QWORD* v56;
  __int64 v57;
  __int64* v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  _QWORD* v67;
  _QWORD* v68;
  _QWORD* v69;
  __int64 v70;
  __int64* v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  _QWORD* v80;
  _QWORD* v81;
  _QWORD* v82;
  __int64 v83;
  __int64* v84;
  __int64* v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  _QWORD* v93;
  _QWORD* v94;
  _QWORD* v95;
  __int64 v96;
  __int64 v97;
  __int64* v98;
  __int64* v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  _QWORD* v107;
  _QWORD* v108;
  _QWORD* v109;
  __int64 v110;

  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v1 = *(_BYTE*)(a1 + 72);
    v3 = GameData_212ca60[0];
    if ((v1 & 1) == 0) {
      v4 = *(__int64**)(*GameData_212ca60[0] + 64);
      v5 = *(__int64**)(*GameData_212ca60[0] + 72);
      if (v4 != v5) {
        v6 = GameData_21c96e8;
        do {
          v7 = *v4;
          v8 = *(_QWORD*)(*v4 + 64);
          if (v8 != 0 && (unsigned int)*(unsigned __int8*)(v8 + 32) - 3 <= 1) {
            v9 = *(_QWORD*)(v8 + 8);
            if (v9 != 0) {
              v10 = strchr(*(_QWORD*)(v8 + 8), 95);
              if (v10 != 0) {
                v9 = v10 + 1;
              }
            }
            if ((unsigned int)atoi(v9 + 3) == 2) {
              v11 = game_gmap_SpotMgr_FindSpot(*(_QWORD*)(v7 + 48));
              if (v11 != 0) {
                v12 = *(_QWORD*)(v6 + 8);
                v13 = *(_QWORD**)(v12 + 8);
                v14 = *(_QWORD**)(v12 + 16);
                while (v13 != v14) {
                  v15 = (_QWORD*)*v13;
                  if (*(_QWORD*)*v13 == v11) {
                    v16 = v15[12];
                    if (v16 != 0 &&
                        (unsigned int)*(unsigned __int8*)(v16 + 32) - 3 < 2) {
                      if ((v15[68] & 8) == 0) {
                        break;
                      }
                      v17 = 1;
                    LABEL_156:
                      *(_BYTE*)(a1 + 72) = v17 | v1;
                      GameRoutine_14aa940(a1);
                      return 1;
                    }
                  }
                  ++v13;
                }
              }
            }
          }
          ++v4;
        } while (v4 != v5);
      }
    }
    if ((v1 & 2) == 0) {
      v19 = *(__int64**)(*v3 + 64);
      v20 = *(__int64**)(*v3 + 72);
      if (v19 != v20) {
        v21 = GameData_21c96e8;
        do {
          v22 = *v19;
          v23 = *(_QWORD*)(*v19 + 64);
          if (v23 != 0 &&
              (unsigned int)*(unsigned __int8*)(v23 + 32) - 3 <= 1) {
            v24 = *(_QWORD*)(v23 + 8);
            if (v24 != 0) {
              v25 = strchr(*(_QWORD*)(v23 + 8), 95);
              if (v25 != 0) {
                v24 = v25 + 1;
              }
            }
            if ((unsigned int)atoi(v24 + 3) == 3) {
              v26 = game_gmap_SpotMgr_FindSpot(*(_QWORD*)(v22 + 48));
              if (v26 != 0) {
                v27 = *(_QWORD*)(v21 + 8);
                v28 = *(_QWORD**)(v27 + 8);
                v29 = *(_QWORD**)(v27 + 16);
                while (v28 != v29) {
                  v30 = (_QWORD*)*v28;
                  if (*(_QWORD*)*v28 == v26) {
                    v31 = v30[12];
                    if (v31 != 0 &&
                        (unsigned int)*(unsigned __int8*)(v31 + 32) - 3 < 2) {
                      if ((v30[68] & 8) == 0) {
                        break;
                      }
                      v17 = 2;
                      goto LABEL_156;
                    }
                  }
                  ++v28;
                }
              }
            }
          }
          ++v19;
        } while (v19 != v20);
      }
    }
    if ((v1 & 4) == 0) {
      v32 = *(__int64**)(*v3 + 64);
      v33 = *(__int64**)(*v3 + 72);
      if (v32 != v33) {
        v34 = GameData_21c96e8;
        do {
          v35 = *v32;
          v36 = *(_QWORD*)(*v32 + 64);
          if (v36 != 0 &&
              (unsigned int)*(unsigned __int8*)(v36 + 32) - 3 <= 1) {
            v37 = *(_QWORD*)(v36 + 8);
            if (v37 != 0) {
              v38 = strchr(*(_QWORD*)(v36 + 8), 95);
              if (v38 != 0) {
                v37 = v38 + 1;
              }
            }
            if ((unsigned int)atoi(v37 + 3) == 4) {
              v39 = game_gmap_SpotMgr_FindSpot(*(_QWORD*)(v35 + 48));
              if (v39 != 0) {
                v40 = *(_QWORD*)(v34 + 8);
                v41 = *(_QWORD**)(v40 + 8);
                v42 = *(_QWORD**)(v40 + 16);
                while (v41 != v42) {
                  v43 = (_QWORD*)*v41;
                  if (*(_QWORD*)*v41 == v39) {
                    v44 = v43[12];
                    if (v44 != 0 &&
                        (unsigned int)*(unsigned __int8*)(v44 + 32) - 3 < 2) {
                      if ((v43[68] & 8) == 0) {
                        break;
                      }
                      v17 = 4;
                      goto LABEL_156;
                    }
                  }
                  ++v41;
                }
              }
            }
          }
          ++v32;
        } while (v32 != v33);
      }
    }
    if ((v1 & 8) == 0) {
      v45 = *(__int64**)(*v3 + 64);
      v46 = *(__int64**)(*v3 + 72);
      if (v45 != v46) {
        v47 = GameData_21c96e8;
        do {
          v48 = *v45;
          v49 = *(_QWORD*)(*v45 + 64);
          if (v49 != 0 &&
              (unsigned int)*(unsigned __int8*)(v49 + 32) - 3 <= 1) {
            v50 = *(_QWORD*)(v49 + 8);
            if (v50 != 0) {
              v51 = strchr(*(_QWORD*)(v49 + 8), 95);
              if (v51 != 0) {
                v50 = v51 + 1;
              }
            }
            if ((unsigned int)atoi(v50 + 3) == 5) {
              v52 = game_gmap_SpotMgr_FindSpot(*(_QWORD*)(v48 + 48));
              if (v52 != 0) {
                v53 = *(_QWORD*)(v47 + 8);
                v54 = *(_QWORD**)(v53 + 8);
                v55 = *(_QWORD**)(v53 + 16);
                while (v54 != v55) {
                  v56 = (_QWORD*)*v54;
                  if (*(_QWORD*)*v54 == v52) {
                    v57 = v56[12];
                    if (v57 != 0 &&
                        (unsigned int)*(unsigned __int8*)(v57 + 32) - 3 < 2) {
                      if ((v56[68] & 8) == 0) {
                        break;
                      }
                      v17 = 8;
                      goto LABEL_156;
                    }
                  }
                  ++v54;
                }
              }
            }
          }
          ++v45;
        } while (v45 != v46);
      }
    }
    if ((v1 & 0x10) == 0) {
      v58 = *(__int64**)(*v3 + 64);
      v59 = *(__int64**)(*v3 + 72);
      if (v58 != v59) {
        v60 = GameData_21c96e8;
        do {
          v61 = *v58;
          v62 = *(_QWORD*)(*v58 + 64);
          if (v62 != 0 &&
              (unsigned int)*(unsigned __int8*)(v62 + 32) - 3 <= 1) {
            v63 = *(_QWORD*)(v62 + 8);
            if (v63 != 0) {
              v64 = strchr(*(_QWORD*)(v62 + 8), 95);
              if (v64 != 0) {
                v63 = v64 + 1;
              }
            }
            if ((unsigned int)atoi(v63 + 3) == 6) {
              v65 = game_gmap_SpotMgr_FindSpot(*(_QWORD*)(v61 + 48));
              if (v65 != 0) {
                v66 = *(_QWORD*)(v60 + 8);
                v67 = *(_QWORD**)(v66 + 8);
                v68 = *(_QWORD**)(v66 + 16);
                while (v67 != v68) {
                  v69 = (_QWORD*)*v67;
                  if (*(_QWORD*)*v67 == v65) {
                    v70 = v69[12];
                    if (v70 != 0 &&
                        (unsigned int)*(unsigned __int8*)(v70 + 32) - 3 < 2) {
                      if ((v69[68] & 8) == 0) {
                        break;
                      }
                      v17 = 16;
                      goto LABEL_156;
                    }
                  }
                  ++v67;
                }
              }
            }
          }
          ++v58;
        } while (v58 != v59);
      }
    }
    if ((v1 & 0x20) == 0) {
      v71 = *(__int64**)(*v3 + 64);
      v72 = *(__int64**)(*v3 + 72);
      if (v71 != v72) {
        v73 = GameData_21c96e8;
        do {
          v74 = *v71;
          v75 = *(_QWORD*)(*v71 + 64);
          if (v75 != 0 &&
              (unsigned int)*(unsigned __int8*)(v75 + 32) - 3 <= 1) {
            v76 = *(_QWORD*)(v75 + 8);
            if (v76 != 0) {
              v77 = strchr(*(_QWORD*)(v75 + 8), 95);
              if (v77 != 0) {
                v76 = v77 + 1;
              }
            }
            if ((unsigned int)atoi(v76 + 3) == 7) {
              v78 = game_gmap_SpotMgr_FindSpot(*(_QWORD*)(v74 + 48));
              if (v78 != 0) {
                v79 = *(_QWORD*)(v73 + 8);
                v80 = *(_QWORD**)(v79 + 8);
                v81 = *(_QWORD**)(v79 + 16);
                while (v80 != v81) {
                  v82 = (_QWORD*)*v80;
                  if (*(_QWORD*)*v80 == v78) {
                    v83 = v82[12];
                    if (v83 != 0 &&
                        (unsigned int)*(unsigned __int8*)(v83 + 32) - 3 < 2) {
                      if ((v82[68] & 8) == 0) {
                        break;
                      }
                      v17 = 32;
                      goto LABEL_156;
                    }
                  }
                  ++v80;
                }
              }
            }
          }
          ++v71;
        } while (v71 != v72);
      }
    }
    if ((v1 & 0x40) == 0) {
      v84 = *(__int64**)(*v3 + 64);
      v85 = *(__int64**)(*v3 + 72);
      if (v84 != v85) {
        v86 = GameData_21c96e8;
        do {
          v87 = *v84;
          v88 = *(_QWORD*)(*v84 + 64);
          if (v88 != 0 &&
              (unsigned int)*(unsigned __int8*)(v88 + 32) - 3 <= 1) {
            v89 = *(_QWORD*)(v88 + 8);
            if (v89 != 0) {
              v90 = strchr(*(_QWORD*)(v88 + 8), 95);
              if (v90 != 0) {
                v89 = v90 + 1;
              }
            }
            if ((unsigned int)atoi(v89 + 3) == 8) {
              v91 = game_gmap_SpotMgr_FindSpot(*(_QWORD*)(v87 + 48));
              if (v91 != 0) {
                v92 = *(_QWORD*)(v86 + 8);
                v93 = *(_QWORD**)(v92 + 8);
                v94 = *(_QWORD**)(v92 + 16);
                while (v93 != v94) {
                  v95 = (_QWORD*)*v93;
                  if (*(_QWORD*)*v93 == v91) {
                    v96 = v95[12];
                    if (v96 != 0 &&
                        (unsigned int)*(unsigned __int8*)(v96 + 32) - 3 < 2) {
                      if ((v95[68] & 8) == 0) {
                        break;
                      }
                      v17 = 64;
                      goto LABEL_156;
                    }
                  }
                  ++v93;
                }
              }
            }
          }
          ++v84;
        } while (v84 != v85);
      }
    }
    if ((v1 & 0x80) == 0) {
      v97 = *v3;
      v98 = *(__int64**)(*v3 + 64);
      v99 = *(__int64**)(v97 + 72);
      if (v98 != v99) {
        v100 = GameData_21c96e8;
        do {
          v101 = *v98;
          v102 = *(_QWORD*)(*v98 + 64);
          if (v102 != 0 &&
              (unsigned int)*(unsigned __int8*)(v102 + 32) - 3 <= 1) {
            v103 = *(_QWORD*)(v102 + 8);
            if (v103 != 0) {
              v104 = strchr(*(_QWORD*)(v102 + 8), 95);
              if (v104 != 0) {
                v103 = v104 + 1;
              }
            }
            if ((unsigned int)atoi(v103 + 3) == 9) {
              v105 = game_gmap_SpotMgr_FindSpot(*(_QWORD*)(v101 + 48));
              if (v105 != 0) {
                v106 = *(_QWORD*)(v100 + 8);
                v107 = *(_QWORD**)(v106 + 8);
                v108 = *(_QWORD**)(v106 + 16);
                while (v107 != v108) {
                  v109 = (_QWORD*)*v107;
                  if (*(_QWORD*)*v107 == v105) {
                    v110 = v109[12];
                    if (v110 != 0 &&
                        (unsigned int)*(unsigned __int8*)(v110 + 32) - 3 < 2) {
                      if ((v109[68] & 8) == 0) {
                        break;
                      }
                      v17 = 0x80;
                      goto LABEL_156;
                    }
                  }
                  ++v107;
                }
              }
            }
          }
          ++v98;
        } while (v98 != v99);
      }
    }
  }
  return 0;
}

__int64* MiasmaManager_14a9960(__int64* result)
{
  __int64* v1;
  __int64** v2;
  __int64** v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64* v14;
  __int64 v15;
  __int64** v16;
  signed __int64 v17;
  __int64* i;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64** v24;
  __int64** v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;

  v1 = result;
  if (game_GameModeData_instance_ == 0) {
    v2 = (__int64**)*result;
    v3 = (__int64**)result[1];
    goto LABEL_25;
  }
  v2 = (__int64**)*result;
  v3 = (__int64**)result[1];
  if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
  LABEL_25:
    if (v2 != v3) {
      v21 = fw_memory_g_heap_manager_ptr;
      do {
        v22 = *v2;
        if (*v2 != nullptr) {
          GameRoutine_14a7290(*v2);
          if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) != 0) {
            v23 = 128;
          }
          else {
            v23 = 56;
          }
          result =
              (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v23, v22);
        }
        ++v2;
      } while (v2 != v3);
      v2 = (__int64**)*v1;
    }
    v24 = (__int64**)v1[3];
    v25 = (__int64**)v1[4];
    v1[1] = (__int64)v2;
    if (v24 != v25) {
      v26 = fw_memory_g_heap_manager_ptr;
      do {
        v27 = *v24;
        if (*v24 != nullptr) {
          GameRoutine_14a7290(*v24);
          if (*(_QWORD*)(*(_QWORD*)v26 + 200LL) != 0) {
            v28 = 128;
          }
          else {
            v28 = 56;
          }
          result =
              (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v26 + v28, v27);
        }
        ++v24;
      } while (v24 != v25);
      v24 = (__int64**)v1[3];
    }
    v1[4] = (__int64)v24;
    *((_BYTE*)v1 + 72) = 0;
    return result;
  }
  if (v2 != v3) {
    v4 = GameData_212c790;
    v5 = fw_memory_g_heap_manager_ptr;
    do {
      while (1) {
        result = *v2;
        v6 = (*v2)[14];
        if (v6 != 0) {
          v7 = *(_QWORD*)(v6 + 64);
          if (v7 != 0) {
            v8 = *(_QWORD*)(*v4 + 8);
            v9 = *(__int64**)(v8 + 8);
            v10 = *(__int64**)(v8 + 16);
            if (v9 != v10) {
              while (1) {
                v12 = *v9++;
                v11 = v12;
                if (*(_QWORD*)(v12 + 96) == v7) {
                  break;
                }
                if (v9 == v10) {
                  goto LABEL_5;
                }
              }
              v13 = GameRoutine_133f1d0(v11);
              result = *v2;
              if ((v13 & 1) != 0) {
                break;
              }
            }
          }
        }
      LABEL_5:
        result = (__int64*)GameRoutine_14a6a10((__int64)result);
        if (++v2 == (__int64**)v1[1]) {
          goto LABEL_21;
        }
      }
      if (result != nullptr) {
        v14 = *v2;
        GameRoutine_14a7290(result);
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        result =
            (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v15, v14);
      }
      v16 = (__int64**)v1[1];
      v17 = (char*)v16 - (char*)(v2 + 1);
      if (v16 != v2 + 1) {
        result = (__int64*)memmove(v2, v2 + 1, (char*)v16 - (char*)(v2 + 1));
      }
      v1[1] = (__int64)v2 + v17;
    } while (v2 != (__int64**)((char*)v2 + v17));
  }

LABEL_21:
  v19 = (__int64*)v1[6];
  for (i = (__int64*)v1[7]; v19 != i;
       result = (__int64*)GameRoutine_15241d0(v20)) {
    v20 = *v19++;
  }
  return result;
}

__int64 MiasmaManager_14a9bc0(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  signed __int64 v10;

  v1 = *(_QWORD*)(GameData_22416b0 + 8);
  v3 = *(_QWORD**)(v1 + 48);
  v2 = *(_QWORD**)(v1 + 56);
  if (v3 != v2) {
    v4 = result;
    v5 = fw_memory_g_heap_manager_ptr;
    do {
      while (1) {
        v6 = (_QWORD*)*v3;
        if (*(_QWORD*)*v3 == v4) {
          break;
        }
        if (++v3 == v2) {
          return result;
        }
      }
      GameRoutine_14a1520(v6 + 1, 1);
      v7 = v6[2];
      if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak();
      }
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
        v8 = 128;
      }
      else {
        v8 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v8, v6);
      v9 = *(char**)(v1 + 56);
      v10 = v9 - (char*)(v3 + 1);
      if (v9 != (char*)(v3 + 1)) {
        result = memmove(v3, v3 + 1, v9 - (char*)(v3 + 1));
      }
      v2 = (_QWORD*)((char*)v3 + v10);
      *(_QWORD*)(v1 + 56) = (char*)v3 + v10;
    } while (v3 != (_QWORD*)((char*)v3 + v10));
  }
  return result;
}

bool MiasmaManager_14a9ce0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v10;
  __int64** v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[4];
  _QWORD* v17;
  int v18;
  __int64 v19;

  v2 = a2[12];
  if (v2 != 0 && (unsigned int)*(unsigned __int8*)(v2 + 32) - 3 <= 1) {
    v3 = *a2;
    v4 = GameRoutine_13261c0(*a2);
    v7 = *(_QWORD*)(v3 + 136);
    if (v4 != 4 && v7 != 0) {
      v10 = v16;
      v18 = 0;
      v16[2] = v7;
      v16[0] = GameData_2044990;
      v16[1] = &v18;
      v17 = v16;
      v11 = *(__int64***)(GameData_22416b0 + 8);
      v12 = *v11;
      v13 = v11[1];
      if (*v11 == v13) {
        goto LABEL_16;
      }
      do {
        v14 = *v12++;
        v19 = v14;
        if (v17 == nullptr) {
          GameRoutine_60a310(0);
        }
        (*(void (**)(_QWORD*, __int64*))(*v17 + 48LL))(v17, &v19);
      } while (v12 != v13);
      v10 = v17;
      if (v17 == v16) {
      LABEL_16:
        v15 = 32;
      }
      else {
        if (v17 == nullptr) {
          return v18 < 2;
        }
        v15 = 40;
      }
      (*(void (**)(_QWORD*, __int64, __int64))(*v10 + v15))(v10, v5, v6);
      return v18 < 2;
    }
  }
  return false;
}

void MiasmaManager_14a9e00()
{

#pragma clang fp contract(off)
  _QWORD* v0;
  _QWORD** v1;
  _QWORD** v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  long double v10;
  __int64 v11;

  v0 = *(_QWORD**)(GameData_22416b0 + 8);
  v1 = (_QWORD**)*v0;
  v2 = (_QWORD**)v0[1];
  if ((_QWORD**)*v0 != v2) {
    v3 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v1 != nullptr) {
        MiasmaManager_14a7290(*v1);
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v4 = 128;
        }
        else {
          v4 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v4);
      }
      ++v1;
    } while (v1 != v2);
    v1 = (_QWORD**)*v0;
  }
  v5 = (__int64*)v0[6];
  v6 = (__int64*)v0[7];
  v0[1] = v1;
  if (v5 != v6) {
    v7 = fw_memory_g_heap_manager_ptr;
    do {
      v9 = *v5;
      if (*v5 != 0) {
        *(__n128*)&v10 = GameRoutine_14a1520_alt1((_QWORD*)(v9 + 8), 1);
        v11 = *(_QWORD*)(v9 + 16);
        if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v11 + 16LL))(v11, v10);
          std___1___shared_weak_count___release_weak_alt1();
        }
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v8);
      }
      ++v5;
    } while (v5 != v6);
    v5 = (__int64*)v0[6];
  }
  v0[7] = v5;
}

__int64 MiasmaManager_14a9f60()
{
  __int64** v0;
  __int64* v1;
  __int64* v2;
  char v3;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  _QWORD v9[4];
  _QWORD* v10;

  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v0 = *(__int64***)(GameData_22416b0 + 8);
    v1 = *v0;
    v2 = v0[1];
    if (*v0 != v2) {
      v3 = 0;
      while (1) {
        v4 = *v1;
        v5 = *(_DWORD*)(*v1 + 8);
        *(_DWORD*)(v4 + 8) = 0;
        v9[0] = GameData_2044770;
        v9[1] = v4;
        v10 = v9;
        TroopMgr_13460a0(v9);
        if (v10 == v9) {
          break;
        }
        if (v10 != nullptr) {
          v6 = 40;
        LABEL_11:
          (*(void (**)(void*))(*v10 + v6))(v10);
        }
        v7 = *(_DWORD*)(v4 + 8);
        if (v5 != v7) {
          if (v7 != 0) {
            MiasmaManager_14a6a10(v4);
            v3 = 1;
          }
          else {
            v3 = 1;
            GameRoutine_14a1520((__int64*)(v4 + 32), 1);
          }
        }
        if (++v1 == v2) {
          return v3 & 1;
        }
      }
      v6 = 32;
      goto LABEL_11;
    }
  }
  v3 = 0;
  return v3 & 1;
}

void MiasmaManager_14aa080()
{
  __int64 v0;
  _QWORD** v1;
  _QWORD** v2;
  __int64 v3;
  __int64 v4;
  _QWORD** v5;
  _QWORD** v6;
  __int64 v7;
  __int64 v8;

  v0 = *(_QWORD*)(GameData_22416b0 + 8);
  v1 = *(_QWORD***)v0;
  v2 = *(_QWORD***)(v0 + 8);
  if (*(_QWORD***)v0 != v2) {
    v3 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v1 != nullptr) {
        MiasmaManager_14a7290(*v1);
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v4 = 128;
        }
        else {
          v4 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v4);
      }
      ++v1;
    } while (v1 != v2);
    v1 = *(_QWORD***)v0;
  }
  *(_QWORD*)(v0 + 8) = v1;
  v5 = *(_QWORD***)(v0 + 24);
  v6 = *(_QWORD***)(v0 + 32);
  if (v5 != v6) {
    v7 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v5 != nullptr) {
        MiasmaManager_14a7290(*v5);
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v8);
      }
      ++v5;
    } while (v5 != v6);
    v5 = *(_QWORD***)(v0 + 24);
  }
  *(_QWORD*)(v0 + 32) = v5;
  *(_BYTE*)(v0 + 72) = 0;
}

_DWORD* MiasmaManager_14aa1a0(_DWORD* result, __int64 a2)
{
  _DWORD* v3;
  __int64 v4;
  unsigned int v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  unsigned int v12;
  __int64* v13;
  __int64* i;
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

  v3 = result;
  v4 = *(int*)(a2 + 20);
  v5 = (unsigned int)(result[2] - *result) >> 3;
  *(_DWORD*)(a2 + 20) = v4 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v4) = v5;
  v6 = *(__int64**)result;
  v7 = *((__int64**)result + 1);
  if (*(__int64**)result != v7) {
    do {
      v8 = *v6++;
      result = (_DWORD*)GameRoutine_14a7c40(v8, a2);
    } while (v6 != v7);
  }
  v9 = *(int*)(a2 + 20);
  v10 = *((_BYTE*)v3 + 72);
  *(_DWORD*)(a2 + 20) = v9 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = v10;
  v11 = *(int*)(a2 + 20);
  v12 = (unsigned int)(v3[14] - v3[12]) >> 3;
  *(_DWORD*)(a2 + 20) = v11 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = v12;
  v13 = *((__int64**)v3 + 6);
  for (i = *((__int64**)v3 + 7); v13 != i;
       *(_BYTE*)(*(_QWORD*)(a2 + 8) + v24) = HIBYTE(v17)) {
    v15 = *v13++;
    v16 = *(int*)(a2 + 20);
    v17 = **(_QWORD**)(*(_QWORD*)v15 + 96LL);
    *(_DWORD*)(a2 + 20) = v16 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = v17;
    v18 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v18 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = BYTE1(v17);
    v19 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v19 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v19) = BYTE2(v17);
    v20 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v20 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = BYTE3(v17);
    v21 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v21 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = BYTE4(v17);
    v22 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v22 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v22) = BYTE5(v17);
    v23 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v23 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23) = BYTE6(v17);
    v24 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v24 + 1;
  }
  return result;
}

void MiasmaManager_14aa340(__int64 a1, __int64 a2, int a3)
{
  __int64** v3;
  __int64** v4;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64** v11;
  __int64** v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  __int64* v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  __int64 v27;
  __int64* v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v44;
  unsigned __int64 v45;
  _QWORD* v46;
  _QWORD* v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64* v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  _QWORD* v56;
  __int64 v57;
  unsigned __int64 v58;
  _QWORD* v59;
  __int64 v60;
  char* v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;

  v3 = *(__int64***)a1;
  v4 = *(__int64***)(a1 + 8);
  if (*(__int64***)a1 != v4) {
    v8 = fw_memory_g_heap_manager_ptr;
    do {
      v9 = *v3;
      if (*v3 != nullptr) {
        MiasmaManager_14a7290_alt1(*v3);
        if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v8 + v10, (__int64)v9);
      }
      ++v3;
    } while (v3 != v4);
    v3 = *(__int64***)a1;
  }
  *(_QWORD*)(a1 + 8) = v3;
  v11 = *(__int64***)(a1 + 24);
  v12 = *(__int64***)(a1 + 32);
  if (v11 != v12) {
    v13 = fw_memory_g_heap_manager_ptr;
    do {
      v14 = *v11;
      if (*v11 != nullptr) {
        MiasmaManager_14a7290_alt1(*v11);
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v13 + v15, (__int64)v14);
      }
      ++v11;
    } while (v11 != v12);
    v11 = *(__int64***)(a1 + 24);
  }
  *(_QWORD*)(a1 + 32) = v11;
  v16 = *(int*)(a2 + 20);
  v17 = *(_QWORD*)(a2 + 8);
  v18 = v16 + 1;
  *(_DWORD*)(a2 + 20) = v16 + 1;
  v19 = *(unsigned __int8*)(v17 + v16);
  if (*(_BYTE*)(v17 + v16) != 0) {
    v20 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      v22 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v20, 136, 16, 0);
      MiasmaManager_14a7070((__int64)v22);
      MiasmaManager_14a80a0((__int64)v22, a2);
      if (v22[14] != 0) {
        MiasmaManager_14aaa70((__int64*)a1, (__int64)v22);
      }
      else {
        MiasmaManager_14a7290_alt1(v22);
        if (*(_QWORD*)(*v20 + 200) != 0) {
          v21 = 128;
        }
        else {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v20 + v21, (__int64)v22);
      }
      --v19;
    } while (v19 != 0);
    v18 = *(_DWORD*)(a2 + 20);
    v17 = *(_QWORD*)(a2 + 8);
  }
  *(_DWORD*)(a2 + 20) = v18 + 1;
  *(_BYTE*)(a1 + 72) = *(_BYTE*)(v17 + v18);
  if (a3 <= 0) {
    return;
  }
  v23 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v23 + 1;
  v24 = *(_QWORD*)(a2 + 8);
  v25 = *(unsigned __int8*)(v24 + v23);
  if (*(_BYTE*)(v24 + v23) == 0) {
    return;
  }
  v26 = 0;
  v27 = GameData_212ca58_alt1[0];
  v28 = GameData_212c790;
  v29 = (__int64*)fw_memory_g_heap_manager_ptr;
  v30 = GameData_2131678 + 16;
  while (2) {
    v32 = *(int*)(a2 + 20);
    v33 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v32 + 1;
    v34 = *(unsigned __int8*)(v33 + v32);
    *(_DWORD*)(a2 + 20) = v32 + 2;
    v35 = v34 | ((unsigned __int64)*(unsigned __int8*)(v33 + v32 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v32 + 3;
    v36 = v35 | ((unsigned __int64)*(unsigned __int8*)(v33 + v32 + 2) << 16);
    *(_DWORD*)(a2 + 20) = v32 + 4;
    v37 = v36 | ((unsigned __int64)*(unsigned __int8*)(v33 + v32 + 3) << 24);
    *(_DWORD*)(a2 + 20) = v32 + 5;
    v38 = v37 | ((unsigned __int64)*(unsigned __int8*)(v33 + v32 + 4) << 32);
    *(_DWORD*)(a2 + 20) = v32 + 6;
    v39 = v38 | ((unsigned __int64)*(unsigned __int8*)(v33 + v32 + 5) << 40);
    *(_DWORD*)(a2 + 20) = v32 + 7;
    v40 = *(unsigned __int8*)(v33 + v32 + 6);
    *(_DWORD*)(a2 + 20) = v32 + 8;
    v41 = v39 | (v40 << 48) |
          ((unsigned __int64)*(unsigned __int8*)(v33 + v32 + 7) << 56);
    if (v41 == 0) {
      goto LABEL_34;
    }
    v42 = *(_QWORD*)(*(_QWORD*)v27 + 96LL);
    if (v42 == 0 || *(_QWORD*)(*(_QWORD*)v27 + 112LL) == 0) {
      goto LABEL_34;
    }
    v44 = v42 - 1;
    if ((v42 & (v42 - 1)) != 0) {
      v45 = v41;
      if (v41 >= v42) {
        v45 = v41 % v42;
      }
    }
    else {
      v45 = v44 & v41;
    }
    v46 = *(_QWORD**)(*(_QWORD*)(*(_QWORD*)v27 + 88LL) + 8 * v45);
    if (v46 == nullptr) {
      goto LABEL_34;
    }
    v47 = (_QWORD*)*v46;
    if (v47 == nullptr) {
      goto LABEL_34;
    }
    if ((v42 & v44) == 0) {
      while (1) {
        v49 = v47[1];
        if (v49 == v41) {
          if (v47[2] == v41) {
            goto LABEL_60;
          }
        }
        else if ((v49 & v44) != v45) {
          goto LABEL_34;
        }
        v47 = (_QWORD*)*v47;
        if (v47 == nullptr) {
          goto LABEL_34;
        }
      }
    }
    while (1) {
      v48 = v47[1];
      if (v48 == v41) {
        break;
      }
      if (v48 >= v42) {
        v48 %= v42;
      }
      if (v48 != v45) {
        goto LABEL_34;
      }
    LABEL_49:
      v47 = (_QWORD*)*v47;
      if (v47 == nullptr) {
        goto LABEL_34;
      }
    }
    if (v47[2] != v41) {
      goto LABEL_49;
    }
  LABEL_60:
    v50 = v47[3];
    if (v50 != 0) {
      v51 = *(_QWORD*)(*v28 + 8);
      v52 = *(__int64**)(v51 + 8);
      v53 = *(__int64**)(v51 + 16);
      if (v52 != v53) {
        while (1) {
          v55 = *v52++;
          v54 = v55;
          if (*(_QWORD*)(v55 + 96) == v50) {
            break;
          }
          if (v52 == v53) {
            goto LABEL_34;
          }
        }
        v56 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v29, 24, 16, 0);
        *v56 = v54;
        v57 = fw_memory_HeapManager_Allocate_alt1(*v29, 296, 16, 0);
        v72 = v30;
        *(_QWORD*)v57 = v30;
        *(_QWORD*)(v57 + 8) = 0;
        *(_QWORD*)(v57 + 16) = 0;
        *(_DWORD*)(v57 + 32) = 0;
        *(_QWORD*)(v57 + 40) = 0;
        *(_DWORD*)(v57 + 104) = 0;
        *(_QWORD*)(v57 + 56) = 0;
        *(_QWORD*)(v57 + 64) = 0;
        *(_QWORD*)(v57 + 72) = 0;
        *(_DWORD*)(v57 + 48) = 0x2000;
        v59 = *(_QWORD**)(a1 + 56);
        v58 = *(_QWORD*)(a1 + 64);
        *(_WORD*)(v57 + 108) = 256;
        *(_WORD*)(v57 + 80) = 0;
        *(_DWORD*)(v57 + 112) = -1082130432;
        *(_WORD*)(v57 + 116) = 0;
        *(_WORD*)(v57 + 136) = 0;
        *(_BYTE*)(v57 + 160) = 0;
        *(_BYTE*)(v57 + 288) = 0;
        *(_QWORD*)(v57 + 272) = 0;
        *(_QWORD*)(v57 + 280) = 0;
        *(_QWORD*)(v57 + 256) = 0;
        *(_QWORD*)(v57 + 264) = 0;
        *(_QWORD*)(v57 + 240) = 0;
        *(_QWORD*)(v57 + 248) = 0;
        *(_QWORD*)(v57 + 224) = 0;
        *(_QWORD*)(v57 + 232) = 0;
        *(_QWORD*)(v57 + 208) = 0;
        *(_QWORD*)(v57 + 216) = 0;
        *(_QWORD*)(v57 + 192) = 0;
        *(_QWORD*)(v57 + 200) = 0;
        *(_QWORD*)(v57 + 176) = 0;
        *(_QWORD*)(v57 + 184) = 0;
        *(_QWORD*)(v57 + 168) = 0;
        *(_QWORD*)(v57 + 120) = 0;
        *(_DWORD*)(v57 + 127) = 0;
        *(_DWORD*)(v57 + 292) = 2;
        v56[2] = v57;
        *(_QWORD*)(v57 + 24) = 0;
        v56[1] = v57 + 24;
        if ((unsigned __int64)v59 < v58) {
          *v59 = v56;
          v31 = (__int64)(v59 + 1);
        }
        else {
          v60 = *(_QWORD*)(a1 + 48);
          v61 = (char*)v59 - v60;
          v62 = ((__int64)v59 - v60) >> 3;
          v63 = v62 + 1;
          if ((unsigned __int64)(v62 + 1) >> 61 != 0) {
            GameRoutine_14aace0_alt2();
          }
          v64 = v58 - v60;
          if (v64 >> 2 > v63) {
            v63 = v64 >> 2;
          }
          if ((unsigned __int64)v64 >= 0x7FFFFFFFFFFFFFF8LL) {
            v65 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v65 = v63;
          }
          if (v65 != 0) {
            if (v65 >> 61 != 0) {
              GameRoutine_60a210_alt1();
            }
            v66 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v65, 16, 0);
            v62 = ((__int64)v59 - v60) >> 3;
          }
          else {
            v66 = 0;
          }
          v67 = v66 + 8 * v65;
          v68 = (unsigned __int64)v59 - v60;
          v69 = (__int64)&v61[v66 + -8 * v62];
          v71 = v67;
          *(_QWORD*)&v61[v66] = v56;
          v31 = (__int64)&v61[v66 + 8];
          memcpy_alt1(v69, v60, v68);
          *(_QWORD*)(a1 + 48) = v69;
          *(_QWORD*)(a1 + 56) = v31;
          *(_QWORD*)(a1 + 64) = v71;
          if (v60 != 0) {
            v29 = (__int64*)fw_memory_g_heap_manager_ptr;
            v70 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v70 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v70, v60);
            v28 = GameData_212c790;
          }
          else {
            v28 = GameData_212c790;
            v29 = (__int64*)fw_memory_g_heap_manager_ptr;
          }
        }
        *(_QWORD*)(a1 + 56) = v31;
        v30 = v72;
      }
    }
  LABEL_34:
    if (++v26 != v25) {
      continue;
    }
    break;
  }
}

_QWORD* MiasmaManager_14aa940(_QWORD* result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;

  v2 = *result;
  v3 = result[1];
  if (*result != v3) {
    while (*(_QWORD*)(*(_QWORD*)v2 + 112LL) != a2) {
      v2 += 8;
      if (v2 == v3) {
        goto LABEL_6;
      }
    }
  }
  if (v2 == v3) {
  LABEL_6:
    v5 = result;
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        136, 16, 0);
    GameRoutine_14a6dc0(v6, a2);
    MiasmaManager_14aaa70(v5, v6);
    result = (_QWORD*)game_gmap_SpotMgr_FindSpot(*(_QWORD*)(a2 + 48));
    if (result != nullptr) {
      v7 = *(_QWORD*)(GameData_21c96e8 + 8);
      v8 = *(_QWORD**)(v7 + 8);
      v9 = *(_QWORD**)(v7 + 16);
      while (v8 != v9) {
        v10 = *v8;
        if (*(_QWORD**)*v8 == result && *(_QWORD*)(v10 + 96) == 0) {
          v11 = *(_QWORD*)(v10 + 552);
          if (v11 != 0 && *(_QWORD*)(v10 + 104) == 0 &&
              *(__int16*)(v10 + 642) * *(__int16*)(v10 + 640) *
                      *(__int16*)(v10 + 644) ==
                  0 &&
              *(_QWORD*)(v11 + 352) != 0) {
            return (_QWORD*)GameRoutine_133dba0(*v8, 3);
          }
        }
        ++v8;
      }
    }
  }
  return result;
}

__int64 MiasmaManager_14aaa70(__int64* a1, __int64 a2)
{
  unsigned __int64 v2;
  _QWORD* v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v3 = (_QWORD*)a1[1];
  v2 = a1[2];
  if ((unsigned __int64)v3 >= v2) {
    v7 = *a1;
    v8 = (__int64)v3 - *a1;
    v9 = (v8 >> 3) + 1;
    if (v9 >> 61 != 0) {
      GameRoutine_14aacc0();
    }
    v10 = v2 - v7;
    v11 = fw_memory_g_heap_manager_ptr;
    if (v10 >> 2 > v9) {
      v9 = v10 >> 2;
    }
    if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
      v12 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 >> 61 != 0) {
        GameRoutine_60a210(a1);
      }
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
    }
    else {
      v13 = 0;
    }
    v14 = v13 + 8 * v12;
    v15 = v13 + v8 - 8 * (v8 >> 3);
    *(_QWORD*)(v13 + v8) = a2;
    v6 = v13 + v8 + 8;
    memcpy(v15, v7, v8);
    *a1 = v15;
    a1[1] = v6;
    a1[2] = v14;
    if (v7 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16, v7);
    }
  }
  else {
    *v3 = a2;
    v6 = (__int64)(v3 + 1);
  }
  a1[1] = v6;
  v17 = game_gmap_SpotMgr_FindSpot(*(_QWORD*)(*(_QWORD*)(a2 + 112) + 48LL));
  return GameRoutine_13289e0(v17);
}

void game_gmap_MiasmaManager_DisposHellGateBarrier_lambda0_Invoke(__int64 a1,
                                                                  __int64** a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v10;
  __int64** v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64*** v16;
  __int64*** v17;
  __int64** v18;
  _QWORD* v19;
  __int64** v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64*** v26;
  __int64 v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  char* v36;
  __int64 v37;
  __int64 v38;
  _QWORD v39[4];
  _QWORD* v40;
  int v41;
  __int64 v42;

  v2 = *a2;
  v3 = (*a2)[12];
  if (v3 == 0) {
    return;
  }
  if ((unsigned int)*(unsigned __int8*)(v3 + 32) - 3 > 1) {
    return;
  }
  if ((v2[68] & 8) == 0) {
    return;
  }
  if ((GameRoutine_133f1d0(*a2) & 1) != 0) {
    return;
  }
  v4 = v2[12];
  if (v4 == 0 || (unsigned int)*(unsigned __int8*)(v4 + 32) - 3 > 1) {
    return;
  }
  v5 = *v2;
  v6 = *(_QWORD**)(GameData_22416b0 + 8);
  if ((unsigned __int8)Impl_13261c0(*v2) == 4 || *(_QWORD*)(v5 + 136) == 0) {
    return;
  }
  v39[2] = *(_QWORD*)(v5 + 136);
  v10 = v39;
  v41 = 0;
  v39[0] = GameData_2044990;
  v39[1] = &v41;
  v40 = v39;
  v11 = *(__int64***)(GameData_22416b0 + 8);
  v12 = *v11;
  v13 = v11[1];
  if (*v11 == v13) {
    goto LABEL_17;
  }
  do {
    v14 = *v12++;
    v42 = v14;
    if (v40 == nullptr) {
      GameRoutine_60a310(0);
    }
    (*(void (**)(_QWORD*, __int64*))(*v40 + 48LL))(v40, &v42);
  } while (v12 != v13);
  v10 = v40;
  if (v40 == v39) {
  LABEL_17:
    v15 = 32;
  }
  else {
    if (v40 == nullptr) {
      goto LABEL_19;
    }
    v15 = 40;
  }
  (*(void (**)(_QWORD*, __int64, __int64))(*v10 + v15))(v10, v7, v8);
LABEL_19:
  if (v41 >= 2) {
    v16 = (__int64***)v6[6];
    v17 = (__int64***)v6[7];
    if (v16 == v17) {
    LABEL_23:
      v19 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      v20 = (__int64**)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
      *v20 = v2;
      v21 = fw_memory_HeapManager_Allocate(*v19, 296, 16, 0);
      *(_QWORD*)(v21 + 8) = 0;
      *(_QWORD*)(v21 + 16) = 0;
      *(_DWORD*)(v21 + 32) = 0;
      *(_QWORD*)(v21 + 40) = 0;
      *(_DWORD*)(v21 + 104) = 0;
      *(_QWORD*)(v21 + 56) = 0;
      *(_QWORD*)(v21 + 64) = 0;
      *(_QWORD*)(v21 + 72) = 0;
      *(_WORD*)(v21 + 80) = 0;
      *(_WORD*)(v21 + 116) = 0;
      *(_WORD*)(v21 + 136) = 0;
      *(_BYTE*)(v21 + 160) = 0;
      *(_BYTE*)(v21 + 288) = 0;
      *(_QWORD*)(v21 + 272) = 0;
      *(_QWORD*)(v21 + 280) = 0;
      *(_QWORD*)(v21 + 256) = 0;
      *(_QWORD*)(v21 + 264) = 0;
      *(_QWORD*)(v21 + 240) = 0;
      *(_QWORD*)(v21 + 248) = 0;
      *(_QWORD*)(v21 + 224) = 0;
      *(_QWORD*)(v21 + 232) = 0;
      *(_QWORD*)(v21 + 208) = 0;
      *(_QWORD*)(v21 + 216) = 0;
      *(_QWORD*)(v21 + 192) = 0;
      *(_QWORD*)(v21 + 200) = 0;
      *(_QWORD*)(v21 + 176) = 0;
      *(_QWORD*)(v21 + 184) = 0;
      *(_QWORD*)(v21 + 168) = 0;
      *(_QWORD*)(v21 + 120) = 0;
      *(_DWORD*)(v21 + 127) = 0;
      v20[2] = (__int64*)v21;
      *(_QWORD*)v21 = GameData_2044668;
      *(_DWORD*)(v21 + 48) = 0x2000;
      *(_WORD*)(v21 + 108) = 256;
      *(_DWORD*)(v21 + 112) = -1082130432;
      *(_DWORD*)(v21 + 292) = 2;
      *(_QWORD*)(v21 + 24) = 0;
      v24 = v21 + 24;
      v20[1] = (__int64*)v24;
      v26 = (__int64***)v6[7];
      v25 = v6[8];
      if ((unsigned __int64)v26 >= v25) {
        v28 = v6[6];
        v29 = (char*)v26 - v28;
        v30 = ((__int64)v26 - v28) >> 3;
        v31 = v30 + 1;
        if ((unsigned __int64)(v30 + 1) >> 61 != 0) {
          GameRoutine_14aace0_alt1(v24, v22, v23);
        }
        v32 = v25 - v28;
        if (v32 >> 2 > v31) {
          v31 = v32 >> 2;
        }
        if ((unsigned __int64)v32 >= 0x7FFFFFFFFFFFFFF8LL) {
          v33 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v33 = v31;
        }
        if (v33 != 0) {
          if (v33 >> 61 != 0) {
            GameRoutine_60a210(v24);
          }
          v34 = fw_memory_HeapManager_Allocate(*v19, 8 * v33, 16, 0);
        }
        else {
          v34 = 0;
        }
        v35 = v34 + 8 * v33;
        v36 = (char*)v26 - v28;
        v37 = (__int64)&v29[v34 + -8 * v30];
        *(_QWORD*)&v29[v34] = v20;
        v27 = (__int64)&v29[v34 + 8];
        memcpy(v37, v28, v36);
        v6[6] = v37;
        v6[7] = v27;
        v6[8] = v35;
        if (v28 != 0) {
          v38 = 128;
          if (*(_QWORD*)(*v19 + 200LL) == 0) {
            v38 = 56;
          }
          nn_mem_StandardAllocator_Free(*v19 + v38, v28);
        }
      }
      else {
        *v26 = v20;
        v27 = (__int64)(v26 + 1);
      }
      v6[7] = v27;
      GameRoutine_15241d0(*(_QWORD*)(v27 - 8));
    }
    else {
      while (1) {
        v18 = *v16++;
        if (*v18 == v2) {
          break;
        }
        if (v16 == v17) {
          goto LABEL_23;
        }
      }
    }
  }
}

__int64 game_gmap_MiasmaManager_CountRegionMiasma_lambda0_Invoke(__int64 a1,
                                                                 __int64 a2)
{
  __int64 v3;
  __int64 result;
  __int64 v5;

  v3 = *(_QWORD*)(*(_QWORD*)a2 + 120LL);
  result = Impl_13261c0(v3);
  if ((unsigned __int8)result == 4) {
    v5 = 0;
  }
  else {
    v5 = *(_QWORD*)(v3 + 136);
  }
  if (v5 != 0 && v5 == *(_QWORD*)(a1 + 16)) {
    ++**(_DWORD**)(a1 + 8);
  }
  return result;
}

#pragma GCC visibility pop
