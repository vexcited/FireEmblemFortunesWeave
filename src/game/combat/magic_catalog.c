#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_111ed70(_QWORD);
__int64 GameRoutine_111f3e0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_2008160[])();
extern __int64 (*game_combat_MagicCatalog_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ff98[9];
extern int GameData_2235740;
__int64 game_combat_MagicCatalog_MagicCatalog(__int64 a1);
__int64 MagicCatalog_109c060_alt1(_QWORD) __asm__("MagicCatalog_109c060");
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 MagicCatalog_109bf60_alt1(__int64 result,
                                  __int64 a2) __asm__("MagicCatalog_109bf60");
__int64 MagicCatalog_109c060(__int64 result, long double a2);
void MagicCatalog_109c060_alt2(__int64*) __asm__("MagicCatalog_109c060");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MagicCatalog_109bf60(__int64 a1, __int64 a2);
__int64 GameRoutine_111ef70(__int64, const char*, ...);
__int64 GameRoutine_111f040(__int64, const char*, int*, unsigned int);
__int64 GameRoutine_111f130(__int64, const char*, int*, unsigned int);
__int64 GameRoutine_65f9a0(_QWORD*, unsigned int*, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_6616e0(float*, unsigned int*);
const char* GameRoutine_111f310(__int64, const char*, __int64, char*);
const char* game_HashString32(const char* result);
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) GameRoutine_60a210();
void game_109b6a0(__int64, __int64*);
void game_combat_MagicCatalog_MagicCatalog_lambda0_Invoke(__int64 a1,
                                                          __int64 a2);

__int64 game_combat_MagicCatalog_MagicCatalog(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  _QWORD v8[4];
  _QWORD* v9;
  _QWORD v10[4];
  _QWORD* v11;

  if (*GameData_212ff98[0] == 0) {
    *GameData_212ff98[0] = a1;
    GameData_2235740 = 1;
  }
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_DWORD*)(a1 + 32) = 0;
  *(_QWORD*)a1 = game_combat_MagicCatalog_vtable;
  *(_QWORD*)(a1 + 8) = 0;
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      12, 16, 0);
  *(_QWORD*)v3 = 0;
  *(_QWORD*)(a1 + 40) = v3;
  *(_WORD*)(v3 + 8) = 1;
  v4 = fw_memory_HeapManager_Allocate(*v2, 80, 16, 0);
  *(_QWORD*)(v4 + 48) = 0;
  *(_WORD*)(v4 + 64) = 1;
  *(_QWORD*)(a1 + 48) = v4;
  *(_QWORD*)v4 = "GameData/Combat/CombatMagic.bprop";
  *(_QWORD*)(v4 + 8) = 0;
  v9 = v8;
  v11 = v10;
  v8[0] = GameData_2008160;
  v8[1] = a1;
  v10[0] = GameData_2008160;
  v10[1] = a1;
  GameRoutine_111f3e0(v10, v4 + 16);
  if (v11 == v10) {
    v5 = 32;
  }
  else {
    if (v11 == nullptr) {
      goto LABEL_8;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v11 + v5))((__int64)v11);
LABEL_8:
  GameRoutine_111ed70(v4);
  result = (__int64)v9;
  if (v9 == v8) {
    v7 = 32;
  }
  else {
    if (v9 == nullptr) {
      return result;
    }
    v7 = 40;
  }
  return (*(__int64 (**)(__int64))(*v9 + v7))((__int64)v9);
}

void MagicCatalog_109bf60(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v2 = *(_QWORD*)(a1 + 8);
  if (a2 != v2) {
    v5 = fw_memory_g_heap_manager_ptr;
    do {
      v6 = v2;
      MagicCatalog_109c060_alt2((__int64*)(v2 - 120));
      if ((*(_BYTE*)(v2 - 160) & 1) != 0) {
        v7 = *(_QWORD*)(v2 - 144);
        if (v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v8, v7);
        }
      }
      if ((*(_BYTE*)(v2 - 184) & 1) != 0) {
        v9 = *(_QWORD*)(v2 - 168);
        if (v9 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v10, v9);
        }
      }
      v2 -= 216;
      if ((*(_BYTE*)(v6 - 216) & 1) != 0) {
        v11 = *(_QWORD*)(v6 - 200);
        if (v11 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v12, v11);
        }
      }
    } while (v2 != a2);
  }
  *(_QWORD*)(a1 + 8) = a2;
}

__int64 MagicCatalog_109c060(__int64 result, long double a2)
{
  __int64 v2;
  __int64* v3;
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
  __int64 v20;
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
  __int64 v32;
  __int64 v33;

  v2 = *(_QWORD*)(result + 96);
  v3 = (__int64*)result;
  v4 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v5 = *(_QWORD*)(result + 104);
    if (v2 == v5) {
      goto LABEL_18;
    }
    do {
      if ((*(_BYTE*)(v5 - 32) & 1) != 0 && *(_QWORD*)(v5 - 16) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6,
                                               *(_QWORD*)(v5 - 16));
      }
      if ((*(_BYTE*)(v5 - 56) & 1) != 0 && *(_QWORD*)(v5 - 40) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7,
                                               *(_QWORD*)(v5 - 40));
      }
      v5 -= 64;
    } while (v5 != v2);
    v8 = v3[12];
    v3[13] = v2;
    if (v8 != 0) {
    LABEL_18:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v9 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9, v3[12]);
    }
  }
  v10 = v3[9];
  if (v10 != 0) {
    v11 = v3[10];
    if (v10 == v11) {
      goto LABEL_38;
    }
    do {
      if ((*(_BYTE*)(v11 - 32) & 1) != 0 && *(_QWORD*)(v11 - 16) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v12,
                                               *(_QWORD*)(v11 - 16));
      }
      if ((*(_BYTE*)(v11 - 56) & 1) != 0 && *(_QWORD*)(v11 - 40) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v13,
                                               *(_QWORD*)(v11 - 40));
      }
      v11 -= 64;
    } while (v11 != v10);
    v14 = v3[9];
    v3[10] = v10;
    if (v14 != 0) {
    LABEL_38:
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v15 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v15, v3[9]);
    }
  }
  v16 = v3[6];
  if (v16 != 0) {
    v17 = v3[7];
    if (v16 == v17) {
      goto LABEL_58;
    }
    do {
      if ((*(_BYTE*)(v17 - 32) & 1) != 0 && *(_QWORD*)(v17 - 16) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v18 = 128;
        }
        else {
          v18 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v18,
                                               *(_QWORD*)(v17 - 16));
      }
      if ((*(_BYTE*)(v17 - 56) & 1) != 0 && *(_QWORD*)(v17 - 40) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v19 = 128;
        }
        else {
          v19 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v19,
                                               *(_QWORD*)(v17 - 40));
      }
      v17 -= 64;
    } while (v17 != v16);
    v20 = v3[6];
    v3[7] = v16;
    if (v20 != 0) {
    LABEL_58:
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v21 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v21, v3[6]);
    }
  }
  v22 = v3[3];
  if (v22 != 0) {
    v23 = v3[4];
    if (v22 == v23) {
      goto LABEL_78;
    }
    do {
      if ((*(_BYTE*)(v23 - 32) & 1) != 0 && *(_QWORD*)(v23 - 16) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v24 = 128;
        }
        else {
          v24 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v24,
                                               *(_QWORD*)(v23 - 16));
      }
      if ((*(_BYTE*)(v23 - 56) & 1) != 0 && *(_QWORD*)(v23 - 40) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v25 = 128;
        }
        else {
          v25 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v25,
                                               *(_QWORD*)(v23 - 40));
      }
      v23 -= 64;
    } while (v23 != v22);
    v26 = v3[3];
    v3[4] = v22;
    if (v26 != 0) {
    LABEL_78:
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v27 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v27, v3[3]);
    }
  }
  v28 = *v3;
  if (*v3 != 0) {
    v29 = v3[1];
    if (v28 == v29) {
      goto LABEL_98;
    }
    do {
      if ((*(_BYTE*)(v29 - 32) & 1) != 0 && *(_QWORD*)(v29 - 16) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v30 = 128;
        }
        else {
          v30 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v30,
                                               *(_QWORD*)(v29 - 16));
      }
      if ((*(_BYTE*)(v29 - 56) & 1) != 0 && *(_QWORD*)(v29 - 40) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v31 = 128;
        }
        else {
          v31 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v31,
                                               *(_QWORD*)(v29 - 40));
      }
      v29 -= 64;
    } while (v29 != v28);
    v32 = *v3;
    v3[1] = v28;
    if (v32 != 0) {
    LABEL_98:
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v33 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v33, *v3);
    }
  }
  return result;
}

void game_combat_MagicCatalog_MagicCatalog_lambda0_Invoke(__int64 a1,
                                                          __int64 a2)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  _QWORD* v4;
  unsigned __int16 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64* v21;
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
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned int v37;
  float* v38;
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
  unsigned __int8* v49;
  unsigned __int8* v50;
  int v51;
  unsigned __int8* v52;
  int v53;
  int v54;
  int v55;
  __int64 v56;
  __int64* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  _QWORD* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  int v75;
  struct {
    unsigned __int64 v76;
    __int64 v77;
    __int64 v78;
  } v76_;

  v2 = *(_QWORD**)(a1 + 8);
  if (*(_BYTE*)(a2 + 64) == 1) {
    v4 = *(_QWORD**)(a2 + 8);
    LODWORD(v76_.v76) = (unsigned int)game_HashString32("Item");
    v5 = GameRoutine_65f9a0(v4, (unsigned int*)&v76_.v76, 0);
    v6 = v2[1];
    v7 = v2[2];
    v8 = v5;
    v9 = v7 - v6;
    v10 = 0x84BDA12F684BDA13LL * ((v7 - v6) >> 3);
    v11 = v5 - v10;
    if (v5 <= v10) {
      if (v5 < v10) {
        MagicCatalog_109bf60((__int64)(v2 + 1), v6 + 216LL * v5);
      }
    }
    else {
      v12 = v2[3];
      if (0x84BDA12F684BDA13LL * ((v12 - v7) >> 3) >= v11) {
        v66 = (_QWORD*)(v7 + 84);
        v67 = 216LL * (unsigned int)v11;
        v74 = v7 + v67;
        do {
          v68 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
          *(_QWORD*)((char*)v66 - 68) = v68;
          v67 -= 216;
          *(_QWORD*)((char*)v66 - 84) = 41;
          *(_QWORD*)((char*)v66 - 76) = 37;
          *(_QWORD*)(v68 + 16) = 0x81E39181E398BBE4LL;
          *(_QWORD*)(v68 + 24) = 0xE3A081E38F81E3A6LL;
          strcpy((char*)(v68 + 29), "\x81\xA0さい");
          *(_QWORD*)v68 = 0xE55F8FA6E8B096E6LL;
          *(_QWORD*)(v68 + 8) = 0x9282E38D89E58D90LL;
          *((_DWORD*)v66 - 15) = 0;
          *(_QWORD*)((char*)v66 - 52) = 0;
          *(_QWORD*)((char*)v66 - 44) = 0;
          *(_QWORD*)((char*)v66 - 36) = 0;
          *(_QWORD*)((char*)v66 - 28) = 0;
          *(_QWORD*)((char*)v66 - 20) = 0;
          *(_QWORD*)((char*)v66 - 12) = 0;
          *((_WORD*)v66 - 2) = 0;
          *v66 = 0x5000000001LL;
          *(_QWORD*)((char*)v66 + 12) = 0;
          *(_QWORD*)((char*)v66 + 20) = 0;
          *(_QWORD*)((char*)v66 + 28) = 0;
          *(_QWORD*)((char*)v66 + 36) = 0;
          *(_QWORD*)((char*)v66 + 44) = 0;
          *(_QWORD*)((char*)v66 + 52) = 0;
          *(_QWORD*)((char*)v66 + 60) = 0;
          *(_QWORD*)((char*)v66 + 68) = 0;
          *(_QWORD*)((char*)v66 + 76) = 0;
          *(_QWORD*)((char*)v66 + 84) = 0;
          *(_QWORD*)((char*)v66 + 92) = 0;
          *(_QWORD*)((char*)v66 + 100) = 0;
          *(_QWORD*)((char*)v66 + 108) = 0;
          *(_QWORD*)((char*)v66 + 116) = 0;
          *(_QWORD*)((char*)v66 + 124) = 0;
          v66 += 27;
        } while (v67 != 0);
        v2[2] = v74;
      }
      else {
        v13 = 0x84BDA12F684BDA13LL * ((v12 - v6) >> 3);
        if (2 * v13 > v5) {
          v8 = 2 * v13;
        }
        if (v13 >= 0x97B425ED097B42LL) {
          v8 = 0x12F684BDA12F684LL;
        }
        if (v8 > 0x12F684BDA12F684LL) {
          GameRoutine_60a210();
        }
        v72 = v8;
        v14 = 216LL * (unsigned int)v11;
        v70 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                  216 * v8, 16, 0);
        v71 = v70 + v9;
        v73 = v70 + v9 + v14;
        v15 = (_QWORD*)(v9 + v70 + 84);
        do {
          v16 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
          *(_QWORD*)((char*)v15 - 68) = v16;
          *((_DWORD*)v15 - 15) = 0;
          v14 -= 216;
          *(_QWORD*)((char*)v15 - 52) = 0;
          *(_QWORD*)((char*)v15 - 44) = 0;
          *(_QWORD*)((char*)v15 - 36) = 0;
          *(_QWORD*)((char*)v15 - 28) = 0;
          *(_QWORD*)((char*)v15 - 20) = 0;
          *(_QWORD*)((char*)v15 - 12) = 0;
          *((_WORD*)v15 - 2) = 0;
          *v15 = 0x5000000001LL;
          *(_QWORD*)((char*)v15 - 84) = 41;
          *(_QWORD*)((char*)v15 + 12) = 0;
          *(_QWORD*)((char*)v15 + 20) = 0;
          *(_QWORD*)((char*)v15 + 28) = 0;
          *(_QWORD*)((char*)v15 + 36) = 0;
          *(_QWORD*)((char*)v15 + 44) = 0;
          *(_QWORD*)((char*)v15 + 52) = 0;
          *(_QWORD*)((char*)v15 + 60) = 0;
          *(_QWORD*)((char*)v15 + 68) = 0;
          *(_QWORD*)((char*)v15 + 76) = 0;
          *(_QWORD*)((char*)v15 + 84) = 0;
          *(_QWORD*)((char*)v15 - 76) = 37;
          *(_QWORD*)((char*)v15 + 92) = 0;
          *(_QWORD*)((char*)v15 + 100) = 0;
          *(_QWORD*)((char*)v15 + 108) = 0;
          *(_QWORD*)((char*)v15 + 116) = 0;
          *(_QWORD*)((char*)v15 + 124) = 0;
          v15 += 27;
          *(_QWORD*)(v16 + 16) = 0x81E39181E398BBE4LL;
          *(_QWORD*)(v16 + 24) = 0xE3A081E38F81E3A6LL;
          strcpy((char*)(v16 + 29), "\x81\xA0さい");
          *(_QWORD*)v16 = 0xE55F8FA6E8B096E6LL;
          *(_QWORD*)(v16 + 8) = 0x9282E38D89E58D90LL;
        } while (v14 != 0);
        v17 = fw_memory_g_heap_manager_ptr;
        v18 = v2[1];
        v19 = (__int64*)v2[2];
        v20 = v71 + v18 - (_QWORD)v19;
        if (v19 != (__int64*)v18) {
          v21 = (__int64*)v2[1];
          v22 = v71 + v18 - (_QWORD)v19;
          do {
            v23 = *v21;
            v24 = v21[2];
            *(_QWORD*)(v22 + 8) = v21[1];
            *(_QWORD*)(v22 + 16) = v24;
            *(_QWORD*)v22 = v23;
            v21[1] = 0;
            v21[2] = 0;
            *v21 = 0;
            *(_DWORD*)(v22 + 24) = *((_DWORD*)v21 + 6);
            v25 = v21[4];
            v26 = v21[6];
            *(_QWORD*)(v22 + 40) = v21[5];
            *(_QWORD*)(v22 + 48) = v26;
            *(_QWORD*)(v22 + 32) = v25;
            v21[5] = 0;
            v21[6] = 0;
            v21[4] = 0;
            v27 = v21[7];
            v28 = v21[9];
            *(_QWORD*)(v22 + 64) = v21[8];
            *(_QWORD*)(v22 + 72) = v28;
            *(_QWORD*)(v22 + 56) = v27;
            v21[8] = 0;
            v21[9] = 0;
            v21[7] = 0;
            *(_WORD*)(v22 + 80) = *((_WORD*)v21 + 40);
            *(_QWORD*)(v22 + 84) = *(__int64*)((char*)v21 + 84);
            *(_QWORD*)(v22 + 96) = v21[12];
            *(_QWORD*)(v22 + 104) = v21[13];
            *(_QWORD*)(v22 + 112) = v21[14];
            v21[13] = 0;
            v21[14] = 0;
            v21[12] = 0;
            *(_QWORD*)(v22 + 120) = v21[15];
            *(_QWORD*)(v22 + 128) = v21[16];
            *(_QWORD*)(v22 + 136) = v21[17];
            v21[16] = 0;
            v21[17] = 0;
            v21[15] = 0;
            *(_QWORD*)(v22 + 144) = v21[18];
            *(_QWORD*)(v22 + 152) = v21[19];
            *(_QWORD*)(v22 + 160) = v21[20];
            v21[19] = 0;
            v21[20] = 0;
            v21[18] = 0;
            *(_QWORD*)(v22 + 168) = v21[21];
            *(_QWORD*)(v22 + 176) = v21[22];
            *(_QWORD*)(v22 + 184) = v21[23];
            v21[22] = 0;
            v21[23] = 0;
            v21[21] = 0;
            *(_QWORD*)(v22 + 192) = v21[24];
            *(_QWORD*)(v22 + 200) = v21[25];
            *(_QWORD*)(v22 + 208) = v21[26];
            v21[25] = 0;
            v21[26] = 0;
            v21[24] = 0;
            v21 += 27;
            v22 += 216;
          } while (v21 != v19);
          do {
            MagicCatalog_109c060_alt2((__int64*)(v18 + 96));
            if ((*(_BYTE*)(v18 + 56) & 1) != 0) {
              v29 = *(_QWORD*)(v18 + 72);
              if (v29 != 0) {
                if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
                  v30 = 128;
                }
                else {
                  v30 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v17 + v30, v29);
              }
            }
            if ((*(_BYTE*)(v18 + 32) & 1) != 0) {
              v31 = *(_QWORD*)(v18 + 48);
              if (v31 != 0) {
                if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
                  v32 = 128;
                }
                else {
                  v32 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v17 + v32, v31);
              }
            }
            if ((*(_BYTE*)v18 & 1) != 0) {
              v33 = *(_QWORD*)(v18 + 16);
              if (v33 != 0) {
                if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
                  v34 = 128;
                }
                else {
                  v34 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v17 + v34, v33);
              }
            }
            v18 += 216;
          } while ((__int64*)v18 != v19);
          v18 = v2[1];
        }
        v2[3] = v70 + 216 * v72;
        v2[1] = v20;
        v2[2] = v73;
        if (v18 != 0) {
          v69 = 128;
          if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) == 0) {
            v69 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v17 + v69, v18);
        }
      }
    }
  }
  else {
    v35 = *(_QWORD*)(a2 + 8);
    v36 = 0x84BDA12F684BDA13LL * ((__int64)(v2[2] - v2[1]) >> 3);
    v37 = (unsigned int)game_HashString32("Item");
    v38 = *(float**)(v35 + 120);
    v76_.v76 = __PAIR64__(*(_DWORD*)(v35 + 20), v37);
    game_6616e0(v38, (unsigned int*)&v76_.v76);
    v39 = *(int*)(v35 + 20);
    *(_DWORD*)(v35 + 20) = v39 + 1;
    *(_BYTE*)(*(_QWORD*)(v35 + 8) + v39) = v36;
    v40 = *(int*)(v35 + 20);
    *(_DWORD*)(v35 + 20) = v40 + 1;
    *(_BYTE*)(*(_QWORD*)(v35 + 8) + v40) = BYTE1(v36);
  }
  if (v2[2] != v2[1]) {
    v41 = 0;
    while (1) {
      GameRoutine_111ef70(a2, "%s[%d]", "Item", v41);
      v44 = v2[1];
      v76_.v77 = 0;
      v76_.v78 = 0;
      v76_.v76 = 0;
      v45 = v44 + 216 * v41;
      GameRoutine_111f310(a2, "Name", v45, (char*)&v76_.v76);
      if ((v76_.v76 & 1) != 0 && v76_.v78 != 0) {
        v46 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v46 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v76_.v78);
      }
      v76_.v77 = 0;
      v76_.v78 = 0;
      v76_.v76 = 0;
      GameRoutine_111f310(a2, "LaunchBoneName", v45 + 32, (char*)&v76_.v76);
      if ((v76_.v76 & 1) != 0 && v76_.v78 != 0) {
        v47 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v47 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v47, v76_.v78);
      }
      v76_.v77 = 0;
      v76_.v78 = 0;
      v76_.v76 = 0;
      GameRoutine_111f310(a2, "TargetBoneName", v45 + 56, (char*)&v76_.v76);
      if ((v76_.v76 & 1) != 0 && v76_.v78 != 0) {
        v48 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v48 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, v76_.v78);
      }
      LODWORD(v76_.v76) = *(_DWORD*)(v45 + 84);
      GameRoutine_111f130(a2, "Trajectory", (int*)&v76_.v76, 0);
      *(_DWORD*)(v45 + 84) = v76_.v76;
      GameRoutine_111f130(a2, "Speed", (int*)(v45 + 88), 0);
      v75 = *(unsigned __int16*)(v45 + 80);
      GameRoutine_111f040(a2, "Flags", &v75, 0);
      if ((*(_BYTE*)(a2 + 64) & 1) == 0) {
        break;
      }
      v49 = *(unsigned __int8**)(v45 + 16);
      *(_WORD*)(v45 + 80) = v75;
      if ((*(_BYTE*)v45 & 1) != 0) {
        v50 = v49;
      }
      else {
        v50 = (unsigned __int8*)(v45 + 1);
      }
      v53 = *v50;
      v52 = v50 + 1;
      v51 = v53;
      if (v53 != 0) {
        v54 = 0;
        do {
          v54 = v51 - v54 + 32 * v54;
          v55 = *v52++;
          v51 = v55;
        } while (v55 != 0);
      }
      else {
        v54 = 0;
      }
      *(_DWORD*)(v45 + 24) = v54;
      v57 = (__int64*)(v45 + 96);
      v56 = *(_QWORD*)(a2 + 8);
      if (*(_BYTE*)(a2 + 64) != 1) {
        goto LABEL_72;
      }
      LODWORD(v76_.v76) = (unsigned int)game_HashString32("Start");
      (*(void (**)(__int64, unsigned __int64*))(*(_QWORD*)v56 + 16LL))(
          v56, &v76_.v76);
    LABEL_73:
      game_109b6a0(a2, v57);
      if (*(_BYTE*)(a2 + 64) != 0) {
        v58 = 24;
      }
      else {
        v58 = 8;
      }
      (*(void (**)(void*))(**(_QWORD**)(a2 + 8) + v58))(
          (void*)*(_QWORD**)(a2 + 8));
      v59 = *(_QWORD*)(a2 + 8);
      if (*(_BYTE*)(a2 + 64) == 1) {
        LODWORD(v76_.v76) = (unsigned int)game_HashString32("Chant");
        (*(void (**)(__int64, unsigned __int64*))(*(_QWORD*)v59 + 16LL))(
            v59, &v76_.v76);
      }
      else {
        LODWORD(v76_.v76) = (unsigned int)game_HashString32("Chant");
        (**(void (***)(__int64, unsigned __int64*))v59)(v59, &v76_.v76);
      }
      game_109b6a0(a2, (__int64*)(v45 + 120));
      if (*(_BYTE*)(a2 + 64) != 0) {
        v60 = 24;
      }
      else {
        v60 = 8;
      }
      (*(void (**)(void*))(**(_QWORD**)(a2 + 8) + v60))(
          (void*)*(_QWORD**)(a2 + 8));
      v61 = *(_QWORD*)(a2 + 8);
      if (*(_BYTE*)(a2 + 64) == 1) {
        LODWORD(v76_.v76) = (unsigned int)game_HashString32("Shoot");
        (*(void (**)(__int64, unsigned __int64*))(*(_QWORD*)v61 + 16LL))(
            v61, &v76_.v76);
      }
      else {
        LODWORD(v76_.v76) = (unsigned int)game_HashString32("Shoot");
        (**(void (***)(__int64, unsigned __int64*))v61)(v61, &v76_.v76);
      }
      game_109b6a0(a2, (__int64*)(v45 + 144));
      if (*(_BYTE*)(a2 + 64) != 0) {
        v62 = 24;
      }
      else {
        v62 = 8;
      }
      (*(void (**)(void*))(**(_QWORD**)(a2 + 8) + v62))(
          (void*)*(_QWORD**)(a2 + 8));
      v63 = *(_QWORD*)(a2 + 8);
      if (*(_BYTE*)(a2 + 64) == 1) {
        LODWORD(v76_.v76) = (unsigned int)game_HashString32("Hit");
        (*(void (**)(__int64, unsigned __int64*))(*(_QWORD*)v63 + 16LL))(
            v63, &v76_.v76);
      }
      else {
        LODWORD(v76_.v76) = (unsigned int)game_HashString32("Hit");
        (**(void (***)(__int64, unsigned __int64*))v63)(v63, &v76_.v76);
      }
      game_109b6a0(a2, (__int64*)(v45 + 168));
      if (*(_BYTE*)(a2 + 64) != 0) {
        v64 = 24;
      }
      else {
        v64 = 8;
      }
      (*(void (**)(void*))(**(_QWORD**)(a2 + 8) + v64))(
          (void*)*(_QWORD**)(a2 + 8));
      v65 = *(_QWORD*)(a2 + 8);
      if (*(_BYTE*)(a2 + 64) == 1) {
        LODWORD(v76_.v76) = (unsigned int)game_HashString32("Away");
        (*(void (**)(__int64, unsigned __int64*))(*(_QWORD*)v65 + 16LL))(
            v65, &v76_.v76);
      }
      else {
        LODWORD(v76_.v76) = (unsigned int)game_HashString32("Away");
        (**(void (***)(__int64, unsigned __int64*))v65)(v65, &v76_.v76);
      }
      game_109b6a0(a2, (__int64*)(v45 + 192));
      if (*(_BYTE*)(a2 + 64) != 0) {
        v42 = 24;
      }
      else {
        v42 = 8;
      }
      (*(void (**)(void*))(**(_QWORD**)(a2 + 8) + v42))(
          (void*)*(_QWORD**)(a2 + 8));
      if (*(_BYTE*)(a2 + 64) != 0) {
        v43 = 24;
      }
      else {
        v43 = 8;
      }
      (*(void (**)(void*))(**(_QWORD**)(a2 + 8) + v43))(
          (void*)*(_QWORD**)(a2 + 8));
      if (0x84BDA12F684BDA13LL * ((__int64)(v2[2] - v2[1]) >> 3) <= ++v41) {
        return;
      }
    }
    v56 = *(_QWORD*)(a2 + 8);
    v57 = (__int64*)(v45 + 96);
  LABEL_72:
    LODWORD(v76_.v76) = (unsigned int)game_HashString32("Start");
    (**(void (***)(__int64, unsigned __int64*))v56)(v56, &v76_.v76);
    goto LABEL_73;
  }
}

#pragma GCC visibility pop
