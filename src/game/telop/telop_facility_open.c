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
__n128 TelopFacilityOpen_Unknown33(__int64* a1, __int64 a2, __int64 a3,
                                   __int64 a4, __int64 a5, __int64 a6,
                                   __int64 a7, __int64 a8);

__n128 TelopFacilityOpen_Unknown33(__int64* a1, __int64 a2, __int64 a3,
                                   __int64 a4, __int64 a5, __int64 a6,
                                   __int64 a7, __int64 a8)
{

#pragma clang fp contract(off)
  __int64 v8;
  __int64 v9;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  __int64* v16;
  __int64 v17;
  char* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  char* v28;
  const char* v29;
  const char* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  __int64* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v49;
  __int64* v50;
  long double v51;
  __int64 v52;
  const char* v53;
  const char* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64* v58;
  __n128 result;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  struct {
    __int64 v67;
    __int64 v68;
  } v67_;
  __int64 v69;
  struct {
    __int64 v70;
    __int64 v71;
    __int64 v72;
    __int64 v73;
    unsigned __int64 v74;
    __int64 v75;
    char gap72_[8];
    __int64 v76;
    __int64 v77;
  } v70_;
  struct {
    const char* v78;
    char* v79;
    unsigned __int64 v80;
  } v78_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v78_.v79 = nullptr;
  v78_.v80 = 0;
  v78_.v78 = nullptr;
  v8 = a1[104];
  v9 = a1[105];
  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v8 == v9) {
    v26 = 0;
    goto LABEL_28;
  }
  v12 = v8 + 16;
  do {
    v70_.v76 = 0;
    v70_.v77 = 0;
    v70_.v70 = 0;
    v70_.v71 = 0;
    v70_.v72 = 0;
    v70_.v73 = 0;
    v70_.v74 = 0;
    v70_.v75 = 0;
    LODWORD(v69) = *(_DWORD*)(v12 - 16);
    if (&v69 != (__int64*)(v12 - 16)) {
      if ((*(_BYTE*)(v12 - 8) & 1) != 0) {
        GameRoutine_64df20(&v70_.v70, *(_QWORD*)(v12 + 8), *(_QWORD*)v12),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        v13 = *(_QWORD*)(v12 - 8);
        v14 = *(_QWORD*)(v12 + 8);
        v70_.v71 = *(_QWORD*)v12;
        v70_.v72 = v14;
        v70_.v70 = v13;
      }
    }
    v15 = game_util_Format(
        (__int64)"L_OpenFacility%02d",
        -858993459 *
            (unsigned int)((unsigned __int64)(v78_.v79 - v78_.v78) >> 4),
        a3, a4, a5, a6, a7, a8, v67_.v67),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v16 = LayoutAccessor_155fbe0(a1 + 21, (__int64)v15),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v17 = v12 + 16;
    GameRoutine_1595700(v16, (unsigned int*)&v69, (unsigned __int8*)(v12 + 16)),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v18 = v78_.v79;
    if ((unsigned __int64)v78_.v79 < v78_.v80) {
      *(_DWORD*)v78_.v79 = v69;
      v19 = (__int64*)(v18 + 8);
      if ((v70_.v70 & 1) != 0) {
        fw_text_String_CopyTerminated(v19, v70_.v72, v70_.v71),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        if ((v70_.v73 & 1) != 0) {
          goto LABEL_11;
        }
      }
      else {
        v20 = v70_.v70;
        v21 = v70_.v72;
        *((_QWORD*)v18 + 2) = v70_.v71;
        *((_QWORD*)v18 + 3) = v21;
        *v19 = v20;
        if ((v70_.v73 & 1) != 0) {
        LABEL_11:
          fw_text_String_CopyTerminated((__int64*)v18 + 4, v70_.v75, v70_.v74),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        LABEL_15:
          v22 = (__int64)(v18 + 80);
          *((_QWORD*)v18 + 9) = v70_.v77;
          *((_QWORD*)v18 + 8) = v70_.v76;
          goto LABEL_16;
        }
      }
      *((_QWORD*)v18 + 5) = v70_.v74;
      v23 = v70_.v73;
      *((_QWORD*)v18 + 6) = v70_.v75;
      *((_QWORD*)v18 + 4) = v23;
      goto LABEL_15;
    }
    v22 = GameRoutine_ee3920((__int64*)&v78_.v78, (__int64)&v69),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LABEL_16:
    v78_.v79 = (char*)v22;
    if ((v70_.v73 & 1) != 0 && v70_.v75 != 0) {
      v24 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v24),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    if ((v70_.v70 & 1) != 0 && v70_.v72 != 0) {
      v25 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v25),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v12 += 56;
  } while (v17 + 24 != v9);
  v11 = &fw_memory_g_heap_manager;
  v26 = -858993459 * ((unsigned __int64)(v78_.v79 - v78_.v78) >> 4);
LABEL_28:
  if (v26 >= 12) {
    v27 = 12;
  }
  else {
    v27 = (unsigned int)v26;
  }
  v28 = game_util_Format((__int64)"Facility%d", v27, a3, a4, a5, a6, a7, a8,
                         v67_.v67),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LayoutAccessor_1562cf0((__int64)(a1 + 21), (__int64)v28),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v29 = v78_.v78;
  if (v78_.v78 != nullptr) {
    v30 = v78_.v79;
    if (v78_.v78 == v78_.v79) {
      goto LABEL_48;
    }
    do {
      if ((*(v30 - 48) & 1) != 0 && *((_QWORD*)v30 - 4) != 0) {
        if (*(_QWORD*)(*v11 + 200) != 0) {
          v31 = 128;
        }
        else {
          v31 = 56;
        }
        nn_mem_StandardAllocator_Free(*v11 + v31),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if ((*(v30 - 72) & 1) != 0 && *((_QWORD*)v30 - 7) != 0) {
        if (*(_QWORD*)(*v11 + 200) != 0) {
          v32 = 128;
        }
        else {
          v32 = 56;
        }
        nn_mem_StandardAllocator_Free(*v11 + v32),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v30 -= 80;
    } while (v30 != v29);
    v78_.v79 = (char*)v29;
    if (v78_.v78 != nullptr) {
    LABEL_48:
      v33 = 128;
      if (*(_QWORD*)(*v11 + 200) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free(*v11 + v33),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  v34 = (__int64*)a1[107];
  v35 = a1[108];
  v78_.v79 = nullptr;
  v78_.v80 = 0;
  v78_.v78 = nullptr;
  if (v34 != (__int64*)v35) {
    while (2) {
      v70_.v76 = 0;
      v70_.v77 = 0;
      v70_.v70 = 0;
      v70_.v71 = 0;
      v70_.v72 = 0;
      v70_.v73 = 0;
      v70_.v74 = 0;
      v70_.v75 = 0;
      v36 = v34 + 1;
      LODWORD(v69) = *(_DWORD*)v34;
      if (v34 != &v69) {
        if ((*(_BYTE*)v36 & 1) != 0) {
          GameRoutine_64df20(&v70_.v70, v34[3], v34[2]),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          v37 = *v36;
          v38 = v34[3];
          v70_.v71 = v34[2];
          v70_.v72 = v38;
          v70_.v70 = v37;
        }
      }
      v39 = v78_.v79;
      if ((unsigned __int64)v78_.v79 >= v78_.v80) {
        v43 = GameRoutine_ee3920((__int64*)&v78_.v78, (__int64)&v69),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        *(_DWORD*)v78_.v79 = v69;
        v40 = (__int64*)(v39 + 8);
        if ((v70_.v70 & 1) != 0) {
          fw_text_String_CopyTerminated(v40, v70_.v72, v70_.v71),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          if ((v70_.v73 & 1) == 0) {
            goto LABEL_64;
          }
        LABEL_61:
          fw_text_String_CopyTerminated((__int64*)v39 + 4, v70_.v75, v70_.v74),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          v41 = v70_.v70;
          v42 = v70_.v72;
          *((_QWORD*)v39 + 2) = v70_.v71;
          *((_QWORD*)v39 + 3) = v42;
          *v40 = v41;
          if ((v70_.v73 & 1) != 0) {
            goto LABEL_61;
          }
        LABEL_64:
          *((_QWORD*)v39 + 5) = v70_.v74;
          v44 = v70_.v73;
          *((_QWORD*)v39 + 6) = v70_.v75;
          *((_QWORD*)v39 + 4) = v44;
        }
        v43 = (__int64)(v39 + 80);
        *((_QWORD*)v39 + 9) = v70_.v77;
        *((_QWORD*)v39 + 8) = v70_.v76;
      }
      v78_.v79 = (char*)v43;
      if ((v70_.v73 & 1) != 0 && v70_.v75 != 0) {
        if (*(_QWORD*)(*v11 + 200) != 0) {
          v45 = 128;
        }
        else {
          v45 = 56;
        }
        nn_mem_StandardAllocator_Free(*v11 + v45),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if ((v70_.v70 & 1) != 0 && v70_.v72 != 0) {
        if (*(_QWORD*)(*v11 + 200) != 0) {
          v46 = 128;
        }
        else {
          v46 = 56;
        }
        nn_mem_StandardAllocator_Free(*v11 + v46),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v34 += 4;
      if (v34 == (__int64*)v35) {
        break;
      }
      continue;
    }
  }
  v47 = fw_memory_HeapManager_Allocate(*v11, 816, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LayoutAccessor_1560070((void*)(&v67_.v67), a1 + 21, (__int64)"L_Minimap"),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)v47 = GameData_2132210[0] + 2;
  *(_QWORD*)(v47 + 8) = 0x3F80000000000002LL;
  v49 = v67_.v68;
  *(_QWORD*)(v47 + 16) = v67_.v67;
  *(_QWORD*)(v47 + 24) = v49;
  if (v49 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 16), 1u,
                              memory_order_relaxed);
  }
  *(_DWORD*)(v47 + 32) = 0;
  *(_QWORD*)(v47 + 152) = 0;
  *(_QWORD*)(v47 + 160) = 0;
  *(_QWORD*)(v47 + 168) = 0;
  *(_QWORD*)(v47 + 176) = 0;
  *(_QWORD*)(v47 + 40) = 0;
  *(_QWORD*)(v47 + 48) = 0;
  *(_QWORD*)(v47 + 56) = 0;
  *(_QWORD*)(v47 + 64) = 0;
  *(_QWORD*)(v47 + 72) = 0;
  *(_QWORD*)(v47 + 80) = 0;
  *(_QWORD*)(v47 + 88) = 0;
  *(_QWORD*)(v47 + 96) = 0;
  *(_QWORD*)(v47 + 104) = 0;
  *(_QWORD*)(v47 + 112) = 0;
  *(_QWORD*)(v47 + 120) = 0;
  *(_QWORD*)(v47 + 125) = 0;
  v50 = GameData_212fd90[0] + 2;
  *(_QWORD*)(v47 + 192) = 0;
  *(_QWORD*)(v47 + 200) = 0;
  *(_QWORD*)(v47 + 224) = 0;
  *(_QWORD*)(v47 + 232) = 0;
  *(_QWORD*)(v47 + 240) = 0;
  *(_QWORD*)(v47 + 248) = 0;
  *(_QWORD*)(v47 + 256) = 0;
  *(_QWORD*)(v47 + 136) = v50;
  *(_QWORD*)(v47 + 144) = 0;
  *(_DWORD*)(v47 + 184) = 128;
  *(_QWORD*)(v47 + 288) = 0;
  *(_QWORD*)(v47 + 296) = 0;
  *(_QWORD*)(v47 + 304) = 0;
  *(_QWORD*)(v47 + 312) = 0;
  *(_QWORD*)(v47 + 208) = 0;
  *(_QWORD*)(v47 + 216) = game_hub_CondTalkIconList_vtable;
  *(_DWORD*)(v47 + 264) = 10;
  *(_QWORD*)(v47 + 320) = 0;
  *(_QWORD*)(v47 + 328) = 0;
  *(_QWORD*)(v47 + 384) = 0;
  *(_QWORD*)(v47 + 392) = 0;
  *(_QWORD*)(v47 + 368) = 0;
  *(_QWORD*)(v47 + 376) = 0;
  *(_QWORD*)(v47 + 272) = game_hub_AreaChangeIconList_vtable;
  *(_QWORD*)(v47 + 280) = 0;
  *(_QWORD*)(v47 + 336) = 0;
  *(_QWORD*)(v47 + 344) = 0x800000010LL;
  *(_QWORD*)(v47 + 400) = 0;
  *(_QWORD*)(v47 + 408) = 0;
  *(_WORD*)(v47 + 600) = 0;
  *(_WORD*)(v47 + 648) = 0;
  *(_QWORD*)(v47 + 672) = 0;
  *(_QWORD*)(v47 + 800) = 0;
  *(_QWORD*)(v47 + 792) = 0;
  *(_QWORD*)(v47 + 784) = 0;
  *(_QWORD*)(v47 + 560) = 0;
  *(_QWORD*)(v47 + 552) = 0;
  *(_QWORD*)(v47 + 544) = 0;
  *(_QWORD*)(v47 + 536) = 0;
  *(_QWORD*)(v47 + 528) = 0;
  *(_QWORD*)(v47 + 520) = 0;
  *(_QWORD*)(v47 + 504) = 0;
  *(_QWORD*)(v47 + 512) = 0;
  *(_QWORD*)(v47 + 488) = 0;
  *(_QWORD*)(v47 + 496) = 0;
  *(_QWORD*)(v47 + 472) = 0;
  *(_QWORD*)(v47 + 480) = 0;
  *(_QWORD*)(v47 + 456) = 0;
  *(_QWORD*)(v47 + 464) = 0;
  *(_QWORD*)(v47 + 440) = 0;
  *(_QWORD*)(v47 + 448) = 0;
  *(_QWORD*)(v47 + 432) = 0;
  *(_BYTE*)(v47 + 592) = 0;
  *(_QWORD*)(v47 + 584) = 0;
  *(_QWORD*)(v47 + 576) = 0;
  *(_QWORD*)(v47 + 608) = 0;
  *(_QWORD*)(v47 + 616) = 0;
  *(_WORD*)(v47 + 624) = 0;
  *(_QWORD*)(v47 + 688) = 0;
  *(_QWORD*)(v47 + 696) = 0;
  *(_QWORD*)(v47 + 704) = 0;
  *(_DWORD*)(v47 + 712) = 0;
  *(_QWORD*)(v47 + 720) = 0;
  *(_QWORD*)(v47 + 728) = 0;
  *(_QWORD*)(v47 + 736) = 0;
  *(_QWORD*)(v47 + 744) = 0;
  *(_QWORD*)(v47 + 752) = 0;
  *(_QWORD*)(v47 + 760) = 0;
  *(_QWORD*)(v47 + 768) = 0;
  *(_QWORD*)(v47 + 352) = game_hub_QuestIconList_vtable;
  *(_QWORD*)(v47 + 360) = 0;
  *(_QWORD*)(v47 + 416) = 0;
  *(_QWORD*)(v47 + 424) = 0x2041800000LL;
  *(_DWORD*)(v47 + 775) = 0;
  *(__n128*)&v51 = GameRoutine_18edba0(v47),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v52 = a1[103];
  a1[103] = v47;
  if (v52 != 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v52 + 8LL))(v52, v51),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (v67_.v68 != 0) {
    *(__n128*)&v51 = std___1___shared_weak_count___release_weak(),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  GameRoutine_18f3890(a1[103], &v78_.v78, v51),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  GameRoutine_18eeb40_alt1(a1[103]),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v53 = v78_.v78;
  if (v78_.v78 != nullptr) {
    v54 = v78_.v79;
    if (v78_.v78 == v78_.v79) {
      goto LABEL_101;
    }
    do {
      if ((*(v54 - 48) & 1) != 0 && *((_QWORD*)v54 - 4) != 0) {
        if (*(_QWORD*)(*v11 + 200) != 0) {
          v55 = 128;
        }
        else {
          v55 = 56;
        }
        nn_mem_StandardAllocator_Free(*v11 + v55),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if ((*(v54 - 72) & 1) != 0 && *((_QWORD*)v54 - 7) != 0) {
        if (*(_QWORD*)(*v11 + 200) != 0) {
          v56 = 128;
        }
        else {
          v56 = 56;
        }
        nn_mem_StandardAllocator_Free(*v11 + v56),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v54 -= 80;
    } while (v54 != v53);
    v78_.v79 = (char*)v53;
    if (v78_.v78 != nullptr) {
    LABEL_101:
      v57 = 128;
      if (*(_QWORD*)(*v11 + 200) == 0) {
        v57 = 56;
      }
      nn_mem_StandardAllocator_Free(*v11 + v57),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  v58 = LayoutAccessor_155fbe0(a1 + 21, (__int64)"L_Tlp"),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LayoutAccessor_1562680(v58, (__int64)"Type_Common", 0x1.0000000000000p+0f),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v60 = v58[1];
  v78_.v78 = "L_Txt";
  v78_.v79 = (_BYTE*)((_UNKNOWN*)0x5LL);
  if (v60 != 0) {
    v61 = std___1___shared_weak_count_lock(v60),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v61 != 0) {
      v62 = *v58;
      v63 = v61;
      if (v62 != 0) {
        GameRoutine_1388320((void*)(&v69)),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        result = std___1___shared_weak_count___release_weak();
      }
      if (v62 != 0 && v70_.v70 != 0) {
        v64 = std___1___shared_weak_count_lock(v70_.v70),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v65 = v69;
        v66 = v64;
        result = std___1___shared_weak_count___release_weak();
        if (v66 != 0 && v65 != 0) {
          TextBoxEx_188ab20(v65, "MID_Sys_Area_Msg_FacilityOpen"),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        LABEL_116:
          if (atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
            return std___1___shared_weak_count___release_weak();
          }
        }
        else if (v66 != 0) {
          goto LABEL_116;
        }
      }
    }
  }
  return result;
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
