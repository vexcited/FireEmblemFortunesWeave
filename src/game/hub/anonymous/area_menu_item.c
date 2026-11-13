#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_169a430(_QWORD, _QWORD);
__int64 AreaMenuItem_ACall(__int64 a1);
__int64 AreaMenuItem_Unknown3(__int64 a1);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 Alignment_56b600(__int64 result);
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameRoutine_143d720(unsigned int*, __int16*);
__int64 GameRoutine_1842580(__int64, unsigned int, __int64);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, const char*);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* LayoutAccessor_1562060(char* result, __int64, const char*);
char* game_util_Format(const char*, ...);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
unsigned __int64 strlen(const char*);
void __attribute__((noreturn)) String_60a1d0();
void game_menu_GameMenuItem_DrawText(_QWORD*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 AreaMenuItem_DrawText(__int64 a1);

__int64 AreaMenuItem_Unknown3(__int64 a1)
{
  return *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 112) + 8LL) + 8LL) +
                    40LL);
}

__int64 AreaMenuItem_ACall(__int64 a1)
{
  _BYTE v3[32];

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v3[0] = 0;
  v3[16] = 0;
  GameRoutine_169a430(a1, v3);
  return 12;
}

__int64 AreaMenuItem_DrawText(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  atomic_ullong* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  atomic_ullong* v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  char* v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  atomic_ullong* v36;
  __int64* v37;
  char* v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int16* v42;
  char* v43;
  __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  atomic_ullong* v56;
  __int64* v57;
  __int64* v58;
  char* v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  char* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  atomic_ullong* v67;
  __int64* v68;
  char* v69;
  __int64* v70;
  __int64 v71;
  __int64* v72;
  __int64* v73;
  __int64* v74;
  __int64 v75;
  __int64* v76;
  __int64 v77;
  __int64* v78;
  __int64 result;
  struct {
    __int64 v80;
    unsigned __int64 v81;
    char* v82;
  } v80_;

  game_menu_GameMenuItem_DrawText((_QWORD*)a1);
  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v73 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
    v6 = v73;
    if (v73 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v6 == nullptr) {
  LABEL_5:
    v6 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_6:
  v7 = ui_LayoutAccessor_FindPane(v6, (__int64)"Icon");
  if (v7 != 0) {
    *(_BYTE*)(v7 + 88) &= ~1u;
  }
  v8 = *(_QWORD*)(a1 + 56);
  if (v8 == 0) {
    goto LABEL_12;
  }
  v9 = std___1___shared_weak_count_lock(v8);
  if (v9 == 0) {
    goto LABEL_12;
  }
  v10 = v9;
  v11 = (atomic_ullong*)(v9 + 8);
  v12 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v12 != nullptr) {
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  v74 = v12;
  (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
  std___1___shared_weak_count___release_weak(v10);
  v12 = v74;
  if (v74 == nullptr) {
  LABEL_12:
    v12 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_13:
  LayoutAccessor_1562cf0((__int64)v12, "Area");
  v13 = *(_QWORD*)(a1 + 56);
  if (v13 == 0) {
    goto LABEL_17;
  }
  v14 = std___1___shared_weak_count_lock(v13);
  if (v14 == 0) {
    goto LABEL_17;
  }
  v15 = *(char**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v15 != nullptr) {
      goto LABEL_18;
    }
    goto LABEL_17;
  }
  v75 = v14;
  (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
  std___1___shared_weak_count___release_weak(v75);
  if (v15 == nullptr) {
  LABEL_17:
    v15 = (char*)ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_18:
  v16 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  LayoutAccessor_1562060(v15, (__int64)"T_Txt", v16);
  v17 = *(_QWORD*)(a1 + 56);
  if (v17 == 0) {
    goto LABEL_22;
  }
  v18 = std___1___shared_weak_count_lock(v17);
  if (v18 == 0) {
    goto LABEL_22;
  }
  v19 = v18;
  v20 = (atomic_ullong*)(v18 + 8);
  v21 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v20, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v76 = v21;
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak(v19);
    v21 = v76;
    if (v76 != nullptr) {
      goto LABEL_23;
    }
    goto LABEL_22;
  }
  if (v21 == nullptr) {
  LABEL_22:
    v21 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_23:
  v22 = LayoutAccessor_155fbe0(v21, "L_State");
  LayoutAccessor_155e830((__int64)v22, 0);
  v23 = *(_QWORD*)(a1 + 112);
  v24 = *(_QWORD*)(v23 + 24);
  v25 = *(_QWORD*)(v23 + 32);
  if (v24 == v25) {
    v26 = 0;
    goto LABEL_85;
  }
  v26 = 0;
  do {
    if (*(_DWORD*)v24 == 18 || *(_DWORD*)v24 == 21) {
      goto LABEL_25;
    }
    v28 = game_util_Format("L_Icon%02d", v26);
    v29 = strlen(v28);
    if (v29 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_126:
      String_60a1d0();
    }
    v30 = v29;
    if (v29 >= 0x17) {
      if ((v29 | 7) == 0x17) {
        v32 = 26;
      }
      else {
        v32 = (v29 | 7) + 1;
      }
      v31 = (const char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v32, 16, 0);
      v80_.v81 = v30;
      v80_.v82 = v31;
      v80_.v80 = v32 | 1;
    }
    else {
      v31 = (char*)&v80_.v80 + 1;
      LOBYTE(v80_.v80) = 2 * v29;
      if (v29 == 0) {
        goto LABEL_39;
      }
    }
    memmove((__int64)v31, (__int64)v28, v30);
  LABEL_39:
    v31[v30] = 0;
    v33 = *(_QWORD*)(a1 + 56);
    if (v33 == 0) {
      goto LABEL_43;
    }
    v34 = std___1___shared_weak_count_lock(v33);
    if (v34 == 0) {
      goto LABEL_43;
    }
    v35 = v34;
    v36 = (atomic_ullong*)(v34 + 8);
    v37 = *(__int64**)(a1 + 48);
    if (atomic_fetch_add(v36, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      v45 = v37;
      (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
      std___1___shared_weak_count___release_weak(v35);
      v37 = v45;
      if (v45 != nullptr) {
        goto LABEL_44;
      }
    LABEL_43:
      v37 = ui_LayoutAccessor_empty__ptr[0];
      goto LABEL_44;
    }
    if (v37 == nullptr) {
      goto LABEL_43;
    }
  LABEL_44:
    if ((v80_.v80 & 1) != 0) {
      v38 = v80_.v82;
    }
    else {
      v38 = (char*)&v80_.v80 + 1;
    }
    v39 = LayoutAccessor_155fbe0(v37, v38);
    v40 = ui_LayoutAccessor_FindPane(v39, (__int64)"IconFacility");
    if (v40 != 0) {
      v40 = __dynamic_cast(v40, GameData_212d670[0], GameData_212d678[0], 0);
    }
    if ((*(_BYTE*)(v24 + 8) & 1) != 0) {
      v41 = *(_QWORD*)(v24 + 24);
    }
    else {
      v41 = v24 + 9;
    }
    GameRoutine_1842580(v40, *(_DWORD*)v24, v41);
    LayoutAccessor_155e830((__int64)v39, 1);
    if (game_gmap_GmapClock_instance_ != 0) {
      v42 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
    }
    else {
      v42 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
    }
    if ((GameRoutine_143d720((unsigned int*)v24, v42) & 1) != 0) {
      v43 = "Status_Default";
    }
    else {
      v43 = "Status_Disable";
    }
    LayoutAccessor_1562cf0((__int64)v39, v43);
    if ((v80_.v80 & 1) != 0 && v80_.v82 != nullptr) {
      v44 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v44 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, (__int64)v80_.v82);
    }
    if (v26 > 2) {
      goto LABEL_68;
    }
    ++v26;
  LABEL_25:
    v24 += 80;
  } while (v24 != v25);
  if (v26 <= 3) {
  LABEL_85:
    v58 = ui_LayoutAccessor_empty__ptr[0];
    do {
      v59 = game_util_Format("L_Icon%02d", v26);
      v60 = strlen(v59);
      if (v60 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_126;
      }
      v61 = v60;
      if (v60 >= 0x17) {
        if ((v60 | 7) == 0x17) {
          v63 = 26;
        }
        else {
          v63 = (v60 | 7) + 1;
        }
        v62 = (const char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v63, 16, 0);
        v80_.v81 = v61;
        v80_.v82 = v62;
        v80_.v80 = v63 | 1;
      }
      else {
        v62 = (char*)&v80_.v80 + 1;
        LOBYTE(v80_.v80) = 2 * v60;
        if (v60 == 0) {
          goto LABEL_96;
        }
      }
      memmove((__int64)v62, (__int64)v59, v61);
    LABEL_96:
      v62[v61] = 0;
      v64 = *(_QWORD*)(a1 + 56);
      if (v64 == 0) {
        goto LABEL_100;
      }
      v65 = std___1___shared_weak_count_lock(v64);
      if (v65 == 0) {
        goto LABEL_100;
      }
      v66 = v65;
      v67 = (atomic_ullong*)(v65 + 8);
      v68 = *(__int64**)(a1 + 48);
      if (atomic_fetch_add(v67, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        v72 = v68;
        (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66);
        std___1___shared_weak_count___release_weak(v66);
        v68 = v72;
        if (v72 != nullptr) {
          goto LABEL_101;
        }
      LABEL_100:
        v68 = v58;
        goto LABEL_101;
      }
      if (v68 == nullptr) {
        goto LABEL_100;
      }
    LABEL_101:
      if ((v80_.v80 & 1) != 0) {
        v69 = v80_.v82;
      }
      else {
        v69 = (char*)&v80_.v80 + 1;
      }
      v70 = LayoutAccessor_155fbe0(v68, v69);
      LayoutAccessor_155e830((__int64)v70, 0);
      if ((v80_.v80 & 1) != 0 && v80_.v82 != nullptr) {
        v71 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v71 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v71, (__int64)v80_.v82);
      }
      ++v26;
    } while (v26 != 4);
  }
LABEL_68:
  v46 = *(_QWORD*)(a1 + 56);
  if (v46 == 0) {
    goto LABEL_72;
  }
  v47 = std___1___shared_weak_count_lock(v46);
  if (v47 == 0) {
    goto LABEL_72;
  }
  v48 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v77 = v47;
    (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
    std___1___shared_weak_count___release_weak(v77);
    if (v48 != nullptr) {
      goto LABEL_73;
    }
  LABEL_72:
    v48 = ui_LayoutAccessor_empty__ptr[0];
    goto LABEL_73;
  }
  if (v48 == nullptr) {
    goto LABEL_72;
  }
LABEL_73:
  v49 = ui_LayoutAccessor_FindAlignment(v48, "A_Icon");
  if (v49 == 0) {
    goto LABEL_79;
  }
  Alignment_56b600(v49);
  v50 = v48[1];
  if (v50 == 0) {
    goto LABEL_79;
  }
  v51 = std___1___shared_weak_count_lock(v50);
  if (v51 == 0) {
    goto LABEL_79;
  }
  v52 = v51;
  if (*v48 != 0) {
    ControlCreator_13633c0(*v48);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
    std___1___shared_weak_count___release_weak(v52);
    v53 = *(_QWORD*)(a1 + 56);
    if (v53 == 0) {
      goto LABEL_124;
    }
  LABEL_80:
    v54 = std___1___shared_weak_count_lock(v53);
    if (v54 == 0) {
      goto LABEL_124;
    }
    v55 = v54;
    v56 = (atomic_ullong*)(v54 + 8);
    v57 = *(__int64**)(a1 + 48);
    if (atomic_fetch_add(v56, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v57 == nullptr) {
        goto LABEL_124;
      }
    }
    else {
      v78 = v57;
      (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
      std___1___shared_weak_count___release_weak(v55);
      v57 = v78;
      if (v78 == nullptr) {
        goto LABEL_124;
      }
    }
  }
  else {
  LABEL_79:
    v53 = *(_QWORD*)(a1 + 56);
    if (v53 != 0) {
      goto LABEL_80;
    }
  LABEL_124:
    v57 = ui_LayoutAccessor_empty__ptr[0];
  }
  result = ui_LayoutAccessor_SetPaneVisible((__int64)v57,
                                            (__int64)"L_IconLesson", 0);
  *(_BYTE*)(a1 + 82) = 1;
  return result;
}

#pragma GCC visibility pop
