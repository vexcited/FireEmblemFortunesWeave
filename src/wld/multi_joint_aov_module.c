#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a71220(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*wld_MultiJointAOVModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MultiJointAOVModule_Destructor_alt1(__int64 a1) __asm__(
    "MultiJointAOVModule_Destructor");
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
__int64 MultiJointAOVModule_c34a20_alt1(
    __int64 a1, __int64 a2, int a3, __int64 a4,
    unsigned __int64 a5) __asm__("MultiJointAOVModule_c34a20");
void MultiJointAOVModule_Unknown7(__int64 a1);
extern __int128 GameData_1a837f0;
__int64 MultiJointAOVModule_Unknown6(__int64 result);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 GameHr_19a7490(const char*);
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void MultiJointAOVModule_c34a20(__int64 a1, __int64 a2, int a3, __int64 a4,
                                unsigned __int64 a5);
void MultiJointAOVModule_Destructor(__int64 a1);

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
          result = std___1___shared_weak_count___release_weak_alt1(v10);
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
        result = std___1___shared_weak_count___release_weak_alt1(v11);
      }
      v3 -= 2;
    } while (v3 != v2);
    *(_QWORD*)(v5 + 272) = v2;
  }
  return result;
}

void MultiJointAOVModule_c34a20(__int64 a1, __int64 a2, int a3, __int64 a4,
                                unsigned __int64 a5)
{

#pragma clang fp contract(off)
  __int64* v5;
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
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  const char* v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  const char* v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  bool v46;
  unsigned __int64 v47;
  unsigned __int16* v48;
  unsigned __int64 v49;
  int v50;
  int v51;
  float v52;
  __int128 v53;
  int v54;
  int v55;
  __int64 v56;
  __int64 v57;
  __int64* v58;
  float v59;
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
  __int64* v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  __int64* v80;
  __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  unsigned __int64 v87;
  int v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  _QWORD* v94;
  __int64 v95;
  _QWORD* v96;
  _QWORD* v97;
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
  _QWORD* v108;
  __int64* v109;
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
  __int64 v122;
  __int64 v123;
  __int64 v124;
  unsigned __int64 v125;
  int v126;
  __int64* v127;
  int v128;
  __int128 v129;
  __int128 v130;
  __int128 v131;

  *(_QWORD*)(a1 + 32) = 0;
  v5 = (__int64*)(a1 + 32);
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
  memmove_alt1(v10, a4, a5);
LABEL_10:
  *(_BYTE*)(v10 + a5) = 0;
  *(_BYTE*)(a1 + 136) = 1;
  v12 = (atomic_uchar*)GameData_212df10;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v14 = GameData_212df08;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212df10) != 0) {
    *v14 = wld_Crc32(0, "ModelModule", 0xBu);
    __cxa_guard_release_alt1((__int64)GameData_212df10);
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
  v21 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 56) = v20;
  *(_QWORD*)(a1 + 64) = v19;
  if (v21 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v21);
  }
  if ((atomic_load_explicit(v12, memory_order_acquire) & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212df10) != 0) {
    *v14 = wld_Crc32(0, "ModelModule", 0xBu);
    __cxa_guard_release_alt1((__int64)GameData_212df10);
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
    v31 = (v29 & 1) != 0 ? *(const char**)(a1 + 128) : (const char*)(a1 + 113);
    v32 = (__int64*)GameHr_19a7490(v31);
    v33 = *v32;
    v34 = v32[1];
    if (*v32 != v34 && *(_QWORD*)(**(_QWORD**)(a1 + 88) + 8LL) != 0) {
      v35 = (__int64*)fw_memory_g_heap_manager_ptr;
      v127 = v5;
      do {
        if ((*(_BYTE*)v33 & 1) != 0) {
          v38 = *(const char**)(v33 + 16);
        }
        else {
          v38 = (const char*)(v33 + 1);
        }
        v39 = *(_QWORD*)(**(_QWORD**)(a1 + 88) + 8LL);
        if (v39 != 0) {
          if (v38 != nullptr) {
            v40 = strlen_alt1(v38);
          }
          else {
            v40 = 0;
          }
          v41 = v39 + 8;
          v42 = *(unsigned __int16*)(v39 + 12);
          v43 = v39 + 8 + 16 * v42;
          v44 = *(_DWORD*)v43;
          if ((signed __int32)*(_DWORD*)(v39 + 8) <
              (signed __int32)*(_DWORD*)v43) {
            do {
              v47 = (__int64)v44 >> 3;
              if (v40 > v47) {
                v45 = ((unsigned __int8)v38[v40 + ~v47] >> (v44 & 7)) & 1;
              }
              else {
                v45 = 0;
              }
              v42 = *(unsigned __int16*)(v39 + 12 + 16 * v42 + 2 * v45);
              v46 = v44 < (signed __int32)*(_DWORD*)(v41 + 16 * v42);
              v44 = *(_DWORD*)(v41 + 16 * v42);
            } while (v46);
            v43 = v41 + 16 * v42;
          }
          v48 = *(unsigned __int16**)(v43 + 8);
          if (v40 == *v48 &&
              memcmp_alt1((__int64)(v48 + 1), (__int64)v38, v40) == 0) {
            v49 = (unsigned __int64)(v43 - v39 - 24) >> 4;
            if ((_DWORD)v49 != -1) {
              v50 = *(_DWORD*)(a1 + 24);
              v52 = *(float*)(v33 + 80);
              v51 = *(_DWORD*)(v33 + 84);
              v130 = *(_OWORD*)(v33 + 32);
              v131 = *(_OWORD*)(v33 + 48);
              v53 = *(_OWORD*)(v33 + 64);
              v54 = *(_BYTE*)(v33 + 88) != 0 ? 1 : 4;
              *(_BYTE*)(a1 + 136) = 1;
              if ((v50 & v54) != 0) {
                v128 = v54;
                v129 = v53;
                if (*(_QWORD*)(a1 + 72) == 0) {
                  v108 =
                      (_QWORD*)fw_memory_HeapManager_Allocate(*v35, 144, 16, 0);
                  v108[5] = 0;
                  v108[6] = 0;
                  v109 = (__int64*)GameData_212c2a0;
                  v108[9] = 0;
                  v108[10] = 0;
                  v110 = *(_QWORD*)(a1 + 80);
                  v108[7] = 0;
                  v108[8] = 0;
                  v108[1] = 0;
                  v108[2] = 0;
                  v111 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v109);
                  v112 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v109 + 8);
                  v113 = *v109;
                  v114 = v109[1];
                  *(_QWORD*)(a1 + 80) = v108;
                  v115 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v109);
                  v116 =
                      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v109 + 8);
                  v108[10] = v111;
                  v108[11] = 0;
                  v108[11] = v112;
                  v108[12] = 0;
                  v117 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                                     (_QWORD)v109);
                  v118 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                                     (_QWORD)v109);
                  v108[6] = v113;
                  v108[7] = v114;
                  v108[8] = v115;
                  v108[9] = v116;
                  *v108 = GameData_1fd1d58;
                  v108[12] = v117;
                  v108[13] = 0;
                  v108[13] = v118;
                  v108[14] = 0;
                  v108[14] = 0;
                  v108[15] = 0;
                  v108[15] = 0;
                  v108[16] = 0;
                  v108[16] = 0;
                  v108[17] = 0;
                  v108[4] = 0;
                  v108 += 4;
                  *(_BYTE*)v108 = 1;
                  *(_QWORD*)(a1 + 72) = v108;
                  if (v110 != 0 &&
                      atomic_fetch_add((atomic_ullong* volatile)(v110 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v110 + 16LL))(v110);
                    std___1___shared_weak_count___release_weak_alt1(v110);
                  }
                  *(_DWORD*)(*(_QWORD*)(a1 + 72) + 104LL) =
                      *(_DWORD*)(a1 + 140);
                  v119 = *(_QWORD*)(a1 + 64);
                  if (v119 != 0) {
                    v120 = std___1___shared_weak_count_lock_alt1(v119);
                    if (v120 != 0) {
                      v121 = *(_QWORD*)(a1 + 56);
                      v122 = v120;
                      if (v121 != 0) {
                        GameRoutine_a710d0((__int64*)(v121 + 264),
                                           (_QWORD*)(a1 + 72));
                      }
                      if (atomic_fetch_add((atomic_ullong* volatile)(v122 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
                        (*(void (**)(__int64))(*(_QWORD*)v122 + 16LL))(v122);
                        std___1___shared_weak_count___release_weak_alt1(v122);
                      }
                    }
                  }
                }
                v55 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 284LL);
                v56 = fw_memory_HeapManager_Allocate(*v35, 160, 16, 0);
                *(_QWORD*)(v56 + 40) = 0;
                *(_QWORD*)(v56 + 48) = 0;
                v57 = v56;
                v58 = (__int64*)GameData_212c2a0;
                v59 = *(float*)(a1 + 96);
                *(_QWORD*)(v56 + 72) = 0;
                *(_QWORD*)(v56 + 80) = 0;
                v60 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v58);
                v61 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v58 + 8);
                v62 = *v58;
                v63 = v58[1];
                v64 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v58);
                v65 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v58 + 8);
                v66 = *(_QWORD**)(a1 + 72);
                *(_QWORD*)(v56 + 56) = 0;
                *(_QWORD*)(v56 + 64) = 0;
                *(_QWORD*)(v56 + 32) = 0;
                v67 = v56 + 32;
                *(_QWORD*)(v56 + 8) = 0;
                *(_QWORD*)(v56 + 16) = 0;
                *(_QWORD*)(v56 + 120) = 0;
                *(_QWORD*)(v56 + 128) = 0;
                *(_QWORD*)(v56 + 136) = 0;
                *(_QWORD*)(v56 + 144) = 0;
                *(_QWORD*)(v56 + 152) = 0;
                *(_BYTE*)(v56 + 32) = 1;
                *(_DWORD*)(v56 + 36) = v55;
                *(_DWORD*)(v56 + 152) = v51;
                *(_QWORD*)(v56 + 80) = v60;
                *(_QWORD*)(v56 + 88) = 0;
                *(_QWORD*)(v56 + 88) = v61;
                *(_QWORD*)(v56 + 96) = 0;
                v68 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                                  (_QWORD)v58);
                v69 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                                  (_QWORD)v58);
                *(_QWORD*)(v56 + 48) = v62;
                *(_QWORD*)(v56 + 56) = v63;
                *(_QWORD*)(v56 + 64) = v64;
                *(_QWORD*)(v56 + 72) = v65;
                *(float*)(v56 + 144) = v52 * v59;
                *(_QWORD*)v56 = GameData_1fd1da8;
                *(_QWORD*)(v56 + 96) = v68;
                *(_QWORD*)(v56 + 104) = 0;
                *(_QWORD*)(v56 + 104) = v69;
                *(_QWORD*)(v56 + 112) = 0;
                *(_OWORD*)(v56 + 112) = GameData_1a83430;
                *(_OWORD*)(v56 + 128) = GameData_1a832b0;
                v70 = (__int64*)v66[11];
                v71 = v66[12];
                if ((unsigned __int64)v70 >= v71) {
                  v73 = v66[10];
                  v126 = v49;
                  v74 = (unsigned __int64)v70 - v73;
                  v75 = ((__int64)v70 - v73) >> 4;
                  v76 = v75 + 1;
                  if ((unsigned __int64)(v75 + 1) >> 60 != 0) {
                    GameRoutine_c36b60();
                  }
                  v77 = v71 - v73;
                  if (v77 >> 3 > v76) {
                    v76 = v77 >> 3;
                  }
                  if ((unsigned __int64)v77 >= 0x7FFFFFFFFFFFFFF0LL) {
                    v78 = 0xFFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v78 = v76;
                  }
                  if (v78 >> 60 != 0) {
                  LABEL_106:
                    GameRoutine_60a210();
                  }
                  v79 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v78, 16, 0);
                  v80 = (__int64*)(v79 + v74);
                  v125 = v79 + 16 * v78;
                  *v80 = v67;
                  v80[1] = v57;
                  v81 = v79 + v74 - 16 * v75;
                  v72 = v79 + v74 + 16;
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v57 + 8),
                                            1u, memory_order_relaxed);
                  memcpy_alt1(v81, v73, v74);
                  v66[10] = v81;
                  v66[11] = v72;
                  v66[12] = v125;
                  if (v73 != 0) {
                    v82 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v82 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v82, v73);
                  }
                  LODWORD(v49) = v126;
                }
                else {
                  *v70 = v67;
                  v70[1] = v56;
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v56 + 8),
                                            1u, memory_order_relaxed);
                  v72 = (__int64)(v70 + 2);
                }
                v66[11] = v72;
                v83 = *(_QWORD*)(a1 + 40);
                v84 = *(_QWORD*)(a1 + 48);
                if (v83 < v84) {
                  v36 = v83 + 112;
                  *(_QWORD*)v83 = v67;
                  *(_QWORD*)(v83 + 8) = v57;
                  *(float*)(v83 + 96) = v52;
                  *(_DWORD*)(v83 + 100) = v51;
                  *(_BYTE*)(v83 + 16) = 1;
                  *(_OWORD*)(v83 + 32) = v130;
                  *(_OWORD*)(v83 + 48) = v131;
                  *(_DWORD*)(v83 + 20) = v49;
                  *(_DWORD*)(v83 + 24) = v128;
                  *(_OWORD*)(v83 + 64) = v129;
                  *(_OWORD*)(v83 + 80) = v131;
                  v35 = (__int64*)fw_memory_g_heap_manager_ptr;
                }
                else {
                  v85 = v83 - *v127;
                  v86 = 0x6DB6DB6DB6DB6DB7LL * (v85 >> 4) + 1;
                  if (v86 > 0x249249249249249LL) {
                    GameRoutine_c36b80();
                  }
                  v87 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(v84 - *v127) >> 4);
                  if (2 * v87 > v86) {
                    v86 = 2 * v87;
                  }
                  if (v87 >= 0x124924924924924LL) {
                    v86 = 0x249249249249249LL;
                  }
                  if (v86 > 0x249249249249249LL) {
                    goto LABEL_106;
                  }
                  v88 = v49;
                  v89 = 112 * v86;
                  v90 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 112 * v86, 16, 0);
                  v91 = v90 + v85;
                  v92 = v90;
                  *(_QWORD*)v91 = v67;
                  *(_QWORD*)(v91 + 8) = v57;
                  *(float*)(v91 + 96) = v52;
                  *(_DWORD*)(v91 + 100) = v51;
                  *(_BYTE*)(v91 + 16) = 1;
                  *(_OWORD*)(v91 + 32) = v130;
                  *(_OWORD*)(v91 + 48) = v131;
                  *(_DWORD*)(v91 + 20) = v88;
                  *(_DWORD*)(v91 + 24) = v128;
                  v93 = *(_QWORD*)(a1 + 32);
                  v94 = *(_QWORD**)(a1 + 40);
                  *(_OWORD*)(v91 + 64) = v129;
                  *(_OWORD*)(v91 + 80) = v131;
                  v95 = v90 + v85 + v93 - (_QWORD)v94;
                  if ((_QWORD*)v93 != v94) {
                    v96 = (_QWORD*)v93;
                    v97 = (_QWORD*)(v90 + v85 + v93 - (_QWORD)v94);
                    do {
                      *v97 = *v96;
                      v97[1] = v96[1];
                      *v96 = 0;
                      v96[1] = 0;
                      v98 = v96[4];
                      v99 = v96[2];
                      v97[3] = v96[3];
                      v97[4] = v98;
                      v97[2] = v99;
                      v100 = v96[5];
                      v101 = v96[6];
                      v102 = v96[8];
                      v97[7] = v96[7];
                      v97[8] = v102;
                      v97[5] = v100;
                      v97[6] = v101;
                      v103 = v96[9];
                      v104 = v96[10];
                      v105 = v96[11];
                      v106 = v96[12];
                      v96 += 14;
                      v97[11] = v105;
                      v97[12] = v106;
                      v97[9] = v103;
                      v97[10] = v104;
                      v97 += 14;
                    } while (v96 != v94);
                    do {
                      v107 = *(_QWORD*)(v93 + 8);
                      if (v107 != 0 &&
                          atomic_fetch_add((atomic_ullong* volatile)(v107 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
                        (*(void (**)(__int64))(*(_QWORD*)v107 + 16LL))(v107);
                        std___1___shared_weak_count___release_weak_alt1(v107);
                      }
                      v93 += 112;
                    } while ((_QWORD*)v93 != v94);
                    v93 = *v127;
                  }
                  v123 = v92 + v89;
                  v36 = v91 + 112;
                  *(_QWORD*)(a1 + 32) = v95;
                  *(_QWORD*)(a1 + 40) = v91 + 112;
                  *(_QWORD*)(a1 + 48) = v123;
                  v35 = (__int64*)fw_memory_g_heap_manager_ptr;
                  if (v93 != 0) {
                    v124 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v124 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v124, v93);
                  }
                }
                *(_QWORD*)(a1 + 40) = v36;
                v37 = *(_QWORD*)(v36 - 24);
                *(_QWORD*)(v36 - 64) = *(_QWORD*)(v36 - 32);
                *(_QWORD*)(v36 - 56) = v37;
              }
            }
          }
        }
        v33 += 96;
      } while (v33 != v34);
    }
  }
}

void MultiJointAOVModule_Destructor(__int64 a1)
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
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  *(_QWORD*)a1 = wld_MultiJointAOVModule_vtable;
  v2 = *(_QWORD*)(a1 + 64);
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock_alt1(v2);
    if (v3 != 0) {
      v4 = v3;
      v5 = *(_QWORD*)(a1 + 56);
      if (v5 != 0) {
        MultiJointAovModule_a71220(v5, (_QWORD*)(a1 + 72));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak_alt1(v4);
      }
    }
  }
  v6 = *(_QWORD*)(a1 + 32);
  for (i = *(_QWORD*)(a1 + 40); i != v6; i -= 112) {
    v8 = *(_QWORD*)(i - 104);
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak_alt1(v8);
    }
  }
  v9 = *(_BYTE*)(a1 + 112);
  *(_QWORD*)(a1 + 40) = v6;
  if ((v9 & 1) != 0) {
    v10 = *(_QWORD*)(a1 + 128);
    if (v10 != 0) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v10);
    }
  }
  v12 = *(_QWORD*)(a1 + 80);
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak_alt1(v12);
  }
  v13 = *(_QWORD*)(a1 + 64);
  if (v13 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v13);
  }
  v14 = *(_QWORD*)(a1 + 32);
  if (v14 != 0) {
    v15 = *(_QWORD*)(a1 + 40);
    if (v14 == v15) {
      goto LABEL_31;
    }
    do {
      v16 = *(_QWORD*)(v15 - 104);
      if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        std___1___shared_weak_count___release_weak_alt1(v16);
      }
      v15 -= 112;
    } while (v15 != v14);
    v17 = *(_QWORD*)(a1 + 32);
    *(_QWORD*)(a1 + 40) = v14;
    v14 = v17;
    if (v17 != 0) {
    LABEL_31:
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v14);
    }
  }
}

__int64 MultiJointAOVModule_Unknown6(__int64 result)
{
  __int64 v1;
  int v2;
  __int64* v3;
  __int64* i;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 j;
  float32x4_t* v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  unsigned __int64 v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  unsigned __int64 v26;
  float32x4_t* v27;
  __int64 v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  _QWORD* v34;
  float32x4_t* v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  _QWORD* v43;
  int8x16x2_t v44;
  int8x16x2_t v45;
  int8x16x2_t v46;

  if (*(float*)(result + 96) > 0x0.0p+0f) {
    v1 = *(_QWORD*)(result + 72);
    v2 = *(_DWORD*)(*(_QWORD*)(result + 8) + 284LL);
    if (v1 != 0) {
      *(_DWORD*)(v1 + 4) = v2;
    }
    v3 = *(__int64**)(result + 32);
    for (i = *(__int64**)(result + 40); v3 != i; *(_DWORD*)(v5 + 4) = v2) {
      v5 = *v3;
      v3 += 14;
    }
    v6 = *(_QWORD**)(result + 72);
    if (v6 != nullptr) {
      v7 = *(_QWORD**)(result + 8);
      v9 = v7[54];
      v8 = v7[55];
      v10 = v7[57];
      v6[4] = v7[56];
      v6[5] = v10;
      v6[2] = v9;
      v6[3] = v8;
      v12 = v7[58];
      v11 = v7[59];
      v13 = v7[61];
      v6[8] = v7[60];
      v6[9] = v13;
      v6[6] = v12;
      v6[7] = v11;
    }
    v14 = *(_QWORD*)(result + 32);
    for (j = *(_QWORD*)(result + 40); v14 != j; v14 += 112) {
      if (*(_BYTE*)(v14 + 16) == 1) {
        if (*(_DWORD*)(v14 + 20) == -1) {
          v34 = *(_QWORD**)(result + 8);
          v35 = *(float32x4_t**)v14;
          v37 = v34[54];
          v36 = v34[55];
          v38 = v34[57];
          LANES128(v35[2]).n128_u64[0] = v34[56];
          LANES128(v35[2]).n128_u64[1] = v38;
          LANES128(v35[1]).n128_u64[0] = v37;
          LANES128(v35[1]).n128_u64[1] = v36;
          v40 = v34[60];
          v39 = v34[61];
          v43 = v34 + 58;
          v41 = v34[58];
          v42 = v43[1];
          LANES128(v35[4]).n128_u64[0] = v40;
          LANES128(v35[4]).n128_u64[1] = v39;
          LANES128(v35[3]).n128_u64[0] = v41;
          LANES128(v35[3]).n128_u64[1] = v42;
        }
        else {
          v16 = *(float32x4_t**)v14;
          v45.val[1] = *(int8x16_t*)(v14 + 64);
          LANES128(v45.val[1]).n128_u32[3] = 0;
          LANES128(v17).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(v45.val[1],
                                   COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          LANES128(v18).n128_u64[0] =
              LANES64_OF(vrev64_s32(COERCE_AS(
                             int32x2_t, LANES128(v45.val[1]).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v19).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(v45.val[1],
                                   COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
                  .n64_u64[0];
          v20 = LANES64_OF(vqtbl1_s8(v45.val[1],
                                     COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                    .n64_u64[0];
          *(int8x8_t*)&LANES128(v17).n128_i8[8] =
              vqtbl1_s8(v45.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          LANES128(v18).n128_u64[1] = LANES128(v17).n128_u64[1];
          LANES128(v19).n128_u64[1] = v20;
          v21 = vmulq_f32(v17, v45.val[1]);
          LANES128(v45.val[1]).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(v45.val[1],
                                   COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          v22 = vmulq_f32(v18, v18);
          v46.val[1] = vmulq_f32(v19, v19);
          v23 = vaddq_f32(v21, v21);
          LANES128(v45.val[1]).n128_u64[1] = v20;
          v24 = vmulq_laneq_f32(v45.val[1], *(float32x4_t*)(v14 + 64), 3);
          v46.val[0] = vsubq_f32(COERCE_AS(float32x4_t, GameData_1a837f0),
                                 vaddq_f32(vaddq_f32(v46.val[1], v46.val[1]),
                                           vaddq_f32(v22, v22)));
          v25 = vaddq_f32(v24, v24);
          v44.val[0] = vaddq_f32(v23, v25);
          v44.val[1] = vsubq_f32(v23, v25);
          LANES128(v46.val[1]).n128_u64[0] =
              LANES64_OF(
                  vqtbl2_s8(v44, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
                  .n64_u64[0];
          v26 = LANES64_OF(
                    vqtbl2_s8(v44, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL)))
                    .n64_u64[0];
          LANES128(v45.val[1]).n128_u64[0] =
              LANES64_OF(
                  vqtbl2_s8(v44, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
                  .n64_u64[0];
          LANES128(v23).n128_u64[0] =
              LANES64_OF(
                  vqtbl2_s8(v44, COERCE_AS(int8x8_t, 0x706050413121110LL)))
                  .n64_u64[0];
          v44.val[1] = *(int8x16_t*)(v14 + 48);
          LANES128(v46.val[1]).n128_u64[1] = v26;
          LANES128(v45.val[1]).n128_u64[1] = LANES128(v23).n128_u64[0];
          v45.val[0] = v46.val[0];
          LANES128(v23).n128_u64[0] =
              LANES64_OF(
                  vqtbl2_s8(v45, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
                  .n64_u64[0];
          LODWORD(v26) =
              LANES64_OF(
                  vqtbl2_s8(v45, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL)))
                  .n64_u32[0];
          LANES128(v44.val[0]).n128_u64[0] =
              LANES64_OF(
                  vqtbl2_s8(v45, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
                  .n64_u64[0];
          LANES128(v45.val[0]).n128_u32[0] =
              LANES64_OF(
                  vqtbl2_s8(v45, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL)))
                  .n64_u32[0];
          LANES128(v45.val[1]).n128_u64[0] =
              LANES64_OF(
                  vqtbl2_s8(v46, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
                  .n64_u64[0];
          LANES128(v46.val[0]).n128_u32[0] =
              LANES64_OF(
                  vqtbl2_s8(v46, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL)))
                  .n64_u32[0];
          v46.val[1] =
              vmulq_n_f32(*(float32x4_t*)(v14 + 32),
                          *(float*)(result + 100) * 0x1.0000000000000p-1f);
          v16[5] = vsubq_f32(COERCE_AS(float32x4_t, 0LL), v46.val[1]);
          v16[6] = v46.val[1];
          v27 = *(float32x4_t**)v14;
          v28 = *(_QWORD*)(*(_QWORD*)(result + 88) + 32LL) +
                ((__int64)*(int*)(v14 + 20) << 6);
          v29 = *(float32x4_t*)(v28 + 16);
          v30 = *(float32x4_t*)(v28 + 32);
          v31 = *(float32x4_t*)(v28 + 48);
          v32 = vmlaq_n_f32(
              vmlaq_lane_f32(
                  vmulq_n_f32(*(float32x4_t*)v28, LANES128(v23).n128_f32[0]),
                  v29, COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]), 1),
              v30, *(float*)&v26);
          v33 = vmlaq_n_f32(
              vmlaq_lane_f32(
                  vmulq_n_f32(*(float32x4_t*)v28,
                              LANES128(v44.val[0]).n128_f32[0]),
                  v29, COERCE_AS(float32x2_t, LANES128(v44.val[0]).n128_u64[0]),
                  1),
              v30, LANES128(v45.val[0]).n128_f32[0]);
          v45.val[0] = vmlaq_lane_f32(
              vmulq_n_f32(*(float32x4_t*)v28, LANES128(v45.val[1]).n128_f32[0]),
              v29, COERCE_AS(float32x2_t, LANES128(v45.val[1]).n128_u64[0]), 1);
          v45.val[1] =
              vmulq_n_f32(*(float32x4_t*)v28, LANES128(v44.val[1]).n128_f32[0]);
          v27[1] = v32;
          v27[2] = v33;
          v27[3] =
              vmlaq_n_f32(v45.val[0], v30, LANES128(v46.val[0]).n128_f32[0]);
          v27[4] = vaddq_f32(
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      v45.val[1], v29,
                      COERCE_AS(float32x2_t, LANES128(v44.val[1]).n128_u64[0]),
                      1),
                  v30, v44.val[1], 2),
              v31);
        }
      }
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
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
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
          v19 = (unsigned __int64)v10 - v9;
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
          v24 = v23 + v19;
          v11 = v23 + 8 * v22;
          v25 = v23 + v19 - 8 * v20;
          *(_DWORD*)v24 = v8;
          *(float*)(v24 + 4) = v18;
          v10 = (float*)(v23 + v19 + 8);
          memcpy_alt1(v25, v9, v19),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v1", "=w"));
          if (v9 != 0) {
            v26 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v26 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v9),
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
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, v9),
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
