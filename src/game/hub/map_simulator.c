#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_102e240(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_102e7c0(_QWORD);
__int64 GameRoutine_102f560(_QWORD, _QWORD);
__int64 GameRoutine_102f7e0(_QWORD, _QWORD);
__int64 GameRoutine_d8fca0(_QWORD);
__int64 GameRoutine_f71cb0(__int64, int);
__int64 GameRoutine_f71d40(__int64, __int64, __int64);
__int64 GameRoutine_f71fc0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_fb6c60(_QWORD);
__int64 GameRoutine_fb6e10(__int64);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2002c80[])();
extern __int64 (*GameData_2002d00[])();
extern __int64 (*game_hub_MapSimulator_vtable[])();
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dc68;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64* GameData_212d458[7];
extern __int64* GameData_212ebb0[7];
extern __int64* GameData_212ebe0;
extern __int64* GameData_212ec18[2];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
__n128
MapSimulator_Destructor_alt1(__int64 a1) __asm__("MapSimulator_Destructor");
_QWORD* game_hub_MapSimulator_Build_MinimapIcon_alt1(
    __int64 a1, __int64 a2,
    unsigned __int64 a3) __asm__("game_hub_MapSimulator_Build_MinimapIcon");
_QWORD* game_hub_MapSimulator_Build_CondTalk_alt1(
    __int64 a1, __int64 a2,
    unsigned __int64 a3) __asm__("game_hub_MapSimulator_Build_CondTalk");
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21f3cb0;
extern __int64 GameData_21f3d10;
__attribute__((swiftcall)) void MapSimulator_102b410(PSEUDO_X8 x8_, __int64 a1,
                                                     __n128 result);
__int64 GameRoutine_102f560_alt1(__int64*,
                                 __int64) __asm__("GameRoutine_102f560");
__int64 GameRoutine_102f7e0_alt1(__int64*,
                                 __int64) __asm__("GameRoutine_102f7e0");
__int64 GameRoutine_fb6c60_alt1(__int64 result) __asm__("GameRoutine_fb6c60");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 game_hub_102e240(__int64, __int128*, __int64*);
__int64 game_hub_f71fc0(__int64, __int64, __int64);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
bool GameRoutine_d8fca0_alt1(__int64) __asm__("GameRoutine_d8fca0");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
void GameRoutine_102e7c0_alt1(__int64) __asm__("GameRoutine_102e7c0");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MapSimulator_Destructor(__int64 a1);
_QWORD* game_hub_MapSimulator_Build_MinimapIcon(__int64 a1);
_QWORD* game_hub_MapSimulator_Build_CondTalk(__int64 a1);

void MapSimulator_Destructor(__int64 a1)
{
  __int64 v1;
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
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;

  v1 = *(_QWORD*)(a1 + 232);
  *(_QWORD*)a1 = game_hub_MapSimulator_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)(a1 + 240);
    if (v1 == v4) {
      goto LABEL_21;
    }
    do {
      v5 = *(_QWORD*)(v4 - 16);
      if (v5 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v5);
      }
      if (*(_BYTE*)(v4 - 32) == 1) {
        if ((*(_BYTE*)(v4 - 64) & 1) != 0) {
          v6 = *(_QWORD*)(v4 - 48);
          if (v6 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v7 = 128;
            }
            else {
              v7 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v7, v6);
          }
        }
        if ((*(_BYTE*)(v4 - 88) & 1) != 0) {
          v8 = *(_QWORD*)(v4 - 72);
          if (v8 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v9 = 128;
            }
            else {
              v9 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v9, v8);
          }
        }
      }
      v4 -= 112;
    } while (v4 != v1);
    v10 = *(_QWORD*)(a1 + 232);
    *(_QWORD*)(a1 + 240) = v1;
    v1 = v10;
    if (v10 != 0) {
    LABEL_21:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v11, v1);
    }
  }
  v12 = *(_QWORD*)(a1 + 208);
  if (v12 != 0) {
    v13 = *(_QWORD*)(a1 + 216);
    if (v12 == v13) {
      goto LABEL_28;
    }
    do {
      v13 -= 176;
      GameRoutine_102e7c0_alt1(v13);
    } while (v13 != v12);
    v14 = *(_QWORD*)(a1 + 208);
    *(_QWORD*)(a1 + 216) = v12;
    v12 = v14;
    if (v14 != 0) {
    LABEL_28:
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v15, v12);
    }
  }
  v16 = *(_QWORD*)(a1 + 184);
  if (v16 != 0) {
    v17 = *(_QWORD*)(a1 + 192);
    if (v16 == v17) {
      goto LABEL_49;
    }
    do {
      if (*(_BYTE*)(v17 - 16) == 1) {
        if ((*(_BYTE*)(v17 - 48) & 1) != 0) {
          v18 = *(_QWORD*)(v17 - 32);
          if (v18 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v19 = 128;
            }
            else {
              v19 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v19, v18);
          }
        }
        if ((*(_BYTE*)(v17 - 72) & 1) != 0) {
          v20 = *(_QWORD*)(v17 - 56);
          if (v20 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v21 = 128;
            }
            else {
              v21 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v21, v20);
          }
        }
      }
      v17 -= 96;
    } while (v17 != v16);
    v22 = *(_QWORD*)(a1 + 184);
    *(_QWORD*)(a1 + 192) = v16;
    v16 = v22;
    if (v22 != 0) {
    LABEL_49:
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v23, v16);
    }
  }
  v24 = *(_QWORD*)(a1 + 160);
  if (v24 != 0) {
    v25 = *(_QWORD*)(a1 + 168);
    if (v24 == v25) {
      goto LABEL_76;
    }
    do {
      if ((*(_BYTE*)(v25 - 32) & 1) != 0) {
        v26 = *(_QWORD*)(v25 - 16);
        if (v26 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v27 = 128;
          }
          else {
            v27 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v27, v26);
        }
      }
      if (*(_BYTE*)(v25 - 48) == 1) {
        if ((*(_BYTE*)(v25 - 80) & 1) != 0) {
          v28 = *(_QWORD*)(v25 - 64);
          if (v28 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v29 = 128;
            }
            else {
              v29 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v29, v28);
          }
        }
        if ((*(_BYTE*)(v25 - 104) & 1) != 0) {
          v30 = *(_QWORD*)(v25 - 88);
          if (v30 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v31 = 128;
            }
            else {
              v31 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v31, v30);
          }
        }
      }
      v25 -= 128;
    } while (v25 != v24);
    v32 = *(_QWORD*)(a1 + 160);
    *(_QWORD*)(a1 + 168) = v24;
    v24 = v32;
    if (v32 != 0) {
    LABEL_76:
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v33, v24);
    }
  }
  v34 = *(_QWORD*)(a1 + 136);
  if (v34 != 0) {
    v35 = *(_QWORD*)(a1 + 144);
    if (v34 == v35) {
      goto LABEL_97;
    }
    do {
      if (*(_BYTE*)(v35 - 16) == 1) {
        if ((*(_BYTE*)(v35 - 48) & 1) != 0) {
          v36 = *(_QWORD*)(v35 - 32);
          if (v36 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v37 = 128;
            }
            else {
              v37 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v37, v36);
          }
        }
        if ((*(_BYTE*)(v35 - 72) & 1) != 0) {
          v38 = *(_QWORD*)(v35 - 56);
          if (v38 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v39 = 128;
            }
            else {
              v39 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v39, v38);
          }
        }
      }
      v35 -= 96;
    } while (v35 != v34);
    v40 = *(_QWORD*)(a1 + 136);
    *(_QWORD*)(a1 + 144) = v34;
    v34 = v40;
    if (v40 != 0) {
    LABEL_97:
      v41 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v41, v34);
    }
  }
  v42 = *(_QWORD*)(a1 + 112);
  if (v42 != 0) {
    v43 = *(_QWORD*)(a1 + 120);
    if (v42 == v43) {
      goto LABEL_118;
    }
    do {
      if (*(_BYTE*)(v43 - 32) == 1) {
        if ((*(_BYTE*)(v43 - 64) & 1) != 0) {
          v44 = *(_QWORD*)(v43 - 48);
          if (v44 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v45 = 128;
            }
            else {
              v45 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v45, v44);
          }
        }
        if ((*(_BYTE*)(v43 - 88) & 1) != 0) {
          v46 = *(_QWORD*)(v43 - 72);
          if (v46 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v47 = 128;
            }
            else {
              v47 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v47, v46);
          }
        }
      }
      v43 -= 112;
    } while (v43 != v42);
    v48 = *(_QWORD*)(a1 + 112);
    *(_QWORD*)(a1 + 120) = v42;
    v42 = v48;
    if (v48 != 0) {
    LABEL_118:
      v49 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v49 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v49, v42);
    }
  }
  v50 = *(_QWORD*)(a1 + 88);
  if (v50 != 0) {
    v51 = *(_QWORD*)(a1 + 96);
    if (v50 == v51) {
      goto LABEL_140;
    }
    do {
      if (*(_BYTE*)(v51 - 16) == 1 && (*(_BYTE*)(v51 - 40) & 1) != 0) {
        v52 = *(_QWORD*)(v51 - 24);
        if (v52 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v53 = 128;
          }
          else {
            v53 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v53, v52);
        }
      }
      if (*(_BYTE*)(v51 - 48) == 1 && (*(_BYTE*)(v51 - 72) & 1) != 0) {
        v54 = *(_QWORD*)(v51 - 56);
        if (v54 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v55 = 128;
          }
          else {
            v55 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v55, v54);
        }
      }
      v51 -= 96;
    } while (v51 != v50);
    v56 = *(_QWORD*)(a1 + 88);
    *(_QWORD*)(a1 + 96) = v50;
    v50 = v56;
    if (v56 != 0) {
    LABEL_140:
      v57 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v57 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v57, v50);
    }
  }
  v58 = *(_QWORD*)(a1 + 64);
  if (v58 != 0) {
    v59 = *(_QWORD*)(a1 + 72);
    if (v58 == v59) {
      goto LABEL_162;
    }
    do {
      if (*(_BYTE*)(v59 - 24) == 1 && (*(_BYTE*)(v59 - 48) & 1) != 0) {
        v60 = *(_QWORD*)(v59 - 32);
        if (v60 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v61 = 128;
          }
          else {
            v61 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v61, v60);
        }
      }
      if (*(_BYTE*)(v59 - 56) == 1 && (*(_BYTE*)(v59 - 80) & 1) != 0) {
        v62 = *(_QWORD*)(v59 - 64);
        if (v62 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v63 = 128;
          }
          else {
            v63 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v63, v62);
        }
      }
      v59 -= 112;
    } while (v59 != v58);
    v64 = *(_QWORD*)(a1 + 64);
    *(_QWORD*)(a1 + 72) = v58;
    v58 = v64;
    if (v64 != 0) {
    LABEL_162:
      v65 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v65 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v65, v58);
    }
  }
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    v66 = *(_QWORD*)(a1 + 56);
    if (v66 != 0) {
      v67 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v67 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v67, v66);
    }
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v68 = *(_QWORD*)(a1 + 24);
    if (v68 != 0) {
      v69 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v69 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v69, v68);
    }
  }
}

__attribute__((swiftcall)) void MapSimulator_102b410(PSEUDO_X8 x8_, __int64 a1,
                                                     __n128 result)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __n128* v15;
  float v16;
  __int64 v17;

  v4 = *(unsigned __int8*)(a1 + 8);
  if ((v4 & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 16);
  }
  else {
    v5 = v4 >> 1;
  }
  v6 = *(unsigned __int8*)(GameData_21f3d10 + 88);
  v7 = *(_QWORD*)(GameData_21f3d10 + 96);
  if ((v6 & 1) == 0) {
    v7 = v6 >> 1;
  }
  if (v5 != v7) {
    goto LABEL_14;
  }
  v8 = (v4 & 1) != 0 ? *(_QWORD*)(a1 + 24) : a1 + 9;
  v9 = (v6 & 1) != 0 ? *(_QWORD*)(GameData_21f3d10 + 104)
                     : GameData_21f3d10 + 89;
  if ((unsigned int)memcmp(v8, v9, v5) != 0) {
    goto LABEL_14;
  }
  v10 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v10 == 0) {
    goto LABEL_14;
  }
  v11 = *(_QWORD*)(GameData_21ec7c0 + 72);
  v12 = *(_QWORD*)(GameData_21ec7c0 + 80);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                            memory_order_relaxed);
  v13 = std___1___shared_weak_count_lock(v12);
  result = std___1___shared_weak_count___release_weak(v10);
  if (v13 == 0 || v11 == 0) {
    if (v13 == 0) {
    LABEL_14:
      *(_BYTE*)a2 = 0;
      *(_BYTE*)(a2 + 32) = 0;
      {
        result;
        return;
      }
    }
  }
  else {
    v15 = *(__n128**)(*(_QWORD*)(v11 + 24) + 16LL);
    result = v15[35];
    v16 = *(float*)(LANES128(v15[30]).n128_u64[1] + 36);
    LANES128(result).n128_u32[3] = 0;
    *(_BYTE*)(a2 + 32) = 1;
    *(__n128*)a2 = result;
    v17 = GameData_21f3cb0;
    *(float*)(a2 + 16) = v16 * 0x1.ca5dc20000000p+5;
    *(_DWORD*)(a2 + 20) = *(_DWORD*)(v17 + 100);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v11 == 0) {
      goto LABEL_14;
    }
  }
  else {
    (*(void (**)(__int64, long double))(*(_QWORD*)v13 + 16LL))(
        v13, *(long double*)&result);
    result = std___1___shared_weak_count___release_weak(v13);
    if (v11 == 0) {
      goto LABEL_14;
    }
  }
  {
    result;
    return;
  }
}

_QWORD* game_hub_MapSimulator_Build_MinimapIcon(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _BOOL4 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  bool v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  unsigned int* v28;
  __int128 v29;
  _QWORD* v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int128 v38;
  __int128 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  int v60;
  char v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  _QWORD* v66;
  _QWORD* v67;
  _QWORD* result;
  _QWORD* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  _QWORD* v75;
  _QWORD* v76;
  __int64 v77;
  _QWORD* v78;
  __int64 v79;
  struct {
    _QWORD v80[4];
    _QWORD* v81;
  } v80_;
  struct {
    __int64 v82;
    unsigned __int64 v83;
    __int64 v84;
  } v82_;
  struct {
    __int128 v85;
    int v86;
    char gap132_[4];
    __int64 v87;
    unsigned __int64 v88;
    __int64 v89;
    __int64 v90;
    unsigned __int64 v91;
    __int64 v92;
    int v93;
    char v94;
    char gap189_[3];
    char v95;
    char gap193_[7];
    __int64 v96;
    __int64 v97;
  } v85_;

  v2 = *(_QWORD*)(*GameData_212ebe0 + 8);
  if (v2 != 0) {
    v3 = *(_QWORD**)(v2 + 24);
    v78 = (_QWORD*)(v2 + 32);
    if (v3 != (_QWORD*)(v2 + 32)) {
      v79 = a1 + 9;
      v4 = GameData_212d458[0];
      while (1) {
        v6 = (__int64*)v3[7];
        v5 = (__int64*)v3[8];
        if (v6 != v5) {
          break;
        }
      LABEL_104:
        v66 = (_QWORD*)v3[1];
        if (v66 != nullptr) {
          do {
            v67 = v66;
            v66 = (_QWORD*)*v66;
          } while (v66 != nullptr);
        }
        else {
          do {
            v67 = (_QWORD*)v3[2];
            v18 = v3 == (_QWORD*)*v67;
            v3 = v67;
          } while (!v18);
        }
        v3 = v67;
        if (v67 == v78) {
          goto LABEL_110;
        }
      }
      while (1) {
        v85_.v95 = 0;
        LODWORD(v85_.v96) = 0;
        v85_.v97 = 0;
        v7 = v6[5];
        LOBYTE(v85_.v87) = 0;
        v85_.v85 = (__typeof__(v85_.v85)){0};
        v85_.v86 = 0;
        v85_.v97 = v7;
        v8 = *(_QWORD*)(*v6 + 552);
        v9 = *(_QWORD*)(*v6 + 560);
        if (v9 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v8 != 0 && *(_BYTE*)(v8 + 300) == 1) {
          v10 = (*(_BYTE*)(v8 + 297) & 8) != 0;
          if (v9 == 0) {
            goto LABEL_17;
          }
        }
        else {
          v10 = false;
          if (v9 == 0) {
            goto LABEL_17;
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak_alt1(v9);
        }
      LABEL_17:
        if (*(_BYTE*)(a1 + 32) == 1) {
          v11 = v85_.v97;
          v12 = *(_QWORD*)(*GameData_212ec18[0] + 40);
          if (v12 == 0) {
            goto LABEL_36;
          }
          if (game_gmap_GmapClock_instance_ == 0 ||
              *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                      *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                      *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
                  0) {
            v13 = *(_QWORD*)GameData_212dbb8[0];
            v14 = *(unsigned __int8*)(a1 + 8);
            if ((v14 & 1) != 0) {
              v15 = *(_QWORD*)(a1 + 16);
            }
            else {
              v15 = v14 >> 1;
            }
            v16 = *(unsigned __int8*)(v13 + 88);
            v17 = *(_QWORD*)(v13 + 96);
            if ((v16 & 1) == 0) {
              v17 = v16 >> 1;
            }
            if (v15 != v17) {
              goto LABEL_36;
            }
            v18 = (v14 & 1) == 0;
            v19 = v79;
            v20 = v85_.v97;
            if (!v18) {
              v19 = *(_QWORD*)(a1 + 24);
            }
            v21 = *(_QWORD*)(v13 + 104);
            v22 = v13 + 89;
            v23 = (v16 & 1) != 0 ? v21 : v22;
            v24 = memcmp_alt1(v19, v23, v15);
            v11 = v20;
            if (v24 != 0) {
              goto LABEL_36;
            }
          }
          v25 = *(__int64**)(v12 + 48);
          v26 = *(__int64**)(v12 + 56);
          if (v25 != v26) {
            while (1) {
              v27 = *v25;
              v25 += 2;
              if (*(_QWORD*)(v27 + 32) == v11) {
                break;
              }
              if (v25 == v26) {
                goto LABEL_36;
              }
            }
          }
          else {
          LABEL_36:
            if (!v10) {
              goto LABEL_93;
            }
          }
          v28 = (unsigned int*)(*v6 + 192);
          *(_QWORD*)&v85_.v85 = *(_QWORD*)(*v6 + 184);
          *(_QWORD*)&v29 = v85_.v85;
          *((_QWORD*)&v29 + 1) = *v28;
          v85_.v85 = v29;
          LODWORD(v85_.v96) = GameRoutine_fb6c60_alt1(v11);
          if ((_DWORD)v85_.v96 == 0) {
            goto LABEL_93;
          }
        }
        else {
          v30 = *(_QWORD**)(*v4 + 24);
          v31 = *(_QWORD**)(*v4 + 32);
          if (v30 != v31) {
            while (1) {
              v32 = *v30;
              if (*(_QWORD*)(*v30 + 264LL) == *(_QWORD*)(*v6 + 56)) {
                break;
              }
              v30 += 2;
              if (v30 == v31) {
                goto LABEL_49;
              }
            }
            v33 = v30[1];
            if (v33 != 0) {
              v34 = v30[1];
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 16), 1u,
                                        memory_order_relaxed);
              v35 = std___1___shared_weak_count_lock_alt1(v34);
              std___1___shared_weak_count___release_weak_alt1(v33);
              if (v35 != 0) {
                v36 = *(_QWORD*)(v32 + 1232);
                v37 = *(_QWORD*)(*(_QWORD*)(v32 + 24) + 16LL);
                v38 = *(_OWORD*)(v37 + 560);
                *(_QWORD*)&v85_.v85 = *(_QWORD*)(v37 + 560);
                *(_QWORD*)&v39 = v85_.v85;
                *((_QWORD*)&v39 + 1) = DWORD2(v38);
                v85_.v85 = v39;
                if (v36 != 0) {
                  LODWORD(v85_.v96) = GameRoutine_fb6e10(v36);
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
                  std___1___shared_weak_count___release_weak_alt1(v35);
                }
              }
            }
          }
        LABEL_49:
          if ((_DWORD)v85_.v96 == 0) {
            goto LABEL_93;
          }
        }
        if (!GameRoutine_d8fca0_alt1(*v6)) {
          v40 = *(unsigned __int8*)(a1 + 8);
          v41 = *((unsigned __int8*)v3 + 32);
          v42 = v3[5];
          if ((v40 & 1) != 0) {
            v43 = *(_QWORD*)(a1 + 16);
          }
          else {
            v43 = v40 >> 1;
          }
          v44 = v41 >> 1;
          if ((v41 & 1) != 0) {
            v44 = v3[5];
          }
          if (v43 == v44 &&
              ((v40 & 1) != 0 ? (v45 = *(_QWORD*)(a1 + 24)) : (v45 = v79),
               (v41 & 1) != 0 ? (v46 = v3[6]) : (v46 = (__int64)v3 + 33),
               memcmp_alt1(v45, v46, v43) == 0)) {
            LOWORD(v82_.v82) = 0;
          }
          else if ((v41 & 1) != 0) {
            fw_text_String_CopyTerminated_alt1(&v82_.v82, v3[6], v42);
          }
          else {
            v47 = v3[5];
            v82_.v82 = v3[4];
            v82_.v83 = v47;
            v82_.v84 = v3[6];
          }
          if (*(_BYTE*)(a1 + 32) != 1 ||
              ((v82_.v82 & 1) != 0
                   ? (v48 = v82_.v83)
                   : (v48 = (unsigned __int64)(unsigned __int8)v82_.v82 >> 1),
               v48 == 0)) {
            if ((game_hub_102e240(a1, &v85_.v85, &v82_.v82) & 1) != 0) {
              v49 = *GameData_212ebb0[0];
              v50 = GameRoutine_f71d40(*GameData_212ebb0[0], (__int64)&v85_.v85,
                                       a1 + 40);
              if ((GameRoutine_f71cb0(v50, v50) & 1) != 0 &&
                  ((unsigned int)game_hub_f71fc0(v49, (__int64)&v85_.v85,
                                                 a1 + 40) == 0 ||
                   (*(_BYTE*)(v49 + 32) & 2) != 0)) {
                v51 = GameRoutine_f71d40(*GameData_212ebb0[0],
                                         (__int64)&v85_.v85, a1 + 40);
                v53 = *(_QWORD*)(a1 + 120);
                v52 = *(_QWORD*)(a1 + 128);
                v85_.v86 = v51;
                if (v53 >= v52) {
                  v58 = GameRoutine_102f560_alt1((__int64*)(a1 + 112),
                                                 (__int64)&v85_.v85);
                }
                else {
                  v54 = *((_QWORD*)&v85_.v85 + 1);
                  *(_BYTE*)(v53 + 24) = 0;
                  v55 = (__int64*)(v53 + 24);
                  *(_BYTE*)(v53 + 80) = 0;
                  *(_QWORD*)(v53 + 8) = v54;
                  *(_QWORD*)v53 = v85_.v85;
                  *(_DWORD*)(v53 + 16) = v85_.v86;
                  if (v85_.v95 == 1) {
                    if ((v85_.v87 & 1) != 0) {
                      fw_text_String_CopyTerminated_alt1(v55, v85_.v89,
                                                         v85_.v88);
                      if ((v85_.v90 & 1) == 0) {
                        goto LABEL_84;
                      }
                    LABEL_81:
                      fw_text_String_CopyTerminated_alt1((__int64*)(v53 + 48),
                                                         v85_.v92, v85_.v91);
                    }
                    else {
                      v56 = v85_.v87;
                      v57 = v85_.v89;
                      *(_QWORD*)(v53 + 32) = v85_.v88;
                      *(_QWORD*)(v53 + 40) = v57;
                      *v55 = v56;
                      if ((v85_.v90 & 1) != 0) {
                        goto LABEL_81;
                      }
                    LABEL_84:
                      *(_QWORD*)(v53 + 56) = v85_.v91;
                      v59 = v85_.v90;
                      *(_QWORD*)(v53 + 64) = v85_.v92;
                      *(_QWORD*)(v53 + 48) = v59;
                    }
                    v60 = v85_.v93;
                    v61 = v85_.v94;
                    *(_BYTE*)(v53 + 80) = 1;
                    *(_BYTE*)(v53 + 76) = v61;
                    *(_DWORD*)(v53 + 72) = v60;
                  }
                  v62 = v85_.v97;
                  v58 = v53 + 112;
                  *(_QWORD*)(v53 + 88) = v85_.v96;
                  *(_QWORD*)(v53 + 96) = v62;
                }
                *(_QWORD*)(a1 + 120) = v58;
              }
            }
          }
          if ((v82_.v82 & 1) != 0 && v82_.v84 != 0) {
            v63 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v63 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v63, v82_.v84);
          }
        }
      LABEL_93:
        if (v85_.v95 == 1) {
          if ((v85_.v90 & 1) != 0 && v85_.v92 != 0) {
            v64 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v64 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v64, v85_.v92);
          }
          if ((v85_.v87 & 1) != 0 && v85_.v89 != 0) {
            v65 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v65 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v65, v85_.v89);
          }
        }
        v6 += 6;
        if (v6 == v5) {
          goto LABEL_104;
        }
      }
    }
  }
LABEL_110:
  result = v80_.v80;
  v80_.v80[0] = GameData_2002c80;
  v80_.v80[1] = a1;
  v80_.v81 = v80_.v80;
  v69 = *(_QWORD**)(*(_QWORD*)GameData_212dc68 + 152LL);
  v70 = *(_QWORD*)GameData_212dc68 + 160LL;
  if (v69 == (_QWORD*)v70) {
  LABEL_128:
    v77 = 32;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v77))((__int64)result);
  }
  do {
    v71 = v69[7];
    v72 = v69[8];
    if (v71 != v72) {
      while (v80_.v81 != nullptr) {
        (*(void (**)(_QWORD*, __int64))(*v80_.v81 + 48LL))(v80_.v81, v71);
        v71 += 16;
        if (v71 == v72) {
          goto LABEL_116;
        }
      }
    LABEL_131:
      GameRoutine_60a310_alt1();
    }
  LABEL_116:
    v73 = v69[10];
    v74 = v69[11];
    if (v73 != v74) {
      while (v80_.v81 != nullptr) {
        (*(void (**)(_QWORD*, __int64))(*v80_.v81 + 48LL))(v80_.v81, v73);
        v73 += 16;
        if (v73 == v74) {
          goto LABEL_119;
        }
      }
      goto LABEL_131;
    }
  LABEL_119:
    v75 = (_QWORD*)v69[1];
    if (v75 != nullptr) {
      do {
        v76 = v75;
        v75 = (_QWORD*)*v75;
      } while (v75 != nullptr);
    }
    else {
      do {
        v76 = (_QWORD*)v69[2];
        v18 = v69 == (_QWORD*)*v76;
        v69 = v76;
      } while (!v18);
    }
    v69 = v76;
  } while (v76 != (_QWORD*)v70);
  result = v80_.v81;
  if (v80_.v81 == v80_.v80) {
    goto LABEL_128;
  }
  if (v80_.v81 != nullptr) {
    v77 = 40;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v77))((__int64)result);
  }
  return result;
}

_QWORD* game_hub_MapSimulator_Build_CondTalk(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  _BOOL4 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  unsigned int* v24;
  __int128 v25;
  _QWORD* v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int128 v32;
  __int128 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  int v54;
  char v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  _QWORD* v60;
  bool v61;
  _QWORD* result;
  _QWORD* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  _QWORD* v69;
  _QWORD* v70;
  __int64 v71;
  _QWORD* v72;
  __int64 v73;
  struct {
    _QWORD v74[4];
    _QWORD* v75;
  } v74_;
  struct {
    __int64 v76;
    unsigned __int64 v77;
    __int64 v78;
  } v76_;
  struct {
    __int128 v79;
    int v80;
    char gap132_[4];
    __int64 v81;
    unsigned __int64 v82;
    __int64 v83;
    __int64 v84;
    unsigned __int64 v85;
    __int64 v86;
    int v87;
    char v88;
    char gap189_[3];
    char v89;
    char gap193_[7];
    __int64 v90;
  } v79_;

  v2 = *(_QWORD*)(*GameData_212ebe0 + 8);
  if (v2 != 0) {
    v3 = *(_QWORD**)(v2 + 24);
    v72 = (_QWORD*)(v2 + 32);
    if (v3 != (_QWORD*)(v2 + 32)) {
      v73 = a1 + 9;
      while (1) {
        v4 = (_QWORD*)v3[7];
        v5 = (_QWORD*)v3[8];
        if (v4 != v5) {
          break;
        }
      LABEL_103:
        v59 = (_QWORD*)v3[1];
        if (v59 != nullptr) {
          do {
            v60 = v59;
            v59 = (_QWORD*)*v59;
          } while (v59 != nullptr);
        }
        else {
          do {
            v60 = (_QWORD*)v3[2];
            v61 = v3 == (_QWORD*)*v60;
            v3 = v60;
          } while (!v61);
        }
        v3 = v60;
        if (v60 == v72) {
          goto LABEL_109;
        }
      }
      while (1) {
        v6 = *(_QWORD*)(*v4 + 552LL);
        v7 = *(_QWORD*)(*v4 + 560LL);
        if (v7 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v6 == 0) {
          goto LABEL_100;
        }
        v8 = *(_BYTE*)(v6 + 300) == 1 && (*(_BYTE*)(v6 + 297) & 8) != 0;
        v79_.v89 = 0;
        v79_.v90 = 0;
        v9 = *(unsigned __int8*)(a1 + 32);
        v10 = v4[5];
        LOBYTE(v79_.v81) = 0;
        v79_.v79 = (__typeof__(v79_.v79)){0};
        v79_.v80 = 0;
        v79_.v90 = v10;
        if (v9 == 1) {
          v11 = *(_QWORD*)(*GameData_212ec18[0] + 40);
          if (v11 == 0) {
            goto LABEL_34;
          }
          if (game_gmap_GmapClock_instance_ == 0 ||
              *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                      *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                      *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
                  0) {
            v12 = *(unsigned __int8*)(a1 + 8);
            v13 = *(_QWORD*)GameData_212dbb8[0];
            if ((v12 & 1) != 0) {
              v14 = *(_QWORD*)(a1 + 16);
            }
            else {
              v14 = v12 >> 1;
            }
            v15 = *(unsigned __int8*)(v13 + 88);
            v16 = *(_QWORD*)(v13 + 96);
            if ((v15 & 1) == 0) {
              v16 = v15 >> 1;
            }
            if (v14 != v16) {
              goto LABEL_34;
            }
            v17 = (v12 & 1) != 0 ? *(_QWORD*)(a1 + 24) : v73;
            v18 = *(_QWORD*)(v13 + 104);
            v19 = v13 + 89;
            v20 = (v15 & 1) != 0 ? v18 : v19;
            if (memcmp_alt1(v17, v20, v14) != 0) {
              goto LABEL_34;
            }
          }
          v21 = *(__int64**)(v11 + 48);
          v22 = *(__int64**)(v11 + 56);
          if (v21 != v22) {
            while (1) {
              v23 = *v21;
              v21 += 2;
              if (*(_QWORD*)(v23 + 32) == v10) {
                break;
              }
              if (v21 == v22) {
                goto LABEL_34;
              }
            }
          }
          else {
          LABEL_34:
            if (!v8) {
              goto LABEL_89;
            }
          }
          v24 = (unsigned int*)(*v4 + 192LL);
          *(_QWORD*)&v79_.v79 = *(_QWORD*)(*v4 + 184LL);
          *(_QWORD*)&v25 = v79_.v79;
          *((_QWORD*)&v25 + 1) = *v24;
          v79_.v79 = v25;
          if (v8) {
            goto LABEL_45;
          }
        }
        else {
          v26 = *(_QWORD**)(*GameData_212d458[0] + 24);
          v27 = *(_QWORD**)(*GameData_212d458[0] + 32);
          if (v26 == v27) {
            goto LABEL_44;
          }
          while (1) {
            v28 = *v26;
            if (*(_QWORD*)(*v26 + 264LL) == *(_QWORD*)(*v4 + 56LL)) {
              break;
            }
            v26 += 2;
            if (v26 == v27) {
              goto LABEL_44;
            }
          }
          v29 = v26[1];
          if (v29 == 0) {
            goto LABEL_44;
          }
          v30 = v26[1];
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 16), 1u,
                                    memory_order_relaxed);
          v31 = std___1___shared_weak_count_lock_alt1(v30);
          std___1___shared_weak_count___release_weak_alt1(v29);
          if (v31 == 0) {
            goto LABEL_44;
          }
          v32 = *(_OWORD*)(*(_QWORD*)(*(_QWORD*)(v28 + 24) + 16LL) + 560LL);
          *(_QWORD*)&v79_.v79 =
              *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v28 + 24) + 16LL) + 560LL);
          *(_QWORD*)&v33 = v79_.v79;
          *((_QWORD*)&v33 + 1) = DWORD2(v32);
          v79_.v79 = v33;
          if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
            std___1___shared_weak_count___release_weak_alt1(v31);
            if (v8) {
            LABEL_45:
              v34 = *(unsigned __int8*)(a1 + 8);
              v35 = *((unsigned __int8*)v3 + 32);
              v36 = v3[5];
              if ((v34 & 1) != 0) {
                v37 = *(_QWORD*)(a1 + 16);
              }
              else {
                v37 = v34 >> 1;
              }
              v38 = v35 >> 1;
              if ((v35 & 1) != 0) {
                v38 = v3[5];
              }
              if (v37 == v38 &&
                  ((v34 & 1) != 0 ? (v39 = *(_QWORD*)(a1 + 24)) : (v39 = v73),
                   (v35 & 1) != 0 ? (v40 = v3[6]) : (v40 = (__int64)v3 + 33),
                   memcmp_alt1(v39, v40, v37) == 0)) {
                LOWORD(v76_.v76) = 0;
              }
              else if ((v35 & 1) != 0) {
                fw_text_String_CopyTerminated_alt1(&v76_.v76, v3[6], v36);
              }
              else {
                v41 = v3[5];
                v76_.v76 = v3[4];
                v76_.v77 = v41;
                v76_.v78 = v3[6];
              }
              if (*(_BYTE*)(a1 + 32) != 1 ||
                  ((v76_.v76 & 1) != 0
                       ? (v42 = v76_.v77)
                       : (v42 =
                              (unsigned __int64)(unsigned __int8)v76_.v76 >> 1),
                   v42 == 0)) {
                if ((game_hub_102e240(a1, &v79_.v79, &v76_.v76) & 1) != 0) {
                  v43 = *GameData_212ebb0[0];
                  v44 = GameRoutine_f71d40(*GameData_212ebb0[0],
                                           (__int64)&v79_.v79, a1 + 40);
                  if ((GameRoutine_f71cb0(v44, v44) & 1) != 0 &&
                      ((unsigned int)game_hub_f71fc0(v43, (__int64)&v79_.v79,
                                                     a1 + 40) == 0 ||
                       (*(_BYTE*)(v43 + 32) & 2) != 0)) {
                    v45 = GameRoutine_f71d40(*GameData_212ebb0[0],
                                             (__int64)&v79_.v79, a1 + 40);
                    v47 = *(_QWORD*)(a1 + 144);
                    v46 = *(_QWORD*)(a1 + 152);
                    v79_.v80 = v45;
                    if (v47 >= v46) {
                      v52 = GameRoutine_102f7e0_alt1((__int64*)(a1 + 136),
                                                     (__int64)&v79_.v79);
                    }
                    else {
                      v48 = *((_QWORD*)&v79_.v79 + 1);
                      *(_BYTE*)(v47 + 24) = 0;
                      v49 = (__int64*)(v47 + 24);
                      *(_BYTE*)(v47 + 80) = 0;
                      *(_QWORD*)(v47 + 8) = v48;
                      *(_QWORD*)v47 = v79_.v79;
                      *(_DWORD*)(v47 + 16) = v79_.v80;
                      if (v79_.v89 == 1) {
                        if ((v79_.v81 & 1) != 0) {
                          fw_text_String_CopyTerminated_alt1(v49, v79_.v83,
                                                             v79_.v82);
                          if ((v79_.v84 & 1) == 0) {
                            goto LABEL_80;
                          }
                        LABEL_75:
                          fw_text_String_CopyTerminated_alt1(
                              (__int64*)(v47 + 48), v79_.v86, v79_.v85);
                        }
                        else {
                          v50 = v79_.v81;
                          v51 = v79_.v83;
                          *(_QWORD*)(v47 + 32) = v79_.v82;
                          *(_QWORD*)(v47 + 40) = v51;
                          *v49 = v50;
                          if ((v79_.v84 & 1) != 0) {
                            goto LABEL_75;
                          }
                        LABEL_80:
                          *(_QWORD*)(v47 + 56) = v79_.v85;
                          v53 = v79_.v84;
                          *(_QWORD*)(v47 + 64) = v79_.v86;
                          *(_QWORD*)(v47 + 48) = v53;
                        }
                        v54 = v79_.v87;
                        v55 = v79_.v88;
                        *(_BYTE*)(v47 + 80) = 1;
                        *(_BYTE*)(v47 + 76) = v55;
                        *(_DWORD*)(v47 + 72) = v54;
                      }
                      v52 = v47 + 96;
                      *(_QWORD*)(v47 + 88) = v79_.v90;
                    }
                    *(_QWORD*)(a1 + 144) = v52;
                  }
                }
              }
              if ((v76_.v76 & 1) != 0 && v76_.v78 != 0) {
                v56 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v56 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v56, v76_.v78);
              }
            }
          }
          else {
          LABEL_44:
            if (v8) {
              goto LABEL_45;
            }
          }
        }
      LABEL_89:
        if (v79_.v89 == 1) {
          if ((v79_.v84 & 1) != 0 && v79_.v86 != 0) {
            v57 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v57 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v57, v79_.v86);
          }
          if ((v79_.v81 & 1) != 0 && v79_.v83 != 0) {
            v58 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v58 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, v79_.v83);
          }
        }
      LABEL_100:
        if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak_alt1(v7);
        }
        v4 += 6;
        if (v4 == v5) {
          goto LABEL_103;
        }
      }
    }
  }
LABEL_109:
  result = v74_.v74;
  v74_.v74[0] = GameData_2002d00;
  v74_.v74[1] = a1;
  v74_.v75 = v74_.v74;
  v63 = *(_QWORD**)(*(_QWORD*)GameData_212dc68 + 152LL);
  v64 = *(_QWORD*)GameData_212dc68 + 160LL;
  if (v63 == (_QWORD*)v64) {
  LABEL_127:
    v71 = 32;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v71))((__int64)result);
  }
  do {
    v65 = v63[7];
    v66 = v63[8];
    if (v65 != v66) {
      while (v74_.v75 != nullptr) {
        (*(void (**)(_QWORD*, __int64))(*v74_.v75 + 48LL))(v74_.v75, v65);
        v65 += 16;
        if (v65 == v66) {
          goto LABEL_115;
        }
      }
    LABEL_130:
      GameRoutine_60a310_alt1();
    }
  LABEL_115:
    v67 = v63[10];
    v68 = v63[11];
    if (v67 != v68) {
      while (v74_.v75 != nullptr) {
        (*(void (**)(_QWORD*, __int64))(*v74_.v75 + 48LL))(v74_.v75, v67);
        v67 += 16;
        if (v67 == v68) {
          goto LABEL_118;
        }
      }
      goto LABEL_130;
    }
  LABEL_118:
    v69 = (_QWORD*)v63[1];
    if (v69 != nullptr) {
      do {
        v70 = v69;
        v69 = (_QWORD*)*v69;
      } while (v69 != nullptr);
    }
    else {
      do {
        v70 = (_QWORD*)v63[2];
        v61 = v63 == (_QWORD*)*v70;
        v63 = v70;
      } while (!v61);
    }
    v63 = v70;
  } while (v70 != (_QWORD*)v64);
  result = v74_.v75;
  if (v74_.v75 == v74_.v74) {
    goto LABEL_127;
  }
  if (v74_.v75 != nullptr) {
    v71 = 40;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v71))((__int64)result);
  }
  return result;
}

#pragma GCC visibility pop
