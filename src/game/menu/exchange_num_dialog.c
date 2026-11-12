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
  _QWORD* v3;
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
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;
  __int64 v20;
  _QWORD* v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  char v40;
  __int64 v41;
  _QWORD* v42;
  char v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  char v56;
  __int64 v57;
  _QWORD* v58;
  char v59;
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
  __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  bool v73;
  unsigned __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  _QWORD* v77;
  _QWORD* v78;
  __int64 v79;
  __int64 v80;
  _QWORD* v81;
  char v82;
  char v83;
  __int64 v84;
  __int64 v85;
  __int64 result;
  int v87;
  __int64 v88;
  __int64 v89;
  _QWORD* v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;

  GameRoutine_1648c60(a1);
  LayoutAccessor_1560070((void*)(&v89), a1 + 848, "L_Item");
  if (v90 == nullptr) {
    goto LABEL_77;
  }
  v2 = std___1___shared_weak_count_lock();
  v4 = v89;
  v3 = v90;
  if (v90 != nullptr) {
    v3 = (_QWORD*)std___1___shared_weak_count___release_weak(v90);
  }
  if (v2 == 0 || v4 == 0) {
    if (v2 == 0) {
      goto LABEL_77;
    }
    goto LABEL_75;
  }
  v5 = *(_QWORD*)(a1 + 1520);
  v6 = *(_QWORD*)(a1 + 1528);
  v88 = v4;
  v7 = v6 - v5;
  if (v6 != v5) {
    if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * (v7 >> 4)) >
        0x249249249249249LL) {
      goto LABEL_112;
    }
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v7, 16, 0);
    v9 = 0;
    do {
      v13 = v5 + v9;
      v14 = v8 + v9;
      v15 = *(_DWORD*)(v5 + v9);
      *(_QWORD*)(v14 + 4) = 0;
      *(_DWORD*)v14 = v15;
      v16 = *(_QWORD*)(v5 + v9 + 4);
      *(_QWORD*)(v14 + 12) = 0;
      *(_QWORD*)(v14 + 4) = v16;
      if (*(_BYTE*)(v5 + v9 + 12) != 0) {
        v10 = *(_QWORD*)(v13 + 12);
      }
      else {
        v10 = 0;
      }
      *(_QWORD*)(v14 + 48) = 0;
      v11 = v14 + 48;
      *(_QWORD*)(v14 + 12) = v10;
      *(_WORD*)(v14 + 26) = 0;
      *(_DWORD*)(v14 + 28) = 0;
      *(_QWORD*)(v14 + 40) = v14 + 48;
      *(_QWORD*)(v14 + 56) = 0;
      *(_QWORD*)(v14 + 64) = 0;
      *(_QWORD*)(v14 + 72) = 0;
      *(_QWORD*)(v14 + 80) = 0;
      GameRoutine_930b90(v14 + 24, v13 + 24);
      v12 = *(_QWORD*)(v13 + 88);
      v9 += 112;
      *(_DWORD*)(v11 + 48) = *(_DWORD*)(v13 + 96);
      *(_QWORD*)(v11 + 40) = v12;
      *(_WORD*)(v11 + 56) = *(_WORD*)(v13 + 104);
    } while (v5 + v9 != v6);
    v87 = *(unsigned __int16*)(v8 + 4);
    do {
      v18 = v8 + v9;
      v19 = *(_BYTE*)(v8 + v9 - 48);
      *(_DWORD*)(v18 - 80) = 0;
      *(_QWORD*)(v18 - 88) = 0;
      if ((v19 & 1) != 0) {
        **(_BYTE**)(v18 - 32) = 0;
        *(_QWORD*)(v18 - 40) = 0;
      }
      else {
        *(_WORD*)(v18 - 48) = 0;
      }
      v20 = v8 + v9;
      v21 = (_QWORD*)(v8 + v9 - 64);
      GameRoutine_6e3b50(v8 + v9 - 72, *v21);
      v22 = *(_BYTE*)(v18 - 48);
      *(_QWORD*)(v20 - 56) = 0;
      *(_QWORD*)(v20 - 72) = v21;
      *v21 = 0;
      if ((v22 & 1) != 0) {
        v17 = *(_QWORD*)(v20 - 32);
        if (v17 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v23 = 128;
          }
          else {
            v23 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v23);
          v17 = *(_QWORD*)(v20 - 64);
        }
      }
      else {
        v17 = 0;
      }
      GameRoutine_6e3b50(v8 + v9 - 72, v17);
      v9 -= 112;
    } while (v9 != 0);
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    v3 = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
    v25 = *(_QWORD*)(a1 + 1520);
    v26 = *(_QWORD*)(a1 + 1528);
    v27 = v26 - v25;
    if (v87 != 0) {
      if (v26 != v25) {
        if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * (v27 >> 4)) >
            0x249249249249249LL) {
          goto LABEL_112;
        }
        v28 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v27, 16, 0);
        v29 = 0;
        do {
          v33 = v25 + v29;
          v34 = v28 + v29;
          v35 = *(_DWORD*)(v25 + v29);
          *(_QWORD*)(v34 + 4) = 0;
          *(_DWORD*)v34 = v35;
          v36 = *(_QWORD*)(v25 + v29 + 4);
          *(_QWORD*)(v34 + 12) = 0;
          *(_QWORD*)(v34 + 4) = v36;
          if (*(_BYTE*)(v25 + v29 + 12) != 0) {
            v30 = *(_QWORD*)(v33 + 12);
          }
          else {
            v30 = 0;
          }
          *(_QWORD*)(v34 + 48) = 0;
          v31 = v34 + 48;
          *(_QWORD*)(v34 + 12) = v30;
          *(_WORD*)(v34 + 26) = 0;
          *(_DWORD*)(v34 + 28) = 0;
          *(_QWORD*)(v34 + 40) = v34 + 48;
          *(_QWORD*)(v34 + 56) = 0;
          *(_QWORD*)(v34 + 64) = 0;
          *(_QWORD*)(v34 + 72) = 0;
          *(_QWORD*)(v34 + 80) = 0;
          GameRoutine_930b90(v34 + 24, v33 + 24);
          v32 = *(_QWORD*)(v33 + 88);
          v29 += 112;
          *(_DWORD*)(v31 + 48) = *(_DWORD*)(v33 + 96);
          *(_QWORD*)(v31 + 40) = v32;
          *(_WORD*)(v31 + 56) = *(_WORD*)(v33 + 104);
        } while (v25 + v29 != v26);
        Util_15792c0(v88, v28 + 4, 0, 1, 0, "L_Icon", "T_Txt", 1);
        do {
          v39 = v28 + v29;
          v40 = *(_BYTE*)(v28 + v29 - 48);
          *(_DWORD*)(v39 - 80) = 0;
          *(_QWORD*)(v39 - 88) = 0;
          if ((v40 & 1) != 0) {
            **(_BYTE**)(v39 - 32) = 0;
            *(_QWORD*)(v39 - 40) = 0;
          }
          else {
            *(_WORD*)(v39 - 48) = 0;
          }
          v41 = v28 + v29;
          v42 = (_QWORD*)(v28 + v29 - 64);
          GameRoutine_6e3b50(v28 + v29 - 72, *v42);
          v43 = *(_BYTE*)(v39 - 48);
          *(_QWORD*)(v41 - 56) = 0;
          *(_QWORD*)(v41 - 72) = v42;
          *v42 = 0;
          if ((v43 & 1) != 0) {
            v38 = *(_QWORD*)(v41 - 32);
            if (v38 != 0) {
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                v44 = 128;
              }
              else {
                v44 = 56;
              }
              nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v44);
              v38 = *(_QWORD*)(v41 - 64);
            }
          }
          else {
            v38 = 0;
          }
          GameRoutine_6e3b50(v28 + v29 - 72, v38);
          v29 -= 112;
        } while (v29 != 0);
      LABEL_71:
        v61 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v61 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v61);
        v37 = v88;
        goto LABEL_74;
      }
      goto LABEL_38;
    }
    if (v26 != v25) {
      if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * (v27 >> 4)) >
          0x249249249249249LL) {
        goto LABEL_112;
      }
      v45 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v27, 16, 0);
      v46 = 0;
      do {
        v50 = v25 + v46;
        v51 = v45 + v46;
        v52 = *(_DWORD*)(v25 + v46);
        *(_QWORD*)(v51 + 4) = 0;
        *(_DWORD*)v51 = v52;
        v53 = *(_QWORD*)(v25 + v46 + 4);
        *(_QWORD*)(v51 + 12) = 0;
        *(_QWORD*)(v51 + 4) = v53;
        if (*(_BYTE*)(v25 + v46 + 12) != 0) {
          v47 = *(_QWORD*)(v50 + 12);
        }
        else {
          v47 = 0;
        }
        *(_QWORD*)(v51 + 48) = 0;
        v48 = v51 + 48;
        *(_QWORD*)(v51 + 12) = v47;
        *(_WORD*)(v51 + 26) = 0;
        *(_DWORD*)(v51 + 28) = 0;
        *(_QWORD*)(v51 + 40) = v51 + 48;
        *(_QWORD*)(v51 + 56) = 0;
        *(_QWORD*)(v51 + 64) = 0;
        *(_QWORD*)(v51 + 72) = 0;
        *(_QWORD*)(v51 + 80) = 0;
        GameRoutine_930b90(v51 + 24, v50 + 24);
        v49 = *(_QWORD*)(v50 + 88);
        v46 += 112;
        *(_DWORD*)(v48 + 48) = *(_DWORD*)(v50 + 96);
        *(_QWORD*)(v48 + 40) = v49;
        *(_WORD*)(v48 + 56) = *(_WORD*)(v50 + 104);
      } while (v25 + v46 != v26);
      GameRoutine_157a1e0(v88, v45, 1, 0, 1, 0, 0);
      do {
        v55 = v45 + v46;
        v56 = *(_BYTE*)(v45 + v46 - 48);
        *(_DWORD*)(v55 - 80) = 0;
        *(_QWORD*)(v55 - 88) = 0;
        if ((v56 & 1) != 0) {
          **(_BYTE**)(v55 - 32) = 0;
          *(_QWORD*)(v55 - 40) = 0;
        }
        else {
          *(_WORD*)(v55 - 48) = 0;
        }
        v57 = v45 + v46;
        v58 = (_QWORD*)(v45 + v46 - 64);
        GameRoutine_6e3b50(v45 + v46 - 72, *v58);
        v59 = *(_BYTE*)(v55 - 48);
        *(_QWORD*)(v57 - 56) = 0;
        *(_QWORD*)(v57 - 72) = v58;
        *v58 = 0;
        if ((v59 & 1) != 0) {
          v54 = *(_QWORD*)(v57 - 32);
          if (v54 != 0) {
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
              v60 = 128;
            }
            else {
              v60 = 56;
            }
            nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v60);
            v54 = *(_QWORD*)(v57 - 64);
          }
        }
        else {
          v54 = 0;
        }
        GameRoutine_6e3b50(v45 + v46 - 72, v54);
        v46 -= 112;
      } while (v46 != 0);
      goto LABEL_71;
    }
  LABEL_58:
    v37 = v88;
    GameRoutine_157a1e0(v88, 0, 1, 0, 1, 0, 0);
    goto LABEL_74;
  }
  if ((*(_WORD*)0x4LL) == 0) {
    goto LABEL_58;
  }
LABEL_38:
  v37 = v88;
  Util_15792c0(v88, 4, 0, 1, 0, "L_Icon", "T_Txt", 1);
LABEL_74:
  LayoutAccessor_1562cf0(v37, "NumOff");
LABEL_75:
  if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
  }
LABEL_77:
  v3 = (LayoutAccessor_1560070((void*)(&v92), a1 + 848, "L_InfoResult"),
        (void*)(&v92));
  v62 = *(_QWORD*)(a1 + 1544);
  v63 = *(_QWORD*)(a1 + 1552);
  v90 = nullptr;
  v91 = 0;
  v64 = v63 - v62;
  v89 = 0;
  if (v63 != v62) {
    if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * (v64 >> 4)) <=
        0x249249249249249LL) {
      v65 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v63 - v62, 16, 0);
      v66 = 0;
      v89 = v65;
      v91 = v65 + v64;
      do {
        v70 = v62 + v66;
        v71 = v65 + v66;
        *(_DWORD*)v71 = *(_DWORD*)(v62 + v66);
        *(_QWORD*)(v71 + 4) = *(_QWORD*)(v62 + v66 + 4);
        if (*(_BYTE*)(v62 + v66 + 12) != 0) {
          v67 = *(_QWORD*)(v70 + 12);
        }
        else {
          v67 = 0;
        }
        *(_QWORD*)(v71 + 48) = 0;
        v68 = v71 + 48;
        *(_QWORD*)(v71 + 12) = v67;
        *(_WORD*)(v71 + 26) = 0;
        *(_DWORD*)(v71 + 28) = 0;
        *(_QWORD*)(v71 + 40) = v71 + 48;
        *(_QWORD*)(v71 + 56) = 0;
        *(_QWORD*)(v71 + 64) = 0;
        *(_QWORD*)(v71 + 72) = 0;
        *(_QWORD*)(v71 + 80) = 0;
        GameRoutine_930b90(v71 + 24, v70 + 24);
        v69 = *(_QWORD*)(v70 + 88);
        v66 += 112;
        *(_DWORD*)(v68 + 48) = *(_DWORD*)(v70 + 96);
        *(_QWORD*)(v68 + 40) = v69;
        *(_WORD*)(v68 + 56) = *(_WORD*)(v70 + 104);
      } while (v62 + v66 != v63);
      v90 = (_QWORD*)(v65 + v66);
      goto LABEL_85;
    }
  LABEL_112:
    GameRoutine_e66f80(v3);
  }
LABEL_85:
  v72 = *(unsigned __int8*)(a1 + 1496);
  v73 = (v72 & 1) == 0;
  v74 = v72 >> 1;
  if (v73) {
    v75 = a1 + 1497;
  }
  else {
    v75 = *(_QWORD*)(a1 + 1512);
  }
  if (v73) {
    v76 = v74;
  }
  else {
    v76 = *(_QWORD*)(a1 + 1504);
  }
  Util_1585690(&v92, &v89, v75, v76);
  v77 = (_QWORD*)v89;
  if (v89 != 0) {
    if ((_QWORD*)v89 == v90) {
      goto LABEL_106;
    }
    v78 = v90 - 5;
    v79 = fw_memory_g_heap_manager_ptr;
    do {
      v82 = *((_BYTE*)v78 - 8);
      *((_DWORD*)v78 - 10) = 0;
      *(v78 - 6) = 0;
      if ((v82 & 1) != 0) {
        *(_BYTE*)v78[1] = 0;
        *v78 = 0;
      }
      else {
        *((_WORD*)v78 - 4) = 0;
      }
      GameRoutine_6e3b50(v78 - 4, *(v78 - 3));
      v83 = *((_BYTE*)v78 - 8);
      *(v78 - 3) = 0;
      *(v78 - 2) = 0;
      *(v78 - 4) = v78 - 3;
      if ((v83 & 1) != 0) {
        v80 = v78[1];
        if (v80 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v79 + 200LL) != 0) {
            v84 = 128;
          }
          else {
            v84 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v79 + v84);
          v80 = *(v78 - 3);
        }
      }
      else {
        v80 = 0;
      }
      GameRoutine_6e3b50(v78 - 4, v80);
      v81 = v78 - 9;
      v78 -= 14;
    } while (v81 != v77);
    v90 = v77;
    if (v89 != 0) {
    LABEL_106:
      v85 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v85 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v85);
    }
  }
  result = v93;
  if (v93 != 0) {
    return std___1___shared_weak_count___release_weak(v93);
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
