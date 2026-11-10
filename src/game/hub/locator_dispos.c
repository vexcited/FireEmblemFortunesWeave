#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fdf640[])();
extern __int64 (*game_hub_LocatorDispos_vtable[])();
extern __int64 GameData_220d620;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2213f50;
_QWORD* LocatorDispos_Destructor(_QWORD* result);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_db5550(__int64, __int64);
__int64 GameRoutine_db7770(_QWORD);
__int64 GameRoutine_df7380(_QWORD, _QWORD, _QWORD);
__int64 HubNatives_ccba40(_QWORD, _QWORD);
__int64 HubNatives_ccbf80(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 fw_memory_g_heap_manager;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_65c760(void);
void __attribute__((noreturn)) GameRoutine_db6220(void);
void __attribute__((noreturn)) GameRoutine_db68c0(_QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 LocatorDispos_db3460(__int64 result);
_QWORD* LocatorDispos_db5ce0(__int64* a1, _QWORD* a2);
__int64 game_hub_LocatorDispos_Rebuild_lambda0_Invoke_alt1(
    __int64 result, __int64* a2,
    __int64* a3) __asm__("game_hub_LocatorDispos_Rebuild_lambda0_Invoke");
__int64 LocatorDispos_db6990(__int64 a1, __int64 a2, _QWORD* a3);
bool game_hub_LocatorDispos_CreateExternalDataImpl_lambda0_Invoke(__int64 a1,
                                                                  __int64 a2);
__int64 game_hub_LocatorDispos_CreateExternalDataImpl_lambda1_Invoke(
    __int64 a1, __int64* a2, __int64* a3);
__int64
game_hub_LocatorDispos_BuildInitTransformLocator_lambda0_Invoke(__int64 a1,
                                                                __int64 a2);
__int64 game_hub_LocatorDispos_BuildInitTransformLocator_lambda1_Invoke(
    __int64 a1, __int64* a2, __int64* a3);
_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");
_QWORD* GameRoutine_db5b60_alt1(__int64*,
                                _QWORD*) __asm__("GameRoutine_db5b60");
_QWORD* Manager_66cc20_alt1(__int64*, _QWORD*) __asm__("Manager_66cc20");
__attribute__((swiftcall)) void
HubDisposFileReader_c9bf60(PSEUDO_X8, __int64 result, int, __int64**);
__attribute__((swiftcall)) void
    LocatorDispos_db1e20_alt1(PSEUDO_X8,
                              _QWORD) __asm__("LocatorDispos_db1e20");
__attribute__((swiftcall)) void
LocatorDispos_db1e20_alt2(PSEUDO_X8,
                          __int64* result) __asm__("LocatorDispos_db1e20");
__attribute__((swiftcall)) void
    LocatorDispos_db1f30_alt1(PSEUDO_X8,
                              _QWORD) __asm__("LocatorDispos_db1f30");
__attribute__((swiftcall)) void
LocatorDispos_db4280_alt1(PSEUDO_X8, _QWORD* result, __int64, __int64,
                          unsigned __int8**) __asm__("LocatorDispos_db4280");
__attribute__((swiftcall)) void Manager_d9bf20(PSEUDO_X8, __int64,
                                               unsigned __int8*,
                                               unsigned __int64, __int64*);
__attribute__((swiftcall)) void game_eecb60(PSEUDO_X8, unsigned __int64 result,
                                            __int64);
__int64* GameRoutine_6b7aa0(__int64* result, __int64*, __int64*,
                            unsigned __int64);
__int64* GameRoutine_e07e20(unsigned __int8*);
__int64* GameRoutine_e08050(__int64*, __int64);
__int64* HubNatives_ccba40_alt1(__int64* result,
                                __int64) __asm__("HubNatives_ccba40");
__int64* LocatorDispos_db5ce0_alt1(__int64*,
                                   __int64*) __asm__("LocatorDispos_db5ce0");
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_c9c320(__int64 result);
__int64 GameRoutine_d90ae0(__int64 result, __int64*);
__int64 GameRoutine_db5b60(_QWORD, _QWORD);
__int64 GameRoutine_f49100(__int64, __int64);
__int64 HubNatives_ccbf80_alt1(__int64 result) __asm__("HubNatives_ccbf80");
__int64
LocatorDispos_db7380_alt1(__int64, __int64,
                          unsigned __int64) __asm__("LocatorDispos_db7380");
__int64 Locator_df7860(__int64 result, unsigned __int8*, __int64*);
__int64 Locator_df7d00(__int64 result);
__int64 Manager_66cc20(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 game_HashString(__int64 result);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcmp_alt1(_QWORD, _QWORD, _QWORD) __asm__("memcmp");
__int64 memset(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_util_GenerateUuid(void);
__int64 nn_util_TSNPrintf(_QWORD, _QWORD, const char*, ...);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
bool GameRoutine_db7770_alt1(_BYTE*) __asm__("GameRoutine_db7770");
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern __int64 (*GameData_1fdf670[])();
extern __int64 (*GameData_1fdf700[])();
extern __int64 (*GameData_1fdf750[])();
extern __int64 (*GameData_1fdf7e0[])();
extern __int64 (*GameData_1fdf860[])();
extern __int64 (*GameData_1fdf8e0[])();
extern __int64 (*GameData_1fdf960[])();
extern __int64 (*GameData_1fdf9a0[7])();
extern __int64 GameData_212cbe0[75];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_21ca090;
extern __int64 GameData_21f3d10;
extern __int64 GameData_22127a8;
extern __int64 game_GameModeData_instance_;
unsigned __int8* Character_cb01a0(unsigned __int8* result, unsigned __int8*,
                                  __int64, __int64, __int64);
void GameRoutine_e08260(__int64, __int64*, unsigned __int16*);
void LocatorDispos_db3c00_alt1(unsigned __int8*, __int64, __int64, __int64,
                               __int64) __asm__("LocatorDispos_db3c00");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_64aa00();
void __attribute__((noreturn)) GameRoutine_db5cb0();
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void __attribute__((noreturn)) String_60a230(void);
void game_hub_e08150(__int64, __int64, _QWORD*);
__attribute__((swiftcall)) void LocatorDispos_db1840(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void LocatorDispos_db1ce0(PSEUDO_X8 x8_,
                                                     unsigned __int8* result);
__attribute__((swiftcall)) void LocatorDispos_db1e20(PSEUDO_X8 x8_,
                                                     char* result);
__attribute__((swiftcall)) void LocatorDispos_db1f30(PSEUDO_X8 x8_,
                                                     unsigned __int8* a1);
__attribute__((swiftcall)) void
LocatorDispos_db2180(PSEUDO_X8 x8_, unsigned __int8* a1, unsigned __int8* a2);
__int64 LocatorDispos_db22e0(__int64 a1);
__int64 LocatorDispos_db2560(__int64 a1, unsigned __int8* a2);
__attribute__((swiftcall)) void LocatorDispos_db2800(PSEUDO_X8 x8_,
                                                     unsigned __int8* a1);
__attribute__((swiftcall)) void LocatorDispos_db2ac0(PSEUDO_X8 x8_,
                                                     unsigned __int8* result);
__attribute__((swiftcall)) void LocatorDispos_db2c40(PSEUDO_X8 x8_,
                                                     unsigned __int8* result);
void game_hub_LocatorDispos_Rebuild(_QWORD* a1, _DWORD* a2);
void LocatorDispos_db3c00(unsigned __int8* a1, __int64** a2, __int64 a3,
                          __int64 a4, __int64 a5);
__attribute__((swiftcall)) void LocatorDispos_db4160(PSEUDO_X8 x8_,
                                                     __int64 result, __int64 a2,
                                                     __int64 a3, __int64 a4,
                                                     __int64 a5);
__attribute__((swiftcall)) void LocatorDispos_db4280(PSEUDO_X8 x8_,
                                                     __int64 result, __int64 a2,
                                                     __int64 a3,
                                                     unsigned __int8** a4);
__attribute__((swiftcall)) void LocatorDispos_db43e0(PSEUDO_X8 x8_,
                                                     __int64 result, __int64 a2,
                                                     unsigned __int64 a3,
                                                     __int64 a4, __int64 a5);
__attribute__((swiftcall)) void LocatorDispos_db4610(PSEUDO_X8 x8_, _QWORD* a1,
                                                     __int128* a2, __int64 a3);
__attribute__((swiftcall)) void LocatorDispos_db4a70(PSEUDO_X8 x8_, _QWORD* a1,
                                                     __int128* a2, __int64 a3,
                                                     __int64 unused_int3,
                                                     __int64* a4);
__attribute__((swiftcall)) void game_hub_LocatorDispos_CreateExternalDataImpl(
    PSEUDO_X8 x8_, _QWORD* a1, __int64 a2, __int64 a3, __int64** a4, __int64 a5,
    __int64 a6);
__attribute__((swiftcall)) void
LocatorDispos_db5260(PSEUDO_X8 x8_, _QWORD* a1, __int64 a2, __int64 a3,
                     __int64 a4, __int64 unused_int4, __int64 a5, __int64 a6);
__attribute__((swiftcall)) void
game_hub_LocatorDispos_BuildInitTransformLocator(PSEUDO_X8 x8_,
                                                 __int64 unused_int0,
                                                 __int64 a1,
                                                 __int64 unused_int2,
                                                 __int64** a2);
__int64* LocatorDispos_db7380(__int64 a1, __int64 a2, unsigned __int64 a3);
__int64 LocatorDispos_db2560_alt1(_QWORD,
                                  _QWORD) __asm__("LocatorDispos_db2560");
__int64 LocatorDispos_db26f0(char* a1);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void __attribute__((noreturn))
GameRoutine_65c760_alt1() __asm__("GameRoutine_65c760");
void __attribute__((noreturn))
GameRoutine_db68c0_alt1() __asm__("GameRoutine_db68c0");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_hub_LocatorDispos_Rebuild_lambda0_Invoke(__int64 a1, __int64 a2,
                                                   __int64* a3);

__attribute__((swiftcall)) void LocatorDispos_db1840(PSEUDO_X8 x8_)
{
  __int64* a1 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 UuidEv;
  unsigned __int64 v3;
  unsigned __int64 result;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  _BYTE v9[64];

  UuidEv = nn_util_GenerateUuid();
  nn_util_TSNPrintf(
      v9, 64,
      "%02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x%02x%02x%02x%02x",
      (unsigned __int8)UuidEv, BYTE1(UuidEv), BYTE2(UuidEv), BYTE3(UuidEv),
      BYTE4(UuidEv), BYTE5(UuidEv), BYTE6(UuidEv), HIBYTE(UuidEv),
      (unsigned __int8)v3, BYTE1(v3), BYTE2(v3), BYTE3(v3), BYTE4(v3),
      BYTE5(v3), BYTE6(v3), HIBYTE(v3));
  result = strlen(v9);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  v5 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (result | 7) + 1;
    }
    v8 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16, 0);
    a1[1] = v5;
    a1[2] = v8;
    *a1 = v7 | 1;
    v6 = (char*)v8;
  }
  else {
    *(_BYTE*)a1 = 2 * result;
    v6 = (char*)a1 + 1;
    if (result == 0) {
      goto LABEL_10;
    }
  }
  result = memcpy(v6, v9, v5);
LABEL_10:
  v6[v5] = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void LocatorDispos_db1ce0(PSEUDO_X8 x8_,
                                                     unsigned __int8* result)
{
  unsigned __int8* a2 = (unsigned __int8*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v2;
  unsigned __int8* v3;
  __int64 v4;
  unsigned __int8* v6;
  __int64 v7;
  unsigned __int8* v8;
  unsigned __int8* v9;
  __int64 v10;
  _BYTE* v11;
  _QWORD v12[3];

  v2 = *result;
  v4 = *((_QWORD*)result + 1);
  v3 = *((unsigned __int8**)result + 2);
  v6 = result;
  *((_QWORD*)a2 + 4) = 0;
  *((_QWORD*)a2 + 5) = 0;
  *((_QWORD*)a2 + 2) = 0;
  *((_QWORD*)a2 + 3) = 0;
  *(_QWORD*)a2 = 0;
  *((_QWORD*)a2 + 1) = 0;
  v7 = v2 >> 1;
  if ((v2 & 1) != 0) {
    v8 = v3;
  }
  else {
    v8 = result + 1;
  }
  if ((v2 & 1) != 0) {
    v7 = v4;
  }
  if (v7 >= 2) {
    v9 = &v8[v7];
    result = v8;
    do {
      result = (unsigned __int8*)memchr(result, 95, v7 - 1);
      if (result == nullptr) {
        break;
      }
      if (*(_WORD*)result == 16735) {
        if (result != v9 && result - v8 != -1) {
          LocatorDispos_db1e20_alt1((void*)(a2), v6);
          result =
              (unsigned __int8*)(LocatorDispos_db1f30_alt1((void*)(v12), v6),
                                 (void*)(v12));
          qmemcpy(a2 + 24, v12, 24);
          {
            result;
            return;
          }
        }
        break;
      }
      ++result;
      v7 = v9 - result;
    } while (v9 - result >= 2);
  }
  if (a2 != v6) {
    if ((v2 & 1) != 0) {
      result = (unsigned __int8*)GameRoutine_64df20(a2, v3, v4);
      if ((a2[24] & 1) != 0) {
        v11 = *((_BYTE**)a2 + 5);
        *((_QWORD*)a2 + 4) = 0;
        goto LABEL_20;
      }
    }
    else {
      v10 = *((_QWORD*)v6 + 1);
      *(_QWORD*)a2 = *(_QWORD*)v6;
      *((_QWORD*)a2 + 1) = v10;
      *((_QWORD*)a2 + 2) = *((_QWORD*)v6 + 2);
    }
  }
  a2[24] = 0;
  v11 = a2 + 25;
LABEL_20:
  *v11 = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void LocatorDispos_db1e20(PSEUDO_X8 x8_,
                                                     char* result)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  unsigned __int64 v4;
  char* v5;
  char* v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;

  if ((*result & 1) != 0) {
    result = (char*)fw_text_String_CopyTerminated(a2, *((_QWORD*)result + 2),
                                                  *((_QWORD*)result + 1));
  }
  else {
    v3 = *((_QWORD*)result + 1);
    *a2 = *(_QWORD*)result;
    a2[1] = v3;
    a2[2] = *((_QWORD*)result + 2);
  }
  v4 = *(unsigned __int8*)a2;
  v5 = (char*)a2[2];
  if ((v4 & 1) != 0) {
    v6 = (char*)a2[2];
  }
  else {
    v6 = (char*)a2 + 1;
  }
  if ((v4 & 1) != 0) {
    v7 = a2[1];
  }
  else {
    v7 = v4 >> 1;
  }
  if (v7 >= 2) {
    v8 = &v6[v7];
    v9 = v7;
    result = v6;
    do {
      result = (char*)memchr(result, 95, v9 - 1);
      if (result == nullptr) {
        break;
      }
      if (*(_WORD*)result == 16735) {
        if (result != v8) {
          v10 = result - v6;
          if (result - v6 != -1) {
            if (v10 > v7) {
              String_60a230();
            }
            if ((v4 & 1) != 0) {
              a2[1] = v10;
            }
            else {
              v5 = (char*)a2 + 1;
              *(_BYTE*)a2 = 2 * v10;
            }
            v5[v10] = 0;
          }
        }
        {
          result;
          return;
        }
      }
      ++result;
      v9 = v8 - result;
    } while (v8 - result >= 2);
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void LocatorDispos_db1f30(PSEUDO_X8 x8_,
                                                     unsigned __int8* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  unsigned __int64 v5;
  char* v6;
  unsigned __int64 v7;
  unsigned __int8* v8;
  __int64 v9;
  unsigned __int8* v10;
  unsigned __int64 v11;
  unsigned __int8* result;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char* v18;
  char* v19;
  unsigned __int8* v20;
  __int64 v21;
  struct {
    __int64 v22;
    unsigned __int64 v23;
    unsigned __int8* v24;
  } v22_;
  struct {
    __int64 v25[2];
    char* v26;
  } v25_;

  LocatorDispos_db1e20_alt2((void*)(v25_.v25), (__int64*)a1);
  if ((*a1 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(a2, *((_QWORD*)a1 + 2),
                                       *((_QWORD*)a1 + 1));
  }
  else {
    v4 = *((_QWORD*)a1 + 1);
    *a2 = *(_QWORD*)a1;
    a2[1] = v4;
    a2[2] = *((_QWORD*)a1 + 2);
  }
  if ((v25_.v25[0] & 1) != 0) {
    v5 = v25_.v25[1];
  }
  else {
    v5 = (unsigned __int64)LOBYTE(v25_.v25[0]) >> 1;
  }
  if ((v25_.v25[0] & 1) != 0) {
    v6 = v25_.v26;
  }
  else {
    v6 = (char*)v25_.v25 + 1;
  }
  v7 = v5 + 1;
  if (v5 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v7 | 7) + 1;
    }
    v8 = (unsigned __int8*)fw_memory_HeapManager_Allocate_alt1(
        fw_memory_g_heap_manager, v9, 16, 0);
    v22_.v23 = v5 + 1;
    v22_.v24 = v8;
    v22_.v22 = v9 | 1;
    goto LABEL_18;
  }
  v22_.v23 = 0;
  v22_.v24 = nullptr;
  v22_.v22 = (unsigned __int8)(2 * v7);
  v8 = (unsigned __int8*)&v22_.v22 + 1;
  if (v5 != 0) {
  LABEL_18:
    memmove(v8, v6, v5);
  }
  *(_WORD*)&v8[v5] = 95;
  if ((v22_.v22 & 1) != 0) {
    v10 = v22_.v24;
  }
  else {
    v10 = (unsigned __int8*)&v22_.v22 + 1;
  }
  if ((v22_.v22 & 1) != 0) {
    v11 = v22_.v23;
  }
  else {
    v11 = (unsigned __int64)(unsigned __int8)v22_.v22 >> 1;
  }
  result = Character_cb01a0((unsigned __int8*)a2, v10, v11,
                            (__int64)&GameData_1a9f09e, 0);
  if ((v22_.v22 & 1) != 0 && v22_.v24 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    result = (unsigned __int8*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
  }
  v14 = *(unsigned __int8*)a2;
  if ((v14 & 1) != 0) {
    v15 = a2[1];
  }
  else {
    v15 = v14 >> 1;
  }
  v16 = *a1;
  v17 = *((_QWORD*)a1 + 1);
  if ((v16 & 1) == 0) {
    v17 = v16 >> 1;
  }
  if (v15 == v17 &&
      ((v18 = (char*)a2[2], (v14 & 1) == 0) ? (v19 = (char*)a2 + 1)
                                            : (v19 = (char*)a2[2]),
       (v16 & 1) == 0 ? (v20 = a1 + 1) : (v20 = *((unsigned __int8**)a1 + 2)),
       (_DWORD)(result = (unsigned __int8*)memcmp_alt1(v19, v20, v15)) == 0)) {
    if ((v14 & 1) != 0) {
      a2[1] = 2;
    }
    else {
      v18 = (char*)a2 + 1;
      *(_BYTE*)a2 = 4;
    }
    strcpy(v18, "A1");
    if ((v25_.v25[0] & 1) == 0) {
      result;
      return;
    }
  }
  else if ((v25_.v25[0] & 1) == 0) {
    {
      result;
      return;
    }
  }
  if (v25_.v26 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    {
      (unsigned __int8*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21);
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

LocatorDispos_db2180(PSEUDO_X8 x8_, unsigned __int8* a1, unsigned __int8* a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int8* v8;
  unsigned __int64 v9;
  char* v11;
  __int64 v12;
  unsigned __int64 v13;
  bool v14;
  unsigned __int64 v15;
  unsigned __int8* v16;
  unsigned __int64 v17;
  __int64* result;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  char* v25;

  v4 = *a1;
  v5 = (v4 & 1) == 0;
  v6 = v4 >> 1;
  if (v5) {
    v7 = v6;
  }
  else {
    v7 = *((_QWORD*)a1 + 1);
  }
  if (v5) {
    v8 = a1 + 1;
  }
  else {
    v8 = *((unsigned __int8**)a1 + 2);
  }
  v9 = v7 + 1;
  if (v7 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(a1);
  }
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v9 | 7) + 1;
    }
    v11 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v12,
                                                16, 0);
    v24 = v7 + 1;
    v25 = v11;
    v23 = v12 | 1;
    goto LABEL_15;
  }
  v24 = 0;
  v25 = nullptr;
  v23 = (unsigned __int8)(2 * v9);
  v11 = (char*)&v23 + 1;
  if (v7 != 0) {
  LABEL_15:
    memmove(v11, v8, v7);
  }
  *(_WORD*)&v11[v7] = 95;
  v13 = *a2;
  v14 = (v13 & 1) == 0;
  v15 = v13 >> 1;
  if (v14) {
    v16 = a2 + 1;
  }
  else {
    v16 = *((unsigned __int8**)a2 + 2);
  }
  if (v14) {
    v17 = v15;
  }
  else {
    v17 = *((_QWORD*)a2 + 1);
  }
  result = (__int64*)GameRoutine_1a09ce0(&v23, v16, v17);
  v19 = *result;
  v20 = result[1];
  *result = 0;
  result[1] = 0;
  *a3 = v19;
  a3[1] = v20;
  v21 = result[2];
  result[2] = 0;
  a3[2] = v21;
  if ((v23 & 1) != 0 && v25 != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    {
      (__int64*)nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v25);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 LocatorDispos_db22e0(__int64 a1)
{
  unsigned __int8 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _BYTE* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  char* v20;
  char* v21;
  char* v22;
  char* v23;
  char* v24;
  __int64 result;
  unsigned int v26;
  __int64 v27;
  char* v28;
  __int64 v29;
  char v30;
  __int64 v31;
  char* v32;
  __int64 v33;
  _QWORD v34[2];
  char* v35;

  LocatorDispos_db1e20((void*)(v34), (char*)a1);
  v2 = *(_BYTE*)a1;
  v3 = *(_BYTE*)a1 >> 1;
  v4 = *(_QWORD*)(GameData_21ca090 + 64);
  v5 = *(_QWORD*)(GameData_21ca090 + 72) - v4;
  if ((int)((unsigned __int64)v5 >> 3) > 0) {
    v6 = *(_QWORD*)(a1 + 16);
    v30 = *(_BYTE*)a1;
    v7 = (int)(v5 >> 3);
    v8 = 0;
    if ((*(_BYTE*)a1 & 1) != 0) {
      v9 = *(_QWORD*)(a1 + 8);
    }
    else {
      v9 = v2 >> 1;
    }
    v28 = *(char**)(a1 + 16);
    if ((*(_BYTE*)a1 & 1) == 0) {
      v6 = a1 + 1;
    }
    v31 = v2 >> 1;
    v29 = *(_QWORD*)(a1 + 8);
    v33 = v6;
    v10 = v35;
    if ((v34[0] & 1) != 0) {
      v11 = v34[1];
    }
    else {
      v10 = (char*)v34 + 1;
      v11 = LOBYTE(v34[0]) >> 1;
    }
    v32 = v10;
    v12 = game_GameModeData_instance_;
    while (1) {
      v13 = *(_QWORD*)(v4 + 8 * v8);
      v14 = *(_BYTE**)(v13 + 88);
      if (v14 != nullptr && *v14 != 0) {
        v15 = strlen(*(_QWORD*)(v13 + 88));
        v16 = v15;
        if (v15 == v9) {
          if (v15 == -1) {
            goto LABEL_52;
          }
          if ((unsigned int)memcmp_alt1(v33, v14, v15) == 0) {
            goto LABEL_20;
          }
        }
        if (v16 == v11) {
          if (v16 == -1) {
          LABEL_52:
            String_60a230();
          }
          if ((unsigned int)memcmp_alt1(v32, v14, v16) == 0) {
          LABEL_20:
            if (v12 != 0) {
              v17 = 80;
              if (*(_DWORD*)(v12 + 60) == 3) {
                v17 = 81;
              }
              v18 = *(unsigned __int8*)(v13 + v17);
              if (v18 == 0) {
                goto LABEL_46;
              }
            }
            else {
              v18 = *(unsigned __int8*)(v13 + 80);
              if (*(_BYTE*)(v13 + 80) == 0) {
                goto LABEL_46;
              }
            }
            if (v18 == 2) {
              goto LABEL_46;
            }
            if (v18 == 9) {
              break;
            }
          }
        }
      }
      if (++v8 >= v7) {
        v3 = v31;
        v2 = v30;
        v20 = v28;
        v19 = v29;
        goto LABEL_31;
      }
    }
  LABEL_44:
    result = 1;
    if ((v34[0] & 1) == 0) {
      return result;
    }
  LABEL_47:
    if (v35 != nullptr) {
      v26 = result;
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v35);
      return v26;
    }
    return result;
  }
  v19 = *(_QWORD*)(a1 + 8);
  v20 = *(char**)(a1 + 16);
LABEL_31:
  if ((v2 & 1) != 0) {
    v21 = v20;
  }
  else {
    v21 = (char*)(a1 + 1);
  }
  if ((v2 & 1) == 0) {
    v19 = v3;
  }
  if (v19 >= 4) {
    v22 = &v21[v19];
    v23 = v21;
    do {
      v24 = (char*)memchr(v23, 68, v19 - 3);
      if (v24 == nullptr) {
        break;
      }
      if (*(_DWORD*)v24 == 1600613956) {
        if (v24 == v22 || v24 - v21 == -1) {
          break;
        }
        goto LABEL_44;
      }
      v23 = v24 + 1;
      v19 = v22 - v23;
    } while (v22 - v23 >= 4);
  }
LABEL_46:
  result = 0;
  if ((v34[0] & 1) != 0) {
    goto LABEL_47;
  }
  return result;
}

__int64 LocatorDispos_db2560(__int64 a1, unsigned __int8* a2)
{
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  _QWORD* v6;
  unsigned __int64 v7;
  unsigned __int8* v8;
  unsigned __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  _QWORD* v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  struct {
    __int64 v20;
    __int64 v21;
  } v20_;

  game_eecb60((void*)(&v20_.v20), *(_QWORD*)GameData_212cbe0[0], a1);
  v3 = v20_.v20;
  v4 = v20_.v21;
  if (v20_.v20 == v20_.v21) {
    v13 = 0;
    if (v20_.v20 == 0) {
      return v13;
    }
    v20_.v21 = v20_.v20;
    goto LABEL_31;
  }
  v5 = *a2;
  v6 = (_QWORD*)(v20_.v20 + 16);
  if ((v5 & 1) != 0) {
    v7 = *((_QWORD*)a2 + 1);
  }
  else {
    v7 = v5 >> 1;
  }
  if ((v5 & 1) != 0) {
    v8 = *((unsigned __int8**)a2 + 2);
  }
  else {
    v8 = a2 + 1;
  }
  do {
    v10 = v6 - 2;
    v9 = *((unsigned __int8*)v6 - 16);
    v11 = *(v6 - 1);
    if ((v9 & 1) == 0) {
      v11 = v9 >> 1;
    }
    if (v11 == v7) {
      v12 = (v9 & 1) != 0 ? (_QWORD*)*v6 : (_QWORD*)((char*)v6 - 15);
      if ((unsigned int)memcmp_alt1(v12, v8, v7) == 0) {
        v13 = 1;
        if (v3 == 0) {
          return v13;
        }
        goto LABEL_19;
      }
    }
    v6 += 3;
  } while (v10 + 3 != (_QWORD*)v4);
  v13 = 0;
  if (v3 == 0) {
    return v13;
  }
LABEL_19:
  v14 = v4;
  v15 = fw_memory_g_heap_manager_ptr;
  do {
    v16 = *(_BYTE*)(v14 - 24);
    v14 -= 24;
    if ((v16 & 1) != 0 && *(_QWORD*)(v4 - 8) != 0) {
      if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) != 0) {
        v17 = 128;
      }
      else {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v17);
    }
    v4 = v14;
  } while (v14 != v3);
  v20_.v21 = v3;
  if (v20_.v20 != 0) {
  LABEL_31:
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18);
  }
  return v13;
}

__int64 LocatorDispos_db26f0(char* a1)
{
  __int64 v2;
  int* v3;
  int v4;
  int v5;
  char v7;
  __int64 v8;
  char v10[24];
  _QWORD v11[2];
  int* v12;

  LocatorDispos_db1e20((void*)(v11), a1);
  v2 = LOBYTE(v11[0]) >> 1;
  if ((v11[0] & 1) != 0) {
    v2 = v11[1];
  }
  if (v2 != 7) {
    goto LABEL_10;
  }
  v3 = v12;
  if ((v11[0] & 1) == 0) {
    v3 = (int*)((char*)v11 + 1);
  }
  v4 = *v3;
  v5 = *(int*)((char*)v3 + 3);
  if (v4 == 1600288072 && v5 == 808464479) {
    v7 = 1;
    if ((v11[0] & 1) == 0) {
      return v7 & 1;
    }
  }
  else {
  LABEL_10:
    strcpy(v10, " EnableTempleMenu");
    v7 = LocatorDispos_db2560_alt1(a1, v10);
    if ((v11[0] & 1) == 0) {
      return v7 & 1;
    }
  }
  if (v12 != nullptr) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v12);
  }
  return v7 & 1;
}

__attribute__((swiftcall)) void LocatorDispos_db2800(PSEUDO_X8 x8_,
                                                     unsigned __int8* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v3;
  unsigned __int64 v4;
  int* v5;
  bool v6;
  int v7;
  int v8;
  bool v9;
  __int64 result;
  __int128 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int128 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  LOBYTE(v18) = 0;
  LOBYTE(v15) = 14;
  LOBYTE(v17) = 14;
  strcpy((char*)&v15 + 1, "Hub_000");
  *(_DWORD*)((char*)&v17 + 1) = 1600613956;
  HIDWORD(v17) = 808857695;
  v3 = *a1;
  v4 = v3 >> 1;
  if ((v3 & 1) != 0) {
    v4 = *((_QWORD*)a1 + 1);
    v5 = *((int**)a1 + 2);
  }
  else {
    v5 = (int*)(a1 + 1);
  }
  if (v4 == 7 && (*(_DWORD*)((char*)&v15 + 1) == *v5
                      ? (v6 = DWORD1(v15) == *(int*)((char*)v5 + 3))
                      : (v6 = false),
                  v6 || ((v7 = *v5, v8 = *(int*)((char*)v5 + 3),
                          *(_DWORD*)((char*)&v17 + 1) == v7)
                             ? (v9 = HIDWORD(v17) == v8)
                             : (v9 = false),
                         v9))) {
    result = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
    v11 = v15;
    *a2 = result;
    *(_OWORD*)result = v11;
    v12 = v17;
    v13 = v18;
    *(_QWORD*)(result + 16) = v16;
    *(_QWORD*)(result + 24) = v12;
    v14 = v19;
    a2[1] = result + 48;
    a2[2] = result + 48;
    *(_QWORD*)(result + 32) = v13;
    *(_QWORD*)(result + 40) = v14;
  }
  else {
    a2[1] = 0;
    a2[2] = 0;
    *a2 = 0;
    result = Manager_66cc20(a2, a1);
    a2[1] = result;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void LocatorDispos_db2ac0(PSEUDO_X8 x8_,
                                                     unsigned __int8* result)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v3;
  bool v4;
  __int64 v5;
  unsigned __int8* v6;
  __int64 v7;
  unsigned __int8* v8;
  unsigned __int8* v9;
  __int64 v10;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v3 = *result;
  v4 = (v3 & 1) == 0;
  v5 = v3 >> 1;
  if (v4) {
    v6 = result + 1;
  }
  else {
    v6 = *((unsigned __int8**)result + 2);
  }
  if (v4) {
    v7 = v5;
  }
  else {
    v7 = *((_QWORD*)result + 1);
  }
  if (v7 >= 5) {
    v8 = &v6[v7];
    v9 = result;
    v10 = v7;
    result = v6;
    do {
      result = (unsigned __int8*)memchr(result, 83, v10 - 4);
      if (result == nullptr) {
        break;
      }
      if (*(_DWORD*)result == 1145655635 && result[4] == 95) {
        if (result != v6) {
          break;
        }
        v17 = *(_QWORD*)v9;
        v18 = *((_QWORD*)v9 + 1);
        *(_QWORD*)v9 = 0;
        *((_QWORD*)v9 + 1) = 0;
        *(_QWORD*)a2 = v17;
        *(_QWORD*)(a2 + 8) = v18;
        v19 = *((_QWORD*)v9 + 2);
        *((_QWORD*)v9 + 2) = 0;
        *(_QWORD*)(a2 + 16) = v19;
        {
          result;
          return;
        }
      }
      ++result;
      v10 = v8 - result;
    } while (v8 - result >= 5);
  }
  v12 = v7 + 5;
  if ((unsigned __int64)(v7 + 5) >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  if (v12 >= 0x17) {
    if ((v12 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (v12 | 7) + 1;
    }
    v15 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v14, 16, 0);
    v16 = v14 | 1;
    *(_QWORD*)(a2 + 8) = v12;
    *(_QWORD*)(a2 + 16) = v15;
    v13 = v15 + 5;
    *(_QWORD*)a2 = v16;
    *(_DWORD*)v15 = 1145655635;
    *(_BYTE*)(v15 + 4) = 95;
  }
  else {
    *(_QWORD*)a2 = 0;
    v13 = a2 + 6;
    *(_QWORD*)(a2 + 8) = 0;
    *(_QWORD*)(a2 + 16) = 0;
    *(_BYTE*)a2 = 2 * v12;
    *(_DWORD*)(a2 + 1) = 1145655635;
    *(_BYTE*)(a2 + 5) = 95;
    if (v7 == 0) {
      goto LABEL_26;
    }
  }
  result = (unsigned __int8*)memmove(v13, v6, v7);
LABEL_26:
  *(_BYTE*)(v13 + v7) = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void LocatorDispos_db2c40(PSEUDO_X8 x8_,
                                                     unsigned __int8* result)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v3;
  bool v4;
  __int64 v5;
  unsigned __int8* v6;
  __int64 v7;
  unsigned __int8* v8;
  unsigned __int8* v9;
  __int64 v10;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v3 = *result;
  v4 = (v3 & 1) == 0;
  v5 = v3 >> 1;
  if (v4) {
    v6 = result + 1;
  }
  else {
    v6 = *((unsigned __int8**)result + 2);
  }
  if (v4) {
    v7 = v5;
  }
  else {
    v7 = *((_QWORD*)result + 1);
  }
  if (v7 >= 5) {
    v8 = &v6[v7];
    v9 = result;
    v10 = v7;
    result = v6;
    do {
      result = (unsigned __int8*)memchr(result, 83, v10 - 4);
      if (result == nullptr) {
        break;
      }
      if (*(_DWORD*)result == 1145656147 && result[4] == 95) {
        if (result != v6) {
          break;
        }
        v17 = *(_QWORD*)v9;
        v18 = *((_QWORD*)v9 + 1);
        *(_QWORD*)v9 = 0;
        *((_QWORD*)v9 + 1) = 0;
        *(_QWORD*)a2 = v17;
        *(_QWORD*)(a2 + 8) = v18;
        v19 = *((_QWORD*)v9 + 2);
        *((_QWORD*)v9 + 2) = 0;
        *(_QWORD*)(a2 + 16) = v19;
        {
          result;
          return;
        }
      }
      ++result;
      v10 = v8 - result;
    } while (v8 - result >= 5);
  }
  v12 = v7 + 5;
  if ((unsigned __int64)(v7 + 5) >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  if (v12 >= 0x17) {
    if ((v12 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (v12 | 7) + 1;
    }
    v15 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v14, 16, 0);
    v16 = v14 | 1;
    *(_QWORD*)(a2 + 8) = v12;
    *(_QWORD*)(a2 + 16) = v15;
    v13 = v15 + 5;
    *(_QWORD*)a2 = v16;
    *(_DWORD*)v15 = 1145656147;
    *(_BYTE*)(v15 + 4) = 95;
  }
  else {
    *(_QWORD*)a2 = 0;
    v13 = a2 + 6;
    *(_QWORD*)(a2 + 8) = 0;
    *(_QWORD*)(a2 + 16) = 0;
    *(_BYTE*)a2 = 2 * v12;
    *(_DWORD*)(a2 + 1) = 1145656147;
    *(_BYTE*)(a2 + 5) = 95;
    if (v7 == 0) {
      goto LABEL_26;
    }
  }
  result = (unsigned __int8*)memmove(v13, v6, v7);
LABEL_26:
  *(_BYTE*)(v13 + v7) = 0;
  {
    result;
    return;
  }
}

_QWORD* LocatorDispos_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
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

  v1 = result[10];
  v2 = result;
  *result = game_hub_LocatorDispos_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = result[11];
    if (v1 == v4) {
      goto LABEL_12;
    }
    v5 = result[11];
    do {
      v6 = *(_BYTE*)(v5 - 24);
      v5 -= 24;
      if ((v6 & 1) != 0 && *(_QWORD*)(v4 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
      }
      v4 = v5;
    } while (v5 != v1);
    v8 = v2[10];
    v2[11] = v1;
    if (v8 != 0) {
    LABEL_12:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v9 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9);
    }
  }
  v10 = v2[7];
  if (v10 != 0) {
    v11 = *(_QWORD*)v3;
    v2[8] = v10;
    v12 = 128;
    if (*(_QWORD*)(v11 + 200) == 0) {
      v12 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v11 + v12);
  }
  v13 = v2[4];
  if (v13 != 0) {
    v14 = v2[5];
    if (v13 == v14) {
      goto LABEL_33;
    }
    do {
      v15 = v14;
      v16 = *(_QWORD*)(v14 - 8);
      if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v16);
      }
      v14 = v15 - 40;
      if ((*(_BYTE*)(v15 - 40) & 1) != 0 && *(_QWORD*)(v15 - 24) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v17 = 128;
        }
        else {
          v17 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v17);
      }
    } while (v14 != v13);
    v18 = v2[4];
    v2[5] = v13;
    if (v18 != 0) {
    LABEL_33:
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v19 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v19);
    }
  }
  v20 = v2[1];
  if (v20 != 0) {
    v21 = v2[2];
    if (v20 == v21) {
      goto LABEL_44;
    }
    do {
      v22 = *(_QWORD*)(v21 - 8);
      if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v22);
      }
      v21 -= 16;
    } while (v21 != v20);
    v23 = v2[1];
    v2[2] = v20;
    if (v23 != 0) {
    LABEL_44:
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v24 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v24);
    }
  }
  *v2 = GameData_1fdf640;
  if ((_QWORD*)GameData_220d620 == v2) {
    GameData_220d620 = 0;
    GameData_2213f50 = 0;
  }
  return result;
}

__int64 LocatorDispos_db3460(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(_QWORD**)(result + 8);
  v2 = *(_QWORD**)(result + 16);
  v3 = result;
  if (v1 != v2) {
    while ((*(_BYTE*)(*v1 + 16LL) & 1) == 0) {
      v1 += 2;
      if (v1 == v2) {
        return result;
      }
    }
  }
  v4 = v1 + 2;
  if (v1 != v2 && v4 != v2) {
    do {
      v6 = *v4;
      if ((*(_BYTE*)(*v4 + 16LL) & 1) == 0) {
        v7 = v4[1];
        *v4 = 0;
        v4[1] = 0;
        v8 = v1[1];
        *v1 = v6;
        v1[1] = v7;
        if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          result = std___1___shared_weak_count___release_weak(v8);
        }
        v1 += 2;
      }
      v4 += 2;
    } while (v4 != v2);
    v2 = *(_QWORD**)(v3 + 16);
  }
  if (v1 != v2) {
    do {
      v9 = *(v2 - 1);
      if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        result = std___1___shared_weak_count___release_weak(v9);
      }
      v2 -= 2;
    } while (v2 != v1);
    *(_QWORD*)(v3 + 16) = v1;
  }
  return result;
}

void game_hub_LocatorDispos_Rebuild(_QWORD* a1, _DWORD* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64* v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  _QWORD* v34;
  atomic_ullong* v35;
  _QWORD* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  char* v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  char* v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64* v52;
  __int64* v53;
  __int64 v54;
  char v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  struct {
    _QWORD v64[4];
    _QWORD* v65;
  } v64_;
  struct {
    char v66[32];
    __int64 v67;
  } v66_;
  __int64 v68;

  if (*a2 == 1) {
    goto LABEL_19;
  }
  v5 = a1[4];
  v4 = a1[5];
  if (v5 != v4) {
    v6 = fw_memory_g_heap_manager_ptr;
    do {
      v7 = v4;
      v8 = *(_QWORD*)(v4 - 8);
      if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak_alt1(v8);
      }
      v4 = v7 - 40;
      if ((*(_BYTE*)(v7 - 40) & 1) != 0 && *(_QWORD*)(v7 - 24) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v9);
      }
    } while (v4 != v5);
  }
  v10 = a1[7];
  a1[5] = v5;
  a1[8] = v10;
  v66_.v67 = 0;
  v64_.v64[0] = GameData_1fdf670;
  v64_.v64[1] = a1;
  v64_.v65 = v64_.v64;
  LocatorDispos_db3c00_alt1(
      (unsigned __int8*)(*(_QWORD*)GameData_212dbb8[0] + 40LL),
      *(_QWORD*)GameData_212dbb8[0] + 112LL,
      *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 216LL) + 8LL,
      (__int64)v66_.v66, (__int64)v64_.v64);
  if (v64_.v65 == v64_.v64) {
    v11 = 32;
    goto LABEL_18;
  }
  if (v64_.v65 != nullptr) {
    v11 = 40;
  LABEL_18:
    (*(void (**)(__int64))(*v64_.v65 + v11))((__int64)v64_.v65);
  }
LABEL_19:
  v12 = (__int64*)a1[1];
  v13 = (__int64*)a1[2];
  while (v12 != v13) {
    if ((unsigned int)(*a2 - 3) >= 2) {
      v15 = *v12;
      v16 = *(_QWORD*)(*v12 + 696);
      if (v16 != 0 && *(_QWORD*)(v16 + 8) != -1) {
        goto LABEL_22;
      }
      if (GameRoutine_db7770_alt1((_BYTE*)(v15 + 24))) {
        v14 = (char*)a1[7];
        v17 = (char*)a1[8];
        if (v14 == v17) {
          goto LABEL_21;
        }
        v18 = *(_QWORD*)(v15 + 80);
        v19 = v17 - v14 - 8;
        if ((~(_BYTE)v19 & 0x18) != 0) {
          v20 = ((unsigned __int8)((unsigned int)v19 >> 3) + 1) & 3;
          while (*(_QWORD*)v14 != v18) {
            v14 += 8;
            if (--v20 == 0) {
              goto LABEL_33;
            }
          }
        LABEL_21:
          if (v14 != v17) {
            goto LABEL_22;
          }
          goto LABEL_34;
        }
      LABEL_33:
        if (v19 >= 0x18) {
          v14 += 16;
          while (1) {
            if (*((_QWORD*)v14 - 2) == v18) {
              v14 -= 16;
              goto LABEL_21;
            }
            if (*((_QWORD*)v14 - 1) == v18) {
              v14 -= 8;
              goto LABEL_21;
            }
            if (*(_QWORD*)v14 == v18) {
              goto LABEL_21;
            }
            if (*((_QWORD*)v14 + 1) == v18) {
              break;
            }
            v23 = v14 + 16;
            v14 += 32;
            if (v23 == v17) {
              goto LABEL_34;
            }
          }
          v14 += 8;
          goto LABEL_21;
        }
      }
    }
  LABEL_34:
    v21 = (__int64*)a1[1];
    v22 = (__int64*)a1[2];
    if (v21 != v22) {
      while (*v21 != *v12) {
        v21 += 2;
        if (v21 == v22) {
          goto LABEL_22;
        }
      }
    }
    if (v21 != v22) {
      Locator_df7d00(*v21);
    }
  LABEL_22:
    v12 += 2;
  }
  v24 = a1[4];
  v25 = a1[5];
  if (v24 != v25) {
    v26 = (__int64*)fw_memory_g_heap_manager_ptr;
    v62 = a1[5];
    do {
      if (GameRoutine_db7770_alt1(*(_BYTE**)(v24 + 24))) {
        v27 = *(_QWORD*)(v24 + 24);
        v28 = (_QWORD*)a1[1];
        v29 = (_QWORD*)a1[2];
        if (v28 == v29) {
        LABEL_62:
          v31 = *v26;
          if ((*(_BYTE*)v24 & 1) != 0) {
            v32 = *(_QWORD*)(v24 + 16);
          }
          else {
            v32 = v24 + 1;
          }
          v68 = v32;
          v33 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v31, 752, 16, 0);
          v34 = v33 + 3;
          v30 = v33;
          v33[1] = 0;
          v35 = (atomic_ullong*)(v33 + 1);
          v33[2] = 0;
          *v33 = GameData_1fdf700;
          LocatorDispos_db6990((__int64)(v33 + 3), v27, &v68);
          v36 = (_QWORD*)a1[2];
          v37 = a1[3];
          if ((unsigned __int64)v36 >= v37) {
            v40 = a1[1];
            v41 = v26;
            v42 = (char*)v36 - v40;
            v43 = ((__int64)v36 - v40) >> 4;
            v44 = v43 + 1;
            if ((unsigned __int64)(v43 + 1) >> 60 != 0) {
              GameRoutine_db5cb0();
            }
            v45 = v37 - v40;
            if (v45 >> 3 > v44) {
              v44 = v45 >> 3;
            }
            if ((unsigned __int64)v45 >= 0x7FFFFFFFFFFFFFF0LL) {
              v46 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v46 = v44;
            }
            if (v46 >> 60 != 0) {
              GameRoutine_60a210_alt1();
            }
            v47 = fw_memory_HeapManager_Allocate_alt1(*v41, 16 * v46, 16, 0);
            v48 = &v42[v47];
            v63 = v47 + 16 * v46;
            *(_QWORD*)v48 = v34;
            *((_QWORD*)v48 + 1) = v30;
            v49 = (__int64)&v42[v47 + -16 * v43];
            v39 = (__int64)&v42[v47 + 16];
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 1), 1u,
                                      memory_order_relaxed);
            memcpy(v49, v40, v42);
            a1[1] = v49;
            a1[2] = v39;
            a1[3] = v63;
            if (v40 != 0) {
              v50 = 128;
              if (*(_QWORD*)(*v41 + 200) == 0) {
                v50 = 56;
              }
              nn_mem_StandardAllocator_Free(*v41 + v50);
            }
            v38 = v62;
            v26 = v41;
          }
          else {
            *v36 = v34;
            v36[1] = v30;
            v38 = v25;
            v39 = (__int64)(v36 + 2);
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 1), 1u,
                                      memory_order_relaxed);
          }
          a1[2] = v39;
          Locator_df7860(*(_QWORD*)(v39 - 16),
                         (unsigned __int8*)(*(_QWORD*)(v39 - 16) + 328LL),
                         (__int64*)(*(_QWORD*)(v39 - 16) + 352LL));
          v25 = v38;
          if (atomic_fetch_add(v35, 0xFFFFFFFFFFFFFFFFLL) != 0) {
            goto LABEL_52;
          }
        }
        else {
          while ((*(_BYTE*)(*v28 + 16LL) & 1) != 0 ||
                 *(_QWORD*)(*v28 + 80LL) != *(_QWORD*)(v27 + 56)) {
            v28 += 2;
            if (v28 == v29) {
              goto LABEL_62;
            }
          }
          v30 = (_QWORD*)v28[1];
          if (v30 == nullptr) {
            goto LABEL_52;
          }
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 1), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 1),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            goto LABEL_52;
          }
        }
        (*(void (**)(_QWORD*))(*v30 + 16LL))(v30);
        std___1___shared_weak_count___release_weak_alt1(v30);
      }
    LABEL_52:
      v24 += 40;
    } while (v24 != v25);
  }
  v52 = (__int64*)a1[10];
  v51 = (__int64*)a1[11];
  if (v52 != v51) {
    v53 = (__int64*)a1[11];
    v54 = fw_memory_g_heap_manager_ptr;
    do {
      v55 = *((_BYTE*)v53 - 24);
      v53 -= 3;
      if ((v55 & 1) != 0 && *(v51 - 1) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v54 + 200LL) != 0) {
          v56 = 128;
        }
        else {
          v56 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v54 + v56);
      }
      v51 = v53;
    } while (v53 != v52);
  }
  v57 = a1[1];
  v58 = a1[2];
  a1[11] = v52;
  while (v57 != v58) {
    v59 = (__int64*)(*(_QWORD*)v57 + 704LL);
    if ((unsigned __int64)v52 >= a1[12]) {
      v52 = Manager_66cc20_alt1(a1 + 10, v59);
    }
    else {
      if ((*(_BYTE*)v59 & 1) != 0) {
        fw_text_String_CopyTerminated_alt1(v52,
                                           *(_QWORD*)(*(_QWORD*)v57 + 720LL),
                                           *(_QWORD*)(*(_QWORD*)v57 + 712LL));
      }
      else {
        v60 = *v59;
        v61 = *(_QWORD*)(*(_QWORD*)v57 + 720LL);
        v52[1] = *(_QWORD*)(*(_QWORD*)v57 + 712LL);
        v52[2] = v61;
        *v52 = v60;
      }
      v52 += 3;
    }
    a1[11] = v52;
    v57 += 16;
  }
}

void LocatorDispos_db3c00(unsigned __int8* a1, __int64** a2, __int64 a3,
                          __int64 a4, __int64 a5)
{
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64** v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  atomic_ullong* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  char* v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int8* v46;
  __int64 v47;
  __int64* v49;
  __int64* v51;
  struct {
    __int64 v52;
    __int64 v53;
  } v52_;
  struct {
    _QWORD v54[2];
    char* v55;
  } v54_;
  struct {
    __int64 v56;
    __int64 v57;
  } v56_;
  __int64 v58;

  v5 = a3;
  if (a3 == 0) {
    return;
  }
  HubDisposFileReader_c9bf60((void*)(&v56_.v56), a3, 2, a2);
  v7 = v56_.v56;
  v8 = v56_.v57;
  if (v56_.v56 == v56_.v57) {
    goto LABEL_63;
  }
  v46 = a1;
  v47 = v56_.v57;
  do {
    v9 = *(_QWORD*)(v5 + 16);
    if (v9 == 0 || (v10 = std___1___shared_weak_count_lock(v9)) == 0) {
    LABEL_12:
      v12 = nullptr;
      goto LABEL_13;
    }
    v11 = *(_QWORD*)(v5 + 8);
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v11 == 0) {
        goto LABEL_12;
      }
    }
    else {
      v13 = v10;
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      v8 = v47;
      std___1___shared_weak_count___release_weak_alt1(v13);
      if (v11 == 0) {
        goto LABEL_12;
      }
    }
    v12 = (_QWORD*)(v11 + 352);
  LABEL_13:
    if ((*(_BYTE*)(v7 + 8) & 1) != 0) {
      v14 = *(_QWORD*)(v7 + 24);
    }
    else {
      v14 = v7 + 9;
    }
    v15 = game_HashString(v14);
    if (v15 != 0) {
      v16 = v12[11];
      if (v16 != 0 && v12[13] != 0) {
        v17 = v16 - 1;
        if ((v16 & (v16 - 1)) != 0) {
          v18 = v15;
          if (v15 >= v16) {
            v18 = v15 % v16;
          }
        }
        else {
          v18 = v17 & v15;
        }
        v19 = *(_QWORD**)(v12[10] + 8 * v18);
        if (v19 != nullptr) {
          v20 = (_QWORD*)*v19;
          if (v20 != nullptr) {
            if ((v16 & v17) == 0) {
              while (1) {
                v22 = v20[1];
                if (v22 == v15) {
                  if (v20[2] == v15) {
                    goto LABEL_39;
                  }
                }
                else if ((v22 & v17) != v18) {
                  goto LABEL_5;
                }
                v20 = (_QWORD*)*v20;
                if (v20 == nullptr) {
                  goto LABEL_5;
                }
              }
            }
            do {
              v21 = v20[1];
              if (v21 == v15) {
                if (v20[2] == v15) {
                LABEL_39:
                  v23 = v20[3];
                  if (v23 != 0) {
                    v45 = v5;
                    LocatorDispos_db2180((void*)(v54_.v54), v46,
                                         (unsigned __int8*)(v7 + 56));
                    v24 = *(__int64***)(v23 + 40);
                    v26 = *v24;
                    v25 = v24[1];
                    v49 = v25;
                    while (v26 != v25) {
                      v27 = *(_QWORD*)(a4 + 32);
                      if (v27 == 0 ||
                          (v58 = *v26, ((*(__int64 (**)(__int64, __int64*))(
                                            *(_QWORD*)v27 + 48LL))(v27, &v58) &
                                        1) != 0)) {
                        v28 = fw_memory_HeapManager_Allocate_alt1(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr, 616, 16, 0);
                        *(_QWORD*)(v28 + 16) = 0;
                        *(_QWORD*)(v28 + 8) = 0;
                        v29 = (atomic_ullong*)(v28 + 8);
                        v30 = v28;
                        v31 = v28;
                        v32 = v28;
                        *(_QWORD*)v28 = GameData_1fdf960;
                        v51 = v26;
                        v33 = *v26;
                        *(_QWORD*)(v28 + 24) = 0;
                        v34 = v28 + 24;
                        *(_QWORD*)(v28 + 32) = 0;
                        *(_QWORD*)(v28 + 40) = 0;
                        v35 = v28;
                        *(_QWORD*)(v28 + 48) = 0;
                        *(_QWORD*)(v28 + 56) = 0;
                        *(_QWORD*)(v28 + 64) = 0;
                        *(_BYTE*)(v28 + 72) = 0;
                        *(_BYTE*)(v28 + 464) = 0;
                        *(_BYTE*)(v28 + 472) = 0;
                        *(_BYTE*)(v28 + 536) = 0;
                        *(_BYTE*)(v28 + 544) = 0;
                        *(_BYTE*)(v28 + 608) = 0;
                        *(_WORD*)(v28 + 176) = 0;
                        *(_QWORD*)(v28 + 160) = 0;
                        *(_QWORD*)(v28 + 168) = 0;
                        *(_QWORD*)(v28 + 144) = 0;
                        *(_QWORD*)(v28 + 152) = 0;
                        *(_QWORD*)(v28 + 120) = 0;
                        *(_QWORD*)(v28 + 128) = 0;
                        *(_QWORD*)(v28 + 96) = 0;
                        *(_QWORD*)(v28 + 104) = 0;
                        *(_QWORD*)(v28 + 80) = 0;
                        *(_QWORD*)(v28 + 88) = 0;
                        *(_QWORD*)(v28 + 136) = 0;
                        v36 = (__int64*)(v28 + 136);
                        *(_QWORD*)(v28 + 112) = 0;
                        v37 = v28 + 112;
                        *(_BYTE*)(v28 + 400) = 0;
                        *(_QWORD*)(v28 + 384) = 0;
                        *(_QWORD*)(v28 + 392) = 0;
                        *(_QWORD*)(v28 + 368) = 0;
                        *(_QWORD*)(v28 + 376) = 0;
                        *(_QWORD*)(v28 + 352) = 0;
                        *(_QWORD*)(v28 + 360) = 0;
                        *(_QWORD*)(v28 + 336) = 0;
                        *(_QWORD*)(v28 + 344) = 0;
                        *(_QWORD*)(v28 + 320) = 0;
                        *(_QWORD*)(v28 + 328) = 0;
                        *(_QWORD*)(v28 + 304) = 0;
                        *(_QWORD*)(v28 + 312) = 0;
                        *(_QWORD*)(v28 + 288) = 0;
                        *(_QWORD*)(v28 + 296) = 0;
                        *(_QWORD*)(v28 + 272) = 0;
                        *(_QWORD*)(v28 + 280) = 0;
                        *(_QWORD*)(v28 + 256) = 0;
                        *(_QWORD*)(v28 + 264) = 0;
                        *(_QWORD*)(v28 + 240) = 0;
                        *(_QWORD*)(v28 + 248) = 0;
                        *(_QWORD*)(v28 + 216) = 0;
                        *(_QWORD*)(v28 + 224) = 0;
                        *(_QWORD*)(v28 + 192) = 0;
                        *(_QWORD*)(v28 + 200) = 0;
                        *(_QWORD*)(v28 + 232) = 0;
                        *(_QWORD*)(v28 + 208) = 0;
                        *(_QWORD*)(v28 + 184) = 0;
                        GameRoutine_e08050((__int64*)(v28 + 24), v33);
                        game_hub_e08150(v34, v37, (_QWORD*)(v33 + 32));
                        GameRoutine_e08260(v34, v36,
                                           (unsigned __int16*)(v33 + 40));
                        *(_DWORD*)(v30 + 160) = *(_DWORD*)(v33 + 56);
                        *(_DWORD*)(v30 + 164) = *(_DWORD*)(v33 + 60);
                        *(_DWORD*)(v30 + 168) = *(_DWORD*)(v33 + 64);
                        *(_DWORD*)(v30 + 172) = *(_DWORD*)(v33 + 68);
                        *(_WORD*)(v30 + 176) = *(_WORD*)(v33 + 72);
                        game_hub_e08150(v34, v32 + 184, (_QWORD*)(v33 + 80));
                        GameRoutine_e08260(v34, (__int64*)(v35 + 208),
                                           (unsigned __int16*)(v33 + 88));
                        game_hub_e08150(v34, v31 + 232, (_QWORD*)(v33 + 104));
                        GameRoutine_e08260(v34, (__int64*)(v30 + 256),
                                           (unsigned __int16*)(v33 + 112));
                        game_hub_e08150(v34, v30 + 280, (_QWORD*)(v33 + 128));
                        GameRoutine_e08260(v34, (__int64*)(v30 + 304),
                                           (unsigned __int16*)(v33 + 136));
                        game_hub_e08150(v34, v30 + 328, (_QWORD*)(v33 + 152));
                        GameRoutine_e08260(v34, (__int64*)(v30 + 352),
                                           (unsigned __int16*)(v33 + 160));
                        if ((v54_.v54[0] & 1) != 0) {
                          v38 = v54_.v55;
                        }
                        else {
                          v38 = (char*)v54_.v54 + 1;
                        }
                        if ((v54_.v54[0] & 1) != 0) {
                          v39 = v54_.v54[1];
                        }
                        else {
                          v39 = (unsigned __int64)LOBYTE(v54_.v54[0]) >> 1;
                        }
                        LocatorDispos_db7380_alt1(v34, (__int64)v38, v39);
                        v52_.v52 = v34;
                        v52_.v53 = v30;
                        atomic_fetch_add_explicit(v29, 1u,
                                                  memory_order_relaxed);
                        v40 = *(_QWORD*)(a5 + 32);
                        if (v40 == 0) {
                          GameRoutine_60a310();
                        }
                        (*(void (**)(__int64, __int64, __int64*))(
                            *(_QWORD*)v40 + 48LL))(v40, v7 + 56, &v52_.v52);
                        v41 = v52_.v53;
                        if (v52_.v53 != 0 &&
                            atomic_fetch_add(
                                (atomic_ullong* volatile)(v52_.v53 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
                          (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
                          std___1___shared_weak_count___release_weak_alt1(v41);
                        }
                        v26 = v51;
                        if (atomic_fetch_add(v29, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                          (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
                          std___1___shared_weak_count___release_weak_alt1(v30);
                        }
                      }
                      v25 = v49;
                      ++v26;
                    }
                    if ((v54_.v54[0] & 1) != 0 && v54_.v55 != nullptr) {
                      v42 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v42 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v42);
                    }
                    v5 = v45;
                    v8 = v47;
                  }
                  break;
                }
              }
              else {
                if (v21 >= v16) {
                  v21 %= v16;
                }
                if (v21 != v18) {
                  break;
                }
              }
              v20 = (_QWORD*)*v20;
            } while (v20 != nullptr);
          }
        }
      }
    }
  LABEL_5:
    v7 += 144;
  } while (v7 != v8);
  v7 = v56_.v56;
LABEL_63:
  if (v7 != 0) {
    v43 = v56_.v57;
    if (v7 == v56_.v57) {
      goto LABEL_67;
    }
    do {
      v43 -= 144;
      GameRoutine_c9c320(v43);
    } while (v43 != v7);
    v56_.v57 = v7;
    if (v56_.v56 != 0) {
    LABEL_67:
      v44 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v44 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v44);
    }
  }
}

__attribute__((swiftcall)) void LocatorDispos_db4160(PSEUDO_X8 x8_,
                                                     __int64 result, __int64 a2,
                                                     __int64 a3, __int64 a4,
                                                     __int64 a5)
{
  _QWORD* a6 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v7;
  _QWORD* v8;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;

  if (a3 == 0 ||
      (v7 = *(_QWORD**)(result + 8), v8 = *(_QWORD**)(result + 16), v7 == v8)) {
  LABEL_22:
    *a6 = 0;
    a6[1] = 0;
  }
  else {
    while (1) {
      v13 = *v7;
      if ((*(_BYTE*)(*v7 + 16LL) & 1) == 0) {
        v14 = *(unsigned __int8*)(v13 + 112);
        v15 = *(_QWORD*)(v13 + 120);
        if ((v14 & 1) == 0) {
          v15 = v14 >> 1;
        }
        if (a3 == v15) {
          v16 = (v14 & 1) != 0 ? *(_QWORD*)(v13 + 128) : v13 + 113;
          result = memcmp_alt1(a2, v16, a3);
          if ((_DWORD)result == 0) {
            v17 = *(unsigned __int8*)(v13 + 616);
            v18 = *(_QWORD*)(v13 + 624);
            if ((v17 & 1) == 0) {
              v18 = v17 >> 1;
            }
            if (a5 == v18) {
              v19 = (v17 & 1) != 0 ? *(_QWORD*)(v13 + 632) : v13 + 617;
              result = memcmp_alt1(a4, v19, a5);
              if ((_DWORD)result == 0) {
                break;
              }
            }
          }
        }
      }
      v7 += 2;
      if (v7 == v8) {
        goto LABEL_22;
      }
    }
    v20 = v7[1];
    *a6 = v13;
    a6[1] = v20;
    if (v20 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void LocatorDispos_db4280(PSEUDO_X8 x8_,
                                                     __int64 result, __int64 a2,
                                                     __int64 a3,
                                                     unsigned __int8** a4)
{
  _QWORD* a5 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64* v5;
  __int64* v6;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  unsigned __int8* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int8* v22;

  v5 = *(__int64**)(result + 8);
  v6 = *(__int64**)(result + 16);
  a5[1] = 0;
  a5[2] = 0;
  for (*a5 = 0; v5 != v6; v5 += 2) {
    v11 = *v5;
    if ((*(_BYTE*)(*v5 + 16) & 1) == 0) {
      v12 = *(unsigned __int8*)(v11 + 112);
      v13 = *(_QWORD*)(v11 + 120);
      if ((v12 & 1) == 0) {
        v13 = v12 >> 1;
      }
      if (a3 == v13) {
        v14 = (v12 & 1) != 0 ? *(_QWORD*)(v11 + 128) : v11 + 113;
        result = memcmp_alt1(a2, v14, a3);
        if ((_DWORD)result == 0) {
          v15 = *a4;
          v16 = a4[1];
          if (*a4 != v16) {
            v17 = *(unsigned __int8*)(v11 + 616);
            if ((v17 & 1) != 0) {
              v18 = *(_QWORD*)(v11 + 624);
            }
            else {
              v18 = v17 >> 1;
            }
            if ((v17 & 1) != 0) {
              v19 = *(_QWORD*)(v11 + 632);
            }
            else {
              v19 = v11 + 617;
            }
            while (1) {
              v20 = *v15;
              v21 = *((_QWORD*)v15 + 1);
              if ((v20 & 1) == 0) {
                v21 = v20 >> 1;
              }
              if (v21 == v18) {
                v22 = (v20 & 1) != 0 ? *((unsigned __int8**)v15 + 2) : v15 + 1;
                result = memcmp_alt1(v22, v19, v18);
                if ((_DWORD)result == 0) {
                  break;
                }
              }
              v15 += 24;
              if (v15 == v16) {
                goto LABEL_3;
              }
            }
          }
          if (v15 != v16) {
            result = GameRoutine_db5b60(a5, v5);
          }
        }
      }
    }
  LABEL_3:;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void LocatorDispos_db43e0(PSEUDO_X8 x8_,
                                                     __int64 result, __int64 a2,
                                                     unsigned __int64 a3,
                                                     __int64 a4, __int64 a5)
{
  _QWORD* a6 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v9;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  int v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int8* v24;
  unsigned __int8* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int8* v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  char* v32;

  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  v9 = result;
  if (a3 >= 0x17) {
    v12 = a2;
    if ((a3 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (a3 | 7) + 1;
    }
    v14 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v13, 16, 0);
    a2 = v12;
    v11 = (char*)v14;
    v31 = a3;
    v32 = (char*)v14;
    v30 = v13 | 1;
    goto LABEL_9;
  }
  LOBYTE(v30) = 2 * a3;
  v11 = (char*)&v30 + 1;
  if (a3 != 0) {
  LABEL_9:
    result = memmove(v11, a2, a3);
  }
  v11[a3] = 0;
  a6[1] = 0;
  a6[2] = 0;
  v15 = *(__int64**)(v9 + 8);
  v16 = *(__int64**)(v9 + 16);
  *a6 = 0;
  if (v15 == v16) {
    v17 = v30 & 1;
  }
  else {
    v17 = v30 & 1;
    if (v17 != 0) {
      v18 = v31;
    }
    else {
      v18 = (unsigned __int64)(unsigned __int8)v30 >> 1;
    }
    if ((v30 & 1) != 0) {
      v19 = v32;
    }
    else {
      v19 = (char*)&v30 + 1;
    }
    do {
      v20 = *v15;
      if ((*(_BYTE*)(*v15 + 16) & 1) == 0) {
        v21 = *(unsigned __int8*)(v20 + 616);
        v22 = *(_QWORD*)(v20 + 624);
        if ((v21 & 1) == 0) {
          v22 = v21 >> 1;
        }
        if (a5 == v22) {
          v23 = (v21 & 1) != 0 ? *(_QWORD*)(v20 + 632) : v20 + 617;
          result = memcmp_alt1(a4, v23, a5);
          if ((_DWORD)result == 0) {
            v24 = *(unsigned __int8**)(v20 + 136);
            v25 = *(unsigned __int8**)(v20 + 144);
            if (v24 != v25) {
              while (1) {
                v26 = *v24;
                v27 = *((_QWORD*)v24 + 1);
                if ((v26 & 1) == 0) {
                  v27 = v26 >> 1;
                }
                if (v27 == v18) {
                  v28 =
                      (v26 & 1) != 0 ? *((unsigned __int8**)v24 + 2) : v24 + 1;
                  result = memcmp_alt1(v28, v19, v18);
                  if ((_DWORD)result == 0) {
                    break;
                  }
                }
                v24 += 24;
                if (v24 == v25) {
                  goto LABEL_17;
                }
              }
            }
            if (v24 != v25) {
              result = GameRoutine_db5b60(a6, v15);
            }
          }
        }
      }
    LABEL_17:
      v15 += 2;
    } while (v15 != v16);
  }
  if (v17 != 0 && v32 != nullptr) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    {
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v32);
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void LocatorDispos_db4610(PSEUDO_X8 x8_, _QWORD* a1,
                                                     __int128* a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int128 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  const char* v14;
  char* v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  unsigned __int64 v24;
  __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  _QWORD* v28;
  _QWORD* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  char* v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  __int64 v43;
  __int64 v44;
  __int64 result;
  __int64 v46;
  struct {
    _QWORD v47[6];
    char v48;
    char gap57_[7];
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
  } v47_;
  struct {
    _QWORD v53[2];
    __int64 v54;
  } v53_;
  struct {
    __int64 v55[4];
    int v56;
    int v57;
    __int16 v58;
    char gap162_[6];
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
    __int64 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
    char v86;
    char gap385_[63];
    char v87;
    char gap449_[7];
    char v88;
    char gap457_[63];
    char v89;
    char gap521_[7];
    char v90;
    char gap529_[63];
    char v91;
  } v55_;
  struct {
    __int64 v92[2];
    char* v93;
  } v92_;
  struct {
    _QWORD v94[2];
    char* v95;
  } v94_;
  struct {
    _QWORD v96[2];
    char* v97;
  } v96_;

  LocatorDispos_db1840((void*)(v92_.v92));
  v8 = *a2;
  v55_.v57 = 0;
  v55_.v58 = 0;
  v47_.v48 = 0;
  v55_.v56 = DWORD2(v8);
  v55_.v55[3] = v8;
  LODWORD(v8) = *((_DWORD*)a2 + 4);
  v9 = (__int64*)a2 + 3;
  __builtin_memset(v47_.v47, 0, sizeof(v47_.v47));
  v55_.v87 = 0;
  v55_.v88 = 0;
  v55_.v89 = 0;
  v55_.v90 = 0;
  v55_.v91 = 0;
  v47_.v49 = 0;
  v47_.v50 = 0;
  v47_.v51 = 0;
  v47_.v52 = 0;
  v53_.v53[0] = 0;
  v53_.v53[1] = 0;
  v53_.v54 = 0;
  __builtin_memset(v55_.v55, 0, 24);
  v55_.v86 = 0;
  v55_.v84 = 0;
  v55_.v85 = 0;
  v55_.v82 = 0;
  v55_.v83 = 0;
  v55_.v80 = 0;
  v55_.v81 = 0;
  v55_.v78 = 0;
  v55_.v79 = 0;
  v55_.v76 = 0;
  v55_.v77 = 0;
  v55_.v74 = 0;
  v55_.v75 = 0;
  v55_.v72 = 0;
  v55_.v73 = 0;
  v55_.v70 = 0;
  v55_.v71 = 0;
  v55_.v68 = 0;
  v55_.v69 = 0;
  v55_.v66 = 0;
  v55_.v67 = 0;
  v55_.v64 = 0;
  v55_.v65 = 0;
  v55_.v62 = 0;
  v55_.v63 = 0;
  v55_.v60 = 0;
  v55_.v61 = 0;
  v55_.v59 = 0;
  v55_.v57 = v8;
  if (v53_.v53 != (_QWORD*)((char*)a2 + 24)) {
    if ((*(_BYTE*)v9 & 1) != 0) {
      GameRoutine_64df20_alt1(v53_.v53, *((_QWORD*)a2 + 5), *((_QWORD*)a2 + 4));
    }
    else {
      v10 = *v9;
      v11 = *((_QWORD*)a2 + 4);
      v12 = *((_QWORD*)a2 + 5);
      v53_.v53[0] = v10;
      v53_.v53[1] = v11;
      v53_.v54 = v12;
    }
  }
  if (v55_.v55 != (__int64*)(a2 + 3)) {
    GameRoutine_6b7aa0(
        v55_.v55, *((__int64**)a2 + 6), *((__int64**)a2 + 7),
        0xAAAAAAAAAAAAAAABLL *
            ((__int64)(*((_QWORD*)a2 + 7) - *((_QWORD*)a2 + 6)) >> 3));
  }
  v13 = (__int64*)GameData_212dbb8[0];
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 64LL) & 1) != 0) {
    v14 = *(const char**)(*(_QWORD*)GameData_212dbb8[0] + 80LL);
  }
  else {
    v14 = (const char*)(*(_QWORD*)GameData_212dbb8[0] + 65LL);
  }
  if ((v92_.v92[0] & 1) != 0) {
    v15 = v92_.v93;
  }
  else {
    v15 = (char*)v92_.v92 + 1;
  }
  sprintf(v94_.v94, "%s::%s", "PushGroup", v15);
  sprintf(v96_.v96, "%s=%s", v14, (const char*)v94_.v94);
  GameRoutine_60a020((__int64)v47_.v47, (__int64)v96_.v96);
  v16 = *v13;
  v17 = strlen(a3);
  if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v18 = v17;
  v19 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v17 >= 0x17) {
    if ((v17 | 7) == 0x17) {
      v21 = 26;
    }
    else {
      v21 = (v17 | 7) + 1;
    }
    v20 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v21, 16, 0);
    v94_.v95 = v20;
    v94_.v94[1] = v18;
    v94_.v94[0] = v21 | 1;
  }
  else {
    LOBYTE(v94_.v94[0]) = 2 * v17;
    v20 = (char*)v94_.v94 + 1;
    if (v17 == 0) {
      goto LABEL_22;
    }
  }
  memmove(v20, a3, v18);
LABEL_22:
  v20[v18] = 0;
  LocatorDispos_db2180((void*)(v96_.v96), (unsigned __int8*)(v16 + 40),
                       (unsigned __int8*)v94_.v94);
  if ((v94_.v94[0] & 1) != 0 && v94_.v95 != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*v19 + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*v19 + v22);
  }
  if ((v96_.v96[0] & 1) != 0) {
    v23 = v96_.v97;
  }
  else {
    v23 = (char*)v96_.v96 + 1;
  }
  if ((v96_.v96[0] & 1) != 0) {
    v24 = v96_.v96[1];
  }
  else {
    v24 = (unsigned __int64)LOBYTE(v96_.v96[0]) >> 1;
  }
  LocatorDispos_db7380_alt1((__int64)v47_.v47, (__int64)v23, v24);
  v25 = *v19;
  v94_.v94[0] = a3;
  v26 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v25, 752, 16, 0);
  v27 = v26 + 3;
  v28 = v26;
  v26[1] = 0;
  v26[2] = 0;
  *v26 = GameData_1fdf700;
  LocatorDispos_db6990((__int64)(v26 + 3), (__int64)v47_.v47, v94_.v94);
  v29 = (_QWORD*)a1[2];
  v30 = a1[3];
  *a4 = v27;
  a4[1] = v28;
  if ((unsigned __int64)v29 >= v30) {
    v32 = a1[1];
    v33 = (char*)v29 - v32;
    v34 = (((__int64)v29 - v32) >> 4) + 1;
    if (v34 >> 60 != 0) {
      GameRoutine_db5cb0();
    }
    v35 = v30 - v32;
    if (v35 >> 3 > v34) {
      v34 = v35 >> 3;
    }
    if ((unsigned __int64)v35 >= 0x7FFFFFFFFFFFFFF0LL) {
      v36 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v36 = v34;
    }
    if (v36 >> 60 != 0) {
      GameRoutine_60a210_alt1();
    }
    v37 = fw_memory_HeapManager_Allocate_alt1(*v19, 16 * v36, 16, 0);
    v38 = &v33[v37];
    v39 = v37 + 16 * v36;
    *(_QWORD*)v38 = v27;
    *((_QWORD*)v38 + 1) = v28;
    v31 = (__int64)&v33[v37 + 16];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 1), 1u,
                              memory_order_relaxed);
    v40 = a1[1];
    v41 = a1[2] - v40;
    v42 = &v38[-v41];
    memcpy(&v38[-v41], v40, v41);
    a1[1] = v42;
    a1[2] = v31;
    a1[3] = v39;
    if (v40 != 0) {
      v43 = 128;
      if (*(_QWORD*)(*v19 + 200) == 0) {
        v43 = 56;
      }
      nn_mem_StandardAllocator_Free(*v19 + v43);
    }
  }
  else {
    *v29 = v27;
    v29[1] = v28;
    v31 = (__int64)(v29 + 2);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 1), 1u,
                              memory_order_relaxed);
  }
  a1[2] = v31;
  Locator_df7860(*(_QWORD*)(v31 - 16),
                 (unsigned __int8*)(*(_QWORD*)(v31 - 16) + 328LL),
                 (__int64*)(*(_QWORD*)(v31 - 16) + 352LL));
  if ((v96_.v96[0] & 1) != 0 && v96_.v97 != nullptr) {
    v44 = 128;
    if (*(_QWORD*)(*v19 + 200) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free(*v19 + v44);
  }
  result = HubNatives_ccbf80_alt1((__int64)v47_.v47);
  if ((v92_.v92[0] & 1) != 0 && v92_.v93 != nullptr) {
    v46 = 128;
    if (*(_QWORD*)(*v19 + 200) == 0) {
      v46 = 56;
    }
    {
      nn_mem_StandardAllocator_Free(*v19 + v46);
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void LocatorDispos_db4a70(PSEUDO_X8 x8_, _QWORD* a1,
                                                     __int128* a2, __int64 a3,
                                                     __int64 unused_int3,
                                                     __int64* a4)
{
  __int64* a5 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __n128 result;
  __int64 v14;
  struct {
    __int64 v15;
    __int64 v16;
  } v15_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LocatorDispos_db4610((void*)(a5), a1, a2, a3),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v7 = *a5;
  v8 = *a4;
  v9 = a4[1];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
  }
  v10 = *(_QWORD*)(v7 + 696);
  *(_QWORD*)(v7 + 688) = v8;
  *(_QWORD*)(v7 + 696) = v9;
  if (v10 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v10),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v9),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v11 = *a4;
  v12 = a5[1];
  v15_.v15 = v7;
  v15_.v16 = v12;
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
  }
  GameRoutine_db5b60_alt1((__int64*)(v11 + 664), &v15_.v15),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v14 = v15_.v16;
  if (v15_.v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15_.v16 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    {
      std___1___shared_weak_count___release_weak_alt1(v14),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_hub_LocatorDispos_CreateExternalDataImpl(
    PSEUDO_X8 x8_, _QWORD* a1, __int64 a2, __int64 a3, __int64** a4, __int64 a5,
    __int64 a6)
{
  __int64* a7 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64* v37;
  __int64* v38;
  char v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64* v43;
  __int64 v44;
  unsigned __int8* v45;
  __int64 v46;
  __int64* v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64* v57;
  __int64* v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  struct {
    _QWORD v69[4];
    _QWORD* v70;
  } v69_;
  struct {
    _QWORD v71[4];
    _QWORD* v72;
  } v71_;
  struct {
    __int64 v73;
    __int64 v74;
    char* v75;
  } v73_;
  struct {
    _QWORD v76[6];
    char v77;
    char gap193_[7];
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
    __int64 v89;
    __int16 v90;
    char gap298_[6];
    __int64 v91;
    __int64 v92;
    __int64 v93;
    __int64 v94;
    __int64 v95;
    __int64 v96;
    __int64 v97;
    __int64 v98;
    __int64 v99;
    __int64 v100;
    __int64 v101;
    __int64 v102;
    __int64 v103;
    __int64 v104;
    __int64 v105;
    __int64 v106;
    __int64 v107;
    __int64 v108;
    __int64 v109;
    __int64 v110;
    __int64 v111;
    __int64 v112;
    __int64 v113;
    __int64 v114;
    __int64 v115;
    __int64 v116;
    __int64 v117;
    char v118;
    char gap521_[63];
    char v119;
    char gap585_[7];
    char v120;
    char gap593_[63];
    char v121;
    char gap657_[7];
    char v122;
    char gap665_[63];
    char v123;
  } v76_;
  struct {
    unsigned __int8* v124;
    unsigned __int8* v125;
    unsigned __int8* v126;
  } v124_;
  struct {
    __int64 v127;
    __int64 v128;
  } v127_;
  struct {
    __int64* v129;
    __int64* v130;
    char* v131;
  } v129_;
  _QWORD v132[3];

  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v132[0] = a5;
  v132[1] = a6;
  v12 =
      GameRoutine_f49100(*(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 216LL), a2),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v129_.v130 = nullptr;
  v129_.v131 = nullptr;
  v129_.v129 = nullptr;
  v14 = *(__int64**)(v12 + 24);
  v13 = *(__int64**)(v12 + 32);
  v15 = v12;
  v16 = (char*)v13 - (char*)v14;
  v17 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v13 != v14) {
    if (0xAAAAAAAAAAAAAAABLL * (v16 >> 3) > 0xAAAAAAAAAAAAAAALL) {
      goto LABEL_109;
    }
    v18 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, (char*)v13 - (char*)v14, 16, 0),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v129_.v129 = v18;
    v129_.v131 = (char*)v18 + v16;
    do {
      if ((*(_BYTE*)v14 & 1) != 0) {
        fw_text_String_CopyTerminated_alt1(v18, v14[2], v14[1]),
            v31 = COERCE_AS(__typeof__(v31),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v19 = *v14;
        v20 = v14[2];
        v18[1] = v14[1];
        v18[2] = v20;
        *v18 = v19;
      }
      v14 += 3;
      v18 += 3;
    } while (v14 != v13);
    v129_.v130 = v18;
    v17 = &fw_memory_g_heap_manager;
  }
  if (&v129_.v129 != a4) {
    v21 = a4[1];
    if (v21 != *a4) {
      GameRoutine_6b7aa0((__int64*)&v129_.v129, *a4, v21,
                         0xAAAAAAAAAAAAAAABLL * (v21 - *a4)),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v23 = a1[1];
  v22 = a1[2];
  a7[1] = 0;
  a7[2] = 0;
  *a7 = 0;
  if (v22 == v23) {
    goto LABEL_20;
  }
  v24 = *(unsigned __int8*)(GameData_21f3d10 + 40);
  v25 = *(_QWORD*)(GameData_21f3d10 + 48);
  if ((v24 & 1) == 0) {
    v25 = v24 >> 1;
  }
  if (a3 != v25 || ((v24 & 1) != 0 ? (v26 = *(_QWORD*)(GameData_21f3d10 + 56))
                                   : (v26 = GameData_21f3d10 + 41),
                    (unsigned int)memcmp_alt1(a2, v26, a3) != 0)) {
  LABEL_20:
    v27 = strlen(a2),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v27 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0_alt1(),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v28 = v27;
    if (v27 >= 0x17) {
      if ((v27 | 7) == 0x17) {
        v30 = 26;
      }
      else {
        v30 = (v27 | 7) + 1;
      }
      v29 = (char*)fw_memory_HeapManager_Allocate_alt1(*v17, v30, 16, 0),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v73_.v74 = v28;
      v73_.v75 = v29;
      v73_.v73 = v30 | 1;
    }
    else {
      LOBYTE(v73_.v73) = 2 * v27;
      v29 = (char*)&v73_.v73 + 1;
      if (v27 == 0) {
      LABEL_29:
        v29[v28] = 0;
        v71_.v71[0] = GameData_1fdf750;
        v71_.v71[1] = v132;
        v71_.v72 = v71_.v71;
        v69_.v69[0] = GameData_1fdf7e0;
        v69_.v69[1] = a7;
        v69_.v70 = v69_.v69;
        LocatorDispos_db3c00((unsigned __int8*)&v73_.v73, &v129_.v129, v15,
                             (__int64)v71_.v71, (__int64)v69_.v69),
            v31 = COERCE_AS(__typeof__(v31),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v69_.v70 == v69_.v69) {
          v32 = 32;
        }
        else {
          if (v69_.v70 == nullptr) {
            goto LABEL_34;
          }
          v32 = 40;
        }
        (*(void (**)(_QWORD*, __int64))(*v69_.v70 + v32))(v69_.v70, v31),
            v31 = COERCE_AS(__typeof__(v31),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      LABEL_34:
        if (v71_.v72 == v71_.v71) {
          v33 = 32;
        }
        else {
          if (v71_.v72 == nullptr) {
            goto LABEL_39;
          }
          v33 = 40;
        }
        (*(void (**)(_QWORD*, __int64))(*v71_.v72 + v33))(v71_.v72, v31),
            v31 = COERCE_AS(__typeof__(v31),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      LABEL_39:
        if ((v73_.v73 & 1) == 0 || v73_.v75 == nullptr) {
          goto LABEL_45;
        }
        v34 = *v17;
        goto LABEL_42;
      }
    }
    memmove(v29, a2, v28),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_29;
  }
  v42 = v129_.v129;
  v43 = v129_.v130;
  v124_.v124 = nullptr;
  v124_.v125 = nullptr;
  v44 = (char*)v129_.v130 - (char*)v129_.v129;
  v124_.v126 = nullptr;
  if (v129_.v130 == v129_.v129) {
    LocatorDispos_db4280_alt1((void*)(&v127_.v127), a1, a5, a6, &v124_.v124),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_79;
  }
  if (0xAAAAAAAAAAAAAAABLL * (v44 >> 3) > 0xAAAAAAAAAAAAAAALL) {
  LABEL_109:
    GameRoutine_64aa00(),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v45 = (unsigned __int8*)fw_memory_HeapManager_Allocate_alt1(
      *v17, (char*)v129_.v130 - (char*)v129_.v129, 16, 0),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v46 = 0;
  v124_.v124 = v45;
  v124_.v126 = &v45[v44];
  do {
    v47 = &v42[v46];
    v48 = (__int64*)&v45[v46 * 8];
    if ((v42[v46] & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(v48, v47[2], v47[1]),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v49 = *v47;
      v50 = v47[1];
      v51 = v47[2];
      v48[1] = v50;
      v48[2] = v51;
      *v48 = v49;
    }
    v46 += 3;
  } while (&v42[v46] != v43);
  v124_.v125 = &v45[v46 * 8];
  LocatorDispos_db4280_alt1((void*)(&v127_.v127), a1, a5, a6, &v124_.v124),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  do {
    if ((v45[v46 * 8 - 24] & 1) != 0 && *(_QWORD*)&v45[v46 * 8 - 8] != 0) {
      if (*(_QWORD*)(*v17 + 200) != 0) {
        v52 = 128;
      }
      else {
        v52 = 56;
      }
      nn_mem_StandardAllocator_Free(*v17 + v52),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v46 -= 3;
  } while (v46 != 0);
  v53 = *v17;
  v124_.v125 = v45;
  v54 = 128;
  if (*(_QWORD*)(v53 + 200) == 0) {
    v54 = 56;
  }
  nn_mem_StandardAllocator_Free(v53 + v54),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_79:
  v55 = v127_.v127;
  v56 = v127_.v128;
  if (v127_.v127 != v127_.v128) {
    v57 = nullptr;
    do {
      v76_.v119 = 0;
      v76_.v120 = 0;
      v76_.v121 = 0;
      v76_.v122 = 0;
      v76_.v123 = 0;
      v76_.v78 = 0;
      v76_.v79 = 0;
      v76_.v80 = 0;
      v76_.v81 = 0;
      v76_.v82 = 0;
      v76_.v83 = 0;
      v76_.v84 = 0;
      v76_.v85 = 0;
      v76_.v86 = 0;
      v76_.v87 = 0;
      v76_.v88 = 0;
      v76_.v89 = 0;
      v76_.v90 = 0;
      v76_.v91 = 0;
      v76_.v92 = 0;
      v76_.v93 = 0;
      v76_.v94 = 0;
      v76_.v95 = 0;
      v76_.v96 = 0;
      v76_.v97 = 0;
      v76_.v98 = 0;
      v76_.v99 = 0;
      v76_.v100 = 0;
      v76_.v101 = 0;
      v76_.v102 = 0;
      v76_.v103 = 0;
      v76_.v104 = 0;
      v76_.v105 = 0;
      v76_.v106 = 0;
      v76_.v107 = 0;
      v76_.v108 = 0;
      v76_.v109 = 0;
      v76_.v110 = 0;
      v76_.v111 = 0;
      v76_.v112 = 0;
      v76_.v113 = 0;
      v76_.v114 = 0;
      v76_.v115 = 0;
      v76_.v116 = 0;
      v76_.v117 = 0;
      v76_.v118 = 0;
      v76_.v77 = 0;
      __builtin_memset(v76_.v76, 0, sizeof(v76_.v76));
      v73_.v74 = 0;
      v73_.v75 = nullptr;
      v73_.v73 = 0;
      v58 = (__int64*)(*(_QWORD*)v55 + 616LL);
      if (&v73_.v73 != v58) {
        if ((*(_BYTE*)v58 & 1) != 0) {
          GameRoutine_64df20_alt1(&v73_.v73, *(_QWORD*)(*(_QWORD*)v55 + 632LL),
                                  *(_QWORD*)(*(_QWORD*)v55 + 624LL)),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        else {
          v59 = *v58;
          v60 = *(_QWORD*)(*(_QWORD*)v55 + 624LL);
          v61 = *(_QWORD*)(*(_QWORD*)v55 + 632LL);
          v73_.v73 = v59;
          v73_.v74 = v60;
          v73_.v75 = (char*)v61;
        }
      }
      GameRoutine_db5550((__int64)v76_.v76, *(_QWORD*)v55 + 24LL),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((unsigned __int64)v57 >= a7[2]) {
        v57 = LocatorDispos_db5ce0_alt1(a7, &v73_.v73),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        if ((v73_.v73 & 1) != 0) {
          fw_text_String_CopyTerminated_alt1(v57, (__int64)v73_.v75, v73_.v74),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        else {
          v62 = v73_.v73;
          v63 = (__int64)v73_.v75;
          v57[1] = v73_.v74;
          v57[2] = v63;
          *v57 = v62;
        }
        HubNatives_ccba40_alt1(v57 + 3, (__int64)v76_.v76),
            v31 = COERCE_AS(__typeof__(v31),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v57 += 77;
      }
      a7[1] = (__int64)v57;
      HubNatives_ccbf80_alt1((__int64)v76_.v76),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((v73_.v73 & 1) != 0 && v73_.v75 != nullptr) {
        if (*(_QWORD*)(*v17 + 200) != 0) {
          v64 = 128;
        }
        else {
          v64 = 56;
        }
        nn_mem_StandardAllocator_Free(*v17 + v64),
            v31 = COERCE_AS(__typeof__(v31),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v55 += 16;
    } while (v55 != v56);
    v55 = v127_.v127;
  }
  if (v55 != 0) {
    v65 = v127_.v128;
    if (v55 == v127_.v128) {
      goto LABEL_107;
    }
    do {
      v66 = *(_QWORD*)(v65 - 8);
      if (v66 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66),
            v31 = COERCE_AS(__typeof__(v31),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt1(v66),
            v31 = COERCE_AS(__typeof__(v31),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v65 -= 16;
    } while (v65 != v55);
    v127_.v128 = v55;
    if (v127_.v127 != 0) {
    LABEL_107:
      v34 = *v17;
    LABEL_42:
      v35 = 128;
      if (*(_QWORD*)(v34 + 200) == 0) {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free(v34 + v35),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
LABEL_45:
  v36 = v129_.v129;
  if (v129_.v129 != nullptr) {
    v37 = v129_.v130;
    if (v129_.v129 == v129_.v130) {
      goto LABEL_56;
    }
    v38 = v129_.v130;
    do {
      v39 = *((_BYTE*)v38 - 24);
      v38 -= 3;
      if ((v39 & 1) != 0 && *(v37 - 1) != 0) {
        if (*(_QWORD*)(*v17 + 200) != 0) {
          v40 = 128;
        }
        else {
          v40 = 56;
        }
        nn_mem_StandardAllocator_Free(*v17 + v40),
            v31 = COERCE_AS(__typeof__(v31),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v37 = v38;
    } while (v38 != v36);
    v129_.v130 = v36;
    if (v129_.v129 != nullptr) {
    LABEL_56:
      v41 = 128;
      if (*(_QWORD*)(*v17 + 200) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free(*v17 + v41),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
}

__attribute__((swiftcall)) void

LocatorDispos_db5260(PSEUDO_X8 x8_, _QWORD* a1, __int64 a2, __int64 a3,
                     __int64 a4, __int64 unused_int4, __int64 a5, __int64 a6)
{
  __int64* a7 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  char* v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64* v24;
  signed __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  char v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
  struct {
    __int64 v41;
    unsigned __int64 v42;
    char* v43;
  } v41_;
  struct {
    __int64* v44;
    __int64 v45;
    __int64* v46;
  } v44_;

  v44_.v45 = 0;
  v44_.v46 = nullptr;
  v44_.v44 = nullptr;
  v14 = strlen(a4);
  if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v15 = v14;
  v16 = (__int64*)fw_memory_g_heap_manager_ptr;
  v40 = a7;
  if (v14 >= 0x17) {
    if ((v14 | 7) == 0x17) {
      v18 = 26;
    }
    else {
      v18 = (v14 | 7) + 1;
    }
    v17 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v18, 16, 0);
    v41_.v42 = v15;
    v41_.v43 = v17;
    v41_.v41 = v18 | 1;
    goto LABEL_9;
  }
  LOBYTE(v41_.v41) = 2 * v14;
  v17 = (char*)&v41_.v41 + 1;
  if (v14 != 0) {
  LABEL_9:
    memmove(v17, a4, v15);
  }
  v19 = (char*)v44_.v45;
  v20 = (unsigned __int64)v44_.v46;
  v17[v15] = 0;
  if ((unsigned __int64)v19 >= v20) {
    v24 = v44_.v44;
    v25 = v19 - (char*)v44_.v44;
    v26 = 1 - 0x5555555555555555LL * ((v19 - (char*)v44_.v44) >> 3);
    if (v26 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_64aa00();
    }
    v39 = a3;
    v27 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v20 - (_QWORD)v44_.v44) >> 3);
    if (2 * v27 > v26) {
      v26 = 2 * v27;
    }
    if (v27 >= 0x555555555555555LL) {
      v28 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v28 = v26;
    }
    if (v28 != 0) {
      if (v28 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210_alt1();
      }
      v29 = a5;
      v30 = a6;
      v22 =
          (__int64*)fw_memory_HeapManager_Allocate_alt1(*v16, 24 * v28, 16, 0);
    }
    else {
      v29 = a5;
      v30 = a6;
      v22 = nullptr;
    }
    v31 = (__int64*)((char*)v22 + v25);
    v32 = &v22[3 * v28];
    v33 = v41_.v42;
    v23 = (__int64)v22 + v25 + 24;
    *v31 = v41_.v41;
    v31[1] = v33;
    v31[2] = (__int64)v41_.v43;
    memcpy(v22, v24, v25);
    v44_.v44 = v22;
    v44_.v46 = v32;
    if (v24 != nullptr) {
      v34 = 128;
      if (*(_QWORD*)(*v16 + 200) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free(*v16 + v34);
    }
    v44_.v45 = (__int64)v22 + v25 + 24;
    game_hub_LocatorDispos_CreateExternalDataImpl((void*)(v40), a1, a2, v39,
                                                  &v44_.v44, v29, v30);
    if (v22 == (__int64*)v23) {
      goto LABEL_38;
    }
  }
  else {
    v21 = v41_.v42;
    v22 = v44_.v44;
    v23 = (__int64)(v19 + 24);
    v44_.v45 = (__int64)(v19 + 24);
    *(_QWORD*)v19 = v41_.v41;
    *((_QWORD*)v19 + 1) = v21;
    *((_QWORD*)v19 + 2) = v41_.v43;
    game_hub_LocatorDispos_CreateExternalDataImpl((void*)(v40), a1, a2, a3,
                                                  &v44_.v44, a5, a6);
    if (v22 == nullptr) {
      return;
    }
    if (v22 == (__int64*)v23) {
      goto LABEL_38;
    }
  }
  v35 = (__int64*)v23;
  do {
    v36 = *((_BYTE*)v35 - 24);
    v35 -= 3;
    if ((v36 & 1) != 0 && *(_QWORD*)(v23 - 8) != 0) {
      if (*(_QWORD*)(*v16 + 200) != 0) {
        v37 = 128;
      }
      else {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free(*v16 + v37);
    }
    v23 = (__int64)v35;
  } while (v35 != v22);
  if (v22 != nullptr) {
  LABEL_38:
    v38 = 128;
    if (*(_QWORD*)(*v16 + 200) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free(*v16 + v38);
  }
}

__attribute__((swiftcall)) void

game_hub_LocatorDispos_BuildInitTransformLocator(PSEUDO_X8 x8_,
                                                 __int64 unused_int0,
                                                 __int64 a1,
                                                 __int64 unused_int2,
                                                 __int64** a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 result;
  __int64* v20;
  __int64 v21;
  bool v22;
  __int64 v23;
  __int64 v24;
  struct {
    _QWORD v25[4];
    _QWORD* v26;
  } v25_;
  struct {
    _QWORD v27[4];
    _QWORD* v28;
  } v27_;
  struct {
    _QWORD v29[2];
    char* v30;
  } v29_;
  struct {
    __int64* v31;
    __int64* v32;
    __int64 v33;
  } v31_;

  v31_.v32 = nullptr;
  v31_.v33 = 0;
  v31_.v31 = nullptr;
  v6 = strlen(a1);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v9, 16, 0);
    v29_.v29[1] = v7;
    v29_.v30 = v8;
    v29_.v29[0] = v9 | 1;
    goto LABEL_9;
  }
  LOBYTE(v29_.v29[0]) = 2 * v6;
  v8 = (char*)v29_.v29 + 1;
  if (v6 != 0) {
  LABEL_9:
    memmove(v8, a1, v7);
  }
  v8[v7] = 0;
  v27_.v27[0] = GameData_1fdf860;
  v27_.v28 = v27_.v27;
  v25_.v26 = v25_.v25;
  v25_.v25[0] = GameData_1fdf8e0;
  v25_.v25[1] = &v31_.v31;
  LocatorDispos_db3c00((unsigned __int8*)v29_.v29, a2,
                       *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 216LL) + 8LL,
                       (__int64)v27_.v27, (__int64)v25_.v25);
  if (v25_.v26 == v25_.v25) {
    v13 = 32;
  }
  else {
    if (v25_.v26 == nullptr) {
      goto LABEL_15;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v25_.v26 + v13))((__int64)v25_.v26);
LABEL_15:
  if (v27_.v28 == v27_.v27) {
    v14 = 32;
    goto LABEL_19;
  }
  if (v27_.v28 != nullptr) {
    v14 = 40;
  LABEL_19:
    (*(void (**)(__int64))(*v27_.v28 + v14))((__int64)v27_.v28);
  }
  if ((v29_.v29[0] & 1) != 0 && v29_.v30 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
  }
  v16 = v31_.v31;
  if (v31_.v32 == v31_.v31) {
    result = memset(a3, 0, 616);
    if (v16 == nullptr) {
      result;
      return;
    }
  }
  else {
    if ((*(_BYTE*)v31_.v31 & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(a3, v31_.v31[2], v31_.v31[1]);
    }
    else {
      v17 = *v31_.v31;
      v18 = v31_.v31[2];
      a3[1] = v31_.v31[1];
      a3[2] = v18;
      *a3 = v17;
    }
    result = (__int64)HubNatives_ccba40_alt1(a3 + 3, (__int64)(v16 + 3));
    v16 = v31_.v31;
    if (v31_.v31 == nullptr) {
      result;
      return;
    }
  }
  if (v16 == v31_.v32) {
    goto LABEL_42;
  }
  v20 = v31_.v32 - 77;
  v21 = fw_memory_g_heap_manager_ptr;
  do {
    result = HubNatives_ccbf80_alt1((__int64)(v20 + 3));
    if ((*(_BYTE*)v20 & 1) != 0 && v20[2] != 0) {
      if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) != 0) {
        v23 = 128;
      }
      else {
        v23 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v23);
    }
    v22 = v20 == v16;
    v20 -= 77;
  } while (!v22);
  v31_.v32 = v16;
  if (v31_.v31 != nullptr) {
  LABEL_42:
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    {
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v24);
      return;
    }
  }
  {
    result;
    return;
  }
}

_QWORD* LocatorDispos_db5ce0(__int64* a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  char* v18;
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
  _QWORD* v44;
  __int64 v45;
  char* v46;
  __int64 v47;
  __int64 v48;
  char* v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;

  v2 = a1[1] - *a1;
  v3 = 0x4FCACE213F2B3885LL * (v2 >> 3) + 1;
  if (v3 > 0x6A63BD81A98EF6LL) {
    GameRoutine_db6220();
  }
  v6 = fw_memory_g_heap_manager_ptr;
  if (0x9F959C427E56710ALL * ((a1[2] - *a1) >> 3) > v3) {
    v3 = 0x9F959C427E56710ALL * ((a1[2] - *a1) >> 3);
  }
  if ((unsigned __int64)(0x4FCACE213F2B3885LL * ((a1[2] - *a1) >> 3)) >=
      0x3531DEC0D4C77BLL) {
    v7 = 0x6A63BD81A98EF6LL;
  }
  else {
    v7 = v3;
  }
  if (v7 != 0) {
    if (v7 > 0x6A63BD81A98EF6LL) {
      GameRoutine_60a210(a1);
    }
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        616 * v7, 16, 0);
  }
  else {
    v8 = 0;
  }
  v9 = (_QWORD*)(v8 + v2);
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(v9, a2[2], a2[1]);
  }
  else {
    v10 = a2[1];
    *v9 = *a2;
    v9[1] = v10;
    v9[2] = a2[2];
  }
  v11 = v8 + 616 * v7;
  HubNatives_ccba40(v9 + 3, a2 + 3);
  v12 = *a1;
  v13 = a1[1];
  v14 = v9 + 77;
  v15 = (char*)v9 + *a1 - v13;
  if (v13 != *a1) {
    v16 = 0;
    do {
      v17 = v12 + v16;
      v18 = &v15[v16];
      v19 = *(_QWORD*)(v12 + v16);
      v20 = *(_QWORD*)(v12 + v16 + 16);
      *((_QWORD*)v18 + 1) = *(_QWORD*)(v12 + v16 + 8);
      *((_QWORD*)v18 + 2) = v20;
      *(_QWORD*)v18 = v19;
      *(_QWORD*)(v17 + 8) = 0;
      *(_QWORD*)(v17 + 16) = 0;
      *(_QWORD*)v17 = 0;
      v21 = *(_QWORD*)(v12 + v16 + 24);
      v22 = *(_QWORD*)(v12 + v16 + 40);
      *((_QWORD*)v18 + 4) = *(_QWORD*)(v12 + v16 + 32);
      *((_QWORD*)v18 + 5) = v22;
      *((_QWORD*)v18 + 3) = v21;
      *(_QWORD*)(v17 + 32) = 0;
      *(_QWORD*)(v17 + 40) = 0;
      *(_QWORD*)(v17 + 24) = 0;
      v23 = *(_QWORD*)(v12 + v16 + 48);
      v24 = *(_QWORD*)(v12 + v16 + 64);
      *((_QWORD*)v18 + 7) = *(_QWORD*)(v12 + v16 + 56);
      *((_QWORD*)v18 + 8) = v24;
      *((_QWORD*)v18 + 6) = v23;
      *(_QWORD*)(v17 + 56) = 0;
      *(_QWORD*)(v17 + 64) = 0;
      *(_QWORD*)(v17 + 48) = 0;
      v25 = *(_QWORD*)(v12 + v16 + 80);
      *((_QWORD*)v18 + 9) = *(_QWORD*)(v12 + v16 + 72);
      *((_QWORD*)v18 + 10) = v25;
      v26 = *(_QWORD*)(v12 + v16 + 88);
      v27 = *(_QWORD*)(v12 + v16 + 104);
      *((_QWORD*)v18 + 12) = *(_QWORD*)(v12 + v16 + 96);
      *((_QWORD*)v18 + 13) = v27;
      *((_QWORD*)v18 + 11) = v26;
      *(_QWORD*)(v17 + 96) = 0;
      *(_QWORD*)(v17 + 104) = 0;
      *(_QWORD*)(v17 + 88) = 0;
      v28 = *(_QWORD*)(v12 + v16 + 112);
      v29 = *(_QWORD*)(v12 + v16 + 128);
      *((_QWORD*)v18 + 15) = *(_QWORD*)(v12 + v16 + 120);
      *((_QWORD*)v18 + 16) = v29;
      *((_QWORD*)v18 + 14) = v28;
      *(_QWORD*)(v17 + 120) = 0;
      *(_QWORD*)(v17 + 128) = 0;
      *(_QWORD*)(v17 + 112) = 0;
      *((_QWORD*)v18 + 18) = 0;
      *((_QWORD*)v18 + 19) = 0;
      *((_QWORD*)v18 + 17) = 0;
      *((_QWORD*)v18 + 17) = *(_QWORD*)(v12 + v16 + 136);
      *((_QWORD*)v18 + 18) = *(_QWORD*)(v12 + v16 + 144);
      *((_QWORD*)v18 + 19) = *(_QWORD*)(v12 + v16 + 152);
      *(_QWORD*)(v17 + 144) = 0;
      *(_QWORD*)(v17 + 152) = 0;
      *(_QWORD*)(v17 + 136) = 0;
      v30 = *(_QWORD*)(v12 + v16 + 168);
      *((_QWORD*)v18 + 20) = *(_QWORD*)(v12 + v16 + 160);
      *((_QWORD*)v18 + 21) = v30;
      *((_WORD*)v18 + 88) = *(_WORD*)(v12 + v16 + 176);
      v31 = *(_QWORD*)(v12 + v16 + 184);
      v32 = *(_QWORD*)(v12 + v16 + 200);
      *((_QWORD*)v18 + 24) = *(_QWORD*)(v12 + v16 + 192);
      *((_QWORD*)v18 + 25) = v32;
      *((_QWORD*)v18 + 23) = v31;
      *(_QWORD*)(v17 + 192) = 0;
      *(_QWORD*)(v17 + 200) = 0;
      *(_QWORD*)(v17 + 184) = 0;
      *((_QWORD*)v18 + 27) = 0;
      *((_QWORD*)v18 + 28) = 0;
      *((_QWORD*)v18 + 26) = 0;
      *((_QWORD*)v18 + 26) = *(_QWORD*)(v12 + v16 + 208);
      *((_QWORD*)v18 + 27) = *(_QWORD*)(v12 + v16 + 216);
      *((_QWORD*)v18 + 28) = *(_QWORD*)(v12 + v16 + 224);
      *(_QWORD*)(v17 + 216) = 0;
      *(_QWORD*)(v17 + 224) = 0;
      *(_QWORD*)(v17 + 208) = 0;
      v33 = *(_QWORD*)(v12 + v16 + 232);
      v34 = *(_QWORD*)(v12 + v16 + 248);
      *((_QWORD*)v18 + 30) = *(_QWORD*)(v12 + v16 + 240);
      *((_QWORD*)v18 + 31) = v34;
      *((_QWORD*)v18 + 29) = v33;
      *(_QWORD*)(v17 + 240) = 0;
      *(_QWORD*)(v17 + 248) = 0;
      *(_QWORD*)(v17 + 232) = 0;
      *((_QWORD*)v18 + 33) = 0;
      *((_QWORD*)v18 + 34) = 0;
      *((_QWORD*)v18 + 32) = 0;
      *((_QWORD*)v18 + 32) = *(_QWORD*)(v12 + v16 + 256);
      *((_QWORD*)v18 + 33) = *(_QWORD*)(v12 + v16 + 264);
      *((_QWORD*)v18 + 34) = *(_QWORD*)(v12 + v16 + 272);
      *(_QWORD*)(v17 + 264) = 0;
      *(_QWORD*)(v17 + 272) = 0;
      *(_QWORD*)(v17 + 256) = 0;
      v35 = *(_QWORD*)(v12 + v16 + 280);
      v36 = *(_QWORD*)(v12 + v16 + 296);
      *((_QWORD*)v18 + 36) = *(_QWORD*)(v12 + v16 + 288);
      *((_QWORD*)v18 + 37) = v36;
      *((_QWORD*)v18 + 35) = v35;
      *(_QWORD*)(v17 + 288) = 0;
      *(_QWORD*)(v17 + 296) = 0;
      *(_QWORD*)(v17 + 280) = 0;
      *((_QWORD*)v18 + 39) = 0;
      *((_QWORD*)v18 + 40) = 0;
      *((_QWORD*)v18 + 38) = 0;
      *((_QWORD*)v18 + 38) = *(_QWORD*)(v12 + v16 + 304);
      *((_QWORD*)v18 + 39) = *(_QWORD*)(v12 + v16 + 312);
      *((_QWORD*)v18 + 40) = *(_QWORD*)(v12 + v16 + 320);
      *(_QWORD*)(v17 + 312) = 0;
      *(_QWORD*)(v17 + 320) = 0;
      *(_QWORD*)(v17 + 304) = 0;
      v37 = *(_QWORD*)(v12 + v16 + 344);
      v38 = *(_QWORD*)(v12 + v16 + 328);
      *((_QWORD*)v18 + 42) = *(_QWORD*)(v12 + v16 + 336);
      *((_QWORD*)v18 + 43) = v37;
      *((_QWORD*)v18 + 41) = v38;
      *(_QWORD*)(v17 + 336) = 0;
      *(_QWORD*)(v17 + 344) = 0;
      *(_QWORD*)(v17 + 328) = 0;
      *((_QWORD*)v18 + 45) = 0;
      *((_QWORD*)v18 + 46) = 0;
      *((_QWORD*)v18 + 44) = 0;
      *((_QWORD*)v18 + 44) = *(_QWORD*)(v12 + v16 + 352);
      *((_QWORD*)v18 + 45) = *(_QWORD*)(v12 + v16 + 360);
      *((_QWORD*)v18 + 46) = *(_QWORD*)(v12 + v16 + 368);
      *(_QWORD*)(v17 + 360) = 0;
      *(_QWORD*)(v17 + 368) = 0;
      *(_QWORD*)(v17 + 352) = 0;
      v39 = *(_QWORD*)(v12 + v16 + 376);
      v40 = *(_QWORD*)(v12 + v16 + 392);
      *((_QWORD*)v18 + 48) = *(_QWORD*)(v12 + v16 + 384);
      *((_QWORD*)v18 + 49) = v40;
      *((_QWORD*)v18 + 47) = v39;
      *(_QWORD*)(v17 + 384) = 0;
      *(_QWORD*)(v17 + 392) = 0;
      *(_QWORD*)(v17 + 376) = 0;
      v18[400] = 0;
      v18[464] = 0;
      if (*(_BYTE*)(v12 + v16 + 464) == 1) {
        v41 = *(_QWORD*)(v17 + 400);
        v18[408] = *(_BYTE*)(v17 + 408);
        *((_QWORD*)v18 + 50) = v41;
        v42 = *(_QWORD*)(v17 + 416);
        v43 = *(_QWORD*)(v17 + 432);
        *((_QWORD*)v18 + 53) = *(_QWORD*)(v17 + 424);
        *((_QWORD*)v18 + 54) = v43;
        *((_QWORD*)v18 + 52) = v42;
        *(_QWORD*)(v17 + 424) = 0;
        *(_QWORD*)(v17 + 432) = 0;
        *(_QWORD*)(v17 + 416) = 0;
        *((_QWORD*)v18 + 56) = 0;
        *((_QWORD*)v18 + 57) = 0;
        *((_QWORD*)v18 + 55) = 0;
        *((_QWORD*)v18 + 55) = *(_QWORD*)(v17 + 440);
        *((_QWORD*)v18 + 56) = *(_QWORD*)(v17 + 448);
        *((_QWORD*)v18 + 57) = *(_QWORD*)(v17 + 456);
        *(_QWORD*)(v17 + 448) = 0;
        *(_QWORD*)(v17 + 456) = 0;
        *(_QWORD*)(v17 + 440) = 0;
        v18[464] = 1;
      }
      v18[472] = 0;
      v18[536] = 0;
      if (*(_BYTE*)(v17 + 536) == 1) {
        v44 = (_QWORD*)(v12 + v16);
        v45 = *(_QWORD*)(v12 + v16 + 472);
        v18[480] = *(_BYTE*)(v12 + v16 + 480);
        *((_QWORD*)v18 + 59) = v45;
        v46 = &v15[v16];
        v47 = *(_QWORD*)(v12 + v16 + 488);
        v48 = *(_QWORD*)(v12 + v16 + 504);
        *((_QWORD*)v46 + 62) = *(_QWORD*)(v12 + v16 + 496);
        *((_QWORD*)v46 + 63) = v48;
        *((_QWORD*)v46 + 61) = v47;
        v44[62] = 0;
        v44[63] = 0;
        v44[61] = 0;
        *((_QWORD*)v46 + 66) = 0;
        *((_QWORD*)v46 + 65) = 0;
        *((_QWORD*)v46 + 64) = 0;
        *((_QWORD*)v46 + 64) = *(_QWORD*)(v12 + v16 + 512);
        *((_QWORD*)v46 + 65) = *(_QWORD*)(v12 + v16 + 520);
        *((_QWORD*)v46 + 66) = *(_QWORD*)(v12 + v16 + 528);
        v44[66] = 0;
        v44[65] = 0;
        v44[64] = 0;
        v18[536] = 1;
      }
      v49 = &v15[v16];
      v49[544] = 0;
      v49[608] = 0;
      if (*(_BYTE*)(v17 + 608) == 1) {
        v50 = (_QWORD*)(v12 + v16);
        v51 = *(_QWORD*)(v12 + v16 + 544);
        v49[552] = *(_BYTE*)(v12 + v16 + 552);
        *((_QWORD*)v49 + 68) = v51;
        v52 = *(_QWORD*)(v12 + v16 + 560);
        v53 = *(_QWORD*)(v12 + v16 + 568);
        *((_QWORD*)v49 + 72) = *(_QWORD*)(v12 + v16 + 576);
        *((_QWORD*)v49 + 71) = v53;
        *((_QWORD*)v49 + 70) = v52;
        v50[71] = 0;
        v50[72] = 0;
        v50[70] = 0;
        *((_QWORD*)v49 + 75) = 0;
        *((_QWORD*)v49 + 74) = 0;
        *((_QWORD*)v49 + 73) = 0;
        *((_QWORD*)v49 + 73) = *(_QWORD*)(v12 + v16 + 584);
        *((_QWORD*)v49 + 74) = *(_QWORD*)(v12 + v16 + 592);
        *((_QWORD*)v49 + 75) = *(_QWORD*)(v12 + v16 + 600);
        v50[75] = 0;
        v50[74] = 0;
        v50[73] = 0;
        v49[608] = 1;
      }
      v16 += 616;
    } while (v17 + 616 != v13);
    do {
      HubNatives_ccbf80(v12 + 24);
      if ((*(_BYTE*)v12 & 1) != 0 && *(_QWORD*)(v12 + 16) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
          v54 = 128;
        }
        else {
          v54 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v54);
      }
      v12 += 616;
    } while (v12 != v13);
    v12 = *a1;
  }
  *a1 = (__int64)v15;
  a1[1] = (__int64)v14;
  a1[2] = v11;
  if (v12 != 0) {
    v55 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v55);
  }
  return v14;
}

void game_hub_LocatorDispos_Rebuild_lambda0_Invoke(__int64 a1, __int64 a2,
                                                   __int64* a3)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char* v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  struct {
    __int64 v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
  } v45_;

  v4 = *a3;
  v3 = a3[1];
  *a3 = 0;
  a3[1] = 0;
  v6 = *(_QWORD**)(a1 + 8);
  v7 = *(_QWORD*)(v4 + 56);
  v9 = (_QWORD*)v6[8];
  v8 = v6[9];
  if ((unsigned __int64)v9 >= v8) {
    v11 = v6[7];
    v12 = (char*)v9 - v11;
    v13 = ((__int64)v9 - v11) >> 3;
    v14 = v13 + 1;
    if ((unsigned __int64)(v13 + 1) >> 61 != 0) {
      GameRoutine_65c760_alt1();
    }
    v15 = v8 - v11;
    if (v15 >> 2 > v14) {
      v14 = v15 >> 2;
    }
    if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF8LL) {
      v16 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v16 = v14;
    }
    if (v16 != 0) {
      if (v16 >> 61 != 0) {
        goto LABEL_50;
      }
      v17 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                8 * v16, 16, 0);
    }
    else {
      v17 = 0;
    }
    v18 = v17 + 8 * v16;
    v19 = (unsigned __int64)v9 - v11;
    v20 = (__int64)&v12[v17 + -8 * v13];
    *(_QWORD*)&v12[v17] = v7;
    v10 = (__int64)&v12[v17 + 8];
    memcpy_alt1(v20, v11, v19);
    v6[7] = v20;
    v6[8] = v10;
    v6[9] = v18;
    if (v11 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v11);
    }
  }
  else {
    *v9 = v7;
    v10 = (__int64)(v9 + 1);
  }
  v6[8] = v10;
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v45_.v45, *(_QWORD*)(a2 + 16),
                                       *(_QWORD*)(a2 + 8));
    v45_.v48 = v4;
    v45_.v49 = v3;
    if (v3 == 0) {
      goto LABEL_22;
    }
    goto LABEL_21;
  }
  v22 = *(_QWORD*)(a2 + 8);
  v45_.v45 = *(_QWORD*)a2;
  v45_.v46 = v22;
  v45_.v47 = *(_QWORD*)(a2 + 16);
  v45_.v48 = v4;
  v45_.v49 = v3;
  if (v3 != 0) {
  LABEL_21:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
LABEL_22:
  v23 = (__int64*)v6[5];
  v24 = v6[6];
  if ((unsigned __int64)v23 < v24) {
    v25 = v45_.v45;
    v26 = v45_.v47;
    v27 = (__int64)(v23 + 5);
    v23[1] = v45_.v46;
    v23[2] = v26;
    *v23 = v25;
    v45_.v46 = 0;
    v45_.v47 = 0;
    v45_.v45 = 0;
    v23[3] = v45_.v48;
    v23[4] = v45_.v49;
    v45_.v48 = 0;
    v45_.v49 = 0;
  LABEL_40:
    v6[5] = v27;
    goto LABEL_41;
  }
  v28 = v6[4];
  v29 = (char*)v23 - v28;
  v30 = 1 - 0x3333333333333333LL * (((__int64)v23 - v28) >> 3);
  if (v30 > 0x666666666666666LL) {
    GameRoutine_db68c0_alt1();
  }
  v31 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v24 - v28) >> 3);
  if (2 * v31 > v30) {
    v30 = 2 * v31;
  }
  if (v31 >= 0x333333333333333LL) {
    v32 = 0x666666666666666LL;
  }
  else {
    v32 = v30;
  }
  if (v32 != 0) {
    if (v32 <= 0x666666666666666LL) {
      v33 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                40 * v32, 16, 0);
      v28 = v6[4];
      v4 = v45_.v48;
      v34 = v45_.v49;
      v35 = v6[5] - v28;
      goto LABEL_34;
    }
  LABEL_50:
    GameRoutine_60a210_alt1();
  }
  v33 = 0;
  v35 = (unsigned __int64)v29;
  v34 = v3;
LABEL_34:
  v36 = (__int64*)&v29[v33];
  v45_.v48 = 0;
  v45_.v49 = 0;
  v37 = v33 + 40 * v32;
  v38 = v45_.v45;
  v39 = v45_.v46;
  v40 = (__int64)&v29[v33 - v35];
  v45_.v45 = 0;
  v45_.v46 = 0;
  v36[4] = v34;
  v27 = (__int64)&v29[v33 + 40];
  *v36 = v38;
  v36[1] = v39;
  v41 = v45_.v47;
  v45_.v47 = 0;
  v36[2] = v41;
  v36[3] = v4;
  memcpy_alt1(v40, v28, v35);
  v6[4] = v40;
  v6[5] = v27;
  v6[6] = v37;
  if (v28 == 0) {
    goto LABEL_40;
  }
  v42 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v42 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v42, v28);
  v43 = v45_.v49;
  v6[5] = v27;
  if (v43 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
    std___1___shared_weak_count___release_weak_alt2(v43);
  }
LABEL_41:
  if ((v45_.v45 & 1) != 0 && v45_.v47 != 0) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v45_.v47);
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt2(v3);
  }
}

__int64 LocatorDispos_db6990(__int64 a1, __int64 a2, _QWORD* a3)
{
  __int64 v3;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  _QWORD v12[2];
  char* v13;

  v3 = *a3;
  v6 = strlen(*a3);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v6);
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16,
                                               0);
    v12[1] = v7;
    v13 = v8;
    v12[0] = v9 | 1;
  }
  else {
    LOBYTE(v12[0]) = 2 * v6;
    v8 = (char*)v12 + 1;
    if (v6 == 0) {
      goto LABEL_10;
    }
  }
  memmove(v8, v3, v7);
LABEL_10:
  v8[v7] = 0;
  GameRoutine_df7380(a1, a2, v12);
  if ((v12[0] & 1) != 0 && v13 != nullptr) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
  }
  return a1;
}

bool game_hub_LocatorDispos_CreateExternalDataImpl_lambda0_Invoke(__int64 a1,
                                                                  __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  char* v4;

  v2 = *(_QWORD**)(a1 + 8);
  if (*(_QWORD*)(*(_QWORD*)a2 + 32LL) != 0) {
    v4 = *(char**)(*(_QWORD*)a2 + 32LL);
  }
  else {
    v4 = &GameData_1a9f09e;
  }
  v3 = v2[1];
  return strlen(v4) == v3 && (unsigned int)memcmp(v4, *v2) == 0;
}

__int64 game_hub_LocatorDispos_CreateExternalDataImpl_lambda1_Invoke(
    __int64 a1, __int64* a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v8;
  __int64* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[6];
  char v19;
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
  __int16 v32;
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
  char v60;
  char v61;
  char v62;
  char v63;
  char v64;
  char v65;

  v4 = *a3;
  v3 = a3[1];
  *a3 = 0;
  a3[1] = 0;
  result = GameRoutine_db7770(v4);
  if ((result & 1) != 0) {
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v65 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v19 = 0;
    __builtin_memset(v18, 0, sizeof(v18));
    v16 = 0;
    v17 = 0;
    v15 = 0;
    if (&v15 != a2) {
      if ((*(_BYTE*)a2 & 1) != 0) {
        GameRoutine_64df20(&v15, a2[2], a2[1]);
      }
      else {
        v8 = a2[1];
        v15 = *a2;
        v16 = v8;
        v17 = a2[2];
      }
    }
    GameRoutine_db5550((__int64)v18, v4);
    v9 = *(__int64**)(a1 + 8);
    v10 = (_QWORD*)v9[1];
    if ((unsigned __int64)v10 >= v9[2]) {
      v13 = LocatorDispos_db5ce0(v9, &v15);
    }
    else {
      if ((v15 & 1) != 0) {
        fw_text_String_CopyTerminated(v9[1], v17, v16);
      }
      else {
        v11 = v15;
        v12 = v17;
        v10[1] = v16;
        v10[2] = v12;
        *v10 = v11;
      }
      HubNatives_ccba40(v10 + 3, v18);
      v13 = v10 + 77;
    }
    v9[1] = (__int64)v13;
    result = HubNatives_ccbf80(v18);
    if ((v15 & 1) != 0 && v17 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
    }
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64

game_hub_LocatorDispos_BuildInitTransformLocator_lambda0_Invoke(__int64 a1,
                                                                __int64 a2)
{
  return *(_WORD*)(*(_QWORD*)a2 + 72LL) & 1;
}

__int64 game_hub_LocatorDispos_BuildInitTransformLocator_lambda1_Invoke(
    __int64 a1, __int64* a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v8;
  __int64* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[6];
  char v19;
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
  __int16 v32;
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
  char v60;
  char v61;
  char v62;
  char v63;
  char v64;
  char v65;

  v4 = *a3;
  v3 = a3[1];
  *a3 = 0;
  a3[1] = 0;
  result = GameRoutine_db7770(v4);
  if ((result & 1) != 0) {
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v65 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v19 = 0;
    __builtin_memset(v18, 0, sizeof(v18));
    v16 = 0;
    v17 = 0;
    v15 = 0;
    if (&v15 != a2) {
      if ((*(_BYTE*)a2 & 1) != 0) {
        GameRoutine_64df20(&v15, a2[2], a2[1]);
      }
      else {
        v8 = a2[1];
        v15 = *a2;
        v16 = v8;
        v17 = a2[2];
      }
    }
    GameRoutine_db5550((__int64)v18, v4);
    v9 = *(__int64**)(a1 + 8);
    v10 = (_QWORD*)v9[1];
    if ((unsigned __int64)v10 >= v9[2]) {
      v13 = LocatorDispos_db5ce0(v9, &v15);
    }
    else {
      if ((v15 & 1) != 0) {
        fw_text_String_CopyTerminated(v9[1], v17, v16);
      }
      else {
        v11 = v15;
        v12 = v17;
        v10[1] = v16;
        v10[2] = v12;
        *v10 = v11;
      }
      HubNatives_ccba40(v10 + 3, v18);
      v13 = v10 + 77;
    }
    v9[1] = (__int64)v13;
    result = HubNatives_ccbf80(v18);
    if ((v15 & 1) != 0 && v17 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
    }
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64* LocatorDispos_db7380(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  bool v8;
  unsigned __int64 v9;
  unsigned __int8* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  bool v21;
  unsigned __int64 v22;
  unsigned __int8* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  bool v34;
  unsigned __int64 v35;
  unsigned __int8* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  struct {
    __int64 v45[2];
    char v46;
    char gap17_[15];
    __int64 v47;
    __int64 v48;
    __int64 v49;
    char gap56_[8];
    char v50;
  } v45_;
  char v51;

  GameRoutine_60a060((char*)(a1 + 352), a2, a3);
  v4 = (_QWORD*)GameData_212dbb8[0];
  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    v5 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
  }
  else {
    v5 = 0;
  }
  if (GameData_22127a8 != 0) {
    v6 = GameData_22127a8;
  }
  else {
    v6 = v5;
  }
  v7 = *(unsigned __int8*)(a1 + 160);
  v8 = (v7 & 1) == 0;
  v9 = v7 >> 1;
  if (v8) {
    v10 = (unsigned __int8*)(a1 + 161);
  }
  else {
    v10 = *(unsigned __int8**)(a1 + 176);
  }
  if (v8) {
    v11 = v9;
  }
  else {
    v11 = *(_QWORD*)(a1 + 168);
  }
  Manager_d9bf20((void*)(v45_.v45), v6, v10, v11, (__int64*)(a1 + 184));
  GameRoutine_d90ae0(a1 + 376, v45_.v45);
  if (v45_.v50 == 1) {
    v12 = v45_.v48;
    if (v45_.v48 != 0) {
      v13 = v45_.v49;
      if (v45_.v48 == v45_.v49) {
        goto LABEL_21;
      }
      do {
        v14 = *(unsigned int*)(v13 - 8);
        v15 = v13 - 32;
        if ((_DWORD)v14 != -1) {
          ((void (*)(char*, __int64))GameData_1fdf9a0[v14])(&v51, v13 - 32);
        }
        *(_DWORD*)(v13 - 8) = -1;
        v13 -= 32;
      } while (v15 != v12);
      v45_.v49 = v12;
      if (v45_.v48 != 0) {
      LABEL_21:
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v16);
      }
    }
    if ((v45_.v46 & 1) != 0 && v45_.v47 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v17);
    }
  }
  if (*v4 != 0) {
    v18 = *v4 + 248LL;
  }
  else {
    v18 = 0;
  }
  if (GameData_22127a8 != 0) {
    v19 = GameData_22127a8;
  }
  else {
    v19 = v18;
  }
  v20 = *(unsigned __int8*)(a1 + 208);
  v21 = (v20 & 1) == 0;
  v22 = v20 >> 1;
  if (v21) {
    v23 = (unsigned __int8*)(a1 + 209);
  }
  else {
    v23 = *(unsigned __int8**)(a1 + 224);
  }
  if (v21) {
    v24 = v22;
  }
  else {
    v24 = *(_QWORD*)(a1 + 216);
  }
  Manager_d9bf20((void*)(v45_.v45), v19, v23, v24, (__int64*)(a1 + 232));
  GameRoutine_d90ae0(a1 + 448, v45_.v45);
  if (v45_.v50 == 1) {
    v25 = v45_.v48;
    if (v45_.v48 != 0) {
      v26 = v45_.v49;
      if (v45_.v48 == v45_.v49) {
        goto LABEL_49;
      }
      do {
        v27 = *(unsigned int*)(v26 - 8);
        v28 = v26 - 32;
        if ((_DWORD)v27 != -1) {
          ((void (*)(char*, __int64))GameData_1fdf9a0[v27])(&v51, v26 - 32);
        }
        *(_DWORD*)(v26 - 8) = -1;
        v26 -= 32;
      } while (v28 != v25);
      v45_.v49 = v25;
      if (v45_.v48 != 0) {
      LABEL_49:
        v29 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v29 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v29);
      }
    }
    if ((v45_.v46 & 1) != 0 && v45_.v47 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v30);
    }
  }
  if (*v4 != 0) {
    v31 = *v4 + 248LL;
  }
  else {
    v31 = 0;
  }
  if (GameData_22127a8 != 0) {
    v32 = GameData_22127a8;
  }
  else {
    v32 = v31;
  }
  v33 = *(unsigned __int8*)(a1 + 256);
  v34 = (v33 & 1) == 0;
  v35 = v33 >> 1;
  if (v34) {
    v36 = (unsigned __int8*)(a1 + 257);
  }
  else {
    v36 = *(unsigned __int8**)(a1 + 272);
  }
  if (v34) {
    v37 = v35;
  }
  else {
    v37 = *(_QWORD*)(a1 + 264);
  }
  Manager_d9bf20((void*)(v45_.v45), v32, v36, v37, (__int64*)(a1 + 280));
  GameRoutine_d90ae0(a1 + 520, v45_.v45);
  if (v45_.v50 == 1) {
    v38 = v45_.v48;
    if (v45_.v48 != 0) {
      v39 = v45_.v49;
      if (v45_.v48 == v45_.v49) {
        goto LABEL_77;
      }
      do {
        v40 = *(unsigned int*)(v39 - 8);
        v41 = v39 - 32;
        if ((_DWORD)v40 != -1) {
          ((void (*)(char*, __int64))GameData_1fdf9a0[v40])(&v51, v39 - 32);
        }
        *(_DWORD*)(v39 - 8) = -1;
        v39 -= 32;
      } while (v41 != v38);
      v45_.v49 = v38;
      if (v45_.v48 != 0) {
      LABEL_77:
        v42 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v42 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v42);
      }
    }
    if ((v45_.v46 & 1) != 0 && v45_.v47 != 0) {
      v43 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v43 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v43);
    }
  }
  return GameRoutine_e07e20((unsigned __int8*)a1);
}

#pragma GCC visibility pop
