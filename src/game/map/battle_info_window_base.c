#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1015560(_QWORD);
__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_map_BattleInfoWindowBase_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 BattleInfoWindowBase_DeletingDestructor(_QWORD* a1);
__int64 GameRoutine_6e3d00(_QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64
game_map_BattleInfoWindowBase_SetSkillIcons_lambda1_Invoke(__int64 result,
                                                           _DWORD* a2);
__attribute__((swiftcall)) void GameRoutine_18369c0(PSEUDO_X8, __int64*,
                                                    const char**);
__attribute__((swiftcall)) void Layout_1363f00(PSEUDO_X8, __int64, __int64);
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
__int64 Alignment_56b600(__int64 result);
__int64 AsyncLoadThumbImage_18b6b40(__int64 result, int, __int64, int*);
__int64 BattleSide_7a17c0(__int64, _WORD*, unsigned __int8);
__int64 GameRoutine_183a3e0(__int64 result, int*, __int64, char);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_GetPartsLayout(__int64*, const char*);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
char* game_util_Format(const char*, ...);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212dfd0;
extern __int64 (*GameData_20e3160[])();
extern __int64* GameData_212c880[5];
extern __int64* GameData_212dfc0[2];
extern __int64* GameData_212dfc8;
extern __int64* GameData_2131ff8[5];
int __cxa_guard_acquire(__int64);
unsigned __int64 strlen(const char*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_6e3e20();
void __cxa_guard_release(__int64);
void game_183b740(__int64*, __int64, char*, char*, __int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_map_BattleInfoWindowBase_SetSkillIcons(__int64* a1,
                                                 unsigned __int8 a2);

__int64 BattleInfoWindowBase_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;

  v1 = a1[18];
  a1[18] = 0;
  *a1 = game_map_BattleInfoWindowBase_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    GameRoutine_1015560(v1);
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, v1);
    v5 = a1[18];
    a1[18] = 0;
    if (v5 != 0) {
      GameRoutine_1015560(v5);
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, v5);
    }
  }
  v7 = a1[17];
  a1[17] = 0;
  if (v7 != 0) {
    GameRoutine_1015560(v7);
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8, v7);
    v9 = a1[17];
    a1[17] = 0;
    if (v9 != 0) {
      GameRoutine_1015560(v9);
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10, v9);
    }
  }
  GameRoutine_155e140(a1 + 3);
  v11 = a1[15];
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  GameRoutine_1564060(a1 + 9);
  GameRoutine_1563f90(a1 + 6, a1[7]);
  result = a1[4];
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v13 = a1[2];
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    return std___1___shared_weak_count___release_weak(v13);
  }
  return result;
}

void game_map_BattleInfoWindowBase_SetSkillIcons(__int64* a1,
                                                 unsigned __int8 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  char v6;
  char v7;
  __int64 v8;
  const char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  bool v16;
  int* v17;
  __int64 v18;
  __int64 v19;
  __int64 (***v20)();
  char v21;
  char v22;
  int* v23;
  char v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _WORD* v28;
  _WORD* v29;
  __int64* v30;
  int* v31;
  int v32;
  int* v33;
  char* v34;
  __int64 v35;
  signed __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  char* v43;
  __int64 v44;
  __int64* v45;
  int* v46;
  char* v47;
  int v48;
  __int64 v49;
  unsigned __int64 v50;
  char* v51;
  __int64* v52;
  __int64 v53;
  int v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64* v59;
  __int64 v60;
  char* v61;
  __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  char* v67;
  __int64 v68;
  char* v69;
  const char* v70;
  __int64 v71;
  __int64 (***v72)();
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  int v79;
  int v80;
  int v81;
  unsigned int v83;
  int* v84;
  __int64 v85;
  char* v86;
  int v87;
  int v88;
  int v89;
  __int64 v90;
  int v91;
  __int64** v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64* v96;
  __int64 v97;
  const char* v98;
  __int64 v99;
  char v100;
  int v101;
  unsigned int v102;
  const char* v103;
  __int64 v104;
  __int64 (**v105)();
  char* v106;
  unsigned __int64 v107;
  unsigned __int64 v108;
  __int64 (*v109)();
  char* v110;
  unsigned __int64 v111;
  __int64 v112;
  unsigned __int64 v113;
  __int64 v114;
  unsigned __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  __int64 (**v118)();
  unsigned __int64 v119;
  __int64 (*v120)();
  const char* v121;
  __int64 v122;
  __int64 (**v123)();
  char* v124;
  unsigned __int64 v125;
  unsigned __int64 v126;
  __int64 (*v127)();
  unsigned __int64 v128;
  __int64 (**v129)();
  unsigned __int64 v130;
  __int64 (*v131)();
  const char* v132;
  __int64 v133;
  __int64 (**v134)();
  char* v135;
  unsigned __int64 v136;
  __int64 (**v137)();
  unsigned __int64 v138;
  __int64 (*v139)();
  __int64 v140;
  __int64 v141;
  __int64 v142;
  int* v143;
  unsigned __int64 v144;
  char* v145;
  __int64 v146;
  unsigned __int64 v147;
  __int64 v148;
  const char* v149;
  char v150;
  unsigned __int64 v151;
  const char* v152[2];
  struct {
    __int64 (**v153)();
    char** v154;
    char** v155;
    char gap88_[8];
    __int64 (***v156)();
  } v153_;
  struct {
    char* v157;
    char* v158;
    __int64 v159;
  } v157_;
  struct {
    char* v160;
    int* v161;
    unsigned __int64 v162;
  } v160_;
  struct {
    char* v163;
    char* v164;
    unsigned __int64 v165;
  } v163_;

  v3 = a1[19];
  LOBYTE(v153_.v153) = a2;
  v5 = v3 + 760LL * a2;
  v6 = (*(__int64 (**)(__int64*, __int64 (***)(void)))(*a1 + 40))(a1,
                                                                  &v153_.v153);
  if (*(_QWORD*)(v5 + 40) != 0) {
    v7 = v6;
    v16 = (v6 & 1) == 0;
    v8 = a1[4];
    v9 = v16 ? "L_Target_Skill" : "L_Player_Skill";
    if (v8 != 0) {
      v10 = std___1___shared_weak_count_lock(v8);
      if (v10 != 0) {
        v11 = a1[3];
        v12 = v10;
        if (v11 != 0 &&
            (v13 = ui_LayoutAccessor_GetPartsLayout(a1 + 3, v9)) != 0) {
          v14 = *(_QWORD*)(v13 + 24);
          if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                                    memory_order_acquire) &
               1) == 0 &&
              __cxa_guard_acquire((__int64)GameData_212dfd0) != 0) {
            *GameData_212dfc8 =
                (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
            __cxa_guard_release((__int64)GameData_212dfd0);
          }
          if (v14 == 0) {
            goto LABEL_18;
          }
          v15 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
          if (v15 != GameData_212dfc8) {
            do {
              v15 = (__int64*)*v15;
              v16 = v15 == GameData_212dfc8 || v15 == nullptr;
            } while (!v16);
            if (v15 == nullptr) {
            LABEL_18:
              v14 = 0;
            }
          }
          Layout_1363f00((void*)(&v160_.v160), v11, v14);
          v163_.v163 = nullptr;
          v163_.v164 = nullptr;
          if (v160_.v161 != nullptr &&
              (v17 =
                   (int*)std___1___shared_weak_count_lock((__int64)v160_.v161),
               v163_.v164 = (char*)v17, v17 != nullptr) &&
              (v163_.v163 = v160_.v160, v160_.v160 != nullptr) &&
              (v18 = (__int64)v17,
               (v19 = __dynamic_cast(v160_.v160, GameData_212dfc0[0],
                                     GameData_2131ff8[0], 0)) != 0)) {
            v20 = (__int64 (***)(void))&v163_.v163;
            v153_.v153 = (__int64 (**)(void))v19;
            v153_.v154 = (char**)v18;
          }
          else {
            v20 = &v153_.v153;
          }
          *v20 = nullptr;
          v20[1] = nullptr;
          v22 = v7;
          v11 = (__int64)v153_.v153;
          v2 = (__int64)v153_.v154;
          if (v153_.v154 != nullptr) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v153_.v154 + 2),
                                      1u, memory_order_relaxed);
            if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
              std___1___shared_weak_count___release_weak_alt1(v2);
            }
          }
          v23 = (int*)v163_.v164;
          if (v163_.v164 != nullptr &&
              atomic_fetch_add((atomic_ullong* volatile)(v163_.v164 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(int*))(*(_QWORD*)v23 + 16LL))(v23);
            std___1___shared_weak_count___release_weak_alt1((__int64)v23);
          }
          if (v160_.v161 != nullptr) {
            std___1___shared_weak_count___release_weak_alt1(
                (__int64)v160_.v161);
          }
          v21 = 0;
          v7 = v22;
        }
        else {
          v21 = 1;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          std___1___shared_weak_count___release_weak_alt1(v12);
        }
        v24 = v2 != 0 ? v21 : 1;
        if ((v24 & 1) == 0) {
          v25 = std___1___shared_weak_count_lock(v2);
          std___1___shared_weak_count___release_weak_alt1(v2);
          if (v25 == 0 || v11 == 0) {
          LABEL_272:
            if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
              std___1___shared_weak_count___release_weak_alt1(v25);
            }
            return;
          }
          v26 = *(_QWORD*)(v11 + 1048);
          v27 = *(_QWORD*)(v11 + 1040);
          v163_.v164 = nullptr;
          v163_.v165 = 0;
          v160_.v162 = 0;
          v163_.v163 = nullptr;
          v148 = v25;
          v149 = v9;
          v28 = *(_WORD**)(v5 + 568);
          v29 = *(_WORD**)(v5 + 576);
          v160_.v160 = nullptr;
          v160_.v161 = nullptr;
          v150 = v7;
          v151 = (unsigned __int64)(v26 - v27) >> 4;
          if (v28 != v29) {
            if ((int)v151 > 0) {
              v30 = GameData_212c880[0];
              while (1) {
                if ((*(_DWORD*)v28 & 0xFFF) != 0 &&
                    (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(*v30 + 64) +
                                          8LL * (*(_DWORD*)v28 & 0xFFF)) +
                               754LL) &
                     8) != 0 &&
                    (BattleSide_7a17c0(v5 + 16, v28, 1u) & 1) != 0) {
                  v32 = *(_DWORD*)v28;
                  if ((*(_DWORD*)v28 & 0xFFF) != 0) {
                    v33 = (int*)v163_.v164;
                    if ((unsigned __int64)v163_.v164 < v163_.v165) {
                      *(_DWORD*)v163_.v164 = v32;
                      v31 = v33 + 1;
                    }
                    else {
                      v34 = v163_.v163;
                      v35 = v163_.v164 - v163_.v163;
                      v36 = (v163_.v164 - v163_.v163) >> 2;
                      v37 = v36 + 1;
                      if ((unsigned __int64)(v36 + 1) >> 62 != 0) {
                        goto LABEL_284;
                      }
                      v38 = v163_.v165 - (_QWORD)v163_.v163;
                      if ((__int64)(v163_.v165 - (_QWORD)v163_.v163) >> 1 >
                          v37) {
                        v37 = v38 >> 1;
                      }
                      if ((unsigned __int64)v38 >= 0x7FFFFFFFFFFFFFFCLL) {
                        v39 = 0x3FFFFFFFFFFFFFFFLL;
                      }
                      else {
                        v39 = v37;
                      }
                      if (v39 != 0) {
                        if (v39 >> 62 != 0) {
                          goto LABEL_285;
                        }
                        v40 = fw_memory_HeapManager_Allocate(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v39, 16,
                            0);
                        v36 = ((char*)v33 - v34) >> 2;
                      }
                      else {
                        v40 = 0;
                      }
                      v41 = v40 + 4 * v39;
                      v42 = (char*)v33 - v34;
                      v43 = (char*)(v40 + v35 - 4 * v36);
                      v147 = v41;
                      *(_DWORD*)(v40 + v35) = v32;
                      v31 = (int*)(v40 + v35 + 4);
                      memcpy((__int64)v43, (__int64)v34, v42);
                      v163_.v163 = v43;
                      v163_.v164 = (char*)v31;
                      v163_.v165 = v147;
                      if (v34 != nullptr) {
                        v44 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v44 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt1(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v44,
                            (__int64)v34);
                      }
                      v30 = GameData_212c880[0];
                    }
                    v163_.v164 = (char*)v31;
                  }
                }
                v28 += 2;
                if (v28 == v29) {
                  goto LABEL_74;
                }
              }
            }
            v45 = GameData_212c880[0];
            do {
              if ((*(_DWORD*)v28 & 0xFFF) != 0 &&
                  (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(*v45 + 64) +
                                        8LL * (*(_DWORD*)v28 & 0xFFF)) +
                             754LL) &
                   8) != 0) {
                BattleSide_7a17c0(v5 + 16, v28, 1u);
              }
              v28 += 2;
            } while (v28 != v29);
          }
        LABEL_74:
          v47 = v163_.v163;
          v46 = (int*)v163_.v164;
          if (v163_.v163 != v163_.v164) {
            GameRoutine_183a3e0(
                (__int64)v163_.v163, (int*)v163_.v164,
                (2 * __clz((v163_.v164 - v163_.v163) >> 2)) ^ 0x7E, 1);
            v47 = v163_.v163;
            v46 = (int*)v163_.v164;
          }
          v48 = v151;
          if (v47 != (char*)v46) {
            v49 = 0;
            v50 = 0;
            v51 = nullptr;
            v52 = GameData_212c880[0];
            v53 = game_g_shared_system_skills_ptr;
            while (1) {
              v54 = *(_DWORD*)v47;
              v55 = *(_QWORD*)(*v52 + 64);
              v56 = *(_QWORD*)(v55 + 8 * (*(_DWORD*)v47 & 0xFFFLL));
              v57 = *(unsigned __int16*)(v56 + 496);
              if (*(_WORD*)(v56 + 496) != 0) {
                v58 =
                    *(_QWORD*)(v55 + 8LL * *(int*)((char*)((_UNKNOWN*)0x19CLL) +
                                                   v53));
                v59 = (__int64*)(*(_QWORD*)(v56 + 504) + 8LL);
                while (1) {
                  v60 = *v59;
                  v59 += 2;
                  if (v60 == v58) {
                    break;
                  }
                  if (--v57 == 0) {
                    goto LABEL_79;
                  }
                }
                if ((unsigned __int64)v51 >= v50) {
                  v61 = &v51[-v49];
                  v62 = (__int64)&v51[-v49] >> 2;
                  v63 = v62 + 1;
                  if ((unsigned __int64)(v62 + 1) >> 62 != 0) {
                    goto LABEL_284;
                  }
                  if ((__int64)(v50 - v49) >> 1 > v63) {
                    v63 = (__int64)(v50 - v49) >> 1;
                  }
                  if (v50 - v49 >= 0x7FFFFFFFFFFFFFFCLL) {
                    v64 = 0x3FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v64 = v63;
                  }
                  if (v64 != 0) {
                    if (v64 >> 62 != 0) {
                      goto LABEL_285;
                    }
                    v65 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v64, 16, 0);
                    v54 = *(_DWORD*)v47;
                  }
                  else {
                    v65 = 0;
                  }
                  v50 = v65 + 4 * v64;
                  v66 = (unsigned __int64)&v51[-v49];
                  v67 = &v61[v65 + -4 * v62];
                  *(_DWORD*)&v61[v65] = v54;
                  v51 = &v61[v65 + 4];
                  memcpy((__int64)v67, v49, v66);
                  v160_.v160 = v67;
                  v160_.v161 = (int*)v51;
                  v160_.v162 = v50;
                  if (v49 != 0) {
                    v68 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v68 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v68, v49);
                  }
                  v49 = (__int64)v67;
                  v48 = v151;
                }
                else {
                  *(_DWORD*)v51 = v54;
                  v51 += 4;
                }
                v160_.v161 = (int*)v51;
                v69 = (char*)(v163_.v164 - (v47 + 4));
                if (v163_.v164 != v47 + 4) {
                  memmove_alt1((__int64)v47, (__int64)(v47 + 4),
                               v163_.v164 - (v47 + 4));
                }
                v46 = (int*)&v69[(_QWORD)v47];
                v47 -= 4;
                v163_.v164 = (char*)v46;
                v53 = game_g_shared_system_skills_ptr;
              }
            LABEL_79:
              v47 += 4;
              if (v47 == (char*)v46) {
                goto LABEL_105;
              }
            }
          }
          v51 = nullptr;
        LABEL_105:
          v157_.v158 = nullptr;
          v157_.v159 = 0;
          v157_.v157 = nullptr;
          v70 = v149;
          v71 = *(_QWORD*)(v5 + 40);
          if (v71 == 0) {
          LABEL_116:
            game_183b740((__int64*)&v160_.v160, (__int64)v51, v163_.v163,
                         (char*)v46, ((char*)v46 - v163_.v163) >> 2);
            game_183b740((__int64*)&v160_.v160, (__int64)v160_.v161, v157_.v157,
                         v157_.v158, (v157_.v158 - v157_.v157) >> 2);
            v78 = *(_QWORD*)(v5 + 40);
            if (v78 != 0 && (*(_DWORD*)(v78 + 1872) & 0xFFF) != 0) {
              v79 = *(_DWORD*)(v5 + 96) - *(_DWORD*)(v5 + 88);
              v80 = *(_DWORD*)(v5 + 100) - *(_DWORD*)(v5 + 92);
              if (((v80 | v79) & 0x80000000) == 0) {
                v81 = *(_DWORD*)(v78 + 592);
                if (v79 < v81 && v80 < v81) {
                  v83 = v79 + v81 * v80;
                  if ((v83 & 0x80000000) == 0 &&
                      *(char*)(*(_QWORD*)(v78 + 600) + 4LL * v83 + 2) > 0) {
                    v84 = v160_.v161;
                    v85 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                     8LL * (*(_DWORD*)(v78 + 1872) & 0xFFF));
                    if (v85 == 0) {
                      goto LABEL_130;
                    }
                    goto LABEL_175;
                  }
                }
              }
              v85 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                               8LL * (*(_DWORD*)(v78 + 1872) & 0xFFF));
              if (*(_BYTE*)(v85 + 273) == 0) {
                v84 = v160_.v161;
              LABEL_175:
                if ((unsigned __int64)v84 >= v160_.v162) {
                  v110 = v160_.v160;
                  v111 = (char*)v84 - v160_.v160;
                  v112 = ((char*)v84 - v160_.v160) >> 2;
                  v113 = v112 + 1;
                  if ((unsigned __int64)(v112 + 1) >> 62 != 0) {
                  LABEL_284:
                    GameRoutine_6e3e20();
                  }
                  v114 = v160_.v162 - (_QWORD)v160_.v160;
                  if ((__int64)(v160_.v162 - (_QWORD)v160_.v160) >> 1 > v113) {
                    v113 = v114 >> 1;
                  }
                  if ((unsigned __int64)v114 >= 0x7FFFFFFFFFFFFFFCLL) {
                    v115 = 0x3FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v115 = v113;
                  }
                  if (v115 != 0) {
                    if (v115 >> 62 != 0) {
                    LABEL_285:
                      GameRoutine_60a210();
                    }
                    v116 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v115, 16,
                        0);
                  }
                  else {
                    v116 = 0;
                  }
                  v143 = (int*)(v116 + v111);
                  v144 = v116 + 4 * v115;
                  *v143 = 0;
                  v145 = (char*)(v116 + v111 - 4 * v112);
                  *v143 = *(_WORD*)(v85 + 16) & 0xFFF;
                  v84 = (int*)(v116 + v111 + 4);
                  memcpy((__int64)v145, (__int64)v110, v111);
                  v160_.v160 = v145;
                  v160_.v162 = v144;
                  if (v110 != nullptr) {
                    v146 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v146 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v146,
                        (__int64)v110);
                  }
                  v70 = v149;
                  v48 = v151;
                }
                else {
                  *v84 = 0;
                  *v84++ = *(_WORD*)(v85 + 16) & 0xFFF;
                }
                v160_.v161 = v84;
              LABEL_130:
                v86 = v160_.v160;
                if (v160_.v160 == (char*)v84) {
                  v87 = 0;
                }
                else {
                  v87 = 0;
                  do {
                    v88 = *(_DWORD*)v86;
                    v86 += 4;
                    LODWORD(v153_.v153) = v88;
                    AsyncLoadThumbImage_18b6b40(v11, v87++, v71,
                                                (int*)&v153_.v153);
                  } while (v86 != (char*)v84);
                }
                if (v87 >= v48 - 1) {
                  v89 = v48 - 1;
                }
                else {
                  v89 = v87;
                }
                if (v87 < v48) {
                  do {
                    v90 = *(_QWORD*)(v11 + 1040);
                    v91 = v87;
                    if (v87 <
                        (unsigned __int64)((*(_QWORD*)(v11 + 1048) - v90) >>
                                           4)) {
                      v92 = (__int64**)(v90 + 16LL * v87);
                      v93 = (__int64)v92[1];
                      if (v93 != 0) {
                        v94 = std___1___shared_weak_count_lock(v93);
                        if (v94 != 0) {
                          v95 = v94;
                          v96 = *v92;
                          if (*v92 != nullptr) {
                            v97 = *v96;
                            v96[136] = 0;
                            *((_DWORD*)v96 + 274) = 0;
                            (*(void (**)(__int64*, _QWORD))(v97 + 40))(v96, 0);
                          }
                          if (atomic_fetch_add(
                                  (atomic_ullong* volatile)(v95 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
                            (*(void (**)(__int64))(*(_QWORD*)v95 + 16LL))(v95);
                            std___1___shared_weak_count___release_weak_alt1(
                                v95);
                          }
                        }
                      }
                    }
                    v87 = v91 + 1;
                  } while (v48 != v91 + 1);
                }
                if (*(_BYTE*)(v11 + 1033) != 0) {
                  v98 = "A_Right";
                }
                else {
                  v98 = "A_Left";
                }
                v99 = ui_LayoutAccessor_FindAlignment((__int64*)(v11 + 88),
                                                      (__int64)v98);
                if (v99 != 0) {
                  Alignment_56b600(v99);
                }
                v100 = v150;
                if ((v150 & 1) != 0) {
                  v101 = v89 - 1;
                }
                else {
                  v101 = v48 - v89;
                }
                if ((v150 & 1) != 0) {
                  v102 = 2;
                }
                else {
                  v102 = 3;
                }
                v103 = "L_Target_EquipOne";
                if ((v150 & 1) != 0) {
                  v103 = "L_Player_EquipOne";
                }
                v152[0] = v103;
                v152[1] = (_BYTE*)(((__int128*)0x10LL) + 1);
                GameRoutine_18369c0((void*)(&v153_.v153), a1 + 3, v152);
                if (v153_.v154 != nullptr) {
                  v104 = std___1___shared_weak_count_lock((__int64)v153_.v154);
                  v105 = v153_.v153;
                  if (v153_.v154 != nullptr) {
                    std___1___shared_weak_count___release_weak_alt1(
                        (__int64)v153_.v154);
                  }
                  if (v104 != 0 && v105 != nullptr) {
                    v106 = game_util_Format("%s/L_Skill%02d", v70, v101);
                    v107 = strlen(v106);
                    v108 = *((unsigned __int8*)v105 + 856);
                    if (v107 != 0) {
                      v109 = v105[108];
                      if ((v108 & 1) == 0) {
                        v109 = (__int64 (*)())(v108 >> 1);
                      }
                      if (v109 != nullptr) {
                        if ((v108 & 1) != 0) {
                          *(_BYTE*)v105[109] = 0;
                          v105[108] = nullptr;
                        }
                        else {
                          *((_WORD*)v105 + 428) = 0;
                        }
                      }
                      GameRoutine_60a060((char*)v105 + 856, (__int64)v106,
                                         v107);
                    }
                    else if ((v108 & 1) != 0) {
                      *(_BYTE*)v105[109] = 0;
                      v105[108] = nullptr;
                    }
                    else {
                      *((_WORD*)v105 + 428) = 0;
                    }
                    v117 = strlen(v106);
                    v118 = &v105[3 * v102 + 104];
                    v119 = *(unsigned __int8*)v118;
                    if (v117 != 0) {
                      v120 = v118[1];
                      if ((v119 & 1) == 0) {
                        v120 = (__int64 (*)())(v119 >> 1);
                      }
                      if (v120 != nullptr) {
                        if ((v119 & 1) != 0) {
                          *(_BYTE*)v118[2] = 0;
                          v118[1] = nullptr;
                        }
                        else {
                          *(_WORD*)v118 = 0;
                        }
                      }
                      GameRoutine_60a060((char*)v118, (__int64)v106, v117);
                      v100 = v150;
                    }
                    else {
                      v100 = v150;
                      if ((v119 & 1) != 0) {
                        *(_BYTE*)v118[2] = 0;
                        v118[1] = nullptr;
                      }
                      else {
                        *(_WORD*)v118 = 0;
                      }
                    }
                  }
                  else if (v104 == 0) {
                    goto LABEL_204;
                  }
                  if (atomic_fetch_add((atomic_ullong* volatile)(v104 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v104 + 16LL))(v104);
                    std___1___shared_weak_count___release_weak_alt1(v104);
                  }
                }
              LABEL_204:
                v121 = "L_Target_Equip00";
                if ((v100 & 1) != 0) {
                  v121 = "L_Player_Equip00";
                }
                v152[0] = v121;
                v152[1] = (const char*)((__int128*)0x10LL);
                GameRoutine_18369c0((void*)(&v153_.v153), a1 + 3, v152);
                if (v153_.v154 != nullptr) {
                  v122 = std___1___shared_weak_count_lock((__int64)v153_.v154);
                  v123 = v153_.v153;
                  if (v153_.v154 != nullptr) {
                    std___1___shared_weak_count___release_weak_alt1(
                        (__int64)v153_.v154);
                  }
                  if (v122 != 0 && v123 != nullptr) {
                    v124 = game_util_Format("%s/L_Skill%02d", v70, v101);
                    v125 = strlen(v124);
                    v126 = *((unsigned __int8*)v123 + 856);
                    if (v125 != 0) {
                      v127 = v123[108];
                      if ((v126 & 1) == 0) {
                        v127 = (__int64 (*)())(v126 >> 1);
                      }
                      if (v127 != nullptr) {
                        if ((v126 & 1) != 0) {
                          *(_BYTE*)v123[109] = 0;
                          v123[108] = nullptr;
                        }
                        else {
                          *((_WORD*)v123 + 428) = 0;
                        }
                      }
                      GameRoutine_60a060((char*)v123 + 856, (__int64)v124,
                                         v125);
                    }
                    else if ((v126 & 1) != 0) {
                      *(_BYTE*)v123[109] = 0;
                      v123[108] = nullptr;
                    }
                    else {
                      *((_WORD*)v123 + 428) = 0;
                    }
                    v128 = strlen(v124);
                    v129 = &v123[3 * v102 + 104];
                    v130 = *(unsigned __int8*)v129;
                    if (v128 != 0) {
                      v131 = v129[1];
                      if ((v130 & 1) == 0) {
                        v131 = (__int64 (*)())(v130 >> 1);
                      }
                      if (v131 != nullptr) {
                        if ((v130 & 1) != 0) {
                          *(_BYTE*)v129[2] = 0;
                          v129[1] = nullptr;
                        }
                        else {
                          *(_WORD*)v129 = 0;
                        }
                      }
                      GameRoutine_60a060((char*)v129, (__int64)v124, v128);
                      v100 = v150;
                    }
                    else {
                      v100 = v150;
                      if ((v130 & 1) != 0) {
                        *(_BYTE*)v129[2] = 0;
                        v129[1] = nullptr;
                      }
                      else {
                        *(_WORD*)v129 = 0;
                      }
                    }
                  }
                  else if (v122 == 0) {
                    goto LABEL_237;
                  }
                  if (atomic_fetch_add((atomic_ullong* volatile)(v122 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v122 + 16LL))(v122);
                    std___1___shared_weak_count___release_weak_alt1(v122);
                  }
                }
              LABEL_237:
                v132 = "L_Target_Equip01";
                if ((v100 & 1) != 0) {
                  v132 = "L_Player_Equip01";
                }
                v152[0] = v132;
                v152[1] = (const char*)((__int128*)0x10LL);
                GameRoutine_18369c0((void*)(&v153_.v153), a1 + 3, v152);
                if (v153_.v154 != nullptr) {
                  v133 = std___1___shared_weak_count_lock((__int64)v153_.v154);
                  v134 = v153_.v153;
                  if (v153_.v154 != nullptr) {
                    std___1___shared_weak_count___release_weak_alt1(
                        (__int64)v153_.v154);
                  }
                  if (v133 != 0 && v134 != nullptr) {
                    v135 = game_util_Format("%s/L_Skill%02d", v70, v101);
                    v136 = strlen(v135);
                    v137 = &v134[3 * v102 + 104];
                    v138 = *(unsigned __int8*)v137;
                    if (v136 != 0) {
                      v139 = v134[3 * v102 + 105];
                      v25 = v148;
                      if ((v138 & 1) == 0) {
                        v139 = (__int64 (*)())(v138 >> 1);
                      }
                      if (v139 != nullptr) {
                        if ((v138 & 1) != 0) {
                          *(_BYTE*)v137[2] = 0;
                          v137[1] = nullptr;
                        }
                        else {
                          *(_WORD*)v137 = 0;
                        }
                      }
                      GameRoutine_60a060((char*)v137, (__int64)v135, v136);
                    }
                    else {
                      v25 = v148;
                      if ((v138 & 1) != 0) {
                        *(_BYTE*)v137[2] = 0;
                        v137[1] = nullptr;
                      }
                      else {
                        *(_WORD*)v137 = 0;
                      }
                    }
                    goto LABEL_258;
                  }
                  v25 = v148;
                  if (v133 != 0) {
                  LABEL_258:
                    if (atomic_fetch_add((atomic_ullong* volatile)(v133 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v133 + 16LL))(v133);
                      std___1___shared_weak_count___release_weak_alt1(v133);
                    }
                  }
                }
                else {
                  v25 = v148;
                }
                if (v157_.v157 != nullptr) {
                  v157_.v158 = v157_.v157;
                  v140 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v140 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v140,
                      (__int64)v157_.v157);
                }
                if (v160_.v160 != nullptr) {
                  v141 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v141 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v141,
                      (__int64)v160_.v160);
                }
                if (v163_.v163 != nullptr) {
                  v163_.v164 = v163_.v163;
                  v142 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v142 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v142,
                      (__int64)v163_.v163);
                }
                goto LABEL_272;
              }
            }
            v84 = v160_.v161;
            goto LABEL_130;
          }
          v72 = &v153_.v153;
          v153_.v153 = GameData_20e3160;
          v153_.v154 = &v163_.v163;
          v73 = *(_QWORD*)(v71 + 1688);
          v153_.v156 = &v153_.v153;
          v153_.v155 = &v157_.v157;
          v74 = *(_QWORD*)(v71 + 1680);
          if ((int)((unsigned __int64)(v73 - v74) >> 2) < 1) {
            goto LABEL_113;
          }
          v75 = 0;
          v76 = 0;
          do {
            if (v153_.v156 == nullptr) {
              GameRoutine_60a310();
            }
            ((void (*)(__int64 (***)(void), __int64))(*v153_.v156)[6])(
                v153_.v156, v74 + v75);
            v74 = *(_QWORD*)(v71 + 1680);
            ++v76;
            v75 += 4;
          } while (
              v76 <
              (int)((unsigned __int64)(*(_QWORD*)(v71 + 1688) - v74) >> 2));
          v72 = v153_.v156;
          if (v153_.v156 == &v153_.v153) {
          LABEL_113:
            v77 = 4;
          }
          else {
            if (v153_.v156 == nullptr) {
            LABEL_115:
              v46 = (int*)v163_.v164;
              goto LABEL_116;
            }
            v77 = 5;
          }
          ((__int64 (*)(__int64))(*v72)[v77])((__int64)v72);
          goto LABEL_115;
        }
      }
    }
  }
}

__int64

game_map_BattleInfoWindowBase_SetSkillIcons_lambda1_Invoke(__int64 result,
                                                           _DWORD* a2)
{
  __int64 v2;
  _DWORD* v3;
  _DWORD* v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  signed __int64 v8;

  v2 = *(_QWORD*)(result + 8);
  v4 = *(_DWORD**)v2;
  v3 = *(_DWORD**)(v2 + 8);
  if (v4 != v3) {
    while (((*v4 ^ *a2) & 0xFFF) != 0) {
      if (++v4 == v3) {
        return result;
      }
    }
  }
  if (v4 != v3) {
    v5 = result;
    result = GameRoutine_6e3d00(*(_QWORD*)(result + 16), v4);
    v6 = *(_QWORD*)(v5 + 8);
    v7 = *(char**)(v6 + 8);
    v8 = v7 - (char*)(v4 + 1);
    if (v7 != (char*)(v4 + 1)) {
      result = memmove(v4, v4 + 1, v7 - (char*)(v4 + 1));
    }
    *(_QWORD*)(v6 + 8) = (char*)v4 + v8;
  }
  return result;
}

#pragma GCC visibility pop
