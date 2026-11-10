#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_201cb30[])();
extern __int64 (*GameData_20200c8[])();
extern __int64 (*GameData_2021c58[])();
extern __int64 GameData_2240170;
extern __int64 GameData_2240178;
extern __int64 GameData_22407a8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_map_obj_g_object_records;
__int64 Impl_Destructor_1243e00(_QWORD* a1);
__int64 Impl_Destructor_1286cc0(__int64 result);
__int64 Impl_DeletingDestructor_1286dc0(_QWORD* a1);
__int64 Impl_Destructor_12a72c0(__int64 result);
__int64 GameRoutine_12274e0(__int64 result, __int64*);
__int64 GameRoutine_1235300(_QWORD);
__int64 GameRoutine_123e8c0(_QWORD);
__int64 GameRoutine_123eae0(void);
__int64 GameRoutine_1241280(__int64 result, unsigned __int64, int, int);
__int64 GameRoutine_1242460(_QWORD*, unsigned __int64);
__int64 GameRoutine_1285760(_QWORD, _QWORD);
__int64 GameRoutine_12a5400(_QWORD*, __int64);
__int64 Impl_12a6e80_alt1(_QWORD) __asm__("Impl_12a6e80");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_1a9a226;
extern _UNKNOWN GameData_1adbe5e;
extern _UNKNOWN GameData_1ae726b;
extern __int64 (*GameData_201adf0[])();
extern __int64 (*GameData_2021b68[])();
extern __int64 GameData_21c9bd0;
extern __int64 GameData_21ec7c8;
extern __int64 GameData_22400f8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_GameModeData_instance_;
extern __int64 game_map_UnitFlags_instance_;
extern __int64* GameData_212cfb8[11];
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_12a6f80(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_65c760(_QWORD);
void __attribute__((noreturn)) String_60a1d0(void);
__int64 game_map_history_anonymous_Impl_RegisterAll(_QWORD* a1, __int64 a2);
_QWORD* Impl_1235480(_QWORD* result);
__int64 game_map_history_anonymous_Impl_Deserialize_lambda1_Invoke(
    __int64 a1, unsigned __int64* a2, int* a3);
__int64 Impl_12439e0(__int64 result, __int64 a2, unsigned int a3);
__int64 game_map_history_anonymous_Impl_RegisterAll_lambda0_Invoke(__int64 a1,
                                                                   __int64 a2);
__int64 Impl_12a6c20(__int64 a1);
__int64 Impl_12a6e80(unsigned __int64* a1);
unsigned __int64 Impl_12a6fa0(__int64* a1, __int64 a2, char a3, char a4,
                              int a5);

__int64 game_map_history_anonymous_Impl_RegisterAll(_QWORD* a1, __int64 a2)
{
  _QWORD* v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[4];
  _QWORD* v11;

  v2 = a1;
  if (*((_BYTE*)a1 + 8) == 0) {
    v4 = game_script_map_obj_g_object_records;
    if (game_script_map_obj_g_object_records == 0) {
    LABEL_13:
      v8 = GameRoutine_1285760(a1, a2);
      v9 = GameRoutine_1235300(v8);
      result = GameRoutine_123e8c0(v9);
      *((_DWORD*)v2 + 3) = 0;
      *(_QWORD*)((char*)v2 + 828) = 0;
      *((_BYTE*)v2 + 8) = 1;
      goto LABEL_14;
    }
    a1 = v10;
    v10[0] = GameData_2021b68;
    v10[1] = game_script_map_obj_g_object_records;
    v11 = v10;
    v5 = *(_QWORD*)GameData_21ec7c8;
    v6 = *(_QWORD*)(GameData_21ec7c8 + 8);
    if (*(_QWORD*)GameData_21ec7c8 == v6) {
      goto LABEL_10;
    }
    do {
      if (v11 == nullptr) {
        GameRoutine_60a310(0, a2);
      }
      (*(void (**)(_QWORD*, __int64))(*v11 + 48LL))(v11, v5);
      v5 += 176;
    } while (v5 != v6);
    a1 = v11;
    if (v11 == v10) {
    LABEL_10:
      v7 = 32;
    }
    else {
      if (v11 == nullptr) {
      LABEL_12:
        *(_DWORD*)(v4 + 112) = (*(_QWORD*)(v4 + 16) - *(_QWORD*)(v4 + 8)) >> 5;
        goto LABEL_13;
      }
      v7 = 40;
    }
    a1 = (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*a1 + v7))(a1, a2);
    goto LABEL_12;
  }
  result = GameRoutine_123eae0();
LABEL_14:
  *((_BYTE*)v2 + 9) = 0;
  return result;
}

_QWORD* Impl_1235480(_QWORD* result)
{
  *result = GameData_201adf0;
  if ((_QWORD*)game_map_UnitFlags_instance_ == result) {
    game_map_UnitFlags_instance_ = 0;
  }
  return result;
}

__int64 game_map_history_anonymous_Impl_Deserialize_lambda1_Invoke(
    __int64 a1, unsigned __int64* a2, int* a3)
{
  __int64 v3;
  unsigned __int64 v4;
  int v5;
  __int64 result;
  __int64 v7;
  unsigned __int64 v8;
  int v9;
  __int64 v10;
  _QWORD v11[2];

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *a2;
  v5 = *a3;
  result = GameRoutine_1242460((_QWORD*)(v3 + 456), *a2);
  if ((result & 1) != 0) {
    if (v5 == 1) {
      v7 = v3 + 520;
      v8 = v4;
      v9 = 1;
    }
    else if (v5 != 0) {
      v7 = v3 + 456;
      v8 = v4;
      v9 = v5;
    }
    else {
      v7 = v3 + 584;
      v8 = v4;
      v9 = 0;
    }
    GameRoutine_1241280(v7, v8, v9, 0);
    v11[0] = v4;
    v11[1] = &GameData_1a9f09e;
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v11);
    if (result != 0) {
      v10 = *(unsigned __int8*)(result + 16);
      switch (*(_BYTE*)(result + 16)) {
      case 0:
        goto LABEL_20;
      case 2:
        v10 = 2;
        goto LABEL_20;
      case 3:
        v10 = 3;
        goto LABEL_20;
      case 4:
        v10 = 4;
        goto LABEL_20;
      case 5:
        v10 = 5;
        goto LABEL_20;
      case 6:
        v10 = 6;
        goto LABEL_20;
      case 7:
        v10 = 7;
        goto LABEL_20;
      case 8:
        v10 = 8;
        goto LABEL_20;
      case 9:
        v10 = 9;
        goto LABEL_20;
      case 0xA:
        v10 = 10;
        goto LABEL_20;
      case 0xB:
        v10 = 11;
        goto LABEL_20;
      case 0xC:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x10:
      case 0x11:
        return result;
      default:
        v10 = 1;
      LABEL_20:
        ++*(_DWORD*)(v3 + 4 * v10 + 648);
        break;
      }
    }
  }
  return result;
}

__int64 Impl_12439e0(__int64 result, __int64 a2, unsigned int a3)
{
  _QWORD* v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int i;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  int v28;
  int v29;
  int v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  _QWORD* v35;
  _QWORD* v36;
  int v37;
  unsigned __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  int v42;
  __int64* v43;
  int v44;
  __int64 j;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  _QWORD* v49;
  __int64 v50;
  char* v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  _QWORD v60[2];
  __int64* v61;

  v4 = (_QWORD*)result;
  if (a3 < 2) {
    v6 = 0;
  }
  else {
    v5 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v5 + 1;
    v6 = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5);
  }
  v7 = game_GameModeData_instance_;
  v8 = *(_QWORD*)(result + 8);
  *(_BYTE*)(result + 1) = v6;
  *(_QWORD*)(result + 16) = v8;
  v9 = *(int*)(a2 + 20);
  v10 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v9 + 1;
  v11 = *(unsigned __int8*)(v10 + v9);
  *(_DWORD*)(a2 + 20) = v9 + 2;
  v12 = v11 | (*(unsigned __int8*)(v10 + v9 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v9 + 3;
  v13 = *(unsigned __int8*)(v10 + v9 + 2);
  *(_DWORD*)(a2 + 20) = v9 + 4;
  v14 = v12 | (v13 << 16) | (*(unsigned __int8*)(v10 + v9 + 3) << 24);
  if (v14 != 0) {
    for (i = 0; i != v14; ++i) {
      v17 = *(int*)(a2 + 20);
      v18 = *(_QWORD*)(a2 + 8);
      v60[0] = 0;
      v60[1] = &GameData_1a9f09e;
      v19 = v17 + 11;
      *(_DWORD*)(a2 + 20) = v17 + 1;
      v20 = *(unsigned __int8*)(v18 + v17);
      *(_DWORD*)(a2 + 20) = v17 + 2;
      v21 = v20 | ((unsigned __int64)*(unsigned __int8*)(v18 + v17 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v17 + 3;
      v22 = v21 | ((unsigned __int64)*(unsigned __int8*)(v18 + v17 + 2) << 16);
      *(_DWORD*)(a2 + 20) = v17 + 4;
      v23 = v22 | ((unsigned __int64)*(unsigned __int8*)(v18 + v17 + 3) << 24);
      *(_DWORD*)(a2 + 20) = v17 + 5;
      v24 = v23 | ((unsigned __int64)*(unsigned __int8*)(v18 + v17 + 4) << 32);
      *(_DWORD*)(a2 + 20) = v17 + 6;
      v25 = v24 | ((unsigned __int64)*(unsigned __int8*)(v18 + v17 + 5) << 40);
      *(_DWORD*)(a2 + 20) = v17 + 7;
      v26 = v25 | ((unsigned __int64)*(unsigned __int8*)(v18 + v17 + 6) << 48);
      *(_DWORD*)(a2 + 20) = v17 + 8;
      v27 = v26 | ((unsigned __int64)*(unsigned __int8*)(v18 + v17 + 7) << 56);
      v60[0] = v27;
      *(_DWORD*)(a2 + 20) = v17 + 9;
      v28 = *(unsigned __int8*)(v18 + v17 + 8);
      *(_DWORD*)(a2 + 20) = v17 + 10;
      v29 = *(unsigned __int8*)(v18 + v17 + 9);
      *(_DWORD*)(a2 + 20) = v17 + 11;
      v30 = *(unsigned __int8*)(v18 + v17 + 10);
      *(_DWORD*)(a2 + 20) = v17 + 12;
      if (v27 != 0) {
        v31 = *(_QWORD*)(v7 + 48);
        v32 = *(_QWORD*)(v31 + 16);
        if (v32 != 0 && *(_QWORD*)(v31 + 32) != 0) {
          v33 = v32 - 1;
          if ((v32 & (v32 - 1)) != 0) {
            v34 = v27;
            if (v27 >= v32) {
              v34 = v27 % v32;
            }
          }
          else {
            v34 = v33 & v27;
          }
          v35 = *(_QWORD**)(*(_QWORD*)(v31 + 8) + 8 * v34);
          if (v35 != nullptr) {
            v36 = (_QWORD*)*v35;
            if (v36 != nullptr) {
              v37 = *(unsigned __int8*)(v18 + v19);
              if ((v32 & v33) == 0) {
                while (1) {
                  v39 = v36[1];
                  if (v27 == v39) {
                    if (v36[2] == v27) {
                      goto LABEL_31;
                    }
                  }
                  else if ((v39 & v33) != v34) {
                    goto LABEL_39;
                  }
                  v36 = (_QWORD*)*v36;
                  if (v36 == nullptr) {
                    goto LABEL_39;
                  }
                }
              }
              do {
                v38 = v36[1];
                if (v27 == v38) {
                  if (v36[2] == v27) {
                  LABEL_31:
                    v40 = v37;
                    result =
                        game_GameVariableTable_Find(*(_QWORD*)(v7 + 48), v60);
                    if (result != 0) {
                      v42 = v40;
                      v43 = (__int64*)result;
                      v44 = v28 | (v29 << 8) | (v30 << 16) | (v42 << 24);
                      if (*(_DWORD*)(result + 32) != v44) {
                        *(_DWORD*)(result + 32) = v44;
                        if ((*(_BYTE*)(v31 + 3932768) & 0xAE) == 0) {
                          result = GameData_22400f8;
                          if (GameData_22400f8 != 0) {
                            result = GameRoutine_12274e0(GameData_22400f8, v43);
                          }
                        }
                        v46 = v43[11];
                        for (j = v43[12]; v46 != j; v46 += 48) {
                          v61 = v43;
                          v47 = *(_QWORD*)(v46 + 32);
                          if (v47 == 0) {
                            GameRoutine_60a310(0, v41);
                          }
                          result = (*(__int64 (**)(__int64, __int64**))(
                              *(_QWORD*)v47 + 48LL))(v47, &v61);
                        }
                      }
                    }
                    break;
                  }
                }
                else {
                  if (v38 >= v32) {
                    v38 %= v32;
                  }
                  if (v38 != v34) {
                    break;
                  }
                }
                v36 = (_QWORD*)*v36;
              } while (v36 != nullptr);
            }
          }
        }
      }
    LABEL_39:
      v49 = (_QWORD*)v4[2];
      v48 = v4[3];
      if ((unsigned __int64)v49 < v48) {
        *v49 = v60[0];
        v16 = (__int64)(v49 + 1);
      }
      else {
        v50 = v4[1];
        v51 = (char*)v49 - v50;
        v52 = ((__int64)v49 - v50) >> 3;
        v53 = v52 + 1;
        if ((unsigned __int64)(v52 + 1) >> 61 != 0) {
          GameRoutine_65c760(result);
        }
        v54 = v48 - v50;
        if (v54 >> 2 > v53) {
          v53 = v54 >> 2;
        }
        if ((unsigned __int64)v54 >= 0x7FFFFFFFFFFFFFF8LL) {
          v55 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v55 = v53;
        }
        if (v55 != 0) {
          if (v55 >> 61 != 0) {
            GameRoutine_60a210(result);
          }
          v56 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v55, 16, 0);
        }
        else {
          v56 = 0;
        }
        v57 = v56 + 8 * v55;
        v58 = (__int64)&v51[v56 + -8 * v52];
        *(_QWORD*)&v51[v56] = v60[0];
        v16 = (__int64)&v51[v56 + 8];
        result = memcpy(v58, v50, v51);
        v4[1] = v58;
        v4[2] = v16;
        v4[3] = v57;
        if (v50 != 0) {
          v59 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v59 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v59);
        }
      }
      v4[2] = v16;
    }
  }
  return result;
}

__int64 Impl_Destructor_1243e00(_QWORD* a1)
{
  __int64 result;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;

  (*(void (**)(__int64))(*(_QWORD*)GameData_2240170 + 24LL))(GameData_2240170);
  result = GameData_2240170;
  if (GameData_2240170 != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)GameData_2240170 + 8LL))(
        GameData_2240170);
  }
  GameData_2240170 = 0;
  v3 = (_QWORD*)a1[78];
  v4 = fw_memory_g_heap_manager_ptr;
  if (v3 != nullptr) {
    do {
      v5 = (_QWORD*)*v3;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v6 = 128;
      }
      else {
        v6 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6);
      v3 = v5;
    } while (v5 != nullptr);
  }
  v7 = a1[76];
  a1[76] = 0;
  if (v7 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v8 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8);
  }
  v9 = a1[73];
  if (v9 != 0) {
    v10 = *(_QWORD*)v4;
    a1[74] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v10 + v11);
  }
  v12 = (_QWORD*)a1[70];
  if (v12 != nullptr) {
    do {
      v13 = (_QWORD*)*v12;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v14 = 128;
      }
      else {
        v14 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v14);
      v12 = v13;
    } while (v13 != nullptr);
  }
  v15 = a1[68];
  a1[68] = 0;
  if (v15 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v16 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v16);
  }
  v17 = a1[65];
  if (v17 != 0) {
    v18 = *(_QWORD*)v4;
    a1[66] = v17;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v18 + v19);
  }
  v20 = (_QWORD*)a1[62];
  if (v20 != nullptr) {
    do {
      v21 = (_QWORD*)*v20;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v22 = 128;
      }
      else {
        v22 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v22);
      v20 = v21;
    } while (v21 != nullptr);
  }
  v23 = a1[60];
  a1[60] = 0;
  if (v23 != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v24 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v24);
  }
  v25 = a1[57];
  if (v25 != 0) {
    v26 = *(_QWORD*)v4;
    a1[58] = v25;
    v27 = 128;
    if (*(_QWORD*)(v26 + 200) == 0) {
      v27 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v26 + v27);
  }
  v28 = a1[53];
  if (v28 != 0) {
    v29 = *(_QWORD*)v4;
    a1[54] = v28;
    v30 = 128;
    if (*(_QWORD*)(v29 + 200) == 0) {
      v30 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v29 + v30);
  }
  v31 = (_QWORD*)a1[49];
  if (v31 != nullptr) {
    v32 = (_QWORD*)a1[50];
    if (v31 == v32) {
      goto LABEL_61;
    }
    do {
      v35 = *--v32;
      v34 = v35;
      *v32 = 0;
      if (v35 != 0) {
        v36 = *(_QWORD*)(v34 + 8);
        if (v36 != 0) {
          v37 = *(_QWORD*)v4;
          *(_QWORD*)(v34 + 16) = v36;
          if (*(_QWORD*)(v37 + 200) != 0) {
            v38 = 128;
          }
          else {
            v38 = 56;
          }
          nn_mem_StandardAllocator_Free(v37 + v38);
        }
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v33 = 128;
        }
        else {
          v33 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v33);
      }
    } while (v32 != v31);
    v39 = a1[49];
    a1[50] = v31;
    if (v39 != 0) {
    LABEL_61:
      v40 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v40 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v40);
    }
  }
  v41 = a1[46];
  if (v41 != 0) {
    v42 = *(_QWORD*)v4;
    a1[47] = v41;
    v43 = 128;
    if (*(_QWORD*)(v42 + 200) == 0) {
      v43 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v42 + v43);
  }
  v44 = a1[42];
  if (v44 != 0) {
    v45 = *(_QWORD*)v4;
    a1[43] = v44;
    v46 = 128;
    if (*(_QWORD*)(v45 + 200) == 0) {
      v46 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v45 + v46);
  }
  v47 = a1[38];
  if (v47 != 0) {
    v48 = *(_QWORD*)v4;
    a1[39] = v47;
    v49 = 128;
    if (*(_QWORD*)(v48 + 200) == 0) {
      v49 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v48 + v49);
  }
  v50 = a1[34];
  if (v50 != 0) {
    v51 = *(_QWORD*)v4;
    a1[35] = v50;
    v52 = 128;
    if (*(_QWORD*)(v51 + 200) == 0) {
      v52 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v51 + v52);
  }
  v53 = a1[30];
  if (v53 != 0) {
    v54 = *(_QWORD*)v4;
    a1[31] = v53;
    v55 = 128;
    if (*(_QWORD*)(v54 + 200) == 0) {
      v55 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v54 + v55);
  }
  v56 = a1[26];
  if (v56 != 0) {
    v57 = *(_QWORD*)v4;
    a1[27] = v56;
    v58 = 128;
    if (*(_QWORD*)(v57 + 200) == 0) {
      v58 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v57 + v58);
  }
  v59 = a1[22];
  if (v59 != 0) {
    v60 = *(_QWORD*)v4;
    a1[23] = v59;
    v61 = 128;
    if (*(_QWORD*)(v60 + 200) == 0) {
      v61 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v60 + v61);
  }
  v62 = a1[18];
  if (v62 != 0) {
    v63 = *(_QWORD*)v4;
    a1[19] = v62;
    v64 = 128;
    if (*(_QWORD*)(v63 + 200) == 0) {
      v64 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v63 + v64);
  }
  v65 = a1[14];
  if (v65 != 0) {
    v66 = *(_QWORD*)v4;
    a1[15] = v65;
    v67 = 128;
    if (*(_QWORD*)(v66 + 200) == 0) {
      v67 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v66 + v67);
  }
  v68 = a1[10];
  if (v68 != 0) {
    v69 = *(_QWORD*)v4;
    a1[11] = v68;
    v70 = 128;
    if (*(_QWORD*)(v69 + 200) == 0) {
      v70 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v69 + v70);
  }
  v71 = a1[6];
  if (v71 != 0) {
    v72 = *(_QWORD*)v4;
    a1[7] = v71;
    v73 = 128;
    if (*(_QWORD*)(v72 + 200) == 0) {
      v73 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v72 + v73);
  }
  v74 = a1[2];
  if (v74 != 0) {
    v75 = *(_QWORD*)v4;
    a1[3] = v74;
    v76 = 128;
    if (*(_QWORD*)(v75 + 200) == 0) {
      v76 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v75 + v76);
  }
  *a1 = GameData_201cb30;
  if ((_QWORD*)GameData_2240178 == a1) {
    GameData_2240178 = 0;
  }
  return result;
}

__int64 Impl_Destructor_1286cc0(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = *(_QWORD**)(result + 48);
  v2 = (_QWORD*)result;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    do {
      v4 = (_QWORD*)*v1;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
      v1 = v4;
    } while (v4 != nullptr);
  }
  v6 = v2[4];
  v2[4] = 0;
  if (v6 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v7 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
  }
  v8 = v2[1];
  if (v8 != 0) {
    v9 = *(_QWORD*)v3;
    v2[2] = v8;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v9 + v10);
  }
  *v2 = GameData_20200c8;
  if ((_QWORD*)GameData_22407a8 == v2) {
    GameData_22407a8 = 0;
  }
  return result;
}

__int64 Impl_DeletingDestructor_1286dc0(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = (_QWORD*)a1[6];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    do {
      v4 = (_QWORD*)*v1;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
      v1 = v4;
    } while (v4 != nullptr);
  }
  v6 = a1[4];
  a1[4] = 0;
  if (v6 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
  }
  v8 = a1[1];
  if (v8 != 0) {
    v9 = *(_QWORD*)v3;
    a1[2] = v8;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(v9 + v10);
  }
  if ((_QWORD*)GameData_22407a8 == a1) {
    GameData_22407a8 = 0;
  }
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v11 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11);
}

__int64 game_map_history_anonymous_Impl_RegisterAll_lambda0_Invoke(__int64 a1,
                                                                   __int64 a2)
{
  _QWORD* v2;
  __int64 result;
  __int64 v5;

  v2 = *(_QWORD**)(a1 + 8);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a2 + 64LL))(a2) & 1) == 0 ||
      (_DWORD)(result = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 72LL))(a2)) !=
          0) {
    v5 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 24LL))(a2);
    return GameRoutine_12a5400(v2, v5);
  }
  return result;
}

__int64 Impl_12a6c20(__int64 a1)
{
  int v2;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  _QWORD v21[2];
  _QWORD v22[2];
  _QWORD v23[2];

  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 80LL))(a1);
  if ((int)((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 88LL))(a1) + v2) < 0) {
    return 0;
  }
  v3 = *GameData_212cfb8[0];
  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 80LL))(a1);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 88LL))(a1);
  v6 = *(_QWORD*)(v3 + 16);
  v7 = v4 + 32 * v5;
  if (v7 >= 0x400) {
    v8 = 0;
  }
  else {
    v8 = v7;
  }
  v9 = *(__int16*)(v6 + 2LL * (unsigned int)v8 + 4200);
  v10 = *(_QWORD*)(v6 + 8);
  if ((v9 < 0 || v10 == 0) &&
      ((v9 = *(__int16*)(v6 + 2 * v8 + 2152)) < 0 || v10 == 0)) {
    v20 = *(__int16*)(v6 + 104 + 2 * v8);
    if (v20 < 0) {
      return 0;
    }
    v11 = v10 + 144LL * (unsigned int)v20;
    if (v11 == 0) {
      return 0;
    }
  }
  else {
    v11 = v10 + 144LL * (unsigned int)v9;
    if (v11 == 0) {
      return 0;
    }
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v11 + 472LL))(v11) & 1) != 0) {
    v12 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 96LL))(a1);
    if (v12 == (*(unsigned int (**)(__int64))(*(_QWORD*)v11 + 88LL))(v11)) {
      v13 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 112LL))(a1);
      if (v13 == (*(unsigned int (**)(__int64))(*(_QWORD*)v11 + 104LL))(v11)) {
        v14 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 104LL))(a1);
        if (v14 == (*(unsigned int (**)(__int64))(*(_QWORD*)v11 + 96LL))(v11)) {
          v15 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 120LL))(a1);
          if (v15 ==
              (*(unsigned int (**)(__int64))(*(_QWORD*)v11 + 112LL))(v11)) {
            v16 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 224LL))(v11);
            v23[1] = &GameData_1ae726b;
            v23[0] = game_HashString(&GameData_1ae726b);
            if (v16 != Impl_12a6e80_alt1(v23)) {
              v17 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 224LL))(v11);
              v22[1] = &GameData_1adbe5e;
              v22[0] = game_HashString(&GameData_1adbe5e);
              if (v17 != Impl_12a6e80_alt1(v22)) {
                v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 224LL))(v11);
                v21[1] = &GameData_1a9a226;
                v21[0] = game_HashString(&GameData_1a9a226);
                if (v18 != Impl_12a6e80_alt1(v21)) {
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

__int64 Impl_12a6e80(unsigned __int64* a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 result;
  __int64 v10;

  v1 = *a1;
  if (*a1 != 0) {
    v2 = *(_QWORD*)(GameData_21c9bd0 + 96);
    if (v2 != 0 && *(_QWORD*)(GameData_21c9bd0 + 112) != 0) {
      v4 = v2 - 1;
      if ((v2 & (v2 - 1)) != 0) {
        v5 = *a1;
        if (v1 >= v2) {
          v5 = v1 % v2;
        }
      }
      else {
        v5 = v4 & v1;
      }
      v6 = *(_QWORD**)(*(_QWORD*)(GameData_21c9bd0 + 88) + 8 * v5);
      if (v6 != nullptr) {
        v7 = (_QWORD*)*v6;
        if (v7 != nullptr) {
          if ((v2 & v4) == 0) {
            while (1) {
              v10 = v7[1];
              if (v10 == v1) {
                if (v7[2] == v1) {
                  return v7[3];
                }
              }
              else if ((v10 & v4) != v5) {
                return 0;
              }
              v7 = (_QWORD*)*v7;
              result = 0;
              if (v7 == nullptr) {
                return result;
              }
            }
          }
          do {
            v8 = v7[1];
            if (v8 == v1) {
              if (v7[2] == v1) {
                return v7[3];
              }
            }
            else {
              if (v8 >= v2) {
                v8 %= v2;
              }
              if (v8 != v5) {
                return 0;
              }
            }
            v7 = (_QWORD*)*v7;
          } while (v7 != nullptr);
        }
      }
    }
  }
  return 0;
}

unsigned __int64 Impl_12a6fa0(__int64* a1, __int64 a2, char a3, char a4, int a5)
{
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 result;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  char v44;

  v6 = a1[1];
  v5 = a1[2];
  if (v6 < v5) {
    result = strlen(a2);
    if (result < 0xFFFFFFFFFFFFFFF7LL) {
      v13 = result;
      if (result >= 0x17) {
        if ((result | 7) == 0x17) {
          v22 = 26;
        }
        else {
          v22 = (result | 7) + 1;
        }
        v14 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v22, 16,
                                             0);
        *(_QWORD*)(v6 + 8) = v13;
        *(_QWORD*)(v6 + 16) = v14;
        *(_QWORD*)v6 = v22 | 1;
      }
      else {
        *(_BYTE*)v6 = 2 * result;
        v14 = v6 + 1;
        if (result == 0) {
          goto LABEL_20;
        }
      }
      result = memmove(v14, a2, v13);
    LABEL_20:
      *(_BYTE*)(v14 + v13) = 0;
      *(_BYTE*)(v6 + 24) = a3;
      v23 = v6 + 32;
      *(_BYTE*)(v6 + 25) = a4;
      *(_DWORD*)(v6 + 28) = a5;
      goto LABEL_50;
    }
  LABEL_51:
    String_60a1d0();
  }
  v15 = v6 - *a1;
  v16 = (v15 >> 5) + 1;
  if (v16 >> 59 != 0) {
    GameRoutine_12a6f80();
  }
  v17 = v5 - *a1;
  v18 = v17 >> 4;
  v19 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v17 >> 4 <= v16) {
    v18 = ((__int64)(v6 - *a1) >> 5) + 1;
  }
  if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFE0LL) {
    v20 = 0x7FFFFFFFFFFFFFFLL;
  }
  else {
    v20 = v18;
  }
  if (v20 != 0) {
    if (v20 >> 59 != 0) {
      GameRoutine_60a210(a1);
    }
    v21 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         32 * v20, 16, 0);
  }
  else {
    v21 = 0;
  }
  result = strlen(a2);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_51;
  }
  v24 = v21 + v15;
  v25 = result;
  if (result >= 0x17) {
    v44 = a4;
    v27 = a5;
    if ((result | 7) == 0x17) {
      v28 = 26;
    }
    else {
      v28 = (result | 7) + 1;
    }
    v29 = fw_memory_HeapManager_Allocate(*v19, v28, 16, 0);
    v30 = v28 | 1;
    a5 = v27;
    a4 = v44;
    v26 = v29;
    *(_QWORD*)(v24 + 8) = v25;
    *(_QWORD*)(v24 + 16) = v29;
    *(_QWORD*)v24 = v30;
  }
  else {
    *(_BYTE*)v24 = 2 * result;
    v26 = v24 + 1;
    if (result == 0) {
      goto LABEL_31;
    }
  }
  result = memmove(v26, a2, v25);
LABEL_31:
  *(_BYTE*)(v26 + v25) = 0;
  v31 = v21 + 32 * v20;
  *(_BYTE*)(v24 + 25) = a4;
  v23 = v24 + 32;
  v32 = *a1;
  v33 = a1[1];
  *(_DWORD*)(v24 + 28) = a5;
  *(_BYTE*)(v24 + 24) = a3;
  v34 = v24 + v32 - v33;
  if (v32 != v33) {
    v35 = 0;
    do {
      v41 = (__int64*)(v32 + v35);
      result = v34 + v35;
      if ((*(_BYTE*)(v32 + v35) & 1) != 0) {
        result = fw_text_String_CopyTerminated(result, v41[2], v41[1]);
      }
      else {
        v36 = *v41;
        v37 = v41[1];
        v38 = v41[2];
        *(_QWORD*)(result + 8) = v37;
        *(_QWORD*)(result + 16) = v38;
        *(_QWORD*)result = v36;
      }
      v39 = v32 + v35;
      v40 = v34 + v35;
      v35 += 32;
      *(_BYTE*)(v40 + 24) = *(_BYTE*)(v39 + 24);
      *(_BYTE*)(v40 + 25) = *(_BYTE*)(v39 + 25);
      *(_DWORD*)(v40 + 28) = *(_DWORD*)(v39 + 28);
    } while (v32 + v35 != v33);
    do {
      if ((*(_BYTE*)v32 & 1) != 0 && *(_QWORD*)(v32 + 16) != 0) {
        if (*(_QWORD*)(*v19 + 200LL) != 0) {
          v42 = 128;
        }
        else {
          v42 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*v19 + v42);
      }
      v32 += 32;
    } while (v32 != v33);
    v32 = *a1;
  }
  *a1 = v34;
  a1[1] = v23;
  a1[2] = v31;
  if (v32 != 0) {
    v43 = 128;
    if (*(_QWORD*)(*v19 + 200LL) == 0) {
      v43 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v19 + v43);
  }
LABEL_50:
  a1[1] = v23;
  return result;
}

__int64 Impl_Destructor_12a72c0(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v1 = *(_QWORD**)(result + 88);
  v2 = (_QWORD*)result;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    do {
      v4 = (_QWORD*)*v1;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
      v1 = v4;
    } while (v4 != nullptr);
  }
  v6 = v2[9];
  v2[9] = 0;
  if (v6 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v7 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
  }
  v8 = (_QWORD*)v2[6];
  if (v8 != nullptr) {
    do {
      v9 = (_QWORD*)*v8;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v10 = 128;
      }
      else {
        v10 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10);
      v8 = v9;
    } while (v9 != nullptr);
  }
  v11 = v2[4];
  v2[4] = 0;
  if (v11 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v12 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12);
  }
  v13 = v2[1];
  if (v13 != 0) {
    v14 = v2[2];
    if (v13 == v14) {
      goto LABEL_30;
    }
    v15 = v2[2];
    do {
      v16 = *(_BYTE*)(v15 - 32);
      v15 -= 32;
      if ((v16 & 1) != 0 && *(_QWORD*)(v14 - 16) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v17 = 128;
        }
        else {
          v17 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v17);
      }
      v14 = v15;
    } while (v15 != v13);
    v18 = v2[1];
    v2[2] = v13;
    if (v18 != 0) {
    LABEL_30:
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v19 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v19);
    }
  }
  *v2 = GameData_2021c58;
  if ((_QWORD*)game_script_map_obj_g_object_records == v2) {
    game_script_map_obj_g_object_records = 0;
  }
  return result;
}

#pragma GCC visibility pop
