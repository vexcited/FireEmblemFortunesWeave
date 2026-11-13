#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e35470(_QWORD);
__int64 GameRoutine_e42820(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_combat_LegionStackAttack_vtable[])();
extern __int64 (*game_combat_LegionStack_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212f3c0[7];
__int64 LegionStackAttack_Unknown4(_QWORD* a1);
__int64 LegionStackAttack_Unknown5(__int64 a1);
__int64 LegionStackAttack_Destructor_alt1(__int64 a1) __asm__(
    "LegionStackAttack_Destructor");
__int64 LegionStackAttack_DeletingDestructor_alt1(__int64 a1) __asm__(
    "LegionStackAttack_DeletingDestructor");
__int64 Signal_d30dc0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LegionStackAttack_e35470_alt1(__int64 result) __asm__(
    "LegionStackAttack_e35470");
__int64 CharacterAnimator_107a7e0(void);
__int64 GameRoutine_e3f8b0(_QWORD);
__int64 GameRoutine_e41bc0(_QWORD);
__int64 game_combat_LegionStackAttack_OnEnter_lambda2_Invoke(__int64 result,
                                                             __int64 a2);
_QWORD* GameRoutine_e34780(__int64*, _QWORD*);
_WORD* GameRoutine_6d7b80(__int64);
__int64 GameRoutine_10a09d0(__int64);
__int64 Signal_d30a60(__int64**, const char*, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_combat_e414c0(__int64, float*);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
bool GameHr_e412a0(__int64, int);
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_1fe3f10[])();
extern __int64 (*GameData_1fe3f90[])();
extern __int64 (*GameData_1fe4010[])();
extern __int64 (*GameData_1fe4090[])();
extern __int64* GameData_212c880[5];
extern __int64* GameData_212d2f0;
extern __int64* GameData_212f340[14];
extern __int64* GameData_212f350[12];
extern __int64* game_map_MapRandom_instance__ptr[3];
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 (***LegionStackAttack_Unknown2(__int64 a1))();
_QWORD* Signal_d30dc0_alt1(__int64, const char*, __int64,
                           int) __asm__("Signal_d30dc0");
void LegionStackAttack_Destructor(__int64 a1);
void LegionStackAttack_DeletingDestructor(__int64 a1);
void LegionStackAttack_e35470(__int64* a1);
void GameRoutine_e5d3b0(__int64, __int64, int8x16_t*, __int64);
void game_edea70(__int64, float, float);
void game_combat_LegionStackAttack_OnEnter_lambda3_Invoke(__int64 a1);

__int64 (***LegionStackAttack_Unknown2(__int64 a1))()
{

#pragma clang fp contract(off)
  int v1;
  _BOOL4 v3;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  char v14;
  __int64* v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  _QWORD* v21;
  __int64* v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD* v26;
  __int64 v27;
  bool v28;
  __int64 v29;
  __int64 v30;
  int v31;
  _WORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 (**v45)();
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  int v50;
  __int64 v51;
  __int64 (***v52)();
  __int64 v53;
  __int64 v54;
  __int64 v55;
  char* v56;
  unsigned __int64 v57;
  bool v58;
  unsigned __int64 v59;
  const char* v60;
  __int64 v61;
  __int64 v62;
  __int64 (***v63)();
  __int64 v64;
  __int64 v65;
  __int64 v66;
  char* v67;
  unsigned __int64 v68;
  bool v69;
  unsigned __int64 v70;
  const char* v71;
  __int64 v72;
  __int64 v73;
  __int64 (***v74)();
  __int64 v75;
  __int64 v76;
  __int64 v77;
  char* v78;
  unsigned __int64 v79;
  bool v80;
  unsigned __int64 v81;
  const char* v82;
  __int64 v83;
  __int64 v84;
  __int64 (***result)();
  __int64 v86;
  __int64 v87;
  __int64 v88;
  char* v89;
  unsigned __int64 v90;
  bool v91;
  unsigned __int64 v92;
  const char* v93;
  __int64 v94;
  struct {
    __int64 (**v95)();
    __int64 v96;
    __int64 v97;
    __int64 v98;
    __int64 (***v99)();
    __int64 v100;
    __int64 v101;
    char v102;
  } v95_;

  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v1 = *(_DWORD*)(a1 + 52);
  v3 = false;
  if (v1 > 603384299) {
    if (((unsigned int)(v1 - 603384300) > 0x12 ||
         ((1 << (v1 + 20)) & 0x40007) == 0) &&
        ((unsigned int)(v1 - 603384486) > 0x12 ||
         ((1 << ((v1 + 90) & 31)) & 0x40007) == 0)) {
      goto LABEL_24;
    }
  LABEL_19:
    v8 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 56LL);
    v9 = *(_QWORD*)(v8 + 392);
    v10 = *(_QWORD*)(v8 + 400);
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
      v11 = *(_QWORD*)(v9 + 11616);
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v44 = COERCE_AS(__typeof__(v44),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        std___1___shared_weak_count___release_weak_alt1(v10),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v44 = COERCE_AS(__typeof__(v44),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
    }
    else {
      v11 = *(_QWORD*)(v9 + 11616);
    }
    v1 = *(_DWORD*)(a1 + 52);
    v3 = v11 != 0;
    goto LABEL_24;
  }
  if (v1 == 309207023 || v1 == 309207191 || v1 == 309207209) {
    goto LABEL_19;
  }
LABEL_24:
  v12 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 104LL);
  if (GameHr_e412a0(v12, v1)) {
    *(_DWORD*)(v12 + 48) = v1;
    v13 = *(_BYTE*)(v12 + 80);
    *(_DWORD*)(v12 + 52) = 0;
    *(_BYTE*)(v12 + 56) = 0;
    *(_DWORD*)(v12 + 60) = 0;
    *(_BYTE*)(v12 + 64) = 0;
    *(_DWORD*)(v12 + 68) = 0;
    *(_BYTE*)(v12 + 72) = 0;
    *(_DWORD*)(v12 + 76) = 0;
    if ((v13 & 1) == 0) {
      *(_BYTE*)(v12 + 80) = 1;
    }
    if ((*(_BYTE*)(v12 + 44) & 1) == 0 &&
        (game_combat_e414c0(v12, (float*)(v12 + 48)) & 1) != 0 &&
        (*(_BYTE*)(v12 + 80) & 1) != 0) {
      *(_BYTE*)(v12 + 80) = 0;
    }
  }
  if (*(_BYTE*)(a1 + 233) == 1) {
    v14 = *(_BYTE*)(a1 + 232);
  }
  else {
    nn_os_LockMutex((__int64)&game_g_random_mutex),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v15 = game_map_MapRandom_instance__ptr[0];
    v16 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL));
    v17 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
    v18 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
          (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
    *((_DWORD*)v15 + 1) = v16;
    v19 = (v18 >> 8) ^ (v17 >> 19) ^ v18 ^ v17;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v15) = v17;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v15 + 4) = v19;
    v20 = v19 & 0x7FFFFFFF;
    nn_os_UnlockMutex((__int64)&game_g_random_mutex),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v14 = v20 % 0x64 > 9 || v3;
  }
  v21 = *(_QWORD**)(a1 + 40);
  v22 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v3 && (v23 = (_QWORD*)v21[9]) != nullptr) {
    v95_.v102 = 0;
    v95_.v100 = 0;
    v95_.v101 = 0;
    v24 = v21[6];
    v95_.v98 = 0;
    v95_.v99 = nullptr;
    v95_.v96 = 0;
    v95_.v97 = 0;
    if (v24 != 0) {
      if (*(_QWORD*)(v24 + 8) == -1 || v21[7] == 0) {
        v24 = 0;
      }
      else {
        v24 = v21[1];
      }
    }
    v95_.v96 = v24;
    v27 = v23[6];
    if (v27 == 0 ||
        (*(_QWORD*)(v27 + 8) != -1 ? (v28 = v23[7] == 0) : (v28 = true), v28)) {
      v29 = 0;
    }
    else {
      v29 = v23[1];
    }
    v95_.v97 = v29;
    v30 = v21[2];
    if ((v14 & 1) != 0) {
      v31 = 2;
    }
    else {
      v31 = 1;
    }
    LODWORD(v95_.v95) = v31;
    if (v30 != 0 && (*GameRoutine_6d7b80(v30) & 0xFFF) != 0) {
      v32 = GameRoutine_6d7b80(v30),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if ((*(_DWORD*)v32 & 0xFFF) != 0) {
        v33 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                    8LL * (*(_DWORD*)v32 & 0xFFF)) +
                         792LL);
      }
      else {
        v33 = 0;
      }
      v95_.v101 = v33;
    }
    v26 = (_QWORD*)GameRoutine_10a09d0((__int64)&v95_.v95),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if ((v95_.v98 & 1) != 0 && v95_.v100 != 0) {
      v34 = 128;
      if (*(_QWORD*)(*v22 + 200) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v22 + v34, v95_.v100),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    v21 = *(_QWORD**)(a1 + 40);
  }
  else {
    v26 = nullptr;
  }
  v35 = *(_QWORD*)(v21[14] + 184LL);
  v36 = fw_memory_HeapManager_Allocate(*v22, 88, 16, 0),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  *(_QWORD*)(v36 + 16) = 0;
  *(_QWORD*)v36 = GameData_212f350[0] + 2;
  *(_QWORD*)(v36 + 8) = 0;
  v37 = *(_QWORD*)(v35 + 8);
  v38 = GameData_212f340[0];
  *(_DWORD*)(v36 + 63) = 0;
  *(_QWORD*)(v36 + 48) = 0;
  *(_QWORD*)(v36 + 56) = 0;
  *(_QWORD*)(v36 + 24) = v38 + 2;
  v39 = GameData_212d2f0;
  *(_DWORD*)(v36 + 80) = 0;
  *(_QWORD*)(v36 + 32) = v37;
  *(_QWORD*)(v36 + 40) = 0;
  *(_BYTE*)(v36 + 64) = v14 & 1;
  *(_QWORD*)(v36 + 72) = v39 + 2;
  if (v26 != nullptr) {
    v40 = v26[120];
    v41 = v26[121];
    if (v41 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 16), 1u,
                                memory_order_relaxed);
      v42 = v26[122];
      *(_QWORD*)(v36 + 48) = v41;
    }
    else {
      v42 = v26[122];
    }
    *(_QWORD*)(v36 + 40) = v40;
    *(_QWORD*)(v36 + 56) = v42;
  }
  v95_.v95 = (__int64 (**)(void))(v36 + 24),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v95_.v96 = v36;
  GameRoutine_e34780((__int64*)(v35 + 16), &v95_.v95),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v45 = v95_.v95;
  v46 = v95_.v96;
  v47 = *(_QWORD*)(a1 + 224);
  v95_.v95 = nullptr;
  v95_.v96 = 0;
  *(_QWORD*)(a1 + 216) = v45;
  *(_QWORD*)(a1 + 224) = v46;
  if (v47 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    std___1___shared_weak_count___release_weak_alt1(v47),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  v48 = v95_.v96;
  if (v95_.v96 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v95_.v96 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    std___1___shared_weak_count___release_weak_alt1(v48),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  v49 = *(_QWORD*)(a1 + 216);
  v50 = *(_DWORD*)(v49 + 56);
  *(_DWORD*)(v49 + 56) = v50 + 1;
  if (v50 == 0) {
    (**(void (***)(__int64))(v49 + 48))(v49 + 48),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  v51 = *(_QWORD*)(a1 + 40);
  v52 = &v95_.v95;
  v95_.v95 = GameData_1fe3f10;
  v95_.v96 = a1;
  v95_.v99 = &v95_.v95;
  v53 = *(_QWORD*)(v51 + 48);
  if (v53 != 0) {
    v52 = &v95_.v95;
    v54 = 4;
    if (*(_QWORD*)(v53 + 8) == -1) {
      goto LABEL_97;
    }
    v55 = *(_QWORD*)(v51 + 56);
    if (v55 == 0) {
      goto LABEL_97;
    }
    if ((*(_BYTE*)(a1 + 72) & 1) != 0) {
      *(_QWORD*)(a1 + 80) = 12;
      v56 = *(char**)(a1 + 88);
    }
    else {
      *(_BYTE*)(a1 + 72) = 24;
      v56 = (char*)(a1 + 73);
    }
    strcpy(v56, "Signal_Evade");
    *(_QWORD*)(a1 + 56) = v51;
    v57 = *(unsigned __int8*)(a1 + 72);
    v58 = (v57 & 1) == 0;
    v59 = v57 >> 1;
    v60 = v58 ? (const char*)(a1 + 73) : *(const char**)(a1 + 88);
    v61 = v58 ? v59 : *(_QWORD*)(a1 + 80);
    *(_DWORD*)(a1 +
               64) =
        Signal_d30a60(*(__int64***)(v55 + 320), v60, v61, (__int64)&v95_.v95),
               v43 = COERCE_AS(__typeof__(v43),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
               v44 = COERCE_AS(__typeof__(v44),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v52 = v95_.v99;
    *(_BYTE*)(a1 + 68) = 1;
    if (v52 != &v95_.v95) {
      if (v52 != nullptr) {
        v54 = 5;
      LABEL_97:
        ((void (*)(__int64 (***)(void), __int64, __int64))(*v52)[v54])(v52, v43,
                                                                       v44),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v44 = COERCE_AS(__typeof__(v44),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      v62 = *(_QWORD*)(a1 + 40);
      v63 = &v95_.v95;
      v95_.v95 = GameData_1fe3f90;
      v95_.v96 = a1;
      v95_.v99 = &v95_.v95;
      v64 = *(_QWORD*)(v62 + 48);
      if (v64 != 0) {
        v63 = &v95_.v95;
        v65 = 4;
        if (*(_QWORD*)(v64 + 8) == -1) {
          goto LABEL_114;
        }
        v66 = *(_QWORD*)(v62 + 56);
        if (v66 == 0) {
          goto LABEL_114;
        }
        if ((*(_BYTE*)(a1 + 112) & 1) != 0) {
          *(_QWORD*)(a1 + 120) = 10;
          v67 = *(char**)(a1 + 128);
        }
        else {
          *(_BYTE*)(a1 + 112) = 20;
          v67 = (char*)(a1 + 113);
        }
        strcpy(v67, "Signal_Hit");
        *(_QWORD*)(a1 + 96) = v62;
        v68 = *(unsigned __int8*)(a1 + 112);
        v69 = (v68 & 1) == 0;
        v70 = v68 >> 1;
        v71 = v69 ? (const char*)(a1 + 113) : *(const char**)(a1 + 128);
        v72 = v69 ? v70 : *(_QWORD*)(a1 + 120);
        *(_DWORD*)(a1 + 104) = Signal_d30a60(*(__int64***)(v66 + 320), v71, v72,
                                             (__int64)&v95_.v95),
                        v43 = COERCE_AS(
                            __typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v44 = COERCE_AS(
                            __typeof__(v44),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v63 = v95_.v99;
        *(_BYTE*)(a1 + 108) = 1;
        if (v63 != &v95_.v95) {
          if (v63 != nullptr) {
            v65 = 5;
          LABEL_114:
            ((void (*)(__int64 (***)(void), __int64, __int64))(*v63)[v65])(
                v63, v43, v44),
                v43 =
                    COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v44 =
                    COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          }
          v73 = *(_QWORD*)(a1 + 40);
          v74 = &v95_.v95;
          v95_.v95 = GameData_1fe4010;
          v95_.v96 = a1;
          v95_.v99 = &v95_.v95;
          v75 = *(_QWORD*)(v73 + 48);
          if (v75 != 0) {
            v74 = &v95_.v95;
            v76 = 4;
            if (*(_QWORD*)(v75 + 8) == -1) {
              goto LABEL_131;
            }
            v77 = *(_QWORD*)(v73 + 56);
            if (v77 == 0) {
              goto LABEL_131;
            }
            if ((*(_BYTE*)(a1 + 152) & 1) != 0) {
              *(_QWORD*)(a1 + 160) = 11;
              v78 = *(char**)(a1 + 168);
            }
            else {
              *(_BYTE*)(a1 + 152) = 22;
              v78 = (char*)(a1 + 153);
            }
            strcpy(v78, "Signal_Jump");
            *(_QWORD*)(a1 + 136) = v73;
            v79 = *(unsigned __int8*)(a1 + 152);
            v80 = (v79 & 1) == 0;
            v81 = v79 >> 1;
            v82 = v80 ? (const char*)(a1 + 153) : *(const char**)(a1 + 168);
            v83 = v80 ? v81 : *(_QWORD*)(a1 + 160);
            *(_DWORD*)(a1 + 144) = Signal_d30a60(*(__int64***)(v77 + 320), v82,
                                                 v83, (__int64)&v95_.v95),
                            v43 = COERCE_AS(__typeof__(v43),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                            v44 = COERCE_AS(__typeof__(v44),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x2", "=r"));
            v74 = v95_.v99;
            *(_BYTE*)(a1 + 148) = 1;
            if (v74 != &v95_.v95) {
              if (v74 != nullptr) {
                v76 = 5;
              LABEL_131:
                ((void (*)(__int64 (***)(void), __int64, __int64))(*v74)[v76])(
                    v74, v43, v44),
                    v43 = COERCE_AS(
                        __typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v44 = COERCE_AS(
                        __typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
              }
              v84 = *(_QWORD*)(a1 + 40);
              result = &v95_.v95;
              v95_.v95 = GameData_1fe4090;
              v95_.v96 = a1;
              v95_.v99 = &v95_.v95;
              v86 = *(_QWORD*)(v84 + 48);
              if (v86 == 0) {
                goto LABEL_147;
              }
              result = &v95_.v95;
              v87 = 4;
              if (*(_QWORD*)(v86 + 8) == -1) {
                return (__int64 (***)(void))(
                    (__int64 (*)(__int64 (***)(void), __int64, __int64))(
                        *result)[v87])(result, v43, v44);
              }
              v88 = *(_QWORD*)(v84 + 56);
              if (v88 == 0) {
                return (__int64 (***)(void))(
                    (__int64 (*)(__int64 (***)(void), __int64, __int64))(
                        *result)[v87])(result, v43, v44);
              }
              if ((*(_BYTE*)(a1 + 192) & 1) != 0) {
                *(_QWORD*)(a1 + 200) = 12;
                v89 = *(char**)(a1 + 208);
              }
              else {
                *(_BYTE*)(a1 + 192) = 24;
                v89 = (char*)(a1 + 193);
              }
              strcpy(v89, "Signal_Shoot");
              *(_QWORD*)(a1 + 176) = v84;
              v90 = *(unsigned __int8*)(a1 + 192);
              v91 = (v90 & 1) == 0;
              v92 = v90 >> 1;
              v93 = v91 ? (const char*)(a1 + 193) : *(const char**)(a1 + 208);
              v94 = v91 ? v92 : *(_QWORD*)(a1 + 200);
              *(_DWORD*)(a1 +
                         184) = Signal_d30a60(*(__int64***)(v88 + 320), v93,
                                              v94, (__int64)&v95_.v95),
                         v43 = COERCE_AS(
                             __typeof__(v43),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                         v44 = COERCE_AS(
                             __typeof__(v44),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
              result = v95_.v99;
              *(_BYTE*)(a1 + 188) = 1;
              if (result == &v95_.v95) {
              LABEL_147:
                v87 = 4;
              }
              else {
                if (result == nullptr) {
                  return result;
                }
                v87 = 5;
              }
              return (__int64 (***)(void))(
                  (__int64 (*)(__int64 (***)(void), _QWORD, _QWORD))(
                      *result)[v87])(result, v43, v44);
            }
          }
          v76 = 4;
          goto LABEL_131;
        }
      }
      v65 = 4;
      goto LABEL_114;
    }
  }
  v54 = 4;
  goto LABEL_97;
}

__int64 LegionStackAttack_Unknown4(_QWORD* a1)
{
  __int64 result;
  int v3;
  __int64 v4;
  __int64 v5;

  result = a1[27];
  v3 = *(_DWORD*)(result + 56) - 1;
  *(_DWORD*)(result + 56) = v3;
  if (v3 == 0) {
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)(result + 48) + 8LL))(result + 48);
  }
  v4 = a1[28];
  a1[27] = 0;
  a1[28] = 0;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    result = std___1___shared_weak_count___release_weak(v4);
  }
  v5 = *(_QWORD*)(a1[5] + 120LL);
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)(v5 + 88) = 0;
  *(_DWORD*)(v5 + 116) = 0;
  return result;
}

__int64 LegionStackAttack_Unknown5(__int64 a1)
{
  char v2;

  if ((GameRoutine_e42820(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 104LL)) & 1) != 0) {
    v2 = *(_BYTE*)(*(_QWORD*)(a1 + 216) + 41LL);
  }
  else {
    v2 = 0;
  }
  return v2 & 1;
}

void LegionStackAttack_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;

  v1 = *(_QWORD*)(a1 + 224);
  *(_QWORD*)a1 = game_combat_LegionStackAttack_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt1(v1);
  }
  LegionStackAttack_e35470((__int64*)(a1 + 176));
  LegionStackAttack_e35470((__int64*)(a1 + 136));
  LegionStackAttack_e35470((__int64*)(a1 + 96));
  LegionStackAttack_e35470((__int64*)(a1 + 56));
  *(_QWORD*)a1 = game_combat_LegionStack_vtable;
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 32);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
    }
  }
}

void LegionStackAttack_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 224);
  *(_QWORD*)a1 = game_combat_LegionStackAttack_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt1(v1);
  }
  LegionStackAttack_e35470((__int64*)(a1 + 176));
  LegionStackAttack_e35470((__int64*)(a1 + 136));
  LegionStackAttack_e35470((__int64*)(a1 + 96));
  LegionStackAttack_e35470((__int64*)(a1 + 56));
  *(_QWORD*)a1 = GameData_212f3c0[0] + 2;
  v3 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 32);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v6 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v6, a1);
}

void LegionStackAttack_e35470(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v5;
  __int64* v6;
  bool v7;
  __int64 v8;
  const char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = *a1;
  if (*a1 != 0 && *((_BYTE*)a1 + 12) == 1) {
    v2 = *(_QWORD*)(v1 + 48);
    if (v2 != 0) {
      v3 = *(_QWORD*)(v1 + 56);
      if (*(_QWORD*)(v2 + 8) != -1 && v3 != 0) {
        v5 = *((unsigned __int8*)a1 + 16);
        v6 = a1;
        v7 = (v5 & 1) == 0;
        v8 = v5 >> 1;
        if (v7) {
          v9 = (char*)a1 + 17;
        }
        else {
          v9 = (const char*)a1[4];
        }
        if (v7) {
          v10 = v8;
        }
        else {
          v10 = a1[3];
        }
        Signal_d30dc0_alt1(*(_QWORD*)(v3 + 320), v9, v10, *((_DWORD*)a1 + 2));
        a1 = v6;
      }
    }
  }
  if ((a1[2] & 1) != 0) {
    v11 = a1[4];
    if (v11 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v11);
    }
  }
}

__int64 game_combat_LegionStackAttack_OnEnter_lambda2_Invoke(__int64 result,
                                                             __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  __int64 v22;
  float v23;
  float v24;
  __int64 v25;

  v2 = *(_QWORD*)(result + 8);
  v3 = *(_QWORD**)(v2 + 40);
  v4 = v3[9];
  if (v4 != 0) {
    v5 = v3[15];
    v6 = *(_QWORD*)(v4 + 120);
    v7 = *(float*)(v6 + 16);
    v8 = *(float*)(v6 + 20);
    v9 = v8 - *(float*)(v5 + 20);
    v10 = v7 - *(float*)(v5 + 16);
    v11 = (float)(v9 * v9) + (float)(v10 * v10);
    if (v11 >= 0.00000011921f) {
      v14 = 1.0f / sqrtf(v11);
      v13 = v10 * v14;
      v12 = v9 * v14;
    }
    else {
      v12 = 1.0f;
      v13 = 0.0f;
    }
    v15 = *(float*)(*(_QWORD*)a2 + 32LL);
    result = GameRoutine_e41bc0(v3[13]);
    if (result != 0) {
      v16 = fabsf(v15);
      v17 = v16 * v13;
      v18 = v16 * v12;
      v19 = v7 - v17;
      v20 = v8 - v18;
      result = CharacterAnimator_107a7e0();
      v21 = *(float*)(result + 4);
      v22 = *(_QWORD*)(*(_QWORD*)(v2 + 40) + 120LL);
      *(_QWORD*)(v22 + 120) = 0;
      if (v21 <= 0.0f) {
        *(float*)(v22 + 24) = v19;
        *(float*)(v22 + 28) = v20;
        *(float*)(v22 + 16) = v19;
        *(float*)(v22 + 20) = v20;
        v25 = *(_QWORD*)(v22 + 8);
        *(_DWORD*)(v22 + 116) = 0;
        *(_QWORD*)(v22 + 40) = 0;
        *(_QWORD*)(v22 + 80) = 0;
        *(_QWORD*)(v22 + 88) = 0;
        return GameRoutine_e3f8b0(v25);
      }
      else {
        v23 = *(float*)(v22 + 16);
        v24 = *(float*)(v22 + 20);
        *(_QWORD*)(v22 + 80) = 0;
        *(_QWORD*)(v22 + 88) = 0;
        *(float*)(v22 + 24) = v19;
        *(float*)(v22 + 28) = v20;
        *(_DWORD*)(v22 + 116) = 3;
        *(float*)(v22 + 80) = v21;
        *(float*)(v22 + 40) = v23;
        *(float*)(v22 + 44) = v24;
        *(float*)(v22 + 32) = (float)(1.0f / v21) * (float)(v19 - v23);
        *(float*)(v22 + 36) = (float)(1.0f / v21) * (float)(v20 - v24);
      }
    }
  }
  return result;
}

void game_combat_LegionStackAttack_OnEnter_lambda3_Invoke(__int64 a1)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  struct {
    char v9[16];
    __int64 v10;
  } v9_;
  _BYTE v11[24];

  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 40LL);
  v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 64) + 8LL) + 40LL);
  if (v4 != 0 && *(_DWORD*)(v4 + 8) == 2) {
    v5 = v4;
    v6 = v3;
    game_edea70(*(_QWORD*)(*(_QWORD*)(v4 + 96) + 40LL), 0x1.1eb8520000000p-5f,
                0x1.47ae140000000p-4f);
    v7 = *(_QWORD*)(v5 + 112);
    strcpy(v11, " Stratagem_Shot_A");
    v9_.v9[0] = 24;
    strcpy(&v9_.v9[1], "Loc_R_Weapon");
    GameRoutine_e5d3b0(v7, v6, (int8x16_t*)v11, (__int64)v9_.v9);
    if ((v9_.v9[0] & 1) != 0 && v9_.v10 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v9_.v10);
    }
  }
}

#pragma GCC visibility pop
