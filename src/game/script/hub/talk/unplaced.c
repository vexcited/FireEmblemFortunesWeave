#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64);
_QWORD* HubTalkNatives_e13380(__int64, unsigned __int8**, _QWORD*, _QWORD*,
                              __int64, __int64, __int64, __int64);
__int64* GameRoutine_d8bae0(__int64**, unsigned __int8*, __int64, __int64**);
__int64 GameRoutine_16477d0(__int64, __int64, __int64, __int64);
__int64 GameRoutine_16497b0(__int64, __int64);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_d859a0(__int64);
__int64 GameRoutine_d8b9c0(__int64, unsigned __int8*);
__int64 HubTalkNatives_e14270(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(__int64, __int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
char* GameRoutine_a4dbe0(__int64, unsigned __int8*, char);
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64 (*GameData_1fe2c00[])();
extern __int64 (*GameData_1fe2c80[])();
extern __int64* GameData_212e348;
extern __int64* as_g_script_manager_ptr;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212dbf0[2];
extern __int64 as_g_thread_info;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern char** msg_MessageManager_empty_text__ptr;
_QWORD* game_script_hub_talk_e12b40(unsigned __int8* a1);

_QWORD* game_script_hub_talk_e12b40(unsigned __int8* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int8* v19;
  char v20;
  unsigned __int8* v21;
  unsigned __int8 v22;
  unsigned __int8* v23;
  unsigned __int8* v24;
  __int64 v25;
  __int64 v26;
  unsigned __int8* v27;
  __int64* v28;
  unsigned __int8* v29;
  unsigned __int8* v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  char* v35;
  char v36;
  unsigned __int8* v37;
  __int64 v38;
  unsigned __int8 v39;
  unsigned __int8* v40;
  unsigned __int8* v41;
  unsigned __int8 v42;
  unsigned __int8* v43;
  __int64 v44;
  __int64 v45;
  _QWORD* v46;
  _QWORD* v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64** v53;
  __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  unsigned __int8* v57;
  bool v58;
  unsigned __int8 v59;
  __int64 v60;
  unsigned __int8 v61;
  __int64 v62;
  unsigned __int64 v63;
  unsigned __int8* v64;
  unsigned __int8* v65;
  __int64 v66;
  __int64* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  __int64 v79;
  char v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  void (*v85)(__int64, __int64);
  _QWORD* result;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  unsigned __int8* v90;
  unsigned __int8* v91;
  struct {
    unsigned __int8* v92[4];
    unsigned __int8** v93;
  } v92_;
  struct {
    _QWORD v94[4];
    _QWORD* v95;
  } v94_;
  struct {
    __int64* v96[4];
    __int64** v97;
  } v96_;
  struct {
    _QWORD v98[2];
    unsigned __int64 v99;
    unsigned __int64 v100;
    __int64** v101;
    __int64 v102;
    __int64 v103;
    __int64 v104;
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
  } v98_;

  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = as_g_script_manager_ptr;
  v3 = *as_g_script_manager_ptr;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v4 != 0) {
    v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v87 = COERCE_AS(__typeof__(v87),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v5 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v5 + 24) + 448LL))(
      *(_QWORD*)(v5 + 24), 1),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = *(_QWORD**)(v5 + 2240);
  *(_QWORD*)(v5 + 2240) = 0;
  if (v6 == (_QWORD*)(v5 + 2208)) {
    v7 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_9;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v6 + v7))((__int64)v6),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_9:
  v8 = *v2;
  v9 = *(
      _QWORD*)(v8 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 472LL))(v9),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v10 + 24) + 456LL))(
           *(_QWORD*)(v10 + 24)) &
       1) == 0) {
    goto LABEL_128;
  }
  *(_BYTE*)(*(_QWORD*)GameData_212dbf0[0] + 128LL) = 0;
  v11 = a1[96];
  if ((v11 & 1) != 0) {
    v12 = *((_QWORD*)a1 + 13);
  }
  else {
    v12 = v11 >> 1;
  }
  if (v12 == 0) {
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v17 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
      do {
        v18 = v17;
        v17 = *(_QWORD*)(v17 + 40);
      } while (v17 != 0);
    }
    else {
      v18 = 0;
    }
    v55 = *a1;
    v56 = *((_QWORD*)a1 + 1);
    v57 = *((unsigned __int8**)a1 + 2);
    v58 = (v55 & 1) == 0;
    v59 = a1[24];
    v60 = *((_QWORD*)a1 + 5);
    v61 = a1[48];
    v62 = *((_QWORD*)a1 + 8);
    v98_.v98[0] = GameData_1fe2c00;
    v96_.v96[0] = (__int64*)GameData_1fe2c80;
    v96_.v97 = v96_.v96;
    v94_.v94[0] = GameData_1fe2c80;
    v94_.v95 = v94_.v94;
    if ((v55 & 1) != 0) {
      v63 = v56;
    }
    else {
      v63 = v55 >> 1;
    }
    if (v58) {
      v64 = a1 + 1;
    }
    else {
      v64 = v57;
    }
    if (v63 != 0) {
      v65 = v64;
    }
    else {
      v65 = nullptr;
    }
    v92_.v92[0] = v65;
    v98_.v101 = (__int64**)v98_.v98;
    v46 = (_QWORD*)game_menu_Dialog__CreateBind_game_menu_Dialog(
        v18, (__int64)v92_.v92),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v87 = COERCE_AS(__typeof__(v87),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v46 != nullptr) {
      if ((v61 & 1) != 0) {
        v66 = v62;
      }
      else {
        v66 = (__int64)(a1 + 49);
      }
      v67 = (__int64*)fw_memory_g_heap_manager_ptr;
      if ((v59 & 1) != 0) {
        v68 = v60;
      }
      else {
        v68 = (__int64)(a1 + 25);
      }
      v69 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 192, 16, 0),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      GameRoutine_16477d0(v69, v68, (__int64)v98_.v98, (__int64)v94_.v94),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      BasicMenuCursor_16e0c00(v46, v69),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v70 = fw_memory_HeapManager_Allocate(*v67, 192, 16, 0),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      GameRoutine_16477d0(v70, v66, (__int64)v96_.v96, (__int64)v94_.v94),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      BasicMenuCursor_16e0c00(v46, v70),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v47 = v94_.v95;
    if (v94_.v95 == v94_.v94) {
      v71 = 32;
      v2 = as_g_script_manager_ptr;
      goto LABEL_100;
    }
    v2 = as_g_script_manager_ptr;
    if (v94_.v95 == nullptr) {
      goto LABEL_101;
    }
  LABEL_97:
    v71 = 40;
  LABEL_100:
    (*(void (**)(_QWORD*, __int64))(*v47 + v71))(v47, v45),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_101;
  }
  v13 = a1[120];
  if ((v13 & 1) != 0) {
    v14 = *((_QWORD*)a1 + 16);
  }
  else {
    v14 = v13 >> 1;
  }
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    v15 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
    do {
      v16 = v15;
      v15 = *(_QWORD*)(v15 + 40);
    } while (v15 != 0);
  }
  else {
    v16 = 0;
  }
  v19 = a1 + 25;
  if (v14 == 0) {
    v36 = *a1;
    v37 = *((unsigned __int8**)a1 + 2);
    v98_.v98[0] = GameData_1fe2c00;
    v38 = *((_QWORD*)a1 + 14);
    v96_.v96[0] = (__int64*)GameData_1fe2c80;
    v94_.v94[0] = GameData_1fe2c80;
    v58 = (v36 & 1) == 0;
    v39 = a1[24];
    v94_.v95 = v94_.v94;
    if (v58) {
      v37 = a1 + 1;
    }
    v40 = *((unsigned __int8**)a1 + 5);
    v92_.v92[0] = v37;
    v41 = *((unsigned __int8**)a1 + 8);
    v58 = (v39 & 1) == 0;
    v42 = a1[48];
    if (!v58) {
      v19 = v40;
    }
    v98_.v101 = (__int64**)v98_.v98;
    if ((v42 & 1) != 0) {
      v43 = v41;
    }
    else {
      v43 = a1 + 49;
    }
    v90 = v43;
    v91 = v19;
    if ((v11 & 1) != 0) {
      v44 = v38;
    }
    else {
      v44 = (__int64)(a1 + 97);
    }
    v96_.v97 = v96_.v96;
    v46 =
        HubTalkNatives_e13380(v16, v92_.v92, &v91, &v90, v44, (__int64)v98_.v98,
                              (__int64)v96_.v96, (__int64)v94_.v94),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v87 = COERCE_AS(__typeof__(v87),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v47 = v94_.v95;
    if (v94_.v95 == v94_.v94) {
      v71 = 32;
      goto LABEL_100;
    }
    if (v94_.v95 == nullptr) {
    LABEL_101:
      if (v96_.v97 == v96_.v96) {
        v72 = 4;
      }
      else {
        if (v96_.v97 == nullptr) {
          goto LABEL_106;
        }
        v72 = 5;
      }
      ((void (*)(__int64**, __int64))(*v96_.v97)[v72])(v96_.v97, v45),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LABEL_106:
      v53 = v98_.v101;
      if (v98_.v101 == v98_.v98) {
        goto LABEL_76;
      }
      goto LABEL_107;
    }
    goto LABEL_97;
  }
  v20 = *a1;
  v21 = *((unsigned __int8**)a1 + 2);
  v96_.v96[0] = (__int64*)GameData_1fe2c00;
  v58 = (v20 & 1) == 0;
  v22 = a1[24];
  v23 = *((unsigned __int8**)a1 + 17);
  v94_.v94[0] = GameData_1fe2c80;
  v92_.v92[0] = (unsigned __int8*)GameData_1fe2c80;
  if (v58) {
    v24 = a1 + 1;
  }
  else {
    v24 = v21;
  }
  if ((v22 & 1) != 0) {
    v25 = *((_QWORD*)a1 + 5);
  }
  else {
    v25 = (__int64)(a1 + 25);
  }
  if ((a1[48] & 1) != 0) {
    v26 = *((_QWORD*)a1 + 8);
  }
  else {
    v26 = (__int64)(a1 + 49);
  }
  v27 = *((unsigned __int8**)a1 + 14);
  v96_.v97 = v96_.v96;
  v94_.v95 = v94_.v94;
  v92_.v93 = v92_.v92;
  if (v24 != nullptr) {
    v28 = msg_MessageManager_instance__ptr[0];
    if ((v13 & 1) != 0) {
      v29 = v23;
    }
    else {
      v29 = a1 + 121;
    }
    v30 = a1 + 97;
    v31 = (__int64*)msg_MessageManager_empty_text__ptr;
    if ((v11 & 1) != 0) {
      v30 = v27;
    }
    if (v30 != nullptr) {
      v32 = (__int64)v30;
    }
    else {
      v32 = (__int64)*msg_MessageManager_empty_text__ptr;
    }
    GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v32),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v29 != nullptr) {
      v33 = (__int64)v29;
    }
    else {
      v33 = *v31;
    }
    GameRoutine_60a020(*v28 + 14728, v33),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v34 = *v28;
    v98_.v102 = -1;
    v98_.v103 = -1;
    v98_.v104 = -1;
    v98_.v105 = -1;
    v98_.v106 = -1;
    v98_.v107 = -1;
    v98_.v108 = -1;
    v98_.v109 = -1;
    v98_.v110 = -1;
    v98_.v111 = -1;
    v98_.v112 = -1;
    v98_.v113 = -1;
    v98_.v98[0] = GameData_212e348 + 2;
    v98_.v98[1] = 0xFFFF0001FFFF0000LL;
    v98_.v99 = 0xFFFF0004FFFF0002LL;
    v98_.v100 = 0xFFFF0006FFFF0005LL;
    v98_.v114 = 8;
    v98_.v101 = (__int64**)0xFFFF0008FFFF0007LL;
    v35 = GameRoutine_a4dbe0(v34, v24, 0),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v87 = COERCE_AS(__typeof__(v87),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v35 = nullptr;
  }
  v98_.v98[0] = v35;
  v46 = (_QWORD*)HubTalkNatives_e14270(v16, (__int64)v98_.v98),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v46 != nullptr) {
    v48 = (__int64*)fw_memory_g_heap_manager_ptr;
    v49 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         192, 16, 0),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v87 = COERCE_AS(__typeof__(v87),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    GameRoutine_16477d0(v49, v25, (__int64)v96_.v96, (__int64)v92_.v92),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    BasicMenuCursor_16e0c00(v46, v49),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v50 = fw_memory_HeapManager_Allocate(*v48, 192, 16, 0),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v87 = COERCE_AS(__typeof__(v87),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    GameRoutine_16477d0(v50, v26, (__int64)v94_.v94, (__int64)v92_.v92),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    BasicMenuCursor_16e0c00(v46, v50),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (v92_.v93 == v92_.v92) {
    v51 = 32;
  }
  else {
    if (v92_.v93 == nullptr) {
      goto LABEL_70;
    }
    v51 = 40;
  }
  (*(void (**)(void)) & (*v92_.v93)[v51])(),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_70:
  if (v94_.v95 == v94_.v94) {
    v52 = 32;
  }
  else {
    if (v94_.v95 == nullptr) {
      goto LABEL_75;
    }
    v52 = 40;
  }
  (*(void (**)(__int64))(*v94_.v95 + v52))((__int64)v94_.v95),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_75:
  v53 = v96_.v97;
  if (v96_.v97 == v96_.v96) {
  LABEL_76:
    v54 = 4;
    goto LABEL_109;
  }
LABEL_107:
  if (v53 != nullptr) {
    v54 = 5;
  LABEL_109:
    ((void (*)(__int64**, __int64))(*v53)[v54])(v53, v45),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (v46 != nullptr) {
    v73 = a1[72];
    v74 = *((_QWORD*)a1 + 10);
    if ((v73 & 1) == 0) {
      v74 = v73 >> 1;
    }
    if (v74 != 0) {
      if ((v73 & 1) != 0) {
        v75 = *((_QWORD*)a1 + 11);
      }
      else {
        v75 = (__int64)(a1 + 73);
      }
      GameRoutine_16497b0((__int64)v46, v75),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v76 = game_hub_ProcHubSeqView_instance_;
    LOBYTE(v98_.v98[0]) = 22;
    strcpy((char*)v98_.v98 + 1, "YesNoDialog");
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      GameRoutine_d8b9c0(game_hub_ProcHubSeqView_instance_ + 424,
                         (unsigned __int8*)v98_.v98),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v77 = *(_QWORD*)(*(_QWORD*)(v76 + 416) + 40LL);
      if (v77 != 0) {
        v78 = 0;
        do {
          v77 = *(_QWORD*)(v77 + 40);
          ++v78;
        } while (v77 != 0);
        v96_.v96[0] = v98_.v98;
        *((_DWORD*)GameRoutine_d8bae0(
              (__int64**)(v76 + 424), (unsigned __int8*)v98_.v98,
              (__int64)std___1_piecewise_construct_ptr, v96_.v96) +
          14) = v78,
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    if ((v98_.v98[0] & 1) != 0 && v98_.v99 != 0) {
      v79 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v79 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v79),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
LABEL_128:
  LOBYTE(v98_.v98[0]) = 22;
  strcpy((char*)v98_.v98 + 1, "YesNoDialog");
  v80 = GameRoutine_d859a0((__int64)v98_.v98),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v81 = *v2;
  v82 = *(
      _QWORD*)(v81 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v82 != 0) {
    v83 = (*(__int64 (**)(__int64))(*(_QWORD*)v82 + 472LL))(v82),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v87 = COERCE_AS(__typeof__(v87),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v83 = 0;
  }
  v84 = *(_QWORD*)(v83 + 24);
  v85 = *(void (**)(__int64, __int64))(*(_QWORD*)v84 + 448LL),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v80 & 1) == 0) {
    v85(v84, 1),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = *(_QWORD**)(v83 + 2240);
    *(_QWORD*)(v83 + 2240) = 0;
    if (result == (_QWORD*)(v83 + 2208)) {
      v88 = 32;
    }
    else {
      if (result == nullptr) {
        goto LABEL_138;
      }
      v88 = 40;
    }
    result = (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v88))(result,
                                                                         v87),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v87 = COERCE_AS(__typeof__(v87),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_138;
  }
  result = (_QWORD*)((__int64 (*)(__int64, _QWORD))v85)(v84, 0),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_138:
  if ((v98_.v98[0] & 1) != 0 && v98_.v99 != 0) {
    v89 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v89 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v89);
  }
  return result;
}

#pragma GCC visibility pop
