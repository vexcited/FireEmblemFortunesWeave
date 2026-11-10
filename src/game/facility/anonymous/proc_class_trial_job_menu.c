#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_95e2c0(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_15e0640(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_960100(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_facility_EmptyClassChangeJobMenuItem_vtable[])();
extern __int64 (*game_facility_anonymous_ClassTrialJobMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcClassTrialJobMenu_Unknown128(__int64 a1);
__int64 GameRoutine_16b41a0(__int64);
__int64 GameRoutine_6c2b50(_QWORD);
__int64 GameRoutine_fa6720(void);
__int64 LayoutAccessor_1566d90(_QWORD, _QWORD);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
extern _UNKNOWN* GameData_212c730;
extern __int64 (*GameData_208d178[])();
extern __int64 (*game_facility_anonymous_ProcClassTrialJobMenu_vtable[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr[])();
extern __int64 GameData_208cc80;
extern __int64 game_facility_FacilityView_instance_;
extern __int64 game_g_game_setting;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_gameui_Header_instance_;
extern __int64* GameData_212c868;
extern __int64* GameData_212dcd0;
extern __int64* GameData_212e008[9];
extern __int64* GameData_2131b70[3];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
_QWORD*
game_facility_anonymous_ProcClassTrialJobMenu_CreateBind(__int64 a1, __int64 a2,
                                                         unsigned int a3);
__int64 game_facility_anonymous_ProcClassTrialJobMenu_ACall_closure_Invoke();
__int64 game_facility_anonymous_ProcClassTrialJobMenu_CreateBind_closure_Invoke(
    __int64 a1, _QWORD* a2);

__int64 ProcClassTrialJobMenu_Unknown128(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  unsigned int v7;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  bool v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  bool v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64* v23;
  bool v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64* v29;
  bool v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64* v35;
  bool v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  _QWORD* v41;
  bool v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  __int64* v59;
  __int64* v60;
  __int64 v61;
  __int64* v62;
  __int64* v63;
  __int64 v64;
  __int64* v65;
  __int64* v66;
  __int64 v67;
  __int64* v68;
  __int64* v69;
  __int64 v70;
  __int64* v71;
  __int64* v72;
  __int64 v73;
  _QWORD* v74;
  _QWORD* v75;
  __int64 v76;
  __int64 v77;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      104, 16, 0);
  *(_WORD*)(v3 + 16) = 0;
  *(_DWORD*)(v3 + 40) = 0;
  v4 = v3;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 88) = 0;
  *(_QWORD*)(v3 + 96) = 0;
  *(_WORD*)(v3 + 80) = 257;
  *(_BYTE*)(v3 + 82) = 1;
  *(_QWORD*)v3 = game_facility_EmptyClassChangeJobMenuItem_vtable;
  v5 = *(_QWORD*)(a1 + 344);
  if (v5 != 0) {
    v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  *(_QWORD*)(v4 + 8) = a1;
  *(_QWORD*)(a1 + 344) = v4;
  result = GameRoutine_960100(v5);
  v58 = (unsigned __int8)result;
  if ((_BYTE)result != 0) {
    v7 = 1;
    do {
      v9 = *(_QWORD*)(a1 + 1064);
      v75 = nullptr;
      v76 = 0;
      v73 = 0;
      v74 = nullptr;
      v71 = nullptr;
      v72 = nullptr;
      v69 = nullptr;
      v70 = 0;
      v67 = 0;
      v68 = nullptr;
      v65 = nullptr;
      v66 = nullptr;
      v63 = nullptr;
      v64 = 0;
      v61 = 0;
      v62 = nullptr;
      v59 = nullptr;
      v60 = nullptr;
      result = GameRoutine_15e0640(&v59, v9, v7, 1, 0);
      if ((result & 1) != 0) {
        v10 = v59;
        v11 = v60;
        while (v10 != v11) {
          v13 = *v10;
          v14 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
          *(_WORD*)(v14 + 16) = 0;
          v15 = *(_QWORD*)(a1 + 1064);
          *(_DWORD*)(v14 + 40) = 0;
          *(_QWORD*)(v14 + 48) = 0;
          *(_QWORD*)(v14 + 56) = 0;
          *(_QWORD*)(v14 + 64) = 0;
          *(_QWORD*)(v14 + 72) = 0;
          *(_WORD*)(v14 + 80) = 257;
          *(_BYTE*)(v14 + 82) = 1;
          *(_QWORD*)v14 = game_facility_anonymous_ClassTrialJobMenuItem_vtable;
          *(_QWORD*)(v14 + 8) = 0;
          *(_BYTE*)(v14 + 104) = 0;
          *(_QWORD*)(v14 + 88) = v15;
          *(_QWORD*)(v14 + 96) = v13;
          GameRoutine_95e2c0((__int64*)((char*)&v77 + 4), v15, v13);
          if ((v77 & 0x20000000000LL) != 0) {
            GameRoutine_95e2c0(&v77, *(_QWORD*)(v14 + 88),
                               *(_QWORD*)(v14 + 96));
            v12 = (v77 & 0x400) == 0;
          }
          else {
            v12 = false;
          }
          *(_BYTE*)(v14 + 104) = v12;
          result = GameRoutine_16e0c00(a1, v14);
          ++v10;
        }
        v16 = v62;
        v17 = v63;
        while (v16 != v17) {
          v19 = *v16;
          v20 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
          *(_WORD*)(v20 + 16) = 0;
          v21 = *(_QWORD*)(a1 + 1064);
          *(_DWORD*)(v20 + 40) = 0;
          *(_QWORD*)(v20 + 48) = 0;
          *(_QWORD*)(v20 + 56) = 0;
          *(_QWORD*)(v20 + 64) = 0;
          *(_QWORD*)(v20 + 72) = 0;
          *(_WORD*)(v20 + 80) = 257;
          *(_BYTE*)(v20 + 82) = 1;
          *(_QWORD*)v20 = game_facility_anonymous_ClassTrialJobMenuItem_vtable;
          *(_QWORD*)(v20 + 8) = 0;
          *(_BYTE*)(v20 + 104) = 0;
          *(_QWORD*)(v20 + 88) = v21;
          *(_QWORD*)(v20 + 96) = v19;
          GameRoutine_95e2c0((__int64*)((char*)&v77 + 4), v21, v19);
          if ((v77 & 0x20000000000LL) != 0) {
            GameRoutine_95e2c0(&v77, *(_QWORD*)(v20 + 88),
                               *(_QWORD*)(v20 + 96));
            v18 = (v77 & 0x400) == 0;
          }
          else {
            v18 = false;
          }
          *(_BYTE*)(v20 + 104) = v18;
          result = GameRoutine_16e0c00(a1, v20);
          ++v16;
        }
        v22 = v65;
        v23 = v66;
        while (v22 != v23) {
          v25 = *v22;
          v26 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
          *(_WORD*)(v26 + 16) = 0;
          v27 = *(_QWORD*)(a1 + 1064);
          *(_DWORD*)(v26 + 40) = 0;
          *(_QWORD*)(v26 + 48) = 0;
          *(_QWORD*)(v26 + 56) = 0;
          *(_QWORD*)(v26 + 64) = 0;
          *(_QWORD*)(v26 + 72) = 0;
          *(_WORD*)(v26 + 80) = 257;
          *(_BYTE*)(v26 + 82) = 1;
          *(_QWORD*)v26 = game_facility_anonymous_ClassTrialJobMenuItem_vtable;
          *(_QWORD*)(v26 + 8) = 0;
          *(_BYTE*)(v26 + 104) = 0;
          *(_QWORD*)(v26 + 88) = v27;
          *(_QWORD*)(v26 + 96) = v25;
          GameRoutine_95e2c0((__int64*)((char*)&v77 + 4), v27, v25);
          if ((v77 & 0x20000000000LL) != 0) {
            GameRoutine_95e2c0(&v77, *(_QWORD*)(v26 + 88),
                               *(_QWORD*)(v26 + 96));
            v24 = (v77 & 0x400) == 0;
          }
          else {
            v24 = false;
          }
          *(_BYTE*)(v26 + 104) = v24;
          result = GameRoutine_16e0c00(a1, v26);
          ++v22;
        }
        v28 = v68;
        v29 = v69;
        while (v28 != v29) {
          v31 = *v28;
          v32 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
          *(_WORD*)(v32 + 16) = 0;
          v33 = *(_QWORD*)(a1 + 1064);
          *(_DWORD*)(v32 + 40) = 0;
          *(_QWORD*)(v32 + 48) = 0;
          *(_QWORD*)(v32 + 56) = 0;
          *(_QWORD*)(v32 + 64) = 0;
          *(_QWORD*)(v32 + 72) = 0;
          *(_WORD*)(v32 + 80) = 257;
          *(_BYTE*)(v32 + 82) = 1;
          *(_QWORD*)v32 = game_facility_anonymous_ClassTrialJobMenuItem_vtable;
          *(_QWORD*)(v32 + 8) = 0;
          *(_BYTE*)(v32 + 104) = 0;
          *(_QWORD*)(v32 + 88) = v33;
          *(_QWORD*)(v32 + 96) = v31;
          GameRoutine_95e2c0((__int64*)((char*)&v77 + 4), v33, v31);
          if ((v77 & 0x20000000000LL) != 0) {
            GameRoutine_95e2c0(&v77, *(_QWORD*)(v32 + 88),
                               *(_QWORD*)(v32 + 96));
            v30 = (v77 & 0x400) == 0;
          }
          else {
            v30 = false;
          }
          *(_BYTE*)(v32 + 104) = v30;
          result = GameRoutine_16e0c00(a1, v32);
          ++v28;
        }
        v34 = v71;
        v35 = v72;
        while (v34 != v35) {
          v37 = *v34;
          v38 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
          *(_WORD*)(v38 + 16) = 0;
          v39 = *(_QWORD*)(a1 + 1064);
          *(_DWORD*)(v38 + 40) = 0;
          *(_QWORD*)(v38 + 48) = 0;
          *(_QWORD*)(v38 + 56) = 0;
          *(_QWORD*)(v38 + 64) = 0;
          *(_QWORD*)(v38 + 72) = 0;
          *(_WORD*)(v38 + 80) = 257;
          *(_BYTE*)(v38 + 82) = 1;
          *(_QWORD*)v38 = game_facility_anonymous_ClassTrialJobMenuItem_vtable;
          *(_QWORD*)(v38 + 8) = 0;
          *(_BYTE*)(v38 + 104) = 0;
          *(_QWORD*)(v38 + 88) = v39;
          *(_QWORD*)(v38 + 96) = v37;
          GameRoutine_95e2c0((__int64*)((char*)&v77 + 4), v39, v37);
          if ((v77 & 0x20000000000LL) != 0) {
            GameRoutine_95e2c0(&v77, *(_QWORD*)(v38 + 88),
                               *(_QWORD*)(v38 + 96));
            v36 = (v77 & 0x400) == 0;
          }
          else {
            v36 = false;
          }
          *(_BYTE*)(v38 + 104) = v36;
          result = GameRoutine_16e0c00(a1, v38);
          ++v34;
        }
        v40 = v74;
        v41 = v75;
        if (v74 == v75) {
          goto LABEL_44;
        }
        do {
          v43 = *v40;
          v44 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
          *(_WORD*)(v44 + 16) = 0;
          v45 = *(_QWORD*)(a1 + 1064);
          *(_DWORD*)(v44 + 40) = 0;
          *(_QWORD*)(v44 + 48) = 0;
          *(_QWORD*)(v44 + 56) = 0;
          *(_QWORD*)(v44 + 64) = 0;
          *(_QWORD*)(v44 + 72) = 0;
          *(_WORD*)(v44 + 80) = 257;
          *(_BYTE*)(v44 + 82) = 1;
          *(_QWORD*)v44 = game_facility_anonymous_ClassTrialJobMenuItem_vtable;
          *(_QWORD*)(v44 + 8) = 0;
          *(_BYTE*)(v44 + 104) = 0;
          *(_QWORD*)(v44 + 88) = v45;
          *(_QWORD*)(v44 + 96) = v43;
          GameRoutine_95e2c0((__int64*)((char*)&v77 + 4), v45, v43);
          if ((v77 & 0x20000000000LL) != 0) {
            GameRoutine_95e2c0(&v77, *(_QWORD*)(v44 + 88),
                               *(_QWORD*)(v44 + 96));
            v42 = (v77 & 0x400) == 0;
          }
          else {
            v42 = false;
          }
          *(_BYTE*)(v44 + 104) = v42;
          result = GameRoutine_16e0c00(a1, v44);
          ++v40;
        } while (v40 != v41);
      }
      v40 = v74;
    LABEL_44:
      if (v40 != nullptr) {
        v46 = *v2;
        v75 = v40;
        if (*(_QWORD*)(v46 + 200) != 0) {
          v47 = 128;
        }
        else {
          v47 = 56;
        }
        result = nn_mem_StandardAllocator_Free(v46 + v47, v40);
      }
      if (v71 != nullptr) {
        v48 = *v2;
        v72 = v71;
        if (*(_QWORD*)(v48 + 200) != 0) {
          v49 = 128;
        }
        else {
          v49 = 56;
        }
        result = nn_mem_StandardAllocator_Free(v48 + v49, v71);
      }
      if (v68 != nullptr) {
        v50 = *v2;
        v69 = v68;
        if (*(_QWORD*)(v50 + 200) != 0) {
          v51 = 128;
        }
        else {
          v51 = 56;
        }
        result = nn_mem_StandardAllocator_Free(v50 + v51, v68);
      }
      if (v65 != nullptr) {
        v52 = *v2;
        v66 = v65;
        if (*(_QWORD*)(v52 + 200) != 0) {
          v53 = 128;
        }
        else {
          v53 = 56;
        }
        result = nn_mem_StandardAllocator_Free(v52 + v53, v65);
      }
      if (v62 != nullptr) {
        v54 = *v2;
        v63 = v62;
        if (*(_QWORD*)(v54 + 200) != 0) {
          v55 = 128;
        }
        else {
          v55 = 56;
        }
        result = nn_mem_StandardAllocator_Free(v54 + v55, v62);
      }
      if (v59 != nullptr) {
        v56 = *v2;
        v60 = v59;
        if (*(_QWORD*)(v56 + 200) != 0) {
          v57 = 128;
        }
        else {
          v57 = 56;
        }
        result = nn_mem_StandardAllocator_Free(v56 + v57, v59);
      }
    } while (v7++ != v58);
  }
  return result;
}

__int64 game_facility_anonymous_ProcClassTrialJobMenu_ACall_closure_Invoke()
{
  if (game_facility_FacilityView_instance_ != 0) {
    *(_DWORD*)(game_facility_FacilityView_instance_ + 152) = 5;
  }
  if (game_gameui_Header_instance_ != 0) {
    LayoutAccessor_1566d90(game_gameui_Header_instance_, 0);
  }
  if (game_gameui_Footer_instance_ != 0) {
    LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
  }
  return 6;
}

__int64 game_facility_anonymous_ProcClassTrialJobMenu_CreateBind_closure_Invoke(
    __int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;

  v2 = *a2;
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 40LL))(*a2) & 1) != 0 &&
      *(_QWORD*)(a1 + 8) == *(_QWORD*)(v2 + 96)) {
    v5 = *(_QWORD*)(v2 + 8);
    v6 = *(_QWORD*)(v5 + 336);
    if (v6 != v2) {
      if (v6 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 168LL))(v6);
      }
      *(_QWORD*)(v5 + 336) = v2;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v5, 0, 1, 0);
      v7 = *(_QWORD*)(v5 + 336);
      if (v7 == 0) {
        v8 = 4;
      LABEL_15:
        *(_DWORD*)(v5 + 356) = *(_DWORD*)(v5 + 356) & 0xFFFFFFFB | v8;
        return 1;
      }
      (*(void (**)(__int64))(*(_QWORD*)v7 + 160LL))(v7);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      v6 = *(_QWORD*)(v5 + 336);
    }
    v8 = 4;
    if (v6 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 120LL))(v6) & 1) != 0) {
        v8 = 4;
      }
      else {
        v8 = 0;
      }
    }
    goto LABEL_15;
  }
  return 0;
}

#pragma GCC visibility pop
