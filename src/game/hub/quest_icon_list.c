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
__n128 QuestIconList_Unknown3_alt1(_QWORD* a1, __int64 a2,
                                   int* a3) __asm__("QuestIconList_Unknown3");
void QuestIconList_Unknown4(__int64 a1, __int64 a2, int* a3, float* a4,
                            __int64 a5);
__int64 GameRoutine_103a200(__int64 result, __int64);
__n128 GameRoutine_1039020(__int64*, __int64*);
void QuestIconList_1039b40(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, __int64 a7);
__int64 GameRoutine_18f4a00_alt1(__int64) __asm__("GameRoutine_18f4a00");
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64* GameHr_f7cc80(__int64* result, __int64);
__int64* GameHr_f7cdc0(__int64* result, __int64*);
__int64 GameHr_103a200(__int64 result, __int64);
__int64 GameRoutine_1a09d20_alt1(unsigned __int64,
                                 __int64) __asm__("GameRoutine_1a09d20");
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 game_gameui_1596140(__int64, __int64);
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
void GameHr_1038a60(__int64, _QWORD*, unsigned __int64, __int64,
                    signed __int64);
void GameHr_1039020(__int64*, __int64*);
void GameHr_15964d0(__int64, __int64);
void QuestIconList_Unknown3(_QWORD* a1, __int64 a2, int* a3);

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

void QuestIconList_Unknown3(_QWORD* a1, __int64 a2, int* a3)
{
  _QWORD* i;
  _QWORD* v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int32x2_t* v12;
  int32x2_t* v13;
  unsigned __int64 v14;
  int v15;
  char v16;
  int v17;
  char v18;
  unsigned __int64 v19;
  int32x2_t* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  int32x2_t* v29;
  unsigned __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  int32x2_t* v34;
  int v35;
  __int64* v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  __int64 v42;
  __int64 v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  signed __int64 v64;
  bool v65;
  __int64 v66;
  __int64 v67;
  int32x2_t* v68;
  int32x2_t v70;
  unsigned __int64 v71;
  struct {
    __int64 v72;
    unsigned __int64 v73;
    unsigned __int64 v74;
    __int64 v75;
    char v76;
  } v72_;
  struct {
    __int64 v77;
    unsigned __int64 v78;
    __int64 v79;
    unsigned __int8 v80;
  } v77_;

  v4 = (_QWORD*)a1[6];
  for (i = (_QWORD*)a1[7]; i != v4; i -= 11) {
    if (*((_BYTE*)i - 8) == 1 && (*(_BYTE*)(i - 4) & 1) != 0) {
      v7 = *(i - 2);
      if (v7 != 0) {
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v8, v7);
      }
    }
    if (*((_BYTE*)i - 40) == 1 && (*(_BYTE*)(i - 8) & 1) != 0) {
      v9 = *(i - 6);
      if (v9 != 0) {
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v10, v9);
      }
    }
  }
  a1[7] = v4;
  if ((*(_BYTE*)(a2 + 8) & 1) != 0) {
    v11 = *(_QWORD*)(a2 + 16);
  }
  else {
    v11 = *(_BYTE*)(a2 + 8) >> 1;
  }
  if (v11 != 0) {
    v13 = *(int32x2_t**)(a2 + 208);
    v12 = *(int32x2_t**)(a2 + 216);
    if (v13 != v12) {
      v68 = *(int32x2_t**)(a2 + 216);
      v14 = 0x2E8BA2E8BA2E8BALL;
      while (1) {
        v15 = LANES64(v13[11]).n64_i32[0];
        v16 = 0;
        if (v15 <= 1) {
          if (v15 == 0) {
            v16 = 4;
            goto LABEL_42;
          }
          if (v15 == 1) {
            v16 = 3;
          LABEL_42:
            LOBYTE(v72_.v72) = 0;
            v72_.v76 = 0;
            v18 = 1;
            LOBYTE(v77_.v77) = 0;
            v77_.v80 = 0;
            goto LABEL_44;
          }
        }
        else {
          switch (v15) {
          case 4:
            v16 = 2;
            break;
          case 3:
            v16 = 1;
            break;
          case 2:
            v16 = 5;
            break;
          default:
            break;
          }
        }
        LOBYTE(v72_.v72) = 0;
        v72_.v76 = 0;
        v17 = *a3;
        LOBYTE(v77_.v77) = 0;
        v77_.v80 = 0;
        if (v17 == 1) {
          if (LANES64(v13[10]).n64_u8[0] != 1) {
            v18 = 1;
            goto LABEL_44;
          }
          goto LABEL_40;
        }
        if (v17 == 0) {
          if (LANES64(v13[10]).n64_u8[0] != 1) {
            v18 =
                *(_DWORD*)(GameData_21f3cc0 + 92) == LANES64(v13[2]).n64_u32[0];
          LABEL_44:
            LOBYTE(v71) = v18 & 1;
            goto LABEL_45;
          }
        LABEL_40:
          v18 = QuestIconList_1037620((unsigned __int8*)&v13[3], a2);
          goto LABEL_44;
        }
      LABEL_45:
        BYTE1(v71) = v16;
        LANES64(v70).n64_u64[0] =
            LANES64_OF(
                vzip1_s32(
                    COERCE_AS(int32x2_t, LANES64(*(v13)).n64_u64[0]),
                    COERCE_AS(
                        int32x2_t,
                        LANES128_OF(
                            vextq_s8(*(int8x16_t*)LANES64(*(v13)).n64_u64,
                                     *(int8x16_t*)LANES64(*(v13)).n64_u64, 8u))
                            .n128_u64[0])))
                .n64_u64[0];
        GameHr_f7cc80(&v72_.v72, (__int64)&v13[12]);
        GameHr_f7cdc0(&v77_.v77, (__int64*)&v13[17]);
        HIDWORD(v71) = LANES64(v13[11]).n64_u32[0];
        v20 = (int32x2_t*)a1[7];
        v19 = a1[8];
        if ((unsigned __int64)v20 >= v19) {
          v23 = a1[6];
          v24 = (__int64)v20 - v23;
          v25 = 0x2E8BA2E8BA2E8BA3LL * (v24 >> 3) + 1;
          if (v25 > v14) {
            GameRoutine_1038a40();
          }
          v26 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(v19 - v23) >> 3);
          if (2 * v26 > v25) {
            v25 = 2 * v26;
          }
          if (v26 >= 0x1745D1745D1745DLL) {
            v27 = v14;
          }
          else {
            v27 = v25;
          }
          if (v27 != 0) {
            if (v27 > v14) {
              GameRoutine_60a210();
            }
            v28 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                      88 * v27, 16, 0);
          }
          else {
            v28 = 0;
          }
          v29 = (int32x2_t*)(v28 + v24);
          LANES64(v29[2]).n64_u8[0] = 0;
          LANES64(v29[6]).n64_u8[0] = 0;
          LANES64(*(v29)).n64_u64[0] = LANES64(v70).n64_u64[0];
          LANES64(v29[1]).n64_u64[0] = v71;
          if (v72_.v76 == 1) {
            LANES64(v29[2]).n64_u8[0] = v72_.v72;
            if ((v72_.v73 & 1) != 0) {
              fw_text_String_CopyTerminated((__int64*)&v29[3], v72_.v75,
                                            v72_.v74);
            }
            else {
              v30 = v72_.v74;
              LANES64(v29[3]).n64_u64[0] = v72_.v73;
              LANES64(v29[4]).n64_u64[0] = v30;
              LANES64(v29[5]).n64_u64[0] = v72_.v75;
            }
            LANES64(v29[6]).n64_u8[0] = 1;
          }
          v35 = v77_.v80;
          LANES64(v29[7]).n64_u8[0] = 0;
          v36 = (__int64*)&v29[7];
          LANES64(v29[10]).n64_u8[0] = 0;
          if (v35 == 1) {
            if ((v77_.v77 & 1) != 0) {
              fw_text_String_CopyTerminated(v36, v77_.v79, v77_.v78);
            }
            else {
              v37 = v77_.v78;
              *v36 = v77_.v77;
              LANES64(v29[8]).n64_u64[0] = v37;
              LANES64(v29[9]).n64_u64[0] = v77_.v79;
            }
            LANES64(v29[10]).n64_u8[0] = 1;
          }
          v38 = v14;
          v39 = a1[6];
          v40 = a1[7];
          v41 = (char*)v29 + v39 - v40;
          if (v40 != v39) {
            v42 = 0;
            do {
              v43 = v39 + v42;
              v44 = &v41[v42];
              v45 = *(_QWORD*)(v39 + v42);
              v46 = *(_QWORD*)(v39 + v42 + 8);
              v44[16] = 0;
              v44[48] = 0;
              *(_QWORD*)v44 = v45;
              *((_QWORD*)v44 + 1) = v46;
              if (*(_BYTE*)(v39 + v42 + 48) == 1) {
                v44[16] = *(_BYTE*)(v43 + 16);
                v47 = *(_QWORD*)(v43 + 24);
                v48 = *(_QWORD*)(v43 + 40);
                *((_QWORD*)v44 + 4) = *(_QWORD*)(v43 + 32);
                *((_QWORD*)v44 + 5) = v48;
                *((_QWORD*)v44 + 3) = v47;
                *(_QWORD*)(v43 + 32) = 0;
                *(_QWORD*)(v43 + 40) = 0;
                *(_QWORD*)(v43 + 24) = 0;
                v44[48] = 1;
              }
              v44[56] = 0;
              v44[80] = 0;
              if (*(_BYTE*)(v43 + 80) == 1) {
                v49 = (_QWORD*)(v39 + v42);
                v50 = *(_QWORD*)(v39 + v42 + 56);
                v51 = *(_QWORD*)(v39 + v42 + 72);
                *((_QWORD*)v44 + 8) = *(_QWORD*)(v39 + v42 + 64);
                *((_QWORD*)v44 + 9) = v51;
                *((_QWORD*)v44 + 7) = v50;
                v49[8] = 0;
                v49[9] = 0;
                v49[7] = 0;
                v44[80] = 1;
              }
              v42 += 88;
            } while (v43 + 88 != v40);
            do {
              if (*(_BYTE*)(v39 + 80) == 1 && (*(_BYTE*)(v39 + 56) & 1) != 0) {
                v52 = *(_QWORD*)(v39 + 72);
                if (v52 != 0) {
                  v53 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v53 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v53, v52);
                }
              }
              if (*(_BYTE*)(v39 + 48) == 1 && (*(_BYTE*)(v39 + 24) & 1) != 0) {
                v54 = *(_QWORD*)(v39 + 40);
                if (v54 != 0) {
                  v55 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v55 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v55, v54);
                }
              }
              v39 += 88;
            } while (v39 != v40);
            v39 = a1[6];
          }
          v34 = v29 + 11;
          v14 = v38;
          a1[6] = v41;
          a1[7] = v34;
          a1[8] = v28 + 88 * v27;
          if (v39 != 0) {
            v56 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v56 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v56, v39);
          }
          v12 = v68;
        }
        else {
          LANES64(v20[2]).n64_u8[0] = 0;
          LANES64(v20[6]).n64_u8[0] = 0;
          LANES64(*(v20)).n64_u64[0] = LANES64(v70).n64_u64[0];
          LANES64(v20[1]).n64_u64[0] = v71;
          if (v72_.v76 == 1) {
            LANES64(v20[2]).n64_u8[0] = v72_.v72;
            if ((v72_.v73 & 1) != 0) {
              fw_text_String_CopyTerminated((__int64*)&v20[3], v72_.v75,
                                            v72_.v74);
            }
            else {
              v21 = v72_.v73;
              v22 = v72_.v75;
              LANES64(v20[4]).n64_u64[0] = v72_.v74;
              LANES64(v20[5]).n64_u64[0] = v22;
              LANES64(v20[3]).n64_u64[0] = v21;
            }
            LANES64(v20[6]).n64_u8[0] = 1;
          }
          LANES64(v20[7]).n64_u8[0] = 0;
          v31 = (__int64*)&v20[7];
          LANES64(v20[10]).n64_u8[0] = 0;
          if (v77_.v80 == 1) {
            if ((v77_.v77 & 1) != 0) {
              fw_text_String_CopyTerminated(v31, v77_.v79, v77_.v78);
            }
            else {
              v32 = v77_.v77;
              v33 = v77_.v79;
              LANES64(v20[8]).n64_u64[0] = v77_.v78;
              LANES64(v20[9]).n64_u64[0] = v33;
              *v31 = v32;
            }
            LANES64(v20[10]).n64_u8[0] = 1;
          }
          v34 = v20 + 11;
        }
        v57 = v77_.v80;
        a1[7] = v34;
        if (v57 == 1 && (v77_.v77 & 1) != 0 && v77_.v79 != 0) {
          v58 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v58 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, v77_.v79);
        }
        if (v72_.v76 == 1 && (v72_.v73 & 1) != 0 && v72_.v75 != 0) {
          v59 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v59 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, v72_.v75);
        }
        v13 += 22;
        if (v13 == v12) {
          v4 = (_QWORD*)a1[7];
          break;
        }
      }
    }
  }
  v60 = a1[6];
  if ((__int64)v4 - v60 < 1) {
    v64 = 0;
  LABEL_122:
    GameHr_1038a60(v60, v4, 0x2E8BA2E8BA2E8BA3LL * (((__int64)v4 - v60) >> 3),
                   0, v64);
  }
  else {
    v61 = 0x2E8BA2E8BA2E8BA3LL * (((__int64)v4 - v60) >> 3);
    v62 = GameData_212c060;
    while (1) {
      v63 = GameRoutine_1a09d20_alt1(88 * v61, v62);
      if (v63 != 0) {
        break;
      }
      v64 = v61 >> 1;
      v65 = v61 > 1;
      v61 >>= 1;
      if (!v65) {
        goto LABEL_122;
      }
    }
    v66 = v63;
    GameHr_1038a60(v60, v4, 0x2E8BA2E8BA2E8BA3LL * (((__int64)v4 - v60) >> 3),
                   v63, v61);
    v67 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v67 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v67, v66);
  }
}

__int64 QuestIconList_1037620(unsigned __int8* a1, __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v8;
  __int64 v9;
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
  const char* v22;
  unsigned __int64 v23;
  _QWORD* v24;
  __int64 v25;
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
  __int64 v43;
  _BYTE* v44;
  __int64 v45;
  struct {
    __int64 v47;
    unsigned __int64 v48;
    char* v49;
  } v47_;
  struct {
    _QWORD v50[2];
    char* v51;
  } v50_;

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
         (v2 & 1) != 0 ? (v9 = *((_QWORD*)a1 + 5)) : (v9 = (__int64)(a1 + 25)),
         memcmp_alt1(v8, v9, v3) != 0)) {
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
        String_60a1d0();
      }
      if (v15 >= 0x17) {
        if ((v15 | 7) == 0x17) {
          v18 = 26;
        }
        else {
          v18 = (v15 | 7) + 1;
        }
        v16 = (char*)fw_memory_HeapManager_Allocate_alt1(
            fw_memory_g_heap_manager, v18, 16, 0);
        v47_.v48 = v13 + 1;
        v47_.v49 = v16;
        v47_.v47 = v18 | 1;
      }
      else {
        v47_.v48 = 0;
        v47_.v49 = nullptr;
        v47_.v47 = (unsigned __int8)(2 * v15);
        v16 = (char*)&v47_.v47 + 1;
        if (v13 == 0) {
          goto LABEL_31;
        }
      }
      memmove_alt1((__int64)v16, v14, v13);
    LABEL_31:
      *(_WORD*)&v16[v13] = 95;
      v19 = *a1;
      v20 = (v19 & 1) == 0;
      v21 = v19 >> 1;
      if (v20) {
        v22 = (const char*)(a1 + 1);
      }
      else {
        v22 = *((const char**)a1 + 2);
      }
      if (v20) {
        v23 = v21;
      }
      else {
        v23 = *((_QWORD*)a1 + 1);
      }
      v24 = (_QWORD*)GameRoutine_1a09ce0_alt1((__int64)&v47_.v47, v22, v23);
      v26 = v24[1];
      v25 = v24[2];
      v50_.v50[0] = *v24;
      v50_.v50[1] = v26;
      v50_.v51 = (char*)v25;
      v24[1] = 0;
      v24[2] = 0;
      *v24 = 0;
      if ((v47_.v47 & 1) != 0 && v47_.v49 != nullptr) {
        v27 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v27 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, (__int64)v47_.v49);
      }
      if ((v50_.v50[0] & 1) != 0) {
        v28 = v50_.v51;
      }
      else {
        v28 = (char*)v50_.v50 + 1;
      }
      v29 = game_HashString_alt1((__int64)v28);
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
             (v40 & 1) != 0 ? (v43 = *((_QWORD*)a1 + 5))
                            : (v43 = (__int64)(a1 + 25)),
             memcmp_alt1(v42, v43, v39) != 0)) {
          v44 = (_BYTE*)GameRoutine_18f4a00_alt1(v17);
          if (v44 != nullptr) {
            LODWORD(v17) = *v44 == 0;
            if ((v50_.v50[0] & 1) != 0) {
              goto LABEL_89;
            }
          }
          else {
            LODWORD(v17) = 1;
            if ((v50_.v50[0] & 1) != 0) {
              goto LABEL_89;
            }
          }
          return (unsigned int)v17;
        }
      LABEL_87:
        LODWORD(v17) = 0;
      }
    LABEL_88:
      if ((v50_.v50[0] & 1) != 0) {
      LABEL_89:
        if (v50_.v51 != nullptr) {
          v45 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v45 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v45, (__int64)v50_.v51);
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
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  const char* v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  const char* v28;
  const char* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  char* v35;
  __int64 v36;
  int v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float* v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  bool v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  char v65;
  float v66;
  char v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  float* v71;
  __int64 v72;
  struct {
    __int64 v73[2];
    char* v74;
  } v73_;
  struct {
    __int64* v75;
    unsigned int v76;
    char v77;
    char gap69_[3];
    int v78;
    char v79;
  } v75_;

  v5 = *(_QWORD*)(a1 + 48);
  v72 = *(_QWORD*)(a1 + 56);
  if (v5 != v72) {
    v10 = 0;
    v11 = 0;
    v71 = (float*)(a5 + 4);
    while (1) {
      v12 = (__int64*)(*(_QWORD*)(a1 + 24) + v10);
      v13 = *v12;
      v14 = std___1___shared_weak_count_lock_alt1(v12[3]);
      v15 = (__int64*)v12[2];
      v75_.v77 = 0;
      v75_.v78 = 0;
      v75_.v79 = 0;
      v75_.v76 = 1;
      v75_.v75 = v15;
      LayoutAccessor_155e830_alt1((__int64)v15, *(_BYTE*)(v5 + 8));
      if (*(_BYTE*)(v5 + 8) == 1) {
        v16 = *(_DWORD*)(v5 + 12);
        if (v16 <= 1) {
          if (v16 != 0) {
            if (v16 == 1) {
              v75_.v78 = 1;
              if (v75_.v76 == 0) {
                LayoutAccessor_1562cf0_alt1((__int64)v75_.v75, "MainQuest");
              }
              v19 = ui_LayoutAccessor_FindPane_alt1(v75_.v75,
                                                    (__int64)"IconQuest");
              if (v19 != 0) {
                v20 = __dynamic_cast(v19, GameData_212d670[0],
                                     GameData_212d678[0], 0);
                if (v20 != 0) {
                  v21 = v20;
                  v22 = &GameData_1a9f09e;
                  if (v75_.v76 <= 3) {
                    v22 = GameData_20033e8[v75_.v76];
                  }
                  v23 = game_util_Format_alt1(v22, "Main_Unknown");
                  Manager_136ad70(ui_Manager_instance_ + 1264, v21, 0, 7u, v23);
                }
              }
            }
            goto LABEL_61;
          }
          v75_.v78 = 1;
          if (v75_.v76 == 0) {
            LayoutAccessor_1562cf0_alt1((__int64)v75_.v75, "MainQuest");
          }
          v25 = ui_LayoutAccessor_FindPane_alt1(v75_.v75, (__int64)"IconQuest");
          if (v25 == 0) {
            goto LABEL_61;
          }
          v26 =
              __dynamic_cast(v25, GameData_212d670[0], GameData_212d678[0], 0);
          if (v26 == 0) {
            goto LABEL_61;
          }
          v27 = v26;
          v28 = &GameData_1a9f09e;
          if (v75_.v76 <= 3) {
            v28 = GameData_20033e8[v75_.v76];
          }
          v29 = "Main";
        LABEL_51:
          v34 = game_util_Format_alt1(v28, v29);
          Manager_136a920(ui_Manager_instance_ + 1264, v27, 0, 7u, v34);
          goto LABEL_61;
        }
        switch (v16) {
        case 2:
          GameRoutine_1596800((__int64)&v75_.v75);
          break;
        case 3:
          if (*(_BYTE*)(v5 + 48) == 1 && *(_BYTE*)(v5 + 16) == 1) {
            if ((*(_BYTE*)(v5 + 24) & 1) != 0) {
              v24 = *(_QWORD*)(v5 + 40);
            }
            else {
              v24 = v5 + 25;
            }
            game_gameui_1596140((__int64)&v75_.v75, v24);
            break;
          }
          v75_.v78 = 1;
          if (v75_.v76 == 0) {
            LayoutAccessor_1562cf0_alt1((__int64)v75_.v75, "Default");
          }
          v30 = ui_LayoutAccessor_FindPane_alt1(v75_.v75, (__int64)"IconQuest");
          if (v30 == 0) {
            break;
          }
          v31 =
              __dynamic_cast(v30, GameData_212d670[0], GameData_212d678[0], 0);
          if (v31 == 0) {
            break;
          }
          v27 = v31;
          v28 = &GameData_1a9f09e;
          if (v75_.v76 <= 3) {
            v28 = GameData_20033e8[v75_.v76];
          }
          v29 = "Sub_Dest";
          goto LABEL_51;
        case 4:
          if (*(_BYTE*)(v5 + 80) == 1) {
            if ((*(_BYTE*)(v5 + 56) & 1) != 0) {
              fw_text_String_CopyTerminated(v73_.v73, *(_QWORD*)(v5 + 72),
                                            *(_QWORD*)(v5 + 64));
            }
            else {
              v17 = *(_QWORD*)(v5 + 56);
              v18 = *(_QWORD*)(v5 + 72);
              v73_.v73[1] = *(_QWORD*)(v5 + 64);
              v73_.v74 = (char*)v18;
              v73_.v73[0] = v17;
            }
            if ((v73_.v73[0] & 1) != 0) {
              v35 = v73_.v74;
            }
            else {
              v35 = (char*)v73_.v73 + 1;
            }
            GameHr_15964d0((__int64)&v75_.v75, (__int64)v35);
            if ((v73_.v73[0] & 1) != 0 && v73_.v74 != nullptr) {
              v36 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v36 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v36,
                  (__int64)v73_.v74);
            }
            break;
          }
          v75_.v78 = 1;
          if (v75_.v76 == 0) {
            LayoutAccessor_1562cf0_alt1((__int64)v75_.v75, "Default");
          }
          v32 = ui_LayoutAccessor_FindPane_alt1(v75_.v75, (__int64)"IconQuest");
          if (v32 == 0) {
            break;
          }
          v33 =
              __dynamic_cast(v32, GameData_212d670[0], GameData_212d678[0], 0);
          if (v33 == 0) {
            break;
          }
          v27 = v33;
          v28 = &GameData_1a9f09e;
          if (v75_.v76 <= 3) {
            v28 = GameData_20033e8[v75_.v76];
          }
          v29 = "SideStory";
          goto LABEL_51;
        default:
          break;
        }
      }
    LABEL_61:
      v37 = *a3;
      v38 = *(float*)(a5 + 8);
      v39 = *(float*)(a5 + 12);
      v40 = *(float*)a5;
      if (*a3 != 0) {
        v39 = 0x0.0p+0f;
        v38 = 0x0.0p+0f;
      }
      if (v37 != 0) {
        v40 = 0x0.0p+0f;
      }
      if (v37 == 1) {
        v39 = a4[3];
        v38 = a4[2];
      }
      v41 = *(float*)v5;
      if (v37 == 1) {
        v40 = *a4;
      }
      v42 = v40 * (float)(v41 - v38);
      v43 = v40 * (float)(*(float*)(v5 + 4) - v39);
      if (v37 != 0) {
        v44 = v40 * (float)(v41 - v38);
      }
      else {
        v45 = v71;
        if (*(_BYTE*)(a5 + 16) != 0) {
          v45 = (float*)(*(_QWORD*)GameData_212dc38[0] + 100LL);
        }
        v46 = *v45;
        v47 = fmodf(*v45, 0x1.6800000000000p+8f);
        if (v46 < 0x0.0p+0f) {
          v47 = v47 + 0x1.6800000000000p+8f;
        }
        v48 = v47 * 0x1.1df46a0000000p-6f;
        v49 = sinf(v47 * 0x1.1df46a0000000p-6f);
        v50 = cosf(v48);
        v44 = (float)(v50 * v42) - (float)(PSEUDO_UNFUSED(v49 * v43));
        v43 = (float)(PSEUDO_UNFUSED(v43 * v50)) + (float)(v49 * v42);
        v51 = v43 * v43;
        if ((float)(v44 * v44) <= 0x1.1040000000000p+14f &&
            v51 <= 0x1.1890000000000p+14f) {
          if (v43 <= -0x1.0600000000000p+7f) {
            v43 = -0x1.0600000000000p+7f;
          }
        }
        else {
          v53 = (float)(v44 * v44) <= v51;
          v54 = 0x1.0c00000000000p+7f;
          if (v53) {
            v55 = v43;
          }
          else {
            v55 = v44;
          }
          v56 = fabsf(v55);
          if (!v53) {
            v54 = 0x1.0800000000000p+7f;
          }
          v57 = v54 / v56;
          v44 = v44 * v57;
          v58 = v43 * v57;
          if (v58 > -0x1.0600000000000p+7f) {
            v43 = v58;
          }
          else {
            v43 = -0x1.0600000000000p+7f;
          }
        }
      }
      if (*a3 == 1) {
        v59 = a4[1];
        v60 = fmodf(v59, 0x1.6800000000000p+8f);
        if (v59 < 0x0.0p+0f) {
          v60 = v60 + 0x1.6800000000000p+8f;
        }
        v61 = v60 * 0x1.1df46a0000000p-6f;
        v62 = sinf(v60 * 0x1.1df46a0000000p-6f);
        v63 = cosf(v61);
        v64 = -(float)(v62 * v43);
        v43 = (float)(PSEUDO_UNFUSED(v43 * v63)) + (float)(v62 * v44);
        v44 = v64 + (float)(v63 * v44);
      }
      v65 = *(_BYTE*)(v13 + 88);
      v66 = *(float*)(a1 + 72);
      *(_DWORD*)(v13 + 56) = 0;
      *(_BYTE*)(v13 + 88) = v65 | 0x10;
      v67 = v75_.v77;
      *(float*)(v13 + 48) = v44;
      *(float*)(v13 + 52) = v66 - v43;
      if ((v67 & 1) == 0 && (LayoutAccessor_155ea30(v75_.v75) & 1) != 0 &&
          (v75_.v79 & 1) == 0) {
        LayoutAccessor_1562cf0_alt1((__int64)v75_.v75, "Status_Default");
        LayoutAccessor_1562cf0_alt1((__int64)v75_.v75, "Enable");
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        std___1___shared_weak_count___release_weak_alt2(v14);
      }
      v5 += 88;
      v10 += 64;
      ++v11;
      if (v5 == v72) {
        goto LABEL_98;
      }
    }
  }
  v11 = 0;
LABEL_98:
  v68 = *(_QWORD*)(a1 + 24);
  if (v11 < (*(_QWORD*)(a1 + 32) - v68) >> 6) {
    v69 = v11 << 6;
    do {
      v70 = *(_QWORD*)(v68 + v69);
      ++v11;
      v69 += 64LL;
      *(_BYTE*)(v70 + 88) &= ~1u;
      v68 = *(_QWORD*)(a1 + 24);
    } while (v11 < (*(_QWORD*)(a1 + 32) - v68) >> 6);
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
  __int64 v14;
  __int64 v15;
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
      if (*(_BYTE*)(v4 - 8) == 1 && (*(_BYTE*)(v4 - 32) & 1) != 0) {
        v5 = *(_QWORD*)(v4 - 16);
        if (v5 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v6 = 128;
          }
          else {
            v6 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v6, v5);
        }
      }
      if (*(_BYTE*)(v4 - 40) == 1 && (*(_BYTE*)(v4 - 64) & 1) != 0) {
        v7 = *(_QWORD*)(v4 - 48);
        if (v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v8, v7);
        }
      }
      v4 -= 88;
    } while (v4 != v1);
    v9 = a1[6];
    a1[7] = v1;
    v1 = v9;
    if (v9 != 0) {
    LABEL_20:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v10, v1);
    }
  }
  v11 = a1[3];
  *a1 = &game_hub_MapIconList_vtable;
  if (v11 != 0) {
    v12 = a1[4];
    if (v11 == v12) {
      goto LABEL_30;
    }
    do {
      v13 = *(_QWORD*)(v12 - 40);
      if (v13 != 0) {
        std___1___shared_weak_count___release_weak_alt2(v13);
      }
      v12 -= 64;
    } while (v12 != v11);
    v14 = a1[3];
    a1[4] = v11;
    v11 = v14;
    if (v14 != 0) {
    LABEL_30:
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v15, v11);
    }
  }
  result = a1[2];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak_alt2(result);
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
  __int64 v84;
  __int64 i;

  v82 = a2;
  v83 = a1;
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
        v83 = v14 + 88;
        if (v15) {
          return;
        }
      }
      v16 = -v12;
      v80 = a3;
      v81 = a6;
      if (-v12 >= a5) {
        if (v12 == -1) {
          GameHr_1039020(&v83, &v82);
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
          v77 = v27;
          v78 = v17;
          v79 = a7;
          v33 = a5;
          v84 = v10;
          i = v19;
          GameHr_1039020(&i, &v84);
          a3 = v19 + 88;
          v34 = v10 + 88;
          for (i = v19 + 88;; i = a3) {
            v84 = v34;
            if (v34 == v18) {
              break;
            }
            if (a3 == v10) {
              v10 = v34;
            }
            GameHr_1039020(&i, &v84);
            a3 += 88;
            v34 += 88;
          }
          if (a3 != v10) {
            v84 = v10;
            v35 = a3;
            v36 = v10;
            while (1) {
              GameHr_1039020(&i, &v84);
              v10 += 88;
              v84 = v10;
              i = v35 + 88;
              v37 = v35 + 88 == v36;
              if (v10 == v18) {
                if (v35 + 88 == v36) {
                  break;
                }
                v10 = v36 + 88;
                v35 += 176;
                v84 = v36;
                while (1) {
                  GameHr_1039020(&i, &v84);
                  v84 = v36 + 88;
                  i = v35;
                  v37 = v35 == v36;
                  if (v10 != v18) {
                    break;
                  }
                  if (v35 == v36) {
                    goto LABEL_50;
                  }
                  v84 = v36;
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
          v17 = v78;
          a7 = v79;
          v27 = v77;
          a5 = v33;
        }
      }
      v38 = a5 - v17;
      a4 = -(v27 + v12);
      if (v27 + v17 >= a5 - (v27 + v17) - v12) {
        v41 = -(v27 + v12);
        v40 = a7;
        v38 = v17;
        QuestIconList_1039b40(a3, v18, v80, v41, a5 - v17, v81, a7);
        v18 = v19;
        a6 = v81;
        a4 = v27;
      }
      else {
        v39 = v19;
        a6 = v81;
        v40 = a7;
        QuestIconList_1039b40(v14, v39, a3, v27, v17, v81, a7);
        v83 = a3;
        v14 = a3;
        a3 = v80;
      }
      v82 = v18;
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
          GameHr_103a200(v11, v69);
          v69 += 88;
        }
        else {
          GameHr_103a200(v11, v10);
          v10 += 88;
        }
        v11 += 88;
        if (v68 == v69) {
          goto LABEL_93;
        }
      }
      do {
        GameHr_103a200(v11, v69);
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
        v63 = GameHr_103a200(v63, v67) - 88;
        if (v64 == a6) {
          goto LABEL_93;
        }
      }
      for (; v64 != a6; v63 = GameHr_103a200(v63, v64) - 88) {
        v64 -= 88;
      }
    }
  LABEL_93:
    if (a6 != 0) {
      v72 = a6 + 40;
      v73 = fw_memory_g_heap_manager_ptr;
      do {
        if (*(_BYTE*)(v72 + 40) == 1 && (*(_BYTE*)(v72 + 16) & 1) != 0) {
          v74 = *(_QWORD*)(v72 + 32);
          if (v74 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v73 + 200LL) != 0) {
              v75 = 128;
            }
            else {
              v75 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v73 + v75, v74);
          }
        }
        if (*(_BYTE*)(v72 + 8) == 1 && (*(_BYTE*)(v72 - 16) & 1) != 0 &&
            *(_QWORD*)v72 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v73 + 200LL) != 0) {
            v76 = 128;
          }
          else {
            v76 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v73 + v76,
                                             *(_QWORD*)v72);
        }
        --v43;
        v72 += 88;
      } while (v43 != 0);
    }
  }
}

#pragma GCC visibility pop
