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
__int64 wld_GrassLoader_GrassLoader_lambda0_Invoke(__int64 result, __int64* a2);

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

__int64 wld_GrassLoader_GrassLoader_lambda0_Invoke(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  int v5;
  int v6;
  unsigned int* v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  _QWORD* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  _QWORD* v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64* v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  _DWORD* v51;
  __int64 v52;
  char* v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  int v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  struct {
    __int64 v63;
    __int64 v64;
    char gap16_[16];
    __int64* v65;
  } v63_;
  _QWORD* v66;
  struct {
    __int64 v67;
    _QWORD* v68;
  } v67_;

  v2 = *a2;
  v3 = *(_QWORD*)(result + 8);
  if (*(_QWORD*)(*a2 + 592) == 0 ||
      (result = ElfFile_631220((__int64*)(v2 + 800),
                               (__int64)"world::data::grass::s_Version")) ==
          0 ||
      (v4 = *(_DWORD*)result, *(int*)result < 2)) {
    v5 = 3;
    goto LABEL_5;
  }
  result = ElfFile_631220((__int64*)(v2 + 800),
                          (__int64)"world::data::grass::s_Data");
  v6 = *(_DWORD*)(result + 4);
  v7 = (unsigned int*)result;
  if (v4 == 2) {
    if (v6 != 0) {
      v8 = 0;
      v9 = (__int64*)fw_memory_g_heap_manager_ptr;
      do {
        v11 = *(_QWORD*)(*((_QWORD*)v7 + 4) + 8 * v8);
        v12 = strlen(v11);
        v63_.v65 = nullptr;
        g3d_ada070((void*)((__int64*)&v66), v11, v12, (__int64)&v63_.v63);
        v13 = (__int64)v66;
        v67_.v67 = (__int64)v66;
        if (v66 != nullptr) {
          v14 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v9, 32, 16, 0);
          *v14 = &GameData_1fd1588;
          v14[1] = 0;
          v14[2] = 0;
          v14[3] = v13;
        }
        else {
          v14 = nullptr;
        }
        v67_.v68 = v14;
        v66 = nullptr;
        GameRoutine_c032b0((_QWORD*)(v3 + 8), &v67_.v67);
        v15 = v67_.v68;
        if (v67_.v68 != nullptr &&
            atomic_fetch_add((atomic_ullong* volatile)(v67_.v68 + 1),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(_QWORD*))(*v15 + 16LL))(v15);
          std___1___shared_weak_count___release_weak(v15);
        }
        v16 = v66;
        v66 = nullptr;
        if (v16 != nullptr) {
          GameRoutine_ad69c0(v16);
          if (*(_QWORD*)(*v9 + 200) != 0) {
            v17 = 128;
          }
          else {
            v17 = 56;
          }
          nn_mem_StandardAllocator_Free(*v9 + v17);
        }
        result = (__int64)v63_.v65;
        if (v63_.v65 == &v63_.v63) {
          v10 = 32;
        }
        else {
          if (v63_.v65 == nullptr) {
            goto LABEL_11;
          }
          v10 = 40;
        }
        result = (*(__int64 (**)(__int64))(*v63_.v65 + v10))((__int64)v63_.v65);
      LABEL_11:
        ++v8;
      } while (v8 < v7[1]);
    }
  }
  else if (v6 != 0) {
    v18 = 0;
    v19 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      v21 = *(_QWORD*)v3;
      v22 = *(_QWORD*)(*((_QWORD*)v7 + 4) + 8 * v18);
      v23 = strlen(v22);
      wld_map_Layout_Internal_LoadMapModelFile(v21, v22, v23, 0);
      v24 = *(_QWORD*)v3;
      v25 = *(_QWORD*)(*((_QWORD*)v7 + 4) + 8 * v18);
      v26 = strlen(v25);
      result = GameRoutine_c14e30(v24, v25, v26);
      if (result != 0) {
        v27 = *(_QWORD**)(v3 + 16);
        v28 = *(_QWORD*)(v3 + 24);
        if ((unsigned __int64)v27 >= v28) {
          v31 = *(_QWORD*)(v3 + 8);
          v32 = (__int64)v27 - v31;
          v33 = ((__int64)v27 - v31) >> 4;
          v34 = v33 + 1;
          if ((unsigned __int64)(v33 + 1) >> 60 != 0) {
            GameRoutine_c05650();
          }
          v35 = v28 - v31;
          if (v35 >> 3 > v34) {
            v34 = v35 >> 3;
          }
          if ((unsigned __int64)v35 >= 0x7FFFFFFFFFFFFFF0LL) {
            v36 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v36 = v34;
          }
          if (v36 >> 60 != 0) {
          LABEL_72:
            GameRoutine_60a210();
          }
          v37 = result;
          v38 = fw_memory_HeapManager_Allocate_alt1(*v19, 16 * v36, 16, 0);
          v39 = (_QWORD*)(v38 + v32);
          *v39 = *(_QWORD*)(v37 + 8);
          v40 = *(_QWORD*)(v37 + 16);
          v39[1] = v40;
          if (v40 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 8), 1u,
                                      memory_order_relaxed);
            v31 = *(_QWORD*)(v3 + 8);
            v32 = *(_QWORD*)(v3 + 16) - v31;
            v33 = v32 >> 4;
          }
          v41 = &v39[-2 * v33];
          v42 = v38 + 16 * v36;
          v20 = v39 + 2;
          result = memcpy(v41, v31, v32);
          *(_QWORD*)(v3 + 8) = v41;
          *(_QWORD*)(v3 + 16) = v20;
          *(_QWORD*)(v3 + 24) = v42;
          if (v31 != 0) {
            v43 = 128;
            if (*(_QWORD*)(*v19 + 200) == 0) {
              v43 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*v19 + v43);
          }
        }
        else {
          *v27 = *(_QWORD*)(result + 8);
          v29 = *(_QWORD*)(result + 16);
          v27[1] = v29;
          if (v29 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                      memory_order_relaxed);
          }
          v20 = v27 + 2;
        }
        *(_QWORD*)(v3 + 16) = v20;
      }
      else {
        v63_.v63 = 0;
        v63_.v64 = 0;
        result = (__int64)GameRoutine_c032b0((_QWORD*)(v3 + 8), &v63_.v63);
        v30 = v63_.v64;
        if (v63_.v64 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v63_.v64 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
          result = std___1___shared_weak_count___release_weak(v30);
        }
      }
      ++v18;
    } while (v18 < v7[1]);
  }
  if (*v7 != 0) {
    v44 = 0;
    v45 = 0;
    v46 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      v48 = *(_QWORD*)(*((_QWORD*)v7 + 3) + v44);
      v49 = strlen(v48);
      result = GameRoutine_a81a70(v48, v49);
      v51 = *(_DWORD**)(v3 + 40);
      v50 = *(_QWORD*)(v3 + 48);
      if ((unsigned __int64)v51 < v50) {
        *v51 = result;
        v47 = (__int64)(v51 + 1);
      }
      else {
        v52 = *(_QWORD*)(v3 + 32);
        v53 = (char*)v51 - v52;
        v54 = ((__int64)v51 - v52) >> 2;
        v55 = v54 + 1;
        if ((unsigned __int64)(v54 + 1) >> 62 != 0) {
          GameRoutine_c05670();
        }
        v56 = v50 - v52;
        if (v56 >> 1 > v55) {
          v55 = v56 >> 1;
        }
        if ((unsigned __int64)v56 >= 0x7FFFFFFFFFFFFFFCLL) {
          v57 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else {
          v57 = v55;
        }
        if (v57 != 0) {
          if (v57 >> 62 != 0) {
            goto LABEL_72;
          }
          v58 = result;
          v59 = fw_memory_HeapManager_Allocate_alt1(*v46, 4 * v57, 16, 0);
          LODWORD(result) = v58;
        }
        else {
          v59 = 0;
        }
        v60 = v59 + 4 * v57;
        v61 = (__int64)&v53[v59 + -4 * v54];
        *(_DWORD*)&v53[v59] = result;
        v47 = (__int64)&v53[v59 + 4];
        result = memcpy(v61, v52, v53);
        *(_QWORD*)(v3 + 32) = v61;
        *(_QWORD*)(v3 + 40) = v47;
        *(_QWORD*)(v3 + 48) = v60;
        if (v52 != 0) {
          v62 = 128;
          if (*(_QWORD*)(*v46 + 200) == 0) {
            v62 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v46 + v62);
        }
      }
      *(_QWORD*)(v3 + 40) = v47;
      ++v45;
      v44 += 96;
    } while (v45 < *v7);
  }
  v5 = 2;
LABEL_5:
  *(_DWORD*)(v3 + 80) = v5;
  return result;
}

#pragma GCC visibility pop
