#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__int64* SpineModel_190e620(__int64* result, _QWORD*, __int64*, _QWORD*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
int memcmp(__int64, __int64, unsigned __int64);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 cspine_1911530(__int64* a1, __int64* a2, __int64 a3,
                       unsigned __int64 a4, char a5, char a6, unsigned int a7);

__int64 cspine_1911530(__int64* a1, __int64* a2, __int64 a3,
                       unsigned __int64 a4, char a5, char a6, unsigned int a7)
{
  char* v14;
  __int64 v15;
  __int64 v16;
  char v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  unsigned __int64 v22;
  unsigned int v23;
  unsigned __int64 v24;
  __int64 v25;
  char* v26;
  unsigned __int64 v27;
  char* v28;
  unsigned __int64 v29;
  _BOOL4 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64* v34;
  __int64 v35;
  unsigned __int64 v36;
  char* v37;
  char* v38;
  unsigned __int64 v39;
  __int64 v40;
  char* v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  struct {
    __int64 v51;
    unsigned __int64 v52;
    char* v53;
  } v51_;
  struct {
    __int64 v54;
    unsigned __int64 v55;
    char* v56;
  } v54_;
  struct {
    __int64 v57;
    __int64 v58;
    __int64 v59;
  } v57_;
  __int64 v60[2];
  _QWORD v61[2];
  __int64 v62[2];
  struct {
    const char* v63;
    unsigned __int64 v64;
  } v63_;
  struct {
    __int64 v65;
    __int64 v66;
    char* v67;
  } v65_;

  LOWORD(v54_.v54) = 0;
  if (a4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  if (a4 >= 0x17) {
    if ((a4 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (a4 | 7) + 1;
    }
    v14 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v15,
                                                16, 0);
    v51_.v52 = a4;
    v51_.v53 = v14;
    v51_.v51 = v15 | 1;
    goto LABEL_9;
  }
  LOBYTE(v51_.v51) = 2 * a4;
  v14 = (char*)&v51_.v51 + 1;
  if (a4 != 0) {
  LABEL_9:
    memcpy((__int64)v14, a3, a4);
  }
  v14[a4] = 0;
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(&v65_.v65, a2[2], a2[1]);
    if ((a5 & 1) == 0) {
    LABEL_12:
      v17 = 0;
      if ((v65_.v65 & 1) == 0) {
        goto LABEL_109;
      }
      goto LABEL_105;
    }
  }
  else {
    v16 = a2[1];
    v65_.v65 = *a2;
    v65_.v66 = v16;
    v65_.v67 = (char*)a2[2];
    if ((a5 & 1) == 0) {
      goto LABEL_12;
    }
  }
  v18 = *(unsigned __int8*)a2;
  v19 = a2[1];
  if ((v18 & 1) == 0) {
    v19 = v18 >> 1;
  }
  if (v19 == 0 || *a1 != 0) {
    v17 = a6 ^ 1;
    if ((v65_.v65 & 1) == 0) {
      goto LABEL_109;
    }
    goto LABEL_105;
  }
  v20 = a2[2];
  v61[0] = 0;
  v61[1] = 0;
  v62[0] = 0;
  v62[1] = 0;
  if ((v18 & 1) != 0) {
    v21 = (char*)v20;
  }
  else {
    v21 = (char*)a2 + 1;
  }
  v63_.v63 = nullptr;
  v63_.v64 = 0;
  v60[0] = (__int64)v21;
  v60[1] = v19;
  SpineModel_190e620(v60, v61, v62, &v63_.v63);
  if ((v51_.v51 & 1) != 0) {
    v22 = v51_.v52;
  }
  else {
    v22 = (unsigned __int64)(unsigned __int8)v51_.v51 >> 1;
  }
  if (v22 != 0) {
    v57_.v58 = 0;
    v57_.v59 = 0;
    v57_.v57 = 0;
    if (v63_.v64 != 0) {
      GameRoutine_1a09ce0((__int64)&v57_.v57, v63_.v63, v63_.v64);
      v23 = (unsigned __int8)v57_.v57;
      v24 = v57_.v58;
      v25 = v57_.v59;
    }
    else {
      v24 = 0;
      v25 = 0;
      v23 = 0;
    }
    if ((v23 & 1) != 0) {
      v26 = (char*)v25;
    }
    else {
      v26 = (char*)&v57_.v57 + 1;
    }
    if ((v23 & 1) != 0) {
      v27 = v24;
    }
    else {
      v27 = v23 >> 1;
    }
    if ((v51_.v51 & 1) != 0) {
      v28 = v51_.v53;
    }
    else {
      v28 = (char*)&v51_.v51 + 1;
    }
    if (v27 >= v22) {
      v29 = v22;
    }
    else {
      v29 = v27;
    }
    v31 = memcmp((__int64)v28, (__int64)v26, v29) == 0 && v22 == v27;
    if ((v23 & 1) != 0 && v25 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v25);
    }
    if (!v31) {
      goto LABEL_62;
    }
  }
  v33 = *(unsigned __int8*)a2;
  v34 = (v33 & 1) != 0 ? (__int64*)a2[2] : (__int64*)((char*)a2 + 1);
  v35 = (v33 & 1) != 0 ? a2[1] : v33 >> 1;
  if (((*(__int64 (**)(_QWORD, __int64*, __int64, __int64))(
           **(_QWORD**)(game_g_frame_clock + 13432) + 96LL))(
           *(_QWORD*)(game_g_frame_clock + 13432), v34, v35, 255) &
       1) == 0) {
  LABEL_62:
    if ((v54_.v54 & 1) != 0) {
      v36 = v54_.v55;
    }
    else {
      v36 = (unsigned __int64)(unsigned __int8)v54_.v54 >> 1;
    }
    if (v36 == 0 ||
        ((v54_.v54 & 1) != 0 ? (v37 = v54_.v56) : (v37 = (char*)&v54_.v54 + 1),
         ((*(__int64 (**)(_QWORD, char*))(
              **(_QWORD**)(game_g_frame_clock + 13432) + 96LL))(
              *(_QWORD*)(game_g_frame_clock + 13432), v37) &
          1) == 0)) {
      if ((*(_BYTE*)a2 & 1) != 0) {
        *(_BYTE*)a2[2] = 0;
        a2[1] = 0;
      }
      else {
        *(_WORD*)a2 = 0;
      }
      goto LABEL_96;
    }
    if ((v65_.v65 & 1) != 0) {
      if ((v54_.v54 & 1) != 0) {
        v38 = v54_.v56;
      }
      else {
        v38 = (char*)&v54_.v54 + 1;
      }
      if ((v54_.v54 & 1) != 0) {
        v39 = v54_.v55;
      }
      else {
        v39 = (unsigned __int64)(unsigned __int8)v54_.v54 >> 1;
      }
      SpineModel_64dde0(&v65_.v65, (__int64)v38, v39);
    }
    else if ((v54_.v54 & 1) != 0) {
      GameRoutine_64df20(&v65_.v65, (__int64)v54_.v56, v54_.v55);
    }
    else {
      v65_.v65 = v54_.v54;
      v65_.v66 = v54_.v55;
      v65_.v67 = v54_.v56;
    }
  }
  if (a2 != &v65_.v65) {
    if ((*(_BYTE*)a2 & 1) != 0) {
      if ((v65_.v65 & 1) != 0) {
        v41 = v65_.v67;
      }
      else {
        v41 = (char*)&v65_.v65 + 1;
      }
      if ((v65_.v65 & 1) != 0) {
        v42 = v65_.v66;
      }
      else {
        v42 = (unsigned __int64)(unsigned __int8)v65_.v65 >> 1;
      }
      SpineModel_64dde0(a2, (__int64)v41, v42);
    }
    else if ((v65_.v65 & 1) != 0) {
      GameRoutine_64df20(a2, (__int64)v65_.v67, v65_.v66);
    }
    else {
      v40 = v65_.v66;
      *a2 = v65_.v65;
      a2[1] = v40;
      a2[2] = (__int64)v65_.v67;
    }
  }
LABEL_96:
  v57_.v57 = 0;
  v57_.v58 = 0;
  if ((v65_.v65 & 1) != 0) {
    v43 = v65_.v66;
  }
  else {
    v43 = (unsigned __int64)(unsigned __int8)v65_.v65 >> 1;
  }
  if ((v65_.v65 & 1) != 0) {
    v44 = v65_.v67;
  }
  else {
    v44 = (char*)&v65_.v65 + 1;
  }
  v45 = (*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64*, _QWORD))(
      **(_QWORD**)(game_g_frame_clock + 13432) + 16LL))(
      *(_QWORD*)(game_g_frame_clock + 13432), v44, v43, &v57_.v57, a7);
  v46 = v57_.v58;
  *a1 = v45;
  if (v46 != 0) {
    std___1___shared_weak_count___release_weak(v46);
    v45 = *a1;
  }
  v17 = v45 != 0;
  if ((v65_.v65 & 1) != 0) {
  LABEL_105:
    if (v65_.v67 != nullptr) {
      v47 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v47 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v47, (__int64)v65_.v67);
    }
  }
LABEL_109:
  if ((v51_.v51 & 1) != 0 && v51_.v53 != nullptr) {
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v48,
                                  (__int64)v51_.v53);
  }
  if ((v54_.v54 & 1) != 0 && v54_.v56 != nullptr) {
    v49 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v49,
                                  (__int64)v54_.v56);
  }
  return v17 & 1;
}

#pragma GCC visibility pop
