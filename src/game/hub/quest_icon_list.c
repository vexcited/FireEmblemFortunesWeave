#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_1038880(_QWORD, _QWORD);
__int64 GameRoutine_1560520(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18f4a00(_QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcmp(_QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 (*game_hub_MapIconList_vtable)();
extern __int64 (*game_hub_QuestIconList_vtable[])();
extern __int64 GameData_21c9f40;
extern __int64 GameData_21f3d10;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a1d0(void);
__int64 QuestIconList_Unknown2(__int64 a1, __int64* a2);
__int64 QuestIconList_1037620(unsigned __int8* a1, __int64 a2);
__int64 QuestIconList_Destructor(_QWORD* a1);
__int64* GameRoutine_f7cc80(__int64* result, __int64);
__int64* GameRoutine_f7cdc0(__int64* result, __int64*);
__int64 GameRoutine_1596800(__int64);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 LayoutAccessor_155ea30(__int64*);
__int64 LayoutAccessor_1562cf0(__int64 result, __int64);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Manager_136ad70(__int64, __int64, unsigned int, unsigned int, char*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__n128 GameRoutine_15964d0(__int64, __int64);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
char* game_util_Format(__int64, __int64, __int64, __int64, __int64, __int64,
                       __int64, __int64, char);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 GameData_212c060;
extern __int64 GameData_212dc38[7];
extern __int64 GameData_21f3cc0;
extern __int64 ui_Manager_instance_;
extern char* GameData_20033e8[4];
extern char GameData_1a9f09e;
float cosf(float);
float fmodf(float, float);
float sinf(float);
void GameRoutine_1038a60(__int64, _QWORD*, unsigned __int64, __int64,
                         signed __int64);
void GameRoutine_1596140(__int64, const char*);
void LayoutAccessor_155e830(__int64*, char);
void __attribute__((noreturn)) GameRoutine_1038a40();
void __attribute__((noreturn)) GameRoutine_60a210();
__n128 QuestIconList_Unknown3(_QWORD* a1, __int64 a2, int* a3);
void QuestIconList_Unknown4(__int64 a1, __int64 a2, int* a3, float* a4,
                            __int64 a5);
__int64 GameRoutine_103a200(__int64 result, __int64);
__n128 GameRoutine_1039020(__int64*, __int64*);
void QuestIconList_1039b40(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, __int64 a7);

__int64 QuestIconList_Unknown2(__int64 a1, __int64* a2)
{
  __int64 i;
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
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
  _BYTE v36[264];

  v3 = *(_QWORD*)(a1 + 24);
  v4 = *(_QWORD*)(a1 + 32);
  for (i = a1 + 24; v4 != v3; v4 -= 64) {
    v18 = *(_QWORD*)(v4 - 40);
    if (v18 != 0) {
      std___1___shared_weak_count___release_weak(v18);
    }
  }
  *(_QWORD*)(a1 + 32) = v3;
  v8 = *a2;
  v7 = a2[1];
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
  }
  v9 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 8) = v8;
  *(_QWORD*)(a1 + 16) = v7;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
  }
  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v11 = *a2;
      v12 = result;
      if (v11 == 0 || *(int*)(a1 + 76) < 1) {
      LABEL_44:
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          return std___1___shared_weak_count___release_weak(v12);
        }
        return result;
      }
      sprintf(v36, "L_Quest%d", 0);
      GameRoutine_1560070((void*)&v29, v11, v36);
      result = v30;
      if (v30 != 0) {
        v13 = std___1___shared_weak_count_lock(v30);
        v14 = v29;
        result = v30;
        if (v30 != 0) {
          result = std___1___shared_weak_count___release_weak(v30);
        }
        if (v13 != 0 && v14 != 0) {
          v15 = ui_LayoutAccessor_FindPane(v11, v36);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                    memory_order_relaxed);
          v29 = v15;
          v30 = 0;
          v31 = v14;
          v32 = v13;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                    memory_order_relaxed);
          v33 = 0;
          v34 = 0;
          v35 = 0;
          v16 = *(__int64**)(a1 + 32);
          if ((unsigned __int64)v16 >= *(_QWORD*)(a1 + 40)) {
            v19 = GameRoutine_1038880(i, &v29);
            v20 = v32;
            *(_QWORD*)(a1 + 32) = v19;
            if (v20 != 0) {
              std___1___shared_weak_count___release_weak(v20);
            }
          }
          else {
            v17 = v29;
            v16[3] = v13;
            v16[4] = 0;
            *v16 = v17;
            v16[1] = v30;
            v16[2] = v14;
            v31 = 0;
            v32 = 0;
            v16[6] = v34;
            v16[7] = v35;
            *(_QWORD*)(a1 + 32) = v16 + 8;
          }
          result = std___1___shared_weak_count___release_weak(v13);
        }
        else if (v13 == 0) {
          goto LABEL_27;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          result = std___1___shared_weak_count___release_weak(v13);
        }
      }
    LABEL_27:
      if (*(int*)(a1 + 76) >= 2) {
        v21 = 1;
        while (1) {
          sprintf(v36, "L_Quest%d", v21);
          GameRoutine_1560520(v11, "L_Quest0", "N_Quest", v36);
          GameRoutine_1560070((void*)&v29, v11, v36);
          result = v30;
          if (v30 != 0) {
            v22 = std___1___shared_weak_count_lock(v30);
            v23 = v29;
            result = v30;
            if (v30 != 0) {
              result = std___1___shared_weak_count___release_weak(v30);
            }
            if (v22 != 0 && v23 != 0) {
              v24 = ui_LayoutAccessor_FindPane(v11, v36);
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 16), 1u,
                                        memory_order_relaxed);
              v29 = v24;
              v30 = 0;
              v31 = v23;
              v32 = v22;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 16), 1u,
                                        memory_order_relaxed);
              v33 = 0;
              v34 = 0;
              v35 = 0;
              v25 = *(__int64**)(a1 + 32);
              if ((unsigned __int64)v25 >= *(_QWORD*)(a1 + 40)) {
                v27 = GameRoutine_1038880(i, &v29);
                v28 = v32;
                *(_QWORD*)(a1 + 32) = v27;
                if (v28 != 0) {
                  std___1___shared_weak_count___release_weak(v28);
                }
              }
              else {
                v26 = v29;
                v25[3] = v22;
                v25[4] = 0;
                *v25 = v26;
                v25[1] = v30;
                v25[2] = v23;
                v31 = 0;
                v32 = 0;
                v25[6] = v34;
                v25[7] = v35;
                *(_QWORD*)(a1 + 32) = v25 + 8;
              }
              result = std___1___shared_weak_count___release_weak(v22);
            LABEL_42:
              if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
                result = std___1___shared_weak_count___release_weak(v22);
              }
              goto LABEL_29;
            }
            if (v22 != 0) {
              goto LABEL_42;
            }
          }
        LABEL_29:
          if (++v21 >= *(_DWORD*)(a1 + 76)) {
            goto LABEL_44;
          }
        }
      }
      goto LABEL_44;
    }
  }
  return result;
}

__n128 QuestIconList_Unknown3(_QWORD* a1, __int64 a2, int* a3)
{
  _QWORD* i;
  _QWORD* v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int32x2_t* v10;
  int32x2_t* v11;
  unsigned __int64 v12;
  int v13;
  char v14;
  int v15;
  char v16;
  unsigned __int64 v17;
  int32x2_t* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  int32x2_t* v27;
  unsigned __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  int32x2_t* v32;
  int v33;
  __int64* v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  signed __int64 v60;
  bool v61;
  __n128 result;
  __int64 v63;
  int32x2_t* v64;
  int32x2_t v66;
  unsigned __int64 v67;
  struct {
    __int64 v68;
    unsigned __int64 v69;
    unsigned __int64 v70;
    __int64 v71;
    char v72;
  } v68_;
  struct {
    __int64 v73;
    unsigned __int64 v74;
    __int64 v75;
    unsigned __int8 v76;
  } v73_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = (_QWORD*)a1[6];
  for (i = (_QWORD*)a1[7]; i != v4; i -= 11) {
    if (*((_BYTE*)i - 8) == 1 && (*(_BYTE*)(i - 4) & 1) != 0 && *(i - 2) != 0) {
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
        v7 = 128;
      }
      else {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v7),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    if (*((_BYTE*)i - 40) == 1 && (*(_BYTE*)(i - 8) & 1) != 0 &&
        *(i - 6) != 0) {
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
        v8 = 128;
      }
      else {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v8),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  a1[7] = v4;
  if ((*(_BYTE*)(a2 + 8) & 1) != 0) {
    v9 = *(_QWORD*)(a2 + 16);
  }
  else {
    v9 = *(_BYTE*)(a2 + 8) >> 1;
  }
  if (v9 != 0) {
    v11 = *(int32x2_t**)(a2 + 208);
    v10 = *(int32x2_t**)(a2 + 216);
    if (v11 != v10) {
      v64 = *(int32x2_t**)(a2 + 216);
      v12 = 0x2E8BA2E8BA2E8BALL;
      while (1) {
        v13 = LANES64(v11[11]).n64_i32[0];
        v14 = 0;
        if (v13 <= 1) {
          if (v13 == 0) {
            v14 = 4;
            goto LABEL_42;
          }
          if (v13 == 1) {
            v14 = 3;
          LABEL_42:
            LOBYTE(v68_.v68) = 0;
            v68_.v72 = 0;
            v16 = 1;
            LOBYTE(v73_.v73) = 0;
            v73_.v76 = 0;
            goto LABEL_44;
          }
        }
        else {
          switch (v13) {
          case 4:
            v14 = 2;
            break;
          case 3:
            v14 = 1;
            break;
          case 2:
            v14 = 5;
            break;
          default:
            break;
          }
        }
        LOBYTE(v68_.v68) = 0;
        v68_.v72 = 0;
        v15 = *a3;
        LOBYTE(v73_.v73) = 0;
        v73_.v76 = 0;
        if (v15 == 1) {
          if (LANES64(v11[10]).n64_u8[0] != 1) {
            v16 = 1;
            goto LABEL_44;
          }
          goto LABEL_40;
        }
        if (v15 == 0) {
          if (LANES64(v11[10]).n64_u8[0] != 1) {
            v16 =
                *(_DWORD*)(GameData_21f3cc0 + 92) == LANES64(v11[2]).n64_u32[0];
          LABEL_44:
            LOBYTE(v67) = v16 & 1;
            goto LABEL_45;
          }
        LABEL_40:
          v16 = QuestIconList_1037620((unsigned __int8*)&v11[3], a2),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
          goto LABEL_44;
        }
      LABEL_45:
        BYTE1(v67) = v14;
        LANES64(v66).n64_u64[0] =
            LANES64_OF(
                vzip1_s32(
                    COERCE_AS(int32x2_t, LANES64(*(v11)).n64_u64[0]),
                    COERCE_AS(
                        int32x2_t,
                        LANES128_OF(
                            vextq_s8(*(int8x16_t*)LANES64(*(v11)).n64_u64,
                                     *(int8x16_t*)LANES64(*(v11)).n64_u64, 8u))
                            .n128_u64[0])))
                .n64_u64[0];
        GameRoutine_f7cc80(&v68_.v68, (__int64)&v11[12]),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        GameRoutine_f7cdc0(&v73_.v73, (__int64*)&v11[17]),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        HIDWORD(v67) = LANES64(v11[11]).n64_u32[0];
        v18 = (int32x2_t*)a1[7];
        v17 = a1[8];
        if ((unsigned __int64)v18 >= v17) {
          v21 = a1[6];
          v22 = (__int64)v18 - v21;
          v23 = 0x2E8BA2E8BA2E8BA3LL * (v22 >> 3) + 1;
          if (v23 > v12) {
            GameRoutine_1038a40(),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          v24 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(v17 - v21) >> 3);
          if (2 * v24 > v23) {
            v23 = 2 * v24;
          }
          if (v24 >= 0x1745D1745D1745DLL) {
            v25 = v12;
          }
          else {
            v25 = v23;
          }
          if (v25 != 0) {
            if (v25 > v12) {
              GameRoutine_60a210(),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            v26 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                      88 * v25, 16, 0),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          else {
            v26 = 0;
          }
          v27 = (int32x2_t*)(v26 + v22);
          LANES64(v27[2]).n64_u8[0] = 0;
          LANES64(v27[6]).n64_u8[0] = 0;
          LANES64(*(v27)).n64_u64[0] = LANES64(v66).n64_u64[0];
          LANES64(v27[1]).n64_u64[0] = v67;
          if (v68_.v72 == 1) {
            LANES64(v27[2]).n64_u8[0] = v68_.v68;
            if ((v68_.v69 & 1) != 0) {
              fw_text_String_CopyTerminated((__int64*)&v27[3], v68_.v71,
                                            v68_.v70),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            else {
              v28 = v68_.v70;
              LANES64(v27[3]).n64_u64[0] = v68_.v69;
              LANES64(v27[4]).n64_u64[0] = v28;
              LANES64(v27[5]).n64_u64[0] = v68_.v71;
            }
            LANES64(v27[6]).n64_u8[0] = 1;
          }
          v33 = v73_.v76;
          LANES64(v27[7]).n64_u8[0] = 0;
          v34 = (__int64*)&v27[7];
          LANES64(v27[10]).n64_u8[0] = 0;
          if (v33 == 1) {
            if ((v73_.v73 & 1) != 0) {
              fw_text_String_CopyTerminated(v34, v73_.v75, v73_.v74),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            else {
              v35 = v73_.v74;
              *v34 = v73_.v73;
              LANES64(v27[8]).n64_u64[0] = v35;
              LANES64(v27[9]).n64_u64[0] = v73_.v75;
            }
            LANES64(v27[10]).n64_u8[0] = 1;
          }
          v36 = v12;
          v37 = a1[6];
          v38 = a1[7];
          v39 = (char*)v27 + v37 - v38;
          if (v38 != v37) {
            v40 = 0;
            do {
              v41 = v37 + v40;
              v42 = &v39[v40];
              v43 = *(_QWORD*)(v37 + v40);
              v44 = *(_QWORD*)(v37 + v40 + 8);
              v42[16] = 0;
              v42[48] = 0;
              *(_QWORD*)v42 = v43;
              *((_QWORD*)v42 + 1) = v44;
              if (*(_BYTE*)(v37 + v40 + 48) == 1) {
                v42[16] = *(_BYTE*)(v41 + 16);
                v45 = *(_QWORD*)(v41 + 24);
                v46 = *(_QWORD*)(v41 + 40);
                *((_QWORD*)v42 + 4) = *(_QWORD*)(v41 + 32);
                *((_QWORD*)v42 + 5) = v46;
                *((_QWORD*)v42 + 3) = v45;
                *(_QWORD*)(v41 + 32) = 0;
                *(_QWORD*)(v41 + 40) = 0;
                *(_QWORD*)(v41 + 24) = 0;
                v42[48] = 1;
              }
              v42[56] = 0;
              v42[80] = 0;
              if (*(_BYTE*)(v41 + 80) == 1) {
                v47 = (_QWORD*)(v37 + v40);
                v48 = *(_QWORD*)(v37 + v40 + 56);
                v49 = *(_QWORD*)(v37 + v40 + 72);
                *((_QWORD*)v42 + 8) = *(_QWORD*)(v37 + v40 + 64);
                *((_QWORD*)v42 + 9) = v49;
                *((_QWORD*)v42 + 7) = v48;
                v47[8] = 0;
                v47[9] = 0;
                v47[7] = 0;
                v42[80] = 1;
              }
              v40 += 88;
            } while (v41 + 88 != v38);
            do {
              if (*(_BYTE*)(v37 + 80) == 1 && (*(_BYTE*)(v37 + 56) & 1) != 0 &&
                  *(_QWORD*)(v37 + 72) != 0) {
                v50 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v50 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v50),
                    result = COERCE_AS(__typeof__(result),
                                       PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
              if (*(_BYTE*)(v37 + 48) == 1 && (*(_BYTE*)(v37 + 24) & 1) != 0 &&
                  *(_QWORD*)(v37 + 40) != 0) {
                v51 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v51 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v51),
                    result = COERCE_AS(__typeof__(result),
                                       PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
              v37 += 88;
            } while (v37 != v38);
            v37 = a1[6];
          }
          v32 = v27 + 11;
          v12 = v36;
          a1[6] = v39;
          a1[7] = v32;
          a1[8] = v26 + 88 * v25;
          if (v37 != 0) {
            v52 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v52 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v52),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          v10 = v64;
        }
        else {
          LANES64(v18[2]).n64_u8[0] = 0;
          LANES64(v18[6]).n64_u8[0] = 0;
          LANES64(*(v18)).n64_u64[0] = LANES64(v66).n64_u64[0];
          LANES64(v18[1]).n64_u64[0] = v67;
          if (v68_.v72 == 1) {
            LANES64(v18[2]).n64_u8[0] = v68_.v68;
            if ((v68_.v69 & 1) != 0) {
              fw_text_String_CopyTerminated((__int64*)&v18[3], v68_.v71,
                                            v68_.v70),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            else {
              v19 = v68_.v69;
              v20 = v68_.v71;
              LANES64(v18[4]).n64_u64[0] = v68_.v70;
              LANES64(v18[5]).n64_u64[0] = v20;
              LANES64(v18[3]).n64_u64[0] = v19;
            }
            LANES64(v18[6]).n64_u8[0] = 1;
          }
          LANES64(v18[7]).n64_u8[0] = 0;
          v29 = (__int64*)&v18[7];
          LANES64(v18[10]).n64_u8[0] = 0;
          if (v73_.v76 == 1) {
            if ((v73_.v73 & 1) != 0) {
              fw_text_String_CopyTerminated(v29, v73_.v75, v73_.v74),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            else {
              v30 = v73_.v73;
              v31 = v73_.v75;
              LANES64(v18[8]).n64_u64[0] = v73_.v74;
              LANES64(v18[9]).n64_u64[0] = v31;
              *v29 = v30;
            }
            LANES64(v18[10]).n64_u8[0] = 1;
          }
          v32 = v18 + 11;
        }
        v53 = v73_.v76;
        a1[7] = v32;
        if (v53 == 1 && (v73_.v73 & 1) != 0 && v73_.v75 != 0) {
          v54 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v54 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v54),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        if (v68_.v72 == 1 && (v68_.v69 & 1) != 0 && v68_.v71 != 0) {
          v55 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v55 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v55),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v11 += 22;
        if (v11 == v10) {
          v4 = (_QWORD*)a1[7];
          break;
        }
      }
    }
  }
  v56 = a1[6];
  if ((__int64)v4 - v56 < 1) {
    v60 = 0;
  LABEL_122:
    GameRoutine_1038a60(
        v56, v4, 0x2E8BA2E8BA2E8BA3LL * (((__int64)v4 - v56) >> 3), 0, v60),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else {
    v57 = 0x2E8BA2E8BA2E8BA3LL * (((__int64)v4 - v56) >> 3);
    v58 = GameData_212c060;
    while (1) {
      v59 = GameRoutine_1a09d20(88 * v57, v58),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v59 != 0) {
        break;
      }
      v60 = v57 >> 1;
      v61 = v57 > 1;
      v57 >>= 1;
      if (!v61) {
        goto LABEL_122;
      }
    }
    GameRoutine_1038a60(
        v56, v4, 0x2E8BA2E8BA2E8BA3LL * (((__int64)v4 - v56) >> 3), v59, v57),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v63 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v63 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v63);
  }
  return result;
}

__int64 QuestIconList_1037620(unsigned __int8* a1, __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  bool v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  bool v20;
  unsigned __int64 v21;
  unsigned __int8* v22;
  unsigned __int64 v23;
  _QWORD* v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v32;
  unsigned __int64 v33;
  _QWORD* v34;
  _QWORD* v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int8* v43;
  _BYTE* v44;
  __int64 v45;
  __int64 v47;
  unsigned __int64 v48;
  char* v49;
  _QWORD v50[2];
  char* v51;

  v2 = a1[24];
  if ((v2 & 1) != 0) {
    v3 = *((_QWORD*)a1 + 4);
  }
  else {
    v3 = v2 >> 1;
  }
  if (v3 != 0) {
    v4 = *(unsigned __int8*)(a2 + 8);
    v5 = *(_QWORD*)(a2 + 16);
    if ((v4 & 1) == 0) {
      v5 = v4 >> 1;
    }
    if (v5 != v3 ||
        ((v4 & 1) != 0 ? (v8 = *(_QWORD*)(a2 + 24)) : (v8 = a2 + 9),
         (v2 & 1) != 0 ? (v9 = *((unsigned __int8**)a1 + 5)) : (v9 = a1 + 25),
         (unsigned int)memcmp(v8, v9) != 0)) {
      v10 = *(unsigned __int8*)(GameData_21f3d10 + 40);
      v11 = (v10 & 1) == 0;
      v12 = v10 >> 1;
      if (v11) {
        v13 = v12;
      }
      else {
        v13 = *(_QWORD*)(GameData_21f3d10 + 48);
      }
      if (v11) {
        v14 = GameData_21f3d10 + 41;
      }
      else {
        v14 = *(_QWORD*)(GameData_21f3d10 + 56);
      }
      v15 = v13 + 1;
      if (v13 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
        GameRoutine_60a1d0();
      }
      if (v15 >= 0x17) {
        if ((v15 | 7) == 0x17) {
          v18 = 26;
        }
        else {
          v18 = (v15 | 7) + 1;
        }
        v16 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    v18, 16, 0);
        v48 = v13 + 1;
        v49 = v16;
        v47 = v18 | 1;
      }
      else {
        v48 = 0;
        v49 = nullptr;
        v47 = (unsigned __int8)(2 * v15);
        v16 = (char*)&v47 + 1;
        if (v13 == 0) {
          goto LABEL_31;
        }
      }
      memmove(v16, v14, v13);
    LABEL_31:
      *(_WORD*)&v16[v13] = 95;
      v19 = *a1;
      v20 = (v19 & 1) == 0;
      v21 = v19 >> 1;
      if (v20) {
        v22 = a1 + 1;
      }
      else {
        v22 = *((unsigned __int8**)a1 + 2);
      }
      if (v20) {
        v23 = v21;
      }
      else {
        v23 = *((_QWORD*)a1 + 1);
      }
      v24 = (_QWORD*)GameRoutine_1a09ce0(&v47, v22, v23);
      v26 = v24[1];
      v25 = (char*)v24[2];
      v50[0] = *v24;
      v50[1] = v26;
      v51 = v25;
      v24[1] = 0;
      v24[2] = 0;
      *v24 = 0;
      if ((v47 & 1) != 0 && v49 != nullptr) {
        v27 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v27 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v27);
      }
      if ((v50[0] & 1) != 0) {
        v28 = v51;
      }
      else {
        v28 = (char*)v50 + 1;
      }
      v29 = game_HashString(v28);
      if (v29 == 0) {
        goto LABEL_87;
      }
      v30 = *(_QWORD*)(GameData_21c9f40 + 96);
      if (v30 == 0 || *(_QWORD*)(GameData_21c9f40 + 112) == 0) {
        goto LABEL_87;
      }
      v32 = v30 - 1;
      if ((v30 & (v30 - 1)) != 0) {
        v33 = v29;
        if (v29 >= v30) {
          v33 = v29 % v30;
        }
      }
      else {
        v33 = v32 & v29;
      }
      v34 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f40 + 88) + 8 * v33);
      if (v34 == nullptr) {
        goto LABEL_87;
      }
      v35 = (_QWORD*)*v34;
      if (v35 == nullptr) {
        goto LABEL_87;
      }
      if ((v30 & v32) == 0) {
        while (1) {
          v37 = v35[1];
          if (v37 == v29) {
            if (v35[2] == v29) {
              goto LABEL_70;
            }
          }
          else if ((v37 & v32) != v33) {
            goto LABEL_87;
          }
          v35 = (_QWORD*)*v35;
          LODWORD(v17) = 0;
          if (v35 == nullptr) {
            goto LABEL_88;
          }
        }
      }
      while (1) {
        v36 = v35[1];
        if (v36 == v29) {
          break;
        }
        if (v36 >= v30) {
          v36 %= v30;
        }
        if (v36 != v33) {
          goto LABEL_87;
        }
      LABEL_59:
        v35 = (_QWORD*)*v35;
        if (v35 == nullptr) {
          goto LABEL_87;
        }
      }
      if (v35[2] != v29) {
        goto LABEL_59;
      }
    LABEL_70:
      v17 = v35[3];
      if (v17 != 0) {
        v38 = *(unsigned __int8*)(a2 + 8);
        if ((v38 & 1) != 0) {
          v39 = *(_QWORD*)(a2 + 16);
        }
        else {
          v39 = v38 >> 1;
        }
        v40 = a1[24];
        v41 = *((_QWORD*)a1 + 4);
        if ((v40 & 1) == 0) {
          v41 = v40 >> 1;
        }
        if (v39 != v41 ||
            ((v38 & 1) != 0 ? (v42 = *(_QWORD*)(a2 + 24)) : (v42 = a2 + 9),
             (v40 & 1) != 0 ? (v43 = *((unsigned __int8**)a1 + 5))
                            : (v43 = a1 + 25),
             (unsigned int)memcmp(v42, v43) != 0)) {
          v44 = (_BYTE*)GameRoutine_18f4a00(v17);
          if (v44 != nullptr) {
            LODWORD(v17) = *v44 == 0;
            if ((v50[0] & 1) != 0) {
              goto LABEL_89;
            }
          }
          else {
            LODWORD(v17) = 1;
            if ((v50[0] & 1) != 0) {
              goto LABEL_89;
            }
          }
          return (unsigned int)v17;
        }
      LABEL_87:
        LODWORD(v17) = 0;
      }
    LABEL_88:
      if ((v50[0] & 1) != 0) {
      LABEL_89:
        if (v51 != nullptr) {
          v45 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v45 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v45);
        }
      }
      return (unsigned int)v17;
    }
  }
  LODWORD(v17) = 1;
  return (unsigned int)v17;
}

void QuestIconList_Unknown4(__int64 a1, __int64 a2, int* a3, float* a4,
                            __int64 a5)
{
  __int64 v5;
  __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  int v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  char* v29;
  const char* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  const char* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  char* v46;
  char* v47;
  __int64 v48;
  int v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float* v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  bool v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  char v77;
  float v78;
  char v79;
  __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  char v83;
  float* v84;
  __int64 v85;
  struct {
    __int64 v86[2];
    char* v87;
  } v86_;
  struct {
    __int64* v88;
    unsigned int v89;
    char v90;
    char gap69_[3];
    int v91;
    char v92;
  } v88_;

  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v5 = *(_QWORD*)(a1 + 48);
  v85 = *(_QWORD*)(a1 + 56);
  if (v5 != v85) {
    v10 = 0;
    v11 = 0;
    v84 = (float*)(a5 + 4);
    while (1) {
      v12 = (__int64*)(*(_QWORD*)(a1 + 24) + v10);
      v13 = *v12;
      v14 = std___1___shared_weak_count_lock(v12[3]),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v15 = (__int64*)v12[2];
      v88_.v90 = 0;
      v88_.v91 = 0;
      v88_.v92 = 0;
      v88_.v89 = 1;
      v88_.v88 = v15;
      LayoutAccessor_155e830(v15, *(_BYTE*)(v5 + 8)),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v38 = COERCE_AS(__typeof__(v38),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if (*(_BYTE*)(v5 + 8) == 1) {
        v16 = *(_DWORD*)(v5 + 12);
        if (v16 <= 1) {
          if (v16 != 0) {
            if (v16 == 1) {
              v88_.v91 = 1;
              if (v88_.v89 == 0) {
                LayoutAccessor_1562cf0((__int64)v88_.v88, (__int64)"MainQuest"),
                    v21 = COERCE_AS(
                        __typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                    v22 = COERCE_AS(
                        __typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                    v23 = COERCE_AS(
                        __typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v24 = COERCE_AS(
                        __typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v25 = COERCE_AS(
                        __typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v26 = COERCE_AS(
                        __typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                    v33 = COERCE_AS(
                        __typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                    v34 = COERCE_AS(
                        __typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                    v35 = COERCE_AS(
                        __typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v36 = COERCE_AS(
                        __typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v37 = COERCE_AS(
                        __typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v38 = COERCE_AS(
                        __typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              }
              v19 = ui_LayoutAccessor_FindPane_alt1(v88_.v88,
                                                    (__int64)"IconQuest"),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v38 = COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              if (v19 != 0) {
                v20 = __dynamic_cast(v19, GameData_212d670[0],
                                     GameData_212d678[0], 0),
                v21 =
                    COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v22 =
                    COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v23 =
                    COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v24 =
                    COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v25 =
                    COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v26 =
                    COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v33 =
                    COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v35 =
                    COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v37 =
                    COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v38 =
                    COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                if (v20 != 0) {
                  v27 = v20;
                  v28 = &GameData_1a9f09e;
                  if (v88_.v89 <= 3) {
                    v28 = GameData_20033e8[v88_.v89];
                  }
                  v29 = game_util_Format((__int64)v28, (__int64)"Main_Unknown",
                                         v21, v22, v23, v24, v25, v26, v83),
                  v21 = COERCE_AS(
                      __typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v22 = COERCE_AS(
                      __typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v23 = COERCE_AS(
                      __typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v24 = COERCE_AS(
                      __typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v25 = COERCE_AS(
                      __typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v26 = COERCE_AS(
                      __typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v33 = COERCE_AS(
                      __typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v34 = COERCE_AS(
                      __typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v35 = COERCE_AS(
                      __typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v36 = COERCE_AS(
                      __typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v37 = COERCE_AS(
                      __typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v38 = COERCE_AS(
                      __typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                  Manager_136ad70(ui_Manager_instance_ + 1264, v27, 0, 7u, v29),
                      v21 = COERCE_AS(
                          __typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v22 = COERCE_AS(
                          __typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v23 = COERCE_AS(
                          __typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                      v24 = COERCE_AS(
                          __typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                      v25 = COERCE_AS(
                          __typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                      v26 = COERCE_AS(
                          __typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                      v33 = COERCE_AS(
                          __typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v34 = COERCE_AS(
                          __typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v35 = COERCE_AS(
                          __typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                      v36 = COERCE_AS(
                          __typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                      v37 = COERCE_AS(
                          __typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                      v38 = COERCE_AS(
                          __typeof__(v38),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                }
              }
            }
            goto LABEL_61;
          }
          v88_.v91 = 1;
          if (v88_.v89 == 0) {
            LayoutAccessor_1562cf0((__int64)v88_.v88, (__int64)"MainQuest"),
                v21 =
                    COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v22 =
                    COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v23 =
                    COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v24 =
                    COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v25 =
                    COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v26 =
                    COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v33 =
                    COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v35 =
                    COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v37 =
                    COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v38 =
                    COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          }
          v31 = ui_LayoutAccessor_FindPane_alt1(v88_.v88, (__int64)"IconQuest"),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v38 = COERCE_AS(__typeof__(v38),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          if (v31 == 0) {
            goto LABEL_61;
          }
          v32 =
              __dynamic_cast(v31, GameData_212d670[0], GameData_212d678[0], 0),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v38 = COERCE_AS(__typeof__(v38),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          if (v32 == 0) {
            goto LABEL_61;
          }
          v39 = v32;
          v40 = &GameData_1a9f09e;
          if (v88_.v89 <= 3) {
            v40 = GameData_20033e8[v88_.v89];
          }
          v41 = "Main";
        LABEL_51:
          v46 = game_util_Format((__int64)v40, (__int64)v41, v33, v34, v35, v36,
                                 v37, v38, v83),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v38 = COERCE_AS(__typeof__(v38),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          Manager_136a920(ui_Manager_instance_ + 1264, v39, 0, 7u, v46),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v38 = COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          goto LABEL_61;
        }
        switch (v16) {
        case 2:
          GameRoutine_1596800((__int64)&v88_.v88),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v38 = COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          break;
        case 3:
          if (*(_BYTE*)(v5 + 48) == 1 && *(_BYTE*)(v5 + 16) == 1) {
            if ((*(_BYTE*)(v5 + 24) & 1) != 0) {
              v30 = *(const char**)(v5 + 40);
            }
            else {
              v30 = (const char*)(v5 + 25);
            }
            GameRoutine_1596140((__int64)&v88_.v88, v30),
                v21 =
                    COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v22 =
                    COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v23 =
                    COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v24 =
                    COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v25 =
                    COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v26 =
                    COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v33 =
                    COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v35 =
                    COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v37 =
                    COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v38 =
                    COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            break;
          }
          v88_.v91 = 1;
          if (v88_.v89 == 0) {
            LayoutAccessor_1562cf0((__int64)v88_.v88, (__int64)"Default"),
                v21 =
                    COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v22 =
                    COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v23 =
                    COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v24 =
                    COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v25 =
                    COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v26 =
                    COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v33 =
                    COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v35 =
                    COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v37 =
                    COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v38 =
                    COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          }
          v42 = ui_LayoutAccessor_FindPane_alt1(v88_.v88, (__int64)"IconQuest"),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v38 = COERCE_AS(__typeof__(v38),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          if (v42 == 0) {
            break;
          }
          v43 =
              __dynamic_cast(v42, GameData_212d670[0], GameData_212d678[0], 0),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v38 = COERCE_AS(__typeof__(v38),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          if (v43 == 0) {
            break;
          }
          v39 = v43;
          v40 = &GameData_1a9f09e;
          if (v88_.v89 <= 3) {
            v40 = GameData_20033e8[v88_.v89];
          }
          v41 = "Sub_Dest";
          goto LABEL_51;
        case 4:
          if (*(_BYTE*)(v5 + 80) == 1) {
            if ((*(_BYTE*)(v5 + 56) & 1) != 0) {
              fw_text_String_CopyTerminated(v86_.v86, *(_QWORD*)(v5 + 72),
                                            *(_QWORD*)(v5 + 64)),
                  v21 = COERCE_AS(
                      __typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v22 = COERCE_AS(
                      __typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v23 = COERCE_AS(
                      __typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v24 = COERCE_AS(
                      __typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v25 = COERCE_AS(
                      __typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v26 = COERCE_AS(
                      __typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v33 = COERCE_AS(
                      __typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v34 = COERCE_AS(
                      __typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v35 = COERCE_AS(
                      __typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v36 = COERCE_AS(
                      __typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v37 = COERCE_AS(
                      __typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v38 = COERCE_AS(
                      __typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            }
            else {
              v17 = *(_QWORD*)(v5 + 56);
              v18 = *(char**)(v5 + 72);
              v86_.v86[1] = *(_QWORD*)(v5 + 64);
              v86_.v87 = v18;
              v86_.v86[0] = v17;
            }
            if ((v86_.v86[0] & 1) != 0) {
              v47 = v86_.v87;
            }
            else {
              v47 = (char*)v86_.v86 + 1;
            }
            GameRoutine_15964d0((__int64)&v88_.v88, (__int64)v47),
                v21 =
                    COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v22 =
                    COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v23 =
                    COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v24 =
                    COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v25 =
                    COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v26 =
                    COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v33 =
                    COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v35 =
                    COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v37 =
                    COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v38 =
                    COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            if ((v86_.v86[0] & 1) != 0 && v86_.v87 != nullptr) {
              v48 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v48 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v48),
                  v21 = COERCE_AS(
                      __typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v22 = COERCE_AS(
                      __typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v23 = COERCE_AS(
                      __typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v24 = COERCE_AS(
                      __typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v25 = COERCE_AS(
                      __typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v26 = COERCE_AS(
                      __typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v33 = COERCE_AS(
                      __typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v34 = COERCE_AS(
                      __typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v35 = COERCE_AS(
                      __typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v36 = COERCE_AS(
                      __typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v37 = COERCE_AS(
                      __typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v38 = COERCE_AS(
                      __typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            }
            break;
          }
          v88_.v91 = 1;
          if (v88_.v89 == 0) {
            LayoutAccessor_1562cf0((__int64)v88_.v88, (__int64)"Default"),
                v21 =
                    COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v22 =
                    COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v23 =
                    COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v24 =
                    COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v25 =
                    COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v26 =
                    COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v33 =
                    COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v35 =
                    COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v37 =
                    COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v38 =
                    COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          }
          v44 = ui_LayoutAccessor_FindPane_alt1(v88_.v88, (__int64)"IconQuest"),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v38 = COERCE_AS(__typeof__(v38),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          if (v44 == 0) {
            break;
          }
          v45 =
              __dynamic_cast(v44, GameData_212d670[0], GameData_212d678[0], 0),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v38 = COERCE_AS(__typeof__(v38),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          if (v45 == 0) {
            break;
          }
          v39 = v45;
          v40 = &GameData_1a9f09e;
          if (v88_.v89 <= 3) {
            v40 = GameData_20033e8[v88_.v89];
          }
          v41 = "SideStory";
          goto LABEL_51;
        default:
          break;
        }
      }
    LABEL_61:
      v49 = *a3;
      v50 = *(float*)(a5 + 8);
      v51 = *(float*)(a5 + 12);
      v52 = *(float*)a5;
      if (*a3 != 0) {
        v51 = 0x0.0p+0f;
        v50 = 0x0.0p+0f;
      }
      if (v49 != 0) {
        v52 = 0x0.0p+0f;
      }
      if (v49 == 1) {
        v51 = a4[3];
        v50 = a4[2];
      }
      v53 = *(float*)v5;
      if (v49 == 1) {
        v52 = *a4;
      }
      v54 = v52 * (float)(v53 - v50);
      v55 = v52 * (float)(*(float*)(v5 + 4) - v51);
      if (v49 != 0) {
        v56 = v52 * (float)(v53 - v50);
      }
      else {
        v57 = v84;
        if (*(_BYTE*)(a5 + 16) != 0) {
          v57 = (float*)(*(_QWORD*)GameData_212dc38[0] + 100LL);
        }
        v58 = *v57;
        v59 = fmodf(*v57, 0x1.6800000000000p+8f),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v38 = COERCE_AS(__typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        if (v58 < 0x0.0p+0f) {
          v59 = v59 + 0x1.6800000000000p+8f;
        }
        v60 = v59 * 0x1.1df46a0000000p-6f;
        v61 = sinf(v59 * 0x1.1df46a0000000p-6f),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v38 = COERCE_AS(__typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v62 = cosf(v60),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v38 = COERCE_AS(__typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v56 = (float)(v62 * v54) - (float)(PSEUDO_UNFUSED(v61 * v55));
        v55 = (float)(PSEUDO_UNFUSED(v55 * v62)) + (float)(v61 * v54);
        v63 = v55 * v55;
        if ((float)(v56 * v56) <= 0x1.1040000000000p+14f &&
            v63 <= 0x1.1890000000000p+14f) {
          if (v55 <= -0x1.0600000000000p+7f) {
            v55 = -0x1.0600000000000p+7f;
          }
        }
        else {
          v65 = (float)(v56 * v56) <= v63;
          v66 = 0x1.0c00000000000p+7f;
          if (v65) {
            v67 = v55;
          }
          else {
            v67 = v56;
          }
          v68 = fabsf(v67);
          if (!v65) {
            v66 = 0x1.0800000000000p+7f;
          }
          v69 = v66 / v68;
          v56 = v56 * v69;
          v70 = v55 * v69;
          if (v70 > -0x1.0600000000000p+7f) {
            v55 = v70;
          }
          else {
            v55 = -0x1.0600000000000p+7f;
          }
        }
      }
      if (*a3 == 1) {
        v71 = a4[1];
        v72 = fmodf(v71, 0x1.6800000000000p+8f),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v38 = COERCE_AS(__typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        if (v71 < 0x0.0p+0f) {
          v72 = v72 + 0x1.6800000000000p+8f;
        }
        v73 = v72 * 0x1.1df46a0000000p-6f;
        v74 = sinf(v72 * 0x1.1df46a0000000p-6f),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v38 = COERCE_AS(__typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v75 = cosf(v73),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v38 = COERCE_AS(__typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v76 = -(float)(v74 * v55);
        v55 = (float)(PSEUDO_UNFUSED(v55 * v75)) + (float)(v74 * v56);
        v56 = v76 + (float)(v75 * v56);
      }
      v77 = *(_BYTE*)(v13 + 88);
      v78 = *(float*)(a1 + 72);
      *(_DWORD*)(v13 + 56) = 0;
      *(_BYTE*)(v13 + 88) = v77 | 0x10;
      v79 = v88_.v90;
      *(float*)(v13 + 48) = v56;
      *(float*)(v13 + 52) = v78 - v55;
      if ((v79 & 1) == 0 && (LayoutAccessor_155ea30(v88_.v88) & 1) != 0 &&
          (v88_.v92 & 1) == 0) {
        LayoutAccessor_1562cf0((__int64)v88_.v88, (__int64)"Status_Default"),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v35 = COERCE_AS(__typeof__(v35),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v38 = COERCE_AS(__typeof__(v38),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        LayoutAccessor_1562cf0((__int64)v88_.v88, (__int64)"Enable"),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v35 = COERCE_AS(__typeof__(v35),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v38 = COERCE_AS(__typeof__(v38),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v35 = COERCE_AS(__typeof__(v35),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v38 = COERCE_AS(__typeof__(v38),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        std___1___shared_weak_count___release_weak_alt1(v14),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v35 = COERCE_AS(__typeof__(v35),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v38 = COERCE_AS(__typeof__(v38),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
      v5 += 88;
      v10 += 64;
      ++v11;
      if (v5 == v85) {
        goto LABEL_98;
      }
    }
  }
  v11 = 0;
LABEL_98:
  v80 = *(_QWORD*)(a1 + 24);
  if (v11 < (*(_QWORD*)(a1 + 32) - v80) >> 6) {
    v81 = v11 << 6;
    do {
      v82 = *(_QWORD*)(v80 + v81);
      ++v11;
      v81 += 64LL;
      *(_BYTE*)(v82 + 88) &= ~1u;
      v80 = *(_QWORD*)(a1 + 24);
    } while (v11 < (*(_QWORD*)(a1 + 32) - v80) >> 6);
  }
}

__int64 QuestIconList_Destructor(_QWORD* a1)
{
  __int64 v1;
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
  __int64 result;

  v1 = a1[6];
  *a1 = game_hub_QuestIconList_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = a1[7];
    if (v1 == v4) {
      goto LABEL_20;
    }
    do {
      if (*(_BYTE*)(v4 - 8) == 1 && (*(_BYTE*)(v4 - 32) & 1) != 0 &&
          *(_QWORD*)(v4 - 16) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
      }
      if (*(_BYTE*)(v4 - 40) == 1 && (*(_BYTE*)(v4 - 64) & 1) != 0 &&
          *(_QWORD*)(v4 - 48) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6);
      }
      v4 -= 88;
    } while (v4 != v1);
    v7 = a1[6];
    a1[7] = v1;
    if (v7 != 0) {
    LABEL_20:
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
    }
  }
  v9 = a1[3];
  *a1 = &game_hub_MapIconList_vtable;
  if (v9 != 0) {
    v10 = a1[4];
    if (v9 == v10) {
      goto LABEL_30;
    }
    do {
      v11 = *(_QWORD*)(v10 - 40);
      if (v11 != 0) {
        std___1___shared_weak_count___release_weak(v11);
      }
      v10 -= 64;
    } while (v10 != v9);
    v12 = a1[3];
    a1[4] = v9;
    if (v12 != 0) {
    LABEL_30:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13);
    }
  }
  result = a1[2];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

void QuestIconList_1039b40(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  bool v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _BOOL4 v37;
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
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  _QWORD* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned int v65;
  unsigned int v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  bool v71;
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
  __int64 v83;
  __int64 i;

  v81 = a2;
  v82 = a1;
  if (a5 != 0) {
    v10 = a2;
    v11 = a1;
    while (a4 > a7 && a5 > a7) {
      if (a4 == 0) {
        return;
      }
      v12 = -a4;
      v13 = 0;
      while (1) {
        v14 = v11 + v13;
        if (*(unsigned __int8*)(v10 + 9) <
            (unsigned int)*(unsigned __int8*)(v11 + v13 + 9)) {
          break;
        }
        v13 += 88;
        v15 = __CFADD__(v12++, 1);
        v82 = v14 + 88;
        if (v15) {
          return;
        }
      }
      v16 = -v12;
      v79 = a3;
      v80 = a6;
      if (-v12 >= a5) {
        if (v12 == -1) {
          GameRoutine_1039020(&v82, &v81);
          return;
        }
        v25 = v16 / 2;
        v26 = v11 + 88 * (v16 / 2);
        v27 = v25;
        v19 = v26 + v13;
        if (a3 == v10) {
          v18 = a3;
        }
        else {
          v18 = v10;
          v28 = 0x2E8BA2E8BA2E8BA3LL * ((a3 - v10) >> 3);
          do {
            v29 = v28 >> 1;
            v30 = v18 + 88 * (v28 >> 1);
            v31 = *(unsigned __int8*)(v30 + 9);
            v32 = v30 + 88;
            v28 += ~(v28 >> 1);
            if (v31 < *(unsigned __int8*)(v19 + 9)) {
              v18 = v32;
            }
            else {
              v28 = v29;
            }
          } while (v28 != 0);
        }
        v17 = 0x2E8BA2E8BA2E8BA3LL * ((v18 - v10) >> 3);
      }
      else {
        v17 = a5 / 2;
        v18 = v10 + 88 * (a5 / 2);
        if (v14 == v10) {
          v19 = v10;
        }
        else {
          v19 = v11 + v13;
          v20 = 0x2E8BA2E8BA2E8BA3LL * ((v10 - v11 - v13) >> 3);
          do {
            v21 = v20 >> 1;
            v22 = v19 + 88 * (v20 >> 1);
            v23 = *(unsigned __int8*)(v22 + 9);
            v24 = v22 + 88;
            v20 += ~(v20 >> 1);
            if (*(unsigned __int8*)(v18 + 9) < v23) {
              v20 = v21;
            }
            else {
              v19 = v24;
            }
          } while (v20 != 0);
        }
        v27 = 0x2E8BA2E8BA2E8BA3LL * ((v19 - v11 - v13) >> 3);
      }
      a3 = v18;
      if (v19 != v10) {
        a3 = v19;
        if (v10 != v18) {
          v76 = v27;
          v77 = v17;
          v78 = a7;
          v33 = a5;
          v83 = v10;
          i = v19;
          GameRoutine_1039020(&i, &v83);
          a3 = v19 + 88;
          v34 = v10 + 88;
          for (i = v19 + 88;; i = a3) {
            v83 = v34;
            if (v34 == v18) {
              break;
            }
            if (a3 == v10) {
              v10 = v34;
            }
            GameRoutine_1039020(&i, &v83);
            a3 += 88;
            v34 += 88;
          }
          if (a3 != v10) {
            v83 = v10;
            v35 = a3;
            v36 = v10;
            while (1) {
              GameRoutine_1039020(&i, &v83);
              v10 += 88;
              v83 = v10;
              i = v35 + 88;
              v37 = v35 + 88 == v36;
              if (v10 == v18) {
                if (v35 + 88 == v36) {
                  break;
                }
                v10 = v36 + 88;
                v35 += 176;
                v83 = v36;
                while (1) {
                  GameRoutine_1039020(&i, &v83);
                  v83 = v36 + 88;
                  i = v35;
                  v37 = v35 == v36;
                  if (v10 != v18) {
                    break;
                  }
                  if (v35 == v36) {
                    goto LABEL_50;
                  }
                  v83 = v36;
                  v35 += 88;
                }
              }
              else {
                v35 += 88;
              }
              if (v37) {
                v36 = v10;
              }
            }
          }
        LABEL_50:
          v17 = v77;
          a7 = v78;
          v27 = v76;
          a5 = v33;
        }
      }
      v38 = a5 - v17;
      a4 = -(v27 + v12);
      if (v27 + v17 >= a5 - (v27 + v17) - v12) {
        v41 = -(v27 + v12);
        v40 = a7;
        v38 = v17;
        QuestIconList_1039b40(a3, v18, v79, v41, a5 - v17, v80, a7);
        v18 = v19;
        a6 = v80;
        a4 = v27;
      }
      else {
        v39 = v19;
        a6 = v80;
        v40 = a7;
        QuestIconList_1039b40(v14, v39, a3, v27, v17, v80, a7);
        v82 = a3;
        v14 = a3;
        a3 = v79;
      }
      v81 = v18;
      v11 = v14;
      v10 = v18;
      a5 = v38;
      a7 = v40;
      if (v38 == 0) {
        return;
      }
    }
    if (a4 <= a5) {
      if (v11 == v10) {
        return;
      }
      v53 = 0;
      v43 = 0;
      do {
        v54 = v11 + v53;
        v55 = a6 + v53;
        v56 = *(_QWORD*)(v11 + v53);
        v57 = *(_QWORD*)(v11 + v53 + 8);
        *(_BYTE*)(v55 + 16) = 0;
        *(_BYTE*)(v55 + 48) = 0;
        *(_QWORD*)v55 = v56;
        *(_QWORD*)(v55 + 8) = v57;
        if (*(_BYTE*)(v11 + v53 + 48) == 1) {
          *(_BYTE*)(v55 + 16) = *(_BYTE*)(v54 + 16);
          v58 = *(_QWORD*)(v54 + 24);
          v59 = *(_QWORD*)(v54 + 40);
          *(_QWORD*)(v55 + 32) = *(_QWORD*)(v54 + 32);
          *(_QWORD*)(v55 + 40) = v59;
          *(_QWORD*)(v55 + 24) = v58;
          *(_QWORD*)(v54 + 32) = 0;
          *(_QWORD*)(v54 + 40) = 0;
          *(_QWORD*)(v54 + 24) = 0;
          *(_BYTE*)(v55 + 48) = 1;
        }
        *(_BYTE*)(v55 + 56) = 0;
        *(_BYTE*)(v55 + 80) = 0;
        if (*(_BYTE*)(v54 + 80) == 1) {
          v60 = (_QWORD*)(v11 + v53);
          v61 = *(_QWORD*)(v11 + v53 + 56);
          v62 = *(_QWORD*)(v11 + v53 + 72);
          *(_QWORD*)(v55 + 64) = *(_QWORD*)(v11 + v53 + 64);
          *(_QWORD*)(v55 + 72) = v62;
          *(_QWORD*)(v55 + 56) = v61;
          v60[8] = 0;
          v60[9] = 0;
          v60[7] = 0;
          *(_BYTE*)(v55 + 80) = 1;
        }
        ++v43;
        v53 += 88;
      } while (v54 + 88 != v10);
      v68 = a6 + v53;
      v69 = a6;
      v70 = a6 + v53 - 88;
      while (v10 != a3) {
        if (*(unsigned __int8*)(v10 + 9) >=
            (unsigned int)*(unsigned __int8*)(v69 + 9)) {
          GameRoutine_103a200(v11, v69);
          v69 += 88;
        }
        else {
          GameRoutine_103a200(v11, v10);
          v10 += 88;
        }
        v11 += 88;
        if (v68 == v69) {
          goto LABEL_93;
        }
      }
      do {
        GameRoutine_103a200(v11, v69);
        v11 += 88;
        v71 = v70 == v69;
        v69 += 88;
      } while (!v71);
    }
    else {
      if (v10 == a3) {
        return;
      }
      v42 = 0;
      v43 = 0;
      do {
        v44 = v10 + v42;
        v45 = a6 + v42;
        v46 = *(_QWORD*)(v10 + v42);
        v47 = *(_QWORD*)(v10 + v42 + 8);
        *(_BYTE*)(v45 + 16) = 0;
        *(_BYTE*)(v45 + 48) = 0;
        *(_QWORD*)v45 = v46;
        *(_QWORD*)(v45 + 8) = v47;
        if (*(_BYTE*)(v10 + v42 + 48) == 1) {
          *(_BYTE*)(v45 + 16) = *(_BYTE*)(v44 + 16);
          v48 = *(_QWORD*)(v44 + 24);
          v49 = *(_QWORD*)(v44 + 40);
          *(_QWORD*)(v45 + 32) = *(_QWORD*)(v44 + 32);
          *(_QWORD*)(v45 + 40) = v49;
          *(_QWORD*)(v45 + 24) = v48;
          *(_QWORD*)(v44 + 32) = 0;
          *(_QWORD*)(v44 + 40) = 0;
          *(_QWORD*)(v44 + 24) = 0;
          *(_BYTE*)(v45 + 48) = 1;
        }
        *(_BYTE*)(v45 + 56) = 0;
        *(_BYTE*)(v45 + 80) = 0;
        if (*(_BYTE*)(v44 + 80) == 1) {
          v50 = (_QWORD*)(v10 + v42);
          v51 = *(_QWORD*)(v10 + v42 + 56);
          v52 = *(_QWORD*)(v10 + v42 + 72);
          *(_QWORD*)(v45 + 64) = *(_QWORD*)(v10 + v42 + 64);
          *(_QWORD*)(v45 + 72) = v52;
          *(_QWORD*)(v45 + 56) = v51;
          v50[8] = 0;
          v50[9] = 0;
          v50[7] = 0;
          *(_BYTE*)(v45 + 80) = 1;
        }
        ++v43;
        v42 += 88;
      } while (v44 + 88 != a3);
      v63 = a3 - 88;
      v64 = a6 + v42;
      while (v10 != v11) {
        v65 = *(unsigned __int8*)(v10 - 79);
        v66 = *(unsigned __int8*)(v64 - 79);
        if (v66 >= v65) {
          v67 = v64 - 88;
        }
        else {
          v67 = v10 - 88;
        }
        if (v66 >= v65) {
          v64 -= 88;
        }
        else {
          v10 -= 88;
        }
        v63 = GameRoutine_103a200(v63, v67) - 88;
        if (v64 == a6) {
          goto LABEL_93;
        }
      }
      for (; v64 != a6; v63 = GameRoutine_103a200(v63, v64) - 88) {
        v64 -= 88;
      }
    }
  LABEL_93:
    if (a6 != 0) {
      v72 = a6 + 40;
      v73 = fw_memory_g_heap_manager_ptr;
      do {
        if (*(_BYTE*)(v72 + 40) == 1 && (*(_BYTE*)(v72 + 16) & 1) != 0 &&
            *(_QWORD*)(v72 + 32) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v73 + 200LL) != 0) {
            v74 = 128;
          }
          else {
            v74 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v73 + v74);
        }
        if (*(_BYTE*)(v72 + 8) == 1 && (*(_BYTE*)(v72 - 16) & 1) != 0 &&
            *(_QWORD*)v72 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v73 + 200LL) != 0) {
            v75 = 128;
          }
          else {
            v75 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v73 + v75);
        }
        --v43;
        v72 += 88;
      } while (v43 != 0);
    }
  }
}

#pragma GCC visibility pop
