#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15e5b50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15e5e00(_QWORD);
__int64 GameRoutine_16c0960();
__int64 GameRoutine_16c0c20();
__int64 GameRoutine_16c1180();
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657a50(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(void);
__int64 game_ProcInst_Register(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_2174af8;
extern _UNKNOWN GameData_22628e8;
extern __int64 (*game_facility_StableBreedingInfo_vtable[])();
extern __int64 (*game_facility_anonymous_ProcStableBreedingResult_vtable[])();
extern __int64 (*game_gameui_GaugeUtil_AnimalExpChangeUtil_vtable[])();
extern __int64 (*game_gameui_GaugeUtil_ExpChange_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_22627f0;
extern __int64 GameData_22627f8;
extern __int64 GameData_2262800;
extern __int64 GameData_2262810;
extern __int64 GameData_2262820;
extern __int64 GameData_2262830;
extern __int64 GameData_2262838;
extern __int64 GameData_2262840;
extern __int64 GameData_2262850;
extern __int64 GameData_2262860;
extern __int64 GameData_2262870;
extern __int64 GameData_2262878;
extern __int64 GameData_2262880;
extern __int64 GameData_2262890;
extern __int64 GameData_22628a0;
extern __int64 GameData_22628b0;
extern __int64 GameData_22628b8;
extern __int64 GameData_22628c0;
extern __int64 GameData_22628d0;
extern __int64 GameData_22628e0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2130fa0[3];
extern char GameData_22627e8;
extern char GameData_2262828;
extern char GameData_2262868;
extern char GameData_22628a8;
extern int GameData_2262808;
extern int GameData_2262818;
extern int GameData_2262848;
extern int GameData_2262858;
extern int GameData_2262888;
extern int GameData_2262898;
extern int GameData_22628c8;
extern int GameData_22628d8;
__int64 StableBreedingInfo_16be4a0(__int64 a1, __int64 a2);
__int64 StableBreedingInfo_16bede0(__int64 a1, __int64 a2, __int64 a3);
__int64 StableBreedingInfo_Destructor(__int64 a1);
__int64 StableBreedingInfo_DeletingDestructor(__int64 a1);
__int64 GameRoutine_17685e0(void);
__int64 StableBreedingInfo_16c1180(__int64 result);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1585490(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1843470(_QWORD, _QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_92b980(_QWORD, _QWORD, long double);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 GameRoutine_932360(_QWORD, _QWORD);
__int64 LayoutAccessor_1562060(_QWORD, _QWORD, _QWORD);
__int64 Manager_136a920(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Pane_58f8a0(_QWORD);
__int64 Unit_931120(_QWORD);
__int64 Util_1583920(_QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212da30;
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c8a0;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 ui_Manager_instance_;
extern char* GameData_1fafc88[8];
__int64 StableBreedingInfo_Unknown28(__int64 a1);

__int64 StableBreedingInfo_16be4a0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;

  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      368, 16, 0);
  v8 = 0;
  v9 = 0;
  GameRoutine_15e5b50(v4, &v8, 0);
  v5 = v9;
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  *(_QWORD*)(v4 + 208) = a2;
  *(_DWORD*)(v4 + 216) = 0;
  *(_QWORD*)(v4 + 240) = 0;
  *(_QWORD*)(v4 + 247) = 0;
  *(_WORD*)(v4 + 272) = 0;
  *(_WORD*)(v4 + 280) = 0;
  *(_WORD*)(v4 + 304) = 0;
  *(_WORD*)(v4 + 328) = 0;
  *(_QWORD*)v4 = game_facility_StableBreedingInfo_vtable;
  *(_QWORD*)(v4 + 256) = 0;
  *(_QWORD*)(v4 + 264) = 1065353216;
  *(_WORD*)(v4 + 360) = 0;
  *(_QWORD*)(v4 + 352) = 0;
  *(_QWORD*)(v4 + 224) = game_gameui_GaugeUtil_AnimalExpChangeUtil_vtable;
  *(_QWORD*)(v4 + 232) = 0;
  if (a1 != 0) {
    v6 = *(_QWORD*)(a1 + 40);
    if (v6 != 0) {
      *(_QWORD*)(v6 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "StableBreedingInfo";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_2174af8;
    *(_QWORD*)(v4 + 16) = &GameData_2174af8;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
  }
  else if ((*(_WORD*)(v4 + 136) & 1) == 0) {
    GameRoutine_657a50(v4, 1);
  }
  return v4;
}

__int64 StableBreedingInfo_Unknown28(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  unsigned int v22;
  __int64 v23;
  void* v24;
  __int64* v25;
  __int64 v26;
  char* v27;
  int v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  __int64 v36;
  unsigned int v37;
  bool v38;
  __int64 v39;
  int v40;
  int v41;
  __int64* v42;
  __int64 v43;
  long double v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  int v49;
  unsigned int v50;
  unsigned int v51;
  int v52;
  __int64 v53;
  __int64 v54;
  int v55;
  __int64 v56;
  __int64 v57;
  _BYTE* v58;
  __int64 v59;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  int v66;
  _QWORD* v67;
  _BYTE* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  _BYTE* v72;

  v1 = *(_QWORD*)(a1 + 208);
  WORD1(v65) = 0;
  HIDWORD(v65) = 0;
  v3 = *(_QWORD*)(v1 + 8);
  v67 = &v68;
  v68 = nullptr;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  v72 = nullptr;
  GameRoutine_930b90(&v65, v1 + 24);
  v4 = *(__int64**)(a1 + 168);
  v5 = Unit_931120(&v65);
  v6 = ui_LayoutAccessor_empty__ptr[0];
  if (v5 != 0) {
    v7 = v5;
    v8 = v4 != nullptr ? v4 : ui_LayoutAccessor_empty__ptr[0];
    v9 = ui_LayoutAccessor_FindTextBox(v8, "T_AnimalName");
    if (v9 != 0) {
      GameRoutine_156c5d0(v9, v7, 0);
    }
  }
  if (*(_QWORD*)(a1 + 168) != 0) {
    v10 = *(__int64**)(a1 + 168);
  }
  else {
    v10 = v6;
  }
  v11 = ui_LayoutAccessor_FindPane(v10, "IconAnimal");
  if (v11 != 0) {
    v12 = __dynamic_cast(v11, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v12 = 0;
  }
  v13 = GameData_212c8a0;
  if (v12 != 0 && *(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                             8LL * (unsigned __int8)v65) != 0) {
    Manager_136a920(ui_Manager_instance_ + 1264, v12, 0, 2);
  }
  if (*(_QWORD*)(a1 + 168) != 0) {
    v14 = *(__int64**)(a1 + 168);
  }
  else {
    v14 = v6;
  }
  LayoutAccessor_1560070((void*)(&v63), v14, "L_Reliance");
  if (v64 != 0) {
    v15 = std___1___shared_weak_count_lock(v64);
    if (v15 != 0) {
      v16 = v15;
      if (v63 != 0) {
        Util_1583920(v63, &v65, v3);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        std___1___shared_weak_count___release_weak_alt1(v16);
      }
    }
    if (v64 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v64);
    }
  }
  if (*(_QWORD*)(a1 + 168) != 0) {
    v17 = *(__int64**)(a1 + 168);
  }
  else {
    v17 = v6;
  }
  v18 = ui_LayoutAccessor_FindPane(v17, "FoodIcon");
  if (v18 != 0) {
    v19 = __dynamic_cast(v18, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v19 = 0;
  }
  v20 = *(_QWORD*)(*(_QWORD*)(*v13 + 64) + 8LL * (unsigned __int8)v65);
  v21 = *(unsigned __int8*)(v20 + 104);
  if (*(_BYTE*)(v20 + 105) == 2) {
    v22 = 2;
  }
  else {
    v22 = 3;
  }
  if (v21 == 2) {
    v23 = 1;
  }
  else {
    v23 = v22;
  }
  GameRoutine_1843470(v19, v23);
  v24 = GameData_212da30;
  if (v19 != 0) {
    LODWORD(v61) = *(_DWORD*)((char*)(*(__int64 (*)[2])0x28LL) +
                              (_QWORD)GameData_212da30 + 4);
    (*(void (**)(__int64, _QWORD, __int64*))(*(_QWORD*)v19 + 40LL))(v19, 0,
                                                                    &v61);
    (*(void (**)(__int64, __int64, __int64*))(*(_QWORD*)v19 + 40LL))(v19, 1,
                                                                     &v61);
    (*(void (**)(__int64, __int64, __int64*))(*(_QWORD*)v19 + 40LL))(v19, 2,
                                                                     &v61);
    (*(void (**)(__int64, __int64, __int64*))(*(_QWORD*)v19 + 40LL))(v19, 3,
                                                                     &v61);
  }
  if (*(_QWORD*)(a1 + 168) != 0) {
    v25 = *(__int64**)(a1 + 168);
  }
  else {
    v25 = v6;
  }
  v26 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v13 + 64) +
                                       8LL * (unsigned __int8)v65) +
                            107LL);
  if (v26 == 4) {
    v27 = nullptr;
  }
  else {
    v27 = GameData_1fafc88[v26];
  }
  LayoutAccessor_1562060(v25, "T_Taste", v27);
  v28 = *(_DWORD*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v24 + 4);
  if (*(_QWORD*)(a1 + 168) != 0) {
    v29 = *(__int64**)(a1 + 168);
  }
  else {
    v29 = v6;
  }
  v30 = ui_LayoutAccessor_FindTextBox(v29, "T_Taste");
  if (v30 != 0) {
    v31 = Pane_58f8a0(v30);
    if (v31 != 0) {
      *(_DWORD*)(v31 + 12) = v28;
    }
  }
  v32 = *(_QWORD*)(a1 + 208);
  if (v3 != 0) {
    v33 = *(_QWORD*)(v3 + 392);
    if (v33 == 0) {
      goto LABEL_66;
    }
    v34 = *(_QWORD*)(v32 + 48);
    if (v34 == 0) {
      goto LABEL_66;
    }
    v35 = *(unsigned __int8*)(v33 + 48);
    v36 = v32 + 48;
    do {
      v37 = *(unsigned __int8*)(v34 + 26);
      v38 = v37 >= v35;
      if (v37 >= v35) {
        v39 = 0;
      }
      else {
        v39 = 8;
      }
      if (v38) {
        v36 = v34;
      }
      v34 = *(_QWORD*)(v34 + v39);
    } while (v34 != 0);
    if (v36 != v32 + 48 && v35 >= *(unsigned __int8*)(v36 + 26)) {
      v40 = *(_WORD*)(v36 + 28) & 0xFFF;
    }
    else {
    LABEL_66:
      v40 = 0;
    }
    *(_DWORD*)(a1 + 216) = v40;
    v61 = *(_QWORD*)(v3 + 392);
    v62 = v3;
  }
  else {
    *(_DWORD*)(a1 + 216) = 0;
    v61 = 0;
    v62 = 0;
  }
  v41 = *(_DWORD*)GameRoutine_932360(v32 + 24, &v61);
  *(_DWORD*)(a1 + 352) = 0;
  *(_DWORD*)(a1 + 356) = v41;
  if (*(_QWORD*)(a1 + 168) != 0) {
    v42 = *(__int64**)(a1 + 168);
  }
  else {
    v42 = v6;
  }
  LayoutAccessor_1560070((void*)(&v61), v42, "L_FavoriteItem");
  if (v62 != 0) {
    v43 = std___1___shared_weak_count_lock(v62);
    v45 = v61;
    if (v62 != 0) {
      *(__n128*)&v44 = std___1___shared_weak_count___release_weak_alt1(v62);
    }
    if (v43 != 0 && v45 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 16), 1u,
                                memory_order_relaxed);
      v46 = GameRoutine_92b980(
          *(_QWORD*)(*(_QWORD*)(*v13 + 64) + 8LL * (unsigned __int8)v65),
          BYTE1(v65), v44);
      v61 = 0;
      if (v46 != 0) {
        v47 = *(unsigned __int16*)(v46 + 16);
        HIDWORD(v61) = 1;
        LOWORD(v61) = v47;
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8 * v47) +
                      73LL) == 17) {
          nn_os_LockMutex(&game_g_random_mutex);
          v48 = game_map_MapRandom_instance__ptr[0];
          v49 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL));
          v50 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v51 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v48 + 1) = v49;
          v52 = (v51 >> 8) ^ (v50 >> 19) ^ v51 ^ v50;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v48) = v50;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v48 + 4) = v52;
          nn_os_UnlockMutex(&game_g_random_mutex);
          HIDWORD(v61) =
              (16 * ((_WORD)v52 -
                     1000 * (unsigned __int16)((v52 & 0x7FFFFFFFu) / 0x3E8)) +
               16) &
                  0x3FF0 |
              1;
        }
      }
      v53 = std___1___shared_weak_count_lock(v43);
      if (v53 != 0) {
        v54 = v53;
        GameRoutine_1585490(v45, &v61, 0);
        if (atomic_fetch_add((atomic_ullong* volatile)(v54 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54);
          std___1___shared_weak_count___release_weak_alt1(v54);
        }
      }
      std___1___shared_weak_count___release_weak_alt1(v43);
      v55 = *(_DWORD*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v24 + 4);
      v56 = ui_LayoutAccessor_FindTextBox(v45, "T_Txt");
      if (v56 != 0) {
        v57 = Pane_58f8a0(v56);
        if (v57 != 0) {
          *(_DWORD*)(v57 + 12) = v55;
        }
      }
    }
    else if (v43 == 0) {
      goto LABEL_89;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
      std___1___shared_weak_count___release_weak_alt1(v43);
    }
  }
LABEL_89:
  v66 = 0;
  v65 = 0;
  if ((v70 & 1) != 0) {
    *v72 = 0;
    v71 = 0;
  }
  else {
    LOWORD(v70) = 0;
  }
  GameRoutine_6e3b50(&v67, v68);
  v68 = nullptr;
  v69 = 0;
  v67 = &v68;
  if ((v70 & 1) != 0) {
    v58 = v72;
    if (v72 != nullptr) {
      v59 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v59 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v59);
      v58 = v68;
    }
  }
  else {
    v58 = nullptr;
  }
  return GameRoutine_6e3b50(&v67, v58);
}

__int64 StableBreedingInfo_16bede0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22628e8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_22628e8) != 0) {
    GameData_22627f0 = 0;
    GameData_22627f8 = (__int64)GameRoutine_16c0960;
    GameData_22627e8 = 13;
    GameData_2262868 = 13;
    GameData_2262800 = 0;
    GameData_2262808 = 0;
    GameData_2262810 = 0;
    GameData_2262818 = 0;
    GameData_2262820 = 0;
    GameData_2262840 = 0;
    GameData_2262848 = 0;
    GameData_2262850 = 0;
    GameData_2262858 = 0;
    GameData_2262860 = 0;
    GameData_2262880 = 0;
    GameData_2262828 = 14;
    GameData_2262870 = 0;
    GameData_2262878 = (__int64)GameRoutine_16c1180;
    GameData_2262888 = 0;
    GameData_2262890 = 0;
    GameData_2262898 = 0;
    GameData_22628a0 = 0;
    GameData_22628a8 = 0;
    GameData_22628d0 = 0;
    GameData_22628d8 = 0;
    GameData_22628e0 = 0;
    GameData_2262830 = 0;
    GameData_2262838 = (__int64)GameRoutine_16c0c20;
    GameData_22628c8 = 0;
    GameData_22628b8 = 0;
    GameData_22628c0 = 0;
    GameData_22628b0 = 0;
    __cxa_guard_release(&GameData_22628e8);
  }
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      168, 16, 0);
  v7 = GameData_212c608[0];
  *(_QWORD*)(v6 + 96) = 0;
  *(_QWORD*)(v6 + 104) = 0;
  *(_QWORD*)(v6 + 112) = 0;
  *(_QWORD*)(v6 + 120) = 0;
  *(_QWORD*)(v6 + 128) = 0;
  *(_WORD*)(v6 + 136) = 0;
  *(_QWORD*)(v6 + 16) = 0;
  *(_QWORD*)(v6 + 24) = "NULL";
  *(_QWORD*)(v6 + 138) = 0;
  *(_QWORD*)(v6 + 144) = 0;
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 80) = 0;
  *(_QWORD*)(v6 + 88) = 0;
  *(_QWORD*)v6 = v7 + 16;
  *(_QWORD*)(v6 + 8) = 0;
  game_ProcInst_Register(v6);
  *(_QWORD*)(v6 + 152) = a2;
  *(_QWORD*)(v6 + 160) = a3;
  *(_QWORD*)v6 = game_facility_anonymous_ProcStableBreedingResult_vtable;
  return GameRoutine_657850(v6, &GameData_22627e8, "ProcStableBreedingResult",
                            1, a1);
}

__int64 StableBreedingInfo_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = game_facility_StableBreedingInfo_vtable;
  *(_QWORD*)(a1 + 224) = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 328) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 344);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v2);
    }
  }
  if ((*(_BYTE*)(a1 + 304) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 320);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v4);
    }
  }
  if ((*(_BYTE*)(a1 + 280) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 296);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v6);
    }
  }
  return GameRoutine_15e5e00(a1);
}

__int64 StableBreedingInfo_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = game_facility_StableBreedingInfo_vtable;
  *(_QWORD*)(a1 + 224) = GameData_2130fa0[0] + 2;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 328) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 344);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  if ((*(_BYTE*)(a1 + 304) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 320);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6, v5);
    }
  }
  if ((*(_BYTE*)(a1 + 280) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 296);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v8, v7);
    }
  }
  GameRoutine_15e5e00(a1);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v9, a1);
}

__int64 StableBreedingInfo_16c1180(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 160);
  if (*(_BYTE*)(v1 + 361) == 1) {
    *(_BYTE*)(v1 + 361) = 0;
    return GameRoutine_17685e0();
  }
  return result;
}

#pragma GCC visibility pop
