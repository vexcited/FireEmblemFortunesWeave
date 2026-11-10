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

__attribute__((swiftcall)) void TheaterWatchArgs_13db060(PSEUDO_X8 x8_,
                                                         __int64 a1, int a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  unsigned int v5;
  const char* v6;
  char* v7;
  __n128 result;
  char* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    __int64 v15;
    unsigned __int64 v16;
    char* v17;
    char gap32_[8];
    char v18;
    char gap41_[15];
    __int64 v19;
    char gap64_[8];
    char v20;
    char gap73_[15];
    __int64 v21;
    char v22;
    char gap97_[15];
    __int64 v23;
  } v15_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
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
  SceneTalk_1497180(
      &v15_.v15, (__int64)"StageWatch", 0xAu,
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL * a2) + 392LL),
      (__int64)v6, 3u, 1u),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v15_.v15 & 1) != 0) {
    v7 = v15_.v17;
  }
  else {
    v7 = (char*)&v15_.v15 + 1;
  }
  if (((unsigned int)Registration_a4da40(msg_MessageManager_instance_,
                                         (__int64)v7) &
       1) != 0 &&
      ((v15_.v15 & 1) != 0 ? (v9 = v15_.v17) : (v9 = (char*)&v15_.v15 + 1),
       (Manager_a51640(msg_MessageManager_instance_, (__int64)v9, v9) & 1) !=
           0)) {
    if ((v15_.v15 & 1) != 0) {
      fw_text_String_CopyTerminated(a3, (__int64)v15_.v17, v15_.v16),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      if ((v15_.v22 & 1) == 0) {
        goto LABEL_22;
      }
    }
    else {
      v10 = v15_.v16;
      *a3 = v15_.v15;
      a3[1] = v10;
      a3[2] = (__int64)v15_.v17;
      if ((v15_.v22 & 1) == 0) {
        goto LABEL_22;
      }
    }
  }
  else {
    *(_WORD*)a3 = 0;
    if ((v15_.v22 & 1) == 0) {
      goto LABEL_22;
    }
  }
  if (v15_.v23 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
  }
LABEL_22:
  if ((v15_.v20 & 1) != 0 && v15_.v21 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
  }
  if ((v15_.v18 & 1) != 0 && v15_.v19 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
  }
  if ((v15_.v15 & 1) != 0 && v15_.v17 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    {
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v14),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      return;
    }
  }
  {
    result;
    return;
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
