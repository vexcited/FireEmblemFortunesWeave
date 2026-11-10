#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_a5cb20(_QWORD* __return_ptr, _QWORD, _QWORD, _QWORD);
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
_QWORD* ObjectBuildCreate_Destructor(__int64 a1);
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
__int64 game_hub_ObjectBuildCreate_CreateObject(__int64 a1);

_QWORD* ObjectBuildCreate_Destructor(__int64 a1)
{
  unsigned __int64 v2;
  bool v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  _QWORD* result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
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
  __int64 v22;
  __int64 v23;

  *(_QWORD*)a1 = game_hub_ObjectBuildCreate_vtable;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
    GameRoutine_a5aca0(&GameData_21fdd90);
    GameRoutine_2b0(GameData_212e358[0], &GameData_21fdd90, &GameData_1f50948);
    __cxa_guard_release(&GameData_21fde98);
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
  result = GameRoutine_a5cb20(&v22, &GameData_21fdd90, v5, v6);
  if (v22 != 0) {
    *(_BYTE*)(v22 + 184) = 0;
  }
  v8 = v23;
  if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v8);
  }
  v9 = *(_QWORD*)(a1 + 8);
  v10 = *(_QWORD*)(a1 + 16);
  if (v9 != v10) {
    v11 = (__int64*)GameData_212c638;
    v12 = *(_QWORD*)GameData_212c638;
    do {
      v13 = *(_QWORD*)(v12 + 32);
      if ((unsigned int)((unsigned __int64)(v13 - *(_QWORD*)(v12 + 24)) >> 3) -
              1 ==
          *(_DWORD*)v9) {
        v14 = *(_QWORD*)(v9 + 8);
        if (*(_BYTE*)(v14 + 288) != 0) {
          *(_BYTE*)(v14 + 288) = 0;
          v14 = *(_QWORD*)(v9 + 8);
          v13 = *(_QWORD*)(v12 + 32);
        }
        result = *(_QWORD**)(*(_QWORD*)(v13 - 8) + 64LL);
        if (result != nullptr) {
          result = (_QWORD*)GameRoutine_c20ea0(result, v14);
          v12 = *v11;
        }
      }
      v9 += 32;
    } while (v9 != v10);
    v9 = *(_QWORD*)(a1 + 8);
  }
  v15 = *(_BYTE*)(a1 + 72);
  *(_QWORD*)(a1 + 16) = v9;
  if ((v15 & 1) != 0) {
    v16 = *(_QWORD*)(a1 + 88);
    if (v16 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
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
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
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
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v20);
  }
  return result;
}

__int64 game_hub_ObjectBuildCreate_CreateObject(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  char v4;
  __int64 v5;
  unsigned __int64 v6;
  char* v7;
  char v8;
  char* v9;
  char* v10;
  signed __int64 v11;
  char* v12;
  signed __int64 v13;
  char* v14;
  char* v15;
  signed __int64 v16;
  char* v17;
  char* v18;
  signed __int64 v19;
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
  char* v31;
  unsigned __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  char* v38;
  unsigned __int64 v39;
  char* v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  unsigned __int64 v48;
  _QWORD* v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  bool v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int128* v58;
  unsigned __int64 v59;
  float32x4_t* v60;
  float32x4_t* v61;
  __int64 v62;
  char v63;
  __int128* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 result;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  char* v81;
  _QWORD v82[2];
  __int64 v83;
  int v84;
  _BYTE v85[32];
  _BYTE* v86;
  __int64 v87;
  __int64* v88;
  __int64 v89;
  char v90;
  char v91;
  __int64 v92;
  float32x4_t v93;
  float32x4_t v94;
  __int64 v95;
  __int64 v96;
  char v97;
  __int64 v98;
  unsigned __int64 v99;
  char* v100;
  __int64 (**v101)();
  __int64 v102;
  __int64 v103;
  __int64 (***v104)();

  game_hub_f2c8c0(a1);
  v2 = *(_QWORD*)(a1 + 56);
  v4 = *(_BYTE*)(v2 + 128);
  v3 = (__int64*)(v2 + 128);
  if ((v4 & 1) != 0) {
    fw_text_String_CopyTerminated(&v98, *(_QWORD*)(*(_QWORD*)(a1 + 56) + 144LL),
                                  *(_QWORD*)(*(_QWORD*)(a1 + 56) + 136LL));
  }
  else {
    v5 = *v3;
    v6 = v3[1];
    v7 = (char*)v3[2];
    v98 = v5;
    v99 = v6;
    v100 = v7;
  }
  v8 = v98;
  v9 = v100;
  if ((v98 & 1) != 0) {
    v10 = v100;
  }
  else {
    v10 = (char*)&v98 + 1;
  }
  if ((v98 & 1) != 0) {
    v11 = v99;
  }
  else {
    v11 = (unsigned __int64)(unsigned __int8)v98 >> 1;
  }
  if (v11 >= 4) {
    v12 = &v10[v11];
    v13 = v11;
    v14 = v10;
    do {
      v15 = (char*)memchr(v14, 79, v13 - 3);
      if (v15 == nullptr) {
        break;
      }
      if (*(_DWORD*)v15 == 1600807503) {
        if (v15 == v10) {
          if (v11 >= 8) {
            v16 = v11;
            v17 = v10;
            do {
              v18 = (char*)memchr(v17, 79, v16 - 7);
              if (v18 == nullptr) {
                break;
              }
              if (*(_QWORD*)v18 == 0x5F6A624F5F6A624FLL) {
                if (v18 != v12 && v18 - v10 != -1) {
                  goto LABEL_43;
                }
                break;
              }
              v17 = v18 + 1;
              v16 = v12 - v17;
            } while (v12 - v17 >= 8);
          }
          v19 = v11 + 4;
          if ((unsigned __int64)v11 > 0x12) {
            if ((v19 | 7) == 0x17) {
              v22 = 26;
            }
            else {
              v22 = (v19 | 7) + 1;
            }
            v21 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, v22, 16, 0);
            v80 = v11 + 4;
            v81 = (char*)v21;
            v79 = v22 | 1;
            v20 = v22 | 1;
          }
          else {
            v20 = 2 * v19;
            v21 = 0;
            v80 = 0;
            v81 = nullptr;
            v79 = (unsigned __int8)(2 * v19);
          }
          if ((v20 & 1) != 0) {
            v23 = (_DWORD*)v21;
          }
          else {
            v23 = (_DWORD*)((char*)&v79 + 1);
          }
          *v23 = 1600807503;
          if ((v20 & 1) != 0) {
            v24 = (char*)(v21 + 4);
          }
          else {
            v24 = (char*)&v79 + 5;
          }
          memmove(v24, v10, v11);
          v24[v11] = 0;
          if ((v8 & 1) != 0 && v9 != nullptr) {
            v25 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v25 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
          }
          v98 = v79;
          v99 = v80;
          v100 = v81;
        }
        break;
      }
      v14 = v15 + 1;
      v13 = v12 - v14;
    } while (v12 - v14 >= 4);
  }
LABEL_43:
  v26 = (__int64*)(a1 + 32);
  if ((__int64*)(a1 + 32) != &v98) {
    if ((*(_BYTE*)v26 & 1) != 0) {
      if ((v98 & 1) != 0) {
        v28 = v100;
      }
      else {
        v28 = (char*)&v98 + 1;
      }
      if ((v98 & 1) != 0) {
        v29 = v99;
      }
      else {
        v29 = (unsigned __int64)(unsigned __int8)v98 >> 1;
      }
      SpineModel_64dde0(v26, v28, v29);
    }
    else if ((v98 & 1) != 0) {
      GameRoutine_64df20(v26, v100, v99);
    }
    else {
      v27 = v99;
      *v26 = v98;
      *(_QWORD*)(a1 + 40) = v27;
      *(_QWORD*)(a1 + 48) = v100;
    }
  }
  v101 = nullptr;
  v102 = 0;
  v103 = 0;
  v30 = *(_QWORD*)(*GameData_212eec0[0] + 88);
  *(_QWORD*)(*GameData_212eec0[0] + 88) = v30 + 1;
  std___1_to_string_1a0abd0((void*)(&v79),
                            *(_QWORD*)(*(_QWORD*)(a1 + 56) + 72LL));
  if ((v79 & 1) != 0) {
    v31 = v81;
  }
  else {
    v31 = (char*)&v79 + 1;
  }
  if ((v79 & 1) != 0) {
    v32 = v80;
  }
  else {
    v32 = (unsigned __int64)(unsigned __int8)v79 >> 1;
  }
  GameRoutine_1a09ce0(&v101, v31, v32);
  if ((v79 & 1) != 0 && v81 != nullptr) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v33);
  }
  v34 = (_QWORD*)(a1 + 72);
  if ((*(_BYTE*)(a1 + 72) & 1) != 0 && *(_QWORD*)(a1 + 88) != 0) {
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v35);
  }
  v36 = v102;
  *v34 = v101;
  *(_QWORD*)(a1 + 80) = v36;
  *(_QWORD*)(a1 + 88) = v103;
  std___1_to_string_1a0abd0((void*)(&v101), v30);
  v37 = (__int64*)GameRoutine_1a0a680(&v101, 0, "::", 2);
  v39 = v37[1];
  v38 = (char*)v37[2];
  v79 = *v37;
  v80 = v39;
  v81 = v38;
  v37[1] = 0;
  v37[2] = 0;
  *v37 = 0;
  if ((v79 & 1) != 0) {
    v40 = v81;
  }
  else {
    v40 = (char*)&v79 + 1;
  }
  if ((v79 & 1) != 0) {
    v41 = v80;
  }
  else {
    v41 = (unsigned __int64)(unsigned __int8)v79 >> 1;
  }
  GameRoutine_1a09ce0(a1 + 72, v40, v41);
  if ((v79 & 1) != 0 && v81 != nullptr) {
    v45 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v45);
  }
  if (((unsigned __int8)v101 & 1) != 0 && v103 != 0) {
    v46 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v46 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v46);
  }
  memset(&v79, 0, 272, v42, v43, v44);
  v47 = GameData_212c540;
  v48 = *((_QWORD*)GameData_212c540 + 1);
  LANES128(v93).n128_u64[0] = *(_QWORD*)GameData_212c540;
  LANES128(v93).n128_u64[1] = v48;
  v94 = v93;
  v49 = GameData_212c548;
  v50 = *((_QWORD*)GameData_212c548 + 1);
  v95 = *(_QWORD*)GameData_212c548;
  v96 = v50;
  v97 = 1;
  if ((v98 & 1) != 0) {
    GameRoutine_64df20(&v79, v100, v99);
  }
  else {
    v79 = v98;
    v80 = v99;
    v81 = v100;
  }
  if (v82 != v34) {
    v51 = *(unsigned __int8*)v34;
    if ((v82[0] & 1) != 0) {
      v53 = (v51 & 1) == 0;
      v54 = v51 >> 1;
      if (v53) {
        v55 = a1 + 73;
      }
      else {
        v55 = *(_QWORD*)(a1 + 88);
      }
      if (v53) {
        v56 = v54;
      }
      else {
        v56 = *(_QWORD*)(a1 + 80);
      }
      SpineModel_64dde0(v82, v55, v56);
    }
    else if ((v51 & 1) != 0) {
      GameRoutine_64df20(v82, *(_QWORD*)(a1 + 88), *(_QWORD*)(a1 + 80));
    }
    else {
      v52 = *(_QWORD*)(a1 + 80);
      v82[0] = *v34;
      v82[1] = v52;
      v83 = *(_QWORD*)(a1 + 88);
    }
  }
  v84 = 1;
  v57 = *(_QWORD*)(a1 + 56);
  if ((*(_BYTE*)(v57 + 976) & 1) != 0) {
    v58 = (__int128*)(v57 + 960);
  }
  else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                 memory_order_acquire) &
            1) != 0) {
    v58 = &GameData_21a6120;
  }
  else {
    v58 = &GameData_21a6120;
    if ((unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
      v76 = v47[1];
      *(_QWORD*)&GameData_21a6120 = *v47;
      *((_QWORD*)&GameData_21a6120 + 1) = v76;
      __cxa_guard_release(&GameData_21a6130);
    }
  }
  v59 = *((_QWORD*)v58 + 1);
  LANES128(v93).n128_u64[0] = *(_QWORD*)v58;
  LANES128(v93).n128_u64[1] = v59;
  v60 = *(float32x4_t**)(a1 + 56);
  if ((LANES128(v60[63]).n128_u8[0] & 1) != 0) {
    v61 = v60 + 62;
  }
  else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                 memory_order_acquire) &
            1) != 0) {
    v61 = (float32x4_t*)&GameData_21a6120;
  }
  else {
    v61 = (float32x4_t*)&GameData_21a6120;
    if ((unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
      v77 = v47[1];
      *(_QWORD*)&GameData_21a6120 = *v47;
      *((_QWORD*)&GameData_21a6120 + 1) = v77;
      __cxa_guard_release(&GameData_21a6130);
    }
  }
  v62 = *(_QWORD*)(a1 + 56);
  v63 = *(_BYTE*)(v62 + 1040);
  v94 = vmulq_f32(*v61, vdupq_n_s32(0x3C8EFA35u));
  if ((v63 & 1) != 0) {
    v64 = (__int128*)(v62 + 1024);
  }
  else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6150,
                                 memory_order_acquire) &
            1) != 0) {
    v64 = &GameData_21a6140;
  }
  else {
    v64 = &GameData_21a6140;
    if ((unsigned int)__cxa_guard_acquire(&GameData_21a6150) != 0) {
      v78 = v49[1];
      *(_QWORD*)&GameData_21a6140 = *v49;
      *((_QWORD*)&GameData_21a6140 + 1) = v78;
      __cxa_guard_release(&GameData_21a6150);
    }
  }
  v65 = *((_QWORD*)v64 + 1);
  v95 = *(_QWORD*)v64;
  v96 = v65;
  v66 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 192LL);
  if ((v90 & 1) == 0) {
    v90 = 1;
  }
  v89 = v66;
  v97 = 0;
  v101 = GameData_1ff3868;
  v102 = a1;
  v104 = &v101;
  GameRoutine_f2d940(&v101, v85);
  if (v104 == &v101) {
    v67 = 4;
  }
  else {
    if (v104 == nullptr) {
      goto LABEL_121;
    }
    v67 = 5;
  }
  (*v104)[v67]();
LABEL_121:
  v68 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL) +
               64LL);
  if (v68 != 0) {
    GameRoutine_c20db0(v68, &v79);
  }
  else if (v88 != nullptr) {
    (*(void (**)(__int64*))(*v88 + 48))(v88);
  }
  if ((v91 & 1) != 0 && v92 != 0) {
    v69 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v69 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v69);
  }
  if (v88 == &v87) {
    v70 = 32;
  }
  else {
    if (v88 == nullptr) {
      goto LABEL_135;
    }
    v70 = 40;
  }
  (*(void (**)(__int64))(*v88 + v70))((__int64)v88);
LABEL_135:
  result = (__int64)v86;
  if (v86 == v85) {
    v72 = 32;
    goto LABEL_139;
  }
  if (v86 != nullptr) {
    v72 = 40;
  LABEL_139:
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v86 + v72))((__int64)v86);
  }
  if ((v82[0] & 1) != 0 && v83 != 0) {
    v73 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v73 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v73);
  }
  if ((v79 & 1) != 0 && v81 != nullptr) {
    v74 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v74 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v74);
  }
  if ((v98 & 1) != 0 && v100 != nullptr) {
    v75 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v75 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v75);
  }
  return result;
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
