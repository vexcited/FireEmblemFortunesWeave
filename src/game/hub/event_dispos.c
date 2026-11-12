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
__int64 game_hub_EventDispos_Rebuild_lambda0_Invoke_alt1(
    __int64 result, __int64 a2,
    __int64* a3) __asm__("game_hub_EventDispos_Rebuild_lambda0_Invoke");
__attribute__((swiftcall)) void EventManager_cbbcc0(PSEUDO_X8, __int64, int,
                                                    _QWORD*);
__attribute__((swiftcall)) void HubDisposFileReader_c9bf60(PSEUDO_X8, __int64,
                                                           int, __int64**);
__attribute__((swiftcall)) void
LocatorDispos_db2180(PSEUDO_X8, unsigned __int8*, unsigned __int8*);
__int64 GameHr_e152d0(_BYTE*);
__int64 GameRoutine_cae2c0_alt1(__int64*,
                                __int64) __asm__("GameRoutine_cae2c0");
__int64 GameRoutine_f49100_alt1(__int64,
                                const char*) __asm__("GameRoutine_f49100");
__int64 game_hub_d6a700(unsigned __int64*, __int64);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
bool game_hub_d5b4e0(__int64);
int strcmp_alt1(const char*, const char*) __asm__("strcmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameHr_cacc00(__int64);
void GameRoutine_c9be50_alt1(__int64, unsigned int,
                             __int64*) __asm__("GameRoutine_c9be50");
void GameRoutine_c9c320_alt2(__int64) __asm__("GameRoutine_c9c320");
void GameRoutine_d58680_alt1(__int64, _QWORD*,
                             __int64*) __asm__("GameRoutine_d58680");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_d83f20_alt1() __asm__("GameRoutine_d83f20");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__attribute__((swiftcall)) void GameHr_c9be50(PSEUDO_X8, __int64, int,
                                              __int64*);
__int64 GameHr_d82e50(__int64, __int64);
__int64 GameHr_f49100(__int64, const char*);
void GameHr_c9c320(__int64);
void game_hub_EventDispos_Rebuild_lambda0_Invoke(__int64 a1, __int64 a2,
                                                 __int64* a3);
__int64* HandlePtr_d5bf40(__int64* result, __int64, __int64*);
__int64 HubEventNatives_d5bb40(__int64*, __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
extern __int64 (*GameData_1fdce28[8])();
extern __int64 (*HandlePtr_Unknown23_d5be90_ptr[6])();
int memcmp(__int64, __int64, unsigned __int64);
void GameRoutine_6b7aa0(__int64, __int64*, __int64*, unsigned __int64);
void game_d58e20(__int64, int, __int64*, int);
__int64 EventDispos_d838e0(__int64 result, unsigned __int8* a2, __int64 a3,
                           __int64 a4, __int64* a5);
__attribute__((swiftcall)) void

EventDispos_d82a40(PSEUDO_X8 x8_, __int64 unused_int0, __int64* a1, __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  const char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v18;
  unsigned __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64** v25;
  __int64* v26;
  __int64* v27;
  const char* v28;
  __int64 v29;
  const char* v30;
  unsigned __int64 v31;
  bool v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _BYTE v47[760];
  char v48[256];
  struct {
    __int64 v49;
    __int64 v50;
  } v49_;
  struct {
    __int64 v51[2];
    __int64 v52;
  } v51_;
  struct {
    __int64 v53;
    char gap1080_[8];
    const char* v54;
  } v53_;

  LocatorDispos_db1e20((void*)(&v53_.v53), a1);
  LocatorDispos_db1f30((void*)(v51_.v51), (unsigned __int8*)a1);
  if ((v53_.v53 & 1) != 0) {
    v6 = v53_.v54;
  }
  else {
    v6 = (char*)&v53_.v53 + 1;
  }
  v7 = GameHr_f49100(*(_QWORD*)(GameData_21f3d10 + 216), v6);
  v8 = *(_QWORD*)(v7 + 16);
  if (v8 == 0) {
    goto LABEL_8;
  }
  v9 = std___1___shared_weak_count_lock_alt1(v8);
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
  v44 = v9;
  (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
  std___1___shared_weak_count___release_weak_alt1(v44);
  if (v10 == 0) {
  LABEL_8:
    v11 = nullptr;
  }
LABEL_9:
  GameHr_c9be50((void*)(&v49_.v49), *(_QWORD*)(GameData_21f3d10 + 216) + 8LL, 1,
                v51_.v51);
  v12 = v49_.v49;
  v13 = v49_.v50;
  if (v49_.v49 == v49_.v50) {
  LABEL_59:
    *(_WORD*)a3 = 0;
    v39 = v49_.v49;
    if (v49_.v49 != 0) {
      goto LABEL_60;
    }
    goto LABEL_66;
  }
  while (1) {
    v14 = (*(_BYTE*)(v12 + 8) & 1) != 0 ? *(_QWORD*)(v12 + 24) : v12 + 9;
    v15 = game_HashString_alt1(v14);
    if (v15 != 0) {
      v16 = v11[11];
      if (v16 != 0 && v11[13] != 0) {
        v18 = v16 - 1;
        if ((v16 & (v16 - 1)) != 0) {
          v19 = v15;
          if (v15 >= v16) {
            v19 = v15 % v16;
          }
        }
        else {
          v19 = v18 & v15;
        }
        v20 = *(_QWORD**)(v11[10] + 8 * v19);
        if (v20 != nullptr) {
          v21 = (_QWORD*)*v20;
          if (v21 != nullptr) {
            if ((v16 & v18) == 0) {
              while (1) {
                v23 = v21[1];
                if (v23 == v15) {
                  if (v21[2] == v15) {
                    goto LABEL_40;
                  }
                }
                else if ((v23 & v18) != v19) {
                  goto LABEL_11;
                }
                v21 = (_QWORD*)*v21;
                if (v21 == nullptr) {
                  goto LABEL_11;
                }
              }
            }
            while (1) {
              v22 = v21[1];
              if (v22 == v15) {
                break;
              }
              if (v22 >= v16) {
                v22 %= v16;
              }
              if (v22 != v19) {
                goto LABEL_11;
              }
            LABEL_29:
              v21 = (_QWORD*)*v21;
              if (v21 == nullptr) {
                goto LABEL_11;
              }
            }
            if (v21[2] != v15) {
              goto LABEL_29;
            }
          LABEL_40:
            v24 = v21[3];
            if (v24 != 0) {
              v25 = *(__int64***)(v24 + 40);
              v27 = *v25;
              v26 = v25[1];
              if (*v25 != v26) {
                break;
              }
            }
          }
        }
      }
    }
  LABEL_11:
    v12 += 144;
    if (v12 == v13) {
      goto LABEL_59;
    }
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v28 = *(const char**)(a2 + 16);
  }
  else {
    v28 = (const char*)(a2 + 1);
  }
  while (1) {
    v29 = *v27;
    v30 = *(const char**)(*v27 + 32);
    if (v30 != nullptr && *v30 != 0 && strcmp_alt1(v30, v28) == 0) {
      break;
    }
    if (++v27 == v26) {
      goto LABEL_11;
    }
  }
  GameHr_d82e50((__int64)v47, v29);
  v31 = *(unsigned __int8*)a1;
  v32 = (v31 & 1) == 0;
  v33 = v31 >> 1;
  if (v32) {
    v34 = (__int64)a1 + 1;
  }
  else {
    v34 = a1[2];
  }
  if (v32) {
    v35 = v33;
  }
  else {
    v35 = a1[1];
  }
  GameRoutine_e149a0_alt1((__int64)v47, v34, v35);
  v36 = strlen_alt1(v48);
  if (v36 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v37 = v36;
  if (v36 >= 0x17) {
    if ((v36 | 7) == 0x17) {
      v45 = 26;
    }
    else {
      v45 = (v36 | 7) + 1;
    }
    v46 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v45, 16,
                                              0);
    *(_QWORD*)(a3 + 8) = v37;
    *(_QWORD*)(a3 + 16) = v46;
    *(_QWORD*)a3 = v45 | 1;
    v38 = v46;
    goto LABEL_83;
  }
  *(_BYTE*)a3 = 2 * v36;
  v38 = a3 + 1;
  if (v36 != 0) {
  LABEL_83:
    memcpy_alt1(v38, (__int64)v48, v37);
  }
  *(_BYTE*)(v38 + v37) = 0;
  GameHr_cacc00((__int64)v47);
  v39 = v49_.v49;
  if (v49_.v49 == 0) {
    goto LABEL_66;
  }
LABEL_60:
  v40 = v49_.v50;
  if (v39 == v49_.v50) {
    goto LABEL_63;
  }
  do {
    v40 -= 144;
    GameHr_c9c320(v40);
  } while (v40 != v39);
  v49_.v50 = v39;
  v39 = v49_.v49;
  if (v49_.v49 != 0) {
  LABEL_63:
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v41, v39);
  }
LABEL_66:
  if ((v51_.v51[0] & 1) != 0 && v51_.v52 != 0) {
    v42 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v42 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v42, v51_.v52);
  }
  if ((v53_.v53 & 1) != 0 && v53_.v54 != nullptr) {
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, (__int64)v53_.v54);
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
  __int64 v16;
  __int64 v17;
  __int64 v18;
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
  __int64* v32;
  __int64 v33;
  _QWORD* v34;
  atomic_ullong* v35;
  __int64 v36;
  __int64 v37;
  char* v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  _QWORD* v53;
  _QWORD* v54;
  _QWORD* v55;
  _QWORD* v56;
  _QWORD* v57;
  __int64 v58;
  _QWORD* v59;
  _QWORD* v60;
  _QWORD* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64* v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  signed __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  __int64* v86;
  __int64 v87;
  struct {
    _QWORD v88[4];
    _QWORD* v89;
  } v88_;
  struct {
    __int64 v90;
    unsigned __int64 v91;
    char* v92;
  } v90_;
  struct {
    __int64 v93;
    __int64 v94;
  } v93_;
  struct {
    __int64 v95;
    __int64 v96;
  } v95_;

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
      std___1___shared_weak_count___release_weak_alt1(v6);
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
        nn_mem_StandardAllocator_Free_alt2(
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
  v13 = std___1___shared_weak_count_lock_alt1(v12);
  if (v13 == 0) {
    goto LABEL_18;
  }
  v14 = *(_QWORD*)(v11 + 16);
  v15 = (_QWORD*)(v14 + 96);
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v83 = v13;
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak_alt1(v83);
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
  v88_.v88[0] = GameData_1fddb00;
  v88_.v88[1] = v2;
  v88_.v89 = v88_.v88;
  HubDisposFileReader_c9bf60((void*)(&v95_.v95),
                             *(_QWORD*)(*(_QWORD*)v9 + 216LL) + 8LL, 1,
                             (__int64**)(v10 + 112));
  v16 = v95_.v95;
  v17 = v95_.v96;
  if (v95_.v95 != v95_.v96) {
    do {
      if ((*(_BYTE*)(v16 + 8) & 1) != 0) {
        v18 = *(_QWORD*)(v16 + 24);
      }
      else {
        v18 = v16 + 9;
      }
      v19 = game_HashString_alt1(v18);
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
                      v85 = v10;
                      LocatorDispos_db2180((void*)(&v90_.v90),
                                           (unsigned __int8*)(v10 + 40),
                                           (unsigned __int8*)(v16 + 56));
                      v29 = *(__int64***)(v28 + 40);
                      v31 = *v29;
                      v30 = v29[1];
                      v32 = (__int64*)fw_memory_g_heap_manager_ptr;
                      if (*v29 != v30) {
                        do {
                          v34 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                              *v32, 1040, 16, 0);
                          v34[1] = 0;
                          v35 = (atomic_ullong*)(v34 + 1);
                          v34[2] = 0;
                          v36 = (__int64)(v34 + 3);
                          v37 = (__int64)v34;
                          *v34 = GameData_1fddbe0;
                          GameRoutine_d82e50_alt1((__int64)(v34 + 3), *v31);
                          if ((v90_.v90 & 1) != 0) {
                            v38 = v90_.v92;
                          }
                          else {
                            v38 = (char*)&v90_.v90 + 1;
                          }
                          if ((v90_.v90 & 1) != 0) {
                            v39 = v90_.v91;
                          }
                          else {
                            v39 = (unsigned __int64)(unsigned __int8)v90_.v90 >>
                                  1;
                          }
                          GameRoutine_e149a0_alt1(v36, (__int64)v38, v39);
                          v93_.v93 = v36;
                          v93_.v94 = v37;
                          atomic_fetch_add_explicit(v35, 1u,
                                                    memory_order_relaxed);
                          if (v88_.v89 == nullptr) {
                            GameRoutine_60a310_alt1();
                          }
                          (*(void (**)(_QWORD*, __int64, __int64*))(
                              *v88_.v89 + 48LL))(v88_.v89, v16 + 56, &v93_.v93);
                          v40 = v93_.v94;
                          if (v93_.v94 != 0 &&
                              atomic_fetch_add(
                                  (atomic_ullong* volatile)(v93_.v94 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
                            (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
                            std___1___shared_weak_count___release_weak_alt1(
                                v40);
                          }
                          if (atomic_fetch_add(v35, 0xFFFFFFFFFFFFFFFFLL) ==
                              0) {
                            (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
                            std___1___shared_weak_count___release_weak_alt1(
                                v37);
                          }
                          ++v31;
                        } while (v31 != v30);
                      }
                      if ((v90_.v90 & 1) != 0 && v90_.v92 != nullptr) {
                        v33 = 128;
                        if (*(_QWORD*)(*v32 + 200) == 0) {
                          v33 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt2(*v32 + v33,
                                                           (__int64)v90_.v92);
                      }
                      v10 = v85;
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
      v16 += 144;
    } while (v16 != v17);
    v16 = v95_.v95;
  }
  v41 = fw_memory_g_heap_manager_ptr;
  if (v16 != 0) {
    v42 = v95_.v96;
    if (v16 == v95_.v96) {
      goto LABEL_76;
    }
    do {
      v42 -= 144;
      GameRoutine_c9c320_alt2(v42);
    } while (v42 != v16);
    v95_.v96 = v16;
    v16 = v95_.v95;
    if (v95_.v95 != 0) {
    LABEL_76:
      v43 = 128;
      if (*(_QWORD*)(*(_QWORD*)v41 + 200LL) == 0) {
        v43 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v41 + v43, v16);
    }
  }
  result = (__int64)v88_.v89;
  if (v88_.v89 == v88_.v88) {
    v44 = 32;
  }
  else {
    if (v88_.v89 == nullptr) {
      goto LABEL_84;
    }
    v44 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v88_.v89 + v44))((__int64)v88_.v89);
LABEL_84:
  v45 = (__int64*)v2[3];
  v46 = v2[4];
  if (v45 != (__int64*)v46) {
    v47 = GameData_212dc68;
    v48 = (__int64*)fw_memory_g_heap_manager_ptr;
    v86 = GameData_212ebb8[0] + 2;
    while (1) {
      result = GameHr_e152d0((_BYTE*)v45[3]);
      if ((result & 1) != 0) {
        break;
      }
    LABEL_86:
      v45 += 5;
      if (v45 == (__int64*)v46) {
        return result;
      }
    }
    v49 = v45[3];
    v50 = *(_QWORD**)(*(_QWORD*)v47 + 152LL);
    v51 = *(_QWORD*)v47 + 160LL;
    if (v50 == (_QWORD*)v51) {
    LABEL_107:
      v87 = 0;
    }
    else {
      v52 = *(_QWORD*)(v49 + 56);
      while (1) {
        v53 = (_QWORD*)v50[7];
        v54 = (_QWORD*)v50[8];
        if (v53 != v54) {
          while (*(_QWORD*)(*v53 + 176LL) != v52) {
            v53 += 2;
            if (v53 == v54) {
              goto LABEL_96;
            }
          }
        }
        if (v53 != v54) {
          break;
        }
      LABEL_96:
        v53 = (_QWORD*)v50[10];
        v55 = (_QWORD*)v50[11];
        if (v53 != v55) {
          while (*(_QWORD*)(*v53 + 176LL) != v52) {
            v53 += 2;
            if (v53 == v55) {
              goto LABEL_101;
            }
          }
        }
        if (v53 != v55) {
          break;
        }
      LABEL_101:
        v56 = (_QWORD*)v50[1];
        if (v56 != nullptr) {
          do {
            v57 = v56;
            v56 = (_QWORD*)*v56;
          } while (v56 != nullptr);
        }
        else {
          do {
            v57 = (_QWORD*)v50[2];
            v21 = v50 == (_QWORD*)*v57;
            v50 = v57;
          } while (!v21);
        }
        v50 = v57;
        if (v57 == (_QWORD*)v51) {
          goto LABEL_107;
        }
      }
      v82 = *v53;
      v80 = v53[1];
      if (v80 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v80 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v82 != 0) {
        goto LABEL_140;
      }
      v49 = v45[3];
      v87 = v80;
    }
    game_hub_d6a700((unsigned __int64*)&v95_.v95, v49);
    v58 = *(_QWORD*)v47;
    v59 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v48, 1808, 16, 0);
    v60 = v59 + 4;
    v61 = v59;
    v59[1] = 0;
    v59[2] = 0;
    *v59 = v86;
    GameRoutine_d58680_alt1((__int64)(v59 + 4), &v95_.v95, v45);
    v93_.v93 = (__int64)v60;
    v93_.v94 = (__int64)v61;
    EventManager_cbbcc0((void*)(&v90_.v90), v58, 0, &v93_.v93);
    v62 = v93_.v94;
    if (v93_.v94 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v93_.v94 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v62 + 16LL))(v62);
      std___1___shared_weak_count___release_weak_alt1(v62);
    }
    v63 = fw_memory_HeapManager_Allocate_alt1(*v48, 1056, 16, 0);
    *(_QWORD*)(v63 + 16) = 0;
    *(_QWORD*)(v63 + 32) = 0;
    *(_QWORD*)(v63 + 8) = 0;
    *(_QWORD*)(v63 + 24) = 0;
    v64 = v63 + 24;
    *(_QWORD*)v63 = GameData_1fddb90;
    GameRoutine_cae2c0_alt1((__int64*)(v63 + 40), v49);
    v66 = v90_.v90;
    v65 = v90_.v91;
    if (v90_.v91 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v90_.v91 + 16), 1u,
                                memory_order_relaxed);
    }
    v67 = *(_QWORD*)(v63 + 32);
    *(_QWORD*)(v63 + 24) = v66;
    *(_QWORD*)(v63 + 32) = v65;
    if (v67 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v67);
    }
    if (*(_QWORD*)(v66 + 1384) != *(_QWORD*)(v66 + 1376)) {
      game_hub_d5b4e0(v66);
    }
    v68 = (__int64*)v2[1];
    v69 = v2[2];
    if ((unsigned __int64)v68 >= v69) {
      v71 = *v2;
      v72 = (signed __int64)v68 - *v2;
      v73 = (v72 >> 4) + 1;
      if (v73 >> 60 != 0) {
        GameRoutine_d83f20_alt1();
      }
      v74 = v69 - v71;
      if (v74 >> 3 > v73) {
        v73 = v74 >> 3;
      }
      if ((unsigned __int64)v74 >= 0x7FFFFFFFFFFFFFF0LL) {
        v75 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v75 = v73;
      }
      if (v75 >> 60 != 0) {
        GameRoutine_60a210_alt1();
      }
      v76 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v75, 16, 0);
      v77 = (__int64*)(v76 + v72);
      v84 = v76 + 16 * v75;
      *v77 = v64;
      v77[1] = v63;
      v78 = v76 + v72 - 16 * (v72 >> 4);
      v70 = v76 + v72 + 16;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v63 + 8), 1u,
                                memory_order_relaxed);
      memcpy_alt1(v78, v71, v72);
      *v2 = v78;
      v2[1] = v70;
      v2[2] = v84;
      if (v71 != 0) {
        v79 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v79 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v79, v71);
      }
      v47 = GameData_212dc68;
    }
    else {
      *v68 = v64;
      v68[1] = v63;
      v70 = (__int64)(v68 + 2);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v63 + 8), 1u,
                                memory_order_relaxed);
    }
    v2[1] = v70;
    v80 = v87;
    if (atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63);
      std___1___shared_weak_count___release_weak_alt1(v63);
    }
    v81 = v90_.v91;
    v48 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (v90_.v91 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v90_.v91 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v81 + 16LL))(v81);
      std___1___shared_weak_count___release_weak_alt1(v81);
    }
    result = GameRoutine_d6aa20((__int64)&v95_.v95);
  LABEL_140:
    if (v80 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v80 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v80 + 16LL))(v80);
      result = std___1___shared_weak_count___release_weak_alt1(v80);
    }
    goto LABEL_86;
  }
  return result;
}

__int64 EventDispos_d838e0(__int64 result, unsigned __int8* a2, __int64 a3,
                           __int64 a4, __int64* a5)
{
  __int64** v5;
  __int64** v6;
  unsigned __int8* v7;
  __int64 v9;
  unsigned __int8* v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  unsigned __int8* i;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int8* v27;
  __int64 v28;
  __int64 v29;
  __int64 v31;
  __int64* v32;
  const char* v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  char* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  const char* v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  char* v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  __int64* v51;
  _BYTE* v52;
  char* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  char v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  unsigned __int8* v74;
  const char* v76;
  const char* v77;
  __int64* v78;
  __int64 v80;
  struct {
    __int64 v81[2];
    __int64 v82;
  } v81_;
  struct {
    __int64 v83;
    __int64 v84;
    __int64 v85;
  } v83_;
  struct {
    __int128 v86;
    char* v87;
    char gap168_[24];
    int v88;
  } v86_;
  _QWORD v89[2];

  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = *(__int64***)result;
  v6 = *(__int64***)(result + 8);
  if (*(__int64***)result != v6) {
    v7 = a2 + 1;
    v9 = a3;
    v10 = a2;
    v76 = (const char*)(a4 + 1);
    v77 = (const char*)(a3 + 1);
    v11 = fw_memory_g_heap_manager_ptr;
    v74 = a2 + 1;
    while (1) {
      v13 = *v5;
      result = (*v5)[1];
      if (result == 0) {
        goto LABEL_8;
      }
      result = std___1___shared_weak_count_lock_alt1(result),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (result == 0) {
        goto LABEL_8;
      }
      v14 = *v13;
      if (*v13 != 0) {
        v15 = *(unsigned __int8*)(v14 + 208);
        if ((v15 & 1) != 0) {
          v16 = *(_QWORD*)(v14 + 216);
        }
        else {
          v16 = v15 >> 1;
        }
        v17 = *v10;
        v18 = *((_QWORD*)v10 + 1);
        if ((v17 & 1) == 0) {
          v18 = v17 >> 1;
        }
        if (v16 == v18) {
          v80 = result;
          v19 = (v15 & 1) != 0 ? *(_QWORD*)(v14 + 224) : v14 + 209;
          v20 = (v17 & 1) != 0 ? *((_QWORD*)v10 + 2) : (__int64)v7;
          v21 = memcmp(v19, v20, v16),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          result = v80;
          if (v21 == 0) {
            break;
          }
        }
      }
    LABEL_6:
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v31 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result),
            v56 = COERCE_AS(__typeof__(v56),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        result = std___1___shared_weak_count___release_weak_alt1(v31),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    LABEL_8:
      v5 += 2;
      if (v5 == v6) {
        return result;
      }
    }
    v22 = 24;
    if ((unsigned int)(*(_DWORD*)(v14 + 256) - 1) < 3) {
      v22 = 96;
    }
    LOBYTE(v86_.v86) = 18;
    v23 = v14 + v22;
    BYTE9(v86_.v86) = 100;
    *(_QWORD*)((char*)&v86_.v86 + 1) = *(_QWORD*)"WarpWorld";
    for (i = *(unsigned __int8**)(v14 + v22 + 1280);
         i != *(unsigned __int8**)(v23 + 1288); i += 64) {
      if (i != nullptr && *((_DWORD*)i + 12) == 0) {
        v25 = *i;
        v26 = *((_QWORD*)i + 1);
        if ((v25 & 1) == 0) {
          v26 = v25 >> 1;
        }
        if (v26 == 9) {
          v27 = (v25 & 1) != 0 ? *((unsigned __int8**)i + 2) : i + 1;
          v28 = *(_QWORD*)v27;
          v29 = v27[8];
          if (v28 == *(_QWORD*)((char*)&v86_.v86 + 1) &&
              v29 == BYTE9(v86_.v86)) {
            goto LABEL_6;
          }
        }
      }
    }
    v32 = (__int64*)v11;
    v78 = (__int64*)v23;
    if ((*(_BYTE*)v9 & 1) != 0) {
      v33 = *(const char**)(v9 + 16);
    }
    else {
      v33 = v77;
    }
    v34 = strlen_alt1(v33),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v34 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_108:
      String_60a1d0(),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v35 = v34;
    if (v34 >= 0x17) {
      if ((v34 | 7) == 0x17) {
        v37 = 26;
      }
      else {
        v37 = (v34 | 7) + 1;
      }
      v36 = (char*)fw_memory_HeapManager_Allocate_alt1(*v32, v37, 16, 0),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *((_QWORD*)&v86_.v86 + 1) = v35;
      v86_.v87 = v36;
      *(_QWORD*)&v86_.v86 = v37 | 1;
    }
    else {
      v36 = (char*)&v86_.v86 + 1;
      LOBYTE(v86_.v86) = 2 * v34;
      if (v34 == 0) {
      LABEL_56:
        v38 = *v32;
        v36[v35] = 0;
        v39 = fw_memory_HeapManager_Allocate_alt1(v38, 24, 16, 0),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_OWORD*)v39 = v86_.v86;
        *(_QWORD*)(v39 + 16) = v86_.v87;
        if ((*(_BYTE*)a4 & 1) != 0) {
          v40 = *(const char**)(a4 + 16);
        }
        else {
          v40 = v76;
        }
        v41 = strlen_alt1(v40),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v41 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_108;
        }
        v42 = v41;
        if (v41 >= 0x17) {
          v44 = a5;
          if ((v41 | 7) == 0x17) {
            v45 = 26;
          }
          else {
            v45 = (v41 | 7) + 1;
          }
          v46 = fw_memory_HeapManager_Allocate_alt1(*v32, v45, 16, 0),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v47 = v45 | 1;
          v43 = (char*)v46;
          *((_QWORD*)&v86_.v86 + 1) = v42;
          v86_.v87 = (char*)v46;
          a5 = v44;
          *(_QWORD*)&v86_.v86 = v47;
        }
        else {
          v43 = (char*)&v86_.v86 + 1;
          LOBYTE(v86_.v86) = 2 * v41;
          if (v41 == 0) {
            goto LABEL_68;
          }
        }
        memmove((__int64)v43, (__int64)v40, v42),
            v56 = COERCE_AS(__typeof__(v56),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      LABEL_68:
        v48 = *v32;
        v43[v42] = 0;
        v49 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v48, 48, 16, 0),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v50 = *((_QWORD*)&v86_.v86 + 1);
        v51 = v49;
        v49[3] = v86_.v86;
        v52 = v49 + 3;
        v53 = v86_.v87;
        v49[4] = v50;
        v49[5] = v53;
        v54 = *(_QWORD*)(v39 + 8);
        *v49 = *(_QWORD*)v39;
        v49[1] = v54;
        v49[2] = *(_QWORD*)(v39 + 16);
        v55 = 128;
        if (*(_QWORD*)(*v32 + 200) == 0) {
          v55 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v32 + v55, v39),
            v56 = COERCE_AS(__typeof__(v56),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        LOBYTE(v81_.v81[0]) = 18;
        v83_.v84 = 0;
        v83_.v85 = 0;
        v83_.v83 = 0;
        strcpy((char*)v81_.v81 + 1, "WarpWorld");
        GameRoutine_6b7aa0((__int64)&v83_.v83, v51, v51 + 6, 2u),
            v56 = COERCE_AS(__typeof__(v56),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        HandlePtr_d5bf40((__int64*)&v86_.v86, v56, v81_.v81),
            v56 = COERCE_AS(__typeof__(v56),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v86_.v88 = 0;
        v57 = v78[161];
        if (v57 >= v78[162]) {
          v59 = HubEventNatives_d5bb40(v78 + 160, (__int64)&v86_.v86),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        else {
          *(_BYTE*)v57 = 0;
          *(_DWORD*)(v57 + 48) = -1;
          v58 = v86_.v88;
          if (v86_.v88 != -1) {
            v89[0] = v57;
            ((void (*)(_QWORD*, __int128*))
                 HandlePtr_Unknown23_d5be90_ptr[v86_.v88])(v89, &v86_.v86),
                v56 =
                    COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            *(_DWORD*)(v57 + 48) = v58;
          }
          v59 = v57 + 64;
        }
        v78[161] = v59;
        v11 = (__int64)v32;
        if (v86_.v88 != -1) {
          ((void (*)(_QWORD*, __int128*))GameData_1fdce28[v86_.v88])(v89,
                                                                     &v86_.v86),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        game_d58e20(v14, 0, a5, 1),
            v56 = COERCE_AS(__typeof__(v56),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v60 = *(_QWORD*)(v14 + 1376);
        v10 = a2;
        *(_DWORD*)(v14 + 1448) = -1;
        *(_DWORD*)(v14 + 1760) |= 4u;
        if (*(_QWORD*)(v14 + 1384) != v60) {
          game_hub_d5b4e0(v14),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v61 = v83_.v83;
        if (v83_.v83 != 0) {
          v62 = v83_.v84;
          if (v83_.v83 == v83_.v84) {
            goto LABEL_89;
          }
          v63 = v83_.v84;
          do {
            v64 = *(_BYTE*)(v63 - 24);
            v63 -= 24;
            if ((v64 & 1) != 0) {
              v65 = *(_QWORD*)(v62 - 8);
              if (v65 != 0) {
                v66 = 56;
                if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
                  v66 = 128;
                }
                nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v11 + v66, v65),
                    v56 = COERCE_AS(
                        __typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
            }
            v62 = v63;
          } while (v63 != v61);
          v83_.v84 = v61;
          v61 = v83_.v83;
          if (v83_.v83 != 0) {
          LABEL_89:
            v67 = 56;
            if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
              v67 = 128;
            }
            nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v11 + v67, v61),
                v56 =
                    COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        if ((v81_.v81[0] & 1) != 0 && v81_.v82 != 0) {
          v68 = 56;
          if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
            v68 = 128;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v11 + v68, v81_.v82),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        if ((*v52 & 1) != 0) {
          v69 = v51[5];
          if (v69 != 0) {
            v70 = 56;
            if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
              v70 = 128;
            }
            nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v11 + v70, v69),
                v56 =
                    COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        v7 = v74;
        v9 = a3;
        if ((*(_BYTE*)v51 & 1) != 0) {
          v71 = v51[2];
          if (v71 != 0) {
            v72 = 128;
            if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
              v72 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v11 + v72, v71),
                v56 =
                    COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        v12 = 128;
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v11 + v12, (__int64)v51),
            v56 = COERCE_AS(__typeof__(v56),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        result = v80;
        goto LABEL_6;
      }
    }
    memmove((__int64)v36, (__int64)v33, v35),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_56;
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

void game_hub_EventDispos_Rebuild_lambda0_Invoke(__int64 a1, __int64 a2,
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
  unsigned __int64 v20;
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
  v5 = *(_QWORD**)(a1 + 8);
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(&v30_.v30, *(_QWORD*)(a2 + 16),
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
    v20 = v5[4] - v12;
  }
  else {
    v18 = 0;
    v20 = (unsigned __int64)v13;
    v19 = v3;
  }
  v21 = (__int64*)&v13[v18];
  v30_.v33 = 0;
  v30_.v34 = 0;
  v22 = v18 + 40 * v17;
  v23 = v30_.v30;
  v24 = v30_.v31;
  v25 = (char*)v21 - v20;
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
  memcpy_alt1((__int64)v21 - v20, v12, v20);
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
  nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v15 + v27, v12);
  v28 = v30_.v34;
  v5[4] = v11;
  if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak_alt1(v28);
  }
LABEL_25:
  if ((v30_.v30 & 1) != 0 && v30_.v32 != 0) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v30_.v32);
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
}

#pragma GCC visibility pop
