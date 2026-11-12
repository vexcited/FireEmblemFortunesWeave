#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LocatorDispos_db1f30(PSEUDO_X8,
                                                     unsigned __int8*);
__attribute__((swiftcall)) void game_hub_ee2c50(PSEUDO_X8, __int64,
                                                unsigned __int8*, __int64);
__int64* game_hub_f79e00(__int64, unsigned __int8*);
__int64 GameSubquestData_125a000(__int64 result, __int64*, char);
__int64 QuestSupport_1030b30_alt1(_QWORD, _QWORD,
                                  _QWORD) __asm__("QuestSupport_1030b30");
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__n128 GameRoutine_1030ad0(__int64);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* GameData_212ebe0;
extern __int64* GameData_212ec18[2];
extern __int64* GameData_212ef20;
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_21f3d10;
extern __int64 GameData_220b6d0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
void __attribute__((noreturn)) String_60a230();
__attribute__((swiftcall)) void
QuestSupport_1030400(PSEUDO_X8 x8_, __int64 unused_int0, __int64* a1);
__int64 QuestSupport_1030b30_alt2(__int64 a1, unsigned __int8* a2,
                                  _DWORD* a3) __asm__("QuestSupport_1030b30");
__attribute__((swiftcall)) void
QuestSupport_1030ce0(PSEUDO_X8 x8_, __int64 unused_int0, __int64 a1,
                     double unused_float0, double a3);
__attribute__((swiftcall)) void
LocatorDispos_db1f30_alt1(PSEUDO_X8, __int64*) __asm__("LocatorDispos_db1f30");
__int64 GameRoutine_1030ad0_alt1(__int64 result) __asm__("GameRoutine_1030ad0");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameSubquestData_125a000_alt1(__int64, __int64*,
                                   char) __asm__("GameSubquestData_125a000");
void __attribute__((noreturn)) fs_60a230();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 QuestSupport_1030b30(__int64 a1, __int64* a2, _DWORD* a3);
__attribute__((swiftcall)) void

QuestSupport_1030400(PSEUDO_X8 x8_, __int64 unused_int0, __int64* a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int128 v4;
  _QWORD* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  bool v10;
  bool v11;
  __int64 v12;
  __int64 v13;
  int* v14;
  int v15;
  int v16;
  _QWORD* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  int v24;
  __int64 v25;
  __int128 v26;
  _DWORD* v27;
  __int64 v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64* v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  _QWORD* v36;
  __int64 v37;
  __int128 v38;
  _DWORD* v39;
  __int64 v40;
  _QWORD* v41;
  _QWORD* v42;
  __int64* v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  _QWORD* v48;
  int v49;
  __int64 v51;
  __int128 v52;
  _DWORD* v53;
  __int64 v54;
  _QWORD* v55;
  _QWORD* v56;
  __int64* v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  _QWORD* v61;
  _QWORD* v62;
  __int64 v63;
  __int64* v64;
  const char* v65;
  unsigned __int64 v66;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  _QWORD* v72;
  _QWORD* v73;
  __int64* v74;
  __int64* v75;
  __int64 v76;
  _QWORD* v77;
  _QWORD* v78;
  __int64 v79;
  __int64 v80;
  int v81;
  __int64 v82;
  __int128 v83;
  __int64* v84;
  struct {
    __int128 v85;
    __int64 v86;
  } v85_;

  *(_DWORD*)a2 = 0;
  *(_QWORD*)(a2 + 8) = 0;
  *(_QWORD*)(a2 + 16) = 0;
  *(_QWORD*)(a2 + 32) = 0;
  *(_QWORD*)(a2 + 40) = 0;
  if (a1 != nullptr) {
    v85_.v86 = 0;
    v85_.v85 = (__typeof__(v85_.v85)){0};
    GameSubquestData_125a000_alt1(*(_QWORD*)GameData_212c7b0[0],
                                  (__int64*)&v85_.v85, 1);
    v4 = v85_.v85;
    v5 = (_QWORD*)v85_.v85;
    if ((_QWORD)v85_.v85 != *((_QWORD*)&v85_.v85 + 1)) {
      v5 = (_QWORD*)v85_.v85;
      v6 = *((_QWORD*)&v85_.v85 + 1) - v85_.v85 - 8;
      if ((~(_BYTE)v6 & 0x18) != 0) {
        v5 = (_QWORD*)v85_.v85;
        v7 = ((unsigned __int8)((unsigned int)v6 >> 3) + 1) & 3;
        while ((__int64*)*v5 != a1) {
          ++v5;
          if (--v7 == 0) {
            goto LABEL_7;
          }
        }
      }
      else {
      LABEL_7:
        if (v6 >= 0x18) {
          v5 += 2;
          while (1) {
            if ((__int64*)*(v5 - 2) == a1) {
              v5 -= 2;
              goto LABEL_9;
            }
            if ((__int64*)*(v5 - 1) == a1) {
              --v5;
              goto LABEL_9;
            }
            if ((__int64*)*v5 == a1) {
              goto LABEL_9;
            }
            if ((__int64*)v5[1] == a1) {
              break;
            }
            v18 = v5 + 2;
            v5 += 4;
            if (v18 == *((_QWORD**)&v85_.v85 + 1)) {
              goto LABEL_8;
            }
          }
          ++v5;
        }
        else {
        LABEL_8:
          v5 = *((_QWORD**)&v85_.v85 + 1);
        }
      }
    }
  LABEL_9:
    if ((_QWORD)v85_.v85 != 0) {
      *((_QWORD*)&v85_.v85 + 1) = v85_.v85;
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v4);
    }
    if (v5 == *((_QWORD**)&v4 + 1)) {
      v9 = *(unsigned __int8*)(*a1 + 113);
      v10 = v9 == 2 || v9 == 4;
      v11 = v10;
      if (*(_BYTE*)(*a1 + 112) != 7 || !v11) {
        v12 = GameData_21f3d10;
        v13 = *(_QWORD*)(GameData_21f3d10 + 48);
        if ((*(_BYTE*)(GameData_21f3d10 + 40) & 1) == 0) {
          v13 = *(_BYTE*)(GameData_21f3d10 + 40) >> 1;
        }
        if (v13 == 7) {
          v14 = (*(_BYTE*)(GameData_21f3d10 + 40) & 1) != 0
                    ? *(int**)(GameData_21f3d10 + 56)
                    : (int*)(GameData_21f3d10 + 41);
          v15 = *v14;
          v16 = *(int*)((char*)v14 + 3);
          if (v15 == *(_DWORD*)"Hub_000" && v16 == *(_DWORD*)"_000") {
            *(_DWORD*)a2 = 1;
            if (game_gmap_GmapClock_instance_ != 0 &&
                *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                        *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                        *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
                    0) {
              v19 = game_hub_f79e00(*GameData_212ef20,
                                    (unsigned __int8*)(v12 + 64));
              v21 = *a1;
              v22 = *v19;
              v23 = v19;
              v24 = *(unsigned __int8*)(*a1 + 112);
              if (v24 == 5) {
                v25 = v19[1];
                if (v22 != v25) {
                  while (1) {
                    v27 = *(_DWORD**)(v22 + 88);
                    if (v27 != nullptr && *v27 == 24) {
                      v28 = *(_QWORD*)(GameData_220b6d0 + 8);
                      v29 = *(_QWORD**)(v28 + 24);
                      v30 = (_QWORD*)(v28 + 32);
                      if (v29 != v30) {
                        while (1) {
                          v31 = (__int64*)v29[7];
                          v32 = (__int64*)v29[8];
                          if (v31 != v32) {
                            break;
                          }
                        LABEL_56:
                          v35 = (_QWORD*)v29[1];
                          if (v35 != nullptr) {
                            do {
                              v36 = v35;
                              v35 = (_QWORD*)*v35;
                            } while (v35 != nullptr);
                          }
                          else {
                            do {
                              v36 = (_QWORD*)v29[2];
                              v10 = v29 == (_QWORD*)*v36;
                              v29 = v36;
                            } while (!v10);
                          }
                          v29 = v36;
                          if (v36 == v30) {
                            goto LABEL_49;
                          }
                        }
                        while (1) {
                          v34 = *v31;
                          v31 += 6;
                          v33 = v34;
                          if (*(_QWORD*)(v34 + 56) == *(_QWORD*)v22) {
                            break;
                          }
                          if (v31 == v32) {
                            goto LABEL_56;
                          }
                        }
                        *(_QWORD*)&v26 = *(_QWORD*)(v33 + 184);
                        LODWORD(v20) = *(_DWORD*)(v33 + 192);
                        *((_QWORD*)&v26 + 1) = v20;
                        v85_.v85 = v26;
                        if ((QuestSupport_1030b30(a2, (__int64*)(v33 + 824),
                                                  &v85_.v85) &
                             1) != 0) {
                          return;
                        }
                      }
                    }
                  LABEL_49:
                    v22 += 96;
                    if (v22 == v25) {
                      v21 = *a1;
                      v22 = *v23;
                      v24 = *(unsigned __int8*)(*a1 + 112);
                      goto LABEL_64;
                    }
                  }
                }
              }
              else {
              LABEL_64:
                if (v24 == 6) {
                  v37 = v23[1];
                  if (v22 != v37) {
                    while (1) {
                      v39 = *(_DWORD**)(v22 + 88);
                      if (v39 != nullptr && *v39 == 27) {
                        v40 = *(_QWORD*)(GameData_220b6d0 + 8);
                        v41 = *(_QWORD**)(v40 + 24);
                        v42 = (_QWORD*)(v40 + 32);
                        if (v41 != v42) {
                          while (1) {
                            v43 = (__int64*)v41[7];
                            v44 = (__int64*)v41[8];
                            if (v43 != v44) {
                              break;
                            }
                          LABEL_75:
                            v47 = (_QWORD*)v41[1];
                            if (v47 != nullptr) {
                              do {
                                v48 = v47;
                                v47 = (_QWORD*)*v47;
                              } while (v47 != nullptr);
                            }
                            else {
                              do {
                                v48 = (_QWORD*)v41[2];
                                v10 = v41 == (_QWORD*)*v48;
                                v41 = v48;
                              } while (!v10);
                            }
                            v41 = v48;
                            if (v48 == v42) {
                              goto LABEL_68;
                            }
                          }
                          while (1) {
                            v46 = *v43;
                            v43 += 6;
                            v45 = v46;
                            if (*(_QWORD*)(v46 + 56) == *(_QWORD*)v22) {
                              break;
                            }
                            if (v43 == v44) {
                              goto LABEL_75;
                            }
                          }
                          *(_QWORD*)&v38 = *(_QWORD*)(v45 + 184);
                          LODWORD(v20) = *(_DWORD*)(v45 + 192);
                          *((_QWORD*)&v38 + 1) = v20;
                          v85_.v85 = v38;
                          if ((QuestSupport_1030b30(a2, (__int64*)(v45 + 824),
                                                    &v85_.v85) &
                               1) != 0) {
                            return;
                          }
                        }
                      }
                    LABEL_68:
                      v22 += 96;
                      if (v22 == v37) {
                        v21 = *a1;
                        v22 = *v23;
                        v24 = *(unsigned __int8*)(*a1 + 112);
                        goto LABEL_83;
                      }
                    }
                  }
                }
                else {
                LABEL_83:
                  v49 = *(unsigned __int8*)(v21 + 113);
                  if (v24 == 7 && v49 == 3) {
                    v51 = v23[1];
                    if (v22 != v51) {
                      while (1) {
                        v53 = *(_DWORD**)(v22 + 88);
                        if (v53 != nullptr && *v53 == 28) {
                          v54 = *(_QWORD*)(GameData_220b6d0 + 8);
                          v55 = *(_QWORD**)(v54 + 24);
                          v56 = (_QWORD*)(v54 + 32);
                          if (v55 != v56) {
                            while (1) {
                              v57 = (__int64*)v55[7];
                              v58 = (__int64*)v55[8];
                              if (v57 != v58) {
                                break;
                              }
                            LABEL_98:
                              v61 = (_QWORD*)v55[1];
                              if (v61 != nullptr) {
                                do {
                                  v62 = v61;
                                  v61 = (_QWORD*)*v61;
                                } while (v61 != nullptr);
                              }
                              else {
                                do {
                                  v62 = (_QWORD*)v55[2];
                                  v10 = v55 == (_QWORD*)*v62;
                                  v55 = v62;
                                } while (!v10);
                              }
                              v55 = v62;
                              if (v62 == v56) {
                                goto LABEL_91;
                              }
                            }
                            while (1) {
                              v60 = *v57;
                              v57 += 6;
                              v59 = v60;
                              if (*(_QWORD*)(v60 + 56) == *(_QWORD*)v22) {
                                break;
                              }
                              if (v57 == v58) {
                                goto LABEL_98;
                              }
                            }
                            *(_QWORD*)&v52 = *(_QWORD*)(v59 + 184);
                            LODWORD(v20) = *(_DWORD*)(v59 + 192);
                            *((_QWORD*)&v52 + 1) = v20;
                            v85_.v85 = v52;
                            if ((QuestSupport_1030b30(a2, (__int64*)(v59 + 824),
                                                      &v85_.v85) &
                                 1) != 0) {
                              return;
                            }
                          }
                        }
                      LABEL_91:
                        v22 += 96;
                        if (v22 == v51) {
                          v22 = *v23;
                          break;
                        }
                      }
                    }
                  }
                }
              }
              v63 = v23[1];
              if (v22 == v63) {
              LABEL_135:
                *(_DWORD*)a2 = 1;
              }
              else {
                v64 = GameData_212ebe0;
                while (1) {
                  if (*(_BYTE*)(v22 + 48) == 1) {
                    v65 = *(const char**)(*a1 + 8);
                    v66 = strlen_alt1(v65);
                    v68 = *(_BYTE*)(v22 + 24) >> 1;
                    if ((*(_BYTE*)(v22 + 24) & 1) != 0) {
                      v68 = *(_QWORD*)(v22 + 32);
                    }
                    if (v66 == v68) {
                      v69 = v66;
                      if (v66 == -1) {
                        fs_60a230();
                      }
                      v70 = (*(_BYTE*)(v22 + 24) & 1) != 0
                                ? *(_QWORD*)(v22 + 40)
                                : v22 + 25;
                      if (memcmp_alt1(v70, (__int64)v65, v69) == 0) {
                        v71 = *(_QWORD*)(*v64 + 8);
                        v72 = *(_QWORD**)(v71 + 24);
                        v73 = (_QWORD*)(v71 + 32);
                        if (v72 != v73) {
                          while (1) {
                            v75 = (__int64*)v72[7];
                            v74 = (__int64*)v72[8];
                            if (v75 != v74) {
                              break;
                            }
                          LABEL_122:
                            v77 = (_QWORD*)v72[1];
                            if (v77 != nullptr) {
                              do {
                                v78 = v77;
                                v77 = (_QWORD*)*v77;
                              } while (v77 != nullptr);
                            }
                            else {
                              do {
                                v78 = (_QWORD*)v72[2];
                                v10 = v72 == (_QWORD*)*v78;
                                v72 = v78;
                              } while (!v10);
                            }
                            v72 = v78;
                            if (v78 == v73) {
                              goto LABEL_108;
                            }
                          }
                          while (1) {
                            v76 = *v75;
                            if (*(_QWORD*)(*v75 + 56) == *(_QWORD*)v22) {
                              break;
                            }
                            v75 += 6;
                            if (v75 == v74) {
                              goto LABEL_122;
                            }
                          }
                          v79 = *(_QWORD*)(v76 + 552);
                          if (v79 != 0) {
                            v80 = *(_QWORD*)(v76 + 560);
                            *(_QWORD*)&v85_.v85 = *(_QWORD*)(v76 + 552);
                            *((_QWORD*)&v85_.v85 + 1) = v80;
                            if (v80 != 0) {
                              atomic_fetch_add_explicit(
                                  (atomic_ullong* volatile)(v80 + 8), 1u,
                                  memory_order_relaxed);
                            }
                            v81 = *(unsigned __int8*)(v79 + 272);
                            GameRoutine_1030ad0_alt1((__int64)&v85_.v85);
                            if (v81 == 1) {
                              *(_QWORD*)&v83 = *(_QWORD*)(*v75 + 184);
                              LODWORD(v82) = *(_DWORD*)(*v75 + 192);
                              v84 = (__int64*)(*v75 + 824);
                              *((_QWORD*)&v83 + 1) = v82;
                              v85_.v85 = v83;
                              if ((QuestSupport_1030b30(a2, v84, &v85_.v85) &
                                   1) != 0) {
                                break;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                LABEL_108:
                  v22 += 96;
                  if (v22 == v63) {
                    goto LABEL_135;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

__int64 QuestSupport_1030b30(__int64 a1, __int64* a2, _DWORD* a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int128 v13;
  unsigned int v14;
  __int64 v15;
  struct {
    __int64 v17;
    __int64 v18;
  } v17_;
  struct {
    __int64 v19[2];
    __int64 v20;
  } v19_;
  unsigned __int64 v21[2];

  LocatorDispos_db1f30_alt1((void*)(v19_.v19), a2);
  game_hub_ee2c50((void*)(&v17_.v17), *GameData_212ec18[0],
                  (unsigned __int8*)v19_.v19, (__int64)a3);
  v5 = v17_.v18;
  if (v17_.v18 == 0) {
    v14 = 0;
    goto LABEL_21;
  }
  v6 = std___1___shared_weak_count_lock_alt1(v17_.v18);
  if (v6 == 0) {
    v14 = 0;
  LABEL_20:
    std___1___shared_weak_count___release_weak_alt2(v5);
    goto LABEL_21;
  }
  v7 = v17_.v17;
  v8 = v6;
  if (v17_.v17 != 0 &&
      ((*(_BYTE*)(v9 = *(_QWORD*)(*(_QWORD*)(v17_.v17 + 8) + 24LL)) & 1) == 0
           ? (v10 = v9 + 1)
           : (v10 = *(_QWORD*)(v9 + 16)),
       (v21[1] = v10, v21[0] = game_HashString(v10),
        game_GameModeData_instance_ != 0) &&
           (v11 = game_GameVariableTable_Find(
                *(_QWORD**)(game_GameModeData_instance_ + 48), v21)) != 0 &&
           *(_DWORD*)(v11 + 32) != 0)) {
    *(_DWORD*)a1 = 2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
    v12 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 8) = v7;
    *(_QWORD*)(a1 + 16) = v5;
    if (v12 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v12);
    }
    *(_DWORD*)(a1 + 32) = *a3;
    *(_DWORD*)(a1 + 36) = a3[1];
    v13 = *(_OWORD*)(a1 + 32);
    *((_QWORD*)&v13 + 1) = (unsigned int)a3[2];
    *(_OWORD*)(a1 + 32) = v13;
    v14 = 1;
  }
  else {
    v14 = 0;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt2(v8);
  }
  v5 = v17_.v18;
  if (v17_.v18 != 0) {
    goto LABEL_20;
  }
LABEL_21:
  if ((v19_.v19[0] & 1) != 0 && v19_.v20 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v19_.v20);
  }
  return v14;
}

__attribute__((swiftcall)) void

QuestSupport_1030ce0(PSEUDO_X8 x8_, __int64 unused_int0, __int64 a1,
                     double unused_float0, double a3)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int128 v12;
  __int64 v13;
  char v14;
  _QWORD* v15;
  _QWORD* v16;
  bool v17;
  __int64 v18;
  char v19;
  __int128 v20;

  *(_DWORD*)a2 = 0;
  *(_QWORD*)(a2 + 8) = 0;
  *(_QWORD*)(a2 + 16) = 0;
  *(_QWORD*)(a2 + 32) = 0;
  *(_QWORD*)(a2 + 40) = 0;
  if (a1 == 0) {
    return;
  }
  v4 = *(_QWORD*)(GameData_220b6d0 + 8);
  v5 = *(_QWORD**)(v4 + 24);
  v6 = (_QWORD*)(v4 + 32);
  if (v5 == (_QWORD*)(v4 + 32)) {
  LABEL_24:
    *(_DWORD*)a2 = 1;
    return;
  }
  v19 = 0;
  while (1) {
    v8 = v5[7];
    v9 = v5[8];
    if (v8 != v9) {
      break;
    }
  LABEL_18:
    v15 = (_QWORD*)v5[1];
    if (v15 != nullptr) {
      do {
        v16 = v15;
        v15 = (_QWORD*)*v15;
      } while (v15 != nullptr);
    }
    else {
      do {
        v16 = (_QWORD*)v5[2];
        v17 = v5 == (_QWORD*)*v16;
        v5 = v16;
      } while (!v17);
    }
    v5 = v16;
    if (v16 == v6) {
      goto LABEL_24;
    }
  }
  while (1) {
    v10 = *(_QWORD*)(*(_QWORD*)v8 + 552LL);
    v11 = *(_QWORD*)(*(_QWORD*)v8 + 560LL);
    if (v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v10 != 0 && *(_BYTE*)(v10 + 288) == 1 && *(_QWORD*)(v10 + 280) == a1 &&
        (*(_QWORD*)& v12 = *(_QWORD*)(*(_QWORD*)v8 + 184LL),
         LODWORD(a3) = *(_DWORD*)(*(_QWORD*)v8 + 192LL),
         v13 = *(_QWORD*)v8 + 824LL, *((double*)&v12 + 1) = a3, v20 = v12,
         (QuestSupport_1030b30_alt1(a2, v13, &v20) & 1) != 0)) {
      v14 = 0;
      v19 = 1;
      if (v11 == 0) {
        goto LABEL_16;
      }
    }
    else {
      v14 = 1;
      if (v11 == 0) {
        goto LABEL_16;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak_alt1(v11);
    }
  LABEL_16:
    if ((v14 & 1) == 0) {
      break;
    }
    v8 += 48;
    if (v8 == v9) {
      goto LABEL_18;
    }
  }
  if ((v19 & 1) == 0) {
    v18 = *(_QWORD*)(a2 + 16);
    if (v18 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v18);
    }
  }
}

#pragma GCC visibility pop
