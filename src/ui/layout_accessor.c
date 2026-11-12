#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_15638b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9bea80(_QWORD, _QWORD);
__int64 LayoutAccessor_1562680(__int64 result, __int64, float);
__int64 LayoutAccessor_1562f00(_QWORD, _QWORD);
__int64 LayoutAccessor_1563030(_QWORD, _QWORD, _QWORD);
__int64 Layout_57b830(_QWORD, _QWORD);
__int64 UnitParams_6dd470(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetJob(_QWORD);
__int64 game_Unit_IsImmobile(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 LayoutAccessor_1562b50(__int64* a1, __int64 a2);
__int64 LayoutAccessor_1562ea0(__int64 a1, __int64 a2);
__int64 LayoutAccessor_1573500(__int64 a1, char a2, char a3);
_BYTE* Layout_579280(_QWORD*, __int64);
__attribute__((swiftcall)) void GameRoutine_15642e0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void
GameRoutine_15642e0_alt1(PSEUDO_X8, _QWORD* result,
                         _QWORD*) __asm__("GameRoutine_15642e0");
__attribute__((swiftcall)) void GameRoutine_1573280(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_15733c0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_15736e0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1() __asm__(
    "nn_ui2d_Pane_GetRuntimeTypeInfoStatic");
__int64 GameRoutine_155e4a0(__int64, __int64, __int64);
__int64 GameRoutine_155f760(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1571860(__int64*, __int64, char, char, char, char);
__int64 GameRoutine_15735c0(_QWORD);
__int64 GameRoutine_1586d80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _QWORD,
                            _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_188df50(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18c9b10(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_19abf80(_QWORD, _QWORD);
__int64 IconLegion_19abe40(_QWORD, _QWORD);
__int64 LayoutAccessor_15641a0(_QWORD, _QWORD);
__int64 LayoutAccessor_1564440_alt1(_QWORD, _QWORD,
                                    _QWORD) __asm__("LayoutAccessor_1564440");
__int64 LayoutAccessor_15730d0(_QWORD, _QWORD);
__int64 LayoutEx_5791a0(__int64);
__int64 Pane_58dee0(_QWORD, _QWORD);
__int64 Pane_58df60(_QWORD, _QWORD);
__int64 Pane_58df60_alt1(__int64 result, _QWORD*) __asm__("Pane_58df60");
__int64 StatusItem_188e530(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetParamLimit(_QWORD, _QWORD);
__int64 game_gameui_SetHpStock(_QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(void);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 ui_LayoutAccessor_GetPartsLayout(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_Setup_155dea0(_QWORD, _QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212dfd0;
extern _UNKNOWN GameData_21f8028;
extern __int64 (*GameData_204d478[])();
extern __int64 (*GameData_204e798[])();
extern __int64* GameData_212c880[5];
extern __int64* GameData_212dfc0[2];
extern __int64* GameData_212dfc8;
extern __int64* GameData_2132000[4];
extern __int64* GameData_2132008[3];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 GameData_212d880;
extern __int64 GameData_21f8020;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
struct PseudoSret Layout_1363f00(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
__attribute__((swiftcall)) void LayoutAccessor_155ed40(PSEUDO_X8 x8_,
                                                       __int64* result,
                                                       __int64* a2, __int64 a3,
                                                       __int64 a4);
void LayoutAccessor_1560940(__int64* a1, __int64 a2);
_QWORD* LayoutAccessor_1564440(float* a1, unsigned __int8* a2, __int64** a3);
__int64 LayoutAccessor_1572ac0_alt1(__int64* a1, __int64 a2, char a3,
                                    char a4) __asm__("LayoutAccessor_1572ac0");
__attribute__((swiftcall)) void
LayoutAccessor_1837560_alt1(__attribute__((swift_indirect_result)) void* x8_,
                            __int64* a1,
                            _QWORD* a2) __asm__("LayoutAccessor_1837560");
__attribute__((swiftcall)) void
LayoutAccessor_1839200_alt1(__attribute__((swift_indirect_result)) void* x8_,
                            __int64* a1,
                            _QWORD* a2) __asm__("LayoutAccessor_1839200");
__attribute__((swiftcall)) void GameRoutine_15725c0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_1572700(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_1572840(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_1572980(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_fa73c0(PSEUDO_X8, _QWORD, _QWORD);
__int64 Alignment_56b600(void);
__int64 AsyncLoadThumbImage_18ba690(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(__int64, __int64, char);
__int64 GameRoutine_1572370(_QWORD, _QWORD);
__int64 GameRoutine_1585290(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1840740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_189d120(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameSituation_906c90(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 Manager_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Manager_136afb0(_QWORD, _QWORD);
__int64 Pane_58f8a0(void);
__int64 StatusHP_18920d0(_QWORD, _QWORD, _QWORD);
__int64 StatusHP_18922b0(_QWORD);
__int64 StatusLV_18a30a0(_QWORD, _QWORD);
__int64 UnitName_19ab4a0(_QWORD, _QWORD);
__int64 Unit_6c8300(_QWORD, _QWORD);
__int64 game_97b2f0(_QWORD);
__int64 game_HasActiveSkill_843420(_QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _DWORD* game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212da30;
extern _UNKNOWN GameData_1ac6c8b;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 game_GameModeData_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 ui_Manager_instance_;
__int64 LayoutAccessor_1571860(__int64* a1, __int64 a2, char a3, char a4,
                               char a5, char a6);
__attribute__((swiftcall)) void
GameRoutine_1573280_alt1(PSEUDO_X8, __int64*,
                         _QWORD*) __asm__("GameRoutine_1573280");
__attribute__((swiftcall)) void
GameRoutine_15733c0_alt1(PSEUDO_X8, __int64*,
                         _QWORD*) __asm__("GameRoutine_15733c0");
__attribute__((swiftcall)) void
GameRoutine_15736e0_alt1(PSEUDO_X8, __int64*,
                         _QWORD*) __asm__("GameRoutine_15736e0");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__attribute__((swiftcall)) void
Layout_1363f00_alt1(PSEUDO_X8, __int64, __int64) __asm__("Layout_1363f00");
__int64 GameHr_1586d80(__int64*, _DWORD*, _DWORD*, __int64, char, char, char,
                       __int64, char, char, char);
__int64 GameRoutine_15735c0_alt1(__int64*, int,
                                 int*) __asm__("GameRoutine_15735c0");
__int64 GameRoutine_188df50_alt1(__int64*, unsigned int*, char,
                                 char) __asm__("GameRoutine_188df50");
__int64 StatusItem_188e530_alt1(__int64, __int64) __asm__("StatusItem_188e530");
__int64 UnitParams_6dd470_alt1(__int64, _BYTE*, __int64,
                               char) __asm__("UnitParams_6dd470");
__int64 game_Unit_GetJob_alt1(__int64) __asm__("game_Unit_GetJob");
__int64 game_Unit_GetParamLimit_alt1(_QWORD*, unsigned __int8*) __asm__(
    "game_Unit_GetParamLimit");
__int64 game_Unit_GetParam_alt1(__int64) __asm__("game_Unit_GetParam");
__int64 game_Unit_IsImmobile_alt1(__int64) __asm__("game_Unit_IsImmobile");
__int64 game_gameui_SetHpStock_alt1(__int64 result,
                                    __int64) __asm__("game_gameui_SetHpStock");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_GetPartsLayout_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_GetPartsLayout");
bool GameRoutine_19abf80_alt1(__int64, __int64) __asm__("GameRoutine_19abf80");
bool IconLegion_19abe40_alt1(__int64, __int64) __asm__("IconLegion_19abe40");
extern int GameData_1b47d74;
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void GameHr_15730d0(__int64, _QWORD*);
void GameRoutine_18c9b10_alt1(__int64*, __int64,
                              int) __asm__("GameRoutine_18c9b10");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void LayoutAccessor_1572ac0(__int64* a1, __int64 a2, char a3, char a4);
__attribute__((swiftcall)) void
LayoutAccessor_1837560(PSEUDO_X8 x8_, __int64* a1, __int64* a2);
__attribute__((swiftcall)) void
LayoutAccessor_1839200(PSEUDO_X8 x8_, __int64* a1, __int64* a2);

__attribute__((swiftcall)) void LayoutAccessor_155ed40(PSEUDO_X8 x8_,
                                                       __int64* result,
                                                       __int64* a2, __int64 a3,
                                                       __int64 a4)
{
  _QWORD* a5 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  int v5;
  int v6;
  __int64 v8;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _BOOL4 v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
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
  unsigned __int64 v45;
  unsigned __int64 v46;
  char* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  char* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  char* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  char* v71;
  __int64* v72;

  v8 = result[2];
  v12 = result;
  v68 = a4;
  if (v8 == 0) {
    goto LABEL_18;
  }
  result = (__int64*)result[1];
  if (result == nullptr) {
    goto LABEL_18;
  }
  result = (__int64*)std___1___shared_weak_count_lock(result);
  if (result == nullptr) {
  LABEL_11:
    v15 = v12[1];
    if (v15 == 0 || *(_QWORD*)(v15 + 8) == -1) {
      goto LABEL_18;
    }
    goto LABEL_16;
  }
  v13 = *v12;
  if (*v12 != 0) {
    v5 = *(unsigned __int8*)(v13 + 24);
    v14 = v13 + 152;
    if (v5 == 0) {
      v14 = 0;
    }
    v6 = v14 != v12[2];
  }
  else {
    v6 = 1;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 1),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != 0) {
      goto LABEL_11;
    }
  }
  else {
    v16 = result;
    (*(void (**)(__int64*))(*result + 16))(result);
    result = (__int64*)std___1___shared_weak_count___release_weak(v16);
    if (v6 != 0) {
      goto LABEL_11;
    }
  }
  if ((v5 & 1) == 0) {
  LABEL_18:
    v18 = nullptr;
    goto LABEL_19;
  }
LABEL_16:
  v17 = v12[2];
  if (v17 == 0) {
    goto LABEL_18;
  }
  result = (__int64*)GameRoutine_155f760(v12, v17, a4);
  v18 = result;
LABEL_19:
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f8028,
                            memory_order_acquire) &
       1) == 0) {
    result = (__int64*)__cxa_guard_acquire(&GameData_21f8028);
    if ((_DWORD)result != 0) {
      GameData_21f8020 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
      result = (__int64*)__cxa_guard_release(&GameData_21f8028);
    }
  }
  if (v18 != nullptr) {
    result = (__int64*)(*(__int64 (**)(__int64*))(*v18 + 16))(v18);
    if (result == &GameData_21f8020) {
      goto LABEL_28;
    }
    do {
      result = (__int64*)*result;
    } while (result != &GameData_21f8020 && result != nullptr);
    if (result != nullptr) {
    LABEL_28:
      Pane_58df60(v18[3], v18);
      v20 = v12[2];
      if (v20 != 0) {
        v21 = v12[1];
        if (v21 == 0) {
        LABEL_44:
          v20 = 0;
          goto LABEL_45;
        }
        v22 = std___1___shared_weak_count_lock(v21);
        if (v22 != 0) {
          v23 = *v12;
          if (*v12 != 0) {
            v6 = *(unsigned __int8*)(v23 + 24);
            v24 = v23 + 152;
            if (v6 == 0) {
              v24 = 0;
            }
            v25 = v24 != v12[2];
          }
          else {
            v25 = true;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            if (v25) {
              goto LABEL_39;
            }
          LABEL_43:
            if ((v6 & 1) != 0) {
            LABEL_41:
              v20 = v12[2];
              goto LABEL_45;
            }
            goto LABEL_44;
          }
          v26 = v22;
          (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
          std___1___shared_weak_count___release_weak(v26);
          if (!v25) {
            goto LABEL_43;
          }
        }
      LABEL_39:
        v20 = v12[1];
        if (v20 == 0) {
          goto LABEL_45;
        }
        if (*(_QWORD*)(v20 + 8) != -1) {
          goto LABEL_41;
        }
        goto LABEL_44;
      }
    LABEL_45:
      v27 = v18 + 27;
      if (v18 + 27 != (__int64*)(v20 + 72)) {
        v28 = (__int64*)v18[28];
        v29 = *v28;
        *(_QWORD*)(v18[27] + 8) = v28;
        *v28 = v18[27];
        *(_QWORD*)(v29 + 8) = v27;
        v18[27] = v29;
      }
      Pane_58dee0(a3, v18);
      v30 = std___1___shared_weak_count_lock(a2[1]);
      if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        v31 = v30;
        (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
        std___1___shared_weak_count___release_weak(v31);
      }
      v32 = (_QWORD*)a2[2];
      v33 = *v27;
      v34 = v32[9];
      v32 += 9;
      *v27 = v34;
      *(_QWORD*)(v33 + 8) = v32;
      *(_QWORD*)(*v32 + 8LL) = v27;
      *v32 = v33;
      v35 = LayoutAccessor_15641a0(v12 + 6, &v68);
      if (v35 != 0) {
        GameRoutine_15642e0((void*)(&v69), v12 + 6, v35);
        v36 = v69;
        v69 = 0;
        if (v36 != 0) {
          if ((unsigned __int8)v71 == 1) {
            v37 = *(_QWORD*)(v36 + 48);
            if (v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              v38 = v36;
              (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
              std___1___shared_weak_count___release_weak(v37);
              v36 = v38;
            }
            if ((*(_BYTE*)(v36 + 16) & 1) != 0 && *(_QWORD*)(v36 + 32) != 0) {
              v39 = 128;
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                v39 = 56;
              }
              nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v39);
            }
          }
          v40 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v40 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v40);
        }
      }
      v41 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 128, 16, 0);
      *(_QWORD*)(v41 + 16) = 0;
      v42 = v41;
      v43 = GameData_212d880;
      *(_QWORD*)(v41 + 56) = 0;
      *(_QWORD*)(v41 + 24) = 0;
      v44 = v41 + 24;
      *(_QWORD*)(v41 + 32) = 0;
      *(_QWORD*)(v41 + 40) = 0;
      *(_QWORD*)(v41 + 48) = v41 + 56;
      *(_QWORD*)(v41 + 64) = 0;
      *(_QWORD*)(v41 + 72) = 0;
      *(_QWORD*)(v41 + 80) = 0;
      *(_QWORD*)(v41 + 88) = 0;
      *(_QWORD*)(v41 + 96) = 0;
      *(_QWORD*)(v41 + 112) = 0;
      *(_QWORD*)(v41 + 120) = 0;
      *(_QWORD*)v41 = v43 + 16;
      *(_QWORD*)(v41 + 8) = 0;
      *(_DWORD*)(v41 + 104) = 1065353216;
      v45 = strlen(a4);
      if (v45 >= 0xFFFFFFFFFFFFFFF7LL) {
      LABEL_117:
        String_60a1d0(v45);
      }
      v46 = v45;
      if (v45 >= 0x17) {
        if ((v45 | 7) == 0x17) {
          v48 = 26;
        }
        else {
          v48 = (v45 | 7) + 1;
        }
        v47 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    v48, 16, 0);
        v70 = v46;
        v71 = v47;
        v69 = v48 | 1;
      }
      else {
        LOBYTE(v69) = 2 * v45;
        v47 = (char*)&v69 + 1;
        if (v45 == 0) {
          goto LABEL_73;
        }
      }
      memcpy(v47, a4, v46);
    LABEL_73:
      v47[v46] = 0;
      v72 = &v69;
      v49 = LayoutAccessor_1564440_alt1(a2 + 6, &v69, &v72);
      v50 = *(_QWORD*)(v49 + 48);
      *(_QWORD*)(v49 + 40) = v44;
      *(_QWORD*)(v49 + 48) = v42;
      if (v50 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
        std___1___shared_weak_count___release_weak(v50);
      }
      if ((v69 & 1) != 0 && v71 != nullptr) {
        v51 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v51 = 56;
        }
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v51);
      }
      v45 = strlen(a4);
      if (v45 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_117;
      }
      v52 = v45;
      if (v45 >= 0x17) {
        if ((v45 | 7) == 0x17) {
          v54 = 26;
        }
        else {
          v54 = (v45 | 7) + 1;
        }
        v53 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    v54, 16, 0);
        v70 = v52;
        v71 = v53;
        v69 = v54 | 1;
      }
      else {
        LOBYTE(v69) = 2 * v45;
        v53 = (char*)&v69 + 1;
        if (v45 == 0) {
          goto LABEL_90;
        }
      }
      memcpy(v53, a4, v52);
    LABEL_90:
      v53[v52] = 0;
      v72 = &v69;
      v55 = *(_QWORD*)(LayoutAccessor_1564440_alt1(a2 + 6, &v69, &v72) + 40);
      v56 = a2[1];
      v66 = 0;
      v67 = 0;
      if (v56 != 0 &&
          (v57 = std___1___shared_weak_count_lock(v56), v67 = v57, v57 != 0)) {
        v58 = v18[29];
        v59 = v57;
        v66 = *a2;
        ui_LayoutAccessor_Setup_155dea0(v55, &v66, v58);
        if (atomic_fetch_add((atomic_ullong* volatile)(v59 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
          std___1___shared_weak_count___release_weak(v59);
        }
      }
      else {
        ui_LayoutAccessor_Setup_155dea0(v55, &v66, v18[29]);
      }
      if ((v69 & 1) != 0 && v71 != nullptr) {
        v60 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v60 = 56;
        }
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v60);
      }
      v45 = strlen(a4);
      if (v45 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_117;
      }
      v61 = v45;
      if (v45 >= 0x17) {
        if ((v45 | 7) == 0x17) {
          v63 = 26;
        }
        else {
          v63 = (v45 | 7) + 1;
        }
        v62 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    v63, 16, 0);
        v70 = v61;
        v71 = v62;
        v69 = v63 | 1;
      }
      else {
        LOBYTE(v69) = 2 * v45;
        v62 = (char*)&v69 + 1;
        if (v45 == 0) {
          goto LABEL_109;
        }
      }
      memcpy(v62, a4, v61);
    LABEL_109:
      v62[v61] = 0;
      v72 = &v69;
      result = (__int64*)LayoutAccessor_1564440_alt1(a2 + 6, &v69, &v72);
      v64 = result[6];
      *a5 = result[5];
      a5[1] = v64;
      if (v64 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v64 + 16), 1u,
                                  memory_order_relaxed);
      }
      if ((v69 & 1) != 0 && v71 != nullptr) {
        v65 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v65 = 56;
        }
        {
          (__int64*)nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager +
                                                  v65);
          return;
        }
      }
      {
        result;
        return;
      }
    }
  }
  *a5 = 0;
  a5[1] = 0;
  {
    result;
    return;
  }
}

void LayoutAccessor_1560940(__int64* a1, __int64 a2)
{
  int v2;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _BOOL4 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64* v15;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  char v22;
  __int64* v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64** v28;
  __int64* v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64* v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64* v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _BOOL4 v48;
  __int64* v49;
  __int64 v50;
  __int64* v51;
  struct {
    __int64 v52;
    unsigned __int64 v53;
    __int64* v54;
  } v52_;
  struct {
    unsigned __int64 v55;
    char gap48_[8];
    char v56;
  } v55_;

  if (a1[2] == 0) {
    return;
  }
  v4 = a1[1];
  if (v4 == 0) {
    return;
  }
  v6 = std___1___shared_weak_count_lock(v4);
  if (v6 == 0) {
    goto LABEL_11;
  }
  v7 = *a1;
  if (*a1 != 0) {
    v2 = *(unsigned __int8*)(v7 + 24);
    v8 = v7 + 152;
    if (v2 == 0) {
      v8 = 0;
    }
    v9 = v8 != a1[2];
  }
  else {
    v9 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt1();
    if (v9) {
      goto LABEL_11;
    }
  LABEL_15:
    if ((v2 & 1) == 0) {
      return;
    }
    goto LABEL_16;
  }
  if (!v9) {
    goto LABEL_15;
  }
LABEL_11:
  v10 = a1[1];
  if (v10 == 0 || *(_QWORD*)(v10 + 8) == -1) {
    return;
  }
LABEL_16:
  v11 = a1[2];
  if (v11 != 0) {
    v12 = GameRoutine_155e4a0((__int64)a1, v11, a2);
    if (v12 != 0) {
      v13 = *(_QWORD**)(v12 + 24);
      v14 = (_QWORD*)v12;
      if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21f8028) != 0) {
        GameData_21f8020 =
            (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
        __cxa_guard_release(&GameData_21f8028);
      }
      if (v13 != nullptr) {
        v15 = (__int64*)(*(__int64 (**)(_QWORD*))(*v13 + 16LL))(v13);
        if (v15 == &GameData_21f8020) {
          goto LABEL_27;
        }
        do {
          v15 = (__int64*)*v15;
        } while (v15 != &GameData_21f8020 && v15 != nullptr);
        if (v15 != nullptr) {
        LABEL_27:
          v17 = strlen(a2);
          if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
            String_60a1d0_alt1();
          }
          v18 = v17;
          if (v17 >= 0x17) {
            if ((v17 | 7) == 0x17) {
              v20 = 26;
            }
            else {
              v20 = (v17 | 7) + 1;
            }
            v19 = (char*)fw_memory_HeapManager_Allocate_alt1(
                fw_memory_g_heap_manager, v20, 16, 0);
            v52_.v53 = v18;
            v52_.v54 = (__int64*)v19;
            v52_.v52 = v20 | 1;
          }
          else {
            LOBYTE(v52_.v52) = 2 * v17;
            v19 = (char*)&v52_.v52 + 1;
            if (v17 == 0) {
            LABEL_37:
              v19[v18] = 0;
              v21 = a1[7];
              v22 = v52_.v52;
              if (v21 != 0 && a1[9] != 0) {
                v23 = (v52_.v52 & 1) != 0 ? v52_.v54
                                          : (__int64*)((char*)&v52_.v52 + 1);
                v18 = (v52_.v52 & 1) != 0
                          ? v52_.v53
                          : (unsigned __int64)(unsigned __int8)v52_.v52 >> 1;
                v51 = v23;
                v24 = std___1___hash_memory(v23, v18);
                v25 = v21 - 1;
                v26 = v24;
                if ((v21 & (v21 - 1)) != 0) {
                  v27 = v24;
                  if (v24 >= v21) {
                    v27 = v24 % v21;
                  }
                }
                else {
                  v27 = v24 & v25;
                }
                v28 = *(__int64***)(a1[6] + 8 * v27);
                if (v28 != nullptr) {
                  v29 = *v28;
                  if (*v28 != nullptr) {
                    if ((v21 & v25) != 0) {
                      while (1) {
                        v30 = v29[1];
                        if (v30 == v26) {
                          v31 = *((unsigned __int8*)v29 + 16);
                          v32 = v29[3];
                          if ((v31 & 1) == 0) {
                            v32 = v31 >> 1;
                          }
                          if (v32 == v18) {
                            v33 = (v31 & 1) != 0 ? (__int64*)v29[4]
                                                 : (__int64*)((char*)v29 + 17);
                            if ((unsigned int)memcmp(v33, v51, v18) == 0) {
                              goto LABEL_76;
                            }
                          }
                        }
                        else {
                          if (v30 >= v21) {
                            v30 %= v21;
                          }
                          if (v30 != v27) {
                            goto LABEL_90;
                          }
                        }
                        v29 = (__int64*)*v29;
                        if (v29 == nullptr) {
                          goto LABEL_90;
                        }
                      }
                    }
                    do {
                      v34 = v29[1];
                      if (v34 == v26) {
                        v35 = *((unsigned __int8*)v29 + 16);
                        v36 = v29[3];
                        if ((v35 & 1) == 0) {
                          v36 = v35 >> 1;
                        }
                        if (v36 == v18) {
                          v37 = (v35 & 1) != 0 ? (__int64*)v29[4]
                                               : (__int64*)((char*)v29 + 17);
                          if ((unsigned int)memcmp(v37, v51, v18) == 0) {
                          LABEL_76:
                            GameRoutine_15642e0_alt1(
                                (void*)((__int64)&v55_.v55), a1 + 6, v29);
                            v38 = v55_.v55;
                            v55_.v55 = 0;
                            if (v38 != 0) {
                              if (v55_.v56 == 1) {
                                v39 = *(_QWORD*)(v38 + 48);
                                if (v39 != 0 &&
                                    atomic_fetch_add(
                                        (atomic_ullong* volatile)(v39 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
                                  v18 = v38;
                                  (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(
                                      v39);
                                  std___1___shared_weak_count___release_weak_alt1();
                                  v38 = v18;
                                }
                                if ((*(_BYTE*)(v38 + 16) & 1) != 0 &&
                                    *(_QWORD*)(v38 + 32) != 0) {
                                  v40 = 128;
                                  if (*(_QWORD*)(*(_QWORD*)
                                                     fw_memory_g_heap_manager_ptr +
                                                 200LL) == 0) {
                                    v40 = 56;
                                  }
                                  nn_mem_StandardAllocator_Free_alt1(
                                      *(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v40);
                                }
                              }
                              v41 = 128;
                              if (*(_QWORD*)(*(_QWORD*)
                                                 fw_memory_g_heap_manager_ptr +
                                             200LL) == 0) {
                                v41 = 56;
                              }
                              nn_mem_StandardAllocator_Free_alt1(
                                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v41);
                            }
                            v22 = v52_.v52;
                            break;
                          }
                        }
                      }
                      else if ((v34 & v25) != v27) {
                        break;
                      }
                      v29 = (__int64*)*v29;
                    } while (v29 != nullptr);
                  }
                }
              }
            LABEL_90:
              if ((v22 & 1) != 0 && v52_.v54 != nullptr) {
                v42 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v42 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v42);
              }
              Pane_58df60_alt1(*(_QWORD*)(v14[3] + 24LL), (_QWORD*)v14[3]);
              v43 = a1[2];
              if (v43 == 0) {
                goto LABEL_111;
              }
              v44 = a1[1];
              if (v44 != 0) {
                v45 = std___1___shared_weak_count_lock(v44);
                if (v45 == 0) {
                  goto LABEL_106;
                }
                v46 = *a1;
                if (*a1 != 0) {
                  LODWORD(v18) = *(unsigned __int8*)(v46 + 24);
                  v47 = v46 + 152;
                  if ((_DWORD)v18 == 0) {
                    v47 = 0;
                  }
                  v48 = v47 != a1[2];
                }
                else {
                  v48 = true;
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
                  std___1___shared_weak_count___release_weak_alt1();
                }
                if (!v48) {
                  if ((v18 & 1) != 0) {
                    goto LABEL_108;
                  }
                }
                else {
                LABEL_106:
                  v43 = a1[1];
                  if (v43 == 0) {
                  LABEL_111:
                    if (v13 + 27 != (_QWORD*)(v43 + 72)) {
                      v49 = (__int64*)v13[28];
                      v50 = *v49;
                      *(_QWORD*)(v13[27] + 8LL) = v49;
                      *v49 = v13[27];
                      *(_QWORD*)(v50 + 8) = v13 + 27;
                      v13[27] = v50;
                    }
                    Layout_579280(v14, *game_g_frame_clock_ptr[0] + 568);
                    (*(void (**)(_QWORD*))(*v14 + 8LL))(v14);
                    LayoutEx_5791a0((__int64)v14);
                    return;
                  }
                  if (*(_QWORD*)(v43 + 8) != -1) {
                  LABEL_108:
                    v43 = a1[2];
                    goto LABEL_111;
                  }
                }
              }
              v43 = 0;
              goto LABEL_111;
            }
          }
          memcpy(v19, a2, v18);
          goto LABEL_37;
        }
      }
    }
  }
}

__int64 LayoutAccessor_1562b50(__int64* a1, __int64 a2)
{
  int v2;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _BOOL4 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[2];

  if (a1[2] == 0) {
    return 0;
  }
  result = a1[1];
  if (result == 0) {
    return result;
  }
  v6 = std___1___shared_weak_count_lock(result);
  if (v6 != 0) {
    v7 = *a1;
    if (*a1 != 0) {
      v2 = *(unsigned __int8*)(v7 + 24);
      v8 = v7 + 152;
      if (v2 == 0) {
        v8 = 0;
      }
      v9 = v8 != a1[2];
    }
    else {
      v9 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (!v9) {
        goto LABEL_12;
      }
    }
    else {
      v10 = v6;
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v10);
      if (!v9) {
      LABEL_12:
        result = 0;
        if (a2 == 0) {
          return result;
        }
        goto LABEL_17;
      }
    }
  }
  v11 = a1[1];
  if (v11 == 0) {
    return 0;
  }
  LOBYTE(v2) = *(_QWORD*)(v11 + 8) != -1;
  result = 0;
  if (a2 == 0) {
    return result;
  }
LABEL_17:
  if ((v2 & 1) == 0) {
    return result;
  }
  v12 = a1[11];
  if (v12 != 0) {
    result = strlen(a2);
    v16[0] = a2;
    v16[1] = result;
    if (result == 0) {
      return result;
    }
    v13 = GameRoutine_9bea80(v12, v16);
  }
  else {
    v14 = std___1___shared_weak_count_lock(a1[1]);
    if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      v15 = v14;
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak(v15);
    }
    v13 = Layout_57b830(a1[2], a2);
  }
  return v13 != 0;
}

__int64 LayoutAccessor_1562ea0(__int64 a1, __int64 a2)
{
  LayoutAccessor_1562680(a1, a2, 1.0);
  GameRoutine_15638b0(a1, a2, 0);
  LayoutAccessor_1562f00(a1, a2);
  return LayoutAccessor_1563030(a1, a2, 0);
}

_QWORD* LayoutAccessor_1564440(float* a1, unsigned __int8* a2, __int64** a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  bool v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  _QWORD* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  _QWORD* v24;
  __int64* v25;
  _QWORD* v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  float v30;
  float v31;
  float v32;
  _BOOL8 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 primeEm;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64* v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  _QWORD* v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  _QWORD* v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  __int64 v60;
  unsigned __int64 v61;

  v4 = *a2;
  v7 = (v4 & 1) == 0;
  v8 = v4 >> 1;
  if (v7) {
    v9 = a2 + 1;
  }
  else {
    v9 = *((unsigned __int8**)a2 + 2);
  }
  if (v7) {
    v10 = v8;
  }
  else {
    v10 = *((_QWORD*)a2 + 1);
  }
  v11 = std___1___hash_memory(v9, v10);
  v12 = *((_QWORD*)a1 + 1);
  v13 = v11;
  if (v12 != 0) {
    v14 = v12 - 1;
    if ((v12 & (v12 - 1)) != 0) {
      v3 = v11;
      if (v11 >= v12) {
        v3 = v11 % v12;
      }
    }
    else {
      v3 = v14 & v11;
    }
    v15 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
    if (v15 != nullptr) {
      v16 = (_QWORD*)*v15;
      if (*v15 != 0) {
        if ((v12 & v14) == 0) {
          while (1) {
            v21 = v16[1];
            if (v21 == v13) {
              v22 = *((unsigned __int8*)v16 + 16);
              v23 = v16[3];
              if ((v22 & 1) == 0) {
                v23 = v22 >> 1;
              }
              if (v23 == v10) {
                v24 = (v22 & 1) != 0 ? (_QWORD*)v16[4]
                                     : (_QWORD*)((char*)v16 + 17);
                if ((unsigned int)memcmp(v24, v9, v10) == 0) {
                  return v16;
                }
              }
            }
            else if ((v21 & v14) != v3) {
              goto LABEL_41;
            }
            v16 = (_QWORD*)*v16;
            if (v16 == nullptr) {
              goto LABEL_41;
            }
          }
        }
        do {
          v17 = v16[1];
          if (v17 == v13) {
            v18 = *((unsigned __int8*)v16 + 16);
            v19 = v16[3];
            if ((v18 & 1) == 0) {
              v19 = v18 >> 1;
            }
            if (v19 == v10) {
              v20 =
                  (v18 & 1) != 0 ? (_QWORD*)v16[4] : (_QWORD*)((char*)v16 + 17);
              if ((unsigned int)memcmp(v20, v9, v10) == 0) {
                return v16;
              }
            }
          }
          else {
            if (v17 >= v12) {
              v17 %= v12;
            }
            if (v17 != v3) {
              break;
            }
          }
          v16 = (_QWORD*)*v16;
        } while (v16 != nullptr);
      }
    }
  }
LABEL_41:
  v25 = (__int64*)fw_memory_g_heap_manager_ptr;
  v26 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
  v27 = *a3;
  *v26 = 0;
  v26[1] = v13;
  v16 = v26;
  v28 = *v27;
  v29 = v27[2];
  v26[3] = v27[1];
  v26[4] = v29;
  v26[2] = v28;
  v27[1] = 0;
  v27[2] = 0;
  *v27 = 0;
  v26[5] = 0;
  v26[6] = 0;
  v30 = a1[8];
  v31 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v12 == 0 || (float)(v30 * (float)v12) < v31) {
    v32 = v31 / v30;
    v33 = true;
    if (v12 >= 3) {
      v33 = (v12 & (v12 - 1)) != 0;
    }
    v34 = v33 | (2 * v12);
    v35 = vcvtps_u64_f32(v32);
    if (v34 <= v35) {
      primeEm = v35;
    }
    else {
      primeEm = v34;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v37 = *((_QWORD*)a1 + 1);
    if (primeEm <= v37) {
      if (primeEm >= v37) {
        goto LABEL_102;
      }
      v43 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v37 < 3 || (v37 & (v37 - 1)) != 0) {
        v43 = std___1___next_prime(v43);
      }
      else {
        v44 = 1LL << -(char)__clz(v43 - 1);
        if (v43 >= 2) {
          v43 = v44;
        }
      }
      if (primeEm <= v43) {
        primeEm = v43;
      }
      if (primeEm >= v37) {
        goto LABEL_102;
      }
      if (primeEm == 0) {
        v56 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v56 != 0) {
          v57 = 128;
          if (*(_QWORD*)(*v25 + 200) == 0) {
            v57 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v25 + v57);
        }
        *((_QWORD*)a1 + 1) = 0;
        goto LABEL_102;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v38 = fw_memory_HeapManager_Allocate_alt1(*v25, 8 * primeEm, 16, 0);
    v39 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v38;
    if (v39 != 0) {
      v40 = 128;
      if (*(_QWORD*)(*v25 + 200) == 0) {
        v40 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v25 + v40);
    }
    v41 = primeEm & 7;
    *((_QWORD*)a1 + 1) = primeEm;
    if (primeEm >= 8) {
      v42 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 48) = 0;
        v45 = *(_QWORD*)a1 + 8 * v42;
        v42 += 8;
        *(_QWORD*)(v45 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v42);
    }
    else {
      v42 = 0;
    }
    if ((primeEm & 7) != 0) {
      v46 = 8 * v42;
      do {
        --v41;
        *(_QWORD*)(*(_QWORD*)a1 + v46) = 0;
        v46 += 8;
      } while (v41 != 0);
    }
    v48 = (__int64*)(a1 + 4);
    v47 = *((_QWORD**)a1 + 2);
    if (v47 != nullptr) {
      v49 = v47[1];
      v50 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v49 >= primeEm) {
          v49 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v49) = v48;
        v51 = (_QWORD*)*v47;
        if (*v47 == 0) {
          goto LABEL_102;
        }
        while (1) {
          v52 = v51[1];
          if (v52 >= primeEm) {
            v52 %= primeEm;
          }
          if (v52 != v49) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v52) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v52) = v47;
              goto LABEL_79;
            }
            *v47 = *v51;
            *v51 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v52);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v52) = v51;
            v51 = v47;
          }
          v52 = v49;
        LABEL_79:
          v47 = v51;
          v51 = (_QWORD*)*v51;
          v49 = v52;
          if (v51 == nullptr) {
            goto LABEL_102;
          }
        }
      }
      v53 = v49 & v50;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v53) = v48;
      while (1) {
        v54 = (_QWORD*)*v47;
        if (*v47 == 0) {
          break;
        }
        v55 = v54[1] & v50;
        if (v55 == v53) {
          v47 = (_QWORD*)*v47;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v55) != 0) {
          *v47 = *v54;
          *v54 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v55);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v55) = v54;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v55) = v47;
          v47 = v54;
          v53 = v55;
        }
      }
    }
  LABEL_102:
    v12 = *((_QWORD*)a1 + 1);
    if ((v12 & (v12 - 1)) != 0) {
      if (v13 >= v12) {
        v3 = v13 % v12;
      }
      else {
        v3 = v13;
      }
    }
    else {
      v3 = (v12 - 1) & v13;
    }
  }
  v58 = *(_QWORD*)a1;
  v59 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v59 != nullptr) {
    *v16 = *v59;
    *v59 = v16;
  }
  else {
    v60 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = v16;
    *v16 = v60;
    *(_QWORD*)(v58 + 8 * v3) = a1 + 4;
    if (*v16 != 0) {
      v61 = *(_QWORD*)(*v16 + 8LL);
      if ((v12 & (v12 - 1)) != 0) {
        if (v61 >= v12) {
          v61 %= v12;
        }
      }
      else {
        v61 &= v12 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v61) = v16;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return v16;
}

__int64 LayoutAccessor_1571860(__int64* a1, __int64 a2, char a3, char a4,
                               char a5, char a6)
{
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  int v42;
  __int64 v43;
  __int64 result;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  char v55;
  _BOOL4 v56;
  __int64 v57;
  __int64 v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64* v63;
  __int64 v64;
  __int64 v65;
  _BYTE* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64* v70;
  unsigned __int64 v71;
  int v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  const char* v80;
  __int64 v81;
  char v82;
  __int64 v83;
  __int64* v84;
  const char* v85;
  __int64 v86;
  __int64* v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  int v91;
  int v92;
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
  __int64 v103;
  __int64 v104;
  __int64 v105;
  char v106[12];

  if ((a6 & 1) != 0) {
    GameRoutine_1572370(a1, 0);
  }
  if (a2 != 0) {
    LayoutAccessor_1562cf0(a1, "Unit_On");
    v85 = "L_Name";
    v86 = 6;
    GameRoutine_15725c0((void*)(&v87), a1, &v85);
    if (v88 != 0) {
      v11 = std___1___shared_weak_count_lock(v88);
      v12 = v87;
      if (v88 != 0) {
        std___1___shared_weak_count___release_weak(v88);
      }
      if (v11 != 0 && v12 != nullptr) {
        UnitName_19ab4a0(v12, a2);
      LABEL_41:
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak(v11);
        }
      LABEL_43:
        v85 = "L_HPGroup";
        v86 = 9;
        GameRoutine_1572700((void*)(&v87), a1, &v85);
        if (v88 == 0) {
          goto LABEL_56;
        }
        v46 = std___1___shared_weak_count_lock(v88);
        v47 = v87;
        if (v88 != 0) {
          std___1___shared_weak_count___release_weak(v88);
        }
        if (v46 != 0 && v47 != nullptr) {
          v48 = *(_QWORD*)(a2 + 440);
          if (v48 != 0 && *(_BYTE*)(v48 + 16) == 5) {
            StatusHP_18922b0(v47);
          }
          else {
            StatusHP_18920d0(v47, a2, (a3 & 1) == 0);
          }
        }
        else if (v46 == 0) {
          goto LABEL_56;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
          std___1___shared_weak_count___release_weak(v46);
        }
      LABEL_56:
        v85 = "L_LvGroup";
        v86 = 9;
        GameRoutine_1572840((void*)(&v87), a1, &v85);
        if (v88 == 0) {
          goto LABEL_75;
        }
        v49 = std___1___shared_weak_count_lock(v88);
        v50 = v87;
        if (v88 != 0) {
          std___1___shared_weak_count___release_weak(v88);
        }
        if (v49 == 0 || v50 == nullptr) {
          if (v49 == 0) {
            goto LABEL_75;
          }
          goto LABEL_73;
        }
        StatusLV_18a30a0(v50, a2);
        if (*(unsigned __int8*)(a2 + 498) > 0x62u ||
            (v51 = *(_QWORD*)(a2 + 1744),
             v52 = (unsigned int)*game_g_shared_system_skills_ptr,
             v53 = *(_QWORD*)(a2 + 1752) - v51,
             LODWORD(v87) = *game_g_shared_system_skills_ptr & 0xFFF,
             ((v52 >> 5) & 0x7F) + 1 <= v53 >> 2) &&
                ((*(_DWORD*)(v51 + 4 * ((v52 >> 5) & 0x7F)) >> v52) & 1) != 0 &&
                (game_HasActiveSkill_843420(&v87, a2 + 1744) & 1) != 0 &&
                ((v54 = *(_QWORD*)(a2 + 440)) == 0
                     ? (v55 = 9)
                     : (v55 = *(_BYTE*)(v54 + 16)),
                 ((1 << v55) & 0xF1) != 0)) {
          v56 = false;
          v57 = v50[137];
          if (v57 == 0) {
            goto LABEL_73;
          }
          goto LABEL_72;
        }
        v81 = *(_QWORD*)(a2 + 440);
        if (v81 != 0) {
          v56 = (unsigned int)*(unsigned __int8*)(v81 + 16) - 4 < 0xFFFFFFFD;
          v57 = v50[137];
          if (v57 == 0) {
            goto LABEL_73;
          }
        }
        else {
          v56 = true;
          v57 = v50[137];
          if (v57 == 0) {
          LABEL_73:
            if (atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
              std___1___shared_weak_count___release_weak(v49);
            }
          LABEL_75:
            v85 = "L_ClassGroup";
            v86 = 12;
            GameRoutine_fa73c0((void*)(&v87), a1, &v85);
            if (v88 != 0) {
              v58 = std___1___shared_weak_count_lock(v88);
              v59 = v87;
              if (v88 != 0) {
                std___1___shared_weak_count___release_weak(v88);
              }
              if (v58 != 0 && v59 != nullptr) {
                GameRoutine_189d120(v59, a2, 1, 1, 0, 0, 1);
              }
              else if (v58 == 0) {
                goto LABEL_84;
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
                std___1___shared_weak_count___release_weak(v58);
              }
            }
          LABEL_84:
            v60 = Unit_6c8300(a2, a4 & 1);
            if (v60 == 0) {
              goto LABEL_100;
            }
            v61 = v60;
            v85 = "L_Clan";
            v86 = 6;
            GameRoutine_1572980((void*)(&v87), a1, &v85);
            if (v88 != 0) {
              v62 = std___1___shared_weak_count_lock(v88);
              v63 = v87;
              if (v88 != 0) {
                std___1___shared_weak_count___release_weak(v88);
              }
              if (v62 != 0 && v63 != nullptr) {
                AsyncLoadThumbImage_18ba690(v63, v61);
                goto LABEL_92;
              }
              if (v62 != 0) {
              LABEL_92:
                if (atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v62 + 16LL))(v62);
                  std___1___shared_weak_count___release_weak(v62);
                }
              }
            }
            ui_LayoutAccessor_SetPaneVisible(a1, "IconClan", 1);
            v64 = ui_LayoutAccessor_FindPane(a1, "IconClan");
            if (v64 != 0) {
              v65 = __dynamic_cast(v64, GameData_212d670[0],
                                   GameData_212d678[0], 0);
              if (v65 != 0) {
                v66 = *(_BYTE**)(v61 + 48);
                if (v66 != nullptr && *v66 != 0) {
                  v67 = v65;
                  if ((Manager_136afb0(ui_Manager_instance_ + 1264, 5) & 1) !=
                      0) {
                    Manager_136a920(ui_Manager_instance_ + 1264, v67, 0, 5,
                                    *(_QWORD*)(v61 + 48));
                  }
                }
              }
            }
          LABEL_100:
            ui_LayoutAccessor_SetPaneVisible(a1, "Face", 0);
            v68 = ui_LayoutAccessor_FindPane(a1, "Face");
            if (v68 != 0) {
              v68 = __dynamic_cast(v68, GameData_212d670[0],
                                   GameData_212d678[0], 0);
            }
            if ((GameRoutine_1840740(v68, 0, a2, 6, 1) & 1) != 0) {
              ui_LayoutAccessor_SetPaneVisible(a1, "Face", 1);
            }
            ui_LayoutAccessor_SetPaneVisible(a1, "T_Help", 0);
            LayoutAccessor_1560070((void*)(&v87), a1, (__int64)"L_Info00");
            if (v88 != 0) {
              v69 = std___1___shared_weak_count_lock(v88);
              v70 = v87;
              if (v88 != 0) {
                std___1___shared_weak_count___release_weak(v88);
              }
              if (v69 != 0 && v70 != nullptr) {
                v71 = *(_QWORD*)(a2 + 392);
                v87 = (__int64*)a2;
                v88 = v71;
                v72 = GameSituation_906c90(game_GameModeData_instance_ + 136,
                                           &v87);
                LayoutAccessor_155e830(v70, v72 != 0);
                if (v72 != 0) {
                  v93 = -1;
                  v94 = -1;
                  v95 = -1;
                  v96 = -1;
                  v73 = *msg_MessageManager_instance__ptr[0];
                  v97 = -1;
                  v98 = -1;
                  v99 = -1;
                  v100 = -1;
                  v101 = -1;
                  v102 = -1;
                  v103 = -1;
                  v104 = -1;
                  v87 = GameData_212e348 + 2;
                  v88 = 0xFFFF0001FFFF0000LL;
                  v89 = 0xFFFF0004FFFF0002LL;
                  v90 = 0xFFFF0006FFFF0005LL;
                  v105 = 8;
                  v91 = -65529;
                  v92 = -65528;
                  v74 = GameRoutine_a4dbe0(v73, "MID_Menu_Cause_DeadAlive", 0,
                                           &v87);
                  if (v74 != 0) {
                    v75 = v74;
                    v76 = ui_LayoutAccessor_FindTextBox(v70, "T_TxtState");
                    if (v76 != 0) {
                      GameRoutine_156c5d0(v76, v75, 0);
                    }
                  }
                  LayoutAccessor_1562cf0(v70, "Default");
                  LayoutAccessor_1562cf0(v70, "IconOff");
                  v77 = ui_LayoutAccessor_FindTextBox(v70, "T_TxtState");
                  if (v77 != 0) {
                    v78 = v77;
                    v79 = ui_LayoutAccessor_FindTextBox(v70, "T_TxtState");
                    if (v79 != 0) {
                      GameRoutine_190a0c0(&v87, &v85, v106, v79,
                                          *(_QWORD*)(v79 + 216));
                      v80 = v85;
                    }
                    else {
                      v80 = nullptr;
                    }
                    v82 = *(_BYTE*)(v78 + 88);
                    *(_QWORD*)(v78 + 80) = v80;
                    *(_BYTE*)(v78 + 88) = v82 | 0x10;
                  }
                  GameRoutine_1585290(v70, "A_Txt", &GameData_1ac6c8b);
                }
              }
              else if (v69 == 0) {
                goto LABEL_128;
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v69 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69);
                std___1___shared_weak_count___release_weak(v69);
              }
            }
          LABEL_128:
            LayoutAccessor_1560070((void*)(&v87), a1, (__int64)"L_Info01");
            if (v88 != 0) {
              v83 = std___1___shared_weak_count_lock(v88);
              v84 = v87;
              if (v88 != 0) {
                std___1___shared_weak_count___release_weak(v88);
              }
              if (v83 != 0 && v84 != nullptr) {
                LayoutAccessor_155e830(v84, 0);
                goto LABEL_135;
              }
              if (v83 != 0) {
              LABEL_135:
                if (atomic_fetch_add((atomic_ullong* volatile)(v83 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v83 + 16LL))(v83);
                  std___1___shared_weak_count___release_weak(v83);
                }
              }
            }
            result = ui_LayoutAccessor_FindAlignment(a1, "A_Info");
            if (result != 0) {
              return Alignment_56b600();
            }
            return result;
          }
        }
      LABEL_72:
        *(_BYTE*)(v57 + 88) = *(_BYTE*)(v57 + 88) & 0xFE | v56;
        ui_LayoutAccessor_SetPaneVisible(v50 + 11, "Border", !v56);
        goto LABEL_73;
      }
    }
    else {
      v11 = 0;
    }
    if (*(_BYTE*)(a2 + 2136) != 0) {
      v23 = game_97b2f0(a2 + 2104);
      if (v23 == 0) {
        goto LABEL_40;
      }
    }
    else {
      v23 = GameRoutine_67ed20(*(_QWORD*)(a2 + 392));
      if (v23 == 0) {
        goto LABEL_40;
      }
    }
    v45 = ui_LayoutAccessor_FindTextBox(a1, "L_Name/T_Txt");
    if (v45 != 0) {
      GameRoutine_156c5d0(v45, v23, 0);
    }
  LABEL_40:
    if (v11 == 0) {
      goto LABEL_43;
    }
    goto LABEL_41;
  }
  if ((a5 & 1) != 0) {
    LayoutAccessor_1562cf0(a1, "MaterialStock_On");
    v13 = msg_MessageManager_instance__ptr[0];
    v93 = -1;
    v94 = -1;
    v95 = -1;
    v96 = -1;
    v14 = *msg_MessageManager_instance__ptr[0];
    v97 = -1;
    v98 = -1;
    v99 = -1;
    v100 = -1;
    v101 = -1;
    v102 = -1;
    v103 = -1;
    v104 = -1;
    v89 = 0xFFFF0004FFFF0002LL;
    v90 = 0xFFFF0006FFFF0005LL;
    v91 = -65529;
    v92 = -65528;
    v15 = GameData_212e348 + 2;
    v87 = GameData_212e348 + 2;
    v88 = 0xFFFF0001FFFF0000LL;
    v105 = 8;
    v16 = GameRoutine_a4dbe0(v14, "MID_SysMenu_Material", 0, &v87);
    if (v16 != 0) {
      v17 = v16;
      v18 = ui_LayoutAccessor_FindTextBox(a1, "L_Name/T_Txt");
      if (v18 != 0) {
        GameRoutine_156c5d0(v18, v17, 0);
      }
    }
    v19 = *v13;
    v93 = -1;
    v94 = -1;
    v95 = -1;
    v96 = -1;
    v97 = -1;
    v98 = -1;
    v99 = -1;
    v100 = -1;
    v101 = -1;
    v102 = -1;
    v103 = -1;
    v104 = -1;
    v87 = v15;
    v88 = 0xFFFF0001FFFF0000LL;
    v89 = 0xFFFF0004FFFF0002LL;
    v90 = 0xFFFF0006FFFF0005LL;
    v105 = 8;
    v91 = -65529;
    v92 = -65528;
    v20 = GameRoutine_a4dbe0(v19, "MID_Shop_Material_Help", 0, &v87);
    if (v20 != 0) {
      v21 = v20;
      v22 = ui_LayoutAccessor_FindTextBox(a1, "T_Help");
      if (v22 != 0) {
        GameRoutine_156c5d0(v22, v21, 0);
      }
    }
  }
  else {
    LayoutAccessor_1562cf0(a1, "Stock_On");
    v24 = msg_MessageManager_instance__ptr[0];
    v93 = -1;
    v94 = -1;
    v95 = -1;
    v96 = -1;
    v25 = *msg_MessageManager_instance__ptr[0];
    v97 = -1;
    v98 = -1;
    v99 = -1;
    v100 = -1;
    v101 = -1;
    v102 = -1;
    v103 = -1;
    v104 = -1;
    v89 = 0xFFFF0004FFFF0002LL;
    v90 = 0xFFFF0006FFFF0005LL;
    v91 = -65529;
    v92 = -65528;
    v26 = GameData_212e348 + 2;
    v87 = GameData_212e348 + 2;
    v88 = 0xFFFF0001FFFF0000LL;
    v105 = 8;
    v27 = GameRoutine_a4dbe0(v25, "MID_BtlMenu_Transport", 0, &v87);
    if (v27 != 0) {
      v28 = v27;
      v29 = ui_LayoutAccessor_FindTextBox(a1, "L_Name/T_Txt");
      if (v29 != 0) {
        GameRoutine_156c5d0(v29, v28, 0);
      }
    }
    v30 = *v24;
    v93 = -1;
    v94 = -1;
    v95 = -1;
    v96 = -1;
    v97 = -1;
    v98 = -1;
    v99 = -1;
    v100 = -1;
    v101 = -1;
    v102 = -1;
    v103 = -1;
    v104 = -1;
    v87 = v26;
    v88 = 0xFFFF0001FFFF0000LL;
    v89 = 0xFFFF0004FFFF0002LL;
    v90 = 0xFFFF0006FFFF0005LL;
    v105 = 8;
    v91 = -65529;
    v92 = -65528;
    v31 = GameRoutine_a4dbe0(v30, "MID_Shop_Transport_Help", 0, &v87);
    if (v31 != 0) {
      v32 = v31;
      v33 = ui_LayoutAccessor_FindTextBox(a1, "T_Help");
      if (v33 != 0) {
        GameRoutine_156c5d0(v33, v32, 0);
      }
    }
    v34 =
        *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL);
    v35 = *(_DWORD*)(v34 + 72);
    v36 = *(_DWORD*)(v34 + 84);
    v37 = game_util_Format("%d", v35);
    v38 = ui_LayoutAccessor_FindTextBox(a1, "T_MaxNum");
    if (v38 != 0) {
      GameRoutine_156c5d0(v38, v37, 0);
    }
    v39 = game_util_Format("%d", v36);
    v40 = ui_LayoutAccessor_FindTextBox(a1, "T_Num");
    if (v40 != 0) {
      GameRoutine_156c5d0(v40, v39, 0);
    }
    v41 = (char*)GameData_212da30 + 60;
    if (v36 < v35) {
      v41 = (char*)GameData_212da30 + 36;
    }
    v42 = *(_DWORD*)v41;
    if (ui_LayoutAccessor_FindTextBox(a1, "T_Num") != 0) {
      v43 = Pane_58f8a0();
      if (v43 != 0) {
        *(_DWORD*)(v43 + 12) = v42;
      }
    }
  }
  return ui_LayoutAccessor_SetPaneVisible(a1, "T_Help", 1);
}

void LayoutAccessor_1572ac0(__int64* a1, __int64 a2, char a3, char a4)
{
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64* v12;
  int v13;
  unsigned int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 (***v25)();
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  struct {
    __int64 (**v41)();
    __int64* v42;
    int* v43;
    int v44;
    char gap60_[4];
    __int64 (***v45)();
    __int64 v46;
    __int64 v47;
    int v48;
  } v41_;
  struct {
    __int64 v49;
    __int64 v50;
  } v49_;
  __int64 v51[2];
  int v52;

  LayoutAccessor_1571860(a1, a2, 0, 0, a3, a4);
  if (a2 == 0) {
    return;
  }
  GameHr_15730d0((__int64)a1, (_QWORD*)a2);
  v51[0] = (__int64)"L_OverBlaze";
  v51[1] = 11;
  GameRoutine_1573280_alt1((void*)(&v41_.v41), a1, v51);
  if (v41_.v42 != nullptr) {
    v6 = std___1___shared_weak_count_lock_alt1((__int64)v41_.v42);
    v7 = (__int64*)v41_.v41;
    if (v41_.v42 != nullptr) {
      std___1___shared_weak_count___release_weak_alt2((__int64)v41_.v42);
    }
    if (v6 != 0 && v7 != nullptr) {
      GameRoutine_18c9b10_alt1(v7, a2, -1);
    }
    else if (v6 == 0) {
      goto LABEL_11;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt2(v6);
    }
  }
LABEL_11:
  LayoutAccessor_1560070_alt1((void*)(&v49_.v49), a1, "L_HPStock");
  if (v49_.v50 != 0) {
    v8 = std___1___shared_weak_count_lock_alt1(v49_.v50);
    if (v8 != 0) {
      v9 = v8;
      if (v49_.v49 != 0) {
        game_gameui_SetHpStock_alt1(v49_.v49, a2);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak_alt2(v9);
      }
    }
    if (v49_.v50 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v49_.v50);
    }
  }
  v51[0] = (__int64)"L_Move";
  v51[1] = 6;
  GameRoutine_15733c0_alt1((void*)(&v41_.v41), a1, v51);
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v41_.v42 != nullptr) {
    v11 = std___1___shared_weak_count_lock_alt1((__int64)v41_.v42);
    v12 = (__int64*)v41_.v41;
    if (v41_.v42 != nullptr) {
      std___1___shared_weak_count___release_weak_alt2((__int64)v41_.v42);
    }
    if (v11 != 0 && v12 != nullptr) {
      LOBYTE(v41_.v41) = 10;
      v13 = game_Unit_GetParamLimit_alt1((_QWORD*)a2,
                                         (unsigned __int8*)&v41_.v41);
      LOBYTE(v41_.v41) = 10;
      v14 = game_Unit_GetParam_alt1(a2);
      if ((game_Unit_IsImmobile_alt1(a2) & 1) != 0 &&
          (*(_BYTE*)(a2 + 416) & 4) == 0 && (v15 = *(_QWORD*)(a2 + 392)) != 0 &&
          (v16 = *(unsigned __int16*)(v15 + 470),
           (v17 = game_Unit_GetJob_alt1(a2)) != 0)) {
        if (v16 == 0) {
          LOWORD(v16) = *(_WORD*)(v17 + 308);
        }
        v18 = *(__int16*)(v17 + 330) + (__int16)v16;
      }
      else {
        LOBYTE(v41_.v41) = 10;
        v19 = game_Unit_GetJob_alt1(a2);
        v18 = UnitParams_6dd470_alt1(a2, &v41_.v41, v19, 0);
      }
      v41_.v45 = nullptr;
      v41_.v46 = 0;
      v41_.v47 = 0;
      v41_.v48 = 0;
      v41_.v43 = (int*)__PAIR64__(v18, v14);
      v41_.v44 = v13;
      LODWORD(v41_.v41) = 37;
      WORD2(v41_.v41) = 1;
      LODWORD(v41_.v42) = -1;
      GameRoutine_188df50_alt1(v12, (unsigned int*)&v41_.v41, 1, 0);
      v20 = (__int64)v41_.v45;
      v12[142] = a2;
      if (v20 != 0) {
        v21 = *v10;
        v41_.v46 = v20;
        v22 = 128;
        if (*(_QWORD*)(v21 + 200) == 0) {
          v22 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(v21 + v22, v20);
      }
    }
    else if (v11 == 0) {
      goto LABEL_40;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak_alt2(v11);
    }
  }
LABEL_40:
  v51[0] = (__int64)"L_Physique";
  v51[1] = 10;
  GameRoutine_15733c0_alt1((void*)(&v41_.v41), a1, v51);
  if (v41_.v42 != nullptr) {
    v23 = std___1___shared_weak_count_lock_alt1((__int64)v41_.v42);
    v24 = (__int64)v41_.v41;
    if (v41_.v42 != nullptr) {
      std___1___shared_weak_count___release_weak_alt2((__int64)v41_.v42);
    }
    if (v23 != 0 && v24 != 0) {
      StatusItem_188e530_alt1(v24, a2);
    }
    else if (v23 == 0) {
      goto LABEL_49;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
      std___1___shared_weak_count___release_weak_alt2(v23);
    }
  }
LABEL_49:
  v25 = &v41_.v41;
  v51[0] = (__int64)a1;
  v52 = 0;
  v41_.v41 = GameData_204d478;
  v41_.v42 = v51;
  v41_.v45 = &v41_.v41;
  v41_.v43 = &v52;
  if ((*(_BYTE*)(a2 + 1825) & 1) == 0) {
  LABEL_60:
    v32 = 4;
    goto LABEL_61;
  }
  v26 = *(_QWORD*)(a2 + 1784);
  v27 = *(_QWORD*)(a2 + 1776);
  if ((int)((unsigned __int64)(v26 - v27) >> 2) < 1) {
    v25 = &v41_.v41;
    goto LABEL_60;
  }
  v28 = 0;
  v29 = 0;
  v30 = GameData_212c880[0];
  v31 = *GameData_212c880[0];
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v31 + 64) +
                             8LL * (*(_DWORD*)(v27 + v28) & 0xFFF)) +
                  104LL) == 8) {
      if (v41_.v45 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      ((void (*)(__int64 (***)(void), __int64))(*v41_.v45)[6])(v41_.v45,
                                                               v27 + v28);
      v31 = *v30;
      v26 = *(_QWORD*)(a2 + 1784);
      v27 = *(_QWORD*)(a2 + 1776);
    }
    ++v29;
    v28 += 4;
  } while (v29 < (int)((unsigned __int64)(v26 - v27) >> 2));
  v25 = v41_.v45;
  if (v41_.v45 == &v41_.v41) {
    goto LABEL_60;
  }
  if (v41_.v45 != nullptr) {
    v32 = 5;
  LABEL_61:
    ((__int64 (*)(__int64))(*v25)[v32])((__int64)v25);
  }
  v33 = v52;
  if (v52 <= 2) {
    do {
      GameRoutine_15735c0_alt1(v51, v33, &GameData_1b47d74);
      v34 = v52;
      v33 = ++v52;
    } while (v34 < 2);
  }
  v51[0] = (__int64)"L_IconLegion";
  v51[1] = 12;
  GameRoutine_15736e0_alt1((void*)(&v41_.v41), a1, v51);
  if (v41_.v42 != nullptr) {
    v35 = std___1___shared_weak_count_lock_alt1((__int64)v41_.v42);
    v36 = (__int64)v41_.v41;
    if (v41_.v42 != nullptr) {
      std___1___shared_weak_count___release_weak_alt2((__int64)v41_.v42);
    }
    if (v35 != 0 && v36 != 0) {
      *(_QWORD*)(v36 + 1104) = 0;
      *(_QWORD*)(v36 + 1096) = 0;
      *(_QWORD*)(v36 + 1088) = a2;
      *(_BYTE*)(v36 + 1112) = 1;
      if (!IconLegion_19abe40_alt1(v36, a2) &&
          !GameRoutine_19abf80_alt1(v36, *(_QWORD*)(v36 + 1088))) {
        v37 = *(_QWORD*)v36;
        *(_QWORD*)(v36 + 1088) = 0;
        (*(void (**)(__int64, _QWORD))(v37 + 40))(v36, 0);
      }
    }
    else if (v35 == 0) {
      goto LABEL_75;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
      std___1___shared_weak_count___release_weak_alt2(v35);
    }
  }
LABEL_75:
  v38 = fw_memory_HeapManager_Allocate_alt1(*v10, 16, 16, 0);
  v51[0] = a2;
  v41_.v45 = &v41_.v41;
  *(_QWORD*)v38 = 0xA00000000LL;
  *(_QWORD*)(v38 + 8) = 0x100000000FLL;
  v41_.v41 = GameData_204e798;
  v41_.v42 = v51;
  GameHr_1586d80(a1, (_DWORD*)v38, (_DWORD*)(v38 + 16), (__int64)&v41_.v41, 1,
                 0, 0, a2, 0, 0, 0);
  if (v41_.v45 == &v41_.v41) {
    v39 = 4;
    goto LABEL_79;
  }
  if (v41_.v45 != nullptr) {
    v39 = 5;
  LABEL_79:
    ((__int64 (*)(__int64))(*v41_.v45)[v39])((__int64)v41_.v45);
  }
  v40 = 128;
  if (*(_QWORD*)(*v10 + 200) == 0) {
    v40 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*v10 + v40, v38);
}

__int64 LayoutAccessor_1573500(__int64 a1, char a2, char a3)
{
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v10;
  char v11[4];

  if ((game_Unit_IsImmobile(a1) & 1) != 0 && (*(_BYTE*)(a1 + 416) & 4) == 0 &&
      (v6 = *(_QWORD*)(a1 + 392)) != 0 &&
      (v7 = *(unsigned __int16*)(v6 + 470), (v8 = game_Unit_GetJob(a1)) != 0)) {
    if (v7 != 0) {
      if ((a2 & 1) != 0) {
        return 0;
      }
    }
    else {
      LOWORD(v7) = *(_WORD*)(v8 + 308);
      if ((a2 & 1) != 0) {
        return 0;
      }
    }
    return (unsigned int)(*(__int16*)(v8 + 330) + (__int16)v7);
  }
  else {
    v11[0] = 10;
    if ((a2 & 1) != 0) {
      v10 = 0;
    }
    else {
      v10 = game_Unit_GetJob(a1);
    }
    return UnitParams_6dd470(a1, v11, v10, (a3 & 1) == 0);
  }
}

__attribute__((swiftcall)) void LayoutAccessor_1837560(PSEUDO_X8 x8_,
                                                       __int64* a1, __int64* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  int v16;
  __int64 v17;
  __int64 v18;
  struct {
    __int64 v19;
    __int64 v20;
  } v19_;
  struct {
    __int64 v21;
    __int64 v22;
  } v21_;
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;

  result = a1[1];
  if (result == 0) {
    goto LABEL_33;
  }
  result = std___1___shared_weak_count_lock_alt1(result);
  if (result == 0) {
    goto LABEL_33;
  }
  v7 = *a1;
  v8 = result;
  if (*a1 != 0 &&
      (result = ui_LayoutAccessor_GetPartsLayout_alt1(a1, *a2)) != 0) {
    v9 = *(_QWORD*)(result + 24);
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)GameData_212dfd0) != 0) {
      *GameData_212dfc8 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
      __cxa_guard_release_alt1((__int64)GameData_212dfd0);
    }
    if (v9 == 0) {
      goto LABEL_14;
    }
    v10 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    if (v10 != GameData_212dfc8) {
      do {
        v10 = (__int64*)*v10;
      } while (v10 != GameData_212dfc8 && v10 != nullptr);
      if (v10 == nullptr) {
      LABEL_14:
        v9 = 0;
      }
    }
    Layout_1363f00_alt1((void*)(&v19_.v19), v7, v9);
    v21_.v21 = 0;
    v21_.v22 = 0;
    if (v19_.v20 != 0 &&
        (v12 = std___1___shared_weak_count_lock_alt1(v19_.v20), v21_.v22 = v12,
         v12 != 0) &&
        (v21_.v21 = v19_.v19, v19_.v19 != 0) &&
        (v13 = v12, (v14 = __dynamic_cast(v19_.v19, GameData_212dfc0[0],
                                          GameData_2132000[0], 0)) != 0)) {
      v15 = &v21_.v21;
      v23_.v23 = v14;
      v23_.v24 = v13;
    }
    else {
      v15 = &v23_.v23;
    }
    *v15 = 0;
    v15[1] = 0;
    v17 = v23_.v24;
    *a3 = v23_.v23;
    a3[1] = v17;
    if (v17 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        std___1___shared_weak_count___release_weak_alt2(v17);
      }
    }
    v18 = v21_.v22;
    if (v21_.v22 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v21_.v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      std___1___shared_weak_count___release_weak_alt2(v18);
    }
    result = v19_.v20;
    if (v19_.v20 != 0) {
      result = std___1___shared_weak_count___release_weak_alt2(v19_.v20);
    }
    v16 = 0;
  }
  else {
    v16 = 1;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v16 == 0) {
      result;
      return;
    }
    goto LABEL_33;
  }
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  result = std___1___shared_weak_count___release_weak_alt2(v8);
  if (v16 != 0) {
  LABEL_33:
    *a3 = 0;
    a3[1] = 0;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void LayoutAccessor_1839200(PSEUDO_X8 x8_,
                                                       __int64* a1, __int64* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  int v16;
  __int64 v17;
  __int64 v18;
  struct {
    __int64 v19;
    __int64 v20;
  } v19_;
  struct {
    __int64 v21;
    __int64 v22;
  } v21_;
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;

  result = a1[1];
  if (result == 0) {
    goto LABEL_33;
  }
  result = std___1___shared_weak_count_lock_alt1(result);
  if (result == 0) {
    goto LABEL_33;
  }
  v7 = *a1;
  v8 = result;
  if (*a1 != 0 &&
      (result = ui_LayoutAccessor_GetPartsLayout_alt1(a1, *a2)) != 0) {
    v9 = *(_QWORD*)(result + 24);
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)GameData_212dfd0) != 0) {
      *GameData_212dfc8 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
      __cxa_guard_release_alt1((__int64)GameData_212dfd0);
    }
    if (v9 == 0) {
      goto LABEL_14;
    }
    v10 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    if (v10 != GameData_212dfc8) {
      do {
        v10 = (__int64*)*v10;
      } while (v10 != GameData_212dfc8 && v10 != nullptr);
      if (v10 == nullptr) {
      LABEL_14:
        v9 = 0;
      }
    }
    Layout_1363f00_alt1((void*)(&v19_.v19), v7, v9);
    v21_.v21 = 0;
    v21_.v22 = 0;
    if (v19_.v20 != 0 &&
        (v12 = std___1___shared_weak_count_lock_alt1(v19_.v20), v21_.v22 = v12,
         v12 != 0) &&
        (v21_.v21 = v19_.v19, v19_.v19 != 0) &&
        (v13 = v12, (v14 = __dynamic_cast(v19_.v19, GameData_212dfc0[0],
                                          GameData_2132008[0], 0)) != 0)) {
      v15 = &v21_.v21;
      v23_.v23 = v14;
      v23_.v24 = v13;
    }
    else {
      v15 = &v23_.v23;
    }
    *v15 = 0;
    v15[1] = 0;
    v17 = v23_.v24;
    *a3 = v23_.v23;
    a3[1] = v17;
    if (v17 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        std___1___shared_weak_count___release_weak_alt2(v17);
      }
    }
    v18 = v21_.v22;
    if (v21_.v22 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v21_.v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      std___1___shared_weak_count___release_weak_alt2(v18);
    }
    result = v19_.v20;
    if (v19_.v20 != 0) {
      result = std___1___shared_weak_count___release_weak_alt2(v19_.v20);
    }
    v16 = 0;
  }
  else {
    v16 = 1;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v16 == 0) {
      result;
      return;
    }
    goto LABEL_33;
  }
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  result = std___1___shared_weak_count___release_weak_alt2(v8);
  if (v16 != 0) {
  LABEL_33:
    *a3 = 0;
    a3[1] = 0;
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
