#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a7c2c0(_QWORD, _QWORD);
__int64 GameRoutine_d3d7a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d3d960(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_CharacterTrailModule_vtable[])();
extern __int64 fw_memory_g_heap_manager;
__int64 CharacterTrailModule_Destructor(__int64 a1);
__int64 CharacterTrailModule_d3c310(__int64 a1);
__int64 CharacterTrailModule_Unknown9(__int64 result);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_d3de40(void);
__int64 CharacterTrailModule_d3d7a0(__int64* a1, __int64 a2, __int64 a3);
__int64 CharacterTrailModule_d3d960(__int64 a1, __int64 a2);
__int64 CharacterTrailModule_d3daa0(__int64* a1, int* a2, __int64* a3,
                                    __int64 a4);
__int64* CharacterTrailModule_d3dce0(__int64* result, _QWORD* a2);
__int64 game_character_CharacterTrailModule_CharacterTrailModule_lambda0_Invoke(
    __int64 result);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void LocatorModule_a7c2c0(__int64, __int64);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_d3de40_alt1() __asm__("GameRoutine_d3de40");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__attribute__((swiftcall)) void Model_a66f60(PSEUDO_X8, __int64, __int64,
                                             unsigned __int64);
__int64 CharacterTrailModule_d3d1c0_alt1(
    __int64, __int64, unsigned int*) __asm__("CharacterTrailModule_d3d1c0");
__int64 GameRoutine_bd3bc0(__int64, __int64*);
__int64 LocatorModule_a7bee0(__int64, const char*);
__int64 Model_a661a0(__int64, int, __int64, int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count_lock(__int64);
bool GameRoutine_ad7390(_QWORD*);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21a6150;
extern __int128 GameData_21a6120;
extern __int128 GameData_21a6140;
extern __int64 (*GameData_1fc0970[])();
extern __int64 GameData_212c7d0[7];
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
int sprintf(__int64, const char*, ...);
unsigned __int64 strlen(const char*);
void LocatorModule_a7c2c0_alt1(_QWORD*,
                               __int64) __asm__("LocatorModule_a7c2c0");
void __attribute__((noreturn)) GameRoutine_d3d610();
void __cxa_guard_release(__int64);
void CharacterTrailModule_d3b6a0(__int64 a1);
_QWORD* GameHr_a7e4a0(__int64, __int64, _QWORD*, __int64, int);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN* GameData_212df28;
extern __int64 GameData_212c638;
extern int* GameData_212df08;
void GameRoutine_98f140(__int64*, _QWORD*);
void GameRoutine_a8c0c0(__int64);
void __attribute__((noreturn)) GameRoutine_98f290();
__int64 CharacterTrailModule_d3d1c0(__int64 a1, __int64 a2, int* a3);

void CharacterTrailModule_d3b6a0(__int64 a1)
{
  __int64 v2;
  const char* v3;
  unsigned __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 (**v17)();
  __int64 v18;
  __int64 v19;
  _QWORD** v20;
  _QWORD** v21;
  _BOOL4 v22;
  _BOOL4 v23;
  int v24;
  unsigned __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  _QWORD** v34;
  __int64 v35;
  _QWORD* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD** v40;
  __int64 (**v41)();
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned int v52;
  int v53;
  __int128 v54;
  __int64 v55;
  int v56;
  int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned int v61;
  int v62;
  __int128 v63;
  __int64 v64;
  int v65;
  int v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned int v70;
  int v71;
  __int128 v72;
  __int64 v73;
  int v74;
  int v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  unsigned int v79;
  int v80;
  __int128 v81;
  __int64 v82;
  int v83;
  int v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  char v90[32];
  struct {
    __int64 v91;
    __int64 v92;
  } v91_;
  struct {
    __int64 (**v93)();
    __int64 v94;
    __int64 v95;
    char gap72_[8];
    __int64* v96;
  } v93_;

  if (*(_QWORD*)(a1 + 80) != 0) {
    return;
  }
  v2 = *(_QWORD*)GameData_212c7d0[0];
  if ((*(_BYTE*)(a1 + 200) & 1) != 0) {
    v3 = *(const char**)(a1 + 216);
  }
  else {
    v3 = (const char*)(a1 + 201);
  }
  v4 = strlen(v3);
  v5 = *(__int64**)(v2 + 8);
  v6 = *(__int64**)(v2 + 16);
  if (v5 == v6) {
  LABEL_18:
    v14 = 0;
    v13 = 0;
  }
  else {
    v7 = v5 + 4;
    v8 = v4;
    while (1) {
      v10 = v7 - 4;
      v9 = *((unsigned __int8*)v7 - 32);
      v11 = *(v7 - 3);
      if ((v9 & 1) == 0) {
        v11 = v9 >> 1;
      }
      if (v8 == v11) {
        v12 = (v9 & 1) != 0 ? *(v7 - 2) : (__int64)v7 - 31;
        if (memcmp((__int64)v3, v12, v8) == 0) {
          break;
        }
      }
      v7 += 5;
      if (v10 + 5 == v6) {
        goto LABEL_18;
      }
    }
    v13 = *(v7 - 1);
    v14 = *v7;
    if (*v7 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                                memory_order_relaxed);
    }
  }
  v91_.v91 = 0;
  v91_.v92 = std___1___shared_weak_count_lock(v14);
  if (v91_.v92 != 0) {
    v91_.v91 = v13;
  }
  else {
    v13 = 0;
  }
  std___1___shared_weak_count___release_weak_alt1(v14);
  if (*(_BYTE*)(v13 + 165) == 1 && GameRoutine_ad7390((_QWORD*)v13)) {
    v15 = *(_QWORD*)(a1 + 8);
    LODWORD(v93_.v93) = 0;
    v16 = CharacterTrailModule_d3d1c0_alt1(v15, (__int64)&v91_.v91,
                                           (unsigned int*)&v93_.v93);
    *(_QWORD*)(a1 + 80) = v16;
    v17 = *(__int64 (***)(void))(v16 + 24);
    v18 = *(_QWORD*)(a1 + 8);
    v93_.v93 = v17;
    v19 = GameRoutine_bd3bc0(v18, (__int64*)&v93_.v93);
    sprintf((__int64)&v93_.v93, "r%02d", 0);
    sprintf((__int64)v90, "t%02d", 0);
    v20 = (_QWORD**)LocatorModule_a7bee0(v19, (const char*)&v93_.v93);
    v21 = (_QWORD**)LocatorModule_a7bee0(v19, v90);
    v22 = v20 != nullptr;
    v23 = v21 != nullptr;
    if (v20 != nullptr && v21 != nullptr) {
      v24 = 1;
      do {
        v26 = *(_QWORD**)(a1 + 296);
        v25 = *(_QWORD*)(a1 + 304);
        if ((unsigned __int64)v26 >= v25) {
          v28 = *(_QWORD*)(a1 + 288);
          v29 = (unsigned __int64)v26 - v28;
          v30 = ((__int64)v26 - v28) >> 4;
          v31 = v30 + 1;
          if ((unsigned __int64)(v30 + 1) >> 60 != 0) {
            GameRoutine_d3d610();
          }
          v32 = v25 - v28;
          if (v32 >> 3 > v31) {
            v31 = v32 >> 3;
          }
          if ((unsigned __int64)v32 >= 0x7FFFFFFFFFFFFFF0LL) {
            v33 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v33 = v31;
          }
          if (v33 != 0) {
            if (v33 >> 60 != 0) {
              GameRoutine_60a210_alt1();
            }
            v34 = v21;
            v35 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v33, 16, 0);
            v21 = v34;
          }
          else {
            v35 = 0;
          }
          v36 = (_QWORD*)(v35 + v29);
          v37 = v35 + 16 * v33;
          *v36 = v20;
          v36[1] = v21;
          v38 = v35 + v29 - 16 * v30;
          v27 = v35 + v29 + 16;
          memcpy(v38, v28, v29);
          *(_QWORD*)(a1 + 288) = v38;
          *(_QWORD*)(a1 + 296) = v27;
          *(_QWORD*)(a1 + 304) = v37;
          if (v28 != 0) {
            v39 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v39 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v39, v28);
          }
        }
        else {
          *v26 = v20;
          v26[1] = v21;
          v27 = (__int64)(v26 + 2);
        }
        *(_QWORD*)(a1 + 296) = v27;
        sprintf((__int64)&v93_.v93, "r%02d", v24);
        sprintf((__int64)v90, "t%02d", v24);
        v20 = (_QWORD**)LocatorModule_a7bee0(v19, (const char*)&v93_.v93);
        v21 = (_QWORD**)LocatorModule_a7bee0(v19, v90);
        v22 = v20 != nullptr;
        v23 = v21 != nullptr;
        if (v20 == nullptr) {
          break;
        }
        ++v24;
      } while (v21 != nullptr);
    }
    if (v22) {
      v40 = v21;
      LocatorModule_a7c2c0_alt1(*v20, (__int64)v20);
      v21 = v40;
    }
    if (v23) {
      LocatorModule_a7c2c0_alt1(*v21, (__int64)v21);
    }
    Model_a66f60((void*)(&v93_.v93), *(_QWORD*)(*(_QWORD*)(a1 + 80) + 24LL),
                 (__int64)"Mat_Eff", 7u);
    v41 = v93_.v93;
    v42 = v93_.v94;
    v43 = *(_QWORD*)(a1 + 232);
    v93_.v93 = nullptr;
    v93_.v94 = 0;
    *(_QWORD*)(a1 + 224) = v41;
    *(_QWORD*)(a1 + 232) = v42;
    if (v43 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
      std___1___shared_weak_count___release_weak_alt1(v43);
    }
    v44 = v93_.v94;
    if (v93_.v94 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v93_.v94 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
      std___1___shared_weak_count___release_weak_alt1(v44);
    }
    v45 = *(_QWORD*)(a1 + 224);
    if (v45 != 0) {
      (*(void (**)(__int64, const char*, __int64, __int64))(
          *(_QWORD*)v45 + 120LL))(v45, "BaseColorMultiplier0", 20, a1 + 240);
      (*(void (**)(_QWORD, const char*, __int64, __int64))(
          **(_QWORD**)(a1 + 224) + 80LL))(*(_QWORD*)(a1 + 224),
                                          "EmissionIntensity", 17, a1 + 256);
    }
    v46 = *(_QWORD*)(a1 + 288);
    if (*(_QWORD*)(a1 + 296) != v46) {
      v47 = 0;
      v48 = 0;
      while (1) {
        v50 = *(_QWORD*)(v46 + v47);
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6150,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)&GameData_21a6150) != 0) {
          v85 = *((_QWORD*)GameData_212c548 + 1);
          *(_QWORD*)&GameData_21a6140 = *(_QWORD*)GameData_212c548;
          *((_QWORD*)&GameData_21a6140 + 1) = v85;
          __cxa_guard_release((__int64)&GameData_21a6150);
        }
        v51 = *(_QWORD*)v50;
        v52 = DWORD2(GameData_21a6140);
        v53 = *(_DWORD*)(v50 + 128) | 4;
        *(_QWORD*)(v50 + 64) = GameData_21a6140;
        *(_DWORD*)(v50 + 128) = v53;
        LOBYTE(v53) = *(_BYTE*)(v50 + 28);
        v54 = *(_OWORD*)(v50 + 64);
        *((_QWORD*)&v54 + 1) = v52;
        *(_OWORD*)(v50 + 64) = v54;
        if ((v53 & 1) == 0) {
          break;
        }
      LABEL_71:
        *(_BYTE*)(*(_QWORD*)(v51 + 24) + 504LL) = 1;
        v59 = *(_QWORD*)(*(_QWORD*)(a1 + 288) + v47 + 8);
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6150,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)&GameData_21a6150) != 0) {
          v86 = *((_QWORD*)GameData_212c548 + 1);
          *(_QWORD*)&GameData_21a6140 = *(_QWORD*)GameData_212c548;
          *((_QWORD*)&GameData_21a6140 + 1) = v86;
          __cxa_guard_release((__int64)&GameData_21a6150);
        }
        v60 = *(_QWORD*)v59;
        v61 = DWORD2(GameData_21a6140);
        v62 = *(_DWORD*)(v59 + 128) | 4;
        *(_QWORD*)(v59 + 64) = GameData_21a6140;
        *(_DWORD*)(v59 + 128) = v62;
        LOBYTE(v62) = *(_BYTE*)(v59 + 28);
        v63 = *(_OWORD*)(v59 + 64);
        *((_QWORD*)&v63 + 1) = v61;
        *(_OWORD*)(v59 + 64) = v63;
        if ((v62 & 1) == 0) {
          v64 = *(_QWORD*)(v60 + 24);
          v65 = *(_DWORD*)(v59 + 16);
          v93_.v93 = GameData_1fc0970;
          v93_.v94 = v60;
          v93_.v95 = v59;
          v93_.v96 = (__int64*)&v93_.v93;
          v66 = Model_a661a0(v64, v65, (__int64)&v93_.v93, 0);
          if (v93_.v96 == (__int64*)&v93_.v93) {
            v67 = 32;
          LABEL_77:
            (*(void (**)(__int64))(*v93_.v96 + v67))((__int64)v93_.v96);
          }
          else if (v93_.v96 != nullptr) {
            v67 = 40;
            goto LABEL_77;
          }
          *(_DWORD*)(v59 + 24) = v66;
          *(_BYTE*)(v59 + 28) = 1;
        }
        *(_BYTE*)(*(_QWORD*)(v60 + 24) + 504LL) = 1;
        v68 = *(_QWORD*)(*(_QWORD*)(a1 + 288) + v47);
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
          v87 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v87;
          __cxa_guard_release((__int64)&GameData_21a6130);
        }
        v69 = *(_QWORD*)v68;
        v70 = DWORD2(GameData_21a6120);
        v71 = *(_DWORD*)(v68 + 128) | 2;
        *(_QWORD*)(v68 + 48) = GameData_21a6120;
        *(_DWORD*)(v68 + 128) = v71;
        LOBYTE(v71) = *(_BYTE*)(v68 + 28);
        v72 = *(_OWORD*)(v68 + 48);
        *((_QWORD*)&v72 + 1) = v70;
        *(_OWORD*)(v68 + 48) = v72;
        if ((v71 & 1) == 0) {
          v73 = *(_QWORD*)(v69 + 24);
          v74 = *(_DWORD*)(v68 + 16);
          v93_.v93 = GameData_1fc0970;
          v93_.v94 = v69;
          v93_.v95 = v68;
          v93_.v96 = (__int64*)&v93_.v93;
          v75 = Model_a661a0(v73, v74, (__int64)&v93_.v93, 0);
          if (v93_.v96 == (__int64*)&v93_.v93) {
            v76 = 32;
          LABEL_85:
            (*(void (**)(__int64))(*v93_.v96 + v76))((__int64)v93_.v96);
          }
          else if (v93_.v96 != nullptr) {
            v76 = 40;
            goto LABEL_85;
          }
          *(_DWORD*)(v68 + 24) = v75;
          *(_BYTE*)(v68 + 28) = 1;
        }
        *(_BYTE*)(*(_QWORD*)(v69 + 24) + 504LL) = 1;
        v77 = *(_QWORD*)(*(_QWORD*)(a1 + 288) + v47 + 8);
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
          v88 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v88;
          __cxa_guard_release((__int64)&GameData_21a6130);
        }
        v78 = *(_QWORD*)v77;
        v79 = DWORD2(GameData_21a6120);
        v80 = *(_DWORD*)(v77 + 128) | 2;
        *(_QWORD*)(v77 + 48) = GameData_21a6120;
        *(_DWORD*)(v77 + 128) = v80;
        LOBYTE(v80) = *(_BYTE*)(v77 + 28);
        v81 = *(_OWORD*)(v77 + 48);
        *((_QWORD*)&v81 + 1) = v79;
        *(_OWORD*)(v77 + 48) = v81;
        if ((v80 & 1) != 0) {
          goto LABEL_62;
        }
        v82 = *(_QWORD*)(v78 + 24);
        v83 = *(_DWORD*)(v77 + 16);
        v93_.v93 = GameData_1fc0970;
        v93_.v94 = v78;
        v93_.v95 = v77;
        v93_.v96 = (__int64*)&v93_.v93;
        v84 = Model_a661a0(v82, v83, (__int64)&v93_.v93, 0);
        if (v93_.v96 == (__int64*)&v93_.v93) {
          v49 = 32;
        }
        else {
          if (v93_.v96 == nullptr) {
            goto LABEL_61;
          }
          v49 = 40;
        }
        (*(void (**)(__int64))(*v93_.v96 + v49))((__int64)v93_.v96);
      LABEL_61:
        *(_DWORD*)(v77 + 24) = v84;
        *(_BYTE*)(v77 + 28) = 1;
      LABEL_62:
        ++v48;
        v47 += 16;
        *(_BYTE*)(*(_QWORD*)(v78 + 24) + 504LL) = 1;
        v46 = *(_QWORD*)(a1 + 288);
        if (v48 >= (*(_QWORD*)(a1 + 296) - v46) >> 4) {
          goto LABEL_100;
        }
      }
      v55 = *(_QWORD*)(v51 + 24);
      v56 = *(_DWORD*)(v50 + 16);
      v93_.v93 = GameData_1fc0970;
      v93_.v94 = v51;
      v93_.v95 = v50;
      v93_.v96 = (__int64*)&v93_.v93;
      v57 = Model_a661a0(v55, v56, (__int64)&v93_.v93, 0);
      if (v93_.v96 == (__int64*)&v93_.v93) {
        v58 = 32;
      }
      else {
        if (v93_.v96 == nullptr) {
        LABEL_70:
          *(_DWORD*)(v50 + 24) = v57;
          *(_BYTE*)(v50 + 28) = 1;
          goto LABEL_71;
        }
        v58 = 40;
      }
      (*(void (**)(__int64))(*v93_.v96 + v58))((__int64)v93_.v96);
      goto LABEL_70;
    }
  }
LABEL_100:
  v89 = v91_.v92;
  if (v91_.v92 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v91_.v92 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v89 + 16LL))(v89);
    std___1___shared_weak_count___release_weak_alt1(v89);
  }
}

__int64 CharacterTrailModule_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v5;
  __int64 v6;
  _DWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
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
  __int64 result;

  *(_QWORD*)a1 = game_character_CharacterTrailModule_vtable;
  v2 = *(_QWORD*)(a1 + 48);
  if (v2 != 0) {
    v3 = *(_QWORD*)(a1 + 56);
    if (*(_QWORD*)(v2 + 8) != -1 && v3 != 0) {
      v5 = *(_DWORD*)(a1 + 192);
      if (v5 != 0) {
        v6 = *(_QWORD*)(v3 + 72);
        v7 = *(_DWORD**)(v6 + 56);
        v8 = *(_QWORD*)(v6 + 64);
        if (v7 != (_DWORD*)v8) {
          do {
            if (v5 == *v7) {
              *v7 = 0;
            }
            v7 += 20;
          } while (v7 != (_DWORD*)v8);
          v7 = *(_DWORD**)(v6 + 56);
          v8 = *(_QWORD*)(v6 + 64);
        }
        if (0xCCCCCCCCCCCCCCCDLL * ((v8 - (__int64)v7) >> 4) >= 0x40) {
          v9 = CharacterTrailModule_d3d960((__int64)v7, v8);
          CharacterTrailModule_d3d7a0((__int64*)(v6 + 56), v9,
                                      *(_QWORD*)(v6 + 64));
        }
      }
    }
  }
  v10 = *(__int64**)(a1 + 264);
  if (v10 != nullptr) {
    LocatorModule_a7c2c0(*v10, (__int64)v10);
  }
  v11 = *(__int64**)(a1 + 272);
  if (v11 != nullptr) {
    LocatorModule_a7c2c0(*v11, (__int64)v11);
  }
  v12 = *(__int64**)(a1 + 280);
  if (v12 != nullptr) {
    LocatorModule_a7c2c0(*v12, (__int64)v12);
  }
  v13 = *(_QWORD*)(a1 + 288);
  v14 = *(_QWORD*)(a1 + 296);
  if (v13 != v14) {
    do {
      if (*(_QWORD*)v13 != 0) {
        LocatorModule_a7c2c0(**(_QWORD**)v13, *(_QWORD*)v13);
      }
      v15 = *(__int64**)(v13 + 8);
      if (v15 != nullptr) {
        LocatorModule_a7c2c0(*v15, (__int64)v15);
      }
      v13 += 16;
    } while (v13 != v14);
    v13 = *(_QWORD*)(a1 + 288);
  }
  if (v13 != 0) {
    v16 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 296) = v13;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v16 + v17, v13);
  }
  v18 = *(_QWORD*)(a1 + 232);
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak_alt1(v18);
    if ((*(_BYTE*)(a1 + 200) & 1) == 0) {
      goto LABEL_41;
    }
  }
  else if ((*(_BYTE*)(a1 + 200) & 1) == 0) {
    goto LABEL_41;
  }
  v19 = *(_QWORD*)(a1 + 216);
  if (v19 != 0) {
    v20 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v20, v19);
  }
LABEL_41:
  v21 = *(_QWORD*)(a1 + 96);
  if (v21 != 0) {
    v22 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 104) = v21;
    v23 = 128;
    if (*(_QWORD*)(v22 + 200) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v22 + v23, v21);
  }
  result = *(_QWORD*)(a1 + 48);
  if (result != 0) {
    return std___1___shared_weak_count___release_weak_alt1(result);
  }
  return result;
}

__int64 CharacterTrailModule_d3c310(__int64 a1)
{
  float v1;
  _QWORD* v2;
  char v3;
  __int64 v4;
  _BYTE* v5;
  char v6;
  _QWORD* v7;
  char v8;
  __int64 v9;
  _BYTE* v10;
  float v11;
  char v12;
  _QWORD* v13;
  char v14;
  __int64 v15;
  _BYTE* v16;

  if (*(_BYTE*)(a1 + 128) == 1) {
    v1 = *(float*)(a1 + 124);
    if (v1 >= (float)(*(float*)(*(_QWORD*)(a1 + 24) + 8LL) / 60.0) ||
        (*(_BYTE*)(a1 + 88) & 1) != 0) {
      goto LABEL_11;
    }
    v2 = *(_QWORD**)(a1 + 80);
    if (v2 != nullptr && *((_BYTE*)v2 + 16) != 0) {
      v3 = *((_BYTE*)v2 + 17);
      *((_BYTE*)v2 + 16) = 0;
      v4 = a1;
      *((_BYTE*)v2 + 17) = v3 | 2;
      *((_BYTE*)v2 + 18) |= 2u;
      *((_BYTE*)v2 + 19) |= 2u;
      *((_BYTE*)v2 + 20) |= 2u;
      v5 = (_BYTE*)v2[1];
      v5[632] = 0;
      v5[664] = 0;
      v5[696] = 0;
      v5[728] = 0;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v2 + 72LL))(
          (void*)v2, v2);
      v1 = *(float*)(v4 + 124);
      v6 = *(_BYTE*)(v4 + 128);
      a1 = v4;
    }
    else {
      v6 = 1;
    }
    *(_BYTE*)(a1 + 88) = 1;
    if ((v6 & 1) != 0) {
    LABEL_11:
      if (v1 >= (float)(*(float*)(a1 + 132) +
                        (float)(*(float*)(*(_QWORD*)(a1 + 32) + 8LL) / 60.0)) &&
          (*(_BYTE*)(a1 + 88) & 1) == 0) {
        v7 = *(_QWORD**)(a1 + 80);
        if (v7 != nullptr && *((_BYTE*)v7 + 16) != 0) {
          v8 = *((_BYTE*)v7 + 17);
          *((_BYTE*)v7 + 16) = 0;
          v9 = a1;
          *((_BYTE*)v7 + 17) = v8 | 2;
          *((_BYTE*)v7 + 18) |= 2u;
          *((_BYTE*)v7 + 19) |= 2u;
          *((_BYTE*)v7 + 20) |= 2u;
          v10 = (_BYTE*)v7[1];
          v10[632] = 0;
          v10[664] = 0;
          v10[696] = 0;
          v10[728] = 0;
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
              *v7 + 72LL))((void*)v7, v7);
          a1 = v9;
        }
        *(_BYTE*)(a1 + 88) = 1;
      }
    }
  }
  v11 = *(float*)(a1 + 120);
  v12 = (v11 <= 0.0) | *(_BYTE*)(a1 + 88);
  if (v11 <= 0.0 && (*(_BYTE*)(a1 + 88) & 1) == 0) {
    v13 = *(_QWORD**)(a1 + 80);
    if (v13 != nullptr && *((_BYTE*)v13 + 16) != 0) {
      v14 = *((_BYTE*)v13 + 17);
      *((_BYTE*)v13 + 16) = 0;
      v15 = a1;
      *((_BYTE*)v13 + 17) = v14 | 2;
      *((_BYTE*)v13 + 18) |= 2u;
      *((_BYTE*)v13 + 19) |= 2u;
      *((_BYTE*)v13 + 20) |= 2u;
      v16 = (_BYTE*)v13[1];
      v16[632] = 0;
      v16[664] = 0;
      v16[696] = 0;
      v16[728] = 0;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
          *v13 + 72LL))((void*)v13, v13);
      a1 = v15;
    }
    v12 = 1;
    *(_BYTE*)(a1 + 88) = 1;
  }
  return v12 & 1;
}

__int64 CharacterTrailModule_Unknown9(__int64 result)
{
  _QWORD* v1;
  char v2;
  __int64 v3;
  _BYTE* v4;

  if ((*(_BYTE*)(result + 88) & 1) == 0) {
    v1 = *(_QWORD**)(result + 80);
    if (v1 != nullptr && *((_BYTE*)v1 + 16) != 0) {
      v2 = *((_BYTE*)v1 + 17);
      *((_BYTE*)v1 + 16) = 0;
      v3 = result;
      *((_BYTE*)v1 + 17) = v2 | 2;
      *((_BYTE*)v1 + 18) |= 2u;
      *((_BYTE*)v1 + 19) |= 2u;
      *((_BYTE*)v1 + 20) |= 2u;
      v4 = (_BYTE*)v1[1];
      v4[632] = 0;
      v4[664] = 0;
      v4[696] = 0;
      v4[728] = 0;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v1 + 72LL))(
          (void*)v1, v1);
      result = v3;
    }
    *(_BYTE*)(result + 88) = 1;
  }
  return result;
}

__int64 CharacterTrailModule_d3d1c0(__int64 a1, __int64 a2, int* a3)
{
  __int64* v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int8 explicit;
  int* v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  _BYTE* v21;
  _BYTE* v22;
  bool v23;
  __int64* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  struct {
    __int64 v53;
    __int64 v54;
  } v53_;

  nn_os_LockMutex((__int64)GameData_212df28);
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 208, 16, 0);
  v8 = *a3;
  v9 = v7;
  v10 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL) +
               40LL);
  v11 = *(_QWORD*)(v10 + 24);
  v53_.v53 = *(_QWORD*)(v10 + 16);
  v53_.v54 = v11;
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
    GameHr_a7e4a0(v7, a1, &v53_.v53, a2, v8);
    std___1___shared_weak_count___release_weak_alt1(v11);
  }
  else {
    GameHr_a7e4a0(v7, a1, &v53_.v53, a2, v8);
  }
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v13 = GameData_212df08;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire((__int64)GameData_212df10) != 0) {
    *v13 = wld_Crc32(0, "ModelModule", 0xBu);
    __cxa_guard_release((__int64)GameData_212df10);
  }
  v14 = *v13;
  v15 = *(_QWORD*)(a1 + 504);
  v16 = *(_QWORD*)(a1 + 512);
  v17 = v16;
  LODWORD(v53_.v53) = v14;
  v53_.v54 = v9;
  while (v17 != v15) {
    v18 = *(_DWORD*)(v17 - 16);
    v17 -= 16;
    if (v18 == v14) {
      if ((*(_BYTE*)(v9 + 16) & 1) != 0) {
        goto LABEL_23;
      }
      goto LABEL_17;
    }
  }
  if (v15 == v16 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v15) <= 0x6F) {
    v19 = fw_memory_HeapManager_Allocate_alt1(*v6, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v19;
    *(_QWORD*)(a1 + 512) = v19;
    *(_QWORD*)(a1 + 520) = v19 + 112;
    if (v16 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v6 + v20, v15);
    }
  }
  GameRoutine_98f140((__int64*)(a1 + 504), &v53_.v53);
  if ((*(_BYTE*)(v9 + 16) & 1) == 0) {
  LABEL_17:
    *(_BYTE*)(v9 + 16) = 1;
    *(_BYTE*)(v9 + 17) &= ~2u;
    *(_BYTE*)(v9 + 18) &= ~2u;
    *(_BYTE*)(v9 + 19) &= ~2u;
    *(_BYTE*)(v9 + 20) &= ~2u;
    v21 = *(_BYTE**)(v9 + 8);
    v21[632] = 0;
    v21[664] = 0;
    v21[696] = 0;
    v21[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 64LL))(v9);
    v22 = *(_BYTE**)(v9 + 8);
    v23 = v22[300] == 3 && v22[301] == 3;
    if (v23 || v22[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 72LL))(v9);
    }
  }
LABEL_23:
  v24 = *(__int64**)(a1 + 536);
  v25 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v24 >= v25) {
    v27 = *(_QWORD*)(a1 + 528);
    v28 = (char*)v24 - v27;
    v29 = ((__int64)v24 - v27) >> 3;
    v30 = v29 + 1;
    if ((unsigned __int64)(v29 + 1) >> 61 != 0) {
      goto LABEL_58;
    }
    v31 = v25 - v27;
    if (v31 >> 2 > v30) {
      v30 = v31 >> 2;
    }
    if ((unsigned __int64)v31 >= 0x7FFFFFFFFFFFFFF8LL) {
      v32 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v32 = v30;
    }
    if (v32 != 0) {
      if (v32 >> 61 != 0) {
        goto LABEL_59;
      }
      v33 = fw_memory_HeapManager_Allocate_alt1(*v6, 8 * v32, 16, 0);
    }
    else {
      v33 = 0;
    }
    v34 = v33 + 8 * v32;
    v35 = (unsigned __int64)v24 - v27;
    v36 = (__int64)&v28[v33 + -8 * v29];
    *(_QWORD*)&v28[v33] = v9;
    v26 = (__int64)&v28[v33 + 8];
    memcpy(v36, v27, v35);
    *(_QWORD*)(a1 + 528) = v36;
    *(_QWORD*)(a1 + 536) = v26;
    *(_QWORD*)(a1 + 544) = v34;
    if (v27 != 0) {
      v37 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v6 + v37, v27);
    }
  }
  else {
    *v24 = v9;
    v26 = (__int64)(v24 + 1);
  }
  *(_QWORD*)(a1 + 536) = v26;
  v38 = *(__int64**)(a1 + 560);
  v39 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v38 < v39) {
    *v38 = v9;
    v40 = (__int64)(v38 + 1);
    goto LABEL_55;
  }
  v41 = *(_QWORD*)(a1 + 552);
  v42 = (char*)v38 - v41;
  v43 = ((__int64)v38 - v41) >> 3;
  v44 = v43 + 1;
  if ((unsigned __int64)(v43 + 1) >> 61 != 0) {
  LABEL_58:
    GameRoutine_98f290();
  }
  v45 = v39 - v41;
  if (v45 >> 2 > v44) {
    v44 = v45 >> 2;
  }
  if ((unsigned __int64)v45 >= 0x7FFFFFFFFFFFFFF8LL) {
    v46 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v46 = v44;
  }
  if (v46 != 0) {
    if (v46 >> 61 == 0) {
      v47 = fw_memory_HeapManager_Allocate_alt1(*v6, 8 * v46, 16, 0);
      goto LABEL_51;
    }
  LABEL_59:
    GameRoutine_60a210_alt1();
  }
  v47 = 0;
LABEL_51:
  v48 = v47 + 8 * v46;
  v49 = (unsigned __int64)v38 - v41;
  v50 = (__int64)&v42[v47 + -8 * v43];
  *(_QWORD*)&v42[v47] = v9;
  v40 = (__int64)&v42[v47 + 8];
  memcpy(v50, v41, v49);
  *(_QWORD*)(a1 + 552) = v50;
  *(_QWORD*)(a1 + 560) = v40;
  *(_QWORD*)(a1 + 568) = v48;
  if (v41 != 0) {
    v51 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v51 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v51, v41);
  }
LABEL_55:
  *(_QWORD*)(a1 + 560) = v40;
  GameRoutine_a8c0c0(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex((__int64)GameData_212df28);
  return v9;
}

__int64 CharacterTrailModule_d3d7a0(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v4;
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
  __int64 v19;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;

  if (a2 == a3) {
    return a2;
  }
  v4 = a1[1];
  if (a3 == v4) {
    v19 = a2;
    if (a2 == v4) {
      goto LABEL_20;
    }
  LABEL_23:
    while (1) {
      v21 = *(_QWORD**)(v4 - 16);
      if ((_QWORD*)(v4 - 48) == v21) {
        break;
      }
      if (v21 != nullptr) {
        v22 = 40;
      LABEL_27:
        (*(void (**)(void*))(*v21 + v22))(v21);
      }
      v23 = *(_QWORD*)(v4 - 64);
      if (v23 != 0) {
        std___1___shared_weak_count___release_weak(v23);
      }
      v4 -= 80;
      if (v4 == v19) {
        goto LABEL_20;
      }
    }
    v22 = 32;
    goto LABEL_27;
  }
  v6 = *a1;
  v7 = *a1 + a2;
  v8 = -*a1;
  v9 = *a1 + a3;
  do {
    v10 = v9 + v8;
    v11 = v7 + v8;
    *(_DWORD*)v11 = *(_DWORD*)(v9 + v8);
    v12 = *(_QWORD*)(v9 + v8 + 8);
    v13 = *(_QWORD*)(v9 + v8 + 16);
    *(_QWORD*)(v10 + 8) = 0;
    *(_QWORD*)(v10 + 16) = 0;
    v14 = *(_QWORD*)(v7 + v8 + 16);
    *(_QWORD*)(v11 + 8) = v12;
    *(_QWORD*)(v11 + 16) = v13;
    if (v14 != 0) {
      std___1___shared_weak_count___release_weak(v14);
    }
    v15 = *(_QWORD**)(v11 + 64);
    *(_QWORD*)(v11 + 64) = 0;
    if ((_QWORD*)(v11 + 32) == v15) {
      v16 = 32;
    }
    else {
      if (v15 == nullptr) {
        goto LABEL_13;
      }
      v16 = 40;
    }
    (*(void (**)(void*))(*v15 + v16))(v15);
  LABEL_13:
    v17 = v9 + v8;
    v18 = *(_QWORD*)(v9 + v8 + 64);
    if (v18 != 0) {
      if (v10 + 32 == v18) {
        *(_QWORD*)(v11 + 64) = v11 + 32;
        (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v17 + 64) + 24LL))(
            *(_QWORD*)(v17 + 64), v11 + 32);
      }
      else {
        *(_QWORD*)(v11 + 64) = v18;
        *(_QWORD*)(v17 + 64) = 0;
      }
    }
    else {
      *(_QWORD*)(v11 + 64) = 0;
    }
    v9 += 80;
    v7 += 80;
  } while (v9 + v8 != v4);
  v4 = a1[1];
  v19 = v7 - v6;
  if (v7 - v6 != v4) {
    goto LABEL_23;
  }
LABEL_20:
  a1[1] = v19;
  return a2;
}

__int64 CharacterTrailModule_d3d960(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;

  v3 = a1;
  if (a1 == a2) {
  LABEL_7:
    if (v3 == a2) {
      return v3;
    }
    for (i = v3 + 80;; i += 80) {
      if (i == a2) {
        return v3;
      }
      if (*(_DWORD*)i != 0) {
        v6 = *(_QWORD*)(i + 16);
        if (v6 != 0 && *(_QWORD*)(v6 + 8) != -1) {
          break;
        }
      }
    LABEL_11:;
    }
    *(_DWORD*)v3 = *(_DWORD*)i;
    v7 = *(_QWORD*)(i + 8);
    v8 = *(_QWORD*)(i + 16);
    *(_QWORD*)(i + 8) = 0;
    *(_QWORD*)(i + 16) = 0;
    v9 = *(_QWORD*)(v3 + 16);
    *(_QWORD*)(v3 + 8) = v7;
    *(_QWORD*)(v3 + 16) = v8;
    if (v9 != 0) {
      std___1___shared_weak_count___release_weak(v9);
    }
    v10 = *(_QWORD**)(v3 + 64);
    *(_QWORD*)(v3 + 64) = 0;
    if (v10 == (_QWORD*)(v3 + 32)) {
      v11 = 32;
    }
    else {
      if (v10 == nullptr) {
      LABEL_23:
        v12 = *(_QWORD*)(i + 64);
        if (v12 != 0) {
          if (i + 32 == v12) {
            *(_QWORD*)(v3 + 64) = v3 + 32;
            (*(void (**)(_QWORD, __int64))(**(_QWORD**)(i + 64) + 24LL))(
                *(_QWORD*)(i + 64), v3 + 32);
          }
          else {
            *(_QWORD*)(v3 + 64) = v12;
            *(_QWORD*)(i + 64) = 0;
          }
        }
        else {
          *(_QWORD*)(v3 + 64) = 0;
        }
        v3 += 80;
        goto LABEL_11;
      }
      v11 = 40;
    }
    (*(void (**)(void*))(*v10 + v11))(v10);
    goto LABEL_23;
  }
  do {
    if (*(_DWORD*)v3 == 0) {
      goto LABEL_7;
    }
    v4 = *(_QWORD*)(v3 + 16);
    if (v4 == 0 || *(_QWORD*)(v4 + 8) == -1) {
      goto LABEL_7;
    }
    v3 += 80;
  } while (v3 != a2);
  return a2;
}

__int64 CharacterTrailModule_d3daa0(__int64* a1, int* a2, __int64* a3,
                                    __int64 a4)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  struct {
    __int64 v29;
    __int64 v30;
    __int64 v31;
    unsigned __int64 v32;
    __int64* v33;
  } v29_;

  v4 = *a1;
  v5 = a1[1] - *a1;
  v6 = 1 - 0x3333333333333333LL * (v5 >> 4);
  if (v6 > 0x333333333333333LL) {
    GameRoutine_d3de40_alt1();
  }
  v7 = a1[2];
  v29_.v33 = a1 + 2;
  v12 = fw_memory_g_heap_manager_ptr;
  v13 = 0xCCCCCCCCCCCCCCCDLL * ((v7 - v4) >> 4);
  if (2 * v13 > v6) {
    v6 = 2 * v13;
  }
  if (v13 >= 0x199999999999999LL) {
    v14 = 0x333333333333333LL;
  }
  else {
    v14 = v6;
  }
  if (v14 != 0) {
    if (v14 > 0x333333333333333LL) {
      GameRoutine_60a210_alt1();
    }
    v15 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 80 * v14, 16, 0);
  }
  else {
    v15 = 0;
  }
  v16 = *a2;
  v17 = v15 + v5;
  v29_.v29 = v15;
  v29_.v30 = v17;
  v29_.v32 = v15 + 80 * v14;
  v18 = *a3;
  v19 = a3[1];
  if (v19 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
    *(_DWORD*)v17 = v16;
    *(_QWORD*)(v17 + 8) = v18;
    *(_QWORD*)(v17 + 16) = v19;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
    v20 = *(_QWORD*)(a4 + 32);
    if (v20 != 0) {
      goto LABEL_13;
    }
  }
  else {
    *(_DWORD*)v17 = v16;
    *(_QWORD*)(v17 + 8) = v18;
    *(_QWORD*)(v17 + 16) = 0;
    v20 = *(_QWORD*)(a4 + 32);
    if (v20 != 0) {
    LABEL_13:
      if (v20 == a4) {
        *(_QWORD*)(v17 + 64) = v17 + 32;
        (*(void (**)(__int64))(*(_QWORD*)v20 + 24LL))(v20);
        if (v19 == 0) {
          goto LABEL_19;
        }
      }
      else {
        *(_QWORD*)(v17 + 64) =
            (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        if (v19 == 0) {
          goto LABEL_19;
        }
      }
      goto LABEL_18;
    }
  }
  *(_QWORD*)(v17 + 64) = 0;
  if (v19 != 0) {
  LABEL_18:
    std___1___shared_weak_count___release_weak_alt1(v19);
  }
LABEL_19:
  v29_.v31 = v17 + 80;
  CharacterTrailModule_d3dce0(a1, &v29_.v29);
  v21 = a1[1];
  v22 = v29_.v30;
  while (1) {
    v23 = v29_.v31;
    if (v22 == v29_.v31) {
      break;
    }
    v29_.v31 -= 80;
    v24 = *(_QWORD**)(v23 - 16);
    if (v24 == (_QWORD*)(v23 - 48)) {
      v25 = 32;
      goto LABEL_25;
    }
    if (v24 != nullptr) {
      v25 = 40;
    LABEL_25:
      (*(void (**)(__int64))(*v24 + v25))((__int64)v24);
    }
    v26 = *(_QWORD*)(v23 - 64);
    if (v26 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v26);
    }
  }
  if (v29_.v29 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v12 + v27, v29_.v29);
  }
  return v21;
}

__int64* CharacterTrailModule_d3dce0(__int64* result, _QWORD* a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v3 = *result;
  v2 = (_QWORD*)result[1];
  v5 = result;
  v6 = a2[1] + *result - (_QWORD)v2;
  if (v2 != (_QWORD*)*result) {
    v7 = 0;
    do {
      v8 = v3 + v7;
      v9 = v6 + v7;
      *(_DWORD*)v9 = *(_DWORD*)(v3 + v7);
      *(_QWORD*)(v9 + 8) = *(_QWORD*)(v3 + v7 + 8);
      *(_QWORD*)(v9 + 16) = *(_QWORD*)(v3 + v7 + 16);
      *(_QWORD*)(v8 + 8) = 0;
      *(_QWORD*)(v8 + 16) = 0;
      v10 = *(_QWORD*)(v3 + v7 + 64);
      if (v10 != 0) {
        if (v8 + 32 == v10) {
          *(_QWORD*)(v9 + 64) = v9 + 32;
          (*(void (**)(_QWORD))(**(_QWORD**)(v8 + 64) + 24LL))(
              *(_QWORD*)(v8 + 64));
        }
        else {
          *(_QWORD*)(v9 + 64) = v10;
          *(_QWORD*)(v8 + 64) = 0;
        }
      }
      else {
        *(_QWORD*)(v9 + 64) = 0;
      }
      v7 += 80;
    } while ((_QWORD*)(v3 + v7) != v2);
    v11 = (_QWORD*)(v3 + 32);
    while (1) {
      v13 = (_QWORD*)v11[4];
      if (v11 == v13) {
        break;
      }
      if (v13 != nullptr) {
        v14 = 40;
      LABEL_15:
        (*(void (**)(void*))(*v13 + v14))(v13);
      }
      result = (__int64*)*(v11 - 2);
      if (result != nullptr) {
        result = (__int64*)std___1___shared_weak_count___release_weak(result);
      }
      v12 = v11 + 6;
      v11 += 10;
      if (v12 == v2) {
        goto LABEL_18;
      }
    }
    v14 = 32;
    goto LABEL_15;
  }
LABEL_18:
  a2[1] = v6;
  v15 = *v5;
  v5[1] = *v5;
  *v5 = a2[1];
  a2[1] = v15;
  v16 = v5[1];
  v5[1] = a2[2];
  a2[2] = v16;
  v17 = v5[2];
  v5[2] = a2[3];
  a2[3] = v17;
  *a2 = a2[1];
  return result;
}

__int64 game_character_CharacterTrailModule_CharacterTrailModule_lambda0_Invoke(
    __int64 result)
{
  __int64 v1;
  char v2;
  _BYTE* v3;

  v1 = *(_QWORD*)(result + 8);
  if ((*(_BYTE*)(v1 + 88) & 1) == 0) {
    result = *(_QWORD*)(v1 + 80);
    if (result != 0 && *(_BYTE*)(result + 16) != 0) {
      v2 = *(_BYTE*)(result + 17);
      *(_BYTE*)(result + 16) = 0;
      *(_BYTE*)(result + 17) = v2 | 2;
      *(_BYTE*)(result + 18) |= 2u;
      *(_BYTE*)(result + 19) |= 2u;
      *(_BYTE*)(result + 20) |= 2u;
      v3 = *(_BYTE**)(result + 8);
      v3[632] = 0;
      v3[664] = 0;
      v3[696] = 0;
      v3[728] = 0;
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 72LL))(result);
    }
    *(_BYTE*)(v1 + 88) = 1;
  }
  return result;
}

#pragma GCC visibility pop
