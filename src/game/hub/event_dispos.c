#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_c9bf60(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD);
__attribute__((swiftcall)) void GameRoutine_cbbcc0(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD);
__attribute__((swiftcall)) void GameRoutine_db2180(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_c9c320(_QWORD);
__int64 GameRoutine_cae2c0(_QWORD, _QWORD);
__int64 GameRoutine_d58680(__int64, _QWORD*, __int64*);
__int64 GameRoutine_d6a700(unsigned __int64*, __int64);
__int64 GameRoutine_d6aa20(__int64);
__int64 GameRoutine_d82e50(__int64, __int64, __int64, __int64, __int64,
                           __int64);
__int64 GameRoutine_e149a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e152d0(_QWORD);
__int64 HubDisposFileReader_Destructor(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
bool GameRoutine_d5b4e0(__int64);
extern __int64 (*GameData_1fddb00[])();
extern __int64 (*GameData_1fddb90[])();
extern __int64 (*GameData_1fddbe0[])();
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dc68;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ebb8[6];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(void);
void __attribute__((noreturn)) GameRoutine_d83f20(_QWORD);
__int64 game_hub_EventDispos_Rebuild(__int64 result, _DWORD* a2);
__int64 EventDispos_d83f40(__int64 result, __int64 a2);
__attribute__((swiftcall)) void LocatorDispos_db1e20(PSEUDO_X8,
                                                     __int64* result);
__attribute__((swiftcall)) void LocatorDispos_db1f30(PSEUDO_X8,
                                                     unsigned __int8*);
__int64 GameRoutine_c9be50(__int64, unsigned int, __int64*);
__int64 GameRoutine_c9c320_alt1(__int64 result) __asm__("GameRoutine_c9c320");
__int64 GameRoutine_cacc00(__int64 result);
__int64 GameRoutine_d82e50_alt1(__int64, __int64) __asm__("GameRoutine_d82e50");
__int64 GameRoutine_e149a0_alt1(__int64, __int64,
                                unsigned __int64) __asm__("GameRoutine_e149a0");
__int64 GameRoutine_f49100(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 strcmp(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 GameData_21f3d10;
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_d84380();
void __attribute__((noreturn)) String_60a1d0();
__attribute__((swiftcall)) void
EventDispos_d82a40(PSEUDO_X8 x8_, __int64 unused_int0, __int64* a1, __int64 a2);
__int64 game_hub_EventDispos_Rebuild_lambda0_Invoke(__int64 result, __int64 a2,
                                                    __int64* a3);
__attribute__((swiftcall)) void

EventDispos_d82a40(PSEUDO_X8 x8_, __int64 unused_int0, __int64* a1, __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  unsigned __int64 result;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64** v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v33;
  bool v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _BYTE v49[760];
  struct {
    _BYTE v50[256];
    __int64 v51;
    __int64 v52;
  } v50_;
  __int64 v53[3];
  struct {
    __int64 v54;
    char gap1080_[8];
    char* v55;
  } v54_;

  LocatorDispos_db1e20((void*)(&v54_.v54), a1);
  LocatorDispos_db1f30((void*)(v53), (unsigned __int8*)a1);
  if ((v54_.v54 & 1) != 0) {
    v6 = v54_.v55;
  }
  else {
    v6 = (char*)&v54_.v54 + 1;
  }
  v7 = GameRoutine_f49100(*(_QWORD*)(GameData_21f3d10 + 216), (__int64)v6);
  v8 = *(_QWORD*)(v7 + 16);
  if (v8 == 0) {
    goto LABEL_8;
  }
  v9 = std___1___shared_weak_count_lock(v8);
  if (v9 == 0) {
    goto LABEL_8;
  }
  v10 = *(_QWORD*)(v7 + 8);
  v11 = (_QWORD*)(v10 + 96);
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v10 != 0) {
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  v46 = v9;
  (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
  std___1___shared_weak_count___release_weak(v46);
  if (v10 == 0) {
  LABEL_8:
    v11 = nullptr;
  }
LABEL_9:
  result =
      GameRoutine_c9be50(*(_QWORD*)(GameData_21f3d10 + 216) + 8LL, 1u, v53);
  v13 = v50_.v51;
  if (v50_.v51 == v50_.v52) {
  LABEL_59:
    *(_WORD*)a3 = 0;
    v41 = v50_.v51;
    if (v50_.v51 != 0) {
      goto LABEL_60;
    }
    goto LABEL_66;
  }
  while (1) {
    v14 = (*(_BYTE*)(v13 + 8) & 1) != 0 ? *(_QWORD*)(v13 + 24) : v13 + 9;
    result = game_HashString_alt1(v14);
    if (result != 0) {
      v15 = v11[11];
      if (v15 != 0 && v11[13] != 0) {
        v17 = v15 - 1;
        if ((v15 & (v15 - 1)) != 0) {
          v18 = result;
          if (result >= v15) {
            v18 = result % v15;
          }
        }
        else {
          v18 = v17 & result;
        }
        v19 = *(_QWORD**)(v11[10] + 8 * v18);
        if (v19 != nullptr) {
          v20 = (_QWORD*)*v19;
          if (v20 != nullptr) {
            if ((v15 & v17) == 0) {
              while (1) {
                v22 = v20[1];
                if (v22 == result) {
                  if (v20[2] == result) {
                    goto LABEL_40;
                  }
                }
                else if ((v22 & v17) != v18) {
                  goto LABEL_11;
                }
                v20 = (_QWORD*)*v20;
                if (v20 == nullptr) {
                  goto LABEL_11;
                }
              }
            }
            while (1) {
              v21 = v20[1];
              if (v21 == result) {
                break;
              }
              if (v21 >= v15) {
                v21 %= v15;
              }
              if (v21 != v18) {
                goto LABEL_11;
              }
            LABEL_29:
              v20 = (_QWORD*)*v20;
              if (v20 == nullptr) {
                goto LABEL_11;
              }
            }
            if (v20[2] != result) {
              goto LABEL_29;
            }
          LABEL_40:
            v23 = v20[3];
            if (v23 != 0) {
              v24 = *(__int64***)(v23 + 40);
              v26 = *v24;
              v25 = v24[1];
              if (*v24 != v25) {
                break;
              }
            }
          }
        }
      }
    }
  LABEL_11:
    v13 += 144;
    if (v13 == v50_.v52) {
      goto LABEL_59;
    }
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v27 = *(_QWORD*)(a2 + 16);
  }
  else {
    v27 = a2 + 1;
  }
  while (1) {
    v28 = *v26;
    result = *(_QWORD*)(*v26 + 32);
    if (result != 0 && *(_BYTE*)result != 0) {
      result = strcmp(result, v27);
      if ((_DWORD)result == 0) {
        break;
      }
    }
    if (++v26 == v25) {
      goto LABEL_11;
    }
  }
  GameRoutine_d82e50_alt1((__int64)v49, v28);
  v33 = *(unsigned __int8*)a1;
  v34 = (v33 & 1) == 0;
  v35 = v33 >> 1;
  if (v34) {
    v36 = (__int64)a1 + 1;
  }
  else {
    v36 = a1[2];
  }
  if (v34) {
    v37 = v35;
  }
  else {
    v37 = a1[1];
  }
  GameRoutine_e149a0_alt1((__int64)v49, v36, v37);
  v38 = strlen(v50_.v50);
  if (v38 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v39 = v38;
  if (v38 >= 0x17) {
    if ((v38 | 7) == 0x17) {
      v47 = 26;
    }
    else {
      v47 = (v38 | 7) + 1;
    }
    v48 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v47, 16,
                                              0);
    *(_QWORD*)(a3 + 8) = v39;
    *(_QWORD*)(a3 + 16) = v48;
    *(_QWORD*)a3 = v47 | 1;
    v40 = v48;
    goto LABEL_83;
  }
  *(_BYTE*)a3 = 2 * v38;
  v40 = a3 + 1;
  if (v38 != 0) {
  LABEL_83:
    memcpy(v40, v50_.v50, v39);
  }
  *(_BYTE*)(v40 + v39) = 0;
  result = GameRoutine_cacc00((__int64)v49);
  v41 = v50_.v51;
  if (v50_.v51 != 0) {
  LABEL_60:
    v42 = v50_.v52;
    if (v41 == v50_.v52) {
      goto LABEL_63;
    }
    do {
      v42 -= 144;
      result = GameRoutine_c9c320_alt1(v42);
    } while (v42 != v41);
    v50_.v52 = v41;
    if (v50_.v51 != 0) {
    LABEL_63:
      v43 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v43 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v43);
    }
  }
LABEL_66:
  if ((v53[0] & 1) != 0 && v53[2] != 0) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v44 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v44);
  }
  if ((v54_.v54 & 1) != 0 && v54_.v55 != nullptr) {
    v45 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v45 = 56;
    }
    {
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v45);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 game_hub_EventDispos_Rebuild(__int64 result, _DWORD* a2)
{
  __int64* v2;
  __int64 v3;
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
  _QWORD* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  bool v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64** v29;
  __int64* v30;
  __int64* v31;
  _QWORD* v32;
  __int64 v33;
  _QWORD* v34;
  atomic_ullong* v35;
  _QWORD* v36;
  __int64** v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  unsigned __int64 v43;
  __int64** v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  __int64* v50;
  __int64 v51;
  _QWORD* v52;
  __int64 v53;
  _QWORD* v54;
  __int64 v55;
  __int64 v56;
  _QWORD* v57;
  _QWORD* v58;
  _QWORD* v59;
  _QWORD* v60;
  _QWORD* v61;
  __int64 v62;
  __int64** v63;
  _QWORD* v64;
  __int64** v65;
  __int64** v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64* v90;
  __int64 v91;
  _QWORD v92[4];
  _QWORD* v93;
  __int64 v94;
  unsigned __int64 v95;
  char* v96;
  _QWORD* v97;
  __int64** v98;
  unsigned __int64 v99;
  unsigned __int64 v100;

  v2 = (__int64*)result;
  if (*a2 == 1) {
    goto LABEL_84;
  }
  v4 = *(_QWORD*)(result + 24);
  v3 = *(_QWORD*)(result + 32);
  while (v3 != v4) {
    v5 = v3;
    v6 = *(_QWORD*)(v3 - 8);
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
    v3 = v5 - 40;
    if ((*(_BYTE*)(v5 - 40) & 1) != 0) {
      v7 = *(_QWORD*)(v5 - 24);
      if (v7 != 0) {
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v7);
      }
    }
  }
  v2[4] = v4;
  v9 = GameData_212dbb8[0];
  v10 = *(_QWORD*)GameData_212dbb8[0];
  v11 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 216LL);
  v12 = *(_QWORD*)(v11 + 24);
  if (v12 == 0) {
    goto LABEL_18;
  }
  v13 = std___1___shared_weak_count_lock(v12);
  if (v13 == 0) {
    goto LABEL_18;
  }
  v14 = *(_QWORD*)(v11 + 16);
  v15 = (_QWORD*)(v14 + 96);
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v87 = v13;
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v87);
    if (v14 != 0) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  if (v14 == 0) {
  LABEL_18:
    v15 = nullptr;
  }
LABEL_19:
  v92[0] = GameData_1fddb00;
  v92[1] = v2;
  v93 = v92;
  GameRoutine_c9bf60((void*)&v99, *(_QWORD*)(*(_QWORD*)v9 + 216LL) + 8LL, 1,
                     v10 + 112);
  v16 = v99;
  v17 = v100;
  if (v99 != v100) {
    do {
      if ((*(_BYTE*)(v16 + 8) & 1) != 0) {
        v18 = *(_QWORD*)(v16 + 24);
      }
      else {
        v18 = v16 + 9;
      }
      v19 = game_HashString(v18);
      if (v19 != 0) {
        v20 = v15[11];
        v21 = v20 == 0 || v15[13] == 0;
        if (!v21) {
          v22 = v20 - 1;
          if ((v20 & (v20 - 1)) != 0) {
            v23 = v19;
            if (v19 >= v20) {
              v23 = v19 % v20;
            }
          }
          else {
            v23 = v22 & v19;
          }
          v24 = *(_QWORD**)(v15[10] + 8 * v23);
          if (v24 != nullptr) {
            v25 = (_QWORD*)*v24;
            if (v25 != nullptr) {
              if ((v20 & v22) == 0) {
                while (1) {
                  v27 = v25[1];
                  if (v27 == v19) {
                    if (v25[2] == v19) {
                      goto LABEL_51;
                    }
                  }
                  else if ((v27 & v22) != v23) {
                    goto LABEL_22;
                  }
                  v25 = (_QWORD*)*v25;
                  if (v25 == nullptr) {
                    goto LABEL_22;
                  }
                }
              }
              do {
                v26 = v25[1];
                if (v26 == v19) {
                  if (v25[2] == v19) {
                  LABEL_51:
                    v28 = v25[3];
                    if (v28 != 0) {
                      v89 = v10;
                      GameRoutine_db2180((void*)&v94, v10 + 40, v16 + 56);
                      v29 = *(__int64***)(v28 + 40);
                      v31 = *v29;
                      v30 = v29[1];
                      v32 = (_QWORD*)fw_memory_g_heap_manager_ptr;
                      if (*v29 != v30) {
                        do {
                          v34 = (_QWORD*)fw_memory_HeapManager_Allocate(
                              *v32, 1040, 16, 0);
                          v34[1] = 0;
                          v35 = (atomic_ullong*)(v34 + 1);
                          v34[2] = 0;
                          v36 = v34 + 3;
                          v37 = (__int64**)v34;
                          *v34 = GameData_1fddbe0;
                          GameRoutine_d82e50((__int64)(v34 + 3), *v31, v38, v39,
                                             v40, v41);
                          if ((v94 & 1) != 0) {
                            v42 = v96;
                          }
                          else {
                            v42 = (char*)&v94 + 1;
                          }
                          if ((v94 & 1) != 0) {
                            v43 = v95;
                          }
                          else {
                            v43 = (unsigned __int64)(unsigned __int8)v94 >> 1;
                          }
                          GameRoutine_e149a0(v36, v42, v43);
                          v97 = v36;
                          v98 = v37;
                          atomic_fetch_add_explicit(v35, 1u,
                                                    memory_order_relaxed);
                          if (v93 == nullptr) {
                            GameRoutine_60a310();
                          }
                          (*(void (**)(_QWORD*, unsigned __int64, _QWORD**))(
                              *v93 + 48LL))(v93, v16 + 56, &v97);
                          v44 = v98;
                          if (v98 != nullptr &&
                              atomic_fetch_add(
                                  (atomic_ullong* volatile)(v98 + 1),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
                            ((void (*)(__int64**))(*v44)[2])(v44);
                            std___1___shared_weak_count___release_weak(v44);
                          }
                          if (atomic_fetch_add(v35, 0xFFFFFFFFFFFFFFFFLL) ==
                              0) {
                            ((void (*)(__int64**))(*v37)[2])(v37);
                            std___1___shared_weak_count___release_weak(v37);
                          }
                          ++v31;
                        } while (v31 != v30);
                      }
                      if ((v94 & 1) != 0 && v96 != nullptr) {
                        v33 = 128;
                        if (*(_QWORD*)(*v32 + 200LL) == 0) {
                          v33 = 56;
                        }
                        nn_mem_StandardAllocator_Free(*v32 + v33, v96);
                      }
                      v10 = v89;
                    }
                    break;
                  }
                }
                else {
                  if (v26 >= v20) {
                    v26 %= v20;
                  }
                  if (v26 != v23) {
                    break;
                  }
                }
                v25 = (_QWORD*)*v25;
              } while (v25 != nullptr);
            }
          }
        }
      }
    LABEL_22:
      v16 += 144LL;
    } while (v16 != v17);
    v16 = v99;
  }
  v45 = fw_memory_g_heap_manager_ptr;
  if (v16 != 0) {
    v46 = v100;
    if (v16 == v100) {
      goto LABEL_76;
    }
    do {
      v46 -= 144LL;
      GameRoutine_c9c320(v46);
    } while (v46 != v16);
    v100 = v16;
    v16 = v99;
    if (v99 != 0) {
    LABEL_76:
      v47 = 128;
      if (*(_QWORD*)(*(_QWORD*)v45 + 200LL) == 0) {
        v47 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v45 + v47, v16);
    }
  }
  result = (__int64)v93;
  if (v93 == v92) {
    v48 = 32;
  }
  else {
    if (v93 == nullptr) {
      goto LABEL_84;
    }
    v48 = 40;
  }
  result = (*(__int64 (**)(void*))(*v93 + v48))(v93);
LABEL_84:
  v49 = (__int64*)v2[3];
  v50 = (__int64*)v2[4];
  if (v49 != v50) {
    v51 = GameData_212dc68;
    v52 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v90 = GameData_212ebb8[0] + 2;
    while (1) {
      result = GameRoutine_e152d0(v49[3]);
      if ((result & 1) != 0) {
        break;
      }
    LABEL_86:
      v49 += 5;
      if (v49 == v50) {
        return result;
      }
    }
    v53 = v49[3];
    v54 = *(_QWORD**)(*(_QWORD*)v51 + 152LL);
    v55 = *(_QWORD*)v51 + 160LL;
    if (v54 == (_QWORD*)v55) {
    LABEL_107:
      v91 = 0;
    }
    else {
      v56 = *(_QWORD*)(v53 + 56);
      while (1) {
        v57 = (_QWORD*)v54[7];
        v58 = (_QWORD*)v54[8];
        if (v57 != v58) {
          while (*(_QWORD*)(*v57 + 176LL) != v56) {
            v57 += 2;
            if (v57 == v58) {
              goto LABEL_96;
            }
          }
        }
        if (v57 != v58) {
          break;
        }
      LABEL_96:
        v57 = (_QWORD*)v54[10];
        v59 = (_QWORD*)v54[11];
        if (v57 != v59) {
          while (*(_QWORD*)(*v57 + 176LL) != v56) {
            v57 += 2;
            if (v57 == v59) {
              goto LABEL_101;
            }
          }
        }
        if (v57 != v59) {
          break;
        }
      LABEL_101:
        v60 = (_QWORD*)v54[1];
        if (v60 != nullptr) {
          do {
            v61 = v60;
            v60 = (_QWORD*)*v60;
          } while (v60 != nullptr);
        }
        else {
          do {
            v61 = (_QWORD*)v54[2];
            v21 = v54 == (_QWORD*)*v61;
            v54 = v61;
          } while (!v21);
        }
        v54 = v61;
        if (v61 == (_QWORD*)v55) {
          goto LABEL_107;
        }
      }
      v86 = *v57;
      v84 = v57[1];
      if (v84 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v84 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v86 != 0) {
        goto LABEL_140;
      }
      v53 = v49[3];
      v91 = v84;
    }
    GameRoutine_d6a700(&v99, v53);
    v62 = *(_QWORD*)v51;
    v63 = (__int64**)fw_memory_HeapManager_Allocate(*v52, 1808, 16, 0);
    v64 = v63 + 4;
    v65 = v63;
    v63[1] = nullptr;
    v63[2] = nullptr;
    *v63 = v90;
    GameRoutine_d58680((__int64)(v63 + 4), &v99, v49);
    v97 = v64;
    v98 = v65;
    GameRoutine_cbbcc0((void*)&v94, v62, 0, &v97);
    v66 = v98;
    if (v98 != nullptr && atomic_fetch_add((atomic_ullong* volatile)(v98 + 1),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
      ((void (*)(__int64**))(*v66)[2])(v66);
      std___1___shared_weak_count___release_weak(v66);
    }
    v67 = fw_memory_HeapManager_Allocate(*v52, 1056, 16, 0);
    *(_QWORD*)(v67 + 16) = 0;
    *(_QWORD*)(v67 + 32) = 0;
    *(_QWORD*)(v67 + 8) = 0;
    *(_QWORD*)(v67 + 24) = 0;
    v68 = v67 + 24;
    *(_QWORD*)v67 = GameData_1fddb90;
    GameRoutine_cae2c0(v67 + 40, v53);
    v70 = v94;
    v69 = v95;
    if (v95 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v95 + 16), 1u,
                                memory_order_relaxed);
    }
    v71 = *(_QWORD*)(v67 + 32);
    *(_QWORD*)(v67 + 24) = v70;
    *(_QWORD*)(v67 + 32) = v69;
    if (v71 != 0) {
      v71 = std___1___shared_weak_count___release_weak(v71);
    }
    if (*(_QWORD*)(v70 + 1384) != *(_QWORD*)(v70 + 1376)) {
      v71 = GameRoutine_d5b4e0(v70);
    }
    v72 = (__int64*)v2[1];
    v73 = v2[2];
    if ((unsigned __int64)v72 >= v73) {
      v75 = *v2;
      v76 = (__int64)v72 - *v2;
      v77 = (v76 >> 4) + 1;
      if (v77 >> 60 != 0) {
        GameRoutine_d83f20(v71);
      }
      v78 = v73 - v75;
      if (v78 >> 3 > v77) {
        v77 = v78 >> 3;
      }
      if ((unsigned __int64)v78 >= 0x7FFFFFFFFFFFFFF0LL) {
        v79 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v79 = v77;
      }
      if (v79 >> 60 != 0) {
        GameRoutine_60a210(v71);
      }
      v80 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v79, 16, 0);
      v81 = (__int64*)(v80 + v76);
      v88 = v80 + 16 * v79;
      *v81 = v68;
      v81[1] = v67;
      v82 = v80 + v76 - 16 * (v76 >> 4);
      v74 = v80 + v76 + 16;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v67 + 8), 1u,
                                memory_order_relaxed);
      memcpy(v82, v75, v76);
      *v2 = v82;
      v2[1] = v74;
      v2[2] = v88;
      if (v75 != 0) {
        v83 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v83 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v83, v75);
      }
      v51 = GameData_212dc68;
    }
    else {
      *v72 = v68;
      v72[1] = v67;
      v74 = (__int64)(v72 + 2);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v67 + 8), 1u,
                                memory_order_relaxed);
    }
    v2[1] = v74;
    v84 = v91;
    if (atomic_fetch_add((atomic_ullong* volatile)(v67 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v67 + 16LL))(v67);
      std___1___shared_weak_count___release_weak(v67);
    }
    v85 = v95;
    v52 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    if (v95 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v95 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)v85 + 16LL))(v85);
      std___1___shared_weak_count___release_weak(v85);
    }
    result = GameRoutine_d6aa20((__int64)&v99);
  LABEL_140:
    if (v84 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v84 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v84 + 16LL))(v84);
      result = std___1___shared_weak_count___release_weak(v84);
    }
    goto LABEL_86;
  }
  return result;
}

__int64 EventDispos_d83f40(__int64 result, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  if (a2 != 0) {
    v3 = result;
    EventDispos_d83f40(result, *(_QWORD*)a2);
    EventDispos_d83f40(v3, *(_QWORD*)(a2 + 8));
    HubDisposFileReader_Destructor(a2 + 56);
    v4 = fw_memory_g_heap_manager_ptr;
    if ((*(_BYTE*)(a2 + 32) & 1) != 0) {
      v5 = *(_QWORD*)(a2 + 48);
      if (v5 != 0) {
        v6 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v5);
      }
    }
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v7 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7, a2);
  }
  return result;
}

__int64 game_hub_EventDispos_Rebuild_lambda0_Invoke(__int64 result, __int64 a2,
                                                    __int64* a3)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  char* v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  struct {
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
  } v30_;

  v4 = *a3;
  v3 = a3[1];
  *a3 = 0;
  a3[1] = 0;
  v5 = *(_QWORD**)(result + 8);
  if ((*(_BYTE*)a2 & 1) != 0) {
    result = fw_text_String_CopyTerminated(&v30_.v30, *(_QWORD*)(a2 + 16),
                                           *(_QWORD*)(a2 + 8));
    v30_.v33 = v4;
    v30_.v34 = v3;
    if (v3 == 0) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v6 = *(_QWORD*)(a2 + 8);
  v30_.v30 = *(_QWORD*)a2;
  v30_.v31 = v6;
  v30_.v32 = *(_QWORD*)(a2 + 16);
  v30_.v33 = v4;
  v30_.v34 = v3;
  if (v3 != 0) {
  LABEL_5:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
LABEL_6:
  v7 = (__int64*)v5[4];
  v8 = v5[5];
  if ((unsigned __int64)v7 < v8) {
    v9 = v30_.v30;
    v10 = v30_.v32;
    v11 = v7 + 5;
    v7[1] = v30_.v31;
    v7[2] = v10;
    *v7 = v9;
    v30_.v31 = 0;
    v30_.v32 = 0;
    v30_.v30 = 0;
    v7[3] = v30_.v33;
    v7[4] = v30_.v34;
    v30_.v33 = 0;
    v30_.v34 = 0;
  LABEL_24:
    v5[4] = v11;
    goto LABEL_25;
  }
  v12 = v5[3];
  v13 = (char*)v7 - v12;
  v14 = 1 - 0x3333333333333333LL * (((__int64)v7 - v12) >> 3);
  if (v14 > 0x666666666666666LL) {
    GameRoutine_d84380();
  }
  v15 = fw_memory_g_heap_manager_ptr;
  v16 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v8 - v12) >> 3);
  if (2 * v16 > v14) {
    v14 = 2 * v16;
  }
  if (v16 >= 0x333333333333333LL) {
    v17 = 0x666666666666666LL;
  }
  else {
    v17 = v14;
  }
  if (v17 != 0) {
    if (v17 > 0x666666666666666LL) {
      GameRoutine_60a210_alt1();
    }
    v18 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v17, 16, 0);
    v12 = v5[3];
    v4 = v30_.v33;
    v19 = v30_.v34;
    v20 = (char*)(v5[4] - v12);
  }
  else {
    v18 = 0;
    v20 = v13;
    v19 = v3;
  }
  v21 = (__int64*)&v13[v18];
  v30_.v33 = 0;
  v30_.v34 = 0;
  v22 = v18 + 40 * v17;
  v23 = v30_.v30;
  v24 = v30_.v31;
  v25 = (char*)((char*)v21 - v20);
  v30_.v30 = 0;
  v30_.v31 = 0;
  v21[4] = v19;
  *v21 = v23;
  v21[1] = v24;
  v26 = v30_.v32;
  v30_.v32 = 0;
  v21[2] = v26;
  v21[3] = v4;
  v11 = v21 + 5;
  result = memcpy((char*)v21 - v20, v12, v20);
  v5[3] = v25;
  v5[4] = v11;
  v5[5] = v22;
  if (v12 == 0) {
    goto LABEL_24;
  }
  v27 = 128;
  if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
    v27 = 56;
  }
  result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v15 + v27);
  v28 = v30_.v34;
  v5[4] = v11;
  if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    result = std___1___shared_weak_count___release_weak(v28);
  }
LABEL_25:
  if ((v30_.v30 & 1) != 0 && v30_.v32 != 0) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v29);
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

#pragma GCC visibility pop
