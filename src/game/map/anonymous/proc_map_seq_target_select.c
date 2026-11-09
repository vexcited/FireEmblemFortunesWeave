#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BattleSide_Destructor(_QWORD);
__int64 Camera_7bfee0(_QWORD, float);
__int64 GameRoutine_1553220(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_72a260(_QWORD);
__int64 GameRoutine_72b4a0(_QWORD);
__int64 GameRoutine_72b6c0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_UnitPool_Get(_QWORD, long double);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN* GameData_212c540;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1f983e0[])();
extern __int64 (*GameData_1f98468[])();
extern __int64 (*game_map_anonymous_ProcMapSeqTargetSelect_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d220[5];
extern __int64 GameData_212d228[4];
extern __int64 GameData_212d230[3];
extern __int64 GameData_212d238[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_map_g_map_sequence;
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfc0[10];
extern __int64* GameData_212cfc8[9];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212cff0[4];
extern __int64* GameData_212d258[2];
extern __int64* GameData_212da50[3];
__int64 ProcMapSeqTargetSelect_Destructor(__int64 a1, long double a2);

__int64 ProcMapSeqTargetSelect_Destructor(__int64 a1, long double a2)
{
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64* v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  bool v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  __int128 v31;
  _QWORD* v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  void (***v50)(_QWORD);
  void (***v51)(_QWORD);
  void (***v52)(_QWORD);
  __int64 v53;
  _QWORD* v54;
  __int64 v55;
  _QWORD* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64* v68;
  __int64* v69;
  __int64 v70;
  _QWORD* v71;
  __int64 v72;
  __int64 v74;
  int v75;

  *(_QWORD*)a1 = game_map_anonymous_ProcMapSeqTargetSelect_vtable;
  *(_QWORD*)(a1 + 208) = GameData_1f983e0;
  v3 = *(_QWORD**)GameData_212d020[0];
  v4 = GameData_212cff0[0];
  if (*(_QWORD*)GameData_212d020[0] != 0) {
    if (v3[10] != 0) {
      v5 = v3[11];
      v3[10] = 0;
      v3[11] = 0;
      if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
      }
      ++v3[23];
    }
    if (*(_BYTE*)(*v4 + 37100) == 1) {
      v6 = v3[16];
      if (*(_BYTE*)(v6 + 56) == 1) {
        *(_BYTE*)(v6 + 56) = 0;
      }
      if (v3[12] != 0) {
        v7 = v3[13];
        v3[12] = 0;
        v3[13] = 0;
        if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak(v7);
        }
        ++v3[22];
      }
    }
  }
  *(_QWORD*)(*(_QWORD*)GameData_212d220[0] + 152LL) = 0;
  if (*(_BYTE*)(*v4 + 37100) == 1 && *(_BYTE*)(*GameData_212cfd0[0] + 8) != 0) {
    v8 = game_UnitPool_Get(*GameData_212cfd0[0] + 8, a2);
    if (v8 != 0) {
      v9 = *(_DWORD*)(a1 + 280);
      if ((v9 & 0x80000000) == 0) {
        v10 = *GameData_212ce98[0];
        v11 = *(_DWORD*)(a1 + 284);
        *(_BYTE*)(v8 + 584) = v9;
        *(_BYTE*)(v8 + 585) = v11;
        v12 = *(_QWORD*)(v10 + 96);
        GameRoutine_72b4a0(v12);
        GameRoutine_72b6c0(v12);
        GameRoutine_72a260(*(_QWORD*)(v10 + 152));
        *(_QWORD*)(a1 + 280) = -1;
      }
    }
  }
  v13 = GameData_212cfc8[0];
  v14 = *(_QWORD**)(*GameData_212cfc8[0] + 432);
  v15 = v14[59] + v14[58] - 1LL;
  Camera_7bfee0(v14, *(float*)(*(_QWORD*)(v14[55] + 8 * (v15 >> 10)) +
                               4 * (v15 & 0x3FF)));
  v17 = v14[55];
  v16 = v14[56];
  v18 = v16 - v17;
  v19 = v16 == v17;
  v21 = v14[58];
  v20 = v14[59];
  v22 = (v18 << 7) - 1;
  if (v19) {
    v22 = 0;
  }
  v14[59] = v20 - 1;
  if ((unsigned __int64)(v22 - (v20 + v21) + 1) >= 0x800) {
    v23 = *(_QWORD*)(v16 - 8);
    if (v23 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v23);
      v16 = v14[56];
    }
    v14[56] = v16 - 8;
  }
  v25 = *v13;
  v75 = 0;
  v26 = *(_QWORD*)(v25 + 432);
  if (*(_BYTE*)(v26 + 120) == 1) {
    (*(void (**)(__int64, double, double))(*(_QWORD*)(v26 + 96) + 24LL))(
        v26 + 96, 0.0, 0.0);
    *(_DWORD*)(v26 + 104) = 0;
  LABEL_35:
    *(_DWORD*)(v26 + 108) = 0;
    *(_WORD*)(v26 + 120) = 256;
    goto LABEL_36;
  }
  if (*(float*)(v26 + 104) > 0.75) {
    (*(void (**)(__int64))(*(_QWORD*)(v26 + 96) + 16LL))(v26 + 96);
    v27 = *(_QWORD*)(v26 + 96);
    v28 = v26 + 96;
  LABEL_34:
    (*(void (**)(__int64))(v27 + 24))(v28);
    *(_DWORD*)(v26 + 104) = 1061158912;
    goto LABEL_35;
  }
  if (((*(__int64 (**)(__int64, int*, __int64))(*(_QWORD*)(v26 + 96) + 8LL))(
           v26 + 96, &v75, v26 + 128) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v26 + 96) + 16LL))(v26 + 96);
    v27 = *(_QWORD*)(v26 + 96);
    v28 = v26 + 96;
    goto LABEL_34;
  }

LABEL_36:
  v29 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v74 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v74;
    __cxa_guard_release(&GameData_21a6130);
  }
  *(_DWORD*)(v29 + 168) = 0;
  v30 = DWORD2(GameData_21a6120);
  *(_QWORD*)(v29 + 144) = GameData_21a6120;
  v31 = *(_OWORD*)(v29 + 144);
  *((_QWORD*)&v31 + 1) = v30;
  *(_OWORD*)(v29 + 144) = v31;
  GameRoutine_1553220(1);
  v32 = *(_QWORD**)(a1 + 23248);
  if (v32 != nullptr) {
    v33 = fw_memory_g_heap_manager_ptr;
    do {
      v34 = (_QWORD*)*v32;
      if (*(_QWORD*)(*(_QWORD*)v33 + 200LL) != 0) {
        v35 = 128;
      }
      else {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v33 + v35, v32);
      v32 = v34;
    } while (v34 != nullptr);
  }
  v36 = *(_QWORD*)(a1 + 23232);
  *(_QWORD*)(a1 + 23232) = 0;
  if (v36 != 0) {
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v37,
                                  v36);
  }
  v38 = *(_QWORD**)(a1 + 23208);
  if (v38 != nullptr) {
    v39 = fw_memory_g_heap_manager_ptr;
    do {
      v40 = (_QWORD*)*v38;
      if (*(_QWORD*)(*(_QWORD*)v39 + 200LL) != 0) {
        v41 = 128;
      }
      else {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v39 + v41, v38);
      v38 = v40;
    } while (v40 != nullptr);
  }
  v42 = *(_QWORD*)(a1 + 23192);
  *(_QWORD*)(a1 + 23192) = 0;
  if (v42 != 0) {
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v43,
                                  v42);
  }
  v44 = *(_QWORD*)(a1 + 23168);
  if (v44 != 0) {
    *(_QWORD*)(a1 + 23176) = v44;
    v45 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v45,
                                  v44);
  }
  v46 = *(_QWORD*)(a1 + 23144);
  if (v46 != 0) {
    *(_QWORD*)(a1 + 23152) = v46;
    v47 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v47,
                                  v46);
  }
  v48 = *(_QWORD*)(a1 + 23120);
  if (v48 != 0) {
    *(_QWORD*)(a1 + 23128) = v48;
    v49 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v49,
                                  v48);
  }
  v50 = *(void (****)(_QWORD))(a1 + 23096);
  if (v50 != nullptr) {
    v51 = *(void (****)(_QWORD))(a1 + 23104);
    if (v50 == v51) {
      goto LABEL_73;
    }
    do {
      v51 -= 4637;
      (**v51)(v51);
    } while (v51 != v50);
    v52 = *(void (****)(_QWORD))(a1 + 23096);
    *(_QWORD*)(a1 + 23104) = v50;
    v50 = v52;
    if (v52 != nullptr) {
    LABEL_73:
      v53 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v53 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v53, v50);
    }
  }
  v54 = *(_QWORD**)(a1 + 23072);
  *(_QWORD*)(a1 + 22920) = GameData_212d228[0] + 16;
  if (v54 != nullptr) {
    v55 = fw_memory_g_heap_manager_ptr;
    do {
      v56 = (_QWORD*)*v54;
      if (*(_QWORD*)(*(_QWORD*)v55 + 200LL) != 0) {
        v57 = 128;
      }
      else {
        v57 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v55 + v57, v54);
      v54 = v56;
    } while (v56 != nullptr);
  }
  v58 = *(_QWORD*)(a1 + 23056);
  *(_QWORD*)(a1 + 23056) = 0;
  if (v58 != 0) {
    v59 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v59 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v59,
                                  v58);
  }
  v60 = *(_QWORD*)(a1 + 22976);
  *(_QWORD*)(a1 + 22920) = GameData_212d230[0] + 16;
  if (v60 != 0) {
    *(_QWORD*)(a1 + 22984) = v60;
    v61 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v61 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v61,
                                  v60);
  }
  v62 = *(_QWORD*)(a1 + 22952);
  if (v62 != 0) {
    *(_QWORD*)(a1 + 22960) = v62;
    v63 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v63 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v63,
                                  v62);
  }
  v64 = *(_QWORD*)(a1 + 22928);
  if (v64 != 0) {
    *(_QWORD*)(a1 + 22936) = v64;
    v65 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v65 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v65,
                                  v64);
  }
  v66 = GameData_212d238[0] + 16;
  *(_QWORD*)(a1 + 11600) = GameData_212d238[0] + 16;
  v67 = *(_QWORD*)(a1 + 22904);
  v68 = GameData_212da50[0] + 2;
  *(_QWORD*)(a1 + 22896) = GameData_212da50[0] + 2;
  if (v67 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v67 + 8LL))(v67);
    *(_QWORD*)(a1 + 22904) = 0;
  }
  v69 = GameData_212d258[0] + 2;
  *(_QWORD*)(a1 + 11608) = GameData_212d258[0] + 2;
  BattleSide_Destructor(a1 + 13896);
  BattleSide_Destructor(a1 + 13136);
  BattleSide_Destructor(a1 + 12376);
  BattleSide_Destructor(a1 + 11616);
  v70 = *(_QWORD*)(a1 + 11592);
  *(_QWORD*)(a1 + 288) = v66;
  *(_QWORD*)(a1 + 11584) = v68;
  if (v70 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v70 + 8LL))(v70);
    *(_QWORD*)(a1 + 11592) = 0;
  }
  *(_QWORD*)(a1 + 296) = v69;
  BattleSide_Destructor(a1 + 2584);
  BattleSide_Destructor(a1 + 1824);
  BattleSide_Destructor(a1 + 1064);
  BattleSide_Destructor(a1 + 304);
  v71 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_1f98468;
  if (v71 == (_QWORD*)(a1 + 160)) {
    v72 = 32;
  }
  else {
    if (v71 == nullptr) {
      goto LABEL_107;
    }
    v72 = 40;
  }
  (*(void (**)(__int64))(*v71 + v72))((__int64)v71);

LABEL_107:
  game_map_g_map_sequence = 0;
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
