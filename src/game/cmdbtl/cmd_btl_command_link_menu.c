#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_e7e340(PSEUDO_X8, _QWORD, _QWORD);
__int64 BelongingMenu_16ca580(_QWORD);
__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_157e0f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15d2830(__int64, unsigned __int16*, __int64);
__int64 GameRoutine_16ca2e0(void);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _DWORD GameData_1be9124[3];
extern __int64 GameData_206cec0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212ea58;
extern __int64* GameData_21319f8[8];
extern __int64* game_g_empty_item_ptr;
__int64 CmdBtlCommandLinkMenu_Unknown84(__int64 a1);
_QWORD* CmdBtlCommandLinkMenu_Unknown88(_QWORD* result);
__int64 CmdBtlCommandLinkMenu_DeletingDestructor(_QWORD* a1);
__int64 GameRoutine_16dcd30(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_edb740(_QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Target_f47000(_QWORD);
__int64 Target_f47270(_QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_cmdbtl_Target_CalcLink(_QWORD);
extern _UNKNOWN* GameData_212c730;
extern __int64 (*GameData_206cee8[])();
extern __int64 (*game_cmdbtl_CmdBtlCommandLinkMenu_vtable[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr[])();
extern __int64 GameData_212f5d0;
extern __int64 GameData_221a540;
extern __int64 game_g_game_setting_ptr;
extern __int64* GameData_212d6a8;
extern int GameData_1be9118[];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 game_cmdbtl_CmdBtlCommandLinkMenu_CreateBind(__int64 result);

__int64 CmdBtlCommandLinkMenu_Unknown84(__int64 a1)
{
  __int64 v2;

  GameRoutine_16ca2e0();
  GameRoutine_1562cf0(a1 + 952, "Menu_09_Header");
  v2 = GameRoutine_155fbe0(a1 + 952, "L_MenuItem_InfoHeader");
  GameRoutine_157e0f0(v2, "MID_Menu_Detail", "MID_CmdMenu_ConcentrationCost");
  return BelongingMenu_16ca580(a1);
}

_QWORD* CmdBtlCommandLinkMenu_Unknown88(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v1 = *(_QWORD*)(*GameData_212ea58 + 640);
  if (v1 == 0) {
    return result;
  }
  v2 = result;
  result = (_QWORD*)result[42];
  if (result == nullptr) {
    return result;
  }
  result = (_QWORD*)__dynamic_cast(result, GameData_212e008[0],
                                   &GameData_206cec0, 0);
  if (result == nullptr) {
    return result;
  }
  if ((unsigned int)*(unsigned __int8*)(v1 + 8) - 7 > 2) {
    v3 = 3;
    v5 = result[11];
    v4 = result[12];
    if (v4 == 0) {
    LABEL_11:
      GameRoutine_e7e340((void*)&v13, 0, v3);
      goto LABEL_12;
    }
  }
  else {
    v3 = GameData_1be9124[(unsigned __int8)(*(_BYTE*)(v1 + 8) - 7)];
    v5 = result[11];
    v4 = result[12];
    if (v4 == 0) {
      goto LABEL_11;
    }
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v6 = std___1___shared_weak_count_lock(v4);
  if (v6 == 0) {
    goto LABEL_11;
  }
  v7 = v6;
  GameRoutine_e7e340((void*)&v13, v5, v3);
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }

LABEL_12:
  if (v13 != 0) {
    v8 = *(__int64**)(v13 + 8);
    v9 = v14;
    if (v14 == 0) {
      goto LABEL_18;
    }
  LABEL_16:
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    }
    goto LABEL_18;
  }
  v8 = nullptr;
  v9 = v14;
  if (v14 != 0) {
    goto LABEL_16;
  }

LABEL_18:
  v10 = game_g_empty_item_ptr;
  if (v8 != nullptr) {
    v10 = v8;
  }
  v13 = *v10;
  if (v4 == 0) {
    return (_QWORD*)GameRoutine_15d2830((__int64)(v2 + 133),
                                        (unsigned __int16*)&v13, 0);
  }
  v11 = std___1___shared_weak_count_lock(v4);
  if (v11 != 0) {
    v12 = v11;
    GameRoutine_15d2830((__int64)(v2 + 133), (unsigned __int16*)&v13,
                        *(_QWORD*)(v5 + 16));
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak(v12);
    }
  }
  else {
    GameRoutine_15d2830((__int64)(v2 + 133), (unsigned __int16*)&v13, 0);
  }
  return (_QWORD*)std___1___shared_weak_count___release_weak(v4);
}

__int64 game_cmdbtl_CmdBtlCommandLinkMenu_CreateBind(__int64 result)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  const char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
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
  __int64* v20;
  __int64 v21;
  _QWORD* v22;
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
  __int64* v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  _QWORD* v42;
  _QWORD* v43;
  int v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  int v48;
  _QWORD v49[4];
  _QWORD* v50;
  int v51;
  _QWORD* v52;
  __int64 v53;
  __int64 v54;

  v1 = GameData_212ea58;
  v2 = *(_QWORD*)(*GameData_212ea58 + 640);
  if (v2 == 0) {
    return result;
  }
  v3 = result;
  GameRoutine_edb740(*(_QWORD*)(*GameData_212ea58 + 640));
  v4 = *(_QWORD**)(v2 + 88);
  v4[3] = v4[2];
  v4[6] = v4[5];
  Target_f47000(v4);
  game_cmdbtl_Target_CalcLink(v4);
  Target_f47270(v4);
  if ((unsigned int)*(unsigned __int8*)(v2 + 8) - 7 > 2) {
    v5 = "MID_CmdMenu_Link";
  }
  else {
    v5 = (char*)GameData_1be9118 +
         GameData_1be9118[(unsigned __int8)(*(_BYTE*)(v2 + 8) - 7)];
  }
  v6 = *v1;
  v7 = *(_QWORD*)(*v1 + 640);
  v8 = *(_QWORD*)(*v1 + 648);
  if (v8 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v9 = v7;
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
    v7 = v9;
    if (v9 != 0) {
      goto LABEL_13;
    }
  }
  else if (v7 != 0) {
    goto LABEL_13;
  }
  v7 = *(_QWORD*)(v6 + 656);
  v10 = *(_QWORD*)(v6 + 664);
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v11 = v7;
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
      v7 = v11;
    }
  }
LABEL_13:
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
  v13 = *(_QWORD*)(v12 + 88);
  if (v13 != 0) {
    v14 = *(_QWORD*)(v12 + 80);
    v15 = *(_QWORD*)(v12 + 88);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
    v16 = std___1___shared_weak_count_lock(v15);
    std___1___shared_weak_count___release_weak(v13);
  }
  else {
    v14 = 0;
    v16 = 0;
  }
  v17 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       1184, 16, 0);
  v18 = *(_QWORD*)(v14 + 16);
  v19 = v17;
  v53 = 0;
  v54 = 0;
  GameRoutine_16dcd30(v17, "BelongingMenu", &v53, 0);
  v20 = GameData_212d6a8;
  v21 = v54;
  *(_QWORD*)v19 = GameData_212d6a8 + 2;
  *(_QWORD*)(v19 + 176) = v20 + 143;
  *(_QWORD*)(v19 + 1056) = v20 + 169;
  if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    std___1___shared_weak_count___release_weak(v21);
  }
  *(_QWORD*)(v19 + 1104) = 0;
  *(_QWORD*)(v19 + 1096) = 0;
  *(_QWORD*)(v19 + 1064) = 0;
  *(_QWORD*)(v19 + 1072) = 0;
  *(_QWORD*)(v19 + 1080) = 0;
  *(_QWORD*)(v19 + 1088) = v19 + 1096;
  *(_QWORD*)(v19 + 1112) = 0;
  *(_QWORD*)(v19 + 1120) = 0;
  *(_QWORD*)(v19 + 1128) = 0;
  *(_QWORD*)(v19 + 1136) = 0;
  *(_QWORD*)(v19 + 1152) = 0;
  *(_QWORD*)(v19 + 1160) = 0;
  *(_QWORD*)(v19 + 1168) = v18;
  *(_QWORD*)(v19 + 1176) = v5;
  *(_DWORD*)(v19 + 1144) = 1065353216;
  *(_QWORD*)v19 = game_cmdbtl_CmdBtlCommandLinkMenu_vtable;
  *(_QWORD*)(v19 + 176) = game_menu_MenuInput_InputUnknown00_ptr;
  *(_QWORD*)(v19 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr;
  ProcInst_657850(v19, GameData_212c730, "CmdBtlCommandLinkMenu", 1, v3);
  v52 = (_QWORD*)v19;
  v22 = (_QWORD*)*v1;
  v51 = 0;
  v23 = v22[80];
  v24 = v22[81];
  if (v24 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v25 = v23;
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    std___1___shared_weak_count___release_weak(v24);
    v23 = v25;
    if (v25 != 0) {
      goto LABEL_27;
    }
  }
  else if (v23 != 0) {
    goto LABEL_27;
  }
  v23 = v22[82];
  v26 = v22[83];
  if (v26 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v27 = v23;
      (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
      std___1___shared_weak_count___release_weak(v26);
      v23 = v27;
    }
  }
LABEL_27:
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
  if (result == 0) {
    goto LABEL_46;
  }
  v32 = *(_QWORD*)(v2 + 88);
  v31 = *(_QWORD*)(v2 + 96);
  if (v31 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v33 = result;
      (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
      std___1___shared_weak_count___release_weak(v31);
      result = v33;
    }
  }
  v34 = v32 + 40;
  v35 = *(__int64**)(result + 40);
  v36 = *(__int64**)(result + 48);
  v49[0] = GameData_206cee8;
  v49[1] = v34;
  v49[2] = &v51;
  v49[3] = &v52;
  v50 = v49;
  if (v35 == v36) {
    result = (__int64)v49;
  LABEL_44:
    v39 = 32;
    goto LABEL_45;
  }
  do {
    v53 = *v35;
    v37 = v35[1];
    v54 = v37;
    if (v37 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v50 == nullptr) {
      GameRoutine_60a310(0, v28);
    }
    (*(void (**)(_QWORD*, __int64*))(*v50 + 48LL))(v50, &v53);
    v38 = v54;
    if (v54 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v54 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
      std___1___shared_weak_count___release_weak(v38);
    }
    v35 += 2;
  } while (v35 != v36);
  result = (__int64)v50;
  if (v50 == v49) {
    goto LABEL_44;
  }
  if (v50 != nullptr) {
    v39 = 40;
  LABEL_45:
    result = (*(__int64 (**)(__int64, __int64, __int64, __int64))(
        *(_QWORD*)result + v39))(result, v28, v29, v30);
  }
LABEL_46:
  if (GameData_221a540 == 0 ||
      (v40 = *(_QWORD*)(GameData_212f5d0 + 8)) == *(_QWORD*)GameData_212f5d0) {
    v41 = 0;
  }
  else {
    v41 = *(_DWORD*)(v40 - 4);
    if (v41 < 0) {
      goto LABEL_67;
    }
  }
  v42 = (_QWORD*)v52[29];
  v43 = (_QWORD*)v52[30];
  if (v42 != v43) {
    v44 = 0;
    do {
      v45 = *v42;
      result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v42 + 40LL))(*v42);
      if ((result & 1) != 0) {
        if (v41 == v44) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)v45 + 48LL))(v45);
          if ((result & 1) != 0) {
            v46 = v52;
            v47 = v52[42];
            if (v47 != 0) {
              (*(void (**)(__int64))(*(_QWORD*)v47 + 168LL))(v47);
            }
            v46[42] = v45;
            _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v46, 1, 0, 0);
            result = v46[42];
            if (result != 0) {
              (*(void (**)(__int64))(*(_QWORD*)result + 160LL))(result);
              game_IsVibrationEnabled(*(_QWORD*)game_g_game_setting_ptr +
                                      712LL);
              result = v46[42];
              v48 = 4;
              if (result != 0) {
                result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 120LL))(
                    result);
                if ((result & 1) != 0) {
                  v48 = 4;
                }
                else {
                  v48 = 0;
                }
              }
            }
            else {
              v48 = 4;
            }
            *((_DWORD*)v46 + 89) = *((_DWORD*)v46 + 89) & 0xFFFFFFFB | v48;
          }
          break;
        }
        ++v44;
      }
      ++v42;
    } while (v42 != v43);
  }
LABEL_67:
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    return std___1___shared_weak_count___release_weak(v16);
  }
  return result;
}

__int64 CmdBtlCommandLinkMenu_DeletingDestructor(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = GameData_21319f8[0];
  *a1 = GameData_21319f8[0] + 2;
  a1[22] = v2 + 149;
  a1[132] = v2 + 175;
  GameRoutine_155e140(a1 + 133);
  v3 = a1[145];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_1564060(a1 + 139);
  GameRoutine_1563f90(a1 + 136, a1[137]);
  v4 = a1[134];
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  game_menu_BasicMenu_Destroy_BasicMenu(a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, a1);
}

#pragma GCC visibility pop
