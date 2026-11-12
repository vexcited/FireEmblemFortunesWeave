#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_telop_TelopResult_Destroy_TelopResult(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TelopNoticeNewAction_Destructor(__int64 a1);
__int64 TelopNoticeNewAction_DeletingDestructor(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_9b8fe0(PSEUDO_X8, __int64*,
                                                   const char**);
__attribute__((swiftcall)) void TextBoxEx_188aa00(PSEUDO_X8, __int64, int);
__int64* GameRoutine_1760e40(__int64, unsigned int);
__int64 EmbeddedImage_1889fc0(__int64, _BYTE*);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 game_17356e0(__int64*, const char*);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char** msg_MessageManager_empty_text__ptr;
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_190a0c0(float*, __int64, float*, _QWORD*, __int64);
void TextBoxEx_188ab20(__int64, const char*);
__int64 TelopNoticeNewAction_Unknown57(__int64 a1);

__int64 TelopNoticeNewAction_Unknown57(__int64 a1)
{

#pragma clang fp contract(off)
  unsigned __int64 v1;
  unsigned __int64 v2;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  const char* v11;
  __int64* v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64* v18;
  char** v19;
  __int64* v20;
  char* v21;
  unsigned __int64 v22;
  __int64 v23;
  const char* v24;
  __int64 v25;
  const char* v26;
  char v27;
  _BYTE* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  const char* v34;
  char v35;
  __int64 v36;
  const char* v37[2];
  struct {
    __int64* v38;
    __int64 v39;
    unsigned __int64 v40;
    unsigned __int64 v41;
    int v42;
    int v43;
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
    int v56;
    int v57;
  } v38_;
  float v58[3];

  v1 = *(unsigned __int8*)(a1 + 1176);
  v2 = *(_QWORD*)(a1 + 1184);
  if ((v1 & 1) == 0) {
    v2 = v1 >> 1;
  }
  if (v2 != 0) {
    if ((v1 & 1) != 0) {
      v4 = *(_QWORD*)(a1 + 1192);
    }
    else {
      v4 = a1 + 1177;
    }
    v5 = GameRoutine_1760e40(a1, 0);
    v6 = v5;
    if (v4 != 0) {
      v7 = ui_LayoutAccessor_FindTextBox(v5, "L_Txt/T_Txt");
      if (v7 != 0) {
        GameRoutine_156c5d0(v7, v4, 0);
      }
    }
    v8 = ui_LayoutAccessor_FindTextBox(v6, "L_Txt/T_Txt");
    if (v8 != 0) {
      v9 = v8;
      v10 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v6, "L_Txt/T_Txt");
      if (v10 != nullptr) {
        GameRoutine_190a0c0((float*)&v38_.v38, (__int64)v37, v58, v10, v10[27]);
        v11 = v37[0];
      }
      else {
        v11 = nullptr;
      }
      v27 = *(_BYTE*)(v9 + 88);
      *(_QWORD*)(v9 + 80) = v11;
      *(_BYTE*)(v9 + 88) = v27 | 0x10;
    }
    return game_17356e0(v6, "L_Txt");
  }
  v12 = GameRoutine_1760e40(a1, 0);
  v37[0] = "L_Txt";
  v37[1] = (_BYTE*)((_UNKNOWN*)0x5LL);
  GameRoutine_9b8fe0((void*)(&v38_.v38), v12, v37);
  result = v38_.v39;
  if (v38_.v39 == 0) {
    return result;
  }
  v14 = std___1___shared_weak_count_lock(v38_.v39);
  v15 = (__int64)v38_.v38;
  result = v38_.v39;
  if (v38_.v39 != 0) {
    result = std___1___shared_weak_count___release_weak(v38_.v39);
  }
  if (v14 != 0 && v15 != 0) {
    v16 = *(_QWORD*)(a1 + 1168);
    v36 = v14;
    if (*(_WORD*)(v16 + 72) != 0) {
      v17 = 0;
      v18 = msg_MessageManager_instance__ptr[0];
      v19 = msg_MessageManager_empty_text__ptr;
      v20 = GameData_212e348 + 2;
      do {
        v25 = *v18;
        v26 = *(const char**)(*(_QWORD*)(v16 + 80) + 8 * v17);
        if (v26 != nullptr && *v26 != 0) {
          v38_.v44 = -1;
          v38_.v45 = -1;
          v38_.v46 = -1;
          v38_.v47 = -1;
          v38_.v48 = -1;
          v38_.v49 = -1;
          v38_.v50 = -1;
          v38_.v51 = -1;
          v38_.v52 = -1;
          v38_.v53 = -1;
          v38_.v54 = -1;
          v38_.v55 = -1;
          v38_.v38 = v20;
          v38_.v39 = 0xFFFF0001FFFF0000LL;
          v38_.v40 = 0xFFFF0004FFFF0002LL;
          v38_.v41 = 0xFFFF0006FFFF0005LL;
          v38_.v56 = 8;
          v38_.v57 = 0;
          v38_.v42 = -65529;
          v38_.v43 = -65528;
          v21 = GameRoutine_a4dbe0(v25, v26, 0);
        }
        else {
          v21 = *v19;
        }
        if (v17 <= 7) {
          v22 = v17;
        }
        else {
          v22 = 0;
        }
        v23 = v25 + 24 * v22;
        if (v21 != nullptr) {
          v24 = v21;
        }
        else {
          v24 = *v19;
        }
        GameRoutine_60a020(v23 + 14704, v24);
        v16 = *(_QWORD*)(a1 + 1168);
        ++v17;
      } while (v17 < *(unsigned __int16*)(v16 + 72));
    }
    TextBoxEx_188ab20(v15, *(const char**)(v16 + 64));
    v28 = *(_BYTE**)(*(_QWORD*)(a1 + 1168) + 88LL);
    if (v28 == nullptr) {
      goto LABEL_45;
    }
    if (*v28 == 0) {
      goto LABEL_45;
    }
    TextBoxEx_188aa00((void*)(&v38_.v38), v15, 0);
    if (v38_.v39 == 0) {
      goto LABEL_45;
    }
    v29 = std___1___shared_weak_count_lock(v38_.v39);
    v30 = (__int64)v38_.v38;
    if (v38_.v39 != 0) {
      std___1___shared_weak_count___release_weak(v38_.v39);
    }
    if (v29 != 0 && v30 != 0) {
      EmbeddedImage_1889fc0(v30, *(_BYTE**)(*(_QWORD*)(a1 + 1168) + 88LL));
      (*(void (**)(__int64, __int64))(*(_QWORD*)v30 + 40LL))(v30, 1);
    }
    else if (v29 == 0) {
    LABEL_45:
      v31 = ui_LayoutAccessor_FindTextBox(v12, "L_Txt/T_Txt");
      if (v31 != 0) {
        v32 = v31;
        v33 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v12, "L_Txt/T_Txt");
        if (v33 != nullptr) {
          GameRoutine_190a0c0((float*)&v38_.v38, (__int64)v37, v58, v33,
                              v33[27]);
          v34 = v37[0];
        }
        else {
          v34 = nullptr;
        }
        v35 = *(_BYTE*)(v32 + 88);
        *(_QWORD*)(v32 + 80) = v34;
        *(_BYTE*)(v32 + 88) = v35 | 0x10;
      }
      result = game_17356e0(v12, "L_Txt");
      v14 = v36;
      goto LABEL_51;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
      std___1___shared_weak_count___release_weak(v29);
    }
    goto LABEL_45;
  }
LABEL_51:
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    return std___1___shared_weak_count___release_weak(v14);
  }
  return result;
}

__int64 TelopNoticeNewAction_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if ((*(_BYTE*)(a1 + 1176) & 1) != 0) {
    v1 = *(_QWORD*)(a1 + 1192);
    if (v1 != 0) {
      v2 = a1;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v1);
      a1 = v2;
    }
  }
  return game_telop_TelopResult_Destroy_TelopResult(a1);
}

__int64 TelopNoticeNewAction_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 1176) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 1192);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  game_telop_TelopResult_Destroy_TelopResult(a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5, a1);
}

#pragma GCC visibility pop
