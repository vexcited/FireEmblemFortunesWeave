#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1591700(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15d9250(_QWORD, _QWORD);
__int64 GameRoutine_16dc3e0(_QWORD);
__int64 GameRoutine_16e2460(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_172a580(__int64, unsigned int);
__int64 GameRoutine_172b500(__int64 result, char, char);
__int64 GameRoutine_17871c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1788180(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_sound_PlayCursorHorizontalSe(_QWORD);
__int64 game_util_Format(const char*, ...);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1afe348;
extern __int64 GameData_20b33d8;
extern __int64 GameData_20b3420;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e348;
extern __int64* GameData_21319e8[10];
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_1a9f09e;
extern char* GameData_20b6908[14];
extern char* GameData_20b6940[7];
__int64 CorpsUserMenu_Unknown161(__int64 a1);
void* CorpsUserMenu_172bbb0(__int64 a1);
__int64 CorpsUserMenu_172bca0(__int64 a1);
__int64 CorpsUserMenu_172c0c0(_QWORD* a1);
__int64 CorpsUserMenu_172c1f0(__int64 a1);
__int64 CorpsUserMenu_172c5c0(__int64 a1);
__int64 CorpsUserMenu_Unknown137(__int64 a1);
__int64 CorpsUserMenu_172c640(__int64 a1);
__int64 CorpsUserMenu_Unknown143(_QWORD* a1);
bool CorpsUserMenu_Unknown148(__int64 a1);
__int64 CorpsUserMenu_Unknown149(__int64 a1);
__int64 CorpsUserMenu_Unknown150(__int64 a1);
__int64 CorpsUserMenu_Unknown155(__int64 a1, char a2);
__int64 CorpsUserMenu_Unknown156(__int64 a1, char a2);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_gmap_anonymous_CorpsMenuItem_vtable[])();
__int64
game_gmap_anonymous_CorpsUserMenu_CorpsUserMenu_closure_Invoke(__int64 result,
                                                               __int64 a2);
__int64
game_gmap_anonymous_CorpsUserMenu_AddItemList_closure_Invoke(__int64 result,
                                                             __int64* a2);
bool game_gmap_anonymous_CorpsUserMenu_SortAndFilter_closure_Invoke(
    __int64 a1, _QWORD* a2, _DWORD** a3);

__int64 CorpsUserMenu_Unknown161(__int64 a1)
{
  return *(unsigned int*)(__dynamic_cast(*(_QWORD*)(a1 + 1056),
                                         GameData_21319e8[0], &GameData_20b3420,
                                         0) +
                          376);
}

void* CorpsUserMenu_172bbb0(__int64 a1)
{
  if (*(_DWORD*)(__dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                                &GameData_20b3420, 0) +
                 360) != 0) {
    return nullptr;
  }
  else {
    return &GameData_1afe348;
  }
}

__int64 CorpsUserMenu_172bca0(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  unsigned __int64 v16;
  char* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  int v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  int v50;
  int v51;

  v2 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                      &GameData_20b3420, 0);
  result = *(_QWORD*)(a1 + 336);
  if (result == 0) {
    return result;
  }
  result = __dynamic_cast(result, GameData_212e008[0], &GameData_20b33d8, 0);
  if (result == 0) {
    return result;
  }
  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)result + 560LL))(result);
  if (v4 == 0) {
    ui_LayoutAccessor_SetPaneVisible(v2 + 200, "N_Abilities", 0);
    v23 = GameRoutine_155fbe0(v2 + 200, "L_InfoDetail");
    return GameRoutine_15d9250(v23, 0);
  }
  v5 = v4;
  v30 = 0;
  v31 = 0;
  v29 = 0;
  GameRoutine_1591700(&v29, v4, 0);
  v6 = v2 + 200;
  if (v29 == v30) {
    ui_LayoutAccessor_SetPaneVisible(v6, "N_Abilities", 0);
    goto LABEL_31;
  }
  ui_LayoutAccessor_SetPaneVisible(v6, "N_Abilities", 1);
  if (v30 == v29) {
    v9 = 0;
    while (1) {
    LABEL_39:
      v26 = game_util_Format("L_Abilities%02d", v9);
      GameRoutine_1560070(&v32, v2 + 200, v26);
      if (v33 != 0) {
        v27 = std___1___shared_weak_count_lock(v33);
        v28 = v32;
        if (v33 != 0) {
          std___1___shared_weak_count___release_weak(v33);
        }
        if (v27 != 0 && v28 != nullptr) {
          GameRoutine_155e830(v28, 0);
        LABEL_46:
          if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
            std___1___shared_weak_count___release_weak(v27);
          }
          goto LABEL_38;
        }
        if (v27 != 0) {
          goto LABEL_46;
        }
      }
    LABEL_38:
      if (++v9 == 4) {
        goto LABEL_31;
      }
    }
  }
  v7 = 0;
  v8 = GameData_212e348 + 2;
  do {
    v10 = game_util_Format("L_Abilities%02d", v7);
    GameRoutine_1560070(&v32, v2 + 200, v10);
    if (v33 == 0) {
      goto LABEL_7;
    }
    v11 = std___1___shared_weak_count_lock(v33);
    v12 = v32;
    if (v33 != 0) {
      std___1___shared_weak_count___release_weak(v33);
    }
    if (v11 != 0 && v12 != nullptr) {
      v13 = ui_LayoutAccessor_FindPane(v12, "Icon");
      if (v13 != 0) {
        v14 = __dynamic_cast(v13, GameData_212d670[0], GameData_212d678[0], 0);
        if (v14 != 0) {
          v15 = &GameData_1a9f09e;
          v16 = *(unsigned __int8*)(v29 + v7);
          if (v16 <= 6) {
            v15 = GameData_20b6940[v16];
          }
          GameRoutine_136a920(ui_Manager_instance_ + 1264, v14, 0, 7, v15);
        }
      }
      v17 = &GameData_1a9f09e;
      v18 = *(unsigned __int8*)(v29 + v7);
      if (v18 <= 6) {
        v17 = GameData_20b6908[v18];
      }
      v38 = -1;
      v39 = -1;
      v40 = -1;
      v41 = -1;
      v42 = -1;
      v43 = -1;
      v44 = -1;
      v45 = -1;
      v19 = *msg_MessageManager_instance__ptr[0];
      v46 = -1;
      v47 = -1;
      v48 = -1;
      v49 = -1;
      v32 = v8;
      v33 = 0xFFFF0001FFFF0000LL;
      v34 = 0xFFFF0004FFFF0002LL;
      v35 = 0xFFFF0006FFFF0005LL;
      v50 = 8;
      v51 = 0;
      v36 = -65529;
      v37 = -65528;
      v20 = GameRoutine_a4dbe0(v19, v17, 0, &v32);
      if (v20 != 0) {
        v21 = v20;
        v22 = ui_LayoutAccessor_FindTextBox(v12, "T_Txt");
        if (v22 != 0) {
          GameRoutine_156c5d0(v22, v21, 0);
        }
      }
      GameRoutine_155e830(v12, 1);
    }
    else if (v11 == 0) {
      goto LABEL_7;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
    }
  LABEL_7:
    ++v7;
    v9 = v30 - v29;
  } while (v7 < v30 - v29);
  if (v9 <= 3) {
    goto LABEL_39;
  }

LABEL_31:
  v24 = GameRoutine_155fbe0(v2 + 200, "L_InfoDetail");
  result = GameRoutine_15d9250(v24, v5);
  if (v29 != 0) {
    v30 = v29;
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v29);
  }
  return result;
}

__int64 CorpsUserMenu_172c0c0(_QWORD* a1)
{
  __int64 v2;
  int v3;
  __int64 v4;

  v2 = a1[132];
  v3 = *(_DWORD*)(v2 + 356);
  if ((v3 & 1) != 0) {
    *(_QWORD*)(__dynamic_cast(v2, GameData_21319e8[0], &GameData_20b3420, 0) +
               368) = 0;
    v3 = *(_DWORD*)(a1[132] + 356LL);
  }
  v4 = *a1;
  if ((v3 & 1) == 0) {
    return (*(__int64 (**)(_QWORD*))(v4 + 1128))(a1);
  }
  (*(void (**)(_QWORD*))(v4 + 576))(a1);
  *(_DWORD*)(a1[132] + 356LL) &= ~1u;
  *(_DWORD*)(a1[132] + 356LL) &= ~2u;
  GameRoutine_17871c0(
      a1[132],
      *(_DWORD*)(*(_QWORD*)(a1[132] + 8LL * *(unsigned int*)(a1[132] + 352LL) +
                            304) +
                 1064LL) == 0,
      0);
  (*(void (**)(_QWORD*))(*a1 + 1112LL))(a1);
  return 0;
}

__int64 CorpsUserMenu_172c1f0(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 1056);
  if (*(_DWORD*)(__dynamic_cast(v1, GameData_21319e8[0], &GameData_20b3420, 0) +
                 360) == 0 &&
      (*(_BYTE*)(v1 + 356) & 1) != 0) {
    return 1;
  }
  else {
    return GameRoutine_1788180(a1);
  }
}

__int64 CorpsUserMenu_172c5c0(__int64 a1)
{
  (*(void (**)(__int64))(*(_QWORD*)a1 + 1032LL))(a1);
  return GameRoutine_16dc3e0(a1);
}

__int64 CorpsUserMenu_Unknown137(__int64 a1)
{
  __int64 result;

  result = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                          &GameData_20b3420, 0);
  *(_BYTE*)(result + 410) = 0;
  return result;
}

__int64 CorpsUserMenu_172c640(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;

  GameRoutine_1567590("Tutorial", 0);
  v2 = GameData_21319e8[0];
  v3 = *(_QWORD*)(__dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                                 &GameData_20b3420, 0) +
                  312);
  (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 240LL))(v3, 1);
  (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 248LL))(v3, 1);
  v4 = *(
      _QWORD*)(__dynamic_cast(*(_QWORD*)(a1 + 1056), v2, &GameData_20b3420, 0) +
               320);
  (*(void (**)(__int64, __int64))(*(_QWORD*)v4 + 240LL))(v4, 1);
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v4 + 248LL))(v4, 1);
}

__int64 CorpsUserMenu_Unknown143(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  if ((*(unsigned int (**)(_QWORD*))(*a1 + 1120LL))(a1) != 0) {
    v2 = a1[132];
    if ((*(_BYTE*)(v2 + 356) & 1) == 0) {
      v3 = __dynamic_cast(v2, GameData_21319e8[0], &GameData_20b3420, 0);
      v4 = GameRoutine_172a580(v3, 1u);
      game_sound_PlayCursorHorizontalSe(v4);
    }
  }
  return 0;
}

bool CorpsUserMenu_Unknown148(__int64 a1)
{
  return (*(_BYTE*)(*(_QWORD*)(a1 + 1056) + 356LL) & 1) == 0;
}

__int64 CorpsUserMenu_Unknown149(__int64 a1)
{
  __int64 v1;

  v1 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                      &GameData_20b3420, 0);
  return GameRoutine_172b500(v1, 0, 0);
}

__int64 CorpsUserMenu_Unknown150(__int64 a1)
{
  __int64 v1;

  v1 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                      &GameData_20b3420, 0);
  return GameRoutine_172b500(v1, 1, 0);
}

__int64 CorpsUserMenu_Unknown155(__int64 a1, char a2)
{
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  char v9;

  if (*(_BYTE*)(__dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                               &GameData_20b3420, 0) +
                409) != 1 ||
      (*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 1120LL))(a1) == 1 ||
      (*(_BYTE*)(*(_QWORD*)(a1 + 1056) + 356LL) & 1) != 0) {
    goto LABEL_12;
  }
  v4 = GameRoutine_16e2460(a1, 0, 0);
  v5 = *(_QWORD*)(a1 + 232);
  v6 = v4;
  if (*(_QWORD*)(a1 + 240) != v5) {
    v7 = 0;
    while (1) {
      v8 = *(_QWORD*)(v5 + 8 * v7);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v8 + 48LL))(v8) & 1) != 0 &&
          ((*(__int64 (**)(__int64))(*(_QWORD*)v8 + 40LL))(v8) & 1) != 0) {
        break;
      }
      v5 = *(_QWORD*)(a1 + 232);
      if (++v7 >= (unsigned __int64)((*(_QWORD*)(a1 + 240) - v5) >> 3)) {
        goto LABEL_11;
      }
    }
    if (v6 == (_DWORD)v7) {
      goto LABEL_10;
    }
  LABEL_12:
    v9 = 0;
    return v9 & 1;
  }

LABEL_11:
  if (v6 != -1) {
    goto LABEL_12;
  }

LABEL_10:
  v9 = a2 | (*(_DWORD*)(a1 + 1064) != 0);
  return v9 & 1;
}

__int64 CorpsUserMenu_Unknown156(__int64 a1, char a2)
{
  int v4;
  _QWORD* v5;
  _QWORD* v6;
  int v7;
  int v8;
  __int64 v9;
  char v10;

  if (*(_BYTE*)(__dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                               &GameData_20b3420, 0) +
                409) != 1 ||
      (*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 1120LL))(a1) == 1 ||
      (*(_BYTE*)(*(_QWORD*)(a1 + 1056) + 356LL) & 1) != 0) {
    goto LABEL_12;
  }
  v4 = GameRoutine_16e2460(a1, 0, 0);
  v5 = *(_QWORD**)(a1 + 232);
  v6 = *(_QWORD**)(a1 + 240);
  v7 = v4;
  if (v5 != v6) {
    v8 = 0;
    do {
      v9 = *v5;
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v5 + 48LL))(*v5) & 1) != 0) {
        v8 += (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 40LL))(v9) & 1;
      }
      ++v5;
    } while (v5 != v6);
    if (v7 == v8 - 1) {
      goto LABEL_10;
    }
  LABEL_12:
    v10 = 0;
    return v10 & 1;
  }
  if (v4 != -1) {
    goto LABEL_12;
  }

LABEL_10:
  v10 = a2 | (*(_DWORD*)(a1 + 1064) == 0);
  return v10 & 1;
}

__int64

game_gmap_anonymous_CorpsUserMenu_CorpsUserMenu_closure_Invoke(__int64 result,
                                                               __int64 a2)
{
  int v2;
  int v3;

  v2 = *(_DWORD*)(*(_QWORD*)a2 + 416LL);
  v3 = *(unsigned __int8*)(*(_QWORD*)a2 + 501LL);
  if ((v2 & 0x100000) == 0) {
    v3 = -1;
  }
  if ((v2 & 0x80000) != 0 && v3 == **(_DWORD**)(result + 8)) {
    *(_DWORD*)(*(_QWORD*)(result + 16) + 1068LL) =
        *(__int16*)(*(_QWORD*)a2 + 490LL);
  }
  return result;
}

__int64

game_gmap_anonymous_CorpsUserMenu_AddItemList_closure_Invoke(__int64 result,
                                                             __int64* a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BYTE* v8;
  int v9;

  v2 = *a2;
  if ((*(_BYTE*)(*a2 + 418) & 0x10) != 0) {
    v3 = *(unsigned __int8*)(*a2 + 501);
  }
  else {
    v3 = -1;
  }
  if (v3 == **(_DWORD**)(result + 8)) {
    v4 = *(_QWORD*)(result + 16);
    v5 = result;
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        120, 16, 0);
    v7 = *(_QWORD*)(v4 + 1056);
    if (v7 != 0) {
      v7 = __dynamic_cast(v7, GameData_21319e8[0], &GameData_20b3420, 0);
    }
    v8 = *(_BYTE**)(v5 + 32);
    v9 = **(_DWORD**)(v5 + 24);
    *(_WORD*)(v6 + 16) = 0;
    *(_DWORD*)(v6 + 40) = 0;
    *(_QWORD*)(v6 + 48) = 0;
    *(_QWORD*)(v6 + 56) = 0;
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)(v6 + 72) = 0;
    *(_QWORD*)(v6 + 88) = v7;
    *(_QWORD*)(v6 + 96) = v2;
    *(_BYTE*)(v6 + 116) = 0;
    *(_WORD*)(v6 + 80) = 257;
    *(_BYTE*)(v6 + 82) = 1;
    *(_BYTE*)(v6 + 104) = 1;
    *(_DWORD*)(v6 + 108) = v3;
    *(_DWORD*)(v6 + 112) = v9;
    *(_QWORD*)v6 = game_gmap_anonymous_CorpsMenuItem_vtable;
    *(_QWORD*)(v6 + 8) = 0;
    if ((*v8 & 1) == 0) {
      *(_BYTE*)(v6 + 116) = 1;
      *v8 = 1;
    }
    result = BasicMenuCursor_16e0c00(v4, v6);
    ++**(_DWORD**)(v5 + 24);
  }
  return result;
}

bool game_gmap_anonymous_CorpsUserMenu_SortAndFilter_closure_Invoke(__int64 a1,
                                                                    _QWORD* a2,
                                                                    _DWORD** a3)
{
  _DWORD* v3;
  _DWORD* v4;
  int v5;
  int v6;
  int v7;

  v3 = *a3;
  if (*a2 != 0) {
    v4 =
        (_DWORD*)__dynamic_cast(*a2, GameData_212e008[0], &GameData_20b33d8, 0);
    if (v3 == nullptr) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v4 = nullptr;
  if (v3 != nullptr) {
  LABEL_3:
    v3 = (_DWORD*)__dynamic_cast(v3, GameData_212e008[0], &GameData_20b33d8, 0);
  }
LABEL_4:
  if ((*(__int64 (**)(_DWORD*))(*(_QWORD*)v4 + 560LL))(v4) != 0) {
    v5 = 0;
  }
  else {
    v5 = 0x10000;
  }
  v6 = v5 + v4[28];
  if ((*(__int64 (**)(_DWORD*))(*(_QWORD*)v3 + 560LL))(v3) != 0) {
    v7 = 0;
  }
  else {
    v7 = 0x10000;
  }
  return v6 < v7 + v3[28];
}

#pragma GCC visibility pop
