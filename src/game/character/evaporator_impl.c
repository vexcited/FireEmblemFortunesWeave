#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_character_EvaporatorImpl_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 EvaporatorImpl_Destructor(__int64 a1);
__int64 EvaporatorImpl_DeletingDestructor(__int64 a1);
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

__int64 EvaporatorImpl_Destructor(__int64 a1)
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
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
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
  if (v6 != 0) {
    goto LABEL_11;
  }
LABEL_14:
  v8 = *(_QWORD*)(a1 + 160);
  if (v8 != 0) {
    std___1___shared_weak_count___release_weak(v8);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 EvaporatorImpl_DeletingDestructor(__int64 a1)
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
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
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
  if (v7 != 0) {
    goto LABEL_11;
  }
LABEL_14:
  v9 = *(_QWORD*)(a1 + 160);
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v10 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v10 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10);
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
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  _BYTE* v8;
  _BYTE* v9;
  _BYTE* v10;
  _BYTE* v11;
  _BYTE* v12;
  int v13;
  _BYTE* v14;
  int v15;
  _BYTE* v16;
  _BYTE* v17;
  _BYTE* v18;
  int v19;
  _BYTE* v20;
  int v21;
  __int64 v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64 v25;
  unsigned __int64 v26;
  bool v27;
  unsigned __int64 v28;
  _BYTE* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int8* v33;
  char* v34;
  unsigned __int8* v35;
  int v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  __int64 v41;
  char* v42;
  __int64 v43;
  long double v44;
  __int64 v45;
  __int64 v46;
  char* v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _QWORD* v56;
  _QWORD* v57;
  _QWORD* v58;
  char v59;
  __int64 v60;
  __int64 v61;
  long double v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  char* v67;
  __int64 v68;
  __int64 v69;
  char* v70;
  __int64 v71;
  unsigned __int64 v72;
  unsigned __int8* v73;
  _QWORD* v74;
  _QWORD* v75;
  __int64 v76;
  __int128 v77;

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
        v7 = *(_BYTE**)(v5 + 11752);
        if (v7 != nullptr && *v7 == 42) {
          v8 = v7 + 1;
          if (v7[1] == 10) {
            v9 = v7;
          }
          else {
            v9 = v7 + 1;
            if (v7[2] != 10) {
              v9 = v7 + 2;
              if (v7[3] != 10) {
                v9 = v7 + 3;
                if (v7[4] != 10) {
                  v9 = v7 + 4;
                  if (v7[5] != 10) {
                    v9 = v7 + 5;
                    if (v7[6] != 10) {
                      v11 = v7 + 7;
                      v9 = v7 + 6;
                      if (v7[7] != 10) {
                        v13 = (unsigned __int8)v7[8];
                        v12 = v7 + 8;
                        v9 = v11;
                        if (v13 != 10) {
                          v15 = (unsigned __int8)v8[8];
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
          std___1___shared_weak_count___release_weak(v6);
        }
      }
      else {
        v7 = *(_BYTE**)(v5 + 11752);
        if (*v7 == 42) {
          v10 = v7 + 1;
          if (v7[1] == 10) {
            v7 += 2;
          }
          else {
            v16 = v7 + 1;
            if (v7[2] != 10) {
              v16 = v7 + 2;
              if (v7[3] != 10) {
                v16 = v7 + 3;
                if (v7[4] != 10) {
                  v16 = v7 + 4;
                  if (v7[5] != 10) {
                    v16 = v7 + 5;
                    if (v7[6] != 10) {
                      v17 = v7 + 7;
                      v16 = v7 + 6;
                      if (v7[7] != 10) {
                        v19 = (unsigned __int8)v7[8];
                        v18 = v7 + 8;
                        v16 = v17;
                        if (v19 != 10) {
                          v21 = (unsigned __int8)v10[8];
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
      v75 = nullptr;
      v76 = 0;
      v74 = nullptr;
      v22 = strlen(v7);
      RuntimeBuffer_8924a0(&v74, v7, v22, 10);
      v23 = v74;
      v24 = v75;
      v25 = fw_memory_g_heap_manager_ptr;
      if (v74 != v75) {
        while (1) {
          v72 = 0;
          v73 = nullptr;
          v71 = 0;
          v69 = 0;
          v70 = nullptr;
          v68 = 0;
          v26 = *(unsigned __int8*)v23;
          v27 = (v26 & 1) == 0;
          v28 = v26 >> 1;
          if (v27) {
            v29 = (char*)v23 + 1;
          }
          else {
            v29 = (_BYTE*)v23[2];
          }
          if (v27) {
            v30 = v28;
          }
          else {
            v30 = v23[1];
          }
          if ((GameRoutine_109ecc0(v29, v30, (__int64)&v71, (__int64)&v68) &
               1) == 0) {
            if ((v71 & 1) != 0 && v73 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) != 0) {
                v31 = 128;
              }
              else {
                v31 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v25 + v31);
            }
            v32 = *v23;
            v33 = (unsigned __int8*)v23[2];
            v72 = v23[1];
            v73 = v33;
            v71 = v32;
            *(_WORD*)v23 = 0;
            if ((v68 & 1) != 0) {
              v69 = 12;
              v34 = v70;
            }
            else {
              LOBYTE(v68) = 24;
              v34 = (char*)&v68 + 1;
            }
            strcpy(v34, "Loc_C_Center");
          }
          if ((v71 & 1) != 0) {
            v35 = v73;
          }
          else {
            v35 = (unsigned __int8*)&v71 + 1;
          }
          game_10f8f00((void*)((unsigned __int8*)&v65), v35,
                       *(_DWORD*)(v3 + 340));
          v36 = v65 & 1;
          v37 = (unsigned __int64)(unsigned __int8)v65 >> 1;
          if (v36 != 0) {
            v37 = v66;
          }
          if (v37 == 0) {
            if (v36 != 0 && v67 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) != 0) {
                v38 = 128;
              }
              else {
                v38 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v25 + v38);
            }
            v39 = v71;
            LOWORD(v71) = 0;
            v65 = v39;
            v66 = v72;
            v36 = v39 & 1;
            v67 = (char*)v73;
          }
          v40 = v36 != 0 ? v67 : (char*)&v65 + 1;
          if ((GameRoutine_108e940(v40) & 1) == 0) {
            break;
          }
          v41 = *(_QWORD*)(v1 + 176);
          if (v41 != 0) {
            v42 = (v68 & 1) != 0 ? v70 : (char*)&v68 + 1;
            v43 = GameRoutine_109f1e0(v41, v42);
            if (v43 != 0) {
              v44 = *(long double*)(v43 + 48);
              v45 = *(_QWORD*)(*(_QWORD*)(v3 + 80) + 8LL);
              v46 = *(_QWORD*)(v3 + 80);
              v62 = v44;
              if ((v65 & 1) != 0) {
                v47 = v67;
              }
              else {
                v47 = (char*)&v65 + 1;
              }
              LODWORD(v48) = 0;
              *((float*)&v48 + 1) = *(float*)(v45 + 324) * 0x1.ca5dc20000000p+5;
              LODWORD(v44) = 1.0;
              v77 = v48;
              game_108d130((void*)(&v63), v46, v47, (float32x4_t*)&v62,
                           (__int64*)&v77, v44);
              v49 = v64;
              if (v64 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v64 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
                std___1___shared_weak_count___release_weak(v49);
              }
              ++*(_DWORD*)(v1 + 216);
              v25 = fw_memory_g_heap_manager_ptr;
            }
          }
          if ((v65 & 1) != 0 && v67 != nullptr) {
            if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) != 0) {
              v50 = 128;
            }
            else {
              v50 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v25 + v50);
          }
          if ((v68 & 1) != 0 && v70 != nullptr) {
            if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) != 0) {
              v51 = 128;
            }
            else {
              v51 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v25 + v51);
          }
          if ((v71 & 1) != 0 && v73 != nullptr) {
            if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) != 0) {
              v52 = 128;
            }
            else {
              v52 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v25 + v52);
          }
          v23 += 3;
          if (v23 == v24) {
            goto LABEL_120;
          }
        }
        if ((v65 & 1) != 0 && v67 != nullptr) {
          v53 = 128;
          if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) == 0) {
            v53 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v25 + v53);
        }
        if ((v68 & 1) != 0 && v70 != nullptr) {
          v54 = 128;
          if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) == 0) {
            v54 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v25 + v54);
        }
        if ((v71 & 1) != 0 && v73 != nullptr) {
          v55 = 128;
          if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) == 0) {
            v55 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v25 + v55);
        }
      }
    LABEL_120:
      v56 = v74;
      if (v74 != nullptr) {
        v57 = v75;
        if (v74 == v75) {
          goto LABEL_131;
        }
        v58 = v75;
        do {
          v59 = *((_BYTE*)v58 - 24);
          v58 -= 3;
          if ((v59 & 1) != 0 && *(v57 - 1) != 0) {
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
              v60 = 128;
            }
            else {
              v60 = 56;
            }
            nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v60);
          }
          v57 = v58;
        } while (v58 != v56);
        v75 = v56;
        if (v74 != nullptr) {
        LABEL_131:
          v61 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v61 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v61);
        }
      }
    }
  }
}

#pragma GCC visibility pop
