#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameSubquestData_1256b40(PSEUDO_X8, __int64*);
__attribute__((swiftcall)) void GameSubquestData_1256d00(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameSubquestData_1264da0(PSEUDO_X8, __int64*);
__int64* game_UnitPool_Get(_BYTE*);
__int64 GameRoutine_1261500(__int64*, __int64, __int64);
__int64 ProcList_9bd480(__int64);
__int64 RidePool_93d820(__int64 result);
__int64 RidePool_93d8e0(__int64);
__int64 UnitHeroes_6d2b90(__int64, unsigned __int8*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_ProcList_Call_9bcfa0(__int64, __int64);
__int64 game_anonymous_1261cc0(__int64 result, int*, int*, int*);
__int64 std___1___next_prime(unsigned __int64);
extern __int64 (*GameData_201d888[])();
extern __int64 (*game_anonymous_DeliveryItemExecutorBase_vtable[])();
extern __int64 (*game_anonymous_DeliveryItemExecutor_vtable[])();
extern __int64 (*game_anonymous_DeliveryKindExecutor_vtable[])();
extern __int64 (*game_anonymous_DeliveryRideExecutor_vtable[])();
extern __int64* GameData_212c8a0;
extern __int64* GameData_212c8b0[11];
extern __int64 GameData_212cf88[4];
extern __int64 fw_memory_g_heap_manager_ptr;
void GameHr_1261760(_QWORD*);
void GameSubquestData_125ec20(__int64, __int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_anonymous_12549c0(__int64 a1);
void game_anonymous_1260fa0(__int64* a1, __int64* a2, _BYTE* a3);
void game_anonymous_1261f00(__int64 a1, unsigned __int64 a2);

void game_anonymous_12549c0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* i;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10[3];
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;

  GameSubquestData_1264da0((void*)(v10), *(__int64**)(a1 + 152));
  v2 = v10[0];
  v3 = v10[1];
  if (v10[1] != v10[0]) {
    v4 = ProcList_9bd480(a1);
    if (v4 != 0) {
      v5 = v4;
      for (i = (__int64*)v2; i != (__int64*)v3; ++i) {
        v8 = *i;
        v11_.v12 = v11_.v11;
        v11_.v11[0] = GameData_201d888;
        v11_.v11[1] = v8;
        game_ProcList_Call_9bcfa0(v5, (__int64)v11_.v11);
        if (v11_.v12 == v11_.v11) {
          v7 = 32;
        }
        else {
          if (v11_.v12 == nullptr) {
            continue;
          }
          v7 = 40;
        }
        (*(void (**)(__int64))(*v11_.v12 + v7))((__int64)v11_.v12);
      }
    }
  }
  if (v2 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                  v2);
  }
}

void game_anonymous_1260fa0(__int64* a1, __int64* a2, _BYTE* a3)
{
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  unsigned __int8* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;
  int v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  int v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 (**v58)();
  __int64 v59;
  struct {
    __int64 v60;
    _QWORD* v61;
    __int64 v62;
    __int64 v63;
    int v64;
    int v65;
    __int64 v66;
    __int64 v67;
    __int64 v68;
    __int64 v69;
    int v70;
    char gap100_[4];
    int v71;
  } v60_;
  struct {
    __int64* v72;
    __int64 v73;
  } v72_;
  int v74;
  int v75;
  int v76;

  if ((*a3 & 2) != 0) {
    return;
  }
  v4 = *a1;
  if (a2[1] != *a2) {
    if (*(_WORD*)(*a1 + 320) != 0 ||
        (v55 = *(_QWORD*)(v4 + 344)) != 0 && *(_WORD*)(v55 + 40) != 0) {
      v5 = a2;
      GameSubquestData_125ec20(*a2, a2[1]);
      v4 = *a1;
      a2 = v5;
    }
    if (*(_QWORD*)(v4 + 360) == 0) {
      return;
    }
    v6 = *a2;
    v7 = a2[1];
    if (*a2 == v7) {
      return;
    }
    v8 = (__int64*)GameData_212cf88[0];
    v9 = GameData_212c8a0;
    v10 = (unsigned __int8*)GameData_212c8b0[0];
    while (1) {
      v11 = *(_QWORD*)v6;
      if (*(_QWORD*)v6 != 0) {
        break;
      }
      v12 = *(unsigned int*)(v6 + 8);
      if ((v12 & 0x80000000) == 0) {
        v13 = *v8;
        v14 = v12 << 6;
      LABEL_14:
        v15 =
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v13 + 8) + 120LL) + v14);
        if (v15 != 0 && *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8 * v15) +
                                  108LL) == 0) {
          RidePool_93d820(v12);
        }
      }
    LABEL_8:
      v6 += 16;
      if (v6 == v7) {
        return;
      }
    }
    v12 = RidePool_93d8e0(*(_QWORD*)v6);
    if ((v12 & 0x80000000) != 0) {
      if (*(_BYTE*)(v11 + 1880) != 0 &&
          *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                               8LL * *(unsigned __int8*)(v11 + 1880)) +
                    108LL) == 0) {
        UnitHeroes_6d2b90(v11, v10);
      }
      goto LABEL_8;
    }
    v13 = *v8;
    v14 = (unsigned __int64)(unsigned int)v12 << 6;
    goto LABEL_14;
  }
  if (*(_WORD*)(*a1 + 320) != 0) {
    GameSubquestData_1256b40((void*)((__int64*)&v72_.v72), a1);
    v17 = *a1;
    v18 = v72_.v72;
    v19 = v72_.v73;
    v58 = game_anonymous_DeliveryItemExecutorBase_vtable;
    v60_.v60 = 0;
    v60_.v61 = nullptr;
    v60_.v62 = 0;
    v60_.v63 = 0;
    v60_.v64 = 1065353216;
    LODWORD(v59) = *(unsigned __int8*)(v17 + 368);
    if (v72_.v72 != (__int64*)v72_.v73) {
      v20 = v72_.v72;
      do {
        v21 = *v20++;
        v74 = 0;
        v22 = *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(v21 + 24) + 600LL) +
                                   16LL);
        v75 = *(_DWORD*)(v21 + 76);
        v76 = v22;
        game_anonymous_1261cc0((__int64)&v60_.v60, &v76, &v74, &v75);
      } while (v20 != (__int64*)v19);
    }
    v60_.v68 = 0;
    v60_.v69 = 0;
    v60_.v66 = 0;
    v60_.v67 = 0;
    v60_.v70 = 1065353216;
    v58 = game_anonymous_DeliveryItemExecutor_vtable;
    GameRoutine_1261500(v18, v19, (__int64)&v58);
    GameHr_1261760(&v58);
    if (v18 != nullptr) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, (__int64)v18);
    }
    v4 = *a1;
  }
  v24 = *(_QWORD*)(v4 + 344);
  if (v24 != 0 && *(_WORD*)(v24 + 40) != 0) {
    GameSubquestData_1256d00((void*)((__int64*)&v72_.v72), (__int64)a1);
    v26 = *a1;
    v27 = v72_.v72;
    v28 = v72_.v73;
    v58 = game_anonymous_DeliveryItemExecutorBase_vtable;
    v60_.v60 = 0;
    v60_.v61 = nullptr;
    v60_.v62 = 0;
    v60_.v63 = 0;
    v60_.v64 = 1065353216;
    LODWORD(v59) = *(unsigned __int8*)(v26 + 368);
    if (v72_.v72 != (__int64*)v72_.v73) {
      v29 = v72_.v72;
      do {
        v30 = *v29++;
        v74 = 0;
        v31 = *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(v30 + 24) + 600LL) +
                                   16LL);
        v75 = *(_DWORD*)(v30 + 76);
        v76 = v31;
        game_anonymous_1261cc0((__int64)&v60_.v60, &v76, &v74, &v75);
      } while (v29 != (__int64*)v28);
    }
    v60_.v68 = 0;
    v60_.v69 = 0;
    v60_.v66 = 0;
    v60_.v67 = 0;
    v60_.v70 = 1065353216;
    v60_.v71 = 0;
    v58 = game_anonymous_DeliveryKindExecutor_vtable;
    GameRoutine_1261500(v27, v28, (__int64)&v58);
    GameHr_1261760(&v58);
    if (v27 != nullptr) {
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, (__int64)v27);
    }
    v4 = *a1;
  }
  v33 = *(_QWORD*)(v4 + 360);
  if (v33 != 0) {
    v60_.v60 = 0;
    v60_.v61 = nullptr;
    v60_.v62 = 0;
    v34 = *(unsigned __int8*)(v4 + 368);
    v58 = game_anonymous_DeliveryRideExecutor_vtable;
    v59 = 0;
    LODWORD(v60_.v63) = 1065353216;
    v35 = *(unsigned __int16*)(v33 + 16);
    v36 = *(unsigned __int8*)(v33 + 110);
    LODWORD(v72_.v72) = v35;
    v75 = 0;
    v76 = v36;
    game_anonymous_1261cc0((__int64)&v59, (int*)&v72_.v72, &v75, &v76);
    v37 = *a1;
    v60_.v64 = v34;
    v60_.v65 = 0;
    v38 = 0;
    v39 = 0;
    v40 = *(_QWORD*)(v37 + 360);
    v41 = GameData_212cf88[0];
    v42 = GameData_212c8a0;
    while (1) {
      v43 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v41 + 8LL) + 120LL);
      if (*(_BYTE*)(v43 + v38) == 0 ||
          *(_WORD*)(v40 + 16) != *(unsigned __int8*)(v43 + v38) ||
          *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v42 + 64) +
                               8LL * *(unsigned __int8*)(v43 + v38)) +
                    108LL) != 0 ||
          *(_BYTE*)(v43 + v38 + 3) != 0 &&
              game_UnitPool_Get((_BYTE*)(v43 + v38 + 3)) != nullptr) {
        if (v39 > 0xC6) {
          goto LABEL_50;
        }
      }
      else {
        v44 = ((__int64 (*)(__int64 (***)(void), __int64, _QWORD))v58[2])(
            &v58, v43 + v38, (unsigned int)v39);
        if (v39 > 0xC6 || v44 == 1) {
        LABEL_50:
          if ((((__int64 (*)(__int64 (***)(void)))v58[4])(&v58) & 1) != 0) {
            ((void (*)(__int64 (***)(void)))v58[5])(&v58);
          }
          v58 = game_anonymous_DeliveryRideExecutor_vtable;
          v45 = v60_.v61;
          if (v60_.v61 != nullptr) {
            v46 = fw_memory_g_heap_manager_ptr;
            do {
              v51 = (__int64)v45;
              v45 = (_QWORD*)*v45;
              v48 = *(_QWORD*)(v51 + 32);
              if (v48 != 0) {
                v52 = *(_QWORD*)(v51 + 40);
                if (v48 == v52) {
                  goto LABEL_55;
                }
                do {
                  v53 = *(_QWORD*)(v52 - 24);
                  if (v53 != 0) {
                    *(_QWORD*)(v52 - 16) = v53;
                    if (*(_QWORD*)(*(_QWORD*)v46 + 200LL) != 0) {
                      v54 = 128;
                    }
                    else {
                      v54 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*(_QWORD*)v46 + v54, v53);
                  }
                  v52 -= 32;
                } while (v52 != v48);
                v47 = *(_QWORD*)(v51 + 32);
                *(_QWORD*)(v51 + 40) = v48;
                v48 = v47;
                if (v47 != 0) {
                LABEL_55:
                  if (*(_QWORD*)(*(_QWORD*)v46 + 200LL) != 0) {
                    v49 = 128;
                  }
                  else {
                    v49 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*(_QWORD*)v46 + v49, v48);
                }
              }
              if (*(_QWORD*)(*(_QWORD*)v46 + 200LL) != 0) {
                v50 = 128;
              }
              else {
                v50 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v46 + v50, v51);
            } while (v45 != nullptr);
          }
          v56 = v59;
          v59 = 0;
          if (v56 != 0) {
            v57 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v57 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v57, v56);
          }
          return;
        }
      }
      ++v39;
      v38 += 64;
    }
  }
}

void game_anonymous_1261f00(__int64 a1, unsigned __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int64 primeEm;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  bool v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* i;
  unsigned __int64 v20;
  unsigned __int64 v21;
  _QWORD* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  if (a2 == 1) {
    primeEm = 2;
  }
  else {
    primeEm = a2;
    if ((a2 & (a2 - 1)) != 0) {
      primeEm = std___1___next_prime(a2);
    }
  }
  v4 = *(_QWORD*)(a1 + 8);
  if (primeEm <= v4) {
    if (primeEm >= v4) {
      return;
    }
    v11 = v4 >= 3 && (v4 & (v4 - 1)) == 0;
    v12 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                         *(float*)(a1 + 32));
    if (v11) {
      v24 = 1LL << (-(char)__clz(v12 - 1) & 63);
      if (v12 >= 2) {
        v12 = v24;
      }
    }
    else {
      v12 = std___1___next_prime(v12);
    }
    if (primeEm <= v12) {
      primeEm = v12;
    }
    if (primeEm >= v4) {
      return;
    }
    if (primeEm == 0) {
      v25 = *(_QWORD*)a1;
      *(_QWORD*)a1 = 0;
      if (v25 != 0) {
        v26 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v25);
      }
      *(_QWORD*)(a1 + 8) = 0;
      return;
    }
  }
  if (primeEm >> 61 != 0) {
    GameRoutine_60a210();
  }
  v5 = fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      8 * primeEm, 16, 0);
  v7 = *(_QWORD*)a1;
  *(_QWORD*)a1 = v6;
  if (v7 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v8, v7);
  }
  v9 = primeEm & 7;
  *(_QWORD*)(a1 + 8) = primeEm;
  if (primeEm >= 8) {
    v10 = 0;
    do {
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v10) = 0;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v10 + 8) = 0;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v10 + 16) = 0;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v10 + 24) = 0;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v10 + 32) = 0;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v10 + 40) = 0;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v10 + 48) = 0;
      v13 = *(_QWORD*)a1 + 8 * v10;
      v10 += 8;
      *(_QWORD*)(v13 + 56) = 0;
    } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v10);
  }
  else {
    v10 = 0;
  }
  if ((primeEm & 7) != 0) {
    v14 = 8 * v10;
    do {
      --v9;
      *(_QWORD*)(*(_QWORD*)a1 + v14) = 0;
      v14 += 8;
    } while (v9 != 0);
  }
  v16 = a1 + 16;
  v15 = *(_QWORD**)(a1 + 16);
  if (v15 != nullptr) {
    v17 = v15[1];
    v18 = primeEm - 1;
    if ((primeEm & (primeEm - 1)) == 0) {
      v21 = v17 & v18;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v21) = v16;
      while (1) {
        v22 = (_QWORD*)*v15;
        if (*v15 == 0) {
          break;
        }
        v23 = v22[1] & v18;
        if (v23 == v21) {
          v15 = (_QWORD*)*v15;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v23) != 0) {
          *v15 = *v22;
          *v22 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v23);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v23) = v22;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v23) = v15;
          v15 = v22;
          v21 = v23;
        }
      }
      return;
    }
    if (v17 >= primeEm) {
      v17 %= primeEm;
    }
    *(_QWORD*)(*(_QWORD*)a1 + 8 * v17) = v16;
    for (i = (_QWORD*)*v15; i != nullptr; v17 = v20) {
      v20 = i[1];
      if (v20 >= primeEm) {
        v20 %= primeEm;
      }
      if (v20 != v17) {
        if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v20) == 0) {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v20) = v15;
          goto LABEL_32;
        }
        *v15 = *i;
        *i = **(_QWORD**)(*(_QWORD*)a1 + 8 * v20);
        **(_QWORD**)(*(_QWORD*)a1 + 8 * v20) = i;
        i = v15;
      }
      v20 = v17;
    LABEL_32:
      v15 = i;
      i = (_QWORD*)*i;
    }
  }
}

#pragma GCC visibility pop
