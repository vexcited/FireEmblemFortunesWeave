#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameVariable_826e40(__int64, unsigned int, _QWORD*, int, int, int, int,
                            char);
_QWORD* GameVariable_827070(__int64, unsigned int, __int64*, __int64*, int,
                            char);
__int64 GameRoutine_7a8220(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _QWORD GameData_1f9cbe8[10];
extern _QWORD game_hub_kPermitFlags[10];
extern _UNKNOWN* GameData_1f9caf8;
extern __int64 GameData_21ed0a8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
_QWORD* game_anonymous_VariableRegister_RegisterSystem_closure_Invoke(
    __int64 a1, unsigned __int8* a2);
_QWORD* game_anonymous_VariableRegister_RegisterSystem_closure0_Invoke_830d20(
    __int64 a1, unsigned __int8* a2);
_QWORD* game_anonymous_VariableRegister_RegisterSystem_closure1_Invoke(
    __int64 a1, unsigned __int8* a2);
_QWORD* game_anonymous_VariableRegister_RegisterSystem_closure0_Invoke_831100(
    __int64 a1, _QWORD* a2);
_QWORD* game_anonymous_VariableRegister_RegisterHub_closure_Invoke(__int64 a1,
                                                                   __int64 a2);
_QWORD* game_anonymous_VariableRegister_RegisterHub_closure0_Invoke(__int64 a1,
                                                                    __int64 a2);
_QWORD* game_anonymous_VariableRegister_RegisterHub_closure1_Invoke(__int64 a1,
                                                                    __int64 a2);
__int64 game_anonymous_VariableRegister_RegisterRead_closure_Invoke(__int64 a1,
                                                                    _QWORD* a2);
__int64 VariableRegister_831e20(_QWORD* a1, _QWORD* a2, _QWORD* a3);
__int64 VariableRegister_832080(_QWORD* a1, _QWORD* a2, _QWORD* a3, _QWORD* a4);
__int64 VariableRegister_832230(_QWORD* a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                                _QWORD* a5);
unsigned __int8* VariableRegister_8327a0(unsigned __int8* a1,
                                         unsigned __int8* a2);
__int64* VariableRegister_832b40(__int64* a1, __int64 a2);
bool VariableRegister_832ec0(_QWORD* a1, _QWORD* a2);
__int64 VariableRegister_833460(__int64 result, __int64 a2, __int64 a3,
                                _QWORD* a4);
_QWORD* VariableRegister_833720(_QWORD* a1, __int64 a2, __int64 a3);
__int64 VariableRegister_833860(__int64 result, __int64 a2, __int64 a3,
                                __int64 a4);
_QWORD*
game_anonymous_VariableRegister_RegisterAsset_closure_Invoke(__int64 a1,
                                                             _QWORD* a2);
__int64 GameRoutine_717fc0(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern __int64 game_GameModeData_instance_;
_QWORD*
game_anonymous_VariableRegister_RegisterLottery_closure_Invoke(__int64 a1,
                                                               _QWORD* a2);
_QWORD*
game_anonymous_VariableRegister_RegisterCausation_closure_Invoke(__int64 a1,
                                                                 _QWORD* a2);
__int64
game_anonymous_VariableRegister_RegisterAchieve_closure0_Invoke(__int64 result);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 std___1___next_prime(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210();
unsigned __int64 game_anonymous_VariableRegister_RegisterKeyMap_closure_Invoke(
    unsigned __int64 result, unsigned __int8* a2);

_QWORD* game_anonymous_VariableRegister_RegisterSystem_closure_Invoke(
    __int64 a1, unsigned __int8* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 8);
  v5 = (__int64)*(&GameData_1f9caf8 + *a2);
  v4 = game_HashString(v5, a2);
  return GameVariable_827070(v2, 0, &v4, &GameData_21ed0a8, 0, 1);
}

_QWORD* game_anonymous_VariableRegister_RegisterSystem_closure0_Invoke_830d20(
    __int64 a1, unsigned __int8* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 8);
  v5 = game_hub_kPermitFlags[*a2];
  v4 = game_HashString(v5, a2);
  return GameVariable_827070(v2, 0xAu, &v4, &GameData_21ed0a8, 0, 1);
}

_QWORD* game_anonymous_VariableRegister_RegisterSystem_closure1_Invoke(
    __int64 a1, unsigned __int8* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 8);
  v5 = GameData_1f9cbe8[*a2];
  v4 = game_HashString(v5, a2);
  return GameVariable_827070(v2, 4u, &v4, &GameData_21ed0a8, 0, 1);
}

_QWORD* game_anonymous_VariableRegister_RegisterSystem_closure0_Invoke_831100(
    __int64 a1, _QWORD* a2)
{
  return GameVariable_826e40(*(_QWORD*)(a1 + 8), 4u, a2, 0, 0, 0, 99999, 0);
}

_QWORD* game_anonymous_VariableRegister_RegisterHub_closure_Invoke(__int64 a1,
                                                                   __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5[2];

  v2 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)a2 & 1) != 0) {
    v3 = *(_QWORD*)(a2 + 16);
  }
  else {
    v3 = a2 + 1;
  }
  v5[1] = v3;
  v5[0] = game_HashString(v3, a2);
  return GameVariable_827070(v2, 7u, v5, &GameData_21ed0a8, 0, 1);
}

_QWORD* game_anonymous_VariableRegister_RegisterHub_closure0_Invoke(__int64 a1,
                                                                    __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD v5[2];

  v2 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)a2 & 1) != 0) {
    v3 = *(_QWORD*)(a2 + 16);
  }
  else {
    v3 = a2 + 1;
  }
  v5[1] = v3;
  v5[0] = game_HashString(v3, a2);
  return GameVariable_826e40(v2, 4u, v5, 0, 0, 0, 99999, 0);
}

_QWORD* game_anonymous_VariableRegister_RegisterHub_closure1_Invoke(__int64 a1,
                                                                    __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD v5[2];

  v2 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)a2 & 1) != 0) {
    v3 = *(_QWORD*)(a2 + 16);
  }
  else {
    v3 = a2 + 1;
  }
  v5[1] = v3;
  v5[0] = game_HashString(v3, a2);
  return GameVariable_826e40(v2, 4u, v5, 0, 0, 0, 99999, 0);
}

__int64 game_anonymous_VariableRegister_RegisterRead_closure_Invoke(__int64 a1,
                                                                    _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  _QWORD v10[2];
  char* v11;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  v4 = strlen(*a2);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v4);
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16,
                                               0);
    v10[1] = v5;
    v11 = v6;
    v10[0] = v7 | 1;
  }
  else {
    LOBYTE(v10[0]) = 2 * v4;
    v6 = (char*)v10 + 1;
    if (v4 == 0) {
      goto LABEL_10;
    }
  }
  memcpy(v6, v2, v5);
LABEL_10:
  v6[v5] = 0;
  result = GameRoutine_7a8220(v3, v10);
  if ((v10[0] & 1) != 0 && v11 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v11);
  }
  return result;
}

__int64 VariableRegister_831e20(_QWORD* a1, _QWORD* a2, _QWORD* a3)
{
  unsigned __int64 v3;
  char* v5;
  bool v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char* v12;
  bool v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  unsigned __int64 v17;
  int v18;
  unsigned __int64 v19;
  bool v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  char* v23;
  unsigned __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  bool v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  char* v35;
  unsigned __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  bool v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  char* v48;
  char* v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  char* v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  bool v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  char* v65;
  unsigned __int64 v66;
  int v67;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;

  v3 = *(unsigned __int8*)a2;
  v5 = (char*)a2 + 1;
  v8 = (v3 & 1) == 0;
  v9 = v3 >> 1;
  if (v8) {
    v10 = v9;
  }
  else {
    v10 = a2[1];
  }
  v11 = *(unsigned __int8*)a1;
  if (v8) {
    v12 = (char*)a2 + 1;
  }
  else {
    v12 = (char*)a2[2];
  }
  v13 = (v11 & 1) == 0;
  v14 = v11 >> 1;
  if (v13) {
    v15 = v14;
  }
  else {
    v15 = a1[1];
  }
  if (v13) {
    v16 = (char*)a1 + 1;
  }
  else {
    v16 = (char*)a1[2];
  }
  if (v15 >= v10) {
    v17 = v10;
  }
  else {
    v17 = v15;
  }
  v18 = memcmp(v12, v16, v17);
  if (v18 == 0) {
    if (v10 < v15) {
      goto LABEL_18;
    }
  LABEL_31:
    v31 = *(unsigned __int8*)a3;
    v32 = (v31 & 1) == 0;
    v33 = v31 >> 1;
    if (v32) {
      v34 = v33;
    }
    else {
      v34 = a3[1];
    }
    if (v32) {
      v35 = (char*)a3 + 1;
    }
    else {
      v35 = (char*)a3[2];
    }
    if (v10 >= v34) {
      v36 = v34;
    }
    else {
      v36 = v10;
    }
    v37 = memcmp(v35, v12, v36);
    if (v37 != 0) {
      if (v37 < 0) {
        goto LABEL_42;
      }
    }
    else if (v34 < v10) {
    LABEL_42:
      v38 = *a2;
      v39 = a2[1];
      v40 = a2[2];
      v42 = a3[1];
      v41 = a3[2];
      *a2 = *a3;
      a2[1] = v42;
      a2[2] = v41;
      a3[1] = v39;
      a3[2] = v40;
      *a3 = v38;
      v43 = *(unsigned __int8*)a2;
      v44 = (v43 & 1) == 0;
      v45 = v43 >> 1;
      if (v44) {
        v46 = v45;
      }
      else {
        v46 = a2[1];
      }
      v47 = *(unsigned __int8*)a1;
      if (v44) {
        v48 = v5;
      }
      else {
        v48 = (char*)a2[2];
      }
      if ((v47 & 1) != 0) {
        v49 = (char*)a1[2];
      }
      else {
        v49 = (char*)a1 + 1;
      }
      if ((v47 & 1) != 0) {
        v50 = a1[1];
      }
      else {
        v50 = v47 >> 1;
      }
      if (v50 >= v46) {
        v51 = v46;
      }
      else {
        v51 = v50;
      }
      v52 = memcmp(v48, v49, v51);
      if (v52 != 0) {
        if ((v52 & 0x80000000) == 0) {
          return 1;
        }
      }
      else if (v46 >= v50) {
        return 1;
      }
      v70 = a2[1];
      v69 = a2[2];
      v71 = *a1;
      v72 = a1[1];
      *a1 = *a2;
      a1[1] = v70;
      v73 = a1[2];
      a1[2] = v69;
      *a2 = v71;
      a2[1] = v72;
      a2[2] = v73;
      return 1;
    }
    return 0;
  }
  if ((v18 & 0x80000000) == 0) {
    goto LABEL_31;
  }
LABEL_18:
  v19 = *(unsigned __int8*)a3;
  v20 = (v19 & 1) == 0;
  v21 = v19 >> 1;
  if (v20) {
    v22 = v21;
  }
  else {
    v22 = a3[1];
  }
  if (v20) {
    v23 = (char*)a3 + 1;
  }
  else {
    v23 = (char*)a3[2];
  }
  if (v10 >= v22) {
    v24 = v22;
  }
  else {
    v24 = v10;
  }
  v25 = memcmp(v23, v12, v24);
  if (v25 != 0) {
    if (v25 < 0) {
    LABEL_29:
      v27 = a3[1];
      v26 = a3[2];
      v28 = *a1;
      v29 = a1[1];
      *a1 = *a3;
      a1[1] = v27;
      v30 = a1[2];
      a1[2] = v26;
    LABEL_85:
      a3[1] = v29;
      a3[2] = v30;
      *a3 = v28;
      return 1;
    }
  }
  else if (v22 < v10) {
    goto LABEL_29;
  }
  v53 = *a1;
  v54 = a1[1];
  v55 = a1[2];
  v57 = a2[1];
  v56 = a2[2];
  *a1 = *a2;
  a1[1] = v57;
  a1[2] = v56;
  a2[1] = v54;
  a2[2] = v55;
  *a2 = v53;
  v58 = *(unsigned __int8*)a3;
  if ((v58 & 1) != 0) {
    v59 = (char*)a3[2];
  }
  else {
    v59 = (char*)a3 + 1;
  }
  if ((v58 & 1) != 0) {
    v60 = a3[1];
  }
  else {
    v60 = v58 >> 1;
  }
  v61 = *(unsigned __int8*)a2;
  v62 = (v61 & 1) == 0;
  v63 = v61 >> 1;
  if (v62) {
    v64 = v63;
  }
  else {
    v64 = a2[1];
  }
  if (v62) {
    v65 = v5;
  }
  else {
    v65 = (char*)a2[2];
  }
  if (v64 >= v60) {
    v66 = v60;
  }
  else {
    v66 = v64;
  }
  v67 = memcmp(v59, v65, v66);
  if (v67 != 0) {
    if ((v67 & 0x80000000) == 0) {
      return 1;
    }
  }
  else if (v60 >= v64) {
    return 1;
  }
  v75 = a3[1];
  v74 = a3[2];
  v28 = *a2;
  v29 = a2[1];
  *a2 = *a3;
  a2[1] = v75;
  v30 = a2[2];
  a2[2] = v74;
  goto LABEL_85;
}

__int64 VariableRegister_832080(_QWORD* a1, _QWORD* a2, _QWORD* a3, _QWORD* a4)
{
  unsigned __int64 v8;
  bool v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  char* v13;
  bool v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  char* v17;
  unsigned __int64 v18;
  __int64 result;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  char* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  bool v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  char* v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  char* v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  bool v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  char* v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;

  VariableRegister_831e20(a1, a2, a3);
  v8 = *(unsigned __int8*)a4;
  v9 = (v8 & 1) == 0;
  v10 = v8 >> 1;
  if (v9) {
    v11 = v10;
  }
  else {
    v11 = a4[1];
  }
  v12 = *(unsigned __int8*)a3;
  if (v9) {
    v13 = (char*)a4 + 1;
  }
  else {
    v13 = (char*)a4[2];
  }
  v14 = (v12 & 1) == 0;
  v15 = v12 >> 1;
  if (v14) {
    v16 = v15;
  }
  else {
    v16 = a3[1];
  }
  if (v14) {
    v17 = (char*)a3 + 1;
  }
  else {
    v17 = (char*)a3[2];
  }
  if (v16 >= v11) {
    v18 = v11;
  }
  else {
    v18 = v16;
  }
  result = memcmp(v13, v17, v18);
  if ((_DWORD)result != 0) {
    if ((result & 0x80000000) == 0) {
      return result;
    }
  }
  else if (v11 >= v16) {
    return result;
  }
  v20 = *a3;
  v21 = a3[1];
  v22 = a3[2];
  v24 = a4[1];
  v23 = a4[2];
  *a3 = *a4;
  a3[1] = v24;
  a3[2] = v23;
  a4[1] = v21;
  a4[2] = v22;
  *a4 = v20;
  v25 = *(unsigned __int8*)a3;
  if ((v25 & 1) != 0) {
    v26 = (char*)a3[2];
  }
  else {
    v26 = (char*)a3 + 1;
  }
  if ((v25 & 1) != 0) {
    v27 = a3[1];
  }
  else {
    v27 = v25 >> 1;
  }
  v28 = *(unsigned __int8*)a2;
  v29 = (v28 & 1) == 0;
  v30 = v28 >> 1;
  if (v29) {
    v31 = v30;
  }
  else {
    v31 = a2[1];
  }
  if (v29) {
    v32 = (char*)a2 + 1;
  }
  else {
    v32 = (char*)a2[2];
  }
  if (v31 >= v27) {
    v33 = v27;
  }
  else {
    v33 = v31;
  }
  result = memcmp(v26, v32, v33);
  if ((_DWORD)result != 0) {
    if ((result & 0x80000000) == 0) {
      return result;
    }
  }
  else if (v27 >= v31) {
    return result;
  }
  v34 = *a2;
  v35 = a2[1];
  v36 = a2[2];
  v38 = a3[1];
  v37 = a3[2];
  *a2 = *a3;
  a2[1] = v38;
  a2[2] = v37;
  a3[1] = v35;
  a3[2] = v36;
  *a3 = v34;
  v39 = *(unsigned __int8*)a2;
  if ((v39 & 1) != 0) {
    v40 = (char*)a2[2];
  }
  else {
    v40 = (char*)a2 + 1;
  }
  if ((v39 & 1) != 0) {
    v41 = a2[1];
  }
  else {
    v41 = v39 >> 1;
  }
  v42 = *(unsigned __int8*)a1;
  v43 = (v42 & 1) == 0;
  v44 = v42 >> 1;
  if (v43) {
    v45 = v44;
  }
  else {
    v45 = a1[1];
  }
  if (v43) {
    v46 = (char*)a1 + 1;
  }
  else {
    v46 = (char*)a1[2];
  }
  if (v45 >= v41) {
    v47 = v41;
  }
  else {
    v47 = v45;
  }
  result = memcmp(v40, v46, v47);
  if ((_DWORD)result != 0) {
    if ((result & 0x80000000) == 0) {
      return result;
    }
  }
  else if (v41 >= v45) {
    return result;
  }
  v49 = a2[1];
  v48 = a2[2];
  v50 = *a1;
  v51 = a1[1];
  *a1 = *a2;
  a1[1] = v49;
  v52 = a1[2];
  a1[2] = v48;
  *a2 = v50;
  a2[1] = v51;
  a2[2] = v52;
  return result;
}

__int64 VariableRegister_832230(_QWORD* a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                                _QWORD* a5)
{
  unsigned __int64 v10;
  bool v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  char* v15;
  bool v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  unsigned __int64 v20;
  __int64 result;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  char* v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  bool v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  char* v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  char* v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  bool v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  char* v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  char* v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  bool v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  char* v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;

  VariableRegister_832080(a1, a2, a3, a4);
  v10 = *(unsigned __int8*)a5;
  v11 = (v10 & 1) == 0;
  v12 = v10 >> 1;
  if (v11) {
    v13 = v12;
  }
  else {
    v13 = a5[1];
  }
  v14 = *(unsigned __int8*)a4;
  if (v11) {
    v15 = (char*)a5 + 1;
  }
  else {
    v15 = (char*)a5[2];
  }
  v16 = (v14 & 1) == 0;
  v17 = v14 >> 1;
  if (v16) {
    v18 = v17;
  }
  else {
    v18 = a4[1];
  }
  if (v16) {
    v19 = (char*)a4 + 1;
  }
  else {
    v19 = (char*)a4[2];
  }
  if (v18 >= v13) {
    v20 = v13;
  }
  else {
    v20 = v18;
  }
  result = memcmp(v15, v19, v20);
  if ((_DWORD)result != 0) {
    if ((result & 0x80000000) == 0) {
      return result;
    }
  }
  else if (v13 >= v18) {
    return result;
  }
  v22 = *a4;
  v23 = a4[1];
  v24 = a4[2];
  v26 = a5[1];
  v25 = a5[2];
  *a4 = *a5;
  a4[1] = v26;
  a4[2] = v25;
  a5[1] = v23;
  a5[2] = v24;
  *a5 = v22;
  v27 = *(unsigned __int8*)a4;
  if ((v27 & 1) != 0) {
    v28 = (char*)a4[2];
  }
  else {
    v28 = (char*)a4 + 1;
  }
  if ((v27 & 1) != 0) {
    v29 = a4[1];
  }
  else {
    v29 = v27 >> 1;
  }
  v30 = *(unsigned __int8*)a3;
  v31 = (v30 & 1) == 0;
  v32 = v30 >> 1;
  if (v31) {
    v33 = v32;
  }
  else {
    v33 = a3[1];
  }
  if (v31) {
    v34 = (char*)a3 + 1;
  }
  else {
    v34 = (char*)a3[2];
  }
  if (v33 >= v29) {
    v35 = v29;
  }
  else {
    v35 = v33;
  }
  result = memcmp(v28, v34, v35);
  if ((_DWORD)result != 0) {
    if ((result & 0x80000000) == 0) {
      return result;
    }
  }
  else if (v29 >= v33) {
    return result;
  }
  v36 = *a3;
  v37 = a3[1];
  v38 = a3[2];
  v40 = a4[1];
  v39 = a4[2];
  *a3 = *a4;
  a3[1] = v40;
  a3[2] = v39;
  a4[1] = v37;
  a4[2] = v38;
  *a4 = v36;
  v41 = *(unsigned __int8*)a3;
  if ((v41 & 1) != 0) {
    v42 = (char*)a3[2];
  }
  else {
    v42 = (char*)a3 + 1;
  }
  if ((v41 & 1) != 0) {
    v43 = a3[1];
  }
  else {
    v43 = v41 >> 1;
  }
  v44 = *(unsigned __int8*)a2;
  v45 = (v44 & 1) == 0;
  v46 = v44 >> 1;
  if (v45) {
    v47 = v46;
  }
  else {
    v47 = a2[1];
  }
  if (v45) {
    v48 = (char*)a2 + 1;
  }
  else {
    v48 = (char*)a2[2];
  }
  if (v47 >= v43) {
    v49 = v43;
  }
  else {
    v49 = v47;
  }
  result = memcmp(v42, v48, v49);
  if ((_DWORD)result != 0) {
    if ((result & 0x80000000) == 0) {
      return result;
    }
  }
  else if (v43 >= v47) {
    return result;
  }
  v50 = *a2;
  v51 = a2[1];
  v52 = a2[2];
  v54 = a3[1];
  v53 = a3[2];
  *a2 = *a3;
  a2[1] = v54;
  a2[2] = v53;
  a3[1] = v51;
  a3[2] = v52;
  *a3 = v50;
  v55 = *(unsigned __int8*)a2;
  if ((v55 & 1) != 0) {
    v56 = (char*)a2[2];
  }
  else {
    v56 = (char*)a2 + 1;
  }
  if ((v55 & 1) != 0) {
    v57 = a2[1];
  }
  else {
    v57 = v55 >> 1;
  }
  v58 = *(unsigned __int8*)a1;
  v59 = (v58 & 1) == 0;
  v60 = v58 >> 1;
  if (v59) {
    v61 = v60;
  }
  else {
    v61 = a1[1];
  }
  if (v59) {
    v62 = (char*)a1 + 1;
  }
  else {
    v62 = (char*)a1[2];
  }
  if (v61 >= v57) {
    v63 = v57;
  }
  else {
    v63 = v61;
  }
  result = memcmp(v56, v62, v63);
  if ((_DWORD)result != 0) {
    if ((result & 0x80000000) == 0) {
      return result;
    }
  }
  else if (v57 >= v61) {
    return result;
  }
  v65 = a2[1];
  v64 = a2[2];
  v66 = *a1;
  v67 = a1[1];
  *a1 = *a2;
  a1[1] = v65;
  v68 = a1[2];
  a1[2] = v64;
  *a2 = v66;
  a2[1] = v67;
  a2[2] = v68;
  return result;
}

unsigned __int8* VariableRegister_8327a0(unsigned __int8* a1,
                                         unsigned __int8* a2)
{
  unsigned __int64 v2;
  char* v3;
  unsigned __int8* v4;
  bool v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  bool v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int8* v13;
  unsigned __int64 v14;
  int v15;
  unsigned __int8* v16;
  int v17;
  unsigned __int8* v18;
  unsigned __int64 v19;
  bool v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  char* v23;
  unsigned __int64 v24;
  unsigned __int8* v25;
  int v26;
  unsigned __int64 v27;
  bool v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  char* v31;
  unsigned __int64 v32;
  unsigned __int8* v33;
  unsigned __int64 v34;
  bool v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  char* v38;
  unsigned __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  char* v47;
  unsigned __int64 v48;
  unsigned __int8* v49;
  int v50;
  unsigned __int64 v51;
  bool v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  char* v55;
  unsigned __int64 v56;
  unsigned __int8* v57;
  int v58;
  unsigned __int64 v59;
  bool v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  char* v63;
  unsigned __int64 v64;
  unsigned __int8* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  char* v71;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  char* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;

  v2 = *((_QWORD*)a1 + 1);
  v3 = *((char**)a1 + 2);
  v4 = a2;
  v6 = (*(_QWORD*)a1 & 1) == 0;
  v75 = *(_QWORD*)a1;
  v76 = v2;
  *(_QWORD*)a1 = 0;
  *((_QWORD*)a1 + 1) = 0;
  *((_QWORD*)a1 + 2) = 0;
  v77 = v3;
  if (v6) {
    v7 = (unsigned __int8)v75 >> 1;
  }
  else {
    v7 = v2;
  }
  v8 = *(a2 - 24);
  if (v6) {
    v9 = (char*)&v75 + 1;
  }
  else {
    v9 = v3;
  }
  v10 = (v8 & 1) == 0;
  v11 = v8 >> 1;
  if (v10) {
    v12 = v11;
  }
  else {
    v12 = *((_QWORD*)a2 - 2);
  }
  if (v10) {
    v13 = a2 - 23;
  }
  else {
    v13 = *((unsigned __int8**)a2 - 1);
  }
  if (v12 >= v7) {
    v14 = v7;
  }
  else {
    v14 = v12;
  }
  v15 = memcmp(v9, v13, v14);
  if (v15 != 0) {
    if (v15 < 0) {
    LABEL_18:
      v16 = a1 + 24;
      while (1) {
        v18 = v16;
        v19 = *v16;
        v20 = (v19 & 1) == 0;
        v21 = v19 >> 1;
        if (v20) {
          v22 = v21;
        }
        else {
          v22 = *((_QWORD*)v18 + 1);
        }
        if (v20) {
          v23 = (char*)(v18 + 1);
        }
        else {
          v23 = *((char**)v18 + 2);
        }
        if (v22 >= v7) {
          v24 = v7;
        }
        else {
          v24 = v22;
        }
        v17 = memcmp(v9, v23, v24);
        if (v17 == 0) {
          if (v7 == v22) {
            v17 = 0;
          }
          else {
            if (v7 < v22) {
              goto LABEL_52;
            }
            v17 = 1;
          }
        }
        v16 = v18 + 24;
        if (v17 < 0) {
          goto LABEL_52;
        }
      }
    }
  }
  else if (v7 < v12) {
    goto LABEL_18;
  }
  v25 = a1 + 24;
  do {
    v18 = v25;
    if (v25 >= v4) {
      break;
    }
    v27 = *v25;
    v28 = (v27 & 1) == 0;
    v29 = v27 >> 1;
    if (v28) {
      v30 = v29;
    }
    else {
      v30 = *((_QWORD*)v18 + 1);
    }
    if (v28) {
      v31 = (char*)(v18 + 1);
    }
    else {
      v31 = *((char**)v18 + 2);
    }
    if (v30 >= v7) {
      v32 = v7;
    }
    else {
      v32 = v30;
    }
    v26 = memcmp(v9, v31, v32);
    if (v26 == 0) {
      if (v7 == v30) {
        v26 = 0;
      }
      else {
        if (v7 < v30) {
          break;
        }
        v26 = 1;
      }
    }
    v25 = v18 + 24;
  } while ((v26 & 0x80000000) == 0);
LABEL_52:
  if (v18 < v4) {
    v33 = v4 - 24;
    do {
      v4 = v33;
      v34 = *v33;
      v35 = (v34 & 1) == 0;
      v36 = v34 >> 1;
      if (v35) {
        v37 = v36;
      }
      else {
        v37 = *((_QWORD*)v4 + 1);
      }
      if (v35) {
        v38 = (char*)(v4 + 1);
      }
      else {
        v38 = *((char**)v4 + 2);
      }
      if (v37 >= v7) {
        v39 = v7;
      }
      else {
        v39 = v37;
      }
      v40 = memcmp(v9, v38, v39);
      if (v40 == 0) {
        if (v7 >= v37) {
          break;
        }
        v40 = -1;
      }
      v33 = v4 - 24;
    } while (v40 < 0);
  }
  if (v18 >= v4) {
    v65 = v18 - 24;
    if (a1 != v18 - 24) {
      goto LABEL_115;
    }
    goto LABEL_116;
  }
  while (2) {
    v41 = *(_QWORD*)v18;
    v42 = *((_QWORD*)v18 + 2);
    v79 = *((_QWORD*)v18 + 1);
    v80 = v42;
    v78 = v41;
    v43 = *(_QWORD*)v4;
    v44 = *((_QWORD*)v4 + 2);
    *((_QWORD*)v18 + 1) = *((_QWORD*)v4 + 1);
    *((_QWORD*)v18 + 2) = v44;
    *(_QWORD*)v18 = v43;
    v45 = v78;
    v46 = v80;
    *((_QWORD*)v4 + 1) = v79;
    *((_QWORD*)v4 + 2) = v46;
    *(_QWORD*)v4 = v45;
    if ((v75 & 1) != 0) {
      v47 = v77;
    }
    else {
      v47 = (char*)&v75 + 1;
    }
    if ((v75 & 1) != 0) {
      v48 = v76;
    }
    else {
      v48 = (unsigned __int64)(unsigned __int8)v75 >> 1;
    }
    v49 = v18 + 24;
    while (1) {
      v18 = v49;
      v51 = *v49;
      v52 = (v51 & 1) == 0;
      v53 = v51 >> 1;
      if (v52) {
        v54 = v53;
      }
      else {
        v54 = *((_QWORD*)v18 + 1);
      }
      if (v52) {
        v55 = (char*)(v18 + 1);
      }
      else {
        v55 = *((char**)v18 + 2);
      }
      if (v54 >= v48) {
        v56 = v48;
      }
      else {
        v56 = v54;
      }
      v50 = memcmp(v47, v55, v56);
      if (v50 == 0) {
        if (v48 != v54) {
          break;
        }
        v50 = 0;
      }
    LABEL_78:
      v49 = v18 + 24;
      if (v50 < 0) {
        goto LABEL_92;
      }
    }
    if (v48 >= v54) {
      v50 = 1;
      goto LABEL_78;
    }
  LABEL_92:
    v57 = v4 - 24;
    do {
      v4 = v57;
      v59 = *v57;
      v60 = (v59 & 1) == 0;
      v61 = v59 >> 1;
      if (v60) {
        v62 = v61;
      }
      else {
        v62 = *((_QWORD*)v4 + 1);
      }
      if (v60) {
        v63 = (char*)(v4 + 1);
      }
      else {
        v63 = *((char**)v4 + 2);
      }
      if (v62 >= v48) {
        v64 = v48;
      }
      else {
        v64 = v62;
      }
      v58 = memcmp(v47, v63, v64);
      if (v58 == 0) {
        if (v48 >= v62) {
          break;
        }
        v58 = -1;
      }
      v57 = v4 - 24;
    } while (v58 < 0);
    if (v18 < v4) {
      continue;
    }
    break;
  }
  v65 = v18 - 24;
  if (v18 - 24 == a1) {
    if ((*a1 & 1) != 0) {
      v73 = *((_QWORD*)v18 - 1);
      if (v73 != 0) {
        v74 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v74 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v74, v73);
      }
    }
  }
  else {
    if ((*a1 & 1) != 0) {
      v66 = *((_QWORD*)a1 + 2);
      if (v66 != 0) {
        v67 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v67 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v67, v66);
      }
    }
  LABEL_115:
    v68 = *(_QWORD*)v65;
    v69 = *((_QWORD*)v65 + 2);
    *((_QWORD*)a1 + 1) = *((_QWORD*)v65 + 1);
    *((_QWORD*)a1 + 2) = v69;
    *(_QWORD*)a1 = v68;
    *v65 = 0;
    *(v18 - 23) = 0;
  }
LABEL_116:
  v70 = v75;
  v71 = v77;
  *((_QWORD*)v65 + 1) = v76;
  *((_QWORD*)v65 + 2) = v71;
  *(_QWORD*)v65 = v70;
  return v18;
}

__int64* VariableRegister_832b40(__int64* a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  char* v4;
  __int64 v7;
  bool v8;
  unsigned __int64 v9;
  char* v10;
  unsigned __int64 v11;
  int v12;
  __int64 v13;
  char* v14;
  unsigned __int64 v15;
  char* v16;
  unsigned __int64 v17;
  char* v18;
  char* v19;
  bool v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  char* v23;
  unsigned __int64 v24;
  __int64* v25;
  unsigned __int8* v26;
  unsigned __int64 v27;
  int v28;
  unsigned __int8* v29;
  unsigned __int64 v30;
  bool v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int8* v34;
  unsigned __int64 v35;
  int v36;
  unsigned __int8* v37;
  unsigned __int64 v38;
  bool v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int8* v42;
  unsigned __int64 v43;
  unsigned __int8* v44;
  unsigned __int8* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char* v52;
  unsigned __int64 v53;
  unsigned __int8* v54;
  int v55;
  unsigned __int64 v56;
  bool v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  char* v60;
  unsigned __int64 v61;
  unsigned __int8* v62;
  int v63;
  unsigned __int64 v64;
  bool v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  char* v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  char* v75;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  char* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;

  v2 = *a1;
  v3 = a1[1];
  v4 = (char*)a1[2];
  v7 = 0;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v79 = v2;
  v80 = v3;
  v8 = (v2 & 1) == 0;
  v9 = (unsigned __int8)v2 >> 1;
  v81 = v4;
  if (v8) {
    v10 = (char*)&v79 + 1;
  }
  else {
    v10 = v4;
  }
  if (v8) {
    v11 = v9;
  }
  else {
    v11 = v3;
  }
  do {
    v13 = v7;
    v14 = (char*)a1 + v7;
    v15 = (unsigned __int8)v14[24];
    v16 = v14 + 25;
    v19 = v14 + 32;
    v17 = *((_QWORD*)v14 + 4);
    v18 = *((char**)v19 + 1);
    v20 = (v15 & 1) == 0;
    v21 = v15 >> 1;
    if (v20) {
      v22 = v21;
    }
    else {
      v22 = v17;
    }
    if (v20) {
      v23 = v16;
    }
    else {
      v23 = v18;
    }
    if (v11 >= v22) {
      v24 = v22;
    }
    else {
      v24 = v11;
    }
    v12 = memcmp(v23, v10, v24);
    if (v12 == 0) {
      if (v22 >= v11) {
        break;
      }
      v12 = -1;
    }
    v7 = v13 + 24;
  } while (v12 < 0);
  v25 = (__int64*)((char*)a1 + v13);
  v26 = (unsigned __int8*)(a2 - 24);
  v27 = (unsigned __int64)a1 + v13 + 24;
  if (v13 != 0) {
    while (1) {
      v29 = v26;
      v30 = *v26;
      v31 = (v30 & 1) == 0;
      v32 = v30 >> 1;
      if (v31) {
        v33 = v32;
      }
      else {
        v33 = *((_QWORD*)v29 + 1);
      }
      if (v31) {
        v34 = v29 + 1;
      }
      else {
        v34 = *((unsigned __int8**)v29 + 2);
      }
      if (v11 >= v33) {
        v35 = v33;
      }
      else {
        v35 = v11;
      }
      v28 = memcmp(v34, v10, v35);
      if (v28 == 0) {
        if (v33 == v11) {
          v28 = 0;
        }
        else {
          if (v33 < v11) {
            goto LABEL_54;
          }
          v28 = 1;
        }
      }
      v26 = v29 - 24;
      if (v28 < 0) {
        goto LABEL_54;
      }
    }
  }
  while (1) {
    v29 = v26;
    v37 = v26 + 24;
    if (v27 >= (unsigned __int64)v37) {
      break;
    }
    v38 = *v29;
    v39 = (v38 & 1) == 0;
    v40 = v38 >> 1;
    if (v39) {
      v41 = v40;
    }
    else {
      v41 = *((_QWORD*)v29 + 1);
    }
    if (v39) {
      v42 = v29 + 1;
    }
    else {
      v42 = *((unsigned __int8**)v29 + 2);
    }
    if (v11 >= v41) {
      v43 = v41;
    }
    else {
      v43 = v11;
    }
    v36 = memcmp(v42, v10, v43);
    if (v36 == 0) {
      if (v41 == v11) {
        v36 = 0;
      }
      else {
        if (v41 < v11) {
          goto LABEL_54;
        }
        v36 = 1;
      }
    }
    v26 = v29 - 24;
    if (v36 < 0) {
      goto LABEL_54;
    }
  }
  v29 = v37;
LABEL_54:
  if (v27 >= (unsigned __int64)v29) {
    if (v13 != 0) {
      goto LABEL_101;
    }
    goto LABEL_102;
  }
  v44 = (unsigned __int8*)a1 + v13 + 24;
  v45 = v29;
  while (2) {
    v46 = *(_QWORD*)v44;
    v47 = *((_QWORD*)v44 + 2);
    v83 = *((_QWORD*)v44 + 1);
    v84 = v47;
    v82 = v46;
    v48 = *(_QWORD*)v45;
    v49 = *((_QWORD*)v45 + 2);
    *((_QWORD*)v44 + 1) = *((_QWORD*)v45 + 1);
    *((_QWORD*)v44 + 2) = v49;
    *(_QWORD*)v44 = v48;
    v50 = v82;
    v51 = v84;
    *((_QWORD*)v45 + 1) = v83;
    *((_QWORD*)v45 + 2) = v51;
    *(_QWORD*)v45 = v50;
    if ((v79 & 1) != 0) {
      v52 = v81;
    }
    else {
      v52 = (char*)&v79 + 1;
    }
    if ((v79 & 1) != 0) {
      v53 = v80;
    }
    else {
      v53 = (unsigned __int64)(unsigned __int8)v79 >> 1;
    }
    v54 = v44 + 24;
    while (2) {
      v44 = v54;
      v56 = *v54;
      v57 = (v56 & 1) == 0;
      v58 = v56 >> 1;
      if (v57) {
        v59 = v58;
      }
      else {
        v59 = *((_QWORD*)v44 + 1);
      }
      if (v57) {
        v60 = (char*)(v44 + 1);
      }
      else {
        v60 = *((char**)v44 + 2);
      }
      if (v53 >= v59) {
        v61 = v59;
      }
      else {
        v61 = v53;
      }
      v55 = memcmp(v60, v52, v61);
      if (v55 != 0) {
      LABEL_65:
        v54 = v44 + 24;
        if ((v55 & 0x80000000) == 0) {
          goto LABEL_77;
        }
        continue;
      }
      break;
    }
    if (v59 < v53) {
      v55 = -1;
      goto LABEL_65;
    }
  LABEL_77:
    v62 = v45 - 24;
    while (1) {
      v45 = v62;
      v64 = *v62;
      v65 = (v64 & 1) == 0;
      v66 = v64 >> 1;
      if (v65) {
        v67 = v66;
      }
      else {
        v67 = *((_QWORD*)v45 + 1);
      }
      if (v65) {
        v68 = (char*)(v45 + 1);
      }
      else {
        v68 = *((char**)v45 + 2);
      }
      if (v53 >= v67) {
        v69 = v67;
      }
      else {
        v69 = v53;
      }
      v63 = memcmp(v68, v52, v69);
      if (v63 == 0) {
        if (v67 != v53) {
          break;
        }
        v63 = 0;
      }
    LABEL_79:
      v62 = v45 - 24;
      if (v63 < 0) {
        goto LABEL_56;
      }
    }
    if (v67 >= v53) {
      v63 = 1;
      goto LABEL_79;
    }
  LABEL_56:
    if (v44 < v45) {
      continue;
    }
    break;
  }
  v25 = (__int64*)(v44 - 24);
  if (v44 - 24 == (unsigned __int8*)a1) {
    if ((*(_BYTE*)a1 & 1) != 0) {
      v77 = *((_QWORD*)v44 - 1);
      if (v77 != 0) {
        v78 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v78 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v78, v77);
      }
    }
  }
  else {
    if ((*(_BYTE*)a1 & 1) != 0) {
      v70 = a1[2];
      if (v70 != 0) {
        v71 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v71 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v71, v70);
      }
    }
  LABEL_101:
    v72 = *v25;
    v73 = v25[2];
    a1[1] = v25[1];
    a1[2] = v73;
    *a1 = v72;
    *(_WORD*)v25 = 0;
  }
LABEL_102:
  v74 = v79;
  v75 = v81;
  v25[1] = v80;
  v25[2] = (__int64)v75;
  *v25 = v74;
  return v25;
}

bool VariableRegister_832ec0(_QWORD* a1, _QWORD* a2)
{
  signed __int64 v4;
  _QWORD* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  bool v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  char* v13;
  unsigned __int64 v14;
  int v15;
  unsigned __int8* v16;
  _QWORD* v17;
  __int64 v18;
  int v19;
  _QWORD* v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  bool v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  bool v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  unsigned __int64 v35;
  char* v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  char* v44;
  char* v45;
  unsigned __int64 v46;
  char* v47;
  char* v48;
  bool v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  char* v52;
  unsigned __int64 v53;
  int v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  char* v62;

  v4 = 0xAAAAAAAAAAAAAAABLL * (a2 - a1);
  if (v4 > 2) {
    switch (v4) {
    case 3LL:
      VariableRegister_831e20(a1, a1 + 3, a2 - 3);
      return true;
    case 4LL:
      VariableRegister_832080(a1, a1 + 3, a1 + 6, a2 - 3);
      return true;
    case 5LL:
      VariableRegister_832230(a1, a1 + 3, a1 + 6, a1 + 9, a2 - 3);
      return true;
    default:
      break;
    }
  }
  else {
    if ((unsigned __int64)v4 < 2) {
      return true;
    }
    if (v4 == 2) {
      v6 = a2 - 3;
      if ((*(_BYTE*)(a2 - 3) & 1) != 0) {
        v7 = *(a2 - 2);
      }
      else {
        v7 = (unsigned __int64)*((unsigned __int8*)a2 - 24) >> 1;
      }
      v8 = *(unsigned __int8*)a1;
      if ((*(_BYTE*)(a2 - 3) & 1) != 0) {
        v9 = (char*)*(a2 - 1);
      }
      else {
        v9 = (char*)a2 - 23;
      }
      v10 = (v8 & 1) == 0;
      v11 = v8 >> 1;
      if (v10) {
        v12 = v11;
      }
      else {
        v12 = a1[1];
      }
      if (v10) {
        v13 = (char*)a1 + 1;
      }
      else {
        v13 = (char*)a1[2];
      }
      if (v12 >= v7) {
        v14 = v7;
      }
      else {
        v14 = v12;
      }
      v15 = memcmp(v9, v13, v14);
      if (v15 != 0) {
        if ((v15 & 0x80000000) == 0) {
          return true;
        }
      }
      else if (v7 >= v12) {
        return true;
      }
      v56 = v6[1];
      v55 = v6[2];
      v57 = *a1;
      v58 = a1[1];
      *a1 = *v6;
      a1[1] = v56;
      v59 = a1[2];
      a1[2] = v55;
      *v6 = v57;
      v6[1] = v58;
      v6[2] = v59;
      return true;
    }
  }
  v16 = (unsigned __int8*)(a1 + 6);
  VariableRegister_831e20(a1, a1 + 3, a1 + 6);
  v17 = a1 + 9;
  if (a1 + 9 == a2) {
    return true;
  }
  v18 = 0;
  v19 = 0;
  while (1) {
    v22 = *(unsigned __int8*)v17;
    v23 = (v22 & 1) == 0;
    v24 = v22 >> 1;
    v25 = v23 ? v24 : v17[1];
    v26 = *v16;
    v27 = v23 ? (__int64)v17 + 1 : v17[2];
    v28 = (v26 & 1) == 0;
    v29 = v26 >> 1;
    v30 = v28 ? (__int64)(v16 + 1) : *((_QWORD*)v16 + 2);
    v31 = v28 ? v29 : *((_QWORD*)v16 + 1);
    v32 = v31 >= v25 ? v25 : v31;
    v33 = memcmp(v27, v30, v32);
    if (v33 == 0) {
      break;
    }
    if (v33 < 0) {
      goto LABEL_52;
    }
  LABEL_32:
    v16 = (unsigned __int8*)v17;
    v17 += 3;
    v18 += 24;
    if (v17 == a2) {
      return true;
    }
  }
  if (v25 >= v31) {
    goto LABEL_32;
  }
LABEL_52:
  v34 = *v17;
  v35 = v17[1];
  *v17 = 0;
  v17[1] = 0;
  v60 = v34;
  v61 = v35;
  v36 = (char*)v17[2];
  v17[2] = 0;
  v62 = v36;
  v37 = v18;
  while (1) {
    v38 = v37;
    v39 = (char*)a1 + v37;
    v40 = *((_QWORD*)v39 + 6);
    v41 = *((_QWORD*)v39 + 7);
    *((_WORD*)v39 + 24) = 0;
    *((_QWORD*)v39 + 9) = v40;
    *((_QWORD*)v39 + 10) = v41;
    *((_QWORD*)v39 + 11) = *((_QWORD*)v39 + 8);
    if (v38 == -48) {
      break;
    }
    if ((v60 & 1) != 0) {
      v42 = v61;
    }
    else {
      v42 = (unsigned __int64)(unsigned __int8)v60 >> 1;
    }
    v43 = (unsigned __int8)v39[24];
    if ((v60 & 1) != 0) {
      v44 = v62;
    }
    else {
      v44 = (char*)&v60 + 1;
    }
    v45 = v39 + 25;
    v48 = v39 + 32;
    v46 = *((_QWORD*)v39 + 4);
    v47 = *((char**)v48 + 1);
    v49 = (v43 & 1) == 0;
    v50 = v43 >> 1;
    if (v49) {
      v51 = v50;
    }
    else {
      v51 = v46;
    }
    if (v49) {
      v52 = v45;
    }
    else {
      v52 = v47;
    }
    if (v51 >= v42) {
      v53 = v42;
    }
    else {
      v53 = v51;
    }
    v54 = memcmp(v44, v52, v53);
    if (v54 == 0) {
      if (v42 >= v51) {
      LABEL_30:
        v20 = (_QWORD*)((char*)a1 + v38 + 48);
        goto LABEL_31;
      }
      v54 = -1;
    }
    v37 = v38 - 24;
    if ((v54 & 0x80000000) == 0) {
      goto LABEL_30;
    }
  }
  v20 = a1;
LABEL_31:
  v21 = v61;
  ++v19;
  *v20 = v60;
  v20[1] = v21;
  v20[2] = v62;
  if (v19 != 8) {
    goto LABEL_32;
  }
  return v17 + 3 == a2;
}

__int64 VariableRegister_833460(__int64 result, __int64 a2, __int64 a3,
                                _QWORD* a4)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int8* v13;
  unsigned __int64 v14;
  bool v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int8* v18;
  unsigned __int64 v19;
  bool v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int8* v23;
  unsigned __int64 v24;
  int v25;
  unsigned __int64 v26;
  bool v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int8* v31;
  bool v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  char* v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  char* v39;
  char* v40;
  unsigned __int64 v41;
  bool v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  unsigned __int8* v45;
  unsigned __int64 v46;
  char* v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  char* v55;
  __int64 v56;
  bool v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  unsigned __int8* v60;
  unsigned __int64 v61;
  bool v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int8* v65;
  unsigned __int64 v66;
  int v67;
  bool v68;
  __int64 v69;
  char* v70;
  __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  char* v74;
  __int64 v75;
  __int64 v76;

  v6 = a3 - 2;
  if (a3 >= 2) {
    v75 = v4;
    v76 = v5;
    v7 = v6 >> 1;
    v8 = a4;
    v9 = result;
    if ((__int64)(v6 >> 1) >=
        (__int64)(0xAAAAAAAAAAAAAAABLL * (((__int64)a4 - result) >> 3))) {
      v10 = a3;
      v11 = (0x5555555555555556LL * (((__int64)a4 - result) >> 3)) | 1;
      v12 = 0x5555555555555556LL * (((__int64)a4 - result) >> 3) + 2;
      v13 = (unsigned __int8*)(result + 24 * v11);
      if (v12 < a3) {
        v14 = *v13;
        v15 = (v14 & 1) == 0;
        v16 = v13[24];
        v17 = v14 >> 1;
        if (v15) {
          v18 = v13 + 1;
        }
        else {
          v18 = *((unsigned __int8**)v13 + 2);
        }
        if (v15) {
          v19 = v17;
        }
        else {
          v19 = *((_QWORD*)v13 + 1);
        }
        v20 = (v16 & 1) == 0;
        v21 = v16 >> 1;
        if (v20) {
          v22 = v21;
        }
        else {
          v22 = *((_QWORD*)v13 + 4);
        }
        if (v20) {
          v23 = v13 + 25;
        }
        else {
          v23 = *((unsigned __int8**)v13 + 5);
        }
        if (v22 >= v19) {
          v24 = v19;
        }
        else {
          v24 = v22;
        }
        v25 = memcmp(v18, v23, v24);
        if (v25 == 0) {
          if (v19 >= v22) {
            goto LABEL_22;
          }
          goto LABEL_21;
        }
        if (v25 < 0) {
        LABEL_21:
          v13 += 24;
          v11 = v12;
        }
      }
    LABEL_22:
      v26 = *v13;
      v27 = (v26 & 1) == 0;
      v28 = v26 >> 1;
      if (v27) {
        v29 = v28;
      }
      else {
        v29 = *((_QWORD*)v13 + 1);
      }
      v30 = *(unsigned __int8*)v8;
      if (v27) {
        v31 = v13 + 1;
      }
      else {
        v31 = *((unsigned __int8**)v13 + 2);
      }
      v32 = (v30 & 1) == 0;
      v33 = v30 >> 1;
      if (v32) {
        v34 = v33;
      }
      else {
        v34 = v8[1];
      }
      if (v32) {
        v35 = (char*)v8 + 1;
      }
      else {
        v35 = (char*)v8[2];
      }
      if (v34 >= v29) {
        v36 = v29;
      }
      else {
        v36 = v34;
      }
      result = memcmp(v31, v35, v36);
      if ((_DWORD)result != 0) {
        if ((result & 0x80000000) != 0) {
          return result;
        }
      }
      else if (v29 < v34) {
        return result;
      }
      v37 = *v8;
      v38 = v8[1];
      *v8 = 0;
      v8[1] = 0;
      v71 = v10;
      v72 = v37;
      v73 = v38;
      v39 = (char*)v8[2];
      v8[2] = 0;
      v74 = v39;
      v40 = (char*)&v72 + 1;
      while (1) {
        v49 = *(_QWORD*)v13;
        v50 = *((_QWORD*)v13 + 2);
        v51 = v13;
        v8[1] = *((_QWORD*)v13 + 1);
        v8[2] = v50;
        *v8 = v49;
        *(_WORD*)v13 = 0;
        if (v7 < v11) {
        LABEL_87:
          v69 = v72;
          v70 = v74;
          v51[1] = v73;
          v51[2] = v70;
          *v51 = v69;
          return result;
        }
        v52 = 2 * v11 + 2;
        v13 = (unsigned __int8*)(v9 + 24 * ((2 * v11) | 1));
        v11 = (2 * v11) | 1;
        if (v52 < v10) {
          v53 = *v13;
          v54 = v9;
          v55 = v40;
          v56 = v7;
          v57 = (v53 & 1) == 0;
          v58 = v13[24];
          v59 = v53 >> 1;
          if (v57) {
            v60 = v13 + 1;
          }
          else {
            v60 = *((unsigned __int8**)v13 + 2);
          }
          if (v57) {
            v61 = v59;
          }
          else {
            v61 = *((_QWORD*)v13 + 1);
          }
          v62 = (v58 & 1) == 0;
          v63 = v58 >> 1;
          if (v62) {
            v64 = v63;
          }
          else {
            v64 = *((_QWORD*)v13 + 4);
          }
          if (v62) {
            v65 = v13 + 25;
          }
          else {
            v65 = *((unsigned __int8**)v13 + 5);
          }
          if (v64 >= v61) {
            v66 = v61;
          }
          else {
            v66 = v64;
          }
          v67 = memcmp(v60, v65, v66);
          if (v67 != 0) {
            v7 = v56;
            v40 = v55;
            v9 = v54;
            v10 = v71;
            if (v67 < 0) {
              goto LABEL_42;
            }
          }
          else {
            v68 = v61 >= v64;
            v7 = v56;
            v40 = v55;
            v9 = v54;
            v10 = v71;
            if (!v68) {
            LABEL_42:
              v13 += 24;
              v11 = v52;
            }
          }
        }
        v41 = *v13;
        v42 = (v41 & 1) == 0;
        v43 = v41 >> 1;
        if (v42) {
          v44 = v43;
        }
        else {
          v44 = *((_QWORD*)v13 + 1);
        }
        if (v42) {
          v45 = v13 + 1;
        }
        else {
          v45 = *((unsigned __int8**)v13 + 2);
        }
        if ((v72 & 1) != 0) {
          v46 = v73;
        }
        else {
          v46 = (unsigned __int64)(unsigned __int8)v72 >> 1;
        }
        if ((v72 & 1) != 0) {
          v47 = v74;
        }
        else {
          v47 = v40;
        }
        if (v46 >= v44) {
          v48 = v44;
        }
        else {
          v48 = v46;
        }
        result = memcmp(v45, v47, v48);
        if ((_DWORD)result == 0) {
          if (v44 == v46) {
            result = 0;
          }
          else {
            if (v44 < v46) {
              goto LABEL_87;
            }
            result = 1;
          }
        }
        v8 = v51;
        if ((result & 0x80000000) != 0) {
          goto LABEL_87;
        }
      }
    }
  }
  return result;
}

_QWORD* VariableRegister_833720(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  unsigned int v14;
  unsigned __int64 v15;
  bool v16;
  unsigned __int64 v17;
  char* v18;
  unsigned __int64 v19;
  bool v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  char* v23;
  unsigned __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;

  v5 = 0;
  v6 = (a3 - 2) / 2;
  do {
    v9 = &a1[3 * v5];
    v10 = a1;
    v11 = 2 * v5 + 2;
    a1 = v9 + 3;
    v5 = (2 * v5) | 1;
    if (v11 < a3) {
      v14 = *((unsigned __int8*)v9 + 48);
      v13 = v9 + 6;
      v12 = v14;
      v15 = *((unsigned __int8*)v13 - 24);
      v16 = (v15 & 1) == 0;
      v17 = v15 >> 1;
      if (v16) {
        v18 = (char*)v13 - 23;
      }
      else {
        v18 = (char*)*(v13 - 1);
      }
      if (v16) {
        v19 = v17;
      }
      else {
        v19 = *(v13 - 2);
      }
      v20 = (v12 & 1) == 0;
      v21 = v12 >> 1;
      if (v20) {
        v22 = v21;
      }
      else {
        v22 = v13[1];
      }
      if (v20) {
        v23 = (char*)v13 + 1;
      }
      else {
        v23 = (char*)v13[2];
      }
      if (v22 >= v19) {
        v24 = v19;
      }
      else {
        v24 = v22;
      }
      v25 = memcmp(v18, v23, v24);
      if (v25 == 0) {
        if (v19 >= v22) {
          goto LABEL_22;
        }
      LABEL_21:
        a1 = v13;
        v5 = v11;
        goto LABEL_22;
      }
      if (v25 < 0) {
        goto LABEL_21;
      }
    }
  LABEL_22:
    if ((*(_BYTE*)v10 & 1) != 0) {
      v26 = v10[2];
      if (v26 != 0) {
        v27 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v27 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v26);
      }
    }
    v7 = *a1;
    v8 = a1[2];
    v10[1] = a1[1];
    v10[2] = v8;
    *v10 = v7;
    *(_WORD*)a1 = 0;
  } while (v5 <= v6);
  return a1;
}

__int64 VariableRegister_833860(__int64 result, __int64 a2, __int64 a3,
                                __int64 a4)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  bool v13;
  unsigned __int64 v14;
  char* v15;
  unsigned __int64 v16;
  bool v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  char* v23;
  bool v24;
  char* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  unsigned __int64 v30;
  bool v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  char* v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  char* v39;
  __int64 v40;
  __int64 v41;

  v6 = a4 - 2;
  if (a4 >= 2) {
    v40 = v4;
    v41 = v5;
    v7 = v6 >> 1;
    v8 = result;
    v9 = (_QWORD*)(result + 24 * (v6 >> 1));
    v11 = (__int64*)(a2 - 24);
    v10 = *(unsigned __int8*)(a2 - 24);
    v12 = *(unsigned __int8*)v9;
    v13 = (v12 & 1) == 0;
    v14 = v12 >> 1;
    if (v13) {
      v15 = (char*)v9 + 1;
    }
    else {
      v15 = (char*)v9[2];
    }
    if (v13) {
      v16 = v14;
    }
    else {
      v16 = v9[1];
    }
    v17 = (v10 & 1) == 0;
    v18 = v10 >> 1;
    if (v17) {
      v19 = v18;
    }
    else {
      v19 = *(_QWORD*)(a2 - 16);
    }
    if (v17) {
      v20 = a2 - 23;
    }
    else {
      v20 = *(_QWORD*)(a2 - 8);
    }
    if (v19 >= v16) {
      v21 = v16;
    }
    else {
      v21 = v19;
    }
    result = memcmp(v15, v20, v21);
    if ((_DWORD)result != 0) {
      if ((result & 0x80000000) == 0) {
        return result;
      }
    }
    else if (v16 >= v19) {
      return result;
    }
    v22 = v11[1];
    v23 = (char*)v11[2];
    v24 = (*v11 & 1) == 0;
    v37 = *v11;
    v38 = v22;
    v39 = v23;
    *v11 = 0;
    v11[1] = 0;
    v11[2] = 0;
    if (v24) {
      v25 = (char*)&v37 + 1;
    }
    else {
      v25 = v23;
    }
    if (v24) {
      v26 = (unsigned __int8)v37 >> 1;
    }
    else {
      v26 = v22;
    }
    do {
      v27 = *v9;
      v28 = v9[2];
      v29 = v9;
      v11[1] = v9[1];
      v11[2] = v28;
      *v11 = v27;
      *(_WORD*)v9 = 0;
      if (v7 == 0) {
        break;
      }
      v7 = (v7 - 1) >> 1;
      v9 = (_QWORD*)(v8 + 24 * v7);
      v30 = *(unsigned __int8*)v9;
      v31 = (v30 & 1) == 0;
      v32 = v30 >> 1;
      if (v31) {
        v33 = v32;
      }
      else {
        v33 = v9[1];
      }
      if (v31) {
        v34 = (char*)v9 + 1;
      }
      else {
        v34 = (char*)v9[2];
      }
      if (v26 >= v33) {
        v35 = v33;
      }
      else {
        v35 = v26;
      }
      result = memcmp(v34, v25, v35);
      if ((_DWORD)result == 0) {
        if (v33 >= v26) {
          break;
        }
        result = 0xFFFFFFFFLL;
      }
      v11 = v29;
    } while ((result & 0x80000000) != 0);
    v36 = v38;
    *v29 = v37;
    v29[1] = v36;
    v29[2] = (__int64)v39;
  }
  return result;
}

_QWORD*

game_anonymous_VariableRegister_RegisterLottery_closure_Invoke(__int64 a1,
                                                               _QWORD* a2)
{
  return GameVariable_826e40(*(_QWORD*)(a1 + 8), 9u, a2, 0, 0, 0, 99999, 0);
}

_QWORD*

game_anonymous_VariableRegister_RegisterCausation_closure_Invoke(__int64 a1,
                                                                 _QWORD* a2)
{
  return GameVariable_826e40(*(_QWORD*)(a1 + 8), 0xAu, a2, 0, 0, 0, 99999, 0);
}

_QWORD* game_anonymous_VariableRegister_RegisterAsset_closure_Invoke(__int64 a1,
                                                                     _QWORD* a2)
{
  return GameVariable_826e40(*(_QWORD*)(a1 + 8), 4u, a2, 0, 0, 0, 99999, 0);
}

__int64

game_anonymous_VariableRegister_RegisterAchieve_closure0_Invoke(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 (*v7)(_QWORD);
  __int64 v8;
  _QWORD* v9;

  v1 = *(_QWORD**)(*(_QWORD*)(result + 8) + 24LL);
  v2 = v1 + 9;
  if (v1[9] != 0) {
    v3 = v1[14];
    v4 = v1[15];
    if (v4 == v3) {
      return GameRoutine_717fc0(v2, 1);
    }
    else {
      while (1) {
        if (*(_QWORD*)v3 != 0) {
          v5 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v6 = game_GameVariableTable_Find(
                *(_QWORD*)(game_GameModeData_instance_ + 48), v3);
            if (v6 != 0) {
              v7 = *(__int64 (**)(_QWORD))(v6 + 72);
              v8 = *(_QWORD*)(v6 + 80);
              v9 = (_QWORD*)(v6 + (v8 >> 1));
              if ((v8 & 1) != 0) {
                v7 = *(__int64 (**)(_QWORD))((char*)v7 + *v9);
              }
              result = v7(v9);
            }
            else {
              result = 1;
            }
          }
          if (*(_BYTE*)(v3 + 16) != ((v5 == 0) | result & 1)) {
            break;
          }
        }
        v3 += 24;
        if (v3 == v4) {
          return GameRoutine_717fc0(v2, 1);
        }
      }
    }
  }
  return result;
}

unsigned __int64 game_anonymous_VariableRegister_RegisterKeyMap_closure_Invoke(
    unsigned __int64 result, unsigned __int8* a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  __int64 v3;
  unsigned int** v4;
  unsigned int** v5;
  unsigned int* v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v11;
  __int64 v12;
  __int64** v13;
  __int64* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64** v18;
  __int64* v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  float v23;
  float v24;
  float v25;
  _BOOL8 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  _QWORD* v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  _QWORD* v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  _QWORD* v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64* v52;
  unsigned __int64 v53;

  if ((unsigned int)*a2 - 3 > 0xFFFFFFFD) {
    return result;
  }
  v3 = *(_QWORD*)(result + 8);
  v4 = *(unsigned int***)(*(_QWORD*)(v3 + 8) + 24LL * *a2 + 3932168);
  v5 = *(unsigned int***)(*(_QWORD*)(v3 + 8) + 24LL * *a2 + 3932176);
  if (v4 == v5) {
    return result;
  }
  do {
    v6 = *v4;
    v7 = *(_QWORD*)(v3 + 8) + 3932160LL;
    v8 = **v4;
    v9 = *(_QWORD*)(*(_QWORD*)(v3 + 8) + 3932784LL);
    if (v9 != 0 && *(_QWORD*)(*(_QWORD*)(v3 + 8) + 3932800LL) != 0) {
      v11 = v9 - 1;
      if ((v9 & (v9 - 1)) != 0) {
        v12 = **v4;
        if (v9 <= v8) {
          v12 = (unsigned int)v8 % (unsigned int)v9;
        }
      }
      else {
        v12 = ((_DWORD)v9 - 1) & (unsigned int)v8;
      }
      v13 = *(__int64***)(*(_QWORD*)(*(_QWORD*)(v3 + 8) + 3932776LL) + 8 * v12);
      if (v13 != nullptr) {
        v14 = *v13;
        if (v14 != nullptr) {
          if ((v9 & v11) == 0) {
            while (1) {
              v17 = v14[1];
              if (v17 == v8) {
                if (*((_DWORD*)v14 + 4) == (_DWORD)v8) {
                  goto LABEL_6;
                }
              }
              else if ((v17 & v11) != v12) {
                goto LABEL_12;
              }
              v14 = (__int64*)*v14;
              if (v14 == nullptr) {
                goto LABEL_12;
              }
            }
          }
          while (1) {
            v15 = v14[1];
            if (v15 == v8) {
              if (*((_DWORD*)v14 + 4) == (_DWORD)v8) {
                goto LABEL_6;
              }
            }
            else {
              if (v15 >= v9) {
                v15 %= v9;
              }
              if (v15 != v12) {
                goto LABEL_12;
              }
            }
            v14 = (__int64*)*v14;
            if (v14 == nullptr) {
              goto LABEL_12;
            }
          }
        }
      }
    LABEL_29:
      v16 = v9 - 1;
      if ((v9 & (v9 - 1)) != 0) {
        v2 = **v4;
        if (v9 <= v8) {
          v2 = (unsigned int)v8 % (unsigned int)v9;
        }
      }
      else {
        v2 = ((_DWORD)v9 - 1) & (unsigned int)v8;
      }
      v18 = *(__int64***)(*(_QWORD*)(*(_QWORD*)(v3 + 8) + 3932776LL) + 8 * v2);
      if (v18 != nullptr) {
        v19 = *v18;
        if (v19 != nullptr) {
          if ((v9 & v16) == 0) {
            while (1) {
              v21 = v19[1];
              if (v21 == v8) {
                if (*((_DWORD*)v19 + 4) == (_DWORD)v8) {
                  goto LABEL_6;
                }
              }
              else if ((v21 & v16) != v2) {
                goto LABEL_53;
              }
              v19 = (__int64*)*v19;
              if (v19 == nullptr) {
                goto LABEL_53;
              }
            }
          }
          while (1) {
            v20 = v19[1];
            if (v20 == v8) {
              if (*((_DWORD*)v19 + 4) == (_DWORD)v8) {
                goto LABEL_6;
              }
            }
            else {
              if (v20 >= v9) {
                v20 %= v9;
              }
              if (v20 != v2) {
                goto LABEL_53;
              }
            }
            v19 = (__int64*)*v19;
            if (v19 == nullptr) {
              goto LABEL_53;
            }
          }
        }
      }
      goto LABEL_53;
    }
  LABEL_12:
    if (v9 != 0) {
      goto LABEL_29;
    }
  LABEL_53:
    result = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, 40,
                                                 16, 0);
    *(_QWORD*)result = 0;
    *(_QWORD*)(result + 8) = v8;
    *(_DWORD*)(result + 16) = v8;
    v22 = result;
    *(_QWORD*)(result + 24) = *(_QWORD*)v6;
    *(_QWORD*)(result + 32) = *((_QWORD*)v6 + 1);
    v23 = *(float*)(v7 + 648);
    v24 = (float)(unsigned __int64)(*(_QWORD*)(v7 + 640) + 1LL);
    if (v9 != 0 && (float)(v23 * (float)v9) >= v24) {
      goto LABEL_119;
    }
    v25 = v24 / v23;
    v26 = (v9 & (v9 - 1)) != 0;
    if (v9 < 3) {
      v26 = true;
    }
    v27 = v26 | (2 * v9);
    v28 = vcvtps_u64_f32(v25);
    if (v27 <= v28) {
      v29 = v28;
    }
    else {
      v29 = v27;
    }
    if (v29 == 1) {
      v29 = 2;
    }
    else if ((v29 & (v29 - 1)) != 0) {
      result = std___1___next_prime(v29);
      v29 = result;
    }
    v30 = *(_QWORD*)(v7 + 624);
    if (v29 <= v30) {
      if (v29 >= v30) {
        goto LABEL_114;
      }
      result = vcvtps_u64_f32((float)*(unsigned __int64*)(v7 + 640) /
                              *(float*)(v7 + 648));
      if (v30 < 3 || (v30 & (v30 - 1)) != 0) {
        result = std___1___next_prime(result);
      }
      else {
        v34 = 1LL << -(char)__clz(result - 1);
        if (result >= 2) {
          result = v34;
        }
      }
      if (v29 <= result) {
        v29 = result;
      }
      if (v29 >= v30) {
        goto LABEL_114;
      }
      if (v29 == 0) {
        v49 = *(_QWORD*)(v7 + 616);
        *(_QWORD*)(v7 + 616) = 0;
        if (v49 != 0) {
          v50 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v50 = 56;
          }
          result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v50,
                                                 v49);
        }
        *(_QWORD*)(v7 + 624) = 0;
        goto LABEL_114;
      }
    }
    if (v29 >> 61 != 0) {
      GameRoutine_60a210();
    }
    result = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                 8 * v29, 16, 0);
    v31 = *(_QWORD*)(v7 + 616);
    *(_QWORD*)(v7 + 616) = result;
    if (v31 != 0) {
      v32 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v32 = 56;
      }
      result =
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v32, v31);
    }
    *(_QWORD*)(v7 + 624) = v29;
    if (v29 >= 8) {
      v33 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)(v7 + 616) + 8 * v33) = 0;
        *(_QWORD*)(*(_QWORD*)(v7 + 616) + 8 * v33 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)(v7 + 616) + 8 * v33 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)(v7 + 616) + 8 * v33 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)(v7 + 616) + 8 * v33 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)(v7 + 616) + 8 * v33 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)(v7 + 616) + 8 * v33 + 48) = 0;
        v35 = *(_QWORD*)(v7 + 616) + 8 * v33;
        v33 += 8;
        *(_QWORD*)(v35 + 56) = 0;
      } while ((v29 & 0x1FFFFFFFFFFFFFF8LL) != v33);
    }
    else {
      v33 = 0;
    }
    v36 = v29 & 7;
    if ((v29 & 7) != 0) {
      v37 = 8 * v33;
      do {
        --v36;
        *(_QWORD*)(*(_QWORD*)(v7 + 616) + v37) = 0;
        v37 += 8;
      } while (v36 != 0);
    }
    v38 = *(_QWORD**)(v7 + 632);
    if (v38 != nullptr) {
      v39 = v38[1];
      v40 = v7 + 632;
      v41 = v29 - 1;
      if ((v29 & (v29 - 1)) != 0) {
        if (v39 >= v29) {
          v39 %= v29;
        }
        *(_QWORD*)(*(_QWORD*)(v7 + 616) + 8 * v39) = v40;
        v42 = (_QWORD*)*v38;
        if (*v38 == 0) {
          goto LABEL_114;
        }
        while (1) {
          v43 = v42[1];
          if (v43 >= v29) {
            v43 %= v29;
          }
          if (v43 != v39) {
            v44 = *(_QWORD*)(v7 + 616);
            if (*(_QWORD*)(v44 + 8 * v43) == 0) {
              *(_QWORD*)(v44 + 8 * v43) = v38;
              goto LABEL_91;
            }
            *v38 = *v42;
            *v42 = **(_QWORD**)(*(_QWORD*)(v7 + 616) + 8 * v43);
            **(_QWORD**)(*(_QWORD*)(v7 + 616) + 8 * v43) = v42;
            v42 = v38;
          }
          v43 = v39;
        LABEL_91:
          v38 = v42;
          v42 = (_QWORD*)*v42;
          v39 = v43;
          if (v42 == nullptr) {
            goto LABEL_114;
          }
        }
      }
      v45 = v39 & v41;
      *(_QWORD*)(*(_QWORD*)(v7 + 616) + 8 * v45) = v40;
      while (1) {
        v46 = (_QWORD*)*v38;
        if (*v38 == 0) {
          break;
        }
        v47 = v46[1] & v41;
        if (v47 == v45) {
          v38 = (_QWORD*)*v38;
        }
        else {
          v48 = *(_QWORD*)(v7 + 616);
          if (*(_QWORD*)(v48 + 8 * v47) != 0) {
            *v38 = *v46;
            *v46 = **(_QWORD**)(*(_QWORD*)(v7 + 616) + 8 * v47);
            **(_QWORD**)(*(_QWORD*)(v7 + 616) + 8 * v47) = v46;
          }
          else {
            *(_QWORD*)(v48 + 8 * v47) = v38;
            v38 = v46;
            v45 = v47;
          }
        }
      }
    }
  LABEL_114:
    v9 = *(_QWORD*)(v7 + 624);
    if ((v9 & (v9 - 1)) != 0) {
      if (v9 <= v8) {
        v2 = v8 % v9;
      }
      else {
        v2 = v8;
      }
    }
    else {
      v2 = ((_DWORD)v9 - 1) & (unsigned int)v8;
    }
  LABEL_119:
    v51 = *(_QWORD*)(v7 + 616);
    v52 = *(unsigned __int64**)(v51 + 8 * v2);
    if (v52 != nullptr) {
      *(_QWORD*)v22 = *v52;
      *v52 = v22;
    }
    else {
      *(_QWORD*)v22 = *(_QWORD*)(v7 + 632);
      *(_QWORD*)(v7 + 632) = v22;
      *(_QWORD*)(v51 + 8 * v2) = v7 + 632;
      if (*(_QWORD*)v22 != 0) {
        v53 = *(_QWORD*)(*(_QWORD*)v22 + 8LL);
        if ((v9 & (v9 - 1)) != 0) {
          if (v53 >= v9) {
            v53 %= v9;
          }
        }
        else {
          v53 &= v9 - 1;
        }
        *(_QWORD*)(*(_QWORD*)(v7 + 616) + 8 * v53) = v22;
      }
    }
    ++*(_QWORD*)(v7 + 640);
  LABEL_6:
    ++v4;
  } while (v4 != v5);
  return result;
}

#pragma GCC visibility pop
