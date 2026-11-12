#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_f256b0(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, _QWORD);
__int64 GameRoutine_1049ba0(_QWORD, _QWORD);
__int64 GameRoutine_845840(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f097d0(__int64);
__int64 GameRoutine_f16a70(_QWORD);
__int64 GameRoutine_f25920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f43b80(_QWORD);
__int64 GameRoutine_f445e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);
__int64 GameRoutine_f44f60(_QWORD);
__int64 GameRoutine_fbb8a0(_QWORD, _QWORD, _QWORD);
__int64 MapDrawTargetSelectInfo_Destructor(_QWORD);
__int64 MassMeshData_f44c80(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_Unit_IsImmobile(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_map_MapPanelDeployAction_vtable[])();
extern __int64 (*game_map_MassMeshGroup_vtable[])();
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d038[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212cfd0[8];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_74e1f0(_QWORD);
__int64 MapPanelDeployAction_Unknown3_alt1(__int64 a1) __asm__(
    "MapPanelDeployAction_Unknown3");
__int64 MapPanelDeployAction_Destructor(_QWORD* a1);
__int64 MapPanelDeployAction_DeletingDestructor(_QWORD* a1);
__attribute__((swiftcall)) void
DeployData_f256b0(PSEUDO_X8, __int64, unsigned int, unsigned int, unsigned int);
__int64* GameHr_fbb8a0(unsigned int, unsigned int, __int64);
__int64* game_UnitPool_Get_alt1(_BYTE*) __asm__("game_UnitPool_Get");
__int64 GameRoutine_845840_alt1(_QWORD*, __int16,
                                __int16) __asm__("GameRoutine_845840");
__int64 GameRoutine_f25920_alt1(__int64, int, int, unsigned int,
                                __int16) __asm__("GameRoutine_f25920");
__int64 MapPanelDeployAction_1049ba0(__int64, __int64);
__int64 MassMeshData_f445e0(__int64, int, unsigned int, unsigned int, char,
                            char, __int64, char);
__int64 MassMeshData_f44c80_alt1(__int64 result) __asm__("MassMeshData_f44c80");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_Unit_IsImmobile_alt1(__int64) __asm__("game_Unit_IsImmobile");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void MassMeshData_f44f60(__int64);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_74e1f0_alt1() __asm__("GameRoutine_74e1f0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MapPanelDeployAction_Unknown3(__int64 a1);

void MapPanelDeployAction_Unknown3(__int64 a1)
{

#pragma clang fp contract(off)
  int* v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int* v10;
  void (***v11)(_QWORD);
  void (***v12)(_QWORD);
  void (***v13)(_QWORD);
  void (***v14)(_QWORD);
  void (**v15)(_QWORD);
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  unsigned int v36;
  __int64 v37;
  char v38;
  __int64 v39;
  int v40;
  char v41;
  int v42;
  char v43;
  int v44;
  __int64 v45;
  __int64 v46;
  bool v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;
  __int64 v54;
  char* v55;
  char* v56;
  unsigned __int64 v57;
  __int64 v58;
  char v59;
  char v60;
  char* v61;
  __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  char* v68;
  char* v69;
  char v70;
  __int64 v71;
  int* v72;
  void (***v73)(_QWORD);
  void (***v74)(_QWORD);
  void (***v75)(_QWORD);
  void (***v76)(_QWORD);
  void (**v77)(_QWORD);
  __int64 v78;
  _QWORD* v79;
  __int64 v80;
  _QWORD* v81;
  __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  unsigned int v90;
  __int64 v91;
  unsigned __int64 v92;
  int* v93;
  __int64 v94;
  char* v95;
  char* v96;
  __int64 v97;
  unsigned int v98;
  char v99;
  unsigned int v100;
  unsigned int v101;
  __int64 v102;
  __int64 v103;
  unsigned __int64 v104;
  __int64 v105;
  bool v106;
  unsigned __int64 v107;
  __int64 v108;
  __int64 v109;
  _BYTE* v110;
  _BYTE* v111;
  char v112;
  __int64 v113;
  __int64 v114;
  unsigned int v115;
  unsigned int v116;
  unsigned __int8* v117;
  __int64 v118;
  __int64 v119;
  char* v120;
  char* v121;
  __int64 v122;
  int* v123;
  unsigned __int64 v124;
  unsigned __int64 v125;
  char* v126;
  struct {
    _BYTE v127[5];
    unsigned __int8 v128;
  } v127_;

  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v1 = (int*)a1;
  if (*(_BYTE*)(a1 + 8) == 1) {
    MassMeshData_f44c80_alt1(a1 + 16),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v123 = v1;
    if (((*(__int64 (**)(int*))(*(_QWORD*)v1 + 48LL))(v1) & 1) == 0) {
      goto LABEL_179;
    }
    v2 = GameData_212d038[0];
    v3 = (__int64*)GameData_212d020[0];
    if (*(_BYTE*)(*(_QWORD*)GameData_212d038[0] + 156LL) == 1) {
      v4 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 24LL);
      v5 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL);
      if (v5 != 0) {
        v6 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 96LL);
        v7 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                  memory_order_relaxed);
        v8 = std___1___shared_weak_count_lock_alt1(v7),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt1(v5),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v42 = COERCE_AS(__typeof__(v42),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v44 = COERCE_AS(__typeof__(v44),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v8 != 0) {
          if (v6 != 0) {
            v9 = 254936;
          }
          else if (*(_BYTE*)(*(_QWORD*)v2 + 156LL) != 0) {
            v9 = 8;
          }
          else {
            v9 = 127472;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
                v40 =
                    COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v42 =
                    COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v44 =
                    COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            std___1___shared_weak_count___release_weak_alt1(v8),
                v40 =
                    COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v42 =
                    COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v44 =
                    COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        else if (*(_BYTE*)(*(_QWORD*)v2 + 156LL) != 0) {
          v9 = 8;
        }
        else {
          v9 = 127472;
        }
      }
      else {
        v9 = 8;
      }
      v47 =
          (*(_QWORD*)(v4 + v9 + 127168) | *(_QWORD*)(v4 + v9 + 127192)) == 0 ||
          v4 == 0;
      if (!v47) {
        v48 = *v3;
        v122 = v4 + v9;
        v49 = *(_QWORD*)(*v3 + 104);
        if (v49 != 0) {
          v50 = *(_QWORD*)(v48 + 96);
          v51 = *(_QWORD*)(v48 + 104);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 16), 1u,
                                    memory_order_relaxed);
          v52 = std___1___shared_weak_count_lock_alt1(v51),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak_alt1(v49),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v52 != 0) {
            if (v50 != 0) {
              v53 = *(_DWORD*)(v50 + 52);
              if (atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52),
                    v40 = COERCE_AS(
                        __typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v42 = COERCE_AS(
                        __typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v44 = COERCE_AS(
                        __typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                std___1___shared_weak_count___release_weak_alt1(v52),
                    v40 = COERCE_AS(
                        __typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v42 = COERCE_AS(
                        __typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v44 = COERCE_AS(
                        __typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              if ((v53 & 0x40) != 0) {
                MapPanelDeployAction_1049ba0((__int64)(v123 + 124),
                                             *(_QWORD*)(v122 + 127192)),
                    v40 = COERCE_AS(
                        __typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v42 = COERCE_AS(
                        __typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v44 = COERCE_AS(
                        __typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                if (v123[3209] < 1) {
                  v56 = nullptr;
                  v55 = nullptr;
                }
                else {
                  v54 = 0;
                  v55 = nullptr;
                  v56 = nullptr;
                  v57 = 0;
                  do {
                    v58 = (__int64)&v123[3 * v54 + 137];
                    v59 = *(_BYTE*)(v58 + 1);
                    v60 = *(_BYTE*)(v58 + 2);
                    if ((unsigned __int64)v56 < v57) {
                      *v56 = v59;
                      v56[1] = v60;
                      *((_WORD*)v56 + 1) = 0;
                      v56 += 4;
                    }
                    else {
                      v61 = v56;
                      v62 = v56 - v55;
                      v63 = (v62 >> 2) + 1;
                      if (v63 >> 62 != 0) {
                      LABEL_185:
                        GameRoutine_74e1f0_alt1(),
                            v40 = COERCE_AS(__typeof__(v40),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                            v42 = COERCE_AS(__typeof__(v42),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                            v44 = COERCE_AS(__typeof__(v44),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                      }
                      if ((__int64)(v57 - (_QWORD)v55) >> 1 > v63) {
                        v63 = (__int64)(v57 - (_QWORD)v55) >> 1;
                      }
                      if (v57 - (unsigned __int64)v55 >= 0x7FFFFFFFFFFFFFFCLL) {
                        v64 = 0x3FFFFFFFFFFFFFFFLL;
                      }
                      else {
                        v64 = v63;
                      }
                      if (v64 >> 62 != 0) {
                      LABEL_184:
                        GameRoutine_60a210_alt1(),
                            v40 = COERCE_AS(__typeof__(v40),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                            v42 = COERCE_AS(__typeof__(v42),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                            v44 = COERCE_AS(__typeof__(v44),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                      }
                      v65 = fw_memory_HeapManager_Allocate_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v64, 16,
                          0),
                      v40 = COERCE_AS(
                          __typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v42 = COERCE_AS(
                          __typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v44 = COERCE_AS(
                          __typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      v66 = v65 + v62;
                      *(_BYTE*)(v66 + 1) = v60;
                      v67 = v65 + v62 - 4 * (v62 >> 2);
                      *(_BYTE*)v66 = v59;
                      *(_WORD*)(v66 + 2) = 0;
                      if (v55 != v61) {
                        v68 = v55;
                        v69 = (char*)(v65 + v62 - 4 * (v62 >> 2));
                        do {
                          *v69 = *v68;
                          v69[1] = v68[1];
                          v69[2] = v68[2];
                          v70 = v68[3];
                          v68 += 4;
                          v69[3] = v70;
                          v69 += 4;
                        } while (v68 != v61);
                      }
                      v57 = v65 + 4 * v64;
                      v56 = (char*)(v66 + 4);
                      if (v55 != nullptr) {
                        v71 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v71 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt1(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v71,
                            (__int64)v55),
                            v40 = COERCE_AS(__typeof__(v40),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                            v42 = COERCE_AS(__typeof__(v42),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                            v44 = COERCE_AS(__typeof__(v44),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                      }
                      v55 = (char*)v67;
                    }
                    ++v54;
                  } while (v54 < v123[3209]);
                }
              LABEL_123:
                v89 = GameData_212d020[0];
                v121 = v55;
                if (*(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 248LL) ==
                    *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 256LL)) {
                  if (v55 == v56) {
                    goto LABEL_175;
                  }
                  v93 = v123;
                  v91 = 0;
                  goto LABEL_169;
                }
                v120 = v56;
                v124 = 0;
                v90 = 0;
                v91 = 0;
                v92 = 0;
                v93 = v123;
                v94 = v122;
              LABEL_126:
                v96 = *(char**)(*(_QWORD*)v89 + 248LL);
                v95 = *(char**)(*(_QWORD*)v89 + 256LL);
                v126 = v95;
                while (1) {
                  if (v96 == v95) {
                    ++v90;
                    v89 = GameData_212d020[0];
                    if (v90 == 4) {
                      v56 = v120;
                      v55 = v121;
                      if (v121 != v120) {
                        if (v91 != v92) {
                          v114 = v91;
                          do {
                            v115 = *v55;
                            v116 = v55[1];
                            v117 = (unsigned __int8*)v114;
                            while (*v117 != (unsigned __int8)v115 ||
                                   v117[1] != (unsigned __int8)v116) {
                              v117 += 4;
                              if (v117 == (unsigned __int8*)v92) {
                                goto LABEL_159;
                              }
                            }
                            if (v117 == (unsigned __int8*)v92) {
                            LABEL_159:
                              MassMeshData_f445e0((__int64)(v93 + 4), 0, v115,
                                                  v116, 1, 0, 0x100000004LL, 1),
                                  v40 = COERCE_AS(
                                      __typeof__(v40),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v42 = COERCE_AS(
                                      __typeof__(v42),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v44 = COERCE_AS(
                                      __typeof__(v44),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                              v114 = v91;
                            }
                            v55 += 4;
                          } while (v55 != v120);
                          v55 = v121;
                          if (v114 == 0) {
                          LABEL_175:
                            if (v55 != nullptr) {
                              v119 = 128;
                              if (*(_QWORD*)(*(_QWORD*)
                                                 fw_memory_g_heap_manager_ptr +
                                             200LL) == 0) {
                                v119 = 56;
                              }
                              nn_mem_StandardAllocator_Free_alt1(
                                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v119,
                                  (__int64)v55),
                                  v40 = COERCE_AS(
                                      __typeof__(v40),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v42 = COERCE_AS(
                                      __typeof__(v42),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v44 = COERCE_AS(
                                      __typeof__(v44),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                            }
                            goto LABEL_179;
                          }
                        LABEL_172:
                          v118 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v118 = 56;
                          }
                          nn_mem_StandardAllocator_Free_alt1(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v118,
                              v114),
                              v40 =
                                  COERCE_AS(__typeof__(v40),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                              v42 =
                                  COERCE_AS(__typeof__(v42),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                              v44 =
                                  COERCE_AS(__typeof__(v44),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                          v55 = v121;
                          goto LABEL_175;
                        }
                        do {
                        LABEL_169:
                          MassMeshData_f445e0((__int64)(v93 + 4), 0, *v55,
                                              v55[1], 1, 0, 0x100000004LL, 1),
                              v40 =
                                  COERCE_AS(__typeof__(v40),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                              v42 =
                                  COERCE_AS(__typeof__(v42),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                              v44 =
                                  COERCE_AS(__typeof__(v44),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                          v55 += 4;
                        } while (v55 != v56);
                        v55 = v121;
                      }
                      v114 = v91;
                      if (v91 == 0) {
                        goto LABEL_175;
                      }
                      goto LABEL_172;
                    }
                    goto LABEL_126;
                  }
                  v100 = *v96;
                  v101 = v96[1];
                  DeployData_f256b0((void*)((__int64)v127_.v127), v94, v100,
                                    v101, v90),
                      v40 = COERCE_AS(
                          __typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v42 = COERCE_AS(
                          __typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v44 = COERCE_AS(
                          __typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  if (v127_.v127[4] != 0) {
                    break;
                  }
                LABEL_129:
                  v95 = v126;
                  v96 += 4;
                }
                switch (v90) {
                case 2u:
                  if (v127_.v128 == 1) {
                    v97 = 1;
                    v98 = 6;
                    goto LABEL_141;
                  }
                  break;
                case 1u:
                  if (v127_.v128 == 1) {
                    v97 = 1;
                    v98 = 5;
                  LABEL_141:
                    v99 = 1;
                    goto LABEL_128;
                  }
                  break;
                case 0u:
                  v97 = v127_.v128;
                  v98 = 4 * v127_.v128;
                  if (v92 >= v124) {
                    v102 = v91;
                    v103 = v92 - v91;
                    v104 = (v103 >> 2) + 1;
                    if (v104 >> 62 != 0) {
                      goto LABEL_185;
                    }
                    v105 = v124 - v102;
                    if ((__int64)(v124 - v102) >> 1 > v104) {
                      v104 = v105 >> 1;
                    }
                    v106 = (unsigned __int64)v105 >= 0x7FFFFFFFFFFFFFFCLL;
                    v107 = 0x3FFFFFFFFFFFFFFFLL;
                    if (!v106) {
                      v107 = v104;
                    }
                    if (v107 >> 62 != 0) {
                      goto LABEL_184;
                    }
                    v125 = v107;
                    v108 = fw_memory_HeapManager_Allocate_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v107, 16,
                        0),
                    v40 = COERCE_AS(
                        __typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v42 = COERCE_AS(
                        __typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v44 = COERCE_AS(
                        __typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v109 = v108 + v103;
                    v91 = v108 + v103 - 4 * (v103 >> 2);
                    *(_WORD*)(v109 + 2) = 0;
                    *(_BYTE*)v109 = v100;
                    *(_BYTE*)(v109 + 1) = v101;
                    if (v102 != v92) {
                      v110 = (_BYTE*)v102;
                      v111 = (_BYTE*)v91;
                      do {
                        *v111 = *v110;
                        v111[1] = v110[1];
                        v111[2] = v110[2];
                        v112 = v110[3];
                        v110 += 4;
                        v111[3] = v112;
                        v111 += 4;
                      } while (v110 != (_BYTE*)v92);
                    }
                    v92 = v109 + 4;
                    v124 = v108 + 4 * v125;
                    v94 = v122;
                    if (v102 != 0) {
                      v113 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v113 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v113, v102),
                          v40 = COERCE_AS(
                              __typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v42 = COERCE_AS(
                              __typeof__(v42),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v44 = COERCE_AS(
                              __typeof__(v44),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                    v93 = v123;
                    v99 = v97;
                  }
                  else {
                    *(_BYTE*)v92 = v100;
                    *(_BYTE*)(v92 + 1) = v101;
                    v99 = v97;
                    *(_WORD*)(v92 + 2) = 0;
                    v92 += 4LL;
                  }
                  goto LABEL_128;
                default:
                  break;
                }
                v97 = 0;
                v98 = 0;
                v99 = 0;
              LABEL_128:
                MassMeshData_f445e0((__int64)(v93 + 4), v90, v100, v101, v99, 0,
                                    v98 | (unsigned __int64)(v97 << 32), 1),
                    v40 = COERCE_AS(
                        __typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v42 = COERCE_AS(
                        __typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v44 = COERCE_AS(
                        __typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                goto LABEL_129;
              }
            }
            else if (atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52),
                  v40 = COERCE_AS(
                      __typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v42 = COERCE_AS(
                      __typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v44 = COERCE_AS(
                      __typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              std___1___shared_weak_count___release_weak_alt1(v52),
                  v40 = COERCE_AS(
                      __typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v42 = COERCE_AS(
                      __typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v44 = COERCE_AS(
                      __typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
        }
        v72 = v123;
        v73 = *((void (****)(_QWORD))v123 + 66),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v74 = *((void (****)(_QWORD))v123 + 65),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *((_QWORD*)v123 + 63) = 0;
        *((_QWORD*)v123 + 64) = 0;
        if (v74 != v73) {
          v75 = v73 - 7;
          v76 = v73 - 7;
          do {
            v77 = *v76;
            v76 -= 7;
            (*v77)(v75);
            v47 = v75 == v74;
            v75 = v76;
          } while (!v47);
        }
        v78 = *((_QWORD*)v123 + 1608);
        *((_QWORD*)v123 + 66) = v74;
        v123[3209] = 0;
        if (v78 != 0) {
          v79 = *((_QWORD**)v123 + 1607);
          if (v79 != nullptr) {
            v80 = fw_memory_g_heap_manager_ptr;
            do {
              v81 = (_QWORD*)*v79;
              if (*(_QWORD*)(*(_QWORD*)v80 + 200LL) != 0) {
                v82 = 128;
              }
              else {
                v82 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v80 + v82,
                                                 (__int64)v79),
                  v40 = COERCE_AS(
                      __typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v42 = COERCE_AS(
                      __typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v44 = COERCE_AS(
                      __typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v79 = v81;
            } while (v81 != nullptr);
          }
          v72 = v123;
          v83 = *((_QWORD*)v123 + 1606);
          *((_QWORD*)v123 + 1607) = 0;
          if (v83 != 0) {
            v84 = v83 & 7;
            if (v83 >= 8) {
              v86 = v83 & 0xFFFFFFFFFFFFFFF8LL;
              v85 = 0;
              do {
                *(_QWORD*)(*((_QWORD*)v123 + 1605) + 8 * v85) = 0;
                *(_QWORD*)(*((_QWORD*)v123 + 1605) + 8 * v85 + 8) = 0;
                *(_QWORD*)(*((_QWORD*)v123 + 1605) + 8 * v85 + 16) = 0;
                *(_QWORD*)(*((_QWORD*)v123 + 1605) + 8 * v85 + 24) = 0;
                *(_QWORD*)(*((_QWORD*)v123 + 1605) + 8 * v85 + 32) = 0;
                *(_QWORD*)(*((_QWORD*)v123 + 1605) + 8 * v85 + 40) = 0;
                *(_QWORD*)(*((_QWORD*)v123 + 1605) + 8 * v85 + 48) = 0;
                v87 = *((_QWORD*)v123 + 1605) + 8 * v85;
                v85 += 8;
                *(_QWORD*)(v87 + 56) = 0;
              } while (v86 != v85);
            }
            else {
              v85 = 0;
            }
            if (v84 != 0) {
              v88 = 8 * v85;
              do {
                --v84;
                *(_QWORD*)(*((_QWORD*)v123 + 1605) + v88) = 0;
                v88 += 8;
              } while (v84 != 0);
            }
          }
          *((_QWORD*)v123 + 1608) = 0;
        }
        v56 = nullptr;
        v55 = nullptr;
        v72[3220] = 0;
        goto LABEL_123;
      }
    }
    else {
      v10 = v1;
      v11 = *((void (****)(_QWORD))v1 + 66),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v12 = *((void (****)(_QWORD))v1 + 65),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *((_QWORD*)v123 + 63) = 0;
      *((_QWORD*)v123 + 64) = 0;
      if (v12 != v11) {
        v13 = v11 - 7;
        v14 = v11 - 7;
        do {
          v15 = *v14;
          v14 -= 7;
          (*v15)(v13);
          v47 = v13 == v12;
          v13 = v14;
        } while (!v47);
      }
      v16 = *((_QWORD*)v123 + 1608);
      *((_QWORD*)v123 + 66) = v12;
      v123[3209] = 0;
      if (v16 != 0) {
        v17 = *((_QWORD**)v123 + 1607);
        if (v17 != nullptr) {
          v18 = fw_memory_g_heap_manager_ptr;
          do {
            v19 = (_QWORD*)*v17;
            if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
              v20 = 128;
            }
            else {
              v20 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v18 + v20,
                                               (__int64)v17),
                v40 =
                    COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v42 =
                    COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v44 =
                    COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v17 = v19;
          } while (v19 != nullptr);
        }
        v10 = v123;
        v21 = *((_QWORD*)v123 + 1606);
        *((_QWORD*)v123 + 1607) = 0;
        if (v21 != 0) {
          v22 = v21 & 7;
          if (v21 >= 8) {
            v24 = v21 & 0xFFFFFFFFFFFFFFF8LL;
            v23 = 0;
            do {
              *(_QWORD*)(*((_QWORD*)v123 + 1605) + 8 * v23) = 0;
              *(_QWORD*)(*((_QWORD*)v123 + 1605) + 8 * v23 + 8) = 0;
              *(_QWORD*)(*((_QWORD*)v123 + 1605) + 8 * v23 + 16) = 0;
              *(_QWORD*)(*((_QWORD*)v123 + 1605) + 8 * v23 + 24) = 0;
              *(_QWORD*)(*((_QWORD*)v123 + 1605) + 8 * v23 + 32) = 0;
              *(_QWORD*)(*((_QWORD*)v123 + 1605) + 8 * v23 + 40) = 0;
              *(_QWORD*)(*((_QWORD*)v123 + 1605) + 8 * v23 + 48) = 0;
              v25 = *((_QWORD*)v123 + 1605) + 8 * v23;
              v23 += 8;
              *(_QWORD*)(v25 + 56) = 0;
            } while (v24 != v23);
          }
          else {
            v23 = 0;
          }
          if (v22 != 0) {
            v26 = 8 * v23;
            do {
              --v22;
              *(_QWORD*)(*((_QWORD*)v123 + 1605) + v26) = 0;
              v26 += 8;
            } while (v22 != 0);
          }
        }
        *((_QWORD*)v123 + 1608) = 0;
      }
      v27 = *v3;
      v10[3220] = 0;
      if (*(_DWORD*)(v27 + 4368) >= 3u &&
          *(_BYTE*)(*GameData_212cfd0[0] + 8) != 0 &&
          (v28 = game_UnitPool_Get_alt1((_BYTE*)(*GameData_212cfd0[0] + 8))) !=
              nullptr &&
          v28[49] != 0 && (*((_BYTE*)v28 + 417) & 0x1C) == 0 &&
          (*(float (**)(__int64*))(v28[19] + 16))(v28 + 19) > 0x0.0p+0f) {
        v29 = *(_QWORD*)(*v3 + 248);
        v30 = *(_QWORD*)(*v3 + 256);
        while (v29 != v30) {
          v46 = GameRoutine_f097d0(*v3),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v46 != 0) {
            game_Unit_IsImmobile_alt1(v46),
                v40 =
                    COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v42 =
                    COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v44 =
                    COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v29 += 4;
        }
      }
      else {
        v32 = *(char**)(*v3 + 248);
        v31 = *(char**)(*v3 + 256);
        if (v32 != v31) {
          v33 = *(_QWORD*)(*v3 + 24);
          do {
            v34 = *v3;
            v35 = *v32;
            v36 = v32[1];
            v37 = GameRoutine_f097d0(*v3),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v42 = COERCE_AS(__typeof__(v42),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v44 = COERCE_AS(__typeof__(v44),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (v37 == 0 || (game_Unit_IsImmobile_alt1(v37) & 1) != 0 ||
                ((*(_DWORD*)(v34 + 4408 + 4LL * ((int)(v35 + 32 * v36) >> 5)) >>
                  v35) &
                 1) == 0) {
              v38 = GameRoutine_f25920_alt1(v33 + 127472, v35, v36, 0, 0),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v39 = 0;
              if ((v38 & 1) != 0) {
                GameHr_fbb8a0(v35, v36, *(_QWORD*)(v33 + 254664)),
                    v40 = COERCE_AS(
                        __typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v42 = COERCE_AS(
                        __typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v44 = COERCE_AS(
                        __typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v39 = (v40 & 0xFFFFFFFE) == 2;
              }
              v41 = GameRoutine_f25920_alt1(v33 + 127472, v35, v36, 1u, 0),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if ((v41 & 1) != 0) {
                GameHr_fbb8a0(v35, v36, *(_QWORD*)(v33 + 254664)),
                    v40 = COERCE_AS(
                        __typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v42 = COERCE_AS(
                        __typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v44 = COERCE_AS(
                        __typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                if (v42 == 1) {
                  GameRoutine_845840_alt1((_QWORD*)(v33 + 242288), v35, v36),
                      v40 = COERCE_AS(
                          __typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v42 = COERCE_AS(
                          __typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v44 = COERCE_AS(
                          __typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
              }
              v43 = GameRoutine_f25920_alt1(v33 + 127472, v35, v36, 2u, 0),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if ((v43 & 1) != 0) {
                GameHr_fbb8a0(v35, v36, *(_QWORD*)(v33 + 254664)),
                    v40 = COERCE_AS(
                        __typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v42 = COERCE_AS(
                        __typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v44 = COERCE_AS(
                        __typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                if (v44 == 2) {
                  GameRoutine_845840_alt1((_QWORD*)(v33 + 242288), v35, v36),
                      v40 = COERCE_AS(
                          __typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v42 = COERCE_AS(
                          __typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v44 = COERCE_AS(
                          __typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
              }
              if ((v38 & 1) != 0) {
                v45 = 3;
                if ((_DWORD)v39 == 0) {
                  v45 = 0;
                }
                MassMeshData_f445e0((__int64)(v123 + 4), 0, v35, v36, v39, v39,
                                    v45 | (v39 << 32), 1),
                    v40 = COERCE_AS(
                        __typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v42 = COERCE_AS(
                        __typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v44 = COERCE_AS(
                        __typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              if ((v41 & 1) != 0) {
                MassMeshData_f445e0((__int64)(v123 + 4), 1, v35, v36, 0, 0, 0,
                                    1),
                    v40 = COERCE_AS(
                        __typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v42 = COERCE_AS(
                        __typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v44 = COERCE_AS(
                        __typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              v3 = (__int64*)GameData_212d020[0];
              if ((v43 & 1) != 0) {
                MassMeshData_f445e0((__int64)(v123 + 4), 2, v35, v36, 0, 0, 0,
                                    1),
                    v40 = COERCE_AS(
                        __typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v42 = COERCE_AS(
                        __typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v44 = COERCE_AS(
                        __typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
            }
            v32 += 4;
          } while (v32 != v31);
        }
      }
    }
  LABEL_179:
    v1 = v123;
    *((_BYTE*)v123 + 8) = 0;
  }
  MassMeshData_f44f60((__int64)(v1 + 6)),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  MassMeshData_f44f60((__int64)(v1 + 12)),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  MassMeshData_f44f60((__int64)(v1 + 18)),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  MassMeshData_f44f60((__int64)(v1 + 24)),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
}

__int64 MapPanelDeployAction_Destructor(_QWORD* a1)
{
  *a1 = game_map_MapPanelDeployAction_vtable;
  MapDrawTargetSelectInfo_Destructor(a1 + 62);
  a1[2] = game_map_MassMeshGroup_vtable;
  GameRoutine_f43b80(a1 + 16);
  GameRoutine_f16a70(a1[13]);
  GameRoutine_f16a70(a1[10]);
  GameRoutine_f16a70(a1[7]);
  return GameRoutine_f16a70(a1[4]);
}

__int64 MapPanelDeployAction_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;

  *a1 = game_map_MapPanelDeployAction_vtable;
  MapDrawTargetSelectInfo_Destructor(a1 + 62);
  a1[2] = game_map_MassMeshGroup_vtable;
  GameRoutine_f43b80(a1 + 16);
  GameRoutine_f16a70(a1[13]);
  GameRoutine_f16a70(a1[10]);
  GameRoutine_f16a70(a1[7]);
  GameRoutine_f16a70(a1[4]);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

#pragma GCC visibility pop
