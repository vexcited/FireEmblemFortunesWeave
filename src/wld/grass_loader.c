#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a934d0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fd1508[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
extern __int64* GameData_212e340[2];
__int64 wld_GrassLoader_GrassLoader(__int64 a1, __int64 a2, __int64 a3,
                                    __int64 a4);
_QWORD* GameRoutine_ad69c0(_QWORD*);
_QWORD* GameRoutine_c032b0(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void g3d_ada070(PSEUDO_X8, __int64, unsigned __int64,
                                           __int64);
__int64 ElfFile_631220(__int64*, __int64);
__int64 GameRoutine_a81a70(__int64, unsigned __int64);
__int64 GameRoutine_c14e30(__int64, __int64, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
__int64 wld_map_Layout_Internal_LoadMapModelFile(__int64, __int64,
                                                 unsigned __int64, char);
extern _UNKNOWN GameData_1fd1588;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_c05650();
void __attribute__((noreturn)) GameRoutine_c05670();
__int64 wld_GrassLoader_GrassLoader_lambda0_Invoke_alt1(
    __int64 result,
    __int64* a2) __asm__("wld_GrassLoader_GrassLoader_lambda0_Invoke");
__attribute__((swiftcall)) void g3d_ada070_alt1(PSEUDO_X8, __int64, __int64,
                                                __int64) __asm__("g3d_ada070");
__int64 ElfFile_631220_alt1(__int64*, const char*) __asm__("ElfFile_631220");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameHr_ad69c0(_QWORD*);
void GameRoutine_c032b0_alt1(__int64*, _QWORD*) __asm__("GameRoutine_c032b0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void wld_GrassLoader_GrassLoader_lambda0_Invoke(__int64 a1, __int64* a2);

__int64 wld_GrassLoader_GrassLoader(__int64 a1, __int64 a2, __int64 a3,
                                    __int64 a4)
{
  _QWORD* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  _QWORD v15[4];
  _QWORD* v16;

  *(_QWORD*)a1 = a4;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  v7 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v7[2] = 0;
  v8 = GameData_212e340[0];
  v7[8] = 0;
  *(_QWORD*)(a1 + 64) = v7 + 4;
  *(_QWORD*)(a1 + 72) = v7;
  v16 = v15;
  *v7 = v8 + 2;
  v7[1] = 0;
  v15[0] = GameData_1fd1508;
  v15[1] = a1;
  GameRoutine_a934d0(v15, v7 + 4);
  if (v16 == v15) {
    v9 = 32;
  }
  else {
    if (v16 == nullptr) {
      goto LABEL_6;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v16 + v9))((__int64)v16);
LABEL_6:
  *(_DWORD*)(a1 + 80) = 1;
  v10 = *(_QWORD*)(game_g_frame_clock + 13432);
  v11 = *(_QWORD*)(a1 + 72);
  v13 = *(_QWORD*)(a1 + 64);
  v14 = v11;
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 56) = (*(__int64 (**)(__int64, __int64, __int64, __int64*))(
      *(_QWORD*)v10 + 24LL))(v10, a2, a3, &v13);
  result = v14;
  if (v14 != 0) {
    return std___1___shared_weak_count___release_weak(v14);
  }
  return result;
}

void wld_GrassLoader_GrassLoader_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int* v4;
  int v5;
  int v6;
  __int64 v7;
  int v8;
  unsigned int* v9;
  unsigned __int64 v10;
  __int64* v11;
  __int64 v12;
  const char* v13;
  unsigned __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64* v21;
  _QWORD* v22;
  __int64 v23;
  const char* v24;
  unsigned __int64 v25;
  __int64 v26;
  const char* v27;
  unsigned __int64 v28;
  __int64 v29;
  _QWORD* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  signed __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64* v49;
  __int64 v50;
  const char* v51;
  unsigned __int64 v52;
  int v53;
  unsigned __int64 v54;
  _DWORD* v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  int v62;
  __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  struct {
    __int64 v67;
    __int64 v68;
    char gap16_[16];
    __int64* v69;
  } v67_;
  _QWORD* v70;
  struct {
    __int64 v71;
    _QWORD* v72;
  } v71_;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(*a2 + 592) == 0 ||
      (v4 = (int*)ElfFile_631220_alt1(
           (__int64*)(v2 + 800), "world::data::grass::s_Version")) == nullptr ||
      (v5 = *v4, *v4 < 2)) {
    v6 = 3;
    goto LABEL_5;
  }
  v7 = ElfFile_631220_alt1((__int64*)(v2 + 800), "world::data::grass::s_Data");
  v8 = *(_DWORD*)(v7 + 4);
  v9 = (unsigned int*)v7;
  if (v5 == 2) {
    if (v8 != 0) {
      v10 = 0;
      v11 = (__int64*)fw_memory_g_heap_manager_ptr;
      do {
        v13 = *(const char**)(*((_QWORD*)v9 + 4) + 8 * v10);
        v14 = strlen_alt1(v13);
        v67_.v69 = nullptr;
        g3d_ada070_alt1((void*)((__int64*)&v70), (__int64)v13, v14,
                        (__int64)&v67_.v67);
        v15 = (__int64)v70;
        v71_.v71 = (__int64)v70;
        if (v70 != nullptr) {
          v16 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v11, 32, 16, 0);
          *v16 = &GameData_1fd1588;
          v16[1] = 0;
          v16[2] = 0;
          v16[3] = v15;
        }
        else {
          v16 = nullptr;
        }
        v71_.v72 = v16;
        v70 = nullptr;
        GameRoutine_c032b0_alt1((__int64*)(v3 + 8), &v71_.v71);
        v17 = (__int64)v71_.v72;
        if (v71_.v72 != nullptr &&
            atomic_fetch_add((atomic_ullong* volatile)(v71_.v72 + 1),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak_alt1(v17);
        }
        v18 = v70;
        v70 = nullptr;
        if (v18 != nullptr) {
          GameHr_ad69c0(v18);
          if (*(_QWORD*)(*v11 + 200) != 0) {
            v19 = 128;
          }
          else {
            v19 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v11 + v19, (__int64)v18);
        }
        if (v67_.v69 == &v67_.v67) {
          v12 = 32;
        }
        else {
          if (v67_.v69 == nullptr) {
            goto LABEL_11;
          }
          v12 = 40;
        }
        (*(void (**)(__int64))(*v67_.v69 + v12))((__int64)v67_.v69);
      LABEL_11:
        ++v10;
      } while (v10 < v9[1]);
    }
  }
  else if (v8 != 0) {
    v20 = 0;
    v21 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      v23 = *(_QWORD*)v3;
      v24 = *(const char**)(*((_QWORD*)v9 + 4) + 8 * v20);
      v25 = strlen_alt1(v24);
      wld_map_Layout_Internal_LoadMapModelFile(v23, (__int64)v24, v25, 0);
      v26 = *(_QWORD*)v3;
      v27 = *(const char**)(*((_QWORD*)v9 + 4) + 8 * v20);
      v28 = strlen_alt1(v27);
      v29 = GameRoutine_c14e30(v26, (__int64)v27, v28);
      if (v29 != 0) {
        v30 = *(_QWORD**)(v3 + 16);
        v31 = *(_QWORD*)(v3 + 24);
        if ((unsigned __int64)v30 >= v31) {
          v34 = *(_QWORD*)(v3 + 8);
          v35 = (signed __int64)v30 - v34;
          v36 = ((__int64)v30 - v34) >> 4;
          v37 = v36 + 1;
          if ((unsigned __int64)(v36 + 1) >> 60 != 0) {
            GameRoutine_c05650();
          }
          v38 = v31 - v34;
          if (v38 >> 3 > v37) {
            v37 = v38 >> 3;
          }
          if ((unsigned __int64)v38 >= 0x7FFFFFFFFFFFFFF0LL) {
            v39 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v39 = v37;
          }
          if (v39 >> 60 != 0) {
          LABEL_72:
            GameRoutine_60a210();
          }
          v40 = v29;
          v41 = fw_memory_HeapManager_Allocate_alt1(*v21, 16 * v39, 16, 0);
          v42 = (_QWORD*)(v41 + v35);
          *v42 = *(_QWORD*)(v40 + 8);
          v43 = *(_QWORD*)(v40 + 16);
          v42[1] = v43;
          if (v43 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 8), 1u,
                                      memory_order_relaxed);
            v34 = *(_QWORD*)(v3 + 8);
            v35 = *(_QWORD*)(v3 + 16) - v34;
            v36 = v35 >> 4;
          }
          v44 = (__int64)&v42[-2 * v36];
          v45 = v41 + 16 * v39;
          v22 = v42 + 2;
          memcpy_alt1(v44, v34, v35);
          *(_QWORD*)(v3 + 8) = v44;
          *(_QWORD*)(v3 + 16) = v22;
          *(_QWORD*)(v3 + 24) = v45;
          if (v34 != 0) {
            v46 = 128;
            if (*(_QWORD*)(*v21 + 200) == 0) {
              v46 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v21 + v46, v34);
          }
        }
        else {
          *v30 = *(_QWORD*)(v29 + 8);
          v32 = *(_QWORD*)(v29 + 16);
          v30[1] = v32;
          if (v32 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                                      memory_order_relaxed);
          }
          v22 = v30 + 2;
        }
        *(_QWORD*)(v3 + 16) = v22;
      }
      else {
        v67_.v67 = 0;
        v67_.v68 = 0;
        GameRoutine_c032b0_alt1((__int64*)(v3 + 8), &v67_.v67);
        v33 = v67_.v68;
        if (v67_.v68 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v67_.v68 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
          std___1___shared_weak_count___release_weak_alt1(v33);
        }
      }
      ++v20;
    } while (v20 < v9[1]);
  }
  if (*v9 != 0) {
    v47 = 0;
    v48 = 0;
    v49 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      v51 = *(const char**)(*((_QWORD*)v9 + 3) + v47);
      v52 = strlen_alt1(v51);
      v53 = GameRoutine_a81a70((__int64)v51, v52);
      v55 = *(_DWORD**)(v3 + 40);
      v54 = *(_QWORD*)(v3 + 48);
      if ((unsigned __int64)v55 < v54) {
        *v55 = v53;
        v50 = (__int64)(v55 + 1);
      }
      else {
        v56 = *(_QWORD*)(v3 + 32);
        v57 = (unsigned __int64)v55 - v56;
        v58 = ((__int64)v55 - v56) >> 2;
        v59 = v58 + 1;
        if ((unsigned __int64)(v58 + 1) >> 62 != 0) {
          GameRoutine_c05670();
        }
        v60 = v54 - v56;
        if (v60 >> 1 > v59) {
          v59 = v60 >> 1;
        }
        if ((unsigned __int64)v60 >= 0x7FFFFFFFFFFFFFFCLL) {
          v61 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else {
          v61 = v59;
        }
        if (v61 != 0) {
          if (v61 >> 62 != 0) {
            goto LABEL_72;
          }
          v62 = v53;
          v63 = fw_memory_HeapManager_Allocate_alt1(*v49, 4 * v61, 16, 0);
          v53 = v62;
        }
        else {
          v63 = 0;
        }
        v64 = v63 + 4 * v61;
        v65 = v63 + v57 - 4 * v58;
        *(_DWORD*)(v63 + v57) = v53;
        v50 = v63 + v57 + 4;
        memcpy_alt1(v65, v56, v57);
        *(_QWORD*)(v3 + 32) = v65;
        *(_QWORD*)(v3 + 40) = v50;
        *(_QWORD*)(v3 + 48) = v64;
        if (v56 != 0) {
          v66 = 128;
          if (*(_QWORD*)(*v49 + 200) == 0) {
            v66 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v49 + v66, v56);
        }
      }
      *(_QWORD*)(v3 + 40) = v50;
      ++v48;
      v47 += 96;
    } while (v48 < *v9);
  }
  v6 = 2;
LABEL_5:
  *(_DWORD*)(v3 + 80) = v6;
}

#pragma GCC visibility pop
