#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_133ed80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_1730dc0(void);
__int64 GameRoutine_17871c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1788420(void);
__int64 GameRoutine_9726e0(_QWORD);
__int64 GmapCorpsMenu_172a860(__int64, unsigned int);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 game_sound_PlayCursorHorizontalSe(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_1ada5b4;
extern __int64 (*GameData_20b5010[])();
extern __int64 (*GameData_20b52f0[])();
extern __int64 (*game_gmap_anonymous_CorpsMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_EmptyMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_PoolCorpsMenuItem_vtable[])();
extern __int64 GameData_20b3420;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c790;
extern __int64* GameData_21319e8[10];
__int64 CorpsPoolMenu_Destructor(__int64 a1);
__int64 CorpsPoolMenu_DeletingDestructor(__int64 a1);
__int64 CorpsPoolMenu_Unknown107(__int64* a1);
__int64 CorpsPoolMenu_Unknown128(_QWORD* a1);
__int64 CorpsPoolMenu_Unknown143(_QWORD* a1);
__int64 CorpsPoolMenu_Unknown144(__int64 a1);
__int64 CorpsPoolMenu_Unknown146(__int64 a1);
bool CorpsPoolMenu_Unknown147(__int64 a1);
__int64 CorpsPoolMenu_Unknown161(__int64 a1);

__int64 CorpsPoolMenu_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 1072);
  if (v1 != 0) {
    *(_QWORD*)(a1 + 1080) = v1;
    v2 = a1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v1);
    a1 = v2;
  }
  return game_menu_BasicMenu_Destroy_BasicMenu(a1);
}

__int64 CorpsPoolMenu_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 1072);
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 1080) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  game_menu_BasicMenu_Destroy_BasicMenu(a1);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, a1);
}

__int64 CorpsPoolMenu_Unknown107(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = __dynamic_cast(a1[132], GameData_21319e8[0], &GameData_20b3420, 0);
  v3 = *a1;
  if (*(_BYTE*)(v2 + 410) != 1) {
    return (*(__int64 (**)(__int64*))(v3 + 1144))(a1);
  }
  v4 = (*(__int64 (**)(__int64*))(v3 + 1120))(a1);
  if ((_DWORD)v4 != 0 && (*(_BYTE*)(a1[132] + 356) & 1) == 0) {
    game_sound_PlayCursorHorizontalSe(v4);
    v5 = __dynamic_cast(a1[132], GameData_21319e8[0], &GameData_20b3420, 0);
    GameRoutine_17871c0(v5, 2, 1);
  }
  return 0;
}

__int64 CorpsPoolMenu_Unknown128(_QWORD* a1)
{
  __int64 result;
  int* v3;
  int* v4;
  _QWORD* v5;
  int v6;
  int v7;
  int v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  unsigned __int64 i;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  int v31;
  int v32;
  __int64 v33;
  int v34;
  int* v35;
  char v36;
  __int64 v37;
  void* v38;
  _QWORD* v39;
  int v40;
  __int64 v41;

  result = __dynamic_cast(a1[132], GameData_21319e8[0], &GameData_20b3420, 0);
  v3 = (int*)a1[134];
  v4 = (int*)a1[135];
  v41 = result;
  if (v3 != v4) {
    v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v6 = *(_DWORD*)(result + 376);
    v35 = v4;
    v34 = v6;
    do {
      v7 = *v3;
      if (*v3 != v6) {
        if (v7 != -1) {
          v8 = 1;
          v36 = 0;
          v40 = 1;
          if ((v7 & 0x80000000) == 0) {
            v9 = *(_QWORD*)(*GameData_212c790 + 8);
            v10 = *(__int64**)(v9 + 8);
            v11 = *(__int64**)(v9 + 16);
            if (v10 != v11) {
              while (1) {
                v13 = *v10++;
                v12 = v13;
                if (*(_DWORD*)(v13 + 84) == v7) {
                  break;
                }
                if (v10 == v11) {
                  v8 = 1;
                  goto LABEL_28;
                }
              }
              v26 = (_QWORD*)fw_memory_HeapManager_Allocate(*v5, 48, 16, 0);
              v39 = v26;
              *v26 = GameData_20b52f0;
              v26[1] = &v41;
              v26[2] = v3;
              v26[3] = &v40;
              v26[4] = &v36;
              v26[5] = a1;
              GameRoutine_133ed80(v12, &v37, v27);
              if (v39 == &v37) {
                v28 = 32;
              LABEL_25:
                (*(void (**)(void))(*v39 + v28))();
              }
              else if (v39 != nullptr) {
                v28 = 40;
                goto LABEL_25;
              }
              v8 = v40;
            }
          }
        LABEL_28:
          while (2) {
            v38 = &GameData_1ada5b4;
            result = game_HashString(&GameData_1ada5b4);
            v29 = game_GameModeData_instance_;
            v37 = result;
            if (game_GameModeData_instance_ != 0) {
              result = game_GameVariableTable_Find(
                  *(_QWORD*)(game_GameModeData_instance_ + 48), &v37);
              if (result != 0) {
                v29 = *(_DWORD*)(result + 32);
                goto LABEL_31;
              }
              if (v8 > 0) {
                goto LABEL_3;
              }
            }
            else {
            LABEL_31:
              if (v8 > v29) {
                goto LABEL_3;
              }
            }
            v30 = fw_memory_HeapManager_Allocate(*v5, 120, 16, 0);
            v31 = *v3;
            v32 = v40;
            v33 = v41;
            *(_WORD*)(v30 + 16) = 0;
            *(_DWORD*)(v30 + 40) = 0;
            *(_QWORD*)(v30 + 64) = 0;
            *(_QWORD*)(v30 + 72) = 0;
            *(_QWORD*)(v30 + 48) = 0;
            *(_QWORD*)(v30 + 56) = 0;
            *(_WORD*)(v30 + 80) = 257;
            *(_BYTE*)(v30 + 82) = 1;
            *(_BYTE*)(v30 + 104) = 0;
            *(_BYTE*)(v30 + 116) = 0;
            *(_QWORD*)v30 = game_gmap_anonymous_CorpsMenuItem_vtable;
            *(_QWORD*)(v30 + 8) = 0;
            *(_DWORD*)(v30 + 108) = v31;
            *(_DWORD*)(v30 + 112) = v32;
            LOBYTE(v31) = v36;
            *(_QWORD*)(v30 + 88) = v33;
            *(_QWORD*)(v30 + 96) = 0;
            if ((v31 & 1) == 0) {
              *(_BYTE*)(v30 + 116) = 1;
              v36 = 1;
            }
            GameRoutine_16e0c00(a1, v30);
            v8 = ++v40;
            continue;
          }
        }
        v14 = fw_memory_HeapManager_Allocate(*v5, 120, 16, 0);
        v15 = v41;
        v16 = (_QWORD*)v14;
        *(_WORD*)(v14 + 16) = 0;
        *(_DWORD*)(v14 + 40) = 0;
        *(_QWORD*)(v14 + 48) = 0;
        *(_QWORD*)(v14 + 56) = 0;
        *(_QWORD*)(v14 + 64) = 0;
        *(_QWORD*)(v14 + 72) = 0;
        *(_WORD*)(v14 + 80) = 257;
        *(_BYTE*)(v14 + 82) = 1;
        *(_BYTE*)(v14 + 104) = 0;
        *(_BYTE*)(v14 + 116) = 0;
        *(_QWORD*)(v14 + 88) = v15;
        *(_QWORD*)(v14 + 96) = 0;
        *(_QWORD*)(v14 + 108) = -1;
        v17 = a1[43];
        *v16 = game_gmap_anonymous_EmptyMenuItem_vtable;
        v16[1] = 0;
        if (v17 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
          a1[43] = 0;
        }
        v18 = *v5;
        v16[1] = a1;
        a1[43] = v16;
        v40 = 1;
        v19 = (_QWORD*)fw_memory_HeapManager_Allocate(v18, 40, 16, 0);
        v39 = v19;
        *v19 = GameData_20b5010;
        v19[1] = a1;
        v19[2] = &v41;
        v19[3] = v3;
        v19[4] = &v40;
        GameRoutine_9726e0(&v37);
        (*(void (**)(_QWORD*))(*v19 + 40LL))(v19);
        for (i = 0;; ++i) {
          v38 = &GameData_1ada5b4;
          result = game_HashString(&GameData_1ada5b4);
          v21 = game_GameModeData_instance_;
          v37 = result;
          if (game_GameModeData_instance_ != 0) {
            result = game_GameVariableTable_Find(
                *(_QWORD*)(game_GameModeData_instance_ + 48), &v37);
            if (result != 0) {
              v21 = *(int*)(result + 32);
            }
            else {
              v21 = 0;
            }
          }
          if (((__int64)(a1[135] - a1[134]) >> 2) * v21 <= i) {
            break;
          }
          v22 = fw_memory_HeapManager_Allocate(*v5, 120, 16, 0);
          v23 = *v3;
          v24 = v41;
          v25 = v40;
          *(_WORD*)(v22 + 16) = 0;
          *(_DWORD*)(v22 + 40) = 0;
          *(_QWORD*)(v22 + 64) = 0;
          *(_QWORD*)(v22 + 72) = 0;
          *(_QWORD*)(v22 + 48) = 0;
          *(_QWORD*)(v22 + 56) = 0;
          *(_WORD*)(v22 + 80) = 257;
          *(_BYTE*)(v22 + 82) = 1;
          *(_BYTE*)(v22 + 104) = 0;
          *(_BYTE*)(v22 + 116) = 0;
          *(_QWORD*)v22 = game_gmap_anonymous_PoolCorpsMenuItem_vtable;
          *(_QWORD*)(v22 + 8) = 0;
          *(_QWORD*)(v22 + 88) = v24;
          *(_QWORD*)(v22 + 96) = 0;
          *(_DWORD*)(v22 + 108) = v23;
          *(_DWORD*)(v22 + 112) = v25;
          GameRoutine_16e0c00(a1, v22);
          ++v40;
        }
      LABEL_3:
        v4 = v35;
        v6 = v34;
      }
      ++v3;
    } while (v3 != v4);
  }
  return result;
}

__int64 CorpsPoolMenu_Unknown143(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  if ((*(unsigned int (**)(_QWORD*))(*a1 + 1120LL))(a1) != 0) {
    v2 = a1[132];
    if ((*(_BYTE*)(v2 + 356) & 1) == 0) {
      v3 = __dynamic_cast(v2, GameData_21319e8[0], &GameData_20b3420, 0);
      v4 = GmapCorpsMenu_172a860(v3, 1u);
      game_sound_PlayCursorHorizontalSe(v4);
    }
  }
  return 0;
}

__int64 CorpsPoolMenu_Unknown144(__int64 a1)
{
  if ((*(_DWORD*)(*(_QWORD*)(a1 + 1056) + 356LL) & 1 | *(_DWORD*)(a1 + 660)) !=
      0) {
    return GameRoutine_1730dc0();
  }
  else {
    return GameRoutine_1788420();
  }
}

__int64 CorpsPoolMenu_Unknown146(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v1 = *(_QWORD*)(a1 + 1056);
  if (v1 != 0 &&
      *(_BYTE*)((v2 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                                     &GameData_20b3420, 0)) +
                410) == 1) {
    v3 = 2;
    v4 = 0;
  }
  else {
    v2 = v1;
    v4 = 1;
    v3 = *(_DWORD*)(*(_QWORD*)(v1 + 8LL * *(unsigned int*)(v1 + 352) + 304) +
                    1064LL) == 0;
  }
  return GameRoutine_17871c0(v2, v3, v4);
}

bool CorpsPoolMenu_Unknown147(__int64 a1)
{
  return (*(_DWORD*)(*(_QWORD*)(a1 + 1056) + 356LL) & 1 |
          *(_DWORD*)(a1 + 660)) == 0;
}

__int64 CorpsPoolMenu_Unknown161(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v2;

  if (*(int*)(a1 + 656) < 1) {
    return **(unsigned int**)(a1 + 1072);
  }
  v1 = *(_QWORD*)(a1 + 672);
  v2 = *(int*)(a1 + 660);
  if (v2 < (*(_QWORD*)(a1 + 680) - v1) >> 2) {
    v2 = *(int*)(v1 + 4 * v2);
  }
  return *(unsigned int*)(*(_QWORD*)(a1 + 1072) + 4 * v2);
}

#pragma GCC visibility pop
