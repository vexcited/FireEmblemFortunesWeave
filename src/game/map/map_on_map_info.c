#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_155ea30(_QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_156af20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15fbc40(__int64, __int64);
__int64 GameRoutine_15fc820(_QWORD, _QWORD);
__int64 GameRoutine_15ffb10(__int64);
__int64 GameRoutine_16030a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 Pane_58dee0(_QWORD, _QWORD);
__int64 Pane_58df60(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_Destroy_Unit(_QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 (*GameData_2065b58[])();
extern __int64 (*GameData_2066070[])();
extern __int64 (*game_map_MapOnMapInfo_vtable[])();
extern __int64 GameData_212c060;
extern __int64 GameData_21ed080;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gameui_MenuAnimator_instance_;
void __attribute__((noreturn)) GameRoutine_1601ed0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 MapOnMapInfo_Destructor(_QWORD* a1);
__int64 MapOnMapInfo_16012a0(__int64 a1);
__int64 MapOnMapInfo_16017e0(__int64 result, __int64 a2);
__int64 MapOnMapInfo_Unknown4(__int64 result);
__int64 MapOnMapInfo_1601bf0(__int64 result);
__int64 MapOnMapInfo_1601d20(__int64 result);
__int64 MapOnMapInfo_Unknown5(__int64 result);

__int64 MapOnMapInfo_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 i;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;

  *a1 = game_map_MapOnMapInfo_vtable;
  a1[1] = GameData_2065b58;
  v2 = a1[3];
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = a1[4];
  a1[3] = 0;
  a1[4] = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_155e140(a1 + 5);
  v4 = fw_memory_g_heap_manager_ptr;
  v5 = a1 + 48675;
  for (i = -391680; i != 0; i += 2448) {
    v7 = v5[301];
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
    game_Unit_Destroy_Unit(v5 + 17);
    v8 = v5[7];
    if (v8 != 0) {
      v5[8] = v8;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v9 = 128;
      }
      else {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9, v8);
    }
    v10 = v5[2];
    if (v10 != 0) {
      v5[3] = v10;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v11 = 128;
      }
      else {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v11, v10);
    }
    if (*v5 != 0) {
      std___1___shared_weak_count___release_weak(*v5);
    }
    v5 -= 306;
  }
  GameRoutine_155e140(a1 + 5);
  v12 = a1[17];
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
  GameRoutine_1564060(a1 + 11);
  GameRoutine_1563f90(a1 + 8, a1[9]);
  result = a1[6];
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v14 = a1[4];
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    result = std___1___shared_weak_count___release_weak(v14);
  }
  *a1 = GameData_2066070;
  if ((_QWORD*)GameData_21ed080 == a1) {
    GameData_21ed080 = 0;
  }
  return result;
}

__int64 MapOnMapInfo_16012a0(__int64 a1)
{
  int v2;
  char* v3;
  char* v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _BOOL4 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  bool v36;
  __int64 result;
  __int64 v38;
  __int64 v39;
  char* v40;
  __int64 v41;
  char v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  _QWORD* v50;
  _QWORD* v51;
  __int64 v52;
  _QWORD* v53;
  _QWORD* v54;
  __int64 v55;
  __int64 v56;
  _QWORD v57[2];
  char* v58;

  v56 = ui_LayoutAccessor_FindPane(a1 + 40, "N_Root");
  v2 = 0;
  v3 = nullptr;
  v4 = nullptr;
  v5 = 0;
  do {
    v6 = game_util_Format("L_UnitInfo%03d", v2);
    v7 = strlen(v6);
    if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
      GameRoutine_60a1d0();
    }
    v8 = v7;
    if (v7 >= 0x17) {
      if ((v7 | 7) == 0x17) {
        v10 = 26;
      }
      else {
        v10 = (v7 | 7) + 1;
      }
      v9 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v10, 16, 0);
      v57[1] = v8;
      v58 = (char*)v9;
      v57[0] = v10 | 1;
    LABEL_11:
      memmove(v9, v6, v8);
      goto LABEL_12;
    }
    v9 = (__int64)v57 + 1;
    LOBYTE(v57[0]) = 2 * v7;
    if (v7 != 0) {
      goto LABEL_11;
    }
  LABEL_12:
    *(_BYTE*)(v9 + v8) = 0;
    if ((v57[0] & 1) != 0) {
      v11 = v58;
    }
    else {
      v11 = (char*)v57 + 1;
    }
    v12 = (__int64*)GameRoutine_155fbe0(a1 + 40, v11);
    if ((GameRoutine_155ea30(v12) & 1) == 0) {
      goto LABEL_36;
    }
    if (v12[2] == 0) {
      goto LABEL_33;
    }
    v13 = v12[1];
    if (v13 == 0) {
      goto LABEL_33;
    }
    v14 = std___1___shared_weak_count_lock(v13);
    if (v14 != 0) {
      v15 = *v12;
      if (*v12 != 0) {
        LODWORD(v9) = *(unsigned __int8*)(v15 + 24);
        v16 = v15 + 152;
        if ((_DWORD)v9 == 0) {
          v16 = 0;
        }
        v17 = v16 != v12[2];
      }
      else {
        v17 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (!v17) {
          goto LABEL_30;
        }
      }
      else {
        v19 = v14;
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        std___1___shared_weak_count___release_weak(v19);
        if (!v17) {
        LABEL_30:
          if ((v9 & 1) == 0) {
            goto LABEL_33;
          }
          goto LABEL_31;
        }
      }
    }
    v18 = v12[1];
    if (v18 != 0 && *(_QWORD*)(v18 + 8) != -1) {
    LABEL_31:
      v20 = v12[2];
      if (v20 != 0) {
        v21 = *(_QWORD*)(v20 + 24);
        goto LABEL_34;
      }
    }
  LABEL_33:
    v21 = 0;
  LABEL_34:
    v22 = Pane_58df60(v56, v21);
    if ((unsigned __int64)v4 < v5) {
      *(_QWORD*)v4 = v21;
      v4 += 8;
    LABEL_36:
      if ((v57[0] & 1) == 0) {
        goto LABEL_2;
      }
    LABEL_37:
      if (v58 != nullptr) {
        v23 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v58);
      }
      goto LABEL_2;
    }
    v24 = (char*)(v4 - v3);
    v25 = (v4 - v3) >> 3;
    v26 = v25 + 1;
    if ((unsigned __int64)(v25 + 1) >> 61 != 0) {
      GameRoutine_1601ed0(v22);
    }
    if ((__int64)(v5 - (_QWORD)v3) >> 2 > v26) {
      v26 = (__int64)(v5 - (_QWORD)v3) >> 2;
    }
    if (v5 - (unsigned __int64)v3 >= 0x7FFFFFFFFFFFFFF8LL) {
      v27 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v27 = v26;
    }
    if (v27 != 0) {
      if (v27 >> 61 != 0) {
        GameRoutine_60a210(v22);
      }
      v28 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v27, 16, 0);
    }
    else {
      v28 = 0;
    }
    v5 = v28 + 8 * v27;
    v29 = (char*)(v4 - v3);
    v30 = (__int64)&v24[v28 + -8 * v25];
    *(_QWORD*)&v24[v28] = v21;
    v4 = &v24[v28 + 8];
    memcpy(v30, v3, v29);
    if (v3 != nullptr) {
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v3);
    }
    v3 = (char*)v30;
    if ((v57[0] & 1) != 0) {
      goto LABEL_37;
    }
  LABEL_2:
    ++v2;
  } while (v2 != 160);
  if ((v4 - v3) >> 3 < 129) {
    v35 = 0;
  LABEL_63:
    result = GameRoutine_16030a0(v3, v4, (v4 - v3) >> 3, 0, v35);
  }
  else {
    v32 = (v4 - v3) >> 3;
    v33 = GameData_212c060;
    while (1) {
      v34 = GameRoutine_1a09d20(8 * v32, v33);
      if (v34 != 0) {
        break;
      }
      v35 = v32 >> 1;
      v36 = v32 > 1;
      v32 >>= 1;
      if (!v36) {
        goto LABEL_63;
      }
    }
    v38 = v34;
    GameRoutine_16030a0(v3, v4, (v4 - v3) >> 3, v34, v32);
    v39 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v39 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v39, v38);
  }
  if (v3 != v4) {
    v40 = v3;
    do {
      v41 = *(_QWORD*)v40;
      v42 = *(_BYTE*)(*(_QWORD*)v40 + 88LL);
      *(_DWORD*)(v41 + 56) = 0;
      *(_BYTE*)(v41 + 88) = v42 | 0x10;
      v43 = *(_QWORD*)v40;
      v40 += 8;
      result = Pane_58dee0(v56, v43);
    } while (v40 != v4);
  }
  v44 = 0;
  v45 = a1 + 12349;
  v46 = a1 + 4980;
  v47 = a1 + 7428;
  do {
    v48 = a1 + v44;
    if (*(_BYTE*)(a1 + v44 + 2532) != 0 && (*(_BYTE*)(v48 + 2557) & 1) == 0) {
      *(_BYTE*)(v48 + 2532) = 0;
      v49 = (_QWORD*)(a1 + v44);
      v49[33] = 0;
      v49[34] = 0;
      v49[35] = 0;
      v49[36] = 0;
    }
    if (*(_BYTE*)(v46 + v44) != 0 && (*(_BYTE*)(v46 + v44 + 25) & 1) == 0) {
      v50 = (_QWORD*)(a1 + v44);
      *(_BYTE*)(v46 + v44) = 0;
      v50[339] = 0;
      v50[340] = 0;
      v50[341] = 0;
      v50[342] = 0;
    }
    if (*(_BYTE*)(v47 + v44) != 0 && (*(_BYTE*)(v47 + v44 + 25) & 1) == 0) {
      v51 = (_QWORD*)(a1 + v44);
      *(_BYTE*)(v47 + v44) = 0;
      v51[645] = 0;
      v51[646] = 0;
      v51[647] = 0;
      v51[648] = 0;
    }
    v52 = v47 + v44;
    if (*(_BYTE*)(v47 + v44 + 2448) != 0 && (*(_BYTE*)(v52 + 2473) & 1) == 0) {
      *(_BYTE*)(v52 + 2448) = 0;
      v53 = (_QWORD*)(a1 + v44);
      v53[951] = 0;
      v53[952] = 0;
      v53[953] = 0;
      v53[954] = 0;
    }
    if (*(_BYTE*)(v45 + v44 - 25) != 0 && (*(_BYTE*)(v45 + v44) & 1) == 0) {
      *(_BYTE*)(v45 + v44 - 25) = 0;
      v54 = (_QWORD*)(a1 + v44);
      v54[1257] = 0;
      v54[1258] = 0;
      v54[1259] = 0;
      v54[1260] = 0;
    }
    v44 += 12240;
  } while (v44 != 391680);
  if (v3 != nullptr) {
    v55 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v55 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v55, v3);
  }
  return result;
}

__int64 MapOnMapInfo_16017e0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
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
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;

  if (a2 != 0) {
    v2 = result + 160;
    v3 = -7504;
    v4 = -5056;
    v5 = 0;
    v6 = 9876;
    v7 = 4980;
    do {
      v8 = *(_QWORD*)(result + v5 + 168);
      if (v8 != 0 && *(_QWORD*)(v8 + 8) != -1 &&
          *(_BYTE*)(result + v5 + 2532) != 0 &&
          *(unsigned __int8*)(result + v5 + 2532) ==
              *(unsigned __int8*)(a2 + 2088)) {
        v13 = result + v5 + 160;
        return GameRoutine_15fc820(v13, result + 391856);
      }
      v10 = *(_QWORD*)(result + v5 + 2616);
      if (v10 != 0 && *(_QWORD*)(v10 + 8) != -1 &&
          *(_BYTE*)(result + v7) != 0 &&
          *(unsigned __int8*)(result + v7) == *(unsigned __int8*)(a2 + 2088)) {
        v13 = result + v5 + 2608;
        return GameRoutine_15fc820(v13, result + 391856);
      }
      v11 = *(_QWORD*)(result + v5 + 5064);
      if (v11 != 0 && *(_QWORD*)(v11 + 8) != -1 &&
          *(_BYTE*)(result + v7 + 2448) != 0 &&
          *(unsigned __int8*)(result + v7 + 2448) ==
              *(unsigned __int8*)(a2 + 2088)) {
        v13 = result - v4;
        return GameRoutine_15fc820(v13, result + 391856);
      }
      v12 = *(_QWORD*)(result + v5 + 7512);
      if (v12 != 0 && *(_QWORD*)(v12 + 8) != -1 &&
          *(_BYTE*)(result + v6) != 0 &&
          *(unsigned __int8*)(result + v6) == *(unsigned __int8*)(a2 + 2088)) {
        v13 = result - v3;
        return GameRoutine_15fc820(v13, result + 391856);
      }
      v5 += 9792;
      v3 -= 9792;
      v6 += 9792;
      v4 -= 9792;
      v7 += 9792;
    } while (v5 != 391680);
    v14 = -9952;
    v15 = -7504;
    v16 = -5056;
    v17 = 12324;
    v18 = 0;
    v19 = 7428;
    v20 = 4980;
    while (1) {
      v21 = *(_QWORD*)(result + v18 + 168);
      if (v21 != 0 && *(_QWORD*)(v21 + 8) != -1 &&
          *(_BYTE*)(result + v18 + 2532) == 0) {
        v13 = result + v18 + 160;
        v26 = result;
        goto LABEL_50;
      }
      v22 = *(_QWORD*)(result + v18 + 2616);
      if (v22 != 0 && *(_QWORD*)(v22 + 8) != -1 &&
          *(_BYTE*)(result + v20) == 0) {
        v26 = result;
        v13 = result + v18 + 2608;
        goto LABEL_50;
      }
      v23 = *(_QWORD*)(result + v18 + 5064);
      if (v23 != 0 && *(_QWORD*)(v23 + 8) != -1 &&
          *(_BYTE*)(result + v19) == 0) {
        v26 = result;
        v13 = result - v16;
        goto LABEL_50;
      }
      v24 = *(_QWORD*)(result + v18 + 7512);
      if (v24 != 0 && *(_QWORD*)(v24 + 8) != -1 &&
          *(_BYTE*)(result + v19 + 2448) == 0) {
        break;
      }
      v25 = *(_QWORD*)(result + v18 + 9960);
      if (v25 != 0 && *(_QWORD*)(v25 + 8) != -1 &&
          *(_BYTE*)(result + v17) == 0) {
        v26 = result;
        v13 = result - v14;
        goto LABEL_50;
      }
      v18 += 12240;
      v14 -= 12240;
      v17 += 12240;
      v15 -= 12240;
      v16 -= 12240;
      v19 += 12240;
      v20 += 12240;
      if (v18 == 391680) {
        v27 = result;
        v28 = a2;
        GameRoutine_15ffb10(result);
        a2 = v28;
        v26 = v27;
        v13 = v2 + 2448LL * *(int*)(v27 + 391840) - 2448;
        goto LABEL_50;
      }
    }
    v26 = result;
    v13 = result - v15;
  LABEL_50:
    GameRoutine_15fbc40(v13, a2);
    result = v26;
    return GameRoutine_15fc820(v13, result + 391856);
  }
  return result;
}

__int64 MapOnMapInfo_Unknown4(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v13;
  __int64 v14;
  _BYTE v15[32];

  v1 = result + 389120;
  if ((*(_BYTE*)(result + 391878) & 1) == 0) {
    if ((*(_DWORD*)(result + 391872) & 0x80000000) == 0) {
      *(_DWORD*)(result + 391872) = -1;
      return result;
    }
    v2 = *(_QWORD*)(result + 144);
    v3 = game_gameui_MenuAnimator_instance_;
    if (v2 == -1) {
      if (game_gameui_MenuAnimator_instance_ != 0) {
      LABEL_37:
        v13 = result;
        sprintf(v15, "%s%s", "Alpha", "Out");
        v14 = GameRoutine_156af20(v3, 4, 1, v13 + 40, 0, v15);
        result = v13;
      LABEL_39:
        *(_QWORD*)(result + 152) = v14;
        *(_BYTE*)(v1 + 2758) = 1;
        return result;
      }
    }
    else if (game_gameui_MenuAnimator_instance_ != 0) {
      if (v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 272) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 504) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 736) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 968) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1200) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1432) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1664) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1896) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2128) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2360)) {
        *(_BYTE*)(result + 391876) = 1;
        return result;
      }
      goto LABEL_37;
    }
    v14 = -1;
    goto LABEL_39;
  }
  return result;
}

__int64 MapOnMapInfo_1601bf0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v13;
  __int64 v14;
  _BYTE v15[32];

  v1 = result + 389120;
  if ((*(_BYTE*)(result + 391878) & 1) == 0) {
    if ((*(_DWORD*)(result + 391872) & 0x80000000) == 0) {
      *(_DWORD*)(result + 391872) = -1;
      return result;
    }
    v2 = *(_QWORD*)(result + 144);
    v3 = game_gameui_MenuAnimator_instance_;
    if (v2 == -1) {
      if (game_gameui_MenuAnimator_instance_ != 0) {
      LABEL_37:
        v13 = result;
        sprintf(v15, "%s%s", "Alpha", "Out");
        v14 = GameRoutine_156af20(v3, 4, 1, v13 + 40, 0, v15);
        result = v13;
      LABEL_39:
        *(_QWORD*)(result + 152) = v14;
        *(_BYTE*)(v1 + 2758) = 1;
        return result;
      }
    }
    else if (game_gameui_MenuAnimator_instance_ != 0) {
      if (v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 272) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 504) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 736) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 968) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1200) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1432) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1664) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1896) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2128) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2360)) {
        *(_BYTE*)(result + 391876) = 1;
        return result;
      }
      goto LABEL_37;
    }
    v14 = -1;
    goto LABEL_39;
  }
  return result;
}

__int64 MapOnMapInfo_1601d20(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v13;
  __int64 v14;
  _BYTE v15[32];

  v1 = result + 389120;
  if ((*(_BYTE*)(result + 391870) & 1) == 0) {
    if ((*(_DWORD*)(result + 391864) & 0x80000000) == 0) {
      *(_DWORD*)(result + 391864) = -1;
      return result;
    }
    v2 = *(_QWORD*)(result + 136);
    v3 = game_gameui_MenuAnimator_instance_;
    if (v2 == -1) {
      if (game_gameui_MenuAnimator_instance_ != 0) {
      LABEL_37:
        v13 = result;
        sprintf(v15, "%s%s", "Alpha", "Out");
        v14 = GameRoutine_156af20(v3, 4, 1, v13 + 32, 0, v15);
        result = v13;
      LABEL_39:
        *(_QWORD*)(result + 144) = v14;
        *(_BYTE*)(v1 + 2750) = 1;
        return result;
      }
    }
    else if (game_gameui_MenuAnimator_instance_ != 0) {
      if (v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 272) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 504) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 736) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 968) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1200) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1432) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1664) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1896) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2128) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2360)) {
        *(_BYTE*)(result + 391868) = 1;
        return result;
      }
      goto LABEL_37;
    }
    v14 = -1;
    goto LABEL_39;
  }
  return result;
}

__int64 MapOnMapInfo_Unknown5(__int64 result)
{
  *(_DWORD*)(result + 391872) = 4;
  return result;
}

#pragma GCC visibility pop
