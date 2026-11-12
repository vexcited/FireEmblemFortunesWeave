#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void game_ec1260(PSEUDO_X8, __int64);
__int64* GameHr_1005520(_QWORD*, __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
bool game_HasSkill(_QWORD*, _DWORD*);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN GameData_1ae6c42;
extern __int64 GameData_21f4cc0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_cmdbtl_1005280(_QWORD* a1);

void game_cmdbtl_1005280(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v6;
  float v7;
  _QWORD* v8;
  _QWORD* v9;
  _DWORD* v10;
  float v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  __int64* v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64* v25;
  int v26;
  int v27;
  __int64 v28;
  struct {
    __int64* v29;
    __int64* v30;
  } v29_;
  int v31;

  if (a1[2] != a1[1]) {
    v29_.v30 = (__int64*)&GameData_1ae6c42;
    v29_.v29 = (__int64*)game_HashString((__int64)&GameData_1ae6c42);
    if (game_GameModeData_instance_ != 0 &&
        (v6 = game_GameVariableTable_Find(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)&v29_.v29)) != 0) {
      v7 = (float)(*(_DWORD*)(v6 + 32) - 100);
    }
    else {
      v7 = -0x1.9000000000000p+6f;
    }
    game_ec1260((void*)((__int64*)&v29_.v29), GameData_21f4cc0);
    v8 = (_QWORD*)a1[1];
    v9 = (_QWORD*)a1[2];
    if (v8 != v9) {
      v10 = (_DWORD*)game_g_shared_system_skills_ptr;
      v11 = v7 / 0x1.9000000000000p+6f;
      do {
        v12 = v8[1];
        if (v12 != 0) {
          v13 = std___1___shared_weak_count_lock(v12);
          if (v13 != 0) {
            v14 = v13;
            if (*v8 != 0) {
              v15 = *(_QWORD*)(*v8 + 16LL);
              v31 = *v10 & 0xFFF;
              if (game_HasSkill((_QWORD*)(v15 + 1744), &v31) &&
                  ((v16 = *(_QWORD*)(v15 + 440)) == 0
                       ? (v17 = 9)
                       : (v17 = *(_BYTE*)(v16 + 16)),
                   ((1 << v17) & 0xF1) != 0)) {
                v18 = v29_.v29;
                v19 = v29_.v30;
                while (v18 != v19) {
                  v20 = GameHr_1005520(a1, *v18);
                  if (v20 != nullptr) {
                    *((_DWORD*)v20 + 3) +=
                        vcvtps_s32_f32((float)(v11 * (float)*((int*)v20 + 2)) /
                                       0x1.4000000000000p+2f);
                  }
                  ++v18;
                }
              }
              else {
                v21 = v8[1];
                if (v21 != 0 &&
                    (v22 = std___1___shared_weak_count_lock(v21)) != 0) {
                  v23 = v22;
                  v24 = GameHr_1005520(a1, *(_QWORD*)(*v8 + 16LL));
                  if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v25 = v24;
                    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
                    std___1___shared_weak_count___release_weak(v23);
                    v24 = v25;
                  }
                }
                else {
                  v24 = GameHr_1005520(a1, 0);
                }
                if (v24 != nullptr) {
                  v26 = *((_DWORD*)v24 + 2);
                  v27 = *((_DWORD*)v24 + 3);
                  *((_BYTE*)v24 + 17) = 1;
                  *((_DWORD*)v24 + 3) = v27 + vcvtps_s32_f32(v11 * (float)v26);
                }
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
              std___1___shared_weak_count___release_weak(v14);
            }
          }
        }
        v8 += 2;
      } while (v8 != v9);
    }
    if (v29_.v29 != nullptr) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, (__int64)v29_.v29);
    }
  }
}

#pragma GCC visibility pop
