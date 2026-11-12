#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e140(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_UIBase_vtable[])();
extern __int64 (*game_hub_UIMiniMap_vtable[])();
extern __int64 GameData_220b6e0;
__int64 UIMiniMap_Destructor(_QWORD* a1);
_QWORD* ui_LayoutAccessor_Setup_155dda0(_QWORD*, _QWORD*);
__attribute__((swiftcall)) void game_1366bd0(PSEUDO_X8, __int64, __int64,
                                             __int64);
__int64* game_8224a0(unsigned __int8);
__int64 GameRoutine_18f30f0(__int64, float);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_155ea30(__int64*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_18edba0(__int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64 (*GameData_1fa9430[])();
extern __int64 (*game_hub_AreaChangeIconList_vtable[])();
extern __int64 (*game_hub_CondTalkIconList_vtable[])();
extern __int64 (*game_hub_MiniMap_vtable[])();
extern __int64 (*game_hub_QuestIconList_vtable[])();
extern __int64* GameData_212fd90[5];
extern __int64* GameData_2132210[3];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
void UIBase_da1870(float*);
void game_18eeb40(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void UIMiniMap_Unknown2(__int64 a1);

__int64 UIMiniMap_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  char* v11;
  unsigned __int64 v12;
  __int64 v13;
  char* v14;
  char* v15;

  *a1 = game_hub_UIMiniMap_vtable;
  v2 = a1[11];
  a1[11] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = a1[7];
  if (v3 != 0) {
    *(_BYTE*)(v3 + 2376) = 1;
  }
  v4 = a1[8];
  a1[7] = 0;
  a1[8] = 0;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_155e140(a1[9]);
  v5 = a1[10];
  a1[9] = 0;
  a1[10] = 0;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  result = a1[11];
  a1[11] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v7 = a1[10];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = std___1___shared_weak_count___release_weak(v7);
  }
  v8 = a1[8];
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    result = std___1___shared_weak_count___release_weak(v8);
  }
  *a1 = game_hub_UIBase_vtable;
  v9 = GameData_220b6e0;
  v11 = *(char**)(GameData_220b6e0 + 136);
  v10 = *(char**)(GameData_220b6e0 + 144);
  if (v11 != v10) {
    v12 = v10 - v11 - 8;
    if ((~(_BYTE)v12 & 0x18) != 0) {
      v13 = ((unsigned __int8)((unsigned int)v12 >> 3) + 1) & 3;
      while (*(_QWORD**)v11 != a1) {
        v11 += 8;
        if (--v13 == 0) {
          goto LABEL_24;
        }
      }
    }
    else {
    LABEL_24:
      if (v12 < 0x18) {
        return result;
      }
      for (v11 += 16;; v11 += 32) {
        if (*((_QWORD**)v11 - 2) == a1) {
          v11 -= 16;
          goto LABEL_35;
        }
        if (*((_QWORD**)v11 - 1) == a1) {
          v11 -= 8;
          goto LABEL_35;
        }
        if (*(_QWORD**)v11 == a1) {
          goto LABEL_35;
        }
        if (*((_QWORD**)v11 + 1) == a1) {
          break;
        }
        v14 = v11 + 16;
        if (v14 == v10) {
          return result;
        }
      }
      v11 += 8;
    }
  }

LABEL_35:
  if (v11 != v10) {
    v15 = v11 + 8;
    if (v11 + 8 != v10) {
      do {
        if (*(_QWORD**)v15 != a1) {
          *(_QWORD*)v11 = *(_QWORD*)v15;
          v11 += 8;
        }
        v15 += 8;
      } while (v15 != v10);
      v10 = *(char**)(v9 + 144);
    }
  }
  if (v11 != v10) {
    *(_QWORD*)(v9 + 144) = v11;
  }
  return result;
}

void UIMiniMap_Unknown2(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  char v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  struct {
    __int64 v44;
    __int64 v45;
  } v44_;
  struct {
    _QWORD v46[6];
    int v47;
    char gap68_[4];
    __int64 v48;
    __int64 v49;
    __int64 v50;
  } v46_;

  UIBase_da1870((float*)a1);
  v2 = *(_DWORD*)(a1 + 48);
  if (v2 != 1) {
    if (v2 == 0) {
      v46_.v48 = 0;
      v46_.v49 = 0;
      v46_.v50 = 0;
      v46_.v47 = 0;
      v46_.v46[0] = 0x800000018LL;
      v46_.v46[1] = 0x500000040LL;
      v46_.v46[2] = 0x10000000100000LL;
      memset(&v46_.v46[3], 0, 24);
      game_1366bd0((void*)(&v44_.v44), (__int64)"Layout/Hub.arc",
                   (__int64)"Hub_MiniMap", (__int64)v46_.v46);
      v3 = v44_.v44;
      v4 = v44_.v45;
      v5 = *(_QWORD*)(a1 + 64);
      v44_.v44 = 0;
      v44_.v45 = 0;
      *(_QWORD*)(a1 + 56) = v3;
      *(_QWORD*)(a1 + 64) = v4;
      if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak_alt1(v5);
      }
      v6 = v44_.v45;
      if (v44_.v45 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v44_.v45 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak_alt1(v6);
      }
      v7 = (__int64*)fw_memory_g_heap_manager_ptr;
      v8 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
      v9 = *(_QWORD*)(a1 + 80);
      *(_QWORD*)(v8 + 8) = 0;
      *(_QWORD*)(v8 + 16) = 0;
      *(_QWORD*)(v8 + 32) = 0;
      *(_QWORD*)(v8 + 40) = 0;
      *(_QWORD*)(v8 + 64) = 0;
      *(_QWORD*)(v8 + 72) = 0;
      *(_QWORD*)(v8 + 80) = 0;
      *(_QWORD*)(v8 + 88) = 0;
      *(_QWORD*)(v8 + 96) = 0;
      *(_QWORD*)(v8 + 112) = 0;
      *(_QWORD*)(v8 + 120) = 0;
      *(_QWORD*)(a1 + 80) = v8;
      *(_QWORD*)v8 = GameData_1fa9430;
      *(_QWORD*)(v8 + 56) = 0;
      *(_QWORD*)(v8 + 48) = v8 + 56;
      *(_DWORD*)(v8 + 104) = 1065353216;
      *(_QWORD*)(v8 + 24) = 0;
      *(_QWORD*)(a1 + 72) = v8 + 24;
      if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak_alt1(v9);
      }
      v11 = *(_QWORD*)(a1 + 64);
      v10 = *(_QWORD**)(a1 + 72);
      v44_.v44 = *(_QWORD*)(a1 + 56);
      v44_.v45 = v11;
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
        ui_LayoutAccessor_Setup_155dda0(v10, &v44_.v44);
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak_alt1(v11);
        }
      }
      else {
        ui_LayoutAccessor_Setup_155dda0(v10, &v44_.v44);
      }
      v25 = fw_memory_HeapManager_Allocate(*v7, 816, 16, 0);
      v26 = *(_QWORD*)(a1 + 72);
      v27 = *(_QWORD*)(a1 + 80);
      v28 = v25;
      if (v27 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 16), 1u,
                                  memory_order_relaxed);
        *(_QWORD*)(v25 + 16) = v26;
        *(_QWORD*)(v25 + 24) = v27;
        *(_QWORD*)v25 = game_hub_MiniMap_vtable;
        *(_QWORD*)(v25 + 8) = 0x3F80000000000000LL;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 16), 1u,
                                  memory_order_relaxed);
      }
      else {
        v29 = GameData_2132210[0];
        *(_QWORD*)(v25 + 16) = v26;
        *(_QWORD*)(v25 + 24) = 0;
        *(_QWORD*)v25 = v29 + 2;
        *(_QWORD*)(v25 + 8) = 0x3F80000000000000LL;
      }
      *(_DWORD*)(v25 + 32) = 0;
      *(_QWORD*)(v25 + 152) = 0;
      *(_QWORD*)(v25 + 160) = 0;
      *(_QWORD*)(v25 + 168) = 0;
      *(_QWORD*)(v25 + 176) = 0;
      *(_QWORD*)(v25 + 40) = 0;
      *(_QWORD*)(v25 + 48) = 0;
      *(_QWORD*)(v25 + 56) = 0;
      *(_QWORD*)(v25 + 64) = 0;
      *(_QWORD*)(v25 + 72) = 0;
      *(_QWORD*)(v25 + 80) = 0;
      *(_QWORD*)(v25 + 88) = 0;
      *(_QWORD*)(v25 + 96) = 0;
      *(_QWORD*)(v25 + 104) = 0;
      *(_QWORD*)(v25 + 112) = 0;
      *(_QWORD*)(v25 + 120) = 0;
      *(_QWORD*)(v25 + 125) = 0;
      v30 = GameData_212fd90[0] + 2;
      *(_QWORD*)(v25 + 192) = 0;
      *(_QWORD*)(v25 + 200) = 0;
      *(_QWORD*)(v25 + 224) = 0;
      *(_QWORD*)(v25 + 232) = 0;
      *(_QWORD*)(v25 + 240) = 0;
      *(_QWORD*)(v25 + 248) = 0;
      *(_QWORD*)(v25 + 256) = 0;
      *(_QWORD*)(v25 + 136) = v30;
      *(_QWORD*)(v25 + 144) = 0;
      *(_DWORD*)(v25 + 184) = 128;
      *(_QWORD*)(v25 + 288) = 0;
      *(_QWORD*)(v25 + 296) = 0;
      *(_QWORD*)(v25 + 304) = 0;
      *(_QWORD*)(v25 + 312) = 0;
      *(_QWORD*)(v25 + 208) = 0;
      *(_QWORD*)(v25 + 216) = game_hub_CondTalkIconList_vtable;
      *(_DWORD*)(v25 + 264) = 10;
      *(_QWORD*)(v25 + 320) = 0;
      *(_QWORD*)(v25 + 328) = 0;
      *(_QWORD*)(v25 + 384) = 0;
      *(_QWORD*)(v25 + 392) = 0;
      *(_QWORD*)(v25 + 368) = 0;
      *(_QWORD*)(v25 + 376) = 0;
      *(_QWORD*)(v25 + 272) = game_hub_AreaChangeIconList_vtable;
      *(_QWORD*)(v25 + 280) = 0;
      *(_QWORD*)(v25 + 336) = 0;
      *(_QWORD*)(v25 + 344) = 0x800000010LL;
      *(_QWORD*)(v25 + 400) = 0;
      *(_QWORD*)(v25 + 408) = 0;
      *(_WORD*)(v25 + 600) = 0;
      *(_WORD*)(v25 + 648) = 0;
      *(_QWORD*)(v25 + 672) = 0;
      *(_QWORD*)(v25 + 800) = 0;
      *(_QWORD*)(v25 + 792) = 0;
      *(_QWORD*)(v25 + 784) = 0;
      *(_QWORD*)(v25 + 560) = 0;
      *(_QWORD*)(v25 + 552) = 0;
      *(_QWORD*)(v25 + 544) = 0;
      *(_QWORD*)(v25 + 536) = 0;
      *(_QWORD*)(v25 + 528) = 0;
      *(_QWORD*)(v25 + 520) = 0;
      *(_QWORD*)(v25 + 504) = 0;
      *(_QWORD*)(v25 + 512) = 0;
      *(_QWORD*)(v25 + 488) = 0;
      *(_QWORD*)(v25 + 496) = 0;
      *(_QWORD*)(v25 + 472) = 0;
      *(_QWORD*)(v25 + 480) = 0;
      *(_QWORD*)(v25 + 456) = 0;
      *(_QWORD*)(v25 + 464) = 0;
      *(_QWORD*)(v25 + 440) = 0;
      *(_QWORD*)(v25 + 448) = 0;
      *(_QWORD*)(v25 + 432) = 0;
      *(_BYTE*)(v25 + 592) = 0;
      *(_QWORD*)(v25 + 584) = 0;
      *(_QWORD*)(v25 + 576) = 0;
      *(_QWORD*)(v25 + 608) = 0;
      *(_QWORD*)(v25 + 616) = 0;
      *(_WORD*)(v25 + 624) = 0;
      *(_QWORD*)(v25 + 688) = 0;
      *(_QWORD*)(v25 + 696) = 0;
      *(_QWORD*)(v25 + 704) = 0;
      *(_DWORD*)(v25 + 712) = 0;
      *(_QWORD*)(v25 + 720) = 0;
      *(_QWORD*)(v25 + 728) = 0;
      *(_QWORD*)(v25 + 736) = 0;
      *(_QWORD*)(v25 + 744) = 0;
      *(_QWORD*)(v25 + 752) = 0;
      *(_QWORD*)(v25 + 760) = 0;
      *(_QWORD*)(v25 + 768) = 0;
      *(_QWORD*)(v25 + 352) = game_hub_QuestIconList_vtable;
      *(_QWORD*)(v25 + 360) = 0;
      *(_QWORD*)(v25 + 416) = 0;
      *(_QWORD*)(v25 + 424) = 0x2041800000LL;
      *(_DWORD*)(v25 + 775) = 0;
      game_18edba0(v25);
      v31 = *(_QWORD*)(a1 + 88);
      *(_QWORD*)(a1 + 88) = v28;
      if (v31 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v31 + 8LL))(v31);
      }
      if (v27 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v27);
      }
      *(_DWORD*)(a1 + 48) = 1;
      v32 = v46_.v48;
      if (v46_.v48 != 0) {
        v33 = v46_.v49;
        if (v46_.v48 == v46_.v49) {
          goto LABEL_50;
        }
        v34 = v46_.v49;
        do {
          v35 = *(_BYTE*)(v34 - 24);
          v34 -= 24;
          if ((v35 & 1) != 0) {
            v36 = *(_QWORD*)(v33 - 8);
            if (v36 != 0) {
              if (*(_QWORD*)(*v7 + 200) != 0) {
                v37 = 128;
              }
              else {
                v37 = 56;
              }
              nn_mem_StandardAllocator_Free(*v7 + v37, v36);
            }
          }
          v33 = v34;
        } while (v34 != v32);
        v46_.v49 = v32;
        v32 = v46_.v48;
        if (v46_.v48 != 0) {
        LABEL_50:
          v38 = 128;
          if (*(_QWORD*)(*v7 + 200) == 0) {
            v38 = 56;
          }
          nn_mem_StandardAllocator_Free(*v7 + v38, v32);
        }
      }
    }
    return;
  }
  v12 = *(_QWORD*)(a1 + 88);
  v13 = game_8224a0(0x1Eu);
  if (game_GameModeData_instance_ != 0) {
    v14 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v13);
    if (v14 != 0) {
      v15 = *(_DWORD*)(v14 + 32) == 1;
      v16 = *(_QWORD*)(v12 + 24);
      if (v16 == 0) {
        goto LABEL_27;
      }
    LABEL_20:
      v17 = std___1___shared_weak_count_lock(v16);
      if (v17 != 0) {
        v18 = v17;
        v19 = *(_QWORD*)(v12 + 16);
        if (v19 != 0) {
          LayoutAccessor_155e830(v19, v15);
          if (*(unsigned __int8*)(v12 + 601) != v15) {
            *(_BYTE*)(v12 + 600) = 1;
          }
          *(_BYTE*)(v12 + 601) = v15;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
          std___1___shared_weak_count___release_weak_alt1(v18);
        }
      }
      goto LABEL_27;
    }
  }
  v15 = 0;
  v16 = *(_QWORD*)(v12 + 24);
  if (v16 != 0) {
    goto LABEL_20;
  }
LABEL_27:
  v20 = *(_QWORD*)(a1 + 88);
  v21 = *(_QWORD*)(v20 + 24);
  if (v21 != 0) {
    v22 = std___1___shared_weak_count_lock(v21);
    if (v22 != 0) {
      v23 = *(__int64**)(v20 + 16);
      v24 = v22;
      if (v23 != nullptr) {
        LODWORD(v12) = LayoutAccessor_155ea30(v23) ^ 1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
        std___1___shared_weak_count___release_weak_alt1(v24);
      }
      if (((v23 == nullptr) | v12 & 1) == 0) {
        GameRoutine_18f30f0(*(_QWORD*)(a1 + 88),
                            *(float*)(a1 + 12) / 0x1.fe00000000000p+7f);
        v39 = *(_QWORD*)(a1 + 88);
        v40 = *(_QWORD*)(v39 + 24);
        if (v40 != 0) {
          v41 = std___1___shared_weak_count_lock(v40);
          if (v41 != 0) {
            v42 = *(__int64**)(v39 + 16);
            v43 = v41;
            if (v42 != nullptr) {
              LODWORD(v12) = LayoutAccessor_155ea30(v42) ^ 1;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
              std___1___shared_weak_count___release_weak_alt1(v43);
            }
            if (((v42 == nullptr) | v12 & 1) == 0) {
              game_18eeb40(*(_QWORD*)(a1 + 88));
            }
          }
        }
      }
    }
  }
}

#pragma GCC visibility pop
