#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1fcf3e0[])();
extern __int64 (*GameData_1fcf470[])();
extern __int64 (*GameData_1fcf500[])();
extern __int64 (*GameData_1fcf548[])();
extern __int64 (*GameData_1fcf5d8[])();
extern __int64 (*GameData_1fcf668[])();
extern __int64 (*GameData_1fcfa18[])();
extern __int64 (*GameData_1fcfaa8[])();
extern __int64 (*GameData_1fcfb38[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(void);
void __attribute__((noreturn)) GameRoutine_b32f30(void);
__int64 gfxa_MainPass2D_SetupCapturePass_alt1(__int64 a1, __int64* a2) __asm__(
    "gfxa_MainPass2D_SetupCapturePass");
__int64 gfxa_MainPass2D_SetupPrimivePass_alt1(__int64 a1, __int64* a2) __asm__(
    "gfxa_MainPass2D_SetupPrimivePass");
__int64 gfxa_MainPass2D_SetupSpinePass_alt1(__int64 a1, __int64* a2) __asm__(
    "gfxa_MainPass2D_SetupSpinePass");
__attribute__((swiftcall)) void std___1_to_string_1a0a790(PSEUDO_X8, _QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b48f90(__int64, __int64);
__int64 GameRoutine_b494f0(__int64, __int64, __int64*);
__int64 GameRoutine_b50c60(__int64, __int64, __int64*);
__int64 GameRoutine_b53d40(__int64, __int64, __int64*);
__int64 ResourceBuilder_b4bb60(__int64*, unsigned __int8*, __int64);
extern _DWORD GameData_1b7d8bc[7];
__int64 gfxa_MainPass2D_SetupEffectPass_lambda0_Invoke(__int64 a1, __int64 a2,
                                                       __int64 a3);
__int64 gfxa_MainPass2D_SetupFinalPass_lambda0_Invoke_alt1(
    __int64 a1, __int64** a2,
    __int64* a3) __asm__("gfxa_MainPass2D_SetupFinalPass_lambda0_Invoke");
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64 GameRoutine_b53d40_alt1(__int64*, const char*,
                                __int64) __asm__("GameRoutine_b53d40");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_b32f30_alt1() __asm__("GameRoutine_b32f30");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 gfxa_MainPass2D_SetupCapturePass(__int64 a1, __int64 a2);
__int64 gfxa_MainPass2D_SetupPrimivePass(__int64 a1, __int64 a2);
__int64 gfxa_MainPass2D_SetupSpinePass(__int64 a1, __int64 a2);
void gfxa_MainPass2D_SetupFinalPass_lambda0_Invoke(__int64 a1, __int64** a2,
                                                   __int64* a3);

__int64 gfxa_MainPass2D_SetupCapturePass(__int64 a1, __int64 a2)
{
  int v2;
  __int64* v5;
  __int64 v6;
  char* v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  signed __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD v22[2];

  v2 = *(_DWORD*)(a2 + 96);
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 192, 16, 0);
  v7 = (char*)fw_memory_HeapManager_Allocate_alt1(*v5, 32, 16, 0);
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_DWORD*)(v6 + 80) = v2;
  *(_QWORD*)(v6 + 152) = a1;
  *(_QWORD*)(v6 + 16) = 24;
  *(_QWORD*)(v6 + 24) = v7;
  strcpy(v7, "CaptureUpscaledColorPass");
  *(_QWORD*)v6 = GameData_1fcf500;
  *(_QWORD*)(v6 + 8) = 33;
  *(_BYTE*)(v6 + 84) = 1;
  *(_QWORD*)(v6 + 96) = GameData_1fcf3e0;
  *(_QWORD*)(v6 + 144) = GameData_1fcf470;
  v9 = *(__int64**)(a2 + 8);
  v8 = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(v6 + 128) = v6 + 96;
  *(_QWORD*)(v6 + 176) = v6 + 144;
  if ((unsigned __int64)v9 >= v8) {
    v11 = *(_QWORD*)a2;
    v12 = (signed __int64)v9 - *(_QWORD*)a2;
    v13 = (v12 >> 3) + 1;
    if (v13 >> 61 != 0) {
      GameRoutine_b32f30_alt1();
    }
    v14 = v8 - v11;
    if (v14 >> 2 > v13) {
      v13 = v14 >> 2;
    }
    if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
      v15 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v15 = v13;
    }
    if (v15 != 0) {
      if (v15 >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v16 = fw_memory_HeapManager_Allocate_alt1(*v5, 8 * v15, 16, 0);
    }
    else {
      v16 = 0;
    }
    v17 = v16 + 8 * v15;
    v18 = v16 + v12 - 8 * (v12 >> 3);
    *(_QWORD*)(v16 + v12) = v6;
    v10 = v16 + v12 + 8;
    memcpy_alt1(v18, v11, v12);
    *(_QWORD*)a2 = v18;
    *(_QWORD*)(a2 + 8) = v10;
    *(_QWORD*)(a2 + 16) = v17;
    if (v11 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*v5 + 200) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v5 + v19, v11);
    }
  }
  else {
    *v9 = v6;
    v10 = (__int64)(v9 + 1);
  }
  *(_QWORD*)(a2 + 8) = v10;
  v20 = *(_QWORD*)(v10 - 8);
  v22[0] = a2;
  v22[1] = v20;
  return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v20 + 16LL))(v20, v22);
}

__int64 gfxa_MainPass2D_SetupPrimivePass(__int64 a1, __int64 a2)
{
  int v2;
  __int64* v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  signed __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD v22[2];

  v2 = *(_DWORD*)(a2 + 96);
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 192, 16, 0);
  *(_DWORD*)(v6 + 80) = v2;
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_BYTE*)(v6 + 8) = 30;
  *(_QWORD*)v6 = GameData_1fcf668;
  *(_BYTE*)(v6 + 84) = 1;
  strcpy((char*)(v6 + 9), "Primitive2DPass");
  *(_QWORD*)(v6 + 96) = GameData_1fcf548;
  *(_QWORD*)(v6 + 176) = v6 + 144;
  v8 = *(__int64**)(a2 + 8);
  v7 = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(v6 + 128) = v6 + 96;
  *(_QWORD*)(v6 + 144) = GameData_1fcf5d8;
  *(_QWORD*)(v6 + 152) = a1;
  if ((unsigned __int64)v8 >= v7) {
    v10 = *(_QWORD*)a2;
    v11 = (signed __int64)v8 - *(_QWORD*)a2;
    v12 = (v11 >> 3) + 1;
    if (v12 >> 61 != 0) {
      GameRoutine_b32f30_alt1();
    }
    v13 = v7 - v10;
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
        GameRoutine_60a210_alt1();
      }
      v15 = v6;
      v16 = fw_memory_HeapManager_Allocate_alt1(*v5, 8 * v14, 16, 0);
      v6 = v15;
    }
    else {
      v16 = 0;
    }
    v17 = v16 + 8 * v14;
    v18 = v16 + v11 - 8 * (v11 >> 3);
    *(_QWORD*)(v16 + v11) = v6;
    v9 = v16 + v11 + 8;
    memcpy_alt1(v18, v10, v11);
    *(_QWORD*)a2 = v18;
    *(_QWORD*)(a2 + 8) = v9;
    *(_QWORD*)(a2 + 16) = v17;
    if (v10 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*v5 + 200) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v5 + v19, v10);
    }
  }
  else {
    *v8 = v6;
    v9 = (__int64)(v8 + 1);
  }
  *(_QWORD*)(a2 + 8) = v9;
  v20 = *(_QWORD*)(v9 - 8);
  v22[0] = a2;
  v22[1] = v20;
  return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v20 + 16LL))(v20, v22);
}

__int64 gfxa_MainPass2D_SetupSpinePass(__int64 a1, __int64 a2)
{
  int v2;
  __int64* v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  signed __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD v22[2];

  v2 = *(_DWORD*)(a2 + 96);
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 192, 16, 0);
  *(_DWORD*)(v6 + 80) = v2;
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 152) = a1;
  *(_BYTE*)(v6 + 8) = 18;
  *(_BYTE*)(v6 + 84) = 1;
  *(_QWORD*)(v6 + 96) = GameData_1fcfa18;
  *(_QWORD*)(v6 + 128) = v6 + 96;
  strcpy((char*)(v6 + 9), "SpinePass");
  *(_QWORD*)v6 = GameData_1fcfb38;
  *(_QWORD*)(v6 + 144) = GameData_1fcfaa8;
  v8 = *(__int64**)(a2 + 8);
  v7 = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(v6 + 176) = v6 + 144;
  if ((unsigned __int64)v8 >= v7) {
    v10 = *(_QWORD*)a2;
    v11 = (signed __int64)v8 - *(_QWORD*)a2;
    v12 = (v11 >> 3) + 1;
    if (v12 >> 61 != 0) {
      GameRoutine_b32f30_alt1();
    }
    v13 = v7 - v10;
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
        GameRoutine_60a210_alt1();
      }
      v15 = v6;
      v16 = fw_memory_HeapManager_Allocate_alt1(*v5, 8 * v14, 16, 0);
      v6 = v15;
    }
    else {
      v16 = 0;
    }
    v17 = v16 + 8 * v14;
    v18 = v16 + v11 - 8 * (v11 >> 3);
    *(_QWORD*)(v16 + v11) = v6;
    v9 = v16 + v11 + 8;
    memcpy_alt1(v18, v10, v11);
    *(_QWORD*)a2 = v18;
    *(_QWORD*)(a2 + 8) = v9;
    *(_QWORD*)(a2 + 16) = v17;
    if (v10 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*v5 + 200) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v5 + v19, v10);
    }
  }
  else {
    *v8 = v6;
    v9 = (__int64)(v8 + 1);
  }
  *(_QWORD*)(a2 + 8) = v9;
  v20 = *(_QWORD*)(v9 - 8);
  v22[0] = a2;
  v22[1] = v20;
  return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v20 + 16LL))(v20, v22);
}

__int64 gfxa_MainPass2D_SetupEffectPass_lambda0_Invoke(__int64 a1, __int64 a2,
                                                       __int64 a3)
{
  int v5;
  unsigned int* v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 result;
  struct {
    __int64 v11;
    int v12;
    int v13;
    __int64 v14;
    char v15;
    char gap25_[3];
    int v16;
  } v11_;

  v5 = 0;
  v6 = **(unsigned int***)(a1 + 8);
  v11_.v14 = 0x100000001LL;
  v11_.v16 = 0;
  LODWORD(v11_.v11) = 0;
  v7 = v6[3329];
  v8 = v6[3328];
  v9 = v6[3310];
  v11_.v12 = v8;
  v11_.v13 = v7;
  if ((unsigned int)v9 <= 6) {
    v5 = GameData_1b7d8bc[v9];
  }
  HIDWORD(v11_.v11) = v5;
  v11_.v15 = 0;
  **(_QWORD**)(a2 + 8) =
      GameRoutine_b50c60(a3, (__int64)"Vfx2DRefract", &v11_.v11);
  v11_.v12 = v8 >> 1;
  v11_.v13 = v7 >> 1;
  HIDWORD(v11_.v11) = 20;
  v11_.v15 = 1;
  result = GameRoutine_b494f0(a3, (__int64)"BloomInput", &v11_.v11);
  *(_QWORD*)(*(_QWORD*)(a2 + 8) + 8LL) = result;
  return result;
}

void gfxa_MainPass2D_SetupFinalPass_lambda0_Invoke(__int64 a1, __int64** a2,
                                                   __int64* a3)
{
  __int64 v5;
  int v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  const char* v19;
  unsigned __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  const char* v27;
  unsigned __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  const char* v35;
  unsigned __int64 v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  const char* v43;
  unsigned __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  const char* v51;
  unsigned __int64 v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  const char* v59;
  unsigned __int64 v60;
  __int64* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  const char* v67;
  unsigned __int64 v68;
  __int64* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  const char* v75;
  unsigned __int64 v76;
  __int64* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  struct {
    __int64 v88;
    unsigned __int64 v89;
    const char* v90;
  } v88_;
  char v91;
  _BYTE v92[23];
  struct {
    __int64 v93;
    __int64 v94;
    __int64 v95;
  } v93_;
  struct {
    __int64 v96;
    int v97;
    int v98;
    __int64 v99;
    char v100;
    char gap121_[3];
    int v101;
  } v96_;

  v5 = **(_QWORD**)(a1 + 8);
  v6 = *(_DWORD*)(v5 + 13312);
  v7 = *(_DWORD*)(v5 + 13316);
  v8 = v6 >> 1;
  v9 = v7 >> 1;
  **a2 =
      GameRoutine_b48f90((__int64)a3, *(_QWORD*)(**(_QWORD**)(a1 + 16) + 24LL));
  v96_.v101 = 0;
  v96_.v97 = v6 >> 1;
  v96_.v98 = v7 >> 1;
  v96_.v96 = 0x1400000000LL;
  v96_.v99 = 0x100000001LL;
  v96_.v100 = 1;
  v10 = GameRoutine_b53d40_alt1(a3, "RTTempHiLum2D", (__int64)&v96_.v96);
  v11 = (v6 >> 1) + 7;
  *a2[1] = v10;
  if (v6 >> 1 >= 0) {
    v11 = v6 >> 1;
  }
  v87 = v11;
  v13 = v8 + 15;
  if (v8 >= 0) {
    v13 = v6 >> 1;
  }
  v92[15] = 0;
  v12 = (v6 >> 1) + ((unsigned int)v6 >> 31);
  v14 = v12 >> 1;
  if (v8 >= 0) {
    v15 = v6 >> 1;
  }
  else {
    v15 = v8 + 3;
  }
  v96_.v97 = v12 >> 1;
  v96_.v98 = (int)(v9 + ((unsigned int)v7 >> 31)) >> 1;
  if (v9 >= 0) {
    v16 = v7 >> 1;
  }
  else {
    v16 = v9 + 3;
  }
  v17 = v9 + 7;
  if (v9 >= 0) {
    v17 = v7 >> 1;
  }
  v85 = v14;
  v86 = v17;
  v18 = v9 + 15;
  if (v9 >= 0) {
    v18 = v7 >> 1;
  }
  v83 = v18;
  v84 = v13;
  v91 = 30;
  qmemcpy(v92, "RTTempDownscale", 15);
  std___1_to_string_1a0a790((void*)(&v88_.v88), 0);
  if ((v88_.v88 & 1) != 0) {
    v19 = v88_.v90;
  }
  else {
    v19 = (char*)&v88_.v88 + 1;
  }
  if ((v88_.v88 & 1) != 0) {
    v20 = v88_.v89;
  }
  else {
    v20 = (unsigned __int64)(unsigned __int8)v88_.v88 >> 1;
  }
  v21 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)&v91, v19, v20);
  v23 = v21[1];
  v22 = v21[2];
  v93_.v93 = *v21;
  v93_.v94 = v23;
  v93_.v95 = v22;
  v21[1] = 0;
  v21[2] = 0;
  *v21 = 0;
  a2[1][1] = ResourceBuilder_b4bb60(a3, (unsigned __int8*)&v93_.v93,
                                    (__int64)&v96_.v96);
  if ((v93_.v93 & 1) != 0 && v93_.v95 != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v93_.v95);
  }
  if ((v88_.v88 & 1) != 0 && v88_.v90 != nullptr) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, (__int64)v88_.v90);
  }
  if ((v91 & 1) != 0 && *(_QWORD*)&v92[15] != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, *(__int64*)&v92[15]);
  }
  v96_.v97 = v15 >> 2;
  v96_.v98 = v16 >> 2;
  strcpy(v92, "RTTempDownscale");
  v91 = 30;
  std___1_to_string_1a0a790((void*)(&v88_.v88), 1);
  if ((v88_.v88 & 1) != 0) {
    v27 = v88_.v90;
  }
  else {
    v27 = (char*)&v88_.v88 + 1;
  }
  if ((v88_.v88 & 1) != 0) {
    v28 = v88_.v89;
  }
  else {
    v28 = (unsigned __int64)(unsigned __int8)v88_.v88 >> 1;
  }
  v29 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)&v91, v27, v28);
  v31 = v29[1];
  v30 = v29[2];
  v93_.v93 = *v29;
  v93_.v94 = v31;
  v93_.v95 = v30;
  v29[1] = 0;
  v29[2] = 0;
  *v29 = 0;
  a2[1][2] = ResourceBuilder_b4bb60(a3, (unsigned __int8*)&v93_.v93,
                                    (__int64)&v96_.v96);
  if ((v93_.v93 & 1) != 0 && v93_.v95 != 0) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v93_.v95);
  }
  if ((v88_.v88 & 1) != 0 && v88_.v90 != nullptr) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, (__int64)v88_.v90);
  }
  if ((v91 & 1) != 0 && *(_QWORD*)&v92[15] != 0) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, *(__int64*)&v92[15]);
  }
  v96_.v97 = v87 >> 3;
  v96_.v98 = v86 >> 3;
  strcpy(v92, "RTTempDownscale");
  v91 = 30;
  std___1_to_string_1a0a790((void*)(&v88_.v88), 2);
  if ((v88_.v88 & 1) != 0) {
    v35 = v88_.v90;
  }
  else {
    v35 = (char*)&v88_.v88 + 1;
  }
  if ((v88_.v88 & 1) != 0) {
    v36 = v88_.v89;
  }
  else {
    v36 = (unsigned __int64)(unsigned __int8)v88_.v88 >> 1;
  }
  v37 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)&v91, v35, v36);
  v39 = v37[1];
  v38 = v37[2];
  v93_.v93 = *v37;
  v93_.v94 = v39;
  v93_.v95 = v38;
  v37[1] = 0;
  v37[2] = 0;
  *v37 = 0;
  a2[1][3] = ResourceBuilder_b4bb60(a3, (unsigned __int8*)&v93_.v93,
                                    (__int64)&v96_.v96);
  if ((v93_.v93 & 1) != 0 && v93_.v95 != 0) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v93_.v95);
  }
  if ((v88_.v88 & 1) != 0 && v88_.v90 != nullptr) {
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v41, (__int64)v88_.v90);
  }
  if ((v91 & 1) != 0 && *(_QWORD*)&v92[15] != 0) {
    v42 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v42 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v42, *(__int64*)&v92[15]);
  }
  v96_.v97 = v84 >> 4;
  v96_.v98 = v83 >> 4;
  strcpy(v92, "RTTempDownscale");
  v91 = 30;
  std___1_to_string_1a0a790((void*)(&v88_.v88), 3);
  if ((v88_.v88 & 1) != 0) {
    v43 = v88_.v90;
  }
  else {
    v43 = (char*)&v88_.v88 + 1;
  }
  if ((v88_.v88 & 1) != 0) {
    v44 = v88_.v89;
  }
  else {
    v44 = (unsigned __int64)(unsigned __int8)v88_.v88 >> 1;
  }
  v45 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)&v91, v43, v44);
  v47 = v45[1];
  v46 = v45[2];
  v93_.v93 = *v45;
  v93_.v94 = v47;
  v93_.v95 = v46;
  v45[1] = 0;
  v45[2] = 0;
  *v45 = 0;
  a2[1][4] = ResourceBuilder_b4bb60(a3, (unsigned __int8*)&v93_.v93,
                                    (__int64)&v96_.v96);
  if ((v93_.v93 & 1) != 0 && v93_.v95 != 0) {
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, v93_.v95);
  }
  if ((v88_.v88 & 1) != 0 && v88_.v90 != nullptr) {
    v49 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v49, (__int64)v88_.v90);
  }
  if ((v91 & 1) != 0 && *(_QWORD*)&v92[15] != 0) {
    v50 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v50 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v50, *(__int64*)&v92[15]);
  }
  v96_.v97 = v85;
  v96_.v98 = (int)(v9 + ((unsigned int)v7 >> 31)) >> 1;
  v91 = 20;
  strcpy(v92, "RTTempBlur");
  std___1_to_string_1a0a790((void*)(&v88_.v88), 0);
  if ((v88_.v88 & 1) != 0) {
    v51 = v88_.v90;
  }
  else {
    v51 = (char*)&v88_.v88 + 1;
  }
  if ((v88_.v88 & 1) != 0) {
    v52 = v88_.v89;
  }
  else {
    v52 = (unsigned __int64)(unsigned __int8)v88_.v88 >> 1;
  }
  v53 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)&v91, v51, v52);
  v55 = v53[1];
  v54 = v53[2];
  v93_.v93 = *v53;
  v93_.v94 = v55;
  v93_.v95 = v54;
  v53[1] = 0;
  v53[2] = 0;
  *v53 = 0;
  a2[1][5] = ResourceBuilder_b4bb60(a3, (unsigned __int8*)&v93_.v93,
                                    (__int64)&v96_.v96);
  if ((v93_.v93 & 1) != 0 && v93_.v95 != 0) {
    v56 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v56 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v56, v93_.v95);
  }
  if ((v88_.v88 & 1) != 0 && v88_.v90 != nullptr) {
    v57 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v57 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v57, (__int64)v88_.v90);
  }
  if ((v91 & 1) != 0 && *(_QWORD*)&v92[15] != 0) {
    v58 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v58 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, *(__int64*)&v92[15]);
  }
  v96_.v97 = v15 >> 2;
  v96_.v98 = v16 >> 2;
  *(_QWORD*)v92 = *(_QWORD*)"RTTempBlur";
  v91 = 20;
  strcpy(&v92[8], "ur");
  std___1_to_string_1a0a790((void*)(&v88_.v88), 1);
  if ((v88_.v88 & 1) != 0) {
    v59 = v88_.v90;
  }
  else {
    v59 = (char*)&v88_.v88 + 1;
  }
  if ((v88_.v88 & 1) != 0) {
    v60 = v88_.v89;
  }
  else {
    v60 = (unsigned __int64)(unsigned __int8)v88_.v88 >> 1;
  }
  v61 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)&v91, v59, v60);
  v63 = v61[1];
  v62 = v61[2];
  v93_.v93 = *v61;
  v93_.v94 = v63;
  v93_.v95 = v62;
  v61[1] = 0;
  v61[2] = 0;
  *v61 = 0;
  a2[1][6] = ResourceBuilder_b4bb60(a3, (unsigned __int8*)&v93_.v93,
                                    (__int64)&v96_.v96);
  if ((v93_.v93 & 1) != 0 && v93_.v95 != 0) {
    v64 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v64 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v64, v93_.v95);
  }
  if ((v88_.v88 & 1) != 0 && v88_.v90 != nullptr) {
    v65 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v65 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v65, (__int64)v88_.v90);
  }
  if ((v91 & 1) != 0 && *(_QWORD*)&v92[15] != 0) {
    v66 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v66 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v66, *(__int64*)&v92[15]);
  }
  *(_QWORD*)v92 = *(_QWORD*)"RTTempBlur";
  v96_.v97 = v87 >> 3;
  v96_.v98 = v86 >> 3;
  v91 = 20;
  strcpy(&v92[8], "ur");
  std___1_to_string_1a0a790((void*)(&v88_.v88), 2);
  if ((v88_.v88 & 1) != 0) {
    v67 = v88_.v90;
  }
  else {
    v67 = (char*)&v88_.v88 + 1;
  }
  if ((v88_.v88 & 1) != 0) {
    v68 = v88_.v89;
  }
  else {
    v68 = (unsigned __int64)(unsigned __int8)v88_.v88 >> 1;
  }
  v69 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)&v91, v67, v68);
  v71 = v69[1];
  v70 = v69[2];
  v93_.v93 = *v69;
  v93_.v94 = v71;
  v93_.v95 = v70;
  v69[1] = 0;
  v69[2] = 0;
  *v69 = 0;
  a2[1][7] = ResourceBuilder_b4bb60(a3, (unsigned __int8*)&v93_.v93,
                                    (__int64)&v96_.v96);
  if ((v93_.v93 & 1) != 0 && v93_.v95 != 0) {
    v72 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v72 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v72, v93_.v95);
  }
  if ((v88_.v88 & 1) != 0 && v88_.v90 != nullptr) {
    v73 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v73 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v73, (__int64)v88_.v90);
  }
  if ((v91 & 1) != 0 && *(_QWORD*)&v92[15] != 0) {
    v74 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v74 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v74, *(__int64*)&v92[15]);
  }
  v96_.v97 = v84 >> 4;
  v96_.v98 = v83 >> 4;
  *(_QWORD*)v92 = *(_QWORD*)"RTTempBlur";
  v91 = 20;
  strcpy(&v92[8], "ur");
  std___1_to_string_1a0a790((void*)(&v88_.v88), 3);
  if ((v88_.v88 & 1) != 0) {
    v75 = v88_.v90;
  }
  else {
    v75 = (char*)&v88_.v88 + 1;
  }
  if ((v88_.v88 & 1) != 0) {
    v76 = v88_.v89;
  }
  else {
    v76 = (unsigned __int64)(unsigned __int8)v88_.v88 >> 1;
  }
  v77 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)&v91, v75, v76);
  v79 = v77[1];
  v78 = v77[2];
  v93_.v93 = *v77;
  v93_.v94 = v79;
  v93_.v95 = v78;
  v77[1] = 0;
  v77[2] = 0;
  *v77 = 0;
  a2[1][8] = ResourceBuilder_b4bb60(a3, (unsigned __int8*)&v93_.v93,
                                    (__int64)&v96_.v96);
  if ((v93_.v93 & 1) != 0 && v93_.v95 != 0) {
    v80 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v80 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v80, v93_.v95);
  }
  if ((v88_.v88 & 1) != 0 && v88_.v90 != nullptr) {
    v81 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v81 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v81, (__int64)v88_.v90);
  }
  if ((v91 & 1) != 0 && *(_QWORD*)&v92[15] != 0) {
    v82 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v82 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v82, *(__int64*)&v92[15]);
  }
}

#pragma GCC visibility pop
