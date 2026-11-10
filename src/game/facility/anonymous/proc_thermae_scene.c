#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14877f0(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_1a9e2d1;
extern __int64 GameData_21f4010;
__int64 ProcThermaeScene_Unknown18();
__int64 GameRoutine_1462640(_QWORD, _QWORD, _QWORD);
__int64 game_facility_anonymous_ProcThermaeScene_InitialLoadImpl_closure_Invoke(
    __int64 a1, __int64* a2);
_QWORD* GameRoutine_138ff80(_QWORD* result, _QWORD*);
_QWORD* SceneManager_138a920(__int64, __int64);
__attribute__((swiftcall)) void
SceneCharacterAppearance_140f320(PSEUDO_X8, __int64, __int64);
__int64 SceneManager_138c000(_QWORD*, __int64*, __int64, __int64*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
__n128 GameRoutine_a0d9a0(__int64);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak();
bool GameRoutine_1389160(__int64, __int64, __int64);
char* game_util_Format(__int64, __int64, __int64, __int64, __int64, __int64,
                       __int64, __int64, char);
extern _UNKNOWN GameData_1a9e2e2;
extern _UNKNOWN GameData_1aa5e95;
extern _UNKNOWN GameData_1af2a36;
extern _UNKNOWN GameData_1af6a12;
extern __int64 (*GameData_2039088[])();
extern __int64 (*game_facility_SceneManager_FacilityMapArgs_vtable[])();
extern __int64 GameData_212dce8;
extern __int64 GameData_212e1c0;
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_195ab40(__int64, __int64);
void __attribute__((noreturn)) String_60a1d0();
void game_facility_SceneManager_CreateMob(_QWORD*, __int64);
__n128 game_facility_anonymous_ProcThermaeScene_InitialLoadImpl(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8);

__int64 ProcThermaeScene_Unknown18()
{
  unsigned __int64 v0;
  unsigned __int64 v1;
  unsigned __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;

  v0 = game_HashString(&GameData_1a9e2d1);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21f4010 + 96);
    if (v1 != 0 && *(_QWORD*)(GameData_21f4010 + 112) != 0) {
      v3 = v1 - 1;
      if ((v1 & (v1 - 1)) != 0) {
        v4 = v0;
        if (v0 >= v1) {
          v4 = v0 % v1;
        }
      }
      else {
        v4 = v3 & v0;
      }
      v5 = *(_QWORD**)(*(_QWORD*)(GameData_21f4010 + 88) + 8 * v4);
      if (v5 != nullptr) {
        v6 = (_QWORD*)*v5;
        if (v6 != nullptr) {
          if ((v1 & v3) == 0) {
            while (1) {
              v9 = v6[1];
              if (v9 == v0) {
                if (v6[2] == v0) {
                  goto LABEL_27;
                }
              }
              else if ((v9 & v3) != v4) {
                goto LABEL_25;
              }
              v6 = (_QWORD*)*v6;
              v8 = 0;
              if (v6 == nullptr) {
                return GameRoutine_14877f0(v8, 0x13F000000LL);
              }
            }
          }
          do {
            v7 = v6[1];
            if (v7 == v0) {
              if (v6[2] == v0) {
              LABEL_27:
                v8 = v6[3];
                return GameRoutine_14877f0(v8, 0x13F000000LL);
              }
            }
            else {
              if (v7 >= v1) {
                v7 %= v1;
              }
              if (v7 != v4) {
                break;
              }
            }
            v6 = (_QWORD*)*v6;
          } while (v6 != nullptr);
        }
      }
    }
  }

LABEL_25:
  v8 = 0;
  return GameRoutine_14877f0(v8, 0x13F000000LL);
}

__n128 game_facility_anonymous_ProcThermaeScene_InitialLoadImpl(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8)
{

#pragma clang fp contract(off)
  char* v9;
  __int64 v10;
  __int64 v15;
  __int64 v16;
  char v17;
  char v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  long double v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  char* v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  char* v34;
  __int64 v35;
  __int128 v36;
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
  _QWORD* v59;
  char* v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  char* v63;
  __int64 v64;
  __int64 v65;
  _QWORD* v66;
  __int64 v67;
  __n128 result;
  __int64 v69;
  char v70;
  char v71;
  char v72;
  struct {
    _QWORD v73[2];
    char* v74;
  } v73_;
  struct {
    __int64 v75;
    unsigned __int64 v76;
    __int128 v77;
    __int64* v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
    __int64 v86;
    __int64 v87;
  } v75_;
  struct {
    __int64 v88;
    __int64 v89;
  } v88_;
  struct {
    __int128 v90;
    __int64 v91;
    __int64 v92;
    __int128* v93;
    __int64 v94;
    __int128 v95;
    int v96;
    char gap244_[4];
    __int64 v97;
    __int64 v98;
    __int64 v99;
    __int64 v100;
    __int64 v101;
    __int64 v102;
    __int64 v103;
    __int64 v104;
    __int64 v105;
    char v106;
    char gap321_[15];
    char v107;
  } v90_;
  _QWORD v108[8];

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v53 = COERCE_AS(__typeof__(v53),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v57 = COERCE_AS(__typeof__(v57),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v90_.v93 = nullptr;
  v90_.v94 = 0;
  v90_.v91 = 0;
  v90_.v92 = 0;
  v90_.v90 = (__typeof__(v90_.v90)){0};
  *(_QWORD*)&v90_.v95 = 0;
  v88_.v88 = (__int64)game_facility_SceneManager_FacilityMapArgs_vtable;
  v88_.v89 = 0;
  v9 = game_util_Format(
      (__int64)&GameData_1a9e2e2,
      *(_QWORD*)(**(_QWORD**)(*(_QWORD*)(a1 + 216) + 24LL) + 32LL), a3, a4, a5,
      a6, a7, a8, v70),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v53 = COERCE_AS(__typeof__(v53),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v57 = COERCE_AS(__typeof__(v57),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v10 = strlen(v9),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v53 = COERCE_AS(__typeof__(v53),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v57 = COERCE_AS(__typeof__(v57),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_1389160((__int64)&v88_.v88, (__int64)v9, v10),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  SceneManager_138a920(*(_QWORD*)GameData_212dce8, (__int64)&v88_.v88),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v88_.v88 = GameData_212e1c0 + 16;
  if (v90_.v93 == &v90_.v90) {
    v15 = 32;
    goto LABEL_5;
  }
  if (v90_.v93 != nullptr) {
    v15 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*(_QWORD*)v90_.v93 + v15))((__int64)v90_.v93),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v53 = COERCE_AS(__typeof__(v53),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v16 = 0;
  v17 = 1;
  do {
    v18 = v17;
    v19 = *(_QWORD*)(*(_QWORD*)(a1 + 192) + 8 * v16);
    if (v19 == 0) {
      goto LABEL_8;
    }
    v88_.v88 = 0;
    v88_.v89 = 0;
    LOBYTE(v90_.v93) = 0;
    v90_.v106 = 0;
    v90_.v107 = 0;
    v108[4] = 0;
    LOBYTE(v90_.v90) = 20;
    strcpy((char*)&v90_.v90 + 9, "_D");
    *(_QWORD*)((char*)&v90_.v90 + 1) = 0x335FAC9CE6BA9FE5LL;
    v73_.v73[0] = *(_QWORD*)(v19 + 392);
    *(__n128*)&v26 = X8CALL_V0(
        __n128,
        SceneCharacterAppearance_140f320((void*)(&v75_.v75), (__int64)v73_.v73,
                                         (__int64)&GameData_1af6a12)),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v53 = COERCE_AS(__typeof__(v53),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v57 = COERCE_AS(__typeof__(v57),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v27 = v75_.v75;
    v28 = v75_.v76;
    v29 = v88_.v89;
    v75_.v75 = 0;
    v75_.v76 = 0;
    v88_.v88 = v27;
    v88_.v89 = v28;
    if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v29 + 16LL))(v29, v26),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v53 = COERCE_AS(__typeof__(v53),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v57 = COERCE_AS(__typeof__(v57),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      *(__n128*)&v26 = std___1___shared_weak_count___release_weak(),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v30 = v75_.v76;
      if (v75_.v76 == 0) {
        goto LABEL_16;
      }
    }
    else {
      v30 = v75_.v76;
      if (v75_.v76 == 0) {
        goto LABEL_16;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(unsigned __int64, long double))(*(_QWORD*)v30 + 16LL))(v30,
                                                                          v26),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v53 = COERCE_AS(__typeof__(v53),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v57 = COERCE_AS(__typeof__(v57),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      std___1___shared_weak_count___release_weak(),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v53 = COERCE_AS(__typeof__(v53),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v57 = COERCE_AS(__typeof__(v57),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
  LABEL_16:
    v31 = game_util_Format((__int64)&GameData_1af2a36, (unsigned int)v16, v20,
                           v21, v22, v23, v24, v25, v71),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v53 = COERCE_AS(__typeof__(v53),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v57 = COERCE_AS(__typeof__(v57),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v32 = strlen(v31),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v53 = COERCE_AS(__typeof__(v53),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v57 = COERCE_AS(__typeof__(v57),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (v32 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_84;
    }
    v33 = v32;
    if (v32 >= 0x17) {
      if ((v32 | 7) == 0x17) {
        v35 = 26;
      }
      else {
        v35 = (v32 | 7) + 1;
      }
      v34 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v35, 16, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v73_.v73[1] = v33;
      v73_.v74 = v34;
      v73_.v73[0] = v35 | 1;
    LABEL_24:
      memmove(v34, v31, v33),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v53 = COERCE_AS(__typeof__(v53),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v57 = COERCE_AS(__typeof__(v57),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      goto LABEL_25;
    }
    v34 = (char*)v73_.v73 + 1;
    LOBYTE(v73_.v73[0]) = 2 * v32;
    if (v32 != 0) {
      goto LABEL_24;
    }
  LABEL_25:
    v34[v33] = 0;
    GameRoutine_195ab40((__int64)&v75_.v75, (__int64)v73_.v73),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v53 = COERCE_AS(__typeof__(v53),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    LODWORD(v90_.v93) = v75_.v75;
    if (v90_.v106 != 1) {
      v41 = v75_.v79;
      v42 = v75_.v80;
      v75_.v79 = 0;
      v75_.v80 = 0;
      v90_.v97 = v41;
      v90_.v98 = v42;
      v43 = v75_.v83;
      v44 = v75_.v84;
      v90_.v95 = v75_.v77;
      v75_.v83 = 0;
      v75_.v84 = 0;
      v90_.v96 = (int)v75_.v78;
      v90_.v101 = v43;
      v90_.v102 = v44;
      v45 = v75_.v81;
      v46 = v75_.v82;
      v75_.v81 = 0;
      v75_.v82 = 0;
      v90_.v99 = v45;
      v90_.v100 = v46;
      v48 = v75_.v86;
      v47 = v75_.v87;
      v75_.v86 = 0;
      v75_.v87 = 0;
      v90_.v104 = v48;
      v90_.v105 = v47;
      v49 = v75_.v85;
      v75_.v85 = 0;
      v90_.v103 = v49;
      v90_.v106 = 1;
    LABEL_47:
      if ((v75_.v79 & 1) == 0) {
        goto LABEL_54;
      }
    LABEL_50:
      if (v75_.v81 != 0) {
        v50 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v50 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v50),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v52 = COERCE_AS(__typeof__(v52),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v53 = COERCE_AS(__typeof__(v53),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v55 = COERCE_AS(__typeof__(v55),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v56 = COERCE_AS(__typeof__(v56),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v57 = COERCE_AS(__typeof__(v57),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
      goto LABEL_54;
    }
    *(_QWORD*)&v36 = v75_.v77;
    *((_QWORD*)&v36 + 1) = DWORD2(v75_.v77);
    v90_.v96 = (int)v75_.v78;
    v90_.v95 = v36;
    if ((v90_.v97 & 1) != 0 && v90_.v99 != 0) {
      v37 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v37),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v53 = COERCE_AS(__typeof__(v53),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v57 = COERCE_AS(__typeof__(v57),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v90_.v97 = v75_.v79;
    v90_.v98 = v75_.v80;
    LOWORD(v75_.v79) = 0;
    v90_.v99 = v75_.v81;
    if ((v90_.v100 & 1) != 0 && v90_.v102 != 0) {
      v38 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v38),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v53 = COERCE_AS(__typeof__(v53),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v57 = COERCE_AS(__typeof__(v57),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v90_.v100 = v75_.v82;
    v90_.v101 = v75_.v83;
    LOWORD(v75_.v82) = 0;
    v90_.v102 = v75_.v84;
    if ((v90_.v103 & 1) == 0 || v90_.v105 == 0) {
      v90_.v103 = v75_.v85;
      v90_.v104 = v75_.v86;
      LOWORD(v75_.v85) = 0;
      v90_.v105 = v75_.v87;
      if ((v75_.v79 & 1) == 0) {
        goto LABEL_54;
      }
      goto LABEL_50;
    }
    v39 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v39 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v39),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v53 = COERCE_AS(__typeof__(v53),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v90_.v103 = v75_.v85;
    v90_.v104 = v75_.v86;
    LOWORD(v75_.v85) = 0;
    v90_.v105 = v75_.v87;
    if ((v75_.v82 & 1) == 0 || v75_.v84 == 0) {
      goto LABEL_47;
    }
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v40),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v53 = COERCE_AS(__typeof__(v53),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if ((v75_.v79 & 1) != 0) {
      goto LABEL_50;
    }
  LABEL_54:
    if ((v73_.v73[0] & 1) != 0 && v73_.v74 != nullptr) {
      v51 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v51 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v51),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v53 = COERCE_AS(__typeof__(v53),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v57 = COERCE_AS(__typeof__(v57),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v75_.v78 = &v75_.v75;
    v75_.v75 = (__int64)GameData_2039088;
    GameRoutine_138ff80(&v75_.v75, v108),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v53 = COERCE_AS(__typeof__(v53),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (v75_.v78 == &v75_.v75) {
      v58 = 32;
    }
    else {
      if (v75_.v78 == nullptr) {
        goto LABEL_64;
      }
      v58 = 40;
    }
    (*(void (**)(__int64))(*v75_.v78 + v58))((__int64)v75_.v78),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v53 = COERCE_AS(__typeof__(v53),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  LABEL_64:
    v59 = *(_QWORD**)GameData_212dce8;
    v60 = game_util_Format((__int64)&GameData_1aa5e95, (unsigned int)v16, v52,
                           v53, v54, v55, v56, v57, v72),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v53 = COERCE_AS(__typeof__(v53),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v57 = COERCE_AS(__typeof__(v57),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v61 = strlen(v60),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v53 = COERCE_AS(__typeof__(v53),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v57 = COERCE_AS(__typeof__(v57),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (v61 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_84:
      String_60a1d0(),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v53 = COERCE_AS(__typeof__(v53),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v57 = COERCE_AS(__typeof__(v57),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v62 = v61;
    if (v61 >= 0x17) {
      if ((v61 | 7) == 0x17) {
        v64 = 26;
      }
      else {
        v64 = (v61 | 7) + 1;
      }
      v63 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v64, 16, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v75_.v76 = v62;
      *(_QWORD*)&v75_.v77 = v63;
      v75_.v75 = v64 | 1;
    LABEL_72:
      memmove(v63, v60, v62),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v53 = COERCE_AS(__typeof__(v53),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v57 = COERCE_AS(__typeof__(v57),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      goto LABEL_73;
    }
    v63 = (char*)&v75_.v75 + 1;
    LOBYTE(v75_.v75) = 2 * v61;
    if (v61 != 0) {
      goto LABEL_72;
    }
  LABEL_73:
    v63[v62] = 0;
    SceneManager_138c000(v59, &v75_.v75, v19, &v88_.v88),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v53 = COERCE_AS(__typeof__(v53),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if ((v75_.v75 & 1) != 0 && (_QWORD)v75_.v77 != 0) {
      v65 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v65 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v65),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v53 = COERCE_AS(__typeof__(v53),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v57 = COERCE_AS(__typeof__(v57),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    GameRoutine_a0d9a0((__int64)&v88_.v88),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v53 = COERCE_AS(__typeof__(v53),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  LABEL_8:
    v16 = 1;
    v17 = 0;
  } while ((v18 & 1) != 0);
  v66 = *(_QWORD**)GameData_212dce8;
  v67 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       32, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v53 = COERCE_AS(__typeof__(v53),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v57 = COERCE_AS(__typeof__(v57),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  *(_BYTE*)(v67 + 28) = 0;
  v88_.v88 = 33;
  v88_.v89 = 28;
  *(_QWORD*)&v90_.v90 = v67;
  *(_DWORD*)(v67 + 24) = -1467817058;
  *(_QWORD*)v67 = 0x83E39683E3A283E3LL;
  *(_QWORD*)(v67 + 8) = 0x5F8883E3B982E3AALL;
  *(_QWORD*)(v67 + 16) = 0x83E3AB83E38683E3LL;
  game_facility_SceneManager_CreateMob(v66, (__int64)&v88_.v88),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v88_.v88 & 1) != 0 && (_QWORD)v90_.v90 != 0) {
    v69 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v69 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v69);
  }
  return result;
}

__int64 game_facility_anonymous_ProcThermaeScene_InitialLoadImpl_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;
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
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;

  v2 = *a2;
  v19 = 0;
  v20 = &v19;
  result = GameRoutine_1462640(&v20, &v20, *(_QWORD*)(v2 + 8));
  v4 = v19;
  if (v19 != 0) {
    v6 = *(_QWORD*)(v19 + 48);
    v5 = *(_QWORD*)(v19 + 56);
    *(_DWORD*)(v19 + 112) = 0;
    v7 = v5 - v6;
    *(_BYTE*)(v4 + 116) = 1;
    if (v7 != 0) {
      if (v7 == 8) {
        v8 = 0;
      }
      else {
        v11 = 0;
        v8 = 0;
        do {
          v14 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
          *(_QWORD*)(v4 + 96) = v14;
          v15 = *(_QWORD*)(v14 + 192);
          if ((*(_BYTE*)(v15 + 22) & 1) == 0 &&
              (*(_BYTE*)(v15 + 21) & 1) == 0) {
            *(_QWORD*)v15 = 0;
            *(_DWORD*)(v15 + 8) = 1;
          }
          *(_DWORD*)(v15 + 12) = 0;
          *(_BYTE*)(v15 + 20) = 1;
          v16 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          *(_BYTE*)(v16 + v11) = 0;
          v17 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8 + 8);
          *(_QWORD*)(v4 + 96) = v17;
          v18 = *(_QWORD*)(v17 + 192);
          if ((*(_BYTE*)(v18 + 22) & 1) == 0 &&
              (*(_BYTE*)(v18 + 21) & 1) == 0) {
            *(_QWORD*)v18 = 0;
            *(_DWORD*)(v18 + 8) = 1;
          }
          *(_DWORD*)(v18 + 12) = 0;
          *(_BYTE*)(v18 + 20) = 1;
          v8 += 2;
          v12 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          v13 = v12 + v11;
          v11 += 6;
          *(_BYTE*)(v13 + 3) = 0;
        } while (((v7 >> 3) & 0xFFFFFFFFFFFFFFFELL) != v8);
      }
      if ((v7 & 8) != 0) {
        v9 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
             224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
        *(_QWORD*)(v4 + 96) = v9;
        v10 = *(_QWORD*)(v9 + 192);
        if ((*(_BYTE*)(v10 + 22) & 1) == 0 && (*(_BYTE*)(v10 + 21) & 1) == 0) {
          *(_QWORD*)v10 = 0;
          *(_DWORD*)(v10 + 8) = 1;
        }
        *(_DWORD*)(v10 + 12) = 0;
        *(_BYTE*)(v10 + 20) = 1;
        *(_QWORD*)(v4 + 96) = 0;
        *(_BYTE*)(*(_QWORD*)(v4 + 136) + 3 * v8) = 0;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
