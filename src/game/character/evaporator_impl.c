#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_character_EvaporatorImpl_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64
EvaporatorImpl_Destructor_alt1(__int64 a1) __asm__("EvaporatorImpl_Destructor");
__int64 EvaporatorImpl_DeletingDestructor_alt1(__int64 a1) __asm__(
    "EvaporatorImpl_DeletingDestructor");
_BYTE* ProcInst_657a50(__int64, char);
__attribute__((swiftcall)) void
game_108d130(PSEUDO_X8, __int64, char*, float32x4_t*, __int64*, long double);
__attribute__((swiftcall)) void game_10f8f00(PSEUDO_X8, unsigned __int8*, char);
__int64* GameRoutine_109fee0(__int64* result, float, long double);
__int64 CmdBtlZoomIn_10a04e0(__int64*, float*, float*, __int64);
__int64 GameRoutine_108e940(_QWORD);
__int64 GameRoutine_109ecc0(_BYTE*, unsigned __int64, __int64, __int64);
__int64 GameRoutine_109f1e0(__int64, _BYTE*);
__int64 RuntimeBuffer_8924a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 (*GameData_200e558[])();
extern __int64 (*GameData_200e5d8[])();
extern __int64 fw_memory_g_heap_manager;
__int64 game_character_EvaporatorImpl_Start(_QWORD* a1, _QWORD* a2, __int64 a3,
                                            float a4);
float EvaporatorImpl_Unknown3(__int64 a1, double a2, long double a3);
void game_character_EvaporatorImpl_Start_closure_Invoke(__int64 a1);
_QWORD* kaneko_disposable_10aa900(__int64*, __int64*);
__int64 CharacterBuilder_1083e90(_QWORD*, __int64);
__int64 GameRoutine_10aa280(__int64, __int64, __int64, float);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*GameData_200d9b8[])();
extern __int64 (*GameData_200e658[])();
extern __int64 (*GameData_200e6d8[])();
extern __int64 (*GameData_200e758[])();
extern __int64 GameData_21ec7b0;
__int64 game_character_EvaporatorImpl_Start_closure0_Invoke(__int64 result);
__attribute__((swiftcall)) void
game_108d130_alt1(PSEUDO_X8, __int64, const char*, float32x4_t*, __int64*,
                  long double) __asm__("game_108d130");
__attribute__((swiftcall)) void game_10f8f00_alt1(PSEUDO_X8, const char*,
                                                  char) __asm__("game_10f8f00");
__int64
RuntimeBuffer_8924a0_alt1(__int64 result, __int64, unsigned __int64,
                          unsigned __int8) __asm__("RuntimeBuffer_8924a0");
__int64 game_109ecc0(_BYTE*, unsigned __int64, char*, char*);
__int64 game_109f1e0(__int64, const char*);
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
bool GameHr_108e940(const char*);
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void EvaporatorImpl_Destructor(__int64 a1);
void EvaporatorImpl_DeletingDestructor(__int64 a1);

__int64 game_character_EvaporatorImpl_Start(_QWORD* a1, _QWORD* a2, __int64 a3,
                                            float a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 result;
  __int64 v19;
  struct {
    _QWORD v20[4];
    _QWORD* v21;
  } v20_;
  int v22;
  float v23;

  v4 = a2[76];
  v5 = a2[77];
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
  }
  v9 = a2[78];
  v10 = a1[20];
  a1[19] = v4;
  a1[20] = v5;
  if (v10 != 0) {
    std___1___shared_weak_count___release_weak(v10);
  }
  v11 = a1[24];
  v12 = a1[25];
  a1[21] = v9;
  a1[22] = a3;
  v23 = a4;
  v20_.v21 = v20_.v20;
  v20_.v20[0] = GameData_200e558;
  v20_.v20[1] = a1;
  v22 = -1082130432;
  if (v11 >= v12) {
    v13 = CmdBtlZoomIn_10a04e0(a1 + 23, &v23, (float*)&v22, (__int64)v20_.v20);
  }
  else {
    *(_QWORD*)(v11 + 16) = GameData_200e558;
    *(_QWORD*)(v11 + 24) = a1;
    v13 = v11 + 64;
    *(float*)v11 = a4;
    *(_DWORD*)(v11 + 4) = -1082130432;
    *(_QWORD*)(v11 + 48) = v11 + 16;
  }
  v14 = v20_.v21;
  a1[24] = v13;
  if (v14 == v20_.v20) {
    v15 = 32;
  }
  else {
    if (v14 == nullptr) {
      goto LABEL_13;
    }
    v15 = 40;
  }
  (*(void (**)(_QWORD*))(*v14 + v15))(v14);
  v13 = a1[24];
LABEL_13:
  v16 = a1[25];
  v20_.v21 = v20_.v20;
  v22 = -1082130432;
  v20_.v20[0] = GameData_200e5d8;
  v20_.v20[1] = a1;
  v23 = a4 + 0x1.5555560000000p-3f;
  if (v13 >= v16) {
    v17 = CmdBtlZoomIn_10a04e0(a1 + 23, &v23, (float*)&v22, (__int64)v20_.v20);
  }
  else {
    *(_QWORD*)(v13 + 16) = GameData_200e5d8;
    *(_QWORD*)(v13 + 24) = a1;
    *(float*)v13 = a4 + 0x1.5555560000000p-3f;
    *(_DWORD*)(v13 + 4) = -1082130432;
    *(_QWORD*)(v13 + 48) = v13 + 16;
    v17 = v13 + 64;
  }
  a1[24] = v17;
  result = (__int64)v20_.v21;
  if (v20_.v21 == v20_.v20) {
    v19 = 32;
  }
  else {
    if (v20_.v21 == nullptr) {
      return result;
    }
    v19 = 40;
  }
  return (*(__int64 (**)(_QWORD*, _QWORD*))(*v20_.v21 + v19))(v20_.v21, a2);
}

void EvaporatorImpl_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(a1 + 184);
  *(_QWORD*)a1 = game_character_EvaporatorImpl_vtable;
  if (v1 == 0) {
    goto LABEL_14;
  }
  v3 = *(_QWORD*)(a1 + 192);
  if (v1 == v3) {
  LABEL_11:
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v1);
    goto LABEL_14;
  }
  do {
    v5 = *(_QWORD**)(v3 - 16);
    if ((_QWORD*)(v3 - 48) == v5) {
      v4 = 32;
    LABEL_5:
      (*(void (**)(__int64))(*v5 + v4))((__int64)v5);
      goto LABEL_6;
    }
    if (v5 != nullptr) {
      v4 = 40;
      goto LABEL_5;
    }
  LABEL_6:
    v3 -= 64;
  } while (v3 != v1);
  v6 = *(_QWORD*)(a1 + 184);
  *(_QWORD*)(a1 + 192) = v1;
  v1 = v6;
  if (v6 != 0) {
    goto LABEL_11;
  }
LABEL_14:
  v8 = *(_QWORD*)(a1 + 160);
  if (v8 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v8);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

void EvaporatorImpl_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = *(_QWORD*)(a1 + 184);
  *(_QWORD*)a1 = game_character_EvaporatorImpl_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 == 0) {
    goto LABEL_14;
  }
  v4 = *(_QWORD*)(a1 + 192);
  if (v1 == v4) {
  LABEL_11:
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v8, v1);
    goto LABEL_14;
  }
  do {
    v6 = *(_QWORD**)(v4 - 16);
    if ((_QWORD*)(v4 - 48) == v6) {
      v5 = 32;
    LABEL_5:
      (*(void (**)(__int64))(*v6 + v5))((__int64)v6);
      goto LABEL_6;
    }
    if (v6 != nullptr) {
      v5 = 40;
      goto LABEL_5;
    }
  LABEL_6:
    v4 -= 64;
  } while (v4 != v1);
  v7 = *(_QWORD*)(a1 + 184);
  *(_QWORD*)(a1 + 192) = v1;
  v1 = v7;
  if (v7 != 0) {
    goto LABEL_11;
  }
LABEL_14:
  v9 = *(_QWORD*)(a1 + 160);
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v9);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
  v10 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v10 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v10, a1);
}

float EvaporatorImpl_Unknown3(__int64 a1, double a2, long double a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  bool v5;
  float result;
  float v8;
  float v9;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  v3 = *(_QWORD*)(a1 + 160);
  if (v3 == 0 ||
      ((v4 = *(_QWORD*)(a1 + 168), *(_QWORD*)(v3 + 8) != -1) ? (v5 = v4 == 0)
                                                             : (v5 = true),
       v5)) {
    if ((*(_WORD*)(a1 + 136) & 1) == 0) {
      ProcInst_657a50(a1, 1),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    }
  }
  else if (*(_QWORD*)(a1 + 184) != *(_QWORD*)(a1 + 192)) {
    v8 = (float)(*(float*)(*(_QWORD*)(v4 + 304) + 16LL) *
                 0x1.0aef000000000p+4f) *
         0x1.0624de0000000p-10f;
    v9 = *(float*)(a1 + 208);
    *(float*)&a3 = v9 + v8;
    GameRoutine_109fee0((__int64*)(a1 + 184), v9, a3),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    result = v8 + *(float*)(a1 + 208);
    *(float*)(a1 + 208) = result;
  }
  return result;
}

void game_character_EvaporatorImpl_Start_closure_Invoke(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  unsigned __int64 v22;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  unsigned __int64 v27;
  bool v28;
  unsigned __int64 v29;
  _BYTE* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  char* v35;
  const char* v36;
  int v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  const char* v41;
  __int64 v42;
  const char* v43;
  __int64 v44;
  long double v45;
  __int64 v46;
  __int64 v47;
  const char* v48;
  unsigned __int64 v49;
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
  char v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  long double v64;
  struct {
    __int64 v65;
    __int64 v66;
  } v65_;
  struct {
    __int64 v67;
    unsigned __int64 v68;
    const char* v69;
  } v67_;
  struct {
    __int64 v70;
    __int64 v71;
    char* v72;
  } v70_;
  struct {
    __int64 v73;
    unsigned __int64 v74;
    const char* v75;
  } v73_;
  struct {
    _QWORD* v76;
    __int64 v77;
    __int64 v78;
  } v76_;
  __int128 v79;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(v1 + 160);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v1 + 168);
    if (*(_QWORD*)(v2 + 8) != -1 && v3 != 0) {
      v5 = *(_QWORD*)(v3 + 392);
      v6 = *(_QWORD*)(v3 + 400);
      if (v6 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                  memory_order_relaxed);
        v7 = *(_QWORD*)(v5 + 11752);
        if (v7 != 0 && *(_BYTE*)v7 == 42) {
          v8 = v7 + 1;
          if (*(_BYTE*)(v7 + 1) == 10) {
            v9 = v7;
          }
          else {
            v9 = v7 + 1;
            if (*(_BYTE*)(v7 + 2) != 10) {
              v9 = v7 + 2;
              if (*(_BYTE*)(v7 + 3) != 10) {
                v9 = v7 + 3;
                if (*(_BYTE*)(v7 + 4) != 10) {
                  v9 = v7 + 4;
                  if (*(_BYTE*)(v7 + 5) != 10) {
                    v9 = v7 + 5;
                    if (*(_BYTE*)(v7 + 6) != 10) {
                      v11 = v7 + 7;
                      v9 = v7 + 6;
                      if (*(_BYTE*)(v7 + 7) != 10) {
                        v13 = *(unsigned __int8*)(v7 + 8);
                        v12 = v7 + 8;
                        v9 = v11;
                        if (v13 != 10) {
                          v15 = *(unsigned __int8*)(v8 + 8);
                          v14 = v8 + 8;
                          if (v15 == 10) {
                            v9 = v12;
                          }
                          else {
                            v9 = v14;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          v7 = v9 + 2;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          std___1___shared_weak_count___release_weak_alt1(v6);
        }
      }
      else {
        v7 = *(_QWORD*)(v5 + 11752);
        if (*(_BYTE*)v7 == 42) {
          v10 = v7 + 1;
          if (*(_BYTE*)(v7 + 1) == 10) {
            v7 += 2;
          }
          else {
            v16 = v7 + 1;
            if (*(_BYTE*)(v7 + 2) != 10) {
              v16 = v7 + 2;
              if (*(_BYTE*)(v7 + 3) != 10) {
                v16 = v7 + 3;
                if (*(_BYTE*)(v7 + 4) != 10) {
                  v16 = v7 + 4;
                  if (*(_BYTE*)(v7 + 5) != 10) {
                    v16 = v7 + 5;
                    if (*(_BYTE*)(v7 + 6) != 10) {
                      v17 = v7 + 7;
                      v16 = v7 + 6;
                      if (*(_BYTE*)(v7 + 7) != 10) {
                        v19 = *(unsigned __int8*)(v7 + 8);
                        v18 = v7 + 8;
                        v16 = v17;
                        if (v19 != 10) {
                          v21 = *(unsigned __int8*)(v10 + 8);
                          v20 = v10 + 8;
                          if (v21 == 10) {
                            v16 = v18;
                          }
                          else {
                            v16 = v20;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            v7 = v16 + 2;
          }
        }
      }
      v76_.v77 = 0;
      v76_.v78 = 0;
      v76_.v76 = nullptr;
      v22 = strlen_alt1((const char*)v7);
      RuntimeBuffer_8924a0_alt1((__int64)&v76_.v76, v7, v22, 0xAu);
      v24 = v76_.v76;
      v25 = (_QWORD*)v76_.v77;
      v26 = fw_memory_g_heap_manager_ptr;
      if (v76_.v76 != (_QWORD*)v76_.v77) {
        while (1) {
          v73_.v74 = 0;
          v73_.v75 = nullptr;
          v73_.v73 = 0;
          v70_.v71 = 0;
          v70_.v72 = nullptr;
          v70_.v70 = 0;
          v27 = *(unsigned __int8*)v24;
          v28 = (v27 & 1) == 0;
          v29 = v27 >> 1;
          if (v28) {
            v30 = (char*)v24 + 1;
          }
          else {
            v30 = (_BYTE*)v24[2];
          }
          if (v28) {
            v31 = v29;
          }
          else {
            v31 = v24[1];
          }
          if ((game_109ecc0(v30, v31, (char*)&v73_.v73, (char*)&v70_.v70) &
               1) == 0) {
            if ((v73_.v73 & 1) != 0 && v73_.v75 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)v26 + 200LL) != 0) {
                v32 = 128;
              }
              else {
                v32 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v26 + v32,
                                                 (__int64)v73_.v75);
            }
            v33 = *v24;
            v34 = v24[2];
            v73_.v74 = v24[1];
            v73_.v75 = (const char*)v34;
            v73_.v73 = v33;
            *(_WORD*)v24 = 0;
            if ((v70_.v70 & 1) != 0) {
              v70_.v71 = 12;
              v35 = v70_.v72;
            }
            else {
              LOBYTE(v70_.v70) = 24;
              v35 = (char*)&v70_.v70 + 1;
            }
            strcpy(v35, "Loc_C_Center");
          }
          if ((v73_.v73 & 1) != 0) {
            v36 = v73_.v75;
          }
          else {
            v36 = (char*)&v73_.v73 + 1;
          }
          game_10f8f00_alt1((void*)((unsigned __int8*)&v67_.v67), v36,
                            *(_DWORD*)(v3 + 340));
          v37 = v67_.v67 & 1;
          v38 = (unsigned __int64)(unsigned __int8)v67_.v67 >> 1;
          if (v37 != 0) {
            v38 = v67_.v68;
          }
          if (v38 == 0) {
            if (v37 != 0 && v67_.v69 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)v26 + 200LL) != 0) {
                v39 = 128;
              }
              else {
                v39 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v26 + v39,
                                                 (__int64)v67_.v69);
            }
            v40 = v73_.v73;
            LOWORD(v73_.v73) = 0;
            v67_.v67 = v40;
            v67_.v68 = v73_.v74;
            v37 = v40 & 1;
            v67_.v69 = v73_.v75;
          }
          v41 = v37 != 0 ? v67_.v69 : (char*)&v67_.v67 + 1;
          if (!GameHr_108e940(v41)) {
            break;
          }
          v42 = *(_QWORD*)(v1 + 176);
          if (v42 != 0) {
            v43 = (v70_.v70 & 1) != 0 ? v70_.v72 : (char*)&v70_.v70 + 1;
            v44 = game_109f1e0(v42, v43);
            if (v44 != 0) {
              v45 = *(long double*)(v44 + 48);
              v46 = *(_QWORD*)(*(_QWORD*)(v3 + 80) + 8LL);
              v47 = *(_QWORD*)(v3 + 80);
              v64 = v45;
              if ((v67_.v67 & 1) != 0) {
                v48 = v67_.v69;
              }
              else {
                v48 = (char*)&v67_.v67 + 1;
              }
              LODWORD(v49) = 0;
              *((float*)&v49 + 1) =
                  *(float*)(v46 + 324) * 0x1.ca5dc20000000p+5f;
              LODWORD(v45) =
                  COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
              v79 = v49;
              game_108d130_alt1((void*)(&v65_.v65), v47, v48,
                                (float32x4_t*)&v64, (__int64*)&v79, v45);
              v50 = v65_.v66;
              if (v65_.v66 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v65_.v66 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
                std___1___shared_weak_count___release_weak_alt1(v50);
              }
              ++*(_DWORD*)(v1 + 216);
              v26 = fw_memory_g_heap_manager_ptr;
            }
          }
          if ((v67_.v67 & 1) != 0 && v67_.v69 != nullptr) {
            if (*(_QWORD*)(*(_QWORD*)v26 + 200LL) != 0) {
              v51 = 128;
            }
            else {
              v51 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v26 + v51,
                                               (__int64)v67_.v69);
          }
          if ((v70_.v70 & 1) != 0 && v70_.v72 != nullptr) {
            if (*(_QWORD*)(*(_QWORD*)v26 + 200LL) != 0) {
              v52 = 128;
            }
            else {
              v52 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v26 + v52,
                                               (__int64)v70_.v72);
          }
          if ((v73_.v73 & 1) != 0 && v73_.v75 != nullptr) {
            if (*(_QWORD*)(*(_QWORD*)v26 + 200LL) != 0) {
              v53 = 128;
            }
            else {
              v53 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v26 + v53,
                                               (__int64)v73_.v75);
          }
          v24 += 3;
          if (v24 == v25) {
            goto LABEL_120;
          }
        }
        if ((v67_.v67 & 1) != 0 && v67_.v69 != nullptr) {
          v54 = 128;
          if (*(_QWORD*)(*(_QWORD*)v26 + 200LL) == 0) {
            v54 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v26 + v54,
                                             (__int64)v67_.v69);
        }
        if ((v70_.v70 & 1) != 0 && v70_.v72 != nullptr) {
          v55 = 128;
          if (*(_QWORD*)(*(_QWORD*)v26 + 200LL) == 0) {
            v55 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v26 + v55,
                                             (__int64)v70_.v72);
        }
        if ((v73_.v73 & 1) != 0 && v73_.v75 != nullptr) {
          v56 = 128;
          if (*(_QWORD*)(*(_QWORD*)v26 + 200LL) == 0) {
            v56 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v26 + v56,
                                             (__int64)v73_.v75);
        }
      }
    LABEL_120:
      v57 = (__int64)v76_.v76;
      if (v76_.v76 != nullptr) {
        v58 = v76_.v77;
        if (v76_.v76 == (_QWORD*)v76_.v77) {
          goto LABEL_131;
        }
        v59 = v76_.v77;
        do {
          v60 = *(_BYTE*)(v59 - 24);
          v59 -= 24;
          if ((v60 & 1) != 0) {
            v61 = *(_QWORD*)(v58 - 8);
            if (v61 != 0) {
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                v62 = 128;
              }
              else {
                v62 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v62,
                                                 v61);
            }
          }
          v58 = v59;
        } while (v59 != v57);
        v76_.v77 = v57;
        v57 = (__int64)v76_.v76;
        if (v76_.v76 != nullptr) {
        LABEL_131:
          v63 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v63 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v63, v57);
        }
      }
    }
  }
}

__int64 game_character_EvaporatorImpl_Start_closure0_Invoke(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v5;
  __int64 v6;
  __int64 v7;
  atomic_ullong* v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  struct {
    _QWORD v22[4];
    _QWORD* v23;
  } v22_;
  struct {
    _QWORD v24[2];
    __int64 v25;
    __int64 v26;
    _QWORD* v27;
  } v24_;
  struct {
    __int64 v28;
    __int64 v29;
    __int64 v30;
  } v28_;

  v1 = *(_QWORD*)(result + 8);
  if (*(int*)(v1 + 216) < 1) {
    return result;
  }
  v2 = *(_QWORD*)(v1 + 160);
  if (v2 == 0) {
    return result;
  }
  v3 = *(_QWORD*)(v1 + 168);
  if (*(_QWORD*)(v2 + 8) == -1 || v3 == 0) {
    return result;
  }
  v5 = *(_DWORD*)(v3 + 340);
  if ((v5 & 0x20) == 0) {
    if ((v5 & 8) != 0) {
      *(_BYTE*)(*(_QWORD*)(v3 + 8) + 289LL) = 0;
      return result;
    }
    v6 = *(_QWORD*)(v3 + 608);
    v7 = *(_QWORD*)(v3 + 616);
    if (v7 != 0) {
      v8 = (atomic_ullong*)(v7 + 16);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                memory_order_relaxed);
      v9 = *(_QWORD*)(v3 + 624);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                memory_order_relaxed);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                memory_order_relaxed);
      if (GameData_21ec7b0 != 0) {
        v10 = *(__int64**)(GameData_21ec7b0 + 208);
        atomic_fetch_add_explicit(v8, 1u, memory_order_relaxed);
        v24_.v25 = v7;
        v24_.v26 = v9;
        v24_.v24[0] = GameData_200e6d8;
        v24_.v24[1] = v6;
        v24_.v27 = v24_.v24;
        atomic_fetch_add_explicit(v8, 1u, memory_order_relaxed);
        goto LABEL_25;
      }
    }
    else if (GameData_21ec7b0 != 0) {
      v9 = *(_QWORD*)(v3 + 624);
      v10 = *(__int64**)(GameData_21ec7b0 + 208);
      v24_.v24[0] = GameData_200e6d8;
      v24_.v24[1] = v6;
      v24_.v27 = v24_.v24;
      v24_.v25 = 0;
      v24_.v26 = v9;
    LABEL_25:
      v22_.v22[2] = v7;
      v22_.v22[3] = v9;
      v22_.v22[0] = GameData_200e758;
      v22_.v22[1] = v6;
      v22_.v23 = v22_.v22;
      v13 = (_QWORD*)GameRoutine_10aa280(
          0, (__int64)v24_.v24, (__int64)v22_.v22, 0x1.99999a0000000p-2f);
      v14 = v13[21];
      v15 = v13[22];
      v28_.v28 = v14;
      v28_.v29 = v15;
      if (v15 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                                  memory_order_relaxed);
      }
      v16 = v13[23];
      v28_.v30 = v16;
      v17 = (__int64*)v10[1];
      if ((unsigned __int64)v17 >= v10[2]) {
        v18 = kaneko_disposable_10aa900(v10, &v28_.v28);
        v19 = v28_.v29;
        v10[1] = (__int64)v18;
        if (v19 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v19);
        }
      }
      else {
        *v17 = v14;
        v17[1] = v15;
        v17[2] = v16;
        v10[1] = (__int64)(v17 + 3);
      }
      if (v22_.v23 == v22_.v22) {
        v20 = 32;
      }
      else {
        if (v22_.v23 == nullptr) {
          goto LABEL_37;
        }
        v20 = 40;
      }
      (*(void (**)(__int64))(*v22_.v23 + v20))((__int64)v22_.v23);
    LABEL_37:
      result = (__int64)v24_.v27;
      if (v24_.v27 == v24_.v24) {
        v21 = 32;
      }
      else {
        if (v24_.v27 == nullptr) {
          goto LABEL_42;
        }
        v21 = 40;
      }
      result = (*(__int64 (**)(__int64))(*v24_.v27 + v21))((__int64)v24_.v27);
    LABEL_42:
      if (v7 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v7);
        std___1___shared_weak_count___release_weak_alt1(v7);
        return std___1___shared_weak_count___release_weak_alt1(v7);
      }
      return result;
    }
    *(_BYTE*)(*(_QWORD*)(v3 + 8) + 289LL) = 0;
    goto LABEL_42;
  }
  v24_.v24[0] = GameData_200d9b8;
  v24_.v27 = v24_.v24;
  LODWORD(v24_.v24[1]) = 1050253722;
  CharacterBuilder_1083e90((_QWORD*)v3, (__int64)v24_.v24);
  if (v24_.v27 == v24_.v24) {
    v11 = 32;
    goto LABEL_17;
  }
  if (v24_.v27 != nullptr) {
    v11 = 40;
  LABEL_17:
    (*(void (**)(__int64))(*v24_.v27 + v11))((__int64)v24_.v27);
  }
  LOBYTE(v24_.v24[1]) = 0;
  v24_.v24[0] = GameData_200e658;
  v24_.v27 = v24_.v24;
  CharacterBuilder_1083e90((_QWORD*)v3, (__int64)v24_.v24);
  result = (__int64)v24_.v27;
  if (v24_.v27 == v24_.v24) {
    v12 = 32;
  }
  else {
    if (v24_.v27 == nullptr) {
      return result;
    }
    v12 = 40;
  }
  return (*(__int64 (**)(__int64))(*v24_.v27 + v12))((__int64)v24_.v27);
}

#pragma GCC visibility pop
