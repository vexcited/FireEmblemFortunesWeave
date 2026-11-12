#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_1aabf6c;
extern _UNKNOWN GameData_1abf89f;
extern _UNKNOWN GameData_1ad653b;
extern unsigned __int8 GameData_1c2540c[9];
extern _UNKNOWN* GameData_1f9caf8;
extern __int64 (*GameData_21230b0[])();
extern __int64 (*GameData_2123548[])();
extern __int64 (*GameData_2123618[])();
extern __int64 GameData_212bf68;
extern _UNKNOWN* GameData_212c730;
extern __int64* GameData_212d6a8;
extern __int64 GameData_21caab0;
extern _UNKNOWN GameData_21f8620;
__int64 GameRoutine_16dcd30(_QWORD, _QWORD, _QWORD, _QWORD);
bool GameRoutine_19e22c0(__int64, char);
__int64* GameRoutine_19e2a20(unsigned __int8);
__int64 GameRoutine_19e2c00(_QWORD);
void __attribute__((noreturn)) GameRoutine_19e5e50(void);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_6e5a20(_QWORD);
__int64 GameRoutine_717660(_QWORD);
__int64 GameRoutine_890160(_QWORD);
__int64* EventMemoryMenu_19e2a20(unsigned __int8);
__int64 TimelineFile_890160(const char*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 memcpy(__int64, __int64, unsigned __int64);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_6e5a20_alt1() __asm__("GameRoutine_6e5a20");
void nn_mem_StandardAllocator_Free(__int64, __int64);
void GameHr_19e2c00(__int64 a1);

__int64 GameHr_19e25c0(__int64 a1, char a2)
{
  __int64 v3;
  char v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 i;
  __int64 v14;
  unsigned __int8 v15;
  unsigned __int8* v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int8* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v30;
  __int64 v31;

  v3 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1632, 16, 0);
  v4 = a2 & 1;
  v30 = 0;
  v31 = 0;
  v5 = GameRoutine_16dcd30(v3, "EventMemoryMenu", &v30, 0);
  v6 = GameData_212d6a8;
  v7 = v31;
  *(_QWORD*)v3 = GameData_212d6a8 + 2;
  *(_QWORD*)(v3 + 176) = v6 + 143;
  *(_QWORD*)(v3 + 1056) = v6 + 169;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    v5 = GameRoutine_1a09c50(v7);
  }
  *(_BYTE*)(v3 + 1064) = v4;
  *(_BYTE*)(v3 + 1065) = 0;
  *(_QWORD*)v3 = GameData_21230b0;
  *(_DWORD*)(v3 + 1080) = 0;
  *(_QWORD*)(v3 + 1088) = 0;
  *(_QWORD*)(v3 + 1072) = 0xFFFFFFFFLL;
  *(_QWORD*)(v3 + 1096) = 0;
  *(_QWORD*)(v3 + 1104) = 0;
  *(_QWORD*)(v3 + 1152) = 0;
  *(_QWORD*)(v3 + 1168) = 0;
  *(_QWORD*)(v3 + 1176) = 0;
  *(_BYTE*)(v3 + 1184) = 0;
  *(_QWORD*)(v3 + 1200) = 0xFFFFFFFFLL;
  *(_DWORD*)(v3 + 1208) = 0;
  *(_QWORD*)(v3 + 1232) = 0;
  *(_QWORD*)(v3 + 1224) = 0;
  *(_QWORD*)(v3 + 1216) = 0;
  *(_QWORD*)(v3 + 1280) = 0;
  *(_QWORD*)(v3 + 1296) = 0;
  *(_QWORD*)(v3 + 1056) = GameData_2123618;
  *(_QWORD*)(v3 + 176) = GameData_2123548;
  *(_QWORD*)(v3 + 1304) = 0;
  *(_BYTE*)(v3 + 1312) = 0;
  *(_QWORD*)(v3 + 1328) = 0;
  *(_QWORD*)(v3 + 1336) = 0;
  *(_QWORD*)(v3 + 1344) = 0;
  *(_QWORD*)(v3 + 1352) = 0;
  *(_QWORD*)(v3 + 1360) = 0;
  *(_QWORD*)(v3 + 1368) = 0;
  *(_DWORD*)(v3 + 1376) = 0;
  *(_DWORD*)(v3 + 1112) = 2;
  *(_DWORD*)(v3 + 1240) = 2;
  *(_DWORD*)(v3 + 1432) = 2;
  *(_QWORD*)(v3 + 1392) = 0xFFFFFFFFLL;
  *(_DWORD*)(v3 + 1400) = 0;
  *(_QWORD*)(v3 + 1424) = 0;
  *(_QWORD*)(v3 + 1416) = 0;
  *(_QWORD*)(v3 + 1408) = 0;
  *(_QWORD*)(v3 + 1472) = 0;
  *(_BYTE*)(v3 + 1504) = 0;
  *(_QWORD*)(v3 + 1488) = 0;
  *(_QWORD*)(v3 + 1496) = 0;
  *(_BYTE*)(v3 + 1520) = 0;
  *(_QWORD*)(v3 + 1560) = 0;
  *(_QWORD*)(v3 + 1568) = 0;
  *(_QWORD*)(v3 + 1576) = 0;
  *(_QWORD*)(v3 + 1584) = 0;
  *(_QWORD*)(v3 + 1592) = 0;
  *(_QWORD*)(v3 + 1600) = 0;
  *(_QWORD*)(v3 + 1608) = 0;
  *(_QWORD*)(v3 + 1616) = 0;
  *(_QWORD*)(v3 + 1550) = 0;
  *(_QWORD*)(v3 + 1544) = 0;
  *(_QWORD*)(v3 + 1536) = 0;
  *(_QWORD*)(v3 + 1528) = 0;
  GameRoutine_717660(v5);
  v8 = *(_QWORD*)(v3 + 1528);
  if ((unsigned __int64)(*(_QWORD*)(v3 + 1544) - v8) <= 0xEFF) {
    v9 = *(_QWORD*)(v3 + 1536) - v8;
    v10 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 3840, 16, 0);
    GameRoutine_1a0b950(v10, v8, v9);
    *(_QWORD*)(v3 + 1528) = v10;
    *(_QWORD*)(v3 + 1536) = v10 + v9;
    *(_QWORD*)(v3 + 1544) = v10 + 3840;
    if (v8 != 0) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v11 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v11);
    }
  }
  v12 = (__int64*)(v3 + 1328);
  for (i = 0; i != 9; ++i) {
    v15 = GameData_1c2540c[i];
    if ((unsigned __int8)(v15 - 5) >= 4u &&
        GameRoutine_19e22c0(GameData_1c2540c[i], *(_BYTE*)(v3 + 1064))) {
      v16 = *(unsigned __int8**)(v3 + 1336);
      v17 = *(_QWORD*)(v3 + 1344);
      if ((unsigned __int64)v16 < v17) {
        *v16 = v15;
        v14 = (__int64)(v16 + 1);
      }
      else {
        v18 = *v12;
        v19 = &v16[-*v12];
        v20 = (unsigned __int64)(v19 + 1);
        if ((__int64)(v19 + 1) < 0) {
          GameRoutine_19e5e50();
        }
        v21 = v17 - v18;
        if (2 * v21 > v20) {
          v20 = 2 * v21;
        }
        if (v21 >= 0x3FFFFFFFFFFFFFFFLL) {
          v22 = 0x7FFFFFFFFFFFFFFFLL;
        }
        else {
          v22 = v20;
        }
        if (v22 != 0) {
          v23 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v22, 16, 0);
        }
        else {
          v23 = 0;
        }
        v19[v23] = v15;
        v14 = (__int64)&v19[v23 + 1];
        GameRoutine_1a0b950(v23, v18, v19);
        *(_QWORD*)(v3 + 1328) = v23;
        *(_QWORD*)(v3 + 1336) = v14;
        *(_QWORD*)(v3 + 1344) = v23 + v22;
        if (v18 != 0) {
          v24 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v24 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v24);
        }
      }
      *(_QWORD*)(v3 + 1336) = v14;
    }
  }
  *(_DWORD*)(v3 + 1072) = ~*(_DWORD*)(v3 + 1328) + *(_DWORD*)(v3 + 1336);
  *(_QWORD*)(v3 + 1076) = 0;
  GameRoutine_19e2c00(v3);
  GameRoutine_657850(v3, GameData_212c730, "EventMemoryMenu", 1, a1);
  v26 = *(_QWORD**)(v3 + 256);
  v25 = *(_QWORD**)(v3 + 264);
  *(_QWORD*)(v3 + 336) = 0;
  while (v26 != v25) {
    if (*v26 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v26 + 8LL))(*v26);
      v25 = *(_QWORD**)(v3 + 264);
    }
    ++v26;
  }
  v27 = *(_QWORD*)(v3 + 344);
  if (v27 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 8LL))(v27);
    *(_QWORD*)(v3 + 344) = 0;
  }
  *(_QWORD*)(v3 + 264) = *(_QWORD*)(v3 + 256);
  *(_QWORD*)(v3 + 240) = *(_QWORD*)(v3 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v3 + 1024LL))(v3);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1032LL))(v3);
}

void GameHr_19e2c00(__int64 a1)
{
  int v1;
  __int64 v2;
  int v4;
  int v5;
  __int64* v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;
  const char* v20;
  unsigned int v21;
  __int64 v22;
  unsigned int v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _DWORD* v35;
  _DWORD* v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  bool v40;
  int v41;
  __int64 v42;
  _DWORD* v43;
  unsigned __int64 v44;
  __int64* v45;

  v1 = *(_DWORD*)(a1 + 1076);
  v2 = *(_QWORD*)(a1 + 1088);
  if (v1 < (unsigned __int64)((*(_QWORD*)(a1 + 1096) - v2) >> 2)) {
    v1 = *(_DWORD*)(v2 + 4LL * v1);
  }
  v4 = ~*(_DWORD*)(a1 + 1328) + *(_DWORD*)(a1 + 1336);
  if (v4 >= v1) {
    v4 = v1;
  }
  if (v1 >= 0) {
    v5 = v4;
  }
  else {
    v5 = 0;
  }
  v6 = EventMemoryMenu_19e2a20(*(_BYTE*)(*(_QWORD*)(a1 + 1328) + v5));
  v7 = *(_QWORD*)(a1 + 1352);
  v8 = *(_BYTE*)(a1 + 1064) == 0;
  v9 = 3;
  *(_QWORD*)(a1 + 1360) = v7;
  if (v8) {
    v9 = 0;
  }
  v10 = &v6[v9];
  v45 = &v6[v9];
  v11 = v6[v9];
  if (v10[1] == v11) {
    v34 = 0;
    v35 = nullptr;
    v44 = 0;
    if (v7 == 0) {
      goto LABEL_54;
    }
    goto LABEL_51;
  }
  v42 = 0;
  v12 = 0;
  v43 = nullptr;
  v44 = 0;
  do {
    v13 = (char*)&GameData_21f8620 + 24 * *(unsigned __int8*)(v11 + 24 * v12);
    v14 = *(__int64**)v13;
    v15 = *((__int64**)v13 + 1);
    while (v14 != v15) {
      v16 = *v14;
      if (*v14 != 0) {
        v17 = *(_QWORD*)(v16 + 96);
        v18 = *(_QWORD*)(v16 + 104);
        if (v17 != v18) {
          v19 = 0;
          do {
            LOBYTE(v21) = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v22 = game_GameVariableTable_Find(
                  *(_QWORD**)(game_GameModeData_instance_ + 48),
                  (unsigned __int64*)(*(_QWORD*)v17 + 16LL));
              if (v22 != 0) {
                v23 = *(_DWORD*)(v22 + 32);
                v21 = v23 / 0x21B7900 -
                      11 * ((390451573 * (unsigned __int64)(v23 / 0x21B7900)) >>
                            32);
                if (v21 != 0) {
                  v24 = (v23 / 0x86DE40uLL) & 3;
                  if ((int)v24 > 1) {
                    if ((_DWORD)v24 == 3) {
                      v20 = (const char*)&GameData_1aabf6c;
                    }
                    else {
                      v20 = (const char*)&GameData_1ad653b;
                    }
                  }
                  else {
                    v20 = (const char*)&GameData_1abf89f;
                    if ((_DWORD)v24 != 0) {
                      v20 = (const char*)*(&GameData_1f9caf8 + v21);
                    }
                  }
                  TimelineFile_890160(v20);
                  LOBYTE(v21) = 1;
                }
              }
              else {
                LOBYTE(v21) = 0;
              }
            }
            v17 += 8;
            v19 |= v21;
          } while (v17 != v18);
          if ((v19 & 1) != 0) {
            if ((unsigned __int64)v43 >= v44) {
              v25 = (unsigned __int64)v43 - v42;
              v26 = ((__int64)v43 - v42) >> 2;
              v27 = v26 + 1;
              if ((unsigned __int64)(v26 + 1) >> 62 != 0) {
                GameRoutine_6e5a20_alt1();
              }
              v28 = v44 - v42;
              if ((__int64)(v44 - v42) >> 1 > v27) {
                v27 = v28 >> 1;
              }
              if ((unsigned __int64)v28 >= 0x7FFFFFFFFFFFFFFCLL) {
                v29 = 0x3FFFFFFFFFFFFFFFLL;
              }
              else {
                v29 = v27;
              }
              if (v29 != 0) {
                if (v29 >> 62 != 0) {
                  GameRoutine_60a210_alt1();
                }
                v30 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v29, 16, 0);
              }
              else {
                v30 = 0;
              }
              v31 = v30 + 4 * v29;
              v32 = v30 + v25 - 4 * v26;
              *(_DWORD*)(v30 + v25) = v12;
              v44 = v31;
              v43 = (_DWORD*)(v30 + v25 + 4);
              memcpy(v32, v42, v25);
              if (v42 != 0) {
                v33 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v33 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v42);
              }
              v42 = v32;
            }
            else {
              *v43++ = v12;
            }
            break;
          }
        }
      }
      ++v14;
    }
    ++v12;
    v11 = *v45;
  } while (0xAAAAAAAAAAAAAAABLL * ((v45[1] - *v45) >> 3) > v12);
  v34 = v42;
  v35 = v43;
  v7 = *(_QWORD*)(a1 + 1352);
  if (v7 != 0) {
  LABEL_51:
    *(_QWORD*)(a1 + 1360) = v7;
    v36 = v35;
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v37,
                                  v7);
    v35 = v36;
  }
LABEL_54:
  *(_QWORD*)(a1 + 1360) = v35;
  *(_QWORD*)(a1 + 1352) = v34;
  v38 = ((__int64)v35 - v34) >> 2;
  *(_QWORD*)(a1 + 1368) = v44;
  v39 = *(int*)(a1 + 1376);
  v40 = v38 > v39;
  v41 = v38 - 1;
  if (!v40) {
    LODWORD(v39) = 0;
  }
  *(_DWORD*)(a1 + 1200) = v41;
  *(_DWORD*)(a1 + 1204) = v39;
  *(_DWORD*)(a1 + 1208) = v39;
}

#pragma GCC visibility pop
