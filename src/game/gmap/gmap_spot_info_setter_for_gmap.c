#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

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
__int64 GmapSpotInfoSetterForGmap_165b440_alt1(
    __int64** a1, unsigned int a2,
    unsigned int a3) __asm__("GmapSpotInfoSetterForGmap_165b440");
__int64*
LayoutAccessor_155fbe0_alt1(__int64*,
                            const char*) __asm__("LayoutAccessor_155fbe0");
__int64 GameRoutine_14ded40_alt1(__int64) __asm__("GameRoutine_14ded40");
__int64
GameRoutine_1841470_alt1(__int64,
                         unsigned __int8) __asm__("GameRoutine_1841470");
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            unsigned int*) __asm__("LayoutAccessor_1562cf0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_1841930(__int64, __int64);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindPane_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindTextBox");
char* GameRoutine_a4dbe0_alt1(__int64, const char*,
                              char) __asm__("GameRoutine_a4dbe0");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
unsigned __int64 GameHr_1562680(unsigned __int64 result, char*, float);
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void GameRoutine_165dad0_alt1(_QWORD*, __int64*,
                              __int64) __asm__("GameRoutine_165dad0");
void __attribute__((noreturn))
GameRoutine_165dd60_alt1() __asm__("GameRoutine_165dd60");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void GmapSpotInfoSetterForGmap_165b440(__int64*** a1, unsigned int a2, char a3);

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

void GmapSpotInfoSetterForGmap_165b440(__int64*** a1, unsigned int a2, char a3)
{
  __int64** v3;
  __int64* v7;
  char* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  char* v13;
  __int64* v14;
  char v15;
  __int64* v16;
  const char* v17;
  __int64 v18;
  __int64* v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int8 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _BOOL4 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  _BOOL4 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64** v46;
  __int64 v47;
  __int64* v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64* v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  char* v66;
  char* v67;
  char* v68;
  __int64* v69;
  char* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  char* v82;
  unsigned __int64 v83;
  __int64 v84;
  struct {
    __int64 v85[4];
    int v86;
    int v87;
    __int64 v88;
    __int64 v89;
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
  } v85_;

  v3 = a1[2];
  v7 = **a1;
  v8 = game_util_Format_alt1("L_Item%02d", a2);
  v9 = LayoutAccessor_155fbe0_alt1(v7, v8);
  LayoutAccessor_155e830_alt1((__int64)v9, a3);
  if ((a3 & 1) == 0) {
    return;
  }
  LayoutAccessor_1562cf0_alt1((__int64)v9, (unsigned int*)"Default");
  v10 = (*a1[1])[a2];
  if (v10 == 0 || (LOWORD(v11) = *(_WORD*)(v10 + 16), (_BYTE)v11 == 0)) {
    LayoutAccessor_155e830_alt1((__int64)v9, 0);
    return;
  }
  v12 = *(unsigned __int8*)(v10 + 155);
  if (*(_BYTE*)(v10 + 155) != 0) {
    v13 = "Rare";
  }
  else {
    v13 = "Default";
  }
  GameHr_1562680((unsigned __int64)v9, v13, 0x1.0000000000000p+0f);
  v14 = (__int64*)v3[3][21];
  if (v14 != nullptr) {
    v15 = GameRoutine_14ded40_alt1(*v14) ^ 1;
  }
  else {
    v15 = 1;
  }
  v16 = GameData_212c998[0];
  if (v12 != 0 && (v15 & 1) != 0) {
    v17 = "MID_Sys_Unknown";
    v85_.v88 = -1;
    v85_.v89 = -1;
    v85_.v90 = -1;
    v85_.v91 = -1;
    v18 = *msg_MessageManager_instance__ptr[0];
    v19 = GameData_212e348;
    v85_.v92 = -1;
    v85_.v93 = -1;
    v85_.v94 = -1;
    v85_.v95 = -1;
    v85_.v96 = -1;
    v85_.v97 = -1;
    v85_.v98 = -1;
    v85_.v99 = -1;
  }
  else {
    v17 = *(const char**)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                                     8LL * (unsigned __int8)v11) +
                          32LL);
    v85_.v88 = -1;
    v85_.v89 = -1;
    v85_.v90 = -1;
    v85_.v91 = -1;
    v85_.v92 = -1;
    v85_.v93 = -1;
    v85_.v94 = -1;
    v85_.v95 = -1;
    v85_.v96 = -1;
    v85_.v97 = -1;
    v85_.v98 = -1;
    v85_.v99 = -1;
    v18 = *msg_MessageManager_instance__ptr[0];
    v19 = GameData_212e348;
  }
  v85_.v85[0] = (__int64)(v19 + 2);
  v85_.v85[1] = 0xFFFF0001FFFF0000LL;
  v85_.v85[2] = 0xFFFF0004FFFF0002LL;
  v85_.v85[3] = 0xFFFF0006FFFF0005LL;
  v85_.v100 = 8;
  v85_.v86 = -65529;
  v85_.v87 = -65528;
  v20 = GameRoutine_a4dbe0_alt1(v18, v17, 0);
  if (v20 != nullptr) {
    v21 = ui_LayoutAccessor_FindTextBox_alt1(v9, "T_Txt");
    if (v21 != 0) {
      GameRoutine_156c5d0_alt1(v21, (__int64)v20, 0);
    }
  }
  v22 = ui_LayoutAccessor_FindPane_alt1(v9, "Icon");
  if (v22 != 0) {
    v22 = __dynamic_cast(v22, GameData_212d670[0], GameData_212d678[0], 0);
  }
  game_1841930(v22, *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v16 + 64) +
                                          8LL * (unsigned __int8)v11) +
                               64LL));
  v23 = ui_LayoutAccessor_FindPane_alt1(v9, "IconTactics");
  if (v23 != 0) {
    v23 = __dynamic_cast(v23, GameData_212d670[0], GameData_212d678[0], 0);
    v24 = *(
        _BYTE*)(*(_QWORD*)(*(_QWORD*)(*v16 + 64) + 8LL * (unsigned __int8)v11) +
                50LL);
    if (v23 != 0) {
      v11 = v23;
      v25 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
      v26 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v23 + 88LL))(v23, 0);
      if (v26 != 0) {
        *(_DWORD*)(v26 + 12) = v25;
      }
      v23 = v11;
    }
  }
  else {
    v24 = *(
        _BYTE*)(*(_QWORD*)(*(_QWORD*)(*v16 + 64) + 8LL * (unsigned __int8)v11) +
                50LL);
  }
  GameRoutine_1841470_alt1(v23, v24);
  if (v9[2] == 0) {
    goto LABEL_43;
  }
  v27 = v9[1];
  if (v27 == 0) {
    goto LABEL_43;
  }
  v28 = std___1___shared_weak_count_lock_alt1(v27);
  if (v28 == 0) {
    goto LABEL_37;
  }
  v29 = *v9;
  if (*v9 != 0) {
    LODWORD(v11) = *(unsigned __int8*)(v29 + 24);
    v30 = v29 + 152;
    if ((_DWORD)v11 == 0) {
      v30 = 0;
    }
    v31 = v30 != v9[2];
  }
  else {
    v31 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v32 = v28;
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak_alt1(v32);
  }
  if (!v31) {
    if ((v11 & 1) == 0) {
    LABEL_43:
      v35 = 0;
      goto LABEL_44;
    }
  }
  else {
  LABEL_37:
    v33 = v9[1];
    if (v33 == 0 || *(_QWORD*)(v33 + 8) == -1) {
      goto LABEL_43;
    }
  }
  v34 = v9[2];
  if (v34 == 0) {
    goto LABEL_43;
  }
  v35 = *(_QWORD*)(v34 + 24);
LABEL_44:
  v36 = **a1;
  if (v36[2] == 0) {
    goto LABEL_61;
  }
  v37 = v36[1];
  if (v37 == 0) {
    goto LABEL_61;
  }
  v38 = std___1___shared_weak_count_lock_alt1(v37);
  if (v38 == 0) {
    goto LABEL_55;
  }
  v39 = *v36;
  if (*v36 != 0) {
    LODWORD(v11) = *(unsigned __int8*)(v39 + 24);
    v40 = v39 + 152;
    if ((_DWORD)v11 == 0) {
      v40 = 0;
    }
    v41 = v40 != v36[2];
  }
  else {
    v41 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v42 = v38;
    (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
    std___1___shared_weak_count___release_weak_alt1(v42);
  }
  if (!v41) {
    if ((v11 & 1) == 0) {
    LABEL_61:
      v45 = 0;
      goto LABEL_62;
    }
  }
  else {
  LABEL_55:
    v43 = v36[1];
    if (v43 == 0 || *(_QWORD*)(v43 + 8) == -1) {
      goto LABEL_61;
    }
  }
  v44 = v36[2];
  if (v44 == 0) {
    goto LABEL_61;
  }
  v45 = *(_QWORD*)(v44 + 24);
LABEL_62:
  v46 = *a1;
  v47 = ((__int64 (*)(__int64**, _QWORD))(*v3)[8])(v3, a2);
  v49 = v3[6];
  v48 = v3[7];
  v50 = v47;
  if (v49 >= v48) {
    v54 = v3[5];
    v55 = (char*)v49 - (char*)v54;
    v56 = 1 - 0x71C71C71C71C71C7LL * (v55 >> 3);
    if (v56 > 0x38E38E38E38E38ELL) {
      GameRoutine_165dd60_alt1();
    }
    v57 = fw_memory_g_heap_manager_ptr;
    v58 = 0x8E38E38E38E38E39LL * (v48 - v54);
    v59 = 2 * v58;
    if (2 * v58 <= v56) {
      v59 = 1 - 0x71C71C71C71C71C7LL * (v55 >> 3);
    }
    if (v58 >= 0x1C71C71C71C71C7LL) {
      v60 = 0x38E38E38E38E38ELL;
    }
    else {
      v60 = v59;
    }
    if (v60 != 0) {
      if (v60 > 0x38E38E38E38E38ELL) {
        GameRoutine_60a210_alt1();
      }
      v61 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 72 * v60, 16, 0);
    }
    else {
      v61 = 0;
    }
    v62 = (__int64)*v46;
    v63 = (__int64)v46[1];
    v64 = v61 + v55;
    if (v63 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v63 + 16), 1u,
                                memory_order_relaxed);
    }
    *(_QWORD*)v64 = v35;
    *(_QWORD*)(v64 + 8) = v45;
    *(_QWORD*)(v64 + 16) = 0;
    *(_QWORD*)(v64 + 24) = 0;
    *(_QWORD*)(v64 + 32) = 0;
    *(_QWORD*)(v64 + 40) = 0;
    *(_QWORD*)(v64 + 48) = 0;
    *(_QWORD*)(v64 + 56) = 0;
    v85_.v85[0] = v62;
    v85_.v85[1] = v63;
    *(_DWORD*)(v64 + 64) = -1;
    if (v63 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v63 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_165dad0_alt1((_QWORD*)v64, v85_.v85, v50);
      std___1___shared_weak_count___release_weak_alt1(v63);
      std___1___shared_weak_count___release_weak_alt1(v63);
    }
    else {
      GameRoutine_165dad0_alt1((_QWORD*)v64, v85_.v85, v50);
    }
    v65 = v61 + 72 * v60;
    v66 = (char*)v3[5];
    v67 = (char*)v3[6];
    v53 = v64 + 72;
    v68 = (char*)(v64 + v66 - v67);
    if (v67 != v66) {
      v83 = v65;
      v84 = v64 + 72;
      v69 = v3[5];
      v82 = (char*)(v64 + v66 - v67);
      v70 = v82;
      do {
        v71 = *v69;
        v72 = v69[1];
        *((_QWORD*)v70 + 3) = 0;
        *((_QWORD*)v70 + 4) = 0;
        *(_QWORD*)v70 = v71;
        *((_QWORD*)v70 + 1) = v72;
        *((_QWORD*)v70 + 2) = v69[2];
        *((_QWORD*)v70 + 3) = v69[3];
        *((_QWORD*)v70 + 4) = v69[4];
        v69[3] = 0;
        v69[4] = 0;
        v69[2] = 0;
        *((_QWORD*)v70 + 6) = 0;
        *((_QWORD*)v70 + 7) = 0;
        *((_QWORD*)v70 + 5) = v69[5];
        *((_QWORD*)v70 + 6) = v69[6];
        *((_QWORD*)v70 + 7) = v69[7];
        v69[6] = 0;
        v69[7] = 0;
        v69[5] = 0;
        LODWORD(v71) = *((_DWORD*)v69 + 16);
        v69 += 9;
        *((_DWORD*)v70 + 16) = v71;
        v70 += 72;
      } while (v69 != (__int64*)v67);
      do {
        v76 = *((_QWORD*)v66 + 5);
        if (v76 != 0) {
          v77 = *(_QWORD*)v57;
          *((_QWORD*)v66 + 6) = v76;
          if (*(_QWORD*)(v77 + 200) != 0) {
            v78 = 128;
          }
          else {
            v78 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(v77 + v78, v76);
        }
        v74 = *((_QWORD*)v66 + 2);
        if (v74 != 0) {
          v79 = *((_QWORD*)v66 + 3);
          if (v74 == v79) {
            goto LABEL_89;
          }
          do {
            v80 = *(_QWORD*)(v79 - 8);
            if (v80 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v80 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v80 + 16LL))(v80);
              std___1___shared_weak_count___release_weak_alt1(v80);
            }
            v79 -= 16;
          } while (v79 != v74);
          v73 = *((_QWORD*)v66 + 2);
          *((_QWORD*)v66 + 3) = v74;
          v74 = v73;
          if (v73 != 0) {
          LABEL_89:
            if (*(_QWORD*)(*(_QWORD*)v57 + 200LL) != 0) {
              v75 = 128;
            }
            else {
              v75 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v57 + v75, v74);
          }
        }
        v66 += 72;
      } while (v66 != v67);
      v66 = (char*)v3[5];
      v65 = v83;
      v53 = v84;
      v68 = v82;
    }
    v3[5] = (__int64*)v68;
    v3[6] = (__int64*)v53;
    v3[7] = (__int64*)v65;
    if (v66 != nullptr) {
      v81 = 128;
      if (*(_QWORD*)(*(_QWORD*)v57 + 200LL) == 0) {
        v81 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v57 + v81, (__int64)v66);
    }
  }
  else {
    v51 = (__int64)*v46;
    v52 = (__int64)v46[1];
    if (v52 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v52 + 16), 1u,
                                memory_order_relaxed);
    }
    *v49 = v35;
    v49[1] = v45;
    v49[2] = 0;
    v49[3] = 0;
    v49[4] = 0;
    v49[5] = 0;
    v49[6] = 0;
    v49[7] = 0;
    v85_.v85[0] = v51;
    v85_.v85[1] = v52;
    *((_DWORD*)v49 + 16) = -1;
    if (v52 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v52 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_165dad0_alt1(v49, v85_.v85, v47);
      std___1___shared_weak_count___release_weak_alt1(v52);
      std___1___shared_weak_count___release_weak_alt1(v52);
    }
    else {
      GameRoutine_165dad0_alt1(v49, v85_.v85, v47);
    }
    v53 = (__int64)(v49 + 9);
  }
  v3[6] = (__int64*)v53;
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

float GmapSpotInfoSetterForGmap_Unknown7() { return 742.0; }

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
