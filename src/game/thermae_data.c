#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21c99b0;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_705570(void);
void __attribute__((noreturn)) GameRoutine_9337e0(void);
_QWORD* game_ThermaeData_GetLearnSkillList_lambda0_Invoke(_QWORD* result,
                                                          __int64* a2,
                                                          char* a3);

_QWORD* game_ThermaeData_GetLearnSkillList_lambda0_Invoke(_QWORD* result,
                                                          __int64* a2, char* a3)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  _QWORD* v6;
  char v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  unsigned __int64 v21;
  _QWORD* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  _QWORD* v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  unsigned __int64 v43;
  _BYTE* v44;
  __int64 v45;
  __int64 v46;
  _BYTE* v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;

  v3 = *a2;
  if (*a2 != 0) {
    v4 = *(_WORD*)(v3 + 16) & 0xFFF;
    if ((*(_WORD*)(v3 + 16) & 0xFFF) != 0) {
      v6 = (_QWORD*)result[3];
      v5 = result[4];
      v7 = *a3;
      v8 = v6[134];
      v9 = (v6[135] - v8) >> 2;
      if (v9 < (v4 >> 5) + 1 ||
          ((*(_DWORD*)(v8 + 4LL * (unsigned int)(v4 >> 5)) >>
            *(_BYTE*)(v3 + 16)) &
           1) == 0) {
        goto LABEL_15;
      }
      v10 = v6[139];
      v11 = v6[138];
      if (v10 != v11) {
        v12 = (v10 - v11) >> 2;
        v13 = 0;
        while ((*(_DWORD*)(v11 + 4 * v13) & 0xFFF) != (_DWORD)v4) {
          if (v12 == ++v13) {
            return result;
          }
        }
        if ((v13 & 0x8000000000000000LL) == 0) {
          v14 = *(_DWORD*)(v11 + 4LL * (unsigned int)v13);
          v15 =
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                             8LL * (v14 & 0xFFF)) +
                                  281LL);
          if (v15 <= 1) {
            v15 = 1;
          }
          if ((v14 & 0x1F000000) != 0 || ((v14 >> 19) & 0x1F) < v15 - 1) {
          LABEL_15:
            v16 = *(_QWORD*)(v3 + 24);
            v17 = *(_QWORD*)(v16 + 1072);
            if (v17 != 0 &&
                ((v18 = *(unsigned __int16*)(v17 + 16),
                  v9 < ((v18 >> 5) & 0x7F) + 1) ||
                 ((*(_DWORD*)(v8 + 4 * ((v18 >> 5) & 0x7F)) >> v18) & 1) ==
                     0)) {
              v25 = *(unsigned __int16*)(v5 + 72);
              v26 = *(_QWORD*)(v5 + 80) + 8LL;
              while (1) {
                if ((_DWORD)v25 != 0) {
                  v27 = (__int64*)v26;
                  v28 = v25;
                  while (1) {
                    v29 = *v27;
                    v27 += 2;
                    if (v29 == v17) {
                      break;
                    }
                    if (--v28 == 0) {
                      goto LABEL_26;
                    }
                  }
                  v30 = *(unsigned __int16*)(v17 + 16);
                  if (v9 < ((v30 >> 5) & 0x7F) + 1 ||
                      ((*(_DWORD*)(v8 + 4 * ((v30 >> 5) & 0x7F)) >> v30) & 1) ==
                          0) {
                    break;
                  }
                }
              LABEL_26:
                v17 = *(_QWORD*)(*(_QWORD*)(v17 + 24) + 1072LL);
                if (v17 == 0) {
                  goto LABEL_18;
                }
              }
            }
            else {
            LABEL_18:
              v19 = *(_QWORD*)(v16 + 1080);
              if (v19 != 0) {
                while (1) {
                  v24 = *(unsigned __int16*)(v19 + 16);
                  if (v9 >= ((v24 >> 5) & 0x7F) + 1 &&
                      ((*(_DWORD*)(v8 + 4 * ((v24 >> 5) & 0x7F)) >> v24) & 1) !=
                          0) {
                    break;
                  }
                  v19 = *(_QWORD*)(*(_QWORD*)(v19 + 24) + 1080LL);
                  if (v19 == 0) {
                    goto LABEL_19;
                  }
                }
              }
              else {
              LABEL_19:
                v20 = (__int64*)result[1];
                v22 = (_QWORD*)v20[1];
                v21 = v20[2];
                if ((unsigned __int64)v22 >= v21) {
                  v31 = *v20;
                  v32 = (__int64)v22 - *v20;
                  v33 = (v32 >> 3) + 1;
                  if (v33 >> 61 != 0) {
                    GameRoutine_705570();
                  }
                  v34 = v21 - v31;
                  v35 = fw_memory_g_heap_manager_ptr;
                  if (v34 >> 2 > v33) {
                    v33 = v34 >> 2;
                  }
                  if ((unsigned __int64)v34 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v36 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v36 = v33;
                  }
                  if (v36 != 0) {
                    if (v36 >> 61 != 0) {
                      GameRoutine_60a210(result);
                    }
                    v37 = result;
                    v38 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v36, 16, 0);
                  }
                  else {
                    v37 = result;
                    v38 = 0;
                  }
                  v39 = v38 + 8 * v36;
                  v40 = v38 + v32 - 8 * (v32 >> 3);
                  *(_QWORD*)(v38 + v32) = v3;
                  v23 = v38 + v32 + 8;
                  memcpy(v40, v31, v32);
                  *v20 = v40;
                  v20[1] = v23;
                  v20[2] = v39;
                  if (v31 != 0) {
                    v41 = 128;
                    if (*(_QWORD*)(*(_QWORD*)v35 + 200LL) == 0) {
                      v41 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*(_QWORD*)v35 + v41);
                  }
                  result = v37;
                }
                else {
                  *v22 = v3;
                  v23 = (__int64)(v22 + 1);
                }
                v20[1] = v23;
                v42 = (__int64*)result[2];
                v44 = (_BYTE*)v42[1];
                v43 = v42[2];
                if ((unsigned __int64)v44 >= v43) {
                  v46 = *v42;
                  v47 = &v44[-*v42];
                  v48 = (unsigned __int64)(v47 + 1);
                  if ((__int64)(v47 + 1) < 0) {
                    GameRoutine_9337e0();
                  }
                  v49 = v43 - v46;
                  if (2 * v49 > v48) {
                    v48 = 2 * v49;
                  }
                  if (v49 >= 0x3FFFFFFFFFFFFFFFLL) {
                    v50 = 0x7FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v50 = v48;
                  }
                  if (v50 != 0) {
                    v51 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, v50, 16, 0);
                  }
                  else {
                    v51 = 0;
                  }
                  v47[v51] = v7;
                  v45 = (__int64)&v47[v51 + 1];
                  result = (_QWORD*)memcpy(v51, v46, v47);
                  *v42 = v51;
                  v42[1] = v45;
                  v42[2] = v51 + v50;
                  if (v46 != 0) {
                    v52 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v52 = 56;
                    }
                    result = (_QWORD*)nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v52);
                  }
                }
                else {
                  *v44 = v7;
                  v45 = (__int64)(v44 + 1);
                }
                v42[1] = v45;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
