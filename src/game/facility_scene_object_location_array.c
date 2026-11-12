#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* SceneManager_138bf00(_QWORD* result, unsigned __int8*);
__attribute__((swiftcall)) void
SceneEffectManager_1950ce0(PSEUDO_X8, __int64, __int64, unsigned int);
__attribute__((swiftcall)) void game_13d2c60(PSEUDO_X8, unsigned __int16*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak();
bool SceneManager_138dac0(_QWORD*, unsigned __int8*, __int64, __int64);
extern __int64 (*GameData_20357b8[])();
extern __int64 GameData_21f4000;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_13d2960();
void __attribute__((noreturn)) String_60a1d0();
void game_FacilitySceneObjectLocationArray_Locate(__int64 a1);
__n128 game_FacilitySceneObjectLocationArray_Locate_lambda0_Invoke_alt1(
    __int64 a1, __int64* a2) __asm__("game_FacilitySceneObjectLocationArray_"
                                     "Locate_lambda0_Invoke");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_FacilitySceneObjectLocationArray_Locate_lambda0_Invoke(__int64 a1,
                                                                 __int64* a2);

void game_FacilitySceneObjectLocationArray_Locate(__int64 a1)
{
  __int64* v1;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  const char* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  char v20;
  __int64 v21;
  __int128* v22;
  __int64 v23;
  __int64* v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  const char* v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  struct {
    __int128 v38;
    char* v39;
  } v38_;
  struct {
    _QWORD v40[4];
    __int128* v41;
  } v40_;
  struct {
    __int128 v42;
    char* v43;
    char gap120_[8];
    __int128* v44;
  } v42_;
  struct {
    __int64 v45;
    unsigned __int64 v46;
    char* v47;
  } v45_;

  if (GameData_21f4000 != 0) {
    v1 = *(__int64**)(a1 + 40);
    v3 = *v1;
    v4 = v1[1] - *v1;
    if ((int)((unsigned __int64)v4 >> 3) >= 1) {
      v5 = 0;
      do {
        if (v5 >= v4 >> 3) {
        LABEL_82:
          GameRoutine_13d2960();
        }
        v6 = *(_QWORD*)(v3 + 8 * v5);
        if (v6 != 0) {
          v7 = *(__int64**)(v6 + 24);
          v8 = (_QWORD*)GameData_21f4000;
          if ((*(_BYTE*)v7 & 1) != 0) {
            fw_text_String_CopyTerminated((__int64*)&v38_.v38, v7[2], v7[1]);
          }
          else {
            v9 = *v7;
            v10 = v7[1];
            v11 = v7[2];
            *((_QWORD*)&v38_.v38 + 1) = v10;
            v38_.v39 = (char*)v11;
            *(_QWORD*)&v38_.v38 = v9;
          }
          SceneManager_138bf00(v8, (unsigned __int8*)&v38_.v38);
          if ((v38_.v38 & 1) != 0 && v38_.v39 != nullptr) {
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
              v12 = 128;
            }
            else {
              v12 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v12,
                                               (__int64)v38_.v39);
          }
          v1 = *(__int64**)(a1 + 40);
          v3 = *v1;
        }
        ++v5;
        v4 = v1[1] - v3;
      } while ((__int64)v5 < (int)((unsigned __int64)v4 >> 3));
      if ((int)((unsigned __int64)v4 >> 3) >= 1) {
        v13 = 0;
        while (1) {
          if (v13 >= v4 >> 3) {
            goto LABEL_82;
          }
          v14 = *(_QWORD*)(v3 + 8 * v13);
          if (v14 != 0) {
            break;
          }
        LABEL_20:
          ++v13;
          v4 = v1[1] - v3;
          if ((__int64)v13 >= (int)((unsigned __int64)v4 >> 3)) {
            return;
          }
        }
        v40_.v41 = nullptr;
        BYTE11(v38_.v38) = 0;
        LOBYTE(v38_.v38) = 20;
        *(_WORD*)((char*)&v38_.v38 + 9) = 17503;
        *(_QWORD*)((char*)&v38_.v38 + 1) = 0x335FAC9CE6BA9FE5LL;
        if (*(_QWORD*)(v14 + 48) != 0) {
          v15 = *(const char**)(v14 + 48);
        }
        else {
          v15 = &GameData_1a9f09e;
        }
        v16 = strlen_alt1(v15);
        if (v16 >= 0xFFFFFFFFFFFFFFF7LL) {
        LABEL_83:
          String_60a1d0();
        }
        v17 = v16;
        if (v16 >= 0x17) {
          if ((v16 | 7) == 0x17) {
            v19 = 26;
          }
          else {
            v19 = (v16 | 7) + 1;
          }
          v18 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v19, 16, 0);
          *((_QWORD*)&v42_.v42 + 1) = v17;
          v42_.v43 = v18;
          *(_QWORD*)&v42_.v42 = v19 | 1;
        }
        else {
          v18 = (char*)&v42_.v42 + 1;
          LOBYTE(v42_.v42) = 2 * v16;
          if (v16 == 0) {
            goto LABEL_35;
          }
        }
        memmove_alt1((__int64)v18, (__int64)v15, v17);
      LABEL_35:
        v20 = v38_.v38;
        v18[v17] = 0;
        if ((v20 & 1) != 0 && v38_.v39 != nullptr) {
          v21 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v21 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, (__int64)v38_.v39);
        }
        v38_.v38 = v42_.v42;
        v38_.v39 = v42_.v43;
        if (*(_WORD*)(v14 + 56) != 0) {
          v22 = v40_.v41;
          *(_QWORD*)&v42_.v42 = GameData_20357b8;
          *((_QWORD*)&v42_.v42 + 1) = v14;
          if (v40_.v41 == (__int128*)v40_.v40) {
            v45_.v45 = (__int64)GameData_20357b8;
            v45_.v46 = v14;
            v42_.v44 = nullptr;
            (*(void (**)(__int128*, __int128*))(*(_QWORD*)v40_.v41 + 24LL))(
                v40_.v41, &v42_.v42);
            (*(void (**)(__int128*))(*(_QWORD*)v40_.v41 + 32LL))(v40_.v41);
            v40_.v41 = nullptr;
            v42_.v44 = &v42_.v42;
            (*(void (**)(__int64*, _QWORD*))(v45_.v45 + 24))(&v45_.v45,
                                                             v40_.v40);
            (*(void (**)(__int64*))(v45_.v45 + 32))(&v45_.v45);
            v22 = v42_.v44;
          }
          else {
            v40_.v40[0] = GameData_20357b8;
            v40_.v40[1] = v14;
            v42_.v44 = v40_.v41;
          }
          v40_.v41 = (__int128*)v40_.v40;
          if (v22 == &v42_.v42) {
            v23 = 32;
          }
          else {
            if (v22 == nullptr) {
              goto LABEL_49;
            }
            v23 = 40;
          }
          (*(void (**)(__int64))(*(_QWORD*)v22 + v23))((__int64)v22);
        }
      LABEL_49:
        v24 = *(__int64**)(v14 + 24);
        v25 = (_QWORD*)GameData_21f4000;
        if ((*(_BYTE*)v24 & 1) != 0) {
          fw_text_String_CopyTerminated((__int64*)&v42_.v42, v24[2], v24[1]);
        }
        else {
          v26 = *v24;
          v27 = v24[1];
          v28 = v24[2];
          *((_QWORD*)&v42_.v42 + 1) = v27;
          v42_.v43 = (char*)v28;
          *(_QWORD*)&v42_.v42 = v26;
        }
        v29 = *(const char**)(*(_QWORD*)(v14 + 40) + 8LL);
        v30 = strlen_alt1(v29);
        if (v30 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_83;
        }
        v31 = v30;
        if (v30 >= 0x17) {
          if ((v30 | 7) == 0x17) {
            v33 = 26;
          }
          else {
            v33 = (v30 | 7) + 1;
          }
          v32 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v33, 16, 0);
          v45_.v46 = v31;
          v45_.v47 = v32;
          v45_.v45 = v33 | 1;
        }
        else {
          v32 = (char*)&v45_.v45 + 1;
          LOBYTE(v45_.v45) = 2 * v30;
          if (v30 == 0) {
            goto LABEL_61;
          }
        }
        memmove_alt1((__int64)v32, (__int64)v29, v31);
      LABEL_61:
        v32[v31] = 0;
        SceneManager_138dac0(v25, (unsigned __int8*)&v42_.v42,
                             (__int64)&v45_.v45, (__int64)&v38_.v38);
        if ((v45_.v45 & 1) != 0 && v45_.v47 != nullptr) {
          v34 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v34 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, (__int64)v45_.v47);
        }
        if ((v42_.v42 & 1) != 0 && v42_.v43 != nullptr) {
          v35 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v35 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, (__int64)v42_.v43);
        }
        if (v40_.v41 == (__int128*)v40_.v40) {
          v36 = 32;
        }
        else {
          if (v40_.v41 == nullptr) {
            goto LABEL_76;
          }
          v36 = 40;
        }
        (*(void (**)(__int64))(*(_QWORD*)v40_.v41 + v36))((__int64)v40_.v41);
      LABEL_76:
        if ((v38_.v38 & 1) != 0 && v38_.v39 != nullptr) {
          v37 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v37 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, (__int64)v38_.v39);
        }
        v1 = *(__int64**)(a1 + 40);
        v3 = *v1;
        goto LABEL_20;
      }
    }
  }
}

void game_FacilitySceneObjectLocationArray_Locate_lambda0_Invoke(__int64 a1,
                                                                 __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  const char* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    _QWORD v15[2];
    char* v16;
  } v15_;
  struct {
    __int64 v17;
    __int64 v18;
  } v17_;
  struct {
    __int64 v19;
    __int64 v20;
  } v19_;

  v2 = *a2;
  game_13d2c60((void*)(&v19_.v19),
               (unsigned __int16*)(*(_QWORD*)(a1 + 8) + 56LL));
  v3 = v19_.v19;
  v4 = v19_.v20;
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v19_.v19 != v19_.v20) {
    while (1) {
      v6 = *(const char**)(*(_QWORD*)v3 + 8LL);
      v7 = strlen_alt1(v6);
      if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      v8 = v7;
      if (v7 >= 0x17) {
        if ((v7 | 7) == 0x17) {
          v10 = 26;
        }
        else {
          v10 = (v7 | 7) + 1;
        }
        v9 = (char*)fw_memory_HeapManager_Allocate(*v5, v10, 16, 0);
        v15_.v15[1] = v8;
        v15_.v16 = v9;
        v15_.v15[0] = v10 | 1;
      }
      else {
        v9 = (char*)v15_.v15 + 1;
        LOBYTE(v15_.v15[0]) = 2 * v7;
        if (v7 == 0) {
          goto LABEL_13;
        }
      }
      memmove_alt1((__int64)v9, (__int64)v6, v8);
    LABEL_13:
      v9[v8] = 0;
      SceneEffectManager_1950ce0((void*)(&v17_.v17), (__int64)v15_.v15, v2, 2u);
      v11 = v17_.v18;
      if (v17_.v18 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v17_.v18 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak_alt1(v11);
        if ((v15_.v15[0] & 1) != 0) {
        LABEL_16:
          if (v15_.v16 != nullptr) {
            v12 = 128;
            if (*(_QWORD*)(*v5 + 200) == 0) {
              v12 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v5 + v12, (__int64)v15_.v16);
          }
        }
      }
      else if ((v15_.v15[0] & 1) != 0) {
        goto LABEL_16;
      }
      v3 += 8;
      if (v3 == v4) {
        v3 = v19_.v19;
        break;
      }
    }
  }
  if (v3 != 0) {
    v13 = *v5;
    v19_.v20 = v3;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v13 + v14, v3);
  }
}

#pragma GCC visibility pop
