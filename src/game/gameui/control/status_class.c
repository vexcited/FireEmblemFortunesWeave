#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* Element_1886290(__int64, _QWORD*);
_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 Alignment_56b600(_QWORD);
__int64 ControlCreator_13633c0(void);
__int64 Element_1888840(__int64);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_174d670(_QWORD);
__int64 GameRoutine_174d800(float, float);
__int64 GameRoutine_18a6760(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 LayoutAccessor_15730d0(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD, _QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_Unit_GetJob(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_IsPaneVisible(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_2130ea8;
extern __int64 (*GameData_2102bc8[])();
extern __int64 (*GameData_2102bf0[])();
extern __int64 (*GameData_2104c28[])();
extern __int64 (*GameData_2104c50[])();
extern __int64 (*game_gameui_control_HelpableElement_vtable[])();
extern __int64 (*game_gameui_control_StatusClass_Destroy_StatusClass_ptr[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e348;
extern __int64* GameData_2130ea0;
extern __int64* GameData_2132080[6];
extern __int64* msg_MessageManager_instance__ptr[2];
_QWORD* StatusClass_189ce00(_QWORD* a1);
__int64 StatusClass_189da80(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                            __int64 a5, int a6, char a7);
__int64 StatusClass_189dc40(__int64 result, __int64 a2, int a3, unsigned int a4,
                            char a5, float a6);
bool StatusClass_189e180(_QWORD* a1);
__int64 StatusClass_189e2a0(__int64 result, __int64* a2);
__int64 StatusClass_DeletingDestructor_189e350(__int64 a1);
__int64 StatusClass_Destructor(__int64 a1);
__int64 StatusClass_DeletingDestructor_189e4f0(__int64 a1);

_QWORD* StatusClass_189ce00(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* result;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD v25[4];
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;

  v25[0] = "Name";
  v25[1] = 4;
  v3 = Element_1886290((__int64)a1, v25);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0) {
    v21 = __cxa_guard_acquire(GameData_2130ea8, v2);
    if ((_DWORD)v21 != 0) {
      *GameData_2130ea0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(v21, v22);
      __cxa_guard_release(GameData_2130ea8);
    }
  }
  if (v3 != nullptr) {
    v4 = (__int64*)(*(__int64 (**)(_QWORD*))(*v3 + 16LL))(v3);
    if (v4 == GameData_2130ea0) {
      goto LABEL_10;
    }
    do {
      v4 = (__int64*)*v4;
    } while (v4 != GameData_2130ea0 && v4 != nullptr);
    if (v4 != nullptr) {
    LABEL_10:
      v28 = -1;
      v29 = -1;
      v30 = -1;
      v31 = -1;
      v6 = *msg_MessageManager_instance__ptr[0];
      v32 = -1;
      v33 = -1;
      v34 = -1;
      v35 = -1;
      v36 = -1;
      v37 = -1;
      v38 = -1;
      v39 = -1;
      v25[0] = GameData_212e348 + 2;
      v25[1] = 0xFFFF0001FFFF0000LL;
      v25[2] = 0xFFFF0004FFFF0002LL;
      v25[3] = 0xFFFF0006FFFF0005LL;
      v40 = 8;
      v26 = -65529;
      v27 = -65528;
      v7 = GameRoutine_a4dbe0(v6, "MID_Sys_ValueEmptyLong", 0, v25);
      GameRoutine_156c5d0(v3, v7, 0);
    }
  }
  v25[0] = "Max";
  v25[1] = 3;
  v8 = Element_1886290((__int64)a1, v25);
  if (v8 != nullptr) {
    *((_BYTE*)v8 + 88) &= ~1u;
  }
  v9 = ui_LayoutAccessor_FindAlignment(a1 + 11, "A_Class");
  if (v9 != 0) {
    Alignment_56b600(v9);
  }
  v10 = a1[135];
  if (v10 != 0 && (*(_BYTE*)(v10 + 88) & 1) != 0) {
    v25[0] = "Gauge";
    v25[1] = 5;
    v11 = Element_1886290((__int64)a1, v25);
    if (v11 != nullptr) {
      GameRoutine_1560070(&v23, a1 + 11, v11 + 22);
      GameRoutine_174d670(&v23);
      if (v24 != 0) {
        std___1___shared_weak_count___release_weak(v24);
      }
    }
  }
  v12 = a1[137];
  if (v12 != 0) {
    v13 = std___1___shared_weak_count_lock(v12);
    if (v13 != 0) {
      v14 = a1[136];
      v15 = v13;
      if (v14 != 0) {
        *(_BYTE*)(v14 + 1107) = 1;
        LayoutAccessor_1562680(v14 + 88, "Icon_Off", 1.0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        std___1___shared_weak_count___release_weak(v15);
      }
    }
  }
  v16 = a1[139];
  if (v16 != 0) {
    v17 = std___1___shared_weak_count_lock(v16);
    if (v17 != 0) {
      v18 = a1[138];
      v19 = v17;
      if (v18 != 0) {
        *(_BYTE*)(v18 + 1107) = 1;
        LayoutAccessor_1562680(v18 + 88, "Icon_Off", 1.0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
        std___1___shared_weak_count___release_weak(v19);
      }
    }
  }
  ui_LayoutAccessor_SetPaneVisible(a1 + 11, "L_IconEfficacy00", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 11, "L_IconEfficacy01", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 11, "L_IconEfficacy02", 0);
  v25[0] = "State";
  v25[1] = 5;
  result = Element_1886290((__int64)a1, v25);
  if (result != nullptr) {
    *((_BYTE*)result + 88) &= ~1u;
  }
  return result;
}

__int64 StatusClass_189da80(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                            __int64 a5, int a6, char a7)
{
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;

  ui_LayoutAccessor_SetPaneVisible(a2, "Border", 0);
  if ((a7 & 1) != 0) {
    ui_LayoutAccessor_SetPaneVisible(a2, a4, *(unsigned __int8*)(a1 + 1120));
    ui_LayoutAccessor_SetPaneVisible(a2, "GaugeBorder",
                                     (*(_BYTE*)(a1 + 1120) & 1) == 0);
  }
  LayoutAccessor_15730d0(a2, a5);
  v13 = a2[1];
  if (v13 != 0) {
    v14 = std___1___shared_weak_count_lock(v13);
    if (v14 != 0) {
      v15 = v14;
      if (*a2 != 0) {
        ControlCreator_13633c0();
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        std___1___shared_weak_count___release_weak(v15);
      }
    }
  }
  *(_BYTE*)(a1 + 1120) = ui_LayoutAccessor_IsPaneVisible(a2, a4) & 1;
  result = ui_LayoutAccessor_IsPaneVisible(a2, a4);
  if ((a7 & 1) != 0 && (result & 1) != 0) {
    if (a6 != 0) {
      v17 = game_Unit_GetJob(a5);
      if (v17 != 0) {
        v18 = *(_QWORD*)(*(_QWORD*)(v17 + 24) + 1104LL);
        if (v18 != 0) {
          v19 = *(_QWORD*)(*(_QWORD*)(v18 + 24) + 1104LL);
          if (v19 != 0) {
            v20 = *(unsigned __int16*)(v19 + 412);
            if (*(_WORD*)(v19 + 412) != 0) {
              v21 = *(_QWORD*)(a5 + 560);
              v22 = *(unsigned __int16*)(v19 + 16);
              if (v22 >= (*(_QWORD*)(a5 + 568) - v21) >> 1) {
                if (v20 == 0) {
                  goto LABEL_18;
                }
              }
              else if ((*(_WORD*)(v21 + 2 * v22) & 0x3FFu) >= v20) {
                goto LABEL_18;
              }
            }
          }
        }
      }
      v23 = 0;
      return ui_LayoutAccessor_SetPaneVisible(a2, "GaugeBorder", v23);
    }
  LABEL_18:
    ui_LayoutAccessor_SetPaneVisible(a2, a4, 0);
    v23 = 1;
    return ui_LayoutAccessor_SetPaneVisible(a2, "GaugeBorder", v23);
  }
  return result;
}

__int64 StatusClass_189dc40(__int64 result, __int64 a2, int a3, unsigned int a4,
                            char a5, float a6)
{
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  float v15;
  float v16;
  float v17;
  float v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD v23[2];

  if (*(_QWORD*)(result + 1080) == 0) {
    return result;
  }
  v11 = result;
  v23[0] = "Gauge";
  v23[1] = 5;
  result = (__int64)Element_1886290(result, v23);
  if (result == 0) {
    return result;
  }
  if ((*(_BYTE*)(*(_QWORD*)(v11 + 1080) + 88LL) & 1) == 0) {
    return result;
  }
  v13 = result;
  StatusClass_189da80(v11, (_QWORD*)(v11 + 88), v12, result + 176, a2, a4,
                      a5 & 1);
  result = ui_LayoutAccessor_IsPaneVisible(v11 + 88, v13 + 176);
  if ((result & 1) == 0) {
    return result;
  }
  GameRoutine_1560070(&v21, v11 + 88, v13 + 176);
  if ((int)a4 < 1) {
    v16 = 1.0;
    v18 = 1.0;
    result = v22;
    if (v22 == 0) {
      return result;
    }
    goto LABEL_15;
  }
  v14 = a3 & ~(a3 >> 31);
  v15 = (float)a4;
  if (a4 < v14) {
    v14 = a4;
  }
  v16 = (float)v14 / v15;
  v17 = 0.0;
  if (a6 >= 0.0) {
    v17 = a6;
  }
  if (v17 > v15) {
    v17 = (float)a4;
  }
  v18 = v17 / v15;
  result = v22;
  if (v22 != 0) {
  LABEL_15:
    v19 = std___1___shared_weak_count_lock(result);
    if (v19 != 0) {
      v20 = v19;
      if (v21 != 0) {
        GameRoutine_174d800(v16, v18);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        std___1___shared_weak_count___release_weak(v20);
      }
    }
    result = v22;
    if (v22 != 0) {
      return std___1___shared_weak_count___release_weak(v22);
    }
  }
  return result;
}

bool StatusClass_189e180(_QWORD* a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 144LL))(a1) & 1) == 0 ||
      ((*(__int64 (**)(_QWORD*))(*a1 + 32LL))(a1) & 1) == 0) {
    return false;
  }
  v2 = *(_QWORD*)(a1[1] + 24LL);
  while (1) {
    v2 = *(_QWORD*)(v2 + 24);
    if (v2 == 0) {
      break;
    }
    if ((*(_BYTE*)(v2 + 88) & 1) == 0) {
      return false;
    }
  }
  v4 = a1[40];
  if (v4 == 0) {
    return a1[141] != 0;
  }
  v5 = a1[39];
  v6 = a1[40];
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v7 = std___1___shared_weak_count_lock(v6);
  std___1___shared_weak_count___release_weak(v4);
  if (v7 == 0) {
    return a1[141] != 0;
  }
  if (v5 != 0) {
    v8 = ((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 144LL))(v5) & 1) != 0
             ? (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5)
             : 0;
  }
  else {
    v8 = 1;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  return (v8 & 1) != 0 && a1[141] != 0;
}

__int64 StatusClass_189e2a0(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  if (*(_QWORD*)(result + 1128) != 0) {
    v2 = result;
    result = a2[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v4 = *a2;
        v5 = result;
        if (v4 != 0) {
          v6 = *(_QWORD*)(v2 + 1128);
          v7 = game_Unit_GetJob(v6);
          result = GameRoutine_18a6760(v4, v7, v6, 0, 0);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          return std___1___shared_weak_count___release_weak(v5);
        }
      }
    }
  }
  return result;
}

__int64 StatusClass_DeletingDestructor_189e350(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = game_gameui_control_StatusClass_Destroy_StatusClass_ptr;
  *(_QWORD*)(a1 + 72) = GameData_2102bc8;
  *(_QWORD*)(a1 + 1032) = GameData_2102bf0;
  v2 = *(_QWORD*)(a1 + 1112);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = *(_QWORD*)(a1 + 1096);
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = GameData_2132080[0];
  *(_QWORD*)a1 = GameData_2132080[0] + 2;
  *(_QWORD*)(a1 + 72) = v4 + 51;
  *(_QWORD*)(a1 + 1032) = v4 + 56;
  v5 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 1048) & 1) != 0 && *(_QWORD*)(a1 + 1064) != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
  }
  Element_1888840(a1);
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v7);
}

__int64 StatusClass_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char v5;
  __int64 v6;

  *(_QWORD*)(a1 - 72) = game_gameui_control_StatusClass_Destroy_StatusClass_ptr;
  v2 = a1 - 72;
  *(_QWORD*)a1 = GameData_2102bc8;
  *(_QWORD*)(a1 + 960) = GameData_2102bf0;
  v3 = *(_QWORD*)(a1 + 1040);
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = *(_QWORD*)(a1 + 1024);
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  *(_QWORD*)(a1 - 72) = game_gameui_control_HelpableElement_vtable;
  *(_QWORD*)(a1 + 960) = GameData_2104c50;
  v5 = *(_BYTE*)(a1 + 976);
  *(_QWORD*)a1 = GameData_2104c28;
  if ((v5 & 1) != 0 && *(_QWORD*)(a1 + 992) != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
  }
  return Element_1888840(v2);
}

__int64 StatusClass_DeletingDestructor_189e4f0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)(a1 - 72) = game_gameui_control_StatusClass_Destroy_StatusClass_ptr;
  v2 = a1 - 72;
  *(_QWORD*)a1 = GameData_2102bc8;
  *(_QWORD*)(a1 + 960) = GameData_2102bf0;
  v3 = *(_QWORD*)(a1 + 1040);
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = *(_QWORD*)(a1 + 1024);
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = GameData_2132080[0];
  *(_QWORD*)(a1 - 72) = GameData_2132080[0] + 2;
  *(_QWORD*)a1 = v5 + 51;
  *(_QWORD*)(a1 + 960) = v5 + 56;
  v6 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 976) & 1) != 0 && *(_QWORD*)(a1 + 992) != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  Element_1888840(v2);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v8);
}

#pragma GCC visibility pop
