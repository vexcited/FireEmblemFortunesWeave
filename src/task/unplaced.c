#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_5d610(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_64ac70(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_64adb0(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_64aef0(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_a8e280(__int64);
_QWORD* gxc_GpuMemory_Destroy_GpuMemory(_QWORD* result);
_QWORD* gxc_GpuMemory_GpuMemory_5d4d0(_QWORD* result);
_QWORD* gxc_NvnStateCache_NvnStateCache(_QWORD* result);
__attribute__((swiftcall)) void GameRoutine_53930(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameRoutine_539a0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameRoutine_539f0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameRoutine_53a40(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameRoutine_53a90(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_53ae0(PSEUDO_X8);
__attribute__((swiftcall)) void
GameRoutine_53ae0_alt1(PSEUDO_X8, __int64) __asm__("GameRoutine_53ae0");
__attribute__((swiftcall)) void GameRoutine_53b30(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameRoutine_53bd0(PSEUDO_X8, int*);
__attribute__((swiftcall)) void GameRoutine_53c20(PSEUDO_X8, unsigned int*);
__int64* GameRoutine_6380e0(__int64, __int64**);
__int64* GameRoutine_beeb60(__int64* result);
__int64 GameRoutine_18df280(__int64, __int64*);
__int64 GameRoutine_194d1c0(__int64, _QWORD*, unsigned __int64);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_2b0();
__int64 GameRoutine_5fc4f0(__int64, __int64);
__int64 GameRoutine_5fc550(__int64 result, __int64, __int64);
__int64 GameRoutine_5fc640(__int64 result, __int64, __int64);
__int64 GameRoutine_5fcc20(__int64);
__int64 GameRoutine_606880(_QWORD);
__int64 GameRoutine_615400(_QWORD*);
__int64 GameRoutine_645c40();
__int64 GameRoutine_645c90();
__int64 GameRoutine_645ce0();
__int64 GameRoutine_64a630();
__int64 GameRoutine_64a680();
__int64 GameRoutine_64b040(__int64 result);
__int64 GameRoutine_64b7e0(__int64 result);
__int64 GameRoutine_64be60();
__int64 GameRoutine_64e4a0(__int64 result, __int64*, unsigned __int64, _QWORD*,
                           signed __int64);
__int64 GameRoutine_a8d980(_QWORD*);
__int64 GameRoutine_a8df80(__int64 result);
__int64 GameRoutine_a93620(__int64 result);
__int64 Registration_6492e0(_QWORD*, __int64*, __int64*, __int64, int);
__int64 WorkerThread_194daa0(__int64, unsigned int, __int64, __int64*);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_615300(__int64, _QWORD*, int*);
__int64 game_templates_a93ea0(float*, unsigned __int8*, __int64, __int64**);
__int64 gxc_Free_5f440(__int64);
__int64 gxc_NvnDevice_GetInteger(__int64, __int64);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nv_InitializeGraphics(_QWORD, _QWORD);
__int64 nv_SetGraphicsAllocator(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1_locale_Destroy_locale(_QWORD);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern _DWORD GameData_1b36664[7];
extern _DWORD GameData_1b36680[5];
extern _DWORD GameData_1b36694[7];
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN** GameData_212c420[10];
extern _UNKNOWN** GameData_212c438[7];
extern _UNKNOWN** GameData_212c440[6];
extern _UNKNOWN** GameData_2132160[15];
extern _UNKNOWN GameData_1f8ebf0;
extern _UNKNOWN GameData_1f8ec40;
extern _UNKNOWN GameData_1f8ec90;
extern _UNKNOWN GameData_1f8ece0;
extern _UNKNOWN GameData_1f8ee40;
extern _UNKNOWN GameData_1f8ee90;
extern _UNKNOWN GameData_1f8eee0;
extern _UNKNOWN GameData_22030f0;
extern __int64 (*GameData_1f8eba0[])();
extern __int64 (*GameData_1f8ed30[])();
extern __int64 (*GameData_2177cb8)(_QWORD, char*);
extern __int64 (*gfx_anonymous_RootRenderTask_vtable[])();
extern __int64 GameData_212c060;
extern __int64 GameData_21a60d0;
extern __int64 GameData_2203088;
extern __int64 GameData_2203090;
extern __int64 GameData_2203098;
extern __int64 GameData_22030f8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void* gxc_SetAllocator_5f400(void* result, __int64, void*, __int64);
void ABoot_b34120(_QWORD*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_64a810();
void __attribute__((noreturn)) GameRoutine_64aa60();
void __attribute__((noreturn)) String_60a1d0();
void gxc_NvnStateCache_Destroy_NvnStateCache(_QWORD*);
__int64 task_646090(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4);
__int64 task_6463a0(__int64 a1, __int64 a2, int a3);
__int64 task_6478c0(__int64 a1);
__int64 task_647d00(_QWORD* a1, int a2, __int64 a3, unsigned __int64 a4,
                    __int64 a5, int a6, __int64 a7, char a8);

__int64 task_646090(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;

  v5 = *(_QWORD*)(a2 + 32);
  if (v5 != 0) {
    if (v5 == a2) {
      v14_.v15 = v14_.v14;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v5 + 24LL))(v5, v14_.v14);
    }
    else {
      v14_.v15 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    }
  }
  else {
    v14_.v15 = nullptr;
  }
  GameRoutine_64ac70(v14_.v14, a1);
  if (v14_.v15 == v14_.v14) {
    v8 = 32;
  }
  else {
    if (v14_.v15 == nullptr) {
      goto LABEL_11;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v14_.v15 + v8))((__int64)v14_.v15);
LABEL_11:
  v9 = *(_QWORD*)(a3 + 32);
  if (v9 != 0) {
    if (v9 == a3) {
      v14_.v15 = v14_.v14;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v9 + 24LL))(v9, v14_.v14);
    }
    else {
      v14_.v15 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    }
  }
  else {
    v14_.v15 = nullptr;
  }
  GameRoutine_64adb0(v14_.v14, a1 + 6);
  if (v14_.v15 == v14_.v14) {
    v10 = 32;
  }
  else {
    if (v14_.v15 == nullptr) {
      goto LABEL_21;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v14_.v15 + v10))((__int64)v14_.v15);
LABEL_21:
  v11 = *(_QWORD*)(a4 + 32);
  if (v11 != 0) {
    if (v11 == a4) {
      v14_.v15 = v14_.v14;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v11 + 24LL))(v11, v14_.v14);
    }
    else {
      v14_.v15 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    }
  }
  else {
    v14_.v15 = nullptr;
  }
  GameRoutine_64aef0(v14_.v14, a1 + 12);
  if (v14_.v15 == v14_.v14) {
    v12 = 32;
    goto LABEL_30;
  }
  if (v14_.v15 != nullptr) {
    v12 = 40;
  LABEL_30:
    (*(void (**)(__int64))(*v14_.v15 + v12))((__int64)v14_.v15);
  }
  nv_InitializeGraphics(0, 0);
  return nv_SetGraphicsAllocator(GameRoutine_645c40, GameRoutine_645c90,
                                 GameRoutine_645ce0, 0);
}

__int64 task_6463a0(__int64 a1, __int64 a2, int a3)
{

#pragma clang fp contract(off)
  void* v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  _QWORD* v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  _QWORD* v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  _QWORD* v19;
  __int64 v20;
  __int64* v21;
  __int64* v22;
  _QWORD* v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  _QWORD* v27;
  __int64 v28;
  __int64* v29;
  __int64* v30;
  _QWORD* v31;
  __int64 v32;
  __int64* v33;
  __int64* v34;
  _QWORD* v35;
  __int64 v36;
  __int64* v37;
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
  atomic_ullong* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  char* v56;
  _QWORD* v57;
  _QWORD* v58;
  _QWORD* v59;
  __int64 v60;
  int v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  _QWORD* v66;
  __int64 v67;
  __int64* v68;
  __int64 v69;
  __int64* v70;
  __int64 v71;
  int v72;
  unsigned int v73;
  unsigned int v74;
  __int64* v75;
  __int64 v76;
  __int64* v77;
  int v78;
  __int64* v79;
  __int64 v80;
  __int64* v81;
  __int64 v82;
  __int64 v83;
  _QWORD* v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  _QWORD* v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  _QWORD* v103;
  __int64* v104;
  __int64 v105;
  __int64 v106;
  _QWORD* v107;
  __int64* v108;
  __int64* v109;
  __int64 v110;
  __int64* v111;
  __int64* v112;
  __int64 v113;
  __int64* v114;
  __int64** v115;
  __int64* v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  int v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  int v136;
  __int64 v137;
  __int64 v138;
  int v139;
  __int64 v140;
  unsigned int v141;
  int v142;
  __int64 v143;
  __int64 v144;
  char v145;
  __int64 v146;
  int v147;
  __int64 v148;
  __int64 v149;
  _QWORD* v150;
  _QWORD* v151;
  _QWORD* v152;
  __int64 v153;
  struct {
    __int64 v155[2];
    __int128 v156;
    __int64 v157;
    __int64 v158;
  } v155_;
  __int64 v159[2];
  struct {
    __int64* v160;
    __int64 v161;
  } v160_;

  *(_DWORD*)(a1 + 13240) = a3;
  *(_DWORD*)(a1 + 13244) = a3;
  GameData_21a60d0 = a2;
  v4 = gxc_SetAllocator_5f400(GameRoutine_64a630, a1, GameRoutine_64a680, a1);
  GameRoutine_606880(v4);
  if (*(_BYTE*)(a1 + 244) == 1) {
    *(_BYTE*)(a1 + 244) = 0;
  }
  *(_BYTE*)(a1 + 248) = 1;
  GameRoutine_53930((void*)(v155_.v155), a1 + 240);
  v5 = v155_.v155[0];
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v155_.v155[0] != 0) {
    v7 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    v7[2] = 0;
    v7[3] = v5;
    *v7 = &GameData_1f8ec90;
    v7[1] = 0;
  }
  else {
    v7 = nullptr;
  }
  v8 = *(_QWORD*)(a1 + 264);
  v155_.v155[0] = 0;
  *(_QWORD*)(a1 + 256) = v5;
  *(_QWORD*)(a1 + 264) = v7;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  v9 = v155_.v155[0];
  v155_.v155[0] = 0;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  (*(void (**)(__int64, __int64))GameData_212c438[0])(
      *(_QWORD*)(a1 + 256) + 8LL, 1);
  (*(void (**)(__int64, __int64))GameData_212c440[0])(
      *(_QWORD*)(a1 + 256) + 8LL, 1);
  GameRoutine_5fc4f0(a1 + 568, *(_QWORD*)(a1 + 256) + 8LL);
  LODWORD(v155_.v155[0]) = 0;
  v155_.v155[1] = 0;
  GameRoutine_539a0((void*)(&v160_.v160), (__int64)v155_.v155);
  v10 = v160_.v160;
  if (v160_.v160 != nullptr) {
    v11 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 32, 16, 0);
    *v11 = &GameData_1f8ece0;
    v11[1] = 0;
    v11[2] = 0;
    v11[3] = v10;
  }
  else {
    v11 = nullptr;
  }
  v12 = *(_QWORD*)(a1 + 280);
  v160_.v160 = nullptr;
  *(_QWORD*)(a1 + 272) = v10;
  *(_QWORD*)(a1 + 280) = v11;
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
  v13 = v160_.v160;
  v160_.v160 = nullptr;
  if (v13 != nullptr) {
    (*(void (**)(__int64*))(*v13 + 8))(v13);
  }
  LODWORD(v155_.v155[0]) = 1;
  v155_.v155[1] = *(_QWORD*)(a1 + 272);
  GameRoutine_539a0((void*)(&v160_.v160), (__int64)v155_.v155);
  v14 = v160_.v160;
  if (v160_.v160 != nullptr) {
    v15 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 32, 16, 0);
    *v15 = &GameData_1f8ece0;
    v15[1] = 0;
    v15[2] = 0;
    v15[3] = v14;
  }
  else {
    v15 = nullptr;
  }
  v16 = *(_QWORD*)(a1 + 296);
  v160_.v160 = nullptr;
  *(_QWORD*)(a1 + 288) = v14;
  *(_QWORD*)(a1 + 296) = v15;
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  v17 = v160_.v160;
  v160_.v160 = nullptr;
  if (v17 != nullptr) {
    (*(void (**)(__int64*))(*v17 + 8))(v17);
  }
  v155_.v155[0] = 520093696;
  v155_.v155[1] = 34;
  GameRoutine_53b30((void*)((__int64*)&v160_.v160), (__int64)v155_.v155);
  v18 = v160_.v160;
  if (v160_.v160 != nullptr) {
    v19 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 32, 16, 0);
    *v19 = &GameData_1f8ebf0;
    v19[1] = 0;
    v19[2] = 0;
    v19[3] = v18;
  }
  else {
    v19 = nullptr;
  }
  v20 = *(_QWORD*)(a1 + 320);
  v160_.v160 = nullptr;
  *(_QWORD*)(a1 + 312) = v18;
  *(_QWORD*)(a1 + 320) = v19;
  if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak(v20);
  }
  v21 = v160_.v160;
  v160_.v160 = nullptr;
  if (v21 != nullptr) {
    (*(void (**)(__int64*))(*v21 + 8))(v21);
  }
  GameRoutine_5fc550(a1 + 12880, *(_QWORD*)(a1 + 312) + 8LL,
                     *(_QWORD*)(*(_QWORD*)(a1 + 312) + 328LL));
  v155_.v155[0] = 4096;
  v155_.v155[1] = 18;
  GameRoutine_53b30((void*)((__int64*)&v160_.v160), (__int64)v155_.v155);
  v22 = v160_.v160;
  if (v160_.v160 != nullptr) {
    v23 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 32, 16, 0);
    *v23 = &GameData_1f8ebf0;
    v23[1] = 0;
    v23[2] = 0;
    v23[3] = v22;
  }
  else {
    v23 = nullptr;
  }
  v24 = *(_QWORD*)(a1 + 336);
  v160_.v160 = nullptr;
  *(_QWORD*)(a1 + 328) = v22;
  *(_QWORD*)(a1 + 336) = v23;
  if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    std___1___shared_weak_count___release_weak(v24);
  }
  v25 = v160_.v160;
  v160_.v160 = nullptr;
  if (v25 != nullptr) {
    (*(void (**)(__int64*))(*v25 + 8))(v25);
  }
  v155_.v155[0] = 0x200000;
  v155_.v155[1] = 34;
  GameRoutine_53b30((void*)((__int64*)&v160_.v160), (__int64)v155_.v155);
  v26 = v160_.v160;
  if (v160_.v160 != nullptr) {
    v27 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 32, 16, 0);
    *v27 = &GameData_1f8ebf0;
    v27[1] = 0;
    v27[2] = 0;
    v27[3] = v26;
  }
  else {
    v27 = nullptr;
  }
  v28 = *(_QWORD*)(a1 + 352);
  v160_.v160 = nullptr;
  *(_QWORD*)(a1 + 344) = v26;
  *(_QWORD*)(a1 + 352) = v27;
  if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
  v29 = v160_.v160;
  v160_.v160 = nullptr;
  if (v29 != nullptr) {
    (*(void (**)(__int64*))(*v29 + 8))(v29);
  }
  v155_.v155[0] = 1056964608;
  v155_.v155[1] = 161;
  GameRoutine_53b30((void*)((__int64*)&v160_.v160), (__int64)v155_.v155);
  v30 = v160_.v160;
  if (v160_.v160 != nullptr) {
    v31 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 32, 16, 0);
    *v31 = &GameData_1f8ebf0;
    v31[1] = 0;
    v31[2] = 0;
    v31[3] = v30;
  }
  else {
    v31 = nullptr;
  }
  v32 = *(_QWORD*)(a1 + 368);
  v160_.v160 = nullptr;
  *(_QWORD*)(a1 + 360) = v30;
  *(_QWORD*)(a1 + 368) = v31;
  if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
    std___1___shared_weak_count___release_weak(v32);
  }
  v33 = v160_.v160;
  v160_.v160 = nullptr;
  if (v33 != nullptr) {
    (*(void (**)(__int64*))(*v33 + 8))(v33);
  }
  v155_.v155[0] = 0x80000;
  v155_.v155[1] = 36;
  GameRoutine_53b30((void*)((__int64*)&v160_.v160), (__int64)v155_.v155);
  v34 = v160_.v160;
  if (v160_.v160 != nullptr) {
    v35 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 32, 16, 0);
    *v35 = &GameData_1f8ebf0;
    v35[1] = 0;
    v35[2] = 0;
    v35[3] = v34;
  }
  else {
    v35 = nullptr;
  }
  v36 = *(_QWORD*)(a1 + 384);
  v160_.v160 = nullptr;
  *(_QWORD*)(a1 + 376) = v34;
  *(_QWORD*)(a1 + 384) = v35;
  if (v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
    std___1___shared_weak_count___release_weak(v36);
  }
  v37 = v160_.v160;
  v160_.v160 = nullptr;
  if (v37 != nullptr) {
    (*(void (**)(__int64*))(*v37 + 8))(v37);
  }
  task_6478c0(a1);
  GameRoutine_53a90((void*)(v155_.v155));
  v38 = v155_.v155[0];
  v39 = *(_QWORD*)(a1 + 520);
  v155_.v155[0] = 0;
  *(_QWORD*)(a1 + 520) = v38;
  if (v39 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v39 + 8LL))(v39);
    v40 = v155_.v155[0];
    v155_.v155[0] = 0;
    if (v40 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v40 + 8LL))(v40);
    }
  }
  GameRoutine_53ae0((void*)(v155_.v155));
  v41 = v155_.v155[0];
  v42 = *(_QWORD*)(a1 + 528);
  v155_.v155[0] = 0;
  *(_QWORD*)(a1 + 528) = v41;
  if (v42 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v42 + 8LL))(v42);
    v43 = v155_.v155[0];
    v155_.v155[0] = 0;
    if (v43 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v43 + 8LL))(v43);
    }
  }
  GameRoutine_53ae0((void*)(v155_.v155));
  v44 = v155_.v155[0];
  v45 = *(_QWORD*)(a1 + 536);
  v155_.v155[0] = 0;
  *(_QWORD*)(a1 + 536) = v44;
  if (v45 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v45 + 8LL))(v45);
    v46 = v155_.v155[0];
    v155_.v155[0] = 0;
    if (v46 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v46 + 8LL))(v46);
    }
  }
  GameRoutine_53ae0((void*)(v155_.v155));
  v47 = v155_.v155[0];
  v48 = *(_QWORD*)(a1 + 544);
  v155_.v155[0] = 0;
  *(_QWORD*)(a1 + 544) = v47;
  if (v48 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v48 + 8LL))(v48);
    v49 = v155_.v155[0];
    v155_.v155[0] = 0;
    if (v49 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v49 + 8LL))(v49);
    }
  }
  LOBYTE(v155_.v155[0]) = 0;
  LOBYTE(v155_.v156) = 0;
  task_647d00((_QWORD*)a1, 0, (__int64)"RootCl", 6u, (__int64)v155_.v155, 0,
              0x1000000, 1);
  v50 = fw_memory_HeapManager_Allocate(*v6, 40, 16, 0);
  *(_QWORD*)(v50 + 8) = 0;
  v51 = (atomic_ullong*)(v50 + 8);
  *(_QWORD*)(v50 + 16) = 0;
  *(_QWORD*)(v50 + 32) = a1;
  *(_QWORD*)v50 = GameData_1f8ed30;
  v52 = v50;
  *(_QWORD*)(v50 + 24) = gfx_anonymous_RootRenderTask_vtable;
  v53 = v50 + 24;
  v159[0] = v50 + 24;
  v159[1] = v50;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v50 + 8), 1u,
                            memory_order_relaxed);
  v160_.v160 = (__int64*)"RootCl";
  v160_.v161 = 6;
  Registration_6492e0((_QWORD*)a1, v159, (__int64*)&v160_.v160, 1, 0x80000000);
  if (atomic_fetch_add(v51, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
    std___1___shared_weak_count___release_weak(v52);
  }
  atomic_fetch_add_explicit(v51, 1u, memory_order_relaxed);
  v54 = *(_QWORD*)(a1 + 13176);
  v55 = *(_QWORD*)(a1 + 13184);
  atomic_fetch_add_explicit(v51, 1u, memory_order_relaxed);
  if (v54 != v55) {
    while (*(_QWORD*)(v54 + 8) != v53) {
      v54 += 72;
      if (v54 == v55) {
        v54 = v55;
        break;
      }
    }
  }
  if (atomic_fetch_add(v51, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
    std___1___shared_weak_count___release_weak(v52);
  }
  if (v54 != *(_QWORD*)(a1 + 13184)) {
    if ((*(_BYTE*)(v54 + 48) & 1) != 0) {
      *(_QWORD*)(v54 + 56) = 19;
      v56 = *(char**)(v54 + 64);
    }
    else {
      *(_BYTE*)(v54 + 48) = 38;
      v56 = (char*)(v54 + 49);
    }
    strcpy(v56, "gfx::RootRenderTask");
  }
  if (atomic_fetch_add(v51, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
    std___1___shared_weak_count___release_weak(v52);
  }
  v57 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 128, 16, 0);
  gxc_NvnStateCache_NvnStateCache(v57);
  v58 = v57;
  v59 = *(_QWORD**)(a1 + 512);
  *(_QWORD*)(a1 + 512) = v58;
  if (v59 != nullptr) {
    gxc_NvnStateCache_Destroy_NvnStateCache(v59);
    v60 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v60 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v60, v59);
    v58 = *(_QWORD**)(a1 + 512);
  }
  GameRoutine_a8d980(v58);
  if (atomic_fetch_add(v51, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
    std___1___shared_weak_count___release_weak(v52);
  }
  v61 = gxc_NvnDevice_GetInteger(*(_QWORD*)(a1 + 256), 18) + 256;
  v62 = *v6;
  LODWORD(v160_.v160) = 0x8000;
  HIDWORD(v160_.v160) = v61;
  v160_.v161 = *(_QWORD*)(a1 + 344);
  v63 = fw_memory_HeapManager_Allocate(v62, 240, 16, 0);
  v64 = *(_QWORD*)(a1 + 264);
  v65 = v63;
  v155_.v155[0] = *(_QWORD*)(a1 + 256);
  v155_.v155[1] = v64;
  if (v64 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v64 + 8), 1u,
                              memory_order_relaxed);
    game_615300(v63, v155_.v155, (int*)&v160_.v160);
    if (atomic_fetch_add((atomic_ullong* volatile)(v64 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v64 + 16LL))(v64);
      std___1___shared_weak_count___release_weak(v64);
    }
  }
  else {
    game_615300(v63, v155_.v155, (int*)&v160_.v160);
  }
  v66 = *(_QWORD**)(a1 + 552);
  *(_QWORD*)(a1 + 552) = v65;
  if (v66 != nullptr) {
    GameRoutine_615400(v66);
    v67 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v67 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v67, v66);
    v65 = *(_QWORD*)(a1 + 552);
  }
  v155_.v155[1] = 0x100000001LL;
  LODWORD(v155_.v156) = 0;
  *(_DWORD*)((char*)&v155_.v156 + 7) = 256;
  DWORD1(v155_.v156) = 5;
  v155_.v155[0] = GameData_22030f8;
  v155_.v157 = *(_QWORD*)(a1 + 360);
  v155_.v158 = *(_QWORD*)(v65 + 16);
  GameRoutine_53c20((void*)((__int64*)&v160_.v160), (unsigned int*)v155_.v155);
  v68 = v160_.v160;
  v69 = *(_QWORD*)(a1 + 560);
  v160_.v160 = nullptr;
  *(_QWORD*)(a1 + 560) = v68;
  if (v69 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v69 + 8LL))(v69);
    v70 = v160_.v160;
    v160_.v160 = nullptr;
    if (v70 != nullptr) {
      (*(void (**)(__int64*))(*v70 + 8))(v70);
    }
  }
  v71 = *(unsigned int*)(a1 + 13240);
  v72 = 0;
  v155_.v155[1] = 0x100000001LL;
  *(_QWORD*)&v155_.v156 = 0;
  *(_DWORD*)((char*)&v155_.v156 + 7) = 0;
  if ((unsigned int)v71 <= 6) {
    v72 = GameData_1b36694[v71];
  }
  DWORD1(v155_.v156) = v72;
  v73 = *(_DWORD*)(a1 + 13312);
  v74 = *(_DWORD*)(a1 + 13316);
  BYTE8(v155_.v156) = 1;
  v155_.v155[0] = __PAIR64__(v74, v73);
  v155_.v157 = *(_QWORD*)(a1 + 360);
  v155_.v158 = *(_QWORD*)(*(_QWORD*)(a1 + 552) + 16LL);
  GameRoutine_53c20((void*)((__int64*)&v160_.v160), (unsigned int*)v155_.v155);
  v75 = v160_.v160;
  v76 = *(_QWORD*)(a1 + 456);
  v160_.v160 = nullptr;
  *(_QWORD*)(a1 + 456) = v75;
  if (v76 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v76 + 8LL))(v76);
    v77 = v160_.v160;
    v160_.v160 = nullptr;
    if (v77 != nullptr) {
      (*(void (**)(__int64*))(*v77 + 8))(v77);
    }
  }
  (*(void (**)(_QWORD, const char*, __int64))(**(_QWORD**)(a1 + 456) + 24LL))(
      *(_QWORD*)(a1 + 456), "Layer2D", 7);
  v78 = *(_DWORD*)(a1 + 13316);
  v155_.v155[1] = 0x100000001LL;
  *(_QWORD*)&v155_.v156 = 0x400000000LL;
  *(_WORD*)((char*)&v155_.v156 + 9) = 0;
  BYTE8(v155_.v156) = 1;
  LODWORD(v155_.v155[0]) = *(_DWORD*)(a1 + 13312);
  HIDWORD(v155_.v155[0]) = v78;
  v155_.v157 = *(_QWORD*)(a1 + 360);
  v155_.v158 = *(_QWORD*)(*(_QWORD*)(a1 + 552) + 16LL);
  GameRoutine_53c20((void*)((__int64*)&v160_.v160), (unsigned int*)v155_.v155);
  v79 = v160_.v160;
  v80 = *(_QWORD*)(a1 + 464);
  v160_.v160 = nullptr;
  *(_QWORD*)(a1 + 464) = v79;
  if (v80 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v80 + 8LL))(v80);
    v81 = v160_.v160;
    v160_.v160 = nullptr;
    if (v81 != nullptr) {
      (*(void (**)(__int64*))(*v81 + 8))(v81);
    }
  }
  (*(void (**)(_QWORD, const char*, __int64))(**(_QWORD**)(a1 + 464) + 24LL))(
      *(_QWORD*)(a1 + 464), "LayerDebug", 10);
  v82 = *v6;
  *(_DWORD*)(a1 + 13168) = 0;
  *(_DWORD*)(a1 + 13400) = 0;
  *(_QWORD*)(a1 + 13392) = 1000000000;
  v83 = fw_memory_HeapManager_Allocate(v82, 88, 16, 0);
  v84 = *(_QWORD**)(a1 + 13424);
  *(_QWORD*)v83 = a1;
  *(_QWORD*)(v83 + 8) = 0;
  *(_QWORD*)(v83 + 16) = 0;
  *(_QWORD*)(v83 + 24) = 0;
  *(_QWORD*)(v83 + 32) = 0;
  *(_QWORD*)(v83 + 48) = 0;
  *(_QWORD*)(v83 + 56) = 0;
  *(_QWORD*)(v83 + 64) = 0;
  *(_QWORD*)(v83 + 72) = 0;
  *(_QWORD*)(a1 + 13424) = v83;
  *(_DWORD*)(v83 + 40) = 1065353216;
  *(_DWORD*)(v83 + 80) = 1065353216;
  if (v84 != nullptr) {
    ABoot_b34120(v84);
    v85 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v85 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v85, v84);
  }
  v86 = fw_memory_HeapManager_Allocate(*v6, 96, 16, 0);
  *(_DWORD*)(v86 + 32) = 1065353216;
  *(_DWORD*)(v86 + 80) = 1065353216;
  v87 = *(_QWORD*)(a1 + 13232);
  *(_QWORD*)v86 = 0;
  *(_QWORD*)(v86 + 8) = 0;
  *(_QWORD*)(v86 + 16) = 0;
  *(_QWORD*)(v86 + 24) = 0;
  *(_BYTE*)(v86 + 40) = 0;
  *(_QWORD*)(v86 + 48) = 0;
  *(_QWORD*)(v86 + 56) = 0;
  *(_QWORD*)(v86 + 64) = 0;
  *(_QWORD*)(v86 + 72) = 0;
  *(_DWORD*)(v86 + 88) = 0;
  *(_QWORD*)(a1 + 13232) = v86;
  if (v87 != 0) {
    GameRoutine_a93620(v87);
    v88 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v88 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v88, v87);
    v89 = *(_QWORD*)(a1 + 13232);
  }
  else {
    v89 = v86;
  }
  v90 = fw_memory_HeapManager_Allocate(*v6, 256, 16, 0);
  *(_QWORD*)v90 = a1;
  *(_QWORD*)(v90 + 8) = v89;
  v91 = *(_QWORD*)(a1 + 13408);
  *(_QWORD*)(v90 + 16) = 0;
  *(_QWORD*)(v90 + 24) = 0;
  *(_QWORD*)(v90 + 32) = 0;
  *(_QWORD*)(v90 + 40) = 0;
  *(_QWORD*)(v90 + 56) = 0;
  *(_QWORD*)(v90 + 64) = 0;
  *(_QWORD*)(v90 + 72) = 0;
  *(_QWORD*)(v90 + 80) = 0;
  *(_QWORD*)(v90 + 96) = 0;
  *(_QWORD*)(v90 + 104) = 0;
  *(_QWORD*)(v90 + 112) = 0;
  *(_QWORD*)(v90 + 120) = 0;
  *(_QWORD*)(v90 + 136) = 0;
  *(_QWORD*)(v90 + 144) = 0;
  *(_QWORD*)(v90 + 152) = 0;
  *(_QWORD*)(v90 + 160) = 0;
  *(_QWORD*)(v90 + 176) = 0;
  *(_QWORD*)(v90 + 184) = 0;
  *(_DWORD*)(v90 + 48) = 1065353216;
  *(_DWORD*)(v90 + 88) = 1065353216;
  *(_DWORD*)(v90 + 128) = 1065353216;
  *(_DWORD*)(v90 + 168) = 1065353216;
  *(_QWORD*)(v90 + 192) = 0;
  *(_DWORD*)(v90 + 200) = 0;
  *(_QWORD*)(v90 + 240) = 0;
  *(_QWORD*)(v90 + 248) = 0;
  *(_QWORD*)(v90 + 224) = 0;
  *(_QWORD*)(v90 + 232) = 0;
  *(_QWORD*)(v90 + 208) = 0;
  *(_QWORD*)(v90 + 216) = 0;
  *(_QWORD*)(a1 + 13408) = v90;
  if (v91 != 0) {
    GameRoutine_64b7e0(v91);
    v92 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v92 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v92, v91);
  }
  v93 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 104, 16, 0);
  v94 = *(_QWORD*)(a1 + 13416);
  v93[11] = 0;
  v93[12] = 0;
  *v93 = 0;
  v93[1] = 0;
  v93[2] = 0;
  v93[3] = 0;
  v93[4] = 0;
  v93[5] = 0;
  v93[6] = 0;
  v93[7] = 0;
  v93[8] = 0;
  v93[9] = 0;
  v93[10] = 0;
  *((_DWORD*)v93 + 8) = 1065353216;
  *((_DWORD*)v93 + 24) = 1065353216;
  *(_QWORD*)(a1 + 13416) = v93;
  if (v94 != 0) {
    GameRoutine_64b040(v94);
    v95 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v95 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v95, v94);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22030f0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_22030f0) != 0) {
    GameRoutine_2b0();
    __cxa_guard_release(&GameData_22030f0);
  }
  v96 = *(_QWORD*)(a1 + 360);
  v97 = *(_QWORD*)(a1 + 368);
  v98 = *(_QWORD*)(*(_QWORD*)(a1 + 552) + 16LL);
  if (v97 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v97 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v97 + 8), 1u,
                              memory_order_relaxed);
  }
  v99 = GameData_2203098;
  GameData_2203088 = v98;
  GameData_2203090 = v96;
  GameData_2203098 = v97;
  if (v99 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v99 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v99 + 16LL))(v99);
    std___1___shared_weak_count___release_weak(v99);
  }
  if (v97 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v97 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v97 + 16LL))(v97);
    std___1___shared_weak_count___release_weak(v97);
  }
  v100 = fw_memory_HeapManager_Allocate(*v6, 25216, 16, 0);
  GameRoutine_a8df80(v100);
  v101 = *(_QWORD*)(a1 + 13224);
  *(_QWORD*)(a1 + 13224) = v100;
  if (v101 != 0) {
    GameRoutine_a8e280(v101);
    v102 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v102 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v102, v101);
  }
  v103 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 40, 16, 0);
  v104 = *(__int64**)(a1 + 16664);
  *v103 = 0;
  v103[1] = 0;
  v103[2] = 0;
  v103[3] = 0;
  v103[4] = 0;
  *(_QWORD*)(a1 + 16664) = v103;
  if (v104 != nullptr) {
    GameRoutine_beeb60(v104);
    v105 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v105 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v105, v104);
  }
  v106 = *(_QWORD*)(a1 + 312);
  v107 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 128, 16, 0);
  v108 = (__int64*)fw_memory_HeapManager_Allocate(*v6, 24, 16, 0);
  *v108 = 0;
  v108[1] = 0;
  v108[2] = 0;
  *v107 = v108;
  LODWORD(v155_.v155[0]) = 0;
  v155_.v155[1] = 240;
  *(_QWORD*)&v155_.v156 = v106;
  GameRoutine_53bd0((void*)((__int64*)&v160_.v160), (int*)v155_.v155);
  v109 = v160_.v160;
  v110 = *v108;
  v160_.v160 = nullptr;
  *v108 = (__int64)v109;
  if (v110 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v110 + 8LL))(v110);
    v111 = v160_.v160;
    v160_.v160 = nullptr;
    if (v111 != nullptr) {
      (*(void (**)(__int64*))(*v111 + 8))(v111);
    }
  }
  GameRoutine_53bd0((void*)((__int64*)&v160_.v160), (int*)v155_.v155);
  v112 = v160_.v160;
  v113 = v108[1];
  v160_.v160 = nullptr;
  v108[1] = (__int64)v112;
  if (v113 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v113 + 8LL))(v113);
    v114 = v160_.v160;
    v160_.v160 = nullptr;
    if (v114 != nullptr) {
      (*(void (**)(__int64*))(*v114 + 8))(v114);
    }
  }
  v115 = *(__int64***)(a1 + 16704);
  v107[14] = 0;
  v107[15] = 0;
  v107[12] = 0;
  v107[13] = 0;
  v107[10] = 0;
  v107[11] = 0;
  v107[8] = 0;
  v107[9] = 0;
  v107[6] = 0;
  v107[7] = 0;
  v107[4] = 0;
  v107[5] = 0;
  v107[2] = 0;
  v107[3] = 0;
  v107[1] = 0;
  *(_QWORD*)(a1 + 16704) = v107;
  if (v115 != nullptr) {
    v116 = *v115;
    *v115 = nullptr;
    if (v116 != nullptr) {
      v117 = v116[1];
      v116[1] = 0;
      if (v117 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v117 + 8LL))(v117);
      }
      v118 = *v116;
      *v116 = 0;
      if (v118 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v118 + 8LL))(v118);
      }
      v119 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v119 = 56;
      }
      nn_mem_StandardAllocator_Free(*v6 + v119, v116);
    }
    v120 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v120 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v120, v115);
  }
  v121 = *(_DWORD*)(a1 + 13316);
  v122 = *(_QWORD*)(a1 + 256) + 8LL;
  DWORD2(v155_.v156) = *(_DWORD*)(a1 + 13312);
  v123 = *(_QWORD*)(a1 + 13304);
  HIDWORD(v155_.v156) = v121;
  LODWORD(v155_.v157) = 1;
  v124 = *v6;
  *(_QWORD*)&v155_.v156 = v123;
  v125 = *(_QWORD*)(*(_QWORD*)(a1 + 552) + 16LL);
  BYTE4(v155_.v157) = 0;
  v155_.v155[0] = v122;
  v155_.v155[1] = v125;
  v126 = fw_memory_HeapManager_Allocate(v124, 2136, 16, 0);
  memset(v126, 0, 2136);
  v130 = v126;
  *(_DWORD*)(v126 + 2128) = -1;
  v131 = *(_QWORD*)(a1 + 16672);
  *(_QWORD*)(a1 + 16672) = v130;
  if (v131 != 0) {
    if (*(_BYTE*)(v131 + 2124) == 1) {
      (*(void (**)(__int64))GameData_2132160[0])(v131 + 40);
      gxc_Free_5f440(*(_QWORD*)(v131 + 2088));
    }
    v132 = *(_QWORD*)(v131 + 2096);
    if (v132 != 0) {
      v133 = *v6;
      *(_QWORD*)(v131 + 2104) = v132;
      v134 = 128;
      if (*(_QWORD*)(v133 + 200) == 0) {
        v134 = 56;
      }
      nn_mem_StandardAllocator_Free(v133 + v134, v132);
    }
    v135 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v135 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v135, v131);
    v130 = *(_QWORD*)(a1 + 16672);
  }
  GameRoutine_18df280(v130, v155_.v155);
  *(_DWORD*)(a1 + 16680) = v155_.v157;
  *(_BYTE*)(a1 + 16684) = BYTE4(v155_.v157);
  if (*(_BYTE*)(a1 + 16696) == 1) {
    *(_BYTE*)(a1 + 16696) = 0;
  }
  v136 = *(_DWORD*)(a1 + 13240);
  if ((unsigned int)(v136 - 3) > 3) {
    v137 = *(_QWORD*)(a1 + 13232);
    LOBYTE(v155_.v155[0]) = 20;
    strcpy((char*)v155_.v155 + 1, "co_o_rbwcg");
    v160_.v160 = v155_.v155;
    *(_DWORD*)(game_templates_a93ea0((float*)v137, (unsigned __int8*)v155_.v155,
                                     (__int64)std___1_piecewise_construct_ptr,
                                     &v160_.v160) +
               40) = 0;
    if ((v155_.v155[0] & 1) == 0) {
      goto LABEL_194;
    }
  }
  else {
    v137 = *(_QWORD*)(a1 + 13232);
    LOBYTE(v155_.v155[0]) = 20;
    strcpy((char*)v155_.v155 + 1, "co_o_rbwcg");
    v160_.v160 = v155_.v155;
    if ((unsigned int)(v136 - 5) > 1) {
      v138 = game_templates_a93ea0((float*)v137, (unsigned __int8*)v155_.v155,
                                   (__int64)std___1_piecewise_construct_ptr,
                                   &v160_.v160);
      v139 = 1;
    }
    else {
      v138 = game_templates_a93ea0((float*)v137, (unsigned __int8*)v155_.v155,
                                   (__int64)std___1_piecewise_construct_ptr,
                                   &v160_.v160);
      v139 = 2;
    }
    *(_DWORD*)(v138 + 40) = v139;
    if ((v155_.v155[0] & 1) == 0) {
      goto LABEL_194;
    }
  }
  if ((_QWORD)v155_.v156 != 0) {
    v140 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v140 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v140, v155_.v156);
  }
LABEL_194:
  *(_BYTE*)(v137 + 40) = 1;
  v141 = *(_DWORD*)(a1 + 13240) - 2;
  if (v141 > 4) {
    v142 = 0;
  }
  else {
    v142 = GameData_1b36680[v141];
  }
  v143 = *(_QWORD*)(a1 + 13232);
  LOBYTE(v155_.v155[0]) = 20;
  strcpy((char*)v155_.v155 + 1, "co_o_omihd");
  v160_.v160 = v155_.v155;
  v144 = game_templates_a93ea0((float*)v143, (unsigned __int8*)v155_.v155,
                               (__int64)std___1_piecewise_construct_ptr,
                               &v160_.v160);
  v145 = v155_.v155[0];
  *(_DWORD*)(v144 + 40) = v142;
  if ((v145 & 1) != 0 && (_QWORD)v155_.v156 != 0) {
    v146 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v146 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v146, v155_.v156);
  }
  *(_BYTE*)(v143 + 40) = 1;
  (*(void (**)(_QWORD, __int64, __int64))GameData_212c420[0])(
      *(_QWORD*)(a1 + 568), 70, a1 + 480);
  v147 = *(_DWORD*)(a1 + 240);
  v148 = *v6;
  LODWORD(v155_.v155[1]) = 7;
  v155_.v155[0] = *(_QWORD*)(a1 + 312);
  v149 = 256;
  if ((*(_BYTE*)(a1 + 244) & (v147 > 2)) != 0) {
    v149 = 10240;
  }
  *(_QWORD*)&v155_.v156 = 0x40000;
  *((_QWORD*)&v155_.v156 + 1) = v149;
  LODWORD(v155_.v157) = 3;
  v150 = (_QWORD*)fw_memory_HeapManager_Allocate(v148, 128, 16, 0);
  v151 = v150 + 3;
  v152 = v150;
  v150[1] = 0;
  v150[2] = 0;
  *v150 = GameData_1f8eba0;
  GameRoutine_194d1c0((__int64)(v150 + 3), v155_.v155, 0x64u);
  *(_QWORD*)(a1 + 16576) = v151;
  v153 = *(_QWORD*)(a1 + 16584);
  *(_QWORD*)(a1 + 16584) = v152;
  if (v153 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v153 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v153 + 16LL))(v153);
    std___1___shared_weak_count___release_weak(v153);
  }
  WorkerThread_194daa0(a1 + 13456, 0, 0x100000, (__int64*)(a1 + 16576));
  WorkerThread_194daa0(a1 + 14080, 1u, 0x100000, (__int64*)(a1 + 16576));
  WorkerThread_194daa0(a1 + 14704, 2u, 0x100000, (__int64*)(a1 + 16576));
  WorkerThread_194daa0(a1 + 15328, 3u, 0x100000, (__int64*)(a1 + 16576));
  return WorkerThread_194daa0(a1 + 15952, 4u, 0x100000, (__int64*)(a1 + 16576));
}

__int64 task_6478c0(__int64 a1)
{
  __int64 v1;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 result;
  _QWORD* v10;
  unsigned int v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  char* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  _BYTE* v28;
  char* v29;
  __int64 v30;
  _BYTE* v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  struct {
    _QWORD v35[2];
    char* v36;
  } v35_;
  _QWORD v37[4];
  _QWORD v38[4];
  struct {
    __int64 v39[2];
    unsigned __int64 v40;
    __int64 (*v41)();
    __int64 v42;
  } v39_;
  struct {
    _BYTE v43[256];
    _BYTE* v44;
  } v43_;
  __int64* v45[4];
  struct {
    char v46[8];
    char v47;
  } v46_;
  struct {
    _QWORD v48[2];
    int v49;
    char gap468_[4];
    __int64 v50;
    __int64 v51;
  } v48_;

  v1 = *(unsigned int*)(a1 + 13240);
  if ((unsigned int)v1 > 6) {
    v3 = 0;
  }
  else {
    v3 = GameData_1b36664[v1];
  }
  v37[0] = GameData_22030f8;
  v37[1] = v3 | 0x200000000LL;
  v4 = *(_QWORD*)(a1 + 360);
  v37[2] = GameData_21a60d0;
  v37[3] = v4;
  GameRoutine_539f0((void*)(v39_.v39), (__int64)v37);
  v5 = v39_.v39[0];
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v39_.v39[0] != 0) {
    v7 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    v7[2] = 0;
    v7[3] = v5;
    *v7 = &GameData_1f8ec40;
    v7[1] = 0;
  }
  else {
    v7 = nullptr;
  }
  v8 = *(_QWORD*)(a1 + 400);
  v39_.v39[0] = 0;
  *(_QWORD*)(a1 + 392) = v5;
  *(_QWORD*)(a1 + 400) = v7;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  result = v39_.v39[0];
  v39_.v39[0] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v10 = *(_QWORD**)(a1 + 392);
  *(_QWORD*)(a1 + 416) = *(_QWORD*)(a1 + 408);
  if (v10[82] != v10[81]) {
    v11 = 1;
    v12 = 0;
    while (1) {
      v14 = *(_QWORD**)(a1 + 416);
      v13 = *(_QWORD*)(a1 + 424);
      if ((unsigned __int64)v14 >= v13) {
        v16 = *(_QWORD*)(a1 + 408);
        v17 = (char*)v14 - v16;
        v18 = ((__int64)v14 - v16) >> 4;
        v19 = v18 + 1;
        if ((unsigned __int64)(v18 + 1) >> 60 != 0) {
          GameRoutine_64a810();
        }
        v20 = v13 - v16;
        if (v20 >> 3 > v19) {
          v19 = v20 >> 3;
        }
        v21 = (unsigned __int64)v20 >= 0x7FFFFFFFFFFFFFF0LL
                  ? 0xFFFFFFFFFFFFFFFLL
                  : v19;
        if (v21 != 0) {
          if (v21 >> 60 != 0) {
            GameRoutine_60a210();
          }
          v22 = fw_memory_HeapManager_Allocate(*v6, 16 * v21, 16, 0);
        }
        else {
          v22 = 0;
        }
        v23 = &v17[v22];
        v24 = v22 + 16 * v21;
        v25 = (__int64)&v17[v22 + -16 * v18];
        *(_QWORD*)v23 = 0;
        *((_QWORD*)v23 + 1) = 0;
        v15 = (__int64)&v17[v22 + 16];
        memcpy(v25, v16, v17);
        *(_QWORD*)(a1 + 408) = v25;
        *(_QWORD*)(a1 + 416) = v15;
        *(_QWORD*)(a1 + 424) = v24;
        v6 = &fw_memory_g_heap_manager;
        if (v16 != 0) {
          v26 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v26 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v26, v16);
        }
      }
      else {
        *v14 = 0;
        v14[1] = 0;
        v15 = (__int64)(v14 + 2);
      }
      *(_QWORD*)(a1 + 416) = v15;
      *(_QWORD*)(v15 - 16) = *(_QWORD*)(v10[81] + 8 * v12);
      *(_QWORD*)(*(_QWORD*)(a1 + 416) - 8LL) = v10[84] + 16 * v12;
      v39_.v42 = 0;
      v43_.v44 = v43_.v43;
      v48_.v49 = 0;
      v46_.v46[0] = 0;
      v46_.v47 = 0;
      v38[0] = v11 - 1;
      v38[1] = 0;
      v38[2] = 6;
      v39_.v39[0] = (__int64)v43_.v43;
      v39_.v39[1] = 256;
      v39_.v40 = 0;
      v39_.v41 = GameRoutine_64be60;
      v48_.v48[0] = "BackBuffers[{}]";
      v48_.v48[1] = "";
      v48_.v50 = 0;
      v48_.v51 = 1;
      v45[1] = (_QWORD*)(((_UNKNOWN*)0x0LL) + 1);
      v45[2] = v38;
      v45[3] = (_QWORD*)((_UNKNOWN*)0x6LL);
      v45[0] = v39_.v39;
      GameRoutine_6380e0((__int64)v48_.v48, v45);
      if (v46_.v47 == 1) {
        std___1_locale_Destroy_locale(v46_.v46);
      }
      v27 = v39_.v40;
      if (v39_.v40 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      v28 = v43_.v44;
      if (v39_.v40 >= 0x17) {
        break;
      }
      v29 = (char*)v35_.v35 + 1;
      LOBYTE(v35_.v35[0]) = 2 * v39_.v40;
      if (v39_.v40 != 0) {
        goto LABEL_41;
      }
    LABEL_42:
      v31 = v43_.v44;
      v29[v27] = 0;
      if (v31 != v43_.v43 && v31 != nullptr) {
        v32 = 128;
        if (*(_QWORD*)(*v6 + 200) == 0) {
          v32 = 56;
        }
        nn_mem_StandardAllocator_Free(*v6 + v32, v31);
      }
      if ((v35_.v35[0] & 1) != 0) {
        v33 = v35_.v36;
      }
      else {
        v33 = (char*)v35_.v35 + 1;
      }
      result = GameData_2177cb8(*(_QWORD*)(*(_QWORD*)(a1 + 416) - 16LL), v33);
      if ((v35_.v35[0] & 1) != 0 && v35_.v36 != nullptr) {
        v34 = 128;
        if (*(_QWORD*)(*v6 + 200) == 0) {
          v34 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*v6 + v34, v35_.v36);
      }
      v12 = v11++;
      if (v12 >= (__int64)(v10[82] - v10[81]) >> 3) {
        return result;
      }
    }
    if ((v39_.v40 | 7) == 0x17) {
      v30 = 26;
    }
    else {
      v30 = (v39_.v40 | 7) + 1;
    }
    v29 = (char*)fw_memory_HeapManager_Allocate(*v6, v30, 16, 0);
    v35_.v35[1] = v27;
    v35_.v36 = v29;
    v35_.v35[0] = v30 | 1;
  LABEL_41:
    memmove(v29, v28, v27);
    goto LABEL_42;
  }
  return result;
}

__int64 task_647d00(_QWORD* a1, int a2, __int64 a3, unsigned __int64 a4,
                    __int64 a5, int a6, __int64 a7, char a8)
{
  __int64* v11;
  _QWORD* v12;
  _QWORD* v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  __int64* v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  _QWORD* v65;
  __int64* v66;
  __int64 v67;
  char* v68;
  __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  char* v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  _QWORD* v81;
  signed __int64 v82;
  bool v83;
  _QWORD* v85;
  __int64 v86;
  __int64 v91[3];
  _QWORD v92[2];
  struct {
    __int64 v93;
    int v94;
    char gap84_[4];
    __int64 v95;
    __int64 v96;
    int v97;
  } v93_;

  if ((a8 & 1) == 0) {
    a7 = 0x200000;
  }
  v93_.v94 = 7;
  v93_.v93 = a1[39];
  v93_.v95 = 0x100000;
  v93_.v96 = 4096;
  v93_.v97 = 255;
  if (a2 == 1) {
    v93_.v94 = 2;
  }
  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
  v12 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 216, 16, 0);
  v12[13] = 0;
  v13 = v12 + 13;
  v14 = v12;
  *v12 = 0;
  v12[1] = 0;
  v12[2] = 0;
  v12[3] = 0;
  v12[4] = 0;
  v12[5] = 0;
  v12[6] = 0;
  v12[7] = 0;
  v12[8] = 0;
  v12[9] = 0;
  v12[10] = 0;
  v12[11] = 0;
  v12[12] = 0;
  v12[14] = 0;
  v12[15] = 0;
  v12[17] = 0;
  v12[18] = 0;
  v12[19] = 0;
  v12[20] = 0;
  v12[21] = 0;
  v12[22] = 0;
  v12[23] = 0;
  v12[24] = 0;
  v12[25] = 0;
  v12[26] = 0;
  v12[16] = 0;
  v15 = v12 + 16;
  gxc_GpuMemory_GpuMemory_5d4d0(v12 + 13);
  gxc_GpuMemory_GpuMemory_5d4d0(v15);
  *((_DWORD*)v14 + 40) = 0;
  v14[21] = 0;
  v14[22] = 0;
  v14[23] = 0;
  v14[24] = 0;
  v14[25] = 0;
  v14[26] = 0;
  *(_DWORD*)v14 = a2;
  v14[19] = 0x200000;
  GameRoutine_53a40((void*)(v91), (__int64)&v93_.v93);
  v16 = v91[0];
  if (v91[0] != 0) {
    v17 = (_QWORD*)fw_memory_HeapManager_Allocate(*v11, 32, 16, 0);
    *v17 = &GameData_1f8ee40;
    v17[1] = 0;
    v17[2] = 0;
    v17[3] = v16;
  }
  else {
    v17 = nullptr;
  }
  v18 = v14[5];
  v91[0] = 0;
  v14[4] = v16;
  v14[5] = v17;
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak(v18);
  }
  v19 = v91[0];
  v91[0] = 0;
  if (v19 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 8LL))(v19);
  }
  v20 = fw_memory_HeapManager_Allocate(*v11, 264, 16, 0);
  GameRoutine_5fcc20(v20);
  v26 = (_QWORD*)fw_memory_HeapManager_Allocate(*v11, 32, 16, 0);
  v27 = v14[9];
  v26[2] = 0;
  v26[3] = v20;
  v14[8] = v20;
  v14[9] = v26;
  *v26 = &GameData_1f8ee90;
  v26[1] = 0;
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    std___1___shared_weak_count___release_weak(v27);
  }
  GameRoutine_5fc640(v14[8], (__int64)(a1 + 71), v14[4] + 8LL);
  GameRoutine_53a40((void*)(v91), (__int64)&v93_.v93);
  v28 = v91[0];
  if (v91[0] != 0) {
    v29 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    *v29 = &GameData_1f8ee40;
    v29[1] = 0;
    v29[2] = 0;
    v29[3] = v28;
  }
  else {
    v29 = nullptr;
  }
  v30 = v14[7];
  v91[0] = 0;
  v14[6] = v28;
  v14[7] = v29;
  if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    std___1___shared_weak_count___release_weak(v30);
  }
  v31 = v91[0];
  v91[0] = 0;
  if (v31 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 8LL))(v31);
  }
  v32 = (__int64*)fw_memory_g_heap_manager_ptr;
  v33 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       264, 16, 0);
  GameRoutine_5fcc20(v33);
  v39 = (_QWORD*)fw_memory_HeapManager_Allocate(*v32, 32, 16, 0);
  v40 = v14[11];
  *v39 = &GameData_1f8ee90;
  v39[1] = 0;
  v39[2] = 0;
  v39[3] = v33;
  v14[10] = v33;
  v14[11] = v39;
  if (v40 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
    std___1___shared_weak_count___release_weak(v40);
  }
  GameRoutine_5fc640(v14[10], (__int64)(a1 + 71), v14[6] + 8LL);
  v92[0] = 2 * a7;
  v92[1] = 161;
  GameRoutine_53b30((void*)(v91), (__int64)v92);
  v41 = v91[0];
  v42 = v14[12];
  v91[0] = 0;
  v14[12] = v41;
  if (v42 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v42 + 8LL))(v42);
    v43 = v91[0];
    v91[0] = 0;
    if (v43 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v43 + 8LL))(v43);
    }
  }
  v44 = v14[12];
  v14[19] = a7;
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64,
                                          __int64))(*(_QWORD*)v44 + 48LL))(
      (void*)(v91), v44, a7, 4096);
  GameRoutine_5d610(v13, v91);
  gxc_GpuMemory_Destroy_GpuMemory(v91);
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, __int64, __int64))(
      *(_QWORD*)v14[12] + 48LL))((void*)(v91), v14[12], a7, 4096);
  GameRoutine_5d610(v15, v91);
  gxc_GpuMemory_Destroy_GpuMemory(v91);
  if (a2 == 0) {
    v46 = a1[34];
    v45 = a1[35];
    if (v45 == 0) {
      goto LABEL_35;
    }
    goto LABEL_34;
  }
  if (a2 == 1) {
    v46 = a1[36];
    v45 = a1[37];
    if (v45 != 0) {
    LABEL_34:
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 8), 1u,
                                memory_order_relaxed);
    }
  LABEL_35:
    v47 = v14[22];
    v14[21] = v46;
    v14[22] = v45;
    if (v47 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
      std___1___shared_weak_count___release_weak(v47);
    }
  }
  GameRoutine_60a060((char*)v14 + 8, a3, a4);
  *((_DWORD*)v14 + 40) = a6;
  GameRoutine_53ae0_alt1((void*)(&v93_.v93), (__int64)v91);
  v48 = v93_.v93;
  if (v93_.v93 != 0) {
    v49 = (_QWORD*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 32,
                                                  16, 0);
    v49[2] = 0;
    v49[3] = v48;
    *v49 = &GameData_1f8eee0;
    v49[1] = 0;
  }
  else {
    v49 = nullptr;
  }
  v50 = v14[24];
  v93_.v93 = 0;
  v14[23] = v48;
  v14[24] = v49;
  if (v50 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
    std___1___shared_weak_count___release_weak(v50);
  }
  v51 = v93_.v93;
  v93_.v93 = 0;
  if (v51 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v51 + 8LL))(v51);
  }
  if (*(_BYTE*)(a5 + 16) == 1) {
    v52 = (__int64*)a1[61];
    v53 = (__int64*)a1[62];
    if (v52 != v53) {
      v54 = *(_QWORD*)(a5 + 8);
      while (1) {
        v55 = *v52;
        v56 = *(unsigned __int8*)(*v52 + 8);
        v57 = *(_QWORD*)(*v52 + 16);
        if ((v56 & 1) == 0) {
          v57 = v56 >> 1;
        }
        if (v54 == v57) {
          v58 = v55 + 9;
          v59 = *(_QWORD*)(v55 + 24);
          v60 = (v56 & 1) != 0 ? v59 : v58;
          if ((unsigned int)memcmp(*(_QWORD*)a5, v60, v54) == 0) {
            break;
          }
        }
        if (++v52 == v53) {
          goto LABEL_63;
        }
      }
    }
    if (v52 != v53) {
      v62 = *(_QWORD*)(*v52 + 184);
      v61 = *(_QWORD*)(*v52 + 192);
      if (v61 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v61 + 8), 1u,
                                  memory_order_relaxed);
      }
      v63 = v14[26];
      v14[25] = v62;
      v14[26] = v61;
      if (v63 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63);
        std___1___shared_weak_count___release_weak(v63);
      }
    }
  }
LABEL_63:
  v65 = (_QWORD*)a1[62];
  v64 = a1[63];
  if ((unsigned __int64)v65 >= v64) {
    v67 = a1[61];
    v68 = (char*)v65 - v67;
    v69 = ((__int64)v65 - v67) >> 3;
    v70 = v69 + 1;
    if ((unsigned __int64)(v69 + 1) >> 61 != 0) {
      GameRoutine_64aa60();
    }
    v71 = v64 - v67;
    if (v71 >> 2 > v70) {
      v70 = v71 >> 2;
    }
    if ((unsigned __int64)v71 >= 0x7FFFFFFFFFFFFFF8LL) {
      v72 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v72 = v70;
    }
    if (v72 != 0) {
      if (v72 >> 61 != 0) {
        GameRoutine_60a210();
      }
      v73 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v72, 16, 0);
    }
    else {
      v73 = 0;
    }
    v74 = v73 + 8 * v72;
    v75 = (char*)v65 - v67;
    v76 = (__int64)&v68[v73 + -8 * v69];
    *(_QWORD*)&v68[v73] = v14;
    v66 = (__int64*)&v68[v73 + 8];
    memcpy(v76, v67, v75);
    a1[61] = v76;
    a1[62] = v66;
    a1[63] = v74;
    if (v67 != 0) {
      v77 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v77 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v77, v67);
    }
  }
  else {
    *v65 = v14;
    v66 = v65 + 1;
  }
  v78 = a1[61];
  a1[62] = v66;
  if (((__int64)v66 - v78) >> 3 < 1) {
    v82 = 0;
    return GameRoutine_64e4a0(v78, v66, ((__int64)v66 - v78) >> 3, nullptr,
                              v82);
  }
  else {
    v79 = ((__int64)v66 - v78) >> 3;
    v80 = GameData_212c060;
    while (1) {
      v81 = (_QWORD*)GameRoutine_1a09d20(8 * v79, v80);
      if (v81 != nullptr) {
        break;
      }
      v82 = v79 >> 1;
      v83 = v79 > 1;
      v79 >>= 1;
      if (!v83) {
        return GameRoutine_64e4a0(v78, v66, ((__int64)v66 - v78) >> 3, nullptr,
                                  v82);
      }
    }
    v85 = v81;
    GameRoutine_64e4a0(v78, v66, ((__int64)v66 - v78) >> 3, v81, v79);
    v86 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v86 = 56;
    }
    return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v86, v85);
  }
}

#pragma GCC visibility pop
