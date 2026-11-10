#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a680(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_634d80(_QWORD);
__int64 GameRoutine_6b7f00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c48320(_QWORD, _QWORD);
__int64 GameRoutine_c6a240(_QWORD, _QWORD, _QWORD);
__int64 LightingAnimModule_c65df0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD, _QWORD);
__int64 LightingAnimModule_c687a0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_AcquireReadLock(_QWORD);
__int64 nn_os_ReleaseReadLock(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
extern __int128 GameData_1a82c50;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
unsigned __int64 GameRoutine_c3fae0(unsigned __int64 result, __int64, __int64,
                                    __int64, __int64, char);
void __attribute__((noreturn)) GameRoutine_c47570(void);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 Manager_c439a0(_QWORD* a1);
unsigned __int64 Manager_c444d0(unsigned __int64 result, int a2);
unsigned __int64 Manager_c44560(unsigned __int64 result, int a2);
__int64 Manager_c445f0_alt1(__int64 result, __int64 a2, unsigned __int64 a3,
                            __int64 a4,
                            unsigned __int64 a5) __asm__("Manager_c445f0");
__int64 Manager_c45700(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                       __int64 a5, __int64 a6, unsigned __int64 a7, __int64 a8,
                       __int64 a9, unsigned __int64 a10, __int64 a11,
                       unsigned __int64 a12, __int64 a13, unsigned __int64 a14);
__int64 Manager_c46910(__int64 result);
__int64* Manager_c46bf0(_QWORD* a1, __int64 a2, unsigned __int64 a3);
__int64 Manager_c47290(__int64 result);
_QWORD* Manager_c473c0(__int64 a1, __int64* a2);
__int64* Manager_c475a0(__int64* result, _QWORD* a2);
__int64 Manager_c477c0(__int64 result);
_QWORD* Manager_c47c80(_QWORD* result, char** a2);
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64
GameRoutine_1a0a680_alt1(__int64, unsigned __int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a0a680");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Manager_c445f0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4,
                    unsigned __int64 a5);

__int64 Manager_c439a0(_QWORD* a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v4;
  int v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  int v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  int v13;

  v1 = (__int64*)a1[3];
  v2 = (__int64*)a1[4];
  while (v1 != v2) {
    v4 = *v1;
    if (*v1 != 0) {
      nn_os_AcquireReadLock(v4 + 696);
      v5 = *(_DWORD*)(v4 + 656);
      nn_os_ReleaseReadLock(v4 + 696);
      if ((v5 & 8) == 0) {
        return 0;
      }
    }
    ++v1;
  }
  v6 = (__int64*)a1[6];
  v7 = (__int64*)a1[7];
  while (v6 != v7) {
    v8 = *v6;
    if (*v6 != 0) {
      nn_os_AcquireReadLock(v8 + 696);
      v9 = *(_DWORD*)(v8 + 656);
      nn_os_ReleaseReadLock(v8 + 696);
      if ((v9 & 8) == 0) {
        return 0;
      }
    }
    ++v6;
  }
  v11 = (__int64*)a1[9];
  v10 = (__int64*)a1[10];
  while (v11 != v10) {
    v12 = *v11;
    if (*v11 != 0) {
      nn_os_AcquireReadLock(v12 + 696);
      v13 = *(_DWORD*)(v12 + 656);
      nn_os_ReleaseReadLock(v12 + 696);
      if ((v13 & 8) == 0) {
        return 0;
      }
    }
    ++v11;
  }
  return 1;
}

unsigned __int64 Manager_c444d0(unsigned __int64 result, int a2)
{
  int v2;
  unsigned __int64 v3;
  bool v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  if (*(_DWORD*)(result + 16) != a2) {
    v2 = *(_DWORD*)(result + 8);
    if ((unsigned int)(v2 - 2) >= 2) {
      if (v2 != 5) {
        *(_DWORD*)(result + 16) = a2;
        return result;
      }
      *(_DWORD*)(result + 16) = a2;
    }
    else {
      *(_DWORD*)(result + 16) = a2;
      *(_DWORD*)(result + 8) = 5;
    }
    v3 = *(unsigned __int8*)(result + 24);
    v4 = (v3 & 1) == 0;
    v5 = v3 >> 1;
    if (v4) {
      v6 = v5;
    }
    else {
      v6 = *(_QWORD*)(result + 32);
    }
    v7 = *(unsigned __int8*)(result + 48);
    if (v4) {
      v8 = result + 25;
    }
    else {
      v8 = *(_QWORD*)(result + 40);
    }
    v9 = (v7 & 1) == 0;
    v10 = v7 >> 1;
    if (v9) {
      v11 = result + 49;
    }
    else {
      v11 = *(_QWORD*)(result + 64);
    }
    if (v9) {
      v12 = v10;
    }
    else {
      v12 = *(_QWORD*)(result + 56);
    }
    return GameRoutine_c3fae0(result, v8, v6, v11, v12, 0);
  }
  return result;
}

unsigned __int64 Manager_c44560(unsigned __int64 result, int a2)
{
  int v2;
  unsigned __int64 v3;
  bool v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  if (*(_DWORD*)(result + 20) != a2) {
    v2 = *(_DWORD*)(result + 8);
    if ((unsigned int)(v2 - 2) >= 2) {
      if (v2 != 5) {
        *(_DWORD*)(result + 20) = a2;
        return result;
      }
      *(_DWORD*)(result + 20) = a2;
    }
    else {
      *(_DWORD*)(result + 20) = a2;
      *(_DWORD*)(result + 8) = 5;
    }
    v3 = *(unsigned __int8*)(result + 24);
    v4 = (v3 & 1) == 0;
    v5 = v3 >> 1;
    if (v4) {
      v6 = v5;
    }
    else {
      v6 = *(_QWORD*)(result + 32);
    }
    v7 = *(unsigned __int8*)(result + 48);
    if (v4) {
      v8 = result + 25;
    }
    else {
      v8 = *(_QWORD*)(result + 40);
    }
    v9 = (v7 & 1) == 0;
    v10 = v7 >> 1;
    if (v9) {
      v11 = result + 49;
    }
    else {
      v11 = *(_QWORD*)(result + 64);
    }
    if (v9) {
      v12 = v10;
    }
    else {
      v12 = *(_QWORD*)(result + 56);
    }
    return GameRoutine_c3fae0(result, v8, v6, v11, v12, 1);
  }
  return result;
}

void Manager_c445f0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4,
                    unsigned __int64 a5)
{
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  const char* v22;
  unsigned __int64 v23;
  __int64* v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  struct {
    _QWORD v35[2];
    char* v36;
  } v35_;
  struct {
    _QWORD v37[2];
    __int64 v38;
  } v37_;
  struct {
    __int64 v39;
    unsigned __int64 v40;
    __int64 v41;
  } v39_;
  struct {
    __int64 v42;
    unsigned __int64 v43;
    const char* v44;
  } v42_;

  if (a3 == 0) {
    *(_WORD*)a1 = 0;
    return;
  }
  if (a5 != 0) {
    if (a5 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_51;
    }
    if (a5 >= 0x17) {
      v10 = a4;
      if ((a5 | 7) == 0x17) {
        v11 = 26;
      }
      else {
        v11 = (a5 | 7) + 1;
      }
      v12 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v11,
                                                16, 0);
      a4 = v10;
      v9 = (char*)v12;
      v39_.v40 = a5;
      v39_.v41 = v12;
      v39_.v39 = v11 | 1;
    }
    else {
      LOBYTE(v39_.v39) = 2 * a5;
      v9 = (char*)&v39_.v39 + 1;
    }
    memmove_alt1((__int64)v9, a4, a5);
    v9[a5] = 0;
    v13 = (__int64*)GameRoutine_1a0a680_alt1((__int64)&v39_.v39, 0, "__", 2u);
    v15 = v13[1];
    v14 = v13[2];
    v42_.v42 = *v13;
    v42_.v43 = v15;
    v42_.v44 = (const char*)v14;
    v13[1] = 0;
    v13[2] = 0;
    *v13 = 0;
    if ((v39_.v39 & 1) != 0 && v39_.v41 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v39_.v41);
    }
  }
  else {
    LOWORD(v42_.v42) = 0;
  }
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_51:
    String_60a1d0_alt1();
  }
  if (a3 >= 0x17) {
    if ((a3 | 7) == 0x17) {
      v18 = 26;
    }
    else {
      v18 = (a3 | 7) + 1;
    }
    v17 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v18, 16, 0);
    v35_.v35[1] = a3;
    v35_.v36 = v17;
    v35_.v35[0] = v18 | 1;
  }
  else {
    LOBYTE(v35_.v35[0]) = 2 * a3;
    v17 = (char*)v35_.v35 + 1;
  }
  memmove_alt1((__int64)v17, a2, a3);
  v17[a3] = 0;
  v19 = (_QWORD*)GameRoutine_1a0a680_alt1(
      (__int64)v35_.v35, 0, "Contents:/Graphics/Settings/", 0x1Cu);
  v21 = v19[1];
  v20 = v19[2];
  v37_.v37[0] = *v19;
  v37_.v37[1] = v21;
  v37_.v38 = v20;
  v19[1] = 0;
  v19[2] = 0;
  *v19 = 0;
  if ((v42_.v42 & 1) != 0) {
    v22 = v42_.v44;
  }
  else {
    v22 = (char*)&v42_.v42 + 1;
  }
  if ((v42_.v42 & 1) != 0) {
    v23 = v42_.v43;
  }
  else {
    v23 = (unsigned __int64)(unsigned __int8)v42_.v42 >> 1;
  }
  v24 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)v37_.v37, v22, v23);
  v26 = v24[1];
  v25 = v24[2];
  v39_.v39 = *v24;
  v39_.v40 = v26;
  v39_.v41 = v25;
  v24[1] = 0;
  v24[2] = 0;
  *v24 = 0;
  v27 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)&v39_.v39, ".header", 7u);
  v28 = *v27;
  v29 = v27[1];
  *v27 = 0;
  v27[1] = 0;
  *(_QWORD*)a1 = v28;
  *(_QWORD*)(a1 + 8) = v29;
  v30 = v27[2];
  v27[2] = 0;
  *(_QWORD*)(a1 + 16) = v30;
  if ((v39_.v39 & 1) != 0 && v39_.v41 != 0) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v39_.v41);
  }
  if ((v37_.v37[0] & 1) != 0 && v37_.v38 != 0) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v37_.v38);
  }
  if ((v35_.v35[0] & 1) != 0 && v35_.v36 != nullptr) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, (__int64)v35_.v36);
  }
  if ((v42_.v42 & 1) != 0 && v42_.v44 != nullptr) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, (__int64)v42_.v44);
  }
}

__int64 Manager_c45700(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                       __int64 a5, __int64 a6, unsigned __int64 a7, __int64 a8,
                       __int64 a9, unsigned __int64 a10, __int64 a11,
                       unsigned __int64 a12, __int64 a13, unsigned __int64 a14)
{
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
  char* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  bool v43;
  unsigned __int64 v44;
  const char* v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  bool v48;
  unsigned __int64 v49;
  char* v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  bool v53;
  unsigned __int64 v54;
  char* v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  bool v58;
  unsigned __int64 v59;
  char* v60;
  unsigned __int64 v61;
  char* v62;
  unsigned __int64 v63;
  char* v64;
  unsigned __int64 v65;
  char* v66;
  char* v67;
  const char* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  char* v72;
  __int64 v73;
  char* v74;
  unsigned int v75;
  __int64 v76;
  __int64* v77;
  char* v78;
  unsigned __int64 v79;
  __int64 v80;
  char* v81;
  unsigned __int64 v82;
  bool v83;
  __int64 v84;
  __int64 result;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  _QWORD v92[2];
  char* v93;
  __int64 v94;
  unsigned __int64 v95;
  char* v96;
  __int64 v97;
  unsigned __int64 v98;
  char* v99;

  v19 = a1;
  if (*(_BYTE*)(a1 + 224) == 1) {
    a1 = GameRoutine_60a060(a1 + 200, a6, a7);
    goto LABEL_13;
  }
  if (a7 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_138;
  }
  if (a7 >= 0x17) {
    v21 = a6;
    if ((a7 | 7) == 0x17) {
      v22 = 26;
    }
    else {
      v22 = (a7 | 7) + 1;
    }
    v23 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v22, 16, 0);
    a6 = v21;
    v20 = v23;
    *(_QWORD*)(v19 + 208) = a7;
    *(_QWORD*)(v19 + 216) = v23;
    *(_QWORD*)(v19 + 200) = v22 | 1;
  }
  else {
    v20 = a1 + 201;
    *(_BYTE*)(a1 + 200) = 2 * a7;
    if (a7 == 0) {
      goto LABEL_12;
    }
  }
  a1 = memmove(v20, a6, a7);

LABEL_12:
  *(_BYTE*)(v20 + a7) = 0;
  *(_BYTE*)(v19 + 224) = 1;

LABEL_13:
  v24 = a9;
  if (*(_BYTE*)(v19 + 352) == 1) {
    a1 = GameRoutine_60a060(v19 + 328, a9, a10);
    goto LABEL_25;
  }
  if (a10 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_138;
  }
  if (a10 >= 0x17) {
    if ((a10 | 7) == 0x17) {
      v26 = 26;
    }
    else {
      v26 = (a10 | 7) + 1;
    }
    v27 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v26, 16, 0);
    v24 = a9;
    v25 = v27;
    *(_QWORD*)(v19 + 336) = a10;
    *(_QWORD*)(v19 + 344) = v27;
    *(_QWORD*)(v19 + 328) = v26 | 1;
  }
  else {
    v25 = v19 + 329;
    *(_BYTE*)(v19 + 328) = 2 * a10;
    if (a10 == 0) {
      goto LABEL_24;
    }
  }
  a1 = memmove(v25, v24, a10);

LABEL_24:
  *(_BYTE*)(v25 + a10) = 0;
  *(_BYTE*)(v19 + 352) = 1;

LABEL_25:
  v28 = a11;
  if (*(_BYTE*)(v19 + 384) == 1) {
    a1 = GameRoutine_60a060(v19 + 360, a11, a12);
    goto LABEL_37;
  }
  if (a12 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_138;
  }
  if (a12 >= 0x17) {
    if ((a12 | 7) == 0x17) {
      v30 = 26;
    }
    else {
      v30 = (a12 | 7) + 1;
    }
    v31 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v30, 16, 0);
    v28 = a11;
    v29 = v31;
    *(_QWORD*)(v19 + 368) = a12;
    *(_QWORD*)(v19 + 376) = v31;
    *(_QWORD*)(v19 + 360) = v30 | 1;
  }
  else {
    v29 = v19 + 361;
    *(_BYTE*)(v19 + 360) = 2 * a12;
    if (a12 == 0) {
      goto LABEL_36;
    }
  }
  a1 = memmove(v29, v28, a12);

LABEL_36:
  *(_BYTE*)(v29 + a12) = 0;
  *(_BYTE*)(v19 + 384) = 1;

LABEL_37:
  v32 = a13;
  if (*(_BYTE*)(v19 + 416) != 1) {
    if (a14 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_138;
    }
    if (a14 >= 0x17) {
      if ((a14 | 7) == 0x17) {
        v34 = 26;
      }
      else {
        v34 = (a14 | 7) + 1;
      }
      v35 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v34, 16, 0);
      v32 = a13;
      v33 = v35;
      *(_QWORD*)(v19 + 400) = a14;
      *(_QWORD*)(v19 + 408) = v35;
      *(_QWORD*)(v19 + 392) = v34 | 1;
    }
    else {
      v33 = v19 + 393;
      *(_BYTE*)(v19 + 392) = 2 * a14;
      if (a14 == 0) {
        goto LABEL_48;
      }
    }
    memmove(v33, v32, a14);
  LABEL_48:
    *(_BYTE*)(v33 + a14) = 0;
    *(_BYTE*)(v19 + 416) = 1;
    goto LABEL_49;
  }
  GameRoutine_60a060(v19 + 392, a13, a14);

LABEL_49:
  v36 = *(_QWORD*)v19;
  LightingAnimModule_c687a0(*(_QWORD*)(*(_QWORD*)v19 + 392LL), 0);
  v39 = *(_QWORD*)(v36 + 360);
  a1 = *(_QWORD*)(v39 + 8);
  *(_DWORD*)(v39 + 48) = -1;
  *(_DWORD*)(v39 + 80) = -1;
  *(_DWORD*)(v39 + 92) = -1;
  v40 = 1;
  *(_QWORD*)(v39 + 52) = 0;
  *(_QWORD*)(v39 + 84) = 0;
  *(_QWORD*)(v39 + 96) = 0;
  *(_BYTE*)(v39 + 192) = 0;
  *(_BYTE*)(v39 + 112) = 1;
  *(_OWORD*)(v39 + 32) = GameData_1a82c50;
  if (a1 != 0) {
    a1 = std___1___shared_weak_count_lock(a1);
    if (a1 != 0) {
      v40 = -1;
      if (atomic_fetch_add((atomic_ullong* volatile)(a1 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v41 = a1;
        (*(void (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1);
        a1 = std___1___shared_weak_count___release_weak(v41);
      }
    }
  }
  if (*(_BYTE*)(v19 + 224) == 1) {
    v42 = *(unsigned __int8*)(v19 + 200);
    v38 = *(char**)(v19 + 216);
    v40 = v19 + 201;
    v43 = (v42 & 1) == 0;
    v44 = v42 >> 1;
    if (v43) {
      v45 = (const char*)(v19 + 201);
    }
    else {
      v45 = *(const char**)(v19 + 216);
    }
    if (v43) {
      v46 = v44;
    }
    else {
      v46 = *(_QWORD*)(v19 + 208);
    }
  }
  else {
    v45 = "Outdoors_1";
    v46 = 10;
  }
  v88 = a2;
  v89 = a3;
  v90 = a4;
  v91 = a5;
  if (*(_BYTE*)(v19 + 352) == 1) {
    v47 = *(unsigned __int8*)(v19 + 328);
    v38 = *(char**)(v19 + 344);
    v40 = v19 + 329;
    v48 = (v47 & 1) == 0;
    v49 = v47 >> 1;
    if (v48) {
      v50 = (char*)(v19 + 329);
    }
    else {
      v50 = *(char**)(v19 + 344);
    }
    if (v48) {
      v51 = v49;
    }
    else {
      v51 = *(_QWORD*)(v19 + 336);
    }
  }
  else {
    v51 = 0;
    v50 = &GameData_1a9f09e;
  }
  if (*(_BYTE*)(v19 + 384) == 1) {
    v52 = *(unsigned __int8*)(v19 + 360);
    v38 = *(char**)(v19 + 376);
    v40 = v19 + 361;
    v53 = (v52 & 1) == 0;
    v54 = v52 >> 1;
    if (v53) {
      v55 = (char*)(v19 + 361);
    }
    else {
      v55 = *(char**)(v19 + 376);
    }
    if (v53) {
      v56 = v54;
    }
    else {
      v56 = *(_QWORD*)(v19 + 368);
    }
  }
  else {
    v56 = 0;
    v55 = &GameData_1a9f09e;
  }
  if (*(_BYTE*)(v19 + 416) == 1) {
    v57 = *(unsigned __int8*)(v19 + 392);
    v38 = *(char**)(v19 + 408);
    v40 = v19 + 393;
    v58 = (v57 & 1) == 0;
    v59 = v57 >> 1;
    if (v58) {
      v60 = (char*)(v19 + 393);
    }
    else {
      v60 = *(char**)(v19 + 408);
    }
    if (v58) {
      v61 = v59;
    }
    else {
      v61 = *(_QWORD*)(v19 + 400);
    }
    if (v46 != 0) {
      goto LABEL_85;
    }
  LABEL_89:
    LOWORD(v97) = 0;
    goto LABEL_99;
  }
  v61 = 0;
  v60 = &GameData_1a9f09e;
  if (v46 == 0) {
    goto LABEL_89;
  }

LABEL_85:
  if (v46 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_138;
  }
  if (v46 >= 0x17) {
    v63 = v61;
    v64 = v50;
    v65 = v56;
    v66 = v55;
    v67 = v60;
    v68 = v45;
    if ((v46 | 7) == 0x17) {
      v69 = 26;
    }
    else {
      v69 = (v46 | 7) + 1;
    }
    v70 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v69, 16, 0);
    v71 = v69 | 1;
    v45 = v68;
    v62 = (char*)v70;
    v95 = v46;
    v96 = (char*)v70;
    v60 = v67;
    v55 = v66;
    v56 = v65;
    v50 = v64;
    v61 = v63;
    v94 = v71;
  }
  else {
    LOBYTE(v94) = 2 * v46;
    v62 = (char*)&v94 + 1;
  }
  memmove(v62, v45, v46);
  v62[v46] = 0;
  a1 = GameRoutine_1a0a680(&v94, 0, "Preset/", 7);
  v40 = *(_QWORD*)(a1 + 8);
  v72 = *(char**)(a1 + 16);
  v38 = *(char**)a1;
  v97 = *(_QWORD*)a1;
  v98 = v40;
  v99 = v72;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)a1 = 0;
  if ((v94 & 1) != 0 && v96 != nullptr) {
    v73 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v73 = 56;
    }
    a1 = nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v73);
  }

LABEL_99:
  if (v51 == 0) {
    v75 = 0;
    LOWORD(v94) = 0;
    goto LABEL_114;
  }
  if (v51 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_138:
    String_60a1d0(a1);
  }
  if (v51 >= 0x17) {
    if ((v51 | 7) == 0x17) {
      v76 = 26;
    }
    else {
      v76 = (v51 | 7) + 1;
    }
    v74 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v76,
                                                16, 0);
    v92[1] = v51;
    v93 = v74;
    v92[0] = v76 | 1;
  }
  else {
    LOBYTE(v92[0]) = 2 * v51;
    v74 = (char*)v92 + 1;
  }
  memmove(v74, v50, v51);
  v74[v51] = 0;
  v77 = (__int64*)GameRoutine_1a0a680(v92, 0, "Preset/", 7);
  v79 = v77[1];
  v78 = (char*)v77[2];
  v94 = *v77;
  v95 = v79;
  v96 = v78;
  v77[1] = 0;
  v77[2] = 0;
  *v77 = 0;
  if ((v92[0] & 1) != 0 && v93 != nullptr) {
    v80 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v80 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v80);
  }
  v75 = (unsigned __int8)v94;
  v40 = v95;
  v38 = v96;

LABEL_114:
  if ((v97 & 1) != 0) {
    v81 = v99;
  }
  else {
    v81 = (char*)&v97 + 1;
  }
  if ((v97 & 1) != 0) {
    v82 = v98;
  }
  else {
    v82 = (unsigned __int64)(unsigned __int8)v97 >> 1;
  }
  v83 = (v75 & 1) == 0;
  v84 = v75 >> 1;
  if (v83) {
    v38 = (char*)&v94 + 1;
  }
  if (!v83) {
    v84 = v40;
  }
  result =
      LightingAnimModule_c65df0(*(_QWORD*)(*(_QWORD*)v19 + 392LL), v88, v89,
                                v90, v91, v81, v82, v37, v38, v84, v55, v56);
  if (v61 != 0) {
    result = GameRoutine_c6a240(*(_QWORD*)(*(_QWORD*)v19 + 392LL), v60, v61);
  }
  if ((v94 & 1) != 0 && v96 != nullptr) {
    v86 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v86 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v86);
  }
  if ((v97 & 1) != 0 && v99 != nullptr) {
    v87 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v87 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v87);
  }
  return result;
}

__int64 Manager_c46910(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = result;
  if (*(_BYTE*)(result + 312) == 1 && (*(_BYTE*)(result + 288) & 1) != 0 &&
      *(_QWORD*)(result + 304) != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  if (*(_BYTE*)(v1 + 280) == 1 && (*(_BYTE*)(v1 + 256) & 1) != 0 &&
      *(_QWORD*)(v1 + 272) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  if (*(_BYTE*)(v1 + 248) == 1 && (*(_BYTE*)(v1 + 224) & 1) != 0 &&
      *(_QWORD*)(v1 + 240) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  if (*(_BYTE*)(v1 + 216) == 1 && (*(_BYTE*)(v1 + 192) & 1) != 0 &&
      *(_QWORD*)(v1 + 208) != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  if (*(_BYTE*)(v1 + 184) == 1 && (*(_BYTE*)(v1 + 160) & 1) != 0 &&
      *(_QWORD*)(v1 + 176) != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
  }
  if (*(_BYTE*)(v1 + 152) == 1 && (*(_BYTE*)(v1 + 128) & 1) != 0 &&
      *(_QWORD*)(v1 + 144) != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  if (*(_BYTE*)(v1 + 120) == 1 && (*(_BYTE*)(v1 + 96) & 1) != 0 &&
      *(_QWORD*)(v1 + 112) != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
  }
  if (*(_BYTE*)(v1 + 88) == 1 && (*(_BYTE*)(v1 + 64) & 1) != 0 &&
      *(_QWORD*)(v1 + 80) != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
  }
  if (*(_BYTE*)(v1 + 56) == 1 && (*(_BYTE*)(v1 + 32) & 1) != 0 &&
      *(_QWORD*)(v1 + 48) != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
  }
  if (*(_BYTE*)(v1 + 24) == 1 && (*(_BYTE*)v1 & 1) != 0 &&
      *(_QWORD*)(v1 + 16) != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
  }
  return result;
}

__int64* Manager_c46bf0(_QWORD* a1, __int64 a2, unsigned __int64 a3)
{
  char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64* result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[2];
  __int64 v19;
  _QWORD v20[2];
  __int64 v21;

  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(a1);
  }
  if (a3 >= 0x17) {
    v6 = a2;
    if ((a3 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (a3 | 7) + 1;
    }
    v8 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16, 0);
    a2 = v6;
    v5 = (char*)v8;
    v18[1] = a3;
    v19 = v8;
    v18[0] = v7 | 1;
  }
  else {
    LOBYTE(v18[0]) = 2 * a3;
    v5 = (char*)v18 + 1;
    if (a3 == 0) {
      goto LABEL_10;
    }
  }
  memmove(v5, a2, a3);

LABEL_10:
  v5[a3] = 0;
  v9 = (_QWORD*)GameRoutine_1a0a680(v18, 0, "Contents:/Graphics/Textures/Sky/",
                                    32);
  v11 = v9[1];
  v10 = v9[2];
  v20[0] = *v9;
  v20[1] = v11;
  v21 = v10;
  v9[1] = 0;
  v9[2] = 0;
  *v9 = 0;
  result = (__int64*)GameRoutine_1a09ce0(v20, ".bntx", 5);
  v13 = *result;
  v14 = result[1];
  *result = 0;
  result[1] = 0;
  *a1 = v13;
  a1[1] = v14;
  v15 = result[2];
  result[2] = 0;
  a1[2] = v15;
  if ((v20[0] & 1) != 0 && v21 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    result = (__int64*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v16);
  }
  if ((v18[0] & 1) != 0 && v19 != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    return (__int64*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
  }
  return result;
}

__int64 Manager_c47290(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = result;
  if (*(_BYTE*)(result + 152) == 1 && (*(_BYTE*)(result + 128) & 1) != 0 &&
      *(_QWORD*)(result + 144) != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  if (*(_BYTE*)(v1 + 120) == 1 && (*(_BYTE*)(v1 + 96) & 1) != 0 &&
      *(_QWORD*)(v1 + 112) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  if (*(_BYTE*)(v1 + 88) == 1 && (*(_BYTE*)(v1 + 64) & 1) != 0 &&
      *(_QWORD*)(v1 + 80) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  v5 = *(_QWORD*)(v1 + 32);
  if (v5 != 0) {
    *(_QWORD*)(v1 + 40) = v5;
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
  }
  return result;
}

_QWORD* Manager_c473c0(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  _QWORD* result;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;

  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  v7 = *(__int64*)((char*)a2 + 21);
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 21) = v7;
  *(_QWORD*)(a1 + 8) = v3;
  *(_QWORD*)(a1 + 16) = v4;
  *(_QWORD*)a1 = v2;
  v9 = a2[4];
  v8 = a2[5];
  v10 = v8 - v9;
  if (v8 != v9) {
    if (v10 < 0) {
      GameRoutine_c47570();
    }
    v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v8 - v9, 16, 0);
    v12 = v11 + v10;
    *(_QWORD*)(a1 + 32) = v11;
    *(_QWORD*)(a1 + 40) = v11;
    *(_QWORD*)(a1 + 48) = v11 + v10;
    memcpy(v11, v9, v10);
    *(_QWORD*)(a1 + 40) = v12;
  }
  v13 = *((_DWORD*)a2 + 14);
  *(_BYTE*)(a1 + 64) = 0;
  v14 = (_QWORD*)(a1 + 64);
  *(_BYTE*)(a1 + 88) = 0;
  *(_DWORD*)(a1 + 56) = v13;
  if (*((_BYTE*)a2 + 88) == 1) {
    if ((a2[8] & 1) != 0) {
      fw_text_String_CopyTerminated(v14, a2[10], a2[9]);
    }
    else {
      v15 = a2[8];
      v16 = a2[10];
      *(_QWORD*)(a1 + 72) = a2[9];
      *(_QWORD*)(a1 + 80) = v16;
      *v14 = v15;
    }
    *(_BYTE*)(a1 + 88) = 1;
  }
  *(_BYTE*)(a1 + 96) = 0;
  v17 = (_QWORD*)(a1 + 96);
  *(_BYTE*)(a1 + 120) = 0;
  if (*((_BYTE*)a2 + 120) == 1) {
    if ((a2[12] & 1) != 0) {
      fw_text_String_CopyTerminated(v17, a2[14], a2[13]);
    }
    else {
      v18 = a2[12];
      v19 = a2[14];
      *(_QWORD*)(a1 + 104) = a2[13];
      *(_QWORD*)(a1 + 112) = v19;
      *v17 = v18;
    }
    *(_BYTE*)(a1 + 120) = 1;
  }
  *(_BYTE*)(a1 + 128) = 0;
  result = (_QWORD*)(a1 + 128);
  *(_BYTE*)(a1 + 152) = 0;
  if (*((_BYTE*)a2 + 152) == 1) {
    if ((a2[16] & 1) != 0) {
      result = (_QWORD*)fw_text_String_CopyTerminated(result, a2[18], a2[17]);
    }
    else {
      v21 = a2[16];
      v22 = a2[18];
      *(_QWORD*)(a1 + 136) = a2[17];
      *(_QWORD*)(a1 + 144) = v22;
      *result = v21;
    }
    *(_BYTE*)(a1 + 152) = 1;
  }
  *(_QWORD*)(a1 + 160) = a2[20];
  v23 = a2[21];
  v24 = a2[22];
  v25 = a2[24];
  *(_QWORD*)(a1 + 184) = a2[23];
  *(_QWORD*)(a1 + 192) = v25;
  *(_QWORD*)(a1 + 168) = v23;
  *(_QWORD*)(a1 + 176) = v24;
  v26 = a2[27];
  v27 = a2[25];
  v28 = a2[26];
  *(_BYTE*)(a1 + 224) = *((_BYTE*)a2 + 224);
  *(_QWORD*)(a1 + 208) = v28;
  *(_QWORD*)(a1 + 216) = v26;
  *(_QWORD*)(a1 + 200) = v27;
  return result;
}

__int64* Manager_c475a0(__int64* result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v5;
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
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  v2 = *result;
  v3 = result[1];
  v5 = result;
  v6 = a2[1] + *result - v3;
  if (v3 != *result) {
    v7 = 0;
    do {
      v14 = v2 + v7;
      v15 = v6 + v7;
      v16 = *(_QWORD*)(v2 + v7);
      v17 = *(_QWORD*)(v2 + v7 + 8);
      v18 = *(_QWORD*)(v2 + v7 + 16);
      v19 = *(_QWORD*)(v2 + v7 + 21);
      *(_QWORD*)(v15 + 32) = 0;
      *(_QWORD*)(v15 + 40) = 0;
      *(_QWORD*)(v15 + 48) = 0;
      *(_QWORD*)(v15 + 21) = v19;
      *(_QWORD*)(v15 + 8) = v17;
      *(_QWORD*)(v15 + 16) = v18;
      *(_QWORD*)v15 = v16;
      *(_QWORD*)(v15 + 32) = *(_QWORD*)(v2 + v7 + 32);
      *(_QWORD*)(v15 + 40) = *(_QWORD*)(v2 + v7 + 40);
      *(_QWORD*)(v15 + 48) = *(_QWORD*)(v2 + v7 + 48);
      *(_QWORD*)(v14 + 40) = 0;
      *(_QWORD*)(v14 + 48) = 0;
      *(_QWORD*)(v14 + 32) = 0;
      LODWORD(v16) = *(_DWORD*)(v2 + v7 + 56);
      *(_BYTE*)(v15 + 88) = 0;
      *(_DWORD*)(v15 + 56) = v16;
      *(_BYTE*)(v6 + v7 + 64) = 0;
      if (*(_BYTE*)(v2 + v7 + 88) == 1) {
        v20 = *(_QWORD*)(v14 + 64);
        v21 = *(_QWORD*)(v14 + 80);
        *(_QWORD*)(v6 + v7 + 72) = *(_QWORD*)(v14 + 72);
        *(_QWORD*)(v6 + v7 + 80) = v21;
        *(_QWORD*)(v6 + v7 + 64) = v20;
        *(_QWORD*)(v14 + 72) = 0;
        *(_QWORD*)(v14 + 80) = 0;
        *(_QWORD*)(v14 + 64) = 0;
        *(_BYTE*)(v15 + 88) = 1;
      }
      *(_BYTE*)(v15 + 96) = 0;
      *(_BYTE*)(v15 + 120) = 0;
      if (*(_BYTE*)(v14 + 120) == 1) {
        v22 = (_QWORD*)(v2 + v7);
        v23 = *(_QWORD*)(v2 + v7 + 96);
        v24 = *(_QWORD*)(v2 + v7 + 112);
        *(_QWORD*)(v15 + 104) = *(_QWORD*)(v2 + v7 + 104);
        *(_QWORD*)(v15 + 112) = v24;
        *(_QWORD*)(v15 + 96) = v23;
        v22[13] = 0;
        v22[14] = 0;
        v22[12] = 0;
        *(_BYTE*)(v15 + 120) = 1;
      }
      v25 = v6 + v7;
      *(_BYTE*)(v6 + v7 + 128) = 0;
      *(_BYTE*)(v6 + v7 + 152) = 0;
      if (*(_BYTE*)(v14 + 152) == 1) {
        v26 = (_QWORD*)(v2 + v7);
        v27 = *(_QWORD*)(v2 + v7 + 128);
        v28 = *(_QWORD*)(v2 + v7 + 144);
        *(_QWORD*)(v6 + v7 + 136) = *(_QWORD*)(v2 + v7 + 136);
        *(_QWORD*)(v6 + v7 + 144) = v28;
        *(_QWORD*)(v6 + v7 + 128) = v27;
        v26[17] = 0;
        v26[18] = 0;
        v26[16] = 0;
        *(_BYTE*)(v25 + 152) = 1;
      }
      v7 += 232;
      *(_QWORD*)(v25 + 160) = *(_QWORD*)(v14 + 160);
      v8 = *(_QWORD*)(v14 + 168);
      v9 = *(_QWORD*)(v14 + 176);
      v10 = *(_QWORD*)(v14 + 192);
      *(_QWORD*)(v25 + 184) = *(_QWORD*)(v14 + 184);
      *(_QWORD*)(v25 + 192) = v10;
      *(_QWORD*)(v25 + 168) = v8;
      *(_QWORD*)(v25 + 176) = v9;
      v11 = *(_QWORD*)(v14 + 200);
      v12 = *(_QWORD*)(v14 + 208);
      v13 = *(_QWORD*)(v14 + 216);
      *(_BYTE*)(v25 + 224) = *(_BYTE*)(v14 + 224);
      *(_QWORD*)(v25 + 208) = v12;
      *(_QWORD*)(v25 + 216) = v13;
      *(_QWORD*)(v25 + 200) = v11;
    } while (v14 + 232 != v3);
    do {
      result = (__int64*)Manager_c47290(v2);
      v2 += 232;
    } while (v2 != v3);
  }
  a2[1] = v6;
  v29 = *v5;
  v5[1] = *v5;
  *v5 = a2[1];
  a2[1] = v29;
  v30 = v5[1];
  v5[1] = a2[2];
  a2[2] = v30;
  v31 = v5[2];
  v5[2] = a2[3];
  a2[3] = v31;
  *a2 = a2[1];
  return result;
}

__int64 Manager_c477c0(__int64 result)
{
  __int64 v1;
  __int64 v2;
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
  __int64 v20;
  __int64 v21;
  __int64 v22;

  v1 = *(_QWORD*)(result + 24);
  v2 = *(_QWORD*)(result + 32);
  v3 = result;
  while (v1 != v2) {
    if (*(_QWORD*)v1 != 0) {
      result = GameRoutine_634d80(*(_QWORD*)(*(_QWORD*)v1 + 8LL));
    }
    v1 += 8;
  }
  v4 = *(_QWORD*)(v3 + 48);
  v5 = *(_QWORD*)(v3 + 56);
  while (v4 != v5) {
    if (*(_QWORD*)v4 != 0) {
      result = GameRoutine_634d80(*(_QWORD*)(*(_QWORD*)v4 + 8LL));
    }
    v4 += 8;
  }
  v6 = *(_QWORD*)(v3 + 72);
  v7 = *(_QWORD*)(v3 + 80);
  while (v6 != v7) {
    if (*(_QWORD*)v6 != 0) {
      result = GameRoutine_634d80(*(_QWORD*)(*(_QWORD*)v6 + 8LL));
    }
    v6 += 8;
  }
  v9 = *(_QWORD*)v3;
  v8 = *(_QWORD*)(v3 + 8);
  if (*(_QWORD*)v3 != v8) {
    do {
      v8 -= 232;
      result = Manager_c47290(v8);
    } while (v8 != v9);
  }
  v10 = *(_QWORD*)(v3 + 24);
  v11 = *(_QWORD*)(v3 + 72);
  *(_QWORD*)(v3 + 8) = v9;
  *(_QWORD*)(v3 + 32) = v10;
  v12 = *(_QWORD*)(v3 + 48);
  *(_QWORD*)(v3 + 80) = v11;
  *(_QWORD*)(v3 + 56) = v12;
  if ((*(_BYTE*)(v3 + 112) & 1) != 0 && *(_QWORD*)(v3 + 128) != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
    v11 = *(_QWORD*)(v3 + 72);
  }
  if (v11 != 0) {
    *(_QWORD*)(v3 + 80) = v11;
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
  }
  v15 = *(_QWORD*)(v3 + 48);
  if (v15 != 0) {
    *(_QWORD*)(v3 + 56) = v15;
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v16);
  }
  v17 = *(_QWORD*)(v3 + 24);
  if (v17 != 0) {
    *(_QWORD*)(v3 + 32) = v17;
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v18);
  }
  v19 = *(_QWORD*)v3;
  if (*(_QWORD*)v3 != 0) {
    v20 = *(_QWORD*)(v3 + 8);
    if (v19 == v20) {
      goto LABEL_39;
    }
    do {
      v20 -= 232;
      result = Manager_c47290(v20);
    } while (v20 != v19);
    v21 = *(_QWORD*)v3;
    *(_QWORD*)(v3 + 8) = v19;
    if (v21 != 0) {
    LABEL_39:
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v22 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v22);
    }
  }
  return result;
}

_QWORD* Manager_c47c80(_QWORD* result, char** a2)
{
  unsigned __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  char v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  char* v24;
  char* v25;
  unsigned __int64 v26;
  char* v27;
  unsigned __int8* v28;
  unsigned __int8 v29;

  v3 = result[7] + result[6] - 1LL;
  if (*(_QWORD*)(*(_QWORD*)(result[3] + 8 * (v3 >> 9)) + 8 * (v3 & 0x1FF)) ==
      0) {
    goto LABEL_27;
  }
  v4 = result;
  if ((*(_BYTE*)a2 & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(&v25, a2[2], a2[1]);
  }
  else {
    v5 = (unsigned __int64)a2[1];
    v25 = *a2;
    v26 = v5;
    v27 = a2[2];
  }
  if (((unsigned __int8)v25 & 1) != 0) {
    v6 = v26;
  }
  else {
    v6 = (unsigned __int64)(unsigned __int8)v25 >> 1;
  }
  if (((unsigned __int8)v25 & 1) != 0 && v27 != nullptr) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  v8 = *(_BYTE*)a2;
  if (v6 == 0) {
    goto LABEL_30;
  }
  v9 = v4[7] + v4[6] - 1LL;
  v10 = *(_QWORD*)(*(_QWORD*)(v4[3] + 8 * (v9 >> 9)) + 8 * (v9 & 0x1FF));
  if ((*(_BYTE*)a2 & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(&v25, a2[2], a2[1]);
  }
  else {
    v11 = (unsigned __int64)a2[1];
    v25 = *a2;
    v26 = v11;
    v27 = a2[2];
  }
  if ((*(_BYTE*)v10 & 0x7F) == 8) {
    if (((unsigned __int8)v25 & 1) != 0) {
      v12 = v27;
    }
    else {
      v12 = (char*)&v25 + 1;
    }
    v13 = strlen(v12);
    v14 = *(_QWORD*)(v10 + 1);
    v22 = v12;
    v23 = v13;
    result = (_QWORD*)GameRoutine_6b7f00(v14, 0, v14, *(unsigned int*)(v14 + 4),
                                         &v22);
    v16 = v15 == *(unsigned int*)(v14 + 4);
    if (((unsigned __int8)v25 & 1) != 0) {
    LABEL_22:
      if (v27 != nullptr) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v17 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
      }
    }
  }
  else {
    v16 = true;
    if (((unsigned __int8)v25 & 1) != 0) {
      goto LABEL_22;
    }
  }
  if (v16) {
  LABEL_27:
    v18 = a2[3];
    if (v18[1] == 1) {
      v18[1] = 0;
    }
    return result;
  }
  v8 = *(_BYTE*)a2;

LABEL_30:
  if ((v8 & 1) != 0) {
    fw_text_String_CopyTerminated(&v22, a2[2], a2[1]);
    if (((unsigned __int8)v22 & 1) != 0) {
      goto LABEL_32;
    }
  }
  else {
    v19 = (__int64)a2[1];
    v22 = *a2;
    v23 = v19;
    v24 = a2[2];
    if (((unsigned __int8)v22 & 1) != 0) {
    LABEL_32:
      fw_text_String_CopyTerminated(&v25, v24, v23);
      goto LABEL_35;
    }
  }
  v25 = v22;
  v26 = v23;
  v27 = v24;

LABEL_35:
  v28 = &v29;
  result = (_QWORD*)GameRoutine_c48320(v4, &v25);
  if (((unsigned __int8)v25 & 1) != 0 && v27 != nullptr) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
  }
  if (((unsigned __int8)v22 & 1) != 0 && v24 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21);
  }
  *(_WORD*)a2[3] = v29 | 0x100;
  return result;
}

#pragma GCC visibility pop
