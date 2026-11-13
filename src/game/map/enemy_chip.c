#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameHr_136ac50(__int64, __int64, __int64);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_Manager_instance_;
void nn_mem_StandardAllocator_Free(__int64, __int64);
void EnemyChip_SetIcon(__int64 a1, __int64 a2);

void EnemyChip_SetIcon(__int64 a1, __int64 a2)
{
  int v4;
  const char* v5;
  unsigned __int64 v6;
  _BYTE* v7;
  char* v8;
  __int64 v9;
  char v10;
  __int64 v11;
  const char* v12;
  unsigned __int64 v13;
  _BYTE* v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  const char* v18;
  unsigned __int64 v19;
  _BYTE* v20;
  char* v21;
  __int64 v22;
  char v23;
  __int64 v24;
  __int64 v25;
  __int64 v26[3];
  struct {
    unsigned __int8 v27;
    char v28[7];
    unsigned __int64 v29;
    const char* v30;
  } v28_;

  v28_.v27 = 12;
  strcpy(v28_.v28, "_Enemy");
  if (*(_BYTE*)(a1 + 76) == 1) {
    GameRoutine_1a09ce0((__int64)&v28_.v27, "Strong", 6u);
  }
  v4 = *(_DWORD*)(*(_QWORD*)(a1 + 40) + 592LL);
  if (v4 < 2) {
    strcpy((char*)v26, "&Battle_MiniMap_Unit");
    if ((v28_.v27 & 1) != 0) {
      v18 = v28_.v30;
    }
    else {
      v18 = v28_.v28;
    }
    if ((v28_.v27 & 1) != 0) {
      v19 = v28_.v29;
    }
    else {
      v19 = (unsigned __int64)v28_.v27 >> 1;
    }
    GameRoutine_1a09ce0((__int64)v26, v18, v19);
    if (a2 != 0) {
      if ((v26[0] & 1) != 0) {
        v20 = (_BYTE*)v26[2];
      }
      else {
        v20 = (char*)v26 + 1;
      }
      Manager_136a920(ui_Manager_instance_ + 1264, a2, 0, 8u, v20);
    }
    v15 = v26[2];
    v16 = (v26[0] & 1) == 0;
    v17 = ui_Manager_instance_;
    goto LABEL_50;
  }
  if (v4 == 2) {
    strcpy((char*)v26, ",Battle_MiniMap_Unit2x2");
    if ((v28_.v27 & 1) != 0) {
      v5 = v28_.v30;
    }
    else {
      v5 = v28_.v28;
    }
    if ((v28_.v27 & 1) != 0) {
      v6 = v28_.v29;
    }
    else {
      v6 = (unsigned __int64)v28_.v27 >> 1;
    }
    GameRoutine_1a09ce0((__int64)v26, v5, v6);
    if (a2 != 0) {
      if ((v26[0] & 1) != 0) {
        v7 = (_BYTE*)v26[2];
      }
      else {
        v7 = (char*)v26 + 1;
      }
      Manager_136a920(ui_Manager_instance_ + 1264, a2, 0, 8u, v7);
    }
    if ((v26[0] & 1) != 0) {
      v8 = (char*)v26[2];
    }
    else {
      v8 = (char*)v26 + 1;
    }
    v9 = GameHr_136ac50(ui_Manager_instance_ + 1264, 8, (__int64)v8);
    v10 = v26[0];
    *(_QWORD*)(a1 + 48) = v9;
    if ((v10 & 1) != 0 && v26[2] != 0) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v26[2]);
    }
    v4 = *(_DWORD*)(*(_QWORD*)(a1 + 40) + 592LL);
  }
  if (v4 == 3) {
    strcpy((char*)v26, ",Battle_MiniMap_Unit3x3");
    if ((v28_.v27 & 1) != 0) {
      v12 = v28_.v30;
    }
    else {
      v12 = v28_.v28;
    }
    if ((v28_.v27 & 1) != 0) {
      v13 = v28_.v29;
    }
    else {
      v13 = (unsigned __int64)v28_.v27 >> 1;
    }
    GameRoutine_1a09ce0((__int64)v26, v12, v13);
    if (a2 != 0) {
      if ((v26[0] & 1) != 0) {
        v14 = (_BYTE*)v26[2];
      }
      else {
        v14 = (char*)v26 + 1;
      }
      Manager_136a920(ui_Manager_instance_ + 1264, a2, 0, 8u, v14);
    }
    v15 = v26[2];
    v16 = (v26[0] & 1) == 0;
    v17 = ui_Manager_instance_;
  LABEL_50:
    if (v16) {
      v21 = (char*)v26 + 1;
    }
    else {
      v21 = (char*)v15;
    }
    v22 = GameHr_136ac50(v17 + 1264, 8, (__int64)v21);
    v23 = v26[0];
    *(_QWORD*)(a1 + 48) = v22;
    if ((v23 & 1) != 0 && v26[2] != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v26[2]);
    }
  }
  if ((v28_.v27 & 1) != 0 && v28_.v30 != nullptr) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v25,
                                  (__int64)v28_.v30);
  }
}

#pragma GCC visibility pop
