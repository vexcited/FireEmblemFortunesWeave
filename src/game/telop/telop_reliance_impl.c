#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1378190(__int64, __int64);
__int64 GameRoutine_1553220(_QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_8679c0(void);
__int64 LayoutAccessor_155ca60(_QWORD);
__int64 LayoutAccessor_155e140(_QWORD);
__int64 Se_80e330(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(void);
__int64 game_ProcInst_Register(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_2170810;
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_telop_TelopRelianceKnow_vtable[])();
extern __int64 (*game_telop_TelopSequence_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64* GameData_2130240[8];
__int64 TelopReliance_137ef10(__int64 a1, __int64 a2);
__int64 TelopReliance_1386f80(__int64 a1);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_ProcInst_Register_alt1(__int64) __asm__("game_ProcInst_Register");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
const char*
game_HashString32_alt1(const char* result) __asm__("game_HashString32");
void GameHr_8679c0();
void GameRoutine_1378190_alt1(__int64,
                              const char*) __asm__("GameRoutine_1378190");
void Se_80e330_alt1(__int64, const char*) __asm__("Se_80e330");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 TelopReliance_137ef10(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64* v8;
  __int64 v9;
  _BYTE* v10;
  char v11;
  char* v12;
  char* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  bool v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;

  if (a1 == 0) {
    return 0;
  }
  v4 = fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 856, 16, 0);
  memset_alt1(v5 + 144, 0, 0x2C8u);
  v6 = GameData_212c608[0];
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 32) = 0;
  v7 = (_QWORD*)(v5 + 32);
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)v5 = v6 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register_alt1(v5);
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 240) = 0;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 288) = 0;
  *(_QWORD*)(v5 + 296) = 0;
  *(_DWORD*)(v5 + 320) = 3;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = v5 + 200;
  *(_QWORD*)(v5 + 304) = 0;
  *(_QWORD*)(v5 + 312) = 0;
  *(_DWORD*)(v5 + 332) = 0;
  *(_BYTE*)(v5 + 338) = 0;
  *(_QWORD*)(v5 + 344) = 0;
  *(_QWORD*)(v5 + 352) = 0;
  *(_QWORD*)(v5 + 360) = 0;
  *(_QWORD*)(v5 + 368) = 0;
  *(_QWORD*)(v5 + 376) = 0;
  *(_QWORD*)(v5 + 384) = 0;
  *(_QWORD*)(v5 + 392) = 0;
  *(_QWORD*)(v5 + 400) = 0;
  *(_QWORD*)(v5 + 408) = 0;
  *(_QWORD*)(v5 + 416) = 0;
  *(_QWORD*)(v5 + 324) = 0;
  *(_DWORD*)(v5 + 248) = 1065353216;
  *(_QWORD*)(v5 + 424) = 0;
  *(_QWORD*)(v5 + 472) = 0;
  *(_QWORD*)(v5 + 480) = 0;
  *(_QWORD*)(v5 + 440) = 0;
  *(_QWORD*)(v5 + 448) = 0;
  *(_QWORD*)(v5 + 504) = 0;
  *(_QWORD*)(v5 + 512) = 0;
  *(_QWORD*)(v5 + 488) = 0;
  *(_QWORD*)(v5 + 496) = 0;
  *(_DWORD*)(v5 + 520) = 1065353216;
  *(_QWORD*)(v5 + 528) = 0;
  *(_QWORD*)(v5 + 536) = 0;
  *(_QWORD*)(v5 + 544) = 0;
  *(_WORD*)(v5 + 336) = 1;
  *(_DWORD*)(v5 + 552) = 1065353216;
  *(_WORD*)(v5 + 560) = 0;
  *(_WORD*)(v5 + 584) = 0;
  *(_BYTE*)(v5 + 608) = 0;
  *(_QWORD*)(v5 + 656) = 0;
  *(_QWORD*)(v5 + 648) = 0;
  *(_QWORD*)(v5 + 632) = 0;
  *(_QWORD*)(v5 + 624) = 0;
  *(_QWORD*)(v5 + 616) = 0;
  *(_QWORD*)(v5 + 688) = 0;
  *(_DWORD*)(v5 + 432) = 0x2000;
  *(_QWORD*)(v5 + 680) = 0;
  *(_QWORD*)(v5 + 672) = 0;
  *(_QWORD*)(v5 + 664) = 0;
  *(_DWORD*)(v5 + 696) = 1065353216;
  *(_QWORD*)(v5 + 720) = 0;
  *(_QWORD*)(v5 + 712) = 0;
  *(_QWORD*)(v5 + 704) = 0;
  *(_DWORD*)(v5 + 728) = 1065353216;
  *(_WORD*)(v5 + 736) = 0;
  *(_QWORD*)(v5 + 456) = 0;
  *(_QWORD*)(v5 + 464) = v5 + 472;
  *(_WORD*)(v5 + 760) = 0;
  *(_BYTE*)(v5 + 784) = 0;
  *(_QWORD*)(v5 + 792) = 0;
  *(_QWORD*)(v5 + 640) = v5 + 648;
  v8 = GameData_2130240[0] + 2;
  *(_BYTE*)(v5 + 800) = 0;
  *(_BYTE*)(v5 + 816) = 0;
  *(_BYTE*)(v5 + 820) = 0;
  *(_QWORD*)(v5 + 848) = 0;
  *(_QWORD*)(v5 + 840) = 0;
  *(_QWORD*)(v5 + 832) = 0;
  *(_QWORD*)(v5 + 808) = v8;
  *(_QWORD*)v5 = game_telop_TelopRelianceKnow_vtable;
  v9 = *(_QWORD*)(a1 + 40);
  if (v9 != 0) {
    *(_QWORD*)(v9 + 48) = v5;
    *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v5;
  *(_QWORD*)(v5 + 24) = "TelopRelianceKnow";
  *(_QWORD*)(v5 + 32) = a1;
  *(_DWORD*)(v5 + 140) =
      (unsigned int)game_HashString32_alt1("TelopRelianceKnow");
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 24;
  *(_QWORD*)(v5 + 80) = 1;
  *(_QWORD*)(v5 + 8) = &GameData_2170810;
  *(_QWORD*)(v5 + 16) = &GameData_2170810;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
      (*(_WORD*)(v5 + 136) & 0x100) == 0) {
    *(_WORD*)(v5 + 136) |= 0x100u;
  }
  v10 = (_BYTE*)*v7;
  v11 = *(_BYTE*)(*v7 + 138LL);
  if (v11 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v10 + 64LL))(*v7);
    v11 = v10[138];
  }
  v10[138] = v11 + 1;
  *(_WORD*)(v5 + 136) |= 2u;
  if ((*(_BYTE*)(v5 + 272) & 1) != 0) {
    *(_QWORD*)(v5 + 280) = 17;
    v12 = *(char**)(v5 + 288);
  }
  else {
    *(_BYTE*)(v5 + 272) = 34;
    v12 = (char*)(v5 + 273);
  }
  strcpy(v12, "Layout/Common.arc");
  if ((*(_BYTE*)(v5 + 296) & 1) != 0) {
    *(_QWORD*)(v5 + 304) = 17;
    v13 = *(char**)(v5 + 312);
  }
  else {
    *(_BYTE*)(v5 + 296) = 34;
    v13 = (char*)(v5 + 297);
  }
  strcpy(v13, "Common_TlpNewBond");
  if (*(_DWORD*)(v5 + 320) == 2) {
    v14 = (_QWORD*)game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v16 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
      v15 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
      v18 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
      v17 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
      v19 = v17 == v18;
      v20 = v15 - 1 + v16;
      v21 = v20 >> 7;
      v22 = v20 & 0x7F;
      v23 = 16 * (v17 - v18) - 1;
      v24 = *(_QWORD*)(v18 + 8 * v21);
      if (v19) {
        v23 = 0;
      }
      v25 = v24 + 32 * v22;
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
          *(_DWORD*)v25 & 0xFFFFFFFD |
          (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
      v14[21] = *(_QWORD*)(v25 + 24);
      v26 = *(_QWORD*)(v25 + 16);
      v14[27] = v15 - 1;
      v14[20] = v26;
      if ((unsigned __int64)(v23 - (v15 + v16) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
        v27 = *(_QWORD*)(v17 - 8);
        if (v27 != 0) {
          v28 = 128;
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
            v28 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v28, v27);
          v17 = v14[24];
        }
        v14[24] = v17 - 8;
      }
    }
  }
  *(_DWORD*)(v5 + 320) = 2;
  GameHr_8679c0();
  v29 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v30 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v30 & 0x10) == 0) {
      v30 = v30 & 0xFFFFFFE2 | 1;
      if (*(float*)(game_ProcGameSkipView_instance_ + 224) > 0x0.0p+0f) {
        *(_DWORD*)(game_ProcGameSkipView_instance_ + 224) = 0;
      }
    }
    *(_DWORD*)(v29 + 156) = v30 | 0x10;
  }
  *(_QWORD*)(v5 + 824) = a2;
  Se_80e330_alt1(v5, "SE_SYS_Telop_RelianceNewBond_In");
  GameRoutine_1378190_alt1(v5, "SE_SYS_Telop_RelianceNewBond_Out");
  return v5;
}

__int64 TelopReliance_1386f80(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;

  *(_QWORD*)a1 = game_telop_TelopSequence_vtable;
  if (*(_BYTE*)(a1 + 820) == 1) {
    GameRoutine_1553220(*(unsigned int*)(a1 + 816));
    if (*(_BYTE*)(a1 + 820) == 1) {
      *(_BYTE*)(a1 + 820) = 0;
    }
  }
  v2 = *(_QWORD*)(a1 + 152);
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  LayoutAccessor_155e140(a1 + 168);
  if (*(_DWORD*)(a1 + 320) == 2) {
    v4 = (_QWORD*)game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v6 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
      v5 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
      v8 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
      v7 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
      v9 = v7 == v8;
      v10 = v5 - 1 + v6;
      v11 = v10 >> 7;
      v12 = v10 & 0x7F;
      v13 = 16 * (v7 - v8) - 1;
      v14 = *(_QWORD*)(v8 + 8 * v11);
      if (v9) {
        v13 = 0;
      }
      v15 = v14 + 32 * v12;
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
          *(_DWORD*)v15 & 0xFFFFFFFD |
          (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
      v4[21] = *(_QWORD*)(v15 + 24);
      v16 = *(_QWORD*)(v15 + 16);
      v4[27] = v5 - 1;
      v4[20] = v16;
      if ((unsigned __int64)(v13 - (v5 + v6) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
        if (*(_QWORD*)(v7 - 8) != 0) {
          v17 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v17 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v17);
          v7 = v4[24];
        }
        v4[24] = v7 - 8;
      }
    }
  }
  LayoutAccessor_155ca60(a1 + 616);
  LayoutAccessor_155ca60(a1 + 440);
  if ((*(_BYTE*)(a1 + 392) & 1) != 0 && *(_QWORD*)(a1 + 408) != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18);
  }
  v19 = *(_QWORD*)(a1 + 368);
  if (v19 != 0) {
    v20 = *(_QWORD*)(a1 + 376);
    if (v19 == v20) {
      goto LABEL_35;
    }
    v21 = *(_QWORD*)(a1 + 376);
    v22 = fw_memory_g_heap_manager_ptr;
    do {
      v23 = *(_BYTE*)(v21 - 24);
      v21 -= 24;
      if ((v23 & 1) != 0 && *(_QWORD*)(v20 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) != 0) {
          v24 = 128;
        }
        else {
          v24 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v22 + v24);
      }
      v20 = v21;
    } while (v21 != v19);
    v25 = *(_QWORD*)(a1 + 368);
    *(_QWORD*)(a1 + 376) = v19;
    if (v25 != 0) {
    LABEL_35:
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v26);
    }
  }
  v27 = *(_QWORD*)(a1 + 344);
  if (v27 != 0) {
    v28 = *(_QWORD*)(a1 + 352);
    if (v27 == v28) {
      goto LABEL_49;
    }
    v29 = *(_QWORD*)(a1 + 352);
    v30 = fw_memory_g_heap_manager_ptr;
    do {
      v31 = *(_BYTE*)(v29 - 24);
      v29 -= 24;
      if ((v31 & 1) != 0 && *(_QWORD*)(v28 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v30 + 200LL) != 0) {
          v32 = 128;
        }
        else {
          v32 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v30 + v32);
      }
      v28 = v29;
    } while (v29 != v27);
    v33 = *(_QWORD*)(a1 + 344);
    *(_QWORD*)(a1 + 352) = v27;
    if (v33 != 0) {
    LABEL_49:
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v34);
    }
  }
  if ((*(_BYTE*)(a1 + 296) & 1) != 0 && *(_QWORD*)(a1 + 312) != 0) {
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v35);
  }
  if ((*(_BYTE*)(a1 + 272) & 1) != 0 && *(_QWORD*)(a1 + 288) != 0) {
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v36);
  }
  LayoutAccessor_155e140(a1 + 168);
  v37 = *(_QWORD*)(a1 + 264);
  if (v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
    std___1___shared_weak_count___release_weak(v37);
  }
  GameRoutine_1564060(a1 + 216);
  GameRoutine_1563f90(a1 + 192, *(_QWORD*)(a1 + 200));
  v38 = *(_QWORD*)(a1 + 176);
  if (v38 != 0) {
    std___1___shared_weak_count___release_weak(v38);
  }
  v39 = *(_QWORD*)(a1 + 160);
  if (v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
    std___1___shared_weak_count___release_weak(v39);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
