#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* msg_MessageManager_instance__ptr[2];
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD, _QWORD, _QWORD,
                                                  _QWORD, _QWORD);
__int64 ModeMenuItem_Unknown55(_QWORD* a1);
const char* ModeMenuItem_Unknown70(__int64 a1);

__int64 ModeMenuItem_Unknown55(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  char* v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD v20[2];
  char* v21;
  _QWORD v22[4];
  int v23;
  int v24;
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
  __int64 v35;
  __int64 v36;
  __int64 v37;

  result = a1[7];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = a1[6];
      v4 = result;
      if (v3 == 0) {
      LABEL_27:
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          return std___1___shared_weak_count___release_weak(v4);
        }
        return result;
      }
      v5 = (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
      v6 = strlen(v5);
      if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
        GameRoutine_60a1d0(v6, v7, v8, v9, v10);
      }
      v11 = v6;
      if (v6 >= 0x17) {
        if ((v6 | 7) == 0x17) {
          v13 = 26;
        }
        else {
          v13 = (v6 | 7) + 1;
        }
        v12 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    v13, 16, 0);
        v20[1] = v11;
        v21 = v12;
        v20[0] = v13 | 1;
      }
      else {
        LOBYTE(v20[0]) = 2 * v6;
        v12 = (char*)v20 + 1;
        if (v6 == 0) {
          goto LABEL_13;
        }
      }
      memmove(v12, v5, v11);
    LABEL_13:
      v12[v11] = 0;
      if ((v20[0] & 1) != 0) {
        v14 = v21;
      }
      else {
        v14 = (char*)v20 + 1;
      }
      GameRoutine_1562060(v3, "T_Name", v14);
      if ((v20[0] & 1) != 0) {
        v15 = v21;
      }
      else {
        v15 = (char*)v20 + 1;
      }
      v16 = game_util_Format("%s_Help", v15);
      v25 = -1;
      v26 = -1;
      v27 = -1;
      v28 = -1;
      v17 = *msg_MessageManager_instance__ptr[0];
      v29 = -1;
      v30 = -1;
      v31 = -1;
      v32 = -1;
      v33 = -1;
      v34 = -1;
      v35 = -1;
      v36 = -1;
      v22[0] = msg_TagSelector_vtable;
      v22[1] = 0xFFFF0001FFFF0000LL;
      v22[2] = 0xFFFF0004FFFF0002LL;
      v22[3] = 0xFFFF0006FFFF0005LL;
      v37 = 8;
      v23 = -65529;
      v24 = -65528;
      result = GameRoutine_a4dbe0(v17, v16, 0, v22);
      if (result != 0) {
        v18 = result;
        result = ui_LayoutAccessor_FindTextBox(v3, "T_Help");
        if (result != 0) {
          result = GameRoutine_156c5d0(result, v18, 0);
        }
      }
      if ((v20[0] & 1) != 0 && v21 != nullptr) {
        v19 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v19 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, (_QWORD)(v21));
      }
      goto LABEL_27;
    }
  }
  return result;
}

const char* ModeMenuItem_Unknown70(__int64 a1)
{
  const char* v1;

  v1 = "MID_Mode_Classic";
  if (*(_BYTE*)(a1 + 83) != 1) {
    v1 = nullptr;
  }
  if (*(_BYTE*)(a1 + 83) != 0) {
    return v1;
  }
  else {
    return "MID_Mode_Casual";
  }
}

#pragma GCC visibility pop
