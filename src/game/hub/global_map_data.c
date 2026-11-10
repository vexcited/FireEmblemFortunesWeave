#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e273d0(_QWORD);
__int64 GameRoutine_e298c0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
extern __int64 (*GameData_1fe3850[])();
extern __int64 (*game_hub_GlobalMapData_vtable[])();
extern __int64 GameData_2210d68;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212f168;
extern int GameData_2216298;
__int64 GlobalMapData_Destructor(_QWORD* a1);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d70e70(_QWORD, _QWORD, long double);
__int64 GameRoutine_d838e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e25200(_QWORD);
__int64 GameRoutine_e26640(_QWORD);
__int64 GlobalMapData_e25980_alt1(_QWORD) __asm__("GlobalMapData_e25980");
__int64 GlobalMapData_e262e0_alt1(_QWORD) __asm__("GlobalMapData_e262e0");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcmp_alt1(_QWORD, _QWORD) __asm__("memcmp");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dc68;
extern __int64 GameData_2167700;
extern __int64 GameData_2167708;
extern __int64 GameData_2216258;
extern __int64* GameData_212ef18[2];
extern char GameData_21676f8[6];
extern char GameData_2216260;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_65c760(_QWORD);
void __attribute__((noreturn)) GameRoutine_d716e0(_QWORD);
void __attribute__((noreturn)) GameRoutine_e29570(_QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 GlobalMapData_e25100(__int64 a1);
void GlobalMapData_e25980(_QWORD* a1);
unsigned __int64 GlobalMapData_e262e0_alt2() __asm__("GlobalMapData_e262e0");
__int64
game_hub_GlobalMapData_SetupAreaChangeHashPoints_lambda0_Invoke(__int64 result,
                                                                __int64* a2);
_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");
__attribute__((swiftcall)) void
LocatorDispos_db2180(PSEUDO_X8, unsigned __int8*, unsigned __int8*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memchr(_QWORD, _QWORD, _QWORD);
__n128 GameRoutine_e24730(__int64, __int64);
__n128 GlobalMapData_e24840(unsigned __int8*);
__n128 GlobalMapData_e26b40(__int64, unsigned __int8*, __int64, char);
__n128 nn_mem_StandardAllocator_Free_alt2(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
char** GameRoutine_d5ffa0(char** result, __int64, __int64, unsigned __int64);
extern __int64 (*GameData_1fe3880[])();
extern __int64 GameData_212ca10[133];
extern __int64 GameData_21ca000;
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn))
GameRoutine_65c760_alt1() __asm__("GameRoutine_65c760");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void GlobalMapData_e25200(__int64 a1);
__n128 game_hub_GlobalMapData_SetupAreaChangeHashPoints(__int64 a1);
__int64 GameRoutine_d838e0_alt1(__int64 result, unsigned __int8*, __int64,
                                __int64, __int64) __asm__("GameRoutine_d838e0");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
int memcmp_alt2(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void nn_mem_StandardAllocator_Free_alt3(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void GlobalMapData_e262e0();

__int64 GlobalMapData_Destructor(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  *a1 = game_hub_GlobalMapData_vtable;
  v2 = GameData_212f168;
  (*(void (**)(_QWORD))(*(_QWORD*)*GameData_212f168 + 24LL))(*GameData_212f168);
  if (*v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v2 + 8LL))(*v2);
  }
  *v2 = 0;
  v3 = a1[28];
  v4 = fw_memory_g_heap_manager_ptr;
  if (v3 != 0) {
    v5 = a1[29];
    if (v3 == v5) {
      goto LABEL_19;
    }
    do {
      if ((*(_BYTE*)(v5 - 24) & 1) != 0 && *(_QWORD*)(v5 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6);
      }
      v7 = *(_QWORD*)(v5 - 64);
      if (v7 != 0) {
        *(_QWORD*)(v5 - 56) = v7;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8);
      }
      v5 -= 80;
    } while (v5 != v3);
    v9 = a1[28];
    a1[29] = v3;
    if (v9 != 0) {
    LABEL_19:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10);
    }
  }
  GameRoutine_e298c0(a1 + 25, a1[26]);
  v11 = a1[22];
  if (v11 != 0) {
    v12 = *(_QWORD*)v4;
    a1[23] = v11;
    v13 = 128;
    if (*(_QWORD*)(v12 + 200) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(v12 + v13);
  }
  v14 = a1[19];
  if (v14 != 0) {
    v15 = *(_QWORD*)v4;
    a1[20] = v14;
    v16 = 128;
    if (*(_QWORD*)(v15 + 200) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(v15 + v16);
  }
  v17 = a1[16];
  if (v17 != 0) {
    v18 = *(_QWORD*)v4;
    a1[17] = v17;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(v18 + v19);
  }
  result = nn_os_FinalizeMutex(a1 + 10);
  v21 = a1[7];
  if (v21 != 0) {
    v22 = *(_QWORD*)v4;
    a1[8] = v21;
    v23 = 128;
    if (*(_QWORD*)(v22 + 200) == 0) {
      v23 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v22 + v23);
  }
  v24 = a1[4];
  if (v24 != 0) {
    v25 = *(_QWORD*)v4;
    a1[5] = v24;
    v26 = 128;
    if (*(_QWORD*)(v25 + 200) == 0) {
      v26 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v25 + v26);
  }
  v27 = a1[1];
  if (v27 != 0) {
    v28 = a1[2];
    if (v27 == v28) {
      goto LABEL_46;
    }
    do {
      v29 = v28 - 296;
      GameRoutine_e273d0(v28 - 152);
      result = GameRoutine_e273d0(v29);
      v28 = v29;
    } while (v29 != v27);
    v30 = a1[1];
    a1[2] = v27;
    if (v30 != 0) {
    LABEL_46:
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v31 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v31);
    }
  }
  *a1 = GameData_1fe3850;
  if ((_QWORD*)GameData_2210d68 == a1) {
    GameData_2210d68 = 0;
    GameData_2216298 = 0;
  }
  return result;
}

__int64 GlobalMapData_e25100(__int64 a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = (_QWORD*)(a1 + 208);
  GameRoutine_e298c0(a1 + 200, *(_QWORD*)(a1 + 208));
  *v1 = 0;
  v1[1] = 0;
  *(v1 - 1) = v1;
  v5 = v1 + 2;
  v3 = v1[2];
  v4 = v5[1];
  if (v3 != v4) {
    v6 = fw_memory_g_heap_manager_ptr;
    do {
      if ((*(_BYTE*)(v4 - 24) & 1) != 0 && *(_QWORD*)(v4 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v7);
      }
      v8 = *(_QWORD*)(v4 - 64);
      if (v8 != 0) {
        *(_QWORD*)(v4 - 56) = v8;
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v9);
      }
      v4 -= 80;
    } while (v4 != v3);
  }
  *(_QWORD*)(a1 + 232) = v3;
  GameRoutine_e25200(a1);
  v10 = GlobalMapData_e25980_alt1(a1);
  GlobalMapData_e262e0_alt1(v10);
  return GameRoutine_e26640(a1);
}

void GlobalMapData_e25200(__int64 a1)
{
  __int64* v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  char* v15;
  __int64* v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;
  __int64 v22;
  signed __int64 v23;
  char* v24;
  char* v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
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
  char v44;
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
  struct {
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
    char v70;
    char gap121_[7];
    char v71;
    char gap129_[7];
    __int16 v72;
    char v73;
  } v55_;
  struct {
    __int64 v74;
    unsigned __int64 v75;
    __int64 v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
    __int64 v86;
    __int64 v87;
    __int64 v88;
    char v89;
    char gap265_[7];
    char v90;
    char gap273_[7];
    __int16 v91;
    char v92;
  } v74_;
  struct {
    __int64 v93;
    unsigned __int64 v94;
    __int64 v95;
  } v93_;

  v2 = *(__int64**)(*(_QWORD*)GameData_212ca10[0] + 64LL);
  v3 = *(__int64**)(*(_QWORD*)GameData_212ca10[0] + 72LL);
  if (v2 != v3) {
    v4 = &GameData_21ca000;
    v5 = (__int64*)fw_memory_g_heap_manager_ptr;
    v6 = (char*)&v93_.v93 + 1;
    while (1) {
      v7 = v4[342];
      if (v7 != 0) {
        v8 = *(_DWORD*)(v7 + 60) == 3 ? 81LL : 80LL;
      }
      else {
        v8 = 80;
      }
      v9 = *v2;
      v10 = *(unsigned __int8*)(*v2 + v8);
      if (v10 == 9 || v10 == 0) {
        v12 = *(_QWORD*)(v9 + 88);
        if (v12 != 0 && (*(_WORD*)(v9 + 258) & 3) != 0) {
          break;
        }
      }
    LABEL_3:
      if (++v2 == v3) {
        goto LABEL_123;
      }
    }
    v13 = strlen(v12);
    if (v13 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0_alt1();
    }
    v14 = v13;
    if (v13 >= 0x17) {
      v16 = v4;
      v17 = v6;
      if ((v13 | 7) == 0x17) {
        v18 = 26;
      }
      else {
        v18 = (v13 | 7) + 1;
      }
      v19 = fw_memory_HeapManager_Allocate_alt1(*v5, v18, 16, 0);
      v20 = v18 | 1;
      v15 = (char*)v19;
      v93_.v94 = v14;
      v93_.v95 = v19;
      v6 = v17;
      v4 = v16;
      v93_.v93 = v20;
    }
    else {
      v15 = v6;
      LOBYTE(v93_.v93) = 2 * v13;
      if (v13 == 0) {
        goto LABEL_25;
      }
    }
    memmove(v15, v12, v14);
  LABEL_25:
    v15[v14] = 0;
    v21 = v93_.v93;
    if ((v93_.v93 & 1) != 0) {
      v22 = v93_.v95;
    }
    else {
      v22 = (__int64)v6;
    }
    v23 = (unsigned __int64)(unsigned __int8)v93_.v93 >> 1;
    if ((v93_.v93 & 1) != 0) {
      v23 = v93_.v94;
    }
    if (v23 >= 2) {
      v24 = (char*)(v22 + v23);
      v25 = (char*)v22;
      do {
        v26 = (char*)memchr(v25, 95, v23 - 1);
        if (v26 == nullptr) {
          break;
        }
        if (*(_WORD*)v26 == 16735) {
          if (v26 != v24 && &v26[-v22] != (char*)-1LL) {
            goto LABEL_51;
          }
          break;
        }
        v25 = v26 + 1;
        v23 = v24 - v25;
      } while (v24 - v25 >= 2);
    }
    BYTE3(v55_.v55) = 0;
    LOBYTE(v55_.v55) = 4;
    *(_WORD*)((char*)&v55_.v55 + 1) = 12609;
    LocatorDispos_db2180((void*)(&v74_.v74), (unsigned __int8*)&v93_.v93,
                         (unsigned __int8*)&v55_.v55);
    v27 = fw_memory_g_heap_manager_ptr;
    if ((v93_.v93 & 1) != 0 && v93_.v95 != 0) {
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
        v28 = 128;
      }
      else {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v28);
    }
    v93_.v93 = v74_.v74;
    v93_.v94 = v74_.v75;
    v93_.v95 = v74_.v76;
    if ((v55_.v55 & 1) != 0 && v55_.v57 != 0) {
      if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) != 0) {
        v29 = 128;
      }
      else {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v27 + v29);
    }
    v21 = v93_.v93;
  LABEL_51:
    v74_.v90 = 0;
    v74_.v91 = 0;
    v74_.v92 = 0;
    v74_.v74 = 0;
    v74_.v75 = 0;
    v74_.v76 = 0;
    v74_.v77 = 0;
    v74_.v78 = 0;
    v74_.v79 = 0;
    v74_.v80 = 0;
    v74_.v81 = 0;
    v74_.v82 = 0;
    v74_.v83 = 0;
    v74_.v84 = 0;
    v74_.v85 = 0;
    v74_.v86 = 0;
    v74_.v87 = 0;
    v74_.v88 = 0;
    v74_.v89 = 0;
    if ((v21 & 1) != 0) {
      GameRoutine_64df20_alt1(&v74_.v74, v93_.v95, v93_.v94);
    }
    else {
      v74_.v74 = v93_.v93;
      v74_.v75 = v93_.v94;
      v74_.v76 = v93_.v95;
    }
    v74_.v92 = 1;
    GlobalMapData_e24840((unsigned __int8*)&v74_.v74);
    v55_.v71 = 0;
    v55_.v72 = 0;
    v55_.v73 = 0;
    v55_.v55 = 0;
    v55_.v56 = 0;
    v55_.v57 = 0;
    v55_.v58 = 0;
    v55_.v59 = 0;
    v55_.v60 = 0;
    v55_.v61 = 0;
    v55_.v62 = 0;
    v55_.v63 = 0;
    v55_.v64 = 0;
    v55_.v65 = 0;
    v55_.v66 = 0;
    v55_.v67 = 0;
    v55_.v68 = 0;
    v55_.v69 = 0;
    v55_.v70 = 0;
    v5 = (__int64*)fw_memory_g_heap_manager_ptr;
    if ((GameData_21676f8[0] & 1) != 0) {
      GameRoutine_64df20_alt1(&v55_.v55, GameData_2167708, GameData_2167700);
    }
    else {
      v55_.v55 = *(_QWORD*)GameData_21676f8;
      v55_.v56 = GameData_2167700;
      v55_.v57 = GameData_2167708;
    }
    v55_.v73 = 1;
    GlobalMapData_e24840((unsigned __int8*)&v55_.v55);
    GlobalMapData_e26b40(a1, (unsigned __int8*)&v55_.v55, (__int64)&v74_.v74,
                         1);
    GlobalMapData_e26b40(a1, (unsigned __int8*)&v74_.v74, (__int64)&v55_.v55,
                         1);
    if ((v55_.v67 & 1) != 0 && v55_.v69 != 0) {
      if (*(_QWORD*)(*v5 + 200) != 0) {
        v30 = 128;
      }
      else {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v5 + v30);
    }
    if ((v55_.v64 & 1) != 0 && v55_.v66 != 0) {
      if (*(_QWORD*)(*v5 + 200) != 0) {
        v31 = 128;
      }
      else {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v5 + v31);
    }
    if ((v55_.v61 & 1) != 0 && v55_.v63 != 0) {
      if (*(_QWORD*)(*v5 + 200) != 0) {
        v32 = 128;
      }
      else {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v5 + v32);
    }
    if ((v55_.v58 & 1) != 0 && v55_.v60 != 0) {
      if (*(_QWORD*)(*v5 + 200) != 0) {
        v33 = 128;
      }
      else {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v5 + v33);
    }
    if ((v55_.v55 & 1) != 0 && v55_.v57 != 0) {
      if (*(_QWORD*)(*v5 + 200) != 0) {
        v34 = 128;
      }
      else {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v5 + v34);
    }
    if ((v74_.v86 & 1) != 0 && v74_.v88 != 0) {
      if (*(_QWORD*)(*v5 + 200) != 0) {
        v35 = 128;
      }
      else {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v5 + v35);
    }
    if ((v74_.v83 & 1) != 0 && v74_.v85 != 0) {
      if (*(_QWORD*)(*v5 + 200) != 0) {
        v36 = 128;
      }
      else {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v5 + v36);
    }
    if ((v74_.v80 & 1) != 0 && v74_.v82 != 0) {
      if (*(_QWORD*)(*v5 + 200) != 0) {
        v37 = 128;
      }
      else {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v5 + v37);
    }
    if ((v74_.v77 & 1) != 0 && v74_.v79 != 0) {
      if (*(_QWORD*)(*v5 + 200) != 0) {
        v38 = 128;
      }
      else {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v5 + v38);
    }
    if ((v74_.v74 & 1) != 0 && v74_.v76 != 0) {
      if (*(_QWORD*)(*v5 + 200) != 0) {
        v39 = 128;
      }
      else {
        v39 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v5 + v39);
    }
    if ((v93_.v93 & 1) != 0 && v93_.v95 != 0) {
      if (*(_QWORD*)(*v5 + 200) != 0) {
        v40 = 128;
      }
      else {
        v40 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v5 + v40);
    }
    goto LABEL_3;
  }
LABEL_123:
  v41 = *(_QWORD*)(*GameData_212f168 + 64);
  v42 = *(_QWORD*)(*GameData_212f168 + 72);
  if (v41 != v42) {
    v43 = fw_memory_g_heap_manager_ptr;
    do {
      GameRoutine_e24730((__int64)&v74_.v74, *(_QWORD*)v41 + 32LL);
      GameRoutine_e24730((__int64)&v55_.v55, *(_QWORD*)v41 + 72LL);
      v44 = *(_BYTE*)(*(_QWORD*)v41 + 112LL) == 1;
      GlobalMapData_e26b40(a1, (unsigned __int8*)&v74_.v74, (__int64)&v55_.v55,
                           v44);
      GlobalMapData_e26b40(a1, (unsigned __int8*)&v55_.v55, (__int64)&v74_.v74,
                           v44);
      if ((v55_.v67 & 1) != 0 && v55_.v69 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v43 + 200LL) != 0) {
          v45 = 128;
        }
        else {
          v45 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v43 + v45);
      }
      if ((v55_.v64 & 1) != 0 && v55_.v66 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v43 + 200LL) != 0) {
          v46 = 128;
        }
        else {
          v46 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v43 + v46);
      }
      if ((v55_.v61 & 1) != 0 && v55_.v63 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v43 + 200LL) != 0) {
          v47 = 128;
        }
        else {
          v47 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v43 + v47);
      }
      if ((v55_.v58 & 1) != 0 && v55_.v60 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v43 + 200LL) != 0) {
          v48 = 128;
        }
        else {
          v48 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v43 + v48);
      }
      if ((v55_.v55 & 1) != 0 && v55_.v57 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v43 + 200LL) != 0) {
          v49 = 128;
        }
        else {
          v49 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v43 + v49);
      }
      if ((v74_.v86 & 1) != 0 && v74_.v88 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v43 + 200LL) != 0) {
          v50 = 128;
        }
        else {
          v50 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v43 + v50);
      }
      if ((v74_.v83 & 1) != 0 && v74_.v85 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v43 + 200LL) != 0) {
          v51 = 128;
        }
        else {
          v51 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v43 + v51);
      }
      if ((v74_.v80 & 1) != 0 && v74_.v82 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v43 + 200LL) != 0) {
          v52 = 128;
        }
        else {
          v52 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v43 + v52);
      }
      if ((v74_.v77 & 1) != 0 && v74_.v79 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v43 + 200LL) != 0) {
          v53 = 128;
        }
        else {
          v53 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v43 + v53);
      }
      if ((v74_.v74 & 1) != 0 && v74_.v76 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v43 + 200LL) != 0) {
          v54 = 128;
        }
        else {
          v54 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v43 + v54);
      }
      v41 += 8;
    } while (v41 != v42);
  }
}

void GlobalMapData_e25980(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
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
  char v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  _QWORD* v54;
  _QWORD* v55;
  __int64 v56;
  int v57;
  __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  bool v61;
  __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  char* v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  long double v73;
  unsigned __int64 v74;
  bool v75;
  __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  _QWORD* v84;
  _QWORD* v85;
  __int64* v86;
  float* v87;
  float v88;
  __int64 v89;
  _QWORD* v90;
  __int64 v91;
  __int64 v92;
  _QWORD* v93;
  _QWORD* v94;
  unsigned __int64 v95;
  __int64 v96;
  _QWORD* v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  _QWORD* v101;
  _QWORD* v102;
  unsigned __int64 v103;
  __int64 v104;
  _QWORD* v105;
  unsigned __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  _QWORD* v109;
  __int64 v110;
  __int64 v111;
  unsigned __int64 v112;
  int v113;
  _QWORD* v114;
  __int64* v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  _QWORD* v121;
  int v122;
  char v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;

  v1 = (_QWORD*)a1[25];
  v2 = a1 + 26;
  if (v1 != a1 + 26) {
    v127 = (__int64)(a1 + 26);
    v114 = a1 + 4;
    v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v5 = *v4;
      v6 = v1 + 4;
      LODWORD(v116) = 0;
      v122 = 0;
      v117 = 0;
      v121 = v114;
      v7 = fw_memory_HeapManager_Allocate(v5, 4608, 16, 0);
      v118 = v7;
      v119 = v7;
      v124 = 0;
      v125 = 0;
      v126 = 0;
      v120 = v7 + 4608;
      if (&v124 != v1 + 4) {
        if ((*(_BYTE*)v6 & 1) != 0) {
          v7 = GameRoutine_64df20(&v124, v1[6], v1[5]);
        }
        else {
          v8 = *v6;
          v9 = v1[6];
          v125 = v1[5];
          v126 = v9;
          v124 = v8;
        }
      }
      v11 = a1[29];
      v10 = a1[30];
      if (v11 >= v10) {
        v21 = a1[28];
        v22 = v11 - v21;
        v23 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v11 - v21) >> 4) + 1;
        if (v23 > 0x333333333333333LL) {
          GameRoutine_e29570(v7);
        }
        v24 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v10 - v21) >> 4);
        if (2 * v24 > v23) {
          v23 = 2 * v24;
        }
        if (v24 >= 0x199999999999999LL) {
          v25 = 0x333333333333333LL;
        }
        else {
          v25 = v23;
        }
        v112 = v25;
        if (v25 != 0) {
          if (v25 > 0x333333333333333LL) {
            GameRoutine_60a210(v7);
          }
          v7 = fw_memory_HeapManager_Allocate(*v4, 80 * v25, 16, 0);
        }
        else {
          v7 = 0;
        }
        v27 = v116;
        v28 = v117;
        v29 = v7 + v22;
        v110 = v7;
        *(_QWORD*)(v29 + 16) = 0;
        *(_QWORD*)(v29 + 24) = 0;
        *(_QWORD*)(v29 + 32) = 0;
        *(_QWORD*)v29 = v27;
        *(_QWORD*)(v29 + 8) = v28;
        v30 = v118;
        v31 = v119 - v118;
        if (v119 != v118) {
          if (0x8E38E38E38E38E39LL * (v31 >> 3) > 0x38E38E38E38E38ELL) {
          LABEL_180:
            GameRoutine_d716e0(v7);
          }
          v32 = fw_memory_HeapManager_Allocate(*v4, v119 - v118, 16, 0);
          v33 = v32 + v31;
          *(_QWORD*)(v29 + 16) = v32;
          *(_QWORD*)(v29 + 32) = v32 + v31;
          memcpy(v32, v30, v31);
          *(_QWORD*)(v29 + 24) = v33;
        }
        *(_QWORD*)(v29 + 40) = v121;
        *(_DWORD*)(v29 + 48) = v122;
        if ((v124 & 1) != 0) {
          fw_text_String_CopyTerminated(v29 + 56, v126, v125);
        }
        else {
          v34 = v125;
          *(_QWORD*)(v29 + 56) = v124;
          *(_QWORD*)(v29 + 64) = v34;
          *(_QWORD*)(v29 + 72) = v126;
        }
        v36 = a1[28];
        v35 = (__int64*)a1[29];
        v37 = v29 + v36 - (_QWORD)v35;
        if (v35 != (__int64*)v36) {
          v38 = (__int64*)a1[28];
          v39 = v29 + v36 - (_QWORD)v35;
          do {
            v40 = *v38;
            v41 = v38[1];
            *(_QWORD*)(v39 + 16) = 0;
            *(_QWORD*)(v39 + 24) = 0;
            *(_QWORD*)(v39 + 32) = 0;
            *(_QWORD*)v39 = v40;
            *(_QWORD*)(v39 + 8) = v41;
            *(_QWORD*)(v39 + 16) = v38[2];
            *(_QWORD*)(v39 + 24) = v38[3];
            *(_QWORD*)(v39 + 32) = v38[4];
            v38[3] = 0;
            v38[4] = 0;
            v38[2] = 0;
            v42 = v38[5];
            *(_DWORD*)(v39 + 48) = *((_DWORD*)v38 + 12);
            *(_QWORD*)(v39 + 40) = v42;
            v43 = v38[7];
            v44 = v38[9];
            *(_QWORD*)(v39 + 64) = v38[8];
            *(_QWORD*)(v39 + 72) = v44;
            *(_QWORD*)(v39 + 56) = v43;
            v38[8] = 0;
            v38[9] = 0;
            v38[7] = 0;
            v38 += 10;
            v39 += 80;
          } while (v38 != v35);
          do {
            if ((*(_BYTE*)(v36 + 56) & 1) != 0) {
              v45 = *(_QWORD*)(v36 + 72);
              if (v45 != 0) {
                if (*(_QWORD*)(*v4 + 200LL) != 0) {
                  v46 = 128;
                }
                else {
                  v46 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*v4 + v46, v45);
              }
            }
            v47 = *(_QWORD*)(v36 + 16);
            if (v47 != 0) {
              *(_QWORD*)(v36 + 24) = v47;
              if (*(_QWORD*)(*v4 + 200LL) != 0) {
                v48 = 128;
              }
              else {
                v48 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v4 + v48, v47);
            }
            v36 += 80;
          } while ((__int64*)v36 != v35);
          v36 = a1[28];
        }
        v26 = v29 + 80;
        a1[28] = v37;
        a1[29] = v29 + 80;
        a1[30] = v110 + 80 * v112;
        if (v36 != 0) {
          if (*(_QWORD*)(*v4 + 200LL) != 0) {
            v49 = 128;
          }
          else {
            v49 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v4 + v49, v36);
        }
      }
      else {
        v12 = v116;
        v13 = v117;
        *(_QWORD*)(v11 + 16) = 0;
        *(_QWORD*)(v11 + 24) = 0;
        *(_QWORD*)(v11 + 32) = 0;
        *(_QWORD*)v11 = v12;
        *(_QWORD*)(v11 + 8) = v13;
        v14 = v118;
        v15 = v119 - v118;
        if (v119 != v118) {
          if (0x8E38E38E38E38E39LL * (v15 >> 3) > 0x38E38E38E38E38ELL) {
            goto LABEL_180;
          }
          v16 = fw_memory_HeapManager_Allocate(*v4, v119 - v118, 16, 0);
          v17 = v16 + v15;
          *(_QWORD*)(v11 + 16) = v16;
          *(_QWORD*)(v11 + 24) = v16;
          *(_QWORD*)(v11 + 32) = v16 + v15;
          memcpy(v16, v14, v15);
          *(_QWORD*)(v11 + 24) = v17;
        }
        v18 = v121;
        *(_DWORD*)(v11 + 48) = v122;
        *(_QWORD*)(v11 + 40) = v18;
        if ((v124 & 1) != 0) {
          fw_text_String_CopyTerminated(v11 + 56, v126, v125);
        }
        else {
          v19 = v124;
          v20 = v126;
          *(_QWORD*)(v11 + 64) = v125;
          *(_QWORD*)(v11 + 72) = v20;
          *(_QWORD*)(v11 + 56) = v19;
        }
        v26 = v11 + 80;
      }
      v50 = v124;
      a1[29] = v26;
      if ((v50 & 1) != 0 && v126 != 0) {
        if (*(_QWORD*)(*v4 + 200LL) != 0) {
          v51 = 128;
        }
        else {
          v51 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v4 + v51, v126);
      }
      if (v118 != 0) {
        v52 = *v4;
        v119 = v118;
        if (*(_QWORD*)(v52 + 200) != 0) {
          v53 = 128;
        }
        else {
          v53 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(v52 + v53, v118);
      }
      v54 = (_QWORD*)v1[1];
      if (v54 != nullptr) {
        do {
          v55 = v54;
          v54 = (_QWORD*)*v54;
        } while (v54 != nullptr);
      }
      else {
        do {
          v55 = (_QWORD*)v1[2];
          v61 = v1 == (_QWORD*)*v55;
          v1 = v55;
        } while (!v61);
      }
      v1 = v55;
    } while (v55 != (_QWORD*)v127);
    v1 = (_QWORD*)a1[25];
    v2 = (_QWORD*)v127;
  }
  if (v1 != v2) {
    do {
      v60 = *((unsigned __int8*)v1 + 32);
      v61 = (v60 & 1) == 0;
      v62 = a1[28];
      v63 = a1[29];
      v64 = v60 >> 1;
      if (v61) {
        v65 = (char*)v1 + 33;
      }
      else {
        v65 = (char*)v1[6];
      }
      if (v61) {
        v66 = v64;
      }
      else {
        v66 = v1[5];
      }
      if (v62 != v63) {
        while (1) {
          v67 = *(unsigned __int8*)(v62 + 56);
          v68 = *(_QWORD*)(v62 + 64);
          if ((v67 & 1) == 0) {
            v68 = v67 >> 1;
          }
          if (v66 == v68) {
            v69 = (v67 & 1) != 0 ? *(_QWORD*)(v62 + 72) : v62 + 57;
            if ((unsigned int)memcmp(v65, v69, v66) == 0) {
              break;
            }
          }
          v62 += 80;
          if (v62 == v63) {
            v62 = 0;
            break;
          }
        }
      }
      v70 = v1[7];
      v71 = v1[8];
      while (v70 != v71) {
        if (*(_BYTE*)(v70 + 288) == 1) {
          v74 = *(unsigned __int8*)(v70 + 144);
          v75 = (v74 & 1) == 0;
          v76 = a1[28];
          v77 = a1[29];
          v78 = v74 >> 1;
          if (v75) {
            v79 = v70 + 145;
          }
          else {
            v79 = *(_QWORD*)(v70 + 160);
          }
          if (v75) {
            v80 = v78;
          }
          else {
            v80 = *(_QWORD*)(v70 + 152);
          }
          if (v76 != v77) {
            while (1) {
              v81 = *(unsigned __int8*)(v76 + 56);
              v82 = *(_QWORD*)(v76 + 64);
              if ((v81 & 1) == 0) {
                v82 = v81 >> 1;
              }
              if (v80 == v82) {
                v83 = (v81 & 1) != 0 ? *(_QWORD*)(v76 + 72) : v76 + 57;
                if ((unsigned int)memcmp(v79, v83, v80) == 0) {
                  break;
                }
              }
              v76 += 80;
              if (v76 == v77) {
                v72 = 0;
                goto LABEL_98;
              }
            }
          }
          if (v76 == v77) {
            v72 = 0;
          }
          else {
            v72 = v76;
          }
        LABEL_98:
          *(__n128*)&v73 = nn_os_LockMutex(a1 + 10);
          LOBYTE(v117) = 0;
          BYTE4(v117) = 0;
          LOBYTE(v118) = 0;
          BYTE4(v118) = 0;
          LOBYTE(v119) = 0;
          BYTE4(v119) = 0;
          LOBYTE(v120) = 0;
          BYTE4(v120) = 0;
          LOBYTE(v121) = 0;
          BYTE4(v121) = 0;
          LOBYTE(v122) = 0;
          v123 = 0;
          LOBYTE(v124) = 0;
          BYTE4(v124) = 0;
          LOBYTE(v125) = 0;
          BYTE4(v125) = 0;
          v116 = v72;
          GameRoutine_d70e70(v62 + 16, &v116, v73);
          nn_os_UnlockMutex(a1 + 10);
        }
        v70 += 296;
      }
      v84 = (_QWORD*)v1[1];
      if (v84 != nullptr) {
        do {
          v85 = v84;
          v84 = (_QWORD*)*v84;
        } while (v84 != nullptr);
      }
      else {
        do {
          v85 = (_QWORD*)v1[2];
          v61 = v1 == (_QWORD*)*v85;
          v1 = v85;
        } while (!v61);
      }
      v1 = v85;
    } while (v85 != v2);
  }
  v56 = a1[28];
  v111 = a1[29];
  if (v56 != v111) {
    v57 = (unsigned __int8)GameData_2216260;
    v58 = 48;
    v113 = (unsigned __int8)GameData_2216260;
    if (GameData_2216260 == 0) {
      v58 = 0;
    }
    v59 = GameData_2216258 + v58;
    v127 = GameData_2216258 + 16;
    do {
      v87 = *(float**)(v56 + 16);
      v86 = *(__int64**)(v56 + 24);
      if (v87 != (float*)v86) {
        v115 = *(__int64**)(v56 + 24);
        do {
          v88 = 1.0;
          if (v57 != 0) {
            v89 = *(_QWORD*)v87;
            v90 = (_QWORD*)v127;
            v91 = *(_QWORD*)v87 + 57LL;
            if ((*(_BYTE*)(v56 + 56) & 1) != 0) {
              v92 = *(_QWORD*)(v56 + 64);
            }
            else {
              v92 = *(_BYTE*)(v56 + 56) >> 1;
            }
            if ((*(_BYTE*)(v56 + 56) & 1) != 0) {
              while (1) {
                v94 = v90 - 2;
                v95 = *((unsigned __int8*)v90 - 16);
                v96 = (v95 & 1) != 0 ? *(v90 - 1) : v95 >> 1;
                if (v92 == v96) {
                  v97 = (v95 & 1) != 0 ? (_QWORD*)*v90
                                       : (_QWORD*)((char*)v90 - 15);
                  if ((unsigned int)memcmp(*(_QWORD*)(v56 + 72), v97, v92) ==
                      0) {
                    break;
                  }
                }
                v98 = *(unsigned __int8*)(v89 + 56);
                v99 = *(_QWORD*)(v89 + 64);
                if ((v98 & 1) == 0) {
                  v99 = v98 >> 1;
                }
                if (v99 == v96) {
                  v100 = (v98 & 1) != 0 ? *(_QWORD*)(v89 + 72) : v91;
                  v101 = (v95 & 1) != 0 ? (_QWORD*)*v90
                                        : (_QWORD*)((char*)v90 - 15);
                  if ((unsigned int)memcmp(v100, v101, v96) == 0) {
                    break;
                  }
                }
                v90 += 3;
                if (v94 + 3 == (_QWORD*)v59) {
                  goto LABEL_131;
                }
              }
            }
            else {
              v93 = (_QWORD*)v127;
              while (1) {
                v102 = v93 - 2;
                v103 = *((unsigned __int8*)v93 - 16);
                v104 = (v103 & 1) != 0 ? *(v93 - 1) : v103 >> 1;
                if (v92 == v104) {
                  v105 = (v103 & 1) != 0 ? (_QWORD*)*v93
                                         : (_QWORD*)((char*)v93 - 15);
                  if ((unsigned int)memcmp(v56 + 57, v105, v92) == 0) {
                    break;
                  }
                }
                v106 = *(unsigned __int8*)(v89 + 56);
                v107 = *(_QWORD*)(v89 + 64);
                if ((v106 & 1) == 0) {
                  v107 = v106 >> 1;
                }
                if (v107 == v104) {
                  v108 = (v106 & 1) != 0 ? *(_QWORD*)(v89 + 72) : v91;
                  v109 = (v103 & 1) != 0 ? (_QWORD*)*v93
                                         : (_QWORD*)((char*)v93 - 15);
                  if ((unsigned int)memcmp(v108, v109, v104) == 0) {
                    break;
                  }
                }
                v93 += 3;
                if (v102 + 3 == (_QWORD*)v59) {
                  goto LABEL_131;
                }
              }
            }
            v88 = 5.0;
          LABEL_131:
            v57 = v113;
            v86 = v115;
          }
          v87[2] = v88;
          *((_BYTE*)v87 + 12) = 1;
          v87 += 18;
        } while (v87 != (float*)v86);
      }
      v56 += 80;
    } while (v56 != v111);
  }
}

void GlobalMapData_e262e0()
{
  __int64 v0;
  __int64 v1;
  const char* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  char* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  bool v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  int v19;
  int v20;
  bool v21;
  __int64 v22;
  unsigned __int64 v23;
  bool v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  char* v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  char* v46;
  __int64 v47;
  struct {
    __int64 v48;
    unsigned __int64 v49;
    char* v50;
  } v48_;

  v0 = *(_QWORD*)(*(_QWORD*)GameData_212dc68 + 112LL);
  v1 = *GameData_212ef18[0];
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 64LL) & 1) != 0) {
    v2 = *(const char**)(*(_QWORD*)GameData_212dbb8[0] + 80LL);
  }
  else {
    v2 = (const char*)(*(_QWORD*)GameData_212dbb8[0] + 65LL);
  }
  v3 = strlen_alt1(v2);
  if (v3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v4 = v3;
  if (v3 >= 0x17) {
    if ((v3 | 7) == 0x17) {
      v6 = 26;
    }
    else {
      v6 = (v3 | 7) + 1;
    }
    v5 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v6, 16, 0);
    v48_.v49 = v4;
    v48_.v50 = v5;
    v48_.v48 = v6 | 1;
    goto LABEL_12;
  }
  LOBYTE(v48_.v48) = 2 * v3;
  v5 = (char*)&v48_.v48 + 1;
  if (v3 != 0) {
  LABEL_12:
    memmove_alt1((__int64)v5, (__int64)v2, v4);
  }
  v5[v4] = 0;
  v7 = v1 + 208;
  v8 = *(_QWORD*)(v1 + 208);
  if (v8 != 0) {
    v9 = v1 + 208;
    v10 = v48_.v48 & 1;
    v47 = v1;
    if (v10 != 0) {
      v11 = v48_.v50;
    }
    else {
      v11 = (char*)&v48_.v48 + 1;
    }
    if ((v48_.v48 & 1) != 0) {
      v12 = v48_.v49;
    }
    else {
      v12 = (unsigned __int64)(unsigned __int8)v48_.v48 >> 1;
    }
    do {
      v13 = *(unsigned __int8*)(v8 + 32);
      v14 = (v13 & 1) == 0;
      v15 = v13 >> 1;
      if (v14) {
        v16 = v15;
      }
      else {
        v16 = *(_QWORD*)(v8 + 40);
      }
      if (v14) {
        v17 = v8 + 33;
      }
      else {
        v17 = *(_QWORD*)(v8 + 48);
      }
      if (v12 >= v16) {
        v18 = v16;
      }
      else {
        v18 = v12;
      }
      v19 = memcmp_alt2(v17, (__int64)v11, v18);
      if (v16 < v12) {
        v20 = -1;
      }
      else {
        v20 = 1;
      }
      if (v16 == v12) {
        v20 = 0;
      }
      if (v19 != 0) {
        v20 = v19;
      }
      v21 = v20 < 0;
      if (v20 >= 0) {
        v22 = 0;
      }
      else {
        v22 = 8;
      }
      if (!v21) {
        v9 = v8;
      }
      v8 = *(_QWORD*)(v8 + v22);
    } while (v8 != 0);
    if (v9 == v7) {
      v1 = v47;
      v30 = v7;
      if (v10 == 0) {
        goto LABEL_70;
      }
    }
    else {
      v23 = *(unsigned __int8*)(v9 + 32);
      v24 = (v23 & 1) == 0;
      v25 = v23 >> 1;
      if (v24) {
        v26 = v25;
      }
      else {
        v26 = *(_QWORD*)(v9 + 40);
      }
      if (v24) {
        v27 = v9 + 33;
      }
      else {
        v27 = *(_QWORD*)(v9 + 48);
      }
      if (v26 >= v12) {
        v28 = v12;
      }
      else {
        v28 = v26;
      }
      v29 = memcmp_alt2((__int64)v11, v27, v28);
      v1 = v47;
      if (v29 != 0) {
        if (v29 >= 0) {
          v30 = v9;
        }
        else {
          v30 = v7;
        }
        if (v10 == 0) {
          goto LABEL_70;
        }
      }
      else {
        if (v12 >= v26) {
          v30 = v9;
        }
        else {
          v30 = v7;
        }
        if (v10 == 0) {
          goto LABEL_70;
        }
      }
    }
  }
  else {
    v30 = v1 + 208;
    if ((v48_.v48 & 1) == 0) {
      goto LABEL_70;
    }
  }
  if (v48_.v50 != nullptr) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, (__int64)v48_.v50);
  }
LABEL_70:
  v32 = (_QWORD*)(v1 + 8);
  if (v7 != v30) {
    v32 = (_QWORD*)(v30 + 56);
  }
  v33 = v32[1];
  if (*v32 != v33) {
    v34 = *v32 + 216LL;
    v35 = (unsigned __int8)GameData_21676f8[0];
    v36 = GameData_2167700;
    do {
      v38 = v34 - 216;
      v37 = *(unsigned __int8*)(v34 - 216);
      if ((v37 & 1) != 0) {
        v39 = *(_QWORD*)(v34 - 208);
      }
      else {
        v39 = v37 >> 1;
      }
      if ((v35 & 1) != 0) {
        v40 = v36;
      }
      else {
        v40 = v35 >> 1;
      }
      if (v39 != v40 ||
          ((v37 & 1) != 0 ? (v41 = *(_QWORD*)(v34 - 200)) : (v41 = v34 - 215),
           (v35 & 1) != 0 ? (v42 = (char*)GameData_2167708)
                          : (v42 = &GameData_21676f8[1]),
           memcmp_alt2(v41, (__int64)v42, v39) != 0)) {
        v43 = *(unsigned __int8*)(v34 - 72);
        v44 = *(_QWORD*)(v34 - 64);
        if ((v43 & 1) == 0) {
          v44 = v43 >> 1;
        }
        if (v44 != v40 ||
            ((v43 & 1) != 0 ? (v45 = *(_QWORD*)(v34 - 56)) : (v45 = v34 - 71),
             (v35 & 1) != 0 ? (v46 = (char*)GameData_2167708)
                            : (v46 = &GameData_21676f8[1]),
             memcmp_alt2(v45, (__int64)v46, v40) != 0)) {
          GameRoutine_d838e0_alt1(v0, (unsigned __int8*)(v34 - 192), v34 - 72,
                                  v34, v34 - 120);
          v35 = (unsigned __int8)GameData_21676f8[0];
          v36 = GameData_2167700;
        }
      }
      v34 += 296;
    } while (v38 + 296 != v33);
  }
}

__n128 game_hub_GlobalMapData_SetupAreaChangeHashPoints(__int64 a1)
{
  _QWORD* v1;
  char* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __n128 result;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  bool v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v49;
  struct {
    _QWORD v50[4];
    _QWORD* v51;
  } v50_;
  struct {
    __int64 v52;
    __int64* v53;
    unsigned __int64 v54;
  } v52_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v1 = *(_QWORD**)(a1 + 200);
  v52_.v53 = nullptr;
  v52_.v54 = 0;
  v52_.v52 = 0;
  v49 = (_QWORD*)(a1 + 208);
  if (v1 != (_QWORD*)(a1 + 208)) {
    v2 = nullptr;
    do {
      v4 = v1[7];
      v3 = v1[8];
      while (v4 != v3) {
        if (*(_BYTE*)(v4 + 128) == 1) {
          if ((unsigned __int64)v2 >= v52_.v54) {
            v5 = v52_.v52;
            v6 = &v2[-v52_.v52];
            v7 = (__int64)&v2[-v52_.v52] >> 3;
            v8 = v7 + 1;
            if ((unsigned __int64)(v7 + 1) >> 61 != 0) {
              goto LABEL_90;
            }
            v9 = v52_.v54 - v52_.v52;
            if ((__int64)(v52_.v54 - v52_.v52) >> 2 > v8) {
              v8 = v9 >> 2;
            }
            if ((unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFF8LL) {
              v10 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v10 = v8;
            }
            if (v10 != 0) {
              if (v10 >> 61 != 0) {
                goto LABEL_91;
              }
              v11 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v10, 16, 0),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            else {
              v11 = 0;
            }
            v12 = v11 + 8 * v10;
            v13 = (__int64)&v6[v11 + -8 * v7];
            *(_QWORD*)&v6[v11] = *(_QWORD*)(v4 + 120);
            v2 = &v6[v11 + 8];
            memcpy(v13, v5, v6),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
            v52_.v52 = v13;
            v52_.v54 = v12;
            if (v5 != 0) {
              v15 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v15 = 56;
              }
              result = nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
            }
          }
          else {
            *(_QWORD*)v2 = *(_QWORD*)(v4 + 120);
            v2 += 8;
          }
          v52_.v53 = (__int64*)v2;
        }
        if (*(_BYTE*)(v4 + 272) == 1) {
          if ((unsigned __int64)v2 < v52_.v54) {
            *(_QWORD*)v2 = *(_QWORD*)(v4 + 264);
            v2 += 8;
          }
          else {
            v16 = v52_.v52;
            v17 = &v2[-v52_.v52];
            v18 = (__int64)&v2[-v52_.v52] >> 3;
            v19 = v18 + 1;
            if ((unsigned __int64)(v18 + 1) >> 61 != 0) {
            LABEL_90:
              GameRoutine_65c760_alt1(),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            v20 = v52_.v54 - v52_.v52;
            if ((__int64)(v52_.v54 - v52_.v52) >> 2 > v19) {
              v19 = v20 >> 2;
            }
            if ((unsigned __int64)v20 >= 0x7FFFFFFFFFFFFFF8LL) {
              v21 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v21 = v19;
            }
            if (v21 != 0) {
              if (v21 >> 61 != 0) {
              LABEL_91:
                GameRoutine_60a210_alt1(),
                    result = COERCE_AS(__typeof__(result),
                                       PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
              v22 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v21, 16, 0),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            else {
              v22 = 0;
            }
            v23 = v22 + 8 * v21;
            v24 = (__int64)&v17[v22 + -8 * v18];
            *(_QWORD*)&v17[v22] = *(_QWORD*)(v4 + 264);
            v2 = &v17[v22 + 8];
            memcpy(v24, v16, v17),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
            v52_.v52 = v24;
            v52_.v54 = v23;
            if (v16 != 0) {
              v25 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v25 = 56;
              }
              result = nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
            }
          }
          v52_.v53 = (__int64*)v2;
        }
        v4 += 296;
      }
      v26 = (_QWORD*)v1[1];
      if (v26 != nullptr) {
        do {
          v27 = v26;
          v26 = (_QWORD*)*v26;
        } while (v26 != nullptr);
      }
      else {
        do {
          v27 = (_QWORD*)v1[2];
          v28 = v1 == (_QWORD*)*v27;
          v1 = v27;
        } while (!v28);
      }
      v1 = v27;
    } while (v27 != v49);
  }
  v29 = v50_.v50;
  v50_.v50[0] = GameData_1fe3880;
  v50_.v50[1] = &v52_.v52;
  v50_.v51 = v50_.v50;
  v30 = *(_QWORD**)(*(_QWORD*)GameData_212dc68 + 152LL);
  v31 = *(_QWORD*)GameData_212dc68 + 160LL;
  if (v30 == (_QWORD*)v31) {
  LABEL_67:
    v38 = a1;
    v39 = 32;
  LABEL_68:
    (*(void (**)(__int64))(*v29 + v39))((__int64)v29),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    goto LABEL_69;
  }
  do {
    v32 = v30[7];
    v33 = v30[8];
    if (v32 != v33) {
      while (v50_.v51 != nullptr) {
        (*(void (**)(_QWORD*, __int64))(*v50_.v51 + 48LL))(v50_.v51, v32),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        v32 += 16;
        if (v32 == v33) {
          goto LABEL_55;
        }
      }
    LABEL_89:
      GameRoutine_60a310(),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  LABEL_55:
    v34 = v30[10];
    v35 = v30[11];
    if (v34 != v35) {
      while (v50_.v51 != nullptr) {
        (*(void (**)(_QWORD*, __int64))(*v50_.v51 + 48LL))(v50_.v51, v34),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        v34 += 16;
        if (v34 == v35) {
          goto LABEL_58;
        }
      }
      goto LABEL_89;
    }
  LABEL_58:
    v36 = (_QWORD*)v30[1];
    if (v36 != nullptr) {
      do {
        v37 = v36;
        v36 = (_QWORD*)*v36;
      } while (v36 != nullptr);
    }
    else {
      do {
        v37 = (_QWORD*)v30[2];
        v28 = v30 == (_QWORD*)*v37;
        v30 = v37;
      } while (!v28);
    }
    v30 = v37;
  } while (v37 != (_QWORD*)v31);
  v29 = v50_.v51;
  if (v50_.v51 == v50_.v50) {
    goto LABEL_67;
  }
  v38 = a1;
  if (v50_.v51 != nullptr) {
    v39 = 40;
    goto LABEL_68;
  }
LABEL_69:
  v40 = v52_.v52;
  v41 = (__int64)v52_.v53;
  if ((__int64*)v52_.v52 != v52_.v53) {
    v42 = (__int64*)(v52_.v52 + 8);
    while (v42 != v52_.v53) {
      v44 = *(v42 - 1);
      v43 = *v42++;
      if (v44 == v43) {
        v45 = v42 - 2;
        if (v42 != v52_.v53) {
          do {
            v46 = v44;
            v44 = *v42;
            if (v46 != *v42) {
              v45[1] = v44;
              ++v45;
            }
            ++v42;
          } while (v42 != (__int64*)v41);
          v41 = (__int64)v52_.v53;
        }
        if (v45 + 1 != (__int64*)v41) {
          v41 = (__int64)(v45 + 1);
          v52_.v53 = v45 + 1;
        }
        break;
      }
    }
  }
  if ((__int64*)(v38 + 176) != &v52_.v52) {
    GameRoutine_d5ffa0((char**)(v38 + 176), v40, v41, (v41 - v40) >> 3),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v40 = v52_.v52;
  }
  if (v40 != 0) {
    v52_.v53 = (__int64*)v40;
    v47 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v47 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v47);
  }
  return result;
}

__int64

game_hub_GlobalMapData_SetupAreaChangeHashPoints_lambda0_Invoke(__int64 result,
                                                                __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;

  v2 = *a2;
  v3 = a2[1];
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  if ((*(_BYTE*)(v2 + 1760) & 4) != 0) {
    v4 = *(__int64**)(result + 8);
    v5 = *(_QWORD*)(v2 + 176);
    v7 = (_QWORD*)v4[1];
    v6 = v4[2];
    if ((unsigned __int64)v7 >= v6) {
      v9 = *v4;
      v10 = (__int64)v7 - *v4;
      v11 = (v10 >> 3) + 1;
      if (v11 >> 61 != 0) {
        GameRoutine_65c760(result);
      }
      v12 = v6 - v9;
      v13 = fw_memory_g_heap_manager_ptr;
      if (v12 >> 2 > v11) {
        v11 = v12 >> 2;
      }
      if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
        v14 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v14 = v11;
      }
      if (v14 != 0) {
        if (v14 >> 61 != 0) {
          GameRoutine_60a210(result);
        }
        v15 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
      }
      else {
        v15 = 0;
      }
      v16 = v15 + 8 * v14;
      v17 = v15 + v10 - 8 * (v10 >> 3);
      *(_QWORD*)(v15 + v10) = v5;
      v8 = v15 + v10 + 8;
      result = memcpy(v17, v9, v10);
      *v4 = v17;
      v4[1] = v8;
      v4[2] = v16;
      if (v9 != 0) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
          v18 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v18);
      }
    }
    else {
      *v7 = v5;
      v8 = (__int64)(v7 + 1);
    }
    v4[1] = v8;
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

#pragma GCC visibility pop
