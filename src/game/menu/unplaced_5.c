#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* game_UnitPool_Find_6ead60(__int64*, int*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 Alignment_56b600(__int64 result);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameRoutine_1570b30(__int64*, _QWORD*);
__int64 GameRoutine_157d910(char*, _QWORD*, unsigned __int8);
__int64 GameRoutine_8ca200(_QWORD*);
__int64 GameRoutine_9e60d0(unsigned int*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 LayoutAccessor_1563280(__int64*, __int64, char);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Util_157d280(__int64*, int, int, char, char, char);
__int64 Util_157d6f0(__int64*, __int64*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_GetHero(unsigned __int8);
__int64 game_anonymous_RuntimeTalk_GetCondition(__int64);
__int64 game_gameui_1593d90(__int64*, __int64);
__int64 game_gameui_15957c0(__int64*, unsigned int, int, char, char);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, const char*);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* LayoutAccessor_1562060(char* result, __int64, const char*);
char* game_util_Format(const char*, ...);
const char* Pane_58fac0(__int64, const char*);
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* GameData_212fc70[2];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_21f49b8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_Manager_instance_;
extern char GameData_1a9f09e;
extern int GameData_1c108b8[];
unsigned __int64 strlen(const char*);
void* game_97b2f0(__int64);
void GameHr_a51e10(__int64, unsigned int, int, int);
void GameRoutine_156c5d0(__int64, __int64, char);
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) String_60a1d0();
void game_templates_156e100(__int64*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_menu_16e4480(__int64* a1, __int64* a2, __int64* a3, __int64 a4);
__int64 game_menu_16ee6a0(__int64 a1);
__int64 game_menu_179fd30(__int64 a1);
__int64 game_menu_1850ee0(__int64* a1, __int64* a2, __int64 a3, char a4,
                          char a5, char a6);

__int64 game_menu_16e4480(__int64* a1, __int64* a2, __int64* a3, __int64 a4)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v5 = *a2;
  v6 = *a1;
  v7 = *(_QWORD*)(a4 + 32);
  v23 = v6;
  v24 = v5;
  if (v7 == 0) {
    goto LABEL_16;
  }
  v11 = (*(__int64 (**)(__int64, __int64*, __int64*))(*(_QWORD*)v7 + 48LL))(
      v7, &v24, &v23);
  v12 = *a3;
  if ((v11 & 1) != 0) {
    v13 = *(_QWORD*)(a4 + 32);
    v23 = *a2;
    v24 = v12;
    if (v13 != 0) {
      result = (*(__int64 (**)(__int64, __int64*, __int64*))(
          *(_QWORD*)v13 + 48LL))(v13, &v24, &v23);
      v15 = *a1;
      if ((result & 1) != 0) {
        *a1 = *a3;
      LABEL_14:
        *a3 = v15;
        return result;
      }
      *a1 = *a2;
      *a2 = v15;
      v21 = *a3;
      v22 = *(_QWORD*)(a4 + 32);
      v23 = v15;
      v24 = v21;
      if (v22 != 0) {
        result = (*(__int64 (**)(__int64, __int64*, __int64*))(
            *(_QWORD*)v22 + 48LL))(v22, &v24, &v23);
        if ((result & 1) == 0) {
          return result;
        }
        v15 = *a2;
        *a2 = *a3;
        goto LABEL_14;
      }
    }
  LABEL_16:
    GameRoutine_60a310();
  }
  v16 = *(_QWORD*)(a4 + 32);
  v23 = *a2;
  v24 = v12;
  if (v16 == 0) {
    goto LABEL_16;
  }
  result = (*(__int64 (**)(__int64, __int64*, __int64*))(*(_QWORD*)v16 + 48LL))(
      v16, &v24, &v23);
  if ((result & 1) == 0) {
    return result;
  }
  v17 = *a2;
  *a2 = *a3;
  *a3 = v17;
  v18 = *a2;
  v19 = *(_QWORD*)(a4 + 32);
  v23 = *a1;
  v24 = v18;
  if (v19 == 0) {
    goto LABEL_16;
  }
  result = (*(__int64 (**)(__int64, __int64*, __int64*))(*(_QWORD*)v19 + 48LL))(
      v19, &v24, &v23);
  if ((result & 1) != 0) {
    v20 = *a1;
    *a1 = *a2;
    *a2 = v20;
  }
  return result;
}

__int64 game_menu_16ee6a0(__int64 a1)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  char* v11;
  unsigned __int8* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned int v15;
  char* v16;
  char* v17;
  char* v18;
  __int64 v19;
  const char* v20;
  __int64 v21;
  char* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  char* v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  char* v31;
  char* v32;
  char* v33;
  __int64 v34;
  char v35;
  const char* v36;
  const char* v37;
  const char* v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  __int64* v42;
  char* v43;
  int v44;
  __int64 v45;
  __int64* v46;
  __int64 v47;
  char* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned int v52;
  int v53;
  int v54;
  char v55;
  char v56;
  __int64 v57;
  __int64 v58;
  int v59;
  int v60;
  char v61;
  __int64 v62;
  __int64 v63;
  int v64;
  int v65;
  char v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  const char* v73;
  float v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64* v78;
  __int64 v79;
  __int64 v80;
  _BYTE* v81;
  const char* v82;
  __int64* v83;
  __int64* v84;
  char* v85;
  __int64* v86;
  __int64* v87;
  __int64* v88;
  char* v89;
  __int64* v90;
  __int64* v91;
  __int64 result;
  struct {
    __int64* v93;
    __int64 v94;
  } v93_;
  struct {
    __int64* v95;
    __int64 v96;
  } v95_;
  struct {
    __int64* v97;
    __int64 v98;
  } v97_;
  struct {
    __int64 v99;
    unsigned __int64 v100;
    char* v101;
    unsigned __int64 v102;
    int v103;
    int v104;
    __int64 v105;
    __int64 v106;
    __int64 v107;
    __int64 v108;
    __int64 v109;
    __int64 v110;
    __int64 v111;
    __int64 v112;
    __int64 v113;
    __int64 v114;
    __int64 v115;
    __int64 v116;
    __int64 v117;
  } v99_;

  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)a1, (__int64)"N_Help", 1);
  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)a1, (__int64)"T_Message", 0);
  v2 = *(unsigned __int8*)(a1 + 8);
  if ((v2 & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 16);
  }
  else {
    v3 = v2 >> 1;
  }
  if (v3 != 0) {
    ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)a1, (__int64)"T_Message", 1);
    v4 = (*(_BYTE*)(a1 + 8) & 1) != 0 ? *(_QWORD*)(a1 + 24) : a1 + 9;
    if (v4 != 0) {
      v5 = ui_LayoutAccessor_FindTextBox(*(__int64**)a1, (__int64)"T_Message");
      if (v5 != 0) {
        GameRoutine_156c5d0(v5, v4, 0);
      }
    }
  }
  v6 = game_util_Format("N_Annotation%02d", 0);
  v7 = strlen(v6);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_148:
    String_60a1d0();
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v10, 16, 0);
    v99_.v100 = v8;
    v99_.v101 = v9;
    v99_.v99 = v10 | 1;
  }
  else {
    v9 = (char*)&v99_.v99 + 1;
    LOBYTE(v99_.v99) = 2 * v7;
    if (v7 == 0) {
      goto LABEL_20;
    }
  }
  memmove((__int64)v9, (__int64)v6, v8);
LABEL_20:
  v9[v8] = 0;
  if ((v99_.v99 & 1) != 0) {
    v11 = v99_.v101;
  }
  else {
    v11 = (char*)&v99_.v99 + 1;
  }
  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)a1, (__int64)v11, 0);
  v12 = *(unsigned __int8**)(a1 + 56);
  if (*(unsigned __int8**)(a1 + 64) == v12) {
    goto LABEL_35;
  }
  v13 = *v12;
  v14 = *((_QWORD*)v12 + 1);
  if ((v13 & 1) == 0) {
    v14 = v13 >> 1;
  }
  if (v14 == 0) {
  LABEL_35:
    v15 = 0;
    if ((v99_.v99 & 1) == 0) {
      goto LABEL_40;
    }
  }
  else {
    v15 = 1;
    if ((v99_.v99 & 1) != 0) {
      v16 = v99_.v101;
    }
    else {
      v16 = (char*)&v99_.v99 + 1;
    }
    ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)a1, (__int64)v16, 1);
    v17 = *(char**)a1;
    v18 = game_util_Format("T_Annotation%02d", 0);
    v19 = *(_QWORD*)(a1 + 56);
    if ((*(_BYTE*)v19 & 1) != 0) {
      v20 = *(const char**)(v19 + 16);
    }
    else {
      v20 = (const char*)(v19 + 1);
    }
    LayoutAccessor_1562060(v17, (__int64)v18, v20);
    if ((v99_.v99 & 1) == 0) {
      goto LABEL_40;
    }
  }
  if (v99_.v101 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v21,
                                  (__int64)v99_.v101);
  }
LABEL_40:
  v22 = game_util_Format("N_Annotation%02d", 1);
  v23 = strlen(v22);
  if (v23 > 0xFFFFFFFFFFFFFFF6LL) {
    goto LABEL_148;
  }
  v24 = v23;
  if (v23 >= 0x17) {
    if ((v23 | 7) == 0x17) {
      v26 = 26;
    }
    else {
      v26 = (v23 | 7) + 1;
    }
    v25 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v26, 16, 0);
    v99_.v100 = v24;
    v99_.v101 = v25;
    v99_.v99 = v26 | 1;
    goto LABEL_48;
  }
  v25 = (char*)&v99_.v99 + 1;
  LOBYTE(v99_.v99) = 2 * v23;
  if (v23 != 0) {
  LABEL_48:
    memmove((__int64)v25, (__int64)v22, v24);
  }
  v25[v24] = 0;
  if ((v99_.v99 & 1) != 0) {
    v27 = v99_.v101;
  }
  else {
    v27 = (char*)&v99_.v99 + 1;
  }
  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)a1, (__int64)v27, 0);
  v28 = *(_QWORD*)(a1 + 56);
  if (0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(a1 + 64) - v28) >> 3) >= 2) {
    v29 = *(unsigned __int8*)(v28 + 24);
    v30 = *(_QWORD*)(v28 + 32);
    if ((v29 & 1) == 0) {
      v30 = v29 >> 1;
    }
    if (v30 != 0) {
      if ((v99_.v99 & 1) != 0) {
        v31 = v99_.v101;
      }
      else {
        v31 = (char*)&v99_.v99 + 1;
      }
      ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)a1, (__int64)v31, 1);
      v32 = *(char**)a1;
      v33 = game_util_Format("T_Annotation%02d", 1);
      v34 = *(_QWORD*)(a1 + 56);
      v35 = *(_BYTE*)(v34 + 24);
      v36 = *(const char**)(v34 + 40);
      v37 = (const char*)(v34 + 25);
      if ((v35 & 1) != 0) {
        v38 = v36;
      }
      else {
        v38 = v37;
      }
      LayoutAccessor_1562060(v32, (__int64)v33, v38);
      ++v15;
    }
  }
  if ((v99_.v99 & 1) != 0 && v99_.v101 != nullptr) {
    v39 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v39 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v39,
                                  (__int64)v99_.v101);
  }
  if (*(int*)(a1 + 152) >= 1 && v15 <= 1) {
    v40 = *(_QWORD*)a1;
    v41 = game_util_Format("N_Annotation%02d", v15);
    ui_LayoutAccessor_SetPaneVisible(v40, (__int64)v41, 1);
    v42 = *(__int64**)a1;
    v43 = game_util_Format("T_Annotation%02d", v15);
    v44 = *(_DWORD*)(a1 + 152);
    v45 = (__int64)v43;
    v46 = msg_MessageManager_instance__ptr[0];
    GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0,
                  *(_DWORD*)(a1 + 148), 0);
    GameHr_a51e10(*v46 + 14704, 1u, v44, 0);
    v47 = *v46;
    v99_.v105 = -1;
    v99_.v106 = -1;
    v99_.v107 = -1;
    v99_.v108 = -1;
    v99_.v109 = -1;
    v99_.v110 = -1;
    v99_.v111 = -1;
    v99_.v112 = -1;
    v99_.v113 = -1;
    v99_.v114 = -1;
    v99_.v115 = -1;
    v99_.v116 = -1;
    v99_.v99 = (__int64)(GameData_212e348 + 2);
    v99_.v100 = 0xFFFF0001FFFF0000LL;
    v99_.v101 = (char*)0xFFFF0004FFFF0002LL;
    v99_.v102 = 0xFFFF0006FFFF0005LL;
    v99_.v117 = 8;
    v99_.v103 = -65529;
    v99_.v104 = -65528;
    v48 = GameRoutine_a4dbe0(v47, "MID_Menu_Cause_ShortagePersonArg", 0);
    if (v48 != nullptr) {
      v49 = (__int64)v48;
      v50 = ui_LayoutAccessor_FindTextBox(v42, v45);
      if (v50 != 0) {
        GameRoutine_156c5d0(v50, v49, 0);
      }
    }
  }
  v51 = ui_LayoutAccessor_FindAlignment(*(__int64**)a1, "A_Help");
  if (v51 != 0) {
    Alignment_56b600(v51);
  }
  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)a1, (__int64)"L_CostTime", 0);
  if ((*(_DWORD*)(a1 + 84) & 0x80000000) != 0) {
    v52 = 0;
  }
  else {
    v52 = 1;
    ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)a1, (__int64)"L_CostTime", 1);
    LayoutAccessor_1560070((void*)(&v97_.v97), *(__int64**)a1, "L_CostTime");
    if (v97_.v98 != 0) {
      v53 = *(_DWORD*)(a1 + 80);
      v54 = *(_DWORD*)(a1 + 84);
      v55 = *(_BYTE*)(a1 + 88);
      v56 = *(_BYTE*)(a1 + 89);
      v57 = std___1___shared_weak_count_lock(v97_.v98);
      if (v57 != 0) {
        v58 = v57;
        if (v97_.v97 != nullptr) {
          Util_157d280(v97_.v97, v53, v54, v55, v56, 1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
          std___1___shared_weak_count___release_weak(v58);
        }
      }
      if (v97_.v98 != 0) {
        std___1___shared_weak_count___release_weak(v97_.v98);
      }
      v52 = 1;
    }
  }
  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)a1, (__int64)"L_CostGold", 0);
  if ((*(_DWORD*)(a1 + 96) & 0x80000000) == 0) {
    ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)a1, (__int64)"L_CostGold", 1);
    LayoutAccessor_1560070((void*)(&v95_.v95), *(__int64**)a1, "L_CostGold");
    if (v95_.v96 != 0) {
      v59 = *(_DWORD*)(a1 + 92);
      v60 = *(_DWORD*)(a1 + 96);
      v61 = *(_BYTE*)(a1 + 100);
      v62 = std___1___shared_weak_count_lock(v95_.v96);
      if (v62 != 0) {
        v63 = v62;
        if (v95_.v95 != nullptr) {
          Util_157d280(v95_.v95, v59, v60, v61, 0, 1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63);
          std___1___shared_weak_count___release_weak(v63);
        }
      }
      if (v95_.v96 != 0) {
        std___1___shared_weak_count___release_weak(v95_.v96);
      }
    }
    ++v52;
  }
  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)a1, (__int64)"L_CostMotivation",
                                   0);
  if ((*(_DWORD*)(a1 + 108) & 0x80000000) != 0) {
    ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)a1, (__int64)"N_Resource",
                                     v52 != 0);
    if (v52 == 0) {
      goto LABEL_115;
    }
  }
  else {
    ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)a1, (__int64)"L_CostMotivation",
                                     1);
    LayoutAccessor_1560070((void*)(&v93_.v93), *(__int64**)a1,
                           "L_CostMotivation");
    if (v93_.v94 != 0) {
      v64 = *(_DWORD*)(a1 + 104);
      v65 = *(_DWORD*)(a1 + 108);
      v66 = *(_BYTE*)(a1 + 112);
      v67 = std___1___shared_weak_count_lock(v93_.v94);
      if (v67 != 0) {
        v68 = v67;
        if (v93_.v93 != nullptr) {
          Util_157d280(v93_.v93, v64, v65, v66, 0, 1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v68 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v68 + 16LL))(v68);
          std___1___shared_weak_count___release_weak(v68);
        }
      }
      if (v93_.v94 != 0) {
        std___1___shared_weak_count___release_weak(v93_.v94);
      }
    }
    ++v52;
    ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)a1, (__int64)"N_Resource", 1);
  }
  v69 = ui_LayoutAccessor_FindAlignment(*(__int64**)a1, "A_Cost");
  if (v69 != 0) {
    Alignment_56b600(v69);
  }
  v70 = ui_LayoutAccessor_FindPane(*(__int64**)a1, (__int64)"ResourceBg");
  if (v70 != 0) {
    v71 = __dynamic_cast(v70, GameData_212d670[0], GameData_212fc70[0], 0);
    if (v71 != 0) {
      v72 = v71;
      v73 = Pane_58fac0(v71, "Margin_Bottom");
      if (v73 != nullptr) {
        v74 = (float)*(int*)&v73[*((unsigned int*)v73 + 1)];
      }
      else {
        v74 = 0x0.0p+0f;
      }
      *(_BYTE*)(v72 + 88) |= 0x10u;
      *(float*)(v72 + 84) =
          (float)((float)((float)v52 * 0x1.6000000000000p+5f) +
                  0x1.2000000000000p+5f) +
          v74;
    }
  }
LABEL_115:
  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)a1, (__int64)"N_Thumb", 0);
  if (*(_BYTE*)(a1 + 144) == 1) {
    ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)a1, (__int64)"N_Thumb", 1);
    goto LABEL_139;
  }
  v75 = *(unsigned __int8*)(a1 + 32);
  if ((v75 & 1) != 0) {
    v76 = *(_QWORD*)(a1 + 40);
  }
  else {
    v76 = v75 >> 1;
  }
  if (v76 != 0) {
    LayoutAccessor_1560070((void*)(&v99_.v99), *(__int64**)a1, "L_Thumb");
    if (v99_.v100 != 0) {
      v77 = std___1___shared_weak_count_lock(v99_.v100);
      v78 = (__int64*)v99_.v99;
      if (v99_.v100 != 0) {
        std___1___shared_weak_count___release_weak(v99_.v100);
      }
      if (v77 != 0 && v78 != nullptr) {
        ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)a1, (__int64)"N_Thumb", 1);
        LayoutAccessor_1562cf0(*(_QWORD*)a1, "Thumb1");
        v79 = ui_LayoutAccessor_FindPane(v78, (__int64)"Thumb");
        if (v79 != 0) {
          v80 =
              __dynamic_cast(v79, GameData_212d670[0], GameData_212d678[0], 0);
          if (v80 != 0) {
            if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
              v81 = *(_BYTE**)(a1 + 48);
            }
            else {
              v81 = (_BYTE*)(a1 + 33);
            }
            Manager_136a920(ui_Manager_instance_ + 1264, v80, 0, 0xDu, v81);
          }
        }
        if (*(_BYTE*)(a1 + 166) != 0) {
          v82 = "Disable";
        }
        else {
          v82 = "Default";
        }
        LayoutAccessor_1562cf0((__int64)v78, v82);
      }
      else if (v77 == 0) {
        goto LABEL_139;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v77 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v77 + 16LL))(v77);
        std___1___shared_weak_count___release_weak(v77);
      }
    }
  }
LABEL_139:
  v83 = LayoutAccessor_155fbe0(*(__int64**)a1, "L_ReceptionTime");
  game_gameui_15957c0(v83, *(_DWORD*)(a1 + 156), *(_DWORD*)(a1 + 160),
                      *(_BYTE*)(a1 + 165), *(_BYTE*)(a1 + 164));
  game_templates_156e100((__int64*)(a1 + 120));
  v84 = *(__int64**)a1;
  v85 = game_util_Format("L_KeyHelp_%02d", 0);
  v86 = LayoutAccessor_155fbe0(v84, v85);
  if (*(_QWORD*)(a1 + 128) == *(_QWORD*)(a1 + 120)) {
    LayoutAccessor_155e830((__int64)v86, 0);
  }
  else {
    v87 = v86;
    LayoutAccessor_155e830((__int64)v86, 1);
    game_gameui_1593d90(v87, *(_QWORD*)(a1 + 120));
  }
  v88 = *(__int64**)a1;
  v89 = game_util_Format("L_KeyHelp_%02d", 1);
  v90 = LayoutAccessor_155fbe0(v88, v89);
  if (0xCCCCCCCCCCCCCCCDLL *
          ((__int64)(*(_QWORD*)(a1 + 128) - *(_QWORD*)(a1 + 120)) >> 3) <=
      1) {
    LayoutAccessor_155e830((__int64)v90, 0);
  }
  else {
    v91 = v90;
    LayoutAccessor_155e830((__int64)v90, 1);
    game_gameui_1593d90(v91, *(_QWORD*)(a1 + 120) + 40LL);
  }
  result = ui_LayoutAccessor_FindAlignment(*(__int64**)a1, "A_KeyHelp");
  if (result != 0) {
    return Alignment_56b600(result);
  }
  return result;
}

__int64 game_menu_179fd30(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = *(unsigned __int8*)(a1 + 192);
  v3 = *(_QWORD*)(a1 + 24);
  if (v2 == 1) {
    if (v3 != 0 && (v4 = std___1___shared_weak_count_lock(v3)) != 0) {
      v5 = v4;
      result =
          LayoutAccessor_1563280(*(__int64**)(a1 + 16), (__int64)"Select", 0);
      v7 = result;
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if ((result & 1) != 0) {
          return result;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        result = std___1___shared_weak_count___release_weak(v5);
        if ((v7 & 1) != 0) {
          return result;
        }
      }
    }
    else {
      result = LayoutAccessor_1563280(nullptr, (__int64)"Select", 0);
      if ((result & 1) != 0) {
        return result;
      }
    }
    v10 = *(_QWORD*)(a1 + 24);
    if (v10 == 0) {
      return GameHr_1562680(0, "Select", 0x1.0000000000000p+0f);
    }
    v11 = std___1___shared_weak_count_lock(v10);
    if (v11 == 0) {
      return GameHr_1562680(0, "Select", 0x1.0000000000000p+0f);
    }
    v9 = v11;
    result =
        GameHr_1562680(*(_QWORD*)(a1 + 16), "Select", 0x1.0000000000000p+0f);
  }
  else {
    if (v3 == 0) {
      return LayoutAccessor_1562cf0(0, "Default");
    }
    v8 = std___1___shared_weak_count_lock(v3);
    if (v8 == 0) {
      return LayoutAccessor_1562cf0(0, "Default");
    }
    v9 = v8;
    result = LayoutAccessor_1562cf0(*(_QWORD*)(a1 + 16), "Default");
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    return std___1___shared_weak_count___release_weak(v9);
  }
  return result;
}

__int64 game_menu_1850ee0(__int64* a1, __int64* a2, __int64 a3, char a4,
                          char a5, char a6)
{
  _BOOL4 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 i;
  __int64 v17;
  __int64 (**v18)();
  _QWORD* v19;
  __int64* v20;
  __int64 v21;
  _BYTE* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  const char* v29;
  const char* v30;
  __int64 v31;
  const char* v32;
  __int64* v33;
  __int64 v34;
  char v35;
  __int64 v36;
  char* v37;
  const char* v39;
  __int64 v40;
  char* v41;
  const char* v43;
  __int64 v44;
  char* v45;
  const char* v47;
  __int64 result;
  int v49;
  unsigned int v50;
  __int64 v51;
  const char* v52;
  __int64 v54;
  __int64 v55;
  int v56;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  int v64;
  struct {
    __int64 (**v65)();
    __int64 v66;
    unsigned __int64 v67;
    unsigned __int64 v68;
    int v69;
    int v70;
    __int64 v71;
    __int64 v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
    __int64 v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
  } v65_;

  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v12 = a4 != 0;
  GameRoutine_1570b30(a1, (_QWORD*)a3),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v13 = *(_QWORD*)(a3 + 8);
  if (v13 == 0) {
    goto LABEL_19;
  }
  v14 = game_GetHero(9u),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v14 == 0 || *(_QWORD*)(*(_QWORD*)(v13 + 24) + 1672LL) !=
                      *(_QWORD*)(*(_QWORD*)(v14 + 24) + 1672LL)) {
    goto LABEL_19;
  }
  v15 = game_GetHero(9u),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v15 == 0) {
    goto LABEL_14;
  }
  for (i = v15; i != 0; i = *(_QWORD*)(i + 624)) {
    v17 = i;
  }
  if (*(_BYTE*)(v17 + 441) != 3) {
    goto LABEL_14;
  }
  v18 = *(__int64 (***)(void))(v15 + 624),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v18 == nullptr) {
    v18 = (__int64 (**)(void))v15,
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  v65_.v65 = v18;
  v64 = 241;
  v19 = game_UnitPool_Find_6ead60((__int64*)&v65_.v65, &v64),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v19 == nullptr) {
    v21 = *(_QWORD*)(game_GameModeData_instance_ + 176);
    if (*(_BYTE*)(v21 + 144) != 0) {
      v20 = (__int64*)(v21 + 112);
      goto LABEL_15;
    }
  LABEL_14:
    v20 = &GameData_21f49b8;
    goto LABEL_15;
  }
  v20 = v19 + 263;
LABEL_15:
  v22 = game_97b2f0((__int64)v20),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v22 != nullptr) {
    v23 = (__int64)v22;
    if (*v22 != 0) {
      v24 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Txt"),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (v24 != 0) {
        GameRoutine_156c5d0(v24, v23, 0),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
    }
  }
LABEL_19:
  if (a4 == 2) {
    v65_.v71 = -1;
    v65_.v72 = -1;
    v65_.v73 = -1;
    v65_.v74 = -1;
    v25 = *msg_MessageManager_instance__ptr[0];
    v65_.v75 = -1;
    v65_.v76 = -1;
    v65_.v77 = -1;
    v65_.v78 = -1;
    v65_.v79 = -1;
    v65_.v80 = -1;
    v65_.v81 = -1;
    v65_.v65 = msg_TagSelector_vtable;
    v65_.v66 = 0xFFFF0001FFFF0000LL;
    v65_.v67 = 0xFFFF0004FFFF0002LL;
    v65_.v68 = 0xFFFF0006FFFF0005LL;
    v65_.v82 = -1;
    v65_.v83 = 8;
    v65_.v69 = -65529;
    v65_.v70 = -65528;
    v26 = GameRoutine_a4dbe0(v25, "MID_Sys_Unknown", 0),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v26 != nullptr) {
      v27 = (__int64)v26;
      v28 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Txt"),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (v28 != 0) {
        GameRoutine_156c5d0(v28, v27, 0),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
    }
    v29 = "Face_Unknown";
  }
  else {
    v30 = "Face_Disable";
    if ((a5 & 1) != 0) {
      v30 = "Face_Default";
    }
    if (a4 != 0) {
      v29 = "Face_Unknown";
    }
    else {
      v29 = v30;
    }
  }
  LayoutAccessor_1562cf0((__int64)a1, v29),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v31 = ui_LayoutAccessor_FindPane(a1, (__int64)"IconReliance"),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v31 != 0) {
    *(_BYTE*)(v31 + 88) = *(_BYTE*)(v31 + 88) & 0xFE | *(_BYTE*)(a3 + 20);
  }
  if ((a6 & 1) != 0) {
    v32 = "RelianceTalk_New";
  }
  else {
    v32 = "RelianceTalk_Old";
  }
  LayoutAccessor_1562cf0((__int64)a1, v32),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (a4 == 0) {
    v33 = LayoutAccessor_155fbe0(a1, "L_Level"),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    Util_157d6f0(v33, a2),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  v34 = ui_LayoutAccessor_FindPane(a1, (__int64)"L_Level"),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v34 != 0) {
    v35 = *(_BYTE*)(v34 + 88) & 0xFE;
    if (a4 == 0) {
      ++v35;
    }
    *(_BYTE*)(v34 + 88) = v35;
  }
  LayoutAccessor_1560070((void*)(&v65_.v65), a1, "L_RankC"),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v65_.v66 != 0) {
    v36 = std___1___shared_weak_count_lock(v65_.v66),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v37 = (char*)v65_.v65;
    if (v65_.v66 != 0) {
      std___1___shared_weak_count___release_weak(v65_.v66),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    if (v36 == 0 || v37 == nullptr) {
      if (v36 == 0) {
        goto LABEL_52;
      }
      goto LABEL_50;
    }
    GameRoutine_157d910(v37, a2, 1u),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (a4 != 0) {
      GameHr_1562680((__int64)v37, "None", 0x1.0000000000000p+0f),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    else if (*a2 != 0 && a2[1] != 0) {
      v58 = a2[3];
      if (v58 != 0 &&
          (game_GameModeData_instance_ == 0 ||
           (v59 = game_GameVariableTable_Find(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)(*(_QWORD*)(v58 + 24) + 40LL))) == 0 ||
           *(_DWORD*)(v59 + 32) == 0) &&
          (unsigned __int16)game_anonymous_RuntimeTalk_GetCondition(v58) == 0 &&
          (GameRoutine_9e60d0(*(unsigned int**)(v58 + 24)) & 1) == 0) {
        v39 = "State_On";
        goto LABEL_48;
      }
    }
    v39 = "State_Off";
  LABEL_48:
    LayoutAccessor_1562cf0((__int64)v37, v39),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  LABEL_50:
    if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      std___1___shared_weak_count___release_weak(v36),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
  }
LABEL_52:
  LayoutAccessor_1560070((void*)(&v65_.v65), a1, "L_RankB"),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v65_.v66 == 0) {
    goto LABEL_64;
  }
  v40 = std___1___shared_weak_count_lock(v65_.v66),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v41 = (char*)v65_.v65;
  if (v65_.v66 != 0) {
    std___1___shared_weak_count___release_weak(v65_.v66),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  if (v40 == 0 || v41 == nullptr) {
    if (v40 == 0) {
      goto LABEL_64;
    }
    goto LABEL_62;
  }
  GameRoutine_157d910(v41, a2, 2u),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (a4 != 0) {
    GameHr_1562680((__int64)v41, "None", 0x1.0000000000000p+0f),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  else if (*a2 != 0 && a2[1] != 0) {
    v60 = a2[4];
    if (v60 != 0 &&
        (game_GameModeData_instance_ == 0 ||
         (v61 = game_GameVariableTable_Find(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)(*(_QWORD*)(v60 + 24) + 40LL))) == 0 ||
         *(_DWORD*)(v61 + 32) == 0) &&
        (unsigned __int16)game_anonymous_RuntimeTalk_GetCondition(v60) == 0 &&
        (GameRoutine_9e60d0(*(unsigned int**)(v60 + 24)) & 1) == 0) {
      v43 = "State_On";
      goto LABEL_60;
    }
  }
  v43 = "State_Off";
LABEL_60:
  LayoutAccessor_1562cf0((__int64)v41, v43),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
LABEL_62:
  if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    std___1___shared_weak_count___release_weak(v40),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
LABEL_64:
  LayoutAccessor_1560070((void*)(&v65_.v65), a1, "L_RankA"),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v65_.v66 == 0) {
    goto LABEL_76;
  }
  v44 = std___1___shared_weak_count_lock(v65_.v66),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v45 = (char*)v65_.v65;
  if (v65_.v66 != 0) {
    std___1___shared_weak_count___release_weak(v65_.v66),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  if (v44 == 0 || v45 == nullptr) {
    if (v44 == 0) {
      goto LABEL_76;
    }
    goto LABEL_74;
  }
  GameRoutine_157d910(v45, a2, 3u),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (a4 != 0) {
    GameHr_1562680((__int64)v45, "None", 0x1.0000000000000p+0f),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  else if (*a2 != 0 && a2[1] != 0) {
    v62 = a2[5];
    if (v62 != 0 &&
        (game_GameModeData_instance_ == 0 ||
         (v63 = game_GameVariableTable_Find(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)(*(_QWORD*)(v62 + 24) + 40LL))) == 0 ||
         *(_DWORD*)(v63 + 32) == 0) &&
        (unsigned __int16)game_anonymous_RuntimeTalk_GetCondition(v62) == 0 &&
        (GameRoutine_9e60d0(*(unsigned int**)(v62 + 24)) & 1) == 0) {
      v47 = "State_On";
      goto LABEL_72;
    }
  }
  v47 = "State_Off";
LABEL_72:
  LayoutAccessor_1562cf0((__int64)v45, v47),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
LABEL_74:
  if (atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    std___1___shared_weak_count___release_weak(v44),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
LABEL_76:
  result = GameRoutine_8ca200(a2),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (result != 0) {
    v49 = *(unsigned __int8*)(result + 64);
    if (v49 != 4) {
      v50 = v49 - 1;
      v51 = result;
      v52 = v50 > 2 ? &GameData_1a9f09e
                    : (char*)GameData_1c108b8 +
                          GameData_1c108b8[(unsigned __int8)v50];
      LayoutAccessor_1560070((void*)(&v65_.v65), a1, v52),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      result = v65_.v66;
      if (v65_.v66 != 0) {
        v54 = std___1___shared_weak_count_lock(v65_.v66),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v55 = (__int64)v65_.v65;
        result = v65_.v66;
        if (v65_.v66 != 0) {
          result = std___1___shared_weak_count___release_weak(v65_.v66),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
        if (v54 == 0 || v55 == 0) {
          if (v54 == 0) {
            return result;
          }
          goto LABEL_121;
        }
        v56 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          result = game_GameVariableTable_Find(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)(*(_QWORD*)(v51 + 24) + 40LL)),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          if (result == 0) {
            if (!v12) {
              goto LABEL_90;
            }
            goto LABEL_121;
          }
          v56 = *(_DWORD*)(result + 32) != 0;
        }
        if (((v56 | v12) & 1) == 0) {
        LABEL_90:
          result = game_anonymous_RuntimeTalk_GetCondition(v51),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          if ((_WORD)result != 0) {
            result = game_anonymous_RuntimeTalk_GetCondition(v51),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            if ((result & 0xFFFFFFFB) != 0) {
              result = LayoutAccessor_1562cf0(v55, "State_Lock"),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            }
          }
        }
      LABEL_121:
        if (atomic_fetch_add((atomic_ullong* volatile)(v54 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          return std___1___shared_weak_count___release_weak(v54);
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
