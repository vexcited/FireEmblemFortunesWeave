#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_telop_TelopResult_Destroy_TelopResult(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_telop_TelopSkillLearn_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TelopSkillLearn_Unknown57(__int64 a1);
__int64 TelopSkillLearn_DeletingDestructor(_QWORD* a1);
__int64 GameRoutine_1767f90(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_20c2320[])();
void __attribute__((noreturn)) GameRoutine_177f870(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6881c0(void);
__int64 TelopSkillLearn_1765940(__int64 result, __int64 a2);
__int64 TelopSkillLearn_1765e60(__int64 a1);
_QWORD* game_telop_TelopSkillLearn_CreateBind_lambda0_Clone(_QWORD* a1);
_QWORD* game_telop_TelopSkillLearn_CreateBind_lambda0_CloneInto(_QWORD* result,
                                                                _QWORD* a2);
__int64 game_telop_TelopSkillLearn_CreateBind_lambda1_Invoke(__int64 a1,
                                                             _QWORD* a2);
_BYTE* GameRoutine_1765aa0(_QWORD*, __int64);
__int64 GameRoutine_1374b10(_QWORD, _QWORD);
__int64 GameRoutine_1378190(_QWORD, _QWORD);
__int64 GameRoutine_1780160(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7fb7c0(_QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcList_9bd480(_QWORD);
__int64 Se_80e330(_QWORD, _QWORD);
__int64 TelopSkillLearn_1765940_alt1(_QWORD,
                                     _QWORD) __asm__("TelopSkillLearn_1765940");
__int64 game_ProcList_Call_9bcfa0(_QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 game_ProcInst_Register(_QWORD);
extern _UNKNOWN* GameData_2130f68;
extern __int64 (*GameData_20c23a0[])();
extern __int64 (*game_telop_TelopResult_vtable[])();
extern __int64* GameData_2130240[8];
extern __int64* GameData_2130f98[4];
extern __int64 GameData_212c608[2];
extern __int64 GameData_2131678;
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn))
GameRoutine_6881c0_alt1(_QWORD) __asm__("GameRoutine_6881c0");
void __attribute__((noreturn)) GameRoutine_6e3e20(_QWORD);
void __attribute__((noreturn)) GameRoutine_705570(void);
__int64 game_telop_TelopSkillLearn_CreateBind(__int64 a1, __int64 (**a2)(),
                                              __int64** a3, __int64 a4);
_BYTE* game_telop_TelopSkillLearn_CreateBind_lambda0_Invoke_alt1(
    __int64* a1,
    __int64*
        a2) __asm__("game_telop_TelopSkillLearn_CreateBind_lambda0_Invoke");
__int64*
GameRoutine_1780160_alt1(__int64* result, __int64, __int64,
                         unsigned __int64) __asm__("GameRoutine_1780160");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 ProcInst_657850_alt1(__int64, __int64, __int64, char,
                             __int64) __asm__("ProcInst_657850");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_ProcInst_Register_alt1(__int64) __asm__("game_ProcInst_Register");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
void GameRoutine_1374b10_alt1(__int64, int) __asm__("GameRoutine_1374b10");
void GameRoutine_1378190_alt1(__int64,
                              const char*) __asm__("GameRoutine_1378190");
void GameRoutine_1765aa0_alt1(__int64*, __int64) __asm__("GameRoutine_1765aa0");
void Se_80e330_alt1(__int64, const char*) __asm__("Se_80e330");
void TelopSkillLearn_1765940_alt2(_QWORD*,
                                  __int64) __asm__("TelopSkillLearn_1765940");
void __attribute__((noreturn))
GameRoutine_6881c0_alt2() __asm__("GameRoutine_6881c0");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_telop_TelopSkillLearn_CreateBind_lambda0_Invoke(__int64* a1,
                                                          __int64* a2);

__int64 game_telop_TelopSkillLearn_CreateBind(__int64 a1, __int64 (**a2)(),
                                              __int64** a3, __int64 a4)
{
  __int64* v4;
  __int64* v5;
  int v7;
  __int64* v8;
  __int64 v9;
  char* v10;
  char* v11;
  unsigned __int64 v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 (***v38)();
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  __int64* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 (***v52)();
  __int64 v53;
  __int64 (**v54)();
  __int64 v55;
  char* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v62;
  __int64 (**v64)();
  __int64 (**v65)();
  __int64 v66;
  int v67;
  __int64 (***v68)();
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;

  v5 = *a3;
  v4 = a3[1];
  v62 = a1;
  if (*a3 == v4) {
    v11 = nullptr;
    v10 = nullptr;
    v7 = 0;
  }
  else {
    v7 = 0;
    v8 = *a3;
    do {
      v9 = *v8++;
      if (*(_BYTE*)(v9 + 34) != 0) {
        ++v7;
      }
    } while (v8 != v4);
    v10 = nullptr;
    v11 = nullptr;
    v12 = 0;
    do {
      if (*(_BYTE*)(*v5 + 32) != 0) {
        v13 = *(_QWORD*)(*v5 + 48);
        if (*(_QWORD*)(v13 + 552) != 0 || *(_BYTE*)(v13 + 104) == 3 ||
            *(_BYTE*)(v13 + 250) == 46) {
          if ((unsigned __int64)v11 < v12) {
            *(_QWORD*)v11 = v13;
            v11 += 8;
          }
          else {
            v14 = (char*)(v11 - v10);
            v15 = (v11 - v10) >> 3;
            v16 = v15 + 1;
            if ((unsigned __int64)(v15 + 1) >> 61 != 0) {
              GameRoutine_705570();
            }
            if ((__int64)(v12 - (_QWORD)v10) >> 2 > v16) {
              v16 = (__int64)(v12 - (_QWORD)v10) >> 2;
            }
            if (v12 - (unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
              v17 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v17 = v16;
            }
            if (v17 != 0) {
              if (v17 >> 61 != 0) {
                GameRoutine_60a210(a1);
              }
              v18 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v17, 16, 0);
            }
            else {
              v18 = 0;
            }
            v12 = v18 + 8 * v17;
            v19 = (char*)(v11 - v10);
            v20 = (__int64)&v14[v18 + -8 * v15];
            *(_QWORD*)&v14[v18] = v13;
            v11 = &v14[v18 + 8];
            a1 = memcpy(v20, v10, v19);
            if (v10 != nullptr) {
              v21 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v21 = 56;
              }
              a1 = nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v21);
            }
            v10 = (char*)v20;
          }
        }
        else {
          ++v7;
        }
      }
      ++v5;
    } while (v5 != v4);
  }
  if (a4 == 0) {
    LODWORD(v30) = 0;
    v31 = (__int64*)fw_memory_g_heap_manager_ptr;
    goto LABEL_51;
  }
  v22 = *(_QWORD*)(a4 + 24);
  v64 = nullptr;
  v65 = nullptr;
  v66 = 0;
  v67 = 0;
  if (&v64 != (__int64 (***)())(v22 + 768)) {
    a1 = GameRoutine_7fb7c0(&v64);
  }
  v23 = *(_DWORD*)(v22 + 792);
  v24 = *(_QWORD*)(v22 + 800);
  v68 = nullptr;
  v69 = 0;
  v70 = 0;
  v67 = v23;
  v25 = *(_QWORD*)(v22 + 808);
  v26 = v25 - v24;
  if (v25 == v24) {
    v29 = 0;
    v28 = 0;
  }
  else {
    if (v26 < 0) {
      goto LABEL_85;
    }
    v27 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v25 - v24, 16, 0);
    v28 = v27 + v26;
    v29 = v27;
    v68 = (__int64 (***)())v27;
    v69 = v27;
    v70 = v27 + v26;
    a1 = memcpy(v27, v24, v26);
    v69 = v28;
  }
  v32 = *(_QWORD*)(v22 + 824);
  v33 = *(_QWORD*)(v22 + 832);
  v72 = 0;
  v73 = 0;
  v34 = v33 - v32;
  v71 = 0;
  if (v33 != v32) {
    v31 = &fw_memory_g_heap_manager;
    if ((v34 & 0x8000000000000000LL) == 0) {
      v35 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v33 - v32,
                                           16, 0);
      v36 = *(_QWORD*)(v22 + 848);
      v71 = v35;
      v72 = v35;
      v73 = v35 + v34;
      v74 = v36;
      v75 = *(_QWORD*)(v22 + 856);
      v37 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v37);
      v38 = v68;
      v39 = v28 - v29;
      if (v68 == nullptr) {
        goto LABEL_47;
      }
      goto LABEL_44;
    }
  LABEL_85:
    GameRoutine_6e3e20(a1);
  }
  v50 = *(_QWORD*)(v22 + 856);
  v38 = (__int64 (***)())v29;
  v74 = *(_QWORD*)(v22 + 848);
  v75 = v50;
  v31 = (__int64*)fw_memory_g_heap_manager_ptr;
  v39 = v28 - v29;
  if (v29 != 0) {
  LABEL_44:
    v40 = *v31;
    v69 = (__int64)v38;
    v41 = 128;
    if (*(_QWORD*)(v40 + 200) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v40 + v41);
  }
LABEL_47:
  v30 = v39 >> 2;
  if (v64 != nullptr) {
    v42 = *v31;
    v65 = v64;
    v43 = 128;
    if (*(_QWORD*)(v42 + 200) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v42 + v43);
  }
LABEL_51:
  if (!(((int)v30 + v7 < 0) ^ __OFADD__((_DWORD)v30, v7) |
        ((_DWORD)v30 + v7 == 0))) {
    v44 = ProcList_9bd480(v62);
    if (v44 == 0) {
      goto LABEL_78;
    }
    v46 = *a3;
    v45 = a3[1];
    v47 = (char*)v45 - (char*)*a3;
    if (v45 == *a3) {
      v48 = 0;
      v49 = 0;
    }
    else {
      if (v47 < 0) {
        goto LABEL_86;
      }
      v48 =
          fw_memory_HeapManager_Allocate(*v31, (char*)v45 - (char*)*a3, 16, 0);
      v49 = v48 + v47;
      memcpy(v48, v46, v47);
    }
    v51 = v49 - v48;
    v52 = (__int64 (***)())fw_memory_HeapManager_Allocate(*v31, 48, 16, 0);
    v52[2] = nullptr;
    v52[3] = nullptr;
    v52[4] = nullptr;
    *v52 = GameData_20c2320;
    v52[1] = a2;
    if (v49 == v48) {
      goto LABEL_65;
    }
    if ((v51 & 0x8000000000000000LL) == 0) {
      v53 = fw_memory_HeapManager_Allocate(*v31, v49 - v48, 16, 0);
      v54 = (__int64 (**)())(v53 + v51);
      v52[2] = (__int64 (**)())v53;
      v52[4] = (__int64 (**)())(v53 + v51);
      memcpy(v53, v48, v51);
      v52[3] = v54;
    LABEL_65:
      v68 = v52;
      v52[5] = (__int64 (**)())a4;
      game_ProcList_Call_9bcfa0(v44, &v64);
      ((void (*)(__int64 (***)()))(*v52)[5])(v52);
      if (v48 != 0) {
        v55 = 128;
        if (*(_QWORD*)(*v31 + 200) == 0) {
          v55 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v31 + v55);
      }
    LABEL_69:
      if (v10 != v11) {
        v56 = v10;
        while (1) {
          v58 = *(_QWORD*)v56;
          v64 = GameData_20c23a0;
          v65 = a2;
          v68 = &v64;
          v66 = v58;
          game_ProcList_Call_9bcfa0(v44, &v64);
          if (v68 == &v64) {
            v57 = 4;
          }
          else {
            if (v68 == nullptr) {
              goto LABEL_73;
            }
            v57 = 5;
          }
          (*v68)[v57]();
        LABEL_73:
          v56 += 8;
          if (v56 == v11) {
            goto LABEL_78;
          }
        }
      }
      goto LABEL_78;
    }
  LABEL_86:
    GameRoutine_6881c0();
  }
  if (v11 == v10) {
    v44 = 0;
    goto LABEL_78;
  }
  v44 = ProcList_9bd480(v62);
  if (v44 != 0) {
    goto LABEL_69;
  }
LABEL_78:
  if (v10 != nullptr) {
    v59 = 128;
    if (*(_QWORD*)(*v31 + 200) == 0) {
      v59 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v31 + v59);
  }
  return v44;
}

__int64 TelopSkillLearn_1765940(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char* v5;
  _QWORD* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;

  *(_QWORD*)(result + 1200) = a2;
  if (a2 != 0) {
    v2 = *(_QWORD*)(a2 + 24);
    v3 = *(_QWORD*)(v2 + 800);
    v4 = *(_QWORD*)(v2 + 808);
    if (v3 != v4) {
      v5 = *(char**)(result + 1216);
      v6 = (_QWORD*)result;
      v7 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      do {
        v8 = v6[153];
        if ((unsigned __int64)v5 < v8) {
          *(_QWORD*)v5 = v3;
          v5 += 8;
        }
        else {
          v9 = v6[151];
          v10 = &v5[-v9];
          v11 = (__int64)&v5[-v9] >> 3;
          v12 = v11 + 1;
          if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
            GameRoutine_177f870();
          }
          v13 = v8 - v9;
          if (v13 >> 2 > v12) {
            v12 = v13 >> 2;
          }
          if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
            v14 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v14 = v12;
          }
          if (v14 != 0) {
            if (v14 >> 61 != 0) {
              GameRoutine_60a210(result);
            }
            v15 = fw_memory_HeapManager_Allocate(*v7, 8 * v14, 16, 0);
          }
          else {
            v15 = 0;
          }
          v16 = v15 + 8 * v14;
          v17 = &v5[-v9];
          v18 = (__int64)&v10[v15 + -8 * v11];
          *(_QWORD*)&v10[v15] = v3;
          v5 = &v10[v15 + 8];
          result = memcpy(v18, v9, v17);
          v6[151] = v18;
          v6[152] = v5;
          v6[153] = v16;
          if (v9 != 0) {
            v19 = 128;
            if (*(_QWORD*)(*v7 + 200LL) == 0) {
              v19 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*v7 + v19, v9);
          }
        }
        v3 += 4;
        v6[152] = v5;
      } while (v3 != v4);
    }
  }
  return result;
}

__int64 TelopSkillLearn_1765e60(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  __int128 v6;
  __int64 v7;

  v1 = *(unsigned __int8*)(a1 + 824);
  v2 = *(_QWORD*)(a1 + 832);
  v7 = 0;
  v6 = (__typeof__(v6)){0};
  if ((v1 & 1) != 0) {
    v4 = v2;
  }
  else {
    v4 = v1 >> 1;
  }
  if (v4 != 0) {
    *(_WORD*)((char*)&v6 + 9) = 28239;
    *(_QWORD*)((char*)&v6 + 1) = *(_QWORD*)"Pos_TalkOn";
  }
  else {
    DWORD2(v6) = 1717981035;
    *(_QWORD*)((char*)&v6 + 1) = *(_QWORD*)"Pos_TalkOff";
  }
  LayoutAccessor_1562cf0_alt1(a1 + 168, (const char*)&v6 + 1);
  return LayoutAccessor_1562cf0_alt1(a1 + 168, "Type_TitleOff");
}

__int64 TelopSkillLearn_Unknown57(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BYTE v7[4];
  int v8;

  *(_DWORD*)(a1 + 876) = 0;
  *(_DWORD*)(a1 + 940) = 0;
  v8 = 0;
  v7[0] = 0;
  *(_QWORD*)(a1 + 868) = 0;
  (*(void (**)(__int64, int*, _BYTE*))(*(_QWORD*)a1 + 496LL))(a1, &v8, v7);
  (*(void (**)(__int64, int*, _BYTE*))(*(_QWORD*)a1 + 504LL))(a1, &v8, v7);
  result = (*(__int64 (**)(__int64, int*, _BYTE*))(*(_QWORD*)a1 + 512LL))(
      a1, &v8, v7);
  v3 = *(_QWORD*)(a1 + 1184);
  v4 = *(_QWORD*)(a1 + 1176);
  if (v3 != v4) {
    v5 = *(_QWORD*)(a1 + 1176);
    do {
      v6 = v3 - (v4 + 8);
      if (v3 != v4 + 8) {
        result = memmove(v4, v4 + 8, v3 - (v4 + 8));
        v5 = *(_QWORD*)(a1 + 1176);
      }
      v3 = v4 + v6;
      v4 = v5;
      *(_QWORD*)(a1 + 1184) = v3;
    } while (v3 != v5);
  }
  return result;
}

__int64 TelopSkillLearn_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = a1[151];
  *a1 = game_telop_TelopSkillLearn_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[152] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = a1[147];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    a1[148] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  game_telop_TelopResult_Destroy_TelopResult(a1);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9, a1);
}

_QWORD* game_telop_TelopSkillLearn_CreateBind_lambda0_Clone(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v4 = a1[1];
  v5 = a1[2];
  v6 = v3;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  *v3 = GameData_20c2320;
  v3[1] = v4;
  v7 = a1[3];
  v8 = v7 - v5;
  if (v7 != v5) {
    if (v8 < 0) {
      GameRoutine_6881c0();
    }
    v9 = fw_memory_HeapManager_Allocate(*v2, v7 - v5, 16, 0);
    v10 = v9 + v8;
    v6[2] = v9;
    v6[4] = v9 + v8;
    memcpy(v9, v5, v8);
    v6[3] = v10;
  }
  v6[5] = a1[5];
  return v6;
}

_QWORD* game_telop_TelopSkillLearn_CreateBind_lambda0_CloneInto(_QWORD* result,
                                                                _QWORD* a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v3 = result;
  *a2 = GameData_20c2320;
  v4 = result[1];
  a2[3] = 0;
  a2[4] = 0;
  a2[1] = v4;
  a2[2] = 0;
  v6 = result[2];
  v5 = result[3];
  v7 = v5 - v6;
  if (v5 != v6) {
    if (v7 < 0) {
      GameRoutine_6881c0();
    }
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v5 - v6, 16, 0);
    v9 = v8 + v7;
    a2[2] = v8;
    a2[3] = v8;
    a2[4] = v8 + v7;
    result = (_QWORD*)memcpy(v8, v6, v7);
    a2[3] = v9;
  }
  a2[5] = v3[5];
  return result;
}

void game_telop_TelopSkillLearn_CreateBind_lambda0_Invoke(__int64* a1,
                                                          __int64* a2)
{
  __int64 v2;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  char* v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v2 = *a2;
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1232, 16, 0);
  memset_alt1(v5 + 144, 0, 0x440u);
  v6 = GameData_212c608[0];
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 32) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)v5 = v6 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register_alt1(v5);
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = v5 + 200;
  *(_QWORD*)(v5 + 240) = 0;
  *(_DWORD*)(v5 + 248) = 1065353216;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 288) = 0;
  *(_QWORD*)(v5 + 296) = 0;
  *(_QWORD*)(v5 + 304) = 0;
  *(_QWORD*)(v5 + 312) = 0;
  *(_DWORD*)(v5 + 332) = 0;
  *(_BYTE*)(v5 + 338) = 0;
  *(_QWORD*)(v5 + 344) = 0;
  *(_QWORD*)(v5 + 352) = 0;
  *(_QWORD*)(v5 + 360) = 0;
  *(_QWORD*)(v5 + 368) = 0;
  *(_DWORD*)(v5 + 320) = 3;
  *(_QWORD*)(v5 + 376) = 0;
  *(_QWORD*)(v5 + 384) = 0;
  *(_QWORD*)(v5 + 392) = 0;
  *(_QWORD*)(v5 + 400) = 0;
  *(_QWORD*)(v5 + 408) = 0;
  *(_QWORD*)(v5 + 416) = 0;
  *(_QWORD*)(v5 + 424) = 0;
  *(_DWORD*)(v5 + 432) = 0x2000;
  *(_QWORD*)(v5 + 472) = 0;
  *(_QWORD*)(v5 + 480) = 0;
  *(_QWORD*)(v5 + 440) = 0;
  *(_QWORD*)(v5 + 448) = 0;
  *(_QWORD*)(v5 + 504) = 0;
  *(_QWORD*)(v5 + 512) = 0;
  *(_QWORD*)(v5 + 488) = 0;
  *(_QWORD*)(v5 + 496) = 0;
  *(_DWORD*)(v5 + 520) = 1065353216;
  *(_QWORD*)(v5 + 324) = 0;
  *(_QWORD*)(v5 + 528) = 0;
  *(_QWORD*)(v5 + 536) = 0;
  *(_QWORD*)(v5 + 544) = 0;
  *(_DWORD*)(v5 + 552) = 1065353216;
  *(_WORD*)(v5 + 560) = 0;
  *(_WORD*)(v5 + 584) = 0;
  *(_BYTE*)(v5 + 608) = 0;
  *(_QWORD*)(v5 + 656) = 0;
  *(_QWORD*)(v5 + 648) = 0;
  *(_QWORD*)(v5 + 632) = 0;
  *(_WORD*)(v5 + 336) = 1;
  *(_QWORD*)(v5 + 624) = 0;
  *(_QWORD*)(v5 + 616) = 0;
  *(_QWORD*)(v5 + 688) = 0;
  *(_QWORD*)(v5 + 680) = 0;
  *(_QWORD*)(v5 + 672) = 0;
  *(_QWORD*)(v5 + 664) = 0;
  *(_DWORD*)(v5 + 696) = 1065353216;
  *(_QWORD*)(v5 + 720) = 0;
  *(_QWORD*)(v5 + 712) = 0;
  *(_QWORD*)(v5 + 704) = 0;
  *(_QWORD*)(v5 + 456) = 0;
  *(_QWORD*)(v5 + 464) = v5 + 472;
  *(_DWORD*)(v5 + 728) = 1065353216;
  *(_WORD*)(v5 + 736) = 0;
  *(_WORD*)(v5 + 760) = 0;
  *(_BYTE*)(v5 + 784) = 0;
  *(_QWORD*)(v5 + 792) = 0;
  *(_BYTE*)(v5 + 800) = 0;
  *(_QWORD*)(v5 + 640) = v5 + 648;
  v7 = *v4;
  v8 = GameData_2130240[0] + 2;
  *(_BYTE*)(v5 + 816) = 0;
  *(_BYTE*)(v5 + 820) = 0;
  *(_WORD*)(v5 + 824) = 0;
  *(_QWORD*)(v5 + 808) = v8;
  *(_QWORD*)v5 = game_telop_TelopResult_vtable;
  v9 = fw_memory_HeapManager_Allocate_alt1(v7, 296, 16, 0);
  *(_DWORD*)(v9 + 48) = 0x2000;
  v10 = GameData_2131678;
  *(_WORD*)(v9 + 108) = 256;
  *(_QWORD*)(v9 + 8) = 0;
  *(_QWORD*)(v9 + 16) = 0;
  *(_DWORD*)(v9 + 32) = 0;
  *(_QWORD*)(v9 + 40) = 0;
  *(_DWORD*)(v9 + 104) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_WORD*)(v9 + 80) = 0;
  *(_DWORD*)(v9 + 112) = -1082130432;
  *(_WORD*)(v9 + 116) = 0;
  *(_WORD*)(v9 + 136) = 0;
  *(_BYTE*)(v9 + 160) = 0;
  *(_BYTE*)(v9 + 288) = 0;
  *(_QWORD*)(v9 + 272) = 0;
  *(_QWORD*)(v9 + 280) = 0;
  *(_QWORD*)(v9 + 256) = 0;
  *(_QWORD*)(v9 + 264) = 0;
  *(_QWORD*)(v9 + 240) = 0;
  *(_QWORD*)(v9 + 248) = 0;
  *(_QWORD*)(v9 + 224) = 0;
  *(_QWORD*)(v9 + 232) = 0;
  *(_QWORD*)(v9 + 208) = 0;
  *(_QWORD*)(v9 + 216) = 0;
  *(_QWORD*)(v9 + 192) = 0;
  *(_QWORD*)(v9 + 200) = 0;
  *(_QWORD*)(v9 + 176) = 0;
  *(_QWORD*)(v9 + 184) = 0;
  *(_QWORD*)(v9 + 168) = 0;
  *(_QWORD*)(v9 + 120) = 0;
  *(_DWORD*)(v9 + 127) = 0;
  *(_QWORD*)(v5 + 856) = v9;
  *(_WORD*)(v5 + 960) = 0;
  *(_QWORD*)(v5 + 1016) = 0;
  *(_QWORD*)(v5 + 992) = 0;
  *(_QWORD*)(v5 + 1000) = 0;
  *(_BYTE*)(v5 + 952) = 0;
  *(_QWORD*)(v5 + 944) = 0;
  *(_QWORD*)(v5 + 936) = 0;
  *(_QWORD*)(v5 + 928) = 0;
  *(_QWORD*)(v5 + 920) = 0;
  *(_QWORD*)(v5 + 912) = 0;
  *(_QWORD*)(v5 + 904) = 0;
  *(_QWORD*)(v5 + 896) = 0;
  *(_QWORD*)(v5 + 888) = 0;
  *(_QWORD*)(v5 + 880) = 0;
  *(_QWORD*)(v5 + 872) = 0;
  *(_QWORD*)(v5 + 864) = 0;
  *(_QWORD*)(v5 + 1024) = 1065353216;
  *(_WORD*)(v5 + 1032) = 0;
  *(_WORD*)(v5 + 1040) = 0;
  *(_WORD*)(v5 + 1064) = 0;
  *(_WORD*)(v5 + 1088) = 0;
  *(_QWORD*)v9 = v10 + 16;
  *(_DWORD*)(v9 + 292) = 2;
  *(_QWORD*)(v9 + 24) = 0;
  *(_QWORD*)(v5 + 848) = v9 + 24;
  *(_QWORD*)(v5 + 1007) = 0;
  v11 = GameData_2130f98[0] + 2;
  *(_QWORD*)(v5 + 1160) = 0;
  *(_BYTE*)(v5 + 1152) = 0;
  *(_QWORD*)(v5 + 1144) = 0;
  *(_QWORD*)(v5 + 1136) = 0;
  *(_QWORD*)(v5 + 1128) = 0;
  *(_QWORD*)(v5 + 1120) = 0;
  *(_QWORD*)(v5 + 1112) = 0;
  *(_QWORD*)(v5 + 1224) = 0;
  *(_QWORD*)(v5 + 1216) = 0;
  *(_QWORD*)(v5 + 1208) = 0;
  *(_QWORD*)(v5 + 1200) = 0;
  *(_QWORD*)(v5 + 1192) = 0;
  *(_QWORD*)(v5 + 1184) = 0;
  *(_QWORD*)(v5 + 1176) = 0;
  *(_QWORD*)(v5 + 1168) = 0;
  *(_QWORD*)(v5 + 984) = v11;
  *(_QWORD*)v5 = game_telop_TelopSkillLearn_vtable;
  ProcInst_657850_alt1(v5, (__int64)GameData_2130f68,
                       (__int64)"TelopSkillLearn", 1, v2);
  if ((*(_BYTE*)(v5 + 272) & 1) != 0) {
    *(_QWORD*)(v5 + 280) = 17;
    v12 = *(char**)(v5 + 288);
  }
  else {
    *(_BYTE*)(v5 + 272) = 34;
    v12 = (char*)(v5 + 273);
  }
  strcpy(v12, "Layout/Common.arc");
  if ((*(_BYTE*)(v5 + 296) & 1) != 0) {
    *(_QWORD*)(v5 + 304) = 16;
    v13 = *(char**)(v5 + 312);
  }
  else {
    *(_BYTE*)(v5 + 296) = 32;
    v13 = (char*)(v5 + 297);
  }
  strcpy(v13, "Common_TlpResult");
  GameRoutine_1374b10_alt1(v5, 2);
  Se_80e330_alt1(v5, "SE_SYS_Telop_Mini_In");
  GameRoutine_1378190_alt1(v5, "SE_SYS_Telop_Mini_Out");
  *(_BYTE*)(v5 + 338) = 1;
  Se_80e330_alt1(v5, "SE_SYS_Telop_SkillAcquire");
  v14 = a1[2];
  *(_QWORD*)(v5 + 1168) = a1[1];
  v15 = a1[3];
  v16 = v15 - v14;
  if (v15 == v14) {
    v17 = 0;
    v18 = 0;
  }
  else {
    if ((v16 & 0x8000000000000000LL) != 0) {
      GameRoutine_6881c0_alt2();
    }
    v17 = fw_memory_HeapManager_Allocate_alt1(*v4, v15 - v14, 16, 0);
    v18 = v17 + v16;
    memcpy_alt1(v17, v14, v16);
  }
  GameRoutine_1780160_alt1((__int64*)(v5 + 1176), v17, v18, (v18 - v17) >> 3);
  if (v17 != 0) {
    v19 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v4 + v19, v17);
  }
  TelopSkillLearn_1765940_alt2((_QWORD*)v5, a1[5]);
  GameRoutine_1765aa0_alt1((__int64*)v5, a1[1]);
}

__int64 game_telop_TelopSkillLearn_CreateBind_lambda1_Invoke(__int64 a1,
                                                             _QWORD* a2)
{
  return GameRoutine_1767f90(*a2, *(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 16));
}

#pragma GCC visibility pop
