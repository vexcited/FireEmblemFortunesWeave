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
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_1fd1588;
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* Layout_c148d0(_QWORD* a1, __int64* a2);
__int64* Layout_c14980(__int64* result);
_QWORD* wld_map_Layout_Internal_LoadMapModelFile_lambda0_Invoke(_QWORD* result,
                                                                __int64 a2);
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
__int64 Layout_c1bc40(__int64 result);
__int64 Layout_c1d3e0(__int64 result, _QWORD* a2);

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
      result = (char*)nn_mem_StandardAllocator_Free_alt1(*v5 + v21, v20);
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
    memmove(v10, a2, a3);
    *(_BYTE*)(v10 + a3) = 0;
    v11 = GameRoutine_c18dc0((_QWORD*)(a1 + 376), (unsigned __int8*)&v17_.v17);
    v12 = 128;
    if (*(_QWORD*)(*v9 + 200) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*v9 + v12);
    if (v11 == nullptr) {
      v13 = fw_memory_HeapManager_Allocate_alt1(*v9, v3, 16, 0);
      v17_.v18 = a3;
      v17_.v19 = v13;
      v17_.v17 = v8;
      memmove(v13, a2, a3);
      *(_BYTE*)(v13 + a3) = 0;
      v14 =
          GameRoutine_c18dc0((_QWORD*)(a1 + 416), (unsigned __int8*)&v17_.v17);
      v15 = 128;
      if (*(_QWORD*)(*v9 + 200) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(*v9 + v15);
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
  memcpy((char*)&v17_.v17 + 1, a2, a3);
  *((_BYTE*)&v17_.v17 + a3 + 1) = 0;
  if (GameRoutine_c18dc0((_QWORD*)(a1 + 376), (unsigned __int8*)&v17_.v17) !=
      nullptr) {
    return true;
  }
  LOBYTE(v17_.v17) = v7;
  memcpy((char*)&v17_.v17 + 1, a2, a3);
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
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v26);
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
            v86 = 1LL << -(char)__clz(v85 - 1);
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
                                      v28);
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
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v35);
              }
              if ((v96_.v96 & 1) != 0 && v96_.v98 != nullptr) {
                v36 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v36 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v36);
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
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v87);
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
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v48);
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
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v88);
            }
            if (((unsigned __int8)v106_.v106 & 1) != 0 &&
                v106_.v108 != nullptr) {
              v89 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v89 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v89);
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

__int64* Layout_c14980(__int64* result)
{
  __int64 v1;
  __int64 v2;

  v1 = *result;
  *result = 0;
  if (v1 != 0) {
    GameRoutine_ad69c0(v1);
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    return (__int64*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  return result;
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
  char* v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  char* v37;
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
  if (GameRoutine_c18f60(a1 + 47, &v44_.v44) != nullptr ||
      (a4 & 1) != 0 && GameRoutine_c18f60(a1 + 57, &v44_.v44) != nullptr) {
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
  memmove(v10, a2, a3);
  v10[a3] = 0;
  v46 = &v40_.v40;
  v12 = GameRoutine_c193c0(v9, (unsigned __int8*)&v40_.v40, &v46);
  if ((v40_.v40 & 1) != 0 && v40_.v42 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v13);
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
    std___1___shared_weak_count___release_weak(v17);
  }
  v18 = v46;
  v46 = nullptr;
  if (v18 != nullptr) {
    GameRoutine_ad69c0_alt1(v18);
    v19 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v19);
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
      memmove(v24, v23, v22);
    LABEL_46:
      *(_BYTE*)(v24 + v22) = 0;
      v25 = v21 + 3;
      goto LABEL_47;
    }
  LABEL_68:
    String_60a1d0();
  }
  v25 = Registration_64a850(a1 + 78, &v44_.v44);
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
    v32 = (char*)v27 - v31;
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
    v37 = &v32[v36];
    *(_QWORD*)v37 = v28;
    *((_QWORD*)v37 + 1) = v28;
    v30 = (__int64)&v32[v36 + 80];
    *((_QWORD*)v37 + 4) = 0;
    *((_QWORD*)v37 + 5) = 0;
    *((_QWORD*)v37 + 6) = 0;
    *((_QWORD*)v37 + 7) = 0;
    *((_QWORD*)v37 + 8) = 0;
    *((_QWORD*)v37 + 9) = 0;
    *((_QWORD*)v37 + 2) = &GameData_1a9f09e;
    *((_QWORD*)v37 + 3) = 0;
    memcpy(v36, v31, v32);
    a1[81] = v36;
    a1[82] = v30;
    a1[83] = v36 + 80 * v35;
    if (v31 != 0) {
      v38 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v38);
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

_QWORD* wld_map_Layout_Internal_LoadMapModelFile_lambda0_Invoke(_QWORD* result,
                                                                __int64 a2)
{
  _QWORD* v3;
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
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  if (*(_QWORD*)(*(_QWORD*)(a2 + 8) + 592LL) != 0) {
    v3 = result;
    GameRoutine_ad7390(a2);
    v4 = ResFile_5e5f00(*(_QWORD*)(*(_QWORD*)(a2 + 8) + 592LL));
    v5 = v3[1];
    v6 = *(unsigned __int16*)(v4 + 220);
    result = (_QWORD*)(v5 + 24);
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
              result =
                  (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v15);
            }
            v8 = v11;
          } while (v11 != v10);
        }
        *(_QWORD*)(v5 + 32) = v10;
      }
    }
    else {
      result = (_QWORD*)GameRoutine_c19a20(result, v6 - v9);
    }
    if ((_DWORD)v6 != 0) {
      v16 = 0;
      v17 = 0;
      v18 = fw_memory_g_heap_manager_ptr;
      do {
        result = X8CALL_X0(
            _QWORD*, GameRoutine_a97000((void*)&v23, a2, (unsigned int)v17));
        v19 = (_QWORD*)(*(_QWORD*)(v3[1] + 24LL) + v16);
        if (*v19 != 0) {
          v19[1] = *v19;
          if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
            v20 = 128;
          }
          else {
            v20 = 56;
          }
          result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v20);
          v19[1] = 0;
          v19[2] = 0;
          *v19 = 0;
        }
        *v19 = v23;
        v19[1] = v24;
        v19[2] = v25;
        v24 = 0;
        v25 = 0;
        v23 = 0;
        v19[3] = v26;
        if (v23 != 0) {
          v21 = *(_QWORD*)v18;
          v24 = v23;
          if (*(_QWORD*)(v21 + 200) != 0) {
            v22 = 128;
          }
          else {
            v22 = 56;
          }
          result = (_QWORD*)nn_mem_StandardAllocator_Free(v21 + v22);
        }
        ++v17;
        v16 += 32;
      } while (v6 != v17);
    }
  }
  return result;
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
            result =
                (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v20);
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
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v23 + v25);
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
        result = (_QWORD*)nn_mem_StandardAllocator_Free(v26 + v27);
      }
      ++v22;
      v21 += 32;
    } while (v10 != v22);
  }
  return result;
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

__int64 Layout_c1bc40(__int64 result)
{
  int v1;
  char* v2;
  int v3;
  bool v4;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  _QWORD* v22;
  __int64 v23;
  int v24;
  __int64 v25;
  int v26;
  int v27;

  v1 = *(_DWORD*)(result + 184);
  v2 = (char*)result;
  switch (v1) {
  case 3:
    if (*(_DWORD*)(*(_QWORD*)(result + 200) + 136LL) == 2) {
      result = Manager_c43b70(*(_QWORD*)(result + 8));
      if ((result & 1) != 0) {
        v12 = (unsigned __int8)v2[136];
        if ((v12 & 1) != 0) {
          v13 = *((_QWORD*)v2 + 18);
        }
        else {
          v13 = v12 >> 1;
        }
        if (v13 != 0) {
          v14 = *(_QWORD*)v2;
          v15 = *(_QWORD*)(*(_QWORD*)v2 + 392LL);
          if ((v12 & 1) != 0) {
            v16 = *((char**)v2 + 19);
          }
          else {
            v16 = v2 + 137;
          }
          v17 = *(unsigned int*)(v15 + 352);
          if ((int)v17 < 1) {
          LABEL_38:
            v27 = LightingAnimModule_c6c460(v15, v16, v13);
            v14 = *(_QWORD*)v2;
            LODWORD(v19) = v27;
          }
          else {
            v18 = (_QWORD*)(v15 + 272);
            v19 = 0;
            while (1) {
              v20 = *((unsigned __int8*)v18 - 16);
              v21 = *(v18 - 1);
              if ((v20 & 1) == 0) {
                v21 = v20 >> 1;
              }
              if (v13 == v21) {
                v22 =
                    (v20 & 1) != 0 ? (_QWORD*)*v18 : (_QWORD*)((char*)v18 - 15);
                if ((unsigned int)memcmp(v16, v22) == 0) {
                  break;
                }
              }
              ++v19;
              v18 += 3;
              if (v17 == v19) {
                goto LABEL_38;
              }
            }
          }
          *((_DWORD*)v2 + 100) = v19;
          LightingAnimModule_c6d940(*(_QWORD*)(v14 + 392), (unsigned int)v19,
                                    0xFFFFFFFFLL);
        }
        result = GameRoutine_b86ad0(*(_QWORD*)v2);
        *(_BYTE*)(*(_QWORD*)v2 + 224LL) = 0;
        *((_QWORD*)v2 + 23) = 4;
      }
    }
    break;
  case 2:
    v6 = *(__int64**)(result + 384);
    if (v6 != nullptr) {
      v7 = *v6;
      if (*v6 != 0 && v6[1] != 0) {
        v8 = *(_QWORD*)(result + 384);
        nn_os_AcquireReadLock(v7 + 696);
        v9 = *(_DWORD*)(v7 + 656);
        result = nn_os_ReleaseReadLock(v7 + 696);
        if ((v9 & 8) == 0) {
          return result;
        }
        v10 = *(_QWORD*)(v8 + 8);
        nn_os_AcquireReadLock(v10 + 696);
        v11 = *(_DWORD*)(v10 + 656);
        result = nn_os_ReleaseReadLock(v10 + 696);
        if ((v11 & 8) == 0) {
          return result;
        }
        v6 = *((__int64**)v2 + 48);
      }
    }
    result = GameRoutine_c1e830(v2, v6, 0);
    *((_DWORD*)v2 + 46) = 3;
    return result;
  case 1:
    v3 = *(_DWORD*)(result + 192);
    v4 = __OFSUB__(v3, 1);
    v5 = v3 - 1;
    if (v5 < 0 != v4) {
      v23 = *(_QWORD*)(result + 256);
      if (v23 == 0 ||
          (nn_os_AcquireReadLock(v23 + 696), v24 = *(_DWORD*)(v23 + 656),
           result = nn_os_ReleaseReadLock(v23 + 696), (v24 & 8) != 0)) {
        v25 = *((_QWORD*)v2 + 33);
        if (v25 == 0 ||
            (nn_os_AcquireReadLock(v25 + 696), v26 = *(_DWORD*)(v25 + 656),
             result = nn_os_ReleaseReadLock(v25 + 696), (v26 & 8) != 0)) {
          result = Layout_c1d3e0_alt1(v2, v2 + 256);
          *((_DWORD*)v2 + 46) = 2;
        }
      }
    }
    else {
      *(_DWORD*)(result + 192) = v5;
    }
    break;
  default:
    break;
  }
  return result;
}

__int64 Layout_c1d3e0(__int64 result, _QWORD* a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64* v4;
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
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  long double v19;
  unsigned __int64 v20;
  char* v21;
  __int64 v22;
  _BOOL4 v23;
  unsigned __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  _BOOL4 v29;
  __int64 v30;
  __int64 v31;
  long double v32;
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
  _QWORD* v45;
  atomic_ullong* v46;
  unsigned int v47;
  long double v48;
  unsigned int v49;
  long double v50;
  char v51;
  long double v52;
  float32x4_t v53;
  unsigned __int64 v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  long double v58;
  unsigned __int64 v59;
  char* v60;
  char v61;
  __int64 v62;
  char v63;
  char* v64;
  char* v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  char* v68;
  char v69;
  __int64 v70;
  char* v71;
  unsigned __int64 v72;
  long double v73;
  __int64 v74;
  char v75;
  __int64 v76;
  __int64 v77;
  char* v78;
  char* v79;
  unsigned __int64 v80;
  __int64 v81;
  long double v82;
  __int64 v83;
  char v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  char* v88;
  char* v89;
  unsigned __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  bool v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  char* v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  _DWORD* v108;
  unsigned __int64 v109;
  __int64 v110;
  __int64 v111;
  bool v112;
  __int64 v113;
  _QWORD* v114;
  unsigned __int64 v115;
  _QWORD* v116;
  __int64 v117;
  __int64 v118;
  const char* v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  long double v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  long double v128;
  __int64 v129;
  _QWORD* v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  long double v136;
  __int64* v137;
  char v138;
  __int64 v139;
  __int64 v140;
  long double v141;
  long double v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  unsigned __int64 v146;
  int v147;
  char v148[4];
  int v149;
  _QWORD v150[7];
  __int16 v151;
  int v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  unsigned __int64 v156;
  char* v157;
  unsigned __int64 v158;
  unsigned __int64 v159;
  char* v160;
  __int64 v161[2];

  v2 = a2;
  v3 = (_QWORD*)*a2;
  if (v3 == nullptr) {
    return result;
  }
  v4 = (__int64*)result;
  v5 = *(_QWORD*)(result + 24);
  if (v5 == 0) {
    v7 = 0;
    v8 = 0;
    if (v3[74] == 0) {
      goto LABEL_327;
    }
  LABEL_6:
    v9 = v2[1];
    if (v9 != 0 && (v10 = *(_QWORD*)(v9 + 592)) != 0 &&
        GameRoutine_5fc1f0(v10) != 0) {
      v11 = GameRoutine_5fc1f0(*(_QWORD*)(v9 + 592));
    }
    else {
      v11 = 0;
    }
    v3 = (_QWORD*)*v2;
    v12 = *(_QWORD*)(*v2 + 592LL);
    if (v12 == 0) {
      goto LABEL_327;
    }
    v13 = *v4;
    v150[6] = 0;
    v152 = 0;
    v150[4] = -1;
    v150[5] = 0;
    v151 = 257;
    v131 = v13;
    v132 = v8;
    v14 = v3[72];
    v153 = v12;
    v154 = v14;
    v150[0] = GameData_212ce30 + 2;
    __builtin_memset(&v150[1], 0, 24);
    v15 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         544, 16, 0);
    *(_QWORD*)v16 = 0;
    *(_BYTE*)(v16 + 12) = 0;
    *(_DWORD*)(v16 + 8) = -1;
    *(_QWORD*)(v16 + 16) = v16 + 32;
    *(_QWORD*)(v16 + 24) = v16 + 32;
    GameRoutine_1fa0();
    GameRoutine_1fd0(v16, v150);
    v17 = fw_memory_HeapManager_Allocate(*v15, 12, 16, 0);
    *(_QWORD*)v17 = 0;
    *(_DWORD*)(v17 + 8) = 0;
    Value_2500(v16, v17, 12);
    GameRoutine_21c0(v16, &v149);
    v133 = v17;
    v18 = strlen(v17);
    if (v18 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_331;
    }
    v20 = v18;
    if (v18 >= 0x17) {
      if ((v18 | 7) == 0x17) {
        v22 = 26;
      }
      else {
        v22 = (v18 | 7) + 1;
      }
      v21 = (char*)fw_memory_HeapManager_Allocate(*v15, v22, 16, 0);
      v159 = v20;
      v160 = v21;
      v158 = v22 | 1;
    }
    else {
      LOBYTE(v158) = 2 * v18;
      v21 = (char*)&v158 + 1;
      if (v18 == 0) {
      LABEL_21:
        v21[v20] = 0;
        v23 = false;
        v24 = v159;
        if ((v158 & 1) == 0) {
          v24 = (unsigned __int64)(unsigned __int8)v158 >> 1;
        }
        if (v24 == 11) {
          v25 = (__int64*)v160;
          if ((v158 & 1) == 0) {
            v25 = (__int64*)((char*)&v158 + 1);
          }
          v26 = *v25;
          v27 = *(__int64*)((char*)v25 + 3);
          v23 = v26 == 0x6E694265626F7250LL && v27 == 0x7972616E69426562LL;
        }
        v29 = v149 > 3 && v23;
        if ((v158 & 1) != 0 && v160 != nullptr) {
          v30 = 128;
          if (*(_QWORD*)(*v15 + 200LL) == 0) {
            v30 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v15 + v30, v19);
        }
        if (v29) {
          v31 = *(_QWORD*)(v7 + 288);
          v130 = v2;
          GameRoutine_b31800(v31 + 736, 255);
          v134 = v31;
          *(_QWORD*)(v31 + 816) = *(_QWORD*)(v31 + 808);
          GameRoutine_21c0(v16, v148);
          v147 = 0;
          GameRoutine_21c0(v16, &v147);
          GameRoutine_2360(v16, &v146);
          if (v146 != 0) {
            v33 = 0;
            v136 = v32;
            v141 = v32;
            v135 = v11;
            v137 = GameData_212e918[0] + 2;
            v138 = 1;
            while (1) {
              GameRoutine_2360(v16, &v145);
              v35 = v145;
              v36 = fw_memory_HeapManager_Allocate(*v15, v145, 16, 0);
              memset(v36, 0, v35, v37, v38, v39);
              v143 = v36;
              Value_2500(v16, v36, v35);
              v40 = fw_memory_HeapManager_Allocate(*v15, 296, 16, 0);
              *(_QWORD*)(v40 + 16) = 0;
              *(_QWORD*)(v40 + 8) = 0;
              *(_QWORD*)v40 = v137;
              memset(v40 + 24, 0, 272, v41, v42, v43);
              *(_QWORD*)(v40 + 112) = 0;
              *(_QWORD*)(v40 + 120) = 0;
              *(_QWORD*)(v40 + 128) = 0;
              *(_QWORD*)(v40 + 136) = 0;
              *(_QWORD*)(v40 + 36) = 0x3F0000003F000000LL;
              *(_QWORD*)(v40 + 44) = 0x3F0000003F000000LL;
              *(_QWORD*)(v40 + 52) = 0x3F0000003F000000LL;
              *(_QWORD*)(v40 + 60) = 0x3F0000003F000000LL;
              v44 = (_QWORD*)(v40 + 60);
              *(_QWORD*)(v40 + 76) = 0x3F0000003F000000LL;
              *(_DWORD*)(v40 + 68) = 1056964608;
              *(_QWORD*)(v40 + 84) = 0xBF0000003F000000LL;
              *(_QWORD*)(v40 + 92) = 0xBF000000BF000000LL;
              *(_DWORD*)(v40 + 104) = 64;
              *(_DWORD*)(v40 + 144) = -1;
              *(_DWORD*)(v40 + 160) = -1;
              *(_DWORD*)(v40 + 176) = -1;
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 24) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 28) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 32) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 36) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 40) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 44) = v158;
              }
              v45 = (_QWORD*)(v40 + 48);
              if (v149 < 4) {
                if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                  v47 = -1;
                }
                else {
                  v47 = 0;
                }
                v48 = v141;
                LODWORD(v48) = v158;
                *(int8x8_t*)&v48 = vbsl_s8(vdup_n_s32(v47), *(int8x8_t*)&v48,
                                           *(int8x8_t*)&v141);
                v142 = v48;
                if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                  v49 = -1;
                }
                else {
                  v49 = 0;
                }
                v50 = v142;
                DWORD1(v50) = v158;
                *(int8x8_t*)&v50 = vbsl_s8(vdup_n_s32(v49), *(int8x8_t*)&v50,
                                           *(int8x8_t*)&v142);
                v141 = v50;
                v51 = GameRoutine_21c0(v16, &v158);
                v52 = v136;
                LANES128(v53).n128_u64[0] = *(_QWORD*)&v141;
                if ((v51 & 1) != 0) {
                  LODWORD(v52) = v158;
                }
                v136 = v52;
                v54 = LODWORD(v52);
                LANES128(v55).n128_u64[0] = *(_QWORD*)(v40 + 36);
                LANES128(v53).n128_u64[1] = v54;
                LANES128(v55).n128_u64[1] = *(unsigned int*)(v40 + 44);
                v56 = vmaxq_f32(vsubq_f32(v53, v55), COERCE_AS(float32x4_t, 0));
                LANES128(v55).n128_u64[0] = 0x3F0000003F000000LL;
                LANES128(v55).n128_u64[1] = 0x3F0000003F000000LL;
                v57 = vmulq_f32(v56, v55);
                *(_QWORD*)(v40 + 48) = LANES128(v57).n128_u64[0];
                *(_DWORD*)(v40 + 56) = LANES128(v57).n128_u32[2];
                *v44 = *v45;
                v46 = (atomic_ullong*)(v40 + 8);
                *(_DWORD*)(v40 + 68) = *(_DWORD*)(v40 + 56);
              }
              else {
                if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                  *(_DWORD*)v45 = v158;
                }
                if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                  *(_DWORD*)(v40 + 52) = v158;
                }
                v46 = (atomic_ullong*)(v40 + 8);
                if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                  *(_DWORD*)(v40 + 56) = v158;
                }
                if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                  *(_DWORD*)v44 = v158;
                }
                if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                  *(_DWORD*)(v40 + 64) = v158;
                }
                if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                  *(_DWORD*)(v40 + 68) = v158;
                }
              }
              GameRoutine_21c0(v16, v40 + 72);
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 76) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 80) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 84) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 88) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 92) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 96) = v158;
              }
              if (v149 < 5) {
                *(_DWORD*)(v40 + 100) = 0;
              }
              else {
                GameRoutine_21c0(v16, v40 + 100);
              }
              GameRoutine_21c0(v16, v40 + 104);
              *(_BYTE*)(v40 + 108) = (_DWORD)v33 == v147;
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 112) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 116) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 120) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 124) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 128) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 132) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 184) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 188) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 192) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 196) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 200) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 204) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 208) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 212) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 216) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 220) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 224) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 228) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 232) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 236) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 240) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 244) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 248) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 252) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 256) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 260) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 264) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 268) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 272) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 276) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 280) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 284) = v158;
              }
              if ((GameRoutine_21c0(v16, &v158) & 1) != 0) {
                *(_DWORD*)(v40 + 288) = v158;
              }
              v18 = strlen(v143);
              atomic_fetch_add_explicit(v46, 1u, memory_order_relaxed);
              if (v11 == 0) {
                v61 = 0;
                if (atomic_fetch_add(v46, 0xFFFFFFFFFFFFFFFFLL) != 0) {
                  goto LABEL_262;
                }
              LABEL_261:
                (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
                std___1___shared_weak_count___release_weak(v40);
                goto LABEL_262;
              }
              v59 = v18;
              v161[0] = v11;
              if (v18 >= 0xFFFFFFFFFFFFFFF7LL) {
                goto LABEL_331;
              }
              v140 = v33;
              if (v18 >= 0x17) {
                break;
              }
              v60 = (char*)&v158 + 1;
              LOBYTE(v158) = 2 * v18;
              if (v18 != 0) {
                goto LABEL_173;
              }
            LABEL_174:
              v60[v59] = 0;
              v63 = v158;
              v64 = v160;
              if ((v158 & 1) != 0) {
                v65 = v160;
              }
              else {
                v65 = (char*)&v158 + 1;
              }
              if ((v158 & 1) != 0) {
                v66 = v159;
              }
              else {
                v66 = (unsigned __int64)(unsigned __int8)v158 >> 1;
              }
              v67 = v66 + 3;
              if (v66 + 3 >= 0xFFFFFFFFFFFFFFF7LL) {
                goto LABEL_331;
              }
              if (v67 >= 0x17) {
                if ((v67 | 7) == 0x17) {
                  v70 = 26;
                }
                else {
                  v70 = (v67 | 7) + 1;
                }
                v68 = (char*)fw_memory_HeapManager_Allocate(*v15, v70, 16, 0);
                v156 = v66 + 3;
                v157 = v68;
                v155 = v70 | 1;
              }
              else {
                v68 = (char*)&v155 + 1;
                v156 = 0;
                v157 = nullptr;
                v155 = (unsigned __int8)(2 * v67);
                if (v66 == 0) {
                  v68 = (char*)&v155 + 1;
                  v69 = 1;
                  goto LABEL_189;
                }
              }
              memmove(v68, v65, v66);
              v69 = 0;
            LABEL_189:
              *(_DWORD*)&v68[v66] = 4407903;
              if ((v155 & 1) != 0) {
                v71 = v157;
              }
              else {
                v71 = (char*)&v155 + 1;
              }
              if ((v155 & 1) != 0) {
                v72 = v156;
              }
              else {
                v72 = (unsigned __int64)(unsigned __int8)v155 >> 1;
              }
              v139 = g3d_a6c880(v161, (__int64)v71, v72, v58);
              if ((v155 & 1) != 0 && v157 != nullptr) {
                v74 = 128;
                if (*(_QWORD*)(*v15 + 200LL) == 0) {
                  v74 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*v15 + v74, v73);
              }
              if (v67 > 0x16) {
                if ((v67 | 7) == 0x17) {
                  v77 = 26;
                }
                else {
                  v77 = (v67 | 7) + 1;
                }
                v76 = fw_memory_HeapManager_Allocate(*v15, v77, 16, 0);
                v156 = v66 + 3;
                v157 = (char*)v76;
                v155 = v77 | 1;
                v75 = v77 | 1;
              }
              else {
                v75 = 2 * v67;
                v76 = 0;
                v156 = 0;
                v157 = nullptr;
                v155 = (unsigned __int8)(2 * v67);
              }
              if ((v75 & 1) != 0) {
                v78 = (char*)v76;
              }
              else {
                v78 = (char*)&v155 + 1;
              }
              if ((v69 & 1) == 0) {
                memmove(v78, v65, v66);
              }
              *(_DWORD*)&v78[v66] = 5066335;
              if ((v155 & 1) != 0) {
                v79 = v157;
              }
              else {
                v79 = (char*)&v155 + 1;
              }
              if ((v155 & 1) != 0) {
                v80 = v156;
              }
              else {
                v80 = (unsigned __int64)(unsigned __int8)v155 >> 1;
              }
              v81 = g3d_a6c880(v161, (__int64)v79, v80, v73);
              if ((v155 & 1) != 0 && v157 != nullptr) {
                v83 = 128;
                if (*(_QWORD*)(*v15 + 200LL) == 0) {
                  v83 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*v15 + v83, v82);
              }
              if (v67 > 0x16) {
                v86 = *v15;
                if ((v67 | 7) == 0x17) {
                  v87 = 26;
                }
                else {
                  v87 = (v67 | 7) + 1;
                }
                v85 = fw_memory_HeapManager_Allocate(v86, v87, 16, 0);
                v156 = v66 + 3;
                v157 = (char*)v85;
                v155 = v87 | 1;
                v84 = v87 | 1;
              }
              else {
                v84 = 2 * v67;
                v85 = 0;
                v156 = 0;
                v157 = nullptr;
                v155 = (unsigned __int8)(2 * v67);
              }
              if ((v84 & 1) != 0) {
                v88 = (char*)v85;
              }
              else {
                v88 = (char*)&v155 + 1;
              }
              if ((v69 & 1) == 0) {
                memmove(v88, v65, v66);
              }
              *(_DWORD*)&v88[v66] = 5067615;
              if ((v155 & 1) != 0) {
                v89 = v157;
              }
              else {
                v89 = (char*)&v155 + 1;
              }
              if ((v155 & 1) != 0) {
                v90 = v156;
              }
              else {
                v90 = (unsigned __int64)(unsigned __int8)v155 >> 1;
              }
              v91 = g3d_a6c880(v161, (__int64)v89, v90, v82);
              v15 = (_QWORD*)fw_memory_g_heap_manager_ptr;
              if ((v155 & 1) != 0 && v157 != nullptr) {
                v92 = v91;
                v93 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v93 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v93, v58);
                v91 = v92;
              }
              v33 = v140;
              v46 = (atomic_ullong*)(v40 + 8);
              v95 = v139 == 0 || v81 == 0 || v91 == 0;
              v61 = !v95;
              if (!v95) {
                v96 = *(_QWORD*)(*(_QWORD*)(v139 + 128) + 8LL);
                *(_DWORD*)(v40 + 144) = *(_QWORD*)(v139 + 144);
                *(_QWORD*)(v40 + 136) = v96;
                v97 = *(_QWORD*)(*(_QWORD*)(v81 + 128) + 8LL);
                *(_DWORD*)(v40 + 160) = *(_QWORD*)(v81 + 144);
                *(_QWORD*)(v40 + 152) = v97;
                v98 = *(_QWORD*)(*(_QWORD*)(v91 + 128) + 8LL);
                *(_DWORD*)(v40 + 176) = *(_QWORD*)(v91 + 144);
                *(_QWORD*)(v40 + 168) = v98;
              }
              if ((v63 & 1) != 0 && v64 != nullptr) {
                v99 = 128;
                if (*(_QWORD*)(*v15 + 200LL) == 0) {
                  v99 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*v15 + v99, v58);
              }
              v11 = v135;
              if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                goto LABEL_261;
              }
            LABEL_262:
              if ((v61 & 1) != 0) {
                v158 = v40 + 24;
                v159 = v40;
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 8),
                                          1u, memory_order_relaxed);
                GameRoutine_b310e0(v134 + 736, &v158);
                v100 = v159;
                if (v159 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v159 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(unsigned __int64))(*(_QWORD*)v100 + 16LL))(v100);
                  std___1___shared_weak_count___release_weak(v100);
                }
                v138 &= *(_BYTE*)(v40 + 108) ^ 1;
                if (atomic_fetch_add(v46, 0xFFFFFFFFFFFFFFFFLL) != 0) {
                  goto LABEL_44;
                }
              LABEL_267:
                (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
                std___1___shared_weak_count___release_weak(v40);
                goto LABEL_44;
              }
              if (atomic_fetch_add(v46, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                goto LABEL_267;
              }
            LABEL_44:
              v34 = 128;
              if (*(_QWORD*)(*v15 + 200LL) == 0) {
                v34 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v15 + v34, v58);
              if (++v33 >= v146) {
                goto LABEL_283;
              }
            }
            if ((v18 | 7) == 0x17) {
              v62 = 26;
            }
            else {
              v62 = (v18 | 7) + 1;
            }
            v60 = (char*)fw_memory_HeapManager_Allocate(*v15, v62, 16, 0);
            v159 = v59;
            v160 = v60;
            v158 = v62 | 1;
          LABEL_173:
            v18 = memcpy(v60, v143, v59);
            goto LABEL_174;
          }
          v138 = 1;
        LABEL_283:
          v2 = v130;
          if (v149 > 5) {
            v105 = GameRoutine_2360(v16, &v158);
            if (v158 != 0) {
              if (v158 >= 0x2C8590B21642C86LL) {
                GameRoutine_b31b50(v105);
              }
              v106 = 92 * v158;
              v107 = fw_memory_HeapManager_Allocate(*v15, 92 * v158, 16, 0);
              v108 = (_DWORD*)v107;
              v109 = (v106 - 92) / 0x5CuLL;
              v110 = v107;
              if ((~(_BYTE)v109 & 7) != 0) {
                v111 = -(__int64)(((_BYTE)v109 + 1) & 7);
                v110 = v107;
                do {
                  *(_DWORD*)(v110 + 72) = 0;
                  *(_QWORD*)(v110 + 56) = 0;
                  *(_QWORD*)(v110 + 64) = 0;
                  v112 = __CFADD__(v111++, 1);
                  *(_QWORD*)(v110 + 40) = 0;
                  *(_QWORD*)(v110 + 48) = 0;
                  *(_QWORD*)(v110 + 24) = 0;
                  *(_QWORD*)(v110 + 32) = 0;
                  *(_QWORD*)(v110 + 8) = 0;
                  *(_QWORD*)(v110 + 16) = 0;
                  *(_QWORD*)v110 = 0;
                  *(_QWORD*)(v110 + 76) = 0x3F0000003F000000LL;
                  *(_QWORD*)(v110 + 84) = 0x3F0000003F000000LL;
                  v110 += 92;
                } while (!v112);
              }
              v113 = v107 + v106;
              if ((unsigned __int64)(v106 - 92) >= 0x284) {
                do {
                  *(_QWORD*)(v110 + 48) = 0;
                  *(_QWORD*)(v110 + 56) = 0;
                  *(_QWORD*)(v110 + 32) = 0;
                  *(_QWORD*)(v110 + 40) = 0;
                  *(_QWORD*)(v110 + 16) = 0;
                  *(_QWORD*)(v110 + 24) = 0;
                  *(_QWORD*)v110 = 0;
                  *(_QWORD*)(v110 + 8) = 0;
                  *(_QWORD*)(v110 + 64) = 0;
                  *(_QWORD*)(v110 + 72) = 0x3F00000000000000LL;
                  *(_QWORD*)(v110 + 80) = 0x3F0000003F000000LL;
                  *(_DWORD*)(v110 + 88) = 1056964608;
                  *(_QWORD*)(v110 + 92) = 0;
                  *(_QWORD*)(v110 + 100) = 0;
                  *(_QWORD*)(v110 + 108) = 0;
                  *(_QWORD*)(v110 + 116) = 0;
                  *(_QWORD*)(v110 + 260) = 0x3F0000003F000000LL;
                  *(_QWORD*)(v110 + 124) = 0;
                  *(_QWORD*)(v110 + 132) = 0;
                  *(_QWORD*)(v110 + 140) = 0;
                  *(_QWORD*)(v110 + 148) = 0;
                  *(_QWORD*)(v110 + 156) = 0;
                  *(_DWORD*)(v110 + 164) = 0;
                  *(_QWORD*)(v110 + 168) = 0x3F0000003F000000LL;
                  *(_QWORD*)(v110 + 176) = 0x3F0000003F000000LL;
                  *(_DWORD*)(v110 + 256) = 0;
                  *(_QWORD*)(v110 + 240) = 0;
                  *(_QWORD*)(v110 + 248) = 0;
                  *(_QWORD*)(v110 + 224) = 0;
                  *(_QWORD*)(v110 + 232) = 0;
                  *(_QWORD*)(v110 + 208) = 0;
                  *(_QWORD*)(v110 + 216) = 0;
                  *(_QWORD*)(v110 + 192) = 0;
                  *(_QWORD*)(v110 + 200) = 0;
                  *(_QWORD*)(v110 + 184) = 0;
                  *(_QWORD*)(v110 + 268) = 0x3F0000003F000000LL;
                  v114 = (_QWORD*)(v110 + 276);
                  *(_DWORD*)(v110 + 348) = 0;
                  *(_QWORD*)(v110 + 352) = 0x3F0000003F000000LL;
                  *(_QWORD*)(v110 + 360) = 0x3F0000003F000000LL;
                  *(_DWORD*)(v110 + 440) = 0;
                  *(_QWORD*)(v110 + 424) = 0;
                  *(_QWORD*)(v110 + 432) = 0;
                  *(_QWORD*)(v110 + 408) = 0;
                  *(_QWORD*)(v110 + 416) = 0;
                  *(_QWORD*)(v110 + 392) = 0;
                  *(_QWORD*)(v110 + 400) = 0;
                  *(_QWORD*)(v110 + 376) = 0;
                  *(_QWORD*)(v110 + 384) = 0;
                  *(_QWORD*)(v110 + 368) = 0;
                  *(_DWORD*)(v110 + 532) = 0;
                  *(_QWORD*)(v110 + 536) = 0x3F0000003F000000LL;
                  *(_QWORD*)(v110 + 544) = 0x3F0000003F000000LL;
                  *(_DWORD*)(v110 + 624) = 0;
                  *(_QWORD*)(v110 + 616) = 0;
                  *(_QWORD*)(v110 + 608) = 0;
                  *(_QWORD*)(v110 + 600) = 0;
                  *(_QWORD*)(v110 + 592) = 0;
                  *(_QWORD*)(v110 + 584) = 0;
                  *(_QWORD*)(v110 + 576) = 0;
                  *(_QWORD*)(v110 + 568) = 0;
                  *(_QWORD*)(v110 + 560) = 0;
                  *(_QWORD*)(v110 + 552) = 0;
                  *(_DWORD*)(v110 + 716) = 0;
                  *(_QWORD*)(v110 + 720) = 0x3F0000003F000000LL;
                  *(_QWORD*)(v110 + 728) = 0x3F0000003F000000LL;
                  v110 += 736;
                  v114[7] = 0;
                  v114[8] = 0;
                  v114[5] = 0;
                  v114[6] = 0;
                  v114[3] = 0;
                  v114[4] = 0;
                  v114[1] = 0;
                  v114[2] = 0;
                  *v114 = 0;
                  v114[21] = 0x3F0000003F000000LL;
                  v114[22] = 0x3F0000003F000000LL;
                  v114[30] = 0;
                  v114[31] = 0;
                  v114[28] = 0;
                  v114[29] = 0;
                  v114[26] = 0;
                  v114[27] = 0;
                  v114[24] = 0;
                  v114[25] = 0;
                  v114[23] = 0;
                  v114[44] = 0x3F0000003F000000LL;
                  v114[45] = 0x3F0000003F000000LL;
                  v114[53] = 0;
                  v114[54] = 0;
                  v114[51] = 0;
                  v114[52] = 0;
                  v114[49] = 0;
                  v114[50] = 0;
                  v114[47] = 0;
                  v114[48] = 0;
                  v114[46] = 0;
                } while (v110 != v113);
              }
              v144 = v107;
              v115 = 0;
              v116 = (_QWORD*)fw_memory_g_heap_manager_ptr;
              do {
                GameRoutine_2360(v16, &v155);
                v118 = v155;
                v119 = (const char*)fw_memory_HeapManager_Allocate(*v116, v155,
                                                                   16, 0);
                memset(v119, 0, v118, v120, v121, v122);
                Value_2500(v16, v119, v118);
                nn_util_SNPrintf(v108, 64, "%s", v119);
                if ((GameRoutine_21c0(v16, v161) & 1) != 0) {
                  v108[16] = v161[0];
                }
                if ((GameRoutine_21c0(v16, v161) & 1) != 0) {
                  v108[17] = v161[0];
                }
                if ((GameRoutine_21c0(v16, v161) & 1) != 0) {
                  v108[18] = v161[0];
                }
                if ((GameRoutine_21c0(v16, v161) & 1) != 0) {
                  v108[19] = v161[0];
                }
                if ((GameRoutine_21c0(v16, v161) & 1) != 0) {
                  v108[20] = v161[0];
                }
                if ((GameRoutine_21c0(v16, v161) & 1) != 0) {
                  v108[21] = v161[0];
                }
                if ((GameRoutine_21c0(v16, v161) & 1) != 0) {
                  LODWORD(v123) = v161[0];
                  v108[22] = v161[0];
                }
                v116 = (_QWORD*)fw_memory_g_heap_manager_ptr;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) != 0) {
                  v117 = 128;
                }
                else {
                  v117 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v117, v123);
                ++v115;
                v108 += 23;
              } while (v115 < v158);
              v2 = v130;
              v124 = v144;
            }
            else {
              v124 = 0;
              v113 = 0;
            }
            GameRoutine_b31990(v134 + 808, v124, v113,
                               0xD37A6F4DE9BD37A7LL * ((v113 - v124) >> 2));
            if (v124 != 0) {
              v125 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v125 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v125, v32);
            }
            v15 = (_QWORD*)fw_memory_g_heap_manager_ptr;
          }
          if ((v138 & 1) != 0) {
            GameRoutine_b81e20(v131);
          }
        LABEL_320:
          v126 = *v15;
          *(_QWORD*)v16 = 0;
          if (*(_QWORD*)(v126 + 200) != 0) {
            v127 = 128;
          }
          else {
            v127 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(v126 + v127, v32);
          if (*(_QWORD*)(*v15 + 200LL) != 0) {
            v129 = 128;
          }
          else {
            v129 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v15 + v129, v128);
          (*(void (**)(_QWORD*))(v150[0] + 24LL))(v150);
          v3 = (_QWORD*)*v2;
          v8 = v132;
          goto LABEL_327;
        }
        v18 = strlen(v133);
        if (v18 < 0xFFFFFFFFFFFFFFF7LL) {
          v101 = v18;
          if (v18 >= 0x17) {
            if ((v18 | 7) == 0x17) {
              v103 = 26;
            }
            else {
              v103 = (v18 | 7) + 1;
            }
            v102 = (char*)fw_memory_HeapManager_Allocate(*v15, v103, 16, 0);
            v160 = v102;
            v158 = v103 | 1;
          }
          else {
            LOBYTE(v158) = 2 * v18;
            v102 = (char*)&v158 + 1;
            if (v18 == 0) {
              goto LABEL_277;
            }
          }
          memcpy(v102, v133, v101);
        LABEL_277:
          v102[v101] = 0;
          if ((v158 & 1) != 0 && v160 != nullptr) {
            v104 = 128;
            if (*(_QWORD*)(*v15 + 200LL) == 0) {
              v104 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v15 + v104, v32);
          }
          goto LABEL_320;
        }
      LABEL_331:
        String_60a1d0_alt1(v18);
      }
    }
    memcpy(v21, v133, v20);
    goto LABEL_21;
  }
  v6 = std___1___shared_weak_count_lock(v5);
  v7 = v4[2];
  v3 = (_QWORD*)*v2;
  v8 = v6;
  if (*(_QWORD*)(*v2 + 592LL) != 0) {
    goto LABEL_6;
  }
LABEL_327:
  result = GameRoutine_634d80(v3[1], v3);
  *v2 = 0;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

#pragma GCC visibility pop
