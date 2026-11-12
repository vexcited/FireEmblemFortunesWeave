#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_a5cb20(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD);
__int64 GameRoutine_2b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a5aca0(_QWORD);
__int64 GameRoutine_c20ea0(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_21fdd90;
extern _UNKNOWN GameData_21fde98;
extern _UNKNOWN* GameData_1f50948;
extern __int64 (*GameData_212e358[2])();
extern __int64 (*game_hub_ObjectBuildCreate_vtable[])();
extern __int64 GameData_212c638;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212f910[2];
_QWORD* ObjectBuildCreate_Destructor_alt1(__int64 a1) __asm__(
    "ObjectBuildCreate_Destructor");
__int64 GameRoutine_dfa520(_QWORD);
__int64 GameRoutine_f2d770(_QWORD, _QWORD);
bool ObjectBuildCreate_Unknown2(__int64 a1);
__int64 game_hub_ObjectBuildCreate_CreateObject_lambda0_Invoke(__int64 a1,
                                                               __int64* a2);
__attribute__((swiftcall)) void std___1_to_string_1a0abd0(PSEUDO_X8, _QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a680(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c20db0(_QWORD, _QWORD);
__int64 GameRoutine_f2d940(_QWORD, _QWORD);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21a6150;
extern __int128 GameData_21a6120;
extern __int128 GameData_21a6140;
extern __int64 (*GameData_1ff3868[])();
extern __int64* GameData_212eec0[4];
extern __int64 GameData_212dbb8[9];
float32x4_t* game_hub_f2c8c0(__int64);
__int64 game_hub_ObjectBuildCreate_CreateObject_alt1(__int64 a1) __asm__(
    "game_hub_ObjectBuildCreate_CreateObject");
_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");
_QWORD* GameRoutine_f2d940_alt1(_QWORD* result,
                                _QWORD*) __asm__("GameRoutine_f2d940");
__attribute__((swiftcall)) void
GameRoutine_a5cb20_alt1(PSEUDO_X8, __int64, __int64,
                        unsigned __int64) __asm__("GameRoutine_a5cb20");
__int64* SpineModel_64dde0_alt1(__int64*, __int64,
                                unsigned __int64) __asm__("SpineModel_64dde0");
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64
GameRoutine_1a0a680_alt1(__int64, unsigned __int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a0a680");
__int64 GameRoutine_2b0_alt1() __asm__("GameRoutine_2b0");
__int64 GameRoutine_c20db0_alt1(__int64, __int64) __asm__("GameRoutine_c20db0");
__int64 ObjectBuildCreate_c20ea0(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 memchr_alt1(__int64, int, unsigned __int64) __asm__("memchr");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void GameHr_a5aca0(__int64);
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ObjectBuildCreate_Destructor(__int64 a1);
void game_hub_ObjectBuildCreate_CreateObject(__int64 a1);
void game_hub_f2c8c0_alt1(__int64) __asm__("game_hub_f2c8c0");

void ObjectBuildCreate_Destructor(__int64 a1)
{
  unsigned __int64 v2;
  bool v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  struct {
    __int64 v22;
    __int64 v23;
  } v22_;

  *(_QWORD*)a1 = game_hub_ObjectBuildCreate_vtable;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21fde98) != 0) {
    GameHr_a5aca0((__int64)&GameData_21fdd90);
    GameRoutine_2b0_alt1();
    __cxa_guard_release_alt1((__int64)&GameData_21fde98);
  }
  v2 = *(unsigned __int8*)(a1 + 72);
  v3 = (v2 & 1) == 0;
  v4 = v2 >> 1;
  if (v3) {
    v5 = a1 + 73;
  }
  else {
    v5 = *(_QWORD*)(a1 + 88);
  }
  if (v3) {
    v6 = v4;
  }
  else {
    v6 = *(_QWORD*)(a1 + 80);
  }
  GameRoutine_a5cb20_alt1((void*)(&v22_.v22), (__int64)&GameData_21fdd90, v5,
                          v6);
  if (v22_.v22 != 0) {
    *(_BYTE*)(v22_.v22 + 184) = 0;
  }
  v7 = v22_.v23;
  if (v22_.v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22_.v23 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt1(v7);
  }
  v8 = *(_QWORD*)(a1 + 8);
  v9 = *(_QWORD*)(a1 + 16);
  if (v8 != v9) {
    v10 = (__int64*)GameData_212c638;
    v11 = *(_QWORD*)GameData_212c638;
    do {
      v12 = *(_QWORD*)(v11 + 32);
      if ((unsigned int)((unsigned __int64)(v12 - *(_QWORD*)(v11 + 24)) >> 3) -
              1 ==
          *(_DWORD*)v8) {
        v13 = *(_QWORD*)(v8 + 8);
        if (*(_BYTE*)(v13 + 288) != 0) {
          *(_BYTE*)(v13 + 288) = 0;
          v13 = *(_QWORD*)(v8 + 8);
          v12 = *(_QWORD*)(v11 + 32);
        }
        v14 = *(_QWORD*)(*(_QWORD*)(v12 - 8) + 64LL);
        if (v14 != 0) {
          ObjectBuildCreate_c20ea0(v14, v13);
          v11 = *v10;
        }
      }
      v8 += 32;
    } while (v8 != v9);
    v8 = *(_QWORD*)(a1 + 8);
  }
  v15 = *(_BYTE*)(a1 + 72);
  *(_QWORD*)(a1 + 16) = v8;
  if ((v15 & 1) != 0) {
    v16 = *(_QWORD*)(a1 + 88);
    if (v16 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
    }
  }
  *(_QWORD*)a1 = GameData_212f910[0] + 2;
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v18 = *(_QWORD*)(a1 + 48);
    if (v18 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v18);
    }
  }
  v20 = *(_QWORD*)(a1 + 8);
  if (v20 != 0) {
    *(_QWORD*)(a1 + 16) = v20;
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v20);
  }
}

void game_hub_ObjectBuildCreate_CreateObject(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64* v3;
  char v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  char v20;
  __int64 v21;
  __int64 v22;
  _DWORD* v23;
  char* v24;
  __int64 v25;
  __int64* v26;
  unsigned __int64 v27;
  char* v28;
  unsigned __int64 v29;
  __int64 v30;
  const char* v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  __int64 v39;
  unsigned __int64 v40;
  const char* v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  unsigned __int64 v46;
  _QWORD* v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  bool v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int128* v56;
  unsigned __int64 v57;
  float32x4_t* v58;
  float32x4_t* v59;
  __int64 v60;
  char v61;
  __int128* v62;
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
  struct {
    __int64 v76;
    unsigned __int64 v77;
    const char* v78;
  } v76_;
  struct {
    __int64 v79[2];
    __int64 v80;
    int v81;
  } v79_;
  struct {
    _QWORD v82[4];
    _QWORD* v83;
  } v82_;
  struct {
    __int64 v84;
    char gap120_[24];
    __int64* v85;
    char gap152_[8];
    __int64 v86;
    char v87;
    char gap169_[7];
    char v88;
    char gap177_[15];
    __int64 v89;
    char gap200_[8];
    float32x4_t v90;
    float32x4_t v91;
    __int64 v92;
    __int64 v93;
    char v94;
  } v84_;
  struct {
    __int64 v95;
    unsigned __int64 v96;
    const char* v97;
  } v95_;
  struct {
    __int64 (**v98)();
    __int64 v99;
    __int64 v100;
    char gap328_[8];
    __int64 (***v101)();
  } v98_;

  game_hub_f2c8c0_alt1(a1);
  v2 = *(_QWORD*)(a1 + 56);
  v4 = *(_BYTE*)(v2 + 128);
  v3 = (__int64*)(v2 + 128);
  if ((v4 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v95_.v95,
                                       *(_QWORD*)(*(_QWORD*)(a1 + 56) + 144LL),
                                       *(_QWORD*)(*(_QWORD*)(a1 + 56) + 136LL));
  }
  else {
    v5 = *v3;
    v6 = v3[1];
    v7 = v3[2];
    v95_.v95 = v5;
    v95_.v96 = v6;
    v95_.v97 = (const char*)v7;
  }
  v8 = v95_.v95;
  v9 = (__int64)v95_.v97;
  if ((v95_.v95 & 1) != 0) {
    v10 = (char*)v95_.v97;
  }
  else {
    v10 = (char*)&v95_.v95 + 1;
  }
  if ((v95_.v95 & 1) != 0) {
    v11 = v95_.v96;
  }
  else {
    v11 = (unsigned __int64)(unsigned __int8)v95_.v95 >> 1;
  }
  if (v11 >= 4) {
    v12 = &v10[v11];
    v13 = v11;
    v14 = (__int64)v10;
    do {
      v15 = (char*)memchr_alt1(v14, 79, v13 - 3);
      if (v15 == nullptr) {
        break;
      }
      if (*(_DWORD*)v15 == 1600807503) {
        if (v15 == v10) {
          if (v11 >= 8) {
            v16 = v11;
            v17 = (__int64)v10;
            do {
              v18 = (char*)memchr_alt1(v17, 79, v16 - 7);
              if (v18 == nullptr) {
                break;
              }
              if (*(_QWORD*)v18 == 0x5F6A624F5F6A624FLL) {
                if (v18 != v12 && v18 - v10 != -1) {
                  goto LABEL_43;
                }
                break;
              }
              v17 = (__int64)(v18 + 1);
              v16 = (__int64)&v12[-v17];
            } while ((__int64)&v12[-v17] >= 8);
          }
          v19 = v11 + 4;
          if ((unsigned __int64)v11 > 0x12) {
            if ((v19 | 7) == 0x17) {
              v22 = 26;
            }
            else {
              v22 = (v19 | 7) + 1;
            }
            v21 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, v22, 16, 0);
            v76_.v77 = v11 + 4;
            v76_.v78 = (const char*)v21;
            v76_.v76 = v22 | 1;
            v20 = v22 | 1;
          }
          else {
            v20 = 2 * v19;
            v21 = 0;
            v76_.v77 = 0;
            v76_.v78 = nullptr;
            v76_.v76 = (unsigned __int8)(2 * v19);
          }
          if ((v20 & 1) != 0) {
            v23 = (_DWORD*)v21;
          }
          else {
            v23 = (_DWORD*)((char*)&v76_.v76 + 1);
          }
          *v23 = 1600807503;
          if ((v20 & 1) != 0) {
            v24 = (char*)(v21 + 4);
          }
          else {
            v24 = (char*)&v76_.v76 + 5;
          }
          memmove_alt1((__int64)v24, (__int64)v10, v11);
          v24[v11] = 0;
          if ((v8 & 1) != 0 && v9 != 0) {
            v25 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v25 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v9);
          }
          v95_.v95 = v76_.v76;
          v95_.v96 = v76_.v77;
          v95_.v97 = v76_.v78;
        }
        break;
      }
      v14 = (__int64)(v15 + 1);
      v13 = (__int64)&v12[-v14];
    } while ((__int64)&v12[-v14] >= 4);
  }
LABEL_43:
  v26 = (__int64*)(a1 + 32);
  if ((__int64*)(a1 + 32) != &v95_.v95) {
    if ((*(_BYTE*)v26 & 1) != 0) {
      if ((v95_.v95 & 1) != 0) {
        v28 = (char*)v95_.v97;
      }
      else {
        v28 = (char*)&v95_.v95 + 1;
      }
      if ((v95_.v95 & 1) != 0) {
        v29 = v95_.v96;
      }
      else {
        v29 = (unsigned __int64)(unsigned __int8)v95_.v95 >> 1;
      }
      SpineModel_64dde0_alt1(v26, (__int64)v28, v29);
    }
    else if ((v95_.v95 & 1) != 0) {
      GameRoutine_64df20_alt1(v26, (__int64)v95_.v97, v95_.v96);
    }
    else {
      v27 = v95_.v96;
      *v26 = v95_.v95;
      *(_QWORD*)(a1 + 40) = v27;
      *(_QWORD*)(a1 + 48) = v95_.v97;
    }
  }
  v98_.v98 = nullptr;
  v98_.v99 = 0;
  v98_.v100 = 0;
  v30 = *(_QWORD*)(*GameData_212eec0[0] + 88);
  *(_QWORD*)(*GameData_212eec0[0] + 88) = v30 + 1;
  std___1_to_string_1a0abd0((void*)(&v76_.v76),
                            *(_QWORD*)(*(_QWORD*)(a1 + 56) + 72LL));
  if ((v76_.v76 & 1) != 0) {
    v31 = v76_.v78;
  }
  else {
    v31 = (char*)&v76_.v76 + 1;
  }
  if ((v76_.v76 & 1) != 0) {
    v32 = v76_.v77;
  }
  else {
    v32 = (unsigned __int64)(unsigned __int8)v76_.v76 >> 1;
  }
  GameRoutine_1a09ce0_alt1((__int64)&v98_.v98, v31, v32);
  if ((v76_.v76 & 1) != 0 && v76_.v78 != nullptr) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, (__int64)v76_.v78);
  }
  v34 = (__int64*)(a1 + 72);
  if ((*(_BYTE*)(a1 + 72) & 1) != 0) {
    v35 = *(_QWORD*)(a1 + 88);
    if (v35 != 0) {
      v36 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, v35);
    }
  }
  v37 = v98_.v99;
  *v34 = (__int64)v98_.v98;
  *(_QWORD*)(a1 + 80) = v37;
  *(_QWORD*)(a1 + 88) = v98_.v100;
  std___1_to_string_1a0abd0((void*)(&v98_.v98), v30);
  v38 = (__int64*)GameRoutine_1a0a680_alt1((__int64)&v98_.v98, 0, "::", 2u);
  v40 = v38[1];
  v39 = v38[2];
  v76_.v76 = *v38;
  v76_.v77 = v40;
  v76_.v78 = (const char*)v39;
  v38[1] = 0;
  v38[2] = 0;
  *v38 = 0;
  if ((v76_.v76 & 1) != 0) {
    v41 = v76_.v78;
  }
  else {
    v41 = (char*)&v76_.v76 + 1;
  }
  if ((v76_.v76 & 1) != 0) {
    v42 = v76_.v77;
  }
  else {
    v42 = (unsigned __int64)(unsigned __int8)v76_.v76 >> 1;
  }
  GameRoutine_1a09ce0_alt1(a1 + 72, v41, v42);
  if ((v76_.v76 & 1) != 0 && v76_.v78 != nullptr) {
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, (__int64)v76_.v78);
  }
  if (((unsigned __int8)v98_.v98 & 1) != 0 && v98_.v100 != 0) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v98_.v100);
  }
  memset_alt1((__int64)&v76_.v76, 0, 0x110u);
  v45 = GameData_212c540;
  v46 = *((_QWORD*)GameData_212c540 + 1);
  LANES128(v84_.v90).n128_u64[0] = *(_QWORD*)GameData_212c540;
  LANES128(v84_.v90).n128_u64[1] = v46;
  v84_.v91 = v84_.v90;
  v47 = GameData_212c548;
  v48 = *((_QWORD*)GameData_212c548 + 1);
  v84_.v92 = *(_QWORD*)GameData_212c548;
  v84_.v93 = v48;
  v84_.v94 = 1;
  if ((v95_.v95 & 1) != 0) {
    GameRoutine_64df20_alt1(&v76_.v76, (__int64)v95_.v97, v95_.v96);
  }
  else {
    v76_.v76 = v95_.v95;
    v76_.v77 = v95_.v96;
    v76_.v78 = v95_.v97;
  }
  if (v79_.v79 != v34) {
    v49 = *(unsigned __int8*)v34;
    if ((v79_.v79[0] & 1) != 0) {
      v51 = (v49 & 1) == 0;
      v52 = v49 >> 1;
      if (v51) {
        v53 = a1 + 73;
      }
      else {
        v53 = *(_QWORD*)(a1 + 88);
      }
      if (v51) {
        v54 = v52;
      }
      else {
        v54 = *(_QWORD*)(a1 + 80);
      }
      SpineModel_64dde0_alt1(v79_.v79, v53, v54);
    }
    else if ((v49 & 1) != 0) {
      GameRoutine_64df20_alt1(v79_.v79, *(_QWORD*)(a1 + 88),
                              *(_QWORD*)(a1 + 80));
    }
    else {
      v50 = *(_QWORD*)(a1 + 80);
      v79_.v79[0] = *v34;
      v79_.v79[1] = v50;
      v79_.v80 = *(_QWORD*)(a1 + 88);
    }
  }
  v79_.v81 = 1;
  v55 = *(_QWORD*)(a1 + 56);
  if ((*(_BYTE*)(v55 + 976) & 1) != 0) {
    v56 = (__int128*)(v55 + 960);
  }
  else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                 memory_order_acquire) &
            1) != 0) {
    v56 = &GameData_21a6120;
  }
  else {
    v56 = &GameData_21a6120;
    if (__cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
      v73 = v45[1];
      *(_QWORD*)&GameData_21a6120 = *v45;
      *((_QWORD*)&GameData_21a6120 + 1) = v73;
      __cxa_guard_release_alt1((__int64)&GameData_21a6130);
    }
  }
  v57 = *((_QWORD*)v56 + 1);
  LANES128(v84_.v90).n128_u64[0] = *(_QWORD*)v56;
  LANES128(v84_.v90).n128_u64[1] = v57;
  v58 = *(float32x4_t**)(a1 + 56);
  if ((LANES128(v58[63]).n128_u8[0] & 1) != 0) {
    v59 = v58 + 62;
  }
  else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                 memory_order_acquire) &
            1) != 0) {
    v59 = (float32x4_t*)&GameData_21a6120;
  }
  else {
    v59 = (float32x4_t*)&GameData_21a6120;
    if (__cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
      v74 = v45[1];
      *(_QWORD*)&GameData_21a6120 = *v45;
      *((_QWORD*)&GameData_21a6120 + 1) = v74;
      __cxa_guard_release_alt1((__int64)&GameData_21a6130);
    }
  }
  v60 = *(_QWORD*)(a1 + 56);
  v61 = *(_BYTE*)(v60 + 1040);
  v84_.v91 = vmulq_f32(*v59, vdupq_n_s32(0x3C8EFA35u));
  if ((v61 & 1) != 0) {
    v62 = (__int128*)(v60 + 1024);
  }
  else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6150,
                                 memory_order_acquire) &
            1) != 0) {
    v62 = &GameData_21a6140;
  }
  else {
    v62 = &GameData_21a6140;
    if (__cxa_guard_acquire_alt1((__int64)&GameData_21a6150) != 0) {
      v75 = v47[1];
      *(_QWORD*)&GameData_21a6140 = *v47;
      *((_QWORD*)&GameData_21a6140 + 1) = v75;
      __cxa_guard_release_alt1((__int64)&GameData_21a6150);
    }
  }
  v63 = *((_QWORD*)v62 + 1);
  v84_.v92 = *(_QWORD*)v62;
  v84_.v93 = v63;
  v64 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 192LL);
  if ((v84_.v87 & 1) == 0) {
    v84_.v87 = 1;
  }
  v84_.v86 = v64;
  v84_.v94 = 0;
  v98_.v98 = GameData_1ff3868;
  v98_.v99 = a1;
  v98_.v101 = &v98_.v98;
  GameRoutine_f2d940_alt1(&v98_.v98, v82_.v82);
  if (v98_.v101 == &v98_.v98) {
    v65 = 4;
  }
  else {
    if (v98_.v101 == nullptr) {
      goto LABEL_121;
    }
    v65 = 5;
  }
  ((__int64 (*)(__int64))(*v98_.v101)[v65])((__int64)v98_.v101);
LABEL_121:
  v66 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL) +
               64LL);
  if (v66 != 0) {
    GameRoutine_c20db0_alt1(v66, (__int64)&v76_.v76);
  }
  else if (v84_.v85 != nullptr) {
    (*(void (**)(__int64*))(*v84_.v85 + 48))(v84_.v85);
  }
  if ((v84_.v88 & 1) != 0 && v84_.v89 != 0) {
    v67 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v67 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v67, v84_.v89);
  }
  if (v84_.v85 == &v84_.v84) {
    v68 = 32;
  }
  else {
    if (v84_.v85 == nullptr) {
      goto LABEL_135;
    }
    v68 = 40;
  }
  (*(void (**)(__int64))(*v84_.v85 + v68))((__int64)v84_.v85);
LABEL_135:
  if (v82_.v83 == v82_.v82) {
    v69 = 32;
    goto LABEL_139;
  }
  if (v82_.v83 != nullptr) {
    v69 = 40;
  LABEL_139:
    (*(void (**)(__int64))(*v82_.v83 + v69))((__int64)v82_.v83);
  }
  if ((v79_.v79[0] & 1) != 0 && v79_.v80 != 0) {
    v70 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v70 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v70, v79_.v80);
  }
  if ((v76_.v76 & 1) != 0 && v76_.v78 != nullptr) {
    v71 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v71 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v71, (__int64)v76_.v78);
  }
  if ((v95_.v95 & 1) != 0 && v95_.v97 != nullptr) {
    v72 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v72 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v72, (__int64)v95_.v97);
  }
}

bool ObjectBuildCreate_Unknown2(__int64 a1)
{
  return *(_QWORD*)(a1 + 16) != *(_QWORD*)(a1 + 8);
}

__int64 game_hub_ObjectBuildCreate_CreateObject_lambda0_Invoke(__int64 a1,
                                                               __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = a2[1];
  if (*a2 != v4) {
    do {
      GameRoutine_f2d770(v2 + 8, v3);
      v3 += 8;
    } while (v3 != v4);
  }
  v5 = *(_QWORD*)(v2 + 56);
  *(_BYTE*)(v5 + 945) = 0;
  return GameRoutine_dfa520(v5);
}

#pragma GCC visibility pop
