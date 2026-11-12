#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void game_eb5940(PSEUDO_X8);
__int64* GameHr_eb8a90(__int64*, __int64, int);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameHr_eba740(__int64*, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern __int64* as_g_script_manager_ptr;
extern __int64* util_g_handle_slots_ptr[2];
extern __int64 as_g_thread_info;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern char GameData_1a9f09e;
unsigned __int64 strlen(const char*);
void CmdbtlPartyNatives_eb8c40(__int64);
void GameHr_eb7780(__int64, int, __int64);
void GameRoutine_7a8220(__int64*, _QWORD*);
void HubEventNatives_d63b00(__int64, unsigned __int8*, __int64**);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_64aa00();
void __attribute__((noreturn)) GameRoutine_6e5c60();
void __attribute__((noreturn)) GameRoutine_705570();
void __attribute__((noreturn)) GameRoutine_ebabb0();
void __attribute__((noreturn)) String_60a1d0();
void game_hub_Character_SetPopupAmes(_QWORD*, __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_script_cd5a00(__int64 a1, unsigned __int8* a2, unsigned __int8* a3,
                        __int64 a4, char* a5);
void game_script_d64120(__int64 a1, unsigned __int8* a2, __int64 a3,
                        __int64 a4);
void game_script_eb7e60(__int64 a1, __int64 a2, int a3);

void game_script_cd5a00(__int64 a1, unsigned __int8* a2, unsigned __int8* a3,
                        __int64 a4, char* a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  bool v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  const char* v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  char* v31;
  __int64 v32;
  __int64* v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64* v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  char v47;
  const char* v48;
  const char* v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  char* v52;
  __int64 v53;
  __int64* v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64* v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64* v71;
  __int64* v72;
  __int64 v73;
  char v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  struct {
    __int64 v80;
    unsigned __int64 v81;
    char* v82;
  } v80_;
  struct {
    _QWORD v83[2];
    __int64 v84;
    int v85;
  } v83_;
  struct {
    _QWORD v86[2];
    __int64 v87;
    __int64 v88;
    __int64* v89;
    unsigned __int64 v90;
  } v86_;

  v10 = *as_g_script_manager_ptr;
  v11 = *(
      _QWORD*)(v10 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v11 != 0) {
    v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 472LL))(v11);
  }
  else {
    v12 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v12 + 24) + 448LL))(
      *(_QWORD*)(v12 + 24), 1);
  v13 = *(_QWORD**)(v12 + 2240);
  *(_QWORD*)(v12 + 2240) = 0;
  if (v13 == (_QWORD*)(v12 + 2208)) {
    v14 = 32;
    goto LABEL_8;
  }
  if (v13 != nullptr) {
    v14 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*v13 + v14))((__int64)v13);
  }
  v15 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v15 == 0x4000) {
    return;
  }
  v16 = util_g_handle_slots_ptr[0];
  v17 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                  16 * v15);
  if (v17[1] == 0 || *v17 != *(_QWORD*)(a1 + 8)) {
    return;
  }
  v18 = *a2;
  v83_.v85 = 0;
  v83_.v83[1] = 0;
  v83_.v84 = 0;
  v19 = v18 >> 1;
  v20 = (v18 & 1) == 0;
  v21 = *((_QWORD*)a2 + 1);
  v22 = *((_QWORD*)a2 + 2);
  v83_.v83[0] = 0;
  v86_.v86[0] = 0;
  v86_.v86[1] = 0;
  v86_.v87 = 0;
  v86_.v88 = 0;
  v86_.v89 = nullptr;
  v86_.v90 = 0;
  if (v20) {
    v23 = v19;
  }
  else {
    v23 = v21;
  }
  if (v20) {
    v24 = (__int64)(a2 + 1);
  }
  else {
    v24 = v22;
  }
  GameRoutine_60a060((char*)v83_.v83, v24, v23);
  v83_.v85 = 1;
  v25 = *a3;
  if ((v25 & 1) != 0) {
    v26 = *((_QWORD*)a3 + 1);
  }
  else {
    v26 = v25 >> 1;
  }
  if ((v25 & 1) != 0) {
    v27 = *((_QWORD*)a3 + 2);
  }
  else {
    v27 = (__int64)(a3 + 1);
  }
  GameRoutine_60a060((char*)v86_.v86, v27, v26);
  if ((*(_BYTE*)a4 & 1) != 0) {
    v28 = *(const char**)(a4 + 16);
  }
  else {
    v28 = (const char*)(a4 + 1);
  }
  v29 = strlen(v28);
  if (v29 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_105;
  }
  v30 = v29;
  if (v29 >= 0x17) {
    if ((v29 | 7) == 0x17) {
      v32 = 26;
    }
    else {
      v32 = (v29 | 7) + 1;
    }
    v31 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v32,
                                                16, 0);
    v80_.v81 = v30;
    v80_.v82 = v31;
    v80_.v80 = v32 | 1;
    goto LABEL_35;
  }
  LOBYTE(v80_.v80) = 2 * v29;
  v31 = (char*)&v80_.v80 + 1;
  if (v29 != 0) {
  LABEL_35:
    memmove((__int64)v31, (__int64)v28, v30);
  }
  v33 = v86_.v89;
  v34 = v86_.v90;
  v31[v30] = 0;
  if ((unsigned __int64)v33 >= v34) {
    v37 = v86_.v88;
    v38 = (unsigned __int64)v33 - v86_.v88;
    v39 = 1 - 0x5555555555555555LL * (((__int64)v33 - v86_.v88) >> 3);
    if (v39 > 0xAAAAAAAAAAAAAAALL) {
      goto LABEL_106;
    }
    v40 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v34 - v86_.v88) >> 3);
    if (2 * v40 > v39) {
      v39 = 2 * v40;
    }
    if (v40 >= 0x555555555555555LL) {
      v41 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v41 = v39;
    }
    if (v41 != 0) {
      if (v41 > 0xAAAAAAAAAAAAAAALL) {
        goto LABEL_107;
      }
      v42 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 24 * v41,
                                           16, 0);
    }
    else {
      v42 = 0;
    }
    v43 = (__int64*)(v42 + v38);
    v44 = v42 + 24 * v41;
    v45 = v80_.v81;
    v36 = v42 + v38 + 24;
    *v43 = v80_.v80;
    v43[1] = v45;
    v43[2] = (__int64)v80_.v82;
    memcpy(v42, v37, v38);
    v86_.v88 = v42;
    v86_.v89 = (__int64*)v36;
    v86_.v90 = v44;
    if (v37 != 0) {
      v46 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v46 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v37);
    }
  }
  else {
    v35 = v80_.v81;
    v36 = (__int64)(v33 + 3);
    *v33 = v80_.v80;
    v33[1] = v35;
    v33[2] = (__int64)v80_.v82;
  }
  v47 = *a5;
  v48 = *((const char**)a5 + 2);
  v86_.v89 = (__int64*)v36;
  if ((v47 & 1) != 0) {
    v49 = v48;
  }
  else {
    v49 = a5 + 1;
  }
  v50 = strlen(v49);
  if (v50 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_105:
    String_60a1d0();
  }
  v51 = v50;
  if (v50 >= 0x17) {
    if ((v50 | 7) == 0x17) {
      v53 = 26;
    }
    else {
      v53 = (v50 | 7) + 1;
    }
    v52 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v53,
                                                16, 0);
    v80_.v81 = v51;
    v80_.v82 = v52;
    v80_.v80 = v53 | 1;
    goto LABEL_63;
  }
  LOBYTE(v80_.v80) = 2 * v50;
  v52 = (char*)&v80_.v80 + 1;
  if (v50 != 0) {
  LABEL_63:
    memmove((__int64)v52, (__int64)v49, v51);
  }
  v54 = v86_.v89;
  v55 = v86_.v90;
  v52[v51] = 0;
  if ((unsigned __int64)v54 >= v55) {
    v58 = v86_.v88;
    v59 = (unsigned __int64)v54 - v86_.v88;
    v60 = 1 - 0x5555555555555555LL * (((__int64)v54 - v86_.v88) >> 3);
    if (v60 <= 0xAAAAAAAAAAAAAAALL) {
      v61 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v55 - v86_.v88) >> 3);
      if (2 * v61 > v60) {
        v60 = 2 * v61;
      }
      if (v61 >= 0x555555555555555LL) {
        v62 = 0xAAAAAAAAAAAAAAALL;
      }
      else {
        v62 = v60;
      }
      if (v62 == 0) {
        v63 = 0;
      LABEL_76:
        v64 = (__int64*)(v63 + v59);
        v65 = v63 + 24 * v62;
        v66 = v80_.v81;
        v57 = v63 + v59 + 24;
        *v64 = v80_.v80;
        v64[1] = v66;
        v64[2] = (__int64)v80_.v82;
        memcpy(v63, v58, v59);
        v86_.v88 = v63;
        v86_.v89 = (__int64*)v57;
        v86_.v90 = v65;
        if (v58 != 0) {
          v67 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v67 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v67, v58);
        }
        goto LABEL_80;
      }
      if (v62 <= 0xAAAAAAAAAAAAAAALL) {
        v63 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 24 * v62,
                                             16, 0);
        goto LABEL_76;
      }
    LABEL_107:
      GameRoutine_60a210();
    }
  LABEL_106:
    GameRoutine_64aa00();
  }
  v56 = v80_.v81;
  v57 = (__int64)(v54 + 3);
  *v54 = v80_.v80;
  v54[1] = v56;
  v54[2] = (__int64)v80_.v82;
LABEL_80:
  v68 = *(unsigned int*)(a1 + 16);
  v69 = *(unsigned int*)(a1 + 20);
  v86_.v89 = (__int64*)v57;
  game_hub_Character_SetPopupAmes(*(_QWORD**)(v16[v69] + 16 * v68 + 8),
                                  (__int64)v83_.v83);
  v70 = v86_.v88;
  if (v86_.v88 != 0) {
    v71 = v86_.v89;
    if ((__int64*)v86_.v88 == v86_.v89) {
      goto LABEL_91;
    }
    v72 = v86_.v89;
    v73 = fw_memory_g_heap_manager_ptr;
    do {
      v74 = *((_BYTE*)v72 - 24);
      v72 -= 3;
      if ((v74 & 1) != 0) {
        v75 = *(v71 - 1);
        if (v75 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v73 + 200LL) != 0) {
            v76 = 128;
          }
          else {
            v76 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v73 + v76, v75);
        }
      }
      v71 = v72;
    } while (v72 != (__int64*)v70);
    v86_.v89 = (__int64*)v70;
    v70 = v86_.v88;
    if (v86_.v88 != 0) {
    LABEL_91:
      v77 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v77 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v77, v70);
    }
  }
  if ((v86_.v86[0] & 1) != 0 && v86_.v87 != 0) {
    v78 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v78 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v78,
                                  v86_.v87);
  }
  if ((v83_.v83[0] & 1) != 0 && v83_.v84 != 0) {
    v79 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v79 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v79,
                                  v83_.v84);
  }
}

void game_script_d64120(__int64 a1, unsigned __int8* a2, __int64 a3, __int64 a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  _QWORD* v15;
  const char* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  unsigned __int64 v24;
  _QWORD* v25;
  const char* v26;
  const char* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  unsigned __int64 v34;
  __int64 v35;
  _QWORD* v36;
  char* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  char v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  char v47;
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
  __int64 v58;
  __int64* v59[3];
  struct {
    __int64 v60;
    unsigned __int64 v61;
    char* v62;
  } v60_;

  v8 = *as_g_script_manager_ptr;
  v9 = *(
      _QWORD*)(v8 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v9 != 0) {
    v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 472LL))(v9);
  }
  else {
    v10 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v10 + 24) + 448LL))(
      *(_QWORD*)(v10 + 24), 1);
  v11 = *(_QWORD**)(v10 + 2240);
  *(_QWORD*)(v10 + 2240) = 0;
  if (v11 == (_QWORD*)(v10 + 2208)) {
    v12 = 32;
    goto LABEL_8;
  }
  if (v11 != nullptr) {
    v12 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*v11 + v12))((__int64)v11);
  }
  v13 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v13 == 0x4000) {
    return;
  }
  v14 = util_g_handle_slots_ptr[0];
  v15 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                  16 * v13);
  if (v15[1] == 0 || *v15 != *(_QWORD*)(a1 + 8)) {
    return;
  }
  if ((*(_BYTE*)a3 & 1) != 0) {
    v16 = *(const char**)(a3 + 16);
  }
  else {
    v16 = (const char*)(a3 + 1);
  }
  v17 = strlen(v16);
  if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_72:
    String_60a1d0();
  }
  v18 = v17;
  v19 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v17 >= 0x17) {
    if ((v17 | 7) == 0x17) {
      v21 = 26;
    }
    else {
      v21 = (v17 | 7) + 1;
    }
    v20 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v21, 16, 0);
    v60_.v61 = v18;
    v60_.v62 = v20;
    v60_.v60 = v21 | 1;
    goto LABEL_23;
  }
  LOBYTE(v60_.v60) = 2 * v17;
  v20 = (char*)&v60_.v60 + 1;
  if (v17 != 0) {
  LABEL_23:
    memmove((__int64)v20, (__int64)v16, v18);
  }
  v22 = *v19;
  v20[v18] = 0;
  v23 = (_QWORD*)fw_memory_HeapManager_Allocate(v22, 24, 16, 0);
  v24 = v60_.v61;
  v25 = v23;
  *v23 = v60_.v60;
  v23[1] = v24;
  v26 = *(const char**)(a4 + 16);
  v23[2] = v60_.v62;
  if ((*(_BYTE*)a4 & 1) != 0) {
    v27 = v26;
  }
  else {
    v27 = (const char*)(a4 + 1);
  }
  v28 = strlen(v27);
  if (v28 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_72;
  }
  v29 = v28;
  if (v28 >= 0x17) {
    if ((v28 | 7) == 0x17) {
      v31 = 26;
    }
    else {
      v31 = (v28 | 7) + 1;
    }
    v30 = (char*)fw_memory_HeapManager_Allocate(*v19, v31, 16, 0);
    v60_.v61 = v29;
    v60_.v62 = v30;
    v60_.v60 = v31 | 1;
    goto LABEL_35;
  }
  LOBYTE(v60_.v60) = 2 * v28;
  v30 = (char*)&v60_.v60 + 1;
  if (v28 != 0) {
  LABEL_35:
    memmove((__int64)v30, (__int64)v27, v29);
  }
  v32 = *v19;
  v30[v29] = 0;
  v33 = (_QWORD*)fw_memory_HeapManager_Allocate(v32, 48, 16, 0);
  v34 = v60_.v61;
  v35 = (__int64)v33;
  v33[3] = v60_.v60;
  v36 = v33 + 3;
  v37 = v60_.v62;
  v33[4] = v34;
  v33[5] = v37;
  v38 = v25[1];
  *v33 = *v25;
  v33[1] = v38;
  v33[2] = v25[2];
  v39 = 128;
  if (*(_QWORD*)(*v19 + 200) == 0) {
    v39 = 56;
  }
  nn_mem_StandardAllocator_Free(*v19 + v39, (__int64)v25);
  v40 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v40 == 0x4000) {
    v41 = 0;
  }
  else {
    v41 = *(_QWORD*)(v14[*(unsigned int*)(a1 + 20)] + 16 * v40 + 8);
  }
  v42 = (__int64*)fw_memory_HeapManager_Allocate(*v19, 48, 16, 0);
  v43 = *(_BYTE*)v35;
  v44 = v42 + 6;
  v45 = (__int64)v42;
  v59[0] = v42;
  v59[2] = v42 + 6;
  if ((v43 & 1) != 0) {
    fw_text_String_CopyTerminated(v42, *(_QWORD*)(v35 + 16),
                                  *(_QWORD*)(v35 + 8));
    v47 = *(_BYTE*)v36;
    if ((*(_BYTE*)v36 & 1) != 0) {
      goto LABEL_43;
    }
  }
  else {
    v46 = *(_QWORD*)(v35 + 8);
    *v42 = *(_QWORD*)v35;
    v42[1] = v46;
    v42[2] = *(_QWORD*)(v35 + 16);
    v47 = *(_BYTE*)v36;
    if ((*(_BYTE*)v36 & 1) != 0) {
    LABEL_43:
      fw_text_String_CopyTerminated((__int64*)(v45 + 24), *(_QWORD*)(v35 + 40),
                                    *(_QWORD*)(v35 + 32));
      goto LABEL_46;
    }
  }
  v48 = v36[1];
  *(_QWORD*)(v45 + 24) = *v36;
  *(_QWORD*)(v45 + 32) = v48;
  *(_QWORD*)(v45 + 40) = v36[2];
LABEL_46:
  v59[1] = v44;
  HubEventNatives_d63b00(v41, a2, v59);
  if ((*(_BYTE*)(v45 + 24) & 1) != 0) {
    v49 = *(_QWORD*)(v45 + 40);
    if (v49 != 0) {
      v50 = 128;
      if (*(_QWORD*)(*v19 + 200) == 0) {
        v50 = 56;
      }
      nn_mem_StandardAllocator_Free(*v19 + v50, v49);
    }
  }
  if ((*(_BYTE*)v45 & 1) != 0) {
    v51 = *(_QWORD*)(v45 + 16);
    if (v51 != 0) {
      v52 = 128;
      if (*(_QWORD*)(*v19 + 200) == 0) {
        v52 = 56;
      }
      nn_mem_StandardAllocator_Free(*v19 + v52, v51);
    }
  }
  v53 = 128;
  if (*(_QWORD*)(*v19 + 200) == 0) {
    v53 = 56;
  }
  nn_mem_StandardAllocator_Free(*v19 + v53, v45);
  if ((v47 & 1) != 0) {
    v54 = *(_QWORD*)(v35 + 40);
    if (v54 != 0) {
      v55 = 128;
      if (*(_QWORD*)(*v19 + 200) == 0) {
        v55 = 56;
      }
      nn_mem_StandardAllocator_Free(*v19 + v55, v54);
    }
  }
  if ((v43 & 1) != 0) {
    v56 = *(_QWORD*)(v35 + 16);
    if (v56 != 0) {
      v57 = 128;
      if (*(_QWORD*)(*v19 + 200) == 0) {
        v57 = 56;
      }
      nn_mem_StandardAllocator_Free(*v19 + v57, v56);
    }
  }
  v58 = 128;
  if (*(_QWORD*)(*v19 + 200) == 0) {
    v58 = 56;
  }
  nn_mem_StandardAllocator_Free(*v19 + v58, v35);
}

void game_script_eb7e60(__int64 a1, __int64 a2, int a3)
{
  const char* v3;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  char* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int16 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 i;
  __int64** v41;
  __int64* v42;
  __int64* v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 (*v49)(_QWORD);
  __int64 v50;
  _QWORD* v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64* v71;
  __int64 v72;
  __int64 v73;
  int v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  int v79;
  int v80;
  __int64 v81;
  __int64 v82;
  int v83;
  int v84;
  int v85;
  int v86;
  __int64* v87;
  __int64 v88;
  __int64 v89;
  unsigned __int64 j;
  __int64** v91;
  __int64* v92;
  __int64* v93;
  int v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 (*v99)(_QWORD);
  __int64 v100;
  _QWORD* v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  unsigned __int64 v109;
  __int64 v110;
  unsigned __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  char v122;
  __int64 v123;
  __int64 v124;
  const char* v125;
  unsigned __int64 v126;
  unsigned __int64 v127;
  char* v128;
  __int64 v129;
  __int64 v130;
  int v131;
  __int64 v132;
  struct {
    __int64 v133;
    unsigned __int64 v134;
    char* v135;
    __int64 v136;
    __int64 v137;
    __int64 v138;
    __int64 v139;
    __int64 v140;
    __int64 v141;
    __int64 v142;
    int v143;
  } v133_;

  if (a2 == 0) {
    return;
  }
  v3 = *(const char**)(a2 + 40);
  v7 = strlen(v3);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_225:
    String_60a1d0();
  }
  v132 = a2;
  v8 = v7;
  v9 = (__int64*)fw_memory_g_heap_manager_ptr;
  v131 = a3;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v7 | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v11, 16, 0);
    v133_.v134 = v8;
    v133_.v135 = v10;
    v133_.v133 = v11 | 1;
    goto LABEL_10;
  }
  LOBYTE(v133_.v133) = 2 * v7;
  v10 = (char*)&v133_.v133 + 1;
  if (v7 != 0) {
  LABEL_10:
    LOBYTE(v7) = memmove((__int64)v10, (__int64)v3, v8);
  }
  v10[v8] = 0;
  if ((__int64*)a1 == &v133_.v133) {
    goto LABEL_23;
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    if ((v133_.v133 & 1) != 0) {
      v13 = v133_.v135;
    }
    else {
      v13 = (char*)&v133_.v133 + 1;
    }
    if ((v133_.v133 & 1) != 0) {
      v14 = v133_.v134;
    }
    else {
      v14 = (unsigned __int64)(unsigned __int8)v133_.v133 >> 1;
    }
    LOBYTE(v7) =
        (unsigned __int8)SpineModel_64dde0((__int64*)a1, (__int64)v13, v14);
  LABEL_23:
    if ((v133_.v133 & 1) == 0) {
      goto LABEL_28;
    }
    goto LABEL_24;
  }
  if ((v133_.v133 & 1) != 0) {
    LOBYTE(v7) = (unsigned __int8)GameRoutine_64df20(
        (_QWORD*)a1, (__int64)v133_.v135, v133_.v134);
    if ((v133_.v133 & 1) == 0) {
      goto LABEL_28;
    }
  }
  else {
    v12 = v133_.v134;
    *(_QWORD*)a1 = v133_.v133;
    *(_QWORD*)(a1 + 8) = v12;
    *(_QWORD*)(a1 + 16) = v133_.v135;
    if ((v133_.v133 & 1) == 0) {
      goto LABEL_28;
    }
  }
LABEL_24:
  if (v133_.v135 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*v9 + 200) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*v9 + v15, (__int64)v133_.v135);
  }
LABEL_28:
  v16 = *(_WORD*)(a2 + 66);
  if ((v16 & 1) != 0) {
    v17 = *(_QWORD*)(a1 + 160);
    *(_QWORD*)(a1 + 160) = v17 | 4;
    v16 = *(_WORD*)(a2 + 66);
    if ((v16 & 8) != 0) {
      *(_QWORD*)(a1 + 160) = v17 | 0x10004;
      v16 = *(_WORD*)(a2 + 66);
    }
  }
  if ((v16 & 2) != 0) {
    *(_QWORD*)(a1 + 160) |= 8uLL;
    v16 = *(_WORD*)(a2 + 66);
    if ((v16 & 4) == 0) {
    LABEL_33:
      if ((v16 & 0x20) == 0) {
        goto LABEL_34;
      }
      goto LABEL_115;
    }
  }
  else if ((v16 & 4) == 0) {
    goto LABEL_33;
  }
  *(_QWORD*)(a1 + 160) |= 0x40uLL;
  v16 = *(_WORD*)(a2 + 66);
  if ((v16 & 0x20) == 0) {
  LABEL_34:
    if ((v16 & 0x10) == 0) {
      goto LABEL_35;
    }
    goto LABEL_116;
  }
LABEL_115:
  *(_QWORD*)(a1 + 160) |= 0x10uLL;
  v16 = *(_WORD*)(a2 + 66);
  if ((v16 & 0x10) == 0) {
  LABEL_35:
    *(_QWORD*)(a1 + 160) |= 0x100uLL;
    v16 = *(_WORD*)(a2 + 66);
    if ((v16 & 0x40) != 0) {
      goto LABEL_36;
    }
    goto LABEL_117;
  }
LABEL_116:
  if ((v16 & 0x40) != 0) {
  LABEL_36:
    *(_QWORD*)(a1 + 160) |= 0x20uLL;
    v16 = *(_WORD*)(a2 + 66);
    if ((v16 & 0x80) != 0) {
      goto LABEL_37;
    }
    goto LABEL_118;
  }
LABEL_117:
  if ((v16 & 0x80) != 0) {
  LABEL_37:
    if ((v16 & 0x100) == 0) {
      goto LABEL_38;
    }
    goto LABEL_119;
  }
LABEL_118:
  *(_QWORD*)(a1 + 160) |= 0x400uLL;
  v16 = *(_WORD*)(a2 + 66);
  if ((v16 & 0x100) == 0) {
  LABEL_38:
    if ((v16 & 0x200) == 0) {
      goto LABEL_40;
    }
    goto LABEL_39;
  }
LABEL_119:
  *(_QWORD*)(a1 + 160) |= 0x2000uLL;
  if ((*(_WORD*)(a2 + 66) & 0x200) != 0) {
  LABEL_39:
    *(_QWORD*)(a1 + 160) |= 0x8000uLL;
  }
LABEL_40:
  *(_BYTE*)(a1 + 56) = *(_BYTE*)(a2 + 64);
  v18 = *(unsigned __int16*)(a2 + 72);
  if (*(_WORD*)(a2 + 72) != 0) {
    v19 = 8;
    do {
      v21 = *(_QWORD*)(a1 + 80);
      v20 = *(_QWORD*)(a1 + 88);
      v22 = *(_QWORD*)(*(_QWORD*)(a2 + 80) + v19);
      BYTE4(v133_.v140) = 0;
      v133_.v134 = 0;
      v133_.v135 = nullptr;
      v133_.v136 = 0;
      v133_.v137 = 0;
      v133_.v138 = 0;
      v133_.v139 = 0;
      LOBYTE(v133_.v140) = 0;
      v133_.v143 = 0;
      v133_.v141 = 0;
      v133_.v142 = 0x100000002LL;
      v133_.v133 = v22;
      if (v21 >= v20) {
        v33 = GameHr_eba740((__int64*)(a1 + 72), (__int64)&v133_.v133);
      }
      else {
        *(_QWORD*)v21 = v22;
        *(_QWORD*)(v21 + 8) = 0;
        *(_QWORD*)(v21 + 16) = 0;
        *(_QWORD*)(v21 + 24) = 0;
        v23 = v133_.v134;
        v24 = (unsigned __int64)&v133_.v135[-v133_.v134];
        if (v133_.v135 != (char*)v133_.v134) {
          if ((v24 & 0x8000000000000000LL) != 0) {
          LABEL_223:
            GameRoutine_6e5c60();
          }
          v25 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr,
              (__int64)&v133_.v135[-v133_.v134], 16, 0);
          v26 = v25 + v24;
          *(_QWORD*)(v21 + 8) = v25;
          *(_QWORD*)(v21 + 16) = v25;
          *(_QWORD*)(v21 + 24) = v25 + v24;
          memcpy(v25, v23, v24);
          *(_QWORD*)(v21 + 16) = v26;
        }
        *(_QWORD*)(v21 + 40) = 0;
        *(_QWORD*)(v21 + 48) = 0;
        *(_QWORD*)(v21 + 32) = 0;
        v27 = v133_.v137;
        v28 = v133_.v138 - v133_.v137;
        if (v133_.v138 != v133_.v137) {
          if ((v28 & 0x8000000000000000LL) != 0) {
          LABEL_224:
            GameRoutine_705570();
          }
          v29 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v133_.v138 - v133_.v137,
              16, 0);
          v30 = v29 + v28;
          *(_QWORD*)(v21 + 32) = v29;
          *(_QWORD*)(v21 + 40) = v29;
          *(_QWORD*)(v21 + 48) = v29 + v28;
          memcpy(v29, v27, v28);
          *(_QWORD*)(v21 + 40) = v30;
        }
        v31 = v133_.v140;
        v32 = v133_.v141;
        v33 = v21 + 88;
        *(_DWORD*)(v21 + 72) = v133_.v142;
        *(_QWORD*)(v21 + 56) = v31;
        *(_QWORD*)(v21 + 64) = v32;
        *(_DWORD*)(v21 + 76) = HIDWORD(v133_.v142);
        *(_DWORD*)(v21 + 80) = v133_.v143;
      }
      v9 = &fw_memory_g_heap_manager;
      *(_QWORD*)(a1 + 80) = v33;
      CmdbtlPartyNatives_eb8c40(a1);
      if (v133_.v137 != 0) {
        v133_.v138 = v133_.v137;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
          v34 = 128;
        }
        else {
          v34 = 56;
        }
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v34,
                                      v133_.v137);
      }
      if (v133_.v134 != 0) {
        v133_.v135 = (char*)v133_.v134;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
          v35 = 128;
        }
        else {
          v35 = 56;
        }
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v35,
                                      v133_.v134);
      }
      --v18;
      v19 += 16;
    } while (v18 != 0);
  }
  v36 = *(_QWORD*)(a2 + 96);
  if (v36 != 0) {
    v37 = *(__int64**)(v36 + 40);
    v38 = *v37;
    v39 = v37[1] - *v37;
    if ((int)((unsigned __int64)v39 >> 3) >= 1) {
      for (i = 0; (__int64)i < (int)((unsigned __int64)v39 >> 3); ++i) {
        if (i >= v39 >> 3) {
        LABEL_222:
          GameRoutine_ebabb0();
        }
        v41 = *(__int64***)(*(_QWORD*)(v38 + 8 * i) + 24LL);
        v43 = *v41;
        v42 = v41[1];
        if (v42 != *v41) {
          v44 = 0;
          do {
            v45 = *v43;
            v46 = v43[1];
            if (v46 == *v43) {
            LABEL_70:
              ++v44;
            }
            else {
              while (1) {
                if (*(_QWORD*)v45 != 0) {
                  v47 = game_GameModeData_instance_;
                  if (game_GameModeData_instance_ != 0) {
                    v48 = game_GameVariableTable_Find(
                        *(_QWORD**)(game_GameModeData_instance_ + 48),
                        (unsigned __int64*)v45);
                    if (v48 != 0) {
                      v49 = *(__int64 (**)(_QWORD))(v48 + 72);
                      v50 = *(_QWORD*)(v48 + 80);
                      v51 = (_QWORD*)(v48 + (v50 >> 1));
                      if ((v50 & 1) != 0) {
                        v49 = *(__int64 (**)(_QWORD))((char*)v49 + *v51);
                      }
                      LOBYTE(v7) = v49(v51);
                    }
                    else {
                      LOBYTE(v7) = 1;
                    }
                  }
                  if (*(_BYTE*)(v45 + 16) != ((v47 == 0) | v7 & 1)) {
                    break;
                  }
                }
                v45 += 24;
                if (v45 == v46) {
                  goto LABEL_70;
                }
              }
            }
            v43 += 6;
          } while (v43 != v42);
          v37 = *(__int64**)(v36 + 40);
          if (v44 == 0) {
            v9 = &fw_memory_g_heap_manager;
            goto LABEL_66;
          }
          v38 = *v37;
          v9 = (__int64*)fw_memory_g_heap_manager_ptr;
        }
        if (i >= (v37[1] - v38) >> 3) {
          goto LABEL_222;
        }
        GameHr_eb7780((__int64)&v133_.v133, 0, *(_QWORD*)(v38 + 8 * i));
        LODWORD(v133_.v142) = 3;
        HIDWORD(v133_.v142) |= 2u;
        v52 = *(_QWORD*)(a1 + 80);
        if (v52 >= *(_QWORD*)(a1 + 88)) {
          v62 = GameHr_eba740((__int64*)(a1 + 72), (__int64)&v133_.v133);
        }
        else {
          v53 = v133_.v133;
          *(_QWORD*)(v52 + 16) = 0;
          *(_QWORD*)(v52 + 24) = 0;
          *(_QWORD*)v52 = v53;
          *(_QWORD*)(v52 + 8) = 0;
          v54 = v133_.v134;
          v55 = (unsigned __int64)&v133_.v135[-v133_.v134];
          if (v133_.v135 != (char*)v133_.v134) {
            if ((v55 & 0x8000000000000000LL) != 0) {
              goto LABEL_223;
            }
            v56 = fw_memory_HeapManager_Allocate(
                *v9, (__int64)&v133_.v135[-v133_.v134], 16, 0);
            v57 = v56 + v55;
            *(_QWORD*)(v52 + 8) = v56;
            *(_QWORD*)(v52 + 16) = v56;
            *(_QWORD*)(v52 + 24) = v56 + v55;
            memcpy(v56, v54, v55);
            *(_QWORD*)(v52 + 16) = v57;
            v9 = &fw_memory_g_heap_manager;
          }
          *(_QWORD*)(v52 + 40) = 0;
          *(_QWORD*)(v52 + 48) = 0;
          *(_QWORD*)(v52 + 32) = 0;
          v58 = v133_.v137;
          v59 = v133_.v138 - v133_.v137;
          if (v133_.v138 != v133_.v137) {
            if ((v59 & 0x8000000000000000LL) != 0) {
              goto LABEL_224;
            }
            v60 = fw_memory_HeapManager_Allocate(*v9, v133_.v138 - v133_.v137,
                                                 16, 0);
            v61 = v60 + v59;
            *(_QWORD*)(v52 + 32) = v60;
            *(_QWORD*)(v52 + 40) = v60;
            *(_QWORD*)(v52 + 48) = v60 + v59;
            memcpy(v60, v58, v59);
            *(_QWORD*)(v52 + 40) = v61;
            v9 = &fw_memory_g_heap_manager;
          }
          v62 = v52 + 88;
          v63 = v133_.v140;
          v64 = v133_.v141;
          *(_DWORD*)(v52 + 72) = v133_.v142;
          *(_QWORD*)(v52 + 56) = v63;
          *(_QWORD*)(v52 + 64) = v64;
          *(_DWORD*)(v52 + 76) = HIDWORD(v133_.v142);
          *(_DWORD*)(v52 + 80) = v133_.v143;
        }
        *(_QWORD*)(a1 + 80) = v62;
        CmdbtlPartyNatives_eb8c40(a1);
        if (v133_.v137 != 0) {
          v65 = *v9;
          v133_.v138 = v133_.v137;
          v66 = 128;
          if (*(_QWORD*)(v65 + 200) == 0) {
            v66 = 56;
          }
          nn_mem_StandardAllocator_Free(v65 + v66, v133_.v137);
        }
        if (v133_.v134 != 0) {
          v67 = *v9;
          v133_.v135 = (char*)v133_.v134;
          v68 = 128;
          if (*(_QWORD*)(v67 + 200) == 0) {
            v68 = 56;
          }
          nn_mem_StandardAllocator_Free(v67 + v68, v133_.v134);
        }
        v37 = *(__int64**)(v36 + 40);
      LABEL_66:
        v38 = *v37;
        v39 = v37[1] - *v37;
      }
    }
  }
  if ((*(_WORD*)(v132 + 66) & 8) == 0) {
    game_eb5940((void*)(&v133_.v133));
    v70 = v133_.v133;
    v69 = v133_.v134;
    if (v133_.v133 != v133_.v134) {
      v71 = (__int64*)v133_.v133;
      do {
        v75 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v75 = *(_QWORD*)(game_GameModeData_instance_ + 96);
        }
        v73 = *v71++;
        v72 = v73;
        if (*(_QWORD*)(v73 + 392) == v75) {
          v74 = 4;
        }
        else {
          v74 = 0;
        }
        LOBYTE(v7) = (unsigned __int8)GameHr_eb8a90((__int64*)a1, v72, v74);
      } while (v71 != (__int64*)v69);
    }
    if (v131 <= 1) {
      v80 = 1;
    }
    else {
      v80 = v131;
    }
    if (v80 >= (signed __int32)*(_DWORD*)(a1 + 60)) {
      v80 = *(_DWORD*)(a1 + 60);
    }
    if (v80 >= 5) {
      v80 = 5;
    }
    *(_DWORD*)(a1 + 64) = v80;
    if (v70 != 0) {
      v81 = 128;
      if (*(_QWORD*)(*v9 + 200) == 0) {
        v81 = 56;
      }
      nn_mem_StandardAllocator_Free(*v9 + v81, v70);
    }
    v82 = *(_QWORD*)(v132 + 112);
    if (v82 == 0) {
      goto LABEL_192;
    }
    goto LABEL_151;
  }
  v76 = *(_QWORD*)(a1 + 72);
  v77 = *(_QWORD*)(a1 + 80);
  if (v76 == v77) {
    v78 = 0;
  }
  else {
    v78 = 0;
    do {
      v79 = *(_DWORD*)(v76 + 76);
      v76 += 88;
      v78 += (v79 & 2) != 0;
    } while (v76 != v77);
  }
  if (v78 <= 1) {
    v83 = 1;
  }
  else {
    v83 = v78;
  }
  if (v83 >= 5) {
    v83 = 5;
  }
  v84 = *(_DWORD*)(a1 + 64);
  if (v83 >= v84) {
    v85 = *(_DWORD*)(a1 + 64);
  }
  else {
    v85 = v83;
  }
  if (v84 < 1) {
    v86 = 1;
  }
  else {
    v86 = v85;
  }
  *(_DWORD*)(a1 + 60) = v83;
  *(_DWORD*)(a1 + 64) = v86;
  v82 = *(_QWORD*)(v132 + 112);
  if (v82 != 0) {
  LABEL_151:
    v87 = *(__int64**)(v82 + 40);
    v88 = *v87;
    v89 = v87[1] - *v87;
    if ((int)((unsigned __int64)v89 >> 3) < 1) {
      goto LABEL_192;
    }
    for (j = 0; (__int64)j < (int)((unsigned __int64)v89 >> 3); ++j) {
      if (j >= v89 >> 3) {
        goto LABEL_222;
      }
      v91 = *(__int64***)(*(_QWORD*)(v88 + 8 * j) + 24LL);
      v93 = *v91;
      v92 = v91[1];
      if (v92 != *v91) {
        v94 = 0;
        do {
          v95 = *v93;
          v96 = v93[1];
          if (v96 == *v93) {
          LABEL_158:
            ++v94;
          }
          else {
            while (1) {
              if (*(_QWORD*)v95 != 0) {
                v97 = game_GameModeData_instance_;
                if (game_GameModeData_instance_ != 0) {
                  v98 = game_GameVariableTable_Find(
                      *(_QWORD**)(game_GameModeData_instance_ + 48),
                      (unsigned __int64*)v95);
                  if (v98 != 0) {
                    v99 = *(__int64 (**)(_QWORD))(v98 + 72);
                    v100 = *(_QWORD*)(v98 + 80);
                    v101 = (_QWORD*)(v98 + (v100 >> 1));
                    if ((v100 & 1) != 0) {
                      v99 = *(__int64 (**)(_QWORD))((char*)v99 + *v101);
                    }
                    LOBYTE(v7) = v99(v101);
                  }
                  else {
                    LOBYTE(v7) = 1;
                  }
                }
                if (*(_BYTE*)(v95 + 16) != ((v97 == 0) | v7 & 1)) {
                  break;
                }
              }
              v95 += 24;
              if (v95 == v96) {
                goto LABEL_158;
              }
            }
          }
          v93 += 6;
        } while (v93 != v92);
        v87 = *(__int64**)(v82 + 40);
        if (v94 == 0) {
          v9 = &fw_memory_g_heap_manager;
          goto LABEL_154;
        }
        v88 = *v87;
        v9 = (__int64*)fw_memory_g_heap_manager_ptr;
      }
      if (j >= (v87[1] - v88) >> 3) {
        goto LABEL_222;
      }
      GameHr_eb7780((__int64)&v133_.v133, 1, *(_QWORD*)(v88 + 8 * j));
      v102 = *(_QWORD*)(a1 + 80);
      if (v102 >= *(_QWORD*)(a1 + 88)) {
        v112 = GameHr_eba740((__int64*)(a1 + 72), (__int64)&v133_.v133);
      }
      else {
        v103 = v133_.v133;
        *(_QWORD*)(v102 + 16) = 0;
        *(_QWORD*)(v102 + 24) = 0;
        *(_QWORD*)v102 = v103;
        *(_QWORD*)(v102 + 8) = 0;
        v104 = v133_.v134;
        v105 = (unsigned __int64)&v133_.v135[-v133_.v134];
        if (v133_.v135 != (char*)v133_.v134) {
          if ((v105 & 0x8000000000000000LL) != 0) {
            goto LABEL_223;
          }
          v106 = fw_memory_HeapManager_Allocate(
              *v9, (__int64)&v133_.v135[-v133_.v134], 16, 0);
          v107 = v106 + v105;
          *(_QWORD*)(v102 + 8) = v106;
          *(_QWORD*)(v102 + 16) = v106;
          *(_QWORD*)(v102 + 24) = v106 + v105;
          memcpy(v106, v104, v105);
          *(_QWORD*)(v102 + 16) = v107;
        }
        *(_QWORD*)(v102 + 40) = 0;
        *(_QWORD*)(v102 + 48) = 0;
        *(_QWORD*)(v102 + 32) = 0;
        v108 = v133_.v137;
        v109 = v133_.v138 - v133_.v137;
        if (v133_.v138 != v133_.v137) {
          if ((v109 & 0x8000000000000000LL) != 0) {
            goto LABEL_224;
          }
          v110 = fw_memory_HeapManager_Allocate(*v9, v133_.v138 - v133_.v137,
                                                16, 0);
          v111 = v110 + v109;
          *(_QWORD*)(v102 + 32) = v110;
          *(_QWORD*)(v102 + 40) = v110;
          *(_QWORD*)(v102 + 48) = v110 + v109;
          memcpy(v110, v108, v109);
          *(_QWORD*)(v102 + 40) = v111;
        }
        v112 = v102 + 88;
        v113 = v133_.v140;
        v114 = v133_.v141;
        *(_DWORD*)(v102 + 72) = v133_.v142;
        *(_QWORD*)(v102 + 56) = v113;
        *(_QWORD*)(v102 + 64) = v114;
        *(_DWORD*)(v102 + 76) = HIDWORD(v133_.v142);
        *(_DWORD*)(v102 + 80) = v133_.v143;
      }
      *(_QWORD*)(a1 + 80) = v112;
      CmdbtlPartyNatives_eb8c40(a1);
      if (v133_.v137 != 0) {
        v115 = *v9;
        v133_.v138 = v133_.v137;
        v116 = 128;
        if (*(_QWORD*)(v115 + 200) == 0) {
          v116 = 56;
        }
        nn_mem_StandardAllocator_Free(v115 + v116, v133_.v137);
      }
      if (v133_.v134 != 0) {
        v117 = *v9;
        v133_.v135 = (char*)v133_.v134;
        v118 = 128;
        if (*(_QWORD*)(v117 + 200) == 0) {
          v118 = 56;
        }
        nn_mem_StandardAllocator_Free(v117 + v118, v133_.v134);
      }
      v87 = *(__int64**)(v82 + 40);
    LABEL_154:
      v88 = *v87;
      v89 = v87[1] - *v87;
    }
  }
LABEL_192:
  v120 = *(_QWORD*)(a1 + 120);
  v119 = *(_QWORD*)(a1 + 128);
  if (v120 != v119) {
    v121 = *(_QWORD*)(a1 + 128);
    do {
      v122 = *(_BYTE*)(v121 - 24);
      v121 -= 24;
      if ((v122 & 1) != 0) {
        v123 = *(_QWORD*)(v119 - 8);
        if (v123 != 0) {
          if (*(_QWORD*)(*v9 + 200) != 0) {
            v124 = 128;
          }
          else {
            v124 = 56;
          }
          nn_mem_StandardAllocator_Free(*v9 + v124, v123);
        }
      }
      v119 = v121;
    } while (v121 != v120);
  }
  *(_QWORD*)(a1 + 128) = v120;
  if (*(_QWORD*)(v132 + 120) != 0) {
    v125 = *(const char**)(v132 + 120);
  }
  else {
    v125 = &GameData_1a9f09e;
  }
  v126 = strlen(v125);
  if (v126 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_225;
  }
  v127 = v126;
  if (v126 >= 0x17) {
    if ((v126 | 7) == 0x17) {
      v129 = 26;
    }
    else {
      v129 = (v126 | 7) + 1;
    }
    v128 = (char*)fw_memory_HeapManager_Allocate(*v9, v129, 16, 0);
    v133_.v134 = v127;
    v133_.v135 = v128;
    v133_.v133 = v129 | 1;
    goto LABEL_212;
  }
  LOBYTE(v133_.v133) = 2 * v126;
  v128 = (char*)&v133_.v133 + 1;
  if (v126 != 0) {
  LABEL_212:
    memmove((__int64)v128, (__int64)v125, v127);
  }
  v128[v127] = 0;
  GameRoutine_7a8220((__int64*)(a1 + 120), &v133_.v133);
  if ((v133_.v133 & 1) != 0 && v133_.v135 != nullptr) {
    v130 = 128;
    if (*(_QWORD*)(*v9 + 200) == 0) {
      v130 = 56;
    }
    nn_mem_StandardAllocator_Free(*v9 + v130, (__int64)v133_.v135);
  }
  *(_QWORD*)(a1 + 144) = v132;
}

#pragma GCC visibility pop
