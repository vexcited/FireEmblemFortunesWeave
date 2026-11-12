#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* game_gameui_control_189c7c0(_QWORD*);
__attribute__((swiftcall)) void GameRoutine_15d4100(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 GameRoutine_18929e0(__int64 result, _QWORD*);
__int64 GameRoutine_18930c0(__int64 result, _QWORD*);
__int64 GameRoutine_576600(__int64, const char*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 LayoutEx_579160(__int64, __int64);
__int64 MenuItemAnimalRage_1894570(_QWORD*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_18415e0(__int64, __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_control_1888c80(__int64, __int64, __int64);
char* game_util_Format(const char*, ...);
const char* GameRoutine_18b26a0(__int64, __int64, __int64, __int64);
extern __int64 (*GameData_2102bf0[])();
extern __int64 (*GameData_2102c78[])();
extern __int64 (*GameData_2102e50[])();
extern __int64 (*GameData_2102e78[])();
extern __int64 (*StatusClass_Destructor_ptr[])();
extern __int64 (*game_gameui_control_MenuItemAnimalRage_vtable[])();
extern __int64 (*game_gameui_control_MenuItemAnimalSkill_vtable[])();
extern __int64 (*game_gameui_control_StatusClass_Destroy_StatusClass_ptr[])();
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 GameData_2102c10;
extern __int64 GameData_2102c20;
extern __int64 GameData_2102c30;
extern __int64 GameData_2102c40;
extern __int64 GameData_2102c50;
extern __int64 GameData_2102c60;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_2102c08;
extern char* GameData_2102c18;
extern char* GameData_2102c28;
extern char* GameData_2102c38;
extern char* GameData_2102c48;
extern char* GameData_2102c58;
unsigned __int64 strlen(const char*);
void GameHr_157e0f0(__int64*, const char*, const char*);
void LayoutAccessor_1562060(__int64*, __int64, const char*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void ui_text_190a0c0(float*, __int64, float*, _QWORD*, __int64);
__int64 game_gameui_control_1893f00(__int64 a1);
__attribute__((swiftcall)) void
game_gameui_control_189ca20(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3);
void game_gameui_control_18a7110(__int64* a1, _DWORD* a2, __int64 a3,
                                 const char* a4, unsigned __int8* a5);

__int64 game_gameui_control_1893f00(__int64 a1)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
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
  __int64 v20;
  const char* v21;
  __int64 v22;
  _QWORD* v23;
  const char* v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  _QWORD* v30;
  _QWORD* v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  const char* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  _QWORD* v44;
  _QWORD* v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  struct {
    const char* v52;
    __int64 v53;
  } v52_;
  struct {
    const char* v54;
    __int64 v55;
  } v54_;

  v2 = LayoutAccessor_155fbe0((__int64*)(a1 + 88), "L_Info_AnimalAttack");
  GameHr_157e0f0(v2, "MID_Menu_ExclusiveItem", nullptr);
  v3 = LayoutAccessor_155fbe0((__int64*)(a1 + 88), "L_Info_AnimalMorph");
  GameHr_157e0f0(v3, "MID_BtlMenu_Rage", "MID_Sys_Remaining");
  LayoutAccessor_1560070((void*)(&v54_.v54), (__int64*)(a1 + 88),
                         "L_Info_Skill");
  if (v54_.v55 != 0) {
    v4 = std___1___shared_weak_count_lock(v54_.v55);
    v5 = (__int64*)v54_.v54;
    if (v54_.v55 != 0) {
      std___1___shared_weak_count___release_weak(v54_.v55);
    }
    if (v4 != 0 && v5 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                memory_order_relaxed);
      v6 = std___1___shared_weak_count_lock(v4);
      if (v6 != 0) {
        v7 = v6;
        GameHr_157e0f0(v5, "MID_Sys_Singular_Skill", nullptr);
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak(v7);
        }
      }
      std___1___shared_weak_count___release_weak(v4);
      LayoutAccessor_1562cf0((__int64)v5, "UnitInfoDetail_Short");
    }
    else if (v4 == 0) {
      goto LABEL_13;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
LABEL_13:
  *(_BYTE*)(a1 + 1076) = ui_LayoutAccessor_FindPane(
                             (__int64*)(a1 + 88), (__int64)"L_MorphRange") != 0;
  if (ui_LayoutAccessor_FindPane((__int64*)(a1 + 88),
                                 (__int64)"L_MenuItem_Name") != 0) {
    v54_.v54 = "L_MenuItem_Name";
    v54_.v55 = 15;
    GameRoutine_15d4100((void*)(&v52_.v52), (__int64*)(a1 + 88), &v54_.v54);
    v8 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40, 16, 0);
    v9 = v52_.v53;
    v10 = v8;
    v54_.v54 = v52_.v52;
    v54_.v55 = v52_.v53;
    if (v52_.v53 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v52_.v53 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_18929e0(v8, &v54_.v54);
      std___1___shared_weak_count___release_weak(v9);
    }
    else {
      GameRoutine_18929e0(v8, &v54_.v54);
    }
    v11 = *(_QWORD*)(a1 + 1080);
    *(_QWORD*)(a1 + 1080) = v10;
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
    }
    if (v52_.v53 != 0) {
      std___1___shared_weak_count___release_weak(v52_.v53);
    }
  }
  v54_.v54 = "L_MenuItem_Attack00";
  v54_.v55 = 19;
  GameRoutine_15d4100((void*)(&v52_.v52), (__int64*)(a1 + 88), &v54_.v54);
  v12 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40, 16, 0);
  v13 = v52_.v53;
  v14 = v12;
  v54_.v54 = v52_.v52;
  v54_.v55 = v52_.v53;
  if (v52_.v53 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v52_.v53 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_18930c0(v12, &v54_.v54);
    std___1___shared_weak_count___release_weak(v13);
  }
  else {
    GameRoutine_18930c0(v12, &v54_.v54);
  }
  v15 = *(_QWORD*)(a1 + 1088);
  *(_QWORD*)(a1 + 1088) = v14;
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
  if (v52_.v53 != 0) {
    std___1___shared_weak_count___release_weak(v52_.v53);
  }
  v54_.v54 = "L_MenuItem_Attack01";
  v54_.v55 = 19;
  GameRoutine_15d4100((void*)(&v52_.v52), (__int64*)(a1 + 88), &v54_.v54);
  v16 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40, 16, 0);
  v17 = v52_.v53;
  v18 = v16;
  v54_.v54 = v52_.v52;
  v54_.v55 = v52_.v53;
  if (v52_.v53 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v52_.v53 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_18930c0(v16, &v54_.v54);
    std___1___shared_weak_count___release_weak(v17);
  }
  else {
    GameRoutine_18930c0(v16, &v54_.v54);
  }
  v19 = *(_QWORD*)(a1 + 1096);
  *(_QWORD*)(a1 + 1096) = v18;
  if (v19 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 8LL))(v19);
  }
  if (v52_.v53 != 0) {
    std___1___shared_weak_count___release_weak(v52_.v53);
  }
  v52_.v52 = "L_MenuItem_Skill";
  v52_.v53 = 16;
  GameRoutine_15d4100((void*)(&v54_.v54), (__int64*)(a1 + 88), &v52_.v52);
  if (v54_.v55 != 0) {
    v20 = std___1___shared_weak_count_lock(v54_.v55);
    if (v20 != 0) {
      v21 = v54_.v54;
      if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v22 = v20;
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        std___1___shared_weak_count___release_weak(v22);
      }
      if (v21 != nullptr) {
        v23 = (_QWORD*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      32, 16, 0);
        v24 = v54_.v54;
        v25 = v54_.v55;
        v26 = v23;
        if (v54_.v55 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v54_.v55 + 16),
                                    1u, memory_order_relaxed);
          *v23 = game_gameui_control_MenuItemAnimalSkill_vtable;
          v23[1] = v24;
          v23[2] = v25;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                                    memory_order_relaxed);
          v23[3] = 0;
          v27 = v23[2];
          if (v27 != 0) {
            v28 = std___1___shared_weak_count_lock(v27);
            if (v28 != 0) {
              v29 = (_QWORD*)v26[1];
              if (v29 != nullptr) {
                v30 = (_QWORD*)v29[131];
                v31 = v29 + 130;
                if (v30 == v29 + 130) {
                  goto LABEL_47;
                }
                while ((_QWORD*)v30[2] != v26) {
                  v30 = (_QWORD*)v30[1];
                  if (v30 == v31) {
                    goto LABEL_47;
                  }
                }
                if (v30 == v31) {
                LABEL_47:
                  v32 = v28;
                  v33 = (_QWORD*)fw_memory_HeapManager_Allocate(
                      fw_memory_g_heap_manager, 24, 16, 0);
                  v33[1] = v31;
                  v33[2] = v26;
                  v28 = v32;
                  v34 = v29[130];
                  *v33 = v34;
                  *(_QWORD*)(v34 + 8) = v33;
                  v29[130] = v33;
                  ++v29[132];
                }
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v35 = v28;
                (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
                std___1___shared_weak_count___release_weak(v35);
              }
            }
          }
          std___1___shared_weak_count___release_weak(v25);
        }
        else {
          *v23 = game_gameui_control_MenuItemAnimalSkill_vtable;
          v23[1] = v24;
          v23[2] = 0;
          v23[3] = 0;
        }
        v36 = *(_QWORD*)(a1 + 1104);
        *(_QWORD*)(a1 + 1104) = v26;
        if (v36 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v36 + 8LL))(v36);
        }
      }
    }
    if (v54_.v55 != 0) {
      std___1___shared_weak_count___release_weak(v54_.v55);
    }
  }
  v52_.v52 = "L_MenuItem_Morph";
  v52_.v53 = 16;
  GameRoutine_15d4100((void*)(&v54_.v54), (__int64*)(a1 + 88), &v52_.v52);
  v37 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40, 16, 0);
  v38 = v54_.v54;
  v39 = v54_.v55;
  v40 = v37;
  if (v54_.v55 != 0) {
    v41 = v54_.v55;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v54_.v55 + 16), 1u,
                              memory_order_relaxed);
    *(_QWORD*)(v40 + 16) = v39;
    *(_QWORD*)v40 = game_gameui_control_MenuItemAnimalRage_vtable;
    *(_QWORD*)(v40 + 8) = v38;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v39 + 16), 1u,
                              memory_order_relaxed);
    *(_QWORD*)(v40 + 24) = 0;
    *(_BYTE*)(v40 + 32) = 0;
    v42 = std___1___shared_weak_count_lock(v41);
    if (v42 != 0) {
      v43 = *(_QWORD**)(v40 + 8);
      if (v43 != nullptr) {
        v44 = (_QWORD*)v43[131];
        v45 = v43 + 130;
        if (v44 == v43 + 130) {
          goto LABEL_62;
        }
        while (v44[2] != v40) {
          v44 = (_QWORD*)v44[1];
          if (v44 == v45) {
            goto LABEL_62;
          }
        }
        if (v44 == v45) {
        LABEL_62:
          v46 = v42;
          v47 = (_QWORD*)fw_memory_HeapManager_Allocate(
              fw_memory_g_heap_manager, 24, 16, 0);
          v47[1] = v45;
          v47[2] = v40;
          v42 = v46;
          v48 = v43[130];
          *v47 = v48;
          *(_QWORD*)(v48 + 8) = v47;
          v43[130] = v47;
          ++v43[132];
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v49 = v42;
        (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
        std___1___shared_weak_count___release_weak(v49);
      }
    }
    std___1___shared_weak_count___release_weak(v39);
  }
  else {
    *(_QWORD*)(v37 + 16) = 0;
    *(_QWORD*)(v37 + 24) = 0;
    *(_BYTE*)(v37 + 32) = 0;
    *(_QWORD*)v37 = game_gameui_control_MenuItemAnimalRage_vtable;
    *(_QWORD*)(v37 + 8) = v38;
  }
  v50 = *(_QWORD*)(a1 + 1112);
  *(_QWORD*)(a1 + 1112) = v40;
  if (v50 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v50 + 8LL))(v50);
  }
  if (v54_.v55 != 0) {
    std___1___shared_weak_count___release_weak(v54_.v55);
  }
  return MenuItemAnimalRage_1894570((_QWORD*)a1);
}

__attribute__((swiftcall)) void

game_gameui_control_189ca20(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  const char* v19;
  const char* v20;
  const char* v21;
  const char* v22;
  const char* v23;
  const char* v24;
  __int64 v25;
  struct {
    const char* v26;
    unsigned __int64 v27;
  } v26_;

  v8 = (_QWORD*)LayoutEx_579160(1160, 8);
  v9 = v8 + 3;
  v10 = v8;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = GameData_2102c78;
  GameRoutine_18b26a0((__int64)(v8 + 3), a1, a2, a3);
  v10[144] = 0;
  v10[138] = 0;
  v10[139] = 0;
  v10[3] = game_gameui_control_StatusClass_Destroy_StatusClass_ptr;
  v10[140] = 0;
  v10[141] = 0;
  v10[142] = 0;
  *((_BYTE*)v10 + 1144) = 0;
  v10[12] = StatusClass_Destructor_ptr;
  v10[132] = GameData_2102bf0;
  v11 = fw_memory_g_heap_manager_ptr;
  v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       96, 16, 0);
  v13 = GameData_2102c50;
  *(_QWORD*)(v12 + 64) = GameData_2102c48;
  *(_QWORD*)(v12 + 72) = v13;
  v14 = GameData_2102c60;
  *(_QWORD*)(v12 + 80) = GameData_2102c58;
  *(_QWORD*)(v12 + 88) = v14;
  v15 = GameData_2102c30;
  *(_QWORD*)(v12 + 32) = GameData_2102c28;
  *(_QWORD*)(v12 + 40) = v15;
  v16 = GameData_2102c40;
  *(_QWORD*)(v12 + 48) = GameData_2102c38;
  *(_QWORD*)(v12 + 56) = v16;
  v17 = GameData_2102c10;
  *(_QWORD*)v12 = GameData_2102c08;
  *(_QWORD*)(v12 + 8) = v17;
  v18 = GameData_2102c20;
  *(_QWORD*)(v12 + 16) = GameData_2102c18;
  *(_QWORD*)(v12 + 24) = v18;
  v19 = (const char*)GameRoutine_576600(a1, "Name");
  if (v19 != nullptr) {
    v26_.v26 = v19;
    v26_.v27 = strlen(v19);
    if (v26_.v27 != 0) {
      ui_control_1888c80((__int64)(v10 + 29), v12, (__int64)&v26_.v26);
    }
  }
  v20 = (const char*)GameRoutine_576600(a1, *(const char**)(v12 + 16));
  if (v20 != nullptr) {
    v26_.v26 = v20;
    v26_.v27 = strlen(v20);
    if (v26_.v27 != 0) {
      ui_control_1888c80((__int64)(v10 + 29), v12 + 16, (__int64)&v26_.v26);
    }
  }
  v21 = (const char*)GameRoutine_576600(a1, *(const char**)(v12 + 32));
  if (v21 != nullptr) {
    v26_.v26 = v21;
    v26_.v27 = strlen(v21);
    if (v26_.v27 != 0) {
      ui_control_1888c80((__int64)(v10 + 29), v12 + 32, (__int64)&v26_.v26);
    }
  }
  v22 = (const char*)GameRoutine_576600(a1, *(const char**)(v12 + 48));
  if (v22 != nullptr) {
    v26_.v26 = v22;
    v26_.v27 = strlen(v22);
    if (v26_.v27 != 0) {
      ui_control_1888c80((__int64)(v10 + 29), v12 + 48, (__int64)&v26_.v26);
    }
  }
  v23 = (const char*)GameRoutine_576600(a1, *(const char**)(v12 + 64));
  if (v23 != nullptr) {
    v26_.v26 = v23;
    v26_.v27 = strlen(v23);
    if (v26_.v27 != 0) {
      ui_control_1888c80((__int64)(v10 + 29), v12 + 64, (__int64)&v26_.v26);
    }
  }
  v24 = (const char*)GameRoutine_576600(a1, *(const char**)(v12 + 80));
  if (v24 != nullptr) {
    v26_.v26 = v24;
    v26_.v27 = strlen(v24);
    if (v26_.v27 != 0) {
      ui_control_1888c80((__int64)(v10 + 29), v12 + 80, (__int64)&v26_.v26);
    }
  }
  game_gameui_control_189c7c0(v9);
  v25 = 128;
  if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
    v25 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v25, v12);
  *a4 = v9;
  a4[1] = v10;
  v10[3] = game_gameui_control_StatusClass_Destroy_StatusClass_ptr;
  v10[12] = GameData_2102e50;
  v10[132] = GameData_2102e78;
}

void game_gameui_control_18a7110(__int64* a1, _DWORD* a2, __int64 a3,
                                 const char* a4, unsigned __int8* a5)
{

#pragma clang fp contract(off)
  char* v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  const char* v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  int v24;
  int v25;
  char v26;
  struct {
    __int64* v27;
    __int64 v28;
  } v27_;
  float v29;
  _DWORD v30[2];

  v10 = game_util_Format("L_Efficacy%02d", *a2);
  LayoutAccessor_1560070((void*)(&v27_.v27), a1, v10);
  if (v27_.v28 != 0) {
    v11 = std___1___shared_weak_count_lock(v27_.v28);
    v12 = v27_.v27;
    if (v27_.v28 != 0) {
      std___1___shared_weak_count___release_weak(v27_.v28);
    }
    if (v11 == 0 || v12 == nullptr) {
      if (v11 == 0) {
        return;
      }
      goto LABEL_42;
    }
    LayoutAccessor_155e830((__int64)v12, 1);
    LayoutAccessor_1560070((void*)(&v27_.v27), v12, "L_Title");
    if (v27_.v28 != 0) {
      v13 = std___1___shared_weak_count_lock(v27_.v28);
      v14 = v27_.v27;
      if (v27_.v28 != 0) {
        std___1___shared_weak_count___release_weak(v27_.v28);
      }
      if (v13 != 0 && v14 != nullptr) {
        v15 = ui_LayoutAccessor_FindPane(v14, (__int64)"Icon");
        if (v15 != 0) {
          v15 =
              __dynamic_cast(v15, GameData_212d670[0], GameData_212d678[0], 0);
        }
        game_18415e0(v15, a3);
        LayoutAccessor_1562060(v14, (__int64)"T_Txt", a4);
      }
      else if (v13 == 0) {
        goto LABEL_19;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak(v13);
      }
    }
  LABEL_19:
    LayoutAccessor_1560070((void*)(&v27_.v27), v12, "L_Txt");
    if (v27_.v28 != 0) {
      v16 = std___1___shared_weak_count_lock(v27_.v28);
      v17 = v27_.v27;
      if (v27_.v28 != 0) {
        std___1___shared_weak_count___release_weak(v27_.v28);
      }
      if (v16 != 0 && v17 != nullptr) {
        v18 = *a5;
        if ((v18 & 1) != 0) {
          v19 = *((_QWORD*)a5 + 1);
        }
        else {
          v19 = v18 >> 1;
        }
        if (v19 != 0) {
          LayoutAccessor_155e830((__int64)v17, 1);
          if ((*a5 & 1) != 0) {
            v20 = *((const char**)a5 + 2);
          }
          else {
            v20 = (const char*)(a5 + 1);
          }
          LayoutAccessor_1562060(v17, (__int64)"T_Txt", v20);
          v21 = ui_LayoutAccessor_FindTextBox(v17, (__int64)"T_Txt");
          if (v21 != 0) {
            v22 = v21;
            v23 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v17, (__int64)"T_Txt");
            if (v23 != nullptr) {
              ui_text_190a0c0((float*)&v27_.v27, (__int64)v30, &v29, v23,
                              v23[27]);
              v24 = v30[0];
              v25 = v30[1];
            }
            else {
              v24 = 0;
              v25 = 0;
            }
            v26 = *(_BYTE*)(v22 + 88);
            *(_DWORD*)(v22 + 80) = v24;
            *(_DWORD*)(v22 + 84) = v25;
            *(_BYTE*)(v22 + 88) = v26 | 0x10;
          }
        }
        else {
          LayoutAccessor_155e830((__int64)v17, 0);
        }
        goto LABEL_39;
      }
      if (v16 != 0) {
      LABEL_39:
        if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
          std___1___shared_weak_count___release_weak(v16);
        }
      }
    }
    ++*a2;
  LABEL_42:
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
    }
  }
}

#pragma GCC visibility pop
