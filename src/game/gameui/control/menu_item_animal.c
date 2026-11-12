#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Element_1888840(__int64);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_20ff810[])();
extern __int64 (*GameData_2101d50[])();
extern __int64 (*game_gameui_control_MenuItemAnimal_vtable[])();
extern __int64 (*ui_control_MenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6e5c60(_QWORD);
__int64* MenuItemAnimal_18952e0(__int64* result);
__int64 MenuItemAnimal_Destructor(_QWORD* a1);
__attribute__((swiftcall)) void Element_1885a60(PSEUDO_X8, _QWORD* result);
__attribute__((swiftcall)) void GameRoutine_15d4100(PSEUDO_X8, _QWORD, _QWORD);
__int64 Element_1885bc0(_QWORD, _QWORD);
__int64 GameRoutine_18855c0(__int64 result, _QWORD*);
__int64 GameRoutine_18ae4d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 MenuItem_188b880(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*ui_Event_vtable[])();
extern __int64 GameData_21f1e08;
__int64 MenuItemAnimal_1895490(_QWORD* a1, char a2);
__int64 MenuItemAnimal_18955b0(_QWORD* a1, char a2);
__int64 MenuItemAnimal_18956d0(_QWORD* a1, char a2, int a3);
__int64 MenuItemAnimal_18957f0(_QWORD* a1, char a2, int a3);
__int64
MenuItemAnimal_1895910_alt1(__int64 result,
                            __int64* a2) __asm__("MenuItemAnimal_1895910");
__attribute__((swiftcall)) void
GameRoutine_15d4100_alt1(PSEUDO_X8, __int64*,
                         __int64*) __asm__("GameRoutine_15d4100");
__int64 Element_1885bc0_alt1(__int64, __int64*) __asm__("Element_1885bc0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void GameRoutine_18855c0_alt1(_QWORD*, _QWORD*) __asm__("GameRoutine_18855c0");
void MenuItemAnimal_1895910(__int64 a1, _QWORD* a2);
_DWORD* GameRoutine_932460(unsigned __int8*, __int64*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 Alignment_56b600(__int64 result);
__int64 AsyncLoadThumbImage_189a3a0(__int64*, __int64);
__int64 Element_18863e0(__int64, const char**, char);
__int64 GameRoutine_932360(unsigned __int8*, __int64*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 MenuItemAnimalAttack_1893370(_QWORD*);
__int64 MenuItemAnimalAttack_18934c0(__int64);
__int64 MenuItemAnimalName_1892c90(__int64);
__int64 MenuItemAnimalRage_1893c90(__int64);
__int64 MenuItemAnimalRage_1894570(_QWORD*);
__int64 MenuItemAnimalSkill_1893870(_QWORD*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
char* GameHr_6ed030(__int64);
extern _UNKNOWN* GameData_212c8a8;
extern _UNKNOWN GameData_1ac6c8b;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c8a0;
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212d890[2];
extern __int64 GameData_21f4018[];
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_157f4e0(__int64*, __int64, __int64);
void MenuItemAnimal_18952e0_alt1(__int64*) __asm__("MenuItemAnimal_18952e0");
void MenuItemSkill_1899480(__int64, unsigned int, char, char);
void MenuItem_188b880_alt1(__int64, __int64) __asm__("MenuItem_188b880");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_6e5c60_alt1() __asm__("GameRoutine_6e5c60");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 MenuItemAnimal_1894780(_QWORD* a1);
_QWORD* MenuItemAnimal_18953f0(__int64 a1);

__int64 MenuItemAnimal_1894780(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  int v4;
  __int64* v6;
  __int64* v7;
  int v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _DWORD* v19;
  _BOOL4 v20;
  const char* v21;
  const char* v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64* v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  char v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  int v47;
  _QWORD* v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _QWORD* v56;
  _QWORD* v57;
  __int64 v58;
  _DWORD* v59;
  __int64 v60;
  __int64* v61;
  _QWORD** v62;
  int v63;
  _QWORD* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  _QWORD* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  _QWORD* v75;
  __int64 v76;
  __int64 v77;
  int v78;
  __int64 v79;
  __int64* v80;
  __int64* v81;
  __int64 v82;
  int v83;
  _QWORD* v84;
  char* v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  unsigned int* v96;
  unsigned int v97;
  int v98;
  char v99;
  int v100;
  int v101;
  __int64 v102;
  int v103;
  int v104;
  int v105;
  int v106;
  bool v107;
  char v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  unsigned int v114;
  int v115;
  unsigned int* v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  int v121;
  char v122;
  int v123;
  __int64 v124;
  _DWORD* v125;
  int v126;
  __int64* v127;
  struct {
    __int64* v128;
    __int64 v129;
  } v128_;
  const char* v130[2];
  struct {
    __int64* v131;
    __int64* v132;
    unsigned __int64 v133;
  } v131_;

  v119 = COERCE_AS(__typeof__(v119),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v1 = a1[133];
  v2 = a1;
  if (v1 == 0) {
    result = LayoutAccessor_155e830((__int64)(a1 + 11), 0),
    v119 = COERCE_AS(__typeof__(v119),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v8 = 1;
    goto LABEL_150;
  }
  v3 = *(_QWORD*)(v1 + 400);
  v4 = *(unsigned __int8*)(v3 + 96);
  if (v4 == 2 && *(_BYTE*)(v1 + 1880) == 0) {
    v10 = *(_QWORD*)(v3 + 112);
    if (v10 != 0) {
      v7 = &GameData_21f4018[8 *
                             (unsigned __int64)*(unsigned __int8*)(v10 + 32)];
    }
    else {
      v7 = GameData_212c8b0[0];
    }
    v6 = a1 + 11;
    if (*(_BYTE*)v7 == 0) {
      goto LABEL_8;
    }
  }
  else {
    v6 = a1 + 11;
    if (v4 != 2) {
      LayoutAccessor_155e830((__int64)(a1 + 11), 0),
          v119 = COERCE_AS(__typeof__(v119),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v8 = 0;
      goto LABEL_148;
    }
    v7 = (__int64*)(v1 + 1880);
    if (*(_BYTE*)(v1 + 1880) == 0) {
    LABEL_8:
      MenuItemAnimalRage_1894570(a1),
          v119 = COERCE_AS(__typeof__(v119),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v8 = 1;
      goto LABEL_148;
    }
  }
  v127 = v6;
  LayoutAccessor_155e830((__int64)v6, 1),
      v119 = COERCE_AS(__typeof__(v119),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v11 = v2[133];
  v12 = *(_QWORD*)(v11 + 400);
  if (*(_QWORD*)(v12 + 88) != 0) {
    v13 = *(_QWORD*)(v11 + 400);
  }
  else {
    v13 = 0;
  }
  v14 = *(unsigned __int16*)(v13 + 128);
  if ((*(_WORD*)(v11 + 1536) & 0x40) == 0 ||
      (v15 = *(_QWORD*)(v11 + 1496), v16 = *(_QWORD*)(v11 + 1488),
       v15 == v16)) {
    v19 = GameData_212c8a8;
  }
  else {
    v17 = (v15 - v16) >> 2;
    v18 = 0;
    v19 = GameData_212c8a8;
    while (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                8LL * (*(_DWORD*)(v16 + 4 * v18) & 0xFFF)) +
                     104LL) != 6) {
      if (v17 == ++v18) {
        goto LABEL_25;
      }
    }
    v59 = (_DWORD*)(v16 + 4LL * (unsigned int)v18);
    if (v18 > -1) {
      v19 = v59;
    }
  }
LABEL_25:
  v125 = v19;
  v20 = (*v19 & 0xFFF) != 0 || v14 > 1;
  v126 = *v19 & 0xFFF;
  if (v20) {
    v21 = "AttackOn";
  }
  else {
    v21 = "AttackOff";
  }
  if (v20) {
    v22 = "MorphOn";
  }
  else {
    v22 = "MorphOff";
  }
  LayoutAccessor_1562cf0((__int64)v6, v21),
      v119 = COERCE_AS(__typeof__(v119),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LayoutAccessor_1562cf0((__int64)v6, v22),
      v119 = COERCE_AS(__typeof__(v119),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LayoutAccessor_1562cf0((__int64)v6, "SkillOn"),
      v119 = COERCE_AS(__typeof__(v119),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v23 = v2[135];
  if (v23 == 0) {
    v8 = 0;
    v24 = v2[138];
    if (v24 == 0) {
      goto LABEL_53;
    }
  LABEL_38:
    *(_QWORD*)(v24 + 24) = v2[133];
    v25 = (_QWORD*)v2[138];
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                             8LL * *(unsigned __int8*)v7) +
                  109LL) == 0) {
      MenuItemAnimalSkill_1893870(v25),
          v119 = COERCE_AS(__typeof__(v119),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      goto LABEL_53;
    }
    v26 = v25[3];
    if (v26 != 0) {
      v27 = *(_QWORD*)(v26 + 400);
      if (*(_BYTE*)(v27 + 96) == 2 && *(_BYTE*)(v26 + 1880) == 0) {
        v60 = *(_QWORD*)(v27 + 112);
        if (v60 != 0) {
          v29 = &GameData_21f4018[8 * (unsigned __int64)*(
                                          unsigned __int8*)(v60 + 32)];
        }
        else {
          v29 = GameData_212c8b0[0];
        }
        if (*(_BYTE*)v29 != 0) {
        LABEL_45:
          v30 = v25[2];
          if (v30 == 0) {
            goto LABEL_146;
          }
          v31 = *(_DWORD*)(v26 + 416);
          v124 = v2[138];
          v32 = std___1___shared_weak_count_lock_alt1(v30),
          v119 = COERCE_AS(__typeof__(v119),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v32 != 0) {
            v33 = v32;
            v34 = *(_QWORD*)(v124 + 8);
            if (v34 != 0) {
              v123 = v31;
              v35 = *(_QWORD*)(v124 + 24);
              v36 = 1;
              v37 = 0;
              if (v35 != 0 && *(_BYTE*)v29 != 0) {
                v131_.v131 = *(__int64**)(v35 + 392);
                v131_.v132 = (__int64*)v35;
                v37 = *(_DWORD*)GameRoutine_932360((unsigned __int8*)v29,
                                                   (__int64*)&v131_.v131),
                v119 =
                    COERCE_AS(__typeof__(v119),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                if ((v37 & 0xFFF) != 0) {
                  v36 = 0;
                }
                else {
                  v131_.v131 = *(__int64**)(v35 + 392);
                  v131_.v132 = (__int64*)v35;
                  v37 = *GameRoutine_932460((unsigned __int8*)v29,
                                            (__int64*)&v131_.v131),
                  v119 = COERCE_AS(
                      __typeof__(v119),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v36 = 1;
                }
              }
              v121 = v37;
              v122 = v36;
              (*(void (**)(__int64, bool))(*(_QWORD*)v34 + 152LL))(
                  v34, (v123 & 0x40000) == 0),
                  v119 = COERCE_AS(
                      __typeof__(v119),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              MenuItemSkill_1899480(v34, 1u, v122, 0),
                  v119 = COERCE_AS(
                      __typeof__(v119),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if ((*(_BYTE*)(v34 + 1080) & 1) == 0) {
                *(_BYTE*)(v34 + 1080) = 1;
              }
              *(_DWORD*)(v34 + 1076) = v121;
              *(_QWORD*)(v34 + 1096) = *(_QWORD*)(v124 + 24);
              v131_.v133 = 0;
              v131_.v131 = GameData_212d890[0] + 2;
              LODWORD(v131_.v132) = 20;
              (*(__attribute__((swiftcall)) void (**)(
                  PSEUDO_X8, __int64, __int64**))(*(_QWORD*)(v34 + 72) + 16LL))(
                  (void*)(v130), v34 + 72, &v131_.v131),
                  v119 = COERCE_AS(
                      __typeof__(v119),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33),
                    v119 = COERCE_AS(
                        __typeof__(v119),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                std___1___shared_weak_count___release_weak_alt1(v33),
                    v119 = COERCE_AS(
                        __typeof__(v119),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              LODWORD(v30) = 1;
            LABEL_146:
              v8 += v30;
              if (v20) {
                goto LABEL_54;
              }
            LABEL_147:
              v6 = v127;
              goto LABEL_148;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32),
                  v119 = COERCE_AS(
                      __typeof__(v119),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              std___1___shared_weak_count___release_weak_alt1(v33),
                  v119 = COERCE_AS(
                      __typeof__(v119),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
        LABEL_145:
          LODWORD(v30) = 0;
          goto LABEL_146;
        }
      }
      else {
        v29 = (__int64*)(v26 + 1880);
        if (*(_BYTE*)(v26 + 1880) != 0) {
          goto LABEL_45;
        }
      }
    }
    MenuItemAnimalSkill_1893870(v25),
        v119 = COERCE_AS(__typeof__(v119),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_145;
  }
  *(_QWORD*)(v23 + 24) = v2[133];
  *(_DWORD*)(v2[135] + 32LL) = *((_DWORD*)v2 + 268);
  v8 = MenuItemAnimalName_1892c90(v2[135]) & 1,
  v119 = COERCE_AS(__typeof__(v119),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v24 = v2[138];
  if (v24 != 0) {
    goto LABEL_38;
  }
LABEL_53:
  if (!v20) {
    goto LABEL_147;
  }
LABEL_54:
  if (v14 <= 1) {
    v56 = (_QWORD*)v2[136];
    if (v56 != nullptr) {
      MenuItemAnimalAttack_1893370(v56),
          v119 = COERCE_AS(__typeof__(v119),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v57 = (_QWORD*)v2[137];
    v6 = v127;
    if (v57 != nullptr) {
      MenuItemAnimalAttack_1893370(v57),
          v119 = COERCE_AS(__typeof__(v119),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v58 = v2[137];
      if (v58 != 0) {
        MenuItemAnimalAttack_18934c0(v58),
            v119 = COERCE_AS(__typeof__(v119),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  }
  else {
    v38 = *(unsigned __int16*)(v13 + 128);
    v131_.v132 = nullptr;
    v131_.v133 = 0;
    v131_.v131 = nullptr;
    if (v38 != 0) {
      v39 = 8;
      v40 = nullptr;
      do {
        v41 = *(_QWORD*)(*(_QWORD*)(v12 + 136) + v39);
        if ((unsigned __int64)v40 < v131_.v133) {
          *v40++ = v41;
        }
        else {
          v42 = (__int64)v131_.v131;
          v43 = (char*)v40 - (char*)v131_.v131;
          v44 = v40 - v131_.v131;
          v45 = v44 + 1;
          if ((unsigned __int64)(v44 + 1) >> 61 != 0) {
            GameRoutine_6e5c60_alt1(),
                v119 =
                    COERCE_AS(__typeof__(v119),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v46 = v131_.v133 - (_QWORD)v131_.v131;
          v47 = v8;
          v48 = v2;
          v49 = v12;
          if ((__int64)(v131_.v133 - (_QWORD)v131_.v131) >> 2 > v45) {
            v45 = v46 >> 2;
          }
          if ((unsigned __int64)v46 >= 0x7FFFFFFFFFFFFFF8LL) {
            v50 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v50 = v45;
          }
          if (v50 != 0) {
            if (v50 >> 61 != 0) {
              GameRoutine_60a210_alt1(),
                  v119 = COERCE_AS(
                      __typeof__(v119),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v51 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v50, 16, 0),
            v119 = COERCE_AS(__typeof__(v119),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          else {
            v51 = 0;
          }
          v52 = v51 + 8 * v50;
          v53 = v51 + v43 - 8 * v44;
          *(_QWORD*)(v51 + v43) = v41;
          v54 = v51 + v43 + 8;
          memcpy_alt1(v53, v42, v43),
              v119 = COERCE_AS(__typeof__(v119),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v131_.v131 = (__int64*)v53;
          v131_.v133 = v52;
          if (v42 != 0) {
            v55 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v55 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v55, v42),
                v119 =
                    COERCE_AS(__typeof__(v119),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v12 = v49;
          v2 = v48;
          v8 = v47;
          v40 = (__int64*)v54;
        }
        --v38;
        v39 += 16;
        v131_.v132 = v40;
      } while (v38 != 0);
    }
    else {
      MenuItemAnimal_18952e0_alt1((__int64*)&v131_.v131),
          v119 = COERCE_AS(__typeof__(v119),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v40 = v131_.v132;
    }
    v61 = v131_.v131;
    if (v131_.v131 != v40) {
      v62 = (_QWORD**)(v2 + 136);
      do {
        (*v62)[3] = v2[133];
        v64 = *v62;
        v65 = *v61;
        v66 = (*v62)[2];
        (*v62)[4] = *v61;
        if (v66 != 0) {
          v67 = std___1___shared_weak_count_lock_alt1(v66),
          v119 = COERCE_AS(__typeof__(v119),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v67 != 0) {
            v68 = v64[1];
            if (v68 != 0) {
              *(_QWORD*)(v68 + 1088) = v65;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v67 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v69 = v67;
              (*(void (**)(__int64))(*(_QWORD*)v67 + 16LL))(v67),
                  v119 = COERCE_AS(
                      __typeof__(v119),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              std___1___shared_weak_count___release_weak_alt1(v69),
                  v119 = COERCE_AS(
                      __typeof__(v119),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
        }
        v70 = *v62;
        v71 = (*v62)[2];
        if (v71 != 0) {
          v72 = std___1___shared_weak_count_lock_alt1(v71),
          v119 = COERCE_AS(__typeof__(v119),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v72 != 0) {
            v73 = v72;
            v74 = v70[1];
            if (v74 != 0) {
              (*(void (**)(__int64, __int64))(*(_QWORD*)v74 + 40LL))(v74, 1),
                  v119 = COERCE_AS(
                      __typeof__(v119),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v73 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v73 + 16LL))(v73),
                  v119 = COERCE_AS(
                      __typeof__(v119),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              std___1___shared_weak_count___release_weak_alt1(v73),
                  v119 = COERCE_AS(
                      __typeof__(v119),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
        }
        v75 = *v62;
        v76 = (*v62)[3];
        if (v76 != 0 && v75[4] != 0) {
          v77 = v75[2];
          if (v77 != 0 &&
              (v78 = *(_DWORD*)(v76 + 416),
               (v79 = std___1___shared_weak_count_lock_alt1(v77)) != 0)) {
            v80 = v40;
            v81 = (__int64*)v75[1];
            v82 = v79;
            if (v81 != nullptr) {
              (*(void (**)(_QWORD, bool))(*v81 + 152))(v75[1],
                                                       (v78 & 0x40000) == 0),
                  v119 = COERCE_AS(
                      __typeof__(v119),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v83 = 1;
              MenuItemSkill_1899480((__int64)v81, 1u, 0, 0),
                  v119 = COERCE_AS(
                      __typeof__(v119),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v84 = (_QWORD*)v75[4];
              if (v84 != nullptr && *v84 != 0) {
                v81[137] = v75[3];
                AsyncLoadThumbImage_189a3a0(v81, v75[4]),
                    v119 = COERCE_AS(
                        __typeof__(v119),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v85 = GameHr_6ed030(v75[4]),
                v119 =
                    COERCE_AS(__typeof__(v119),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v86 = v81[129];
                if (v86 != 0) {
                  GameRoutine_156c5d0(v86, (__int64)v85, 0),
                      v119 = COERCE_AS(
                          __typeof__(v119),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v87 = v81[129];
                  if (v87 != 0) {
                    *(_BYTE*)(v87 + 88) |= 1u;
                  }
                }
                v130[0] = "NumNone";
                v130[1] = (_BYTE*)((_UNKNOWN*)0x7LL);
                Element_18863e0((__int64)v81, v130, 1),
                    v119 = COERCE_AS(
                        __typeof__(v119),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v83 = 0;
              }
            }
            else {
              v83 = 1;
            }
            v40 = v80;
            if (atomic_fetch_add((atomic_ullong* volatile)(v82 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v82 + 16LL))(v82),
                  v119 = COERCE_AS(
                      __typeof__(v119),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              std___1___shared_weak_count___release_weak_alt1(v82),
                  v119 = COERCE_AS(
                      __typeof__(v119),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
          else {
            v83 = 1;
          }
          v63 = v83 ^ 1;
        }
        else {
          MenuItemAnimalAttack_1893370(*v62),
              v119 = COERCE_AS(__typeof__(v119),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v63 = 0;
        }
        v8 += v63;
        ++v61;
        ++v62;
      } while (v61 != v40);
      v61 = v131_.v131;
    }
    v6 = v127;
    if (v61 != nullptr) {
      v88 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v88 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v88, (__int64)v61),
          v119 = COERCE_AS(__typeof__(v119),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v89 = v2[139];
  if (v126 != 0) {
    *(_QWORD*)(v89 + 24) = v2[133];
    *(_BYTE*)(v2[139] + 32LL) = *((_BYTE*)v2 + 1078);
    v90 = v2[139];
    v91 = *(_QWORD*)(v90 + 24);
    if (v91 != 0) {
      if ((*(_WORD*)(v91 + 1536) & 0x40) == 0 ||
          (v92 = *(_QWORD*)(v91 + 1496), v93 = *(_QWORD*)(v91 + 1488),
           v92 == v93)) {
        v96 = (unsigned int*)GameData_212c8a8;
      }
      else {
        v94 = (v92 - v93) >> 2;
        v95 = 0;
        v96 = (unsigned int*)GameData_212c8a8;
        while (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                    8LL * (*(_DWORD*)(v93 + 4 * v95) & 0xFFF)) +
                         104LL) != 6) {
          if (v94 == ++v95) {
            goto LABEL_133;
          }
        }
        v116 = (unsigned int*)(v93 + 4LL * (unsigned int)v95);
        if (v95 > -1) {
          v96 = v116;
        }
      }
    LABEL_133:
      v97 = *v96;
      v98 = 0;
      if ((*v96 & 0xFFF) != 0) {
        v99 = 0;
        if ((*(_BYTE*)(v90 + 32) & 1) != 0) {
          v100 = (v97 >> 19) & 0x1F;
          v101 = (v97 >> 12) & 0x7F;
          v102 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                            8 * (*v96 & 0xFFFLL));
          v103 = *(unsigned __int8*)(v102 + 104);
          v104 = *(unsigned __int8*)(v102 + 273);
          if ((unsigned int)(v103 - 5) >= 2) {
            v105 = 0;
          }
          else {
            v105 = v100;
          }
          v106 = v105 - v101 + v104;
          v99 = v106 < 1;
          v107 = v106 < 1 || (*(_BYTE*)(v91 + 418) & 4) != 0;
          v109 = *(_QWORD*)(v91 + 440);
          v98 = v109 != 0 && *(_BYTE*)(v109 + 16) == 0 && v107;
        }
      }
      else {
        v99 = 0;
      }
      v110 = *(_QWORD*)(v90 + 16);
      if (v110 != 0) {
        v111 = std___1___shared_weak_count_lock_alt1(v110),
        v119 = COERCE_AS(__typeof__(v119),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v111 != 0) {
          v112 = *(_QWORD*)(v90 + 8);
          v113 = v111;
          if (v112 != 0) {
            (*(void (**)(_QWORD, _QWORD))(*(_QWORD*)v112 + 152LL))(
                *(_QWORD*)(v90 + 8), v98 ^ 1u),
                v119 =
                    COERCE_AS(__typeof__(v119),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            MenuItemSkill_1899480(v112, 1u, v98, v99),
                v119 =
                    COERCE_AS(__typeof__(v119),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v114 = *v96;
            if ((*(_BYTE*)(v112 + 1080) & 1) == 0) {
              *(_BYTE*)(v112 + 1080) = 1;
            }
            *(_DWORD*)(v112 + 1076) = v114;
            *(_QWORD*)(v112 + 1096) = *(_QWORD*)(v90 + 24);
            v131_.v133 = 0;
            v131_.v131 = GameData_212d890[0] + 2;
            LODWORD(v131_.v132) = 20;
            (*(__attribute__((swiftcall)) void (**)(
                PSEUDO_X8, __int64, __int64**))(*(_QWORD*)(v112 + 72) + 16LL))(
                (void*)(v130), v112 + 72, &v131_.v131),
                v119 =
                    COERCE_AS(__typeof__(v119),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (atomic_fetch_add((atomic_ullong* volatile)(v113 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v113 + 16LL))(v113),
                  v119 = COERCE_AS(
                      __typeof__(v119),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              std___1___shared_weak_count___release_weak_alt1(v113),
                  v119 = COERCE_AS(
                      __typeof__(v119),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v6 = v127;
            v115 = 1;
            goto LABEL_175;
          }
          v6 = v127;
          if (atomic_fetch_add((atomic_ullong* volatile)(v111 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v111 + 16LL))(v111),
                v119 =
                    COERCE_AS(__typeof__(v119),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            std___1___shared_weak_count___release_weak_alt1(v113),
                v119 =
                    COERCE_AS(__typeof__(v119),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
      }
    }
    else {
      MenuItemAnimalRage_1893c90(v2[139]),
          v119 = COERCE_AS(__typeof__(v119),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v115 = 0;
  LABEL_175:
    v8 += v115;
    LayoutAccessor_1560070((void*)(&v128_.v128), v6, "L_MorphRange"),
        v119 = COERCE_AS(__typeof__(v119),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v128_.v129 != 0) {
      v117 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                        8LL * (*v125 & 0xFFF));
      v118 = std___1___shared_weak_count_lock_alt1(v128_.v129),
      v119 = COERCE_AS(__typeof__(v119),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v118 != 0) {
        v120 = v118;
        if (v128_.v128 != nullptr) {
          GameRoutine_157f4e0(v128_.v128, v119, v117),
              v119 = COERCE_AS(__typeof__(v119),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v120 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v120 + 16LL))(v120),
              v119 = COERCE_AS(__typeof__(v119),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak_alt1(v120),
              v119 = COERCE_AS(__typeof__(v119),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      if (v128_.v129 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v128_.v129),
            v119 = COERCE_AS(__typeof__(v119),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    goto LABEL_148;
  }
  MenuItemAnimalRage_1893c90(v89),
      v119 = COERCE_AS(__typeof__(v119),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_148:
  result = ui_LayoutAccessor_FindAlignment(v6, (__int64)"A_MenuItem"),
  v119 = COERCE_AS(__typeof__(v119),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (result != 0) {
    result = Alignment_56b600(result),
    v119 = COERCE_AS(__typeof__(v119),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_150:
  if ((*((_BYTE*)v2 + 1076) & 1) == 0) {
    result = ui_LayoutAccessor_FindPane(v2 + 11, (__int64)&GameData_1ac6c8b),
    v119 = COERCE_AS(__typeof__(v119),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (result != 0) {
      if (v8 != 0) {
        v108 = *(_BYTE*)(result + 88) | 0x11;
        *(float*)(result + 84) =
            (float)((float)v8 * 0x1.8000000000000p+5f) + 0x1.0000000000000p+1f;
      }
      else {
        v108 = *(_BYTE*)(result + 88) & 0xFE;
      }
      *(_BYTE*)(result + 88) = v108;
    }
  }
  return result;
}

__int64* MenuItemAnimal_18952e0(__int64* result)
{
  unsigned __int64 v1;
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;

  v2 = (_QWORD*)result[1];
  v1 = result[2];
  v3 = result;
  if ((unsigned __int64)v2 >= v1) {
    v5 = *result;
    v6 = (__int64)v2 - *result;
    v7 = (v6 >> 3) + 1;
    if (v7 >> 61 != 0) {
      GameRoutine_6e5c60(result);
    }
    v8 = v1 - v5;
    v9 = fw_memory_g_heap_manager_ptr;
    if (v8 >> 2 > v7) {
      v7 = v8 >> 2;
    }
    if ((unsigned __int64)v8 >= 0x7FFFFFFFFFFFFFF8LL) {
      v10 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v10 = v7;
    }
    if (v10 != 0) {
      if (v10 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v11 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v10, 16, 0);
    }
    else {
      v11 = 0;
    }
    v12 = v11 + 8 * v10;
    v13 = v11 + v6 - 8 * (v6 >> 3);
    *(_QWORD*)(v11 + v6) = 0;
    v4 = v11 + v6 + 8;
    result = (__int64*)memcpy(v13, v5, v6);
    *v3 = v13;
    v3[1] = v4;
    v3[2] = v12;
    if (v5 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v14 = 56;
      }
      result = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v14);
    }
  }
  else {
    *v2 = 0;
    v4 = (__int64)(v2 + 1);
  }
  v3[1] = v4;
  return result;
}

_QWORD* MenuItemAnimal_18953f0(__int64 a1)
{
  __int64* v1;
  _QWORD* result;
  struct {
    __int64* v3;
    int v4;
    char gap20_[4];
    int* v5;
  } v3_;
  int v6;

  v6 = 2;
  v1 = GameData_212d890[0];
  v3_.v3 = GameData_212d890[0] + 2;
  v3_.v4 = 39;
  v3_.v5 = &v6;
  MenuItem_188b880_alt1(a1, (__int64)&v3_.v3);
  result = (_QWORD*)GameData_21f1e08;
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    v3_.v5 = nullptr;
    v3_.v3 = v1 + 2;
    v3_.v4 = 44;
    return X8CALL_X0(
        _QWORD*,
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64**))(
            *(_QWORD*)(GameData_21f1e08 + 8) + 16LL))(
            (void*)&v6, GameData_21f1e08 + 8, &v3_.v3));
  }
  return result;
}

__int64 MenuItemAnimal_1895490(_QWORD* a1, char a2)
{
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 result;
  __int64 (**v8)();
  __int64 v9;
  __int64 (**v10)();
  __int64 v11;
  __int64 (***v12)();

  Element_1885a60((void*)(&v8), a1);
  v4 = v9;
  v10 = nullptr;
  v11 = 0;
  if (v9 != 0) {
    v4 = std___1___shared_weak_count_lock(v9);
    v11 = v4;
    if (v4 != 0) {
      v10 = v8;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    v5 = GameRoutine_18ae4d0(GameData_21f1e08, &v10, 2, 0);
    v4 = v11;
    if (v11 == 0) {
      goto LABEL_11;
    }
  }
  else {
    v5 = 0;
    if (v4 == 0) {
      goto LABEL_11;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v6 = v4;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v6);
  }
LABEL_11:
  result = v9;
  if (v9 != 0) {
    result = std___1___shared_weak_count___release_weak(v9);
  }
  if ((v5 & 1) == 0) {
    LOBYTE(v8) = a2 & 1;
    HIDWORD(v8) = 1;
    v10 = ui_Event_vtable;
    LODWORD(v11) = 32;
    v12 = &v8;
    return MenuItem_188b880(a1, &v10);
  }
  return result;
}

__int64 MenuItemAnimal_18955b0(_QWORD* a1, char a2)
{
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 result;
  __int64 (**v8)();
  __int64 v9;
  __int64 (**v10)();
  __int64 v11;
  __int64 (***v12)();

  Element_1885a60((void*)(&v8), a1);
  v4 = v9;
  v10 = nullptr;
  v11 = 0;
  if (v9 != 0) {
    v4 = std___1___shared_weak_count_lock(v9);
    v11 = v4;
    if (v4 != 0) {
      v10 = v8;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    v5 = GameRoutine_18ae4d0(GameData_21f1e08, &v10, 3, 0);
    v4 = v11;
    if (v11 == 0) {
      goto LABEL_11;
    }
  }
  else {
    v5 = 0;
    if (v4 == 0) {
      goto LABEL_11;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v6 = v4;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v6);
  }
LABEL_11:
  result = v9;
  if (v9 != 0) {
    result = std___1___shared_weak_count___release_weak(v9);
  }
  if ((v5 & 1) == 0) {
    LOBYTE(v8) = a2 & 1;
    HIDWORD(v8) = 1;
    v10 = ui_Event_vtable;
    LODWORD(v11) = 31;
    v12 = &v8;
    return MenuItem_188b880(a1, &v10);
  }
  return result;
}

__int64 MenuItemAnimal_18956d0(_QWORD* a1, char a2, int a3)
{
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 result;
  __int64 (**v10)();
  __int64 v11;
  __int64 (**v12)();
  __int64 v13;
  __int64 (***v14)();

  Element_1885a60((void*)(&v10), a1);
  v6 = v11;
  v12 = nullptr;
  v13 = 0;
  if (v11 != 0) {
    v6 = std___1___shared_weak_count_lock(v11);
    v13 = v6;
    if (v6 != 0) {
      v12 = v10;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    v7 = GameRoutine_18ae4d0(GameData_21f1e08, &v12, 0, 0);
    v6 = v13;
    if (v13 == 0) {
      goto LABEL_11;
    }
  }
  else {
    v7 = 0;
    if (v6 == 0) {
      goto LABEL_11;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v8 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v8);
  }
LABEL_11:
  result = v11;
  if (v11 != 0) {
    result = std___1___shared_weak_count___release_weak(v11);
  }
  if ((v7 & 1) == 0) {
    HIDWORD(v10) = a3;
    LOBYTE(v10) = a2 & 1;
    v12 = ui_Event_vtable;
    LODWORD(v13) = 30;
    v14 = &v10;
    return MenuItem_188b880(a1, &v12);
  }
  return result;
}

__int64 MenuItemAnimal_18957f0(_QWORD* a1, char a2, int a3)
{
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 result;
  __int64 (**v10)();
  __int64 v11;
  __int64 (**v12)();
  __int64 v13;
  __int64 (***v14)();

  Element_1885a60((void*)(&v10), a1);
  v6 = v11;
  v12 = nullptr;
  v13 = 0;
  if (v11 != 0) {
    v6 = std___1___shared_weak_count_lock(v11);
    v13 = v6;
    if (v6 != 0) {
      v12 = v10;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    v7 = GameRoutine_18ae4d0(GameData_21f1e08, &v12, 1, 0);
    v6 = v13;
    if (v13 == 0) {
      goto LABEL_11;
    }
  }
  else {
    v7 = 0;
    if (v6 == 0) {
      goto LABEL_11;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v8 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v8);
  }
LABEL_11:
  result = v11;
  if (v11 != 0) {
    result = std___1___shared_weak_count___release_weak(v11);
  }
  if ((v7 & 1) == 0) {
    HIDWORD(v10) = a3;
    LOBYTE(v10) = a2 & 1;
    v12 = ui_Event_vtable;
    LODWORD(v13) = 29;
    v14 = &v10;
    return MenuItem_188b880(a1, &v12);
  }
  return result;
}

void MenuItemAnimal_1895910(__int64 a1, _QWORD* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47[2];
  struct {
    __int64 v48;
    __int64 v49;
  } v48_;

  if (*a2 == 0) {
    return;
  }
  v47[0] = (__int64)"L_MenuItem_Name";
  v47[1] = 15;
  GameRoutine_15d4100_alt1((void*)(&v48_.v48), (__int64*)(a1 + 88), v47);
  if (v48_.v49 != 0) {
    v4 = std___1___shared_weak_count_lock_alt1(v48_.v49);
    v5 = v48_.v48;
    if (v4 != 0) {
      v6 = v48_.v48;
    }
    else {
      v6 = 0;
    }
    if (v48_.v49 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v48_.v49);
    }
    if (v6 != 0) {
      v7 = *(_QWORD*)(v5 + 320);
      if (v7 != 0) {
        v8 = *(_QWORD*)(v5 + 312);
        v9 = *(_QWORD*)(v5 + 320);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                  memory_order_relaxed);
        v10 = std___1___shared_weak_count_lock_alt1(v9);
        std___1___shared_weak_count___release_weak_alt1(v7);
        if (v10 != 0) {
          if (v8 != 0) {
            v48_.v48 = v6;
            v48_.v49 = v4;
            if (v4 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                        memory_order_relaxed);
              Element_1885bc0_alt1(v8, &v48_.v48);
              if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
                std___1___shared_weak_count___release_weak_alt1(v4);
              }
            }
            else {
              Element_1885bc0_alt1(v8, &v48_.v48);
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
            std___1___shared_weak_count___release_weak_alt1(v10);
          }
        }
      }
      v11 = (_QWORD*)*a2;
      v48_.v48 = v6;
      v48_.v49 = v4;
      if (v4 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                  memory_order_relaxed);
      }
      GameRoutine_18855c0_alt1(v11, &v48_.v48);
      v12 = v48_.v49;
      if (v48_.v49 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v48_.v49 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak_alt1(v12);
      }
    }
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak_alt1(v4);
    }
  }
  v47[0] = (__int64)"L_MenuItem_Skill";
  v47[1] = 16;
  GameRoutine_15d4100_alt1((void*)(&v48_.v48), (__int64*)(a1 + 88), v47);
  if (v48_.v49 != 0) {
    v13 = std___1___shared_weak_count_lock_alt1(v48_.v49);
    if (v13 != 0) {
      v14 = v48_.v48;
    }
    else {
      v14 = 0;
    }
    if (v48_.v49 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v48_.v49);
    }
    v15 = *(_QWORD*)(v14 + 320);
    if (v15 == 0) {
      goto LABEL_43;
    }
    goto LABEL_35;
  }
  v14 = 0;
  v13 = 0;
  v15 = *(_QWORD*)((char*)((_QWORD*)0x13CLL) + 4);
  if (*(_QWORD*)((char*)((_QWORD*)0x13CLL) + 4) != 0) {
  LABEL_35:
    v16 = *(_QWORD*)(v14 + 312);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                              memory_order_relaxed);
    v17 = std___1___shared_weak_count_lock_alt1(v15);
    std___1___shared_weak_count___release_weak_alt1(v15);
    if (v17 != 0) {
      if (v16 != 0) {
        v48_.v48 = v14;
        v48_.v49 = v13;
        if (v13 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                    memory_order_relaxed);
          Element_1885bc0_alt1(v16, &v48_.v48);
          if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
            std___1___shared_weak_count___release_weak_alt1(v13);
          }
        }
        else {
          Element_1885bc0_alt1(v16, &v48_.v48);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        std___1___shared_weak_count___release_weak_alt1(v17);
      }
    }
  }
LABEL_43:
  v18 = (_QWORD*)*a2;
  v48_.v48 = v14;
  v48_.v49 = v13;
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
  }
  GameRoutine_18855c0_alt1(v18, &v48_.v48);
  v19 = v48_.v49;
  if (v48_.v49 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v48_.v49 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak_alt1(v19);
  }
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak_alt1(v13);
  }
  v47[0] = (__int64)"L_MenuItem_Attack00";
  v47[1] = 19;
  GameRoutine_15d4100_alt1((void*)(&v48_.v48), (__int64*)(a1 + 88), v47);
  if (v48_.v49 != 0) {
    v20 = std___1___shared_weak_count_lock_alt1(v48_.v49);
    v21 = v48_.v48;
    if (v20 != 0) {
      v22 = v48_.v48;
    }
    else {
      v22 = 0;
    }
    if (v48_.v49 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v48_.v49);
    }
    if (v22 != 0) {
      v23 = *(_QWORD*)(v21 + 320);
      if (v23 != 0) {
        v24 = *(_QWORD*)(v21 + 312);
        v25 = *(_QWORD*)(v21 + 320);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 16), 1u,
                                  memory_order_relaxed);
        v26 = std___1___shared_weak_count_lock_alt1(v25);
        std___1___shared_weak_count___release_weak_alt1(v23);
        if (v26 != 0) {
          if (v24 != 0) {
            v48_.v48 = v22;
            v48_.v49 = v20;
            if (v20 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                        memory_order_relaxed);
              Element_1885bc0_alt1(v24, &v48_.v48);
              if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
                std___1___shared_weak_count___release_weak_alt1(v20);
              }
            }
            else {
              Element_1885bc0_alt1(v24, &v48_.v48);
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
            std___1___shared_weak_count___release_weak_alt1(v26);
          }
        }
      }
      v27 = (_QWORD*)*a2;
      v48_.v48 = v22;
      v48_.v49 = v20;
      if (v20 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                  memory_order_relaxed);
      }
      GameRoutine_18855c0_alt1(v27, &v48_.v48);
      v28 = v48_.v49;
      if (v48_.v49 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v48_.v49 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
        std___1___shared_weak_count___release_weak_alt1(v28);
      }
    }
    if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      std___1___shared_weak_count___release_weak_alt1(v20);
    }
  }
  v47[0] = (__int64)"L_MenuItem_Attack01";
  v47[1] = 19;
  GameRoutine_15d4100_alt1((void*)(&v48_.v48), (__int64*)(a1 + 88), v47);
  if (v48_.v49 != 0) {
    v29 = std___1___shared_weak_count_lock_alt1(v48_.v49);
    v30 = v48_.v48;
    if (v29 != 0) {
      v31 = v48_.v48;
    }
    else {
      v31 = 0;
    }
    if (v48_.v49 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v48_.v49);
    }
    if (v31 != 0) {
      v32 = *(_QWORD*)(v30 + 320);
      if (v32 != 0) {
        v33 = *(_QWORD*)(v30 + 312);
        v34 = *(_QWORD*)(v30 + 320);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 16), 1u,
                                  memory_order_relaxed);
        v35 = std___1___shared_weak_count_lock_alt1(v34);
        std___1___shared_weak_count___release_weak_alt1(v32);
        if (v35 != 0) {
          if (v33 != 0) {
            v48_.v48 = v31;
            v48_.v49 = v29;
            if (v29 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                        memory_order_relaxed);
              Element_1885bc0_alt1(v33, &v48_.v48);
              if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
                std___1___shared_weak_count___release_weak_alt1(v29);
              }
            }
            else {
              Element_1885bc0_alt1(v33, &v48_.v48);
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
            std___1___shared_weak_count___release_weak_alt1(v35);
          }
        }
      }
      v36 = (_QWORD*)*a2;
      v48_.v48 = v31;
      v48_.v49 = v29;
      if (v29 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                  memory_order_relaxed);
      }
      GameRoutine_18855c0_alt1(v36, &v48_.v48);
      v37 = v48_.v49;
      if (v48_.v49 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v48_.v49 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
        std___1___shared_weak_count___release_weak_alt1(v37);
      }
    }
    if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
      std___1___shared_weak_count___release_weak_alt1(v29);
    }
  }
  v47[0] = (__int64)"L_MenuItem_Morph";
  v47[1] = 16;
  GameRoutine_15d4100_alt1((void*)(&v48_.v48), (__int64*)(a1 + 88), v47);
  if (v48_.v49 != 0) {
    v38 = std___1___shared_weak_count_lock_alt1(v48_.v49);
    v39 = v48_.v48;
    if (v38 != 0) {
      v40 = v48_.v48;
    }
    else {
      v40 = 0;
    }
    if (v48_.v49 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v48_.v49);
    }
    if (v40 != 0) {
      v41 = *(_QWORD*)(v39 + 320);
      if (v41 != 0) {
        v42 = *(_QWORD*)(v39 + 312);
        v43 = *(_QWORD*)(v39 + 320);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 16), 1u,
                                  memory_order_relaxed);
        v44 = std___1___shared_weak_count_lock_alt1(v43);
        std___1___shared_weak_count___release_weak_alt1(v41);
        if (v44 != 0) {
          if (v42 != 0) {
            v48_.v48 = v40;
            v48_.v49 = v38;
            if (v38 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v38 + 8), 1u,
                                        memory_order_relaxed);
              Element_1885bc0_alt1(v42, &v48_.v48);
              if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
                std___1___shared_weak_count___release_weak_alt1(v38);
              }
            }
            else {
              Element_1885bc0_alt1(v42, &v48_.v48);
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
            std___1___shared_weak_count___release_weak_alt1(v44);
          }
        }
      }
      v45 = (_QWORD*)*a2;
      v48_.v48 = v40;
      v48_.v49 = v38;
      if (v38 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v38 + 8), 1u,
                                  memory_order_relaxed);
      }
      GameRoutine_18855c0_alt1(v45, &v48_.v48);
      v46 = v48_.v49;
      if (v48_.v49 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v48_.v49 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
        std___1___shared_weak_count___release_weak_alt1(v46);
      }
    }
    if (v38 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
      std___1___shared_weak_count___release_weak_alt1(v38);
    }
  }
}

__int64 MenuItemAnimal_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;

  *(a1 - 9) = game_gameui_control_MenuItemAnimal_vtable;
  v2 = (__int64)(a1 - 9);
  *a1 = GameData_2101d50;
  v3 = a1[130];
  a1[130] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[129];
  a1[129] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[128];
  a1[128] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = a1[127];
  a1[127] = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  v7 = a1[126];
  a1[126] = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  *a1 = GameData_20ff810;
  v8 = a1[123];
  *(a1 - 9) = ui_control_MenuItem_vtable;
  if (v8 != 0) {
    v9 = (_QWORD*)a1[122];
    v10 = a1 + 121;
    v11 = *(_QWORD**)(a1[121] + 8LL);
    *(_QWORD*)(*v9 + 8LL) = v11;
    *v11 = *v9;
    a1[123] = 0;
    if (v9 != a1 + 121) {
      v12 = fw_memory_g_heap_manager_ptr;
      do {
        v13 = (_QWORD*)v9[1];
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v14);
        v9 = v13;
      } while (v13 != v10);
    }
  }
  return Element_1888840(v2);
}

#pragma GCC visibility pop
