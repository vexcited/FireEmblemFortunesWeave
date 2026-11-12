#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameReliance_8e17a0(_QWORD, _QWORD, _QWORD);
__int64 UnitUtil_12123a0(_QWORD, _QWORD);
__int64 UnitUtil_12123e0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (***GameData_212dae8)();
extern __int64 (**game_GameReliance_Impl_Data_vtable_ptr)();
extern __int64 (*GameData_1faacc8[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_8cf5b0(void);
__int64 game_anonymous_RuntimeTalk_GetCondition(__int64 a1, __int64 a2);
__int64 game_anonymous_RuntimeTalk_GetCondition_closure_Invoke_alt1(
    __int64 a1,
    __int64
        a2) __asm__("game_anonymous_RuntimeTalk_GetCondition_closure_Invoke");
__int64 GameReliance_8e17a0_alt1(_QWORD*, __int64,
                                 __int64) __asm__("GameReliance_8e17a0");
__int64 UnitUtil_12123a0_alt1(__int64, __int64) __asm__("UnitUtil_12123a0");
__int64 UnitUtil_12123e0_alt1(__int64, __int64) __asm__("UnitUtil_12123e0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_8cf5b0_alt1() __asm__("GameRoutine_8cf5b0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_anonymous_RuntimeTalk_GetCondition_closure_Invoke(__int64 a1,
                                                            __int64 a2);

__int64 game_anonymous_RuntimeTalk_GetCondition(__int64 a1, __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  unsigned int* v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  int* v11;
  int v12;
  int v13;
  int v14;
  int v15;
  __int64 v16;
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;
  struct {
    unsigned int* v20;
    __int64 v21;
    __int64 v22;
  } v20_;
  __int64 v23;

  v2 = *(_QWORD*)(a1 + 24);
  v3 = v18_.v18;
  v4 = *(_QWORD*)(v2 + 120);
  v20_.v21 = 0;
  v20_.v22 = 0;
  v20_.v20 = nullptr;
  v18_.v19 = v18_.v18;
  v18_.v18[0] = GameData_1faacc8;
  v18_.v18[1] = &v20_.v20;
  if (v4 == 0) {
    goto LABEL_9;
  }
  v3 = v18_.v18;
  v23 = v4;
  while (1) {
    (*(void (**)(_QWORD*, __int64*))(*v3 + 48LL))(v3, &v23);
    v4 = *(_QWORD*)(v4 + 136);
    v3 = v18_.v19;
    if (v4 == 0) {
      break;
    }
    v23 = v4;
    if (v18_.v19 == nullptr) {
      GameRoutine_60a310_alt1();
    }
  }
  if (v18_.v19 == v18_.v18) {
  LABEL_9:
    v5 = 32;
  }
  else {
    if (v18_.v19 == nullptr) {
      goto LABEL_11;
    }
    v5 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v3 + v5))(v3, a2);
LABEL_11:
  if (v20_.v20 == (unsigned int*)v20_.v21) {
    v7 = 0;
    if (v20_.v20 == nullptr) {
      return v7;
    }
    goto LABEL_24;
  }
  v6 = v20_.v20;
  while (1) {
    v8 = *v6++;
    v7 = v8;
    if ((_WORD)v8 == 0) {
      break;
    }
    if (v6 == (unsigned int*)v20_.v21) {
      v9 = 0;
      v10 = 0;
      v11 = (int*)v20_.v20;
      do {
        v13 = *v11++;
        v12 = v13;
        v14 = v13 << 27;
        if ((v13 & 0x10) != 0) {
          v15 = 0;
        }
        else {
          v15 = v12;
        }
        v10 |= v15;
        v9 |= v12 & (v14 >> 31);
      } while (v11 != (int*)v20_.v21);
      if (v10 != 0) {
        v7 = v10;
      }
      else {
        v7 = v9;
      }
      break;
    }
  }
  if (v20_.v20 != nullptr) {
  LABEL_24:
    v20_.v21 = (__int64)v20_.v20;
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, (__int64)v20_.v20);
  }
  return v7;
}

void game_anonymous_RuntimeTalk_GetCondition_closure_Invoke(__int64 a1,
                                                            __int64 a2)
{
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  int v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 (***v17)();
  _QWORD* v18;
  int v19;
  unsigned int v20;
  int v21;
  unsigned int v22;
  int v25;
  int v26;
  int v27;
  __int64 v28;
  __int64* v29;
  __int64* v30;
  int v31;
  __int64 v34;
  int v35;
  int v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 (*v43)(_QWORD);
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 (*v52)(_QWORD);
  __int64 v53;
  _QWORD* v54;
  char v55;
  int v56;
  int v57;
  __int64 v58;
  unsigned __int64 v59;
  int* v60;
  __int64 v61;
  __int64 v62;
  signed __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  __int64 v73;
  _QWORD v74[3];
  struct {
    _QWORD v75[2];
    __int64 v76;
  } v75_;

  v2 = *(_QWORD**)a2;
  v3 = *(__int64**)(a1 + 8);
  v4 = game_GameModeData_instance_;
  v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + 120LL) + 104LL);
  v6 = *(_QWORD*)(v5 + 40);
  v7 = *(_QWORD*)(v5 + 56);
  v8 = v6 == 0 || v7 == 0;
  if (!v8) {
    if (game_GameModeData_instance_ != 0) {
      v12 = *(_QWORD**)(game_GameModeData_instance_ + 48);
      v13 = game_GameVariableTable_Find_alt1(
          v12, (unsigned __int64*)(*(_QWORD*)(v6 + 24) + 1072LL));
      if (v13 != 0) {
        v14 = *(_DWORD*)(v13 + 32);
      }
      else {
        v14 = 0;
      }
      a1 = game_GameVariableTable_Find_alt1(
          v12, (unsigned __int64*)(*(_QWORD*)(v7 + 24) + 1072LL));
      if (a1 != 0) {
        v15 = *(_DWORD*)(a1 + 32);
        goto LABEL_19;
      }
    }
    else {
      v14 = 0;
    }
    v15 = 0;
  LABEL_19:
    v75_.v75[0] = 0;
    v75_.v75[1] = v6;
    v75_.v76 = 0;
    if ((v15 | v14) != 0) {
      v9 = 32;
    }
    else {
      v9 = 0;
    }
    v10 = v4 + 120;
    if (v4 == 0) {
      v10 = 0;
    }
    goto LABEL_24;
  }
  v9 = 1;
  v75_.v75[0] = 0;
  v75_.v75[1] = v6;
  v75_.v76 = 0;
  if (game_GameModeData_instance_ != 0) {
    v10 = game_GameModeData_instance_ + 120;
  }
  else {
    v10 = 0;
  }
  if (v6 != 0) {
  LABEL_24:
    v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v6 + 24) + 1784LL) + 272LL);
    goto LABEL_25;
  }
  v11 = 0;
  v10 = game_GameModeData_instance_ + 120;
LABEL_25:
  v75_.v76 = v11;
  v74[0] = 0;
  v74[1] = v7;
  if (v7 == 0) {
    goto LABEL_30;
  }
  v16 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v7 + 24) + 1784LL) + 272LL);
  v74[2] = v16;
  v17 = GameData_212dae8;
  if (v11 != 0 && v16 != 0) {
    v18 = *(_QWORD**)(v10 + 8);
    LODWORD(a1) =
        GameReliance_8e17a0_alt1(v18, (__int64)v75_.v75, (__int64)v74);
    if ((a1 & 0x80000000) != 0) {
    LABEL_30:
      v17 = &game_GameReliance_Impl_Data_vtable_ptr;
    }
    else {
      v17 = (__int64 (***)(void))(v18[1] + 56LL * (unsigned int)a1);
    }
  }
  v19 = *((unsigned __int8*)v17 + 10);
  v20 = *((unsigned __int8*)v17 + 11);
  if (v19 != 0) {
    v21 = v9;
  }
  else {
    v21 = v9 | 2;
  }
  v22 = *(unsigned __int8*)(*(_QWORD*)(v2[15] + 104LL) + 64LL);
  if (v22 > 2) {
    if (v22 != 3) {
      if (v22 != 4 || v20 <= 4) {
        goto LABEL_47;
      }
      goto LABEL_48;
    }
    if (v20 > 3) {
      goto LABEL_48;
    }
  LABEL_47:
    v21 |= 4u;
    goto LABEL_48;
  }
  if (v22 == 1) {
    if (v20 > 1) {
      goto LABEL_48;
    }
    goto LABEL_47;
  }
  if (v22 != 2 || v20 <= 2) {
    goto LABEL_47;
  }
LABEL_48:
  v25 = game_GameModeData_instance_;
  v73 = v6;
  if (game_GameModeData_instance_ != 0) {
    v26 = *(_DWORD*)(game_GameModeData_instance_ + 60);
    v27 = *(_DWORD*)(game_GameModeData_instance_ + 64);
    v25 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  else {
    v27 = 0;
    v26 = 0;
  }
  v28 = v2[13];
  v30 = (__int64*)v2[24];
  v29 = (__int64*)v2[25];
  v31 = *(unsigned __int8*)(v28 + 69);
  if ((unsigned int)(v26 - 3) >= 0xFFFFFFFE && v31 != v25 && v31 != 0) {
    v21 |= 8u;
  }
  v34 = *(_QWORD*)(v28 + 24);
  v35 = v27 + 1000 * v26;
  if (v35 <= (signed __int32)*(_DWORD*)(v34 + 244) &&
      (signed __int32)*(_DWORD*)(v34 + 240) <= v35) {
    v37 = v21;
  }
  else {
    v37 = v21 | 0x10;
  }
  if (v29 != v30) {
    v72 = v3;
    v38 = 0;
    do {
      v39 = *v30;
      v40 = v30[1];
      if (v40 == *v30) {
      LABEL_67:
        ++v38;
      }
      else {
        while (1) {
          if (*(_QWORD*)v39 != 0) {
            v41 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v42 = game_GameVariableTable_Find_alt1(
                  *(_QWORD**)(game_GameModeData_instance_ + 48),
                  (unsigned __int64*)v39);
              if (v42 != 0) {
                v43 = *(__int64 (**)(_QWORD))(v42 + 72);
                v44 = *(_QWORD*)(v42 + 80);
                v45 = (_QWORD*)(v42 + (v44 >> 1));
                if ((v44 & 1) != 0) {
                  v43 = *(__int64 (**)(_QWORD))((char*)v43 + *v45);
                }
                LOBYTE(a1) = v43(v45);
              }
              else {
                LOBYTE(a1) = 1;
              }
            }
            if (*(_BYTE*)(v39 + 16) != ((v41 == 0) | a1 & 1)) {
              break;
            }
          }
          v39 += 24;
          if (v39 == v40) {
            goto LABEL_67;
          }
        }
      }
      v30 += 6;
    } while (v30 != v29);
    v8 = v38 == 0;
    v3 = v72;
    if (v8) {
      v37 |= 0x40u;
    }
  }
  v46 = v2[18];
  v47 = v2[19];
  if (v47 == v46) {
  LABEL_83:
    v48 = v2[14];
    if (v48 == 0) {
      goto LABEL_99;
    }
    goto LABEL_84;
  }
  while (1) {
    if (*(_QWORD*)v46 != 0) {
      v50 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v51 = game_GameVariableTable_Find_alt1(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)v46);
        if (v51 != 0) {
          v52 = *(__int64 (**)(_QWORD))(v51 + 72);
          v53 = *(_QWORD*)(v51 + 80);
          v54 = (_QWORD*)(v51 + (v53 >> 1));
          if ((v53 & 1) != 0) {
            v52 = *(__int64 (**)(_QWORD))((char*)v52 + *v54);
          }
          LOBYTE(a1) = v52(v54);
        }
        else {
          LOBYTE(a1) = 1;
        }
      }
      if (*(_BYTE*)(v46 + 16) != ((v50 == 0) | a1 & 1)) {
        break;
      }
    }
    v46 += 24;
    if (v46 == v47) {
      goto LABEL_83;
    }
  }
  v37 |= 0x80u;
  v48 = v2[14];
  if (v48 != 0) {
  LABEL_84:
    if (game_GameModeData_instance_ != 0 &&
        (v49 = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)(v48 + 40))) != 0) {
      if (*(_DWORD*)(v49 + 32) == 0) {
        v37 |= 0x100u;
      }
    }
    else {
      v37 |= 0x100u;
    }
  }
LABEL_99:
  v75_.v75[0] = v73;
  v74[0] = v7;
  v55 = UnitUtil_12123a0_alt1((__int64)v75_.v75, (__int64)v74);
  v75_.v75[0] = v73;
  v74[0] = v7;
  if ((v55 & 1) != 0) {
    v56 = v37;
  }
  else {
    v56 = v37 | 0x200;
  }
  if ((UnitUtil_12123e0_alt1((__int64)v75_.v75, (__int64)v74) & 1) != 0) {
    v57 = v56;
  }
  else {
    v57 = v56 | 0x400;
  }
  if (*v2 != 0 && game_GameModeData_instance_ != 0) {
    v58 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48), v2 + 5);
    if (v58 != 0 && *(_DWORD*)(v58 + 32) != 0) {
      v57 |= 0x10000u;
    }
  }
  v60 = (int*)v3[1];
  v59 = v3[2];
  if ((unsigned __int64)v60 >= v59) {
    v62 = *v3;
    v63 = (signed __int64)v60 - *v3;
    v64 = (v63 >> 2) + 1;
    if (v64 >> 62 != 0) {
      GameRoutine_8cf5b0_alt1();
    }
    v65 = v59 - v62;
    v66 = fw_memory_g_heap_manager_ptr;
    if (v65 >> 1 > v64) {
      v64 = v65 >> 1;
    }
    if ((unsigned __int64)v65 >= 0x7FFFFFFFFFFFFFFCLL) {
      v67 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else {
      v67 = v64;
    }
    if (v67 != 0) {
      if (v67 >> 62 != 0) {
        GameRoutine_60a210_alt1();
      }
      v68 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v67, 16, 0);
    }
    else {
      v68 = 0;
    }
    v69 = v68 + 4 * v67;
    v70 = v68 + v63 - 4 * (v63 >> 2);
    *(_DWORD*)(v68 + v63) = v57;
    v61 = v68 + v63 + 4;
    memcpy_alt1(v70, v62, v63);
    *v3 = v70;
    v3[1] = v61;
    v3[2] = v69;
    if (v62 != 0) {
      v71 = 128;
      if (*(_QWORD*)(*(_QWORD*)v66 + 200LL) == 0) {
        v71 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v66 + v71, v62);
    }
  }
  else {
    *v60 = v57;
    v61 = (__int64)(v60 + 1);
  }
  v3[1] = v61;
}

#pragma GCC visibility pop
