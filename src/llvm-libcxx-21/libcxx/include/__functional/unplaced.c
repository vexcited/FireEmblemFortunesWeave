#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
GameRoutine_109da60(PSEUDO_X8, float32x4_t*, float32x4_t*, int8x16_t result);
__attribute__((swiftcall)) void GameRoutine_1612480(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 DecalObject_a91100(__int64*, __int64, __int64, __int64);
__int64 GameHr_bf85a0(__int64 result, _QWORD*, __int64);
__int64 GameHr_bf8700(__int64*, __int64*);
__int64 GameRoutine_1085a10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_10aa3c0(_QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_1fa0(__int64, int);
__int64 GameRoutine_1fd0(__int64, __int64);
__int64 GameRoutine_5fc1f0(__int64);
__int64 GameRoutine_609140(__int64, __int64, ...);
__int64 GameRoutine_a81a70(__int64, unsigned __int64);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fs_609260(__int64, const char*, char);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 g3d_a6c880(__int64*, __int64, unsigned __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 nn_hid_GetNmouseHandles(__int64, int, unsigned int);
__int64 nn_hid_GetNmouseState(_QWORD, _QWORD);
__int64 nn_hid_GetNmouseTypeSet(_QWORD, _QWORD);
__int64 nn_hid_GetNpadStyleSet(__int64);
__int64 nn_hid_SetNmousePointerPosition(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___hash_memory(__int64, unsigned __int64);
__int64 std___1___next_prime(unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 timeline_2020(unsigned __int16*, _WORD*);
__int64 timeline_21c0(unsigned int*, unsigned int*);
__int64 timeline_2360(unsigned __int64*, unsigned __int64*);
__int64 ui_1567590(__int64 result, char);
bool GameRoutine_c05690(_QWORD*, __int64);
bool GameRoutine_c05fb0(__int64**, __int64);
bool GameRoutine_c3d2d0(__int64**, __int64);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
const char* game_HashString32(const char* result);
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c2b0;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN* GameData_2130228;
extern _UNKNOWN GameData_216de68;
extern _UNKNOWN GameData_21a6190;
extern _UNKNOWN GameData_21c6868;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int128 GameData_21a6180;
extern __int64 (*GameData_1fd2280[])();
extern __int64* GameData_212d460[6];
extern __int64* GameData_212d890[2];
extern __int64* GameData_212e740[2];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212ce30;
extern __int64 GameData_212d270;
extern __int64 GameData_21c67b0;
extern __int64 GameData_21c67b8;
extern __int64 GameData_21c67c0;
extern __int64 GameData_21c67d0;
extern __int64 GameData_21c67e0;
extern __int64 GameData_21c67f0;
extern __int64 GameData_21c67f8;
extern __int64 GameData_21c6800;
extern __int64 GameData_21c6810;
extern __int64 GameData_21c6820;
extern __int64 GameData_21c6830;
extern __int64 GameData_21c6838;
extern __int64 GameData_21c6840;
extern __int64 GameData_21c6850;
extern __int64 GameData_21c6860;
extern __int64 GameData_21c6960;
extern __int64 GameData_21ec7b8;
extern __int64 as_g_base_frame_counter;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting_ptr;
extern char* GameData_20680f0;
extern char GameData_1b7ea6c[2];
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern char GameData_2203488;
extern char GameData_2203489;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
extern int GameData_220348c;
float Cursor_734120(int, int, float, float, float, float);
float math_Vec3_Angle(float32x4_t*, float32x4_t*);
int memcmp(__int64, __int64, unsigned __int64);
int sscanf(const char*, const char*, ...);
long double GameHr_c51220(__int64**, char*);
unsigned __int64 GameRoutine_1130770(__int64, const char*, __int64*);
unsigned __int64 Value_2500(__int64*, __int64, unsigned __int64);
void GameRoutine_a5e600(__int64*, unsigned __int64);
void GameStringReads_c05cc0(__int64**, __int64);
void LayoutAccessor_1562cf0(__int64*, const char*);
void _ZN4game4menu12_GLOBAL__N_116ProcUnitInfoFull21UpdateUnknown1614680Ei(
    __int64, int);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_a5dcd0();
void __attribute__((noreturn)) GameRoutine_c511e0();
void __attribute__((noreturn)) GameRoutine_c51200();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 llvm_libcxx_21_libcxx_include___functional_a53bc0(__int64 a1,
                                                          __int64 a2);
void llvm_libcxx_21_libcxx_include___functional_a5c540(_QWORD* a1, _QWORD* a2,
                                                       __int64 a3,
                                                       unsigned __int64 a4);
__attribute__((swiftcall)) void
llvm_libcxx_21_libcxx_include___functional_a5cb20(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2,
                                                  unsigned __int64 a3);
__int64 llvm_libcxx_21_libcxx_include___functional_bf3520(__int64* a1,
                                                          __int64 a2);
__int64 llvm_libcxx_21_libcxx_include___functional_bfbe00(__int64 result);
__int64 llvm_libcxx_21_libcxx_include___functional_bfc550(__int64 result);
__int64 llvm_libcxx_21_libcxx_include___functional_bfc6d0(__int64 result);
__int64 llvm_libcxx_21_libcxx_include___functional_c4eea0(_QWORD* a1,
                                                          _QWORD* a2);
float llvm_libcxx_21_libcxx_include___functional_10a92a0(float32x4_t* a1,
                                                         float a2, float a3);
__int64 llvm_libcxx_21_libcxx_include___functional_10aa280(__int64 a1,
                                                           __int64 a2,
                                                           __int64 a3,
                                                           float a4);
__int64 llvm_libcxx_21_libcxx_include___functional_1611330(__int64 a1, int a2);
void llvm_libcxx_21_libcxx_include___functional_1937a70(__int64 a1);
__int64 llvm_libcxx_21_libcxx_include___functional_1990c40(__int64 result);
__n128 llvm_libcxx_21_libcxx_include___functional_19a4910(__int64 a1,
                                                          __int64 a2, char a3);

__int64 llvm_libcxx_21_libcxx_include___functional_a53bc0(__int64 a1,
                                                          __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  bool v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64** v14;
  __int64* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  float v25;
  float v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  float v30;
  _BOOL8 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  _QWORD* v35;
  unsigned __int64 v36;
  __int64 primeEm;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  _QWORD* v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  _QWORD* v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;

  v2 = *(unsigned __int8*)(a2 + 16);
  v5 = (v2 & 1) == 0;
  v6 = v2 >> 1;
  if (v5) {
    v7 = a2 + 17;
  }
  else {
    v7 = *(_QWORD*)(a2 + 32);
  }
  if (v5) {
    v8 = v6;
  }
  else {
    v8 = *(_QWORD*)(a2 + 24);
  }
  v9 = std___1___hash_memory(v7, v8);
  *(_QWORD*)(a2 + 8) = v9;
  v10 = *(_QWORD*)(a1 + 8);
  if (v10 != 0) {
    v11 = v10 - 1;
    v12 = v9;
    if ((v10 & (v10 - 1)) != 0) {
      v13 = v9;
      if (v9 >= v10) {
        v13 = v9 % v10;
      }
    }
    else {
      v13 = v11 & v9;
    }
    v14 = *(__int64***)(*(_QWORD*)a1 + 8 * v13);
    if (v14 != nullptr) {
      v15 = *v14;
      if (*v14 != nullptr) {
        if ((v10 & v11) == 0) {
          while (1) {
            v20 = v15[1];
            if (v20 == v12) {
              v21 = *((unsigned __int8*)v15 + 16);
              v22 = v15[3];
              if ((v21 & 1) == 0) {
                v22 = v21 >> 1;
              }
              if (v22 == v8) {
                v23 = (v21 & 1) != 0 ? v15[4] : (__int64)v15 + 17;
                if (memcmp(v23, v7, v8) == 0) {
                  return 0;
                }
              }
            }
            else if ((v20 & v11) != v13) {
              goto LABEL_40;
            }
            v15 = (__int64*)*v15;
            if (v15 == nullptr) {
              goto LABEL_40;
            }
          }
        }
        do {
          v16 = v15[1];
          if (v16 == v12) {
            v17 = *((unsigned __int8*)v15 + 16);
            v18 = v15[3];
            if ((v17 & 1) == 0) {
              v18 = v17 >> 1;
            }
            if (v18 == v8) {
              v19 = (v17 & 1) != 0 ? v15[4] : (__int64)v15 + 17;
              if (memcmp(v19, v7, v8) == 0) {
                return 0;
              }
            }
          }
          else {
            if (v16 >= v10) {
              v16 %= v10;
            }
            if (v16 != v13) {
              break;
            }
          }
          v15 = (__int64*)*v15;
        } while (v15 != nullptr);
      }
    }
  }
LABEL_40:
  v25 = *(float*)(a1 + 32);
  v26 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v10 == 0 || (float)(v25 * (float)v10) < v26) {
    v30 = v26 / v25;
    v31 = true;
    if (v10 >= 3) {
      v31 = (v10 & (v10 - 1)) != 0;
    }
    v32 = v31 | (2 * v10);
    v33 = vcvtps_u64_f32(v30);
    if (v32 <= v33) {
      v34 = v33;
    }
    else {
      v34 = v32;
    }
    if (v34 == 1) {
      v34 = 2;
    }
    else if ((v34 & (v34 - 1)) != 0) {
      primeEm = std___1___next_prime(v34);
      v10 = *(_QWORD*)(a1 + 8);
      v34 = primeEm;
    }
    if (v34 <= v10) {
      if (v34 >= v10) {
        goto LABEL_42;
      }
      v44 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v10 < 3 || (v10 & (v10 - 1)) != 0) {
        v44 = std___1___next_prime(v44);
      }
      else {
        v45 = 1LL << (-(char)__clz(v44 - 1) & 63);
        if (v44 >= 2) {
          v44 = v45;
        }
      }
      if (v34 <= v44) {
        v34 = v44;
      }
      if (v34 >= v10) {
        goto LABEL_42;
      }
      if (v34 == 0) {
        v57 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v57 != 0) {
          v58 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v58 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, v57);
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_42;
      }
    }
    if (v34 >> 61 != 0) {
      GameRoutine_60a210();
    }
    v38 = fw_memory_g_heap_manager_ptr;
    v39 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * v34, 16, 0);
    v40 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v39;
    if (v40 != 0) {
      v41 = 128;
      if (*(_QWORD*)(*(_QWORD*)v38 + 200LL) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v38 + v41, v40);
    }
    v42 = v34 & 7;
    *(_QWORD*)(a1 + 8) = v34;
    if (v34 >= 8) {
      v43 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v43) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v43 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v43 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v43 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v43 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v43 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v43 + 48) = 0;
        v46 = *(_QWORD*)a1 + 8 * v43;
        v43 += 8;
        *(_QWORD*)(v46 + 56) = 0;
      } while ((v34 & 0x1FFFFFFFFFFFFFF8LL) != v43);
    }
    else {
      v43 = 0;
    }
    if ((v34 & 7) != 0) {
      v47 = 8 * v43;
      do {
        --v42;
        *(_QWORD*)(*(_QWORD*)a1 + v47) = 0;
        v47 += 8;
      } while (v42 != 0);
    }
    v49 = a1 + 16;
    v48 = *(_QWORD**)(a1 + 16);
    if (v48 != nullptr) {
      v50 = v48[1];
      v51 = v34 - 1;
      if ((v34 & (v34 - 1)) != 0) {
        if (v50 >= v34) {
          v50 %= v34;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v50) = v49;
        v52 = (_QWORD*)*v48;
        if (*v48 == 0) {
          goto LABEL_42;
        }
        while (1) {
          v53 = v52[1];
          if (v53 >= v34) {
            v53 %= v34;
          }
          if (v53 != v50) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v53) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v53) = v48;
              goto LABEL_88;
            }
            *v48 = *v52;
            *v52 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v53);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v53) = v52;
            v52 = v48;
          }
          v53 = v50;
        LABEL_88:
          v48 = v52;
          v52 = (_QWORD*)*v52;
          v50 = v53;
          if (v52 == nullptr) {
            goto LABEL_42;
          }
        }
      }
      v54 = v50 & v51;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v54) = v49;
      while (1) {
        v55 = (_QWORD*)*v48;
        if (*v48 == 0) {
          break;
        }
        v56 = v55[1] & v51;
        if (v56 == v54) {
          v48 = (_QWORD*)*v48;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v56) != 0) {
          *v48 = *v55;
          *v55 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v56);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v56) = v55;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v56) = v48;
          v48 = v55;
          v54 = v56;
        }
      }
    }
  }
LABEL_42:
  v27 = *(_QWORD*)(a1 + 8);
  v28 = *(_QWORD*)(a2 + 8);
  v29 = v27 - 1;
  if ((v27 & (v27 - 1)) != 0) {
    if (v28 >= v27) {
      v28 %= v27;
    }
  }
  else {
    v28 &= v29;
  }
  v35 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v28);
  if (v35 != nullptr) {
    *(_QWORD*)a2 = *v35;
    *v35 = a2;
  }
  else {
    *(_QWORD*)a2 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = a2;
    *(_QWORD*)(*(_QWORD*)a1 + 8 * v28) = a1 + 16;
    if (*(_QWORD*)a2 != 0) {
      v36 = *(_QWORD*)(*(_QWORD*)a2 + 8LL);
      if ((v27 & v29) != 0) {
        if (v36 >= v27) {
          v36 %= v27;
        }
      }
      else {
        v36 &= v29;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v36) = a2;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return 1;
}

void llvm_libcxx_21_libcxx_include___functional_a5c540(_QWORD* a1, _QWORD* a2,
                                                       __int64 a3,
                                                       unsigned __int64 a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  bool v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  __int64* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  _QWORD* v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  _QWORD* v43;
  __int64 v44;
  _QWORD* v45;
  _QWORD* v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char* v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  char* v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  _QWORD* v60;
  _QWORD* v61;
  unsigned __int64 v62;
  __int64 v63;
  _QWORD* v64;
  _QWORD* v65;
  float v66;
  float v67;
  float v68;
  _BOOL8 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  __int64 primeEm;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  _QWORD* v77;
  __int64 v78;
  unsigned __int64 v79;

  v4 = a1[31];
  v5 = a1[5];
  v9 = *(_QWORD*)(v4 - 8);
  if (v9 != 0) {
    v10 = *(_QWORD*)(v4 - 16);
    v12 = *(_QWORD*)(v4 - 40);
    v11 = *(_QWORD*)(v4 - 32);
    v13 = v9 - 1;
    v14 = v10 + v9 - 1;
    v15 = v11 == v12;
    v16 = v9 + v10;
    v17 = v14 >> 9;
    v18 = v14 & 0x1FF;
    v19 = (v11 - v12) << 6;
    v20 = *(_QWORD*)(v12 + 8 * v17);
    v21 = v19 - 1;
    if (v15) {
      v21 = 0;
    }
    v22 = *(_QWORD*)(v20 + 8 * v18);
    *(_QWORD*)(v4 - 8) = v13;
    v23 = (__int64*)fw_memory_g_heap_manager_ptr;
    if ((unsigned __int64)(v21 - v16 + 1) >= 0x400) {
      if (*(_QWORD*)(v11 - 8) != 0) {
        v24 = a2;
        v25 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v25 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, *(_QWORD*)(v11 - 8));
        v11 = *(_QWORD*)(v4 - 32);
        a2 = v24;
      }
      *(_QWORD*)(v4 - 32) = v11 - 8;
    }
    v26 = *a2;
    v27 = a2[1];
    v28 = (_QWORD*)(*(_QWORD*)(v5 - 24) + 16 * v22);
    *a2 = 0;
    a2[1] = 0;
    v4 = v28[1];
    *v28 = v26;
    v28[1] = v27;
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
    v29 = a1[28];
    v30 = (__int64*)(v29 - 40);
    v31 = std___1___hash_memory(a3, a4);
    v32 = *(_QWORD*)(v29 - 32);
    v33 = v31;
    if (v32 != 0) {
      v34 = v32 - 1;
      if ((v32 & (v32 - 1)) != 0) {
        v4 = v31;
        if (v31 >= v32) {
          v4 = v31 % v32;
        }
      }
      else {
        v4 = v34 & v31;
      }
      v45 = *(_QWORD**)(*v30 + 8 * v4);
      if (v45 != nullptr) {
        v46 = (_QWORD*)*v45;
        if (v46 != nullptr) {
          if ((v32 & v34) == 0) {
            while (1) {
              v48 = v46[1];
              if (v48 == v31) {
                if (v46[2] == v31) {
                  return;
                }
              }
              else if ((v48 & v34) != v4) {
                goto LABEL_45;
              }
              v46 = (_QWORD*)*v46;
              if (v46 == nullptr) {
                goto LABEL_45;
              }
            }
          }
          do {
            v47 = v46[1];
            if (v47 == v31) {
              if (v46[2] == v31) {
                return;
              }
            }
            else {
              if (v47 >= v32) {
                v47 %= v32;
              }
              if (v47 != v4) {
                break;
              }
            }
            v46 = (_QWORD*)*v46;
          } while (v46 != nullptr);
        }
      }
    }
  LABEL_45:
    v49 = *v23;
  }
  else {
    v35 = *(_QWORD**)(v5 - 16);
    v36 = *(_QWORD*)(v5 - 8);
    if ((unsigned __int64)v35 >= v36) {
      v38 = *(_QWORD*)(v5 - 24);
      v39 = (char*)v35 - v38;
      v40 = (((__int64)v35 - v38) >> 4) + 1;
      if (v40 >> 60 != 0) {
        GameRoutine_a5dcd0();
      }
      v41 = v36 - v38;
      if (v41 >> 3 > v40) {
        v40 = v41 >> 3;
      }
      if ((unsigned __int64)v41 >= 0x7FFFFFFFFFFFFFF0LL) {
        v42 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v42 = v40;
      }
      if (v42 != 0) {
        if (v42 >> 60 != 0) {
          GameRoutine_60a210();
        }
        v43 = a2;
        v44 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v42, 16, 0);
        a2 = v43;
      }
      else {
        v44 = 0;
      }
      v50 = *a2;
      v51 = a2[1];
      v52 = &v39[v44];
      *a2 = 0;
      a2[1] = 0;
      v53 = v44 + 16 * v42;
      v37 = (__int64)&v39[v44 + 16];
      *(_QWORD*)v52 = v50;
      *((_QWORD*)v52 + 1) = v51;
      v4 = *(_QWORD*)(v5 - 24);
      v54 = *(_QWORD*)(v5 - 16) - v4;
      v55 = &v52[-v54];
      memcpy((__int64)&v52[-v54], v4, v54);
      *(_QWORD*)(v5 - 24) = v55;
      *(_QWORD*)(v5 - 16) = v37;
      *(_QWORD*)(v5 - 8) = v53;
      if (v4 != 0) {
        v56 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v56 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v56, v4);
      }
    }
    else {
      v37 = (__int64)(v35 + 2);
      *v35 = *a2;
      v35[1] = a2[1];
      *a2 = 0;
      a2[1] = 0;
    }
    *(_QWORD*)(v5 - 16) = v37;
    v29 = a1[28];
    v30 = (__int64*)(v29 - 40);
    v57 = std___1___hash_memory(a3, a4);
    v58 = *(_QWORD*)(v5 - 24);
    v32 = *(_QWORD*)(v29 - 32);
    v33 = v57;
    if (v32 != 0) {
      v59 = v32 - 1;
      if ((v32 & (v32 - 1)) != 0) {
        v4 = v57;
        if (v57 >= v32) {
          v4 = v57 % v32;
        }
      }
      else {
        v4 = v59 & v57;
      }
      v60 = *(_QWORD**)(*v30 + 8 * v4);
      if (v60 != nullptr) {
        v61 = (_QWORD*)*v60;
        if (v61 != nullptr) {
          if ((v32 & v59) == 0) {
            while (1) {
              v63 = v61[1];
              if (v63 == v57) {
                if (v61[2] == v57) {
                  return;
                }
              }
              else if ((v63 & v59) != v4) {
                goto LABEL_72;
              }
              v61 = (_QWORD*)*v61;
              if (v61 == nullptr) {
                goto LABEL_72;
              }
            }
          }
          do {
            v62 = v61[1];
            if (v62 == v57) {
              if (v61[2] == v57) {
                return;
              }
            }
            else {
              if (v62 >= v32) {
                v62 %= v32;
              }
              if (v62 != v4) {
                break;
              }
            }
            v61 = (_QWORD*)*v61;
          } while (v61 != nullptr);
        }
      }
    }
  LABEL_72:
    v22 = ((v37 - v58) >> 4) - 1;
    v49 = fw_memory_g_heap_manager;
  }
  v64 = (_QWORD*)fw_memory_HeapManager_Allocate(v49, 32, 16, 0);
  v64[1] = v33;
  v64[2] = v33;
  v64[3] = v22;
  v65 = v64;
  v66 = *(float*)(v29 - 8);
  v67 = (float)(unsigned __int64)(*(_QWORD*)(v29 - 16) + 1LL);
  if (v32 == 0 || (float)(v66 * (float)v32) < v67) {
    v68 = v67 / v66;
    v69 = true;
    if (v32 >= 3) {
      v69 = (v32 & (v32 - 1)) != 0;
    }
    v70 = v69 | (2 * v32);
    v71 = vcvtps_u64_f32(v68);
    if (v70 <= v71) {
      v72 = v71;
    }
    else {
      v72 = v70;
    }
    if (v72 == 1) {
      v72 = 2;
    }
    else if ((v72 & (v72 - 1)) != 0) {
      primeEm = std___1___next_prime(v72);
      v32 = *(_QWORD*)(v29 - 32);
      v72 = primeEm;
    }
    if (v72 > v32) {
      goto LABEL_85;
    }
    if (v72 < v32) {
      v74 = vcvtps_u64_f32((float)*(unsigned __int64*)(v29 - 16) /
                           *(float*)(v29 - 8));
      if (v32 < 3 || (v32 & (v32 - 1)) != 0) {
        v74 = std___1___next_prime(v74);
      }
      else {
        v75 = 1LL << (-(char)__clz(v74 - 1) & 63);
        if (v74 >= 2) {
          v74 = v75;
        }
      }
      if (v72 <= v74) {
        v72 = v74;
      }
      if (v72 < v32) {
      LABEL_85:
        GameRoutine_a5e600(v30, v72);
      }
    }
    v32 = *(_QWORD*)(v29 - 32);
    if ((v32 & (v32 - 1)) != 0) {
      if (v33 >= v32) {
        v4 = v33 % v32;
      }
      else {
        v4 = v33;
      }
    }
    else {
      v4 = (v32 - 1) & v33;
    }
  }
  v76 = *v30;
  v77 = *(_QWORD**)(*v30 + 8 * v4);
  if (v77 != nullptr) {
    *v65 = *v77;
    *v77 = v65;
  }
  else {
    v78 = *(_QWORD*)(v29 - 24);
    *v65 = v78;
    *(_QWORD*)(v29 - 24) = v65;
    *(_QWORD*)(v76 + 8 * v4) = v29 - 24;
    if (v78 != 0) {
      v79 = *(_QWORD*)(v78 + 8);
      if ((v32 & (v32 - 1)) != 0) {
        if (v79 >= v32) {
          v79 %= v32;
        }
      }
      else {
        v79 &= v32 - 1;
      }
      *(_QWORD*)(*v30 + 8 * v79) = v65;
    }
  }
  ++*(_QWORD*)(v29 - 16);
}

__attribute__((swiftcall)) void

llvm_libcxx_21_libcxx_include___functional_a5cb20(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2,
                                                  unsigned __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  unsigned __int64 result;
  unsigned __int64 v8;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;

  v4 = *(_QWORD*)(a1 + 40);
  v5 = *(_QWORD*)(a1 + 224);
  result = std___1___hash_memory(a2, a3);
  v8 = *(_QWORD*)(v5 - 32);
  if (v8 == 0 || *(_QWORD*)(v5 - 16) == 0) {
    goto LABEL_28;
  }
  v10 = v8 - 1;
  if ((v8 & (v8 - 1)) != 0) {
    v11 = result;
    if (result >= v8) {
      v11 = result % v8;
    }
  }
  else {
    v11 = v10 & result;
  }
  v12 = *(_QWORD**)(*(_QWORD*)(v5 - 40) + 8 * v11);
  if (v12 == nullptr) {
    goto LABEL_28;
  }
  v13 = (_QWORD*)*v12;
  if (v13 == nullptr) {
    goto LABEL_28;
  }
  if ((v8 & v10) == 0) {
    while (1) {
      v15 = v13[1];
      if (v15 == result) {
        if (v13[2] == result) {
          goto LABEL_25;
        }
      }
      else if ((v15 & v10) != v11) {
        goto LABEL_28;
      }
      v13 = (_QWORD*)*v13;
      if (v13 == nullptr) {
        goto LABEL_28;
      }
    }
  }
  while (1) {
    v14 = v13[1];
    if (v14 == result) {
      break;
    }
    if (v14 >= v8) {
      v14 %= v8;
    }
    if (v14 != v11) {
      goto LABEL_28;
    }
  LABEL_14:
    v13 = (_QWORD*)*v13;
    if (v13 == nullptr) {
      goto LABEL_28;
    }
  }
  if (v13[2] != result) {
    goto LABEL_14;
  }
LABEL_25:
  v16 = v13[3];
  v17 = *(_QWORD*)(v4 - 24);
  if (v16 >= (*(_QWORD*)(v4 - 16) - v17) >> 4) {
  LABEL_28:
    *a4 = 0;
    a4[1] = 0;
    {
      result;
      return;
    }
  }
  v18 = (__int64*)(v17 + 16 * v16);
  v20 = *v18;
  v19 = v18[1];
  *a4 = v20;
  a4[1] = v19;
  if (v19 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                              memory_order_relaxed);
  }
  {
    result;
    return;
  }
}

__int64 llvm_libcxx_21_libcxx_include___functional_bf3520(__int64* a1,
                                                          __int64 a2)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  _OWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
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
  __int64 v59;
  unsigned int i;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  _QWORD* v83;
  __int64 v84;
  __int64 v85;
  signed int v86;
  int v87;
  __int64 v88;
  __int64 v89;
  unsigned __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 result;
  __int64* v109;
  __int64 v110;
  struct {
    __int64 v111;
    __int64 v112;
    __int64 v113;
    __int64 v114;
    __int64 v115;
    __int64 v116;
    __int64 v117;
  } v111_;
  struct {
    __int64 v118;
    __int64 v119;
    int v120;
    char gap140_[4];
    __int64 v121;
    __int64 v122;
    __int64 v123;
    __int64 v124;
    __int64 v125;
    __int64 v126;
    __int64 v127;
    __int64 v128;
    int v129;
  } v118_;
  float32x4x4_t v130;
  float32x4x4_t v131;

  *a1 = a2;
  a1[1] = 0;
  v2 = a1 + 1;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  *((_BYTE*)a1 + 92) = 0;
  *((_DWORD*)a1 + 16) = 1065353216;
  a1[13] = 0;
  *((_DWORD*)a1 + 28) = 0;
  a1[12] = 0;
  v4 = a1 + 12;
  *((_DWORD*)a1 + 38) = 0;
  a1[17] = 0;
  a1[18] = 0;
  a1[15] = 0;
  a1[16] = 0;
  a1[9] = 0;
  a1[10] = 0x4120000000000000LL;
  *((_DWORD*)a1 + 22) = 1101004800;
  DecalObject_a91100(a1 + 12, *(_QWORD*)(a2 + 312),
                     *(_QWORD*)(*(_QWORD*)(a2 + 552) + 16LL), 84);
  v5 = *v4;
  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 56LL))(v5);
  v7 = GameData_212c2b0;
  *(_DWORD*)(v6 + 72) = 0;
  *(_DWORD*)(v6 + 80) = 16;
  v130.val[0] = COERCE_AS(float32x4_t, *v7);
  v130.val[1] = COERCE_AS(float32x4_t, v7[1]);
  v130.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v130.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  vst4q_f32((float*)&v110, v130);
  *(_QWORD*)(v6 + 32) = v111_.v114;
  *(_QWORD*)(v6 + 40) = v111_.v115;
  *(_QWORD*)(v6 + 48) = v111_.v116;
  *(_QWORD*)(v6 + 56) = v111_.v117;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)v6 = v110;
  *(_QWORD*)(v6 + 8) = v111_.v111;
  *(_QWORD*)(v6 + 16) = v111_.v112;
  *(_QWORD*)(v6 + 24) = v111_.v113;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 64LL))(v5);
  v8 = a1[13];
  v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 56LL))(v8);
  v131.val[0] = COERCE_AS(float32x4_t, *v7);
  v131.val[1] = COERCE_AS(float32x4_t, v7[1]);
  v131.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v131.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  *(_DWORD*)(v9 + 72) = 0;
  *(_DWORD*)(v9 + 80) = 16;
  vst4q_f32((float*)&v110, v131);
  *(_QWORD*)(v9 + 32) = v111_.v114;
  *(_QWORD*)(v9 + 40) = v111_.v115;
  *(_QWORD*)(v9 + 48) = v111_.v116;
  *(_QWORD*)(v9 + 56) = v111_.v117;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)v9 = v110;
  *(_QWORD*)(v9 + 8) = v111_.v111;
  *(_QWORD*)(v9 + 16) = v111_.v112;
  *(_QWORD*)(v9 + 24) = v111_.v113;
  (*(void (**)(__int64))(*(_QWORD*)v8 + 64LL))(v8);
  v10 = *v2;
  v109 = v2;
  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (0xCCCCCCCCCCCCCCCDLL * ((a1[3] - *v2) >> 5) <= 0xF) {
    v12 = (_QWORD*)a1[2];
    v13 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         2560, 16, 0);
    GameHr_bf85a0(v10, v12, v13);
    v14 = a1[1];
    a1[1] = v13;
    a1[2] = (__int64)v12 + v13 - v10;
    a1[3] = v13 + 2560;
    if (v14 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*v11 + 200) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(*v11 + v15, v14);
    }
  }
  v16 = *v11;
  v111_.v111 = 0;
  v111_.v112 = 0;
  LODWORD(v111_.v113) = 0;
  LOBYTE(v118_.v126) = 0;
  v111_.v114 = 0;
  v111_.v115 = 0;
  v111_.v116 = 0;
  v111_.v117 = 0;
  v118_.v118 = 0;
  v118_.v119 = 0;
  v118_.v120 = 0;
  LOWORD(v110) = 257;
  v118_.v121 = 0;
  v118_.v122 = 0;
  v118_.v123 = 0;
  v118_.v124 = 0;
  LOBYTE(v118_.v125) = 0;
  v17 = fw_memory_HeapManager_Allocate(v16, 400, 16, 0);
  v18 = GameData_212e740[0];
  *(_OWORD*)(v17 + 16) = GameData_1a83090;
  *(_OWORD*)(v17 + 32) = (__typeof__(*(_OWORD*)(v17 + 32))){0};
  *(_QWORD*)(v17 + 96) = 0x4248000041D80000LL;
  *(_QWORD*)(v17 + 104) = 0x41C0000042100000LL;
  *(_QWORD*)(v17 + 112) = 0x4110000041800000LL;
  *(_OWORD*)(v17 + 48) = GameData_1a83610;
  *(_OWORD*)(v17 + 64) = (__typeof__(*(_OWORD*)(v17 + 64))){0};
  *(_QWORD*)(v17 + 136) = 1092616192;
  v19 = (__int64*)GameData_212c2a0;
  v21 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v7);
  v20 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v7);
  v23 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v22 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v7 + 8);
  *(_DWORD*)(v17 + 120) = 0;
  *(_WORD*)(v17 + 132) = 0;
  *(_DWORD*)(v17 + 144) = 0;
  *(_QWORD*)(v17 + 376) = 0;
  *(_QWORD*)(v17 + 384) = 0;
  *(_QWORD*)(v17 + 360) = 0;
  *(_QWORD*)(v17 + 368) = 0;
  *(_QWORD*)(v17 + 352) = 0;
  v118_.v127 = v17;
  HIDWORD(v110) = 0;
  v24 = *v19;
  v25 = v19[1];
  v26 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v19 + 8);
  *(_QWORD*)(v17 + 176) = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v19);
  *(_QWORD*)(v17 + 184) = v26;
  *(_QWORD*)(v17 + 160) = v24;
  *(_QWORD*)(v17 + 168) = v25;
  v27 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v19);
  v28 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v19 + 8);
  v29 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v19);
  *(_QWORD*)(v17 + 208) =
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v19);
  *(_QWORD*)(v17 + 216) = v29;
  *(_QWORD*)(v17 + 192) = v27;
  *(_QWORD*)(v17 + 200) = v28;
  v30 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 8);
  v31 = *(_QWORD*)v7;
  v32 = *((_QWORD*)v7 + 1);
  *(_QWORD*)(v17 + 240) = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7);
  *(_QWORD*)(v17 + 248) = v30;
  v33 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7);
  v34 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7 + 8);
  v35 = *(_QWORD*)v7;
  *(_QWORD*)(v17 + 224) = v31;
  *(_QWORD*)(v17 + 232) = v33;
  *(_QWORD*)(v17 + 288) = v35;
  *(_QWORD*)(v17 + 296) = v32;
  v36 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v7);
  *(_QWORD*)(v17 + 272) =
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v7);
  *(_QWORD*)(v17 + 280) = v20;
  v38 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 8);
  v37 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 16);
  *(_QWORD*)(v17 + 320) = v23;
  *(_QWORD*)(v17 + 328) = v36;
  *(_QWORD*)(v17 + 256) = v37;
  *(_QWORD*)(v17 + 264) = v22;
  *(_QWORD*)(v17 + 304) = v34;
  *(_QWORD*)(v17 + 312) = v38;
  *(_QWORD*)(v17 + 80) = 1065353216;
  *(_QWORD*)(v17 + 88) = 0x100000000LL;
  *(_QWORD*)v17 = v18 + 2;
  *(_QWORD*)(v17 + 8) = 0x100000000LL;
  v39 = (_QWORD*)*a1;
  *(_QWORD*)(v17 + 124) = 0x447A00003DCCCCCDLL;
  v40 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v7);
  *(_QWORD*)(v17 + 336) = v21;
  *(_QWORD*)(v17 + 344) = v40;
  v41 = v39[2077];
  v42 = v39[2079];
  v43 = v39[39];
  v44 = v39[69];
  if (v41 == 0) {
    v41 = v42;
  }
  LODWORD(v118_.v128) = vcvts_n_s32_f32(*(float*)(v41 + 48), 0xBu);
  HIDWORD(v118_.v128) = v118_.v128;
  DecalObject_a91100(&v111_.v111, v43, *(_QWORD*)(v44 + 16), 84);
  DecalObject_a91100(&v118_.v118, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 252);
  if ((unsigned __int8)v118_.v126 == 1) {
    LOBYTE(v118_.v126) = 0;
  }
  v45 = a1[2];
  if (v45 >= a1[3]) {
    v46 = GameHr_bf8700(v109, &v110);
  }
  else {
    v46 = v45 + 160;
    *(_QWORD*)v45 = v110;
    v47 = v111_.v111;
    v111_.v111 = 0;
    *(_QWORD*)(v45 + 8) = v47;
    v48 = v111_.v112;
    v111_.v112 = 0;
    *(_QWORD*)(v45 + 16) = v48;
    *(_DWORD*)(v45 + 24) = v111_.v113;
    v49 = v111_.v114;
    v50 = v111_.v115;
    v51 = v111_.v117;
    *(_QWORD*)(v45 + 48) = v111_.v116;
    *(_QWORD*)(v45 + 56) = v51;
    *(_QWORD*)(v45 + 32) = v49;
    *(_QWORD*)(v45 + 40) = v50;
    v52 = v118_.v118;
    v118_.v118 = 0;
    *(_QWORD*)(v45 + 64) = v52;
    v53 = v118_.v119;
    v118_.v119 = 0;
    *(_QWORD*)(v45 + 72) = v53;
    *(_DWORD*)(v45 + 80) = v118_.v120;
    v54 = v118_.v121;
    v55 = v118_.v122;
    v56 = v118_.v124;
    *(_QWORD*)(v45 + 104) = v118_.v123;
    *(_QWORD*)(v45 + 112) = v56;
    *(_QWORD*)(v45 + 88) = v54;
    *(_QWORD*)(v45 + 96) = v55;
    v57 = v118_.v126;
    *(_QWORD*)(v45 + 120) = v118_.v125;
    *(_QWORD*)(v45 + 128) = v57;
    v58 = v118_.v127;
    v118_.v127 = 0;
    *(_QWORD*)(v45 + 136) = v58;
    v59 = v118_.v128;
    *(_DWORD*)(v45 + 152) = v118_.v129;
    *(_QWORD*)(v45 + 144) = v59;
  }
  a1[2] = v46;
  for (i = 1; i != 16; ++i) {
    v62 = fw_memory_HeapManager_Allocate(*v11, 400, 16, 0);
    v64 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v19);
    v63 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v19 + 8);
    v66 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7);
    v65 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 8);
    v67 = *(_QWORD*)v7;
    *(_QWORD*)v62 = v18 + 2;
    *(_QWORD*)(v62 + 8) = 0;
    *(_DWORD*)(v62 + 120) = 0;
    *(_WORD*)(v62 + 132) = 1;
    *(_QWORD*)(v62 + 136) = 1092616192;
    *(_DWORD*)(v62 + 144) = 0;
    *(_QWORD*)(v62 + 376) = 0;
    *(_QWORD*)(v62 + 384) = 0;
    *(_QWORD*)(v62 + 360) = 0;
    *(_QWORD*)(v62 + 368) = 0;
    *(_QWORD*)(v62 + 352) = 0;
    *(_QWORD*)(v62 + 176) = v64;
    *(_QWORD*)(v62 + 184) = v63;
    v68 = v19[1];
    *(_QWORD*)(v62 + 160) = *v19;
    *(_QWORD*)(v62 + 168) = v68;
    v70 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v19);
    v69 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v19);
    v72 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v7);
    v71 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v7);
    v74 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v7);
    v73 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v7 + 8);
    *(_OWORD*)(v62 + 16) = GameData_1a83090;
    *(_OWORD*)(v62 + 32) = (__typeof__(*(_OWORD*)(v62 + 32))){0};
    *(_QWORD*)(v62 + 208) = v70;
    *(_QWORD*)(v62 + 216) = v69;
    v76 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v19);
    v75 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v19 + 8);
    *(_OWORD*)(v62 + 48) = GameData_1a83610;
    *(_OWORD*)(v62 + 64) = (__typeof__(*(_OWORD*)(v62 + 64))){0};
    *(_QWORD*)(v62 + 192) = v76;
    *(_QWORD*)(v62 + 200) = v75;
    v77 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7);
    *(_QWORD*)(v62 + 240) =
        *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7 + 8);
    *(_QWORD*)(v62 + 248) = v65;
    *(_QWORD*)(v62 + 288) = v67;
    *(_QWORD*)(v62 + 296) = v77;
    v78 = *((_QWORD*)v7 + 1);
    *(_QWORD*)(v62 + 224) = *(_QWORD*)v7;
    *(_QWORD*)(v62 + 232) = v78;
    v79 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v7);
    *(_QWORD*)(v62 + 272) =
        *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v7);
    *(_QWORD*)(v62 + 280) = v71;
    v81 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 8);
    v80 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 16);
    *(_QWORD*)(v62 + 320) = v74;
    *(_QWORD*)(v62 + 328) = v79;
    *(_QWORD*)(v62 + 256) = v80;
    *(_QWORD*)(v62 + 264) = v73;
    *(_QWORD*)(v62 + 304) = v66;
    *(_QWORD*)(v62 + 312) = v81;
    *(_QWORD*)(v62 + 80) = 1065353216;
    *(_QWORD*)(v62 + 88) = 0x100000000LL;
    *(_QWORD*)(v62 + 96) = 0x4248000041D80000LL;
    *(_QWORD*)(v62 + 104) = 0x41C0000042100000LL;
    *(_QWORD*)(v62 + 112) = 0x4110000041800000LL;
    *(_QWORD*)(v62 + 124) = 0x447A00003DCCCCCDLL;
    v82 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v7);
    *(_QWORD*)(v62 + 336) = v72;
    *(_QWORD*)(v62 + 344) = v82;
    v83 = (_QWORD*)v118_.v127;
    v118_.v127 = v62;
    if (v83 != nullptr) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v83 + 8LL))(
          (void*)(v83), v83);
      v62 = v118_.v127;
    }
    *(_DWORD*)(v62 + 8) = 0;
    *(_DWORD*)(v118_.v127 + 12) = 1;
    *(_BYTE*)(v118_.v127 + 132) = 0;
    v84 = *a1;
    v85 = *(_QWORD*)(*a1 + 16616);
    if (v85 == 0) {
      v85 = *(_QWORD*)(*a1 + 16632);
    }
    v86 = vcvts_n_s32_f32(*(float*)(v85 + 48), 0xBu);
    if (i > 5) {
      v87 = v86 / 4;
    }
    else {
      v87 = v86 / 2;
    }
    v88 = *(_QWORD*)(v84 + 312);
    v89 = *(_QWORD*)(v84 + 552);
    LODWORD(v118_.v128) = v87;
    HIDWORD(v118_.v128) = v87;
    HIDWORD(v110) = i;
    DecalObject_a91100(&v111_.v111, v88, *(_QWORD*)(v89 + 16), 84);
    DecalObject_a91100(&v118_.v118, *(_QWORD*)(*a1 + 312),
                       *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 252);
    if ((unsigned __int8)v118_.v126 == 1) {
      LOBYTE(v118_.v126) = 0;
    }
    v90 = a1[2];
    if (v90 >= a1[3]) {
      v61 = GameHr_bf8700(v109, &v110);
    }
    else {
      v61 = v90 + 160;
      *(_QWORD*)v90 = v110;
      v91 = v111_.v111;
      v111_.v111 = 0;
      *(_QWORD*)(v90 + 8) = v91;
      v92 = v111_.v112;
      v111_.v112 = 0;
      *(_QWORD*)(v90 + 16) = v92;
      *(_DWORD*)(v90 + 24) = v111_.v113;
      v93 = v111_.v114;
      v94 = v111_.v115;
      v95 = v111_.v117;
      *(_QWORD*)(v90 + 48) = v111_.v116;
      *(_QWORD*)(v90 + 56) = v95;
      *(_QWORD*)(v90 + 32) = v93;
      *(_QWORD*)(v90 + 40) = v94;
      v96 = v118_.v118;
      v118_.v118 = 0;
      *(_QWORD*)(v90 + 64) = v96;
      v97 = v118_.v119;
      v118_.v119 = 0;
      *(_QWORD*)(v90 + 72) = v97;
      *(_DWORD*)(v90 + 80) = v118_.v120;
      v98 = v118_.v121;
      v99 = v118_.v122;
      v100 = v118_.v124;
      *(_QWORD*)(v90 + 104) = v118_.v123;
      *(_QWORD*)(v90 + 112) = v100;
      *(_QWORD*)(v90 + 88) = v98;
      *(_QWORD*)(v90 + 96) = v99;
      v101 = v118_.v126;
      *(_QWORD*)(v90 + 120) = v118_.v125;
      *(_QWORD*)(v90 + 128) = v101;
      v102 = v118_.v127;
      v118_.v127 = 0;
      *(_QWORD*)(v90 + 136) = v102;
      v103 = v118_.v128;
      *(_DWORD*)(v90 + 152) = v118_.v129;
      *(_QWORD*)(v90 + 144) = v103;
    }
    a1[2] = v61;
  }
  v104 = v118_.v127;
  v118_.v127 = 0;
  if (v104 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v104 + 8LL))(v104);
  }
  v105 = v118_.v119;
  v118_.v119 = 0;
  if (v105 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v105 + 8LL))(v105);
  }
  v106 = v118_.v118;
  v118_.v118 = 0;
  if (v106 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v106 + 8LL))(v106);
  }
  v107 = v111_.v112;
  v111_.v112 = 0;
  if (v107 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v107 + 8LL))(v107);
  }
  result = v111_.v111;
  v111_.v111 = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 llvm_libcxx_21_libcxx_include___functional_bfbe00(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _BYTE* v4;
  char v5;

  if ((GameData_2203488 & 1) == 0) {
    GameData_2203488 = 1;
    if (GameData_21ec7b8 == 0) {
      v1 = result;
      v2 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
      GameRoutine_1130770(v2, "MID_EV00_002_m06", nullptr);
      v3 = *(_QWORD*)(v1 + 40);
      if (v3 != 0) {
        *(_QWORD*)(v3 + 48) = v2;
        *(_QWORD*)(v2 + 56) = *(_QWORD*)(v1 + 40);
      }
      *(_QWORD*)(v1 + 40) = v2;
      *(_QWORD*)(v2 + 24) = "talk::Seq";
      *(_QWORD*)(v2 + 32) = v1;
      *(_DWORD*)(v2 + 140) = (unsigned int)game_HashString32("talk::Seq");
      *(_QWORD*)(v2 + 64) = 0;
      *(_QWORD*)(v2 + 72) = 24;
      *(_QWORD*)(v2 + 80) = 1;
      *(_QWORD*)(v2 + 8) = &GameData_216de68;
      *(_QWORD*)(v2 + 16) = &GameData_216de68;
      (*(void (**)(__int64))(*(_QWORD*)v2 + 32LL))(v2);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 136LL))(v2);
      if ((result & 1) != 0 && (*(_WORD*)(v2 + 136) & 0x100) == 0) {
        *(_WORD*)(v2 + 136) |= 0x100u;
      }
      v4 = *(_BYTE**)(v2 + 32);
      v5 = v4[138];
      if (v5 == 0) {
        result =
            (*(__int64 (**)(_QWORD))(*(_QWORD*)v4 + 64LL))(*(_QWORD*)(v2 + 32));
        v5 = v4[138];
      }
      v4[138] = v5 + 1;
      *(_WORD*)(v2 + 136) |= 2u;
    }
  }
  return result;
}

__int64 llvm_libcxx_21_libcxx_include___functional_bfc550(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _BYTE* v4;
  char v5;

  if ((GameData_2203489 & 1) == 0) {
    GameData_2203489 = 1;
    if (GameData_21ec7b8 == 0) {
      v1 = result;
      v2 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
      GameRoutine_1130770(v2, "MID_EV00_002_m07", nullptr);
      v3 = *(_QWORD*)(v1 + 40);
      if (v3 != 0) {
        *(_QWORD*)(v3 + 48) = v2;
        *(_QWORD*)(v2 + 56) = *(_QWORD*)(v1 + 40);
      }
      *(_QWORD*)(v1 + 40) = v2;
      *(_QWORD*)(v2 + 24) = "talk::Seq";
      *(_QWORD*)(v2 + 32) = v1;
      *(_DWORD*)(v2 + 140) = (unsigned int)game_HashString32("talk::Seq");
      *(_QWORD*)(v2 + 64) = 0;
      *(_QWORD*)(v2 + 72) = 24;
      *(_QWORD*)(v2 + 80) = 1;
      *(_QWORD*)(v2 + 8) = &GameData_216de68;
      *(_QWORD*)(v2 + 16) = &GameData_216de68;
      (*(void (**)(__int64))(*(_QWORD*)v2 + 32LL))(v2);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 136LL))(v2);
      if ((result & 1) != 0 && (*(_WORD*)(v2 + 136) & 0x100) == 0) {
        *(_WORD*)(v2 + 136) |= 0x100u;
      }
      v4 = *(_BYTE**)(v2 + 32);
      v5 = v4[138];
      if (v5 == 0) {
        result =
            (*(__int64 (**)(_QWORD))(*(_QWORD*)v4 + 64LL))(*(_QWORD*)(v2 + 32));
        v5 = v4[138];
      }
      v4[138] = v5 + 1;
      *(_WORD*)(v2 + 136) |= 2u;
    }
  }
  return result;
}

__int64 llvm_libcxx_21_libcxx_include___functional_bfc6d0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  void* v5;
  _BYTE* v6;
  char v7;
  __int64* v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  int v13;
  __int64* v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  __int64* v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;

  if (*GameData_212d460[0] == 0) {
    v1 = result;
    v2 = *(int*)&GameData_1b7ea6c[4 * GameData_220348c];
    v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1376, 16, 0);
    GameRoutine_1130770(v3, &GameData_1b7ea6c[v2], nullptr);
    v4 = *(_QWORD*)(v1 + 40);
    if (v4 != 0) {
      *(_QWORD*)(v4 + 48) = v3;
      *(_QWORD*)(v3 + 56) = *(_QWORD*)(v1 + 40);
    }
    *(_QWORD*)(v1 + 40) = v3;
    *(_QWORD*)(v3 + 24) = "talk::Seq";
    *(_QWORD*)(v3 + 32) = v1;
    *(_DWORD*)(v3 + 140) = (unsigned int)game_HashString32("talk::Seq");
    *(_QWORD*)(v3 + 64) = 0;
    *(_QWORD*)(v3 + 72) = 24;
    *(_QWORD*)(v3 + 80) = 1;
    v5 = GameData_2130228;
    *(_QWORD*)(v3 + 8) = GameData_2130228;
    *(_QWORD*)(v3 + 16) = v5;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 136LL))(v3);
    if ((result & 1) != 0 && (*(_WORD*)(v3 + 136) & 0x100) == 0) {
      *(_WORD*)(v3 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v3 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      result =
          (*(__int64 (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v3 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v3 + 136) |= 2u;
  }
  switch (GameData_220348c) {
  case 2:
    nn_os_LockMutex((__int64)&game_g_random_mutex);
    v19 = game_map_MapRandom_instance__ptr[0];
    v20 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL));
    v21 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
    v22 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
          (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
    *((_DWORD*)v19 + 1) = v20;
    v23 = (v22 >> 8) ^ (v21 >> 19) ^ v22 ^ v21;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v19) = v21;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v19 + 4) = v23;
    result = nn_os_UnlockMutex((__int64)&game_g_random_mutex);
    v13 = v23 & 1;
    break;
  case 1:
    nn_os_LockMutex((__int64)&game_g_random_mutex);
    v14 = game_map_MapRandom_instance__ptr[0];
    v15 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL));
    v16 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
    v17 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
          (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
    *((_DWORD*)v14 + 1) = v15;
    v18 = (v17 >> 8) ^ (v16 >> 19) ^ v17 ^ v16;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14) = v16;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14 + 4) = v18;
    result = nn_os_UnlockMutex((__int64)&game_g_random_mutex);
    v13 = 2 * (v18 & 1);
    break;
  case 0:
    nn_os_LockMutex((__int64)&game_g_random_mutex);
    v8 = game_map_MapRandom_instance__ptr[0];
    v9 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((_UNKNOWN**)0x8LL));
    v10 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
    v11 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
          (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
    *((_DWORD*)v8 + 1) = v9;
    v12 = (v11 >> 8) ^ (v10 >> 19) ^ v11 ^ v10;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8) = v10;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8 + 4) = v12;
    result = nn_os_UnlockMutex((__int64)&game_g_random_mutex);
    v13 = (v12 & 1) + 1;
    break;
  default:
    return result;
  }
  GameData_220348c = v13;
  return result;
}

__int64 llvm_libcxx_21_libcxx_include___functional_c4eea0(_QWORD* a1,
                                                          _QWORD* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  unsigned __int64 v17;
  char* v18;
  unsigned __int64 v19;
  _BOOL4 v20;
  _BOOL4 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  signed __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  _QWORD* v36;
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
  char v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int8* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int8* v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  int v68;
  unsigned __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  _BOOL4 v72;
  _BOOL4 v73;
  __int64 v74;
  unsigned int* v75;
  __int64 v76;
  unsigned int* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  unsigned int* v82;
  __int64 v83;
  __int64 v84;
  unsigned int* v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  unsigned int* v90;
  __int64 v91;
  __int64 v92;
  unsigned int* v93;
  __int64 v94;
  unsigned __int8* v95;
  __int64 v96;
  _DWORD* v97;
  unsigned __int64 v98;
  bool v99;
  unsigned __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  int v103;
  unsigned __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  atomic_ullong* v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  unsigned __int64 v120;
  bool v121;
  unsigned __int64 v122;
  __int64 v123;
  unsigned __int64 v124;
  int v125;
  unsigned __int64 v126;
  unsigned __int64 v127;
  unsigned __int64 v128;
  __int64 v129;
  __int64 v130;
  unsigned __int64 v131;
  unsigned __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  _QWORD* v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  char v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  char v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64* v156;
  __int64 v157;
  _QWORD* v158;
  struct {
    _QWORD v159[7];
    char* v160;
  } v159_;
  struct {
    int v161;
    char gap84_[4];
    unsigned __int8* v162;
    unsigned __int8* v163;
    __int64 v164;
  } v161_;
  unsigned int* v165;
  struct {
    _QWORD v166[7];
    __int16 v167;
    char gap178_[2];
    int v168;
    __int64 v169;
    __int64 v170;
  } v166_;
  __int64 v171;
  unsigned __int64 v172;
  __int64 v173;
  struct {
    __int64 v174[2];
    __int64 v175;
    unsigned __int8* v176;
  } v174_;
  _QWORD v177[2];

  if (*(_QWORD*)(*a1 + 592LL) == 0) {
    return 0;
  }
  result = *(_QWORD*)(a1[1] + 592LL);
  if (result != 0) {
    v5 = GameRoutine_5fc1f0(result);
    v6 = *a1;
    v171 = v5;
    v7 = *(_QWORD*)(v6 + 592);
    v166_.v166[4] = -1;
    v166_.v166[5] = 0;
    v166_.v166[6] = 0;
    v166_.v167 = 257;
    v166_.v168 = 0;
    v8 = *(_QWORD*)(v6 + 576);
    v166_.v169 = v7;
    v166_.v170 = v8;
    v166_.v166[0] = GameData_212ce30 + 16;
    __builtin_memset(&v166_.v166[1], 0, 24);
    v9 = (__int64*)fw_memory_g_heap_manager_ptr;
    v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         544, 16, 0);
    *(_QWORD*)v10 = 0;
    *(_BYTE*)(v10 + 12) = 0;
    v165 = (unsigned int*)v10;
    *(_DWORD*)(v10 + 8) = -1;
    *(_QWORD*)(v10 + 16) = v10 + 32;
    *(_QWORD*)(v10 + 24) = v10 + 32;
    GameRoutine_1fa0(v10, 0);
    GameRoutine_1fd0(v10, (__int64)v166_.v166);
    v161_.v162 = nullptr;
    v161_.v163 = nullptr;
    v161_.v164 = 0;
    v161_.v161 = 2;
    LOBYTE(v174_.v174[0]) = 14;
    strcpy((char*)v174_.v174 + 1, "version");
    v174_.v176 = (unsigned __int8*)&v161_.v161;
    if (GameRoutine_c05690(&v165, (__int64)v174_.v174)) {
      timeline_21c0(v165, (unsigned int*)v174_.v176);
    }
    if ((v174_.v174[0] & 1) != 0 && v174_.v175 != 0) {
      v11 = 128;
      if (*(_QWORD*)(*v9 + 200) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(*v9 + v11, v174_.v175);
    }
    v174_.v174[1] = 0;
    v174_.v175 = 0;
    v174_.v174[0] = 0;
    LOWORD(v177[0]) = 0;
    timeline_2020((unsigned __int16*)v165, v177);
    v12 = SLOWORD(v177[0]);
    v13 = fw_memory_HeapManager_Allocate(*v9, SLOWORD(v177[0]), 16, 0);
    memset(v13, 0, v12);
    Value_2500((__int64*)v165, v13, v12);
    GameRoutine_60a060((char*)v174_.v174, v13, SLOWORD(v177[0]));
    v14 = 128;
    if (*(_QWORD*)(*v9 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*v9 + v14, v13);
    v15 = v174_.v174[0];
    LOBYTE(v177[0]) = 16;
    strcpy((char*)v177 + 1, "worldAos");
    v16 = v174_.v175;
    if ((v174_.v174[0] & 1) != 0) {
      v17 = v174_.v174[1];
    }
    else {
      v17 = (unsigned __int64)LOBYTE(v174_.v174[0]) >> 1;
    }
    if ((v174_.v174[0] & 1) != 0) {
      v18 = (char*)v174_.v175;
    }
    else {
      v18 = (char*)v174_.v174 + 1;
    }
    if (v17 >= 8) {
      v19 = 8;
    }
    else {
      v19 = v17;
    }
    v20 = memcmp((__int64)v177 + 1, (__int64)v18, v19) == 0;
    v21 = v17 == 8 && v20;
    if ((v15 & 1) != 0 && v16 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*v9 + 200) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free(*v9 + v22, v16);
    }
    v158 = a2;
    if (!v21) {
    LABEL_177:
      v95 = v161_.v162;
      LODWORD(v159_.v159[5]) = v161_.v161 > 1;
      if (v161_.v161 < 2) {
        if (v161_.v162 == nullptr) {
          goto LABEL_256;
        }
        v145 = (__int64)v161_.v163;
        if (v161_.v162 == v161_.v163) {
        LABEL_253:
          v155 = 128;
          if (*(_QWORD*)(*v9 + 200) == 0) {
            v155 = 56;
          }
          nn_mem_StandardAllocator_Free(*v9 + v155, (__int64)v95);
          goto LABEL_256;
        }
        v146 = (__int64)v161_.v163;
        do {
          v147 = *(_BYTE*)(v146 - 112);
          v146 -= 112;
          if ((v147 & 1) != 0) {
            v148 = *(_QWORD*)(v145 - 96);
            if (v148 != 0) {
              if (*(_QWORD*)(*v9 + 200) != 0) {
                v149 = 128;
              }
              else {
                v149 = 56;
              }
              nn_mem_StandardAllocator_Free(*v9 + v149, v148);
            }
          }
          v145 = v146;
        } while ((unsigned __int8*)v146 != v95);
      }
      else {
        v96 = (__int64)v161_.v163;
        if (v161_.v162 != v161_.v163) {
          v97 = (_DWORD*)((char*)v174_.v174 + 1);
          v159_.v160 = (char*)v174_.v174 + 1;
          do {
            v98 = *v95;
            v99 = (v98 & 1) == 0;
            v100 = v98 >> 1;
            if (v99) {
              v101 = (__int64)(v95 + 1);
            }
            else {
              v101 = *((_QWORD*)v95 + 2);
            }
            if (v99) {
              v102 = v100;
            }
            else {
              v102 = *((_QWORD*)v95 + 1);
            }
            v103 = GameRoutine_a81a70(v101, v102);
            if (v103 == 0 || v103 == 2) {
              v104 = 8;
              LOBYTE(v174_.v174[0]) = 16;
              strcpy((char*)v174_.v174 + 1, "High_WAO");
            }
            else if (v103 == 1) {
              v104 = 7;
              LOBYTE(v174_.v174[1]) = 0;
              LOBYTE(v174_.v174[0]) = 14;
              *v97 = 1601662796;
              *(_DWORD*)((char*)v97 + 3) = 1329682271;
            }
            else {
              v104 = 0;
              LOWORD(v174_.v174[0]) = 0;
            }
            v105 = g3d_a6c880(&v171, (__int64)v97, v104);
            if ((v174_.v174[0] & 1) != 0 && v174_.v175 != 0) {
              v106 = v105;
              v107 = 128;
              if (*(_QWORD*)(*v9 + 200) == 0) {
                v107 = 56;
              }
              nn_mem_StandardAllocator_Free(*v9 + v107, v174_.v175);
              v105 = v106;
            }
            if (v105 != 0) {
              v108 = *(_QWORD*)(v105 + 144);
              v109 = *(_QWORD*)(*(_QWORD*)(v105 + 128) + 8LL);
              v110 = fw_memory_HeapManager_Allocate(*v9, 128, 16, 0);
              *(_QWORD*)(v110 + 8) = 0;
              v111 = (atomic_ullong*)(v110 + 8);
              *(_QWORD*)(v110 + 16) = 0;
              v112 = v110;
              *(_QWORD*)(v110 + 32) = 0;
              v113 = v110 + 32;
              *(_QWORD*)(v110 + 40) = 0;
              *(_QWORD*)(v110 + 48) = 0;
              *(_QWORD*)(v110 + 56) = 0;
              *(_QWORD*)(v110 + 64) = 0;
              *(_QWORD*)v110 = GameData_1fd2280;
              *(_QWORD*)(v110 + 72) = 0;
              *(_QWORD*)(v110 + 80) = 0;
              *(_QWORD*)(v110 + 88) = 0;
              *(_QWORD*)(v110 + 96) = 0;
              *(_QWORD*)(v110 + 104) = 0;
              *(_QWORD*)(v110 + 112) = 0;
              *(_QWORD*)(v110 + 120) = 0;
              v114 = *((_QWORD*)v95 + 6);
              *(_QWORD*)(v110 + 32) = v109;
              *(_DWORD*)(v110 + 40) = v108;
              v115 = *((_QWORD*)v95 + 4);
              v116 = *((_QWORD*)v95 + 5);
              *(_QWORD*)(v110 + 64) = v114;
              *(_QWORD*)(v110 + 48) = v115;
              *(_QWORD*)(v110 + 56) = v116;
              v117 = *((_QWORD*)v95 + 9);
              *(_QWORD*)(v110 + 80) = *((_QWORD*)v95 + 8);
              *(_QWORD*)(v110 + 88) = v117;
              v118 = *((_QWORD*)v95 + 10);
              *(_DWORD*)(v110 + 104) = *((_DWORD*)v95 + 22);
              *(_QWORD*)(v110 + 96) = v118;
              v119 = *(_QWORD*)(v95 + 92);
              *(_DWORD*)(v110 + 116) = *((_DWORD*)v95 + 25);
              *(_QWORD*)(v110 + 108) = v119;
              v120 = *v95;
              v121 = (v120 & 1) == 0;
              v122 = v120 >> 1;
              if (v121) {
                v123 = (__int64)(v95 + 1);
              }
              else {
                v123 = *((_QWORD*)v95 + 2);
              }
              if (v121) {
                v124 = v122;
              }
              else {
                v124 = *((_QWORD*)v95 + 1);
              }
              v125 = GameRoutine_a81a70(v123, v124);
              atomic_fetch_add_explicit(v111, 1u, memory_order_relaxed);
              atomic_fetch_add_explicit(v111, 1u, memory_order_relaxed);
              v126 = a2[8];
              v127 = a2[9];
              if (v126 >= v127) {
                v129 = a2[7];
                v130 = v126 - v129;
                v131 = 1 - 0x5555555555555555LL * ((__int64)(v126 - v129) >> 3);
                if (v131 > 0xAAAAAAAAAAAAAAALL) {
                  GameRoutine_c511e0();
                }
                v132 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v127 - v129) >> 3);
                if (2 * v132 > v131) {
                  v131 = 2 * v132;
                }
                if (v132 >= 0x555555555555555LL) {
                  v131 = 0xAAAAAAAAAAAAAAALL;
                }
                if (v131 > 0xAAAAAAAAAAAAAAALL) {
                  goto LABEL_262;
                }
                v159_.v159[6] = 3 * v131;
                v133 = fw_memory_HeapManager_Allocate(*v9, 24 * v131, 16, 0);
                v134 = v133 + v130;
                v135 = v133;
                *(_DWORD*)v134 = v125;
                *(_QWORD*)(v134 + 8) = v113;
                *(_QWORD*)(v134 + 16) = v112;
                v137 = v158[7];
                v136 = v158[8];
                v138 = v134 + v137 - v136;
                if (v137 == v136) {
                  v142 = v158;
                }
                else {
                  v139 = v158[7];
                  v140 = v134 + v137 - v136;
                  do {
                    *(_DWORD*)v140 = *(_DWORD*)v139;
                    *(_QWORD*)(v140 + 8) = *(_QWORD*)(v139 + 8);
                    *(_QWORD*)(v140 + 16) = *(_QWORD*)(v139 + 16);
                    *(_QWORD*)(v139 + 8) = 0;
                    *(_QWORD*)(v139 + 16) = 0;
                    v139 += 24;
                    v140 += 24;
                  } while (v139 != v136);
                  do {
                    v141 = *(_QWORD*)(v137 + 16);
                    if (v141 != 0 &&
                        atomic_fetch_add((atomic_ullong* volatile)(v141 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v141 + 16LL))(v141);
                      std___1___shared_weak_count___release_weak(v141);
                    }
                    v137 += 24;
                  } while (v137 != v136);
                  v142 = v158;
                  v137 = v158[7];
                }
                v128 = v134 + 24;
                v142[7] = v138;
                v142[8] = v134 + 24;
                v143 = v135 + 8LL * v159_.v159[6];
                a2 = v142;
                v142[9] = v143;
                v9 = (__int64*)fw_memory_g_heap_manager_ptr;
                if (v137 != 0) {
                  v144 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v144 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v144, v137);
                }
              }
              else {
                *(_DWORD*)v126 = v125;
                v128 = v126 + 24;
                *(_QWORD*)(v126 + 8) = v113;
                *(_QWORD*)(v126 + 16) = v112;
              }
              a2[8] = v128;
              if (atomic_fetch_add(v111, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v112 + 16LL))(v112);
                std___1___shared_weak_count___release_weak(v112);
              }
              v97 = v159_.v160;
              if (atomic_fetch_add(v111, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v112 + 16LL))(v112);
                std___1___shared_weak_count___release_weak(v112);
              }
            }
            v95 += 112;
          } while (v95 != (unsigned __int8*)v96);
          v95 = v161_.v162;
        }
        if (v95 == nullptr) {
          goto LABEL_256;
        }
        v150 = (__int64)v161_.v163;
        if (v95 == v161_.v163) {
          goto LABEL_253;
        }
        v151 = (__int64)v161_.v163;
        do {
          v152 = *(_BYTE*)(v151 - 112);
          v151 -= 112;
          if ((v152 & 1) != 0) {
            v153 = *(_QWORD*)(v150 - 96);
            if (v153 != 0) {
              if (*(_QWORD*)(*v9 + 200) != 0) {
                v154 = 128;
              }
              else {
                v154 = 56;
              }
              nn_mem_StandardAllocator_Free(*v9 + v154, v153);
            }
          }
          v150 = v151;
        } while ((unsigned __int8*)v151 != v95);
      }
      v161_.v163 = v95;
      v95 = v161_.v162;
      if (v161_.v162 != nullptr) {
        goto LABEL_253;
      }
    LABEL_256:
      *(_QWORD*)v165 = 0;
      v156 = (__int64*)v165;
      v165 = nullptr;
      if (v156 != nullptr) {
        v157 = 128;
        if (*(_QWORD*)(*v9 + 200) == 0) {
          v157 = 56;
        }
        nn_mem_StandardAllocator_Free(*v9 + v157, (__int64)v156);
      }
      (*(void (**)(_QWORD*))(v166_.v166[0] + 24LL))(v166_.v166);
      return LODWORD(v159_.v159[5]);
    }
    v172 = 0;
    timeline_2360((unsigned __int64*)v165, &v172);
    v24 = (__int64)v161_.v162;
    v23 = (__int64)v161_.v163;
    v25 = v172;
    v26 = v161_.v163 - v161_.v162;
    v27 = 0x6DB6DB6DB6DB6DB7LL * ((v161_.v163 - v161_.v162) >> 4);
    v28 = v172 - v27;
    if (v172 <= v27) {
      if (v172 >= v27) {
        v34 = (__int64)v161_.v163;
        goto LABEL_68;
      }
      v34 = (__int64)&v161_.v162[112 * v172];
      if ((unsigned __int8*)v34 != v161_.v163) {
        v48 = (__int64)v161_.v163;
        do {
          v49 = *(_BYTE*)(v48 - 112);
          v48 -= 112;
          if ((v49 & 1) != 0) {
            v50 = *(_QWORD*)(v23 - 96);
            if (v50 != 0) {
              if (*(_QWORD*)(*v9 + 200) != 0) {
                v51 = 128;
              }
              else {
                v51 = 56;
              }
              nn_mem_StandardAllocator_Free(*v9 + v51, v50);
            }
          }
          v23 = v48;
        } while (v48 != v34);
      }
    }
    else {
      if (0x6DB6DB6DB6DB6DB7LL * ((v161_.v164 - (__int64)v161_.v163) >> 4) <
          v28) {
        if (v172 > 0x249249249249249LL) {
          GameRoutine_c51200();
        }
        if (0xDB6DB6DB6DB6DB6ELL * ((v161_.v164 - (__int64)v161_.v162) >> 4) >
            v172) {
          v25 =
              0xDB6DB6DB6DB6DB6ELL * ((v161_.v164 - (__int64)v161_.v162) >> 4);
        }
        if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL *
                               ((v161_.v164 - (__int64)v161_.v162) >> 4)) >=
            0x124924924924924LL) {
          v25 = 0x249249249249249LL;
        }
        if (v25 > 0x249249249249249LL) {
        LABEL_262:
          GameRoutine_60a210();
        }
        v29 = 112 * v25;
        v30 = fw_memory_HeapManager_Allocate(*v9, 112 * v25, 16, 0);
        v31 = v30 + v29;
        v32 = (_QWORD*)v30;
        v33 = v30 + v26;
        memset(v33, 0,
               112 * ((((112 * v28 - 112) >> 4) *
                       (unsigned __int128)0x2492492492492493uLL) >>
                      64) +
                   112);
        v34 = v33 +
              112 * ((((112 * v28 - 112) >> 4) *
                      (unsigned __int128)0x2492492492492493uLL) >>
                     64) +
              112;
        if (v24 != v23) {
          v35 = (__int64*)v24;
          v36 = v32;
          do {
            v37 = *v35;
            v38 = v35[2];
            v36[1] = v35[1];
            v36[2] = v38;
            *v36 = v37;
            v35[1] = 0;
            v35[2] = 0;
            *v35 = 0;
            v39 = v35[5];
            v40 = v35[6];
            v41 = v35[8];
            v36[7] = v35[7];
            v36[8] = v41;
            v36[5] = v39;
            v36[6] = v40;
            v42 = v35[12];
            v43 = v35[9];
            v44 = v35[10];
            v36[11] = v35[11];
            v36[12] = v42;
            v36[9] = v43;
            v36[10] = v44;
            v45 = v35[4];
            v35 += 14;
            v36[4] = v45;
            v36 += 14;
          } while (v35 != (__int64*)v23);
          do {
            if ((*(_BYTE*)v24 & 1) != 0) {
              v46 = *(_QWORD*)(v24 + 16);
              if (v46 != 0) {
                if (*(_QWORD*)(*v9 + 200) != 0) {
                  v47 = 128;
                }
                else {
                  v47 = 56;
                }
                nn_mem_StandardAllocator_Free(*v9 + v47, v46);
              }
            }
            v24 += 112;
          } while (v24 != v23);
          v24 = (__int64)v161_.v162;
        }
        v161_.v162 = (unsigned __int8*)v32;
        v161_.v163 = (unsigned __int8*)v34;
        v161_.v164 = v31;
        if (v24 != 0) {
          v52 = 128;
          if (*(_QWORD*)(*v9 + 200) == 0) {
            v52 = 56;
          }
          nn_mem_StandardAllocator_Free(*v9 + v52, v24);
          v34 = (__int64)v161_.v163;
        }
        goto LABEL_68;
      }
      memset((__int64)v161_.v163, 0,
             112 * ((((112 * v28 - 112) >> 4) *
                     (unsigned __int128)0x2492492492492493uLL) >>
                    64) +
                 112);
      v34 = v23 +
            112 * ((((112 * v28 - 112) >> 4) *
                    (unsigned __int128)0x2492492492492493uLL) >>
                   64) +
            112;
    }
    v161_.v163 = (unsigned __int8*)v34;
  LABEL_68:
    if ((unsigned __int8*)v34 != v161_.v162) {
      v53 = 100;
      v54 = 0x6DB6DB6DB6DB6DB7LL * ((v34 - (__int64)v161_.v162) >> 4);
      v55 = 0x746972777265766FLL;
      v56 = 0x7265766965636572LL;
      v57 = 0x6965636552657375LL;
      v159_.v160 = (char*)v174_.v174 + 1;
      qmemcpy(v159_.v159,
              "teHeightsOverwriparam2.iteHeightsOverwriparam1.ilayerNam",
              sizeof(v159_.v159));
      do {
        v58 = v161_.v162;
        v59 = v57;
        v60 = v56;
        v61 = v55;
        BYTE2(v174_.v174[1]) = 0;
        LOBYTE(v174_.v174[0]) = 18;
        v159_.v160[8] = 101;
        v62 = &v58[v53];
        v174_.v176 = &v58[v53 - 100];
        *(_QWORD*)v159_.v160 = v159_.v159[6];
        GameStringReads_c05cc0((__int64**)&v165, (__int64)v174_.v174);
        if ((v174_.v174[0] & 1) != 0 && v174_.v175 != 0) {
          v63 = 128;
          if (*(_QWORD*)(*v9 + 200) == 0) {
            v63 = 56;
          }
          nn_mem_StandardAllocator_Free(*v9 + v63, v174_.v175);
        }
        v174_.v176 = v62 - 68;
        v174_.v174[0] = 0x54537A7808LL;
        GameHr_c51220((__int64**)&v165, (char*)v174_.v174);
        v174_.v176 = v62 - 36;
        v174_.v174[0] = 0x6172617065537916LL;
        v174_.v174[1] = 1414751604;
        GameHr_c51220((__int64**)&v165, (char*)v174_.v174);
        v64 = *(_QWORD*)(v62 - 52);
        v174_.v174[1] = 0;
        v174_.v175 = 0;
        v174_.v174[0] = 0;
        LOWORD(v177[0]) = 0;
        v173 = v64;
        timeline_2020((unsigned __int16*)v165, v177);
        v65 = SLOWORD(v177[0]);
        v66 = fw_memory_HeapManager_Allocate(*v9, SLOWORD(v177[0]), 16, 0);
        memset(v66, 0, v65);
        Value_2500((__int64*)v165, v66, v65);
        GameRoutine_60a060((char*)v174_.v174, v66, SLOWORD(v177[0]));
        v67 = 128;
        if (*(_QWORD*)(*v9 + 200) == 0) {
          v67 = 56;
        }
        nn_mem_StandardAllocator_Free(*v9 + v67, v66);
        v177[0] = 1414756614;
        v68 = v174_.v174[0] & 1;
        if (v68 != 0) {
          v69 = v174_.v174[1];
        }
        else {
          v69 = (unsigned __int64)LOBYTE(v174_.v174[0]) >> 1;
        }
        if ((v174_.v174[0] & 1) != 0) {
          v70 = v174_.v175;
        }
        else {
          v70 = (__int64)v159_.v160;
        }
        if (v69 >= 3) {
          v71 = 3;
        }
        else {
          v71 = v69;
        }
        v72 = memcmp((__int64)v177 + 1, v70, v71) == 0;
        v73 = v69 == 3 && v72;
        if (v68 != 0 && v174_.v175 != 0) {
          v74 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v74 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v74, v174_.v175);
        }
        v9 = (__int64*)fw_memory_g_heap_manager_ptr;
        if (v73) {
          LOWORD(v174_.v174[0]) = 0;
          v174_.v176 = (unsigned __int8*)&v173;
          if (GameRoutine_c05fb0((__int64**)&v165, (__int64)v174_.v174)) {
            v75 = (unsigned int*)v174_.v176;
            if ((timeline_21c0(v165, (unsigned int*)v177) & 1) != 0) {
              *v75 = v177[0];
            }
          }
          if ((v174_.v174[0] & 1) != 0 && v174_.v175 != 0) {
            v76 = 128;
            if (*(_QWORD*)(*v9 + 200) == 0) {
              v76 = 56;
            }
            nn_mem_StandardAllocator_Free(*v9 + v76, v174_.v175);
          }
          LOWORD(v174_.v174[0]) = 0;
          v174_.v176 = (unsigned __int8*)&v173 + 4;
          if (GameRoutine_c05fb0((__int64**)&v165, (__int64)v174_.v174)) {
            v77 = (unsigned int*)v174_.v176;
            if ((timeline_21c0(v165, (unsigned int*)v177) & 1) != 0) {
              *v77 = v177[0];
            }
          }
          if ((v174_.v174[0] & 1) != 0 && v174_.v175 != 0) {
            v78 = 128;
            if (*(_QWORD*)(*v9 + 200) == 0) {
              v78 = 56;
            }
            nn_mem_StandardAllocator_Free(*v9 + v78, v174_.v175);
          }
        }
        *(_QWORD*)(v62 - 52) = v173;
        v79 = fw_memory_HeapManager_Allocate(*v9, 32, 16, 0);
        *(_BYTE*)(v79 + 24) = 0;
        *(_QWORD*)v79 = v159_.v159[5];
        *(_QWORD*)(v79 + 8) = v159_.v159[4];
        *(_QWORD*)(v79 + 16) = v159_.v159[3];
        fw_text_String_CopyTerminated(v174_.v174, v79, 0x18u);
        v174_.v176 = &v58[v53 - 20];
        if (GameRoutine_c3d2d0((__int64**)&v165, (__int64)v174_.v174)) {
          LODWORD(v177[0]) = 0;
          timeline_21c0(v165, (unsigned int*)v177);
          *v174_.v176 = LODWORD(v177[0]) != 0;
        }
        v55 = v61;
        if ((v174_.v174[0] & 1) != 0 && v174_.v175 != 0) {
          v80 = 128;
          if (*(_QWORD*)(*v9 + 200) == 0) {
            v80 = 56;
          }
          nn_mem_StandardAllocator_Free(*v9 + v80, v174_.v175);
        }
        v81 = 128;
        if (*(_QWORD*)(*v9 + 200) == 0) {
          v81 = 56;
        }
        nn_mem_StandardAllocator_Free(*v9 + v81, v79);
        v174_.v174[0] = 0x2E316D617261702CLL;
        v174_.v174[1] = v61;
        v174_.v175 = 0x74686769654865LL;
        v174_.v176 = &v58[v53 - 16];
        v56 = v60;
        v57 = v59;
        if (GameRoutine_c05fb0((__int64**)&v165, (__int64)v174_.v174)) {
          v82 = (unsigned int*)v174_.v176;
          if ((timeline_21c0(v165, (unsigned int*)v177) & 1) != 0) {
            *v82 = v177[0];
          }
        }
        if ((v174_.v174[0] & 1) != 0 && v174_.v175 != 0) {
          v83 = 128;
          if (*(_QWORD*)(*v9 + 200) == 0) {
            v83 = 56;
          }
          nn_mem_StandardAllocator_Free(*v9 + v83, v174_.v175);
        }
        v174_.v174[0] = 0x2E316D617261702CLL;
        v174_.v174[1] = v59;
        v174_.v175 = 0x6E694D59726576LL;
        v174_.v176 = &v58[v53 - 19];
        if (GameRoutine_c3d2d0((__int64**)&v165, (__int64)v174_.v174)) {
          LODWORD(v177[0]) = 0;
          timeline_21c0(v165, (unsigned int*)v177);
          *v174_.v176 = LODWORD(v177[0]) != 0;
        }
        if ((v174_.v174[0] & 1) != 0 && v174_.v175 != 0) {
          v84 = 128;
          if (*(_QWORD*)(*v9 + 200) == 0) {
            v84 = 56;
          }
          nn_mem_StandardAllocator_Free(*v9 + v84, v174_.v175);
        }
        v174_.v174[0] = 0x2E316D6172617026LL;
        v174_.v174[1] = v56;
        v174_.v175 = 1852394841;
        v174_.v176 = &v58[v53 - 12];
        if (GameRoutine_c05fb0((__int64**)&v165, (__int64)v174_.v174)) {
          v85 = (unsigned int*)v174_.v176;
          if ((timeline_21c0(v165, (unsigned int*)v177) & 1) != 0) {
            *v85 = v177[0];
          }
        }
        if ((v174_.v174[0] & 1) != 0 && v174_.v175 != 0) {
          v86 = 128;
          if (*(_QWORD*)(*v9 + 200) == 0) {
            v86 = 56;
          }
          nn_mem_StandardAllocator_Free(*v9 + v86, v174_.v175);
        }
        v87 = fw_memory_HeapManager_Allocate(*v9, 32, 16, 0);
        *(_BYTE*)(v87 + 24) = 0;
        *(_QWORD*)v87 = v159_.v159[2];
        *(_QWORD*)(v87 + 8) = v159_.v159[1];
        *(_QWORD*)(v87 + 16) = v159_.v159[0];
        fw_text_String_CopyTerminated(v174_.v174, v87, 0x18u);
        v174_.v176 = &v58[v53 - 8];
        if (GameRoutine_c3d2d0((__int64**)&v165, (__int64)v174_.v174)) {
          LODWORD(v177[0]) = 0;
          timeline_21c0(v165, (unsigned int*)v177);
          *v174_.v176 = LODWORD(v177[0]) != 0;
        }
        if ((v174_.v174[0] & 1) != 0 && v174_.v175 != 0) {
          v88 = 128;
          if (*(_QWORD*)(*v9 + 200) == 0) {
            v88 = 56;
          }
          nn_mem_StandardAllocator_Free(*v9 + v88, v174_.v175);
        }
        v89 = 128;
        if (*(_QWORD*)(*v9 + 200) == 0) {
          v89 = 56;
        }
        nn_mem_StandardAllocator_Free(*v9 + v89, v87);
        v174_.v174[0] = 0x2E326D617261702CLL;
        v174_.v174[1] = v55;
        v174_.v175 = 0x74686769654865LL;
        v174_.v176 = &v58[v53 - 4];
        if (GameRoutine_c05fb0((__int64**)&v165, (__int64)v174_.v174)) {
          v90 = (unsigned int*)v174_.v176;
          if ((timeline_21c0(v165, (unsigned int*)v177) & 1) != 0) {
            *v90 = v177[0];
          }
        }
        if ((v174_.v174[0] & 1) != 0 && v174_.v175 != 0) {
          v91 = 128;
          if (*(_QWORD*)(*v9 + 200) == 0) {
            v91 = 56;
          }
          nn_mem_StandardAllocator_Free(*v9 + v91, v174_.v175);
        }
        v174_.v174[0] = 0x2E326D617261702CLL;
        v174_.v174[1] = v59;
        v174_.v175 = 0x6E694D59726576LL;
        v174_.v176 = &v58[v53 - 7];
        if (GameRoutine_c3d2d0((__int64**)&v165, (__int64)v174_.v174)) {
          LODWORD(v177[0]) = 0;
          timeline_21c0(v165, (unsigned int*)v177);
          *v174_.v176 = LODWORD(v177[0]) != 0;
        }
        if ((v174_.v174[0] & 1) != 0 && v174_.v175 != 0) {
          v92 = 128;
          if (*(_QWORD*)(*v9 + 200) == 0) {
            v92 = 56;
          }
          nn_mem_StandardAllocator_Free(*v9 + v92, v174_.v175);
        }
        v174_.v174[0] = 0x2E326D6172617026LL;
        v174_.v174[1] = v56;
        v174_.v175 = 1852394841;
        v174_.v176 = &v58[v53];
        if (GameRoutine_c05fb0((__int64**)&v165, (__int64)v174_.v174)) {
          v93 = (unsigned int*)v174_.v176;
          if ((timeline_21c0(v165, (unsigned int*)v177) & 1) != 0) {
            *v93 = v177[0];
          }
        }
        if ((v174_.v174[0] & 1) != 0 && v174_.v175 != 0) {
          v94 = 128;
          if (*(_QWORD*)(*v9 + 200) == 0) {
            v94 = 56;
          }
          nn_mem_StandardAllocator_Free(*v9 + v94, v174_.v175);
        }
        --v54;
        v53 += 112;
      } while (v54 != 0);
    }
    a2 = v158;
    goto LABEL_177;
  }
  return result;
}

float llvm_libcxx_21_libcxx_include___functional_10a92a0(float32x4_t* a1,
                                                         float a2, float a3)
{
  float32x4_t v6;
  float32x4_t v7;
  unsigned int v8;
  float32x4_t v9;
  float32x4_t* v10;
  unsigned __int64 v11;
  __int64 v12;
  float32x4_t v13;
  int8x16_t v14;
  float32x4_t v15;
  int8x16_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float v20;
  float32x4_t v21;
  __int128 v22;
  float32x4_t v23;
  float v24;
  __int128 v25;
  float v26;
  float v27;
  __int64* v28;
  float32x4_t* v29;
  unsigned __int32 v30;
  _BYTE* v31;
  unsigned __int32 v32;
  float32x4_t v33;
  unsigned __int64 v34;
  int8x16_t* v35;
  __int64* v36;
  int8x16_t v37;
  __int64 v38;
  int8x16_t v39;
  unsigned __int32 v40;
  __int64 v41;
  float32x4_t v42;
  float v43;
  int8x16_t v44;
  unsigned __int32 v45;
  float32x4_t* v46;
  float* v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  int8x16_t v56;
  int8x16_t v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  int8x16_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  int8x16_t v66;
  float v67;
  int8x16_t v68;
  float32x4_t v69;
  float v70;
  float32x4_t v71;
  float result;
  int v73;
  __int64 v74;
  int v75;
  __int64 v76;
  __int64 v77;
  float v78;
  float32x4_t v79;
  int8x16_t* v80;
  float v81;
  float32x4_t v82;
  struct {
    _BYTE v83[4];
    float v84;
  } v83_;
  __int64 v85;
  struct {
    _BYTE v86[4];
    float v87;
  } v86_;
  __int64 v88;
  float32x4_t v89;
  __int128 v90;
  int8x16_t v91;
  int8x16_t v92;

  v6 = *(float32x4_t*)(LANES128(a1[1]).n128_u64[0] - 16);
  LANES128(a1[10]).n128_u64[0] = LANES128(v6).n128_u64[0];
  v7 = a1[10];
  LANES128(v7).n128_u64[1] = LANES128(v6).n128_u32[2];
  a1[10] = v7;
  v79 = v6;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                            memory_order_acquire) &
       1) == 0) {
    v73 = __cxa_guard_acquire(&GameData_21a6190);
    v6 = v79;
    if (v73 != 0) {
      v74 = *((_QWORD*)GameData_212c558 + 1);
      *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
      *((_QWORD*)&GameData_21a6180 + 1) = v74;
      __cxa_guard_release(&GameData_21a6190);
      v6 = v79;
    }
  }
  v8 = DWORD2(GameData_21a6180);
  LANES128(a1[11]).n128_u64[0] = GameData_21a6180;
  v9 = a1[11];
  v10 = (float32x4_t*)LANES128(a1[5]).n128_u64[0];
  v11 = LANES128(a1[5]).n128_u64[1];
  LANES128(v9).n128_u64[1] = v8;
  a1[11] = v9;
  v12 = *(_QWORD*)(v11 + 184);
  v13 = vsubq_f32(
      v10[3],
      *(float32x4_t*)(*(_QWORD*)(LANES128(a1[1]).n128_u64[0] - 24) + 48LL));
  LANES128(v13).n128_u32[1] = 0;
  v14 = vmulq_f32(v13, v13);
  v15 = vextq_s8(v14, v14, 8u);
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vadd_f32(COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
          .n64_u64[0];
  PSEUDO_LOW_LANE128(v15, n128_u64, 0);
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
          .n64_u64[0];
  v16 = vceqq_f32(v14, v15);
  LANES128(v14).n128_u64[1] = LANES128(v14).n128_u64[0];
  v17 = vrsqrteq_f32(v14);
  v18 = vmulq_f32(v17, vrsqrtsq_f32(v17, vmulq_f32(v14, v17)));
  v19 = vbslq_s8(
      vdupq_lane_s32(
          COERCE_AS(int32x2_t, LANES128_OF(vmvnq_s8(v16)).n128_u64[0]), 0),
      vbicq_s8(vmulq_f32(
                   v13, vmulq_f32(v18, vrsqrtsq_f32(v18, vmulq_f32(v14, v18)))),
               vceqzq_f32(v14)),
      COERCE_AS(int8x16_t, GameData_1a83090));
  LANES128(v13).n128_f32[0] =
      LANES128(a1[6]).n128_f32[3] * LANES128(a1[6]).n128_f32[1];
  v78 = LANES128(v13).n128_f32[0] * 0x1.99999a0000000p-1f;
  v81 = LANES128(v13).n128_f32[0] * 0x1.99999a0000000p-3f;
  v82 = v19;
  v20 = LANES128(a1[7]).n128_f32[3];
  v21 = vaddq_f32(
      v6, vmulq_n_f32(v19, LANES128(v13).n128_f32[0] * 0x1.99999a0000000p-1f));
  if ((float)((float)(PSEUDO_UNFUSED(
                  (float)(LANES128(v21).n128_f32[2] - v20) *
                  (float)(LANES128(v21).n128_f32[2] - v20))) +
              (float)((float)(LANES128(v21).n128_f32[0] -
                              LANES128(a1[7]).n128_f32[2]) *
                      (float)(LANES128(v21).n128_f32[0] -
                              LANES128(a1[7]).n128_f32[2]))) >=
      0x1.a36e2e0000000p-12f) {
    v20 = LANES128(v21).n128_f32[2];
    LANES128(a1[7]).n128_u32[2] = LANES128(v21).n128_u32[0];
    LANES128(a1[7]).n128_u32[3] = LANES128(v21).n128_u32[2];
  }
  else {
    LANES128(v21).n128_u32[0] = LANES128(a1[7]).n128_u32[2];
  }
  LODWORD(v22) = LANES128(v21).n128_u32[0];
  *((float*)&v22 + 1) =
      (float)(LANES128(v21).n128_f32[1] + 0x1.8000000000000p+0f) - a2;
  *((_QWORD*)&v22 + 1) = LODWORD(v20);
  LANES128(v21).n128_f32[1] =
      (float)(LANES128(v21).n128_f32[1] + -0x1.e000000000000p+2f) - a2;
  v90 = v22;
  LANES128(v21).n128_u64[1] = LODWORD(v20);
  v89 = v21;
  GameRoutine_1085a10(v11 + 160, &v90, &v89, v12 & 0xFFFFFFFFFFFFFFFDLL);
  v23 = vsubq_f32(v79, vmulq_n_f32(v82, v81));
  v24 = LANES128(a1[8]).n128_f32[1];
  if ((float)((float)(PSEUDO_UNFUSED(
                  (float)(LANES128(v23).n128_f32[2] - v24) *
                  (float)(LANES128(v23).n128_f32[2] - v24))) +
              (float)((float)(LANES128(v23).n128_f32[0] -
                              LANES128(a1[8]).n128_f32[0]) *
                      (float)(LANES128(v23).n128_f32[0] -
                              LANES128(a1[8]).n128_f32[0]))) >=
      0x1.a36e2e0000000p-12f) {
    v24 = LANES128(v23).n128_f32[2];
    LANES128(a1[8]).n128_u32[0] = LANES128(v23).n128_u32[0];
    LANES128(a1[8]).n128_u32[1] = LANES128(v23).n128_u32[2];
  }
  else {
    LANES128(v23).n128_u32[0] = LANES128(a1[8]).n128_u32[0];
  }
  LODWORD(v25) = LANES128(v23).n128_u32[0];
  *((float*)&v25 + 1) =
      (float)(LANES128(v23).n128_f32[1] + 0x1.8000000000000p+0f) - a2;
  *((_QWORD*)&v25 + 1) = LODWORD(v24);
  LANES128(v23).n128_f32[1] =
      (float)(LANES128(v23).n128_f32[1] + -0x1.e000000000000p+2f) - a2;
  v90 = v25;
  LANES128(v23).n128_u64[1] = LODWORD(v24);
  v89 = v23;
  GameRoutine_1085a10(v11 + 160, &v90, &v89, v12 & 0xFFFFFFFFFFFFFFFDLL);
  v26 = v86_.v87;
  v27 = v83_.v84;
  v28 = &v88;
  if (v86_.v87 > v83_.v84) {
    v29 = (float32x4_t*)v83_.v83;
  }
  else {
    v28 = &v85;
    v29 = (float32x4_t*)v86_.v86;
  }
  v30 = *(_DWORD*)v28;
  if (v86_.v87 <= v83_.v84) {
    v31 = v83_.v83;
  }
  else {
    v31 = v86_.v86;
  }
  v32 = *((_DWORD*)v31 + 5);
  LANES128(a1[11]).n128_u32[0] = v30;
  LANES128(a1[11]).n128_u32[1] = v32;
  v33 = a1[11];
  LANES128(v33).n128_u64[1] = *((unsigned int*)v31 + 6);
  a1[11] = v33;
  if (a3 > 0x0.0p+0f) {
    v34 = LANES128(a1[5]).n128_u64[1];
    v35 = *(int8x16_t**)(v34 + 448);
    v36 = (__int64*)GameData_212d270;
    if (v35 != nullptr) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                                memory_order_acquire) &
           1) == 0) {
        v80 = v35;
        v75 = __cxa_guard_acquire(&GameData_21a6190);
        v35 = v80;
        if (v75 != 0) {
          v76 = *((_QWORD*)GameData_212c558 + 1);
          *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
          *((_QWORD*)&GameData_21a6180 + 1) = v76;
          __cxa_guard_release(&GameData_21a6190);
          v35 = v80;
        }
      }
      v37 = v35[28];
      v38 = *v36;
      v92 = v37;
      PSEUDO_LOW_LANE128(v37, n128_f32,
                         0x1.0000000000000p+0f - *(float*)(v38 + 280));
      v39 = X8CALL_V0(int8x16_t,
                      GameRoutine_109da60((void*)(&v91),
                                          (float32x4_t*)&GameData_21a6180, &v92,
                                          v37));
    }
    else {
      v39 = *(int8x16_t*)(*(_QWORD*)(v34 + 408) + 448LL);
      v91 = v39;
    }
    PSEUDO_LOW_LANE128(v39, n128_f32, a3 * LANES128(a1[6]).n128_f32[2]);
    GameRoutine_109da60((void*)(&v92), &v91, a1 + 11, v39);
    v40 = LANES128(v92).n128_u32[2];
    v41 = *v36;
    LANES128(a1[11]).n128_u64[0] = LANES128(v92).n128_u64[0];
    v42 = a1[11];
    LANES128(v42).n128_u64[1] = v40;
    a1[11] = v42;
    v43 = *(float*)(v41 + 216) * 0x1.1df46a0000000p-6f;
    LANES128(v44).n128_f32[0] = math_Vec3_Angle(&v91, a1 + 11);
    if (LANES128(v44).n128_f32[0] <= v43) {
      v33 = a1[11];
    }
    else {
      PSEUDO_LOW_LANE128(v44, n128_f32, v43 / LANES128(v44).n128_f32[0]);
      GameRoutine_109da60((void*)(&v92), &v91, a1 + 11, v44);
      v45 = LANES128(v92).n128_u32[2];
      LANES128(a1[11]).n128_u64[0] = LANES128(v92).n128_u64[0];
      v33 = a1[11];
      LANES128(v33).n128_u64[1] = v45;
      a1[11] = v33;
    }
  }
  if (v26 <= v27) {
    v46 = (float32x4_t*)v83_.v83;
  }
  else {
    v46 = (float32x4_t*)v86_.v86;
  }
  if (v26 <= v27) {
    v47 = (float*)v86_.v86;
  }
  else {
    v47 = (float*)v83_.v83;
  }
  v48 = *v46;
  v49 = vsubq_f32(*v29, *v46);
  v50 = vmulq_f32(v33, v49);
  v51 = LANES128(v33).n128_f32[1];
  v52 = fabsf(
      (float)(LANES128(v50).n128_f32[2] +
              (float)(LANES128(v49).n128_f32[0] * LANES128(v33).n128_f32[0])) /
      (float)-LANES128(v33).n128_f32[1]);
  v53 = LANES128(*(v46)).n128_f32[1];
  v54 = v53 - v52;
  v55 = v47[1] + -0x1.47ae140000000p-7f;
  if (v54 >= v55) {
    v67 = LANES128(v33).n128_f32[2];
  }
  else {
    v47[1] = v55;
    v56 = vsubq_f32(*v29, v48);
    LANES128(v57).n128_u32[1] = 0;
    LANES128(v57).n128_f32[0] = -LANES128(v56).n128_f32[2];
    LANES128(v58).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v56, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v59).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v56, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v58).n128_i8[8] =
        vqtbl1_s8(v56, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    *(int8x8_t*)&LANES128(v59).n128_i8[8] =
        vqtbl1_s8(v56, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v57).n128_u64[1] = LANES128(v56).n128_u32[0];
    LANES128(v56).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v60).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v56).n128_i8[8] =
        vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    *(int8x8_t*)&LANES128(v60).n128_i8[8] =
        vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v61 = vmlsq_f32(vmulq_f32(v58, v56), v60, v59);
    v62 = vmulq_f32(v61, v61);
    LANES128(v62).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v62, v62, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0])))
            .n64_u64[0];
    LANES128(v62).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0])))
            .n64_u64[0];
    if (LANES128(v62).n128_f32[0] == 0x0.0p+0f) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21a6190) != 0) {
        v77 = *((_QWORD*)GameData_212c558 + 1);
        *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
        *((_QWORD*)&GameData_21a6180 + 1) = v77;
        __cxa_guard_release(&GameData_21a6190);
      }
      v66 = COERCE_AS(int8x16_t, GameData_21a6180);
      v53 = LANES128(*(v46)).n128_f32[1];
      LANES128(v66).n128_u32[3] = 0;
    }
    else {
      LANES128(v62).n128_u64[1] = LANES128(v62).n128_u64[0];
      v63 = vrsqrteq_f32(v62);
      v64 = vmulq_f32(v63, vrsqrtsq_f32(v63, vmulq_f32(v62, v63)));
      v65 = vmulq_f32(v62, v64);
      v62 = vceqzq_f32(v62);
      v66 =
          vbicq_s8(vmulq_f32(v61, vmulq_f32(v64, vrsqrtsq_f32(v64, v65))), v62);
    }
    LANES128(v62).n128_u64[0] = 0;
    v68 = vbslq_s8(
        vdupq_lane_s32(
            COERCE_AS(
                int32x2_t,
                LANES128_OF(
                    vcgtq_f32(v62, vdupq_lane_s32(
                                       COERCE_AS(int32x2_t,
                                                 LANES128(v66).n128_u64[0]),
                                       1)))
                    .n128_u64[0]),
            0),
        vnegq_f32(v66), v66);
    LANES128(a1[11]).n128_u64[0] = LANES128(v68).n128_u64[0];
    v33 = a1[11];
    LANES128(v69).n128_u64[0] = LANES128(a1[11]).n128_u64[0];
    LANES128(v69).n128_u64[1] = LANES128(v68).n128_u32[2];
    a1[11] = v69;
    v67 = LANES128(v68).n128_f32[2];
    v51 = LANES128(v33).n128_f32[1];
  }
  v70 = -v81;
  if (v26 > v27) {
    v70 = v78;
  }
  v71 = vmulq_n_f32(v82, v70);
  result = v53 + (float)((float)(vmuls_lane_f32(v67, v71, 2) +
                                 (float)(LANES128(v71).n128_f32[0] *
                                         LANES128(v33).n128_f32[0])) /
                         v51);
  LANES128(a1[10]).n128_f32[1] = result;
  return result;
}

__int64 llvm_libcxx_21_libcxx_include___functional_10aa280(__int64 a1,
                                                           __int64 a2,
                                                           __int64 a3, float a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v11;
  int v12;

  v8 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 304, 16, 0);
  GameRoutine_10aa3c0(v8, a1, a2, a3, a4);
  v9 = GameData_21c6960;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                            memory_order_acquire) &
       1) == 0) {
    v11 = v9;
    v12 = __cxa_guard_acquire(&GameData_21c6868);
    v9 = v11;
    if (v12 != 0) {
      GameData_21c67a8 = 3;
      GameData_21c67d0 = 0;
      GameData_21c67d8 = 0;
      GameData_21c67e0 = 0;
      GameData_21c67b0 = 0;
      GameData_21c67b8 = 0;
      GameData_21c67c0 = 0;
      GameData_21c67c8 = 0;
      GameData_21c6808 = 0;
      GameData_21c6810 = 0;
      GameData_21c6818 = 0;
      GameData_21c6820 = 0;
      GameData_21c6828 = 0;
      GameData_21c6850 = 0;
      GameData_21c6858 = 0;
      GameData_21c6860 = 0;
      GameData_21c6848 = 0;
      GameData_21c6838 = 0;
      GameData_21c6840 = 0;
      GameData_21c6830 = 0;
      GameData_21c67e8 = 14;
      GameData_21c67f0 = 0;
      GameData_21c67f8 = 16;
      GameData_21c6800 = 1;
      __cxa_guard_release(&GameData_21c6868);
      v9 = v11;
    }
  }
  return ProcInst_657850(v8, &GameData_21c67a8, "disposable::EveryFrameProc", 0,
                         v9);
}

__int64 llvm_libcxx_21_libcxx_include___functional_1611330(__int64 a1, int a2)
{
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  unsigned __int64 v10;
  _QWORD v12[2];
  struct {
    __int64* v13;
    __int64 v14;
    __int64 v15;
  } v13_;

  v4 = *(int*)(*(_QWORD*)(a1 + 1200) + 4LL * a2);
  LayoutAccessor_1562cf0((__int64*)(a1 + 848), (&GameData_20680f0)[4 * v4 + 2]);
  if ((_DWORD)v4 != 2) {
    goto LABEL_21;
  }
  LayoutAccessor_1560070((void*)(&v13_.v13), (__int64*)(a1 + 848), "L_Page02");
  if (v13_.v14 == 0) {
    goto LABEL_21;
  }
  v5 = std___1___shared_weak_count_lock(v13_.v14);
  v6 = v13_.v13;
  if (v13_.v14 != 0) {
    std___1___shared_weak_count___release_weak(v13_.v14);
  }
  if (v5 == 0 || v6 == nullptr || *(_DWORD*)(a1 + 2192) != 1) {
    if (v5 == 0) {
      goto LABEL_21;
    }
    goto LABEL_19;
  }
  v12[0] = "L_Animal";
  v12[1] = 8;
  GameRoutine_1612480((void*)(&v13_.v13), v6, v12);
  if (v13_.v14 != 0) {
    v7 = std___1___shared_weak_count_lock(v13_.v14);
    v8 = v13_.v13;
    if (v13_.v14 != 0) {
      std___1___shared_weak_count___release_weak(v13_.v14);
    }
    if (v7 != 0 && v8 != nullptr) {
      v13_.v15 = 0;
      v13_.v13 = GameData_212d890[0] + 2;
      LODWORD(v13_.v14) = 20;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64*, __int64**))(
          v8[9] + 16))((void*)(v12), v8 + 9, &v13_.v13);
      goto LABEL_17;
    }
    if (v7 != 0) {
    LABEL_17:
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v7);
      }
    }
  }
LABEL_19:
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
LABEL_21:
  _ZN4game4menu12_GLOBAL__N_116ProcUnitInfoFull21UpdateUnknown1614680Ei(a1, a2);
  v9 = *(_QWORD*)(a1 + 1088);
  v10 = *(int*)(a1 + 1076);
  if (v10 < (*(_QWORD*)(a1 + 1096) - v9) >> 2) {
    v10 = *(int*)(v9 + 4 * v10);
  }
  return ui_1567590((__int64)"XHelp",
                    *(_DWORD*)(*(_QWORD*)(a1 + 1200) + 4 * v10) == 4);
}

void llvm_libcxx_21_libcxx_include___functional_1937a70(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64 v3;
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
  int v16;

  if (*(_BYTE*)a1 == 1) {
    v2 = game_g_frame_clock_ptr[0];
    v3 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224);
    v5 = *(_QWORD*)(v3 + 48);
    v4 = *(_QWORD*)(v3 + 56);
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v4);
      }
      v6 = *(_QWORD*)(*(_QWORD*)(v5 + 8) + 128LL);
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v4);
      }
    }
    else {
      v6 = *(_QWORD*)(*(_QWORD*)(v5 + 8) + 128LL);
    }
    v7 = 0x1.e000000000000p+5f / (float)*(int*)(*v2 + 476);
    if (v7 <= 0x0.0p+0f) {
      v8 = 0x1.119ce00000000p-6f;
    }
    else {
      v8 = v7 * 0x1.119ce00000000p-6f;
    }
    v9 = *(float*)(a1 + 20);
    v10 = *(float*)(a1 + 16) + v8;
    *(float*)(a1 + 16) = v10;
    if (v10 > v9) {
      v10 = v9;
      *(float*)(a1 + 16) = v9;
    }
    *(float*)(a1 + 4) = Cursor_734120(*(_DWORD*)(a1 + 24), 2, *(float*)(a1 + 8),
                                      *(float*)(a1 + 12), v10, v9);
    v11 = 0x1.e000000000000p+5f / (float)*(int*)(*v2 + 476);
    if (v11 <= 0x0.0p+0f) {
      v12 = 0x1.119ce00000000p-6f;
    }
    else {
      v12 = v11 * 0x1.119ce00000000p-6f;
    }
    v13 = *(float*)(a1 + 44);
    v14 = *(float*)(a1 + 40) + v12;
    *(float*)(a1 + 40) = v14;
    if (v14 > v13) {
      v14 = v13;
      *(float*)(a1 + 40) = v13;
    }
    v15 = Cursor_734120(*(_DWORD*)(a1 + 48), 2, *(float*)(a1 + 32),
                        *(float*)(a1 + 36), v14, v13);
    v16 = *(_DWORD*)(a1 + 4);
    *(float*)(a1 + 28) = v15;
    *(float*)(v6 + 252) = v15;
    *(_BYTE*)(v6 + 176) = 1;
    *(_BYTE*)(v6 + 256) = 1;
    *(_DWORD*)(v6 + 172) = v16;
  }
}

__int64 llvm_libcxx_21_libcxx_include___functional_1990c40(__int64 result)
{

#pragma clang fp contract(off)
  int v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  float**** v9;
  char v10;
  float*** v11;
  float*** v12;
  char v13;
  char v14;
  float*** v15;
  char NpadStyleSetERKj;
  char v17;
  float** v18;
  float** v19;
  __int64 v20;
  float* v21;
  int v22;
  float v23;
  float v24;
  float v25;
  char v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  float v38;
  float v39;
  float v40;
  float v41;
  int v42;
  int v43;
  int v44;
  int v45;
  _BYTE v46[20];
  int v47;

  v5 = *(unsigned __int8*)(result + 228);
  *(_BYTE*)(result + 95) = 0;
  *(_BYTE*)(result + 191) = 0;
  *(_QWORD*)(result + 60) = 0;
  *(_QWORD*)(result + 68) = 0;
  *(_QWORD*)(result + 156) = 0;
  *(_QWORD*)(result + 164) = 0;
  if (v5 == 1) {
    v6 = result;
    result = nn_hid_GetNmouseHandles((__int64)v46, 2, 0);
    if ((int)result >= 1) {
      v7 = v46;
      v8 = (unsigned int)result;
      v9 = (float****)game_g_game_setting_ptr;
      do {
        result = nn_hid_GetNmouseTypeSet(&v45, *v7);
        v10 = v45;
        if ((v45 & 4) != 0) {
          v15 = *v9;
          v47 = 0;
          NpadStyleSetERKj = nn_hid_GetNpadStyleSet((__int64)&v47);
          if ((NpadStyleSetERKj & 2) != 0) {
            goto LABEL_21;
          }
          if ((NpadStyleSetERKj & 4) == 0) {
            if ((NpadStyleSetERKj & 1) != 0) {
              goto LABEL_25;
            }
            v47 = 32;
            v17 = nn_hid_GetNpadStyleSet((__int64)&v47);
            if ((v17 & 2) != 0) {
              goto LABEL_21;
            }
            if ((v17 & 4) == 0) {
              if ((v17 & 1) == 0) {
              LABEL_21:
                v18 = v15[75];
              LABEL_26:
                v21 = *v18;
                v20 = v6;
                goto LABEL_27;
              }
            LABEL_25:
              v18 = v15[78];
              goto LABEL_26;
            }
          }
          v18 = v15[81] + 1;
          goto LABEL_26;
        }
        if ((v45 & 2) == 0) {
          goto LABEL_5;
        }
        v11 = *v9;
        v47 = 0;
        v12 = v11 + 75;
        v13 = nn_hid_GetNpadStyleSet((__int64)&v47);
        if ((v13 & 2) == 0) {
          if ((v13 & 4) != 0) {
            goto LABEL_23;
          }
          if ((v13 & 1) != 0) {
            goto LABEL_14;
          }
          v47 = 32;
          v14 = nn_hid_GetNpadStyleSet((__int64)&v47);
          if ((v14 & 2) == 0) {
            if ((v14 & 4) != 0) {
            LABEL_23:
              v12 = v11 + 81;
              goto LABEL_24;
            }
            if ((v14 & 1) != 0) {
            LABEL_14:
              v12 = v11 + 78;
            }
          }
        }
      LABEL_24:
        v19 = *v12;
        v20 = v6 + 96;
        v21 = *v19;
      LABEL_27:
        v22 = *(unsigned __int8*)(v20 + 94);
        *(_BYTE*)(v20 + 95) = 1;
        if (v22 == 1) {
          v23 = *(float*)(as_g_base_frame_counter + 104) + *(float*)(v20 + 76);
          *(float*)(v20 + 76) = v23;
          if (v23 >= *(float*)(v6 + 212)) {
            v24 =
                vabds_f32(v21[13], *(float*)(v20 + 84)) * 0x1.0000000000000p+2f;
            v25 =
                vabds_f32(v21[14], *(float*)(v20 + 88)) * 0x1.0000000000000p+2f;
            if (v24 < v25) {
              v24 = v25;
            }
            if ((float)(v24 + -0x1.0000000000000p+0f) > *(float*)(v6 + 208) ||
                v23 >= *(float*)(v6 + 216)) {
              *(_BYTE*)(v20 + 94) = 0;
            }
          }
        }
        v27 = nn_hid_GetNmouseState(v20, *v7);
        result = nn_hid_SetNmousePointerPosition(*v7, 960, 540);
        if ((v27 & 1) != 0 && (*(_BYTE*)(v20 + 93) & 1) != 0) {
          v28 = *(_DWORD*)(v20 + 48);
          v30 = *(_DWORD*)(v20 + 36);
          v29 = *(_DWORD*)(v20 + 40);
          v31 = v29 & ~v28;
          v32 = *(_DWORD*)(v20 + 72);
          v33 = v28 & ~v29;
          v34 = *(_DWORD*)(v20 + 68) + *(_DWORD*)(v20 + 32);
          *(_DWORD*)(v20 + 48) = v29;
          *(_DWORD*)(v20 + 52) = v31;
          v35 = *(_DWORD*)(v20 + 16);
          v36 = *(_DWORD*)(v20 + 20) - 540;
          *(_DWORD*)(v20 + 64) = v36;
          *(_DWORD*)(v20 + 68) = v34;
          v37 = v35 - 960;
          *(_DWORD*)(v20 + 72) = v32 + v30;
          LOBYTE(v35) = *(_BYTE*)(v20 + 44);
          *(_DWORD*)(v20 + 56) = v33;
          *(_DWORD*)(v20 + 60) = v37;
          if ((v35 & 2) != 0) {
            v38 = *(float*)(v20 + 80);
            if (v21[6] <= *(float*)(v6 + 208)) {
              v41 = v38 + *(float*)(as_g_base_frame_counter + 104);
              if (*(float*)(v6 + 200) >= v41) {
                v40 = v41;
              }
              else {
                v40 = *(float*)(v6 + 200);
              }
            }
            else {
              v39 = *(float*)(v6 + 200);
              v40 = 0x0.0p+0f;
              if (v38 >= v39) {
                goto LABEL_48;
              }
            }
            *(float*)(v20 + 80) = v40;
            v38 = v40;
            v39 = *(float*)(v6 + 200);
          LABEL_48:
            if (*(float*)(v6 + 204) <=
                (float)(unsigned int)(v37 * v37 + v36 * v36)) {
              v38 = v39;
              *(float*)(v20 + 80) = v39;
            }
            if (v38 >= v39) {
              if ((*(_BYTE*)(v20 + 94) & 1) == 0) {
                *(float*)(v20 + 84) = v21[13];
                *(float*)(v20 + 88) = v21[14];
              }
              *(_BYTE*)(v20 + 94) = 1;
              if ((v10 & 4) != 0) {
                v42 = *(_DWORD*)(v6 + 224);
                v43 = (v37 + *(_DWORD*)(v6 + 220)) &
                      ~((v37 + *(_DWORD*)(v6 + 220)) >> 31);
                if (v43 >= 1920) {
                  v43 = 1920;
                }
                *(_DWORD*)(v6 + 220) = v43;
                v44 = (*(_DWORD*)(v20 + 64) + v42) &
                      ~((*(_DWORD*)(v20 + 64) + v42) >> 31);
                if (v44 >= 1080) {
                  v44 = 1080;
                }
                *(_DWORD*)(v6 + 224) = v44;
              }
            }
            *(_DWORD*)(v20 + 76) = 0;
            goto LABEL_5;
          }
          if ((*(_BYTE*)(v20 + 94) & 1) == 0) {
            *(_DWORD*)(v20 + 80) = 0;
          }
        }
        else {
          *(_QWORD*)(v20 + 48) = 0;
          *(_DWORD*)(v20 + 56) = 0;
        }
      LABEL_5:
        --v8;
        ++v7;
      } while (v8 != 0);
    }
  }
  return result;
}

__n128 llvm_libcxx_21_libcxx_include___functional_19a4910(__int64 a1,
                                                          __int64 a2, char a3)
{

#pragma clang fp contract(off)
  __int64 v6;
  const char* v7;
  __int128 v8;
  const char* v9;
  __int128 v10;
  const char* v11;
  __int128 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __n128 result;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  const char* v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v6 = fs_609260(a2 + 800, "GmapMapInfo_FuchiColor", 1),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((a3 & 1) != 0) {
    v7 = *(const char**)(v6 + 24);
    if (v7 != nullptr) {
      sscanf(v7, "%f,%f,%f,%f", &v41, &v40, &v39, &v38),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      *(_QWORD*)&v8 = __PAIR64__(v40, v41);
      *((_QWORD*)&v8 + 1) = __PAIR64__(v38, v39);
      *(_OWORD*)(a1 + 144) = v8;
    }
    v9 = *(const char**)(fs_609260(a2 + 800, "GmapMapInfo_RouteColorAll", 1) +
                         24),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v9 != nullptr) {
      sscanf(v9, "%f,%f,%f,%f", &v41, &v40, &v39, &v38),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      *(_QWORD*)&v10 = __PAIR64__(v40, v41);
      *((_QWORD*)&v10 + 1) = __PAIR64__(v38, v39);
      *(_OWORD*)(a1 + 176) = v10;
    }
    v11 =
        *(const char**)(fs_609260(a2 + 800, "GmapMapInfo_RouteColor", 1) + 24),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v11 != nullptr) {
      sscanf(v11, "%f,%f,%f,%f", &v41, &v40, &v39, &v38),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      *(_QWORD*)&v12 = __PAIR64__(v40, v41);
      *((_QWORD*)&v12 + 1) = __PAIR64__(v38, v39);
      *(_OWORD*)(a1 + 192) = v12;
    }
    v13 = *(_QWORD*)(fs_609260(a2 + 800, "GmapMapInfo_FuchiSize", 1) + 24),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v13 != 0) {
      if (*(_BYTE*)v13 == 48 && *(_BYTE*)(v13 + 1) == 120) {
        sscanf((const char*)v13, "%x", a1 + 160),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        sscanf((const char*)v13, "%f", a1 + 160),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    v28 = *(_QWORD*)(fs_609260(a2 + 800, "GmapMapInfo_SpotFuchiSize", 1) + 24),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v28 != 0) {
      if (*(_BYTE*)v28 == 48 && *(_BYTE*)(v28 + 1) == 120) {
        sscanf((const char*)v28, "%x", a1 + 164),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        sscanf((const char*)v28, "%f", a1 + 164),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    v29 = *(_QWORD*)(fs_609260(a2 + 800, "GmapMapInfo_RouteSize", 1) + 24),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v29 != 0) {
      if (*(_BYTE*)v29 == 48 && *(_BYTE*)(v29 + 1) == 120) {
        sscanf((const char*)v29, "%x", a1 + 224),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        sscanf((const char*)v29, "%f", a1 + 224),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    v30 = *(_QWORD*)(fs_609260(a2 + 800, "GmapMapInfo_SpotSize", 1) + 24),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v30 != 0) {
      if (*(_BYTE*)v30 == 48 && *(_BYTE*)(v30 + 1) == 120) {
        sscanf((const char*)v30, "%x", a1 + 228),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        sscanf((const char*)v30, "%f", a1 + 228),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    v31 = *(_QWORD*)(fs_609260(a2 + 800, "GmapMapInfo_SpotTargetSize", 1) + 24),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v31 != 0) {
      if (*(_BYTE*)v31 == 48 && *(_BYTE*)(v31 + 1) == 120) {
        sscanf((const char*)v31, "%x", a1 + 232),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        sscanf((const char*)v31, "%f", a1 + 232),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    v32 = *(_QWORD*)(fs_609260(a2 + 800, "GmapMapInfo_StatusOffsetX", 1) + 24),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v32 != 0) {
      if (*(_BYTE*)v32 == 48 && *(_BYTE*)(v32 + 1) == 120) {
        sscanf((const char*)v32, "%x", a1 + 236),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        sscanf((const char*)v32, "%f", a1 + 236),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    v33 = *(_QWORD*)(fs_609260(a2 + 800, "GmapMapInfo_StatusOffsetY", 1) + 24),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v33 != 0) {
      if (*(_BYTE*)v33 == 48 && *(_BYTE*)(v33 + 1) == 120) {
        sscanf((const char*)v33, "%x", a1 + 240),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        sscanf((const char*)v33, "%f", a1 + 240),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    v34 = *(_QWORD*)(fs_609260(a2 + 800, "GmapMapInfo_StatusLegionScale", 1) +
                     24),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v34 != 0) {
      if (*(_BYTE*)v34 == 48 && *(_BYTE*)(v34 + 1) == 120) {
        sscanf((const char*)v34, "%x", a1 + 244),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        sscanf((const char*)v34, "%f", a1 + 244),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    v35 = *(_QWORD*)(fs_609260(a2 + 800, "GmapMapInfo_SpotOffsetY", 1) + 24),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v35 != 0) {
      if (*(_BYTE*)v35 == 48 && *(_BYTE*)(v35 + 1) == 120) {
        sscanf((const char*)v35, "%x", a1 + 248),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        sscanf((const char*)v35, "%f", a1 + 248),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    v36 = *(_QWORD*)(fs_609260(a2 + 800, "GmapMapInfo_SpotScale", 1) + 24),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v36 != 0) {
      if (*(_BYTE*)v36 == 48 && *(_BYTE*)(v36 + 1) == 120) {
        sscanf((const char*)v36, "%x", a1 + 252),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        sscanf((const char*)v36, "%f", a1 + 252),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    v37 = *(const char**)(fs_609260(a2 + 800, "GmapMapInfo_RouteCarriage", 1) +
                          24),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v37 != nullptr) {
      sscanf(v37, "%f,%f,%f,%f", &v41, &v40, &v39, &v38),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      LANES128(result).n128_u64[0] = __PAIR64__(v40, v41);
      LANES128(result).n128_u64[1] = __PAIR64__(v38, v39);
      *(__n128*)(a1 + 208) = result;
    }
  }
  else {
    GameRoutine_609140(v6, (__int64)"%f,%f,%f,%f",
                       COERCE_FLOAT(*(_OWORD*)(a1 + 144)),
                       COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 144))),
                       COERCE_FLOAT(*(_QWORD*)(a1 + 152)),
                       COERCE_FLOAT(DWORD3(*(_OWORD*)(a1 + 144)))),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v14 = fs_609260(a2 + 800, "GmapMapInfo_RouteColorAll", 1),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_609140(v14, (__int64)"%f,%f,%f,%f",
                       COERCE_FLOAT(*(_OWORD*)(a1 + 176)),
                       COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 176))),
                       COERCE_FLOAT(*(_QWORD*)(a1 + 184)),
                       COERCE_FLOAT(DWORD3(*(_OWORD*)(a1 + 176)))),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v15 = fs_609260(a2 + 800, "GmapMapInfo_RouteColor", 1),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_609140(v15, (__int64)"%f,%f,%f,%f",
                       COERCE_FLOAT(*(_OWORD*)(a1 + 192)),
                       COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 192))),
                       COERCE_FLOAT(*(_QWORD*)(a1 + 200)),
                       COERCE_FLOAT(DWORD3(*(_OWORD*)(a1 + 192)))),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v16 = fs_609260(a2 + 800, "GmapMapInfo_FuchiSize", 1),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_609140(v16, (__int64)"0x%x (%f)", *(_DWORD*)(a1 + 160),
                       *(float*)(a1 + 160)),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v17 = fs_609260(a2 + 800, "GmapMapInfo_SpotFuchiSize", 1),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_609140(v17, (__int64)"0x%x (%f)", *(_DWORD*)(a1 + 164),
                       *(float*)(a1 + 164)),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v18 = fs_609260(a2 + 800, "GmapMapInfo_RouteSize", 1),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_609140(v18, (__int64)"0x%x (%f)", *(_DWORD*)(a1 + 224),
                       *(float*)(a1 + 224)),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v19 = fs_609260(a2 + 800, "GmapMapInfo_SpotSize", 1),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_609140(v19, (__int64)"0x%x (%f)", *(_DWORD*)(a1 + 228),
                       *(float*)(a1 + 228)),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v20 = fs_609260(a2 + 800, "GmapMapInfo_SpotTargetSize", 1),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_609140(v20, (__int64)"0x%x (%f)", *(_DWORD*)(a1 + 232),
                       *(float*)(a1 + 232)),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v21 = fs_609260(a2 + 800, "GmapMapInfo_StatusOffsetX", 1),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_609140(v21, (__int64)"0x%x (%f)", *(_DWORD*)(a1 + 236),
                       *(float*)(a1 + 236)),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v22 = fs_609260(a2 + 800, "GmapMapInfo_StatusOffsetY", 1),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_609140(v22, (__int64)"0x%x (%f)", *(_DWORD*)(a1 + 240),
                       *(float*)(a1 + 240)),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v23 = fs_609260(a2 + 800, "GmapMapInfo_StatusLegionScale", 1),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_609140(v23, (__int64)"0x%x (%f)", *(_DWORD*)(a1 + 244),
                       *(float*)(a1 + 244)),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v24 = fs_609260(a2 + 800, "GmapMapInfo_SpotOffsetY", 1),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_609140(v24, (__int64)"0x%x (%f)", *(_DWORD*)(a1 + 248),
                       *(float*)(a1 + 248)),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v25 = fs_609260(a2 + 800, "GmapMapInfo_SpotScale", 1),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_609140(v25, (__int64)"0x%x (%f)", *(_DWORD*)(a1 + 252),
                       *(float*)(a1 + 252)),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v26 = fs_609260(a2 + 800, "GmapMapInfo_RouteCarriage", 1),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_609140(v26, (__int64)"%f,%f,%f,%f",
                       COERCE_FLOAT(*(_OWORD*)(a1 + 208)),
                       COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 208))),
                       COERCE_FLOAT(*(_QWORD*)(a1 + 216)),
                       COERCE_FLOAT(DWORD3(*(_OWORD*)(a1 + 208)))),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  return result;
}

#pragma GCC visibility pop
