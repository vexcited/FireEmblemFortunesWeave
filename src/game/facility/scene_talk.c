#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_975940(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_1ac690d;
extern _UNKNOWN GameData_1ae3887;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_vstring_kEmpty;
extern __int64* game_vstring_kEmpty_ptr[2];
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 SceneTalk_1497180(unsigned __int64 a1, __int64 a2, unsigned __int64 a3,
                          __int64 a4, __int64 a5, unsigned __int64 a6, int a7);
__int64 game_facility_SceneTalk_Args_Args_lambda0_Invoke(__int64 result,
                                                         __int64 a2);

__int64 SceneTalk_1497180(unsigned __int64 a1, __int64 a2, unsigned __int64 a3,
                          __int64 a4, __int64 a5, unsigned __int64 a6, int a7)
{
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  _BYTE* v20;
  _BYTE* v21;
  __int64* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  bool v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  char* v34;
  bool v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  char* v39;
  bool v40;
  unsigned __int64 v41;
  char* v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 result;
  __int64 v47;
  __int64 v48;
  _QWORD v49[3];

  *(_WORD*)a1 = 0;
  *(_DWORD*)(a1 + 24) = 6;
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_60;
  }
  v12 = (_QWORD*)a1;
  if (a3 >= 0x17) {
    v14 = a2;
    if ((a3 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (a3 | 7) + 1;
    }
    v16 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v15, 16, 0);
    a2 = v14;
    v13 = v16;
    v12[5] = a3;
    v12[6] = v16;
    v12[4] = v15 | 1;
  }
  else {
    v13 = a1 + 33;
    *(_BYTE*)(a1 + 32) = 2 * a3;
    if (a3 == 0) {
      goto LABEL_10;
    }
  }
  memmove(v13, a2, a3);
LABEL_10:
  *(_BYTE*)(v13 + a3) = 0;
  v12[7] = a4;
  if (a4 != 0 && (v17 = *(_QWORD*)(a4 + 288)) != 0 &&
      (v18 = GameRoutine_975940(v17)) != 0) {
    v21 = *(_BYTE**)(v18 + 160);
    v19 = (__int64*)(v18 + 160);
    v20 = v21;
    v22 = game_vstring_kEmpty_ptr[0];
    if (v21 != nullptr && *v20 != 0) {
      v22 = v19;
    }
  }
  else {
    v22 = &game_vstring_kEmpty;
  }
  v23 = *v22;
  a1 = strlen(*v22);
  if (a1 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_60:
    String_60a1d0(a1);
  }
  v24 = a1;
  if (a1 >= 0x17) {
    if ((a1 | 7) == 0x17) {
      v26 = 26;
    }
    else {
      v26 = (a1 | 7) + 1;
    }
    v25 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v26, 16, 0);
    v12[9] = v24;
    v12[10] = v25;
    v12[8] = v26 | 1;
    goto LABEL_26;
  }
  v25 = (__int64)v12 + 65;
  *((_BYTE*)v12 + 64) = 2 * a1;
  if (a1 != 0) {
  LABEL_26:
    a1 = memmove(v25, v23, v24);
  }
  *(_BYTE*)(v25 + v24) = 0;
  if (a6 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_60;
  }
  if (a6 >= 0x17) {
    if ((a6 | 7) == 0x17) {
      v28 = 26;
    }
    else {
      v28 = (a6 | 7) + 1;
    }
    v27 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v28, 16, 0);
    v12[12] = a6;
    v12[13] = v27;
    v12[11] = v28 | 1;
    goto LABEL_35;
  }
  v27 = (__int64)v12 + 89;
  *((_BYTE*)v12 + 88) = 2 * a6;
  if (a6 != 0) {
  LABEL_35:
    memmove(v27, a5, a6);
  }
  *(_BYTE*)(v27 + a6) = 0;
  *((_DWORD*)v12 + 28) = a7;
  LOWORD(v49[0]) = 0;
  v29 = *((unsigned __int8*)v12 + 32);
  v30 = (v29 & 1) == 0;
  v31 = v29 >> 1;
  if (v30) {
    v32 = v31;
  }
  else {
    v32 = v12[5];
  }
  v33 = *((unsigned __int8*)v12 + 64);
  if (v30) {
    v34 = (char*)v12 + 33;
  }
  else {
    v34 = (char*)v12[6];
  }
  v35 = (v33 & 1) == 0;
  v36 = v33 >> 1;
  if (v35) {
    v37 = v36;
  }
  else {
    v37 = v12[9];
  }
  v38 = *((unsigned __int8*)v12 + 88);
  if (v35) {
    v39 = (char*)v12 + 65;
  }
  else {
    v39 = (char*)v12[10];
  }
  v40 = (v38 & 1) == 0;
  v41 = v38 >> 1;
  if (v40) {
    v42 = (char*)v12 + 89;
  }
  else {
    v42 = (char*)v12[13];
  }
  if (v40) {
    v43 = v41;
  }
  else {
    v43 = v12[12];
  }
  GameRoutine_1a09ce0(v49, "MID", 3);
  GameRoutine_1a09ce0(v49, &GameData_1ac690d, 1);
  GameRoutine_1a09ce0(v49, &GameData_1ae3887, 2);
  GameRoutine_1a09ce0(v49, &GameData_1ac690d, 1);
  GameRoutine_1a09ce0(v49, v34, v32);
  GameRoutine_1a09ce0(v49, &GameData_1ac690d, 1);
  GameRoutine_1a09ce0(v49, v39, v37);
  GameRoutine_1a09ce0(v49, &GameData_1ac690d, 1);
  GameRoutine_1a09ce0(v49, v42, v43);
  GameRoutine_1a09ce0(v49, &GameData_1ac690d, 1);
  v44 = game_util_Format("%02d", a7);
  v45 = strlen(v44);
  result = GameRoutine_1a09ce0(v49, v44, v45);
  if ((*(_BYTE*)v12 & 1) != 0) {
    v47 = v12[2];
    if (v47 != 0) {
      v48 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v48 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, v47);
    }
  }
  qmemcpy(v12, v49, 24);
  return result;
}

__int64 game_facility_SceneTalk_Args_Args_lambda0_Invoke(__int64 result,
                                                         __int64 a2)
{
  unsigned __int8* v2;
  unsigned __int8* v3;
  unsigned __int64 v4;
  unsigned __int8* v5;
  unsigned __int64 v6;
  unsigned __int8* v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  unsigned __int8* v11;
  __int64 v12;

  v2 = *(unsigned __int8**)(result + 8);
  v3 = v2 + 64;
  if ((v2[64] & 1) != 0) {
    v4 = *((_QWORD*)v2 + 9);
  }
  else {
    v4 = (unsigned __int64)v2[64] >> 1;
  }
  if (v4 == 0) {
    v5 = *(unsigned __int8**)(*(_QWORD*)a2 + 160LL);
    v6 = *v2;
    if ((v6 & 1) != 0) {
      v7 = *((unsigned __int8**)v2 + 2);
    }
    else {
      v7 = v2 + 1;
    }
    if ((v6 & 1) != 0) {
      v8 = *((_QWORD*)v2 + 1);
    }
    else {
      v8 = v6 >> 1;
    }
    result = strlen(*(_QWORD*)(*(_QWORD*)a2 + 160LL));
    if (result != 0) {
      v9 = result;
      if (v8 >= result) {
        v10 = *v5;
        v11 = &v7[v8];
        result = (__int64)v7;
        do {
          result = memchr(result, v10, v8 - v9 + 1);
          if (result == 0) {
            break;
          }
          v12 = result;
          result = memcmp(result, v5, v9);
          if ((_DWORD)result == 0) {
            if ((unsigned __int8*)v12 == v11 || v12 - (_QWORD)v7 == -1) {
              return result;
            }
            return GameRoutine_60a020(v3, v5);
          }
          result = v12 + 1;
          v8 = (__int64)&v11[-v12 - 1];
        } while (v8 >= v9);
      }
    }
    else {
      return GameRoutine_60a020(v3, v5);
    }
  }
  return result;
}

#pragma GCC visibility pop
