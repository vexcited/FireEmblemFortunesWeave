#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_634d80(_QWORD, _QWORD);
__int64 GameRoutine_6b4ef0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6b50a0(_QWORD);
__int64 fw_graphics_ReadSettings(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ce30;
extern __int64* game_g_frame_clock_ptr[3];
void __attribute__((noreturn)) String_60a1d0(_QWORD, _QWORD, _QWORD);
__int64 Settings_aa1690(__int64 a1, __int64 a2, unsigned __int64 a3);

__int64 Settings_aa1690(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD* v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  char* v12;
  unsigned __int64 v13;
  __int64** v14;
  __int64* v15;
  __int64* v16;
  __int64* v17;
  char* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  unsigned __int64 v24;
  char* v25;
  __int64 result;
  char* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD v34[7];
  _QWORD v35[2];
  char* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
  __int64* v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int16 v47;
  int v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  char* v53;
  __int64 v54;
  unsigned __int64 v55;
  char* v56;

  v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v7 = (char*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v35[0] = 33;
  v35[1] = 28;
  v36 = v7;
  strcpy(v7, "Contents:/Graphics/Settings/");
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v7, v8, v9);
  }
  if (a3 >= 0x17) {
    if ((a3 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (a3 | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate(*v6, v11, 16, 0);
    v52 = a3;
    v53 = v10;
    v51 = v11 | 1;
    goto LABEL_9;
  }
  LOBYTE(v51) = 2 * a3;
  v10 = (char*)&v51 + 1;
  if (a3 != 0) {
  LABEL_9:
    memmove(v10, a2, a3);
  }
  v10[a3] = 0;
  if ((v51 & 1) != 0) {
    v12 = v53;
  }
  else {
    v12 = (char*)&v51 + 1;
  }
  if ((v51 & 1) != 0) {
    v13 = v52;
  }
  else {
    v13 = (unsigned __int64)(unsigned __int8)v51 >> 1;
  }
  v14 = (__int64**)GameRoutine_1a09ce0(v35, v12, v13);
  v16 = v14[1];
  v15 = v14[2];
  v40 = *v14;
  v41 = v16;
  v42 = v15;
  v14[1] = nullptr;
  v14[2] = nullptr;
  *v14 = nullptr;
  v17 = (__int64*)GameRoutine_1a09ce0(&v40, ".set", 4);
  v19 = v17[1];
  v18 = (char*)v17[2];
  v54 = *v17;
  v55 = v19;
  v56 = v18;
  v17[1] = 0;
  v17[2] = 0;
  *v17 = 0;
  if (((unsigned __int8)v40 & 1) != 0 && v42 != nullptr) {
    v20 = 128;
    if (*(_QWORD*)(*v6 + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v20, v42);
  }
  if ((v51 & 1) != 0 && v53 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*v6 + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v21, v53);
  }
  if ((v35[0] & 1) != 0 && v36 != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*v6 + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v22, v36);
  }
  v23 = game_g_frame_clock_ptr[0];
  if ((v54 & 1) != 0) {
    v24 = v55;
  }
  else {
    v24 = (unsigned __int64)(unsigned __int8)v54 >> 1;
  }
  if ((v54 & 1) != 0) {
    v25 = v56;
  }
  else {
    v25 = (char*)&v54 + 1;
  }
  result = (*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
      **(_QWORD**)(*game_g_frame_clock_ptr[0] + 13432) + 96LL))(
      *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432), v25, v24, 255);
  if ((result & 1) != 0) {
    if ((v54 & 1) != 0) {
      v27 = v56;
    }
    else {
      v27 = (char*)&v54 + 1;
    }
    if ((v54 & 1) != 0) {
      v28 = v55;
    }
    else {
      v28 = (unsigned __int64)(unsigned __int8)v54 >> 1;
    }
    v29 = (*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
        **(_QWORD**)(*v23 + 13432) + 56LL))(*(_QWORD*)(*v23 + 13432), v27, v28,
                                            255);
    v30 = *(_QWORD*)(v29 + 592);
    v31 = v29;
    if (v30 != 0) {
      v47 = 257;
      v32 = *(_QWORD*)(v29 + 576);
      v42 = nullptr;
      v43 = 0;
      v45 = 0;
      v46 = 0;
      v48 = 0;
      v49 = v30;
      v50 = v32;
      v44 = -1;
      memset(&v34[4], 0, 24);
      v40 = GameData_212ce30 + 2;
      v41 = nullptr;
      v34[0] = 0x2000;
      v34[1] = 256;
      v34[2] = 2048;
      v34[3] = 16;
      GameRoutine_6b4ef0(v35, &v40, v34);
      if (*(_QWORD*)(*(_QWORD*)(v37 +
                                8 * ((unsigned __int64)(v39 + v38 - 1) >> 9)) +
                     8 * ((v39 + v38 - 1) & 0x1FF)) != 0) {
        fw_graphics_ReadSettings(a1, v35);
      }
      GameRoutine_6b50a0(v35);
      ((void (*)(__int64**))v40[3])(&v40);
    }
    result = GameRoutine_634d80(*(_QWORD*)(v31 + 8), v31);
  }
  if ((v54 & 1) != 0 && v56 != nullptr) {
    v33 = 128;
    if (*(_QWORD*)(*v6 + 200LL) == 0) {
      v33 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v6 + v33, v56);
  }
  return result;
}

#pragma GCC visibility pop
