#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_HashString(__int64 result);
__int64 memcpy(__int64, __int64, unsigned __int64);
bool game_HasSkill(_QWORD*, _DWORD*);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (*GameData_212b160[])();
extern __int64 GameData_21c99b0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern const char GameData_1ad7b01[];
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_705570();
void nn_mem_StandardAllocator_Free(__int64, __int64);
_QWORD* game_map_MapBaseMap_CreatePersonSkillDataList(__int64 a1, __int64 a2,
                                                      __int64 a3, __int64* a4);

_QWORD* game_map_MapBaseMap_CreatePersonSkillDataList(__int64 a1, __int64 a2,
                                                      __int64 a3, __int64* a4)
{
  int v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  signed __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  bool v35;
  __int64 v36;
  __int64 v37;
  _QWORD* result;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  struct {
    _QWORD v43[4];
    _QWORD* v44;
  } v43_;
  __int64 v45;
  bool v46;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  a4[1] = *a4;
  v7 = *(unsigned __int8*)(a2 + 440);
  v46 = v7 == 1;
  v8 = game_HashString((__int64)GameData_1ad7b01),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v8 == 0) {
    goto LABEL_25;
  }
  v12 = *(_QWORD*)(GameData_21c99b0 + 96);
  if (v12 == 0 || *(_QWORD*)(GameData_21c99b0 + 112) == 0) {
    goto LABEL_25;
  }
  v14 = v12 - 1;
  if ((v12 & (v12 - 1)) != 0) {
    v15 = v8;
    if (v8 >= v12) {
      v15 = v8 % v12;
    }
  }
  else {
    v15 = v14 & v8;
  }
  v16 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b0 + 88) + 8 * v15);
  if (v16 == nullptr || (v17 = (_QWORD*)*v16) == nullptr) {
  LABEL_25:
    v19 = 0;
    goto LABEL_26;
  }
  if ((v12 & v14) == 0) {
    while (1) {
      v20 = v17[1];
      if (v20 == v8) {
        if (v17[2] == v8) {
          goto LABEL_59;
        }
      }
      else if ((v20 & v14) != v15) {
        goto LABEL_25;
      }
      v17 = (_QWORD*)*v17;
      v19 = 0;
      if (v17 == nullptr) {
        goto LABEL_26;
      }
    }
  }
  while (1) {
    v18 = v17[1];
    if (v18 == v8) {
      break;
    }
    if (v18 >= v12) {
      v18 %= v12;
    }
    if (v18 != v15) {
      goto LABEL_25;
    }
  LABEL_15:
    v17 = (_QWORD*)*v17;
    if (v17 == nullptr) {
      goto LABEL_25;
    }
  }
  if (v17[2] != v8) {
    goto LABEL_15;
  }
LABEL_59:
  v19 = v17[3];
LABEL_26:
  v45 = v19;
  if (v7 == 1) {
    v22 = (_QWORD*)a4[1];
    v21 = a4[2];
    if ((unsigned __int64)v22 >= v21) {
      v24 = *a4;
      v25 = (signed __int64)v22 - *a4;
      v26 = (v25 >> 3) + 1;
      if (v26 >> 61 != 0) {
        GameRoutine_705570(),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v27 = v21 - v24;
      v28 = fw_memory_g_heap_manager_ptr;
      if (v27 >> 2 > v26) {
        v26 = v27 >> 2;
      }
      if ((unsigned __int64)v27 >= 0x7FFFFFFFFFFFFFF8LL) {
        v29 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v29 = v26;
      }
      if (v29 != 0) {
        if (v29 >> 61 != 0) {
          GameRoutine_60a210(),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v9 = COERCE_AS(__typeof__(v9),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v30 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v29, 16, 0),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v30 = 0;
      }
      v31 = v30 + 8 * v29;
      v32 = v30 + v25 - 8 * (v25 >> 3);
      *(_QWORD*)(v30 + v25) = v19;
      v23 = v30 + v25 + 8;
      memcpy(v32, v24, v25),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *a4 = v32;
      a4[1] = v23;
      a4[2] = v31;
      if (v24 != 0) {
        v33 = 128;
        if (*(_QWORD*)(*(_QWORD*)v28 + 200LL) == 0) {
          v33 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v28 + v33, v24),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    else {
      *v22 = v19;
      v23 = (__int64)(v22 + 1);
    }
    a4[1] = v23;
  }
  if (a2 != 0) {
    v34 = (_QWORD*)(*(_QWORD*)(a2 + 24) + 480LL);
    LODWORD(v43_.v43[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x228LL) +
                                      game_g_shared_system_skills_ptr + 4) &
                           0xFFF;
    v35 = game_HasSkill(v34, v43_.v43),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v36 = 576;
    if (v35) {
      v36 = 672;
    }
    v37 = *(_QWORD*)(a3 + 24) + v36;
  }
  else {
    v37 = *(_QWORD*)(a3 + 24) + 576LL;
  }
  result = v43_.v43;
  v43_.v43[0] = GameData_212b160;
  v43_.v43[1] = &v46;
  v43_.v44 = v43_.v43;
  v43_.v43[2] = &v45;
  v43_.v43[3] = a4;
  v39 = *(_QWORD*)(v37 + 32);
  if ((int)((unsigned __int64)(*(_QWORD*)(v37 + 40) - v39) >> 2) < 1) {
    goto LABEL_56;
  }
  v40 = 0;
  v41 = 0;
  do {
    if (v43_.v44 == nullptr) {
      GameRoutine_60a310(),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    (*(void (**)(_QWORD*, __int64))(*v43_.v44 + 48LL))(v43_.v44, v39 + v40),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v39 = *(_QWORD*)(v37 + 32);
    ++v41;
    v40 += 4;
  } while (v41 < (int)((unsigned __int64)(*(_QWORD*)(v37 + 40) - v39) >> 2));
  result = v43_.v44;
  if (v43_.v44 == v43_.v43) {
  LABEL_56:
    v42 = 32;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64, __int64))(
        *result + v42))(result, v9, v10, v11);
  }
  else if (v43_.v44 != nullptr) {
    v42 = 40;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64, __int64))(
        *result + v42))(result, v9, v10, v11);
  }
  return result;
}

#pragma GCC visibility pop
