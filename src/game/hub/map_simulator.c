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
__n128 MapSimulator_Destructor(__int64 a1);
_QWORD* game_hub_MapSimulator_Build_MinimapIcon(__int64 a1, __int64 a2,
                                                unsigned __int64 a3);
_QWORD* game_hub_MapSimulator_Build_CondTalk(__int64 a1, __int64 a2,
                                             unsigned __int64 a3);
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21f3cb0;
extern __int64 GameData_21f3d10;
__attribute__((swiftcall)) void MapSimulator_102b410(PSEUDO_X8 x8_, __int64 a1,
                                                     __n128 result);

__n128 MapSimulator_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __n128 result;
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
        result = std___1___shared_weak_count___release_weak(v5);
      }
      if (*(_BYTE*)(v4 - 32) == 1) {
        if ((*(_BYTE*)(v4 - 64) & 1) != 0 && *(_QWORD*)(v4 - 48) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v7 = 128;
          }
          else {
            v7 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
        }
        if ((*(_BYTE*)(v4 - 88) & 1) != 0 && *(_QWORD*)(v4 - 72) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
        }
      }
      v4 -= 112;
    } while (v4 != v1);
    v9 = *(_QWORD*)(a1 + 232);
    *(_QWORD*)(a1 + 240) = v1;
    if (v9 != 0) {
    LABEL_21:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v10 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10);
    }
  }
  v11 = *(_QWORD*)(a1 + 208);
  if (v11 != 0) {
    v12 = *(_QWORD*)(a1 + 216);
    if (v11 == v12) {
      goto LABEL_28;
    }
    do {
      v12 -= 176;
      GameRoutine_102e7c0(v12);
    } while (v12 != v11);
    v13 = *(_QWORD*)(a1 + 208);
    *(_QWORD*)(a1 + 216) = v11;
    if (v13 != 0) {
    LABEL_28:
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v14 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v14);
    }
  }
  v15 = *(_QWORD*)(a1 + 184);
  if (v15 != 0) {
    v16 = *(_QWORD*)(a1 + 192);
    if (v15 == v16) {
      goto LABEL_49;
    }
    do {
      if (*(_BYTE*)(v16 - 16) == 1) {
        if ((*(_BYTE*)(v16 - 48) & 1) != 0 && *(_QWORD*)(v16 - 32) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v17 = 128;
          }
          else {
            v17 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v17);
        }
        if ((*(_BYTE*)(v16 - 72) & 1) != 0 && *(_QWORD*)(v16 - 56) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v18 = 128;
          }
          else {
            v18 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v18);
        }
      }
      v16 -= 96;
    } while (v16 != v15);
    v19 = *(_QWORD*)(a1 + 184);
    *(_QWORD*)(a1 + 192) = v15;
    if (v19 != 0) {
    LABEL_49:
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v20 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v20);
    }
  }
  v21 = *(_QWORD*)(a1 + 160);
  if (v21 != 0) {
    v22 = *(_QWORD*)(a1 + 168);
    if (v21 == v22) {
      goto LABEL_76;
    }
    do {
      if ((*(_BYTE*)(v22 - 32) & 1) != 0 && *(_QWORD*)(v22 - 16) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v23 = 128;
        }
        else {
          v23 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v23);
      }
      if (*(_BYTE*)(v22 - 48) == 1) {
        if ((*(_BYTE*)(v22 - 80) & 1) != 0 && *(_QWORD*)(v22 - 64) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v24 = 128;
          }
          else {
            v24 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v24);
        }
        if ((*(_BYTE*)(v22 - 104) & 1) != 0 && *(_QWORD*)(v22 - 88) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v25 = 128;
          }
          else {
            v25 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v25);
        }
      }
      v22 -= 128;
    } while (v22 != v21);
    v26 = *(_QWORD*)(a1 + 160);
    *(_QWORD*)(a1 + 168) = v21;
    if (v26 != 0) {
    LABEL_76:
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v27 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v27);
    }
  }
  v28 = *(_QWORD*)(a1 + 136);
  if (v28 != 0) {
    v29 = *(_QWORD*)(a1 + 144);
    if (v28 == v29) {
      goto LABEL_97;
    }
    do {
      if (*(_BYTE*)(v29 - 16) == 1) {
        if ((*(_BYTE*)(v29 - 48) & 1) != 0 && *(_QWORD*)(v29 - 32) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v30 = 128;
          }
          else {
            v30 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v30);
        }
        if ((*(_BYTE*)(v29 - 72) & 1) != 0 && *(_QWORD*)(v29 - 56) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v31 = 128;
          }
          else {
            v31 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v31);
        }
      }
      v29 -= 96;
    } while (v29 != v28);
    v32 = *(_QWORD*)(a1 + 136);
    *(_QWORD*)(a1 + 144) = v28;
    if (v32 != 0) {
    LABEL_97:
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v33 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v33);
    }
  }
  v34 = *(_QWORD*)(a1 + 112);
  if (v34 != 0) {
    v35 = *(_QWORD*)(a1 + 120);
    if (v34 == v35) {
      goto LABEL_118;
    }
    do {
      if (*(_BYTE*)(v35 - 32) == 1) {
        if ((*(_BYTE*)(v35 - 64) & 1) != 0 && *(_QWORD*)(v35 - 48) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v36 = 128;
          }
          else {
            v36 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v36);
        }
        if ((*(_BYTE*)(v35 - 88) & 1) != 0 && *(_QWORD*)(v35 - 72) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v37 = 128;
          }
          else {
            v37 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v37);
        }
      }
      v35 -= 112;
    } while (v35 != v34);
    v38 = *(_QWORD*)(a1 + 112);
    *(_QWORD*)(a1 + 120) = v34;
    if (v38 != 0) {
    LABEL_118:
      v39 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v39 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v39);
    }
  }
  v40 = *(_QWORD*)(a1 + 88);
  if (v40 != 0) {
    v41 = *(_QWORD*)(a1 + 96);
    if (v40 == v41) {
      goto LABEL_140;
    }
    do {
      if (*(_BYTE*)(v41 - 16) == 1 && (*(_BYTE*)(v41 - 40) & 1) != 0 &&
          *(_QWORD*)(v41 - 24) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v42 = 128;
        }
        else {
          v42 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v42);
      }
      if (*(_BYTE*)(v41 - 48) == 1 && (*(_BYTE*)(v41 - 72) & 1) != 0 &&
          *(_QWORD*)(v41 - 56) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v43 = 128;
        }
        else {
          v43 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v43);
      }
      v41 -= 96;
    } while (v41 != v40);
    v44 = *(_QWORD*)(a1 + 88);
    *(_QWORD*)(a1 + 96) = v40;
    if (v44 != 0) {
    LABEL_140:
      v45 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v45 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v45);
    }
  }
  v46 = *(_QWORD*)(a1 + 64);
  if (v46 != 0) {
    v47 = *(_QWORD*)(a1 + 72);
    if (v46 == v47) {
      goto LABEL_162;
    }
    do {
      if (*(_BYTE*)(v47 - 24) == 1 && (*(_BYTE*)(v47 - 48) & 1) != 0 &&
          *(_QWORD*)(v47 - 32) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v48 = 128;
        }
        else {
          v48 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v48);
      }
      if (*(_BYTE*)(v47 - 56) == 1 && (*(_BYTE*)(v47 - 80) & 1) != 0 &&
          *(_QWORD*)(v47 - 64) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v49 = 128;
        }
        else {
          v49 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v49);
      }
      v47 -= 112;
    } while (v47 != v46);
    v50 = *(_QWORD*)(a1 + 64);
    *(_QWORD*)(a1 + 72) = v46;
    if (v50 != 0) {
    LABEL_162:
      v51 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v51 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v51);
    }
  }
  if ((*(_BYTE*)(a1 + 40) & 1) != 0 && *(_QWORD*)(a1 + 56) != 0) {
    v52 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v52 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v52);
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0 && *(_QWORD*)(a1 + 24) != 0) {
    v53 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v53 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v53);
  }
  return result;
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

_QWORD* game_hub_MapSimulator_Build_MinimapIcon(__int64 a1, __int64 a2,
                                                unsigned __int64 a3)
{
  __int64 v4;
  _QWORD* v5;
  __int64* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _BOOL4 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  bool v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64* v26;
  __int64* v27;
  __int64 v28;
  unsigned int* v29;
  __int128 v30;
  _QWORD* v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int128 v39;
  __int128 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  char* v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  _QWORD* v55;
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
  _QWORD* v73;
  __int64 v74;
  __int64 i;
  _QWORD* v76;
  _QWORD* v77;
  __int64 v78;
  _QWORD* v79;
  __int64 v80;
  _QWORD v81[4];
  _QWORD* v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  __int128 v86;
  int v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  int v94;
  char v95;
  char v96;
  __int64 v97;
  __int64 v98;

  v4 = *(_QWORD*)(*GameData_212ebe0 + 8);
  if (v4 != 0) {
    v5 = *(_QWORD**)(v4 + 24);
    v79 = (_QWORD*)(v4 + 32);
    if (v5 != (_QWORD*)(v4 + 32)) {
      v80 = a1 + 9;
      v6 = GameData_212d458[0];
      while (1) {
        v8 = (_QWORD*)v5[7];
        v7 = (_QWORD*)v5[8];
        if (v8 != v7) {
          break;
        }
      LABEL_104:
        v66 = (_QWORD*)v5[1];
        if (v66 != nullptr) {
          do {
            v67 = v66;
            v66 = (_QWORD*)*v66;
          } while (v66 != nullptr);
        }
        else {
          do {
            v67 = (_QWORD*)v5[2];
            v19 = v5 == (_QWORD*)*v67;
            v5 = v67;
          } while (!v19);
        }
        v5 = v67;
        if (v67 == v79) {
          goto LABEL_110;
        }
      }
      while (1) {
        v96 = 0;
        LODWORD(v97) = 0;
        v98 = 0;
        v9 = v8[5];
        LOBYTE(v88) = 0;
        v86 = 0u;
        v87 = 0;
        v98 = v9;
        v10 = *(_QWORD*)(*v8 + 552LL);
        v11 = *(_QWORD*)(*v8 + 560LL);
        if (v11 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v10 != 0 && *(_BYTE*)(v10 + 300) == 1) {
          v12 = (*(_BYTE*)(v10 + 297) & 8) != 0;
          if (v11 == 0) {
            goto LABEL_17;
          }
        }
        else {
          v12 = false;
          if (v11 == 0) {
            goto LABEL_17;
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak(v11);
        }
      LABEL_17:
        if (*(_BYTE*)(a1 + 32) == 1) {
          v13 = v98;
          v14 = *(_QWORD*)(*GameData_212ec18[0] + 40);
          if (v14 == 0) {
            goto LABEL_36;
          }
          if (game_gmap_GmapClock_instance_ == 0 ||
              *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                      *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                      *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
                  0) {
            v15 = *(_QWORD*)GameData_212dbb8[0];
            v16 = *(unsigned __int8*)(a1 + 8);
            if ((v16 & 1) != 0) {
              a3 = *(_QWORD*)(a1 + 16);
            }
            else {
              a3 = v16 >> 1;
            }
            v17 = *(unsigned __int8*)(v15 + 88);
            v18 = *(_QWORD*)(v15 + 96);
            if ((v17 & 1) == 0) {
              v18 = v17 >> 1;
            }
            if (a3 != v18) {
              goto LABEL_36;
            }
            v19 = (v16 & 1) == 0;
            v20 = v80;
            v21 = v98;
            if (!v19) {
              v20 = *(_QWORD*)(a1 + 24);
            }
            v22 = *(_QWORD*)(v15 + 104);
            v23 = v15 + 89;
            v24 = (v17 & 1) != 0 ? v22 : v23;
            v25 = memcmp(v20, v24, a3);
            v13 = v21;
            if (v25 != 0) {
              goto LABEL_36;
            }
          }
          v26 = *(__int64**)(v14 + 48);
          v27 = *(__int64**)(v14 + 56);
          if (v26 != v27) {
            while (1) {
              v28 = *v26;
              v26 += 2;
              if (*(_QWORD*)(v28 + 32) == v13) {
                break;
              }
              if (v26 == v27) {
                goto LABEL_36;
              }
            }
          }
          else {
          LABEL_36:
            if (!v12) {
              goto LABEL_93;
            }
          }
          v29 = (unsigned int*)(*v8 + 192LL);
          *(_QWORD*)&v86 = *(_QWORD*)(*v8 + 184LL);
          *(_QWORD*)&v30 = v86;
          *((_QWORD*)&v30 + 1) = *v29;
          v86 = v30;
          LODWORD(v97) = GameRoutine_fb6c60(v13);
          if ((_DWORD)v97 == 0) {
            goto LABEL_93;
          }
        }
        else {
          v31 = *(_QWORD**)(*v6 + 24);
          v32 = *(_QWORD**)(*v6 + 32);
          if (v31 != v32) {
            while (1) {
              v33 = *v31;
              if (*(_QWORD*)(*v31 + 264LL) == *(_QWORD*)(*v8 + 56LL)) {
                break;
              }
              v31 += 2;
              if (v31 == v32) {
                goto LABEL_49;
              }
            }
            v34 = v31[1];
            if (v34 != 0) {
              v35 = v31[1];
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 16), 1u,
                                        memory_order_relaxed);
              v36 = std___1___shared_weak_count_lock(v35);
              std___1___shared_weak_count___release_weak(v34);
              if (v36 != 0) {
                v37 = *(_QWORD*)(v33 + 1232);
                v38 = *(_QWORD*)(*(_QWORD*)(v33 + 24) + 16LL);
                v39 = *(_OWORD*)(v38 + 560);
                *(_QWORD*)&v86 = *(_QWORD*)(v38 + 560);
                *(_QWORD*)&v40 = v86;
                *((_QWORD*)&v40 + 1) = DWORD2(v39);
                v86 = v40;
                if (v37 != 0) {
                  LODWORD(v97) = GameRoutine_fb6e10(v37);
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
                  std___1___shared_weak_count___release_weak(v36);
                }
              }
            }
          }
        LABEL_49:
          if ((_DWORD)v97 == 0) {
            goto LABEL_93;
          }
        }
        if ((GameRoutine_d8fca0(*v8) & 1) == 0) {
          v41 = *(unsigned __int8*)(a1 + 8);
          v42 = *((unsigned __int8*)v5 + 32);
          v43 = v5[5];
          if ((v41 & 1) != 0) {
            a3 = *(_QWORD*)(a1 + 16);
          }
          else {
            a3 = v41 >> 1;
          }
          v44 = v42 >> 1;
          if ((v42 & 1) != 0) {
            v44 = v5[5];
          }
          if (a3 == v44 &&
              ((v41 & 1) != 0 ? (v45 = *(_QWORD*)(a1 + 24)) : (v45 = v80),
               (v42 & 1) != 0 ? (v46 = (char*)v5[6]) : (v46 = (char*)v5 + 33),
               (unsigned int)memcmp(v45, v46, a3) == 0)) {
            LOWORD(v83) = 0;
          }
          else if ((v42 & 1) != 0) {
            fw_text_String_CopyTerminated(&v83, v5[6], v43);
          }
          else {
            v47 = v5[5];
            v83 = v5[4];
            v84 = v47;
            v85 = v5[6];
          }
          if (*(_BYTE*)(a1 + 32) != 1 ||
              ((v83 & 1) != 0
                   ? (v48 = v84)
                   : (v48 = (unsigned __int64)(unsigned __int8)v83 >> 1),
               v48 == 0)) {
            if ((GameRoutine_102e240(a1, &v86, &v83) & 1) != 0) {
              v49 = *GameData_212ebb0[0];
              v50 = GameRoutine_f71d40(*GameData_212ebb0[0], (__int64)&v86,
                                       a1 + 40);
              if ((GameRoutine_f71cb0(v50, v50) & 1) != 0 &&
                  ((unsigned int)GameRoutine_f71fc0(v49, &v86, a1 + 40) == 0 ||
                   (*(_BYTE*)(v49 + 32) & 2) != 0)) {
                v51 = GameRoutine_f71d40(*GameData_212ebb0[0], (__int64)&v86,
                                         a1 + 40);
                v53 = *(_QWORD*)(a1 + 120);
                v52 = *(_QWORD*)(a1 + 128);
                v87 = v51;
                if (v53 >= v52) {
                  v58 = GameRoutine_102f560(a1 + 112, &v86);
                }
                else {
                  v54 = *((_QWORD*)&v86 + 1);
                  *(_BYTE*)(v53 + 24) = 0;
                  v55 = (_QWORD*)(v53 + 24);
                  *(_BYTE*)(v53 + 80) = 0;
                  *(_QWORD*)(v53 + 8) = v54;
                  *(_QWORD*)v53 = v86;
                  *(_DWORD*)(v53 + 16) = v87;
                  if (v96 == 1) {
                    if ((v88 & 1) != 0) {
                      fw_text_String_CopyTerminated(v55, v90, v89);
                      if ((v91 & 1) == 0) {
                        goto LABEL_84;
                      }
                    LABEL_81:
                      fw_text_String_CopyTerminated(v53 + 48, v93, v92);
                    }
                    else {
                      v56 = v88;
                      v57 = v90;
                      *(_QWORD*)(v53 + 32) = v89;
                      *(_QWORD*)(v53 + 40) = v57;
                      *v55 = v56;
                      if ((v91 & 1) != 0) {
                        goto LABEL_81;
                      }
                    LABEL_84:
                      *(_QWORD*)(v53 + 56) = v92;
                      v59 = v91;
                      *(_QWORD*)(v53 + 64) = v93;
                      *(_QWORD*)(v53 + 48) = v59;
                    }
                    v60 = v94;
                    v61 = v95;
                    *(_BYTE*)(v53 + 80) = 1;
                    *(_BYTE*)(v53 + 76) = v61;
                    *(_DWORD*)(v53 + 72) = v60;
                  }
                  v62 = v98;
                  v58 = v53 + 112;
                  *(_QWORD*)(v53 + 88) = v97;
                  *(_QWORD*)(v53 + 96) = v62;
                }
                *(_QWORD*)(a1 + 120) = v58;
              }
            }
          }
          if ((v83 & 1) != 0) {
            a2 = v85;
            if (v85 != 0) {
              v63 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v63 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v63);
            }
          }
        }
      LABEL_93:
        if (v96 == 1) {
          if ((v91 & 1) != 0) {
            a2 = v93;
            if (v93 != 0) {
              v64 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v64 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v64);
            }
          }
          if ((v88 & 1) != 0) {
            a2 = v90;
            if (v90 != 0) {
              v65 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v65 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v65);
            }
          }
        }
        v8 += 6;
        if (v8 == v7) {
          goto LABEL_104;
        }
      }
    }
  }
LABEL_110:
  result = v81;
  v81[0] = GameData_2002c80;
  v81[1] = a1;
  v82 = v81;
  v69 = *(_QWORD**)(*(_QWORD*)GameData_212dc68 + 152LL);
  v70 = *(_QWORD*)GameData_212dc68 + 160LL;
  if (v69 == (_QWORD*)v70) {
  LABEL_128:
    v78 = 32;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v78))((__int64)result);
  }
  do {
    v71 = v69[7];
    v72 = v69[8];
    if (v71 != v72) {
      while (1) {
        v73 = v82;
        if (v82 == nullptr) {
          break;
        }
        (*(void (**)(_QWORD*, __int64))(*v82 + 48LL))(v82, v71);
        v71 += 16;
        if (v71 == v72) {
          goto LABEL_116;
        }
      }
    LABEL_131:
      GameRoutine_60a310(v73, a2, a3);
    }
  LABEL_116:
    v74 = v69[10];
    for (i = v69[11]; v74 != i; v74 += 16) {
      v73 = v82;
      if (v82 == nullptr) {
        goto LABEL_131;
      }
      (*(void (**)(_QWORD*, __int64))(*v82 + 48LL))(v82, v74);
    }
    v76 = (_QWORD*)v69[1];
    if (v76 != nullptr) {
      do {
        v77 = v76;
        v76 = (_QWORD*)*v76;
      } while (v76 != nullptr);
    }
    else {
      do {
        v77 = (_QWORD*)v69[2];
        v19 = v69 == (_QWORD*)*v77;
        v69 = v77;
      } while (!v19);
    }
    v69 = v77;
  } while (v77 != (_QWORD*)v70);
  result = v82;
  if (v82 == v81) {
    goto LABEL_128;
  }
  if (v82 != nullptr) {
    v78 = 40;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v78))((__int64)result);
  }
  return result;
}

_QWORD* game_hub_MapSimulator_Build_CondTalk(__int64 a1, __int64 a2,
                                             unsigned __int64 a3)
{
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  _BOOL4 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64* v23;
  __int64 v24;
  unsigned int* v25;
  __int128 v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int128 v33;
  __int128 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  char* v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  _QWORD* v49;
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
  _QWORD* v67;
  __int64 v68;
  __int64 i;
  _QWORD* v70;
  _QWORD* v71;
  __int64 v72;
  _QWORD* v73;
  __int64 v74;
  _QWORD v75[4];
  _QWORD* v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  __int128 v80;
  int v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  int v88;
  char v89;
  char v90;
  __int64 v91;

  v4 = *(_QWORD*)(*GameData_212ebe0 + 8);
  if (v4 != 0) {
    v5 = *(_QWORD**)(v4 + 24);
    v73 = (_QWORD*)(v4 + 32);
    if (v5 != (_QWORD*)(v4 + 32)) {
      v74 = a1 + 9;
      while (1) {
        v6 = (_QWORD*)v5[7];
        v7 = (_QWORD*)v5[8];
        if (v6 != v7) {
          break;
        }
      LABEL_103:
        v59 = (_QWORD*)v5[1];
        if (v59 != nullptr) {
          do {
            v60 = v59;
            v59 = (_QWORD*)*v59;
          } while (v59 != nullptr);
        }
        else {
          do {
            v60 = (_QWORD*)v5[2];
            v61 = v5 == (_QWORD*)*v60;
            v5 = v60;
          } while (!v61);
        }
        v5 = v60;
        if (v60 == v73) {
          goto LABEL_109;
        }
      }
      while (1) {
        v8 = *(_QWORD*)(*v6 + 552LL);
        v9 = *(_QWORD*)(*v6 + 560LL);
        if (v9 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v8 == 0) {
          goto LABEL_100;
        }
        v10 = *(_BYTE*)(v8 + 300) == 1 && (*(_BYTE*)(v8 + 297) & 8) != 0;
        v90 = 0;
        v91 = 0;
        v11 = *(unsigned __int8*)(a1 + 32);
        v12 = v6[5];
        LOBYTE(v82) = 0;
        v80 = 0u;
        v81 = 0;
        v91 = v12;
        if (v11 == 1) {
          v13 = *(_QWORD*)(*GameData_212ec18[0] + 40);
          if (v13 == 0) {
            goto LABEL_34;
          }
          if (game_gmap_GmapClock_instance_ == 0 ||
              *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                      *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                      *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
                  0) {
            v14 = *(unsigned __int8*)(a1 + 8);
            v15 = *(_QWORD*)GameData_212dbb8[0];
            if ((v14 & 1) != 0) {
              a3 = *(_QWORD*)(a1 + 16);
            }
            else {
              a3 = v14 >> 1;
            }
            v16 = *(unsigned __int8*)(v15 + 88);
            v17 = *(_QWORD*)(v15 + 96);
            if ((v16 & 1) == 0) {
              v17 = v16 >> 1;
            }
            if (a3 != v17) {
              goto LABEL_34;
            }
            v18 = (v14 & 1) != 0 ? *(_QWORD*)(a1 + 24) : v74;
            v19 = *(_QWORD*)(v15 + 104);
            v20 = v15 + 89;
            v21 = (v16 & 1) != 0 ? v19 : v20;
            if ((unsigned int)memcmp(v18, v21, a3) != 0) {
              goto LABEL_34;
            }
          }
          v22 = *(__int64**)(v13 + 48);
          v23 = *(__int64**)(v13 + 56);
          if (v22 != v23) {
            while (1) {
              v24 = *v22;
              v22 += 2;
              if (*(_QWORD*)(v24 + 32) == v12) {
                break;
              }
              if (v22 == v23) {
                goto LABEL_34;
              }
            }
          }
          else {
          LABEL_34:
            if (!v10) {
              goto LABEL_89;
            }
          }
          v25 = (unsigned int*)(*v6 + 192LL);
          *(_QWORD*)&v80 = *(_QWORD*)(*v6 + 184LL);
          *(_QWORD*)&v26 = v80;
          *((_QWORD*)&v26 + 1) = *v25;
          v80 = v26;
          if (v10) {
            goto LABEL_45;
          }
        }
        else {
          v27 = *(_QWORD**)(*GameData_212d458[0] + 24);
          v28 = *(_QWORD**)(*GameData_212d458[0] + 32);
          if (v27 == v28) {
            goto LABEL_44;
          }
          while (1) {
            v29 = *v27;
            if (*(_QWORD*)(*v27 + 264LL) == *(_QWORD*)(*v6 + 56LL)) {
              break;
            }
            v27 += 2;
            if (v27 == v28) {
              goto LABEL_44;
            }
          }
          v30 = v27[1];
          if (v30 == 0) {
            goto LABEL_44;
          }
          v31 = v27[1];
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 16), 1u,
                                    memory_order_relaxed);
          v32 = std___1___shared_weak_count_lock(v31);
          std___1___shared_weak_count___release_weak(v30);
          if (v32 == 0) {
            goto LABEL_44;
          }
          v33 = *(_OWORD*)(*(_QWORD*)(*(_QWORD*)(v29 + 24) + 16LL) + 560LL);
          *(_QWORD*)&v80 =
              *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v29 + 24) + 16LL) + 560LL);
          *(_QWORD*)&v34 = v80;
          *((_QWORD*)&v34 + 1) = DWORD2(v33);
          v80 = v34;
          if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
            std___1___shared_weak_count___release_weak(v32);
            if (v10) {
            LABEL_45:
              v35 = *(unsigned __int8*)(a1 + 8);
              v36 = *((unsigned __int8*)v5 + 32);
              v37 = v5[5];
              if ((v35 & 1) != 0) {
                a3 = *(_QWORD*)(a1 + 16);
              }
              else {
                a3 = v35 >> 1;
              }
              v38 = v36 >> 1;
              if ((v36 & 1) != 0) {
                v38 = v5[5];
              }
              if (a3 == v38 &&
                  ((v35 & 1) != 0 ? (v39 = *(_QWORD*)(a1 + 24)) : (v39 = v74),
                   (v36 & 1) != 0 ? (v40 = (char*)v5[6])
                                  : (v40 = (char*)v5 + 33),
                   (unsigned int)memcmp(v39, v40, a3) == 0)) {
                LOWORD(v77) = 0;
              }
              else if ((v36 & 1) != 0) {
                fw_text_String_CopyTerminated(&v77, v5[6], v37);
              }
              else {
                v41 = v5[5];
                v77 = v5[4];
                v78 = v41;
                v79 = v5[6];
              }
              if (*(_BYTE*)(a1 + 32) != 1 ||
                  ((v77 & 1) != 0
                       ? (v42 = v78)
                       : (v42 = (unsigned __int64)(unsigned __int8)v77 >> 1),
                   v42 == 0)) {
                if ((GameRoutine_102e240(a1, &v80, &v77) & 1) != 0) {
                  v43 = *GameData_212ebb0[0];
                  v44 = GameRoutine_f71d40(*GameData_212ebb0[0], (__int64)&v80,
                                           a1 + 40);
                  if ((GameRoutine_f71cb0(v44, v44) & 1) != 0 &&
                      ((unsigned int)GameRoutine_f71fc0(v43, &v80, a1 + 40) ==
                           0 ||
                       (*(_BYTE*)(v43 + 32) & 2) != 0)) {
                    v45 = GameRoutine_f71d40(*GameData_212ebb0[0],
                                             (__int64)&v80, a1 + 40);
                    v47 = *(_QWORD*)(a1 + 144);
                    v46 = *(_QWORD*)(a1 + 152);
                    v81 = v45;
                    if (v47 >= v46) {
                      v52 = GameRoutine_102f7e0(a1 + 136, &v80);
                    }
                    else {
                      v48 = *((_QWORD*)&v80 + 1);
                      *(_BYTE*)(v47 + 24) = 0;
                      v49 = (_QWORD*)(v47 + 24);
                      *(_BYTE*)(v47 + 80) = 0;
                      *(_QWORD*)(v47 + 8) = v48;
                      *(_QWORD*)v47 = v80;
                      *(_DWORD*)(v47 + 16) = v81;
                      if (v90 == 1) {
                        if ((v82 & 1) != 0) {
                          fw_text_String_CopyTerminated(v49, v84, v83);
                          if ((v85 & 1) == 0) {
                            goto LABEL_80;
                          }
                        LABEL_75:
                          fw_text_String_CopyTerminated(v47 + 48, v87, v86);
                        }
                        else {
                          v50 = v82;
                          v51 = v84;
                          *(_QWORD*)(v47 + 32) = v83;
                          *(_QWORD*)(v47 + 40) = v51;
                          *v49 = v50;
                          if ((v85 & 1) != 0) {
                            goto LABEL_75;
                          }
                        LABEL_80:
                          *(_QWORD*)(v47 + 56) = v86;
                          v53 = v85;
                          *(_QWORD*)(v47 + 64) = v87;
                          *(_QWORD*)(v47 + 48) = v53;
                        }
                        v54 = v88;
                        v55 = v89;
                        *(_BYTE*)(v47 + 80) = 1;
                        *(_BYTE*)(v47 + 76) = v55;
                        *(_DWORD*)(v47 + 72) = v54;
                      }
                      v52 = v47 + 96;
                      *(_QWORD*)(v47 + 88) = v91;
                    }
                    *(_QWORD*)(a1 + 144) = v52;
                  }
                }
              }
              if ((v77 & 1) != 0) {
                a2 = v79;
                if (v79 != 0) {
                  v56 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v56 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v56);
                }
              }
            }
          }
          else {
          LABEL_44:
            if (v10) {
              goto LABEL_45;
            }
          }
        }
      LABEL_89:
        if (v90 == 1) {
          if ((v85 & 1) != 0) {
            a2 = v87;
            if (v87 != 0) {
              v57 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v57 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v57);
            }
          }
          if ((v82 & 1) != 0) {
            a2 = v84;
            if (v84 != 0) {
              v58 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v58 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v58);
            }
          }
        }
      LABEL_100:
        if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak(v9);
        }
        v6 += 6;
        if (v6 == v7) {
          goto LABEL_103;
        }
      }
    }
  }
LABEL_109:
  result = v75;
  v75[0] = GameData_2002d00;
  v75[1] = a1;
  v76 = v75;
  v63 = *(_QWORD**)(*(_QWORD*)GameData_212dc68 + 152LL);
  v64 = *(_QWORD*)GameData_212dc68 + 160LL;
  if (v63 == (_QWORD*)v64) {
  LABEL_127:
    v72 = 32;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v72))((__int64)result);
  }
  do {
    v65 = v63[7];
    v66 = v63[8];
    if (v65 != v66) {
      while (1) {
        v67 = v76;
        if (v76 == nullptr) {
          break;
        }
        (*(void (**)(_QWORD*, __int64))(*v76 + 48LL))(v76, v65);
        v65 += 16;
        if (v65 == v66) {
          goto LABEL_115;
        }
      }
    LABEL_130:
      GameRoutine_60a310(v67, a2, a3);
    }
  LABEL_115:
    v68 = v63[10];
    for (i = v63[11]; v68 != i; v68 += 16) {
      v67 = v76;
      if (v76 == nullptr) {
        goto LABEL_130;
      }
      (*(void (**)(_QWORD*, __int64))(*v76 + 48LL))(v76, v68);
    }
    v70 = (_QWORD*)v63[1];
    if (v70 != nullptr) {
      do {
        v71 = v70;
        v70 = (_QWORD*)*v70;
      } while (v70 != nullptr);
    }
    else {
      do {
        v71 = (_QWORD*)v63[2];
        v61 = v63 == (_QWORD*)*v71;
        v63 = v71;
      } while (!v61);
    }
    v63 = v71;
  } while (v71 != (_QWORD*)v64);
  result = v76;
  if (v76 == v75) {
    goto LABEL_127;
  }
  if (v76 != nullptr) {
    v72 = 40;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v72))((__int64)result);
  }
  return result;
}

#pragma GCC visibility pop
