#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ControlCreator_13633c0(_QWORD);
__int64 GameRoutine_155ca60(__int64);
__int64 GameRoutine_155dbf0(float*);
__int64 GameRoutine_155e140(__int64*);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_156adc0(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*anonymous_ProcTransitionAnim_vtable[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 game_gameui_MenuAnimator_instance_;
__int64 ProcTransitionAnim_Destructor(__int64 a1);
__int64 ProcTransitionAnim_Unknown3(__int64 a1);
__int64 LayoutAccessor_155cb60(_QWORD*);
__int64 Pane_58dee0(_QWORD, _QWORD);
__int64 Pane_58df60(_QWORD, _QWORD);
__int64 ProcTransitionAnim_156adc0(__int64 a1);
__int64 GameRoutine_156bb70();
__int64 GameRoutine_58c890(_QWORD);
__int64 LayoutAccessor_155c910(_QWORD, _QWORD);
__int64 LayoutAccessor_155cda0(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155e140(_QWORD);
__int64 LayoutAccessor_1562b50(_QWORD, _QWORD);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 LayoutEx_58d200(_QWORD, _QWORD);
__int64 ProcInst_657a50(_QWORD, _QWORD);
__int64 ProcTransitionAnim_156adc0_alt1(_QWORD) __asm__(
    "ProcTransitionAnim_156adc0");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(_QWORD, _QWORD);
__int64 game_ProcInst_Register(_QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPartsLayout(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_Setup_155dea0(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_2258d80;
extern __int64 (*anonymous_ProcTransitionAnim_ProcTransLastUpdate_vtable[])();
extern __int64* GameData_212c628;
extern __int64 GameData_212c608[2];
extern __int64 GameData_2258d08;
extern __int64 GameData_2258d10;
extern __int64 GameData_2258d18;
extern __int64 GameData_2258d28;
extern __int64 GameData_2258d38;
extern __int64 GameData_2258d48;
extern __int64 GameData_2258d50;
extern __int64 GameData_2258d58;
extern __int64 GameData_2258d68;
extern __int64 GameData_2258d78;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_2258d00;
extern char GameData_2258d40;
extern int GameData_2258d20;
extern int GameData_2258d30;
extern int GameData_2258d60;
extern int GameData_2258d70;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 ProcTransitionAnim_156af20(__int64 a1, int a2, int a3, __int64* a4,
                                   __int64 a5, __int64 a6);
__int64 ProcTransitionAnim_156bb70();

__int64 ProcTransitionAnim_Destructor(__int64 a1)
{
  __int64 v2;
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

  *(_QWORD*)a1 = anonymous_ProcTransitionAnim_vtable;
  v2 = *(_QWORD*)(a1 + 152);
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_155e140((__int64*)(a1 + 168));
  GameRoutine_155ca60(a1 + 2392);
  v4 = *(_QWORD*)(a1 + 2384);
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_155ca60(a1 + 2160);
  v5 = *(_QWORD*)(a1 + 2152);
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak(v5);
  }
  GameRoutine_155ca60(a1 + 1928);
  v6 = *(_QWORD*)(a1 + 1920);
  if (v6 != 0) {
    std___1___shared_weak_count___release_weak(v6);
  }
  GameRoutine_155ca60(a1 + 1696);
  v7 = *(_QWORD*)(a1 + 1688);
  if (v7 != 0) {
    std___1___shared_weak_count___release_weak(v7);
  }
  GameRoutine_155ca60(a1 + 1464);
  v8 = *(_QWORD*)(a1 + 1456);
  if (v8 != 0) {
    std___1___shared_weak_count___release_weak(v8);
  }
  GameRoutine_155ca60(a1 + 1232);
  v9 = *(_QWORD*)(a1 + 1224);
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
  }
  GameRoutine_155ca60(a1 + 1000);
  v10 = *(_QWORD*)(a1 + 992);
  if (v10 != 0) {
    std___1___shared_weak_count___release_weak(v10);
  }
  GameRoutine_155ca60(a1 + 768);
  v11 = *(_QWORD*)(a1 + 760);
  if (v11 != 0) {
    std___1___shared_weak_count___release_weak(v11);
  }
  GameRoutine_155ca60(a1 + 536);
  v12 = *(_QWORD*)(a1 + 528);
  if (v12 != 0) {
    std___1___shared_weak_count___release_weak(v12);
  }
  GameRoutine_155ca60(a1 + 304);
  v13 = *(_QWORD*)(a1 + 296);
  if (v13 != 0) {
    std___1___shared_weak_count___release_weak(v13);
  }
  GameRoutine_155e140((__int64*)(a1 + 168));
  v14 = *(_QWORD*)(a1 + 264);
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v14);
  }
  GameRoutine_1564060(a1 + 216);
  GameRoutine_1563f90(a1 + 192, *(_QWORD*)(a1 + 200));
  v15 = *(_QWORD*)(a1 + 176);
  if (v15 != 0) {
    std___1___shared_weak_count___release_weak(v15);
  }
  v16 = *(_QWORD*)(a1 + 160);
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  game_gameui_MenuAnimator_instance_ = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcTransitionAnim_Unknown3(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 i;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  char v16;
  __int64 v17;
  __int64 v18;

  *(_BYTE*)(a1 + 2600) = 0;
  v2 = *(_QWORD*)(a1 + 176);
  if (v2 != 0 && (v3 = std___1___shared_weak_count_lock(v2)) != 0) {
    v4 = v3;
    result = ControlCreator_13633c0(*(_QWORD*)(a1 + 168));
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      result = std___1___shared_weak_count___release_weak(v4);
    }
  }
  else {
    result = ControlCreator_13633c0(0);
  }
  v6 = a1 + 272;
  for (i = 2320; i != 0; i -= 232) {
    if (*(_QWORD*)v6 != -1) {
      v8 = *(_QWORD*)(v6 + 24);
      if (v8 != 0 && (v9 = std___1___shared_weak_count_lock(v8)) != 0) {
        v10 = v9;
        v11 = *(_QWORD*)(v6 + 16);
        if (v11 == 0 || *(_BYTE*)(v11 + 24) != 1) {
          goto LABEL_17;
        }
        v12 = *(_QWORD*)(v6 + 216);
        if (v12 != 0) {
          v13 = *(_QWORD*)(v6 + 208);
          v14 = *(_DWORD*)(v13 + 72);
          v15 = *(_DWORD*)(v13 + 76);
          v16 = *(_BYTE*)(v13 + 89);
          v17 = *(_QWORD*)(v13 + 48);
          *(_DWORD*)(v12 + 56) = *(_DWORD*)(v13 + 56);
          LOBYTE(v13) = *(_BYTE*)(v12 + 88);
          *(_QWORD*)(v12 + 48) = v17;
          *(_BYTE*)(v12 + 88) = v13 | 0x10;
          v18 = *(_QWORD*)(v6 + 216);
          LOBYTE(v13) = *(_BYTE*)(v18 + 88);
          *(_DWORD*)(v18 + 72) = v14;
          *(_DWORD*)(v18 + 76) = v15;
          *(_BYTE*)(v18 + 88) = v13 | 0x10;
          *(_BYTE*)(*(_QWORD*)(v6 + 216) + 89LL) = v16;
          ControlCreator_13633c0(v11);
        }
        result = GameRoutine_155dbf0((float*)(v6 + 32));
        if ((result & 1) != 0) {
        LABEL_17:
          result = GameRoutine_156adc0(v6);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          result = std___1___shared_weak_count___release_weak(v10);
        }
      }
      else {
        result = GameRoutine_156adc0(v6);
      }
    }
    v6 += 232;
  }
  return result;
}

__int64 ProcTransitionAnim_156adc0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  *(_QWORD*)a1 = -1;
  *(_DWORD*)(a1 + 8) = 2;
  LayoutAccessor_155cb60((_QWORD*)(a1 + 32));
  v2 = *(_QWORD*)(a1 + 24);
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v4 = *(_QWORD*)(a1 + 16);
      if (v4 != 0 && *(_BYTE*)(v4 + 24) == 1) {
        v5 = *(_QWORD*)(a1 + 216);
        if (v5 != 0) {
          v6 = *(_QWORD*)(v5 + 24);
          v7 = *(_QWORD*)(a1 + 224);
          if (v7 != 0) {
            Pane_58df60(v5, v7);
            Pane_58dee0(v6, *(_QWORD*)(a1 + 224));
          }
          else {
            v11 = *(_QWORD*)(v5 + 40);
            if (v11 != v5 + 32) {
              do {
                v12 = *(_QWORD*)(v11 + 8);
                v13 = v11 - 8;
                Pane_58df60(v5, v11 - 8);
                Pane_58dee0(v6, v13);
                v5 = *(_QWORD*)(a1 + 216);
                v11 = v12;
              } while (v12 != v5 + 32);
            }
          }
        }
      }
    }
  }
  else {
    v3 = 0;
  }
  v8 = *(_QWORD*)(a1 + 208);
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  if (v8 != 0) {
    v9 = *(_BYTE*)(v8 + 88);
    *(_QWORD*)(v8 + 48) = 0;
    *(_DWORD*)(v8 + 56) = 0;
    *(_BYTE*)(v8 + 88) = v9 | 0x10;
    *(_BYTE*)(*(_QWORD*)(a1 + 208) + 89LL) = -1;
    *(_QWORD*)(a1 + 208) = 0;
  }
  result = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64 ProcTransitionAnim_156af20(__int64 a1, int a2, int a3, __int64* a4,
                                   __int64 a5, __int64 a6)
{
  int v6;
  __int64 v8;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _BOOL4 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
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
  _BOOL4 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  char* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _BOOL4 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  char v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned int v62;
  __int64 v63;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  char v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  char v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  _QWORD* v89;
  __int64 v92;
  __int64 v93;
  char* v94;
  _BYTE v95[32];
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64* v103;
  __int64 v104;
  __int64 v105;
  _QWORD v106[2];
  __int64 v107;
  __int64 v108;
  int v109;
  __int64 v110;
  __int64 v111;

  if (a4[2] == 0) {
    return -1;
  }
  v8 = a4[1];
  if (v8 == 0) {
    return -1;
  }
  v12 = std___1___shared_weak_count_lock(v8);
  if (v12 == 0) {
  LABEL_11:
    v16 = a4[1];
    if (v16 == 0 || *(_QWORD*)(v16 + 8) == -1) {
      return -1;
    }
    goto LABEL_16;
  }
  v13 = *a4;
  if (*a4 != 0) {
    v6 = *(unsigned __int8*)(v13 + 24);
    v14 = v13 + 152;
    if (v6 == 0) {
      v14 = 0;
    }
    v15 = v14 != a4[2];
  }
  else {
    v15 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v15) {
      goto LABEL_11;
    }
  }
  else {
    v17 = v12;
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v17);
    if (v15) {
      goto LABEL_11;
    }
  }
  if ((v6 & 1) == 0) {
    return -1;
  }
LABEL_16:
  if (a5 != 0) {
    v18 = ui_LayoutAccessor_FindPane(a4, a5);
    if (v18 != 0) {
      if (*(_QWORD*)(a1 + 272) != -1 && *(_QWORD*)(a1 + 496) == v18) {
        v19 = a1 + 272;
      LABEL_48:
        ProcTransitionAnim_156adc0_alt1(v19);
        goto LABEL_49;
      }
      if (*(_QWORD*)(a1 + 504) != -1 && *(_QWORD*)(a1 + 728) == v18) {
        v19 = a1 + 504;
        goto LABEL_48;
      }
      if (*(_QWORD*)(a1 + 736) != -1 && *(_QWORD*)(a1 + 960) == v18) {
        v19 = a1 + 736;
        goto LABEL_48;
      }
      if (*(_QWORD*)(a1 + 968) != -1 && *(_QWORD*)(a1 + 1192) == v18) {
        v19 = a1 + 968;
        goto LABEL_48;
      }
      if (*(_QWORD*)(a1 + 1200) != -1 && *(_QWORD*)(a1 + 1424) == v18) {
        v19 = a1 + 1200;
        goto LABEL_48;
      }
      if (*(_QWORD*)(a1 + 1432) != -1 && *(_QWORD*)(a1 + 1656) == v18) {
        v19 = a1 + 1432;
        goto LABEL_48;
      }
      if (*(_QWORD*)(a1 + 1664) != -1 && *(_QWORD*)(a1 + 1888) == v18) {
        v19 = a1 + 1664;
        goto LABEL_48;
      }
      if (*(_QWORD*)(a1 + 1896) != -1 && *(_QWORD*)(a1 + 2120) == v18) {
        v19 = a1 + 1896;
        goto LABEL_48;
      }
      if (*(_QWORD*)(a1 + 2128) != -1 && *(_QWORD*)(a1 + 2352) == v18) {
        v19 = a1 + 2128;
        goto LABEL_48;
      }
      if (*(_QWORD*)(a1 + 2360) != -1 && *(_QWORD*)(a1 + 2584) == v18) {
        v19 = a1 + 2360;
        goto LABEL_48;
      }
    }
  }
LABEL_49:
  if (*(_QWORD*)(a1 + 272) == -1) {
    v20 = 0;
  }
  else if (*(_QWORD*)(a1 + 504) == -1) {
    v20 = 1;
  }
  else if (*(_QWORD*)(a1 + 736) == -1) {
    v20 = 2;
  }
  else if (*(_QWORD*)(a1 + 968) == -1) {
    v20 = 3;
  }
  else if (*(_QWORD*)(a1 + 1200) == -1) {
    v20 = 4;
  }
  else if (*(_QWORD*)(a1 + 1432) == -1) {
    v20 = 5;
  }
  else if (*(_QWORD*)(a1 + 1664) == -1) {
    v20 = 6;
  }
  else if (*(_QWORD*)(a1 + 1896) == -1) {
    v20 = 7;
  }
  else if (*(_QWORD*)(a1 + 2128) == -1) {
    v20 = 8;
  }
  else {
    if (*(_QWORD*)(a1 + 2360) != -1) {
      return -1;
    }
    v20 = 9;
  }
  v21 = a1 + 272;
  if (a2 != 7) {
    if (a5 == 0 || ui_LayoutAccessor_FindPane(a4, a5) != 0) {
      sprintf(v95, "L_Anim_%02d", v20);
      v27 = a4[1];
      if (v27 != 0) {
        v28 = std___1___shared_weak_count_lock(v27);
        if (v28 != 0) {
          v29 = *a4;
        }
        else {
          v29 = 0;
        }
      }
      else {
        v29 = 0;
        v28 = 0;
      }
      v36 = ui_LayoutAccessor_FindPartsLayout(a1 + 168, v95);
      v104 = 0;
      v105 = 0;
      v100 = 0;
      v101 = 0;
      v106[0] = 0;
      v106[1] = 0;
      v107 = 0;
      v108 = 0;
      v110 = 0;
      v111 = 0;
      v92 = v29;
      v93 = v28;
      v102 = 0;
      v103 = &v104;
      v109 = 1065353216;
      if (v28 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 8), 1u,
                                  memory_order_relaxed);
        ui_LayoutAccessor_Setup_155dea0(&v100, &v92, v36);
        if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
          std___1___shared_weak_count___release_weak(v28);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
          std___1___shared_weak_count___release_weak(v28);
        }
      }
      else {
        ui_LayoutAccessor_Setup_155dea0(&v100, &v92, v36);
      }
      v37 = (_QWORD*)(v21 + 232LL * v20);
      LayoutAccessor_155c910(v37 + 4, &v100);
      sprintf(v95, "L_Anim_%02d/Bind", v20);
      v37[26] = ui_LayoutAccessor_FindPane(a1 + 168, v95);
      if (a5 != 0) {
        v38 = ui_LayoutAccessor_FindPane(a4, a5);
        v39 = *(_QWORD*)(v38 + 24);
        v40 = v38;
        v41 = strlen(a5);
        if (v41 >= 0xFFFFFFFFFFFFFFF7LL) {
          String_60a1d0(v41);
        }
        v42 = v41;
        if (v41 >= 0x17) {
          v89 = (_QWORD*)(v21 + 232LL * v20);
          if ((v41 | 7) == 0x17) {
            v49 = 26;
          }
          else {
            v49 = (v41 | 7) + 1;
          }
          v50 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v49, 16, 0);
          v51 = v49 | 1;
          v21 = a1 + 272;
          v37 = v89;
          v43 = (char*)v50;
          v93 = v42;
          v94 = (char*)v50;
          v92 = v51;
        }
        else {
          LOBYTE(v92) = 2 * v41;
          v43 = (char*)&v92 + 1;
          if (v41 == 0) {
            goto LABEL_115;
          }
        }
        memcpy(v43, a5, v42);
      LABEL_115:
        v43[v42] = 0;
        if ((v92 & 1) != 0) {
          v52 = v94;
        }
        else {
          v52 = (char*)&v92 + 1;
        }
        v53 = game_util_Format("%s%s", "__NewRoot__", v52);
        v54 = ui_LayoutAccessor_FindPane(a4, v53);
        if (v54 == 0) {
          v55 = LayoutEx_579160(224, 16);
          v54 = v55;
          if (v55 != 0) {
            GameRoutine_58c890(v55);
          }
          LayoutEx_58d200(v54, v53);
          v56 = *(_BYTE*)(v54 + 88);
          *(_QWORD*)(v54 + 48) = 0;
          *(_DWORD*)(v54 + 56) = 0;
          *(_BYTE*)(v54 + 88) = v56 | 0x13;
          Pane_58dee0(v39, v54);
        }
        v37[27] = v54;
        v37[28] = v40;
        Pane_58df60(v39, v40);
        Pane_58dee0(v54, v40);
        if ((v92 & 1) != 0 && v94 != nullptr) {
          v57 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v57 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v57, (_QWORD)(v94));
        }
      LABEL_168:
        LayoutAccessor_155e140(&v100);
        v73 = v111;
        if (v111 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v111 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v73 + 16LL))(v73);
          std___1___shared_weak_count___release_weak(v73);
        }
        v62 = v20;
        GameRoutine_1564060(v106);
        GameRoutine_1563f90(&v103, v104);
        if (v101 != 0) {
          std___1___shared_weak_count___release_weak(v101);
        }
        goto LABEL_173;
      }
      if (a4[2] == 0) {
        goto LABEL_162;
      }
      v44 = a4[1];
      if (v44 == 0) {
        goto LABEL_162;
      }
      v45 = std___1___shared_weak_count_lock(v44);
      if (v45 == 0) {
        goto LABEL_156;
      }
      v46 = *a4;
      if (*a4 != 0) {
        LODWORD(v28) = *(unsigned __int8*)(v46 + 24);
        v47 = v46 + 152;
        if ((_DWORD)v28 == 0) {
          v47 = 0;
        }
        v48 = v47 != a4[2];
      }
      else {
        v48 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v65 = v45;
        (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
        std___1___shared_weak_count___release_weak(v65);
      }
      if (!v48) {
        if ((v28 & 1) == 0) {
          goto LABEL_162;
        }
      }
      else {
      LABEL_156:
        v66 = a4[1];
        if (v66 == 0 || *(_QWORD*)(v66 + 8) == -1) {
          goto LABEL_162;
        }
      }
      v67 = a4[2];
      if (v67 != 0) {
        v68 = *(_QWORD*)(v67 + 24);
      LABEL_163:
        v69 = ui_LayoutAccessor_FindPane(a4, "__NewRoot__");
        if (v69 == 0) {
          v70 = LayoutEx_579160(224, 16);
          v69 = v70;
          if (v70 != 0) {
            GameRoutine_58c890(v70);
          }
          LayoutEx_58d200(v69, "__NewRoot__");
          v71 = *(_BYTE*)(v69 + 88);
          *(_QWORD*)(v69 + 48) = 0;
          *(_DWORD*)(v69 + 56) = 0;
          *(_BYTE*)(v69 + 88) = v71 | 0x13;
          Pane_58dee0(v68, v69);
        }
        v37[27] = v69;
        v72 = *(_QWORD*)(v68 + 40);
        if (v72 != v68 + 32) {
          do {
            v81 = *(_QWORD*)(v72 + 8);
            v82 = v72 - 8;
            if (v72 - 8 != v69) {
              Pane_58df60(v68, v72 - 8);
              Pane_58dee0(v69, v82);
            }
            v72 = v81;
          } while (v81 != v68 + 32);
        }
        goto LABEL_168;
      }
    LABEL_162:
      v68 = 0;
      goto LABEL_163;
    }
    return -1;
  }
  v104 = 0;
  v105 = 0;
  v100 = 0;
  v101 = 0;
  v106[0] = 0;
  v106[1] = 0;
  v107 = 0;
  v108 = 0;
  v110 = 0;
  v111 = 0;
  v102 = 0;
  v103 = &v104;
  v109 = 1065353216;
  v22 = ui_LayoutAccessor_FindPartsLayout(a4, a5);
  if (v22 != 0) {
    v23 = v22;
    v24 = a4[1];
    v98 = 0;
    v99 = 0;
    if (v24 != 0) {
      v25 = std___1___shared_weak_count_lock(v24);
      v99 = v25;
      if (v25 != 0) {
        v26 = v25;
        v98 = *a4;
        ui_LayoutAccessor_Setup_155dea0(&v100, &v98, v23);
        goto LABEL_137;
      }
    }
    ui_LayoutAccessor_Setup_155dea0(&v100, &v98, v23);
    goto LABEL_139;
  }
  v30 = a4[1];
  v96 = 0;
  v97 = 0;
  if (v30 != 0) {
    v97 = std___1___shared_weak_count_lock(v30);
    if (v97 != 0) {
      v96 = *a4;
    }
  }
  if (a4[2] != 0) {
    v31 = a4[1];
    if (v31 != 0) {
      v32 = std___1___shared_weak_count_lock(v31);
      if (v32 == 0) {
        goto LABEL_131;
      }
      v33 = *a4;
      if (*a4 != 0) {
        v6 = *(unsigned __int8*)(v33 + 24);
        v34 = v33 + 152;
        if (v6 == 0) {
          v34 = 0;
        }
        v35 = v34 != a4[2];
      }
      else {
        v35 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v58 = v32;
        (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
        std___1___shared_weak_count___release_weak(v58);
      }
      if (!v35) {
        if ((v6 & 1) != 0) {
        LABEL_133:
          v60 = a4[2];
          goto LABEL_136;
        }
      }
      else {
      LABEL_131:
        v59 = a4[1];
        if (v59 != 0 && *(_QWORD*)(v59 + 8) != -1) {
          goto LABEL_133;
        }
      }
    }
  }
  v60 = 0;
LABEL_136:
  ui_LayoutAccessor_Setup_155dea0(&v100, &v96, v60);
  v26 = v97;
  if (v97 != 0) {
  LABEL_137:
    if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
      std___1___shared_weak_count___release_weak(v26);
    }
  }
LABEL_139:
  if ((LayoutAccessor_1562b50(&v100, a6) & 1) == 0) {
    LayoutAccessor_155e140(&v100);
    v63 = v111;
    if (v111 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v111 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63);
      std___1___shared_weak_count___release_weak(v63);
    }
    GameRoutine_1564060(v106);
    GameRoutine_1563f90(&v103, v104);
    if (v101 != 0) {
      std___1___shared_weak_count___release_weak(v101);
    }
    return -1;
  }
  LayoutAccessor_155c910(v21 + 232 * v20 + 32, &v100);
  LayoutAccessor_155e140(&v100);
  v61 = v111;
  if (v111 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v111 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61);
    std___1___shared_weak_count___release_weak(v61);
  }
  GameRoutine_1564060(v106);
  GameRoutine_1563f90(&v103, v104);
  if (v101 != 0) {
    std___1___shared_weak_count___release_weak(v101);
  }
  v62 = v20;
LABEL_173:
  v74 = v21 + 232LL * v62;
  LayoutAccessor_155cda0(v74 + 32, a6, 0);
  v75 = *(_QWORD*)(a1 + 2592);
  *(_QWORD*)(a1 + 2592) = v75 + 1;
  *(_QWORD*)v74 = v75;
  *(_DWORD*)(v74 + 8) = a3;
  v76 = a4[1];
  if (v76 == 0) {
    v78 = 0;
    goto LABEL_180;
  }
  v77 = std___1___shared_weak_count_lock(v76);
  v78 = v77;
  if (v77 == 0) {
  LABEL_180:
    v79 = 0;
    v80 = 1;
    goto LABEL_181;
  }
  v79 = *a4;
  v80 = 0;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v77 + 16), 1u,
                            memory_order_relaxed);
LABEL_181:
  v83 = *(_QWORD*)(v74 + 24);
  *(_QWORD*)(v74 + 16) = v79;
  *(_QWORD*)(v74 + 24) = v78;
  if (v83 != 0) {
    std___1___shared_weak_count___release_weak(v83);
  }
  if ((v80 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v78 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v78 + 16LL))(v78);
    std___1___shared_weak_count___release_weak(v78);
  }
  if ((*(_BYTE*)(a1 + 2600) & 1) == 0) {
    *(_BYTE*)(a1 + 2600) = 1;
    v84 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c628);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2258d80,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_2258d80) != 0) {
      GameData_2258d00 = 13;
      GameData_2258d18 = 0;
      GameData_2258d20 = 0;
      GameData_2258d28 = 0;
      GameData_2258d30 = 0;
      GameData_2258d38 = 0;
      GameData_2258d40 = 0;
      GameData_2258d68 = 0;
      GameData_2258d70 = 0;
      GameData_2258d78 = 0;
      GameData_2258d48 = 0;
      GameData_2258d50 = 0;
      GameData_2258d58 = 0;
      GameData_2258d60 = 0;
      GameData_2258d08 = 0;
      GameData_2258d10 = (__int64)GameRoutine_156bb70;
      __cxa_guard_release(&GameData_2258d80);
    }
    v85 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         152, 16, 0);
    v86 = GameData_212c608[0];
    *(_QWORD*)(v85 + 96) = 0;
    *(_QWORD*)(v85 + 104) = 0;
    *(_QWORD*)(v85 + 112) = 0;
    *(_QWORD*)(v85 + 120) = 0;
    *(_QWORD*)(v85 + 128) = 0;
    *(_WORD*)(v85 + 136) = 0;
    *(_QWORD*)(v85 + 16) = 0;
    *(_QWORD*)(v85 + 24) = "NULL";
    *(_QWORD*)(v85 + 138) = 0;
    *(_QWORD*)(v85 + 144) = 0;
    *(_QWORD*)(v85 + 32) = 0;
    *(_QWORD*)(v85 + 40) = 0;
    *(_QWORD*)(v85 + 48) = 0;
    *(_QWORD*)(v85 + 56) = 0;
    *(_QWORD*)(v85 + 64) = 0;
    *(_QWORD*)(v85 + 72) = 0;
    *(_QWORD*)(v85 + 80) = 0;
    *(_QWORD*)(v85 + 88) = 0;
    *(_QWORD*)v85 = v86 + 16;
    *(_QWORD*)(v85 + 8) = 0;
    game_ProcInst_Register(v85);
    *(_QWORD*)v85 = anonymous_ProcTransitionAnim_ProcTransLastUpdate_vtable;
    if (v84 != 0) {
      v88 = *(_QWORD*)(v84 + 40);
      if (v88 != 0) {
        *(_QWORD*)(v88 + 48) = v85;
        *(_QWORD*)(v85 + 56) = *(_QWORD*)(v84 + 40);
      }
      *(_QWORD*)(v84 + 40) = v85;
      *(_QWORD*)(v85 + 24) = "ProcTransLastUpdate";
      *(_QWORD*)(v85 + 32) = v84;
      *(_DWORD*)(v85 + 140) = game_HashString32("ProcTransLastUpdate", v87);
      *(_QWORD*)(v85 + 64) = 0;
      *(_QWORD*)(v85 + 72) = 24;
      *(_QWORD*)(v85 + 80) = 1;
      *(_QWORD*)(v85 + 8) = &GameData_2258d00;
      *(_QWORD*)(v85 + 16) = &GameData_2258d00;
      (*(void (**)(__int64))(*(_QWORD*)v85 + 32LL))(v85);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v85 + 136LL))(v85) & 1) != 0 &&
          (*(_WORD*)(v85 + 136) & 0x100) == 0) {
        *(_WORD*)(v85 + 136) |= 0x100u;
      }
    }
    else if ((*(_WORD*)(v85 + 136) & 1) == 0) {
      ProcInst_657a50(v85, 1);
    }
  }
  return *(_QWORD*)v74;
}

__int64 ProcTransitionAnim_156bb70()
{
  __int64 result;

  result = game_gameui_MenuAnimator_instance_;
  if (game_gameui_MenuAnimator_instance_ != 0) {
    return (
        *(__int64 (**)(__int64))(*(_QWORD*)game_gameui_MenuAnimator_instance_ +
                                 24LL))(game_gameui_MenuAnimator_instance_);
  }
  return result;
}

#pragma GCC visibility pop
