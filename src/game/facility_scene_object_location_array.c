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
__n128 game_FacilitySceneObjectLocationArray_Locate_lambda0_Invoke(__int64 a1,
                                                                   __int64* a2);

void game_FacilitySceneObjectLocationArray_Locate(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v1;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  char* v15;
  unsigned __int64 v16;
  long double v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  char v21;
  __int64 v22;
  __int128* v23;
  __int64 v24;
  __int64* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  char* v33;
  __int64 v34;
  __n128 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  struct {
    __int128 v40;
    char* v41;
  } v40_;
  struct {
    _QWORD v42[4];
    __int128* v43;
  } v42_;
  struct {
    __int128 v44;
    char* v45;
    char gap120_[8];
    __int128* v46;
  } v44_;
  struct {
    __int64 v47;
    unsigned __int64 v48;
    char* v49;
  } v47_;

  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (GameData_21f4000 != 0) {
    v1 = *(__int64**)(a1 + 40);
    v3 = *v1;
    v4 = v1[1] - *v1;
    if ((int)((unsigned __int64)v4 >> 3) >= 1) {
      v5 = 0;
      do {
        if (v5 >= v4 >> 3) {
        LABEL_82:
          GameRoutine_13d2960(),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v6 = *(_QWORD*)(v3 + 8 * v5);
        if (v6 != 0) {
          v7 = *(__int64**)(v6 + 24);
          v8 = (_QWORD*)GameData_21f4000;
          if ((*(_BYTE*)v7 & 1) != 0) {
            fw_text_String_CopyTerminated((__int64*)&v40_.v40, v7[2], v7[1]),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          else {
            v9 = *v7;
            v10 = v7[1];
            v11 = (char*)v7[2];
            *((_QWORD*)&v40_.v40 + 1) = v10;
            v40_.v41 = v11;
            *(_QWORD*)&v40_.v40 = v9;
          }
          SceneManager_138bf00(v8, (unsigned __int8*)&v40_.v40),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          if ((v40_.v40 & 1) != 0 && v40_.v41 != nullptr) {
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
              v12 = 128;
            }
            else {
              v12 = 56;
            }
            nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v12),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
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
        v42_.v43 = nullptr;
        BYTE11(v40_.v40) = 0;
        LOBYTE(v40_.v40) = 20;
        *(_WORD*)((char*)&v40_.v40 + 9) = 17503;
        *(_QWORD*)((char*)&v40_.v40 + 1) = 0x335FAC9CE6BA9FE5LL;
        if (*(_QWORD*)(v14 + 48) != 0) {
          v15 = *(char**)(v14 + 48);
        }
        else {
          v15 = &GameData_1a9f09e;
        }
        v16 = strlen(v15),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v16 >= 0xFFFFFFFFFFFFFFF7LL) {
        LABEL_83:
          String_60a1d0(), v17 = COERCE_AS(__typeof__(v17),
                                           PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v18 = v16;
        if (v16 >= 0x17) {
          if ((v16 | 7) == 0x17) {
            v20 = 26;
          }
          else {
            v20 = (v16 | 7) + 1;
          }
          v19 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v20, 16, 0),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w"));
          *((_QWORD*)&v44_.v44 + 1) = v18;
          v44_.v45 = v19;
          *(_QWORD*)&v44_.v44 = v20 | 1;
        }
        else {
          v19 = (char*)&v44_.v44 + 1;
          LOBYTE(v44_.v44) = 2 * v16;
          if (v16 == 0) {
            goto LABEL_35;
          }
        }
        memmove(v19, v15, v18),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w"));
      LABEL_35:
        v21 = v40_.v40;
        v19[v18] = 0;
        if ((v21 & 1) != 0 && v40_.v41 != nullptr) {
          v22 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v22 = 56;
          }
          *(__n128*)&v17 = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v22),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v40_.v40 = v44_.v44;
        v40_.v41 = v44_.v45;
        if (*(_WORD*)(v14 + 56) != 0) {
          v23 = v42_.v43;
          *(_QWORD*)&v44_.v44 = GameData_20357b8;
          *((_QWORD*)&v44_.v44 + 1) = v14;
          if (v42_.v43 == (__int128*)v42_.v42) {
            v47_.v47 = (__int64)GameData_20357b8;
            v47_.v48 = v14;
            v44_.v46 = nullptr;
            (*(void (**)(__int128*, __int128*, long double))(
                *(_QWORD*)v42_.v43 + 24LL))(v42_.v43, &v44_.v44, v17),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            (*(void (**)(__int128*))(*(_QWORD*)v42_.v43 + 32LL))(v42_.v43),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            v42_.v43 = nullptr;
            v44_.v46 = &v44_.v44;
            (*(void (**)(__int64*, _QWORD*))(v47_.v47 + 24))(&v47_.v47,
                                                             v42_.v42),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            (*(void (**)(__int64*))(v47_.v47 + 32))(&v47_.v47),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            v23 = v44_.v46;
          }
          else {
            v42_.v42[0] = GameData_20357b8;
            v42_.v42[1] = v14;
            v44_.v46 = v42_.v43;
          }
          v42_.v43 = (__int128*)v42_.v42;
          if (v23 == &v44_.v44) {
            v24 = 32;
          }
          else {
            if (v23 == nullptr) {
              goto LABEL_49;
            }
            v24 = 40;
          }
          (*(void (**)(void*))(*(_QWORD*)v23 + v24))((void*)v23),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      LABEL_49:
        v25 = *(__int64**)(v14 + 24);
        v26 = (_QWORD*)GameData_21f4000;
        if ((*(_BYTE*)v25 & 1) != 0) {
          fw_text_String_CopyTerminated((__int64*)&v44_.v44, v25[2], v25[1]),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          v27 = *v25;
          v28 = v25[1];
          v29 = (char*)v25[2];
          *((_QWORD*)&v44_.v44 + 1) = v28;
          v44_.v45 = v29;
          *(_QWORD*)&v44_.v44 = v27;
        }
        v30 = *(_QWORD*)(*(_QWORD*)(v14 + 40) + 8LL);
        v31 = strlen(v30),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v31 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_83;
        }
        v32 = v31;
        if (v31 >= 0x17) {
          if ((v31 | 7) == 0x17) {
            v34 = 26;
          }
          else {
            v34 = (v31 | 7) + 1;
          }
          v33 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v34, 16, 0),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w"));
          v47_.v48 = v32;
          v47_.v49 = v33;
          v47_.v47 = v34 | 1;
        }
        else {
          v33 = (char*)&v47_.v47 + 1;
          LOBYTE(v47_.v47) = 2 * v31;
          if (v31 == 0) {
            goto LABEL_61;
          }
        }
        memmove(v33, v30, v32),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w"));
      LABEL_61:
        v33[v32] = 0;
        SceneManager_138dac0(v26, (unsigned __int8*)&v44_.v44,
                             (__int64)&v47_.v47, (__int64)&v40_.v40),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if ((v47_.v47 & 1) != 0 && v47_.v49 != nullptr) {
          v36 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v36 = 56;
          }
          v35 = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v36),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        if ((v44_.v44 & 1) != 0 && v44_.v45 != nullptr) {
          v37 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v37 = 56;
          }
          v35 = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v37),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        if (v42_.v43 == (__int128*)v42_.v42) {
          v38 = 32;
        }
        else {
          if (v42_.v43 == nullptr) {
            goto LABEL_76;
          }
          v38 = 40;
        }
        (*(void (**)(void*))(*(_QWORD*)v42_.v43 + v38))((void*)v42_.v43),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w"));
      LABEL_76:
        if ((v40_.v40 & 1) != 0 && v40_.v41 != nullptr) {
          v39 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v39 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v39),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v1 = *(__int64**)(a1 + 40);
        v3 = *v1;
        goto LABEL_20;
      }
    }
  }
}

__n128 game_FacilitySceneObjectLocationArray_Locate_lambda0_Invoke(__int64 a1,
                                                                   __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __n128 result;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    _QWORD v16[2];
    char* v17;
  } v16_;
  struct {
    __int64* v18;
    __int64 v19;
  } v18_;
  struct {
    __int64 v20;
    __int64 v21;
  } v20_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = *a2;
  game_13d2c60((void*)(&v20_.v20),
               (unsigned __int16*)(*(_QWORD*)(a1 + 8) + 56LL)),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = v20_.v20;
  v5 = v20_.v21;
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v20_.v20 != v20_.v21) {
    while (1) {
      v7 = *(_QWORD*)(*(_QWORD*)v4 + 8LL);
      v8 = strlen(v7), result = COERCE_AS(__typeof__(result),
                                          PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0(),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v9 = v8;
      if (v8 >= 0x17) {
        if ((v8 | 7) == 0x17) {
          v11 = 26;
        }
        else {
          v11 = (v8 | 7) + 1;
        }
        v10 = (char*)fw_memory_HeapManager_Allocate(*v6, v11, 16, 0),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v16_.v16[1] = v9;
        v16_.v17 = v10;
        v16_.v16[0] = v11 | 1;
      }
      else {
        v10 = (char*)v16_.v16 + 1;
        LOBYTE(v16_.v16[0]) = 2 * v8;
        if (v8 == 0) {
          goto LABEL_13;
        }
      }
      memmove(v10, v7, v9),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    LABEL_13:
      v10[v9] = 0;
      result =
          X8CALL_V0(__n128, SceneEffectManager_1950ce0(
                                (void*)(&v18_.v18), (__int64)v16_.v16, v2, 2u));
      v12 = v18_.v19;
      if (v18_.v19 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v18_.v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v12 + 16LL))(
            v12, *(long double*)&result),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        result = std___1___shared_weak_count___release_weak();
        if ((v16_.v16[0] & 1) != 0) {
        LABEL_16:
          if (v16_.v17 != nullptr) {
            v13 = 128;
            if (*(_QWORD*)(*v6 + 200) == 0) {
              v13 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*v6 + v13);
          }
        }
      }
      else if ((v16_.v16[0] & 1) != 0) {
        goto LABEL_16;
      }
      v4 += 8;
      if (v4 == v5) {
        v4 = v20_.v20;
        break;
      }
    }
  }
  if (v4 != 0) {
    v14 = *v6;
    v20_.v21 = v4;
    v15 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v15 = 56;
    }
    return nn_mem_StandardAllocator_Free(v14 + v15);
  }
  return result;
}

#pragma GCC visibility pop
