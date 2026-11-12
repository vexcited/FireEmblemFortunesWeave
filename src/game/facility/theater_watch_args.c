#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* Registration_a4da40(__int64, __int64);
__int64 GameRoutine_196e120(_QWORD, _QWORD);
__int64 Manager_a51640(__int64, __int64, _DWORD*);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN* GameData_2035bb0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 msg_MessageManager_instance_;
void SceneTalk_1497180(_DWORD*, __int64, unsigned __int64, __int64, __int64,
                       unsigned __int64, unsigned int);
__attribute__((swiftcall)) void TheaterWatchArgs_13db060(PSEUDO_X8 x8_,
                                                         __int64 a1, int a2);
__attribute__((swiftcall)) void TheaterWatchArgs_Destructor(PSEUDO_X8 x8_,
                                                            __int64 result,
                                                            __int64 a2,
                                                            unsigned int a3);
__int64* Registration_a4da40_alt1(__int64,
                                  const char*) __asm__("Registration_a4da40");
__int64 Manager_a51640_alt1(__int64, const char*,
                            _DWORD*) __asm__("Manager_a51640");
void SceneTalk_1497180_alt1(unsigned __int8*, __int64, unsigned __int64,
                            __int64, __int64, unsigned __int64,
                            int) __asm__("SceneTalk_1497180");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__attribute__((swiftcall)) void TheaterWatchArgs_13db060(PSEUDO_X8 x8_,
                                                         __int64 a1, int a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  unsigned int v5;
  const char* v6;
  const char* v7;
  char* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64 v14;
    unsigned __int64 v15;
    char* v16;
    char gap32_[8];
    char v17;
    char gap41_[15];
    __int64 v18;
    char gap64_[8];
    char v19;
    char gap73_[15];
    __int64 v20;
    char v21;
    char gap97_[15];
    __int64 v22;
  } v14_;

  v4 = 40;
  if (a2 != 0) {
    v4 = 41;
  }
  v5 = *(unsigned __int8*)(a1 + v4) - 1;
  if (v5 > 2) {
    v6 = "m03";
  }
  else {
    v6 = (const char*)*(&GameData_2035bb0 + (unsigned __int8)v5);
  }
  SceneTalk_1497180_alt1(
      (unsigned __int8*)&v14_.v14, (__int64)"StageWatch", 0xAu,
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL * a2) + 392LL),
      (__int64)v6, 3u, 1);
  if ((v14_.v14 & 1) != 0) {
    v7 = v14_.v16;
  }
  else {
    v7 = (char*)&v14_.v14 + 1;
  }
  if (((unsigned int)Registration_a4da40_alt1(msg_MessageManager_instance_,
                                              v7) &
       1) != 0 &&
      ((v14_.v14 & 1) != 0 ? (v8 = v14_.v16) : (v8 = (char*)&v14_.v14 + 1),
       (Manager_a51640_alt1(msg_MessageManager_instance_, v8, v8) & 1) != 0)) {
    if ((v14_.v14 & 1) != 0) {
      fw_text_String_CopyTerminated(a3, (__int64)v14_.v16, v14_.v15);
      if ((v14_.v21 & 1) == 0) {
        goto LABEL_22;
      }
    }
    else {
      v9 = v14_.v15;
      *a3 = v14_.v14;
      a3[1] = v9;
      a3[2] = (__int64)v14_.v16;
      if ((v14_.v21 & 1) == 0) {
        goto LABEL_22;
      }
    }
  }
  else {
    *(_WORD*)a3 = 0;
    if ((v14_.v21 & 1) == 0) {
      goto LABEL_22;
    }
  }
  if (v14_.v22 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v14_.v22);
  }
LABEL_22:
  if ((v14_.v19 & 1) != 0 && v14_.v20 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v14_.v20);
  }
  if ((v14_.v17 & 1) != 0 && v14_.v18 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v14_.v18);
  }
  if ((v14_.v14 & 1) != 0 && v14_.v16 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, (__int64)v14_.v16);
  }
}

__attribute__((swiftcall)) void TheaterWatchArgs_Destructor(PSEUDO_X8 x8_,
                                                            __int64 result,
                                                            __int64 a2,
                                                            unsigned int a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  _QWORD* v6;
  int v7;

  if (a2 == 0) {
    goto LABEL_4;
  }
  v5 = result;
  result = GameRoutine_196e120(a2, a3);
  v6 = *(_QWORD**)(v5 + 8);
  if (*(_QWORD*)(*v6 + 392LL) == result) {
    v7 = 0;
  }
  else {
    if (*(_QWORD*)(v6[1] + 392LL) != result) {
    LABEL_4:
      *(_WORD*)a4 = 0;
      {
        result;
        return;
      }
    }
    v7 = 1;
  }
  {
    X8CALL_X0(__int64, TheaterWatchArgs_13db060((void*)(a4), v5, v7));
    return;
  }
}

#pragma GCC visibility pop
