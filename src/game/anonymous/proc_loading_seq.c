#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_9b8890(_QWORD*);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1fb3bd8[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_anonymous_ProcLoadingSeq_vtable[])();
extern __int64 GameData_21f8018;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting;
__int64 ProcLoadingSeq_Destructor(__int64 a1);
__int64 ProcLoadingSeq_DeletingDestructor(__int64 a1);
_QWORD* ProcLoadingSeq_Unknown2(_QWORD* a1);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 ui_Manager_instance_;
__int64
game_anonymous_ProcLoadingSeq_UpdateByCurrentTips_closure_Invoke(__int64 a1,
                                                                 __int64* a2);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* TutorialFile_97ffe0(__int64);
_QWORD* TutorialFile_980100(__int64);
_QWORD* ui_LayoutAccessor_Setup_155dda0(__int64*, __int64*);
__attribute__((swiftcall)) void GameRoutine_1366bd0(PSEUDO_X8, __int64, __int64,
                                                    __int64);
__attribute__((swiftcall)) void GameRoutine_97f5e0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameRoutine_9b8fe0(PSEUDO_X8, __int64*,
                                                   _QWORD*);
__attribute__((swiftcall)) void TextBoxEx_188aa00(PSEUDO_X8, __int64* result,
                                                  int);
__attribute__((swiftcall)) void TutorialFile_97fb60(PSEUDO_X8, __int64);
__int64* GameRoutine_112cc60(__int64* result, unsigned __int8*,
                             unsigned __int8*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 EmbeddedImage_1889d00(__int64, __int64);
__int64 GameRoutine_1841930(__int64, __int64, __int64);
__int64 GameRoutine_2b0();
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_9b80e0(__int64 result);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
extern __int64 (*GameData_1fb3aa8[])();
extern __int64 GameData_21f7e28;
extern __int64 GameData_21f7e30;
extern __int64 GameData_21f7e38;
extern __int64 GameData_21f7e48;
extern __int64 GameData_21f7e58;
extern __int64 GameData_21f7e68;
extern __int64 GameData_21f7e70;
extern __int64 GameData_21f7e78;
extern __int64 GameData_21f7e88;
extern __int64 GameData_21f7e98;
extern __int64 GameData_21f7ea8;
extern __int64 GameData_21f7eb0;
extern __int64 GameData_21f7eb8;
extern __int64 GameData_21f7ec8;
extern __int64 GameData_21f7ed8;
extern __int64 GameData_21f7ee8;
extern __int64 GameData_21f7ef0;
extern __int64 GameData_21f7ef8;
extern __int64 GameData_21f7f08;
extern __int64 GameData_21f7f18;
extern __int64 GameData_21f7f28;
extern __int64 GameData_21f7f30;
extern __int64 GameData_21f7f38;
extern __int64 GameData_21f7f48;
extern __int64 GameData_21f7f58;
extern __int64 GameData_21f7f68;
extern __int64 GameData_21f7f70;
extern __int64 GameData_21f7f78;
extern __int64 GameData_21f7f88;
extern __int64 GameData_21f7f98;
extern __int64 GameData_21f7fa0;
extern __int64 GameData_21f7fa8;
extern __int64 GameData_21f7fb0;
extern __int64 GameData_21f7fb8;
extern __int64 GameData_21f7fc0;
extern __int64 GameData_21f7fc8;
extern __int64 GameData_21f7fd0;
extern __int64 GameData_21f7fd8;
extern __int64 GameData_21f7fe0;
extern __int64 GameData_21f7fe8;
extern __int64 GameData_21f7ff0;
extern __int64 GameData_21f7ff8;
extern __int64 GameData_21f8008;
extern __int64 GameData_21f8010;
extern __int64 fw_memory_g_heap_manager;
extern char* msg_MessageManager_empty_text_;
extern char** msg_MessageManager_empty_text__ptr;
extern char GameData_21f7e20;
extern char GameData_21f7e60;
extern char GameData_21f7ea0;
extern char GameData_21f7ee0;
extern char GameData_21f7f20;
extern char GameData_21f7f60;
extern int GameData_21f7e40;
extern int GameData_21f7e50;
extern int GameData_21f7e80;
extern int GameData_21f7e90;
extern int GameData_21f7ec0;
extern int GameData_21f7ed0;
extern int GameData_21f7f00;
extern int GameData_21f7f10;
extern int GameData_21f7f40;
extern int GameData_21f7f50;
extern int GameData_21f7f80;
extern int GameData_21f7f90;
extern int GameData_21f8000;
void GameRoutine_156c5d0(__int64, __int64, char);
void TextBoxEx_188ab20(__int64, _BYTE*);
void __attribute__((noreturn)) String_60a1d0();
_QWORD* ProcLoadingSeq_9b84e0();
__int64 game_anonymous_ProcLoadingSeq_UpdateByCurrentTips(_QWORD* a1);
__int64 ProcLoadingSeq_9b9b60();

_QWORD* ProcLoadingSeq_9b84e0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  struct {
    __int64 v13;
    __int64 v14;
  } v13_;
  struct {
    _QWORD v15[6];
    int v16;
    char gap68_[4];
    __int64 v17;
    __int64 v18;
    __int64 v19;
  } v15_;

  v15_.v15[2] = 0x500000000000LL;
  memset(&v15_.v15[3], 0, 24);
  v15_.v17 = 0;
  v15_.v18 = 0;
  v15_.v19 = 0;
  v15_.v16 = 0;
  v15_.v15[0] = 0x800000018LL;
  v15_.v15[1] = 0x500000050LL;
  GameRoutine_1366bd0((void*)(&v13_.v13), (__int64)"Layout/Common.arc",
                      (__int64)"Common_Load", (__int64)v15_.v15);
  v0 = v13_.v13;
  v1 = v13_.v14;
  v13_.v13 = 0;
  v13_.v14 = 0;
  v2 = GameData_21f7fa8;
  GameData_21f7fa0 = v0;
  GameData_21f7fa8 = v1;
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = v13_.v14;
  if (v13_.v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13_.v14 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = GameData_21f7fa8;
  v13_.v13 = GameData_21f7fa0;
  v13_.v14 = GameData_21f7fa8;
  if (GameData_21f7fa8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(GameData_21f7fa8 + 8),
                              1u, memory_order_relaxed);
    result = ui_LayoutAccessor_Setup_155dda0(&GameData_21f7fb0, &v13_.v13);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      result = (_QWORD*)std___1___shared_weak_count___release_weak(v4);
    }
  }
  else {
    result = ui_LayoutAccessor_Setup_155dda0(&GameData_21f7fb0, &v13_.v13);
  }
  v6 = v15_.v17;
  if (v15_.v17 != 0) {
    v7 = v15_.v18;
    v8 = fw_memory_g_heap_manager_ptr;
    if (v15_.v17 == v15_.v18) {
      goto LABEL_22;
    }
    v9 = v15_.v18;
    do {
      v10 = *(_BYTE*)(v9 - 24);
      v9 -= 24;
      if ((v10 & 1) != 0 && *(_QWORD*)(v7 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v11);
      }
      v7 = v9;
    } while (v9 != v6);
    v15_.v18 = v6;
    if (v15_.v17 != 0) {
    LABEL_22:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v12 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v12);
    }
  }
  return result;
}

__int64 game_anonymous_ProcLoadingSeq_UpdateByCurrentTips(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  bool v13;
  unsigned __int64 v14;
  _BYTE* v15;
  _BYTE* v16;
  _BYTE* v17;
  __int64* v18;
  __int64 v19;
  _QWORD* v20;
  __int64* v21;
  unsigned __int64 v22;
  char* v23;
  unsigned __int64 v24;
  __int64 v25;
  _BYTE* v26;
  unsigned __int64 v27;
  char* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _BYTE* v34;
  __int64 v35;
  char* v36;
  __int64 result;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _BYTE* v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  char* v47;
  __int64 v48;
  char* v49;
  __int64 v50;
  char v51;
  __int64 v52;
  _QWORD* v53;
  __int64 v54;
  unsigned __int64 v55;
  _QWORD* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  struct {
    __int64 v61;
    unsigned __int64 v62;
    __int64 v63;
  } v61_;
  struct {
    __int64 v64;
    unsigned __int64 v65;
    char* v66;
    char gap56_[8];
    _QWORD* v67;
  } v64_;
  struct {
    __int64 v68;
    unsigned __int64 v69;
    char* v70;
  } v68_;
  struct {
    __int64 v71;
    unsigned __int64 v72;
    char* v73;
  } v71_;

  if (a1[23] == 0) {
    *(_BYTE*)(a1[32] + 88LL) &= ~1u;
    v18 = (__int64*)msg_MessageManager_empty_text__ptr;
    GameRoutine_60a020((__int64)(a1 + 25),
                       (__int64)*msg_MessageManager_empty_text__ptr);
    v19 = *v18;
    v20 = a1 + 28;
  LABEL_69:
    GameRoutine_60a020((__int64)v20, v19);
    goto LABEL_70;
  }
  v2 = *(_QWORD*)(a1[24] + 16LL);
  v3 = TutorialFile_97ffe0(v2);
  v4 = TutorialFile_980100(v2);
  v10 = a1[32];
  if (v10 != 0) {
    if (v3 != nullptr) {
      v11 = v3[3];
      v12 = *(unsigned __int8*)(v11 + 560);
      v13 = (v12 & 1) == 0;
      if ((v12 & 1) != 0) {
        v14 = *(_QWORD*)(v11 + 568);
      }
      else {
        v14 = v12 >> 1;
      }
      v15 = *(_BYTE**)(v11 + 576);
      v16 = (_BYTE*)(v11 + 561);
      if (!v13) {
        v16 = v15;
      }
      if (v14 != 0) {
        v17 = v16;
      }
      else {
        v17 = nullptr;
      }
      Manager_136a920(ui_Manager_instance_ + 1264, v10, 0, 2u, v17);
      goto LABEL_16;
    }
    if (v4 != nullptr) {
      GameRoutine_1841930(a1[32], (__int64)v4, 1);
    LABEL_16:
      *(_BYTE*)(a1[32] + 88LL) |= 1u;
      goto LABEL_17;
    }
    *(_BYTE*)(v10 + 88) &= ~1u;
  }
LABEL_17:
  GameRoutine_97f5e0((void*)(&v64_.v64), v2);
  v21 = a1 + 25;
  if (a1 + 25 == &v64_.v64) {
    goto LABEL_29;
  }
  if ((*(_BYTE*)v21 & 1) != 0) {
    if ((v64_.v64 & 1) != 0) {
      v23 = v64_.v66;
    }
    else {
      v23 = (char*)&v64_.v64 + 1;
    }
    if ((v64_.v64 & 1) != 0) {
      v24 = v64_.v65;
    }
    else {
      v24 = (unsigned __int64)(unsigned __int8)v64_.v64 >> 1;
    }
    SpineModel_64dde0(v21, (__int64)v23, v24);
  LABEL_29:
    if ((v64_.v64 & 1) == 0) {
      goto LABEL_34;
    }
    goto LABEL_30;
  }
  if ((v64_.v64 & 1) != 0) {
    GameRoutine_64df20(v21, (__int64)v64_.v66, v64_.v65);
    if ((v64_.v64 & 1) == 0) {
      goto LABEL_34;
    }
  }
  else {
    v22 = v64_.v65;
    *v21 = v64_.v64;
    a1[26] = v22;
    a1[27] = v64_.v66;
    if ((v64_.v64 & 1) == 0) {
      goto LABEL_34;
    }
  }
LABEL_30:
  if (v64_.v66 != nullptr) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
  }
LABEL_34:
  TutorialFile_97fb60((void*)(&v64_.v64), v2);
  v26 = a1 + 28;
  if (a1 + 28 == &v64_.v64) {
    goto LABEL_46;
  }
  if ((*v26 & 1) != 0) {
    if ((v64_.v64 & 1) != 0) {
      v28 = v64_.v66;
    }
    else {
      v28 = (char*)&v64_.v64 + 1;
    }
    if ((v64_.v64 & 1) != 0) {
      v29 = v64_.v65;
    }
    else {
      v29 = (unsigned __int64)(unsigned __int8)v64_.v64 >> 1;
    }
    SpineModel_64dde0(a1 + 28, (__int64)v28, v29);
  LABEL_46:
    if ((v64_.v64 & 1) == 0) {
      goto LABEL_51;
    }
    goto LABEL_47;
  }
  if ((v64_.v64 & 1) != 0) {
    GameRoutine_64df20(a1 + 28, (__int64)v64_.v66, v64_.v65);
    if ((v64_.v64 & 1) == 0) {
      goto LABEL_51;
    }
  }
  else {
    v27 = v64_.v65;
    *(_QWORD*)v26 = v64_.v64;
    a1[29] = v27;
    a1[30] = v64_.v66;
    if ((v64_.v64 & 1) == 0) {
      goto LABEL_51;
    }
  }
LABEL_47:
  if (v64_.v66 != nullptr) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v30);
  }
LABEL_51:
  BYTE3(v64_.v64) = 0;
  BYTE2(v71_.v71) = 0;
  LOBYTE(v64_.v64) = 4;
  LOWORD(v71_.v71) = 8194;
  *(_WORD*)((char*)&v64_.v64 + 1) = 2573;
  GameRoutine_112cc60(a1 + 28, (unsigned __int8*)&v64_.v64,
                      (unsigned __int8*)&v71_.v71);
  if ((v71_.v71 & 1) != 0 && v71_.v73 != nullptr) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v31);
  }
  BYTE2(v64_.v64) = 0;
  LOWORD(v71_.v71) = 8194;
  BYTE2(v71_.v71) = 0;
  LOWORD(v64_.v64) = 3330;
  GameRoutine_112cc60(a1 + 28, (unsigned __int8*)&v64_.v64,
                      (unsigned __int8*)&v71_.v71);
  if ((v71_.v71 & 1) != 0 && v71_.v73 != nullptr) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v32);
  }
  BYTE2(v64_.v64) = 0;
  BYTE2(v71_.v71) = 0;
  LOWORD(v64_.v64) = 2562;
  LOWORD(v71_.v71) = 8194;
  GameRoutine_112cc60(a1 + 28, (unsigned __int8*)&v64_.v64,
                      (unsigned __int8*)&v71_.v71);
  if ((v71_.v71 & 1) != 0 && v71_.v73 != nullptr) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v33);
  }
  v34 = *(_BYTE**)(v2 + 72);
  if (v34 != nullptr && *v34 != 0) {
    v19 = *(_QWORD*)(v2 + 48);
    v20 = a1 + 28;
    goto LABEL_69;
  }
LABEL_70:
  v35 = a1[31];
  if (v35 != 0) {
    if ((a1[25] & 1) != 0) {
      v36 = (char*)a1[27];
    }
    else {
      v36 = (char*)a1 + 201;
    }
    GameRoutine_156c5d0(v35, (__int64)v36, 0);
  }
  v71_.v71 = (__int64)"L_Tips_Info";
  v71_.v72 = 11;
  GameRoutine_9b8fe0((void*)(&v64_.v64), &GameData_21f7fb0, &v71_.v71);
  result = v64_.v65;
  if (v64_.v65 != 0) {
    v38 = std___1___shared_weak_count_lock(v64_.v65);
    v39 = (__int64*)v64_.v64;
    result = v64_.v65;
    if (v64_.v65 != 0) {
      result = std___1___shared_weak_count___release_weak(v64_.v65);
    }
    if (v38 == 0 || v39 == nullptr) {
      if (v38 == 0) {
        return result;
      }
      goto LABEL_114;
    }
    TextBoxEx_188aa00((void*)(&v64_.v64), v39, 0);
    result = v64_.v65;
    if (v64_.v65 != 0) {
      v40 = std___1___shared_weak_count_lock(v64_.v65);
      v41 = v64_.v64;
      result = v64_.v65;
      if (v64_.v65 != 0) {
        result = std___1___shared_weak_count___release_weak(v64_.v65);
      }
      if (v40 != 0 && v41 != 0) {
        if (a1[23] != 0) {
          v42 = *(_QWORD*)(a1[24] + 16LL);
          v43 = *(_BYTE**)(v42 + 72);
          if (v43 != nullptr && *v43 != 0 &&
              (unsigned int)*(unsigned __int8*)(v42 + 32) - 1 > 2) {
            TextBoxEx_188ab20((__int64)v39, *(_BYTE**)(v42 + 48));
            v44 = *(_QWORD*)(v42 + 72);
            v45 = strlen(v44);
            if (v45 >= 0xFFFFFFFFFFFFFFF7LL) {
              String_60a1d0();
            }
            v46 = v45;
            if (v45 >= 0x17) {
              if ((v45 | 7) == 0x17) {
                v50 = 26;
              }
              else {
                v50 = (v45 | 7) + 1;
              }
              v47 = (char*)fw_memory_HeapManager_Allocate(
                  fw_memory_g_heap_manager, v50, 16, 0);
              v71_.v72 = v46;
              v71_.v73 = v47;
              v71_.v71 = v50 | 1;
            }
            else {
              LOBYTE(v71_.v71) = 2 * v45;
              v47 = (char*)&v71_.v71 + 1;
              if (v45 == 0) {
                goto LABEL_122;
              }
            }
            memmove(v47, v44, v46);
          LABEL_122:
            v47[v46] = 0;
            v51 = v71_.v71;
            if ((v71_.v71 & 1) != 0) {
              fw_text_String_CopyTerminated(&v68_.v68, (__int64)v71_.v73,
                                            v71_.v72);
            }
            else {
              v68_.v68 = v71_.v71;
              v68_.v69 = v71_.v72;
              v68_.v70 = v71_.v73;
            }
            if ((v68_.v68 & 1) != 0) {
              fw_text_String_CopyTerminated(&v61_.v61, (__int64)v68_.v70,
                                            v68_.v69);
            }
            else {
              v61_.v61 = v68_.v68;
              v61_.v62 = v68_.v69;
              v61_.v63 = (__int64)v68_.v70;
            }
            v52 = fw_memory_g_heap_manager_ptr;
            v53 = (_QWORD*)fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
            v54 = v61_.v61;
            v55 = v61_.v62;
            v56 = v53;
            v61_.v61 = 0;
            v61_.v62 = 0;
            v64_.v67 = v53;
            *v53 = GameData_1fb3aa8;
            v53[1] = v54;
            v57 = v61_.v63;
            v61_.v63 = 0;
            v53[2] = v55;
            v53[3] = v57;
            EmbeddedImage_1889d00(v41, (__int64)&v64_.v64);
            (*(void (**)(_QWORD*))(*v56 + 40LL))(v56);
            if ((v61_.v61 & 1) != 0 && v61_.v63 != 0) {
              v58 = 128;
              if (*(_QWORD*)(*(_QWORD*)v52 + 200LL) == 0) {
                v58 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v52 + v58);
            }
            result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v41 + 40LL))(
                v41, 1);
            if ((v68_.v68 & 1) != 0 && v68_.v70 != nullptr) {
              v59 = 128;
              if (*(_QWORD*)(*(_QWORD*)v52 + 200LL) == 0) {
                v59 = 56;
              }
              result = nn_mem_StandardAllocator_Free(*(_QWORD*)v52 + v59);
            }
            if ((v51 & 1) != 0 && v71_.v73 != nullptr) {
              v60 = 128;
              if (*(_QWORD*)(*(_QWORD*)v52 + 200LL) == 0) {
                v60 = 56;
              }
              result = nn_mem_StandardAllocator_Free(*(_QWORD*)v52 + v60);
            }
            goto LABEL_112;
          }
          v48 = v39[10];
          if ((a1[28] & 1) != 0) {
            v49 = (char*)a1[30];
          }
          else {
            v49 = (char*)a1 + 225;
          }
          if (v48 == 0 || v49 == nullptr) {
            goto LABEL_111;
          }
        }
        else {
          v49 = msg_MessageManager_empty_text_;
          if (msg_MessageManager_empty_text_ == nullptr) {
            goto LABEL_111;
          }
          v48 = v39[10];
          if (v48 == 0) {
            goto LABEL_111;
          }
        }
        GameRoutine_156c5d0(v48, (__int64)v49, 0);
      LABEL_111:
        result =
            (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v41 + 40LL))(v41, 0);
      LABEL_112:
        if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
          result = std___1___shared_weak_count___release_weak(v40);
        }
        goto LABEL_114;
      }
      if (v40 != 0) {
        goto LABEL_112;
      }
    }
  LABEL_114:
    if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
      return std___1___shared_weak_count___release_weak(v38);
    }
  }
  return result;
}

__int64

game_anonymous_ProcLoadingSeq_UpdateByCurrentTips_closure_Invoke(__int64 a1,
                                                                 __int64* a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *a2;
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 24);
  }
  else {
    v3 = a1 + 9;
  }
  return GameRoutine_136a920(ui_Manager_instance_ + 1264, v2, 0, 7, v3);
}

__int64 ProcLoadingSeq_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;

  *(_QWORD*)a1 = game_anonymous_ProcLoadingSeq_vtable;
  *(_QWORD*)(a1 + 152) = GameData_1fb3bd8;
  if ((*(_BYTE*)(a1 + 224) & 1) != 0 && *(_QWORD*)(a1 + 240) != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  if ((*(_BYTE*)(a1 + 200) & 1) != 0 && *(_QWORD*)(a1 + 216) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  if (*(_QWORD*)(a1 + 184) != 0) {
    v4 = *(_QWORD**)(a1 + 176);
    v5 = *(_QWORD**)(*(_QWORD*)(a1 + 168) + 8LL);
    *(_QWORD*)(*v4 + 8LL) = v5;
    *v5 = *v4;
    *(_QWORD*)(a1 + 184) = 0;
    if (v4 != (_QWORD*)(a1 + 168)) {
      v6 = fw_memory_g_heap_manager_ptr;
      do {
        v7 = (_QWORD*)v4[1];
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v8);
        v4 = v7;
      } while (v7 != (_QWORD*)(a1 + 168));
    }
  }
  GameData_21f8018 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcLoadingSeq_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = game_anonymous_ProcLoadingSeq_vtable;
  *(_QWORD*)(a1 + 152) = GameData_1fb3bd8;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 224) & 1) != 0 && *(_QWORD*)(a1 + 240) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  if ((*(_BYTE*)(a1 + 200) & 1) != 0 && *(_QWORD*)(a1 + 216) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4);
  }
  if (*(_QWORD*)(a1 + 184) != 0) {
    v5 = *(_QWORD**)(a1 + 176);
    v6 = *(_QWORD**)(*(_QWORD*)(a1 + 168) + 8LL);
    *(_QWORD*)(*v5 + 8LL) = v6;
    *v6 = *v5;
    *(_QWORD*)(a1 + 184) = 0;
    if (v5 != (_QWORD*)(a1 + 168)) {
      do {
        v7 = (_QWORD*)v5[1];
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v8);
        v5 = v7;
      } while (v7 != (_QWORD*)(a1 + 168));
    }
  }
  GameData_21f8018 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v9);
}

_QWORD* ProcLoadingSeq_Unknown2(_QWORD* a1)
{
  _QWORD* v1;

  if (*((_BYTE*)a1 + 264) == 1 &&
      (*(_BYTE*)(game_g_game_setting + 952) & 1) != 0) {
    v1 = *(_QWORD**)(a1[24] + 8LL);
    a1[24] = v1;
    if (v1 == a1 + 21) {
      a1[24] = a1[22];
    }
    return (_QWORD*)GameRoutine_9b8890(a1);
  }
  return a1;
}

__int64 ProcLoadingSeq_9b9b60()
{
  GameData_21f7e60 = 5;
  GameData_21f7e20 = 18;
  GameData_21f7ee0 = 18;
  GameData_21f7e48 = 0;
  GameData_21f7e50 = 0;
  GameData_21f7e58 = 0;
  GameData_21f7e28 = 0;
  GameData_21f7e30 = 0;
  GameData_21f7e38 = 0;
  GameData_21f7e40 = 0;
  GameData_21f7e90 = 4;
  GameData_21f7ee8 = 0;
  GameData_21f7ef0 = 24;
  GameData_21f7e88 = 0;
  GameData_21f7e68 = 0;
  GameData_21f7e70 = 0;
  GameData_21f7e78 = 0;
  GameData_21f7e80 = 0;
  GameData_21f7e98 = 0;
  GameData_21f7ea8 = 0;
  GameData_21f7eb0 = (__int64)GameRoutine_9b80e0;
  GameData_21f7eb8 = 0;
  GameData_21f7ec0 = 0;
  GameData_21f7ea0 = 14;
  GameData_21f7f20 = 14;
  GameData_21f7ec8 = 0;
  GameData_21f7ed0 = 0;
  GameData_21f7ed8 = 0;
  GameData_21f7ef8 = 1;
  GameData_21f7f00 = 0;
  GameData_21f7f08 = 0;
  GameData_21f7f10 = 0;
  GameData_21f7f18 = 0;
  GameData_21f7f38 = 1;
  GameData_21f7f28 = 0;
  GameData_21f7f30 = 16;
  GameData_21f7f40 = 0;
  GameData_21f7f48 = 0;
  GameData_21f7f50 = 0;
  GameData_21f7f58 = 0;
  GameData_21f7f60 = 0;
  GameData_21f7f88 = 0;
  GameData_21f7f90 = 0;
  GameData_21f7f98 = 0;
  GameData_21f7f80 = 0;
  GameData_21f7f70 = 0;
  GameData_21f7f78 = 0;
  GameData_21f7f68 = 0;
  GameRoutine_2b0();
  GameData_21f7fd0 = 0;
  GameData_21f7fb0 = 0;
  GameData_21f7fb8 = 0;
  GameData_21f7fd8 = 0;
  GameData_21f7fe0 = 0;
  GameData_21f7fe8 = 0;
  GameData_21f7ff0 = 0;
  GameData_21f7ff8 = 0;
  GameData_21f7fc0 = 0;
  GameData_21f7fc8 = (__int64)&GameData_21f7fd0;
  GameData_21f8000 = 1065353216;
  GameData_21f8008 = 0;
  GameData_21f8010 = 0;
  return GameRoutine_2b0();
}

#pragma GCC visibility pop
