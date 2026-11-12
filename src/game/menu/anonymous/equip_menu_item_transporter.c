#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_157b5c0(__int64 result, unsigned __int16*);
extern __int64 GameData_21c99b8;
extern __int64 game_TransporterConst_List_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
__int64 EquipMenuItem_Transporter_Unknown58(__int64 a1);
__int64 EquipMenuItem_Transporter_Unknown70(__int64 a1);
__int64 BasicMenuCursor_16ddbe0(_QWORD);
__int64 MultiMenuSequence_17871c0(_QWORD, _QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Register(void);
__int64 game_Unit_Unknown6c4610(_QWORD);
extern _UNKNOWN* GameData_21319e0;
extern __int64 GameData_212c608[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2130240[8];
extern __int64* GameData_2131a10[5];
bool game_menu_anonymous_EquipMenuItem_Transporter_ACall_closure_Invoke(
    __int64 a1, _QWORD* a2);
__int64
game_menu_anonymous_EquipMenuItem_Transporter_ACall_closure0_Invoke(__int64 a1);
__int64
game_menu_anonymous_EquipMenuItem_Transporter_ACall_closure2_Invoke(__int64 a1,
                                                                    _QWORD* a2);
__int64
game_menu_anonymous_EquipMenuItem_Transporter_ACall_closure3_Invoke(__int64 a1);
_QWORD* GameRoutine_166a010(__int64, __int64, __int64, int, __int64);
_QWORD* GameRoutine_166a500(__int64, char*, int, __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 GameRoutine_157ada0(__int64*, __int64, unsigned __int16*, char);
__int64 game_15de540(__int64, __int64, __int64, __int64);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
__n128 Util_1581060(__int64*, __int64, unsigned __int16*, __int64, __int64,
                    __int64);
__n128 Util_1581550(__int64*, __int64, unsigned __int16*, unsigned __int8,
                    unsigned __int8);
__n128 std___1___shared_weak_count___release_weak();
extern __int64 (*GameData_205a688[])();
extern __int64 (*GameData_205aae8[])();
extern __int64* GameData_212c878[6];
extern __int64 ui_LayoutAccessor_empty_;
__n128 EquipMenuItem_Transporter_Unknown55_alt1(__int64 a1) __asm__(
    "EquipMenuItem_Transporter_Unknown55");
__int64
game_menu_anonymous_EquipMenuItem_Transporter_ACall_closure0_Invoke_15d0ce0(
    __int64 a1, _QWORD* a2);
__int64
game_menu_anonymous_EquipMenuItem_Transporter_ACall_closure1_Invoke(__int64 a1,
                                                                    _QWORD* a2);
__int64
game_menu_anonymous_EquipMenuItem_Transporter_ACall_closure3_Invoke_15d15c0(
    __int64 a1, _QWORD* a2);
_QWORD*
BasicMenuCursor_16ddbe0_alt1(_QWORD* result) __asm__("BasicMenuCursor_16ddbe0");
__int64
MultiMenuSequence_17871c0_alt1(__int64 result, unsigned int,
                               int) __asm__("MultiMenuSequence_17871c0");
__int64 ProcInst_657850_alt1(__int64, __int64, const char*, char,
                             __int64) __asm__("ProcInst_657850");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_ProcInst_Register_alt1(__int64) __asm__("game_ProcInst_Register");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64 GameHr_157ada0(__int64*, __int64, unsigned __int16*, char);
__int64 GameHr_157b5c0(__int64 result, unsigned __int16*);
__int64 Util_1581060_alt1(__int64*, __int64, unsigned __int16*, char,
                          unsigned __int8) __asm__("Util_1581060");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, const char*,
    char) __asm__("ui_LayoutAccessor_SetPaneVisible");
void Util_1581550_alt1(__int64*, __int64, unsigned __int16*, unsigned __int8,
                       unsigned __int8) __asm__("Util_1581550");
__int64 EquipMenuItem_Transporter_Unknown55(__int64 a1);

__int64 EquipMenuItem_Transporter_Unknown55(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  char v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  unsigned __int16* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  atomic_ullong* v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  unsigned int v36;
  char v37;
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  unsigned __int16* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  atomic_ullong* v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned int v57;
  __int64 v58;
  __int64 v59;
  unsigned int v60;
  char v61;
  __int64 v62;
  __int64 v63;
  unsigned int v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  __int64* v68;
  unsigned __int16* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  atomic_ullong* v73;
  __int64* v74;
  __int64 result;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  char v85;
  struct {
    __int64 v86;
    __int64 v87;
  } v86_;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock_alt1(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v21 = v6;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak_alt1(v4);
  v6 = v21;
  if (v21 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  v7 = *(_QWORD*)(a1 + 88);
  v8 = *(int*)(a1 + 40);
  if (v7 != 0) {
    v9 = v7 + 8 * v8;
    v10 = *(unsigned __int16*)(v9 + 828);
    v11 = v9 + 828;
    if (*(_WORD*)(v9 + 828) == 0) {
      goto LABEL_24;
    }
  }
  else {
    v12 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                  game_TransporterConst_List_instance__ptr[0] +
                              8LL) +
                   8LL) +
        12LL * (int)v8;
    v13 = *(unsigned __int16*)(v12 + 4);
    v11 = v12 + 4;
    v10 = v13;
    if (v13 == 0) {
      goto LABEL_24;
    }
  }
  if ((*(_BYTE*)(v11 + 3) & 0x10) != 0) {
    goto LABEL_24;
  }
  v14 = 0;
  v15 = *(_QWORD*)(*GameData_212c878[0] + 64);
  v16 = *(_QWORD*)(v15 + 8LL * v10);
  if ((*(_BYTE*)(v16 + 336) & 4) != 0 ||
      ((1LL << *(_BYTE*)(v16 + 72)) & 0xE01F) == 0) {
    goto LABEL_25;
  }
  if (*(_DWORD*)(a1 + 116) != 2) {
    goto LABEL_22;
  }
  if (v7 == 0) {
    v22 =
        *(_QWORD*)(*(_QWORD*)(game_TransporterConst_List_instance_ + 8) + 8LL);
    v17 = *(
        unsigned __int8*)(*(_QWORD*)(v15 +
                                     8LL * *(unsigned __int16*)(v22 +
                                                                12LL * (int)v8 +
                                                                4)) +
                          72LL);
    if (v17 <= 7) {
      v18 = *(_QWORD*)(a1 + 104);
      v19 = v11;
      v20 = v6;
      goto LABEL_44;
    }
  LABEL_21:
    if (v17 == 13) {
    LABEL_22:
      v18 = *(_QWORD*)(a1 + 104);
      v19 = v11;
      v20 = v6;
      if (v7 != 0) {
        goto LABEL_23;
      }
      v22 = *(_QWORD*)(*(_QWORD*)(game_TransporterConst_List_instance_ + 8) +
                       8LL);
    LABEL_44:
      v23 = *(_QWORD*)(a1 + 88);
      v24 = (unsigned __int16*)(v22 + 12LL * (int)v8 + 4);
      goto LABEL_45;
    }
  LABEL_24:
    v14 = 0;
    goto LABEL_25;
  }
  v17 = *(unsigned __int8*)(*(_QWORD*)(v15 +
                                       8LL * *(unsigned __int16*)(v7 + 8 * v8 +
                                                                  828)) +
                            72LL);
  if (v17 > 7) {
    goto LABEL_21;
  }
  v18 = *(_QWORD*)(a1 + 104);
  v19 = v11;
  v20 = v6;
LABEL_23:
  v23 = *(_QWORD*)(a1 + 88);
  v24 = (unsigned __int16*)(v7 + 8 * v8 + 828);
LABEL_45:
  v14 = GameHr_157b5c0(v18, v24);
  v6 = v20;
  v7 = v23;
  v11 = v19;
LABEL_25:
  GameHr_157ada0(v6, v7, (unsigned __int16*)v11, v14 & 1);
  v25 = *(_QWORD*)(a1 + 56);
  if (v25 == 0) {
    goto LABEL_29;
  }
  v26 = std___1___shared_weak_count_lock_alt1(v25);
  if (v26 == 0) {
    goto LABEL_29;
  }
  v27 = v26;
  v28 = (atomic_ullong*)(v26 + 8);
  v29 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v28, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v29 != nullptr) {
      goto LABEL_30;
    }
    goto LABEL_29;
  }
  v44 = v29;
  (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
  std___1___shared_weak_count___release_weak_alt1(v27);
  v29 = v44;
  if (v44 == nullptr) {
  LABEL_29:
    v29 = &ui_LayoutAccessor_empty_;
  }
LABEL_30:
  v30 = *(_QWORD*)(a1 + 88);
  v31 = *(int*)(a1 + 40);
  if (v30 != 0) {
    v32 = v30 + 8 * v31;
    v33 = *(unsigned __int16*)(v32 + 828);
    v34 = v32 + 828;
    if (*(_WORD*)(v32 + 828) == 0) {
      goto LABEL_51;
    }
  }
  else {
    v35 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                  game_TransporterConst_List_instance__ptr[0] +
                              8LL) +
                   8LL) +
        12LL * (int)v31;
    v36 = *(unsigned __int16*)(v35 + 4);
    v34 = v35 + 4;
    v33 = v36;
    if (v36 == 0) {
      goto LABEL_51;
    }
  }
  if ((*(_BYTE*)(v34 + 3) & 0x10) == 0) {
    v37 = 0;
    v38 = *(_QWORD*)(*GameData_212c878[0] + 64);
    v39 = *(_QWORD*)(v38 + 8LL * v33);
    if ((*(_BYTE*)(v39 + 336) & 4) != 0 ||
        ((1LL << *(_BYTE*)(v39 + 72)) & 0xE01F) == 0) {
      goto LABEL_52;
    }
    if (*(_DWORD*)(a1 + 116) != 2) {
      goto LABEL_49;
    }
    if (v30 != 0) {
      v40 = *(unsigned __int8*)(*(_QWORD*)(v38 +
                                           8LL * *(unsigned __int16*)(v30 +
                                                                      8 * v31 +
                                                                      828)) +
                                72LL);
      if (v40 <= 7) {
        v41 = *(_QWORD*)(a1 + 104);
        v42 = v34;
        v43 = v29;
      LABEL_50:
        v46 = *(_QWORD*)(a1 + 88);
        v47 = (unsigned __int16*)(v30 + 8 * v31 + 828);
      LABEL_73:
        v37 = GameHr_157b5c0(v41, v47);
        v29 = v43;
        v30 = v46;
        v34 = v42;
        goto LABEL_52;
      }
    }
    else {
      v45 = *(_QWORD*)(*(_QWORD*)(game_TransporterConst_List_instance_ + 8) +
                       8LL);
      v40 = *(
          unsigned __int8*)(*(_QWORD*)(v38 +
                                       8LL * *(unsigned __int16*)(v45 +
                                                                  12LL *
                                                                      (int)v31 +
                                                                  4)) +
                            72LL);
      if (v40 <= 7) {
        v41 = *(_QWORD*)(a1 + 104);
        v42 = v34;
        v43 = v29;
        goto LABEL_72;
      }
    }
    if (v40 == 13) {
    LABEL_49:
      v41 = *(_QWORD*)(a1 + 104);
      v42 = v34;
      v43 = v29;
      if (v30 != 0) {
        goto LABEL_50;
      }
      v45 = *(_QWORD*)(*(_QWORD*)(game_TransporterConst_List_instance_ + 8) +
                       8LL);
    LABEL_72:
      v46 = *(_QWORD*)(a1 + 88);
      v47 = (unsigned __int16*)(v45 + 12LL * (int)v31 + 4);
      goto LABEL_73;
    }
  }
LABEL_51:
  v37 = 0;
LABEL_52:
  Util_1581060_alt1(v29, v30, (unsigned __int16*)v34, v37 & 1, 0);
  if (*(_QWORD*)(a1 + 104) == 0) {
    goto LABEL_80;
  }
  v48 = *(_QWORD*)(a1 + 56);
  if (v48 == 0) {
    goto LABEL_57;
  }
  v49 = std___1___shared_weak_count_lock_alt1(v48);
  if (v49 == 0) {
    goto LABEL_57;
  }
  v50 = v49;
  v51 = (atomic_ullong*)(v49 + 8);
  v52 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v51, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v52 != nullptr) {
      goto LABEL_58;
    }
    goto LABEL_57;
  }
  v65 = v52;
  (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
  std___1___shared_weak_count___release_weak_alt1(v50);
  v52 = v65;
  if (v65 == nullptr) {
  LABEL_57:
    v52 = &ui_LayoutAccessor_empty_;
  }
LABEL_58:
  v53 = *(_QWORD*)(a1 + 104);
  v54 = *(_QWORD*)(a1 + 88);
  v55 = *(int*)(a1 + 40);
  if (v54 != 0) {
    v56 = v54 + 8 * v55;
    v57 = *(unsigned __int16*)(v56 + 828);
    v58 = v56 + 828;
    if (*(_WORD*)(v56 + 828) == 0) {
      goto LABEL_78;
    }
  }
  else {
    v59 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                  game_TransporterConst_List_instance__ptr[0] +
                              8LL) +
                   8LL) +
        12LL * (int)v55;
    v60 = *(unsigned __int16*)(v59 + 4);
    v58 = v59 + 4;
    v57 = v60;
    if (v60 == 0) {
      goto LABEL_78;
    }
  }
  if ((*(_BYTE*)(v58 + 3) & 0x10) == 0) {
    v61 = 0;
    v62 = *(_QWORD*)(*GameData_212c878[0] + 64);
    v63 = *(_QWORD*)(v62 + 8LL * v57);
    if ((*(_BYTE*)(v63 + 336) & 4) != 0 ||
        ((1LL << *(_BYTE*)(v63 + 72)) & 0xE01F) == 0) {
      goto LABEL_79;
    }
    if (*(_DWORD*)(a1 + 116) != 2) {
      goto LABEL_76;
    }
    if (v54 != 0) {
      v64 = *(unsigned __int8*)(*(_QWORD*)(v62 +
                                           8LL * *(unsigned __int16*)(v54 +
                                                                      8 * v55 +
                                                                      828)) +
                                72LL);
      if (v64 < 8) {
        goto LABEL_77;
      }
    }
    else {
      v66 = *(
          _QWORD*)(*(_QWORD*)(*(_QWORD*)
                                  game_TransporterConst_List_instance__ptr[0] +
                              8LL) +
                   8LL);
      v64 = *(
          unsigned __int8*)(*(_QWORD*)(v62 +
                                       8LL * *(unsigned __int16*)(v66 +
                                                                  12LL *
                                                                      (int)v55 +
                                                                  4)) +
                            72LL);
      if (v64 < 8) {
        goto LABEL_105;
      }
    }
    if (v64 == 13) {
    LABEL_76:
      if (v54 != 0) {
      LABEL_77:
        v67 = v58;
        v68 = v52;
        v69 = (unsigned __int16*)(v54 + 8 * v55 + 828);
      LABEL_106:
        v84 = *(_QWORD*)(a1 + 104);
        v85 = GameHr_157b5c0(v84, v69);
        v53 = v84;
        v61 = v85;
        v52 = v68;
        v58 = v67;
        goto LABEL_79;
      }
      v66 = *(_QWORD*)(*(_QWORD*)(game_TransporterConst_List_instance_ + 8) +
                       8LL);
    LABEL_105:
      v67 = v58;
      v68 = v52;
      v69 = (unsigned __int16*)(v66 + 12LL * (int)v55 + 4);
      goto LABEL_106;
    }
  }
LABEL_78:
  v61 = 0;
LABEL_79:
  Util_1581550_alt1(v52, v53, (unsigned __int16*)v58, v61 & 1, 0);
LABEL_80:
  v70 = *(_QWORD*)(a1 + 56);
  if (v70 == 0) {
    goto LABEL_84;
  }
  v71 = std___1___shared_weak_count_lock_alt1(v70);
  if (v71 == 0) {
    goto LABEL_84;
  }
  v72 = v71;
  v73 = (atomic_ullong*)(v71 + 8);
  v74 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v73, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v74 != nullptr) {
      goto LABEL_85;
    }
    goto LABEL_84;
  }
  v81 = v74;
  (*(void (**)(__int64))(*(_QWORD*)v72 + 16LL))(v72);
  std___1___shared_weak_count___release_weak_alt1(v72);
  v74 = v81;
  if (v81 == nullptr) {
  LABEL_84:
    v74 = &ui_LayoutAccessor_empty_;
  }
LABEL_85:
  LayoutAccessor_1560070_alt1((void*)(&v86_.v86), v74, "L_Icon");
  result = v86_.v87;
  if (v86_.v87 != 0) {
    v76 = std___1___shared_weak_count_lock_alt1(v86_.v87);
    v77 = v86_.v86;
    result = v86_.v87;
    if (v86_.v87 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v86_.v87);
    }
    if (v76 != 0 && v77 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v76 + 16), 1u,
                                memory_order_relaxed);
      v78 = *(_QWORD*)(a1 + 88);
      v79 = *(int*)(a1 + 40);
      if (v78 != 0) {
        v80 = v78 + 8 * v79 + 828;
      }
      else {
        v80 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                        game_TransporterConst_List_instance__ptr
                                            [0] +
                                    8LL) +
                         8LL) +
              12LL * (int)v79 + 4;
      }
      v82 = std___1___shared_weak_count_lock_alt1(v76);
      if (v82 != 0) {
        v83 = v82;
        ui_LayoutAccessor_SetPaneVisible_alt1(v77, "IconLock",
                                              (*(_BYTE*)(v80 + 3) & 0x10) != 0);
        if (atomic_fetch_add((atomic_ullong* volatile)(v83 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v83 + 16LL))(v83);
          std___1___shared_weak_count___release_weak_alt1(v83);
        }
      }
      result = std___1___shared_weak_count___release_weak_alt1(v76);
    }
    else if (v76 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v76 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v76 + 16LL))(v76);
      return std___1___shared_weak_count___release_weak_alt1(v76);
    }
  }
  return result;
}

__int64 EquipMenuItem_Transporter_Unknown58(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  unsigned __int16* v13;

  v1 = *(_QWORD*)(a1 + 88);
  v2 = *(int*)(a1 + 40);
  if (v1 != 0) {
    v3 = v1 + 8 * v2;
    v4 = *(unsigned __int16*)(v3 + 828);
    if (*(_WORD*)(v3 + 828) == 0) {
      return 0;
    }
    v5 = v3 + 828;
  }
  else {
    v6 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                   game_TransporterConst_List_instance__ptr[0] +
                               8LL) +
                    8LL) +
         12LL * (int)v2;
    v7 = *(unsigned __int16*)(v6 + 4);
    v5 = v6 + 4;
    v4 = v7;
    if (v7 == 0) {
      return 0;
    }
  }
  if ((*(_BYTE*)(v5 + 3) & 0x10) == 0) {
    v8 = *(_QWORD*)(GameData_21c99b8 + 64);
    v9 = *(_QWORD*)(v8 + 8LL * v4);
    if ((*(_BYTE*)(v9 + 336) & 4) == 0 &&
        ((1LL << *(_BYTE*)(v9 + 72)) & 0xE01F) != 0) {
      if (*(_DWORD*)(a1 + 116) != 2) {
        goto LABEL_15;
      }
      if (v1 != 0) {
        v10 = *(unsigned __int8*)(*(_QWORD*)(v8 +
                                             8LL * *(unsigned __int16*)(v1 +
                                                                        8 * v2 +
                                                                        828)) +
                                  72LL);
        if (v10 <= 7) {
          v11 = *(_QWORD*)(a1 + 104);
        LABEL_16:
          v13 = (unsigned __int16*)(v1 + 8 * v2 + 828);
          return GameRoutine_157b5c0(v11, v13);
        }
      }
      else {
        v12 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                        game_TransporterConst_List_instance__ptr
                                            [0] +
                                    8LL) +
                         8LL);
        v10 = *(
            unsigned __int8*)(*(_QWORD*)(v8 +
                                         8LL *
                                             *(unsigned __int16*)(v12 +
                                                                  12LL *
                                                                      (int)v2 +
                                                                  4)) +
                              72LL);
        if (v10 <= 7) {
          v11 = *(_QWORD*)(a1 + 104);
          goto LABEL_20;
        }
      }
      if (v10 == 13) {
      LABEL_15:
        v11 = *(_QWORD*)(a1 + 104);
        if (v1 != 0) {
          goto LABEL_16;
        }
        v12 = *(_QWORD*)(*(_QWORD*)(game_TransporterConst_List_instance_ + 8) +
                         8LL);
      LABEL_20:
        v13 = (unsigned __int16*)(v12 + 12LL * (int)v2 + 4);
        return GameRoutine_157b5c0(v11, v13);
      }
    }
  }
  return 0;
}

__int64 EquipMenuItem_Transporter_Unknown70(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 88);
  v2 = *(int*)(a1 + 40);
  if (v1 != 0) {
    return v1 + 8 * v2 + 828;
  }
  else {
    return *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                     game_TransporterConst_List_instance__ptr
                                         [0] +
                                 8LL) +
                      8LL) +
           12LL * (int)v2 + 4;
  }
}

bool game_menu_anonymous_EquipMenuItem_Transporter_ACall_closure_Invoke(
    __int64 a1, _QWORD* a2)
{
  return *(_WORD*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2) == 0;
}

__int64

game_menu_anonymous_EquipMenuItem_Transporter_ACall_closure0_Invoke_15d0ce0(
    __int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 464LL))(*a2) & 1) == 0) {
    return 1;
  }
  v4 = *(_QWORD*)(v2 + 8);
  v5 = *(_QWORD*)(v3 + 104);
  v6 = *(_QWORD*)(v3 + 88);
  v7 = *(_DWORD*)(v3 + 40);
  v11_.v12 = v11_.v11;
  if (*(_QWORD*)(v4 + 152) != 0) {
    v8 = *(_QWORD*)(v4 + 152);
  }
  else {
    v8 = v4;
  }
  v11_.v11[0] = GameData_205a688;
  v11_.v11[1] = v3;
  GameRoutine_166a010(v8, v5, v6, v7, (__int64)v11_.v11);
  if (v11_.v12 == v11_.v11) {
    v9 = 32;
    goto LABEL_10;
  }
  if (v11_.v12 != nullptr) {
    v9 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v11_.v12 + v9))((__int64)v11_.v12);
  }
  return 12;
}

__int64

game_menu_anonymous_EquipMenuItem_Transporter_ACall_closure0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(v1 + 88);
  if (v2 != 0) {
    game_Unit_Unknown6c4610(*(_QWORD*)(v1 + 88));
    *(_WORD*)(v2 + 20) |= 1u;
  }
  v3 = *(_QWORD**)(v1 + 96);
  v4 = v3[38];
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 1080LL))(v4);
  }
  v5 = v3[39];
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 1080LL))(v5);
  }
  result = v3[40];
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 1080LL))(result);
  }
  return result;
}

__int64

game_menu_anonymous_EquipMenuItem_Transporter_ACall_closure1_Invoke(__int64 a1,
                                                                    _QWORD* a2)
{
  __int64 v2;
  _WORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = *(_QWORD*)(a1 + 8);
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 464LL))(*a2) & 1) == 0) {
    return 1;
  }
  v3 = *(_WORD**)(v2 + 104);
  if (v3 != nullptr) {
    if (v3[414] != 0) {
      if (v3[418] != 0) {
        if (v3[422] != 0) {
          if (v3[426] != 0) {
            if (v3[430] != 0) {
              v4 = v3[434] != 0 ? 0xFFFFFFFFLL : 5LL;
            }
            else {
              v4 = 4;
            }
          }
          else {
            v4 = 3;
          }
        }
        else {
          v4 = 2;
        }
      }
      else {
        v4 = 1;
      }
    }
    else {
      v4 = 0;
    }
  }
  else {
    v4 = 0xFFFFFFFFLL;
  }
  if ((game_15de540((__int64)v3, v4, *(_QWORD*)(v2 + 88),
                    *(unsigned int*)(v2 + 40)) &
       1) == 0) {
    return 1;
  }
  v5 = *(_QWORD**)(v2 + 96);
  v6 = v5[38];
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 1080LL))(v6);
  }
  v7 = v5[39];
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 1080LL))(v7);
  }
  v8 = v5[40];
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 1080LL))(v8);
  }
  return 2;
}

__int64

game_menu_anonymous_EquipMenuItem_Transporter_ACall_closure2_Invoke(__int64 a1,
                                                                    _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64 v17;

  v3 = *(_QWORD*)(a1 + 8);
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 464LL))(*a2) & 1) == 0) {
    return 1;
  }
  v4 = *(_QWORD*)(v3 + 96);
  v5 = *(_DWORD*)(v4 + 356);
  if (*(_QWORD*)(v3 + 88) != 0) {
    *(_DWORD*)(v4 + 356) = v5 | 4;
    v6 = *(_QWORD*)(v3 + 8);
    v7 = *(_QWORD*)(v3 + 104);
    v8 = *(_DWORD*)(a1 + 16);
    v9 = *(_QWORD*)(v3 + 88);
    v10 = *(_DWORD*)(v3 + 40);
    if (*(_QWORD*)(v6 + 152) != 0) {
      v11 = *(_QWORD*)(v6 + 152);
    }
    else {
      v11 = *(_QWORD*)(v3 + 8);
    }
    v12 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 392, 16, 0);
    v13 = GameData_212c608[0];
    *(_QWORD*)(v12 + 96) = 0;
    *(_QWORD*)(v12 + 104) = 0;
    *(_QWORD*)(v12 + 112) = 0;
    *(_QWORD*)(v12 + 120) = 0;
    *(_QWORD*)(v12 + 128) = 0;
    *(_WORD*)(v12 + 136) = 0;
    *(_QWORD*)(v12 + 16) = 0;
    *(_QWORD*)(v12 + 24) = "NULL";
    *(_QWORD*)(v12 + 138) = 0;
    *(_QWORD*)(v12 + 144) = 0;
    *(_QWORD*)(v12 + 32) = 0;
    *(_QWORD*)(v12 + 40) = 0;
    *(_QWORD*)(v12 + 48) = 0;
    *(_QWORD*)(v12 + 56) = 0;
    *(_QWORD*)(v12 + 64) = 0;
    *(_QWORD*)(v12 + 72) = 0;
    *(_QWORD*)(v12 + 80) = 0;
    *(_QWORD*)(v12 + 88) = 0;
    *(_QWORD*)v12 = v13 + 16;
    *(_QWORD*)(v12 + 8) = 0;
    game_ProcInst_Register_alt1(v12);
    *(_QWORD*)(v12 + 232) = 0;
    *(_QWORD*)(v12 + 224) = v12 + 232;
    v14 = GameData_2130240[0];
    *(_BYTE*)(v12 + 168) = 0;
    *(_BYTE*)(v12 + 172) = 0;
    *(_QWORD*)(v12 + 192) = 0;
    *(_QWORD*)(v12 + 200) = 0;
    *(_QWORD*)(v12 + 208) = 0;
    *(_QWORD*)(v12 + 216) = 0;
    *(_QWORD*)(v12 + 240) = 0;
    *(_QWORD*)(v12 + 248) = 0;
    *(_QWORD*)(v12 + 256) = 0;
    *(_QWORD*)(v12 + 264) = 0;
    *(_QWORD*)(v12 + 272) = 0;
    *(_QWORD*)(v12 + 336) = 0;
    *(_QWORD*)(v12 + 344) = 0;
    *(_QWORD*)(v12 + 320) = 0;
    *(_QWORD*)(v12 + 328) = 0;
    *(_QWORD*)(v12 + 304) = 0;
    *(_QWORD*)(v12 + 312) = 0;
    *(_QWORD*)(v12 + 288) = 0;
    *(_QWORD*)(v12 + 296) = 0;
    *(_QWORD*)(v12 + 352) = 0;
    *(_QWORD*)(v12 + 360) = v7;
    *(_QWORD*)(v12 + 368) = v9;
    *(_QWORD*)(v12 + 152) = 0;
    *(_QWORD*)(v12 + 160) = v14 + 2;
    *(_DWORD*)(v12 + 280) = 1065353216;
    v15 = GameData_2131a10[0];
    *(_DWORD*)(v12 + 380) = v8;
    *(_DWORD*)(v12 + 384) = v10;
    *(_QWORD*)(v12 + 176) = v15 + 55;
    *(_QWORD*)(v12 + 184) = 0;
    *(_QWORD*)v12 = v15 + 2;
    *(_DWORD*)(v12 + 376) = 1;
    ProcInst_657850_alt1(v12, (__int64)GameData_21319e0, "ExchangeMenu", 1,
                         v11);
    BasicMenuCursor_16ddbe0_alt1(*(_QWORD**)(v3 + 8));
  }
  else {
    v17 = *(_QWORD*)(v4 + 304);
    *(_DWORD*)(v4 + 356) = v5 | 1;
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v17 + 240LL))(v17, 0);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v17 + 248LL))(v17, 0);
    MultiMenuSequence_17871c0_alt1(*(_QWORD*)(v3 + 96), 0, 0);
  }
  return 2;
}

__int64

game_menu_anonymous_EquipMenuItem_Transporter_ACall_closure3_Invoke_15d15c0(
    __int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 464LL))(*a2) & 1) == 0) {
    return 1;
  }
  v4 = *(_QWORD*)(v2 + 8);
  v5 = *(char**)(v3 + 88);
  v6 = *(_DWORD*)(v3 + 40);
  v10_.v11 = v10_.v10;
  if (*(_QWORD*)(v4 + 152) != 0) {
    v7 = *(_QWORD*)(v4 + 152);
  }
  else {
    v7 = v4;
  }
  v10_.v10[0] = GameData_205aae8;
  v10_.v10[1] = v3;
  GameRoutine_166a500(v7, v5, v6, (__int64)v10_.v10);
  if (v10_.v11 == v10_.v10) {
    v8 = 32;
    goto LABEL_10;
  }
  if (v10_.v11 != nullptr) {
    v8 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v10_.v11 + v8))((__int64)v10_.v11);
  }
  return 12;
}

__int64

game_menu_anonymous_EquipMenuItem_Transporter_ACall_closure3_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(v1 + 88);
  if (v2 != 0) {
    game_Unit_Unknown6c4610(*(_QWORD*)(v1 + 88));
    *(_WORD*)(v2 + 20) |= 1u;
  }
  v3 = *(_QWORD**)(v1 + 96);
  v4 = v3[38];
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 1080LL))(v4);
  }
  v5 = v3[39];
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 1080LL))(v5);
  }
  v6 = v3[40];
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 1080LL))(v6);
  }
  return 5;
}

#pragma GCC visibility pop
