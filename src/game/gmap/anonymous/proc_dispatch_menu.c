#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_13261c0(_QWORD);
extern _UNKNOWN GameData_1a925e2;
extern _UNKNOWN* GameData_20a0e80;
extern __int64 game_GameModeData_instance_;
void* ProcDispatchMenu_Unknown67(__int64 a1);
_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64);
__int64 GameRoutine_16f33e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_212cf80[5];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ceb0;
_QWORD* game_gmap_anonymous_ProcDispatchMenu_AddItemList_closure_Invoke(
    _QWORD* result, unsigned int* a2);
_QWORD*
game_gmap_anonymous_ProcDispatchMenu_AddItemList_closure0_Invoke(__int64 a1,
                                                                 int* a2);
__int64 game_gmap_anonymous_ProcDispatchMenu_SortAndFilter_closure_Invoke(
    __int64 a1, unsigned __int8** a2);
__int64 GameRoutine_16f33e0_alt1(__int64, int, __int64,
                                 int) __asm__("GameRoutine_16f33e0");
_QWORD* game_16f1350(_QWORD*, __int64, char);
__int64 BasicMenu_16e1f40(__int64 result, __int64, __int64);
bool LegionPool_9374e0(_QWORD*, __int64);
extern __int64 (*GameData_20a0818[])();
extern __int64 (*GameData_20a0d10[])();
extern __int64 (*GameData_20a0d90[])();
extern __int64 (*GameData_20a0e10[])();
extern __int64 GameData_21ca060;
extern __int64 GameData_21f4280;
__int64 game_gmap_anonymous_ProcDispatchMenu_AddItemList(__int64 a1);
__int64 game_gmap_anonymous_ProcDispatchMenu_SortAndFilter(__int64 a1);

void* ProcDispatchMenu_Unknown67(__int64 a1)
{
  __int64 v1;
  unsigned __int8 v3;

  v1 = *(_QWORD*)(a1 + 1064);
  if ((*(_BYTE*)(v1 + 178) & 4) != 0 && game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    return &GameData_1a925e2;
  }
  v3 = GameRoutine_13261c0(v1) - 5;
  if (v3 > 4u) {
    return nullptr;
  }
  else {
    return *(&GameData_20a0e80 + v3);
  }
}

__int64 game_gmap_anonymous_ProcDispatchMenu_AddItemList(__int64 a1)
{
  __int64 v1;
  char v2;
  __int64 (**v4)();
  __int64 result;
  __int64 v6;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;
  int v9;

  v1 = *(_QWORD*)(a1 + 1064);
  v2 = *(_BYTE*)(a1 + 1072);
  v9 = 0;
  game_16f1350((_QWORD*)a1, v1, v2);
  if (*(_BYTE*)(a1 + 1072) == 1) {
    v4 = GameData_20a0818;
  }
  else {
    v4 = GameData_20a0d10;
  }
  v7_.v7[0] = v4;
  v7_.v7[1] = a1;
  v7_.v7[2] = &v9;
  v7_.v8 = v7_.v7;
  LegionPool_9374e0(*(_QWORD**)(GameData_21f4280 + 8), (__int64)v7_.v7);
  result = (__int64)v7_.v8;
  if (v7_.v8 == v7_.v7) {
    v6 = 32;
  }
  else {
    if (v7_.v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (*(__int64 (**)(__int64))(*v7_.v8 + v6))((__int64)v7_.v8);
}

__int64 game_gmap_anonymous_ProcDispatchMenu_SortAndFilter(__int64 a1)
{
  int v1;
  __int64 v2;
  _QWORD* v4;
  _QWORD* v5;
  int v6;
  bool v7;
  _BYTE* v8;
  __int64 v9;
  bool v10;
  _BYTE* v11;
  int v12;
  int v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 result;
  __int64 v21;
  struct {
    _QWORD v22[4];
    _QWORD* v23;
  } v22_;
  struct {
    _QWORD v24[4];
    _QWORD* v25;
  } v24_;
  struct {
    __int64 v26;
    __int64 v27;
    __int64 i;
  } v26_;

  v1 = *(_DWORD*)(a1 + 660);
  v2 = *(_QWORD*)(a1 + 672);
  if (v1 < (unsigned __int64)((*(_QWORD*)(a1 + 680) - v2) >> 2)) {
    v1 = *(_DWORD*)(v2 + 4LL * v1);
  }
  v4 = *(_QWORD**)(a1 + 256);
  v5 = *(_QWORD**)(a1 + 264);
  if (v4 != v5) {
    v6 = (unsigned __int8)v1;
    if ((_BYTE)v1 != 0) {
      while (1) {
        v11 = (_BYTE*)*v4;
        if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v4 + 560LL))(*v4) & 1) == 0) {
          v10 = true;
          goto LABEL_12;
        }
        v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21ca060 + 64) +
                                   8LL * *(unsigned __int8*)(*(__int64 (**)(
                                             _BYTE*))(*(_QWORD*)v11 + 584LL))(
                                             v11)) +
                        64LL);
        if (v9 != 0) {
          v12 = *(unsigned __int8*)(v9 + 250);
          if (v12 <= 9) {
            if (v12 == 7) {
              LODWORD(v9) = 1;
            }
            else {
              if (v12 != 8) {
              LABEL_27:
                LODWORD(v9) = 0;
                goto LABEL_11;
              }
              LODWORD(v9) = 2;
            }
          }
          else if (v12 == 10 || v12 == 31) {
            LODWORD(v9) = 3;
          }
          else {
            if (v12 != 42) {
              goto LABEL_27;
            }
            LODWORD(v9) = 4;
          }
        }
      LABEL_11:
        v10 = (_DWORD)v9 == v6;
      LABEL_12:
        ++v4;
        v11[84] = v10;
        if (v4 == v5) {
          goto LABEL_28;
        }
      }
    }
    do {
      v8 = (_BYTE*)*v4;
      v7 = ((*(__int64 (**)(_QWORD))(*(_QWORD*)*v4 + 560LL))(*v4) & 1) == 0 ||
           *(_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v8 + 584LL))(v8) != 0;
      ++v4;
      v8[84] = v7;
    } while (v4 != v5);
  }
LABEL_28:
  v14 = *(unsigned __int8*)(a1 + 1072);
  v15 = *(_QWORD**)(a1 + 256);
  v16 = *(_QWORD**)(a1 + 264);
  v26_.v26 = 0;
  v26_.v27 = 0;
  for (v26_.i = 0; v15 != v16; ++v15) {
    v17 = *v15;
    if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v15 + 560LL))(*v15) & 1) != 0 &&
        *(_BYTE*)(v17 + 84) == 1) {
      ++*((_DWORD*)&v26_.v26 + *(unsigned __int8*)(v17 + 83));
    }
  }
  if (v14 != 1) {
    if (HIDWORD(v26_.v26) != 0) {
      goto LABEL_40;
    }
    v18 = v26_.v26;
    goto LABEL_39;
  }
  v18 = v26_.v26;
  if (HIDWORD(v26_.i) + (_DWORD)v26_.i + HIDWORD(v26_.v27) + (_DWORD)v26_.v27 +
          (_DWORD)v26_.v26 + HIDWORD(v26_.v26) ==
      0) {
  LABEL_39:
    LODWORD(v26_.v26) = v18 + 1;
  }
LABEL_40:
  v24_.v24[0] = GameData_20a0d90;
  v24_.v24[1] = &v26_.v26;
  v22_.v23 = v22_.v22;
  v24_.v25 = v24_.v24;
  v22_.v22[0] = GameData_20a0e10;
  BasicMenu_16e1f40(a1, (__int64)v24_.v24, (__int64)v22_.v22);
  if (v22_.v23 == v22_.v22) {
    v19 = 32;
  }
  else {
    if (v22_.v23 == nullptr) {
      goto LABEL_45;
    }
    v19 = 40;
  }
  (*(void (**)(__int64))(*v22_.v23 + v19))((__int64)v22_.v23);
LABEL_45:
  result = (__int64)v24_.v25;
  if (v24_.v25 == v24_.v24) {
    v21 = 32;
  }
  else {
    if (v24_.v25 == nullptr) {
      return result;
    }
    v21 = 40;
  }
  return (*(__int64 (**)(__int64))(*v24_.v25 + v21))((__int64)v24_.v25);
}

_QWORD* game_gmap_anonymous_ProcDispatchMenu_AddItemList_closure_Invoke(
    _QWORD* result, unsigned int* a2)
{
  __int64 v2;
  __int64* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;

  v2 = *a2;
  v3 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                             48LL) +
                  8 * v2);
  if ((int)v2 < 0) {
    v3 = GameData_212ceb0;
  }
  if (*(_BYTE*)v3 != 0 && *((_DWORD*)v3 + 1) != 0) {
    v4 = (_QWORD*)result[1];
    v5 = result;
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        104, 16, 0);
    GameRoutine_16f33e0(v6, (unsigned int)v2, v4[133], *(unsigned int*)v5[2]);
    result = BasicMenuCursor_16e0c00(v4, v6);
    ++*(_DWORD*)v5[2];
  }
  return result;
}

_QWORD*

game_gmap_anonymous_ProcDispatchMenu_AddItemList_closure0_Invoke(__int64 a1,
                                                                 int* a2)
{
  int v2;
  _QWORD* v3;
  __int64 v5;
  _QWORD* result;

  v2 = *a2;
  v3 = *(_QWORD**)(a1 + 8);
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      104, 16, 0);
  GameRoutine_16f33e0_alt1(v5, v2, v3[133], **(_DWORD**)(a1 + 16));
  result = BasicMenuCursor_16e0c00(v3, v5);
  ++**(_DWORD**)(a1 + 16);
  return result;
}

__int64 game_gmap_anonymous_ProcDispatchMenu_SortAndFilter_closure_Invoke(
    __int64 a1, unsigned __int8** a2)
{
  unsigned __int8* v2;
  int* v3;
  int v4;
  unsigned __int8 v5;

  v2 = *a2;
  v3 = *(int**)(a1 + 8);
  if (((*(__int64 (**)(unsigned __int8*))(*(_QWORD*)*a2 + 568LL))(*a2) & 1) !=
      0) {
    v4 = v3[v2[83]];
  }
  else {
    if (((*(__int64 (**)(unsigned __int8*))(*(_QWORD*)v2 + 576LL))(v2) & 1) ==
        0) {
      v5 = v2[84];
      return v5 & 1;
    }
    v4 = *v3;
  }
  v5 = v4 > 0;
  return v5 & 1;
}

#pragma GCC visibility pop
