#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_1a98ad7;
extern _UNKNOWN GameData_1aa50eb;
extern __int64 (*GameData_1fd0c08[])();
extern _UNKNOWN* GameData_20090d0;
extern __int64 (*GameData_20097b8)();
extern __int64 GameData_212bf68;
extern __int64 GameData_212c6a0[3];
extern __int64* GameData_212d468[5];
extern int* GameData_212d4d0;
extern _UNKNOWN* GameData_212d4d8;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dbc0[8];
extern int* GameData_212deb0;
extern _UNKNOWN* GameData_212deb8;
extern int* GameData_212df08;
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN* GameData_212df28;
extern int* GameData_212ea00;
extern _UNKNOWN* GameData_212ea08;
extern int* GameData_212ec80;
extern _UNKNOWN* GameData_212ec88;
extern _UNKNOWN GameData_2167580;
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c9c48;
extern __int64 GameData_21caab0;
extern __int64 GameData_21ee260;
extern int GameData_2235620;
extern _UNKNOWN GameData_2235628;
extern int GameData_22356a0;
extern _UNKNOWN GameData_22356a8;
extern int GameData_22356b0;
extern _UNKNOWN GameData_22356b8;
extern __int64 GameData_2235e30;
void __attribute__((noreturn)) GameRoutine_1050cb0(void);
void __attribute__((noreturn)) GameRoutine_1063f60(_QWORD);
__int64 GameRoutine_107add0(_QWORD, _QWORD);
_QWORD* GameRoutine_1083bf0(_QWORD* result);
__int64 GameRoutine_1084a50(__int64, _BYTE*);
__int64 GameRoutine_108cfd0(int);
__int64 GameRoutine_1090b20(__int64, __int64);
bool GameRoutine_109ec70(__int64, __int64);
void __attribute__((noreturn)) GameRoutine_10b4ed0(void);
__int64 GameRoutine_10ba5c0(__int64 result, float*);
__int64 GameRoutine_10bc1a0(__int64);
void __attribute__((noreturn)) GameRoutine_10d6ee0(void);
__int64 GameRoutine_10d7a40(__int64, __int64*);
void __attribute__((noreturn)) GameRoutine_10d7f20(void);
void __attribute__((noreturn)) GameRoutine_10da100(void);
__int64 GameRoutine_10de5e0(__int64*, __int64);
void __attribute__((noreturn)) GameRoutine_10e34d0(void);
__int64 GameRoutine_1a09b70(_QWORD);
__int64 GameRoutine_1a09b80(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09fd0(_QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a060(_QWORD, _QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, long double);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_610540(_QWORD, _QWORD);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
__int64 GameRoutine_6d7b80(void);
__int64 GameRoutine_716d80(_QWORD, _QWORD);
__int64 GameRoutine_7a86e0(_QWORD);
__int64 GameRoutine_80f710(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_80fb70(void);
__int64 GameRoutine_810000(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_811270(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_8f2260(void);
__int64 GameRoutine_8f23a0(_QWORD);
__int64 GameRoutine_8f24c0(_QWORD, _QWORD);
__int64 GameRoutine_98f140(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_98f290(_QWORD);
__int64 GameRoutine_a292c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a5a360(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a7c000(_QWORD, _QWORD);
__int64 GameRoutine_a8c0c0(_QWORD);
__int64 GameRoutine_bd3bc0(_QWORD, _QWORD);
__int64 GameRoutine_bd6740(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_bf25c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c34a20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d28880(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_d48080(void);
_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");
_WORD* GameRoutine_6d7b80_alt1(__int64) __asm__("GameRoutine_6d7b80");
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_bf25c0_alt1(__int64, __int64, _QWORD*, __int64,
                                char) __asm__("GameRoutine_bf25c0");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_HashString(__int64 result);
__int64 game_character_107add0(__int64, __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern __int64 (*wld_ShadowCasterModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
int __cxa_guard_acquire(__int64);
unsigned __int64 strlen(const char*);
void GameHr_1090b20(__int64, __int64);
void GameRoutine_98f140_alt1(__int64*, _QWORD*) __asm__("GameRoutine_98f140");
void GameRoutine_a8c0c0_alt1(__int64) __asm__("GameRoutine_a8c0c0");
void GameRoutine_bd6740_alt1(__int64, __int64, _QWORD*,
                             char) __asm__("GameRoutine_bd6740");
void GameRoutine_d28880_alt1(__int64*, __int64*) __asm__("GameRoutine_d28880");
void MultiJointAOVModule_c34a20(__int64, __int64, int, __int64,
                                unsigned __int64);
void __attribute__((noreturn))
GameRoutine_1063f60_alt1() __asm__("GameRoutine_1063f60");
void __attribute__((noreturn))
GameRoutine_10d6ee0_alt1() __asm__("GameRoutine_10d6ee0");
void __attribute__((noreturn))
GameRoutine_10d7f20_alt1() __asm__("GameRoutine_10d7f20");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_98f290_alt1() __asm__("GameRoutine_98f290");
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 GameHr_1078120(__int64 a1);
__int64 GameHr_10860c0(__int64 a1, _DWORD* a2, const char** a3);
__int64 GameHr_10864c0(__int64 a1, int* a2);
__int64 GameHr_10877a0(__int64 a1);
__int64 GameHr_1087ba0(__int64 a1, _QWORD** a2, __int64* a3, char* a4);
__int64 GameHr_1087f80(__int64 a1, _QWORD** a2);
__int64 GameHr_10d6d40(__int64* a1, int* a2, int* a3);
__int64 GameHr_10d7be0(__int64* a1, __int64* a2);
void GameHr_10eb860(__int64 a1, __int64 a2);

_QWORD* GameHr_1050140(_QWORD* result, __int64* a2)
{
  unsigned __int64 v2;
  _QWORD* v3;
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
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  long double v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64 v31;
  _QWORD* v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;

  v3 = (_QWORD*)result[1];
  v2 = result[2];
  v5 = result;
  if ((unsigned __int64)v3 < v2) {
    v6 = *a2;
    v7 = a2[1];
    v3[2] = 0;
    v3[3] = 0;
    v3[4] = 0;
    *v3 = v6;
    v3[1] = v7;
    v8 = a2[2];
    v9 = a2[3];
    v10 = v9 - v8;
    if (v9 == v8) {
    LABEL_7:
      v12 = v3 + 5;
      goto LABEL_36;
    }
    if (0xAAAAAAAAAAAAAAABLL * (v10 >> 4) <= 0x555555555555555LL) {
      v11 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v9 - v8, 16, 0);
      v3[2] = v11;
      v3[3] = v11;
      v3[4] = v11 + v10;
      do {
        result = (_QWORD*)GameRoutine_8f24c0(v11, v8);
        v8 += 48;
        v11 += 48;
      } while (v8 != v9);
      v3[3] = v11;
      goto LABEL_7;
    }
  LABEL_37:
    GameRoutine_8f2260();
  }
  v13 = (_QWORD*)*result;
  v14 = (__int64)v3 - *result;
  v15 = 1 - 0x3333333333333333LL * (v14 >> 3);
  if (v15 > 0x666666666666666LL) {
    GameRoutine_1050cb0();
  }
  v16 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v2 - (_QWORD)v13) >> 3);
  if (2 * v16 > v15) {
    v15 = 2 * v16;
  }
  if (v16 >= 0x333333333333333LL) {
    v17 = 0x666666666666666LL;
  }
  else {
    v17 = v15;
  }
  if (v17 > 0x666666666666666LL) {
    GameRoutine_60a210(result);
  }
  v36 = 5 * v17;
  v18 = (_QWORD*)GameData_212bf68;
  result =
      (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 40 * v17, 16, 0);
  v20 = a2[2];
  v21 = a2[3];
  v22 = *a2;
  v23 = a2[1];
  v24 = (_QWORD*)((char*)result + v14);
  v25 = result;
  v26 = v21 - v20;
  *v24 = v22;
  v24[1] = v23;
  v24[2] = 0;
  v24[3] = 0;
  v24[4] = 0;
  if (v21 != v20) {
    if (0xAAAAAAAAAAAAAAABLL * (v26 >> 4) > 0x555555555555555LL) {
      goto LABEL_37;
    }
    v27 = GameRoutine_651b90(*v18, v21 - v20, 16, 0);
    v24[2] = v27;
    v24[4] = v27 + v26;
    do {
      result = (_QWORD*)GameRoutine_8f24c0(v27, v20);
      v20 += 48;
      v27 += 48;
    } while (v20 != v21);
    v24[3] = v27;
    v13 = (_QWORD*)*v5;
    v3 = (_QWORD*)v5[1];
    v14 = (__int64)v3 - *v5;
  }
  v28 = &v25[v36];
  v12 = v24 + 5;
  if (v13 != v3) {
    v29 = v13;
    v30 = (_QWORD*)((char*)v24 - v14);
    do {
      v31 = v29[1];
      *v30 = *v29;
      v30[1] = v31;
      v30[2] = v29[2];
      v30[3] = v29[3];
      v30[4] = v29[4];
      v29[3] = 0;
      v29[4] = 0;
      v29[2] = 0;
      v29 += 5;
      v30 += 5;
    } while (v29 != v3);
    v32 = v13 + 2;
    do {
      if (*v32 != 0) {
        result = (_QWORD*)GameRoutine_8f23a0(v32);
        if (*v32 != 0) {
          if (*(_QWORD*)(*v18 + 200LL) != 0) {
            v34 = 128;
          }
          else {
            v34 = 56;
          }
          result =
              (_QWORD*)((__int64 (*)(__int64, __int64))GameRoutine_1a0a4e0)(
                  *v18 + v34, (__int64)(*v32));
        }
      }
      v33 = v32 + 3;
      v32 += 5;
    } while (v33 != v3);
    v13 = (_QWORD*)*v5;
  }
  *v5 = (char*)v24 - v14;
  v5[1] = v12;
  v5[2] = v28;
  if (v13 != nullptr) {
    v35 = 128;
    if (*(_QWORD*)(*v18 + 200LL) == 0) {
      v35 = 56;
    }
    result = (_QWORD*)((__int64 (*)(__int64, __int64))GameRoutine_1a0a4e0)(
        *v18 + v35, (__int64)v13);
  }
LABEL_36:
  v5[1] = v12;
  return result;
}

__int64 GameHr_1078120(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  unsigned __int8 explicit;
  int* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  _BYTE* v13;
  _BYTE* v14;
  bool v15;
  __int64* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD v45[2];

  nn_os_LockMutex((__int64)GameData_212df28);
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      640, 16, 0);
  game_character_107add0(v3, a1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212deb8,
                                  memory_order_acquire);
  v5 = GameData_212deb0;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire((__int64)GameData_212deb8) != 0) {
    *v5 = wld_Crc32(0, "CharacterBuilder", 0x10u);
    __cxa_guard_release((__int64)GameData_212deb8);
  }
  v6 = *v5;
  v7 = *(_QWORD*)(a1 + 504);
  v8 = *(_QWORD*)(a1 + 512);
  v9 = v8;
  LODWORD(v45[0]) = v6;
  v45[1] = v3;
  while (v9 != v7) {
    v10 = *(_DWORD*)(v9 - 16);
    v9 -= 16;
    if (v10 == v6) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v7 == v8 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v7) <= 0x6F) {
    v11 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v11;
    *(_QWORD*)(a1 + 512) = v11;
    *(_QWORD*)(a1 + 520) = v11 + 112;
    if (v8 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v12, v7);
    }
  }
  GameRoutine_98f140_alt1((__int64*)(a1 + 504), v45);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v13 = *(_BYTE**)(v3 + 8);
    v13[632] = 0;
    v13[664] = 0;
    v13[696] = 0;
    v13[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v14 = *(_BYTE**)(v3 + 8);
    v15 = v14[300] == 3 && v14[301] == 3;
    if (v15 || v14[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }
LABEL_20:
  v16 = *(__int64**)(a1 + 536);
  v17 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v16 >= v17) {
    v19 = *(_QWORD*)(a1 + 528);
    v20 = (char*)v16 - v19;
    v21 = ((__int64)v16 - v19) >> 3;
    v22 = v21 + 1;
    if ((unsigned __int64)(v21 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v23 = v17 - v19;
    if (v23 >> 2 > v22) {
      v22 = v23 >> 2;
    }
    if ((unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF8LL) {
      v24 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v24 = v22;
    }
    if (v24 != 0) {
      if (v24 >> 61 != 0) {
        goto LABEL_56;
      }
      v25 = fw_memory_HeapManager_Allocate(*v2, 8 * v24, 16, 0);
    }
    else {
      v25 = 0;
    }
    v26 = v25 + 8 * v24;
    v27 = (unsigned __int64)v16 - v19;
    v28 = (__int64)&v20[v25 + -8 * v21];
    *(_QWORD*)&v20[v25] = v3;
    v18 = (__int64)&v20[v25 + 8];
    memcpy(v28, v19, v27);
    *(_QWORD*)(a1 + 528) = v28;
    *(_QWORD*)(a1 + 536) = v18;
    *(_QWORD*)(a1 + 544) = v26;
    if (v19 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v29, v19);
    }
  }
  else {
    *v16 = v3;
    v18 = (__int64)(v16 + 1);
  }
  *(_QWORD*)(a1 + 536) = v18;
  v30 = *(__int64**)(a1 + 560);
  v31 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v30 < v31) {
    *v30 = v3;
    v32 = (__int64)(v30 + 1);
    goto LABEL_52;
  }
  v33 = *(_QWORD*)(a1 + 552);
  v34 = (char*)v30 - v33;
  v35 = ((__int64)v30 - v33) >> 3;
  v36 = v35 + 1;
  if ((unsigned __int64)(v35 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290_alt1();
  }
  v37 = v31 - v33;
  if (v37 >> 2 > v36) {
    v36 = v37 >> 2;
  }
  if ((unsigned __int64)v37 >= 0x7FFFFFFFFFFFFFF8LL) {
    v38 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v38 = v36;
  }
  if (v38 != 0) {
    if (v38 >> 61 == 0) {
      v39 = fw_memory_HeapManager_Allocate(*v2, 8 * v38, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210_alt1();
  }
  v39 = 0;
LABEL_48:
  v40 = v39 + 8 * v38;
  v41 = (unsigned __int64)v30 - v33;
  v42 = (__int64)&v34[v39 + -8 * v35];
  *(_QWORD*)&v34[v39] = v3;
  v32 = (__int64)&v34[v39 + 8];
  memcpy(v42, v33, v41);
  *(_QWORD*)(a1 + 552) = v42;
  *(_QWORD*)(a1 + 560) = v32;
  *(_QWORD*)(a1 + 568) = v40;
  if (v33 != 0) {
    v43 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v43, v33);
  }
LABEL_52:
  *(_QWORD*)(a1 + 560) = v32;
  GameRoutine_a8c0c0_alt1(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex((__int64)GameData_212df28);
  return v3;
}

__int64 GameHr_10860c0(__int64 a1, _DWORD* a2, const char** a3)
{
  __int64* v6;
  __int64 v7;
  const char* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  _BYTE* v17;
  _BYTE* v18;
  bool v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  char* v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD v49[2];

  nn_os_LockMutex((__int64)GameData_212df28);
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      144, 16, 0);
  v8 = *a3;
  LODWORD(a2) = *a2;
  v9 = v7;
  v10 = strlen(v8);
  MultiJointAOVModule_c34a20(v9, a1, (int)a2, (__int64)v8, v10);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2235628,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2235628) != 0) {
    GameData_2235620 = wld_Crc32(0, "MultiJointAOVModule", 0x13u);
    __cxa_guard_release((__int64)&GameData_2235628);
  }
  v11 = *(_QWORD*)(a1 + 504);
  v12 = *(_QWORD*)(a1 + 512);
  v13 = v12;
  LODWORD(v49[0]) = GameData_2235620;
  v49[1] = v9;
  while (v13 != v11) {
    v14 = *(_DWORD*)(v13 - 16);
    v13 -= 16;
    if (v14 == GameData_2235620) {
      if ((*(_BYTE*)(v9 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v11 == v12 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v11) <= 0x6F) {
    v15 = fw_memory_HeapManager_Allocate(*v6, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v15;
    *(_QWORD*)(a1 + 512) = v15;
    *(_QWORD*)(a1 + 520) = v15 + 112;
    if (v12 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*v6 + v16, v11);
    }
  }
  GameRoutine_98f140_alt1((__int64*)(a1 + 504), v49);
  if ((*(_BYTE*)(v9 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v9 + 16) = 1;
    *(_BYTE*)(v9 + 17) &= ~2u;
    *(_BYTE*)(v9 + 18) &= ~2u;
    *(_BYTE*)(v9 + 19) &= ~2u;
    *(_BYTE*)(v9 + 20) &= ~2u;
    v17 = *(_BYTE**)(v9 + 8);
    v17[632] = 0;
    v17[664] = 0;
    v17[696] = 0;
    v17[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 64LL))(v9);
    v18 = *(_BYTE**)(v9 + 8);
    v19 = v18[300] == 3 && v18[301] == 3;
    if (v19 || v18[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 72LL))(v9);
    }
  }
LABEL_20:
  v20 = *(__int64**)(a1 + 536);
  v21 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v20 >= v21) {
    v23 = *(_QWORD*)(a1 + 528);
    v24 = (char*)v20 - v23;
    v25 = ((__int64)v20 - v23) >> 3;
    v26 = v25 + 1;
    if ((unsigned __int64)(v25 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v27 = v21 - v23;
    if (v27 >> 2 > v26) {
      v26 = v27 >> 2;
    }
    if ((unsigned __int64)v27 >= 0x7FFFFFFFFFFFFFF8LL) {
      v28 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v28 = v26;
    }
    if (v28 != 0) {
      if (v28 >> 61 != 0) {
        goto LABEL_56;
      }
      v29 = fw_memory_HeapManager_Allocate(*v6, 8 * v28, 16, 0);
    }
    else {
      v29 = 0;
    }
    v30 = v29 + 8 * v28;
    v31 = (unsigned __int64)v20 - v23;
    v32 = (__int64)&v24[v29 + -8 * v25];
    *(_QWORD*)&v24[v29] = v9;
    v22 = (__int64)&v24[v29 + 8];
    memcpy(v32, v23, v31);
    *(_QWORD*)(a1 + 528) = v32;
    *(_QWORD*)(a1 + 536) = v22;
    *(_QWORD*)(a1 + 544) = v30;
    if (v23 != 0) {
      v33 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free(*v6 + v33, v23);
    }
  }
  else {
    *v20 = v9;
    v22 = (__int64)(v20 + 1);
  }
  *(_QWORD*)(a1 + 536) = v22;
  v34 = *(__int64**)(a1 + 560);
  v35 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v34 < v35) {
    *v34 = v9;
    v36 = (__int64)(v34 + 1);
    goto LABEL_52;
  }
  v37 = *(_QWORD*)(a1 + 552);
  v38 = (char*)v34 - v37;
  v39 = ((__int64)v34 - v37) >> 3;
  v40 = v39 + 1;
  if ((unsigned __int64)(v39 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290_alt1();
  }
  v41 = v35 - v37;
  if (v41 >> 2 > v40) {
    v40 = v41 >> 2;
  }
  if ((unsigned __int64)v41 >= 0x7FFFFFFFFFFFFFF8LL) {
    v42 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v42 = v40;
  }
  if (v42 != 0) {
    if (v42 >> 61 == 0) {
      v43 = fw_memory_HeapManager_Allocate(*v6, 8 * v42, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210_alt1();
  }
  v43 = 0;
LABEL_48:
  v44 = v43 + 8 * v42;
  v45 = (unsigned __int64)v34 - v37;
  v46 = (__int64)&v38[v43 + -8 * v39];
  *(_QWORD*)&v38[v43] = v9;
  v36 = (__int64)&v38[v43 + 8];
  memcpy(v46, v37, v45);
  *(_QWORD*)(a1 + 552) = v46;
  *(_QWORD*)(a1 + 560) = v36;
  *(_QWORD*)(a1 + 568) = v44;
  if (v37 != 0) {
    v47 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v47, v37);
  }
LABEL_52:
  *(_QWORD*)(a1 + 560) = v36;
  GameRoutine_a8c0c0_alt1(a1);
  *(_BYTE*)(a1 + 576) = 1;
  return nn_os_UnlockMutex((__int64)GameData_212df28);
}

__int64 GameHr_10864c0(__int64 a1, int* a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  _BYTE* v12;
  _BYTE* v13;
  bool v14;
  __int64* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  _QWORD v44[2];

  nn_os_LockMutex((__int64)GameData_212df28);
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      144, 16, 0);
  MultiJointAOVModule_c34a20(v5, a1, *a2, (__int64)"Sample", 6u);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2235628,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2235628) != 0) {
    GameData_2235620 = wld_Crc32(0, "MultiJointAOVModule", 0x13u);
    __cxa_guard_release((__int64)&GameData_2235628);
  }
  v6 = *(_QWORD*)(a1 + 504);
  v7 = *(_QWORD*)(a1 + 512);
  v8 = v7;
  LODWORD(v44[0]) = GameData_2235620;
  v44[1] = v5;
  while (v8 != v6) {
    v9 = *(_DWORD*)(v8 - 16);
    v8 -= 16;
    if (v9 == GameData_2235620) {
      if ((*(_BYTE*)(v5 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v6 == v7 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v6) <= 0x6F) {
    v10 = fw_memory_HeapManager_Allocate(*v4, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v10;
    *(_QWORD*)(a1 + 512) = v10;
    *(_QWORD*)(a1 + 520) = v10 + 112;
    if (v7 != 0) {
      v11 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(*v4 + v11, v6);
    }
  }
  GameRoutine_98f140_alt1((__int64*)(a1 + 504), v44);
  if ((*(_BYTE*)(v5 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v5 + 16) = 1;
    *(_BYTE*)(v5 + 17) &= ~2u;
    *(_BYTE*)(v5 + 18) &= ~2u;
    *(_BYTE*)(v5 + 19) &= ~2u;
    *(_BYTE*)(v5 + 20) &= ~2u;
    v12 = *(_BYTE**)(v5 + 8);
    v12[632] = 0;
    v12[664] = 0;
    v12[696] = 0;
    v12[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 64LL))(v5);
    v13 = *(_BYTE**)(v5 + 8);
    v14 = v13[300] == 3 && v13[301] == 3;
    if (v14 || v13[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 72LL))(v5);
    }
  }
LABEL_20:
  v15 = *(__int64**)(a1 + 536);
  v16 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v15 >= v16) {
    v18 = *(_QWORD*)(a1 + 528);
    v19 = (char*)v15 - v18;
    v20 = ((__int64)v15 - v18) >> 3;
    v21 = v20 + 1;
    if ((unsigned __int64)(v20 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v22 = v16 - v18;
    if (v22 >> 2 > v21) {
      v21 = v22 >> 2;
    }
    if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFF8LL) {
      v23 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v23 = v21;
    }
    if (v23 != 0) {
      if (v23 >> 61 != 0) {
        goto LABEL_56;
      }
      v24 = fw_memory_HeapManager_Allocate(*v4, 8 * v23, 16, 0);
    }
    else {
      v24 = 0;
    }
    v25 = v24 + 8 * v23;
    v26 = (unsigned __int64)v15 - v18;
    v27 = (__int64)&v19[v24 + -8 * v20];
    *(_QWORD*)&v19[v24] = v5;
    v17 = (__int64)&v19[v24 + 8];
    memcpy(v27, v18, v26);
    *(_QWORD*)(a1 + 528) = v27;
    *(_QWORD*)(a1 + 536) = v17;
    *(_QWORD*)(a1 + 544) = v25;
    if (v18 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(*v4 + v28, v18);
    }
  }
  else {
    *v15 = v5;
    v17 = (__int64)(v15 + 1);
  }
  *(_QWORD*)(a1 + 536) = v17;
  v29 = *(__int64**)(a1 + 560);
  v30 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v29 < v30) {
    *v29 = v5;
    v31 = (__int64)(v29 + 1);
    goto LABEL_52;
  }
  v32 = *(_QWORD*)(a1 + 552);
  v33 = (char*)v29 - v32;
  v34 = ((__int64)v29 - v32) >> 3;
  v35 = v34 + 1;
  if ((unsigned __int64)(v34 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290_alt1();
  }
  v36 = v30 - v32;
  if (v36 >> 2 > v35) {
    v35 = v36 >> 2;
  }
  if ((unsigned __int64)v36 >= 0x7FFFFFFFFFFFFFF8LL) {
    v37 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v37 = v35;
  }
  if (v37 != 0) {
    if (v37 >> 61 == 0) {
      v38 = fw_memory_HeapManager_Allocate(*v4, 8 * v37, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210_alt1();
  }
  v38 = 0;
LABEL_48:
  v39 = v38 + 8 * v37;
  v40 = (unsigned __int64)v29 - v32;
  v41 = (__int64)&v33[v38 + -8 * v34];
  *(_QWORD*)&v33[v38] = v5;
  v31 = (__int64)&v33[v38 + 8];
  memcpy(v41, v32, v40);
  *(_QWORD*)(a1 + 552) = v41;
  *(_QWORD*)(a1 + 560) = v31;
  *(_QWORD*)(a1 + 568) = v39;
  if (v32 != 0) {
    v42 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v42 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v42, v32);
  }
LABEL_52:
  *(_QWORD*)(a1 + 560) = v31;
  GameRoutine_a8c0c0_alt1(a1);
  *(_BYTE*)(a1 + 576) = 1;
  return nn_os_UnlockMutex((__int64)GameData_212df28);
}

__int64 GameHr_10873c0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int8 explicit;
  int* v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  long double v17;
  __int64 v18;
  _BYTE* v19;
  _BYTE* v20;
  bool v21;
  __int64* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  char* v33;
  __int64 v34;
  long double v35;
  __int64 v36;
  __int64* v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  char* v48;
  __int64 v49;
  long double v50;
  __int64 v51;
  int v53;
  __int64 v54;

  GameRoutine_1a09b70(GameData_212df28);
  v6 = (_QWORD*)GameData_212bf68;
  v7 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 104, 16, 0);
  v8 = GameRoutine_a5a360(v7, a1, a2, a3);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ec88,
                                  memory_order_acquire);
  v10 = GameData_212ec80;
  if ((explicit & 1) == 0) {
    v8 = GameRoutine_1a09fd0(GameData_212ec88);
    if ((_DWORD)v8 != 0) {
      *v10 = GameRoutine_540(0, "ClothModule", 11);
      v8 = GameRoutine_1a09fe0(GameData_212ec88);
    }
  }
  v11 = *v10;
  v12 = *(_QWORD*)(a1 + 504);
  v13 = *(_QWORD*)(a1 + 512);
  v14 = v13;
  v53 = v11;
  v54 = v7;
  while (v14 != v12) {
    v15 = *(_DWORD*)(v14 - 16);
    v14 -= 16;
    if (v15 == v11) {
      if ((*(_BYTE*)(v7 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v12 == v13 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v12) <= 0x6F) {
    v16 = GameRoutine_651b90(*v6, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v16;
    *(_QWORD*)(a1 + 512) = v16;
    *(_QWORD*)(a1 + 520) = v16 + 112;
    if (v13 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*v6 + 200LL) == 0) {
        v18 = 56;
      }
      ((__int64 (*)(__int64, __int64))GameRoutine_1a0a4e0)(*v6 + v18,
                                                           (__int64)v13);
    }
  }
  v8 = GameRoutine_98f140(a1 + 504, &v53);
  if ((*(_BYTE*)(v7 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v7 + 16) = 1;
    *(_BYTE*)(v7 + 17) &= ~2u;
    *(_BYTE*)(v7 + 18) &= ~2u;
    *(_BYTE*)(v7 + 19) &= ~2u;
    *(_BYTE*)(v7 + 20) &= ~2u;
    v19 = *(_BYTE**)(v7 + 8);
    v19[632] = 0;
    v19[664] = 0;
    v19[696] = 0;
    v19[728] = 0;
    v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 64LL))(v7);
    v20 = *(_BYTE**)(v7 + 8);
    v21 = v20[300] == 3 && v20[301] == 3;
    if (v21 || v20[302] == 1) {
      v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 72LL))(v7);
    }
  }
LABEL_20:
  v22 = *(__int64**)(a1 + 536);
  v23 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v22 >= v23) {
    v25 = *(_QWORD*)(a1 + 528);
    v26 = (char*)v22 - v25;
    v27 = ((__int64)v22 - v25) >> 3;
    v28 = v27 + 1;
    if ((unsigned __int64)(v27 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v29 = v23 - v25;
    if (v29 >> 2 > v28) {
      v28 = v29 >> 2;
    }
    if ((unsigned __int64)v29 >= 0x7FFFFFFFFFFFFFF8LL) {
      v30 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v30 = v28;
    }
    if (v30 != 0) {
      if (v30 >> 61 != 0) {
        goto LABEL_56;
      }
      v31 = GameRoutine_651b90(*v6, 8 * v30, 16, 0);
    }
    else {
      v31 = 0;
    }
    v32 = v31 + 8 * v30;
    v33 = (char*)v22 - v25;
    v34 = (__int64)&v26[v31 + -8 * v27];
    *(_QWORD*)&v26[v31] = v7;
    v24 = (__int64)&v26[v31 + 8];
    v8 = GameRoutine_1a0b950(v34, v25, v33);
    *(_QWORD*)(a1 + 528) = v34;
    *(_QWORD*)(a1 + 536) = v24;
    *(_QWORD*)(a1 + 544) = v32;
    if (v25 != 0) {
      v36 = 128;
      if (*(_QWORD*)(*v6 + 200LL) == 0) {
        v36 = 56;
      }
      v8 = ((__int64 (*)(__int64, __int64))GameRoutine_1a0a4e0)(*v6 + v36,
                                                                (__int64)v25);
    }
  }
  else {
    *v22 = v7;
    v24 = (__int64)(v22 + 1);
  }
  *(_QWORD*)(a1 + 536) = v24;
  v37 = *(__int64**)(a1 + 560);
  v38 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v37 < v38) {
    *v37 = v7;
    v39 = (__int64)(v37 + 1);
    goto LABEL_52;
  }
  v40 = *(_QWORD*)(a1 + 552);
  v41 = (char*)v37 - v40;
  v42 = ((__int64)v37 - v40) >> 3;
  v43 = v42 + 1;
  if ((unsigned __int64)(v42 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290(v8);
  }
  v44 = v38 - v40;
  if (v44 >> 2 > v43) {
    v43 = v44 >> 2;
  }
  if ((unsigned __int64)v44 >= 0x7FFFFFFFFFFFFFF8LL) {
    v45 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v45 = v43;
  }
  if (v45 != 0) {
    if (v45 >> 61 == 0) {
      v46 = GameRoutine_651b90(*v6, 8 * v45, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210(v8);
  }
  v46 = 0;
LABEL_48:
  v47 = v46 + 8 * v45;
  v48 = (char*)v37 - v40;
  v49 = (__int64)&v41[v46 + -8 * v42];
  *(_QWORD*)&v41[v46] = v7;
  v39 = (__int64)&v41[v46 + 8];
  GameRoutine_1a0b950(v49, v40, v48);
  *(_QWORD*)(a1 + 552) = v49;
  *(_QWORD*)(a1 + 560) = v39;
  *(_QWORD*)(a1 + 568) = v47;
  if (v40 != 0) {
    v51 = 128;
    if (*(_QWORD*)(*v6 + 200LL) == 0) {
      v51 = 56;
    }
    ((__int64 (*)(__int64, __int64))GameRoutine_1a0a4e0)(*v6 + v51,
                                                         (__int64)v40);
  }
LABEL_52:
  *(_QWORD*)(a1 + 560) = v39;
  GameRoutine_a8c0c0(a1);
  *(_BYTE*)(a1 + 576) = 1;
  GameRoutine_1a09b80(GameData_212df28);
  return v7;
}

__int64 GameHr_10877a0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  _BYTE* v11;
  _BYTE* v12;
  bool v13;
  __int64* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  char* v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD v43[2];

  nn_os_LockMutex((__int64)&GameData_2167580);
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      64, 16, 0);
  *(_BYTE*)(v3 + 16) = 0;
  v4 = v3;
  *(_DWORD*)(v3 + 17) = 33687042;
  *(_BYTE*)(v3 + 24) = 0;
  *(_BYTE*)(v3 + 36) = 0;
  *(_BYTE*)(v3 + 40) = 0;
  *(_BYTE*)(v3 + 52) = 0;
  *(_BYTE*)(v3 + 56) = 0;
  *(_BYTE*)(a1 + 664) = 0;
  *(_QWORD*)v3 = wld_ShadowCasterModule_vtable;
  *(_QWORD*)(v3 + 8) = a1;
  *(_DWORD*)(v3 + 60) = 3;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22356a8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_22356a8) != 0) {
    GameData_22356a0 = wld_Crc32(0, "ShadowCasterModule", 0x12u);
    __cxa_guard_release((__int64)&GameData_22356a8);
  }
  v5 = *(_QWORD*)(a1 + 504);
  v6 = *(_QWORD*)(a1 + 512);
  v7 = v6;
  LODWORD(v43[0]) = GameData_22356a0;
  v43[1] = v4;
  while (v7 != v5) {
    v8 = *(_DWORD*)(v7 - 16);
    v7 -= 16;
    if (v8 == GameData_22356a0) {
      if ((*(_BYTE*)(v4 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v5 == v6 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v5) <= 0x6F) {
    v9 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v9;
    *(_QWORD*)(a1 + 512) = v9;
    *(_QWORD*)(a1 + 520) = v9 + 112;
    if (v6 != 0) {
      v10 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v10, v5);
    }
  }
  GameRoutine_98f140_alt1((__int64*)(a1 + 504), v43);
  if ((*(_BYTE*)(v4 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v4 + 16) = 1;
    *(_BYTE*)(v4 + 17) &= ~2u;
    *(_BYTE*)(v4 + 18) &= ~2u;
    *(_BYTE*)(v4 + 19) &= ~2u;
    *(_BYTE*)(v4 + 20) &= ~2u;
    v11 = *(_BYTE**)(v4 + 8);
    v11[632] = 0;
    v11[664] = 0;
    v11[696] = 0;
    v11[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 64LL))(v4);
    v12 = *(_BYTE**)(v4 + 8);
    v13 = v12[300] == 3 && v12[301] == 3;
    if (v13 || v12[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 72LL))(v4);
    }
  }
LABEL_20:
  v14 = *(__int64**)(a1 + 536);
  v15 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v14 >= v15) {
    v17 = *(_QWORD*)(a1 + 528);
    v18 = (char*)v14 - v17;
    v19 = ((__int64)v14 - v17) >> 3;
    v20 = v19 + 1;
    if ((unsigned __int64)(v19 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v21 = v15 - v17;
    if (v21 >> 2 > v20) {
      v20 = v21 >> 2;
    }
    if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFF8LL) {
      v22 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v22 = v20;
    }
    if (v22 != 0) {
      if (v22 >> 61 != 0) {
        goto LABEL_56;
      }
      v23 = fw_memory_HeapManager_Allocate(*v2, 8 * v22, 16, 0);
    }
    else {
      v23 = 0;
    }
    v24 = v23 + 8 * v22;
    v25 = (unsigned __int64)v14 - v17;
    v26 = (__int64)&v18[v23 + -8 * v19];
    *(_QWORD*)&v18[v23] = v4;
    v16 = (__int64)&v18[v23 + 8];
    memcpy(v26, v17, v25);
    *(_QWORD*)(a1 + 528) = v26;
    *(_QWORD*)(a1 + 536) = v16;
    *(_QWORD*)(a1 + 544) = v24;
    if (v17 != 0) {
      v27 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v27, v17);
    }
  }
  else {
    *v14 = v4;
    v16 = (__int64)(v14 + 1);
  }
  *(_QWORD*)(a1 + 536) = v16;
  v28 = *(__int64**)(a1 + 560);
  v29 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v28 < v29) {
    *v28 = v4;
    v30 = (__int64)(v28 + 1);
    goto LABEL_52;
  }
  v31 = *(_QWORD*)(a1 + 552);
  v32 = (char*)v28 - v31;
  v33 = ((__int64)v28 - v31) >> 3;
  v34 = v33 + 1;
  if ((unsigned __int64)(v33 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290_alt1();
  }
  v35 = v29 - v31;
  if (v35 >> 2 > v34) {
    v34 = v35 >> 2;
  }
  if ((unsigned __int64)v35 >= 0x7FFFFFFFFFFFFFF8LL) {
    v36 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v36 = v34;
  }
  if (v36 != 0) {
    if (v36 >> 61 == 0) {
      v37 = fw_memory_HeapManager_Allocate(*v2, 8 * v36, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210_alt1();
  }
  v37 = 0;
LABEL_48:
  v38 = v37 + 8 * v36;
  v39 = (unsigned __int64)v28 - v31;
  v40 = (__int64)&v32[v37 + -8 * v33];
  *(_QWORD*)&v32[v37] = v4;
  v30 = (__int64)&v32[v37 + 8];
  memcpy(v40, v31, v39);
  *(_QWORD*)(a1 + 552) = v40;
  *(_QWORD*)(a1 + 560) = v30;
  *(_QWORD*)(a1 + 568) = v38;
  if (v31 != 0) {
    v41 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v41, v31);
  }
LABEL_52:
  *(_QWORD*)(a1 + 560) = v30;
  GameRoutine_a8c0c0_alt1(a1);
  *(_BYTE*)(a1 + 576) = 1;
  return nn_os_UnlockMutex((__int64)GameData_212df28);
}

__int64 GameHr_1087ba0(__int64 a1, _QWORD** a2, __int64* a3, char* a4)
{
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  _BYTE* v16;
  _BYTE* v17;
  bool v18;
  __int64* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD v48[2];

  nn_os_LockMutex((__int64)GameData_212df28);
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      48, 16, 0);
  GameRoutine_bf25c0_alt1(v9, a1, *a2, *a3, *a4);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22356b8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_22356b8) != 0) {
    GameData_22356b0 = wld_Crc32(0, "CharacterSelfShadow", 0x13u);
    __cxa_guard_release((__int64)&GameData_22356b8);
  }
  v10 = *(_QWORD*)(a1 + 504);
  v11 = *(_QWORD*)(a1 + 512);
  v12 = v11;
  LODWORD(v48[0]) = GameData_22356b0;
  v48[1] = v9;
  while (v12 != v10) {
    v13 = *(_DWORD*)(v12 - 16);
    v12 -= 16;
    if (v13 == GameData_22356b0) {
      if ((*(_BYTE*)(v9 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v10 == v11 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v10) <= 0x6F) {
    v14 = fw_memory_HeapManager_Allocate(*v8, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v14;
    *(_QWORD*)(a1 + 512) = v14;
    *(_QWORD*)(a1 + 520) = v14 + 112;
    if (v11 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*v8 + 200) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(*v8 + v15, v10);
    }
  }
  GameRoutine_98f140_alt1((__int64*)(a1 + 504), v48);
  if ((*(_BYTE*)(v9 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v9 + 16) = 1;
    *(_BYTE*)(v9 + 17) &= ~2u;
    *(_BYTE*)(v9 + 18) &= ~2u;
    *(_BYTE*)(v9 + 19) &= ~2u;
    *(_BYTE*)(v9 + 20) &= ~2u;
    v16 = *(_BYTE**)(v9 + 8);
    v16[632] = 0;
    v16[664] = 0;
    v16[696] = 0;
    v16[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 64LL))(v9);
    v17 = *(_BYTE**)(v9 + 8);
    v18 = v17[300] == 3 && v17[301] == 3;
    if (v18 || v17[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 72LL))(v9);
    }
  }
LABEL_20:
  v19 = *(__int64**)(a1 + 536);
  v20 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v19 >= v20) {
    v22 = *(_QWORD*)(a1 + 528);
    v23 = (char*)v19 - v22;
    v24 = ((__int64)v19 - v22) >> 3;
    v25 = v24 + 1;
    if ((unsigned __int64)(v24 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v26 = v20 - v22;
    if (v26 >> 2 > v25) {
      v25 = v26 >> 2;
    }
    if ((unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFF8LL) {
      v27 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v27 = v25;
    }
    if (v27 != 0) {
      if (v27 >> 61 != 0) {
        goto LABEL_56;
      }
      v28 = fw_memory_HeapManager_Allocate(*v8, 8 * v27, 16, 0);
    }
    else {
      v28 = 0;
    }
    v29 = v28 + 8 * v27;
    v30 = (unsigned __int64)v19 - v22;
    v31 = (__int64)&v23[v28 + -8 * v24];
    *(_QWORD*)&v23[v28] = v9;
    v21 = (__int64)&v23[v28 + 8];
    memcpy(v31, v22, v30);
    *(_QWORD*)(a1 + 528) = v31;
    *(_QWORD*)(a1 + 536) = v21;
    *(_QWORD*)(a1 + 544) = v29;
    if (v22 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*v8 + 200) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free(*v8 + v32, v22);
    }
  }
  else {
    *v19 = v9;
    v21 = (__int64)(v19 + 1);
  }
  *(_QWORD*)(a1 + 536) = v21;
  v33 = *(__int64**)(a1 + 560);
  v34 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v33 < v34) {
    *v33 = v9;
    v35 = (__int64)(v33 + 1);
    goto LABEL_52;
  }
  v36 = *(_QWORD*)(a1 + 552);
  v37 = (char*)v33 - v36;
  v38 = ((__int64)v33 - v36) >> 3;
  v39 = v38 + 1;
  if ((unsigned __int64)(v38 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290_alt1();
  }
  v40 = v34 - v36;
  if (v40 >> 2 > v39) {
    v39 = v40 >> 2;
  }
  if ((unsigned __int64)v40 >= 0x7FFFFFFFFFFFFFF8LL) {
    v41 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v41 = v39;
  }
  if (v41 != 0) {
    if (v41 >> 61 == 0) {
      v42 = fw_memory_HeapManager_Allocate(*v8, 8 * v41, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210_alt1();
  }
  v42 = 0;
LABEL_48:
  v43 = v42 + 8 * v41;
  v44 = (unsigned __int64)v33 - v36;
  v45 = (__int64)&v37[v42 + -8 * v38];
  *(_QWORD*)&v37[v42] = v9;
  v35 = (__int64)&v37[v42 + 8];
  memcpy(v45, v36, v44);
  *(_QWORD*)(a1 + 552) = v45;
  *(_QWORD*)(a1 + 560) = v35;
  *(_QWORD*)(a1 + 568) = v43;
  if (v36 != 0) {
    v46 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v46 = 56;
    }
    nn_mem_StandardAllocator_Free(*v8 + v46, v36);
  }
LABEL_52:
  *(_QWORD*)(a1 + 560) = v35;
  GameRoutine_a8c0c0_alt1(a1);
  *(_BYTE*)(a1 + 576) = 1;
  return nn_os_UnlockMutex((__int64)GameData_212df28);
}

__int64 GameHr_1087f80(__int64 a1, _QWORD** a2)
{
  __int64* v4;
  __int64 v5;
  unsigned __int8 explicit;
  int* v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  _BYTE* v16;
  bool v17;
  __int64* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  _QWORD v47[2];

  nn_os_LockMutex((__int64)GameData_212df28);
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      288, 16, 0);
  GameRoutine_bd6740_alt1(v5, a1, *a2, 1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4d8,
                                  memory_order_acquire);
  v7 = GameData_212d4d0;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire((__int64)GameData_212d4d8) != 0) {
    *v7 = wld_Crc32(0, "CharacterMaterial", 0x11u);
    __cxa_guard_release((__int64)GameData_212d4d8);
  }
  v8 = *v7;
  v9 = *(_QWORD*)(a1 + 504);
  v10 = *(_QWORD*)(a1 + 512);
  v11 = v10;
  LODWORD(v47[0]) = v8;
  v47[1] = v5;
  while (v11 != v9) {
    v12 = *(_DWORD*)(v11 - 16);
    v11 -= 16;
    if (v12 == v8) {
      if ((*(_BYTE*)(v5 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v9 == v10 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v9) <= 0x6F) {
    v13 = fw_memory_HeapManager_Allocate(*v4, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v13;
    *(_QWORD*)(a1 + 512) = v13;
    *(_QWORD*)(a1 + 520) = v13 + 112;
    if (v10 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(*v4 + v14, v9);
    }
  }
  GameRoutine_98f140_alt1((__int64*)(a1 + 504), v47);
  if ((*(_BYTE*)(v5 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v5 + 16) = 1;
    *(_BYTE*)(v5 + 17) &= ~2u;
    *(_BYTE*)(v5 + 18) &= ~2u;
    *(_BYTE*)(v5 + 19) &= ~2u;
    *(_BYTE*)(v5 + 20) &= ~2u;
    v15 = *(_BYTE**)(v5 + 8);
    v15[632] = 0;
    v15[664] = 0;
    v15[696] = 0;
    v15[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 64LL))(v5);
    v16 = *(_BYTE**)(v5 + 8);
    v17 = v16[300] == 3 && v16[301] == 3;
    if (v17 || v16[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 72LL))(v5);
    }
  }
LABEL_20:
  v18 = *(__int64**)(a1 + 536);
  v19 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v18 >= v19) {
    v21 = *(_QWORD*)(a1 + 528);
    v22 = (char*)v18 - v21;
    v23 = ((__int64)v18 - v21) >> 3;
    v24 = v23 + 1;
    if ((unsigned __int64)(v23 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v25 = v19 - v21;
    if (v25 >> 2 > v24) {
      v24 = v25 >> 2;
    }
    if ((unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFF8LL) {
      v26 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v26 = v24;
    }
    if (v26 != 0) {
      if (v26 >> 61 != 0) {
        goto LABEL_56;
      }
      v27 = fw_memory_HeapManager_Allocate(*v4, 8 * v26, 16, 0);
    }
    else {
      v27 = 0;
    }
    v28 = v27 + 8 * v26;
    v29 = (unsigned __int64)v18 - v21;
    v30 = (__int64)&v22[v27 + -8 * v23];
    *(_QWORD*)&v22[v27] = v5;
    v20 = (__int64)&v22[v27 + 8];
    memcpy(v30, v21, v29);
    *(_QWORD*)(a1 + 528) = v30;
    *(_QWORD*)(a1 + 536) = v20;
    *(_QWORD*)(a1 + 544) = v28;
    if (v21 != 0) {
      v31 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free(*v4 + v31, v21);
    }
  }
  else {
    *v18 = v5;
    v20 = (__int64)(v18 + 1);
  }
  *(_QWORD*)(a1 + 536) = v20;
  v32 = *(__int64**)(a1 + 560);
  v33 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v32 < v33) {
    *v32 = v5;
    v34 = (__int64)(v32 + 1);
    goto LABEL_52;
  }
  v35 = *(_QWORD*)(a1 + 552);
  v36 = (char*)v32 - v35;
  v37 = ((__int64)v32 - v35) >> 3;
  v38 = v37 + 1;
  if ((unsigned __int64)(v37 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290_alt1();
  }
  v39 = v33 - v35;
  if (v39 >> 2 > v38) {
    v38 = v39 >> 2;
  }
  if ((unsigned __int64)v39 >= 0x7FFFFFFFFFFFFFF8LL) {
    v40 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v40 = v38;
  }
  if (v40 != 0) {
    if (v40 >> 61 == 0) {
      v41 = fw_memory_HeapManager_Allocate(*v4, 8 * v40, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210_alt1();
  }
  v41 = 0;
LABEL_48:
  v42 = v41 + 8 * v40;
  v43 = (unsigned __int64)v32 - v35;
  v44 = (__int64)&v36[v41 + -8 * v37];
  *(_QWORD*)&v36[v41] = v5;
  v34 = (__int64)&v36[v41 + 8];
  memcpy(v44, v35, v43);
  *(_QWORD*)(a1 + 552) = v44;
  *(_QWORD*)(a1 + 560) = v34;
  *(_QWORD*)(a1 + 568) = v42;
  if (v35 != 0) {
    v45 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v45, v35);
  }
LABEL_52:
  *(_QWORD*)(a1 + 560) = v34;
  GameRoutine_a8c0c0_alt1(a1);
  *(_BYTE*)(a1 + 576) = 1;
  return nn_os_UnlockMutex((__int64)GameData_212df28);
}

__int64 GameHr_10b4800(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  const char* v5;
  __int64 v6;
  _QWORD* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  char* v20;
  long double v21;
  __int64 v22;
  char* v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  *(_QWORD*)(result + 64) = *(_QWORD*)(result + 56);
  v1 = *(_QWORD*)(result + 32);
  if (v1 != 0) {
    v2 = *(_QWORD*)(result + 40);
    v3 = (_QWORD*)result;
    if (*(_QWORD*)(v1 + 8) != -1 && v2 != 0) {
      v5 = ">Loc_C_Trans";
      v6 = 16;
      v7 = (_QWORD*)GameData_212bf68;
      do {
        if (*v5 == 62) {
          result = GameRoutine_1084a50(v2, (_BYTE*)v5 + 1);
          if (result != 0) {
            v10 = v3[8];
            v9 = v3[9];
            if (v10 < v9) {
              *(_QWORD*)v10 = result;
              v8 = v10 + 32;
              *(_OWORD*)(v10 + 16) = *(_OWORD*)(result + 48);
            }
            else {
              v11 = v3[7];
              v12 = v10 - v11;
              v13 = ((__int64)(v10 - v11) >> 5) + 1;
              if (v13 >> 59 != 0) {
                GameRoutine_10b4ed0();
              }
              v14 = v9 - v11;
              if (v14 >> 4 > v13) {
                v13 = v14 >> 4;
              }
              if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFE0LL) {
                v15 = 0x7FFFFFFFFFFFFFFLL;
              }
              else {
                v15 = v13;
              }
              if (v15 >> 59 != 0) {
                GameRoutine_60a210(result);
              }
              v16 = result;
              v17 = 32 * v15;
              result = GameRoutine_651b90(*v7, 32 * v15, 16, 0);
              v18 = result + v12;
              v19 = (char*)v3[7];
              v20 = (char*)v3[8];
              *(_QWORD*)v18 = v16;
              v21 = *(long double*)(v16 + 48);
              v22 = result + v12 + v19 - v20;
              *(long double*)(v18 + 16) = v21;
              if (v19 != v20) {
                v23 = v19;
                v24 = (_QWORD*)(result + v12 + v19 - v20);
                do {
                  *v24 = *(_QWORD*)v23;
                  v24[3] = *((_QWORD*)v23 + 3);
                  v25 = *((_QWORD*)v23 + 2);
                  v23 += 32;
                  v24[2] = v25;
                  v24 += 4;
                } while (v23 != v20);
              }
              v26 = result + v17;
              v8 = v18 + 32;
              v3[7] = v22;
              v3[8] = v18 + 32;
              v3[9] = v26;
              if (v19 != nullptr) {
                v27 = 128;
                if (*(_QWORD*)(*v7 + 200LL) == 0) {
                  v27 = 56;
                }
                result = ((__int64 (*)(__int64, __int64))GameRoutine_1a0a4e0)(
                    *v7 + v27, (__int64)v19);
              }
            }
            v3[8] = v8;
          }
        }
        ++v6;
        v5 = (const char*)*(&GameData_20090d0 + v6);
      } while (v6 != 21);
    }
  }
  return result;
}

_QWORD* GameHr_10bd940(_QWORD* a1)
{
  _QWORD* result;

  *a1 = &GameData_20097b8;
  result = (_QWORD*)GameRoutine_10bc1a0((__int64)a1);
  if (result != nullptr) {
    return GameRoutine_1083bf0(result);
  }
  return result;
}

__int64 GameHr_10c0c60(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  int* v26;
  int v27;
  int v28;
  unsigned __int8 v30;
  __int64 v31;
  _WORD* v32;
  _WORD* v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int8* v43;
  _QWORD* v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  bool v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  void* v60;

  v2 = GameData_212dbb8[0];
  v3 = *(_QWORD*)GameData_212dbb8[0];
  v4 = *(_QWORD*)GameData_212c6a0[0];
  v5 = *(_QWORD*)GameData_212dbb8[0] + 41LL;
  v6 = *(_QWORD*)GameData_212dbb8[0] + 89LL;
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 40LL) & 1) != 0) {
    v7 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 56LL);
  }
  else {
    v7 = *(_QWORD*)GameData_212dbb8[0] + 41LL;
  }
  v10 = v7 != 0 &&
        ((*(_BYTE*)(v3 + 88) & 1) != 0
             ? (v8 = *(_QWORD*)(v3 + 104))
             : (v8 = *(_QWORD*)GameData_212dbb8[0] + 89LL),
         (v9 = GameRoutine_610540(v7, v8)) != 0) &&
        *(_QWORD*)(v9 + 48) != 0;
  *(_BYTE*)(a1 + 64) = v10;
  if (GameData_21ee260 != 0) {
    v11 = *(__int16*)(GameData_21ee260 + 14);
  }
  else {
    v11 = 0;
  }
  if ((*(_BYTE*)(v3 + 40) & 1) != 0) {
    v12 = *(_QWORD*)(v3 + 56);
  }
  else {
    v12 = v5;
  }
  if ((*(_BYTE*)(v3 + 88) & 1) != 0) {
    v13 = *(_QWORD*)(v3 + 104);
  }
  else {
    v13 = v6;
  }
  result = GameRoutine_811270(v12, v13);
  if (*(_DWORD*)(a1 + 8) >= 3u) {
    v15 = *(unsigned __int8*)(a1 + 40);
    if ((v15 & 1) != 0) {
      v16 = *(_QWORD*)(a1 + 48);
    }
    else {
      v16 = v15 >> 1;
    }
    v17 = *(unsigned __int8*)(v4 + 256);
    v18 = *(_QWORD*)(v4 + 264);
    if ((v17 & 1) == 0) {
      v18 = v17 >> 1;
    }
    if (v16 != v18 ||
        ((v15 & 1) != 0 ? (v19 = *(_QWORD*)(a1 + 56)) : (v19 = a1 + 41),
         (v17 & 1) != 0 ? (v20 = *(_QWORD*)(v4 + 272)) : (v20 = v4 + 257),
         (_DWORD)(result = GameRoutine_1a09cf0(v19, v20, v16)) != 0)) {
      *(_DWORD*)(a1 + 8) = 0;
    }
  }
  v21 = *(_QWORD*)v2;
  v22 = *(unsigned __int8*)(v4 + 280);
  v24 = *(_QWORD*)(v4 + 288);
  v23 = *(_QWORD*)(v4 + 296);
  v25 = *(_QWORD*)(*(_QWORD*)v2 + 48LL);
  if ((*(_BYTE*)(*(_QWORD*)v2 + 40LL) & 1) == 0) {
    v25 = *(_BYTE*)(*(_QWORD*)v2 + 40LL) >> 1;
  }
  if (v25 != 7) {
    goto LABEL_52;
  }
  v26 = (*(_BYTE*)(*(_QWORD*)v2 + 40LL) & 1) != 0 ? *(int**)(v21 + 56)
                                                  : (int*)(v21 + 41);
  v27 = *v26;
  v28 = *(int*)((char*)v26 + 3);
  if (v27 != *(_DWORD*)"Hub_000" || v28 != *(_DWORD*)"_000") {
    goto LABEL_52;
  }
  v30 = *(_BYTE*)(v21 + 88);
  v31 = *(_QWORD*)(v21 + 96);
  if ((v30 & 1) == 0) {
    v31 = v30 >> 1;
  }
  if (v31 != 2) {
    goto LABEL_52;
  }
  v32 = *(_WORD**)(v21 + 104);
  v33 = (_WORD*)(v21 + 89);
  if ((v30 & 1) != 0) {
    v33 = v32;
  }
  if (*v33 == 12609 &&
      ((v60 = &GameData_1aa50eb, v59 = GameRoutine_7a86e0(&GameData_1aa50eb),
        GameData_21caab0 == 0) ||
       (result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), &v59)) ==
           0 ||
       *(_DWORD*)(result + 32) == 0)) {
    v60 = &GameData_1aa50eb;
    v59 = GameRoutine_7a86e0(&GameData_1aa50eb);
    result = GameRoutine_716d80(&v59, 1);
    v34 = 1;
  }
  else {
  LABEL_52:
    v34 = 0;
  }
  v35 = *(_DWORD*)(a1 + 8);
  if (v35 <= 1) {
    if (v35 != 0) {
      if (v35 != 1) {
        return result;
      }
      if ((*(_BYTE*)(v3 + 40) & 1) != 0) {
        v36 = *(_QWORD*)(v3 + 56);
      }
      else {
        v36 = v5;
      }
      if ((*(_BYTE*)(v3 + 88) & 1) != 0) {
        v37 = *(_QWORD*)(v3 + 104);
      }
      else {
        v37 = v6;
      }
      GameRoutine_810000(v36, v37, v11, (unsigned int)v34);
      goto LABEL_78;
    }
    goto LABEL_65;
  }
  if (v35 != 4) {
    if (v35 != 2) {
      return result;
    }
  LABEL_65:
    v38 = v22 >> 1;
    v39 = v4 + 281;
    if ((v22 & 1) != 0) {
      v38 = v24;
      v39 = v23;
    }
    if (v38 != 0) {
      v40 = v39;
    }
    else {
      v40 = 0;
    }
    if ((*(_BYTE*)(v3 + 40) & 1) != 0) {
      v41 = *(_QWORD*)(v3 + 56);
    }
    else {
      v41 = v5;
    }
    if ((*(_BYTE*)(v3 + 88) & 1) != 0) {
      v42 = *(_QWORD*)(v3 + 104);
    }
    else {
      v42 = v6;
    }
    GameRoutine_80f710(v40, v41, v42, v11, v34);
    goto LABEL_78;
  }
  GameRoutine_80fb70();
LABEL_78:
  v43 = (unsigned __int8*)(v4 + 256);
  v44 = (_QWORD*)(a1 + 40);
  if (a1 + 40 != v4 + 256) {
    v45 = *v43;
    if ((*(_BYTE*)v44 & 1) != 0) {
      if ((v45 & 1) != 0) {
        v48 = *(_QWORD*)(v4 + 272);
      }
      else {
        v48 = v4 + 257;
      }
      if ((v45 & 1) != 0) {
        v49 = *(_QWORD*)(v4 + 264);
      }
      else {
        v49 = v45 >> 1;
      }
      GameRoutine_64dde0(v44, v48, v49);
    }
    else if ((v45 & 1) != 0) {
      GameRoutine_64df20(v44, *(_QWORD*)(v4 + 272), *(_QWORD*)(v4 + 264));
    }
    else {
      v46 = *(_QWORD*)v43;
      v47 = *(_QWORD*)(v4 + 272);
      *(_QWORD*)(a1 + 48) = *(_QWORD*)(v4 + 264);
      *(_QWORD*)(a1 + 56) = v47;
      *v44 = v46;
    }
  }
  *(_DWORD*)(a1 + 8) = 3;
  v50 = *GameData_212d468[0];
  v51 = *(unsigned __int8*)(*(_QWORD*)GameData_212dbc0[0] + 40LL);
  v52 = (v51 & 1) == 0;
  v53 = v51 >> 1;
  if (v52) {
    v54 = v53;
  }
  else {
    v54 = *(_QWORD*)(*(_QWORD*)GameData_212dbc0[0] + 48LL);
  }
  v55 = *(unsigned __int8*)(v50 + 2728);
  v56 = *(_QWORD*)(v50 + 2736);
  if (v52) {
    v57 = *(_QWORD*)GameData_212dbc0[0] + 41LL;
  }
  else {
    v57 = *(_QWORD*)(*(_QWORD*)GameData_212dbc0[0] + 56LL);
  }
  if ((v55 & 1) == 0) {
    v56 = v55 >> 1;
  }
  if (v54 != v56 ||
      ((v55 & 1) != 0 ? (v58 = *(_QWORD*)(v50 + 2744)) : (v58 = v50 + 2729),
       (_DWORD)(result = GameRoutine_1a09cf0(v57, v58, v54)) != 0)) {
    GameRoutine_60a060(v50 + 2728, v57, v54);
    return GameRoutine_a292c0(v50, 4, 1);
  }
  return result;
}

__int64 GameHr_10d6d40(__int64* a1, int* a2, int* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v8;
  __int64 v10;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v3 = *a1;
  v4 = a1[1];
  v5 = v4 - *a1;
  v6 = (v5 >> 5) + 1;
  if (v6 >> 59 != 0) {
    GameRoutine_10d6ee0_alt1();
  }
  v8 = a1[2] - v3;
  if (v8 >> 4 > v6) {
    v6 = v8 >> 4;
  }
  if ((unsigned __int64)v8 >= 0x7FFFFFFFFFFFFFE0LL) {
    v6 = 0x7FFFFFFFFFFFFFFLL;
  }
  if (v6 >> 59 != 0) {
    GameRoutine_60a210_alt1();
  }
  v10 = 32 * v6;
  v12 = fw_memory_g_heap_manager_ptr;
  v13 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       32 * v6, 16, 0);
  v14 = *a2;
  v15 = *a3;
  v16 = v13 + v5;
  v17 = v13 + v10;
  v18 = v13 + v5 - 32 * (v5 >> 5);
  v19 = v13 + v5 + 32;
  *(_QWORD*)(v16 + 8) = 0;
  *(_QWORD*)(v16 + 16) = 0;
  *(_QWORD*)(v16 + 24) = 0;
  *(_DWORD*)v16 = v14;
  *(_DWORD*)(v16 + 4) = v15;
  if (v3 != v4) {
    v20 = (_QWORD*)v3;
    v21 = (_QWORD*)(v13 + v5 - 32 * (v5 >> 5));
    do {
      *v21 = *v20;
      v21[1] = v20[1];
      v21[2] = v20[2];
      v21[3] = v20[3];
      v20[2] = 0;
      v20[3] = 0;
      v20[1] = 0;
      v20 += 4;
      v21 += 4;
    } while (v20 != (_QWORD*)v4);
    do {
      v22 = *(_QWORD*)(v3 + 8);
      if (v22 != 0) {
        *(_QWORD*)(v3 + 16) = v22;
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v23 = 128;
        }
        else {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v23, v22);
      }
      v3 += 32;
    } while (v3 != v4);
    v3 = *a1;
  }
  *a1 = v18;
  a1[1] = v19;
  a1[2] = v17;
  if (v3 != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v24, v3);
  }
  return v19;
}

__int64** GameHr_10d75e0(__int64** result, __int64 a2)
{
  __int64* v2;
  unsigned __int8 explicit;
  int* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  atomic_uchar* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64*** v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64* v28;
  unsigned __int64 v29;
  __int64** v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  long double v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;

  v2 = *result;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v5 = GameData_212df08;
  if ((explicit & 1) == 0) {
    result = (__int64**)GameRoutine_1a09fd0(GameData_212df10);
    if ((_DWORD)result != 0) {
      *v5 = GameRoutine_540(0, "ModelModule", 11);
      result = (__int64**)GameRoutine_1a09fe0(GameData_212df10);
    }
  }
  v6 = *(_QWORD*)(a2 + 512);
  v7 = v6;
  while (v7 != *(_QWORD*)(a2 + 504)) {
    v8 = *(_DWORD*)(v7 - 16);
    v7 -= 16;
    v6 -= 16;
    if (v8 == *v5) {
      if (*(_QWORD*)(a2 + 512) != v6) {
        v9 = *(_QWORD*)(v6 + 8);
        if (v9 != 0) {
          v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v9 + 24) + 112LL) + 24LL);
          v11 = *(unsigned __int16*)(v10 + 56);
          if (v11 >= 2) {
            v12 = 1;
            v13 = (atomic_uchar*)GameData_212ea08;
            v36 = *(unsigned __int16*)(v10 + 56);
            do {
              v15 = v12 + 1;
              result = (__int64**)GameRoutine_1a0a060(
                  *(_QWORD*)(*(_QWORD*)(v10 + 8) + 16 * (v12 + 1) + 16) + 2LL,
                  "_PartsScale");
              if (result != nullptr) {
                if ((atomic_load_explicit(v13, memory_order_acquire) & 1) ==
                        0 &&
                    (unsigned int)GameRoutine_1a09fd0(v13) != 0) {
                  *GameData_212ea00 = GameRoutine_540(0, "LocatorModule", 13);
                  GameRoutine_1a09fe0(v13);
                }
                v16 = *(_QWORD*)(a2 + 512);
                v17 = v16;
                do {
                  if (v17 == *(_QWORD*)(a2 + 504)) {
                    goto LABEL_19;
                  }
                  v18 = *(_DWORD*)(v17 - 16);
                  v17 -= 16;
                  v16 -= 16;
                } while (v18 != *GameData_212ea00);
                if (*(_QWORD*)(a2 + 512) == v16 ||
                    (v19 = *(_QWORD*)(v16 + 8)) == 0) {
                LABEL_19:
                  v37 = *(_QWORD*)(v9 + 24);
                  v19 = GameRoutine_bd3bc0(a2, &v37);
                }
                result = (__int64**)GameRoutine_a7c000(v19, (unsigned int)v12);
                if (result != nullptr) {
                  v21 = (__int64***)v2[1];
                  v20 = v2[2];
                  if ((unsigned __int64)v21 < v20) {
                    *v21 = result;
                    v14 = (__int64)(v21 + 1);
                  }
                  else {
                    v22 = *v2;
                    v23 = v9;
                    v24 = v10;
                    v25 = (__int64)v21 - *v2;
                    v26 = (v25 >> 3) + 1;
                    if (v26 >> 61 != 0) {
                      GameRoutine_d48080();
                    }
                    v27 = v20 - v22;
                    v28 = v2;
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
                        GameRoutine_60a210(result);
                      }
                      v30 = result;
                      v31 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68,
                                               8 * v29, 16, 0);
                      result = v30;
                    }
                    else {
                      v31 = 0;
                    }
                    v32 = v31 + 8 * v29;
                    v33 = v31 + v25 - 8 * (v25 >> 3);
                    *(_QWORD*)(v31 + v25) = result;
                    v14 = v31 + v25 + 8;
                    result = (__int64**)GameRoutine_1a0b950(v33, v22, v25);
                    *v28 = v33;
                    v28[1] = v14;
                    v28[2] = v32;
                    v2 = v28;
                    if (v22 != 0) {
                      v35 = 128;
                      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                        v35 = 56;
                      }
                      result = (__int64**)((
                          __int64 (*)(__int64, __int64))GameRoutine_1a0a4e0)(
                          *(_QWORD*)GameData_212bf68 + v35, (__int64)v22);
                    }
                    v9 = v23;
                    v10 = v24;
                    v11 = v36;
                    v13 = (atomic_uchar*)GameData_212ea08;
                  }
                  v2[1] = v14;
                }
              }
              v12 = v15;
            } while (v15 != v11);
          }
        }
      }
      return result;
    }
  }
  return result;
}

__int64 GameHr_10d7be0(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64* v8;
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
  char v28;
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
  __int64 v41;
  __int64 v42;

  v2 = *a1;
  v3 = a1[1];
  v4 = v3 - *a1;
  v5 = 1 - 0x71C71C71C71C71C7LL * (v4 >> 4);
  if (v5 > 0x1C71C71C71C71C7LL) {
    GameRoutine_10d7f20_alt1();
  }
  if (0x1C71C71C71C71C72LL * ((a1[2] - v2) >> 4) > v5) {
    v5 = 0x1C71C71C71C71C72LL * ((a1[2] - v2) >> 4);
  }
  if (0x8E38E38E38E38E39LL * ((a1[2] - v2) >> 4) >= 0xE38E38E38E38E3LL) {
    v5 = 0x1C71C71C71C71C7LL;
  }
  if (v5 > 0x1C71C71C71C71C7LL) {
    GameRoutine_60a210_alt1();
  }
  v42 = 9 * v5;
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      144 * v5, 16, 0);
  v10 = *a2;
  v11 = a2[1];
  v12 = v9 + v4;
  v13 = a2[10];
  *(_QWORD*)(v12 + 80) = 0;
  *(_QWORD*)(v12 + 88) = 0;
  *(_QWORD*)v12 = v10;
  *(_QWORD*)(v12 + 8) = v11;
  *(_QWORD*)(v12 + 16) = a2[2];
  *(_BYTE*)(v12 + 24) = *((_BYTE*)a2 + 24);
  v14 = a2[5];
  *(_QWORD*)(v12 + 32) = a2[4];
  *(_QWORD*)(v12 + 40) = v14;
  v15 = a2[7];
  *(_QWORD*)(v12 + 48) = a2[6];
  *(_QWORD*)(v12 + 56) = v15;
  v16 = a2[9];
  v17 = v13 - v16;
  *(_QWORD*)(v12 + 64) = a2[8];
  *(_QWORD*)(v12 + 72) = 0;
  if (v13 != v16) {
    v41 = v9;
    if (0xAAAAAAAAAAAAAAABLL * (v17 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
      GameRoutine_1063f60_alt1();
    }
    v18 = fw_memory_HeapManager_Allocate(*v8, v13 - v16, 16, 0);
    v19 = 0;
    *(_QWORD*)(v12 + 72) = v18;
    *(_QWORD*)(v12 + 88) = v18 + v17;
    do {
      v20 = v18 + v19;
      *(_DWORD*)v20 = -1;
      *(_QWORD*)(v20 + 8) = 0;
      *(_BYTE*)(v20 + 16) = 0;
      if (v18 != v16) {
        *(_DWORD*)v20 = *(_DWORD*)(v16 + v19);
        *(_QWORD*)(v20 + 8) = *(_QWORD*)(v16 + v19 + 8);
        *(_BYTE*)(v20 + 16) = *(_BYTE*)(v16 + v19 + 16);
      }
      v19 += 24;
    } while (v16 + v19 != v13);
    v2 = *a1;
    v3 = a1[1];
    v21 = v18 + v19;
    v9 = v41;
    v4 = v3 - *a1;
    *(_QWORD*)(v12 + 80) = v21;
  }
  v22 = v9 + 16 * v42;
  v23 = a2[15];
  *(_QWORD*)(v12 + 112) = a2[14];
  *(_QWORD*)(v12 + 120) = v23;
  v24 = a2[17];
  *(_QWORD*)(v12 + 128) = a2[16];
  *(_QWORD*)(v12 + 136) = v24;
  v25 = a2[13];
  *(_QWORD*)(v12 + 96) = a2[12];
  *(_QWORD*)(v12 + 104) = v25;
  if (v2 != v3) {
    v26 = v2;
    v27 = v12 - v4;
    do {
      v28 = *(_BYTE*)(v26 + 24);
      *(_QWORD*)(v27 + 8) = *(_QWORD*)(v26 + 8);
      v29 = *(_QWORD*)v26;
      v30 = *(_QWORD*)(v26 + 16);
      *(_BYTE*)(v27 + 24) = v28;
      *(_QWORD*)(v27 + 16) = v30;
      *(_QWORD*)v27 = v29;
      *(_QWORD*)(v27 + 40) = *(_QWORD*)(v26 + 40);
      *(_QWORD*)(v27 + 32) = *(_QWORD*)(v26 + 32);
      v31 = *(_QWORD*)(v26 + 48);
      v32 = *(_QWORD*)(v26 + 64);
      *(_QWORD*)(v27 + 56) = *(_QWORD*)(v26 + 56);
      *(_QWORD*)(v27 + 64) = v32;
      *(_QWORD*)(v27 + 48) = v31;
      *(_QWORD*)(v27 + 72) = *(_QWORD*)(v26 + 72);
      *(_QWORD*)(v27 + 80) = *(_QWORD*)(v26 + 80);
      *(_QWORD*)(v27 + 88) = *(_QWORD*)(v26 + 88);
      *(_QWORD*)(v26 + 80) = 0;
      *(_QWORD*)(v26 + 88) = 0;
      *(_QWORD*)(v26 + 72) = 0;
      *(_QWORD*)(v27 + 104) = *(_QWORD*)(v26 + 104);
      v33 = *(_QWORD*)(v26 + 136);
      v35 = *(_QWORD*)(v26 + 112);
      v34 = *(_QWORD*)(v26 + 120);
      *(_QWORD*)(v27 + 128) = *(_QWORD*)(v26 + 128);
      *(_QWORD*)(v27 + 136) = v33;
      *(_QWORD*)(v27 + 112) = v35;
      *(_QWORD*)(v27 + 120) = v34;
      v36 = *(_QWORD*)(v26 + 96);
      v26 += 144;
      *(_QWORD*)(v27 + 96) = v36;
      v27 += 144;
    } while (v26 != v3);
    do {
      v37 = *(_QWORD*)(v2 + 72);
      if (v37 != 0) {
        *(_QWORD*)(v2 + 80) = v37;
        if (*(_QWORD*)(*v8 + 200) != 0) {
          v38 = 128;
        }
        else {
          v38 = 56;
        }
        nn_mem_StandardAllocator_Free(*v8 + v38, v37);
      }
      v2 += 144;
    } while (v2 != v3);
    v2 = *a1;
  }
  *a1 = v12 - v4;
  a1[1] = v12 + 144;
  a1[2] = v22;
  if (v2 != 0) {
    v39 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v39 = 56;
    }
    nn_mem_StandardAllocator_Free(*v8 + v39, v2);
  }
  return v12 + 144;
}

_QWORD* GameHr_10d93e0(_QWORD* result, int a2)
{
  _QWORD* v2;
  __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  char* v8;
  signed __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  bool v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  long double v17;
  char* v18;
  char* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;

  if (a2 != -1) {
    v2 = result;
    if (*result != 0) {
      v4 = *(_QWORD*)(*(_QWORD*)(*result + 168LL) + 32LL) + ((__int64)a2 << 6);
      v6 = (char*)result[2];
      v5 = result[3];
      if ((unsigned __int64)v6 >= v5) {
        v8 = (char*)result[1];
        v9 = v6 - v8;
        v10 = (v6 - v8) >> 5;
        v11 = v10 + 1;
        if ((unsigned __int64)(v10 + 1) >> 59 != 0) {
          GameRoutine_10da100();
        }
        v12 = v5 - (_QWORD)v8;
        if (v12 >> 4 > v11) {
          v11 = v12 >> 4;
        }
        v13 = (unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFE0LL;
        v14 = 0x7FFFFFFFFFFFFFFLL;
        if (!v13) {
          v14 = v11;
        }
        if (v14 >> 59 != 0) {
          GameRoutine_60a210(result);
        }
        v15 = 4 * v14;
        v16 = GameData_212bf68;
        result = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68,
                                             32 * v14, 16, 0);
        v18 = (char*)result + v9;
        *(_DWORD*)v18 = a2;
        *((_QWORD*)v18 + 1) = v4;
        *((_QWORD*)v18 + 2) = 0;
        *((_QWORD*)v18 + 3) = 0;
        v7 = (__int64)result + v9 + 32;
        if (v8 != v6) {
          v19 = v8;
          v20 = (_QWORD*)((char*)result + v9 + -32 * v10);
          do {
            v20[1] = *((_QWORD*)v19 + 1);
            *v20 = *(_QWORD*)v19;
            v20[3] = *((_QWORD*)v19 + 3);
            v21 = *((_QWORD*)v19 + 2);
            v19 += 32;
            v20[2] = v21;
            v20 += 4;
          } while (v19 != v6);
        }
        v2[1] = (char*)result + v9 + -32 * v10;
        v2[2] = v7;
        v2[3] = &result[v15];
        if (v8 != nullptr) {
          v22 = 128;
          if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
            v22 = 56;
          }
          result =
              (_QWORD*)((__int64 (*)(__int64, __int64))GameRoutine_1a0a4e0)(
                  *(_QWORD*)v16 + v22, (__int64)v8);
        }
      }
      else {
        *(_DWORD*)v6 = a2;
        *((_QWORD*)v6 + 1) = v4;
        *((_QWORD*)v6 + 2) = 0;
        v7 = (__int64)(v6 + 32);
        *((_QWORD*)v6 + 3) = 0;
      }
      v2[2] = v7;
    }
  }
  return result;
}

__int64 GameHr_10de5e0(__int64* a1, __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  long double v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v2 = a1[1];
  v3 = a1[2];
  if (v2 >= v3) {
    v7 = v2 - *a1;
    v8 = 1 - 0x5555555555555555LL * (v7 >> 3);
    if (v8 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_1063f60(a1);
    }
    v9 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v3 - *a1) >> 3);
    if (2 * v9 > v8) {
      v8 = 2 * v9;
    }
    if (v9 >= 0x555555555555555LL) {
      v8 = 0xAAAAAAAAAAAAAAALL;
    }
    if (v8 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_60a210(a1);
    }
    v10 = 3 * v8;
    v11 = GameData_212bf68;
    v12 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 24 * v8, 16, 0);
    v14 = v12 + v7;
    *(_DWORD*)v14 = -1;
    *(_QWORD*)(v14 + 8) = 0;
    *(_BYTE*)(v14 + 16) = 0;
    if (v12 + v7 != a2) {
      *(_DWORD*)v14 = *(_DWORD*)a2;
      *(_QWORD*)(v14 + 8) = *(_QWORD*)(a2 + 8);
      *(_BYTE*)(v14 + 16) = *(_BYTE*)(a2 + 16);
    }
    v15 = *a1;
    v16 = a1[1];
    v6 = v14 + 24;
    v17 = v14 + *a1 - v16;
    if (v16 != *a1) {
      v18 = 0;
      do {
        v19 = v17 + v18;
        *(_DWORD*)v19 = -1;
        *(_QWORD*)(v19 + 8) = 0;
        *(_BYTE*)(v19 + 16) = 0;
        if (v17 != v15) {
          *(_DWORD*)v19 = *(_DWORD*)(v15 + v18);
          *(_QWORD*)(v19 + 8) = *(_QWORD*)(v15 + v18 + 8);
          *(_BYTE*)(v19 + 16) = *(_BYTE*)(v15 + v18 + 16);
        }
        v18 += 24;
      } while (v15 + v18 != v16);
    }
    *a1 = v17;
    a1[1] = v6;
    a1[2] = v12 + 8 * v10;
    if (v15 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v20 = 56;
      }
      ((__int64 (*)(__int64, __int64))GameRoutine_1a0a4e0)(*(_QWORD*)v11 + v20,
                                                           (__int64)v15);
    }
  }
  else {
    *(_QWORD*)(v2 + 8) = 0;
    *(_BYTE*)(v2 + 16) = 0;
    *(_DWORD*)v2 = -1;
    if (v2 != a2) {
      *(_DWORD*)v2 = *(_DWORD*)a2;
      *(_QWORD*)(v2 + 8) = *(_QWORD*)(a2 + 8);
      *(_BYTE*)(v2 + 16) = *(_BYTE*)(a2 + 16);
    }
    v6 = v2 + 24;
  }
  a1[1] = v6;
  return v6 - 24;
}

__int64* GameHr_10e33a0(__int64* result, _QWORD* a2)
{
  unsigned __int64 v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  long double v22;
  __int64 v23;

  v3 = (_QWORD*)result[1];
  v2 = result[2];
  v4 = result;
  if ((unsigned __int64)v3 >= v2) {
    v7 = (__int64)v3 - *result;
    v8 = (v7 >> 3) + 1;
    if (v8 >> 61 != 0) {
      GameRoutine_10e34d0();
    }
    v9 = v2 - *result;
    v10 = v9 >> 2;
    v11 = GameData_212bf68;
    if (v9 >> 2 <= v8) {
      v10 = (v7 >> 3) + 1;
    }
    if ((unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFF8LL) {
      v12 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v12 = v10;
    }
    if (v12 != 0) {
      if (v12 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v13 = a2;
      v14 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v12, 16, 0);
      a2 = v13;
    }
    else {
      v14 = 0;
    }
    v15 = *a2;
    *a2 = 0;
    v16 = (_QWORD*)(v14 + v7);
    v17 = v14 + 8 * v12;
    v18 = *v4;
    v19 = v4[1] - *v4;
    v20 = *v4;
    v21 = (char*)v16 - v19;
    *v16 = v15;
    v6 = v16 + 1;
    result = (__int64*)GameRoutine_1a0b950(v21, v20, v19);
    *v4 = (__int64)v21;
    v4[1] = (__int64)v6;
    v4[2] = v17;
    if (v18 != 0) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v23 = 56;
      }
      result = (__int64*)((__int64 (*)(__int64, __int64))GameRoutine_1a0a4e0)(
          *(_QWORD*)v11 + v23, (__int64)v18);
    }
  }
  else {
    v5 = *a2;
    *a2 = 0;
    *v3 = v5;
    v6 = v3 + 1;
  }
  v4[1] = (__int64)v6;
  return result;
}

void GameHr_10eb860(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  int v8;
  int v9;
  __int64* v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  _WORD* v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  _WORD* v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  _WORD* v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  _WORD* v41;
  __int64 v42;
  __int64* v43;
  __int64* i;
  __int64* v45;
  __int64* j;
  unsigned __int8* v47;
  __int64* v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  bool v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  _QWORD* v62;
  _QWORD* v63;
  unsigned __int64 v64;
  __int64 v65;
  int v66;
  int* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  int v76;
  int v77;
  __int64 v78;
  __int64 v79;
  unsigned int v80;
  int v81;
  int v82;
  int v83;
  int v85;
  int v86;
  int v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  int v94;
  __int64* v95;
  int v96;
  int v97;
  int v98;
  int v99;
  __int64* v100;
  __int64* v101;
  int v102;
  int v103;
  int v104;
  int v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64* v109;
  int v110;
  int v111;
  struct {
    __int64 v112;
    unsigned __int64 v113;
    int v114;
    char v115;
    char gap37_[3];
    char v116;
    char gap41_[7];
    __int64 v117;
    __int64 v118;
    __int64 v119;
    __int64 v120;
    unsigned __int64 v121;
  } v112_;
  struct {
    __int64 v122;
    __int64 v123;
    __int64 v124;
    __int64 v125;
    __int64 v126;
    __int64 v127;
    __int64 v128;
    __int64 v129;
    __int64 v130;
  } v122_;
  _WORD v131[6];

  *(_BYTE*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  v3 = a1 + 312;
  *(_QWORD*)a1 = 0;
  v4 = a1 + 408;
  v5 = a1 + 504;
  *(_QWORD*)(a1 + 64) = 0;
  *(_BYTE*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_DWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_BYTE*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_BYTE*)(a1 + 188) = 0;
  *(_QWORD*)(a1 + 128) = 0xC3FA0000C3FA0000LL;
  *(_QWORD*)(a1 + 136) = 0x43FA000043FA0000LL;
  *(_QWORD*)(a1 + 144) = 0xC3FA0000C3FA0000LL;
  *(_QWORD*)(a1 + 120) = 0x43FA000043FA0000LL;
  v7 = a1 + 120;
  *(_BYTE*)(a1 + 192) = 0;
  *(_WORD*)(a1 + 196) = 0;
  *(_BYTE*)(a1 + 198) = 0;
  *(_DWORD*)(a1 + 200) = 0;
  *(_WORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_BYTE*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_DWORD*)(a1 + 247) = 0;
  *(_DWORD*)(v3 + 31) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_BYTE*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 276) = 0x6300000063LL;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_DWORD*)(v4 + 31) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_BYTE*)(a1 + 464) = 0;
  *(_DWORD*)(v5 + 31) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 284) = 0;
  *(_BYTE*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_DWORD*)(a1 + 720) = 0;
  *(_QWORD*)(a1 + 712) = 0;
  *(_QWORD*)(a1 + 704) = 0;
  *(_QWORD*)(a1 + 696) = 0;
  *(_QWORD*)(a1 + 688) = 0;
  *(_QWORD*)(a1 + 680) = 0;
  *(_QWORD*)(a1 + 672) = 0;
  *(_QWORD*)(a1 + 292) = 0x6300000000LL;
  *(_QWORD*)(a1 + 664) = 0;
  *(_QWORD*)(a1 + 656) = 0;
  *(_QWORD*)(a1 + 648) = 0;
  *(_QWORD*)(a1 + 640) = 0;
  *(_QWORD*)(a1 + 632) = 0;
  *(_QWORD*)(a1 + 624) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 760) = 0;
  *(_QWORD*)(a1 + 300) = -1;
  *(_QWORD*)(a1 + 752) = 0;
  *(_QWORD*)(a1 + 744) = 0;
  *(_QWORD*)(a1 + 736) = 0;
  *(_QWORD*)(a1 + 728) = 0;
  *(_QWORD*)(a1 + 372) = 0x6300000063LL;
  *(_QWORD*)(a1 + 380) = 0;
  *(_QWORD*)(a1 + 388) = 0x6300000000LL;
  *(_QWORD*)(a1 + 396) = -1;
  *(_QWORD*)(a1 + 468) = 0x6300000063LL;
  *(_QWORD*)(a1 + 476) = 0;
  *(_QWORD*)(a1 + 484) = 0x6300000000LL;
  *(_QWORD*)(a1 + 492) = -1;
  *(_QWORD*)(a1 + 564) = 0x6300000063LL;
  *(_QWORD*)(a1 + 572) = 0;
  *(_QWORD*)(a1 + 580) = 0x6300000000LL;
  *(_QWORD*)(a1 + 588) = -1;
  v8 = *(_DWORD*)(a2 + 216);
  v9 = v8 | 1;
  *(_DWORD*)(a1 + 112) = v8 | 1;
  *(_DWORD*)(a1 + 116) = *(_DWORD*)(a2 + 220);
  if (*(_QWORD*)(a2 + 8) != 0) {
    if (*(_QWORD*)(a2 + 56) != 0) {
      goto LABEL_3;
    }
  }
  else {
    v9 = v8 | 0x20001;
    *(_DWORD*)(a1 + 112) = v8 | 0x20001;
    if (*(_QWORD*)(a2 + 56) != 0) {
      goto LABEL_3;
    }
  }
  *(_DWORD*)(a1 + 112) = v9 | 0x20000;
LABEL_3:
  v10 = (__int64*)(a1 + 728);
  GameRoutine_10ba5c0(v7, (float*)a2);
  *(_QWORD*)(a1 + 744) = *(_QWORD*)(a1 + 736);
  v11 = *(_QWORD*)(a2 + 24);
  if (v11 == 0) {
    goto LABEL_13;
  }
  v12 = *(unsigned __int8*)(v11 + 104);
  v13 = 16;
  if (v12 == 6 || v12 == 4) {
  LABEL_8:
    *(_DWORD*)(a1 + 112) |= v13;
    v11 = *(_QWORD*)(a2 + 24);
    if (v11 == 0) {
      goto LABEL_13;
    }
    goto LABEL_9;
  }
  if (v12 == 3) {
    v13 = 256;
    goto LABEL_8;
  }
LABEL_9:
  v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       24, 16, 0);
  v15 = *v10;
  *(_DWORD*)v14 = 0;
  *(_QWORD*)(v14 + 8) = v11;
  *v10 = v14;
  *(_BYTE*)(v14 + 16) = 1;
  if (v15 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v16,
                                  v15);
  }
LABEL_13:
  if (*(_QWORD*)(a2 + 32) != 0) {
    v112_.v113 = *(_QWORD*)(a2 + 32);
    LODWORD(v112_.v112) = 0;
    LOBYTE(v112_.v114) = 1;
    GameHr_10de5e0((__int64*)(a1 + 736), (__int64)&v112_.v112);
  }
  v17 = *(_QWORD*)(a2 + 72);
  if (v17 != 0) {
    v18 = *(unsigned __int8*)(v17 + 104);
    if (v18 == 3) {
      v19 = 256;
    }
    else {
      if (v18 != 6 && v18 != 4) {
      LABEL_24:
        v20 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
        v21 = *v10;
        *(_QWORD*)(v20 + 8) = v17;
        *v10 = v20;
        *(_DWORD*)v20 = 1;
        *(_BYTE*)(v20 + 16) = 1;
        if (v21 != 0) {
          v22 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v22 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v21);
        }
        goto LABEL_28;
      }
      v19 = 16;
    }
    *(_DWORD*)(a1 + 112) |= v19;
    v17 = *(_QWORD*)(a2 + 72);
    if (v17 == 0) {
      goto LABEL_28;
    }
    goto LABEL_24;
  }
LABEL_28:
  if (*(_QWORD*)(a2 + 80) != 0) {
    v112_.v113 = *(_QWORD*)(a2 + 80);
    LODWORD(v112_.v112) = 1;
    LOBYTE(v112_.v114) = 1;
    GameHr_10de5e0((__int64*)(a1 + 736), (__int64)&v112_.v112);
  }
  v23 = *(_QWORD*)(a2 + 8);
  *(_QWORD*)(a1 + 240) = v23;
  if (v23 != 0) {
    v24 = *(_DWORD*)(a2 + 16);
    *(_BYTE*)(a1 + 272) = 0;
    *(_DWORD*)(a1 + 296) = v24;
    *(_DWORD*)(a1 + 280) = v24;
    *(_DWORD*)(a1 + 276) = v24;
    *(_QWORD*)(a1 + 284) = 0x630000000CLL;
    *(_DWORD*)(a1 + 292) = 8;
  }
  v25 = *(_QWORD*)(a2 + 40);
  if (v25 != 0) {
    v26 = GameRoutine_6d7b80_alt1(v25);
    if ((*(_DWORD*)v26 & 0xFFF) != 0) {
      v27 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                  8LL * (*(_DWORD*)v26 & 0xFFF)) +
                       792LL);
    }
    else {
      v27 = 0;
    }
    *(_QWORD*)(a1 + 216) = v27;
  }
  v28 = *(_QWORD*)(a2 + 56);
  *(_QWORD*)(a1 + 336) = v28;
  if (v28 != 0) {
    v29 = *(_DWORD*)(a2 + 64);
    *(_DWORD*)(a1 + 392) = v29;
    *(_DWORD*)(a1 + 376) = v29;
    *(_DWORD*)(a1 + 372) = v29;
    *(_BYTE*)(a1 + 368) = 1;
    *(_QWORD*)(a1 + 380) = 0x630000000CLL;
    *(_DWORD*)(a1 + 388) = 8;
  }
  v30 = *(_QWORD*)(a2 + 88);
  if (v30 != 0) {
    v31 = GameRoutine_6d7b80_alt1(v30);
    if ((*(_DWORD*)v31 & 0xFFF) != 0) {
      v32 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                  8LL * (*(_DWORD*)v31 & 0xFFF)) +
                       792LL);
    }
    else {
      v32 = 0;
    }
    *(_QWORD*)v3 = v32;
  }
  v33 = *(_QWORD*)(a2 + 104);
  *(_QWORD*)(a1 + 432) = v33;
  if (v33 != 0) {
    v34 = *(_DWORD*)(a2 + 112);
    *(_DWORD*)(a1 + 488) = v34;
    *(_DWORD*)(a1 + 472) = v34;
    *(_DWORD*)(a1 + 468) = v34;
    *(_BYTE*)(a1 + 464) = 1;
    *(_QWORD*)(a1 + 476) = 0x630000000CLL;
    *(_DWORD*)(a1 + 484) = 8;
  }
  v35 = *(_QWORD*)(a2 + 136);
  if (v35 != 0) {
    v36 = GameRoutine_6d7b80_alt1(v35);
    if ((*(_DWORD*)v36 & 0xFFF) != 0) {
      v37 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                  8LL * (*(_DWORD*)v36 & 0xFFF)) +
                       792LL);
    }
    else {
      v37 = 0;
    }
    *(_QWORD*)v4 = v37;
  }
  v38 = *(_QWORD*)(a2 + 152);
  *(_QWORD*)(a1 + 528) = v38;
  if (v38 != 0) {
    v39 = *(_DWORD*)(a2 + 160);
    *(_DWORD*)(a1 + 584) = v39;
    *(_DWORD*)(a1 + 568) = v39;
    *(_DWORD*)(a1 + 564) = v39;
    *(_BYTE*)(a1 + 560) = 1;
    *(_QWORD*)(a1 + 572) = 0x630000000CLL;
    *(_DWORD*)(a1 + 580) = 8;
  }
  v40 = *(_QWORD*)(a2 + 184);
  if (v40 != 0) {
    v41 = GameRoutine_6d7b80_alt1(v40);
    if ((*(_DWORD*)v41 & 0xFFF) != 0) {
      v42 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                  8LL * (*(_DWORD*)v41 & 0xFFF)) +
                       792LL);
    }
    else {
      v42 = 0;
    }
    *(_QWORD*)v5 = v42;
  }
  v43 = *(__int64**)(a2 + 248);
  for (i = *(__int64**)(a2 + 256); v43 != i; v43 += 4) {
    GameRoutine_d28880_alt1((__int64*)(a1 + 600), v43);
  }
  v45 = *(__int64**)(a2 + 272);
  for (j = *(__int64**)(a2 + 280); v45 != j; v45 += 4) {
    GameRoutine_d28880_alt1((__int64*)(a1 + 624), v45);
  }
  v47 = (unsigned __int8*)(a2 + 296);
  v48 = (__int64*)(a1 + 696);
  if (a1 + 696 != a2 + 296) {
    v49 = *v47;
    if ((*(_BYTE*)v48 & 1) != 0) {
      if ((v49 & 1) != 0) {
        v52 = *(_QWORD*)(a2 + 312);
      }
      else {
        v52 = a2 + 297;
      }
      if ((v49 & 1) != 0) {
        v53 = *(_QWORD*)(a2 + 304);
      }
      else {
        v53 = v49 >> 1;
      }
      SpineModel_64dde0(v48, v52, v53);
    }
    else if ((v49 & 1) != 0) {
      GameRoutine_64df20_alt1(v48, *(_QWORD*)(a2 + 312), *(_QWORD*)(a2 + 304));
    }
    else {
      v50 = *(_QWORD*)v47;
      v51 = *(_QWORD*)(a2 + 312);
      *(_QWORD*)(a1 + 704) = *(_QWORD*)(a2 + 304);
      *(_QWORD*)(a1 + 712) = v51;
      *v48 = v50;
    }
  }
  *(_DWORD*)(a1 + 720) = *(_DWORD*)(a2 + 320);
  v54 = *(unsigned __int8*)(a2 + 224);
  v55 = *(_QWORD*)(a2 + 232);
  if ((v54 & 1) == 0) {
    v55 = v54 >> 1;
  }
  if (v55 != 0) {
    v56 = (v54 & 1) != 0 ? *(_QWORD*)(a2 + 240) : a2 + 225;
    v57 = game_HashString(v56);
    if (v57 != 0) {
      v58 = *(_QWORD*)(GameData_21c99b0 + 96);
      v59 = v58 == 0 || *(_QWORD*)(GameData_21c99b0 + 112) == 0;
      if (!v59) {
        v60 = v58 - 1;
        if ((v58 & (v58 - 1)) != 0) {
          v61 = v57;
          if (v57 >= v58) {
            v61 = v57 % v58;
          }
        }
        else {
          v61 = v60 & v57;
        }
        v62 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b0 + 88) + 8 * v61);
        if (v62 != nullptr) {
          v63 = (_QWORD*)*v62;
          if (v63 != nullptr) {
            if ((v58 & v60) == 0) {
              while (1) {
                v65 = v63[1];
                if (v65 == v57) {
                  if (v63[2] == v57) {
                    goto LABEL_105;
                  }
                }
                else if ((v65 & v60) != v61) {
                  goto LABEL_107;
                }
                v63 = (_QWORD*)*v63;
                if (v63 == nullptr) {
                  goto LABEL_107;
                }
              }
            }
            do {
              v64 = v63[1];
              if (v64 == v57) {
                if (v63[2] == v57) {
                LABEL_105:
                  if (v63[3] != 0) {
                    v66 = *(_DWORD*)(a1 + 112);
                    v112_.v113 = v63[3];
                    LODWORD(v112_.v112) = 0;
                    LOBYTE(v112_.v114) = 1;
                    *(_DWORD*)(a1 + 112) = v66 | 0x20008;
                    GameHr_1090b20(a1, (__int64)&v112_.v112);
                  }
                  break;
                }
              }
              else {
                if (v64 >= v58) {
                  v64 %= v58;
                }
                if (v64 != v61) {
                  break;
                }
              }
              v63 = (_QWORD*)*v63;
            } while (v63 != nullptr);
          }
        }
      }
    }
  }
LABEL_107:
  v67 = (int*)*v10;
  v131[0] = 0;
  if (v67 != nullptr && *(_BYTE*)(*((_QWORD*)v67 + 1) + 104LL) == 2) {
    *((_BYTE*)v131 + *v67) = 1;
  }
  v68 = *(_QWORD*)(a2 + 192);
  v69 = *(_QWORD*)(a2 + 200);
  if (v68 != v69) {
    while (1) {
      v112_.v114 = 0;
      v112_.v115 = 0;
      v112_.v116 = 0;
      v112_.v117 = 0;
      v112_.v118 = 0;
      v112_.v119 = 0;
      v112_.v120 = 0;
      v112_.v121 = 0;
      v122_.v122 = 0;
      v122_.v123 = 0;
      v122_.v124 = 0;
      v122_.v125 = 0;
      v122_.v126 = 0;
      v122_.v127 = 0;
      v122_.v128 = 0;
      v122_.v129 = 0;
      v122_.v130 = 0;
      v112_.v112 = 0;
      v112_.v113 = 0x100000000LL;
      if (&v122_.v122 != (__int64*)(v68 + 8)) {
        v70 = *(_QWORD*)(v68 + 8);
        v71 = *(_QWORD*)(v68 + 16);
        v72 = v71 - v70;
        if (v71 != v70) {
          if (0xAAAAAAAAAAAAAAABLL * (v72 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
            GameRoutine_1063f60_alt1();
          }
          v73 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v71 - v70, 16, 0);
          v74 = 0;
          v122_.v122 = v73;
          v122_.v123 = v73;
          v122_.v124 = v73 + v72;
          do {
            v75 = v73 + v74;
            *(_DWORD*)v75 = -1;
            *(_QWORD*)(v75 + 8) = 0;
            *(_BYTE*)(v75 + 16) = 0;
            if (v73 != v70) {
              *(_DWORD*)v75 = *(_DWORD*)(v70 + v74);
              *(_QWORD*)(v75 + 8) = *(_QWORD*)(v70 + v74 + 8);
              *(_BYTE*)(v75 + 16) = *(_BYTE*)(v70 + v74 + 16);
            }
            v74 += 24;
          } while (v70 + v74 != v71);
          v122_.v123 = v73 + v74;
        }
      }
      v76 = *(_DWORD*)v68;
      v77 = *(_DWORD*)(v68 + 4);
      if ((GameRoutine_108cfd0(*(_DWORD*)v68) & 1) != 0) {
        break;
      }
      v78 = 0;
      if (v76 <= 82342) {
        if (v76 == -1679919317 || v76 == -1152263229 || v76 == -1082066006) {
          goto LABEL_134;
        }
      }
      else if (v76 > 65798034) {
        if (v76 == 65798035 || v76 == 2017201876) {
          goto LABEL_134;
        }
      }
      else if (v76 == 82343 || v76 == 65265051) {
        goto LABEL_134;
      }
      if ((unsigned int)(v76 + 906281409) < 3) {
        break;
      }
      v79 = 3;
      v78 = 1;
      v80 = 0;
      v81 = v77;
      v77 = v76;
    LABEL_135:
      v112_.v113 = __PAIR64__(v80, v78);
      v112_.v121 = __PAIR64__(v77, v81);
      if (v81 == 65265051) {
        HIDWORD(v112_.v113) = v78;
        v81 = 82343;
        LODWORD(v112_.v121) = 82343;
        v80 = v78;
        goto LABEL_139;
      }
      if (v81 == -1790555660) {
        v81 = 1525034596;
        LODWORD(v112_.v121) = 1525034596;
      LABEL_139:
        LODWORD(v112_.v113) = v79;
        goto LABEL_141;
      }
      v79 = v78;
    LABEL_141:
      v82 = 1;
      if (v77 <= 232551548) {
        v83 = 1073741826;
        if (v77 != -1714774663) {
          if (v77 == 143741767) {
            goto LABEL_156;
          }
          goto LABEL_150;
        }
        goto LABEL_149;
      }
      if ((unsigned int)(v77 - 232551549) > 0x10 ||
          ((1 << (v77 - 125)) & 0x10401) == 0) {
        if (v77 == 406427879) {
          v83 = 1073741828;
        LABEL_149:
          v77 = -1193575777;
          HIDWORD(v112_.v112) |= v83;
          HIDWORD(v112_.v121) = -1193575777;
        }
      LABEL_150:
        if (v77 == -1911544118 || v77 == -1911544124) {
          v82 = 1;
        }
        else {
          v82 = 2;
        }
      }
    LABEL_156:
      v85 = v112_.v112 | v82;
      if (v77 == -1193575777) {
        v85 |= 8u;
      }
      LODWORD(v112_.v112) = v85;
      if (v81 <= 309207022) {
        if (v81 <= 82342) {
          if (v81 == -2068235574) {
            goto LABEL_173;
          }
          v86 = -1679919317;
          goto LABEL_174;
        }
        if (v81 != 82343) {
          v86 = 65798035;
          goto LABEL_174;
        }
      }
      else {
        if (v81 <= 603384503) {
          if (v81 != 309207023 && v81 != 309207209 && v81 != 603384318) {
            goto LABEL_179;
          }
        LABEL_173:
          v85 |= 4u;
          v86 = 2017201876;
          LODWORD(v112_.v112) = v85;
        LABEL_174:
          if (v81 != v86) {
            goto LABEL_179;
          }
          goto LABEL_175;
        }
        if (v81 == 603384504) {
          goto LABEL_173;
        }
        if (v81 != 2017201876) {
          if (v81 != 989295323) {
            goto LABEL_179;
          }
          goto LABEL_173;
        }
      }
    LABEL_175:
      if ((*(_DWORD*)(a2 + 216) & 0x40000) != 0) {
        v87 = 640;
      }
      else {
        v87 = 768;
      }
      v85 |= v87;
      LODWORD(v112_.v112) = v85;
    LABEL_179:
      if (v77 <= -77626399) {
        if (v77 == -972548316 || v77 == -93581017) {
        LABEL_186:
          v85 |= 0x40u;
          LODWORD(v112_.v112) = v85;
        }
      }
      else if (v77 == -77626398 || v77 == 1715476756 || v77 == 1400556095) {
        goto LABEL_186;
      }
      if (v81 == 1525034596) {
        v81 = 0;
        LODWORD(v112_.v121) = 0;
      }
      if (v77 == 143741767 || v77 == -270062627) {
        HIDWORD(v112_.v121) = 0;
      }
      v88 = v79 & 1;
      if (*(_BYTE*)((unsigned __int64)v131 | v88) == 1 && (v85 & 2) != 0) {
        v85 |= 0x10u;
        *(_BYTE*)((unsigned __int64)v131 | v88) = 0;
        LODWORD(v112_.v112) = v85;
      }
      v89 = a2 + 48LL * v80;
      if (v81 != 82343) {
        if ((v85 & 0x40) != 0) {
          *((_DWORD*)&v122_.v126 + 3 * v80) = 99;
        }
        else if ((v85 & 0xA) == 2) {
          *((_DWORD*)&v122_.v126 + 3 * v80) = *(_DWORD*)(v89 + 20);
        }
        goto LABEL_207;
      }
      if ((v79 & 2) != 0) {
        v90 = 12LL * (unsigned int)v88;
      }
      else {
        v91 = 96;
        if (v79 == 1) {
          v91 = 144;
        }
        if (*(_QWORD*)(a2 + v91 + 8) != 0 || *(_QWORD*)(v89 + 8) == 0) {
          HIDWORD(v112_.v113) = v79;
          *((_DWORD*)&v122_.v126 + 3 * (unsigned int)v79) = -1;
          goto LABEL_207;
        }
        v90 = 12LL * v80;
      }
      *(_DWORD*)((char*)&v122_.v126 + v90) = -1;
    LABEL_207:
      v93 = *(_QWORD*)(a1 + 32);
      v92 = *(_QWORD*)(a1 + 40);
      v94 = *(_DWORD*)(a2 + 16);
      LODWORD(v122_.v125) = v94;
      if (954437177 * (unsigned int)((unsigned __int64)(v92 - v93) >> 4) != 0) {
        v95 = (__int64*)(v92 - 144);
        if (v93 == v92) {
          v95 = &GameData_2235e30;
        }
        v96 = *((_DWORD*)v95 + 25);
      }
      else {
        v96 = v94;
      }
      v97 = v96 - v122_.v126;
      if (v94 >= v97) {
        v94 = v97;
      }
      if (v97 >= 0) {
        v98 = v94;
      }
      else {
        v98 = 0;
      }
      v99 = *(_DWORD*)(a2 + 64);
      HIDWORD(v122_.v125) = v98;
      HIDWORD(v122_.v126) = v99;
      if (954437177 * (unsigned int)((unsigned __int64)(v92 - v93) >> 4) != 0) {
        v100 = (__int64*)(v92 - 144);
        v59 = v93 == v92;
        v101 = &GameData_2235e30;
        if (!v59) {
          v101 = v100;
        }
        v102 = *((_DWORD*)v101 + 28);
      }
      else {
        v102 = v99;
      }
      v103 = v102 - HIDWORD(v122_.v127);
      if (v99 >= v103) {
        v104 = v103;
      }
      else {
        v104 = v99;
      }
      if (v103 >= 0) {
        v105 = v104;
      }
      else {
        v105 = 0;
      }
      LODWORD(v122_.v127) = v105;
      GameRoutine_10d7a40(a1, &v112_.v112);
      if (v122_.v122 != 0) {
        v122_.v123 = v122_.v122;
        v106 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v106 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v106, v122_.v122);
      }
      v68 += 32;
      if (v68 == v69) {
        goto LABEL_236;
      }
    }
    v78 = 0;
  LABEL_134:
    v79 = 2;
    v80 = 1;
    v81 = v76;
    goto LABEL_135;
  }
LABEL_236:
  v108 = *(_QWORD*)(a1 + 32);
  v107 = *(_QWORD*)(a1 + 40);
  if ((int)(954437177 * ((unsigned __int64)(v107 - v108) >> 4)) <= 0) {
    v111 = *(_DWORD*)(a1 + 112);
  }
  else {
    v59 = v107 == v108;
    v109 = &GameData_2235e30;
    if (!v59) {
      v109 = *(__int64**)(a1 + 32);
    }
    v110 = *((_DWORD*)v109 + 2);
    v111 = *(_DWORD*)(a1 + 112);
    if ((v110 & 0xFFFFFFFD) != 0) {
      v111 |= 0x80000u;
      *(_DWORD*)(a1 + 112) = v111;
    }
  }
  if ((v111 & 0x190) != 0) {
    *(_DWORD*)(a1 + 112) = v111 | 0x400;
  }
  *(_QWORD*)(a1 + 760) = *(_QWORD*)(a2 + 328);
}

float GameHr_10ec990()
{
  float v0;
  __int64 v1;
  float result;
  _QWORD v3[2];

  v3[1] = &GameData_1a98ad7;
  v0 = 0.0;
  v3[0] = GameRoutine_7a86e0(&GameData_1a98ad7);
  if (GameData_21caab0 != 0) {
    v1 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v3);
    if (v1 != 0) {
      v0 = (float)*(int*)(v1 + 32);
    }
  }
  result = v0 / 1000.0;
  if ((float)(v0 / 1000.0) <= 0.0) {
    return 0.5;
  }
  return result;
}

__int64 GameHr_10f8960(_BYTE* a1, __int64** a2)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64** v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64* i;
  __int64 v23;
  __int64 v24;

  if (a1 == nullptr) {
    return 0;
  }
  if (*a1 == 0) {
    return 0;
  }
  v4 = GameRoutine_7a86e0(a1);
  if (v4 == 0) {
    return 0;
  }
  v5 = *(_QWORD*)(GameData_21c9c48 + 96);
  if (v5 == 0 || *(_QWORD*)(GameData_21c9c48 + 112) == 0) {
    return 0;
  }
  v7 = v5 - 1;
  if ((v5 & (v5 - 1)) != 0) {
    v8 = v4;
    v9 = a2;
    if (v4 >= v5) {
      v8 = v4 % v5;
    }
  }
  else {
    v8 = v7 & v4;
    v9 = a2;
  }
  v10 = *(_QWORD**)(*(_QWORD*)(GameData_21c9c48 + 88) + 8 * v8);
  if (v10 == nullptr) {
    return 0;
  }
  v11 = (_QWORD*)*v10;
  if (v11 == nullptr) {
    return 0;
  }
  if ((v5 & v7) == 0) {
    while (1) {
      v14 = v11[1];
      if (v14 == v4) {
        if (v11[2] == v4) {
          goto LABEL_28;
        }
      }
      else if ((v14 & v7) != v8) {
        return 0;
      }
      v11 = (_QWORD*)*v11;
      v12 = 0;
      if (v11 == nullptr) {
        return v12;
      }
    }
  }
  while (1) {
    v13 = v11[1];
    if (v13 == v4) {
      break;
    }
    if (v13 >= v5) {
      v13 %= v5;
    }
    if (v13 != v8) {
      return 0;
    }
  LABEL_17:
    v11 = (_QWORD*)*v11;
    v12 = 0;
    if (v11 == nullptr) {
      return v12;
    }
  }
  if (v11[2] != v4) {
    goto LABEL_17;
  }
LABEL_28:
  v15 = v11[3];
  if (v15 == 0) {
    return 0;
  }
  v16 = *(_QWORD*)(GameData_21c9c48 + 64);
  v17 = *(unsigned __int16*)(v15 + 16) + 1LL;
  v18 = (unsigned __int64)(*(_QWORD*)(GameData_21c9c48 + 72) - v16) >> 3;
  if ((int)v17 < (int)v18) {
    v12 = *(_QWORD*)(v16 + 8 * v17);
    if (v12 != 0) {
      v19 = *v9;
      v20 = v9[1];
      while (1) {
        v21 = *(_QWORD*)(v12 + 8);
        if (!GameRoutine_109ec70(v21, (__int64)a1)) {
          break;
        }
        for (i = v19; i != v20; ++i) {
          v23 = *i;
          if (GameRoutine_1a0a060(v21, v23) != 0) {
            return v12;
          }
        }
        v24 = *(unsigned __int16*)(v12 + 16) + 1LL;
        if ((int)v24 < (int)v18) {
          v12 = *(_QWORD*)(v16 + 8 * v24);
          if (v12 != 0) {
            continue;
          }
        }
        break;
      }
    }
  }
  if (*(float*)(v15 + 120) == 0.0 &&
      (*(_QWORD*)(v15 + 32) | *(_QWORD*)(v15 + 40) | *(_QWORD*)(v15 + 48) |
       *(_QWORD*)(v15 + 56) | *(_QWORD*)(v15 + 64) | *(_QWORD*)(v15 + 72) |
       *(_QWORD*)(v15 + 80) | *(_QWORD*)(v15 + 88) | *(_QWORD*)(v15 + 96) |
       *(_QWORD*)(v15 + 104) | *(_QWORD*)(v15 + 112)) == 0) {
    return 0;
  }
  else {
    return v15;
  }
}

__int64 GameHr_10f8d80(__int64 result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  bool v10;
  bool v11;
  bool v12;
  bool v13;
  bool v14;
  bool v15;
  bool v16;
  bool v17;
  bool v18;
  bool v19;

  if (result == 0) {
    return result;
  }
  if (*(_BYTE*)result == 0) {
    return 0;
  }
  v1 = GameRoutine_7a86e0(result);
  if (v1 == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(GameData_21c9c48 + 96);
  if (v2 == 0 || *(_QWORD*)(GameData_21c9c48 + 112) == 0) {
    return 0;
  }
  v4 = v2 - 1;
  if ((v2 & (v2 - 1)) != 0) {
    v5 = v1;
    if (v1 >= v2) {
      v5 = v1 % v2;
    }
  }
  else {
    v5 = v4 & v1;
  }
  v6 = *(_QWORD**)(*(_QWORD*)(GameData_21c9c48 + 88) + 8 * v5);
  if (v6 == nullptr) {
    return 0;
  }
  v7 = (_QWORD*)*v6;
  if (v7 == nullptr) {
    return 0;
  }
  if ((v2 & v4) == 0) {
    while (1) {
      v9 = v7[1];
      if (v9 == v1) {
        if (v7[2] == v1) {
          goto LABEL_30;
        }
      }
      else if ((v9 & v4) != v5) {
        return 0;
      }
      v7 = (_QWORD*)*v7;
      if (v7 == nullptr) {
        return 0;
      }
    }
  }
  while (1) {
    v8 = v7[1];
    if (v8 == v1) {
      break;
    }
    if (v8 >= v2) {
      v8 %= v2;
    }
    if (v8 != v5) {
      return 0;
    }
  LABEL_19:
    v7 = (_QWORD*)*v7;
    if (v7 == nullptr) {
      return 0;
    }
  }
  if (v7[2] != v1) {
    goto LABEL_19;
  }
LABEL_30:
  result = v7[3];
  if (result == 0) {
    return 0;
  }
  v10 = *(_QWORD*)(result + 32) == 0 && *(_QWORD*)(result + 40) == 0;
  v11 = v10 && *(_QWORD*)(result + 48) == 0;
  v12 = v11 && *(_QWORD*)(result + 56) == 0;
  v13 = v12 && *(_QWORD*)(result + 64) == 0;
  v14 = v13 && *(_QWORD*)(result + 72) == 0;
  v15 = v14 && *(_QWORD*)(result + 80) == 0;
  v16 = v15 && *(_QWORD*)(result + 88) == 0;
  v17 = v16 && *(_QWORD*)(result + 96) == 0;
  v18 = v17 && *(_QWORD*)(result + 104) == 0;
  v19 = v18 && *(_QWORD*)(result + 112) == 0;
  if (v19 && *(float*)(result + 120) == 0.0) {
    return 0;
  }
  return result;
}

#pragma GCC visibility pop
