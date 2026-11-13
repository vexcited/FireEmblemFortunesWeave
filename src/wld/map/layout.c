#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_a97000(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_ad69c0(_QWORD);
__int64 GameRoutine_ad7390(_QWORD);
__int64 GameRoutine_c19a20(_QWORD, _QWORD);
__int64 GameRoutine_c19a20_alt1(__int64 result, unsigned __int64, __int64,
                                __int64, __int64,
                                __int64) __asm__("GameRoutine_c19a20");
__int64 ResFile_5e5f00(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_1fd1588;
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* Layout_c148d0(_QWORD* a1, __int64* a2);
__int64* Layout_c14980_alt2(__int64* result) __asm__("Layout_c14980");
_QWORD* wld_map_Layout_Internal_LoadMapModelFile_lambda0_Invoke_alt1(
    _QWORD* result,
    __int64
        a2) __asm__("wld_map_Layout_Internal_LoadMapModelFile_lambda0_Invoke");
_QWORD* wld_map_Layout_Internal_LoadDirectModelFile_lambda0_Invoke(__int64 a1,
                                                                   __int64 a2);
_QWORD** Layout_c14980_alt1(_QWORD** result) __asm__("Layout_c14980");
_QWORD* GameRoutine_ad69c0_alt1(_QWORD*) __asm__("GameRoutine_ad69c0");
_QWORD* GameRoutine_c193c0(float*, unsigned __int8*, __int64**);
_QWORD* GameRoutine_c1a2c0(_QWORD*, _QWORD*);
_QWORD* GameRoutine_c32560(_QWORD* result);
__attribute__((swiftcall)) void g3d_ada070(PSEUDO_X8, __int64, unsigned __int64,
                                           __int64);
__attribute__((swiftcall)) void g3d_ada270(PSEUDO_X8, __int64, unsigned __int64,
                                           __int64, unsigned __int64, __int64);
__int64* GameRoutine_c18dc0(_QWORD*, unsigned __int8*);
__int64* GameRoutine_c18f60(_QWORD*, _QWORD*);
__int64* GameRoutine_c19120(__int64* result, unsigned __int64);
__int64* Registration_64a850(_QWORD*, __int64*);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c1a430(_QWORD, _QWORD);
__int64 GameRoutine_c1bb50(__int64 result);
__int64 GameRoutine_c1cbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c1cd40(__int64);
__int64 GameRoutine_c38340(__int64 result, __int64);
__int64 ObjectBuildCreate_c284a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memcmp(_QWORD, _QWORD);
__int64 memcmp_alt1(_QWORD, _QWORD, _QWORD) __asm__("memcmp");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 wld_c2a300(__int64 result);
extern __int64 (*GameData_1fd1aa0[])();
extern __int64 (*GameData_1fd1b30[])();
extern __int64 fw_memory_g_heap_manager;
extern char GameData_1a9f09e;
unsigned __int64 Layout_c11000(unsigned __int64 result);
unsigned __int64 Manager_6326c0(__int64*, __int64);
void GameRoutine_c13ab0();
void GameRoutine_c38500(_QWORD*, __int64*);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_66df80();
void __attribute__((noreturn)) GameRoutine_c18210();
void __attribute__((noreturn)) GameRoutine_c187a0(void);
void __attribute__((noreturn)) GameRoutine_c19100();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn))
String_60a1d0_alt1(_QWORD) __asm__("String_60a1d0");
__int64 Layout_c10f80(unsigned __int64 a1);
__attribute__((swiftcall)) void Layout_c12ec0(PSEUDO_X8 x8_, _QWORD* a1);
bool Layout_c13510(__int64 a1, __int64 a2, unsigned __int64 a3);
bool Layout_c13be0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5);
_QWORD* wld_map_Layout_Internal_LoadMapModelFile(__int64 a1, __int64 a2,
                                                 unsigned __int64 a3, char a4);
__attribute__((swiftcall)) void Layout_c14760(PSEUDO_X8 x8_, __int64 a1,
                                              unsigned __int8* a2);
__attribute__((swiftcall)) void Layout_c147c0(PSEUDO_X8 x8_,
                                              unsigned __int8* a1, __int64 a2);
__int64 wld_map_Layout_Internal_LoadDirectModelFile(_QWORD* a1, __int64 a2,
                                                    unsigned __int64 a3,
                                                    char a4);
void Layout_c1ba40(__int64 a1, __int64 a2);
__int64 GameRoutine_1fa0(void);
__int64 GameRoutine_1fd0(_QWORD, _QWORD);
__int64 GameRoutine_21c0(_QWORD, _QWORD);
__int64 GameRoutine_2360(_QWORD, _QWORD);
__int64 GameRoutine_5fc1f0(_QWORD);
__int64 GameRoutine_634d80(_QWORD, _QWORD);
__int64 GameRoutine_b310e0(_QWORD, _QWORD);
__int64 GameRoutine_b31800(_QWORD, _QWORD);
__int64 GameRoutine_b31990(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b81e20(__int64);
__int64 GameRoutine_b86ad0(_QWORD);
__int64 GameRoutine_c1e830(_QWORD, _QWORD, _QWORD);
__int64 Layout_c1d3e0_alt1(_QWORD, _QWORD) __asm__("Layout_c1d3e0");
__int64 LightingAnimModule_c6c460(_QWORD, _QWORD, _QWORD);
__int64 LightingAnimModule_c6d940(_QWORD, _QWORD, _QWORD);
__int64 Manager_c43b70(_QWORD);
__int64 Value_2500(_QWORD, _QWORD, _QWORD);
__int64 g3d_a6c880(__int64*, __int64, unsigned __int64, long double);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_AcquireReadLock(_QWORD);
__int64 nn_os_ReleaseReadLock(_QWORD);
__int64 nn_util_SNPrintf(_QWORD, _QWORD, const char*, ...);
extern __int64* GameData_212ce30;
extern __int64* GameData_212e918[4];
void __attribute__((noreturn)) GameRoutine_b31b50(_QWORD);
__int64 Layout_c1bc40_alt1(__int64 result) __asm__("Layout_c1bc40");
__int64 Layout_c1d3e0_alt2(__int64 result, _QWORD* a2) __asm__("Layout_c1d3e0");
__int64 GameRoutine_1a0a680(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c1fbe0(__int64, __int64);
__int64 Layout_c1ba40_alt1(__int64, __int64) __asm__("Layout_c1ba40");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern _UNKNOWN* GameData_212ead0;
extern int* GameData_212eac8;
__int64 Layout_c1b8c0(_QWORD* a1);
__attribute__((swiftcall)) void Layout_c1d100(PSEUDO_X8 x8_, __int64 result,
                                              unsigned __int64 a2, __int64 a3,
                                              unsigned __int64 a4);
__attribute__((swiftcall)) void
GameRoutine_a97000_alt1(PSEUDO_X8, _QWORD*, int) __asm__("GameRoutine_a97000");
__int64 ResFile_5e5f00_alt1(__int64) __asm__("ResFile_5e5f00");
bool GameRoutine_ad7390_alt1(_QWORD*) __asm__("GameRoutine_ad7390");
void GameRoutine_c19a20_alt2(__int64,
                             unsigned __int64) __asm__("GameRoutine_c19a20");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void wld_map_Layout_Internal_LoadMapModelFile_lambda0_Invoke(__int64 a1,
                                                             _QWORD* a2);
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
void Layout_c19a20(__int64 a1, unsigned __int64 a2);
_QWORD* wld_map_c193c0(float*, unsigned __int8*, __int64**);
__int64*
GameRoutine_b31990_alt1(__int64* result, __int64, __int64,
                        unsigned __int64) __asm__("GameRoutine_b31990");
__int64* GameRoutine_c18f60_alt1(_QWORD*,
                                 __int64*) __asm__("GameRoutine_c18f60");
__int64* Registration_64a850_alt1(__int64*,
                                  __int64*) __asm__("Registration_64a850");
__int64 GameHr_b310e0(__int64, __int64**);
__int64 GameRoutine_1fa0_alt1(__int64, int) __asm__("GameRoutine_1fa0");
__int64 GameRoutine_1fd0_alt1(__int64, __int64) __asm__("GameRoutine_1fd0");
__int64 GameRoutine_5fc1f0_alt1(__int64) __asm__("GameRoutine_5fc1f0");
__int64 GameRoutine_634d80_alt1(__int64, __int64) __asm__("GameRoutine_634d80");
__int64 GameRoutine_b31800_alt1(__int64 result,
                                char) __asm__("GameRoutine_b31800");
__int64 GameRoutine_b86ad0_alt1(__int64) __asm__("GameRoutine_b86ad0");
__int64 GameRoutine_c1e830_alt1(__int64 result, _QWORD*,
                                char) __asm__("GameRoutine_c1e830");
__int64 Layout_c1d3e0_alt3(__int64 result, __int64**) __asm__("Layout_c1d3e0");
__int64 LightingAnimModule_c6c460_alt1(
    __int64, __int64, unsigned __int64) __asm__("LightingAnimModule_c6c460");
__int64
LightingAnimModule_c6d940_alt1(__int64 result, unsigned int,
                               int) __asm__("LightingAnimModule_c6d940");
__int64 Manager_c43b70_alt1(__int64, __int64) __asm__("Manager_c43b70");
__int64 g3d_a6c880_alt1(__int64*, __int64,
                        unsigned __int64) __asm__("g3d_a6c880");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 nn_os_AcquireReadLock_alt1(__int64) __asm__("nn_os_AcquireReadLock");
__int64 nn_os_ReleaseReadLock_alt1(__int64) __asm__("nn_os_ReleaseReadLock");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 timeline_21c0(unsigned int*, unsigned int*);
__int64 timeline_2360(unsigned __int64*, unsigned __int64*);
int memcmp_alt2(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64 Value_2500_alt1(__int64*, __int64,
                                 unsigned __int64) __asm__("Value_2500");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameHr_ad69c0(_QWORD*);
void __attribute__((noreturn))
GameRoutine_b31b50_alt1() __asm__("GameRoutine_b31b50");
void Layout_c14980(_QWORD** a1);
__int64 Layout_c1bc40(__int64 result, __int64 a2);
__int64* Layout_c1d3e0(__int64* result, __int64** a2);

__int64 Layout_c10f80(unsigned __int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 result;
  __int64* i;
  __int64* v6;
  __int64 v7;

  Layout_c11000(a1);
  v2 = *(_QWORD*)(a1 + 264);
  if (v2 != 0) {
    wld_c2a300(v2);
  }
  v3 = *(_QWORD**)(a1 + 280);
  if (v3 != nullptr) {
    GameRoutine_c32560(v3);
  }
  result = *(_QWORD*)(a1 + 288);
  if (result != 0) {
    result = GameRoutine_c1bb50(result);
  }
  *(_DWORD*)(a1 + 252) = 32;
  v6 = *(__int64**)(a1 + 304);
  for (i = *(__int64**)(a1 + 312); v6 != i; result = wld_c2a300(v7)) {
    v7 = *v6++;
  }
  return result;
}

__attribute__((swiftcall)) void Layout_c12ec0(PSEUDO_X8 x8_, _QWORD* a1)
{
  char** a2 = (char**)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  _QWORD* v5;
  char* result;
  __int64* v7;
  __int64* v8;
  char* v9;
  char* v10;
  char* v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  long double v20;
  __int64 v21;
  char** i;

  v2 = a1[33];
  v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  result = (char*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  v7 = (__int64*)a1[38];
  v8 = (__int64*)a1[39];
  *(_QWORD*)result = v2;
  v9 = result + 8;
  v10 = result;
  v11 = result + 8;
  a2[1] = result + 8;
  a2[2] = result + 8;
  *a2 = result;
  for (i = a2; v7 != v8; ++v7) {
    while (1) {
      v12 = *v7;
      if (v9 >= v11) {
        break;
      }
      *(_QWORD*)v9 = v12;
      v9 += 8;
      if (++v7 == v8) {
        goto LABEL_20;
      }
    }
    v13 = (char*)(v9 - v10);
    v14 = (v9 - v10) >> 3;
    v15 = v14 + 1;
    if ((unsigned __int64)(v14 + 1) >> 61 != 0) {
      i[1] = v9;
      i[2] = v11;
      *i = v10;
      GameRoutine_c187a0();
    }
    if ((v11 - v10) >> 2 > v15) {
      v15 = (v11 - v10) >> 2;
    }
    if ((unsigned __int64)(v11 - v10) >= 0x7FFFFFFFFFFFFFF8LL) {
      v16 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v16 = v15;
    }
    if (v16 != 0) {
      if (v16 >> 61 != 0) {
        i[1] = v9;
        i[2] = v11;
        *i = v10;
        GameRoutine_60a210(result);
      }
      v17 = fw_memory_HeapManager_Allocate(*v5, 8 * v16, 16, 0);
    }
    else {
      v17 = 0;
    }
    v11 = (char*)(v17 + 8 * v16);
    v18 = (char*)(v9 - v10);
    v19 = (__int64)&v13[v17 + -8 * v14];
    *(_QWORD*)&v13[v17] = v12;
    v9 = &v13[v17 + 8];
    result = (char*)memcpy(v19, v10, v18);
    if (v10 != nullptr) {
      v21 = 128;
      if (*(_QWORD*)(*v5 + 200LL) == 0) {
        v21 = 56;
      }
      result = (char*)((
          __int64 (*)(__int64, __int64))nn_mem_StandardAllocator_Free_alt1)(
          *v5 + v21, (__int64)v10);
    }
    v10 = (char*)v19;
  }
LABEL_20:
  i[1] = v9;
  i[2] = v11;
  *i = v10;
  {
    result;
    return;
  }
}

bool Layout_c13510(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3;
  char v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  struct {
    __int64 v17;
    unsigned __int64 v18;
    __int64 v19;
  } v17_;

  if ((a3 | 7) == 0x17) {
    v3 = 26;
  }
  else {
    v3 = (a3 | 7) + 1;
  }
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  if (a3 > 0x16) {
    v8 = v3 | 1;
    v9 = (__int64*)fw_memory_g_heap_manager_ptr;
    v10 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v3, 16, 0);
    v17_.v18 = a3;
    v17_.v19 = v10;
    v17_.v17 = v3 | 1;
    memmove_alt1(v10, a2, a3);
    *(_BYTE*)(v10 + a3) = 0;
    v11 = GameRoutine_c18dc0((_QWORD*)(a1 + 376), (unsigned __int8*)&v17_.v17);
    v12 = 128;
    if (*(_QWORD*)(*v9 + 200) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v9 + v12, v10);
    if (v11 == nullptr) {
      v13 = fw_memory_HeapManager_Allocate_alt1(*v9, v3, 16, 0);
      v17_.v18 = a3;
      v17_.v19 = v13;
      v17_.v17 = v8;
      memmove_alt1(v13, a2, a3);
      *(_BYTE*)(v13 + a3) = 0;
      v14 =
          GameRoutine_c18dc0((_QWORD*)(a1 + 416), (unsigned __int8*)&v17_.v17);
      v15 = 128;
      if (*(_QWORD*)(*v9 + 200) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v9 + v15, v13);
      return v14 != nullptr;
    }
    return true;
  }
  v7 = 2 * a3;
  LOBYTE(v17_.v17) = 2 * a3;
  if (a3 == 0) {
    BYTE1(v17_.v17) = 0;
    if (GameRoutine_c18dc0((_QWORD*)(a1 + 376), (unsigned __int8*)&v17_.v17) ==
        nullptr) {
      LOBYTE(v17_.v17) = v7;
      goto LABEL_18;
    }
    return true;
  }
  memcpy_alt1((__int64)&v17_.v17 + 1, a2, a3);
  *((_BYTE*)&v17_.v17 + a3 + 1) = 0;
  if (GameRoutine_c18dc0((_QWORD*)(a1 + 376), (unsigned __int8*)&v17_.v17) !=
      nullptr) {
    return true;
  }
  LOBYTE(v17_.v17) = v7;
  memcpy_alt1((__int64)&v17_.v17 + 1, a2, a3);
LABEL_18:
  *((_BYTE*)&v17_.v17 + a3 + 1) = 0;
  v14 = GameRoutine_c18dc0((_QWORD*)(a1 + 416), (unsigned __int8*)&v17_.v17);
  return v14 != nullptr;
}

bool Layout_c13be0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned __int64 v5;
  __int64* v6;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v15;
  unsigned __int64 v16;
  __int64* v17;
  unsigned __int64 v18;
  __int64 v19;
  _BOOL8 result;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  long double v26;
  char* v27;
  char* v28;
  char* v29;
  unsigned __int64 v30;
  bool v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  char* v40[6];

  v6 = (__int64*)(a1 + 168);
  v5 = *(unsigned __int8*)(a1 + 168);
  v12 = a1 + 169;
  if ((v5 & 1) != 0) {
    v13 = *(_QWORD*)(a1 + 176);
  }
  else {
    v13 = v5 >> 1;
  }
  if (a3 == v13) {
    v15 = (v5 & 1) != 0 ? *(_QWORD*)(a1 + 184) : v12;
    if ((unsigned int)memcmp(a2, v15) == 0) {
      return (*(_DWORD*)(a1 + 244) & 0xFFFFFFFD) == 0;
    }
  }
  if ((((__int64 (*)(__int64, __int64, __int64))GameRoutine_c13ab0)(a1, a2,
                                                                    a3) &
       1) == 0) {
    return true;
  }
  v17 = (__int64*)(a1 + 192);
  v16 = *(unsigned __int8*)(a1 + 192);
  v18 = *(_QWORD*)(a1 + 200);
  if ((v16 & 1) == 0) {
    v18 = v16 >> 1;
  }
  if (a3 != v18) {
    return false;
  }
  v19 = (v16 & 1) != 0 ? *(_QWORD*)(a1 + 208) : a1 + 193;
  if ((unsigned int)memcmp(a2, v19) != 0) {
    return false;
  }
  GameRoutine_c1a430(a1 + 416, a1 + 456);
  v21 = *(_QWORD*)(a1 + 200);
  v23 = v6[1];
  v22 = v6[2];
  v24 = *v6;
  *v6 = *v17;
  v6[1] = v21;
  v25 = *(_QWORD*)(a1 + 208);
  *(_QWORD*)(a1 + 208) = v22;
  *v17 = v24;
  *(_QWORD*)(a1 + 200) = v23;
  v6[2] = v25;
  Layout_c12ec0((void*)(v40), (_QWORD*)a1);
  v27 = v40[0];
  v28 = v40[1];
  if (v40[0] != v40[1]) {
    v29 = v40[0];
    do {
      v30 = *(unsigned __int8*)(a1 + 168);
      v31 = (v30 & 1) == 0;
      v33 = *(_QWORD*)v29;
      v29 += 8;
      v32 = v33;
      v34 = v30 >> 1;
      if (v31) {
        v35 = v12;
      }
      else {
        v35 = *(_QWORD*)(a1 + 184);
      }
      if (v31) {
        v36 = v34;
      }
      else {
        v36 = *(_QWORD*)(a1 + 176);
      }
      ObjectBuildCreate_c284a0(v32, v35, v36, a5 & 1);
    } while (v29 != v28);
  }
  if (v27 != nullptr) {
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v37 = 56;
    }
    ((__int64 (*)(__int64, __int64))nn_mem_StandardAllocator_Free_alt1)(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, (__int64)v27);
  }
  v38 = *(_QWORD*)(a1 + 288);
  if (v38 != 0) {
    GameRoutine_c1cbe0(v38, a2, a3, a5 & 1);
  }
  result = false;
  *(_QWORD*)(a1 + 256) = a4;
  if ((a5 & 1) != 0) {
    v39 = 4;
  }
  else {
    v39 = 3;
  }
  *(_DWORD*)(a1 + 244) = v39;
  return result;
}

_QWORD* wld_map_Layout_Internal_LoadMapModelFile(__int64 a1, __int64 a2,
                                                 unsigned __int64 a3, char a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  float* v6;
  _QWORD* result;
  __int64* v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64* v14;
  bool v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  float* v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  char* v32;
  __int64 v33;
  _BYTE* v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  char* v38;
  __int64 v39;
  char* v40;
  __int64 v41;
  unsigned __int64 v42;
  char* v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  __int64** v50;
  __int64* v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64* v55;
  __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  __int64* v59;
  __int64* v60;
  _QWORD* v61;
  _QWORD* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  char* v66;
  char* v67;
  signed __int64 v68;
  _QWORD* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  float v76;
  unsigned __int64 v77;
  float v78;
  float v79;
  _BOOL8 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 primeEm;
  unsigned __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  _QWORD* v91;
  __int64 v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  struct {
    __int64 v96;
    unsigned __int64 v97;
    char* v98;
    char gap40_[8];
    __int64* v99;
  } v96_;
  _QWORD* v100[3];
  struct {
    __int64 v101[2];
    char* v102;
  } v101_;
  struct {
    __int64* v103;
    unsigned __int64 v104;
    __int64 v105;
  } v103_;
  struct {
    __int64* v106;
    unsigned __int64 v107;
    char* v108;
  } v106_;
  _QWORD v109[3];

  if (a3 == 0) {
    return (_QWORD*)(((_UNKNOWN*)0x0LL) + 1);
  }
  v109[0] = a2;
  v109[1] = a3;
  v6 = (float*)(a1 + 376);
  if (GameRoutine_c18f60((_QWORD*)(a1 + 376), v109) != nullptr) {
    return (_QWORD*)(((_UNKNOWN*)0x0LL) + 1);
  }
  if ((a4 & 1) != 0) {
    if (GameRoutine_c18f60((_QWORD*)(a1 + 456), v109) != nullptr) {
      return (_QWORD*)(((_UNKNOWN*)0x0LL) + 1);
    }
    v11 = GameRoutine_c18f60((_QWORD*)(a1 + 416), v109);
    if (v11 != nullptr) {
      v13 = v11 + 2;
      v12 = *((unsigned __int8*)v11 + 16);
      v14 = v11;
      v15 = (v12 & 1) == 0;
      v16 = v12 >> 1;
      if (v15) {
        v17 = (char*)v11 + 17;
      }
      else {
        v17 = (char*)v11[4];
      }
      if (v15) {
        v18 = v16;
      }
      else {
        v18 = v11[3];
      }
      v19 = std___1___hash_memory(v17, v18);
      v20 = *(_QWORD*)(a1 + 464);
      v21 = v19;
      if (v20 != 0) {
        v22 = v20 - 1;
        if ((v20 & (v20 - 1)) != 0) {
          v4 = v19;
          if (v19 >= v20) {
            v4 = v19 % v20;
          }
        }
        else {
          v4 = v22 & v19;
        }
        v50 = *(__int64***)(*(_QWORD*)(a1 + 456) + 8 * v4);
        if (v50 != nullptr) {
          v51 = *v50;
          if (*v50 != nullptr) {
            if ((v20 & v22) == 0) {
              while (1) {
                v56 = v51[1];
                if (v56 == v21) {
                  v57 = *((unsigned __int8*)v51 + 16);
                  v58 = v51[3];
                  if ((v57 & 1) == 0) {
                    v58 = v57 >> 1;
                  }
                  if (v58 == v18) {
                    v59 = (v57 & 1) != 0 ? (__int64*)v51[4]
                                         : (__int64*)((char*)v51 + 17);
                    if ((unsigned int)memcmp_alt1(v59, v17, v18) == 0) {
                      return (_QWORD*)(((_UNKNOWN*)0x0LL) + 1);
                    }
                  }
                }
                else if ((v56 & v22) != v4) {
                  goto LABEL_125;
                }
                v51 = (__int64*)*v51;
                if (v51 == nullptr) {
                  goto LABEL_125;
                }
              }
            }
            do {
              v52 = v51[1];
              if (v52 == v21) {
                v53 = *((unsigned __int8*)v51 + 16);
                v54 = v51[3];
                if ((v53 & 1) == 0) {
                  v54 = v53 >> 1;
                }
                if (v54 == v18) {
                  v55 = (v53 & 1) != 0 ? (__int64*)v51[4]
                                       : (__int64*)((char*)v51 + 17);
                  if ((unsigned int)memcmp_alt1(v55, v17, v18) == 0) {
                    return (_QWORD*)(((_UNKNOWN*)0x0LL) + 1);
                  }
                }
              }
              else {
                if (v52 >= v20) {
                  v52 %= v20;
                }
                if (v52 != v4) {
                  break;
                }
              }
              v51 = (__int64*)*v51;
            } while (v51 != nullptr);
          }
        }
      }
    LABEL_125:
      v60 = (__int64*)fw_memory_g_heap_manager_ptr;
      v61 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
      *v61 = 0;
      v61[1] = v21;
      v62 = v61;
      if ((*(_BYTE*)v13 & 1) != 0) {
        fw_text_String_CopyTerminated(v61 + 2, v14[4], v14[3]);
      }
      else {
        v63 = *v13;
        v64 = v13[2];
        v61[3] = v13[1];
        v61[4] = v64;
        v61[2] = v63;
      }
      v94 = v21;
      v95 = v4;
      v62[5] = v14[5];
      v62[6] = v14[6];
      v65 = v14[7];
      v62[7] = v65;
      if (v65 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v65 + 8), 1u,
                                  memory_order_relaxed);
      }
      v62[9] = 0;
      v62[10] = 0;
      v62[8] = 0;
      v67 = (char*)v14[8];
      v66 = (char*)v14[9];
      v68 = v66 - v67;
      if (v66 != v67) {
        if (v68 < 0) {
          GameRoutine_c19100();
        }
        v69 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v60, v66 - v67, 16,
                                                           0);
        v62[8] = v69;
        v62[9] = v69;
        v62[10] = (char*)v69 + v68;
        do {
          v69[1] = 0;
          v69[2] = 0;
          *v69 = 0;
          v72 = *(_QWORD*)v67;
          v71 = *((_QWORD*)v67 + 1);
          v73 = v71 - *(_QWORD*)v67;
          if (v71 != *(_QWORD*)v67) {
            if (v73 < 0) {
              GameRoutine_66df80();
            }
            v74 = fw_memory_HeapManager_Allocate_alt1(*v60, v71 - *(_QWORD*)v67,
                                                      16, 0);
            v75 = v74 + v73;
            *v69 = v74;
            v69[1] = v74;
            v69[2] = v74 + v73;
            memcpy(v74, v72, v73);
            v69[1] = v75;
          }
          v70 = *((_QWORD*)v67 + 3);
          v67 += 32;
          v69[3] = v70;
          v69 += 4;
        } while (v67 != v66);
        v62[9] = v69;
      }
      v76 = *(float*)(a1 + 488);
      v77 = v95;
      v78 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 480) + 1LL);
      if (v20 == 0 || (float)(v76 * (float)v20) < v78) {
        v79 = v78 / v76;
        v80 = true;
        if (v20 >= 3) {
          v80 = (v20 & (v20 - 1)) != 0;
        }
        v81 = v80 | (2 * v20);
        v82 = vcvtps_u64_f32(v79);
        if (v81 <= v82) {
          primeEm = v82;
        }
        else {
          primeEm = v81;
        }
        if (primeEm == 1) {
          v77 = v94;
          primeEm = 2;
        }
        else {
          v77 = v94;
          if ((primeEm & (primeEm - 1)) != 0) {
            primeEm = std___1___next_prime(primeEm);
          }
        }
        v84 = *(_QWORD*)(a1 + 464);
        if (primeEm > v84) {
          goto LABEL_150;
        }
        if (primeEm < v84) {
          v85 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 480) /
                               *(float*)(a1 + 488));
          if (v84 < 3 || (v84 & (v84 - 1)) != 0) {
            v85 = std___1___next_prime(v85);
          }
          else {
            v86 = 1LL << (-(char)__clz(v85 - 1) & 63);
            if (v85 >= 2) {
              v85 = v86;
            }
          }
          if (primeEm <= v85) {
            primeEm = v85;
          }
          if (primeEm < v84) {
          LABEL_150:
            GameRoutine_c19120((__int64*)(a1 + 456), primeEm);
          }
        }
        v20 = *(_QWORD*)(a1 + 464);
        if ((v20 & (v20 - 1)) != 0) {
          if (v77 >= v20) {
            v77 %= v20;
          }
        }
        else {
          v77 &= v20 - 1;
        }
      }
      v90 = *(_QWORD*)(a1 + 456);
      v91 = *(_QWORD**)(v90 + 8 * v77);
      if (v91 != nullptr) {
        *v62 = *v91;
        *v91 = v62;
      }
      else {
        v92 = *(_QWORD*)(a1 + 472);
        *(_QWORD*)(a1 + 472) = v62;
        *v62 = v92;
        *(_QWORD*)(v90 + 8 * v77) = a1 + 472;
        if (*v62 != 0) {
          v93 = *(_QWORD*)(*v62 + 8LL);
          if ((v20 & (v20 - 1)) != 0) {
            if (v93 >= v20) {
              v93 %= v20;
            }
          }
          else {
            v93 &= v20 - 1;
          }
          *(_QWORD*)(*(_QWORD*)(a1 + 456) + 8 * v93) = v62;
        }
      }
      ++*(_QWORD*)(a1 + 480);
      return (_QWORD*)(((_UNKNOWN*)0x0LL) + 1);
    }
  }
  v96_.v96 = a2;
  v96_.v97 = a3;
  result = GameRoutine_c1a2c0((_QWORD*)(a1 + 496), &v96_.v96);
  if (result != nullptr) {
    if ((a4 & 1) != 0) {
      v23 = (float*)(a1 + 456);
    }
    else {
      v23 = v6;
    }
    if (a3 < 0xFFFFFFFFFFFFFFF7LL) {
      v24 = result[4];
      if (a3 >= 0x17) {
        if ((a3 | 7) == 0x17) {
          v26 = 26;
        }
        else {
          v26 = (a3 | 7) + 1;
        }
        v25 = (char*)fw_memory_HeapManager_Allocate_alt1(
            fw_memory_g_heap_manager, v26, 16, 0);
        v96_.v97 = a3;
        v96_.v98 = v25;
        v96_.v96 = v26 | 1;
      }
      else {
        LOBYTE(v96_.v96) = 2 * a3;
        v25 = (char*)&v96_.v96 + 1;
      }
      memmove(v25, a2, a3);
      v25[a3] = 0;
      v106_.v106 = &v96_.v96;
      v27 = GameRoutine_c193c0(v23, (unsigned __int8*)&v96_.v96, &v106_.v106);
      if ((v96_.v96 & 1) != 0 && v96_.v98 != nullptr) {
        v28 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v28, (_QWORD)(v96_.v98));
      }
      v27[5] = v24;
      if (*(_DWORD*)(v24 + 32) != 0) {
        return (_QWORD*)(((_UNKNOWN*)0x0LL) + 1);
      }
      v29 = *(_QWORD*)(v24 + 8);
      v30 = strlen(v29);
      if (v30 < 0xFFFFFFFFFFFFFFF7LL) {
        v31 = v30;
        if (v30 >= 0x17) {
          if ((v30 | 7) == 0x17) {
            v33 = 26;
          }
          else {
            v33 = (v30 | 7) + 1;
          }
          v32 = (char*)fw_memory_HeapManager_Allocate_alt1(
              fw_memory_g_heap_manager, v33, 16, 0);
          v106_.v107 = v31;
          v106_.v108 = v32;
          v106_.v106 = (__int64*)(v33 | 1);
        }
        else {
          LOBYTE(v106_.v106) = 2 * v30;
          v32 = (char*)&v106_.v106 + 1;
          if (v30 == 0) {
          LABEL_44:
            v32[v31] = 0;
            if (((unsigned __int8)v106_.v106 & 1) != 0) {
              fw_text_String_CopyTerminated((__int64*)&v103_.v103,
                                            (__int64)v106_.v108, v106_.v107);
            }
            else {
              v103_.v103 = v106_.v106;
              v103_.v104 = v106_.v107;
              v103_.v105 = (__int64)v106_.v108;
            }
            v34 = *(_BYTE**)(v24 + 16);
            if (v34 != nullptr && *v34 != 0) {
              Layout_c147c0((void*)(&v96_.v96), (unsigned __int8*)&v106_.v106,
                            (__int64)".");
              Manager_6326c0((__int64*)v100, *(_QWORD*)(v24 + 16));
              Layout_c14760((void*)(v101_.v101), (__int64)&v96_.v96,
                            (unsigned __int8*)v100);
              if (((__int64)v100[0] & 1) != 0 && v100[2] != nullptr) {
                v35 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v35 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v35,
                    (_QWORD)(v100[2]));
              }
              if ((v96_.v96 & 1) != 0 && v96_.v98 != nullptr) {
                v36 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v36 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v36,
                    (_QWORD)(v96_.v98));
              }
              v96_.v99 = &v96_.v96;
              if (((unsigned __int8)v103_.v103 & 1) != 0) {
                v37 = v103_.v104;
              }
              else {
                v37 = (unsigned __int64)(unsigned __int8)v103_.v103 >> 1;
              }
              if (((unsigned __int8)v103_.v103 & 1) != 0) {
                v38 = (char*)v103_.v105;
              }
              else {
                v38 = (char*)&v103_.v103 + 1;
              }
              if ((v101_.v101[0] & 1) != 0) {
                v39 = v101_.v101[1];
              }
              else {
                v39 = (unsigned __int64)LOBYTE(v101_.v101[0]) >> 1;
              }
              if ((v101_.v101[0] & 1) != 0) {
                v40 = v101_.v102;
              }
              else {
                v40 = (char*)v101_.v101 + 1;
              }
              v96_.v96 = (__int64)GameData_1fd1aa0;
              v96_.v97 = (unsigned __int64)(v27 + 5);
              g3d_ada270((void*)((__int64*)v100), (__int64)v38, v37,
                         (__int64)v40, v39, (__int64)&v96_.v96);
              Layout_c148d0(v27 + 6, (__int64*)v100);
              Layout_c14980_alt1(v100);
              if (v96_.v99 == &v96_.v96) {
                v41 = 32;
              }
              else {
                if (v96_.v99 == nullptr) {
                LABEL_159:
                  if ((v101_.v101[0] & 1) != 0 && v101_.v102 != nullptr) {
                    v87 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v87 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v87,
                        (_QWORD)(v101_.v102));
                  }
                  goto LABEL_164;
                }
                v41 = 40;
              }
              (*(void (**)(__int64))(*v96_.v99 + v41))((__int64)v96_.v99);
              goto LABEL_159;
            }
            if (((unsigned __int8)v103_.v103 & 1) != 0) {
              v42 = v103_.v104;
            }
            else {
              v42 = (unsigned __int64)(unsigned __int8)v103_.v103 >> 1;
            }
            if (((unsigned __int8)v103_.v103 & 1) != 0) {
              v43 = (char*)v103_.v105;
            }
            else {
              v43 = (char*)&v103_.v103 + 1;
            }
            v96_.v96 = (__int64)GameData_1fd1aa0;
            v96_.v97 = (unsigned __int64)(v27 + 5);
            v96_.v99 = &v96_.v96;
            g3d_ada070((void*)(v101_.v101), (__int64)v43, v42,
                       (__int64)&v96_.v96);
            v44 = v101_.v101[0];
            if (v101_.v101[0] != 0) {
              v45 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
              v45[2] = 0;
              v45[3] = v44;
              *v45 = &GameData_1fd1588;
              v45[1] = 0;
            }
            else {
              v45 = nullptr;
            }
            v46 = v27[7];
            v101_.v101[0] = 0;
            v27[6] = v44;
            v27[7] = v45;
            if (v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
              std___1___shared_weak_count___release_weak(v46);
            }
            v47 = (_QWORD*)v101_.v101[0];
            v101_.v101[0] = 0;
            if (v47 != nullptr) {
              GameRoutine_ad69c0_alt1(v47);
              v48 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v48 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, (_QWORD)(v47));
            }
            if (v96_.v99 == &v96_.v96) {
              v49 = 32;
            }
            else {
              if (v96_.v99 == nullptr) {
                goto LABEL_164;
              }
              v49 = 40;
            }
            (*(void (**)(__int64))(*v96_.v99 + v49))((__int64)v96_.v99);
          LABEL_164:
            if (((unsigned __int8)v103_.v103 & 1) != 0 && v103_.v105 != 0) {
              v88 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v88 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v88,
                  (_QWORD)(v103_.v105));
            }
            if (((unsigned __int8)v106_.v106 & 1) != 0 &&
                v106_.v108 != nullptr) {
              v89 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v89 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v89,
                  (_QWORD)(v106_.v108));
            }
            return (_QWORD*)(((_UNKNOWN*)0x0LL) + 1);
          }
        }
        memmove(v32, v29, v31);
        goto LABEL_44;
      }
    }
    String_60a1d0();
  }
  return result;
}

__attribute__((swiftcall)) void Layout_c14760(PSEUDO_X8 x8_, __int64 a1,
                                              unsigned __int8* a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v4;
  unsigned __int64 v5;
  bool v6;
  unsigned __int64 v7;
  unsigned __int8* v8;
  unsigned __int64 v9;
  __int64* result;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v4 = *a2;
  v5 = *((_QWORD*)a2 + 1);
  v6 = (v4 & 1) == 0;
  v7 = v4 >> 1;
  if (v6) {
    v8 = a2 + 1;
  }
  else {
    v8 = *((unsigned __int8**)a2 + 2);
  }
  if (v6) {
    v9 = v7;
  }
  else {
    v9 = v5;
  }
  result = (__int64*)GameRoutine_1a09ce0(a1, v8, v9);
  v11 = *result;
  v12 = result[1];
  *result = 0;
  result[1] = 0;
  *a3 = v11;
  a3[1] = v12;
  v13 = result[2];
  result[2] = 0;
  a3[2] = v13;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void Layout_c147c0(PSEUDO_X8 x8_,
                                              unsigned __int8* a1, __int64 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v4;
  bool v6;
  unsigned __int64 v7;
  unsigned __int8* v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  char v13;
  __int64 result;
  __int64 v15;
  char* v16;
  char* v17;

  v4 = *a1;
  v6 = (v4 & 1) == 0;
  v7 = v4 >> 1;
  if (v6) {
    v8 = a1 + 1;
  }
  else {
    v8 = *((unsigned __int8**)a1 + 2);
  }
  if (v6) {
    v9 = v7;
  }
  else {
    v9 = *((_QWORD*)a1 + 1);
  }
  v10 = strlen(a2);
  v11 = v10 + v9;
  if (v10 + v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1(v10);
  }
  v12 = v10;
  if (v11 > 0x16) {
    if ((v11 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (v11 | 7) + 1;
    }
    result =
        fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v15, 16, 0);
    a3[1] = v11;
    a3[2] = result;
    *a3 = v15 | 1;
    v13 = v15 | 1;
  }
  else {
    v13 = 2 * v11;
    result = 0;
    a3[1] = 0;
    a3[2] = 0;
    *a3 = 0;
    *(_BYTE*)a3 = 2 * v11;
  }
  if ((v13 & 1) != 0) {
    v16 = (char*)result;
  }
  else {
    v16 = (char*)a3 + 1;
  }
  if (v9 != 0) {
    result = memmove(v16, v8, v9);
  }
  v17 = &v16[v9];
  if (v12 != 0) {
    result = memmove(v17, a2, v12);
  }
  v17[v12] = 0;
  {
    result;
    return;
  }
}

_QWORD* Layout_c148d0(_QWORD* a1, __int64* a2)
{
  __int64 v2;
  _QWORD* v5;
  __int64 v6;

  v2 = *a2;
  if (*a2 != 0) {
    v5 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    v5[2] = 0;
    v5[3] = v2;
    *v5 = &GameData_1fd1588;
    v5[1] = 0;
  }
  else {
    v5 = nullptr;
  }
  *a2 = 0;
  v6 = a1[1];
  *a1 = v2;
  a1[1] = v5;
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  return a1;
}

void Layout_c14980(_QWORD** a1)
{
  _QWORD* v1;
  __int64 v2;

  v1 = *a1;
  *a1 = nullptr;
  if (v1 != nullptr) {
    GameHr_ad69c0(v1);
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, (__int64)v1);
  }
}

__int64 wld_map_Layout_Internal_LoadDirectModelFile(_QWORD* a1, __int64 a2,
                                                    unsigned __int64 a3,
                                                    char a4)
{

#pragma clang fp contract(off)
  float* v5;
  float* v9;
  char* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  __int64* v15;
  _QWORD* v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  _QWORD* v27;
  char* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  struct {
    __int64 v40;
    _QWORD* v41;
    char* v42;
    char gap24_[8];
    __int64* v43;
  } v40_;
  struct {
    __int64 v44;
    unsigned __int64 v45;
  } v44_;
  __int64* v46;

  if (a3 == 0) {
    return 1;
  }
  v44_.v44 = a2;
  v44_.v45 = a3;
  v5 = (float*)(a1 + 47);
  if (GameRoutine_c18f60_alt1(a1 + 47, &v44_.v44) != nullptr ||
      (a4 & 1) != 0 && GameRoutine_c18f60_alt1(a1 + 57, &v44_.v44) != nullptr) {
    return 1;
  }
  if ((a4 & 1) != 0) {
    v9 = (float*)(a1 + 57);
  }
  else {
    v9 = v5;
  }
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_68;
  }
  if (a3 >= 0x17) {
    if ((a3 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (a3 | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v11, 16, 0);
    v40_.v41 = (_QWORD*)a3;
    v40_.v42 = v10;
    v40_.v40 = v11 | 1;
  }
  else {
    LOBYTE(v40_.v40) = 2 * a3;
    v10 = (char*)&v40_.v40 + 1;
  }
  memmove_alt1((__int64)v10, a2, a3);
  v10[a3] = 0;
  v46 = &v40_.v40;
  v12 = wld_map_c193c0(v9, (unsigned __int8*)&v40_.v40, &v46);
  if ((v40_.v40 & 1) != 0 && v40_.v42 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v13,
                                       (__int64)v40_.v42);
  }
  v14 = v12 + 5;
  v40_.v43 = &v40_.v40;
  v40_.v40 = (__int64)GameData_1fd1b30;
  v40_.v41 = v12 + 5;
  g3d_ada070((void*)((__int64*)&v46), a2, a3, (__int64)&v40_.v40);
  v15 = v46;
  if (v46 != nullptr) {
    v16 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                       32, 16, 0);
    v16[2] = 0;
    v16[3] = v15;
    *v16 = &GameData_1fd1588;
    v16[1] = 0;
  }
  else {
    v16 = nullptr;
  }
  v17 = v12[7];
  v46 = nullptr;
  v12[6] = v15;
  v12[7] = v16;
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak_alt1(v17);
  }
  v18 = v46;
  v46 = nullptr;
  if (v18 != nullptr) {
    GameHr_ad69c0(v18);
    v19 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v19,
                                       (__int64)v18);
  }
  if (v40_.v43 == &v40_.v40) {
    v20 = 32;
  }
  else {
    if (v40_.v43 == nullptr) {
      goto LABEL_35;
    }
    v20 = 40;
  }
  (*(void (**)(__int64))(*v40_.v43 + v20))((__int64)v40_.v43);
LABEL_35:
  v21 = (__int64*)a1[79];
  if ((unsigned __int64)v21 < a1[80]) {
    v22 = v44_.v45;
    if (v44_.v45 < 0xFFFFFFFFFFFFFFF7LL) {
      v23 = v44_.v44;
      if (v44_.v45 >= 0x17) {
        if ((v44_.v45 | 7) == 0x17) {
          v26 = 26;
        }
        else {
          v26 = (v44_.v45 | 7) + 1;
        }
        v24 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v26,
                                                  16, 0);
        v21[1] = v22;
        v21[2] = v24;
        *v21 = v26 | 1;
      }
      else {
        *(_BYTE*)v21 = 2 * v44_.v45;
        v24 = (__int64)v21 + 1;
        if (v22 == 0) {
          goto LABEL_46;
        }
      }
      memmove_alt1(v24, v23, v22);
    LABEL_46:
      *(_BYTE*)(v24 + v22) = 0;
      v25 = v21 + 3;
      goto LABEL_47;
    }
  LABEL_68:
    String_60a1d0();
  }
  v25 = Registration_64a850_alt1(a1 + 78, &v44_.v44);
LABEL_47:
  a1[79] = v25;
  v27 = (_QWORD*)a1[82];
  if ((*(_BYTE*)(v25 - 3) & 1) != 0) {
    v28 = (char*)*(v25 - 1);
  }
  else {
    v28 = (char*)v25 - 23;
  }
  v29 = a1[83];
  if ((unsigned __int64)v27 >= v29) {
    v31 = a1[81];
    v32 = (unsigned __int64)v27 - v31;
    v33 = 1 - 0x3333333333333333LL * (((__int64)v27 - v31) >> 4);
    if (v33 > 0x333333333333333LL) {
      GameRoutine_c18210();
    }
    v34 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v29 - v31) >> 4);
    if (2 * v34 > v33) {
      v33 = 2 * v34;
    }
    if (v34 >= 0x199999999999999LL) {
      v35 = 0x333333333333333LL;
    }
    else {
      v35 = v33;
    }
    if (v35 != 0) {
      if (v35 > 0x333333333333333LL) {
        GameRoutine_60a210_alt1();
      }
      v36 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                80 * v35, 16, 0);
    }
    else {
      v36 = 0;
    }
    v37 = (_QWORD*)(v36 + v32);
    *v37 = v28;
    v37[1] = v28;
    v30 = v36 + v32 + 80;
    v37[4] = 0;
    v37[5] = 0;
    v37[6] = 0;
    v37[7] = 0;
    v37[8] = 0;
    v37[9] = 0;
    v37[2] = &GameData_1a9f09e;
    v37[3] = 0;
    memcpy_alt1(v36, v31, v32);
    a1[81] = v36;
    a1[82] = v30;
    a1[83] = v36 + 80 * v35;
    if (v31 != 0) {
      v38 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v38, v31);
    }
  }
  else {
    *v27 = v28;
    v27[1] = v28;
    v30 = (__int64)(v27 + 10);
    v27[4] = 0;
    v27[5] = 0;
    v27[6] = 0;
    v27[7] = 0;
    v27[8] = 0;
    v27[9] = 0;
    v27[2] = &GameData_1a9f09e;
    v27[3] = 0;
  }
  a1[82] = v30;
  *v14 = v30 - 80;
  return 1;
}

void wld_map_Layout_Internal_LoadMapModelFile_lambda0_Invoke(__int64 a1,
                                                             _QWORD* a2)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  struct {
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
  } v24_;

  if (*(_QWORD*)(a2[1] + 592LL) != 0) {
    GameRoutine_ad7390_alt1(a2);
    v4 = ResFile_5e5f00_alt1(*(_QWORD*)(a2[1] + 592LL));
    v5 = *(_QWORD*)(a1 + 8);
    v6 = *(unsigned __int16*)(v4 + 220);
    v7 = *(_QWORD*)(v5 + 24);
    v8 = *(_QWORD*)(v5 + 32);
    v9 = (v8 - v7) >> 5;
    if (v6 <= v9) {
      if (v6 < v9) {
        v10 = v7 + 32 * v6;
        if (v10 != v8) {
          v11 = *(_QWORD*)(v5 + 32);
          v12 = fw_memory_g_heap_manager_ptr;
          do {
            v14 = *(_QWORD*)(v11 - 32);
            v11 -= 32;
            v13 = v14;
            if (v14 != 0) {
              *(_QWORD*)(v8 - 24) = v13;
              if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
                v15 = 128;
              }
              else {
                v15 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v12 + v15, v13);
            }
            v8 = v11;
          } while (v11 != v10);
        }
        *(_QWORD*)(v5 + 32) = v10;
      }
    }
    else {
      GameRoutine_c19a20_alt2(v5 + 24, v6 - v9);
    }
    if ((_DWORD)v6 != 0) {
      v16 = 0;
      v17 = 0;
      v18 = fw_memory_g_heap_manager_ptr;
      do {
        GameRoutine_a97000_alt1((void*)(&v24_.v24), a2, v17);
        v19 = (__int64*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + v16);
        v20 = *v19;
        if (*v19 != 0) {
          v19[1] = v20;
          if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
            v21 = 128;
          }
          else {
            v21 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v18 + v21, v20);
          v19[1] = 0;
          v19[2] = 0;
          *v19 = 0;
        }
        *v19 = v24_.v24;
        v19[1] = v24_.v25;
        v19[2] = v24_.v26;
        v24_.v25 = 0;
        v24_.v26 = 0;
        v24_.v24 = 0;
        v19[3] = v24_.v27;
        if (v24_.v24 != 0) {
          v22 = *(_QWORD*)v18;
          v24_.v25 = v24_.v24;
          if (*(_QWORD*)(v22 + 200) != 0) {
            v23 = 128;
          }
          else {
            v23 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(v22 + v23, v24_.v24);
        }
        ++v17;
        v16 += 32;
      } while (v6 != v17);
    }
  }
}

void Layout_c19a20(__int64 a1, unsigned __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  v3 = *(__int64**)(a1 + 8);
  v2 = *(_QWORD*)(a1 + 16);
  if (a2 <= (v2 - (__int64)v3) >> 5) {
    if (a2 != 0) {
      v14 = 32 * a2;
      memset_alt1(*(_QWORD*)(a1 + 8), 0, 32 * a2);
      v3 = (__int64*)((char*)v3 + v14);
    }
    *(_QWORD*)(a1 + 8) = v3;
  }
  else {
    v5 = *(__int64**)a1;
    v6 = (__int64)v3 - *(_QWORD*)a1;
    v7 = v6 >> 5;
    v8 = (v6 >> 5) + a2;
    if (v8 >> 59 != 0) {
      GameRoutine_c19100();
    }
    v9 = v2 - (_QWORD)v5;
    v10 = fw_memory_g_heap_manager_ptr;
    if (v9 >> 4 > v8) {
      v8 = v9 >> 4;
    }
    if ((unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFE0LL) {
      v11 = 0x7FFFFFFFFFFFFFFLL;
    }
    else {
      v11 = v8;
    }
    if (v11 != 0) {
      if (v11 >> 59 != 0) {
        GameRoutine_60a210_alt1();
      }
      v12 = a2;
      v13 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v11, 16, 0);
      a2 = v12;
    }
    else {
      v13 = 0;
    }
    v15 = v13 + 32 * v11;
    v16 = 32 * a2;
    memset_alt1(v13 + v6, 0, 32 * a2);
    v17 = v13 + v6 + v16;
    if (v5 != v3) {
      v18 = v5;
      v19 = (_QWORD*)(v6 - 32 * v7 + v13 + 16);
      do {
        *(v19 - 1) = 0;
        *v19 = 0;
        *(v19 - 2) = *v18;
        *(v19 - 1) = v18[1];
        *v19 = v18[2];
        v18[1] = 0;
        v18[2] = 0;
        *v18 = 0;
        v20 = v18[3];
        v18 += 4;
        v19[1] = v20;
        v19 += 4;
      } while (v18 != v3);
      do {
        v21 = *v5;
        if (*v5 != 0) {
          v5[1] = v21;
          if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
            v22 = 128;
          }
          else {
            v22 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v10 + v22, v21);
        }
        v5 += 4;
      } while (v5 != v3);
      v5 = *(__int64**)a1;
    }
    *(_QWORD*)a1 = v13 + v6 - 32 * v7;
    *(_QWORD*)(a1 + 8) = v17;
    *(_QWORD*)(a1 + 16) = v15;
    if (v5 != nullptr) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v10 + v23, (__int64)v5);
    }
  }
}

_QWORD* wld_map_Layout_Internal_LoadDirectModelFile_lambda0_Invoke(__int64 a1,
                                                                   __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  _QWORD* result;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  GameRoutine_ad7390(a2);
  v4 = ResFile_5e5f00(*(_QWORD*)(*(_QWORD*)(a2 + 8) + 592LL));
  v9 = *(_QWORD*)(a1 + 8);
  v10 = *(unsigned __int16*)(v4 + 220);
  result = (_QWORD*)(v9 + 24);
  v12 = *(_QWORD*)(v9 + 24);
  v13 = *(_QWORD*)(v9 + 32);
  v14 = (v13 - v12) >> 5;
  if (v10 <= v14) {
    if (v10 < v14) {
      v15 = v12 + 32 * v10;
      if (v15 != v13) {
        v16 = *(_QWORD*)(v9 + 32);
        v17 = fw_memory_g_heap_manager_ptr;
        do {
          v19 = *(_QWORD*)(v16 - 32);
          v16 -= 32;
          v18 = v19;
          if (v19 != 0) {
            *(_QWORD*)(v13 - 24) = v18;
            if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
              v20 = 128;
            }
            else {
              v20 = 56;
            }
            result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v20,
                                                            (_QWORD)(v19));
          }
          v13 = v16;
        } while (v16 != v15);
      }
      *(_QWORD*)(v9 + 32) = v15;
    }
  }
  else {
    result = (_QWORD*)GameRoutine_c19a20_alt1((__int64)result, v10 - v14, v5,
                                              v6, v7, v8);
  }
  if ((_DWORD)v10 != 0) {
    v21 = 0;
    v22 = 0;
    v23 = fw_memory_g_heap_manager_ptr;
    do {
      result = X8CALL_X0(
          _QWORD*, GameRoutine_a97000((void*)&v28, a2, (unsigned int)v22));
      v24 = (_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + v21);
      if (*v24 != 0) {
        v24[1] = *v24;
        if (*(_QWORD*)(*(_QWORD*)v23 + 200LL) != 0) {
          v25 = 128;
        }
        else {
          v25 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v23 + v25,
                                                        (_QWORD)(*v24));
        v24[1] = 0;
        v24[2] = 0;
        *v24 = 0;
      }
      *v24 = v28;
      v24[1] = v29;
      v24[2] = v30;
      v29 = 0;
      v30 = 0;
      v28 = 0;
      v24[3] = v31;
      if (v28 != 0) {
        v26 = *(_QWORD*)v23;
        v29 = v28;
        if (*(_QWORD*)(v26 + 200) != 0) {
          v27 = 128;
        }
        else {
          v27 = 56;
        }
        result =
            (_QWORD*)nn_mem_StandardAllocator_Free(v26 + v27, (_QWORD)(v28));
      }
      ++v22;
      v21 += 32;
    } while (v10 != v22);
  }
  return result;
}

__int64 Layout_c1b8c0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int8 explicit;
  int* v10;
  int v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v16;
  __int64 v17;

  v1 = a1[25];
  if (v1 != 0) {
    v3 = *(_QWORD*)(v1 + 32);
    if (v3 != 0) {
      v4 = std___1___shared_weak_count_lock(v3);
      if (v4 != 0) {
        v5 = *(_QWORD*)(v1 + 24);
        if (v5 != 0) {
          *(_BYTE*)(v5 + 60) = 1;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v6 = v4;
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          std___1___shared_weak_count___release_weak(v6);
        }
      }
    }
  }
  v7 = std___1___shared_weak_count_lock(a1[7]);
  v8 = *(_QWORD*)(a1[6] + 80LL);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ead0,
                                  memory_order_acquire);
  v10 = GameData_212eac8;
  if ((explicit & 1) == 0) {
    v17 = v8;
    v16 = __cxa_guard_acquire(GameData_212ead0);
    v10 = GameData_212eac8;
    v8 = v17;
    if (v16 != 0) {
      *GameData_212eac8 = wld_Crc32(0, "LightAnimModule", 0xFu);
      __cxa_guard_release(GameData_212ead0);
      v10 = GameData_212eac8;
      v8 = v17;
    }
  }
  v11 = *v10;
  v12 = *(_QWORD*)(v8 + 512);
  v13 = v12;
  do {
    if (v13 == *(_QWORD*)(v8 + 504)) {
      goto LABEL_14;
    }
    v14 = *(_DWORD*)(v13 - 16);
    v13 -= 16;
    v12 -= 16;
  } while (v14 != v11);
  if (*(_QWORD*)(v8 + 512) == v12 || *(_QWORD*)(v12 + 8) == 0) {
  LABEL_14:
    GameRoutine_c1fbe0(v8, (__int64)"Contents:/Graphics/Settings/Preset/"
                                    "LightAnim/Default.lightanim");
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  return Layout_c1ba40_alt1((__int64)a1, a1[25]);
}

void Layout_c1ba40(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  struct {
    __int64 v8;
    __int64 v9;
  } v8_;

  if (*(_QWORD*)(a1 + 56) != 0) {
    v3 = a1;
    v4 = std___1___shared_weak_count_lock(*(_QWORD*)(a1 + 56));
    a1 = v3;
    if (v4 != 0) {
      v5 = *(_QWORD*)(v3 + 48);
    }
    else {
      v5 = 0;
    }
  }
  else {
    v5 = 0;
    v4 = 0;
  }
  v6 = *(_QWORD*)(v5 + 80);
  GameRoutine_c1cd40(a1);
  GameRoutine_c38340(a2, v6);
  v8_.v8 = v5;
  v8_.v9 = v4;
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  GameRoutine_c38500((_QWORD*)a2, &v8_.v8);
  v7 = v8_.v9;
  if (v8_.v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8_.v9 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  *(_BYTE*)(a2 + 193) = 1;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
}

__int64 Layout_c1bc40(__int64 result, __int64 a2)
{
  int v2;
  __int64 v3;
  int v4;
  bool v5;
  int v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  int v27;
  int v28;

  v2 = *(_DWORD*)(result + 184);
  v3 = result;
  switch (v2) {
  case 3:
    if (*(_DWORD*)(*(_QWORD*)(result + 200) + 136LL) == 2) {
      result = Manager_c43b70_alt1(*(_QWORD*)(result + 8), a2);
      if ((result & 1) != 0) {
        v13 = *(unsigned __int8*)(v3 + 136);
        if ((v13 & 1) != 0) {
          v14 = *(_QWORD*)(v3 + 144);
        }
        else {
          v14 = v13 >> 1;
        }
        if (v14 != 0) {
          v15 = *(_QWORD*)v3;
          v16 = *(_QWORD*)(*(_QWORD*)v3 + 392LL);
          if ((v13 & 1) != 0) {
            v17 = *(_QWORD*)(v3 + 152);
          }
          else {
            v17 = v3 + 137;
          }
          v18 = *(unsigned int*)(v16 + 352);
          if ((int)v18 < 1) {
          LABEL_38:
            v28 = LightingAnimModule_c6c460_alt1(v16, v17, v14);
            v15 = *(_QWORD*)v3;
            LODWORD(v20) = v28;
          }
          else {
            v19 = (_QWORD*)(v16 + 272);
            v20 = 0;
            while (1) {
              v21 = *((unsigned __int8*)v19 - 16);
              v22 = *(v19 - 1);
              if ((v21 & 1) == 0) {
                v22 = v21 >> 1;
              }
              if (v14 == v22) {
                v23 = (v21 & 1) != 0 ? *v19 : (__int64)v19 - 15;
                if (memcmp_alt2(v17, v23, v14) == 0) {
                  break;
                }
              }
              ++v20;
              v19 += 3;
              if (v18 == v20) {
                goto LABEL_38;
              }
            }
          }
          *(_DWORD*)(v3 + 400) = v20;
          LightingAnimModule_c6d940_alt1(*(_QWORD*)(v15 + 392), v20, -1);
        }
        result = GameRoutine_b86ad0_alt1(*(_QWORD*)v3);
        *(_BYTE*)(*(_QWORD*)v3 + 224LL) = 0;
        *(_QWORD*)(v3 + 184) = 4;
      }
    }
    break;
  case 2:
    v7 = *(__int64**)(result + 384);
    if (v7 != nullptr) {
      v8 = *v7;
      if (*v7 != 0 && v7[1] != 0) {
        v9 = *(_QWORD*)(result + 384);
        nn_os_AcquireReadLock_alt1(v8 + 696);
        v10 = *(_DWORD*)(v8 + 656);
        result = nn_os_ReleaseReadLock_alt1(v8 + 696);
        if ((v10 & 8) == 0) {
          return result;
        }
        v11 = *(_QWORD*)(v9 + 8);
        nn_os_AcquireReadLock_alt1(v11 + 696);
        v12 = *(_DWORD*)(v11 + 656);
        result = nn_os_ReleaseReadLock_alt1(v11 + 696);
        if ((v12 & 8) == 0) {
          return result;
        }
        v7 = *(__int64**)(v3 + 384);
      }
    }
    result = GameRoutine_c1e830_alt1(v3, v7, 0);
    *(_DWORD*)(v3 + 184) = 3;
    return result;
  case 1:
    v4 = *(_DWORD*)(result + 192);
    v5 = __OFSUB__(v4, 1);
    v6 = v4 - 1;
    if (v6 < 0 != v5) {
      v24 = *(_QWORD*)(result + 256);
      if (v24 == 0 ||
          (nn_os_AcquireReadLock_alt1(v24 + 696), v25 = *(_DWORD*)(v24 + 656),
           result = nn_os_ReleaseReadLock_alt1(v24 + 696), (v25 & 8) != 0)) {
        v26 = *(_QWORD*)(v3 + 264);
        if (v26 == 0 ||
            (nn_os_AcquireReadLock_alt1(v26 + 696), v27 = *(_DWORD*)(v26 + 656),
             result = nn_os_ReleaseReadLock_alt1(v26 + 696), (v27 & 8) != 0)) {
          result = Layout_c1d3e0_alt3(v3, (__int64**)(v3 + 256));
          *(_DWORD*)(v3 + 184) = 2;
        }
      }
    }
    else {
      *(_DWORD*)(result + 192) = v6;
    }
    break;
  default:
    break;
  }
  return result;
}

__attribute__((swiftcall)) void Layout_c1d100(PSEUDO_X8 x8_, __int64 result,
                                              unsigned __int64 a2, __int64 a3,
                                              unsigned __int64 a4)
{
  _WORD* a5 = (_WORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v9;
  char* v10;
  __int64 v11;
  __int64* v12;
  char* v13;
  unsigned __int64 v14;
  char* v15;
  unsigned __int64 v16;
  long double v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  __int64* v22;
  char* v23;
  unsigned __int64 v24;
  char* v25;
  unsigned __int64 v26;
  long double v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  char* v32;
  __int64 v33;
  unsigned __int64 v34;
  char* v35;

  *a5 = 0;
  if (a2 != 0) {
    if (a2 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_50;
    }
    v9 = result;
    if (a2 >= 0x17) {
      if ((a2 | 7) == 0x17) {
        v11 = 26;
      }
      else {
        v11 = (a2 | 7) + 1;
      }
      v10 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v11,
                                                  16, 0);
      v31 = a2;
      v32 = v10;
      v30 = v11 | 1;
    }
    else {
      LOBYTE(v30) = 2 * a2;
      v10 = (char*)&v30 + 1;
    }
    memmove(v10, v9, a2);
    v10[a2] = 0;
    v12 = (__int64*)GameRoutine_1a0a680(&v30, 0, "__", 2);
    v14 = v12[1];
    v13 = (char*)v12[2];
    v33 = *v12;
    v34 = v14;
    v35 = v13;
    v12[1] = 0;
    v12[2] = 0;
    *v12 = 0;
    if ((v33 & 1) != 0) {
      v15 = v35;
    }
    else {
      v15 = (char*)&v33 + 1;
    }
    if ((v33 & 1) != 0) {
      v16 = v34;
    }
    else {
      v16 = (unsigned __int64)(unsigned __int8)v33 >> 1;
    }
    result = GameRoutine_1a09ce0(a5, v15, v16);
    if ((v33 & 1) != 0 && v35 != nullptr) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v18 = 56;
      }
      result =
          ((__int64 (*)(__int64, __int64))nn_mem_StandardAllocator_Free_alt1)(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, (__int64)v35);
    }
    if ((v30 & 1) != 0 && v32 != nullptr) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      result =
          ((__int64 (*)(__int64, __int64))nn_mem_StandardAllocator_Free_alt1)(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, (__int64)v32);
    }
  }
  if (a4 == 0) {
    result;
    return;
  }
  if (a4 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_50:
    String_60a1d0_alt1(result);
  }
  if (a4 >= 0x17) {
    if ((a4 | 7) == 0x17) {
      v21 = 26;
    }
    else {
      v21 = (a4 | 7) + 1;
    }
    v20 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v21,
                                                16, 0);
    v31 = a4;
    v32 = v20;
    v30 = v21 | 1;
  }
  else {
    LOBYTE(v30) = 2 * a4;
    v20 = (char*)&v30 + 1;
  }
  memmove(v20, a3, a4);
  v20[a4] = 0;
  v22 = (__int64*)GameRoutine_1a0a680(&v30, 0, ".", 1);
  v24 = v22[1];
  v23 = (char*)v22[2];
  v33 = *v22;
  v34 = v24;
  v35 = v23;
  v22[1] = 0;
  v22[2] = 0;
  *v22 = 0;
  if ((v33 & 1) != 0) {
    v25 = v35;
  }
  else {
    v25 = (char*)&v33 + 1;
  }
  if ((v33 & 1) != 0) {
    v26 = v34;
  }
  else {
    v26 = (unsigned __int64)(unsigned __int8)v33 >> 1;
  }
  result = GameRoutine_1a09ce0(a5, v25, v26);
  if ((v33 & 1) != 0 && v35 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    result =
        ((__int64 (*)(__int64, __int64))nn_mem_StandardAllocator_Free_alt1)(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, (__int64)v35);
  }
  if ((v30 & 1) != 0 && v32 != nullptr) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    {
      ((__int64 (*)(__int64, __int64))nn_mem_StandardAllocator_Free_alt1)(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, (__int64)v32);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64* Layout_c1d3e0(__int64* result, __int64** a2)
{

#pragma clang fp contract(off)
  __int64** v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  _BOOL4 v22;
  unsigned __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  _BOOL4 v28;
  __int64 v29;
  __int64 v30;
  __int128 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  atomic_ullong* v39;
  unsigned int v40;
  __int128 v41;
  unsigned int v42;
  __int128 v43;
  char v44;
  __int128 v45;
  float32x4_t v46;
  unsigned __int64 v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  char* v54;
  char v55;
  __int64 v56;
  char v57;
  __int64 v58;
  char* v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  char* v62;
  char v63;
  __int64 v64;
  char* v65;
  unsigned __int64 v66;
  __int64 v67;
  char v68;
  __int64 v69;
  __int64 v70;
  char* v71;
  char* v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  char v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  char* v80;
  char* v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  bool v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  char* v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  _DWORD* v100;
  unsigned __int64 v101;
  __int64 v102;
  __int64 v103;
  bool v104;
  __int64 v105;
  _QWORD* v106;
  unsigned __int64 v107;
  __int64* v108;
  __int64 v109;
  unsigned __int64 v110;
  const char* v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64** v117;
  __int64 v118;
  __int64 v119;
  const char* v120;
  __int64 v121;
  __int64 v122;
  __int128 v123;
  __int64* v124;
  char v125;
  __int64 v126;
  __int64 v127;
  __int128 v128;
  __int128 v129;
  const char* v130;
  __int64 v131;
  __int64 v132;
  unsigned __int64 v133;
  unsigned int v134;
  char v135[4];
  int v136;
  struct {
    _QWORD v137[7];
    __int16 v138;
    char gap250_[2];
    int v139;
    __int64 v140;
    __int64 v141;
  } v137_;
  struct {
    __int64 v142;
    unsigned __int64 v143;
    char* v144;
  } v142_;
  struct {
    unsigned __int64 v145;
    unsigned __int64 v146;
    char* v147;
  } v145_;
  __int64 v148[2];

  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = a2;
  v3 = *a2;
  if (v3 == nullptr) {
    return result;
  }
  v4 = result;
  v5 = result[3];
  if (v5 == 0) {
    v7 = 0;
    v8 = 0;
    if (v3[74] == 0) {
      goto LABEL_327;
    }
  LABEL_6:
    v9 = v2[1];
    if (v9 != nullptr && (v10 = v9[74]) != 0 &&
        GameRoutine_5fc1f0_alt1(v10) != 0) {
      v11 = GameRoutine_5fc1f0_alt1(v9[74]),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      v11 = 0;
    }
    v3 = *v2;
    v12 = (*v2)[74];
    if (v12 == 0) {
      goto LABEL_327;
    }
    v13 = *v4;
    v137_.v137[6] = 0;
    v137_.v139 = 0;
    v137_.v137[4] = -1;
    v137_.v137[5] = 0;
    v137_.v138 = 257;
    v118 = v13;
    v119 = v8;
    v14 = v3[72];
    v137_.v140 = v12;
    v137_.v141 = v14;
    v137_.v137[0] = GameData_212ce30 + 2;
    __builtin_memset(&v137_.v137[1], 0, 24);
    v15 = (__int64*)fw_memory_g_heap_manager_ptr;
    v16 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 544, 16, 0),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(_QWORD*)v16 = 0;
    *(_BYTE*)(v16 + 12) = 0;
    *(_DWORD*)(v16 + 8) = -1;
    *(_QWORD*)(v16 + 16) = v16 + 32;
    *(_QWORD*)(v16 + 24) = v16 + 32;
    GameRoutine_1fa0_alt1(v16, 0),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_1fd0_alt1(v16, (__int64)v137_.v137),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v17 = fw_memory_HeapManager_Allocate_alt1(*v15, 12, 16, 0),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(_QWORD*)v17 = 0;
    *(_DWORD*)(v17 + 8) = 0;
    Value_2500_alt1((__int64*)v16, v17, 0xCu),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
    timeline_21c0((unsigned int*)v16, (unsigned int*)&v136),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v120 = (const char*)v17;
    v18 = strlen_alt1((const char*)v17),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v18 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_331;
    }
    v19 = v18;
    if (v18 >= 0x17) {
      if ((v18 | 7) == 0x17) {
        v21 = 26;
      }
      else {
        v21 = (v18 | 7) + 1;
      }
      v20 = (char*)fw_memory_HeapManager_Allocate_alt1(*v15, v21, 16, 0),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v145_.v146 = v19;
      v145_.v147 = v20;
      v145_.v145 = v21 | 1;
    }
    else {
      LOBYTE(v145_.v145) = 2 * v18;
      v20 = (char*)&v145_.v145 + 1;
      if (v18 == 0) {
      LABEL_21:
        v20[v19] = 0;
        v22 = false;
        v23 = v145_.v146;
        if ((v145_.v145 & 1) == 0) {
          v23 = (unsigned __int64)(unsigned __int8)v145_.v145 >> 1;
        }
        if (v23 == 11) {
          v24 = (__int64*)v145_.v147;
          if ((v145_.v145 & 1) == 0) {
            v24 = (__int64*)((char*)&v145_.v145 + 1);
          }
          v25 = *v24;
          v26 = *(__int64*)((char*)v24 + 3);
          v22 = v25 == 0x6E694265626F7250LL && v26 == 0x7972616E69426562LL;
        }
        v28 = v136 > 3 && v22;
        if ((v145_.v145 & 1) != 0 && v145_.v147 != nullptr) {
          v29 = 128;
          if (*(_QWORD*)(*v15 + 200) == 0) {
            v29 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v15 + v29, (__int64)v145_.v147),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        if (v28) {
          v30 = *(_QWORD*)(v7 + 288);
          v117 = v2;
          GameRoutine_b31800_alt1(v30 + 736, 255),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          v121 = v30;
          *(_QWORD*)(v30 + 816) = *(_QWORD*)(v30 + 808);
          timeline_21c0((unsigned int*)v16, (unsigned int*)v135),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          v134 = 0;
          timeline_21c0((unsigned int*)v16, &v134),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          timeline_2360((unsigned __int64*)v16, &v133),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          if (v133 != 0) {
            v32 = 0;
            v123 = v31;
            v128 = v31;
            v122 = v11;
            v124 = GameData_212e918[0] + 2;
            v125 = 1;
            while (1) {
              timeline_2360((unsigned __int64*)v16, (unsigned __int64*)&v132),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
              v34 = v132;
              v35 = fw_memory_HeapManager_Allocate_alt1(*v15, v132, 16, 0),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
              memset_alt1(v35, 0, v34),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
              v130 = (const char*)v35;
              Value_2500_alt1((__int64*)v16, v35, v34),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
              v36 = fw_memory_HeapManager_Allocate_alt1(*v15, 296, 16, 0),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
              *(_QWORD*)(v36 + 16) = 0;
              *(_QWORD*)(v36 + 8) = 0;
              *(_QWORD*)v36 = v124;
              memset_alt1(v36 + 24, 0, 0x110u),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
              *(_QWORD*)(v36 + 112) = 0;
              *(_QWORD*)(v36 + 120) = 0;
              *(_QWORD*)(v36 + 128) = 0;
              *(_QWORD*)(v36 + 136) = 0;
              *(_QWORD*)(v36 + 36) = 0x3F0000003F000000LL;
              *(_QWORD*)(v36 + 44) = 0x3F0000003F000000LL;
              *(_QWORD*)(v36 + 52) = 0x3F0000003F000000LL;
              *(_QWORD*)(v36 + 60) = 0x3F0000003F000000LL;
              v37 = (_QWORD*)(v36 + 60);
              *(_QWORD*)(v36 + 76) = 0x3F0000003F000000LL;
              *(_DWORD*)(v36 + 68) = 1056964608;
              *(_QWORD*)(v36 + 84) = 0xBF0000003F000000LL;
              *(_QWORD*)(v36 + 92) = 0xBF000000BF000000LL;
              *(_DWORD*)(v36 + 104) = 64;
              *(_DWORD*)(v36 + 144) = -1;
              *(_DWORD*)(v36 + 160) = -1;
              *(_DWORD*)(v36 + 176) = -1;
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 24) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 28) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 32) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 36) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 40) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 44) = v145_.v145;
              }
              v38 = (_QWORD*)(v36 + 48);
              if (v136 < 4) {
                if ((timeline_21c0((unsigned int*)v16,
                                   (unsigned int*)&v145_.v145) &
                     1) != 0) {
                  v40 = -1;
                }
                else {
                  v40 = 0;
                }
                v41 = v128;
                LODWORD(v41) = v145_.v145;
                *(int8x8_t*)&v41 = vbsl_s8(vdup_n_s32(v40), *(int8x8_t*)&v41,
                                           *(int8x8_t*)&v128);
                v129 = v41;
                if ((timeline_21c0((unsigned int*)v16,
                                   (unsigned int*)&v145_.v145) &
                     1) != 0) {
                  v42 = -1;
                }
                else {
                  v42 = 0;
                }
                v43 = v129;
                DWORD1(v43) = v145_.v145;
                *(int8x8_t*)&v43 = vbsl_s8(vdup_n_s32(v42), *(int8x8_t*)&v43,
                                           *(int8x8_t*)&v129);
                v128 = v43;
                v44 = timeline_21c0((unsigned int*)v16,
                                    (unsigned int*)&v145_.v145),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
                v45 = v123;
                LANES128(v46).n128_u64[0] = v128;
                if ((v44 & 1) != 0) {
                  LODWORD(v45) = v145_.v145;
                }
                v123 = v45;
                v47 = (unsigned int)v45;
                LANES128(v48).n128_u64[0] = *(_QWORD*)(v36 + 36);
                LANES128(v46).n128_u64[1] = v47;
                LANES128(v48).n128_u64[1] = *(unsigned int*)(v36 + 44);
                v49 = vmaxq_f32(vsubq_f32(v46, v48), COERCE_AS(float32x4_t, 0));
                LANES128(v48).n128_u64[0] = 0x3F0000003F000000LL;
                LANES128(v48).n128_u64[1] = 0x3F0000003F000000LL;
                v50 = vmulq_f32(v49, v48);
                *(_QWORD*)(v36 + 48) = LANES128(v50).n128_u64[0];
                *(_DWORD*)(v36 + 56) = LANES128(v50).n128_u32[2];
                *v37 = *v38;
                v39 = (atomic_ullong*)(v36 + 8);
                *(_DWORD*)(v36 + 68) = *(_DWORD*)(v36 + 56);
              }
              else {
                if ((timeline_21c0((unsigned int*)v16,
                                   (unsigned int*)&v145_.v145) &
                     1) != 0) {
                  *(_DWORD*)v38 = v145_.v145;
                }
                if ((timeline_21c0((unsigned int*)v16,
                                   (unsigned int*)&v145_.v145) &
                     1) != 0) {
                  *(_DWORD*)(v36 + 52) = v145_.v145;
                }
                v39 = (atomic_ullong*)(v36 + 8);
                if ((timeline_21c0((unsigned int*)v16,
                                   (unsigned int*)&v145_.v145) &
                     1) != 0) {
                  *(_DWORD*)(v36 + 56) = v145_.v145;
                }
                if ((timeline_21c0((unsigned int*)v16,
                                   (unsigned int*)&v145_.v145) &
                     1) != 0) {
                  *(_DWORD*)v37 = v145_.v145;
                }
                if ((timeline_21c0((unsigned int*)v16,
                                   (unsigned int*)&v145_.v145) &
                     1) != 0) {
                  *(_DWORD*)(v36 + 64) = v145_.v145;
                }
                if ((timeline_21c0((unsigned int*)v16,
                                   (unsigned int*)&v145_.v145) &
                     1) != 0) {
                  *(_DWORD*)(v36 + 68) = v145_.v145;
                }
              }
              timeline_21c0((unsigned int*)v16, (unsigned int*)(v36 + 72)),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 76) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 80) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 84) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 88) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 92) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 96) = v145_.v145;
              }
              if (v136 < 5) {
                *(_DWORD*)(v36 + 100) = 0;
              }
              else {
                timeline_21c0((unsigned int*)v16, (unsigned int*)(v36 + 100)),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
              timeline_21c0((unsigned int*)v16, (unsigned int*)(v36 + 104)),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
              *(_BYTE*)(v36 + 108) = (_DWORD)v32 == v134;
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 112) = v145_.v145;
              }
              v51 = (__int64)v130;
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 116) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 120) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 124) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 128) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 132) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 184) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 188) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 192) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 196) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 200) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 204) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 208) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 212) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 216) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 220) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 224) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 228) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 232) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 236) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 240) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 244) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 248) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 252) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 256) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 260) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 264) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 268) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 272) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 276) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 280) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 284) = v145_.v145;
              }
              if ((timeline_21c0((unsigned int*)v16,
                                 (unsigned int*)&v145_.v145) &
                   1) != 0) {
                *(_DWORD*)(v36 + 288) = v145_.v145;
              }
              v52 = strlen_alt1(v130),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
              atomic_fetch_add_explicit(v39, 1u, memory_order_relaxed);
              if (v11 == 0) {
                v55 = 0;
                if (atomic_fetch_add(v39, 0xFFFFFFFFFFFFFFFFLL) != 0) {
                  goto LABEL_262;
                }
              LABEL_261:
                (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
                std___1___shared_weak_count___release_weak_alt1(v36),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
                goto LABEL_262;
              }
              v53 = v52;
              v148[0] = v11;
              if (v52 >= 0xFFFFFFFFFFFFFFF7LL) {
                goto LABEL_331;
              }
              v127 = v32;
              if (v52 >= 0x17) {
                break;
              }
              v54 = (char*)&v145_.v145 + 1;
              LOBYTE(v145_.v145) = 2 * v52;
              if (v52 != 0) {
                goto LABEL_173;
              }
            LABEL_174:
              v54[v53] = 0;
              v57 = v145_.v145;
              v58 = (__int64)v145_.v147;
              if ((v145_.v145 & 1) != 0) {
                v59 = v145_.v147;
              }
              else {
                v59 = (char*)&v145_.v145 + 1;
              }
              if ((v145_.v145 & 1) != 0) {
                v60 = v145_.v146;
              }
              else {
                v60 = (unsigned __int64)(unsigned __int8)v145_.v145 >> 1;
              }
              v61 = v60 + 3;
              if (v60 + 3 >= 0xFFFFFFFFFFFFFFF7LL) {
                goto LABEL_331;
              }
              if (v61 >= 0x17) {
                if ((v61 | 7) == 0x17) {
                  v64 = 26;
                }
                else {
                  v64 = (v61 | 7) + 1;
                }
                v62 = (char*)fw_memory_HeapManager_Allocate_alt1(*v15, v64, 16,
                                                                 0),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
                v142_.v143 = v60 + 3;
                v142_.v144 = v62;
                v142_.v142 = v64 | 1;
              }
              else {
                v62 = (char*)&v142_.v142 + 1;
                v142_.v143 = 0;
                v142_.v144 = nullptr;
                v142_.v142 = (unsigned __int8)(2 * v61);
                if (v60 == 0) {
                  v62 = (char*)&v142_.v142 + 1;
                  v63 = 1;
                  goto LABEL_189;
                }
              }
              memmove_alt1((__int64)v62, (__int64)v59, v60),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
              v63 = 0;
            LABEL_189:
              *(_DWORD*)&v62[v60] = 4407903;
              if ((v142_.v142 & 1) != 0) {
                v65 = v142_.v144;
              }
              else {
                v65 = (char*)&v142_.v142 + 1;
              }
              if ((v142_.v142 & 1) != 0) {
                v66 = v142_.v143;
              }
              else {
                v66 = (unsigned __int64)(unsigned __int8)v142_.v142 >> 1;
              }
              v126 = g3d_a6c880_alt1(v148, (__int64)v65, v66),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
              if ((v142_.v142 & 1) != 0 && v142_.v144 != nullptr) {
                v67 = 128;
                if (*(_QWORD*)(*v15 + 200) == 0) {
                  v67 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*v15 + v67,
                                                   (__int64)v142_.v144),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
              if (v61 > 0x16) {
                if ((v61 | 7) == 0x17) {
                  v70 = 26;
                }
                else {
                  v70 = (v61 | 7) + 1;
                }
                v69 = fw_memory_HeapManager_Allocate_alt1(*v15, v70, 16, 0),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
                v142_.v143 = v60 + 3;
                v142_.v144 = (char*)v69;
                v142_.v142 = v70 | 1;
                v68 = v70 | 1;
              }
              else {
                v68 = 2 * v61;
                v69 = 0;
                v142_.v143 = 0;
                v142_.v144 = nullptr;
                v142_.v142 = (unsigned __int8)(2 * v61);
              }
              if ((v68 & 1) != 0) {
                v71 = (char*)v69;
              }
              else {
                v71 = (char*)&v142_.v142 + 1;
              }
              if ((v63 & 1) == 0) {
                memmove_alt1((__int64)v71, (__int64)v59, v60),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
              *(_DWORD*)&v71[v60] = 5066335;
              if ((v142_.v142 & 1) != 0) {
                v72 = v142_.v144;
              }
              else {
                v72 = (char*)&v142_.v142 + 1;
              }
              if ((v142_.v142 & 1) != 0) {
                v73 = v142_.v143;
              }
              else {
                v73 = (unsigned __int64)(unsigned __int8)v142_.v142 >> 1;
              }
              v74 = g3d_a6c880_alt1(v148, (__int64)v72, v73),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
              if ((v142_.v142 & 1) != 0 && v142_.v144 != nullptr) {
                v75 = 128;
                if (*(_QWORD*)(*v15 + 200) == 0) {
                  v75 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*v15 + v75,
                                                   (__int64)v142_.v144),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
              if (v61 > 0x16) {
                v78 = *v15;
                if ((v61 | 7) == 0x17) {
                  v79 = 26;
                }
                else {
                  v79 = (v61 | 7) + 1;
                }
                v77 = fw_memory_HeapManager_Allocate_alt1(v78, v79, 16, 0),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
                v142_.v143 = v60 + 3;
                v142_.v144 = (char*)v77;
                v142_.v142 = v79 | 1;
                v76 = v79 | 1;
              }
              else {
                v76 = 2 * v61;
                v77 = 0;
                v142_.v143 = 0;
                v142_.v144 = nullptr;
                v142_.v142 = (unsigned __int8)(2 * v61);
              }
              if ((v76 & 1) != 0) {
                v80 = (char*)v77;
              }
              else {
                v80 = (char*)&v142_.v142 + 1;
              }
              if ((v63 & 1) == 0) {
                memmove_alt1((__int64)v80, (__int64)v59, v60),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
              *(_DWORD*)&v80[v60] = 5067615;
              if ((v142_.v142 & 1) != 0) {
                v81 = v142_.v144;
              }
              else {
                v81 = (char*)&v142_.v142 + 1;
              }
              if ((v142_.v142 & 1) != 0) {
                v82 = v142_.v143;
              }
              else {
                v82 = (unsigned __int64)(unsigned __int8)v142_.v142 >> 1;
              }
              v83 = g3d_a6c880_alt1(v148, (__int64)v81, v82),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
              v15 = (__int64*)fw_memory_g_heap_manager_ptr;
              if ((v142_.v142 & 1) != 0 && v142_.v144 != nullptr) {
                v84 = v83;
                v85 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v85 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v85,
                    (__int64)v142_.v144),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
                v83 = v84;
              }
              v32 = v127;
              v39 = (atomic_ullong*)(v36 + 8);
              v87 = v126 == 0 || v74 == 0 || v83 == 0;
              v55 = !v87;
              if (!v87) {
                v88 = *(_QWORD*)(*(_QWORD*)(v126 + 128) + 8LL);
                *(_DWORD*)(v36 + 144) = *(_QWORD*)(v126 + 144);
                *(_QWORD*)(v36 + 136) = v88;
                v89 = *(_QWORD*)(*(_QWORD*)(v74 + 128) + 8LL);
                *(_DWORD*)(v36 + 160) = *(_QWORD*)(v74 + 144);
                *(_QWORD*)(v36 + 152) = v89;
                v90 = *(_QWORD*)(*(_QWORD*)(v83 + 128) + 8LL);
                *(_DWORD*)(v36 + 176) = *(_QWORD*)(v83 + 144);
                *(_QWORD*)(v36 + 168) = v90;
              }
              if ((v57 & 1) != 0 && v58 != 0) {
                v91 = 128;
                if (*(_QWORD*)(*v15 + 200) == 0) {
                  v91 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*v15 + v91, v58),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
              v11 = v122;
              v51 = (__int64)v130;
              if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                goto LABEL_261;
              }
            LABEL_262:
              if ((v55 & 1) != 0) {
                v145_.v145 = v36 + 24;
                v145_.v146 = v36;
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 8),
                                          1u, memory_order_relaxed);
                GameHr_b310e0(v121 + 736, (__int64**)&v145_.v145),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
                v92 = v145_.v146;
                if (v145_.v146 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v145_.v146 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v92 + 16LL))(v92),
                      v31 = COERCE_AS(__typeof__(v31),
                                      PSEUDO_REGISTER(__n128, "v0", "=w"));
                  std___1___shared_weak_count___release_weak_alt1(v92),
                      v31 = COERCE_AS(__typeof__(v31),
                                      PSEUDO_REGISTER(__n128, "v0", "=w"));
                }
                v125 &= *(_BYTE*)(v36 + 108) ^ 1;
                if (atomic_fetch_add(v39, 0xFFFFFFFFFFFFFFFFLL) != 0) {
                  goto LABEL_44;
                }
              LABEL_267:
                (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
                std___1___shared_weak_count___release_weak_alt1(v36),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
                goto LABEL_44;
              }
              if (atomic_fetch_add(v39, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                goto LABEL_267;
              }
            LABEL_44:
              v33 = 128;
              if (*(_QWORD*)(*v15 + 200) == 0) {
                v33 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v15 + v33, v51),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
              if (++v32 >= v133) {
                goto LABEL_283;
              }
            }
            if ((v52 | 7) == 0x17) {
              v56 = 26;
            }
            else {
              v56 = (v52 | 7) + 1;
            }
            v54 = (char*)fw_memory_HeapManager_Allocate_alt1(*v15, v56, 16, 0),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
            v145_.v146 = v53;
            v145_.v147 = v54;
            v145_.v145 = v56 | 1;
          LABEL_173:
            memcpy_alt1((__int64)v54, (__int64)v130, v53),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            goto LABEL_174;
          }
          v125 = 1;
        LABEL_283:
          v2 = v117;
          if (v136 > 5) {
            timeline_2360((unsigned __int64*)v16, &v145_.v145),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            if (v145_.v145 != 0) {
              if (v145_.v145 >= 0x2C8590B21642C86LL) {
                GameRoutine_b31b50_alt1(),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
              v98 = 92 * v145_.v145;
              v99 = fw_memory_HeapManager_Allocate_alt1(*v15, 92 * v145_.v145,
                                                        16, 0),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
              v100 = (_DWORD*)v99;
              v101 = (v98 - 92) / 0x5CuLL;
              v102 = v99;
              if ((~(_BYTE)v101 & 7) != 0) {
                v103 = -(__int64)(((_BYTE)v101 + 1) & 7);
                v102 = v99;
                do {
                  *(_DWORD*)(v102 + 72) = 0;
                  *(_QWORD*)(v102 + 56) = 0;
                  *(_QWORD*)(v102 + 64) = 0;
                  v104 = __CFADD__(v103++, 1);
                  *(_QWORD*)(v102 + 40) = 0;
                  *(_QWORD*)(v102 + 48) = 0;
                  *(_QWORD*)(v102 + 24) = 0;
                  *(_QWORD*)(v102 + 32) = 0;
                  *(_QWORD*)(v102 + 8) = 0;
                  *(_QWORD*)(v102 + 16) = 0;
                  *(_QWORD*)v102 = 0;
                  *(_QWORD*)(v102 + 76) = 0x3F0000003F000000LL;
                  *(_QWORD*)(v102 + 84) = 0x3F0000003F000000LL;
                  v102 += 92;
                } while (!v104);
              }
              v105 = v99 + v98;
              if ((unsigned __int64)(v98 - 92) >= 0x284) {
                do {
                  *(_QWORD*)(v102 + 48) = 0;
                  *(_QWORD*)(v102 + 56) = 0;
                  *(_QWORD*)(v102 + 32) = 0;
                  *(_QWORD*)(v102 + 40) = 0;
                  *(_QWORD*)(v102 + 16) = 0;
                  *(_QWORD*)(v102 + 24) = 0;
                  *(_QWORD*)v102 = 0;
                  *(_QWORD*)(v102 + 8) = 0;
                  *(_QWORD*)(v102 + 64) = 0;
                  *(_QWORD*)(v102 + 72) = 0x3F00000000000000LL;
                  *(_QWORD*)(v102 + 80) = 0x3F0000003F000000LL;
                  *(_DWORD*)(v102 + 88) = 1056964608;
                  *(_QWORD*)(v102 + 92) = 0;
                  *(_QWORD*)(v102 + 100) = 0;
                  *(_QWORD*)(v102 + 108) = 0;
                  *(_QWORD*)(v102 + 116) = 0;
                  *(_QWORD*)(v102 + 260) = 0x3F0000003F000000LL;
                  *(_QWORD*)(v102 + 124) = 0;
                  *(_QWORD*)(v102 + 132) = 0;
                  *(_QWORD*)(v102 + 140) = 0;
                  *(_QWORD*)(v102 + 148) = 0;
                  *(_QWORD*)(v102 + 156) = 0;
                  *(_DWORD*)(v102 + 164) = 0;
                  *(_QWORD*)(v102 + 168) = 0x3F0000003F000000LL;
                  *(_QWORD*)(v102 + 176) = 0x3F0000003F000000LL;
                  *(_DWORD*)(v102 + 256) = 0;
                  *(_QWORD*)(v102 + 240) = 0;
                  *(_QWORD*)(v102 + 248) = 0;
                  *(_QWORD*)(v102 + 224) = 0;
                  *(_QWORD*)(v102 + 232) = 0;
                  *(_QWORD*)(v102 + 208) = 0;
                  *(_QWORD*)(v102 + 216) = 0;
                  *(_QWORD*)(v102 + 192) = 0;
                  *(_QWORD*)(v102 + 200) = 0;
                  *(_QWORD*)(v102 + 184) = 0;
                  *(_QWORD*)(v102 + 268) = 0x3F0000003F000000LL;
                  v106 = (_QWORD*)(v102 + 276);
                  *(_DWORD*)(v102 + 348) = 0;
                  *(_QWORD*)(v102 + 352) = 0x3F0000003F000000LL;
                  *(_QWORD*)(v102 + 360) = 0x3F0000003F000000LL;
                  *(_DWORD*)(v102 + 440) = 0;
                  *(_QWORD*)(v102 + 424) = 0;
                  *(_QWORD*)(v102 + 432) = 0;
                  *(_QWORD*)(v102 + 408) = 0;
                  *(_QWORD*)(v102 + 416) = 0;
                  *(_QWORD*)(v102 + 392) = 0;
                  *(_QWORD*)(v102 + 400) = 0;
                  *(_QWORD*)(v102 + 376) = 0;
                  *(_QWORD*)(v102 + 384) = 0;
                  *(_QWORD*)(v102 + 368) = 0;
                  *(_DWORD*)(v102 + 532) = 0;
                  *(_QWORD*)(v102 + 536) = 0x3F0000003F000000LL;
                  *(_QWORD*)(v102 + 544) = 0x3F0000003F000000LL;
                  *(_DWORD*)(v102 + 624) = 0;
                  *(_QWORD*)(v102 + 616) = 0;
                  *(_QWORD*)(v102 + 608) = 0;
                  *(_QWORD*)(v102 + 600) = 0;
                  *(_QWORD*)(v102 + 592) = 0;
                  *(_QWORD*)(v102 + 584) = 0;
                  *(_QWORD*)(v102 + 576) = 0;
                  *(_QWORD*)(v102 + 568) = 0;
                  *(_QWORD*)(v102 + 560) = 0;
                  *(_QWORD*)(v102 + 552) = 0;
                  *(_DWORD*)(v102 + 716) = 0;
                  *(_QWORD*)(v102 + 720) = 0x3F0000003F000000LL;
                  *(_QWORD*)(v102 + 728) = 0x3F0000003F000000LL;
                  v102 += 736;
                  v106[7] = 0;
                  v106[8] = 0;
                  v106[5] = 0;
                  v106[6] = 0;
                  v106[3] = 0;
                  v106[4] = 0;
                  v106[1] = 0;
                  v106[2] = 0;
                  *v106 = 0;
                  v106[21] = 0x3F0000003F000000LL;
                  v106[22] = 0x3F0000003F000000LL;
                  v106[30] = 0;
                  v106[31] = 0;
                  v106[28] = 0;
                  v106[29] = 0;
                  v106[26] = 0;
                  v106[27] = 0;
                  v106[24] = 0;
                  v106[25] = 0;
                  v106[23] = 0;
                  v106[44] = 0x3F0000003F000000LL;
                  v106[45] = 0x3F0000003F000000LL;
                  v106[53] = 0;
                  v106[54] = 0;
                  v106[51] = 0;
                  v106[52] = 0;
                  v106[49] = 0;
                  v106[50] = 0;
                  v106[47] = 0;
                  v106[48] = 0;
                  v106[46] = 0;
                } while (v102 != v105);
              }
              v131 = v99;
              v107 = 0;
              v108 = (__int64*)fw_memory_g_heap_manager_ptr;
              do {
                timeline_2360((unsigned __int64*)v16,
                              (unsigned __int64*)&v142_.v142),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
                v110 = v142_.v142;
                v111 = (const char*)fw_memory_HeapManager_Allocate_alt1(
                    *v108, v142_.v142, 16, 0),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
                memset_alt1((__int64)v111, 0, v110),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
                Value_2500_alt1((__int64*)v16, (__int64)v111, v110),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
                nn_util_SNPrintf(v100, 64, "%s", v111),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
                if ((timeline_21c0((unsigned int*)v16, (unsigned int*)v148) &
                     1) != 0) {
                  v100[16] = v148[0];
                }
                if ((timeline_21c0((unsigned int*)v16, (unsigned int*)v148) &
                     1) != 0) {
                  v100[17] = v148[0];
                }
                if ((timeline_21c0((unsigned int*)v16, (unsigned int*)v148) &
                     1) != 0) {
                  v100[18] = v148[0];
                }
                if ((timeline_21c0((unsigned int*)v16, (unsigned int*)v148) &
                     1) != 0) {
                  v100[19] = v148[0];
                }
                if ((timeline_21c0((unsigned int*)v16, (unsigned int*)v148) &
                     1) != 0) {
                  v100[20] = v148[0];
                }
                if ((timeline_21c0((unsigned int*)v16, (unsigned int*)v148) &
                     1) != 0) {
                  v100[21] = v148[0];
                }
                if ((timeline_21c0((unsigned int*)v16, (unsigned int*)v148) &
                     1) != 0) {
                  v100[22] = v148[0];
                }
                v108 = (__int64*)fw_memory_g_heap_manager_ptr;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) != 0) {
                  v109 = 128;
                }
                else {
                  v109 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v109,
                    (__int64)v111),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
                ++v107;
                v100 += 23;
              } while (v107 < v145_.v145);
              v2 = v117;
              v112 = v131;
            }
            else {
              v112 = 0;
              v105 = 0;
            }
            GameRoutine_b31990_alt1((__int64*)(v121 + 808), v112, v105,
                                    0xD37A6F4DE9BD37A7LL *
                                        ((v105 - v112) >> 2)),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            if (v112 != 0) {
              v113 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v113 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v113, v112),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            v15 = (__int64*)fw_memory_g_heap_manager_ptr;
          }
          if ((v125 & 1) != 0) {
            GameRoutine_b81e20(v118),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
        LABEL_320:
          v114 = *v15;
          *(_QWORD*)v16 = 0;
          if (*(_QWORD*)(v114 + 200) != 0) {
            v115 = 128;
          }
          else {
            v115 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(v114 + v115, (__int64)v120),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          if (*(_QWORD*)(*v15 + 200) != 0) {
            v116 = 128;
          }
          else {
            v116 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v15 + v116, v16),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          (*(void (**)(_QWORD*))(v137_.v137[0] + 24LL))(v137_.v137),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          v3 = *v2;
          v8 = v119;
          goto LABEL_327;
        }
        v93 = strlen_alt1(v120),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v93 < 0xFFFFFFFFFFFFFFF7LL) {
          v94 = v93;
          if (v93 >= 0x17) {
            if ((v93 | 7) == 0x17) {
              v96 = 26;
            }
            else {
              v96 = (v93 | 7) + 1;
            }
            v95 = (char*)fw_memory_HeapManager_Allocate_alt1(*v15, v96, 16, 0),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
            v145_.v147 = v95;
            v145_.v145 = v96 | 1;
          }
          else {
            LOBYTE(v145_.v145) = 2 * v93;
            v95 = (char*)&v145_.v145 + 1;
            if (v93 == 0) {
              goto LABEL_277;
            }
          }
          memcpy_alt1((__int64)v95, (__int64)v120, v94),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        LABEL_277:
          v95[v94] = 0;
          if ((v145_.v145 & 1) != 0 && v145_.v147 != nullptr) {
            v97 = 128;
            if (*(_QWORD*)(*v15 + 200) == 0) {
              v97 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v15 + v97, (__int64)v145_.v147),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          goto LABEL_320;
        }
      LABEL_331:
        String_60a1d0(), v31 = COERCE_AS(__typeof__(v31),
                                         PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    memcpy_alt1((__int64)v20, (__int64)v120, v19),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
    goto LABEL_21;
  }
  v6 = std___1___shared_weak_count_lock_alt1(v5),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v7 = v4[2];
  v3 = *v2;
  v8 = v6;
  if ((*v2)[74] != 0) {
    goto LABEL_6;
  }
LABEL_327:
  result = (__int64*)GameRoutine_634d80_alt1(v3[1], (__int64)v3),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *v2 = nullptr;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return (__int64*)std___1___shared_weak_count___release_weak_alt1(v8);
  }
  return result;
}

#pragma GCC visibility pop
