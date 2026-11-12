#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_21319a0;
extern __int64* GameData_2132090[4];
__int64
game_gameui_control_HelpGroup_HasTargetElement_lambda0_Invoke(__int64 a1,
                                                              __int64* a2);
__int64 Element_1884860(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_576740(_QWORD, _QWORD);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 Pane_58fac0(_QWORD, _QWORD);
extern __int64 (*Element_1888840_ptr[])();
extern __int64 (*GameData_2105488[])();
extern __int64 (*GameData_21054b0[])();
extern __int64 (*GameData_2105668[])();
extern __int64 (*game_gameui_control_HelpGroup_vtable[])();
__attribute__((swiftcall)) void HelpGroup_18b3f00(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2, __int64 a3);
_QWORD* ui_control_1886790(_QWORD* result);
__attribute__((swiftcall)) void GameRoutine_15b71b0(PSEUDO_X8, unsigned __int64,
                                                    __int64);
__int64 Element_1885f00(__int64 result, __int64);
__int64 FloatingHelp_18ade60(_QWORD*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64 (*GameData_2105728[])();
extern __int64* GameData_2131a70[10];
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_1618240();
void __attribute__((noreturn)) GameRoutine_60a210();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_gameui_control_HelpGroup_CalcCenterPosition(__int64 a1,
                                                         __int64 (**a2)(),
                                                         __int128* a3);

__int64 game_gameui_control_HelpGroup_CalcCenterPosition(__int64 a1,
                                                         __int64 (**a2)(),
                                                         __int128* a3)
{

#pragma clang fp contract(off)
  unsigned __int64* v3;
  __int64 result;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  _QWORD* v27;
  float v28;
  float v29;
  float v30;
  __int64 v31;
  __int64 v32;
  __int64 (**v33)();
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 (**v36)();
  __int128* v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 (**v47)();
  __int128* v48;
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
  struct {
    __int64 v59;
    __int64 v60;
  } v59_;
  struct {
    __int64 (**v61)();
    __int64 v62;
  } v61_;
  struct {
    __int64 (**v63)();
    __int128* v64;
  } v63_;
  struct {
    __int64 (**v65)();
    __int128* v66;
    int* v67;
    char gap72_[8];
    __int64 (***v68)();
  } v65_;
  int v69;
  __int128 v70;

  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s2", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s2", "=w"));
  v3 = *(unsigned __int64**)a1;
  v63_.v63 = a2;
  v63_.v64 = a3;
  result = v3[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result),
    v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
    v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s2", "=w")),
    v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
    v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s2", "=w"));
    if (result != 0) {
      v6 = *v3;
      v7 = result;
      if (v6 != 0) {
        result =
            X8CALL_X0(__int64, GameRoutine_15b71b0((void*)((__int64*)&v61_.v61),
                                                   v6, (__int64)&v63_.v63)),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s2", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s2", "=w"));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v6 == 0) {
          return result;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s2", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s2", "=w"));
        result = std___1___shared_weak_count___release_weak_alt1(v7),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s2", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s2", "=w"));
        if (v6 == 0) {
          return result;
        }
      }
      result = v61_.v62;
      if (v61_.v62 != 0) {
        if (*(_QWORD*)(v61_.v62 + 8) == -1) {
          return std___1___shared_weak_count___release_weak_alt1(result);
        }
        v65_.v65 = nullptr;
        v8 = std___1___shared_weak_count_lock(v61_.v62),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s2", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s2", "=w"));
        v65_.v66 = (__int128*)v8;
        if (v8 != 0) {
          v9 = v8;
          v65_.v65 = v61_.v61;
          v10 = FloatingHelp_18ade60(&v65_.v65),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s2", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s2", "=w"));
          if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9),
                v21 = COERCE_AS(__typeof__(v21),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v25 = COERCE_AS(__typeof__(v25),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v29 = COERCE_AS(__typeof__(v29),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v30 = COERCE_AS(__typeof__(v30),
                                PSEUDO_REGISTER(float, "s2", "=w"));
            std___1___shared_weak_count___release_weak_alt1(v9),
                v21 = COERCE_AS(__typeof__(v21),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v25 = COERCE_AS(__typeof__(v25),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v29 = COERCE_AS(__typeof__(v29),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v30 = COERCE_AS(__typeof__(v30),
                                PSEUDO_REGISTER(float, "s2", "=w"));
          }
          result = v61_.v62;
          if ((v10 & 1) == 0) {
          LABEL_67:
            if (result == 0) {
              return result;
            }
            return std___1___shared_weak_count___release_weak_alt1(result);
          }
        }
        else {
          v11 = FloatingHelp_18ade60(&v65_.v65),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s2", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s2", "=w"));
          result = v61_.v62;
          if ((v11 & 1) == 0) {
            goto LABEL_67;
          }
        }
        v65_.v65 = nullptr;
        v65_.v66 = nullptr;
        if (result != 0 &&
            (v12 = std___1___shared_weak_count_lock(result),
             v65_.v66 = (__int128*)v12, v12 != 0) &&
            (v65_.v65 = v61_.v61, v61_.v61 != nullptr) &&
            (v13 = v12, (v14 = __dynamic_cast(v61_.v61, GameData_21319a0,
                                              GameData_2131a70[0], 0)) != 0)) {
          v15 = (__int64*)&v65_.v65;
          v59_.v59 = v14;
          v59_.v60 = v13;
        }
        else {
          v15 = &v59_.v59;
        }
        *v15 = 0;
        v15[1] = 0;
        v16 = (__int64)v65_.v66;
        if (v65_.v66 != nullptr &&
            atomic_fetch_add((atomic_ullong* volatile)((char*)v65_.v66 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s2", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v16),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s2", "=w"));
        }
        v17 = v59_.v59;
        if (v59_.v59 == 0) {
          if (v61_.v62 != 0) {
            v19 = std___1___shared_weak_count_lock(v61_.v62),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s2", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s2", "=w"));
            if (v19 != 0) {
              v20 = v19;
              ui_control_1886790(v61_.v61),
                  v21 = COERCE_AS(__typeof__(v21),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v25 = COERCE_AS(__typeof__(v25),
                                  PSEUDO_REGISTER(float, "s2", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v29 = COERCE_AS(__typeof__(v29),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v30 = COERCE_AS(__typeof__(v30),
                                  PSEUDO_REGISTER(float, "s2", "=w"));
              v22 = v21;
              v24 = v23;
              v26 = v25;
              if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20),
                    v21 = COERCE_AS(__typeof__(v21),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v25 = COERCE_AS(__typeof__(v25),
                                    PSEUDO_REGISTER(float, "s2", "=w")),
                    v28 = COERCE_AS(__typeof__(v28),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v29 = COERCE_AS(__typeof__(v29),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v30 = COERCE_AS(__typeof__(v30),
                                    PSEUDO_REGISTER(float, "s2", "=w"));
                std___1___shared_weak_count___release_weak_alt1(v20),
                    v21 = COERCE_AS(__typeof__(v21),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v25 = COERCE_AS(__typeof__(v25),
                                    PSEUDO_REGISTER(float, "s2", "=w")),
                    v28 = COERCE_AS(__typeof__(v28),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v29 = COERCE_AS(__typeof__(v29),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v30 = COERCE_AS(__typeof__(v30),
                                    PSEUDO_REGISTER(float, "s2", "=w"));
              }
              goto LABEL_41;
            }
          }
          v27 = nullptr;
          goto LABEL_40;
        }
        v70 = (__typeof__(v70)){0};
        v69 = 0;
        v65_.v65 = GameData_2105728;
        v65_.v66 = &v70;
        v65_.v68 = &v65_.v65;
        v65_.v67 = &v69;
        Element_1885f00(v59_.v59, (__int64)&v65_.v65),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s2", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s2", "=w"));
        if (v65_.v68 == &v65_.v65) {
          v18 = 4;
        }
        else {
          if (v65_.v68 == nullptr) {
          LABEL_36:
            if (v69 != 0) {
              v22 = *(float*)&v70 / (float)v69;
              v24 = *((float*)&v70 + 1) / (float)v69;
              v26 = *((float*)&v70 + 2) / (float)v69;
              goto LABEL_41;
            }
            v27 = (_QWORD*)v17;
          LABEL_40:
            ui_control_1886790(v27),
                v21 = COERCE_AS(__typeof__(v21),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v25 = COERCE_AS(__typeof__(v25),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v29 = COERCE_AS(__typeof__(v29),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v30 = COERCE_AS(__typeof__(v30),
                                PSEUDO_REGISTER(float, "s2", "=w"));
            v22 = v28;
            v24 = v29;
            v26 = v30;
          LABEL_41:
            v31 = v59_.v60;
            if (v59_.v60 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v59_.v60 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31),
                  v21 = COERCE_AS(__typeof__(v21),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v25 = COERCE_AS(__typeof__(v25),
                                  PSEUDO_REGISTER(float, "s2", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v29 = COERCE_AS(__typeof__(v29),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v30 = COERCE_AS(__typeof__(v30),
                                  PSEUDO_REGISTER(float, "s2", "=w"));
              std___1___shared_weak_count___release_weak_alt1(v31),
                  v21 = COERCE_AS(__typeof__(v21),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v25 = COERCE_AS(__typeof__(v25),
                                  PSEUDO_REGISTER(float, "s2", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v29 = COERCE_AS(__typeof__(v29),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v30 = COERCE_AS(__typeof__(v30),
                                  PSEUDO_REGISTER(float, "s2", "=w"));
            }
            v33 = v61_.v61;
            v32 = v61_.v62;
            v65_.v65 = v63_.v63;
            v65_.v66 = v63_.v64;
            if (v61_.v62 != 0) {
              atomic_fetch_add_explicit(
                  (atomic_ullong* volatile)(v61_.v62 + 16), 1u,
                  memory_order_relaxed);
            }
            v34 = *(_QWORD*)(a1 + 24);
            v35 = *(_QWORD*)(a1 + 32);
            if (v34 >= v35) {
              v39 = *(_QWORD*)(a1 + 16);
              v40 = v34 - v39;
              v41 = 1 - 0x5555555555555555LL * ((__int64)(v34 - v39) >> 4);
              if (v41 > 0x555555555555555LL) {
                GameRoutine_1618240(),
                    v21 = COERCE_AS(__typeof__(v21),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v25 = COERCE_AS(__typeof__(v25),
                                    PSEUDO_REGISTER(float, "s2", "=w")),
                    v28 = COERCE_AS(__typeof__(v28),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v29 = COERCE_AS(__typeof__(v29),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v30 = COERCE_AS(__typeof__(v30),
                                    PSEUDO_REGISTER(float, "s2", "=w"));
              }
              v42 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v35 - v39) >> 4);
              if (2 * v42 > v41) {
                v41 = 2 * v42;
              }
              if (v42 >= 0x2AAAAAAAAAAAAAALL) {
                v41 = 0x555555555555555LL;
              }
              if (v41 > 0x555555555555555LL) {
                GameRoutine_60a210(),
                    v21 = COERCE_AS(__typeof__(v21),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v25 = COERCE_AS(__typeof__(v25),
                                    PSEUDO_REGISTER(float, "s2", "=w")),
                    v28 = COERCE_AS(__typeof__(v28),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v29 = COERCE_AS(__typeof__(v29),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v30 = COERCE_AS(__typeof__(v30),
                                    PSEUDO_REGISTER(float, "s2", "=w"));
              }
              v43 = 3 * v41;
              v44 = fw_memory_g_heap_manager_ptr;
              v45 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v41, 16, 0),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s2", "=w"));
              v46 = v45 + v40;
              v47 = v65_.v65;
              v48 = v65_.v66;
              v49 = v45 + 16 * v43;
              *(_QWORD*)(v46 + 16) = v33;
              *(_QWORD*)(v46 + 24) = v32;
              v50 = *(_QWORD*)(a1 + 16);
              v51 = *(_QWORD*)(a1 + 24);
              v38 = v46 + 48;
              *(float*)(v46 + 32) = v22;
              *(float*)(v46 + 36) = v24;
              *(float*)(v46 + 40) = v26;
              *(_QWORD*)v46 = v47;
              *(_QWORD*)(v46 + 8) = v48;
              v52 = v46 + v50 - v51;
              if (v50 != v51) {
                v53 = v50;
                v54 = v52;
                do {
                  v55 = *(_QWORD*)(v53 + 8);
                  *(_QWORD*)v54 = *(_QWORD*)v53;
                  *(_QWORD*)(v54 + 8) = v55;
                  *(_QWORD*)(v54 + 16) = *(_QWORD*)(v53 + 16);
                  *(_QWORD*)(v54 + 24) = *(_QWORD*)(v53 + 24);
                  *(_QWORD*)(v53 + 16) = 0;
                  *(_QWORD*)(v53 + 24) = 0;
                  v56 = *(_QWORD*)(v53 + 32);
                  LODWORD(v55) = *(_DWORD*)(v53 + 40);
                  v53 += 48;
                  *(_DWORD*)(v54 + 40) = v55;
                  *(_QWORD*)(v54 + 32) = v56;
                  v54 += 48;
                } while (v53 != v51);
                do {
                  v57 = *(_QWORD*)(v50 + 24);
                  if (v57 != 0) {
                    std___1___shared_weak_count___release_weak_alt1(v57),
                        v21 = COERCE_AS(__typeof__(v21),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v23 = COERCE_AS(__typeof__(v23),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v25 = COERCE_AS(__typeof__(v25),
                                        PSEUDO_REGISTER(float, "s2", "=w")),
                        v28 = COERCE_AS(__typeof__(v28),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v29 = COERCE_AS(__typeof__(v29),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v30 = COERCE_AS(__typeof__(v30),
                                        PSEUDO_REGISTER(float, "s2", "=w"));
                  }
                  v50 += 48;
                } while (v50 != v51);
                v50 = *(_QWORD*)(a1 + 16);
              }
              *(_QWORD*)(a1 + 16) = v52;
              *(_QWORD*)(a1 + 24) = v38;
              *(_QWORD*)(a1 + 32) = v49;
              if (v50 != 0) {
                v58 = 128;
                if (*(_QWORD*)(*(_QWORD*)v44 + 200LL) == 0) {
                  v58 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v44 + v58, v50),
                    v21 = COERCE_AS(__typeof__(v21),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v25 = COERCE_AS(__typeof__(v25),
                                    PSEUDO_REGISTER(float, "s2", "=w")),
                    v28 = COERCE_AS(__typeof__(v28),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v29 = COERCE_AS(__typeof__(v29),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v30 = COERCE_AS(__typeof__(v30),
                                    PSEUDO_REGISTER(float, "s2", "=w"));
              }
            }
            else {
              v36 = v63_.v63;
              v37 = v63_.v64;
              *(_QWORD*)(v34 + 16) = v33;
              *(_QWORD*)(v34 + 24) = v32;
              v38 = v34 + 48;
              *(float*)(v34 + 32) = v22;
              *(float*)(v34 + 36) = v24;
              *(float*)(v34 + 40) = v26;
              *(_QWORD*)v34 = v36;
              *(_QWORD*)(v34 + 8) = v37;
            }
            result = v61_.v62;
            *(_QWORD*)(a1 + 24) = v38;
            goto LABEL_67;
          }
          v18 = 5;
        }
        ((__int64 (*)(__int64))(*v65_.v68)[v18])((__int64)v65_.v68),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s2", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s1", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s2", "=w"));
        goto LABEL_36;
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void HelpGroup_18b3f00(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 result;

  v8 = (_QWORD*)LayoutEx_579160(1064, 8);
  v9 = v8 + 3;
  v10 = v8;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = GameData_21054b0;
  Element_1884860(v8 + 3, a1, a2, a3);
  v10[3] = game_gameui_control_HelpGroup_vtable;
  v10[12] = GameData_2105488;
  *((_DWORD*)v10 + 263) = 100;
  *((_BYTE*)v10 + 1056) = 1;
  v11 = Pane_58fac0(*(_QWORD*)(v10[4] + 24LL), "HelpPriority");
  if (v11 != 0 || (v11 = GameRoutine_576740(a1, "HelpPriority")) != 0) {
    *((_DWORD*)v10 + 263) = *(_DWORD*)(v11 + *(unsigned int*)(v11 + 4));
  }
  result = Pane_58fac0(*(_QWORD*)(v10[4] + 24LL), "HelpTarget");
  if (result != 0 || (result = GameRoutine_576740(a1, "HelpTarget")) != 0) {
    *((_BYTE*)v10 + 1056) =
        *(_DWORD*)(result + *(unsigned int*)(result + 4)) != 0;
  }
  *a4 = v9;
  a4[1] = v10;
  v10[3] = Element_1888840_ptr;
  v10[12] = GameData_2105668;
  {
    result;
    return;
  }
}

__int64

game_gameui_control_HelpGroup_HasTargetElement_lambda0_Invoke(__int64 a1,
                                                              __int64* a2)
{
  __int64 result;
  __int64 v4;

  result = *a2;
  if (*a2 != 0) {
    v4 = a2[1];
    result = __dynamic_cast(result, GameData_21319a0, GameData_2132090[0], -2);
    if (result != 0) {
      if (v4 != 0) {
        result = 1;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                  memory_order_relaxed);
        **(_BYTE**)(a1 + 8) = 1;
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          std___1___shared_weak_count___release_weak(v4);
          return 1;
        }
      }
      else {
        **(_BYTE**)(a1 + 8) = 1;
        return 1;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
