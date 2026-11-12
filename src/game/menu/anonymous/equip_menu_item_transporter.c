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
__n128 EquipMenuItem_Transporter_Unknown55(__int64 a1);
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

__n128 EquipMenuItem_Transporter_Unknown55(__int64 a1)
{

#pragma clang fp contract(off)
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
  __int64 v27;
  __int64 v28;
  __int64 v29;
  atomic_ullong* v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  char v39;
  __int64 v40;
  __int64 v41;
  unsigned int v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  __int64* v46;
  __int64 v47;
  __int64 v48;
  unsigned __int16* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  atomic_ullong* v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned int v59;
  __int64 v60;
  __int64 v61;
  unsigned int v62;
  char v63;
  __int64 v64;
  __int64 v65;
  unsigned int v66;
  __int64* v67;
  __int64 v68;
  __int64 v69;
  __int64* v70;
  unsigned __int16* v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  atomic_ullong* v75;
  __int64* v76;
  __n128 result;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64* v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  char v87;
  struct {
    __int64 v88;
    __int64 v89;
  } v88_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
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
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  std___1___shared_weak_count___release_weak(),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
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
  v14 = GameRoutine_157b5c0(v18, v24),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v6 = v20;
  v7 = v23;
  v11 = v19;
LABEL_25:
  GameRoutine_157ada0(v6, v7, (unsigned __int16*)v11, v14 & 1),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v27 = *(_QWORD*)(a1 + 56);
  if (v27 == 0) {
    goto LABEL_29;
  }
  v28 = std___1___shared_weak_count_lock(v27),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v28 == 0) {
    goto LABEL_29;
  }
  v29 = v28;
  v30 = (atomic_ullong*)(v28 + 8);
  v31 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v30, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v31 != nullptr) {
      goto LABEL_30;
    }
    goto LABEL_29;
  }
  v46 = v31;
  (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  std___1___shared_weak_count___release_weak(),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v31 = v46;
  if (v46 == nullptr) {
  LABEL_29:
    v31 = &ui_LayoutAccessor_empty_;
  }
LABEL_30:
  v32 = *(_QWORD*)(a1 + 88);
  v33 = *(int*)(a1 + 40);
  if (v32 != 0) {
    v34 = v32 + 8 * v33;
    v35 = *(unsigned __int16*)(v34 + 828);
    v36 = v34 + 828;
    if (*(_WORD*)(v34 + 828) == 0) {
      goto LABEL_51;
    }
  }
  else {
    v37 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                  game_TransporterConst_List_instance__ptr[0] +
                              8LL) +
                   8LL) +
        12LL * (int)v33;
    v38 = *(unsigned __int16*)(v37 + 4);
    v36 = v37 + 4;
    v35 = v38;
    if (v38 == 0) {
      goto LABEL_51;
    }
  }
  if ((*(_BYTE*)(v36 + 3) & 0x10) == 0) {
    v39 = 0;
    v40 = *(_QWORD*)(*GameData_212c878[0] + 64);
    v41 = *(_QWORD*)(v40 + 8LL * v35);
    if ((*(_BYTE*)(v41 + 336) & 4) != 0 ||
        ((1LL << *(_BYTE*)(v41 + 72)) & 0xE01F) == 0) {
      goto LABEL_52;
    }
    if (*(_DWORD*)(a1 + 116) != 2) {
      goto LABEL_49;
    }
    if (v32 != 0) {
      v42 = *(unsigned __int8*)(*(_QWORD*)(v40 +
                                           8LL * *(unsigned __int16*)(v32 +
                                                                      8 * v33 +
                                                                      828)) +
                                72LL);
      if (v42 <= 7) {
        v43 = *(_QWORD*)(a1 + 104);
        v44 = v36;
        v45 = v31;
      LABEL_50:
        v48 = *(_QWORD*)(a1 + 88);
        v49 = (unsigned __int16*)(v32 + 8 * v33 + 828);
      LABEL_73:
        v39 = GameRoutine_157b5c0(v43, v49),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v31 = v45;
        v32 = v48;
        v36 = v44;
        goto LABEL_52;
      }
    }
    else {
      v47 = *(_QWORD*)(*(_QWORD*)(game_TransporterConst_List_instance_ + 8) +
                       8LL);
      v42 = *(
          unsigned __int8*)(*(_QWORD*)(v40 +
                                       8LL * *(unsigned __int16*)(v47 +
                                                                  12LL *
                                                                      (int)v33 +
                                                                  4)) +
                            72LL);
      if (v42 <= 7) {
        v43 = *(_QWORD*)(a1 + 104);
        v44 = v36;
        v45 = v31;
        goto LABEL_72;
      }
    }
    if (v42 == 13) {
    LABEL_49:
      v43 = *(_QWORD*)(a1 + 104);
      v44 = v36;
      v45 = v31;
      if (v32 != 0) {
        goto LABEL_50;
      }
      v47 = *(_QWORD*)(*(_QWORD*)(game_TransporterConst_List_instance_ + 8) +
                       8LL);
    LABEL_72:
      v48 = *(_QWORD*)(a1 + 88);
      v49 = (unsigned __int16*)(v47 + 12LL * (int)v33 + 4);
      goto LABEL_73;
    }
  }
LABEL_51:
  v39 = 0;
LABEL_52:
  Util_1581060(v31, v32, (unsigned __int16*)v36, v39 & 1, 0, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (*(_QWORD*)(a1 + 104) == 0) {
    goto LABEL_80;
  }
  v50 = *(_QWORD*)(a1 + 56);
  if (v50 == 0) {
    goto LABEL_57;
  }
  v51 = std___1___shared_weak_count_lock(v50),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v51 == 0) {
    goto LABEL_57;
  }
  v52 = v51;
  v53 = (atomic_ullong*)(v51 + 8);
  v54 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v53, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v54 != nullptr) {
      goto LABEL_58;
    }
    goto LABEL_57;
  }
  v67 = v54;
  (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  std___1___shared_weak_count___release_weak(),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v54 = v67;
  if (v67 == nullptr) {
  LABEL_57:
    v54 = &ui_LayoutAccessor_empty_;
  }
LABEL_58:
  v55 = *(_QWORD*)(a1 + 104);
  v56 = *(_QWORD*)(a1 + 88);
  v57 = *(int*)(a1 + 40);
  if (v56 != 0) {
    v58 = v56 + 8 * v57;
    v59 = *(unsigned __int16*)(v58 + 828);
    v60 = v58 + 828;
    if (*(_WORD*)(v58 + 828) == 0) {
      goto LABEL_78;
    }
  }
  else {
    v61 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                  game_TransporterConst_List_instance__ptr[0] +
                              8LL) +
                   8LL) +
        12LL * (int)v57;
    v62 = *(unsigned __int16*)(v61 + 4);
    v60 = v61 + 4;
    v59 = v62;
    if (v62 == 0) {
      goto LABEL_78;
    }
  }
  if ((*(_BYTE*)(v60 + 3) & 0x10) == 0) {
    v63 = 0;
    v64 = *(_QWORD*)(*GameData_212c878[0] + 64);
    v65 = *(_QWORD*)(v64 + 8LL * v59);
    if ((*(_BYTE*)(v65 + 336) & 4) != 0 ||
        ((1LL << *(_BYTE*)(v65 + 72)) & 0xE01F) == 0) {
      goto LABEL_79;
    }
    if (*(_DWORD*)(a1 + 116) != 2) {
      goto LABEL_76;
    }
    if (v56 != 0) {
      v66 = *(unsigned __int8*)(*(_QWORD*)(v64 +
                                           8LL * *(unsigned __int16*)(v56 +
                                                                      8 * v57 +
                                                                      828)) +
                                72LL);
      if (v66 < 8) {
        goto LABEL_77;
      }
    }
    else {
      v68 = *(
          _QWORD*)(*(_QWORD*)(*(_QWORD*)
                                  game_TransporterConst_List_instance__ptr[0] +
                              8LL) +
                   8LL);
      v66 = *(
          unsigned __int8*)(*(_QWORD*)(v64 +
                                       8LL * *(unsigned __int16*)(v68 +
                                                                  12LL *
                                                                      (int)v57 +
                                                                  4)) +
                            72LL);
      if (v66 < 8) {
        goto LABEL_105;
      }
    }
    if (v66 == 13) {
    LABEL_76:
      if (v56 != 0) {
      LABEL_77:
        v69 = v60;
        v70 = v54;
        v71 = (unsigned __int16*)(v56 + 8 * v57 + 828);
      LABEL_106:
        v86 = *(_QWORD*)(a1 + 104);
        v87 = GameRoutine_157b5c0(v86, v71),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v55 = v86;
        v63 = v87;
        v54 = v70;
        v60 = v69;
        goto LABEL_79;
      }
      v68 = *(_QWORD*)(*(_QWORD*)(game_TransporterConst_List_instance_ + 8) +
                       8LL);
    LABEL_105:
      v69 = v60;
      v70 = v54;
      v71 = (unsigned __int16*)(v68 + 12LL * (int)v57 + 4);
      goto LABEL_106;
    }
  }
LABEL_78:
  v63 = 0;
LABEL_79:
  Util_1581550(v54, v55, (unsigned __int16*)v60, v63 & 1, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_80:
  v72 = *(_QWORD*)(a1 + 56);
  if (v72 == 0) {
    goto LABEL_84;
  }
  v73 = std___1___shared_weak_count_lock(v72),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v73 == 0) {
    goto LABEL_84;
  }
  v74 = v73;
  v75 = (atomic_ullong*)(v73 + 8);
  v76 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v75, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v76 != nullptr) {
      goto LABEL_85;
    }
    goto LABEL_84;
  }
  v83 = v76;
  (*(void (**)(__int64))(*(_QWORD*)v74 + 16LL))(v74),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  std___1___shared_weak_count___release_weak(),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v76 = v83;
  if (v83 == nullptr) {
  LABEL_84:
    v76 = &ui_LayoutAccessor_empty_;
  }
LABEL_85:
  LayoutAccessor_1560070((void*)(&v88_.v88), v76, (__int64)"L_Icon"),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v88_.v89 != 0) {
    v78 = std___1___shared_weak_count_lock(v88_.v89),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v79 = v88_.v88;
    if (v88_.v89 != 0) {
      result = std___1___shared_weak_count___release_weak();
    }
    if (v78 != 0 && v79 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v78 + 16), 1u,
                                memory_order_relaxed);
      v80 = *(_QWORD*)(a1 + 88);
      v81 = *(int*)(a1 + 40);
      if (v80 != 0) {
        v82 = v80 + 8 * v81 + 828;
      }
      else {
        v82 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                        game_TransporterConst_List_instance__ptr
                                            [0] +
                                    8LL) +
                         8LL) +
              12LL * (int)v81 + 4;
      }
      v84 = std___1___shared_weak_count_lock(v78),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v84 != 0) {
        v85 = v84;
        ui_LayoutAccessor_SetPaneVisible(v79, (__int64)"IconLock",
                                         (*(_BYTE*)(v82 + 3) & 0x10) != 0),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (atomic_fetch_add((atomic_ullong* volatile)(v85 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v85 + 16LL))(v85),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          std___1___shared_weak_count___release_weak(),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
      result = std___1___shared_weak_count___release_weak();
    }
    else if (v78 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v78 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v78 + 16LL))(
          v78, *(long double*)&result),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      return std___1___shared_weak_count___release_weak();
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
