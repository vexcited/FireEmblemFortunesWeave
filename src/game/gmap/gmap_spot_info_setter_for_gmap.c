#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

float GmapSpotInfoSetterForGmap_Unknown7() { return 742.0; };
_QWORD* GameRoutine_1657240(_QWORD* result);
__int64 Pane_58fac0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern _UNKNOWN GameData_1ac6c8b;
extern __int64 (*game_gmap_GmapSpotInfoSetter_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212fc70[2];
__int64 GmapSpotInfoSetterForGmap_Unknown6(__int64 a1);
__int64 GmapSpotInfoSetterForGmap_DeletingDestructor(_QWORD* a1);
_QWORD* GmapSpotInfoSetterForGmap_1657240(_QWORD* result);
__int64 GameRoutine_14ded40(_QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_165dad0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1841470(_QWORD, _QWORD);
__int64 GameRoutine_1841930(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212da30;
extern __int64* GameData_212c998[148];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
void __attribute__((noreturn)) GameRoutine_165dd60(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GmapSpotInfoSetterForGmap_165b440(__int64** a1, unsigned int a2,
                                          unsigned int a3);

_QWORD* GmapSpotInfoSetterForGmap_1657240(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = *result;
  v2 = result[1];
  v3 = result;
  if (*result != v2) {
    v4 = fw_memory_g_heap_manager_ptr;
    do {
      v8 = *(_QWORD*)(v2 - 32);
      if (v8 != 0) {
        *(_QWORD*)(v2 - 24) = v8;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9, v8);
      }
      v6 = *(_QWORD*)(v2 - 56);
      if (v6 != 0) {
        v10 = *(_QWORD*)(v2 - 48);
        if (v6 == v10) {
          goto LABEL_4;
        }
        do {
          v11 = *(_QWORD*)(v10 - 8);
          if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
            result = (_QWORD*)std___1___shared_weak_count___release_weak(v11);
          }
          v10 -= 16;
        } while (v10 != v6);
        v5 = *(_QWORD*)(v2 - 56);
        *(_QWORD*)(v2 - 48) = v6;
        v6 = v5;
        if (v5 != 0) {
        LABEL_4:
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v7 = 128;
          }
          else {
            v7 = 56;
          }
          result =
              (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7, v6);
        }
      }
      v2 -= 72;
    } while (v1 != v2);
  }
  v3[1] = v1;
  return result;
}

__int64 GmapSpotInfoSetterForGmap_165b440(__int64** a1, unsigned int a2,
                                          unsigned int a3)
{
  __int64* v3;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 result;
  long double v11;
  __int64 v12;
  __int64 v13;
  int v14;
  const char* v15;
  _QWORD* v16;
  char v17;
  __int64* v18;
  const char* v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _BOOL4 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _BOOL4 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  char* v68;
  char* v69;
  char* v70;
  char* v71;
  char* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  char* v84;
  unsigned __int64 v85;
  __int64 v86;
  _QWORD v87[4];
  int v88;
  int v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;

  v3 = a1[2];
  v7 = **a1;
  v8 = game_util_Format("L_Item%02d", a2);
  v9 = (__int64*)LayoutAccessor_155fbe0(v7, v8);
  result = LayoutAccessor_155e830(v9, a3);
  if ((a3 & 1) == 0) {
    return result;
  }
  LayoutAccessor_1562cf0(v9, "Default");
  v12 = *(_QWORD*)(*a1[1] + 8LL * (int)a2);
  if (v12 == 0) {
    return LayoutAccessor_155e830(v9, 0);
  }
  LOWORD(v13) = *(_WORD*)(v12 + 16);
  if ((_BYTE)v13 == 0) {
    return LayoutAccessor_155e830(v9, 0);
  }
  v14 = *(unsigned __int8*)(v12 + 155);
  LODWORD(v11) = 1.0;
  if (*(_BYTE*)(v12 + 155) != 0) {
    v15 = "Rare";
  }
  else {
    v15 = "Default";
  }
  LayoutAccessor_1562680(v9, v15, v11);
  v16 = *(_QWORD**)(v3[3] + 168);
  if (v16 != nullptr) {
    v17 = GameRoutine_14ded40(*v16) ^ 1;
  }
  else {
    v17 = 1;
  }
  v18 = GameData_212c998[0];
  if (v14 != 0 && (v17 & 1) != 0) {
    v19 = "MID_Sys_Unknown";
    v90 = -1;
    v91 = -1;
    v92 = -1;
    v93 = -1;
    v20 = *msg_MessageManager_instance__ptr[0];
    v21 = GameData_212e348;
    v94 = -1;
    v95 = -1;
    v96 = -1;
    v97 = -1;
    v98 = -1;
    v99 = -1;
    v100 = -1;
    v101 = -1;
  }
  else {
    v19 = *(const char**)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                                     8LL * (unsigned __int8)v13) +
                          32LL);
    v90 = -1;
    v91 = -1;
    v92 = -1;
    v93 = -1;
    v94 = -1;
    v95 = -1;
    v96 = -1;
    v97 = -1;
    v98 = -1;
    v99 = -1;
    v100 = -1;
    v101 = -1;
    v20 = *msg_MessageManager_instance__ptr[0];
    v21 = GameData_212e348;
  }
  v87[0] = v21 + 2;
  v87[1] = 0xFFFF0001FFFF0000LL;
  v87[2] = 0xFFFF0004FFFF0002LL;
  v87[3] = 0xFFFF0006FFFF0005LL;
  v102 = 8;
  v88 = -65529;
  v89 = -65528;
  v22 = GameRoutine_a4dbe0(v20, v19, 0, v87);
  if (v22 != 0) {
    v23 = ui_LayoutAccessor_FindTextBox(v9, "T_Txt");
    if (v23 != 0) {
      GameRoutine_156c5d0(v23, v22, 0);
    }
  }
  v24 = ui_LayoutAccessor_FindPane(v9, "Icon");
  if (v24 != 0) {
    v24 = __dynamic_cast(v24, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_1841930(v24,
                      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v18 + 64) +
                                            8LL * (unsigned __int8)v13) +
                                 64LL),
                      0);
  v25 = ui_LayoutAccessor_FindPane(v9, "IconTactics");
  if (v25 != 0) {
    v25 = __dynamic_cast(v25, GameData_212d670[0], GameData_212d678[0], 0);
    v26 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v18 + 64) +
                                         8LL * (unsigned __int8)v13) +
                              50LL);
    if (v25 != 0) {
      v13 = v25;
      v27 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
      v28 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v25 + 88LL))(v25, 0);
      if (v28 != 0) {
        *(_DWORD*)(v28 + 12) = v27;
      }
      v25 = v13;
    }
  }
  else {
    v26 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v18 + 64) +
                                         8LL * (unsigned __int8)v13) +
                              50LL);
  }
  GameRoutine_1841470(v25, v26);
  if (v9[2] == 0) {
    goto LABEL_43;
  }
  v29 = v9[1];
  if (v29 == 0) {
    goto LABEL_43;
  }
  v30 = std___1___shared_weak_count_lock(v29);
  if (v30 == 0) {
    goto LABEL_37;
  }
  v31 = *v9;
  if (*v9 != 0) {
    LODWORD(v13) = *(unsigned __int8*)(v31 + 24);
    v32 = v31 + 152;
    if ((_DWORD)v13 == 0) {
      v32 = 0;
    }
    v33 = v32 != v9[2];
  }
  else {
    v33 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v34 = v30;
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    std___1___shared_weak_count___release_weak(v34);
  }
  if (!v33) {
    if ((v13 & 1) == 0) {
    LABEL_43:
      v37 = 0;
      goto LABEL_44;
    }
  }
  else {
  LABEL_37:
    v35 = v9[1];
    if (v35 == 0 || *(_QWORD*)(v35 + 8) == -1) {
      goto LABEL_43;
    }
  }
  v36 = v9[2];
  if (v36 == 0) {
    goto LABEL_43;
  }
  v37 = *(_QWORD*)(v36 + 24);
LABEL_44:
  v38 = (__int64*)**a1;
  if (v38[2] == 0) {
    goto LABEL_61;
  }
  v39 = v38[1];
  if (v39 == 0) {
    goto LABEL_61;
  }
  v40 = std___1___shared_weak_count_lock(v39);
  if (v40 == 0) {
    goto LABEL_55;
  }
  v41 = *v38;
  if (*v38 != 0) {
    LODWORD(v13) = *(unsigned __int8*)(v41 + 24);
    v42 = v41 + 152;
    if ((_DWORD)v13 == 0) {
      v42 = 0;
    }
    v43 = v42 != v38[2];
  }
  else {
    v43 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v44 = v40;
    (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
    std___1___shared_weak_count___release_weak(v44);
  }
  if (!v43) {
    if ((v13 & 1) == 0) {
    LABEL_61:
      v47 = 0;
      goto LABEL_62;
    }
  }
  else {
  LABEL_55:
    v45 = v38[1];
    if (v45 == 0 || *(_QWORD*)(v45 + 8) == -1) {
      goto LABEL_61;
    }
  }
  v46 = v38[2];
  if (v46 == 0) {
    goto LABEL_61;
  }
  v47 = *(_QWORD*)(v46 + 24);
LABEL_62:
  v48 = *a1;
  v49 = (*(__int64 (**)(__int64*, _QWORD))(*v3 + 64))(v3, a2);
  v51 = v3[6];
  v50 = v3[7];
  v52 = v49;
  if (v51 >= v50) {
    v56 = v3[5];
    v57 = v51 - v56;
    v58 = 1 - 0x71C71C71C71C71C7LL * (v57 >> 3);
    if (v58 > 0x38E38E38E38E38ELL) {
      GameRoutine_165dd60();
    }
    v59 = fw_memory_g_heap_manager_ptr;
    v60 = 0x8E38E38E38E38E39LL * ((__int64)(v50 - v56) >> 3);
    v61 = 2 * v60;
    if (2 * v60 <= v58) {
      v61 = 1 - 0x71C71C71C71C71C7LL * (v57 >> 3);
    }
    if (v60 >= 0x1C71C71C71C71C7LL) {
      v62 = 0x38E38E38E38E38ELL;
    }
    else {
      v62 = v61;
    }
    if (v62 != 0) {
      if (v62 > 0x38E38E38E38E38ELL) {
        GameRoutine_60a210(v49);
      }
      v63 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 72 * v62, 16, 0);
    }
    else {
      v63 = 0;
    }
    v64 = *v48;
    v65 = v48[1];
    v66 = v63 + v57;
    if (v65 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v65 + 16), 1u,
                                memory_order_relaxed);
    }
    *(_QWORD*)v66 = v37;
    *(_QWORD*)(v66 + 8) = v47;
    *(_QWORD*)(v66 + 16) = 0;
    *(_QWORD*)(v66 + 24) = 0;
    *(_QWORD*)(v66 + 32) = 0;
    *(_QWORD*)(v66 + 40) = 0;
    *(_QWORD*)(v66 + 48) = 0;
    *(_QWORD*)(v66 + 56) = 0;
    v87[0] = v64;
    v87[1] = v65;
    *(_DWORD*)(v66 + 64) = -1;
    if (v65 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v65 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_165dad0(v66, v87, v52);
      std___1___shared_weak_count___release_weak(v65);
      result = std___1___shared_weak_count___release_weak(v65);
    }
    else {
      result = GameRoutine_165dad0(v66, v87, v52);
    }
    v67 = v63 + 72 * v62;
    v68 = (char*)v3[5];
    v69 = (char*)v3[6];
    v55 = v66 + 72;
    v70 = (char*)(v66 + v68 - v69);
    if (v69 != v68) {
      v85 = v67;
      v86 = v66 + 72;
      v71 = (char*)v3[5];
      v84 = (char*)(v66 + v68 - v69);
      v72 = v84;
      do {
        v73 = *(_QWORD*)v71;
        v74 = *((_QWORD*)v71 + 1);
        *((_QWORD*)v72 + 3) = 0;
        *((_QWORD*)v72 + 4) = 0;
        *(_QWORD*)v72 = v73;
        *((_QWORD*)v72 + 1) = v74;
        *((_QWORD*)v72 + 2) = *((_QWORD*)v71 + 2);
        *((_QWORD*)v72 + 3) = *((_QWORD*)v71 + 3);
        *((_QWORD*)v72 + 4) = *((_QWORD*)v71 + 4);
        *((_QWORD*)v71 + 3) = 0;
        *((_QWORD*)v71 + 4) = 0;
        *((_QWORD*)v71 + 2) = 0;
        *((_QWORD*)v72 + 6) = 0;
        *((_QWORD*)v72 + 7) = 0;
        *((_QWORD*)v72 + 5) = *((_QWORD*)v71 + 5);
        *((_QWORD*)v72 + 6) = *((_QWORD*)v71 + 6);
        *((_QWORD*)v72 + 7) = *((_QWORD*)v71 + 7);
        *((_QWORD*)v71 + 6) = 0;
        *((_QWORD*)v71 + 7) = 0;
        *((_QWORD*)v71 + 5) = 0;
        LODWORD(v73) = *((_DWORD*)v71 + 16);
        v71 += 72;
        *((_DWORD*)v72 + 16) = v73;
        v72 += 72;
      } while (v71 != v69);
      do {
        v77 = *((_QWORD*)v68 + 5);
        if (v77 != 0) {
          v78 = *(_QWORD*)v59;
          *((_QWORD*)v68 + 6) = v77;
          if (*(_QWORD*)(v78 + 200) != 0) {
            v79 = 128;
          }
          else {
            v79 = 56;
          }
          result = nn_mem_StandardAllocator_Free_alt1(v78 + v79);
        }
        v80 = *((_QWORD*)v68 + 2);
        if (v80 != 0) {
          v81 = *((_QWORD*)v68 + 3);
          if (v80 == v81) {
            goto LABEL_89;
          }
          do {
            v82 = *(_QWORD*)(v81 - 8);
            if (v82 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v82 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v82 + 16LL))(v82);
              result = std___1___shared_weak_count___release_weak(v82);
            }
            v81 -= 16;
          } while (v81 != v80);
          v75 = *((_QWORD*)v68 + 2);
          *((_QWORD*)v68 + 3) = v80;
          if (v75 != 0) {
          LABEL_89:
            if (*(_QWORD*)(*(_QWORD*)v59 + 200LL) != 0) {
              v76 = 128;
            }
            else {
              v76 = 56;
            }
            result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v59 + v76);
          }
        }
        v68 += 72;
      } while (v68 != v69);
      v68 = (char*)v3[5];
      v67 = v85;
      v55 = v86;
      v70 = v84;
    }
    v3[5] = (__int64)v70;
    v3[6] = v55;
    v3[7] = v67;
    if (v68 != nullptr) {
      v83 = 128;
      if (*(_QWORD*)(*(_QWORD*)v59 + 200LL) == 0) {
        v83 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v59 + v83);
    }
  }
  else {
    v53 = *v48;
    v54 = v48[1];
    if (v54 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v54 + 16), 1u,
                                memory_order_relaxed);
    }
    *(_QWORD*)v51 = v37;
    *(_QWORD*)(v51 + 8) = v47;
    *(_QWORD*)(v51 + 16) = 0;
    *(_QWORD*)(v51 + 24) = 0;
    *(_QWORD*)(v51 + 32) = 0;
    *(_QWORD*)(v51 + 40) = 0;
    *(_QWORD*)(v51 + 48) = 0;
    *(_QWORD*)(v51 + 56) = 0;
    v87[0] = v53;
    v87[1] = v54;
    *(_DWORD*)(v51 + 64) = -1;
    if (v54 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v54 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_165dad0(v51, v87, v49);
      std___1___shared_weak_count___release_weak(v54);
      result = std___1___shared_weak_count___release_weak(v54);
    }
    else {
      result = GameRoutine_165dad0(v51, v87, v49);
    }
    v55 = v51 + 72;
  }
  v3[6] = v55;
  return result;
}

__int64 GmapSpotInfoSetterForGmap_Unknown6(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  float v7;
  float v8;
  __int64 v9;
  float v10;
  float v11;
  float v12;
  float v13;
  char v14;

  result = ui_LayoutAccessor_FindPane(*(_QWORD*)(a1 + 8), &GameData_1ac6c8b);
  if (result != 0) {
    v3 = result;
    v4 = ui_LayoutAccessor_FindPane(*(_QWORD*)(a1 + 8), &GameData_1ac6c8b);
    v5 = __dynamic_cast(v4, GameData_212d670[0], GameData_212fc70[0], 0);
    LOWORD(v6) = *(_WORD*)(v5 + 218);
    v7 = (float)v6;
    LOWORD(v6) = *(_WORD*)(v5 + 220);
    v8 = (float)v6;
    v9 = ui_LayoutAccessor_FindPane(*(_QWORD*)(a1 + 8), "N_DummyMargin");
    if (v9 != 0) {
      LODWORD(v10) = HIDWORD(*(_QWORD*)(v9 + 136));
    }
    else {
      v10 = 0.0;
    }
    v11 = v7 + v8;
    v12 = 540.0 - v10;
    result = Pane_58fac0(v3, "Margin_Height");
    if (result != 0) {
      v12 = v12 + *(float*)(result + *(unsigned int*)(result + 4));
    }
    if (v12 >= v11) {
      v13 = v12;
    }
    else {
      v13 = v11;
    }
    *(_DWORD*)(v3 + 84) = *(_DWORD*)(v3 + 80);
    v14 = *(_BYTE*)(v3 + 88);
    *(float*)(v3 + 80) = v13;
    *(_BYTE*)(v3 + 88) = v14 | 0x10;
  }
  return result;
}

__int64 GmapSpotInfoSetterForGmap_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *a1 = &game_gmap_GmapSpotInfoSetter_vtable;
  v2 = a1[9];
  a1[9] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = a1 + 5;
  v4 = fw_memory_g_heap_manager_ptr;
  if (a1[5] != 0) {
    GameRoutine_1657240(a1 + 5);
    if (*v3 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v5, *v3);
    }
  }
  v6 = a1[2];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7, a1);
}

#pragma GCC visibility pop
