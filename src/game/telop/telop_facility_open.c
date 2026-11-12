#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1563280(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_173fe30(void);
__int64 GameRoutine_18eeb40(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
extern __int64 game_g_game_setting;
extern __int64* game_g_frame_clock_ptr[3];
__int64 TelopFacilityOpen_Unknown37(_QWORD* a1);
__int64 TelopFacilityOpen_Unknown43(__int64 a1);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void GameRoutine_1388320(PSEUDO_X8);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64* LayoutAccessor_155fbe0(__int64*, __int64);
__int64 GameRoutine_1595700(__int64*, unsigned int*, unsigned __int8*);
__int64 GameRoutine_ee3920(__int64*, __int64);
__int64 LayoutAccessor_1562cf0(__int64 result, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 GameRoutine_18edba0(__int64);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak();
char* game_util_Format(__int64, __int64, __int64, __int64, __int64, __int64,
                       __int64, __int64, char);
extern __int64 (*game_hub_AreaChangeIconList_vtable[])();
extern __int64 (*game_hub_CondTalkIconList_vtable[])();
extern __int64 (*game_hub_QuestIconList_vtable[])();
extern __int64* GameData_212fd90[5];
extern __int64* GameData_2132210[3];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_18eeb40_alt1(__int64) __asm__("GameRoutine_18eeb40");
void GameRoutine_18f3890(__int64, _QWORD*, long double);
void LayoutAccessor_1562680(__int64*, __int64, float);
void TextBoxEx_188ab20(__int64, _BYTE*);
__n128 TelopFacilityOpen_Unknown33_alt1(
    __int64* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8) __asm__("TelopFacilityOpen_Unknown33");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64*
LayoutAccessor_155fbe0_alt1(__int64*,
                            const char*) __asm__("LayoutAccessor_155fbe0");
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_ee3920(__int64*, __int64);
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 game_18edba0(__int64);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
void GameHr_18f3890(__int64, _QWORD*);
void game_18eeb40(__int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void TelopFacilityOpen_Unknown33(__int64* a1);

void TelopFacilityOpen_Unknown33(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  __int64* v9;
  __int64 v10;
  char* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  char* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  struct {
    __int64 v62;
    __int64 v63;
  } v62_;
  __int64 v64;
  struct {
    __int64 v65;
    __int64 v66;
    __int64 v67;
    __int64 v68;
    unsigned __int64 v69;
    __int64 v70;
    char gap72_[8];
    __int64 v71;
    __int64 v72;
  } v65_;
  struct {
    const char* v73;
    char* v74;
    unsigned __int64 v75;
  } v73_;

  v73_.v74 = nullptr;
  v73_.v75 = 0;
  v73_.v73 = nullptr;
  v1 = a1[104];
  v2 = a1[105];
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 == v2) {
    v19 = 0;
    goto LABEL_28;
  }
  v5 = v1 + 16;
  do {
    v65_.v71 = 0;
    v65_.v72 = 0;
    v65_.v65 = 0;
    v65_.v66 = 0;
    v65_.v67 = 0;
    v65_.v68 = 0;
    v65_.v69 = 0;
    v65_.v70 = 0;
    LODWORD(v64) = *(_DWORD*)(v5 - 16);
    if (&v64 != (__int64*)(v5 - 16)) {
      if ((*(_BYTE*)(v5 - 8) & 1) != 0) {
        GameRoutine_64df20(&v65_.v65, *(_QWORD*)(v5 + 8), *(_QWORD*)v5);
      }
      else {
        v6 = *(_QWORD*)(v5 - 8);
        v7 = *(_QWORD*)(v5 + 8);
        v65_.v66 = *(_QWORD*)v5;
        v65_.v67 = v7;
        v65_.v65 = v6;
      }
    }
    v8 = game_util_Format_alt1(
        "L_OpenFacility%02d",
        -858993459 *
            (unsigned int)((unsigned __int64)(v73_.v74 - v73_.v73) >> 4));
    v9 = LayoutAccessor_155fbe0_alt1(a1 + 21, v8);
    v10 = v5 + 16;
    GameRoutine_1595700(v9, (unsigned int*)&v64, (unsigned __int8*)(v5 + 16));
    v11 = v73_.v74;
    if ((unsigned __int64)v73_.v74 < v73_.v75) {
      *(_DWORD*)v73_.v74 = v64;
      v12 = (__int64*)(v11 + 8);
      if ((v65_.v65 & 1) != 0) {
        fw_text_String_CopyTerminated(v12, v65_.v67, v65_.v66);
        if ((v65_.v68 & 1) != 0) {
          goto LABEL_11;
        }
      }
      else {
        v13 = v65_.v65;
        v14 = v65_.v67;
        *((_QWORD*)v11 + 2) = v65_.v66;
        *((_QWORD*)v11 + 3) = v14;
        *v12 = v13;
        if ((v65_.v68 & 1) != 0) {
        LABEL_11:
          fw_text_String_CopyTerminated((__int64*)v11 + 4, v65_.v70, v65_.v69);
        LABEL_15:
          v15 = (__int64)(v11 + 80);
          *((_QWORD*)v11 + 9) = v65_.v72;
          *((_QWORD*)v11 + 8) = v65_.v71;
          goto LABEL_16;
        }
      }
      *((_QWORD*)v11 + 5) = v65_.v69;
      v16 = v65_.v68;
      *((_QWORD*)v11 + 6) = v65_.v70;
      *((_QWORD*)v11 + 4) = v16;
      goto LABEL_15;
    }
    v15 = GameHr_ee3920((__int64*)&v73_.v73, (__int64)&v64);
  LABEL_16:
    v73_.v74 = (char*)v15;
    if ((v65_.v68 & 1) != 0 && v65_.v70 != 0) {
      v17 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v17,
                                         v65_.v70);
    }
    if ((v65_.v65 & 1) != 0 && v65_.v67 != 0) {
      v18 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v18,
                                         v65_.v67);
    }
    v5 += 56;
  } while (v10 + 24 != v2);
  v4 = &fw_memory_g_heap_manager;
  v19 = -858993459 * ((unsigned __int64)(v73_.v74 - v73_.v73) >> 4);
LABEL_28:
  if (v19 >= 12) {
    v20 = 12;
  }
  else {
    v20 = (unsigned int)v19;
  }
  v21 = game_util_Format_alt1("Facility%d", v20);
  LayoutAccessor_1562cf0_alt1((__int64)(a1 + 21), v21);
  v22 = (__int64)v73_.v73;
  if (v73_.v73 != nullptr) {
    v23 = v73_.v74;
    if (v73_.v73 == v73_.v74) {
      goto LABEL_48;
    }
    do {
      if ((*(v23 - 48) & 1) != 0) {
        v24 = *((_QWORD*)v23 - 4);
        if (v24 != 0) {
          if (*(_QWORD*)(*v4 + 200) != 0) {
            v25 = 128;
          }
          else {
            v25 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v4 + v25, v24);
        }
      }
      if ((*(v23 - 72) & 1) != 0) {
        v26 = *((_QWORD*)v23 - 7);
        if (v26 != 0) {
          if (*(_QWORD*)(*v4 + 200) != 0) {
            v27 = 128;
          }
          else {
            v27 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v4 + v27, v26);
        }
      }
      v23 -= 80;
    } while (v23 != (char*)v22);
    v73_.v74 = (char*)v22;
    v22 = (__int64)v73_.v73;
    if (v73_.v73 != nullptr) {
    LABEL_48:
      v28 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v4 + v28, v22);
    }
  }
  v29 = (__int64*)a1[107];
  v30 = a1[108];
  v73_.v74 = nullptr;
  v73_.v75 = 0;
  v73_.v73 = nullptr;
  if (v29 != (__int64*)v30) {
    while (2) {
      v65_.v71 = 0;
      v65_.v72 = 0;
      v65_.v65 = 0;
      v65_.v66 = 0;
      v65_.v67 = 0;
      v65_.v68 = 0;
      v65_.v69 = 0;
      v65_.v70 = 0;
      v31 = v29 + 1;
      LODWORD(v64) = *(_DWORD*)v29;
      if (v29 != &v64) {
        if ((*(_BYTE*)v31 & 1) != 0) {
          GameRoutine_64df20(&v65_.v65, v29[3], v29[2]);
        }
        else {
          v32 = *v31;
          v33 = v29[3];
          v65_.v66 = v29[2];
          v65_.v67 = v33;
          v65_.v65 = v32;
        }
      }
      v34 = v73_.v74;
      if ((unsigned __int64)v73_.v74 >= v73_.v75) {
        v38 = GameHr_ee3920((__int64*)&v73_.v73, (__int64)&v64);
      }
      else {
        *(_DWORD*)v73_.v74 = v64;
        v35 = (__int64*)(v34 + 8);
        if ((v65_.v65 & 1) != 0) {
          fw_text_String_CopyTerminated(v35, v65_.v67, v65_.v66);
          if ((v65_.v68 & 1) == 0) {
            goto LABEL_64;
          }
        LABEL_61:
          fw_text_String_CopyTerminated((__int64*)v34 + 4, v65_.v70, v65_.v69);
        }
        else {
          v36 = v65_.v65;
          v37 = v65_.v67;
          *((_QWORD*)v34 + 2) = v65_.v66;
          *((_QWORD*)v34 + 3) = v37;
          *v35 = v36;
          if ((v65_.v68 & 1) != 0) {
            goto LABEL_61;
          }
        LABEL_64:
          *((_QWORD*)v34 + 5) = v65_.v69;
          v39 = v65_.v68;
          *((_QWORD*)v34 + 6) = v65_.v70;
          *((_QWORD*)v34 + 4) = v39;
        }
        v38 = (__int64)(v34 + 80);
        *((_QWORD*)v34 + 9) = v65_.v72;
        *((_QWORD*)v34 + 8) = v65_.v71;
      }
      v73_.v74 = (char*)v38;
      if ((v65_.v68 & 1) != 0 && v65_.v70 != 0) {
        if (*(_QWORD*)(*v4 + 200) != 0) {
          v40 = 128;
        }
        else {
          v40 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v4 + v40, v65_.v70);
      }
      if ((v65_.v65 & 1) != 0 && v65_.v67 != 0) {
        if (*(_QWORD*)(*v4 + 200) != 0) {
          v41 = 128;
        }
        else {
          v41 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v4 + v41, v65_.v67);
      }
      v29 += 4;
      if (v29 == (__int64*)v30) {
        break;
      }
      continue;
    }
  }
  v42 = fw_memory_HeapManager_Allocate(*v4, 816, 16, 0);
  LayoutAccessor_1560070_alt1((void*)(&v62_.v62), a1 + 21, "L_Minimap");
  *(_QWORD*)v42 = GameData_2132210[0] + 2;
  *(_QWORD*)(v42 + 8) = 0x3F80000000000002LL;
  v43 = v62_.v63;
  *(_QWORD*)(v42 + 16) = v62_.v62;
  *(_QWORD*)(v42 + 24) = v43;
  if (v43 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 16), 1u,
                              memory_order_relaxed);
  }
  *(_DWORD*)(v42 + 32) = 0;
  *(_QWORD*)(v42 + 152) = 0;
  *(_QWORD*)(v42 + 160) = 0;
  *(_QWORD*)(v42 + 168) = 0;
  *(_QWORD*)(v42 + 176) = 0;
  *(_QWORD*)(v42 + 40) = 0;
  *(_QWORD*)(v42 + 48) = 0;
  *(_QWORD*)(v42 + 56) = 0;
  *(_QWORD*)(v42 + 64) = 0;
  *(_QWORD*)(v42 + 72) = 0;
  *(_QWORD*)(v42 + 80) = 0;
  *(_QWORD*)(v42 + 88) = 0;
  *(_QWORD*)(v42 + 96) = 0;
  *(_QWORD*)(v42 + 104) = 0;
  *(_QWORD*)(v42 + 112) = 0;
  *(_QWORD*)(v42 + 120) = 0;
  *(_QWORD*)(v42 + 125) = 0;
  v44 = GameData_212fd90[0] + 2;
  *(_QWORD*)(v42 + 192) = 0;
  *(_QWORD*)(v42 + 200) = 0;
  *(_QWORD*)(v42 + 224) = 0;
  *(_QWORD*)(v42 + 232) = 0;
  *(_QWORD*)(v42 + 240) = 0;
  *(_QWORD*)(v42 + 248) = 0;
  *(_QWORD*)(v42 + 256) = 0;
  *(_QWORD*)(v42 + 136) = v44;
  *(_QWORD*)(v42 + 144) = 0;
  *(_DWORD*)(v42 + 184) = 128;
  *(_QWORD*)(v42 + 288) = 0;
  *(_QWORD*)(v42 + 296) = 0;
  *(_QWORD*)(v42 + 304) = 0;
  *(_QWORD*)(v42 + 312) = 0;
  *(_QWORD*)(v42 + 208) = 0;
  *(_QWORD*)(v42 + 216) = game_hub_CondTalkIconList_vtable;
  *(_DWORD*)(v42 + 264) = 10;
  *(_QWORD*)(v42 + 320) = 0;
  *(_QWORD*)(v42 + 328) = 0;
  *(_QWORD*)(v42 + 384) = 0;
  *(_QWORD*)(v42 + 392) = 0;
  *(_QWORD*)(v42 + 368) = 0;
  *(_QWORD*)(v42 + 376) = 0;
  *(_QWORD*)(v42 + 272) = game_hub_AreaChangeIconList_vtable;
  *(_QWORD*)(v42 + 280) = 0;
  *(_QWORD*)(v42 + 336) = 0;
  *(_QWORD*)(v42 + 344) = 0x800000010LL;
  *(_QWORD*)(v42 + 400) = 0;
  *(_QWORD*)(v42 + 408) = 0;
  *(_WORD*)(v42 + 600) = 0;
  *(_WORD*)(v42 + 648) = 0;
  *(_QWORD*)(v42 + 672) = 0;
  *(_QWORD*)(v42 + 800) = 0;
  *(_QWORD*)(v42 + 792) = 0;
  *(_QWORD*)(v42 + 784) = 0;
  *(_QWORD*)(v42 + 560) = 0;
  *(_QWORD*)(v42 + 552) = 0;
  *(_QWORD*)(v42 + 544) = 0;
  *(_QWORD*)(v42 + 536) = 0;
  *(_QWORD*)(v42 + 528) = 0;
  *(_QWORD*)(v42 + 520) = 0;
  *(_QWORD*)(v42 + 504) = 0;
  *(_QWORD*)(v42 + 512) = 0;
  *(_QWORD*)(v42 + 488) = 0;
  *(_QWORD*)(v42 + 496) = 0;
  *(_QWORD*)(v42 + 472) = 0;
  *(_QWORD*)(v42 + 480) = 0;
  *(_QWORD*)(v42 + 456) = 0;
  *(_QWORD*)(v42 + 464) = 0;
  *(_QWORD*)(v42 + 440) = 0;
  *(_QWORD*)(v42 + 448) = 0;
  *(_QWORD*)(v42 + 432) = 0;
  *(_BYTE*)(v42 + 592) = 0;
  *(_QWORD*)(v42 + 584) = 0;
  *(_QWORD*)(v42 + 576) = 0;
  *(_QWORD*)(v42 + 608) = 0;
  *(_QWORD*)(v42 + 616) = 0;
  *(_WORD*)(v42 + 624) = 0;
  *(_QWORD*)(v42 + 688) = 0;
  *(_QWORD*)(v42 + 696) = 0;
  *(_QWORD*)(v42 + 704) = 0;
  *(_DWORD*)(v42 + 712) = 0;
  *(_QWORD*)(v42 + 720) = 0;
  *(_QWORD*)(v42 + 728) = 0;
  *(_QWORD*)(v42 + 736) = 0;
  *(_QWORD*)(v42 + 744) = 0;
  *(_QWORD*)(v42 + 752) = 0;
  *(_QWORD*)(v42 + 760) = 0;
  *(_QWORD*)(v42 + 768) = 0;
  *(_QWORD*)(v42 + 352) = game_hub_QuestIconList_vtable;
  *(_QWORD*)(v42 + 360) = 0;
  *(_QWORD*)(v42 + 416) = 0;
  *(_QWORD*)(v42 + 424) = 0x2041800000LL;
  *(_DWORD*)(v42 + 775) = 0;
  game_18edba0(v42);
  v45 = a1[103];
  a1[103] = v42;
  if (v45 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v45 + 8LL))(v45);
  }
  if (v62_.v63 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v62_.v63);
  }
  GameHr_18f3890(a1[103], &v73_.v73);
  game_18eeb40(a1[103]);
  v46 = (__int64)v73_.v73;
  if (v73_.v73 != nullptr) {
    v47 = v73_.v74;
    if (v73_.v73 == v73_.v74) {
      goto LABEL_101;
    }
    do {
      if ((*(v47 - 48) & 1) != 0) {
        v48 = *((_QWORD*)v47 - 4);
        if (v48 != 0) {
          if (*(_QWORD*)(*v4 + 200) != 0) {
            v49 = 128;
          }
          else {
            v49 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v4 + v49, v48);
        }
      }
      if ((*(v47 - 72) & 1) != 0) {
        v50 = *((_QWORD*)v47 - 7);
        if (v50 != 0) {
          if (*(_QWORD*)(*v4 + 200) != 0) {
            v51 = 128;
          }
          else {
            v51 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v4 + v51, v50);
        }
      }
      v47 -= 80;
    } while (v47 != (char*)v46);
    v73_.v74 = (char*)v46;
    v46 = (__int64)v73_.v73;
    if (v73_.v73 != nullptr) {
    LABEL_101:
      v52 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v52 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v4 + v52, v46);
    }
  }
  v53 = LayoutAccessor_155fbe0_alt1(a1 + 21, "L_Tlp");
  GameHr_1562680((__int64)v53, "Type_Common", 0x1.0000000000000p+0f);
  v54 = v53[1];
  v73_.v73 = "L_Txt";
  v73_.v74 = (_BYTE*)((_UNKNOWN*)0x5LL);
  if (v54 != 0) {
    v55 = std___1___shared_weak_count_lock_alt1(v54);
    if (v55 != 0) {
      v56 = *v53;
      v57 = v55;
      if (v56 != 0) {
        GameRoutine_1388320((void*)(&v64));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
        std___1___shared_weak_count___release_weak_alt1(v57);
      }
      if (v56 != 0) {
        v58 = v65_.v65;
        if (v65_.v65 != 0) {
          v59 = std___1___shared_weak_count_lock_alt1(v65_.v65);
          v60 = v64;
          v61 = v59;
          std___1___shared_weak_count___release_weak_alt1(v58);
          if (v61 != 0 && v60 != 0) {
            TextBoxEx_188ab20(v60, "MID_Sys_Area_Msg_FacilityOpen");
          LABEL_116:
            if (atomic_fetch_add((atomic_ullong* volatile)(v61 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61);
              std___1___shared_weak_count___release_weak_alt1(v61);
            }
          }
          else if (v61 != 0) {
            goto LABEL_116;
          }
        }
      }
    }
  }
}

__int64 TelopFacilityOpen_Unknown37(_QWORD* a1)
{
  __int64 v2;
  char v3;

  GameRoutine_18eeb40(a1[103]);
  v2 = (*(__int64 (**)(_QWORD*))(*a1 + 208LL))(a1);
  if (a1[99] != 0 && (GameRoutine_173fe30() & 1) != 0 ||
      (GameRoutine_1563280(a1 + 21, v2, 0) & 1) != 0) {
    v3 = 0;
  }
  else {
    v3 = *(_BYTE*)(a1[103] + 777LL) ^ 1;
  }
  return v3 & 1;
}

__int64 TelopFacilityOpen_Unknown43(__int64 a1)
{
  float v2;
  float v3;
  char v4;
  float v5;
  float v6;

  GameRoutine_18eeb40(*(_QWORD*)(a1 + 824));
  v2 = *(float*)(a1 + 328);
  v3 = *(float*)(a1 + 420);
  if (v3 < v2) {
    v4 = 0;
    v5 = 60.0 / (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
    if (v5 <= 0.0) {
      v5 = 1.0;
    }
    if ((*(_DWORD*)(game_g_game_setting + 944) & 0xB) != 0) {
      v5 = v5 * 8.0;
    }
    v6 = v3 + v5;
    if (v2 >= v6) {
      v2 = v6;
    }
    *(float*)(a1 + 420) = v2;
  }
  else {
    v4 = snd_fnd_WeakHandle_isValid(a1 + 424) ^ 1;
  }
  return v4 & 1;
}

#pragma GCC visibility pop
