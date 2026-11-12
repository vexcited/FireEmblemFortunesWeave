#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_62bec0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_cb2640(_QWORD);
__int64 GameRoutine_d6aa20(_QWORD);
__int64 GameRoutine_d80dc0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _QWORD GameData_212c350;
extern _UNKNOWN* as_g_context_slots_ptr;
extern __int64 (*GameData_1fdcd80[29])();
extern __int64 (*GameData_1fdce28[8])();
extern __int64 (*game_hub_AreaEvent_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212eb98[10];
extern __int64* GameData_212ebc0[5];
extern __int64* as_g_script_manager_ptr;
extern __int64* util_g_handle_slots_ptr[2];
__int64 AreaEvent_Destructor(__int64 a1);
__attribute__((swiftcall)) void
AreaEvent_d59720_alt1(PSEUDO_X8, _QWORD* result,
                      int) __asm__("AreaEvent_d59720");
__attribute__((swiftcall)) void Manager_d9b810(PSEUDO_X8, __int64, __int64,
                                               __int64, __int64, unsigned int);
__int64 GameRoutine_d6b220(_QWORD, _QWORD);
__int64 HubCharacterNatives_cb3e60(__int64*, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_hub_d5ae40(void);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
bool Manager_d9af70(__int64, __int64, __int64, __int64, unsigned int);
extern __int64 (*GameData_1fdcdb8[22])();
extern __int64 (*HandlePtr_Unknown21_cb39c0_ptr[15])();
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_21f3cb8;
extern __int64 GameData_21f3d10;
extern __int64 GameData_22127a8;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
void GameRoutine_d9bc80(__int64, __int64*, __int64*);
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD, long double);
void __attribute__((noreturn)) GameRoutine_919020();
void snd_Fade_Fade_10c830(__int64, float);
__attribute__((swiftcall)) void AreaEvent_d59720(PSEUDO_X8 x8_, __int64 result,
                                                 int a2);
_QWORD* AreaEvent_d5a220(_QWORD* result, float32x4_t* a2, float32x4_t* a3);
__int64 GameRoutine_62bec0_alt1(__int64 result, __int64,
                                unsigned __int8) __asm__("GameRoutine_62bec0");
__int64 GameRoutine_d6aa20_alt1(__int64) __asm__("GameRoutine_d6aa20");
__int64 GameRoutine_d80dc0_alt1(__int64 result,
                                __int64*) __asm__("GameRoutine_d80dc0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void GameRoutine_cb2640_alt1(__int64**) __asm__("GameRoutine_cb2640");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void GameRoutine_d9bc80_alt1(__int64, __int64,
                             __int64*) __asm__("GameRoutine_d9bc80");
__int64 GameHr_cb3e60(__int64*, __int64);

__int64 AreaEvent_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  __int64* v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  int v12;
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
  __int64 result;
  __int64 v68;
  __int64 v69;
  _QWORD* v70;
  struct {
    __int64* v71;
    __int64 v72;
  } v71_;

  *(_QWORD*)a1 = game_hub_AreaEvent_vtable;
  v2 = *(_QWORD*)(a1 + 1560);
  if (v2 != 0 && *(_QWORD*)(v2 + 8) != -1) {
    v3 = *(_QWORD*)(*GameData_212ebc0[0] + 8);
    v71_.v71 = *(__int64**)(a1 + 1552);
    v71_.v72 = v2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_d80dc0_alt1(v3, (__int64*)&v71_.v71);
    if (v71_.v72 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v71_.v72);
    }
    v4 = *(_QWORD*)(a1 + 1560);
    *(_QWORD*)(a1 + 1552) = 0;
    *(_QWORD*)(a1 + 1560) = 0;
    if (v4 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v4);
    }
  }
  v5 = *(_QWORD*)(a1 + 1400);
  v6 = *(_QWORD*)(a1 + 1408);
  if (v5 != v6) {
    v7 = (char*)as_g_context_slots_ptr;
    v8 = as_g_script_manager_ptr;
    do {
      v9 = *(unsigned int*)(v5 + 8);
      if ((_DWORD)v9 != 0x2000) {
        v10 = &v7[16 * v9];
        v11 = *((_QWORD*)v10 + 1);
        if (v11 != 0 && *(_QWORD*)v10 == *(_QWORD*)v5 &&
            *(_DWORD*)(v11 + 52) == 1) {
          GameRoutine_62bec0_alt1(*v8, v5, 1u);
        }
      }
      v5 += 24;
    } while (v5 != v6);
    v5 = *(_QWORD*)(a1 + 1400);
  }
  v12 = *(unsigned __int8*)(a1 + 1736);
  *(_QWORD*)(a1 + 1408) = v5;
  if (v12 == 1 && (*(_BYTE*)(a1 + 1704) & 1) != 0) {
    v13 = *(_QWORD*)(a1 + 1720);
    if (v13 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v13);
    }
  }
  v15 = *(_QWORD*)(a1 + 1696);
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak_alt1(v15);
  }
  if (*(_BYTE*)(a1 + 1656) == 1 && (*(_BYTE*)(a1 + 1632) & 1) != 0) {
    v16 = *(_QWORD*)(a1 + 1648);
    if (v16 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
    }
  }
  if ((*(_BYTE*)(a1 + 1568) & 1) != 0) {
    v18 = *(_QWORD*)(a1 + 1584);
    if (v18 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v18);
    }
  }
  v20 = *(_QWORD*)(a1 + 1560);
  if (v20 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v20);
  }
  if ((*(_BYTE*)(a1 + 1520) & 1) != 0) {
    v21 = *(_QWORD*)(a1 + 1536);
    if (v21 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v21);
    }
  }
  if ((*(_BYTE*)(a1 + 1488) & 1) != 0) {
    v23 = *(_QWORD*)(a1 + 1504);
    if (v23 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v23);
    }
  }
  if ((*(_BYTE*)(a1 + 1456) & 1) != 0) {
    v25 = *(_QWORD*)(a1 + 1472);
    if (v25 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v25);
    }
  }
  v71_.v71 = (__int64*)(a1 + 1424);
  GameRoutine_cb2640_alt1(&v71_.v71);
  v27 = *(_QWORD*)(a1 + 1400);
  if (v27 != 0) {
    *(_QWORD*)(a1 + 1408) = v27;
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v27);
  }
  v29 = *(_QWORD*)(a1 + 1376);
  if (v29 != 0) {
    v30 = *(_QWORD*)(a1 + 1384);
    if (v29 == v30) {
      goto LABEL_64;
    }
    do {
      v31 = *(unsigned int*)(v30 - 16);
      v32 = v30 - 64;
      if ((_DWORD)v31 != -1) {
        ((void (*)(__int64**, __int64))GameData_1fdce28[v31])(&v71_.v71,
                                                              v30 - 64);
      }
      *(_DWORD*)(v30 - 16) = -1;
      v30 -= 64;
    } while (v32 != v29);
    v33 = *(_QWORD*)(a1 + 1376);
    *(_QWORD*)(a1 + 1384) = v29;
    v29 = v33;
    if (v33 != 0) {
    LABEL_64:
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, v29);
    }
  }
  v35 = *(_QWORD*)(a1 + 1352);
  if (v35 != 0) {
    v36 = *(_QWORD*)(a1 + 1360);
    if (v35 == v36) {
      goto LABEL_74;
    }
    do {
      v37 = *(unsigned int*)(v36 - 16);
      v38 = v36 - 64;
      if ((_DWORD)v37 != -1) {
        ((void (*)(__int64**, __int64))GameData_1fdce28[v37])(&v71_.v71,
                                                              v36 - 64);
      }
      *(_DWORD*)(v36 - 16) = -1;
      v36 -= 64;
    } while (v38 != v35);
    v39 = *(_QWORD*)(a1 + 1352);
    *(_QWORD*)(a1 + 1360) = v35;
    v35 = v39;
    if (v39 != 0) {
    LABEL_74:
      v40 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v40 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v35);
    }
  }
  v41 = *(_QWORD*)(a1 + 1328);
  if (v41 != 0) {
    v42 = *(_QWORD*)(a1 + 1336);
    if (v41 == v42) {
      goto LABEL_84;
    }
    do {
      v43 = *(unsigned int*)(v42 - 16);
      v44 = v42 - 64;
      if ((_DWORD)v43 != -1) {
        ((void (*)(__int64**, __int64))GameData_1fdce28[v43])(&v71_.v71,
                                                              v42 - 64);
      }
      *(_DWORD*)(v42 - 16) = -1;
      v42 -= 64;
    } while (v44 != v41);
    v45 = *(_QWORD*)(a1 + 1328);
    *(_QWORD*)(a1 + 1336) = v41;
    v41 = v45;
    if (v45 != 0) {
    LABEL_84:
      v46 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v46 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v41);
    }
  }
  v47 = *(_QWORD*)(a1 + 1304);
  if (v47 != 0) {
    v48 = *(_QWORD*)(a1 + 1312);
    if (v47 == v48) {
      goto LABEL_94;
    }
    do {
      v49 = *(unsigned int*)(v48 - 16);
      v50 = v48 - 64;
      if ((_DWORD)v49 != -1) {
        ((void (*)(__int64**, __int64))GameData_1fdce28[v49])(&v71_.v71,
                                                              v48 - 64);
      }
      *(_DWORD*)(v48 - 16) = -1;
      v48 -= 64;
    } while (v50 != v47);
    v51 = *(_QWORD*)(a1 + 1304);
    *(_QWORD*)(a1 + 1312) = v47;
    v47 = v51;
    if (v51 != 0) {
    LABEL_94:
      v52 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v52 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v52, v47);
    }
  }
  v53 = *(_QWORD*)(a1 + 1280);
  if (v53 != 0) {
    v54 = *(_QWORD*)(a1 + 1288);
    if (v53 == v54) {
      goto LABEL_104;
    }
    do {
      v55 = *(unsigned int*)(v54 - 16);
      v56 = v54 - 64;
      if ((_DWORD)v55 != -1) {
        ((void (*)(__int64**, __int64))GameData_1fdce28[v55])(&v71_.v71,
                                                              v54 - 64);
      }
      *(_DWORD*)(v54 - 16) = -1;
      v54 -= 64;
    } while (v56 != v53);
    v57 = *(_QWORD*)(a1 + 1280);
    *(_QWORD*)(a1 + 1288) = v53;
    v53 = v57;
    if (v57 != 0) {
    LABEL_104:
      v58 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v58 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, v53);
    }
  }
  v59 = *(_QWORD*)(a1 + 1248);
  if (v59 != 0) {
    v60 = *(_QWORD*)(a1 + 1256);
    if (v59 == v60) {
      goto LABEL_114;
    }
    do {
      v61 = *(unsigned int*)(v60 - 8);
      v62 = v60 - 32;
      if ((_DWORD)v61 != -1) {
        ((void (*)(__int64**, __int64))GameData_1fdcd80[v61])(&v71_.v71,
                                                              v60 - 32);
      }
      *(_DWORD*)(v60 - 8) = -1;
      v60 -= 32;
    } while (v62 != v59);
    v63 = *(_QWORD*)(a1 + 1248);
    *(_QWORD*)(a1 + 1256) = v59;
    v59 = v63;
    if (v63 != 0) {
    LABEL_114:
      v64 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v64 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v64, v59);
    }
  }
  if ((*(_BYTE*)(a1 + 1216) & 1) != 0) {
    v65 = *(_QWORD*)(a1 + 1232);
    if (v65 != 0) {
      v66 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v66 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v66, v65);
    }
  }
  result = GameRoutine_d6aa20_alt1(a1 + 16);
  *(_QWORD*)a1 = GameData_212eb98[0] + 2;
  v68 = *(unsigned int*)(a1 + 8);
  v69 = *(unsigned int*)(a1 + 12);
  if ((_DWORD)v69 != 0x4000) {
    v70 = (_QWORD*)(util_g_handle_slots_ptr[0][v68] + 16 * v69);
    if (*v70 != 0 && v70[1] == a1) {
      *v70 = 0;
      v70[1] = 0;
      *(_QWORD*)(a1 + 8) = 0x400000000001LL;
    }
  }
  --*(_DWORD*)(GameData_212c350 + 4 * v68);
  return result;
}

__attribute__((swiftcall)) void AreaEvent_d59720(PSEUDO_X8 x8_, __int64 a1,
                                                 int a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v3;
  int v6;
  int v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  unsigned __int8* v16;
  int v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 (*v25)();
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  bool v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 (*v43)();
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  bool v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  _QWORD* v57;
  __int64 v58;
  unsigned __int64 v59;
  _QWORD* v60;
  __int64 v61;
  __int64 v62;
  _QWORD* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  _QWORD* v70;
  __int64 v71;
  __int64 v72;
  _QWORD* v73;
  int v74;
  __int64* v75;
  unsigned int v76;
  struct {
    __int64 v77;
    unsigned int v78;
    char gap44_[4];
    __int64 v79;
  } v77_;
  struct {
    __int64 v80;
    __int64 v81;
    __int64 v82;
  } v80_;
  struct {
    __int64 v83;
    unsigned int v84;
  } v83_;

  v3 = a3;
  a3[1] = 0;
  a3[2] = 0;
  *a3 = 0;
  if (a2 != 0) {
    v6 = 3;
  }
  else {
    v6 = 2;
  }
  v75 = v3;
  v76 = v6;
  if ((unsigned int)(*(_DWORD*)(a1 + 256) - 1) >= 3) {
    v7 = 1;
  }
  else {
    v7 = 4;
  }
  if (a2 == v7) {
    v8 = *(unsigned __int8*)(a1 + 1488);
    v9 = *(_QWORD*)(a1 + 1496);
    if ((v8 & 1) == 0) {
      v9 = v8 >> 1;
    }
    if (v9 != 0) {
      v10 = (v8 & 1) != 0 ? *(_QWORD*)(a1 + 1504) : a1 + 1489;
      if (v10 != 0) {
        snd_Fade_Fade_10c830((__int64)&v80_.v80, 0x0.0p+0f);
        snd_play_ff2d0(v10, v10, (__int64)&v80_.v80, 0, 0x10001u, 0, 0x0.0p+0f,
                       0x1.0000000000000p+0f);
        snd_Fade_Destroy_Fade(&v80_.v80);
      }
    }
  }
  if (a2 == 4) {
    v11 = *(unsigned __int8*)(a1 + 1456);
    v12 = *(_QWORD*)(a1 + 1464);
    if ((v11 & 1) == 0) {
      v12 = v11 >> 1;
    }
    if (v12 != 0) {
      v13 = (v11 & 1) != 0 ? *(_QWORD*)(a1 + 1472) : a1 + 1457;
      if (v13 != 0) {
        snd_Fade_Fade_10c830((__int64)&v80_.v80, 0x0.0p+0f);
        snd_play_ff2d0(v13, v13, (__int64)&v80_.v80, 0, 0x10001u, 0, 0x0.0p+0f,
                       0x1.0000000000000p+0f);
        snd_Fade_Destroy_Fade(&v80_.v80);
      }
    }
  }
  v14 = a1 + 24LL * a2;
  v15 = *(unsigned __int8**)(v14 + 1280);
  v16 = *(unsigned __int8**)(v14 + 1288);
  if (v15 != v16) {
    v74 = a2;
    do {
      if (v15 == nullptr) {
        goto LABEL_28;
      }
      v17 = *((_DWORD*)v15 + 12);
      if (v17 == 1) {
        v26 = *((_QWORD*)v15 + 4);
        v80_.v80 = a1;
        if (v26 == 0) {
          GameRoutine_60a310();
        }
        (*(void (**)(__int64, __int64*))(*(_QWORD*)v26 + 48LL))(v26, &v80_.v80);
        goto LABEL_28;
      }
      if (v17 != 0) {
        goto LABEL_28;
      }
      v18 = *v15;
      if ((v18 & 1) != 0) {
        v19 = *((_QWORD*)v15 + 1);
      }
      else {
        v19 = v18 >> 1;
      }
      if (v19 == 0) {
        v77_.v77 = 0;
        v77_.v79 = 0;
        v77_.v78 = 0x2000;
        goto LABEL_121;
      }
      v20 = *(_QWORD*)(a1 + 1248);
      v21 = *(_QWORD*)(a1 + 1256);
      v80_.v81 = 0;
      v80_.v82 = 0;
      v22 = v21 - v20;
      v80_.v80 = 0;
      if (v21 != v20) {
        if (v22 < 0) {
          GameRoutine_919020();
        }
        v23 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v21 - v20, 16, 0);
        v80_.v80 = v23;
        v80_.v82 = v23 + v22;
        do {
          *(_BYTE*)v23 = 0;
          *(_DWORD*)(v23 + 24) = -1;
          v24 = *(_DWORD*)(v20 + 24);
          if (v24 != -1) {
            v25 = GameData_1fdcdb8[v24];
            v83_.v83 = v23;
            ((void (*)(__int64*, __int64))v25)(&v83_.v83, v20);
            *(_DWORD*)(v23 + 24) = v24;
          }
          v20 += 32;
          v23 += 32;
        } while (v20 != v21);
        v80_.v81 = v23;
      }
      v27 = (__int64*)GameData_212dbb8[0];
      if (*(_QWORD*)GameData_212dbb8[0] != 0) {
        v28 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
      }
      else {
        v28 = 0;
      }
      if (GameData_22127a8 != 0) {
        v29 = GameData_22127a8;
      }
      else {
        v29 = v28;
      }
      GameRoutine_d9bc80_alt1(v29, (__int64)&v80_.v80, (__int64*)v15 + 3);
      if (*v27 != 0) {
        v30 = *v27 + 248;
      }
      else {
        v30 = 0;
      }
      if (GameData_22127a8 != 0) {
        v31 = GameData_22127a8;
      }
      else {
        v31 = v30;
      }
      v32 = *v15;
      v33 = (v32 & 1) == 0;
      v34 = v32 >> 1;
      if (v33) {
        v35 = (__int64)(v15 + 1);
      }
      else {
        v35 = *((_QWORD*)v15 + 2);
      }
      if (v33) {
        v36 = v34;
      }
      else {
        v36 = *((_QWORD*)v15 + 1);
      }
      if (Manager_d9af70(v31, v35, v36, (__int64)&v80_.v80, v76)) {
        v37 = *v27;
        v38 = GameData_22127a8;
        v39 = v76;
        goto LABEL_77;
      }
      v40 = v80_.v80;
      v41 = v80_.v81;
      v42 = v80_.v80 + 32;
      if (v80_.v80 + 32 == v80_.v81) {
        goto LABEL_75;
      }
      do {
        v44 = *(unsigned int*)(v42 - 8);
        v45 = *(unsigned int*)(v42 + 24);
        if ((_DWORD)v44 == -1) {
          if ((_DWORD)v45 == -1) {
            goto LABEL_70;
          }
        LABEL_69:
          v43 = HandlePtr_Unknown21_cb39c0_ptr[v45];
          v83_.v83 = v42 - 32;
          ((void (*)(__int64*))v43)(&v83_.v83);
          goto LABEL_70;
        }
        if ((_DWORD)v45 != -1) {
          goto LABEL_69;
        }
        ((void (*)(__int64*, __int64))GameData_1fdcd80[v44])(&v83_.v83,
                                                             v42 - 32);
        *(_DWORD*)(v42 - 8) = -1;
      LABEL_70:
        v42 += 32;
      } while (v42 != v41);
      v41 = v80_.v81;
      v40 = v42 - 32;
    LABEL_75:
      if (v40 != v41) {
        do {
          v55 = *(unsigned int*)(v41 - 8);
          v56 = v41 - 32;
          if ((_DWORD)v55 != -1) {
            ((void (*)(__int64*, __int64))GameData_1fdcd80[v55])(&v83_.v83,
                                                                 v41 - 32);
          }
          *(_DWORD*)(v41 - 8) = -1;
          v41 -= 32;
        } while (v56 != v40);
      }
      v80_.v81 = v40;
      v38 = GameData_22127a8;
      v39 = v76;
      v37 = *(_QWORD*)GameData_212dbb8[0];
    LABEL_77:
      if (v37 != 0) {
        v46 = v37 + 248;
      }
      else {
        v46 = 0;
      }
      if (v38 != 0) {
        v47 = v38;
      }
      else {
        v47 = v46;
      }
      v48 = *v15;
      v49 = (v48 & 1) == 0;
      v50 = v48 >> 1;
      if (v49) {
        v51 = (__int64)(v15 + 1);
      }
      else {
        v51 = *((_QWORD*)v15 + 2);
      }
      if (v49) {
        v52 = v50;
      }
      else {
        v52 = *((_QWORD*)v15 + 1);
      }
      Manager_d9b810((void*)((__int64)&v83_.v83), v47, v51, v52,
                     (__int64)&v80_.v80, v39);
      v77_.v77 = v83_.v83;
      v77_.v78 = v83_.v84;
      if (v83_.v84 == 0x2000) {
        v53 = v74;
        v54 = 0;
      }
      else {
        v53 = v74;
        v57 = (_QWORD*)((char*)as_g_context_slots_ptr + 16 * v83_.v84);
        v54 = v57[1];
        if (v54 != 0 && *v57 != v83_.v83) {
          v54 = 0;
        }
      }
      v77_.v79 = v54;
      if (v53 != 0) {
        v58 = v80_.v80;
        if (v80_.v80 == 0) {
          goto LABEL_120;
        }
      LABEL_111:
        v65 = v80_.v81;
        if (v58 == v80_.v81) {
          goto LABEL_117;
        }
        do {
          v66 = *(unsigned int*)(v65 - 8);
          v67 = v65 - 32;
          if ((_DWORD)v66 != -1) {
            ((void (*)(__int64*, __int64))GameData_1fdcd80[v66])(&v83_.v83,
                                                                 v65 - 32);
          }
          *(_DWORD*)(v65 - 8) = -1;
          v65 -= 32;
        } while (v67 != v58);
        v80_.v81 = v58;
        v58 = v80_.v80;
        if (v80_.v80 != 0) {
        LABEL_117:
          v68 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v68 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v68, v58);
        }
      }
      else {
        v59 = *(_QWORD*)(a1 + 1408);
        if (v59 >= *(_QWORD*)(a1 + 1416)) {
          v64 = GameHr_cb3e60((__int64*)(a1 + 1400), (__int64)&v77_.v77);
        }
        else if (v83_.v84 != 0x2000 &&
                 (v60 =
                      (_QWORD*)((char*)as_g_context_slots_ptr + 16 * v83_.v84),
                  (v61 = v60[1]) != 0) &&
                 *v60 == v83_.v83) {
          *(_QWORD*)v59 = 0;
          *(_QWORD*)(v59 + 16) = 0;
          *(_DWORD*)(v59 + 8) = 0x2000;
          v62 = *(unsigned int*)(v61 + 8);
          if ((_DWORD)v62 != 0x2000) {
            v63 = (_QWORD*)((char*)as_g_context_slots_ptr + 16 * v62);
            if (v63[1] == v61) {
              *(_DWORD*)(v59 + 8) = v62;
              *(_QWORD*)v59 = *v63;
            }
          }
          *(_QWORD*)(v59 + 16) = v61;
          v64 = v59 + 24;
        }
        else {
          *(_QWORD*)v59 = 0;
          *(_QWORD*)(v59 + 16) = 0;
          v64 = v59 + 24;
          *(_DWORD*)(v59 + 8) = 0x2000;
        }
        *(_QWORD*)(a1 + 1408) = v64;
        v58 = v80_.v80;
        if (v80_.v80 != 0) {
          goto LABEL_111;
        }
      }
    LABEL_120:
      v3 = v75;
    LABEL_121:
      v69 = v3[1];
      if (v69 >= v3[2]) {
        v3[1] = GameHr_cb3e60(v3, (__int64)&v77_.v77);
      }
      else {
        if (v77_.v78 != 0x2000 &&
            (v70 = (_QWORD*)((char*)as_g_context_slots_ptr + 16 * v77_.v78),
             (v71 = v70[1]) != 0) &&
            *v70 == v77_.v77) {
          *(_QWORD*)v69 = 0;
          *(_QWORD*)(v69 + 16) = 0;
          *(_DWORD*)(v69 + 8) = 0x2000;
          v72 = *(unsigned int*)(v71 + 8);
          if ((_DWORD)v72 != 0x2000) {
            v73 = (_QWORD*)((char*)as_g_context_slots_ptr + 16 * v72);
            if (v73[1] == v71) {
              *(_DWORD*)(v69 + 8) = v72;
              *(_QWORD*)v69 = *v73;
            }
          }
          *(_QWORD*)(v69 + 16) = v71;
        }
        else {
          *(_QWORD*)v69 = 0;
          *(_QWORD*)(v69 + 16) = 0;
          *(_DWORD*)(v69 + 8) = 0x2000;
        }
        v3[1] = v69 + 24;
      }
    LABEL_28:
      v15 += 64;
    } while (v15 != v16);
  }
}

_QWORD* AreaEvent_d5a220(_QWORD* result, float32x4_t* a2, float32x4_t* a3)
{
  int v3;
  bool v4;
  bool v5;
  float* v6;
  char v9;
  int v10;
  float v11;
  float v12;
  float32x4_t* v13;
  float v14;
  float v16;
  float32x4_t v17;
  int8x16_t v18;
  int8x16_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  long double v23;
  int8x16_t v24;
  bool v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  float32x4_t v34;
  long double v35;
  int8x16_t v36;
  _QWORD v37[3];
  _QWORD v38[3];
  _QWORD v39[3];
  float32x4_t v40;

  if ((*((_BYTE*)result + 1452) & 1) == 0) {
    v3 = *((_DWORD*)result + 440);
    if ((v3 & 0x100) != 0 && game_hub_ProcHubSeqView_instance_ != 0) {
      v4 = GameData_21f3d10 == 0 ||
           *(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 218) == 0;
      v5 = !v4 && *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 232) <= 0;
      if (v5 && (*(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 240) & 1) == 0 &&
          *(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 139) == 0 &&
          *(int*)(GameData_21f3d10 + 152) <= 0 &&
          *((float*)result + 439) <= 0.0) {
        if ((v3 & 0x20) == 0 ||
            (*(int*)(GameData_21f3cb8 + 32) <= 0
                 ? (v25 = *(_DWORD*)(GameData_21f3cb8 + 16) <= 0)
                 : (v25 = false),
             v25 &&
                 (game_ProcGameSkipView_instance_ == 0 ||
                  (unsigned int)*(
                      unsigned __int8*)(game_ProcGameSkipView_instance_ + 152) -
                          1 >
                      2 ||
                  (((v26 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) &
                    8) != 0
                       ? (v27 = 2)
                       : (v27 = 3),
                   (v27 & v26) != 0))) &&
                ((v28 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408)) ==
                     0 ||
                 *(_QWORD*)(v28 + 40) == 0) &&
                ((v29 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416)) ==
                     0 ||
                 *(_QWORD*)(v29 + 40) == 0)) {
          v6 = (float*)result;
          if (a3 != nullptr) {
            v9 = game_hub_d5ae40();
            v10 = 0;
            if ((v9 & 1) != 0) {
              v11 = v6[69];
              result = v6;
              if (v11 > 0.0) {
                v12 = v6[70];
                if (v12 > 0.0) {
                  v13 = a2;
                  if (LANES128(a2[1]).n128_u8[0] != 1) {
                    goto LABEL_36;
                  }
                  if (v11 > 0x1.fffffe0000000p+127) {
                    v11 = 0x1.fffffe0000000p+127;
                  }
                  if (v11 >= v12) {
                    v11 = v6[70];
                  }
                  v14 = v6[71];
                  if (v11 >= v14 && v14 != 0.0) {
                    v11 = v6[71];
                  }
                  v16 = v11 * 0.5;
                  v17 = vsubq_f32(*a3, *a2);
                  v19 = vmulq_f32(v17, v17);
                  v18 = vextq_s8(v19, v19, 8u);
                  LANES128(v19).n128_u64[0] =
                      LANES64_OF(vadd_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v18).n128_u64[0]),
                                          COERCE_AS(float32x2_t,
                                                    LANES128(v19).n128_u64[0])))
                          .n64_u64[0];
                  LANES128(v19).n128_u64[0] =
                      LANES64_OF(
                          vpadd_f32(
                              COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v19).n128_u64[0])))
                          .n64_u64[0];
                  LANES128(v18).n128_u64[0] =
                      LANES64_OF(vsqrt_f32(COERCE_AS(
                                     float32x2_t, LANES128(v19).n128_u64[0])))
                          .n64_u64[0];
                  v35 = *(long double*)&v18;
                  if (v16 < LANES128(v18).n128_f32[0]) {
                    LANES128(v19).n128_u64[1] = LANES128(v19).n128_u64[0];
                    v20 = vrsqrteq_f32(v19);
                    v21 =
                        vmulq_f32(v20, vrsqrtsq_f32(v20, vmulq_f32(v19, v20)));
                    v22 = vmulq_f32(v19, v21);
                    v24 = vceqzq_f32(v19);
                    v23 = COERCE_LONG_DOUBLE(vbicq_s8(
                        vmulq_f32(v17, vmulq_f32(v21, vrsqrtsq_f32(v21, v22))),
                        v24));
                    LANES128(v24).n128_f32[0] = v16;
                    v34 = *(float32x4_t*)&v23;
                    while (1) {
                      if ((LANES128(v13[1]).n128_u8[0] & 1) == 0) {
                        GameRoutine_8123d0(result, v23);
                      }
                      v36 = v24;
                      v40 = vaddq_f32(
                          vmulq_n_f32(v34, LANES128(v24).n128_f32[0]), *v13);
                      if ((GameRoutine_d6b220(result + 2, &v40) & 1) != 0) {
                        break;
                      }
                      v23 = v35;
                      v24 = v36;
                      result = v6;
                      v13 = a2;
                      LANES128(v24).n128_f32[0] =
                          v16 + LANES128(v36).n128_f32[0];
                      if ((float)(v16 + LANES128(v36).n128_f32[0]) >=
                          *(float*)&v35) {
                        goto LABEL_36;
                      }
                    }
                    LOBYTE(v10) = 1;
                  }
                  else {
                  LABEL_36:
                    LOBYTE(v10) = GameRoutine_d6b220(v6 + 4, a3);
                  }
                  result = v6;
                }
              }
              v10 &= 1u;
            }
            else {
              result = v6;
            }
          }
          else {
            v10 = 0;
          }
          if (*((_DWORD*)result + 311) == v10) {
            goto LABEL_67;
          }
          *((_DWORD*)result + 311) = v10;
          if ((v10 & 1) != 0) {
            AreaEvent_d59720_alt1((void*)(v38), result, 1);
            v30 = v38[0];
            if (v38[0] != 0) {
              v31 = v38;
            LABEL_63:
              v31[1] = v30;
              v32 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v32 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v30);
            }
          }
          else {
            AreaEvent_d59720_alt1((void*)(v39), result, 3);
            v30 = v39[0];
            if (v39[0] != 0) {
              v31 = v39;
              goto LABEL_63;
            }
          }
          v10 = *((_DWORD*)v6 + 311);
          result = v6;
        LABEL_67:
          if (v10 == 1) {
            result = X8CALL_X0(_QWORD*,
                               AreaEvent_d59720_alt1((void*)(v37), result, 2));
            if (v37[0] != 0) {
              v37[1] = v37[0];
              v33 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v33 = 56;
              }
              return (_QWORD*)nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v37[0]);
            }
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
