#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 GameData_212dbd0[6];
extern __int64 GameData_21f3c90;
extern __int64 as_g_thread_info;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64* as_g_script_manager_ptr;
_QWORD* HubScheduleNatives_dafab0(int* a1);
bool HubScheduleNatives_db06b0(__int64 a1);

_QWORD* HubScheduleNatives_dafab0(int* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* result;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[2];
  __int64 v17;

  v2 = *as_g_script_manager_ptr;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  result = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (result == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v6))((__int64)result);

LABEL_9:
  v8 = *a1;
  v7 = a1[1];
  v10 = a1[2];
  v9 = a1[3];
  v12 = a1[4];
  v11 = a1[5];
  v13 = *(_QWORD*)GameData_212dbd0[0];
  if (*(_BYTE*)(*(_QWORD*)GameData_212dbd0[0] + 28LL) == 1) {
    *(_WORD*)(v13 + 16) = v8;
    *(_WORD*)(v13 + 20) = v10;
    *(_WORD*)(v13 + 24) = v12;
  }
  else {
    *(_WORD*)(v13 + 16) = v8;
    *(_WORD*)(v13 + 20) = v10;
    *(_WORD*)(v13 + 24) = v12;
    *(_BYTE*)(v13 + 28) = 1;
  }
  *(_WORD*)(v13 + 18) = v7;
  *(_WORD*)(v13 + 22) = v9;
  v14 = GameData_21f3c90;
  *(_WORD*)(v13 + 26) = v11;
  if (v14 != 0) {
    v16[1] = 0;
    v17 = 0;
    v16[0] = 0;
    result = (_QWORD*)GameRoutine_1a09ce0(v16, "Insert - ProgressDate", 21);
    if ((v16[0] & 1) != 0 && v17 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v17);
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 152) = 2;
  }
  return result;
}

bool HubScheduleNatives_db06b0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  _BOOL4 v10;
  int v11;
  int v12;
  int v13;
  int v14;
  __int16 v15;
  char v16;
  __int64 v17;
  __int16 v20;
  char v21;

  v2 = *as_g_script_manager_ptr;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);

LABEL_9:
  v7 = 4502;
  v8 = game_gmap_GmapClock_instance_;
  if (game_gmap_GmapClock_instance_ != 0) {
    v9 = *(__int16*)(game_gmap_GmapClock_instance_ + 10);
    v8 = *(__int16*)(game_gmap_GmapClock_instance_ + 12);
    v7 = *(__int16*)(game_gmap_GmapClock_instance_ + 8) + 4502;
  }
  else {
    v9 = 0;
  }
  v10 = v9 < 3;
  if (v9 < 3) {
    v9 += 12;
  }
  v11 = v7 - v10;
  v12 = v11 + 3;
  v13 = v11 + v8;
  if (v11 >= 0) {
    v12 = v11;
  }
  v14 = (unsigned __int8)((v13 + (v12 >> 2) + v11 / -100 + v11 / 400 +
                           (13 * v9 + 8) / 5) %
                          7);
  if (v14 <= 3) {
    if (v14 != 1) {
      if (v14 != 2) {
        if (v14 == 3) {
          v21 = -76;
          v15 = -20250;
          goto LABEL_31;
        }
      LABEL_28:
        v21 = -91;
        v15 = -26650;
        goto LABEL_31;
      }
      v21 = -85;
      v15 = -32281;
      goto LABEL_31;
    }
    v16 = -120;
  LABEL_27:
    v21 = v16;
    v15 = -25370;
    goto LABEL_31;
  }
  if (v14 == 4) {
    v16 = -88;
    goto LABEL_27;
  }
  if (v14 != 5) {
    if (v14 == 6) {
      v21 = -97;
      v15 = -25371;
      goto LABEL_31;
    }
    goto LABEL_28;
  }
  v21 = -111;
  v15 = -30743;

LABEL_31:
  v20 = v15;
  if ((*(_BYTE*)a1 & 1) != 0) {
    v17 = *(_QWORD*)(a1 + 16);
  }
  else {
    v17 = a1 + 1;
  }
  if (strlen(v17) != 3) {
    return false;
  }
  return v20 == *(_WORD*)v17 && v21 == *(_BYTE*)(v17 + 2);
}

#pragma GCC visibility pop
