#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_16477d0(__int64, __int64, __int64, __int64);
__int64 GameRoutine_1711fe0(__int64, char**);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(__int64 result, char,
                                                    unsigned __int8,
                                                    unsigned __int8);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 (*GameData_20acde8[])();
extern __int64 (*game_menu_ChangeNumMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
_QWORD* game_menu_ChangeNumDialog_CreateBindYesNo(__int64 a1, int a2, int a3,
                                                  int a4, char** a5,
                                                  __int64* a6, __int64* a7,
                                                  __int64 a8, __int64 a9,
                                                  __int64 a10, __int64 a11);
__int64 game_menu_ChangeNumDialog_CreateBindYesNo_lambda0_Invoke(__int64 a1);

_QWORD* game_menu_ChangeNumDialog_CreateBindYesNo(__int64 a1, int a2, int a3,
                                                  int a4, char** a5,
                                                  __int64* a6, __int64* a7,
                                                  __int64 a8, __int64 a9,
                                                  __int64 a10, __int64 a11)
{
  __int64 v17;
  _QWORD* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  struct {
    _QWORD v28[4];
    _QWORD* v29;
  } v28_;

  v17 = GameRoutine_1711fe0(a1, a5);
  v18 = (_QWORD*)v17;
  if (v17 != 0) {
    *(_DWORD*)(v17 + 1492) = a2;
    v19 = (__int64*)fw_memory_g_heap_manager_ptr;
    v20 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         304, 16, 0);
    v28_.v28[0] = GameData_20acde8;
    v28_.v28[1] = v18;
    v28_.v29 = v28_.v28;
    GameRoutine_16477d0(v20, (__int64)&GameData_1a9f09e, (__int64)v28_.v28,
                        a11);
    v21 = *(_QWORD*)(a8 + 32);
    *(_DWORD*)(v20 + 192) = a3;
    *(_DWORD*)(v20 + 196) = a4;
    *(_QWORD*)(v20 + 200) = 0;
    *(_QWORD*)(v20 + 208) = 0;
    *(_QWORD*)(v20 + 216) = 0;
    *(_QWORD*)(v20 + 224) = 0;
    *(_QWORD*)v20 = game_menu_ChangeNumMenuItem_vtable;
    if (v21 != 0) {
      if (v21 == a8) {
        *(_QWORD*)(v20 + 272) = v20 + 240;
        (*(void (**)(__int64))(*(_QWORD*)v21 + 24LL))(v21);
      }
      else {
        *(_QWORD*)(v20 + 272) =
            (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
      }
    }
    else {
      *(_QWORD*)(v20 + 272) = 0;
    }
    v22 = *(_DWORD*)(v20 + 192);
    v23 = *(_DWORD*)(v20 + 196);
    *(_DWORD*)(v20 + 288) = a3;
    *(_BYTE*)(v20 + 82) = v22 != v23;
    *(_BYTE*)(v20 + 80) =
        (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 464LL))(v20) & 1;
    BasicMenuCursor_16e0c00(v18, v20);
    if (v28_.v29 == v28_.v28) {
      v24 = 32;
    }
    else {
      if (v28_.v29 == nullptr) {
      LABEL_12:
        v25 = fw_memory_HeapManager_Allocate(*v19, 192, 16, 0);
        GameRoutine_16477d0(v25, *a6, a9, a11);
        BasicMenuCursor_16e0c00(v18, v25);
        v26 = fw_memory_HeapManager_Allocate(*v19, 192, 16, 0);
        GameRoutine_16477d0(v26, *a7, a10, a11);
        BasicMenuCursor_16e0c00(v18, v26);
        return v18;
      }
      v24 = 40;
    }
    (*(void (**)(__int64))(*v28_.v29 + v24))((__int64)v28_.v29);
    goto LABEL_12;
  }
  return v18;
}

__int64 game_menu_ChangeNumDialog_CreateBindYesNo_lambda0_Invoke(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v11;
  _BYTE v12[200];

  snd_Fade_Fade_10c830(v12, 0.0f);
  snd_play_ff2d0((void*)(&v11), "SE_SYS_Decide_L_Next", "SE_SYS_Decide_L_Next",
                 v12, 0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v12);
  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(__int64**)(v2 + 232);
  v4 = *(__int64**)(v2 + 240);
  if (v3 == v4 || (v5 = v3 + 1) == v4) {
    v6 = 0;
  }
  else {
    v6 = *v5;
  }
  v7 = *(_QWORD*)(v2 + 336);
  if (v7 != v6) {
    if (v7 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 168LL))(v7);
    }
    *(_QWORD*)(v2 + 336) = v6;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v2, 0, 1u, 0);
    v8 = *(_QWORD*)(v2 + 336);
    if (v8 == 0) {
      v9 = 4;
      goto LABEL_15;
    }
    (*(void (**)(__int64))(*(_QWORD*)v8 + 160LL))(v8);
    v7 = *(_QWORD*)(v2 + 336);
  }
  v9 = 4;
  if (v7 != 0) {
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 120LL))(v7) & 1) != 0) {
      v9 = 4;
    }
    else {
      v9 = 0;
    }
  }
LABEL_15:
  *(_DWORD*)(v2 + 356) = *(_DWORD*)(v2 + 356) & 0xFFFFFFFB | v9;
  return 0;
}

#pragma GCC visibility pop
