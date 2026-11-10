#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a71220(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*wld_MultiJointAOVModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MultiJointAOVModule_Destructor(__int64 a1);
__int64 MultiJointAovModule_a71220(__int64 result, _QWORD* a2);
_QWORD* GameRoutine_a710d0(__int64*, _QWORD*);
__int64 GameRoutine_19a7490(__int64);
__int64 GameRoutine_c35c00(__int64 result, float*, __int64, char);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212df10;
extern __int128 GameData_1a832b0;
extern __int128 GameData_1a83430;
extern __int64 (*GameData_1fd1d58[])();
extern __int64 (*GameData_1fd1da8[])();
extern __int64 GameData_212c638;
extern int* GameData_212df08;
float32x4_t GameRoutine_b3bca0(float*, float32x4_t*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_c35be0();
void __attribute__((noreturn)) GameRoutine_c36b60();
void __attribute__((noreturn)) GameRoutine_c36b80();
void __attribute__((noreturn)) String_60a1d0();
__int64 MultiJointAOVModule_c34a20(__int64 a1, __int64 a2, int a3, __int64 a4,
                                   unsigned __int64 a5);
void MultiJointAOVModule_Unknown7(__int64 a1);

__int64 MultiJointAovModule_a71220(__int64 result, _QWORD* a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v5;
  __int64* v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = *(__int64**)(result + 264);
  v3 = *(__int64**)(result + 272);
  v5 = result;
  if (v2 != v3) {
    while (*v2 != *a2) {
      v2 += 2;
      if (v2 == v3) {
        return result;
      }
    }
  }
  v6 = v2 + 2;
  if (v2 != v3 && v6 != v3) {
    do {
      v8 = *v6;
      if (*v6 != *a2) {
        v9 = v6[1];
        *v6 = 0;
        v6[1] = 0;
        v10 = v2[1];
        *v2 = v8;
        v2[1] = v9;
        if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          result = std___1___shared_weak_count___release_weak(v10);
        }
        v2 += 2;
      }
      v6 += 2;
    } while (v6 != v3);
    v3 = *(__int64**)(v5 + 272);
  }
  if (v2 != v3) {
    do {
      v11 = *(v3 - 1);
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        result = std___1___shared_weak_count___release_weak(v11);
      }
      v3 -= 2;
    } while (v3 != v2);
    *(_QWORD*)(v5 + 272) = v2;
  }
  return result;
}

__int64 MultiJointAOVModule_c34a20(__int64 a1, __int64 a2, int a3, __int64 a4,
                                   unsigned __int64 a5)
{

#pragma clang fp contract(off)
  char** v5;
  __int64 v10;
  __int64 v11;
  atomic_uchar* v12;
  unsigned __int8 explicit;
  int* v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 result;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  bool v45;
  unsigned __int64 v46;
  unsigned __int16* v47;
  unsigned __int64 v48;
  int v49;
  int v50;
  float v51;
  __int128 v52;
  int v53;
  int v54;
  __int64 v55;
  __int64* v56;
  float v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  _QWORD* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64* v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  char* v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64* v78;
  __int64 v79;
  __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  int v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  char* v90;
  char* v91;
  __int64 v92;
  char* v93;
  _QWORD* v94;
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
  _QWORD* v105;
  __int64* v106;
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
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  unsigned __int64 v122;
  int v123;
  char** v124;
  int v125;
  __int128 v126;
  __int128 v127;
  __int128 v128;

  *(_QWORD*)(a1 + 32) = 0;
  v5 = (char**)(a1 + 32);
  *(_BYTE*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 24) = a3;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_DWORD*)(a1 + 17) = 33686018;
  *(_QWORD*)a1 = wld_MultiJointAOVModule_vtable;
  *(_QWORD*)(a1 + 8) = a2;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 104) = 1065353216;
  if (a5 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  if (a5 >= 0x17) {
    if ((a5 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (a5 | 7) + 1;
    }
    v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v11, 16, 0);
    *(_QWORD*)(a1 + 120) = a5;
    *(_QWORD*)(a1 + 128) = v10;
    *(_QWORD*)(a1 + 112) = v11 | 1;
  }
  else {
    v10 = a1 + 113;
    *(_BYTE*)(a1 + 112) = 2 * a5;
    if (a5 == 0) {
      goto LABEL_10;
    }
  }
  memmove(v10, a4, a5);
LABEL_10:
  *(_BYTE*)(v10 + a5) = 0;
  *(_BYTE*)(a1 + 136) = 1;
  v12 = (atomic_uchar*)GameData_212df10;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v14 = GameData_212df08;
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_212df10) != 0) {
    *v14 = wld_Crc32(0, "ModelModule", 0xBu);
    __cxa_guard_release(GameData_212df10);
  }
  v15 = *(_QWORD*)(a2 + 512);
  v16 = v15;
  do {
    v17 = *(_DWORD*)(v16 - 16);
    v16 -= 16;
    v15 -= 16;
  } while (v17 != *v14);
  *(_QWORD*)(a1 + 88) =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v15 + 8) + 24LL) + 168LL);
  v18 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL) +
               40LL);
  v20 = *(_QWORD*)(v18 + 16);
  v19 = *(_QWORD*)(v18 + 24);
  if (v19 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
  }
  result = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 56) = v20;
  *(_QWORD*)(a1 + 64) = v19;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  if ((atomic_load_explicit(v12, memory_order_acquire) & 1) == 0) {
    result = __cxa_guard_acquire(GameData_212df10);
    if ((_DWORD)result != 0) {
      *v14 = wld_Crc32(0, "ModelModule", 0xBu);
      result = __cxa_guard_release(GameData_212df10);
    }
  }
  v22 = *(_QWORD*)(a2 + 512);
  v23 = v22;
  do {
    v24 = *(_DWORD*)(v23 - 16);
    v23 -= 16;
    v22 -= 16;
  } while (v24 != *v14);
  v25 = *(_QWORD*)(v22 + 8);
  v26 = 80;
  if (*(_QWORD*)(v25 + 32) == 0) {
    v26 = 72;
  }
  v27 = *(_QWORD*)(v25 + v26);
  v28 = *(_QWORD*)(a1 + 120);
  *(_DWORD*)(a1 + 140) = v27;
  v29 = *(unsigned __int8*)(a1 + 112);
  if ((v29 & 1) != 0) {
    v30 = v28;
  }
  else {
    v30 = v29 >> 1;
  }
  if (v30 != 0) {
    *(_QWORD*)(a1 + 96) = 0x3F8000003F800000LL;
    v31 = (v29 & 1) != 0 ? *(_QWORD*)(a1 + 128) : a1 + 113;
    result = GameRoutine_19a7490(v31);
    v32 = *(_QWORD*)result;
    v33 = *(_QWORD*)(result + 8);
    if (*(_QWORD*)result != v33 &&
        *(_QWORD*)(**(_QWORD**)(a1 + 88) + 8LL) != 0) {
      v34 = (__int64*)fw_memory_g_heap_manager_ptr;
      v124 = v5;
      do {
        if ((*(_BYTE*)v32 & 1) != 0) {
          v37 = *(_QWORD*)(v32 + 16);
        }
        else {
          v37 = v32 + 1;
        }
        v38 = *(_QWORD*)(**(_QWORD**)(a1 + 88) + 8LL);
        if (v38 != 0) {
          if (v37 != 0) {
            result = strlen(v37);
            v39 = result;
          }
          else {
            v39 = 0;
          }
          v40 = v38 + 8;
          v41 = *(unsigned __int16*)(v38 + 12);
          v42 = v38 + 8 + 16 * v41;
          v43 = *(_DWORD*)v42;
          if (*(_DWORD*)(v38 + 8) < *(_DWORD*)v42) {
            do {
              v46 = (__int64)v43 >> 3;
              if (v39 > v46) {
                v44 = (*(unsigned __int8*)(v37 + v39 + ~v46) >> (v43 & 7)) & 1;
              }
              else {
                v44 = 0;
              }
              v41 = *(unsigned __int16*)(v38 + 12 + 16 * v41 + 2 * v44);
              v45 = v43 < *(_DWORD*)(v40 + 16 * v41);
              v43 = *(_DWORD*)(v40 + 16 * v41);
            } while (v45);
            v42 = v40 + 16 * v41;
          }
          v47 = *(unsigned __int16**)(v42 + 8);
          if (v39 == *v47) {
            result = memcmp(v47 + 1, v37, v39);
            if ((_DWORD)result == 0) {
              v48 = (unsigned __int64)(v42 - v38 - 24) >> 4;
              if ((_DWORD)v48 != -1) {
                v49 = *(_DWORD*)(a1 + 24);
                v51 = *(float*)(v32 + 80);
                v50 = *(_DWORD*)(v32 + 84);
                v127 = *(_OWORD*)(v32 + 32);
                v128 = *(_OWORD*)(v32 + 48);
                v52 = *(_OWORD*)(v32 + 64);
                v53 = *(_BYTE*)(v32 + 88) != 0 ? 1 : 4;
                *(_BYTE*)(a1 + 136) = 1;
                if ((v49 & v53) != 0) {
                  v125 = v53;
                  v126 = v52;
                  if (*(_QWORD*)(a1 + 72) == 0) {
                    v105 = (_QWORD*)fw_memory_HeapManager_Allocate(*v34, 144,
                                                                   16, 0);
                    v105[5] = 0;
                    v105[6] = 0;
                    v106 = (__int64*)GameData_212c2a0;
                    v105[9] = 0;
                    v105[10] = 0;
                    v107 = *(_QWORD*)(a1 + 80);
                    v105[7] = 0;
                    v105[8] = 0;
                    v105[1] = 0;
                    v105[2] = 0;
                    v108 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v106);
                    v109 =
                        *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v106 + 8);
                    v110 = *v106;
                    v111 = v106[1];
                    *(_QWORD*)(a1 + 80) = v105;
                    v112 =
                        *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v106);
                    v113 = *(_QWORD*)((char*)((__int128*)0x10LL) +
                                      (_QWORD)v106 + 8);
                    v105[10] = v108;
                    v105[11] = 0;
                    v105[11] = v109;
                    v105[12] = 0;
                    v114 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                                       (_QWORD)v106);
                    v115 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                                       (_QWORD)v106);
                    v105[6] = v110;
                    v105[7] = v111;
                    v105[8] = v112;
                    v105[9] = v113;
                    *v105 = GameData_1fd1d58;
                    v105[12] = v114;
                    v105[13] = 0;
                    v105[13] = v115;
                    v105[14] = 0;
                    v105[14] = 0;
                    v105[15] = 0;
                    v105[15] = 0;
                    v105[16] = 0;
                    v105[16] = 0;
                    v105[17] = 0;
                    v105[4] = 0;
                    v105 += 4;
                    *(_BYTE*)v105 = 1;
                    *(_QWORD*)(a1 + 72) = v105;
                    if (v107 != 0 &&
                        atomic_fetch_add((atomic_ullong* volatile)(v107 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v107 + 16LL))(v107);
                      std___1___shared_weak_count___release_weak(v107);
                    }
                    *(_DWORD*)(*(_QWORD*)(a1 + 72) + 104LL) =
                        *(_DWORD*)(a1 + 140);
                    v116 = *(_QWORD*)(a1 + 64);
                    if (v116 != 0) {
                      v117 = std___1___shared_weak_count_lock(v116);
                      if (v117 != 0) {
                        v118 = *(_QWORD*)(a1 + 56);
                        v119 = v117;
                        if (v118 != 0) {
                          GameRoutine_a710d0((__int64*)(v118 + 264),
                                             (_QWORD*)(a1 + 72));
                        }
                        if (atomic_fetch_add(
                                (atomic_ullong* volatile)(v119 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
                          (*(void (**)(__int64))(*(_QWORD*)v119 + 16LL))(v119);
                          std___1___shared_weak_count___release_weak(v119);
                        }
                      }
                    }
                  }
                  v54 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 284LL);
                  result = fw_memory_HeapManager_Allocate(*v34, 160, 16, 0);
                  *(_QWORD*)(result + 40) = 0;
                  *(_QWORD*)(result + 48) = 0;
                  v55 = result;
                  v56 = (__int64*)GameData_212c2a0;
                  v57 = *(float*)(a1 + 96);
                  *(_QWORD*)(result + 72) = 0;
                  *(_QWORD*)(result + 80) = 0;
                  v58 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v56);
                  v59 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v56 + 8);
                  v60 = *v56;
                  v61 = v56[1];
                  v62 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v56);
                  v63 =
                      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v56 + 8);
                  v64 = *(_QWORD**)(a1 + 72);
                  *(_QWORD*)(result + 56) = 0;
                  *(_QWORD*)(result + 64) = 0;
                  *(_QWORD*)(result + 32) = 0;
                  v65 = result + 32;
                  *(_QWORD*)(result + 8) = 0;
                  *(_QWORD*)(result + 16) = 0;
                  *(_QWORD*)(result + 120) = 0;
                  *(_QWORD*)(result + 128) = 0;
                  *(_QWORD*)(result + 136) = 0;
                  *(_QWORD*)(result + 144) = 0;
                  *(_QWORD*)(result + 152) = 0;
                  *(_BYTE*)(result + 32) = 1;
                  *(_DWORD*)(result + 36) = v54;
                  *(_DWORD*)(result + 152) = v50;
                  *(_QWORD*)(result + 80) = v58;
                  *(_QWORD*)(result + 88) = 0;
                  *(_QWORD*)(result + 88) = v59;
                  *(_QWORD*)(result + 96) = 0;
                  v66 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                                    (_QWORD)v56);
                  v67 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                                    (_QWORD)v56);
                  *(_QWORD*)(result + 48) = v60;
                  *(_QWORD*)(result + 56) = v61;
                  *(_QWORD*)(result + 64) = v62;
                  *(_QWORD*)(result + 72) = v63;
                  *(float*)(result + 144) = v51 * v57;
                  *(_QWORD*)result = GameData_1fd1da8;
                  *(_QWORD*)(result + 96) = v66;
                  *(_QWORD*)(result + 104) = 0;
                  *(_QWORD*)(result + 104) = v67;
                  *(_QWORD*)(result + 112) = 0;
                  *(_OWORD*)(result + 112) = GameData_1a83430;
                  *(_OWORD*)(result + 128) = GameData_1a832b0;
                  v68 = (__int64*)v64[11];
                  v69 = v64[12];
                  if ((unsigned __int64)v68 >= v69) {
                    v71 = v64[10];
                    v123 = v48;
                    v72 = (char*)v68 - v71;
                    v73 = ((__int64)v68 - v71) >> 4;
                    v74 = v73 + 1;
                    if ((unsigned __int64)(v73 + 1) >> 60 != 0) {
                      GameRoutine_c36b60();
                    }
                    v75 = v69 - v71;
                    if (v75 >> 3 > v74) {
                      v74 = v75 >> 3;
                    }
                    if ((unsigned __int64)v75 >= 0x7FFFFFFFFFFFFFF0LL) {
                      v76 = 0xFFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v76 = v74;
                    }
                    if (v76 >> 60 != 0) {
                    LABEL_106:
                      GameRoutine_60a210();
                    }
                    v77 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v76, 16,
                        0);
                    v78 = (__int64*)&v72[v77];
                    v122 = v77 + 16 * v76;
                    *v78 = v65;
                    v78[1] = v55;
                    v79 = (__int64)&v72[v77 + -16 * v73];
                    v70 = (__int64)&v72[v77 + 16];
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v55 + 8), 1u,
                        memory_order_relaxed);
                    result = memcpy(v79, v71, v72);
                    v64[10] = v79;
                    v64[11] = v70;
                    v64[12] = v122;
                    if (v71 != 0) {
                      v80 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v80 = 56;
                      }
                      result = nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v80);
                    }
                    LODWORD(v48) = v123;
                  }
                  else {
                    *v68 = v65;
                    v68[1] = result;
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(result + 8), 1u,
                        memory_order_relaxed);
                    v70 = (__int64)(v68 + 2);
                  }
                  v64[11] = v70;
                  v81 = *(_QWORD*)(a1 + 40);
                  v82 = *(_QWORD*)(a1 + 48);
                  if (v81 < v82) {
                    v35 = v81 + 112;
                    *(_QWORD*)v81 = v65;
                    *(_QWORD*)(v81 + 8) = v55;
                    *(float*)(v81 + 96) = v51;
                    *(_DWORD*)(v81 + 100) = v50;
                    *(_BYTE*)(v81 + 16) = 1;
                    *(_OWORD*)(v81 + 32) = v127;
                    *(_OWORD*)(v81 + 48) = v128;
                    *(_DWORD*)(v81 + 20) = v48;
                    *(_DWORD*)(v81 + 24) = v125;
                    *(_OWORD*)(v81 + 64) = v126;
                    *(_OWORD*)(v81 + 80) = v128;
                    v34 = (__int64*)fw_memory_g_heap_manager_ptr;
                  }
                  else {
                    v83 = v81 - (_QWORD)*v124;
                    v84 = 0x6DB6DB6DB6DB6DB7LL * (v83 >> 4) + 1;
                    if (v84 > 0x249249249249249LL) {
                      GameRoutine_c36b80();
                    }
                    v85 = 0x6DB6DB6DB6DB6DB7LL *
                          ((__int64)(v82 - (_QWORD)*v124) >> 4);
                    if (2 * v85 > v84) {
                      v84 = 2 * v85;
                    }
                    if (v85 >= 0x124924924924924LL) {
                      v84 = 0x249249249249249LL;
                    }
                    if (v84 > 0x249249249249249LL) {
                      goto LABEL_106;
                    }
                    v86 = v48;
                    v87 = 112 * v84;
                    result = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 112 * v84, 16,
                        0);
                    v88 = result + v83;
                    v89 = result;
                    *(_QWORD*)v88 = v65;
                    *(_QWORD*)(v88 + 8) = v55;
                    *(float*)(v88 + 96) = v51;
                    *(_DWORD*)(v88 + 100) = v50;
                    *(_BYTE*)(v88 + 16) = 1;
                    *(_OWORD*)(v88 + 32) = v127;
                    *(_OWORD*)(v88 + 48) = v128;
                    *(_DWORD*)(v88 + 20) = v86;
                    *(_DWORD*)(v88 + 24) = v125;
                    v90 = *(char**)(a1 + 32);
                    v91 = *(char**)(a1 + 40);
                    *(_OWORD*)(v88 + 64) = v126;
                    *(_OWORD*)(v88 + 80) = v128;
                    v92 = result + v83 + v90 - v91;
                    if (v90 != v91) {
                      v93 = v90;
                      v94 = (_QWORD*)(result + v83 + v90 - v91);
                      do {
                        *v94 = *(_QWORD*)v93;
                        v94[1] = *((_QWORD*)v93 + 1);
                        *(_QWORD*)v93 = 0;
                        *((_QWORD*)v93 + 1) = 0;
                        v95 = *((_QWORD*)v93 + 4);
                        v96 = *((_QWORD*)v93 + 2);
                        v94[3] = *((_QWORD*)v93 + 3);
                        v94[4] = v95;
                        v94[2] = v96;
                        v97 = *((_QWORD*)v93 + 5);
                        v98 = *((_QWORD*)v93 + 6);
                        v99 = *((_QWORD*)v93 + 8);
                        v94[7] = *((_QWORD*)v93 + 7);
                        v94[8] = v99;
                        v94[5] = v97;
                        v94[6] = v98;
                        v100 = *((_QWORD*)v93 + 9);
                        v101 = *((_QWORD*)v93 + 10);
                        v102 = *((_QWORD*)v93 + 11);
                        v103 = *((_QWORD*)v93 + 12);
                        v93 += 112;
                        v94[11] = v102;
                        v94[12] = v103;
                        v94[9] = v100;
                        v94[10] = v101;
                        v94 += 14;
                      } while (v93 != v91);
                      do {
                        v104 = *((_QWORD*)v90 + 1);
                        if (v104 != 0 &&
                            atomic_fetch_add(
                                (atomic_ullong* volatile)(v104 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
                          (*(void (**)(__int64))(*(_QWORD*)v104 + 16LL))(v104);
                          result =
                              std___1___shared_weak_count___release_weak(v104);
                        }
                        v90 += 112;
                      } while (v90 != v91);
                      v90 = *v124;
                    }
                    v120 = v89 + v87;
                    v35 = v88 + 112;
                    *(_QWORD*)(a1 + 32) = v92;
                    *(_QWORD*)(a1 + 40) = v88 + 112;
                    *(_QWORD*)(a1 + 48) = v120;
                    v34 = (__int64*)fw_memory_g_heap_manager_ptr;
                    if (v90 != nullptr) {
                      v121 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v121 = 56;
                      }
                      result = nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v121);
                    }
                  }
                  *(_QWORD*)(a1 + 40) = v35;
                  v36 = *(_QWORD*)(v35 - 24);
                  *(_QWORD*)(v35 - 64) = *(_QWORD*)(v35 - 32);
                  *(_QWORD*)(v35 - 56) = v36;
                }
              }
            }
          }
        }
        v32 += 96;
      } while (v32 != v33);
    }
  }
  return result;
}

__int64 MultiJointAOVModule_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 i;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  *(_QWORD*)a1 = wld_MultiJointAOVModule_vtable;
  v2 = *(_QWORD*)(a1 + 64);
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v4 = v3;
      v5 = *(_QWORD*)(a1 + 56);
      if (v5 != 0) {
        GameRoutine_a71220(v5, a1 + 72);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  v6 = *(_QWORD*)(a1 + 32);
  for (i = *(_QWORD*)(a1 + 40); i != v6; i -= 112) {
    v8 = *(_QWORD*)(i - 104);
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
  }
  v9 = *(_BYTE*)(a1 + 112);
  *(_QWORD*)(a1 + 40) = v6;
  if ((v9 & 1) != 0 && *(_QWORD*)(a1 + 128) != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
  }
  v11 = *(_QWORD*)(a1 + 80);
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  result = *(_QWORD*)(a1 + 64);
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v13 = *(_QWORD*)(a1 + 32);
  if (v13 != 0) {
    v14 = *(_QWORD*)(a1 + 40);
    if (v13 == v14) {
      goto LABEL_31;
    }
    do {
      v15 = *(_QWORD*)(v14 - 104);
      if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        result = std___1___shared_weak_count___release_weak(v15);
      }
      v14 -= 112;
    } while (v14 != v13);
    v16 = *(_QWORD*)(a1 + 32);
    *(_QWORD*)(a1 + 40) = v13;
    if (v16 != 0) {
    LABEL_31:
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
    }
  }
  return result;
}

void MultiJointAOVModule_Unknown7(__int64 a1)
{

#pragma clang fp contract(off)
  float v1;
  float v2;
  bool v3;
  __int64 v5;
  float32x4_t** v6;
  float32x4_t** v7;
  int v8;
  __int64 v9;
  float* v10;
  unsigned __int64 v11;
  float32x4_t* v12;
  unsigned __int64 v13;
  float32x4_t* v14;
  __int64 v15;
  float32x4_t v16;
  float32x4_t v17;
  float v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  __int64 v26;
  float* v27;
  int v28;
  float* v29;
  float v30;
  float v31;
  float v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  float* v37;
  char v38;
  float v39;
  float* v40;
  int v41;
  _QWORD v42[4];

  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v1 = *(float*)(a1 + 96);
  v2 = *(float*)(a1 + 104);
  v3 = true;
  if (v1 > 0x0.0p+0f && v2 > 0x0.0p+0f) {
    v5 = *(_QWORD*)(a1 + 8);
    if (*(_BYTE*)(v5 + 289) == 1 && (*(_BYTE*)(v5 + 288) & 1) != 0) {
      do {
        if ((*(_BYTE*)(v5 + 300) & 0xFD) == 1) {
          break;
        }
        v5 = *(_QWORD*)(v5 + 736);
        v3 = v5 != 0;
        if (v5 == 0) {
          break;
        }
      } while (*(_BYTE*)(v5 + 289) == 1 && *(_BYTE*)(v5 + 288) == 1);
    }
  }
  if (*(_BYTE*)(a1 + 136) == 1) {
    v6 = *(float32x4_t***)(a1 + 32);
    v7 = *(float32x4_t***)(a1 + 40);
    if (v6 != v7) {
      v8 = 0;
      v9 = 0;
      v10 = nullptr;
      v11 = 0;
      do {
        v12 = *v6;
        v13 = LANES128((*v6)[5]).n128_u64[1];
        v14 = *v6 + 1;
        v42[0] = LANES128((*v6)[5]).n128_u64[0];
        v42[1] = v13;
        v15 = LANES128(v12[6]).n128_i64[1];
        v42[2] = LANES128(v12[6]).n128_u64[0];
        v42[3] = v15;
        v16 = GameRoutine_b3bca0((float*)v42, v14),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w"));
        v18 = vmuls_lane_f32(
            0x1.0000000000000p-1f,
            COERCE_AS(float32x2_t,
                      LANES128_OF(vaddq_f32(v17, v16)).n128_u64[0]),
            1);
        if ((unsigned __int64)v10 < v11) {
          *(_DWORD*)v10 = v8;
          v10[1] = v18;
          v10 += 2;
        }
        else {
          v19 = (char*)v10 - v9;
          v20 = ((__int64)v10 - v9) >> 3;
          v21 = v20 + 1;
          if ((unsigned __int64)(v20 + 1) >> 61 != 0) {
            GameRoutine_c35be0(),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v1", "=w"));
          }
          if ((__int64)(v11 - v9) >> 2 > v21) {
            v21 = (__int64)(v11 - v9) >> 2;
          }
          if (v11 - v9 >= 0x7FFFFFFFFFFFFFF8LL) {
            v22 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v22 = v21;
          }
          if (v22 != 0) {
            if (v22 >> 61 != 0) {
              GameRoutine_60a210(),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
            }
            v23 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v22, 16, 0),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w"));
          }
          else {
            v23 = 0;
          }
          v24 = &v19[v23];
          v11 = v23 + 8 * v22;
          v25 = (__int64)&v19[v23 + -8 * v20];
          *(_DWORD*)v24 = v8;
          *((float*)v24 + 1) = v18;
          v10 = (float*)&v19[v23 + 8];
          memcpy(v25, v9, v19),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v1", "=w"));
          if (v9 != 0) {
            v26 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v26 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v26),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v1", "=w"));
          }
          v9 = v25;
        }
        v6 += 14;
        ++v8;
      } while (v6 != v7);
      if ((float*)v9 != v10) {
        GameRoutine_c35c00(v9, v10,
                           (2 * __clz(((__int64)v10 - v9) >> 3)) ^ 0x7E, 1),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w"));
        v27 = (float*)(v9 + 4);
        v28 = 0;
        v29 = (float*)v9;
        do {
          v30 = *v27;
          v27 = v29 + 1;
          v31 = v29[1];
          v32 = *v29;
          v29 += 2;
          v33 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112LL * SLODWORD(v32));
          if (vabds_f32(v30, v31) > 0x1.47ae140000000p-7f) {
            ++v28;
          }
          *(_DWORD*)(v33 + 124) = v28;
        } while (v29 != v10);
      }
      *(_BYTE*)(a1 + 136) = 0;
      if (v9 != 0) {
        v34 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v34 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v34),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w"));
      }
    }
  }
  v35 = *(_QWORD*)(a1 + 32);
  v36 = *(_QWORD*)(a1 + 40);
  if (v35 != v36) {
    if (v3) {
      do {
        v37 = *(float**)v35;
        v35 += 112;
        *(_BYTE*)v37 = 0;
      } while (v35 != v36);
      return;
    }
    do {
      v41 = *(_DWORD*)(a1 + 24);
      if (v41 == 6) {
        v38 = 1;
      }
      else {
        if (v41 != 5) {
          goto LABEL_46;
        }
        v38 = 0;
      }
      *(_BYTE*)(*(_QWORD*)(a1 + 72) + 108LL) = v38;
    LABEL_46:
      **(_BYTE**)v35 = *(_BYTE*)(v35 + 16);
      v39 = *(float*)(v35 + 96);
      v40 = *(float**)v35;
      v35 += 112;
      v40[28] = (float)(v1 * v2) * v39;
    } while (v35 != v36);
  }
}

#pragma GCC visibility pop
