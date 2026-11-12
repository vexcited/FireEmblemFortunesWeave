#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1647ee0(__int64);
__int64 GameRoutine_1648380(__int64);
__int64 Pane_58df20(_QWORD, _QWORD);
__int64 Pane_58df60(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ExchangeNumDialog_Unknown85(__int64 a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_157a1e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 Util_15792c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                     _QWORD);
__int64 Util_1585690(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(void);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting;
void GameRoutine_1648c60(__int64);
void __attribute__((noreturn)) GameRoutine_e66f80(_QWORD);
__int64 ExchangeNumDialog_Unknown135(__int64 a1);
__int64
game_menu_ExchangeNumDialog_CreateBindExchange_lambda0_Invoke(__int64 a1);
__int64 GameRoutine_16477d0(__int64, const char*, __int64, __int64);
__int64 GameRoutine_164cfc0(__int64, _QWORD*);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
extern __int64 (*GameData_2074db8[])();
extern __int64 (*game_menu_ChangeNumMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_ExchangeNumMenuItem_vtable[])();
extern char GameData_1a9f09e;
void BasicMenuCursor_16e0c00(_QWORD*, __int64);
_QWORD* game_menu_ExchangeNumDialog_CreateBindExchange(
    __int64 a1, int a2, int a3, int a4, __int64 a5, const char* a6, __int64 a7,
    __int64 a8, __int64 a9, __int64 a10);
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64 GameRoutine_157a1e0_alt1(__int64*, unsigned __int16*, unsigned __int8,
                                 char, char, char,
                                 char) __asm__("GameRoutine_157a1e0");
__int64 GameRoutine_1648c60_alt1(__int64) __asm__("GameRoutine_1648c60");
__int64 GameRoutine_930b90_alt1(__int64, __int64) __asm__("GameRoutine_930b90");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            unsigned int*) __asm__("LayoutAccessor_1562cf0");
__int64 Util_15792c0_alt1(__int64*, unsigned __int16*, char, char, _QWORD*,
                          const char*, const char*,
                          char) __asm__("Util_15792c0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void GameRoutine_6e3b50_alt1(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void Util_1585690_alt1(__int64, _QWORD*, const char*,
                       __int64) __asm__("Util_1585690");
void __attribute__((noreturn))
GameRoutine_e66f80_alt1() __asm__("GameRoutine_e66f80");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

_QWORD* game_menu_ExchangeNumDialog_CreateBindExchange(
    __int64 a1, int a2, int a3, int a4, __int64 a5, const char* a6, __int64 a7,
    __int64 a8, __int64 a9, __int64 a10)
{
  __int64 v16;
  _QWORD* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    _QWORD v27[4];
    _QWORD* v28;
  } v27_;

  v27_.v27[0] = a5;
  v16 = GameRoutine_164cfc0(a1, v27_.v27);
  v17 = (_QWORD*)v16;
  if (v16 != 0) {
    *(_DWORD*)(v16 + 1572) = a2;
    GameRoutine_60a020(v16 + 1496, a6);
    v18 = (__int64*)fw_memory_g_heap_manager_ptr;
    v19 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 304, 16, 0);
    v27_.v28 = v27_.v27;
    v27_.v27[0] = GameData_2074db8;
    v27_.v27[1] = v17;
    GameRoutine_16477d0(v19, &GameData_1a9f09e, (__int64)v27_.v27, a10);
    v20 = *(_QWORD*)(a7 + 32);
    *(_DWORD*)(v19 + 192) = a3;
    *(_DWORD*)(v19 + 196) = a4;
    *(_QWORD*)(v19 + 200) = 0;
    *(_QWORD*)(v19 + 208) = 0;
    *(_QWORD*)(v19 + 216) = 0;
    *(_QWORD*)(v19 + 224) = 0;
    *(_QWORD*)v19 = game_menu_ChangeNumMenuItem_vtable;
    if (v20 != 0) {
      if (v20 == a7) {
        *(_QWORD*)(v19 + 272) = v19 + 240;
        (*(void (**)(__int64))(*(_QWORD*)v20 + 24LL))(v20);
      }
      else {
        *(_QWORD*)(v19 + 272) =
            (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      }
    }
    else {
      *(_QWORD*)(v19 + 272) = 0;
    }
    v21 = *(_DWORD*)(v19 + 192);
    v22 = *(_DWORD*)(v19 + 196);
    *(_DWORD*)(v19 + 288) = a3;
    *(_BYTE*)(v19 + 82) = v21 != v22;
    *(_BYTE*)(v19 + 80) =
        (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 464LL))(v19) & 1;
    *(_QWORD*)v19 = game_menu_anonymous_ExchangeNumMenuItem_vtable;
    BasicMenuCursor_16e0c00(v17, v19);
    if (v27_.v28 == v27_.v27) {
      v23 = 32;
    }
    else {
      if (v27_.v28 == nullptr) {
      LABEL_12:
        v24 = fw_memory_HeapManager_Allocate_alt1(*v18, 192, 16, 0);
        GameRoutine_16477d0(v24, "MID_Sys_Yes", a8, a10);
        BasicMenuCursor_16e0c00(v17, v24);
        v25 = fw_memory_HeapManager_Allocate_alt1(*v18, 192, 16, 0);
        GameRoutine_16477d0(v25, "MID_Sys_No", a9, a10);
        BasicMenuCursor_16e0c00(v17, v25);
        return v17;
      }
      v23 = 40;
    }
    (*(void (**)(__int64))(*v27_.v28 + v23))((__int64)v27_.v28);
    goto LABEL_12;
  }
  return v17;
}

__int64 ExchangeNumDialog_Unknown135(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  char v18;
  __int64 v19;
  _QWORD** v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int16* v27;
  __int64 v28;
  __int64 v29;
  unsigned __int16* v30;
  __int64 v31;
  __int64 v32;
  unsigned __int16* v33;
  int v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  unsigned __int16* v38;
  char v39;
  unsigned __int16* v40;
  unsigned __int16* v41;
  char v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int16* v46;
  __int64 v47;
  __int64 v48;
  unsigned __int16* v49;
  int v50;
  __int64 v51;
  _QWORD* v52;
  unsigned __int16* v53;
  char v54;
  unsigned __int16* v55;
  unsigned __int16* v56;
  char v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  bool v71;
  __int64 v72;
  const char* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  _QWORD* v78;
  __int64 v79;
  char v80;
  char v81;
  __int64 v82;
  __int64 v83;
  __int64 result;
  int v85;
  __int64* v86;
  struct {
    __int64 v87;
    __int64 v88;
    __int64 v89;
  } v87_;
  struct {
    __int64 v90;
    __int64 v91;
  } v90_;

  GameRoutine_1648c60_alt1(a1);
  LayoutAccessor_1560070_alt1((void*)(&v87_.v87), (__int64*)(a1 + 848),
                              "L_Item");
  if (v87_.v88 == 0) {
    goto LABEL_77;
  }
  v2 = std___1___shared_weak_count_lock_alt1(v87_.v88);
  v3 = (__int64*)v87_.v87;
  if (v87_.v88 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v87_.v88);
  }
  if (v2 == 0 || v3 == nullptr) {
    if (v2 == 0) {
      goto LABEL_77;
    }
    goto LABEL_75;
  }
  v4 = *(_QWORD*)(a1 + 1520);
  v5 = *(_QWORD*)(a1 + 1528);
  v86 = v3;
  v6 = v5 - v4;
  if (v5 != v4) {
    if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * (v6 >> 4)) >
        0x249249249249249LL) {
      goto LABEL_112;
    }
    v7 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v6, 16, 0);
    v8 = 0;
    do {
      v12 = v4 + v8;
      v13 = v7 + v8;
      v14 = *(_DWORD*)(v4 + v8);
      *(_QWORD*)(v13 + 4) = 0;
      *(_DWORD*)v13 = v14;
      v15 = *(_QWORD*)(v4 + v8 + 4);
      *(_QWORD*)(v13 + 12) = 0;
      *(_QWORD*)(v13 + 4) = v15;
      if (*(_BYTE*)(v4 + v8 + 12) != 0) {
        v9 = *(_QWORD*)(v12 + 12);
      }
      else {
        v9 = 0;
      }
      *(_QWORD*)(v13 + 48) = 0;
      v10 = v13 + 48;
      *(_QWORD*)(v13 + 12) = v9;
      *(_WORD*)(v13 + 26) = 0;
      *(_DWORD*)(v13 + 28) = 0;
      *(_QWORD*)(v13 + 40) = v13 + 48;
      *(_QWORD*)(v13 + 56) = 0;
      *(_QWORD*)(v13 + 64) = 0;
      *(_QWORD*)(v13 + 72) = 0;
      *(_QWORD*)(v13 + 80) = 0;
      GameRoutine_930b90_alt1(v13 + 24, v12 + 24);
      v11 = *(_QWORD*)(v12 + 88);
      v8 += 112;
      *(_DWORD*)(v10 + 48) = *(_DWORD*)(v12 + 96);
      *(_QWORD*)(v10 + 40) = v11;
      *(_WORD*)(v10 + 56) = *(_WORD*)(v12 + 104);
    } while (v4 + v8 != v5);
    v85 = *(unsigned __int16*)(v7 + 4);
    do {
      v17 = v7 + v8;
      v18 = *(_BYTE*)(v7 + v8 - 48);
      *(_DWORD*)(v17 - 80) = 0;
      *(_QWORD*)(v17 - 88) = 0;
      if ((v18 & 1) != 0) {
        **(_BYTE**)(v17 - 32) = 0;
        *(_QWORD*)(v17 - 40) = 0;
      }
      else {
        *(_WORD*)(v17 - 48) = 0;
      }
      v19 = v7 + v8;
      v20 = (_QWORD**)(v7 + v8 - 64);
      GameRoutine_6e3b50_alt1(v7 + v8 - 72, *v20);
      v21 = *(_BYTE*)(v17 - 48);
      *(_QWORD*)(v19 - 56) = 0;
      *(_QWORD*)(v19 - 72) = v20;
      *v20 = nullptr;
      if ((v21 & 1) != 0) {
        v16 = *(_QWORD**)(v19 - 32);
        if (v16 != nullptr) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v22 = 128;
          }
          else {
            v22 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v22,
                                             (__int64)v16);
          v16 = *(_QWORD**)(v19 - 64);
        }
      }
      else {
        v16 = nullptr;
      }
      GameRoutine_6e3b50_alt1(v7 + v8 - 72, v16);
      v8 -= 112;
    } while (v8 != 0);
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v7);
    v24 = *(_QWORD*)(a1 + 1520);
    v25 = *(_QWORD*)(a1 + 1528);
    v26 = v25 - v24;
    if (v85 != 0) {
      if (v25 != v24) {
        if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * (v26 >> 4)) >
            0x249249249249249LL) {
          goto LABEL_112;
        }
        v27 = (unsigned __int16*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v26, 16, 0);
        v28 = 0;
        do {
          v32 = v24 + v28 * 2;
          v33 = &v27[v28];
          v34 = *(_DWORD*)(v24 + v28 * 2);
          *(_QWORD*)(v33 + 2) = 0;
          *(_DWORD*)v33 = v34;
          v35 = *(_QWORD*)(v24 + v28 * 2 + 4);
          *(_QWORD*)(v33 + 6) = 0;
          *(_QWORD*)(v33 + 2) = v35;
          if (*(_BYTE*)(v24 + v28 * 2 + 12) != 0) {
            v29 = *(_QWORD*)(v32 + 12);
          }
          else {
            v29 = 0;
          }
          *((_QWORD*)v33 + 6) = 0;
          v30 = v33 + 24;
          *(_QWORD*)(v33 + 6) = v29;
          v33[13] = 0;
          *((_DWORD*)v33 + 7) = 0;
          *((_QWORD*)v33 + 5) = v33 + 24;
          *((_QWORD*)v33 + 7) = 0;
          *((_QWORD*)v33 + 8) = 0;
          *((_QWORD*)v33 + 9) = 0;
          *((_QWORD*)v33 + 10) = 0;
          GameRoutine_930b90_alt1((__int64)(v33 + 12), v32 + 24);
          v31 = *(_QWORD*)(v32 + 88);
          v28 += 56;
          *((_DWORD*)v30 + 12) = *(_DWORD*)(v32 + 96);
          *((_QWORD*)v30 + 5) = v31;
          v30[28] = *(_WORD*)(v32 + 104);
        } while (v24 + v28 * 2 != v25);
        Util_15792c0_alt1(v86, v27 + 2, 0, 1, nullptr, "L_Icon", "T_Txt", 1);
        do {
          v38 = &v27[v28];
          v39 = v27[v28 - 24];
          *((_DWORD*)v38 - 20) = 0;
          *((_QWORD*)v38 - 11) = 0;
          if ((v39 & 1) != 0) {
            **((_BYTE**)v38 - 4) = 0;
            *((_QWORD*)v38 - 5) = 0;
          }
          else {
            *(v38 - 24) = 0;
          }
          v40 = &v27[v28];
          v41 = &v27[v28 - 32];
          GameRoutine_6e3b50_alt1((__int64)&v27[v28 - 36], *(_QWORD**)v41);
          v42 = *((_BYTE*)v38 - 48);
          *((_QWORD*)v40 - 7) = 0;
          *((_QWORD*)v40 - 9) = v41;
          *(_QWORD*)v41 = 0;
          if ((v42 & 1) != 0) {
            v37 = *((_QWORD**)v40 - 4);
            if (v37 != nullptr) {
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                v43 = 128;
              }
              else {
                v43 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v43,
                                                 (__int64)v37);
              v37 = *((_QWORD**)v40 - 8);
            }
          }
          else {
            v37 = nullptr;
          }
          GameRoutine_6e3b50_alt1((__int64)&v27[v28 - 36], v37);
          v28 -= 56;
        } while (v28 != 0);
      LABEL_71:
        v59 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v59 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, (__int64)v27);
        v36 = (__int64)v86;
        goto LABEL_74;
      }
      goto LABEL_38;
    }
    if (v25 != v24) {
      if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * (v26 >> 4)) >
          0x249249249249249LL) {
        goto LABEL_112;
      }
      v27 = (unsigned __int16*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v26, 16, 0);
      v44 = 0;
      do {
        v48 = v24 + v44 * 2;
        v49 = &v27[v44];
        v50 = *(_DWORD*)(v24 + v44 * 2);
        *(_QWORD*)(v49 + 2) = 0;
        *(_DWORD*)v49 = v50;
        v51 = *(_QWORD*)(v24 + v44 * 2 + 4);
        *(_QWORD*)(v49 + 6) = 0;
        *(_QWORD*)(v49 + 2) = v51;
        if (*(_BYTE*)(v24 + v44 * 2 + 12) != 0) {
          v45 = *(_QWORD*)(v48 + 12);
        }
        else {
          v45 = 0;
        }
        *((_QWORD*)v49 + 6) = 0;
        v46 = v49 + 24;
        *(_QWORD*)(v49 + 6) = v45;
        v49[13] = 0;
        *((_DWORD*)v49 + 7) = 0;
        *((_QWORD*)v49 + 5) = v49 + 24;
        *((_QWORD*)v49 + 7) = 0;
        *((_QWORD*)v49 + 8) = 0;
        *((_QWORD*)v49 + 9) = 0;
        *((_QWORD*)v49 + 10) = 0;
        GameRoutine_930b90_alt1((__int64)(v49 + 12), v48 + 24);
        v47 = *(_QWORD*)(v48 + 88);
        v44 += 56;
        *((_DWORD*)v46 + 12) = *(_DWORD*)(v48 + 96);
        *((_QWORD*)v46 + 5) = v47;
        v46[28] = *(_WORD*)(v48 + 104);
      } while (v24 + v44 * 2 != v25);
      GameRoutine_157a1e0_alt1(v86, v27, 1u, 0, 1, 0, 0);
      do {
        v53 = &v27[v44];
        v54 = v27[v44 - 24];
        *((_DWORD*)v53 - 20) = 0;
        *((_QWORD*)v53 - 11) = 0;
        if ((v54 & 1) != 0) {
          **((_BYTE**)v53 - 4) = 0;
          *((_QWORD*)v53 - 5) = 0;
        }
        else {
          *(v53 - 24) = 0;
        }
        v55 = &v27[v44];
        v56 = &v27[v44 - 32];
        GameRoutine_6e3b50_alt1((__int64)&v27[v44 - 36], *(_QWORD**)v56);
        v57 = *((_BYTE*)v53 - 48);
        *((_QWORD*)v55 - 7) = 0;
        *((_QWORD*)v55 - 9) = v56;
        *(_QWORD*)v56 = 0;
        if ((v57 & 1) != 0) {
          v52 = *((_QWORD**)v55 - 4);
          if (v52 != nullptr) {
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
              v58 = 128;
            }
            else {
              v58 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v58,
                                               (__int64)v52);
            v52 = *((_QWORD**)v55 - 8);
          }
        }
        else {
          v52 = nullptr;
        }
        GameRoutine_6e3b50_alt1((__int64)&v27[v44 - 36], v52);
        v44 -= 56;
      } while (v44 != 0);
      goto LABEL_71;
    }
  LABEL_58:
    v36 = (__int64)v86;
    GameRoutine_157a1e0_alt1(v86, nullptr, 1u, 0, 1, 0, 0);
    goto LABEL_74;
  }
  if ((*(_WORD(*)[2])0x4LL)[0] == 0) {
    goto LABEL_58;
  }
LABEL_38:
  v36 = (__int64)v86;
  Util_15792c0_alt1(v86, (*(_WORD(*)[2])0x4LL), 0, 1, nullptr, "L_Icon",
                    "T_Txt", 1);
LABEL_74:
  LayoutAccessor_1562cf0_alt1(v36, (unsigned int*)"NumOff");
LABEL_75:
  if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
LABEL_77:
  LayoutAccessor_1560070_alt1((void*)(&v90_.v90), (__int64*)(a1 + 848),
                              "L_InfoResult");
  v60 = *(_QWORD*)(a1 + 1544);
  v61 = *(_QWORD*)(a1 + 1552);
  v87_.v88 = 0;
  v87_.v89 = 0;
  v62 = v61 - v60;
  v87_.v87 = 0;
  if (v61 != v60) {
    if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * (v62 >> 4)) <=
        0x249249249249249LL) {
      v63 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v61 - v60, 16, 0);
      v64 = 0;
      v87_.v87 = v63;
      v87_.v89 = v63 + v62;
      do {
        v68 = v60 + v64;
        v69 = v63 + v64;
        *(_DWORD*)v69 = *(_DWORD*)(v60 + v64);
        *(_QWORD*)(v69 + 4) = *(_QWORD*)(v60 + v64 + 4);
        if (*(_BYTE*)(v60 + v64 + 12) != 0) {
          v65 = *(_QWORD*)(v68 + 12);
        }
        else {
          v65 = 0;
        }
        *(_QWORD*)(v69 + 48) = 0;
        v66 = v69 + 48;
        *(_QWORD*)(v69 + 12) = v65;
        *(_WORD*)(v69 + 26) = 0;
        *(_DWORD*)(v69 + 28) = 0;
        *(_QWORD*)(v69 + 40) = v69 + 48;
        *(_QWORD*)(v69 + 56) = 0;
        *(_QWORD*)(v69 + 64) = 0;
        *(_QWORD*)(v69 + 72) = 0;
        *(_QWORD*)(v69 + 80) = 0;
        GameRoutine_930b90_alt1(v69 + 24, v68 + 24);
        v67 = *(_QWORD*)(v68 + 88);
        v64 += 112;
        *(_DWORD*)(v66 + 48) = *(_DWORD*)(v68 + 96);
        *(_QWORD*)(v66 + 40) = v67;
        *(_WORD*)(v66 + 56) = *(_WORD*)(v68 + 104);
      } while (v60 + v64 != v61);
      v87_.v88 = v63 + v64;
      goto LABEL_85;
    }
  LABEL_112:
    GameRoutine_e66f80_alt1();
  }
LABEL_85:
  v70 = *(unsigned __int8*)(a1 + 1496);
  v71 = (v70 & 1) == 0;
  v72 = v70 >> 1;
  if (v71) {
    v73 = (const char*)(a1 + 1497);
  }
  else {
    v73 = *(const char**)(a1 + 1512);
  }
  if (v71) {
    v74 = v72;
  }
  else {
    v74 = *(_QWORD*)(a1 + 1504);
  }
  Util_1585690_alt1((__int64)&v90_.v90, &v87_.v87, v73, v74);
  v75 = v87_.v87;
  if (v87_.v87 != 0) {
    if (v87_.v87 == v87_.v88) {
      goto LABEL_106;
    }
    v76 = v87_.v88 - 40;
    v77 = fw_memory_g_heap_manager_ptr;
    do {
      v80 = *(_BYTE*)(v76 - 8);
      *(_DWORD*)(v76 - 40) = 0;
      *(_QWORD*)(v76 - 48) = 0;
      if ((v80 & 1) != 0) {
        **(_BYTE**)(v76 + 8) = 0;
        *(_QWORD*)v76 = 0;
      }
      else {
        *(_WORD*)(v76 - 8) = 0;
      }
      GameRoutine_6e3b50_alt1(v76 - 32, *(_QWORD**)(v76 - 24));
      v81 = *(_BYTE*)(v76 - 8);
      *(_QWORD*)(v76 - 24) = 0;
      *(_QWORD*)(v76 - 16) = 0;
      *(_QWORD*)(v76 - 32) = v76 - 24;
      if ((v81 & 1) != 0) {
        v78 = *(_QWORD**)(v76 + 8);
        if (v78 != nullptr) {
          if (*(_QWORD*)(*(_QWORD*)v77 + 200LL) != 0) {
            v82 = 128;
          }
          else {
            v82 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v77 + v82, (__int64)v78);
          v78 = *(_QWORD**)(v76 - 24);
        }
      }
      else {
        v78 = nullptr;
      }
      GameRoutine_6e3b50_alt1(v76 - 32, v78);
      v79 = v76 - 72;
      v76 -= 112;
    } while (v79 != v75);
    v87_.v88 = v75;
    v75 = v87_.v87;
    if (v87_.v87 != 0) {
    LABEL_106:
      v83 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v83 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v83, v75);
    }
  }
  result = v90_.v91;
  if (v90_.v91 != 0) {
    return std___1___shared_weak_count___release_weak_alt1(v90_.v91);
  }
  return result;
}

__int64 ExchangeNumDialog_Unknown85(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char v5;

  v2 = ui_LayoutAccessor_FindPane(a1 + 952, "L_MenuItem00");
  if (v2 != 0) {
    v3 = v2;
    Pane_58df60(*(_QWORD*)(v2 + 24), v2);
    v4 = ui_LayoutAccessor_FindPane(a1 + 952, "N_Target");
    Pane_58df20(v4, v3);
    v5 = *(_BYTE*)(v3 + 88);
    *(_QWORD*)(v3 + 52) = 0;
    *(_BYTE*)(v3 + 88) = v5 | 0x10;
  }
  GameRoutine_1647ee0(a1);
  (*(void (**)(__int64))(*(_QWORD*)a1 + 1080LL))(a1);
  return GameRoutine_1648380(a1);
}

__int64

game_menu_ExchangeNumDialog_CreateBindExchange_lambda0_Invoke(__int64 a1)
{
  __int64 v2;
  char v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v13;
  _BYTE v14[200];

  snd_Fade_Fade_10c830(v14, 0.0f);
  snd_play_ff2d0((void*)(&v13), "SE_SYS_Decide_L_Next", "SE_SYS_Decide_L_Next",
                 v14, 0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v14);
  v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 232LL) + 8LL);
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 40LL))(v2);
  v4 = *(_QWORD*)(a1 + 8);
  v6 = *(_QWORD*)(v4 + 232);
  v5 = *(_QWORD*)(v4 + 240);
  if (v6 == v5 || (v7 = (__int64*)(v6 + 8), v6 + 8 == v5) ||
      (v3 & 1) == 0 &&
          (v7 = (__int64*)(v6 + 16), ((v6 + 16 == v5) | v3 & 1) != 0)) {
    v8 = 0;
  }
  else {
    v8 = *v7;
  }
  v9 = *(_QWORD*)(v4 + 336);
  if (v9 != v8) {
    if (v9 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 168LL))(v9);
    }
    *(_QWORD*)(v4 + 336) = v8;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v4, 0, 1, 0);
    v10 = *(_QWORD*)(v4 + 336);
    if (v10 == 0) {
      v11 = 4;
      goto LABEL_17;
    }
    (*(void (**)(__int64))(*(_QWORD*)v10 + 160LL))(v10);
    game_IsVibrationEnabled(game_g_game_setting + 712);
    v9 = *(_QWORD*)(v4 + 336);
  }
  v11 = 4;
  if (v9 != 0) {
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 120LL))(v9) & 1) != 0) {
      v11 = 4;
    }
    else {
      v11 = 0;
    }
  }
LABEL_17:
  *(_DWORD*)(v4 + 356) = *(_DWORD*)(v4 + 356) & 0xFFFFFFFB | v11;
  return 0;
}

#pragma GCC visibility pop
