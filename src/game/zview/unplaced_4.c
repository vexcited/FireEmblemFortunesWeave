#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void CharacterModel_d1a2a0(PSEUDO_X8, _QWORD* result,
                                                      int);
__attribute__((swiftcall)) void
CharacterSound_1095750(PSEUDO_X8, __int64, const char*, __int64, float);
__attribute__((swiftcall)) void GameRoutine_d2be90(PSEUDO_X8, int, __int64);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__attribute__((swiftcall)) void game_108d920(PSEUDO_X8, _QWORD*, __int64,
                                             const char*, float);
__attribute__((swiftcall)) void game_zview_d234c0(PSEUDO_X8, __int64 result);
__attribute__((swiftcall)) void game_zview_d95c70(PSEUDO_X8);
__attribute__((swiftcall)) void game_zview_d95da0(PSEUDO_X8, _QWORD, _QWORD,
                                                  _QWORD);
__int64* fw_containers_BalanceAfterInsert(__int64* result, __int64*);
__int64 GameRoutine_1a0a8b0(__int64, __int64, __int64);
__int64 GameRoutine_634d80(__int64, __int64);
__int64 GameRoutine_6544c0(__int64, __int64);
__int64 GameRoutine_d1b2a0(__int64 result, int, float);
__int64 GameRoutine_d1b3e0(__int64 result, unsigned int, unsigned int);
__int64 GameRoutine_d2c6a0(__int64 result);
__int64 GameRoutine_d2c7c0(int);
__int64 HubCharacterNatives_cf7940(__int64);
__int64 LocatorModule_a7bee0(__int64, const char*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
char** GameRoutine_108c640(int);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212d4e8;
extern _UNKNOWN* GameData_212deb8;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_22110c8;
extern __int128 GameData_1a82960;
extern __int128 GameData_1a83110;
extern __int128 GameData_1a83410;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a83790;
extern __int128 GameData_21a6120;
extern __int64 (***GameData_212c3c8)();
extern __int64 (*GameData_1fd8620[])();
extern __int64 (*eft_ClampCurve_ptr)();
extern __int64* GameData_212eba8[8];
extern __int64* GameData_212eda8[10];
extern __int64 GameData_2131678;
extern __int64 GameData_22110c0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 snd_g_fileIndex;
extern int* GameData_212d4e0;
extern int* GameData_212deb0;
float fmodf(float, float);
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 strlen(const char*);
void AnimCtrlModule_a78450(__int64*, _DWORD*);
void CharacterModel_d1b800(float32x2_t*);
void GameHr_d1aa20(float*, unsigned int, __int64, __int64);
void Graph_d29060(_QWORD*, long double, double);
void SkeletalBlendCallback_ce4b70(__int64, int, long double);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_8123d0();
void __attribute__((noreturn)) GameRoutine_a78a90();
void __attribute__((noreturn)) GameRoutine_d1d2e0();
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__attribute__((swiftcall)) void game_zview_cf8040(PSEUDO_X8 x8_, __int64 a1,
                                                  const char* a2);
__int64 game_zview_d198c0(float32x2_t* a1, float32x2_t* a2, char a3, char a4);
void game_zview_d1a690(__int64 a1, unsigned int a2, __int64 a3, __int64 a4,
                       int a5);
void game_zview_d1c510(__int64 a1, long double a2);
__attribute__((swiftcall)) void game_zview_d56ba0(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2, float a4);
__attribute__((swiftcall)) void game_zview_d57000(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2,
                                                  __int64 unused_int2,
                                                  const char* a3);
bool game_zview_d95b30(__int64 a1, __int64 a2, __int64 a3);
void game_zview_103db80(__int64 a1);

__attribute__((swiftcall)) void game_zview_cf8040(PSEUDO_X8 x8_, __int64 a1,
                                                  const char* a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  const char* v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  __int64** v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  bool v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  int v21;
  int v22;
  bool v23;
  __int64 v24;
  unsigned __int64 v25;
  bool v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  int v31;
  __int64** v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  char* v42;
  __int64 v43;
  __int64* v44;
  __int64* v45;
  char* v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  bool v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  int v54;
  int v55;
  __int64* v56;
  __int64 v57;
  __int64* v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64* v61;
  __int64 v62;
  __int64 v63;
  __int64* v64;
  __int64 v65;
  __int64 v66;
  const char* v67;
  _QWORD* v68;
  __int64* v69;
  struct {
    __int64 v70;
    unsigned __int64 v71;
    char* v72;
  } v70_;

  if (*(_QWORD*)(a1 + 272) == 0) {
    goto LABEL_73;
  }
  v4 = a2;
  v6 = strlen(a2);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_121;
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
    v70_.v71 = v7;
    v70_.v72 = v8;
    v70_.v70 = v9 | 1;
    goto LABEL_10;
  }
  LOBYTE(v70_.v70) = 2 * v6;
  v8 = (char*)&v70_.v70 + 1;
  if (v6 != 0) {
  LABEL_10:
    memmove((__int64)v8, (__int64)v4, v7);
  }
  v8[v7] = 0;
  v10 = (__int64**)(a1 + 288);
  v11 = *(_QWORD*)(a1 + 288);
  if (v11 == 0) {
    v32 = (__int64**)(a1 + 288);
    if ((v70_.v70 & 1) == 0) {
      goto LABEL_65;
    }
    goto LABEL_61;
  }
  v12 = a1 + 288;
  v67 = v4;
  v68 = a3;
  if ((v70_.v70 & 1) != 0) {
    v13 = v70_.v72;
  }
  else {
    v13 = (char*)&v70_.v70 + 1;
  }
  if ((v70_.v70 & 1) != 0) {
    v14 = v70_.v71;
  }
  else {
    v14 = (unsigned __int64)(unsigned __int8)v70_.v70 >> 1;
  }
  do {
    v15 = *(unsigned __int8*)(v11 + 32);
    v16 = (v15 & 1) == 0;
    v17 = v15 >> 1;
    if (v16) {
      v18 = v17;
    }
    else {
      v18 = *(_QWORD*)(v11 + 40);
    }
    if (v16) {
      v19 = v11 + 33;
    }
    else {
      v19 = *(_QWORD*)(v11 + 48);
    }
    if (v14 >= v18) {
      v20 = v18;
    }
    else {
      v20 = v14;
    }
    v21 = memcmp(v19, (__int64)v13, v20);
    if (v18 < v14) {
      v22 = -1;
    }
    else {
      v22 = 1;
    }
    if (v18 == v14) {
      v22 = 0;
    }
    if (v21 != 0) {
      v22 = v21;
    }
    v23 = v22 < 0;
    if (v22 >= 0) {
      v24 = 0;
    }
    else {
      v24 = 8;
    }
    if (!v23) {
      v12 = v11;
    }
    v11 = *(_QWORD*)(v11 + v24);
  } while (v11 != 0);
  if ((__int64**)v12 == v10) {
    v32 = (__int64**)(a1 + 288);
  }
  else {
    v25 = *(unsigned __int8*)(v12 + 32);
    v26 = (v25 & 1) == 0;
    v27 = v25 >> 1;
    if (v26) {
      v28 = v27;
    }
    else {
      v28 = *(_QWORD*)(v12 + 40);
    }
    if (v26) {
      v29 = v12 + 33;
    }
    else {
      v29 = *(_QWORD*)(v12 + 48);
    }
    if (v28 >= v14) {
      v30 = v14;
    }
    else {
      v30 = v28;
    }
    v31 = memcmp((__int64)v13, v29, v30);
    if (v31 != 0) {
      if (v31 >= 0) {
        v32 = (__int64**)v12;
      }
      else {
        v32 = (__int64**)(a1 + 288);
      }
    }
    else if (v14 >= v28) {
      v32 = (__int64**)v12;
    }
    else {
      v32 = (__int64**)(a1 + 288);
    }
  }
  v4 = v67;
  a3 = v68;
  if ((v70_.v70 & 1) != 0) {
  LABEL_61:
    if (v70_.v72 != nullptr) {
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, (__int64)v70_.v72);
    }
  }
LABEL_65:
  if (v10 != v32) {
    v34 = v32[8];
    *a3 = v32[7];
    a3[1] = v34;
    if (v34 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 2), 1u,
                                memory_order_relaxed);
    }
    return;
  }
  v35 = LocatorModule_a7bee0(*(_QWORD*)(a1 + 272), v4);
  if (v35 == 0) {
  LABEL_73:
    *a3 = 0;
    a3[1] = 0;
    return;
  }
  v36 = v35;
  v37 = (__int64*)fw_memory_g_heap_manager_ptr;
  v38 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       32, 16, 0);
  *(_QWORD*)(v38 + 8) = 0;
  *(_QWORD*)(v38 + 16) = 0;
  *(_QWORD*)(v38 + 24) = v36;
  v39 = v38 + 24;
  *(_QWORD*)v38 = GameData_1fd8620;
  v40 = strlen(v4);
  if (v40 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_121:
    String_60a1d0();
  }
  v41 = v40;
  if (v40 >= 0x17) {
    if ((v40 | 7) == 0x17) {
      v43 = 26;
    }
    else {
      v43 = (v40 | 7) + 1;
    }
    v42 = (char*)fw_memory_HeapManager_Allocate(*v37, v43, 16, 0);
    v70_.v71 = v41;
    v70_.v72 = v42;
    v70_.v70 = v43 | 1;
    goto LABEL_79;
  }
  LOBYTE(v70_.v70) = 2 * v40;
  v42 = (char*)&v70_.v70 + 1;
  if (v40 != 0) {
  LABEL_79:
    memmove((__int64)v42, (__int64)v4, v41);
  }
  v42[v41] = 0;
  v69 = a3;
  v44 = (__int64*)(a1 + 288);
  v45 = *v10;
  if (*v10 != nullptr) {
    if ((v70_.v70 & 1) != 0) {
      v46 = v70_.v72;
    }
    else {
      v46 = (char*)&v70_.v70 + 1;
    }
    if ((v70_.v70 & 1) != 0) {
      v47 = v70_.v71;
    }
    else {
      v47 = (unsigned __int64)(unsigned __int8)v70_.v70 >> 1;
    }
    while (1) {
      while (1) {
        v44 = v45;
        v48 = *((unsigned __int8*)v45 + 32);
        v49 = (v48 & 1) == 0;
        v50 = v48 >> 1;
        v51 = v49 ? v50 : v44[5];
        v52 = v49 ? (__int64)v44 + 33 : v44[6];
        v53 = v51 >= v47 ? v47 : v51;
        v54 = memcmp((__int64)v46, v52, v53);
        if (v54 != 0) {
          break;
        }
        if (v47 >= v51) {
          goto LABEL_101;
        }
      LABEL_87:
        v45 = (__int64*)*v44;
        v10 = (__int64**)v44;
        if (*v44 == 0) {
          goto LABEL_107;
        }
      }
      if (v54 < 0) {
        goto LABEL_87;
      }
    LABEL_101:
      v55 = memcmp(v52, (__int64)v46, v53);
      if (v55 != 0) {
        if ((v55 & 0x80000000) == 0) {
          goto LABEL_110;
        }
      }
      else if (v51 >= v47) {
      LABEL_110:
        v64 = v69;
        v57 = fw_memory_g_heap_manager_ptr;
        goto LABEL_111;
      }
      v45 = (__int64*)v44[1];
      if (v45 == nullptr) {
        v10 = (__int64**)(v44 + 1);
        break;
      }
    }
  }
LABEL_107:
  v56 = v44;
  v57 = fw_memory_g_heap_manager_ptr;
  v58 = (__int64*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 72, 16, 0);
  v59 = v70_.v70;
  v60 = v70_.v71;
  v70_.v70 = 0;
  v70_.v71 = 0;
  v44 = v58;
  v61 = v58;
  v58[8] = 0;
  *v58 = 0;
  v58[1] = 0;
  v58[2] = (__int64)v56;
  v58[4] = v59;
  v58[5] = v60;
  v62 = (__int64)v70_.v72;
  v70_.v72 = nullptr;
  v58[6] = v62;
  v58[7] = 0;
  *v10 = v58;
  v63 = **(_QWORD**)(a1 + 280);
  if (v63 != 0) {
    *(_QWORD*)(a1 + 280) = v63;
    v61 = *v10;
  }
  fw_containers_BalanceAfterInsert(*(__int64**)(a1 + 288), v61);
  v64 = v69;
  ++*(_QWORD*)(a1 + 296);
LABEL_111:
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v38 + 8), 1u,
                            memory_order_relaxed);
  v65 = v44[8];
  v44[7] = v39;
  v44[8] = v38;
  if (v65 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v65 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65);
    std___1___shared_weak_count___release_weak(v65);
  }
  if ((v70_.v70 & 1) != 0 && v70_.v72 != nullptr) {
    v66 = 128;
    if (*(_QWORD*)(*(_QWORD*)v57 + 200LL) == 0) {
      v66 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v57 + v66, (__int64)v70_.v72);
  }
  *v64 = v39;
  v64[1] = v38;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v38 + 16), 1u,
                            memory_order_relaxed);
  if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
    std___1___shared_weak_count___release_weak(v38);
  }
}

__int64 game_zview_d198c0(float32x2_t* a1, float32x2_t* a2, char a3, char a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  float32x2_t* v5;
  __int64 v10;
  int v11;
  int v12;
  float32x2_t* v13;
  int32x2_t v14;
  int v15;
  int v17;
  float* v18;
  float32x2_t* v19;
  unsigned __int32 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  bool v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  float32x2_t* v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;

  v4 = LANES64(a1[34]).n64_i64[0];
  v5 = (float32x2_t*)LANES64(a1[35]).n64_u64[0];
  if ((float32x2_t*)v4 != v5) {
    v10 = v4 + 56;
    v11 = LANES64(a2[3]).n64_u8[4];
    v12 = LANES64(a2[4]).n64_u8[4];
    do {
      if (*(_DWORD*)(v10 - 56) != LANES64(*(a2)).n64_u32[0]) {
        goto LABEL_3;
      }
      LANES64(v14).n64_u64[0] =
          LANES64_OF(vceq_f32(*(float32x2_t*)(v10 - 48), a2[1])).n64_u64[0];
      if ((LANES64(v14).n64_u8[0] & 1) == 0 ||
          (LANES64(v14).n64_u8[4] & 1) == 0) {
        goto LABEL_3;
      }
      v15 = *(unsigned __int8*)(v10 - 28);
      if (v15 != v11 || v15 == 0) {
        if (v15 != v11) {
          goto LABEL_3;
        }
      }
      else if (*(float*)(v10 - 32) != LANES64(a2[3]).n64_f32[0]) {
        goto LABEL_3;
      }
      v17 = *(unsigned __int8*)(v10 - 20);
      if (v17 == v12 && *(_BYTE*)(v10 - 20) != 0) {
        if (*(_DWORD*)(v10 - 24) != LANES64(a2[4]).n64_u32[0]) {
          goto LABEL_3;
        }
      }
      else if (v17 != v12) {
        goto LABEL_3;
      }
      if (*(float*)(v10 - 16) == LANES64(a2[5]).n64_f32[0] &&
          *(float*)(v10 - 12) == LANES64(a2[5]).n64_f32[1] &&
          *(unsigned __int8*)(v10 - 8) == LANES64(a2[6]).n64_u8[0] &&
          *(unsigned __int8*)(v10 - 3) == LANES64(a2[6]).n64_u8[5] &&
          *(unsigned __int8*)(v10 - 7) == LANES64(a2[6]).n64_u8[1] &&
          *(unsigned __int8*)(v10 - 6) == LANES64(a2[6]).n64_u8[2] &&
          *(unsigned __int8*)(v10 - 5) == LANES64(a2[6]).n64_u8[3] &&
          *(unsigned __int8*)(v10 - 2) == LANES64(a2[6]).n64_u8[6]) {
        v18 = (float*)(v10 - 40);
        v19 = (float32x2_t*)(v10 - 40);
        if (*(_BYTE*)(v10 - 36) == 1) {
          if (LANES64(a2[2]).n64_u8[4] != 1 ||
              (v19 = (float32x2_t*)(v10 - 40),
               LANES64(a2[2]).n64_f32[0] < *v18)) {
            v19 = a2 + 2;
          }
        }
        v20 = LANES64(*(v19)).n64_u32[0];
        *(_BYTE*)(v10 - 36) = LANES64(*(v19)).n64_u8[4];
        *(_DWORD*)v18 = v20;
        return *(_QWORD*)v10;
      }
    LABEL_3:
      v13 = (float32x2_t*)(v10 + 8);
      v10 += 64;
    } while (v13 != v5);
  }
  v21 = LANES64(a1[36]).n64_u64[0];
  if ((unsigned __int64)v5 >= v21) {
    v27 = (char*)v5 - v4;
    v28 = ((__int64)v5 - v4) >> 6;
    v29 = v28 + 1;
    if ((unsigned __int64)(v28 + 1) >> 58 != 0) {
      GameRoutine_d1d2e0();
    }
    v30 = v21 - v4;
    if (v30 >> 5 > v29) {
      v29 = v30 >> 5;
    }
    v31 = (unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFC0LL;
    v32 = 0x3FFFFFFFFFFFFFFLL;
    if (!v31) {
      v32 = v29;
    }
    if (v32 >> 58 != 0) {
      GameRoutine_60a210();
    }
    v33 = v32 << 6;
    v34 = fw_memory_g_heap_manager_ptr;
    v35 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v32 << 6, 16, 0);
    v36 = (float32x2_t*)&v27[v35];
    v37 = LANES64(a2[5]).n64_u64[0];
    v38 = LANES64(a2[6]).n64_u64[0];
    LANES64(*(v36)).n64_u32[0] = LANES64(*(a2)).n64_u32[0];
    v39 = LANES64(a2[7]).n64_u64[0];
    LANES64(v36[5]).n64_u64[0] = v37;
    LANES64(v36[6]).n64_u64[0] = v38;
    LANES64(v36[7]).n64_u64[0] = v39;
    v40 = LANES64(a2[2]).n64_u64[0];
    LANES64(v36[1]).n64_u64[0] = LANES64(a2[1]).n64_u64[0];
    LANES64(v36[2]).n64_u64[0] = v40;
    v42 = LANES64(a2[3]).n64_u64[0];
    v41 = LANES64(a2[4]).n64_u64[0];
    v26 = (__int64)&v27[v35 + 64];
    LANES64(v36[3]).n64_u64[0] = v42;
    LANES64(v36[4]).n64_u64[0] = v41;
    if ((float32x2_t*)v4 != v5) {
      v43 = v4;
      v44 = (__int64)&v27[v35 + -64 * v28];
      do {
        *(_DWORD*)v44 = *(_DWORD*)v43;
        *(_QWORD*)(v44 + 8) = *(_QWORD*)(v43 + 8);
        v45 = *(_QWORD*)(v43 + 24);
        *(_QWORD*)(v44 + 16) = *(_QWORD*)(v43 + 16);
        *(_QWORD*)(v44 + 24) = v45;
        v46 = *(_QWORD*)(v43 + 32);
        v47 = *(_QWORD*)(v43 + 40);
        v48 = *(_QWORD*)(v43 + 48);
        v49 = *(_QWORD*)(v43 + 56);
        v43 += 64;
        *(_QWORD*)(v44 + 48) = v48;
        *(_QWORD*)(v44 + 56) = v49;
        *(_QWORD*)(v44 + 32) = v46;
        *(_QWORD*)(v44 + 40) = v47;
        v44 += 64;
      } while ((float32x2_t*)v43 != v5);
    }
    LANES64(a1[34]).n64_u64[0] = (unsigned __int64)&v27[v35 + -64 * v28];
    LANES64(a1[35]).n64_u64[0] = v26;
    LANES64(a1[36]).n64_u64[0] = v35 + v33;
    if (v4 != 0) {
      v50 = 128;
      if (*(_QWORD*)(*(_QWORD*)v34 + 200LL) == 0) {
        v50 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v34 + v50, v4);
    }
  }
  else {
    LANES64(*(v5)).n64_u32[0] = LANES64(*(a2)).n64_u32[0];
    LANES64(v5[1]).n64_u64[0] = LANES64(a2[1]).n64_u64[0];
    v22 = LANES64(a2[3]).n64_u64[0];
    LANES64(v5[2]).n64_u64[0] = LANES64(a2[2]).n64_u64[0];
    LANES64(v5[3]).n64_u64[0] = v22;
    v23 = LANES64(a2[4]).n64_u64[0];
    v24 = LANES64(a2[5]).n64_u64[0];
    v25 = LANES64(a2[7]).n64_u64[0];
    v26 = (__int64)&v5[8];
    LANES64(v5[6]).n64_u64[0] = LANES64(a2[6]).n64_u64[0];
    LANES64(v5[7]).n64_u64[0] = v25;
    LANES64(v5[4]).n64_u64[0] = v23;
    LANES64(v5[5]).n64_u64[0] = v24;
  }
  LANES64(a1[35]).n64_u64[0] = v26;
  if ((a4 & 1) == 0) {
    v51 = LANES64(a1[2]).n64_u64[0];
    *(_QWORD*)(v26 - 8) = v51;
    LANES64(a1[2]).n64_u64[0] = v51 + 1;
  }
  if (*(_BYTE*)(v26 - 11) == 1) {
    *(_DWORD*)(v26 - 32) = 0x7FFFFFFF;
    *(_BYTE*)(v26 - 28) = 1;
  }
  if ((a3 & 1) != 0) {
    CharacterModel_d1b800(a1);
  }
  v10 = v26 - 8;
  return *(_QWORD*)v10;
}

void game_zview_d1a690(__int64 a1, unsigned int a2, __int64 a3, __int64 a4,
                       int a5)
{

#pragma clang fp contract(off)
  __int64 v5;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  float v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  unsigned int* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  struct {
    __int64 v30;
    float v31;
    int v32;
    __int64 v33;
  } v30_;
  struct {
    _BYTE v34[8];
    int v35;
    char gap44_[12];
    int v36;
    char gap60_[12];
    __int64 v37;
  } v34_;
  struct {
    unsigned int* v38;
    unsigned int* v39;
    char gap160_[24];
    __int64 v40;
  } v38_;

  v5 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(a1 + 360) = a2;
  v11 = *(_QWORD*)(v5 + 232);
  v12 = *(_QWORD*)(v11 + 392);
  v13 = *(_QWORD*)(v11 + 400);
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
    v14 = *(_QWORD*)(v12 + 11608);
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak(v13);
    }
  }
  else {
    v14 = *(_QWORD*)(v12 + 11608);
  }
  CharacterModel_d1a2a0((void*)((__int64)v34_.v34), (_QWORD*)a1, a2);
  v15 = GameRoutine_d2c6a0(a2);
  CharacterModel_d1a2a0((void*)((__int64)&v38_.v38), (_QWORD*)a1, a2);
  v16 = fw_memory_g_heap_manager_ptr;
  if ((a3 & 0x100000000LL) != 0) {
    v17 = *(float*)&a3;
  }
  else {
    v17 = *(float*)&v38_.v38;
  }
  if (v38_.v40 != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18,
                                  v38_.v40);
  }
  if ((a4 & 0x100000000LL) == 0) {
    LODWORD(a4) = 0;
    if (v15 < 0) {
      if (v15 > -1009115454) {
        if (v15 == -1009115453 || v15 == -589947500) {
          goto LABEL_30;
        }
        v19 = -574916402;
      }
      else {
        if (v15 == -1689213573 || v15 == -1101902990) {
          goto LABEL_30;
        }
        v19 = -1054720718;
      }
    }
    else if (v15 > 1192222314) {
      if (v15 == 1192222315 || v15 == 1257611790) {
        goto LABEL_30;
      }
      v19 = 1669996436;
    }
    else {
      if (v15 == 0 || v15 == 105782307) {
        goto LABEL_30;
      }
      v19 = 119788728;
    }
    if (v15 != v19) {
      LODWORD(a4) = v34_.v36;
    }
  }
LABEL_30:
  v20 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    if (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
      v21 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      if ((v21 & 8) != 0) {
        v22 = 2;
      }
      else {
        v22 = 3;
      }
      v20 = (v22 & v21) == 0;
    }
    else {
      v20 = 0;
    }
  }
  if ((a5 & v20) != 0) {
    v17 = 0x0.0p+0f;
  }
  *(_QWORD*)(a1 + 120) = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(a1 + 144) = *(_QWORD*)(a1 + 136);
  *(_QWORD*)(a1 + 208) = *(_QWORD*)(a1 + 200);
  *(_QWORD*)(a1 + 232) = *(_QWORD*)(a1 + 224);
  GameRoutine_d2be90((void*)((__int64*)&v38_.v38), a2, v14);
  if (v38_.v39 == v38_.v38) {
    v30_.v30 = a1;
    v30_.v31 = v17;
    v30_.v32 = a4;
    v30_.v33 = v14;
    GameRoutine_d1b3e0((__int64)&v30_.v30, 0, a2);
    GameRoutine_d1b3e0((__int64)&v30_.v30, 1u, a2);
    v24 = v34_.v35;
  }
  else {
    v30_.v30 = a1;
    v30_.v31 = v17;
    v30_.v32 = a4;
    v30_.v33 = v14;
    GameHr_d1aa20((float*)&v30_.v30, 0, (__int64)v38_.v38, (__int64)v38_.v39);
    GameHr_d1aa20((float*)&v30_.v30, 1u, (__int64)v38_.v38, (__int64)v38_.v39);
    v23 = GameRoutine_d2c6a0(*v38_.v38);
    if (v23 == 0) {
      goto LABEL_44;
    }
    v24 = v23;
  }
  GameRoutine_d1b2a0(a1, v24, v17);
LABEL_44:
  *(_BYTE*)(a1 + 380) = *((_BYTE*)GameRoutine_108c640(v15) + 16);
  v25 = GameRoutine_d2c7c0(a2);
  v26 = v38_.v38;
  *(_DWORD*)(a1 + 364) = v25;
  *(_DWORD*)(a1 + 372) = a3;
  *(_BYTE*)(a1 + 368) = BYTE4(v25);
  *(_BYTE*)(a1 + 376) = BYTE4(a3);
  *(_WORD*)(a1 + 381) = 257;
  if (v26 != nullptr) {
    v27 = *(_QWORD*)v16;
    v38_.v39 = v26;
    v28 = 128;
    if (*(_QWORD*)(v27 + 200) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(v27 + v28, (__int64)v26);
  }
  if (v34_.v37 != 0) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v29, v34_.v37);
  }
}

void game_zview_d1c510(__int64 a1, long double a2)
{
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float v13;
  float v14;
  __int64 v15;
  __int64 v16;
  float v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  float* v23;
  float v24;
  long double v25;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  float32x2_t* v33;
  int32x2_t v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  float32x2_t* v39;
  int32x2_t v40;
  __int64 v41;
  struct {
    float v42[10];
    __int64 v43;
  } v42_;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v4 = (v3 & 8) != 0 ? 2 : 3;
    if ((v4 & v3) == 0 && (*(_BYTE*)(a1 + 350) & 1) != 0 &&
        *(_BYTE*)(a1 + 382) == 1) {
      v5 = *(_QWORD*)(a1 + 168);
      if (v5 != 0) {
        v6 = *(_QWORD*)(v5 + 32);
        if (*(_BYTE*)(v6 + 124) == 1) {
          v7 = (__int64*)(*(_QWORD*)(v6 + 96) + 56LL * *(int*)(v6 + 120));
          v9 = *v7;
          v8 = v7[1];
          if (v8 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                      memory_order_relaxed);
          }
          if (v9 != 0) {
            LODWORD(v10) = *(_DWORD*)(v9 + 108);
          }
          else {
            LODWORD(v10) = 0;
          }
          if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
            std___1___shared_weak_count___release_weak(v8);
          }
          if (v9 != 0) {
            goto LABEL_22;
          }
          if ((*(_BYTE*)(v6 + 124) & 1) == 0) {
            goto LABEL_89;
          }
          v10 = *(_QWORD*)(*(_QWORD*)(v6 + 96) + 56LL * *(int*)(v6 + 120) + 16);
          if ((v10 & 0x100000000LL) != 0) {
          LABEL_22:
            v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v5 + 24) + 72LL) +
                             104LL * (int)v10);
            if (v11 != 0) {
              v12 = *(_QWORD*)(v11 + 16);
              if (v12 != 0 &&
                  *(__int64 (**)(void))(v12 + 16) == eft_ClampCurve_ptr) {
                LODWORD(a2) = *(_DWORD*)(v12 + 8);
                SkeletalBlendCallback_ce4b70(v5, 1, a2);
                *(_BYTE*)(a1 + 382) = 0;
              }
            }
          }
        }
      }
    }
  }
  if (*(_BYTE*)(a1 + 376) != 1) {
    goto LABEL_35;
  }
  v13 = *(float*)(a1 + 372);
  v14 =
      fabsf(*(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16LL) + 8LL) +
                      228LL) *
            *(float*)(a1 + 336));
  if (v13 > 0x0.0p+0f) {
    v13 = v13 - v14;
    if (v13 >= 0x0.0p+0f) {
      goto LABEL_33;
    }
  LABEL_32:
    *(_DWORD*)(a1 + 372) = 0;
  LABEL_34:
    *(_BYTE*)(a1 + 376) = 0;
    goto LABEL_35;
  }
  if (v13 < 0x0.0p+0f) {
    v13 = v13 + v14;
    if (v13 > 0x0.0p+0f) {
      goto LABEL_32;
    }
  }
LABEL_33:
  *(float*)(a1 + 372) = v13;
  *(_BYTE*)(a1 + 376) = 1;
  if (v13 <= 0x0.0p+0f) {
    goto LABEL_34;
  }
LABEL_35:
  if (*(_BYTE*)(a1 + 368) != 1) {
    goto LABEL_88;
  }
  if ((*(_BYTE*)(a1 + 381) & 1) != 0) {
    goto LABEL_88;
  }
  v15 = *(_QWORD*)(a1 + 168);
  if (v15 == 0) {
    goto LABEL_88;
  }
  CharacterModel_d1a2a0((void*)((__int64)v42_.v42), (_QWORD*)a1,
                        *(_DWORD*)(a1 + 364));
  v16 = *(_QWORD*)(v15 + 32);
  if (*(_BYTE*)(v16 + 124) != 1) {
    goto LABEL_84;
  }
  v17 = v42_.v42[0];
  v18 = (__int64*)(*(_QWORD*)(v16 + 96) + 56LL * *(int*)(v16 + 120));
  v20 = *v18;
  v19 = v18[1];
  if (v19 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v20 != 0) {
    LODWORD(v21) = *(_DWORD*)(v20 + 108);
    if (v19 == 0) {
      goto LABEL_47;
    }
  }
  else {
    LODWORD(v21) = 0;
    if (v19 == 0) {
      goto LABEL_47;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak(v19);
  }
LABEL_47:
  if (v20 != 0) {
    goto LABEL_92;
  }
  if ((*(_BYTE*)(v16 + 124) & 1) == 0) {
    goto LABEL_89;
  }
  v21 = *(_QWORD*)(*(_QWORD*)(v16 + 96) + 56LL * *(int*)(v16 + 120) + 16);
  if ((v21 & 0x100000000LL) != 0) {
  LABEL_92:
    v22 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v15 + 24) + 72LL) + 104LL * (int)v21);
    if (v22 != 0) {
      v23 = *(float**)(v22 + 16);
      if (v23 != nullptr) {
        if ((float)(v17 + (float)(*v23 * 0x1.1111120000000p-6f)) >=
            (float)(v23[2] * 0x1.1111120000000p-6f)) {
          goto LABEL_57;
        }
      }
      else if ((float)(v17 + 0x0.0p+0f) >= 0x0.0p+0f) {
        goto LABEL_57;
      }
      if (v23 == nullptr || (*(_BYTE*)(v22 + 168) & 1) != 0) {
      LABEL_57:
        if ((*(_BYTE*)(a1 + 368) & 1) != 0) {
          v24 = fmaxf(v17, *(float*)(a1 + 372));
          if (*(_BYTE*)(a1 + 376) == 0) {
            v24 = v17;
          }
          game_zview_d1a690(a1, *(_DWORD*)(a1 + 364),
                            LODWORD(v24) | 0x100000000LL, 0, 0);
          v29 = *(_QWORD*)(a1 + 168);
          if (v29 != 0) {
            v30 = *(_QWORD*)(v29 + 32);
            if (*(_BYTE*)(v30 + 124) == 1) {
              v31 = *(_QWORD*)(v30 + 96) + 56LL * *(int*)(v30 + 120);
              v33 = *(float32x2_t**)v31;
              v32 = *(_QWORD*)(v31 + 8);
              if (v32 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8),
                                          1u, memory_order_relaxed);
              }
              if (v33 != nullptr) {
                *(_QWORD*)&v25 = *(_QWORD*)(a1 + 304);
                LANES64(v34).n64_u64[0] =
                    LANES64_OF(vceq_f32(v33[11], *(float32x2_t*)&v25))
                        .n64_u64[0];
                if ((LANES64(v34).n64_u8[0] & 1) == 0 ||
                    (LANES64(v34).n64_u8[4] & 1) == 0) {
                  LANES64(v33[11]).n64_u32[0] = LODWORD(v25);
                  LODWORD(v25) = *(_DWORD*)(a1 + 308);
                  LANES64(v33[11]).n64_u32[1] = LODWORD(v25);
                  Graph_d29060(v33, v25, LANES64(v34).n64_f64[0]);
                  *(_QWORD*)&v25 = *(_QWORD*)(a1 + 304);
                }
                LANES64(v33[12]).n64_u32[0] = LODWORD(v25);
                LANES64(v33[12]).n64_u32[1] = *(_DWORD*)(a1 + 308);
              }
              if (v32 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
                std___1___shared_weak_count___release_weak(v32);
              }
            }
          }
          v35 = *(_QWORD*)(a1 + 256);
          if (v35 != 0) {
            v36 = *(_QWORD*)(v35 + 32);
            if (*(_BYTE*)(v36 + 124) == 1) {
              v37 = *(_QWORD*)(v36 + 96) + 56LL * *(int*)(v36 + 120);
              v39 = *(float32x2_t**)v37;
              v38 = *(_QWORD*)(v37 + 8);
              if (v38 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v38 + 8),
                                          1u, memory_order_relaxed);
              }
              if (v39 != nullptr) {
                *(_QWORD*)&v25 = *(_QWORD*)(a1 + 304);
                LANES64(v40).n64_u64[0] =
                    LANES64_OF(vceq_f32(v39[11], *(float32x2_t*)&v25))
                        .n64_u64[0];
                if ((LANES64(v40).n64_u8[0] & 1) == 0 ||
                    (LANES64(v40).n64_u8[4] & 1) == 0) {
                  LANES64(v39[11]).n64_u32[0] = LODWORD(v25);
                  LODWORD(v25) = *(_DWORD*)(a1 + 308);
                  LANES64(v39[11]).n64_u32[1] = LODWORD(v25);
                  Graph_d29060(v39, v25, LANES64(v40).n64_f64[0]);
                  *(_QWORD*)&v25 = *(_QWORD*)(a1 + 304);
                }
                LANES64(v39[12]).n64_u32[0] = LODWORD(v25);
                LANES64(v39[12]).n64_u32[1] = *(_DWORD*)(a1 + 308);
              }
              if (v38 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
                std___1___shared_weak_count___release_weak(v38);
              }
            }
          }
          goto LABEL_84;
        }
      LABEL_89:
        GameRoutine_8123d0();
      }
    }
  }
LABEL_84:
  if (v42_.v43 != 0) {
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v41,
                                  v42_.v43);
  }
LABEL_88:
  *(_BYTE*)(a1 + 381) = 0;
}

__attribute__((swiftcall)) void game_zview_d56ba0(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2, float a4)
{

#pragma clang fp contract(off)
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v8;
  unsigned __int8 explicit;
  int* v10;
  int v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;

  v5 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  if (*(_BYTE*)(v5 + 145) == 1) {
    v8 = HubCharacterNatives_cf7940(v5);
    if (v8 != 0) {
      explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4e8,
                                      memory_order_acquire);
      v10 = GameData_212d4e0;
      if ((explicit & 1) == 0) {
        v17 = v8;
        v16 = __cxa_guard_acquire((__int64)GameData_212d4e8);
        v10 = GameData_212d4e0;
        v8 = v17;
        if (v16 != 0) {
          *GameData_212d4e0 = wld_Crc32(0, "CharacterSound", 0xEu);
          __cxa_guard_release((__int64)GameData_212d4e8);
          v10 = GameData_212d4e0;
          v8 = v17;
        }
      }
      v11 = *v10;
      v12 = *(_QWORD*)(v8 + 512);
      v13 = v12;
      while (v13 != *(_QWORD*)(v8 + 504)) {
        v14 = *(_DWORD*)(v13 - 16);
        v13 -= 16;
        v12 -= 16;
        if (v14 == v11) {
          if (*(_QWORD*)(v8 + 512) != v12) {
            v15 = *(_QWORD*)(v12 + 8);
            if (v15 != 0) {
              CharacterSound_1095750((void*)(a3), v15, "SE_ACT_<LD/MB>_<Arg>",
                                     a2, a4);
              return;
            }
          }
          break;
        }
      }
    }
  }
  *(_QWORD*)a3 = 0;
  *(_DWORD*)(a3 + 8) = 0x2000;
}

__attribute__((swiftcall)) void game_zview_d57000(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2,
                                                  __int64 unused_int2,
                                                  const char* a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v8;
  unsigned __int8 explicit;
  int* v10;
  int v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  _QWORD* v16;
  __int64 result;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;

  v5 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  if (*(_BYTE*)(v5 + 145) == 1) {
    v8 = HubCharacterNatives_cf7940(v5);
    if (v8 != 0) {
      explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212deb8,
                                      memory_order_acquire);
      v10 = GameData_212deb0;
      if ((explicit & 1) == 0) {
        v21 = v8;
        v20 = __cxa_guard_acquire((__int64)GameData_212deb8);
        v10 = GameData_212deb0;
        v8 = v21;
        if (v20 != 0) {
          *GameData_212deb0 = wld_Crc32(0, "CharacterBuilder", 0x10u);
          __cxa_guard_release((__int64)GameData_212deb8);
          v10 = GameData_212deb0;
          v8 = v21;
        }
      }
      v11 = *v10;
      v12 = *(_QWORD*)(v8 + 512);
      v13 = v12;
      while (v13 != *(_QWORD*)(v8 + 504)) {
        v14 = *(_DWORD*)(v13 - 16);
        v13 -= 16;
        v12 -= 16;
        if (v14 == v11) {
          if (*(_QWORD*)(v8 + 512) != v12) {
            v15 = *(_QWORD*)(v12 + 8);
            if (v15 != 0) {
              v16 = *(_QWORD**)(v15 + 80);
              if (v16 != nullptr) {
                X8CALL_X0(__int64, game_108d920((void*)(a4), v16, a2, a3,
                                                0x1.0000000000000p+0f));
                return;
              }
            }
          }
          break;
        }
      }
    }
  }
  v18 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       296, 16, 0);
  *(_QWORD*)(v18 + 16) = 0;
  v19 = GameData_2131678;
  *(_DWORD*)(v18 + 32) = 0;
  *(_QWORD*)(v18 + 40) = 0;
  *(_DWORD*)(v18 + 48) = 0x2000;
  *(_DWORD*)(v18 + 104) = 0;
  *(_QWORD*)(v18 + 56) = 0;
  *(_QWORD*)(v18 + 64) = 0;
  *(_QWORD*)(v18 + 72) = 0;
  *(_WORD*)(v18 + 80) = 0;
  *(_WORD*)(v18 + 116) = 0;
  *(_WORD*)(v18 + 136) = 0;
  *(_BYTE*)(v18 + 160) = 0;
  *(_BYTE*)(v18 + 288) = 0;
  *(_QWORD*)(v18 + 272) = 0;
  *(_QWORD*)(v18 + 280) = 0;
  *(_QWORD*)(v18 + 256) = 0;
  *(_QWORD*)(v18 + 264) = 0;
  *(_QWORD*)(v18 + 240) = 0;
  *(_QWORD*)(v18 + 248) = 0;
  *(_QWORD*)(v18 + 224) = 0;
  *(_QWORD*)(v18 + 232) = 0;
  *(_QWORD*)(v18 + 208) = 0;
  *(_QWORD*)(v18 + 216) = 0;
  *(_QWORD*)(v18 + 192) = 0;
  *(_QWORD*)(v18 + 200) = 0;
  *(_QWORD*)(v18 + 176) = 0;
  *(_QWORD*)(v18 + 184) = 0;
  *(_QWORD*)(v18 + 168) = 0;
  *(_QWORD*)(v18 + 120) = 0;
  *(_DWORD*)(v18 + 127) = 0;
  a4[1] = v18;
  *(_QWORD*)v18 = v19 + 16;
  *(_QWORD*)(v18 + 8) = 0;
  *(_WORD*)(v18 + 108) = 256;
  *(_DWORD*)(v18 + 112) = -1082130432;
  *(_DWORD*)(v18 + 292) = 2;
  *(_QWORD*)(v18 + 24) = 0;
  result = v18 + 24;
  *a4 = result;
  {
    result;
    return;
  }
}

bool game_zview_d95b30(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v6;
  __int64 v7;
  const char* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    _QWORD v16[2];
    const char* v17;
  } v16_;
  struct {
    __int64 v18;
    char gap32_[8];
    __int64 v19;
  } v18_;
  struct {
    _QWORD v20[3];
    int v21;
  } v20_;

  v6 = X8CALL_X0(void*, game_zview_d95c70((void*)(&v18_.v18)));
  game_zview_d95da0((void*)(v16_.v16), v6, a2, a3);
  v7 = snd_g_fileIndex;
  if ((v16_.v16[0] & 1) != 0) {
    v8 = v16_.v17;
  }
  else {
    v8 = (char*)v16_.v16 + 1;
  }
  v9 = strlen(v8);
  v20_.v20[0] = v8;
  v20_.v20[1] = v9;
  v20_.v21 = 0;
  v20_.v20[2] = GameData_212c3c8;
  v10 = GameRoutine_6544c0(v7, (__int64)v20_.v20);
  v11 = *(_QWORD*)(v10 + 592);
  v12 = v10;
  if (v11 != 0) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, v10);
  }
  GameRoutine_634d80(*(_QWORD*)(v12 + 8), v12);
  if ((v16_.v16[0] & 1) != 0 && v16_.v17 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13,
                                  (__int64)v16_.v17);
  }
  if ((v18_.v18 & 1) != 0 && v18_.v19 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14,
                                  v18_.v19);
  }
  return v11 != 0;
}

void game_zview_103db80(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  float v4;
  __int64* v5;
  __int64 v6;
  __int64* v7;
  float v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  float v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  float* v18;
  float v19;
  float* v20;
  __int64 v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float v45;
  float v46;
  int v47;
  __int64 v48;
  float* v49;
  unsigned __int64 v50;
  float32x4_t v51;
  float v52;
  unsigned int v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  bool v60;
  float v61;
  float v62;
  float v63;
  float v64;
  char v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  unsigned __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  __int64* v84;
  __int64 v85;
  unsigned __int64 v86;
  float v87;
  __int64 v88;
  __int64 v89;
  float v90;
  __int64 v91;
  __int64 v92;
  _QWORD* v93;
  _QWORD* v94;
  float v95;
  float v96;
  float v97;
  float v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  __int64 v107;
  __int64 v108;
  int v109;
  int v110;
  float* v111;
  __int64 v112;
  float v113;
  float v114;
  int v115;
  float v116;
  float* v117;
  float v118;
  bool v119;
  __int16 v120;
  float v121;
  int v122;
  float v123;
  int v124;
  __int64 v125;
  float v126;
  int v127;
  __int64 v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  float v134;
  float v135;
  float v136;
  float v137;
  float32x4_t v138;
  float v139;
  float v140;
  float32x4_t v141;
  float v142;
  float32x4_t v143;
  float32x4_t v144;
  float32x4_t v145;
  float v146;
  struct {
    float v147[20];
    char v148;
  } v147_;

  v2 = *(_QWORD*)(a1 + 8);
  v146 = 0x0.0p+0f;
  game_zview_d234c0((void*)(&v145), v2);
  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(float*)(a1 + 92);
  v5 = *(__int64**)(v3 + 880);
  v6 = *(_QWORD*)(v3 + 888);
  v7 = GameData_212eba8[0];
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0) {
      v123 = v4;
      v124 = __cxa_guard_acquire((__int64)&GameData_21a6130);
      v4 = v123;
      if (v124 != 0) {
        v125 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v125;
        __cxa_guard_release((__int64)&GameData_21a6130);
        v4 = v123;
      }
    }
    v8 = *((float*)&GameData_21a6120 + 1);
    v9 = *v5;
    if (*v5 == 0) {
      goto LABEL_18;
    }
    v10 = *v7;
    if (*v7 == 0) {
      goto LABEL_18;
    }
    v11 = *(_QWORD**)(v10 + 8);
    v12 = *(_QWORD**)(v10 + 16);
    if (v11 != v12) {
      while (*v11 != v9) {
        v11 += 2;
        if (v11 == v12) {
          goto LABEL_18;
        }
      }
    }
    if (v11 != v12) {
      v18 = (float*)(*(_QWORD*)(v9 + 16) + 580LL);
    }
    else {
    LABEL_18:
      if (*GameData_212eda8[0] == 0) {
        goto LABEL_21;
      }
      v18 = (float*)(*(_QWORD*)(*GameData_212eda8[0] + 8) + 168LL);
    }
    v8 = *v18;
  LABEL_21:
    v130 = v8;
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v19 = v4;
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
      v4 = v19;
    }
    goto LABEL_29;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v126 = v4;
    v127 = __cxa_guard_acquire((__int64)&GameData_21a6130);
    v4 = v126;
    if (v127 != 0) {
      v128 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v128;
      __cxa_guard_release((__int64)&GameData_21a6130);
      v4 = v126;
    }
  }
  v13 = *((float*)&GameData_21a6120 + 1);
  v14 = *v5;
  if (*v5 != 0) {
    v15 = *v7;
    if (*v7 != 0) {
      v16 = *(_QWORD**)(v15 + 8);
      v17 = *(_QWORD**)(v15 + 16);
      if (v16 != v17) {
        while (*v16 != v14) {
          v16 += 2;
          if (v16 == v17) {
            goto LABEL_25;
          }
        }
      }
      if (v16 != v17) {
        v20 = (float*)(*(_QWORD*)(v14 + 16) + 580LL);
      LABEL_27:
        v13 = *v20;
        goto LABEL_28;
      }
    }
  }
LABEL_25:
  if (*GameData_212eda8[0] != 0) {
    v20 = (float*)(*(_QWORD*)(*GameData_212eda8[0] + 8) + 168LL);
    goto LABEL_27;
  }
LABEL_28:
  v130 = v13;
LABEL_29:
  v21 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v21 + 32) == 1) {
    v22 = *(float*)(v21 + 28);
  }
  else {
    v22 = *(float*)(v21 + 960);
  }
  v23 = (float)(PSEUDO_UNFUSED(v22 * 0x1.1df46a0000000p-6f)) +
        (float)(roundf((float)(v22 * 0x1.1df46a0000000p-6f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  v24 = *((float*)GameData_212c190 + 1);
  v25 = 0x1.921fb60000000p+1f - v23;
  v26 = -*(float*)GameData_212c190;
  v27 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v28 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v29 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  v30 = *((float*)GameData_212c188 + 1);
  v31 = -*(float*)GameData_212c188;
  v32 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v33 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v135 = v27;
  v136 = v26;
  v133 = v31;
  v134 = v29;
  v132 = v32;
  v34 = v33;
  v35 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  v36 = v35;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110c8,
                            memory_order_acquire) &
       1) == 0) {
    v142 = v4;
    v121 = v30;
    v122 = __cxa_guard_acquire((__int64)&GameData_22110c8);
    v25 = 0x1.921fb60000000p+1f - v23;
    v32 = v132;
    v26 = v136;
    v30 = v121;
    v35 = v36;
    v33 = v34;
    v29 = v134;
    v27 = v135;
    v4 = v142;
    if (v122 != 0) {
      GameData_22110c0 = 0x3F80000000000000LL;
      __cxa_guard_release((__int64)&GameData_22110c8);
      v25 = 0x1.921fb60000000p+1f - v23;
      v32 = v132;
      v26 = v136;
      v30 = v121;
      v35 = v36;
      v33 = v34;
      v29 = v134;
      v27 = v135;
      v4 = v142;
    }
  }
  v37 = v30;
  v140 = (float)(v4 * 0x1.9999980000000p-1f) + 0x1.3333340000000p+0f;
  v38 = -0x1.0000000000000p+0f;
  if (v23 < -0x1.921fb60000000p+0f) {
    v39 = -0x1.0000000000000p+0f;
  }
  else {
    v39 = 0x1.0000000000000p+0f;
  }
  if (v23 < -0x1.921fb60000000p+0f) {
    v40 = -0x1.921fb60000000p+1f - v23;
  }
  else {
    v40 = v23;
  }
  if (v23 > 0x1.921fb60000000p+0f) {
    v41 = v25;
  }
  else {
    v38 = v39;
    v41 = v40;
  }
  v139 =
      v41 *
      (float)((float)((float)(v29 +
                              (float)((float)(v27 +
                                              (float)((float)(v28 +
                                                              (float)((float)(v24 +
                                                                              (float)(v26 *
                                                                                      (float)(v41 *
                                                                                              v41))) *
                                                                      (float)(v41 *
                                                                              v41))) *
                                                      (float)(v41 * v41))) *
                                      (float)(v41 * v41))) *
                      (float)(v41 * v41)) +
              0x1.0000000000000p+0f);
  v137 =
      v38 *
      (float)((float)((float)(v35 +
                              (float)((float)(v32 +
                                              (float)((float)(v33 +
                                                              (float)((float)(v30 +
                                                                              (float)(v31 *
                                                                                      (float)(v41 *
                                                                                              v41))) *
                                                                      (float)(v41 *
                                                                              v41))) *
                                                      (float)(v41 * v41))) *
                                      (float)(v41 * v41))) *
                      (float)(v41 * v41)) +
              0x1.0000000000000p+0f);
  LANES128(v42).n128_u64[0] = COERCE_UNSIGNED_INT(
      (float)(PSEUDO_UNFUSED(v139 * *((float*)&GameData_22110c0 + 1))) +
      (float)(*(float*)&GameData_22110c0 * v137));
  LANES128(v42).n128_u64[1] = COERCE_UNSIGNED_INT(
      (float)(PSEUDO_UNFUSED(v137 * *((float*)&GameData_22110c0 + 1))) -
      (float)(*(float*)&GameData_22110c0 * v139));
  v144 = vaddq_f32(vaddq_f32(v145, vaddq_f32(v42, v42)),
                   COERCE_AS(float32x4_t, GameData_1a83410));
  collision_670c60((void*)((__int64)v147_.v147), &v145, &v144,
                   0x1000100000003LL);
  v131 = v37;
  if ((v147_.v148 & 1) == 0) {
    v143 = vaddq_f32(vaddq_f32(v144, COERCE_AS(float32x4_t, GameData_1a83110)),
                     COERCE_AS(float32x4_t, GameData_1a82960));
    collision_670c60((void*)((__int64)v147_.v147), &v144, &v143, 3);
    if (v147_.v148 == 1) {
      goto LABEL_47;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110c8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_22110c8) != 0) {
    GameData_22110c0 = 0x3F80000000000000LL;
    __cxa_guard_release((__int64)&GameData_22110c8);
  }
  LANES128(v43).n128_u64[0] = COERCE_UNSIGNED_INT(
      (float)(PSEUDO_UNFUSED(v139 * *((float*)&GameData_22110c0 + 1))) +
      (float)(*(float*)&GameData_22110c0 * v137));
  LANES128(v43).n128_u64[1] = COERCE_UNSIGNED_INT(
      (float)(PSEUDO_UNFUSED(v137 * *((float*)&GameData_22110c0 + 1))) -
      (float)(*(float*)&GameData_22110c0 * v139));
  v44 = vaddq_f32(v43, v43);
  LANES128(v43).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v43).n128_u64[1] = 0x3F0000003F000000LL;
  v144 = vaddq_f32(vaddq_f32(v145, vmulq_f32(v44, v43)),
                   COERCE_AS(float32x4_t, GameData_1a83610));
  collision_670c60((void*)((__int64)v147_.v147), &v145, &v144,
                   0x1000100000003LL);
  if ((v147_.v148 & 1) == 0) {
    v143 = vaddq_f32(vaddq_f32(v144, COERCE_AS(float32x4_t, GameData_1a83110)),
                     COERCE_AS(float32x4_t, GameData_1a83790));
    collision_670c60((void*)((__int64)v147_.v147), &v144, &v143, 3);
    if (v147_.v148 == 1) {
    LABEL_47:
      v130 = v147_.v147[1];
    }
  }
  v45 = v34;
  v46 = v36;
  v47 = -1;
  v48 = 0;
  v49 = nullptr;
  v50 = 0;
  v129 = v140 + -0x1.3333340000000p+0f;
  LANES128(v51).n128_u64[0] = 0x40C0000040C00000LL;
  LANES128(v51).n128_u64[1] = 0x40C0000040C00000LL;
  v141 = v51;
  do {
    v52 = v24;
    v53 = 9;
    v54 = v28;
    v55 = (float)((float)(*(float*)(*(_QWORD*)(a1 + 8) + 960LL) +
                          0x1.6800000000000p+7f) +
                  (float)((float)v47 * 0x1.4000000000000p+3f)) *
          0x1.1df46a0000000p-6f;
    v56 = v55 +
          (float)(roundf(v55 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
    v57 = -0x1.921fb60000000p+1f - v56;
    v58 = 0x1.921fb60000000p+1f - v56;
    if (v56 < -0x1.921fb60000000p+0f) {
      v59 = -0x1.0000000000000p+0f;
    }
    else {
      v59 = 0x1.0000000000000p+0f;
    }
    if (v56 >= -0x1.921fb60000000p+0f) {
      v57 = v56;
    }
    v60 = v56 <= 0x1.921fb60000000p+0f;
    if (v56 <= 0x1.921fb60000000p+0f) {
      v61 = v59;
    }
    else {
      v61 = -0x1.0000000000000p+0f;
    }
    if (!v60) {
      v57 = v58;
    }
    v62 =
        v57 *
        (float)((float)((float)(v134 +
                                (float)((float)(v135 +
                                                (float)((float)(v28 +
                                                                (float)((float)(v24 +
                                                                                (float)(v136 *
                                                                                        (float)(v57 *
                                                                                                v57))) *
                                                                        (float)(v57 *
                                                                                v57))) *
                                                        (float)(v57 * v57))) *
                                        (float)(v57 * v57))) *
                        (float)(v57 * v57)) +
                0x1.0000000000000p+0f);
    v63 =
        v61 *
        (float)((float)((float)(v46 +
                                (float)((float)(v132 +
                                                (float)((float)(v45 +
                                                                (float)((float)(v131 +
                                                                                (float)(v133 *
                                                                                        (float)(v57 *
                                                                                                v57))) *
                                                                        (float)(v57 *
                                                                                v57))) *
                                                        (float)(v57 * v57))) *
                                        (float)(v57 * v57))) *
                        (float)(v57 * v57)) +
                0x1.0000000000000p+0f);
    while (1) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110c8,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_22110c8) != 0) {
        GameData_22110c0 = 0x3F80000000000000LL;
        __cxa_guard_release((__int64)&GameData_22110c8);
      }
      v64 = vcvts_n_f32_u32(--v53, 3u);
      v65 = *(_BYTE*)(*(_QWORD*)(a1 + 8) + 808LL);
      LANES128(v66).n128_u64[0] = COERCE_UNSIGNED_INT(
          (float)(PSEUDO_UNFUSED(v62 * *((float*)&GameData_22110c0 + 1))) +
          (float)(*(float*)&GameData_22110c0 * v63));
      LANES128(v66).n128_u64[1] = COERCE_UNSIGNED_INT(
          (float)(PSEUDO_UNFUSED(v63 * *((float*)&GameData_22110c0 + 1))) -
          (float)(*(float*)&GameData_22110c0 * v62));
      v67 = vmulq_f32(v66, v141);
      LANES128(v68).n128_u32[0] = 0;
      LANES128(v68).n128_u64[1] = 0;
      LANES128(v68).n128_f32[1] = v64 + v64;
      v69 = vaddq_f32(COERCE_AS(float32x4_t, LANES128(v68).n128_u64[0]),
                      vaddq_f32(v145, vmulq_n_f32(v67, v64)));
      v144 = v69;
      if ((v65 & 1) != 0) {
        break;
      }
      v138 = v68;
      collision_670c60((void*)((__int64)v147_.v147), &v145, &v144,
                       0x1000100000003LL);
      v45 = v34;
      v46 = v36;
      if ((v147_.v148 & 1) == 0) {
        v69 = v144;
        v68 = v138;
        break;
      }
    LABEL_63:
      if (v53 <= 1) {
        v24 = v52;
        goto LABEL_50;
      }
    }
    v143 = vsubq_f32(vaddq_f32(v69, COERCE_AS(float32x4_t, GameData_1a83110)),
                     v68);
    collision_670c60((void*)((__int64)v147_.v147), &v144, &v143, 3);
    if (v147_.v148 != 1) {
      v45 = v34;
      v46 = v36;
      goto LABEL_63;
    }
    v45 = v34;
    v46 = v36;
    v70 = v147_.v147[1] - v130;
    if (v129 == 0x0.0p+0f) {
      v73 = 0x0.0p+0f;
    }
    else {
      v71 = (float)(fabsf(v70) + -0x1.3333340000000p+0f) / v129;
      if (v71 <= 0x1.0000000000000p+0f) {
        v72 = v71;
      }
      else {
        v72 = 0x1.0000000000000p+0f;
      }
      v119 = v71 < 0x0.0p+0f;
      v73 = 0x0.0p+0f;
      if (!v119) {
        v73 = v72;
      }
    }
    v24 = v52;
    if (v70 >= 0x0.0p+0f) {
      v74 = v73;
    }
    else {
      v74 = -v73;
    }
    if ((unsigned __int64)v49 >= v50) {
      v75 = (unsigned __int64)v49 - v48;
      v76 = ((__int64)v49 - v48) >> 2;
      v77 = v76 + 1;
      if ((unsigned __int64)(v76 + 1) >> 62 == 0) {
        if ((__int64)(v50 - v48) >> 1 > v77) {
          v77 = (__int64)(v50 - v48) >> 1;
        }
        if (v50 - v48 >= 0x7FFFFFFFFFFFFFFCLL) {
          v78 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else {
          v78 = v77;
        }
        if (v78 != 0) {
          if (v78 >> 62 != 0) {
            GameRoutine_60a210();
          }
          v79 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v78, 16, 0);
        }
        else {
          v79 = 0;
        }
        v80 = v79 + v75;
        v50 = v79 + 4 * v78;
        v81 = v79 + v75 - 4 * v76;
        *(float*)(v79 + v75) = v74;
        memcpy(v81, v48, v75);
        if (v48 != 0) {
          v82 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v82 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v82, v48);
        }
        v48 = v81;
        v28 = v54;
        v45 = v34;
        v49 = (float*)(v80 + 4);
        v46 = v36;
        goto LABEL_51;
      }
      goto LABEL_175;
    }
    *v49++ = v74;
  LABEL_50:
    v28 = v54;
  LABEL_51:
    ++v47;
  } while (v47 != 2);
  v83 = (unsigned __int64)v49 - v48;
  if (v49 == (float*)v48) {
    v87 = v146;
    v84 = GameData_212eba8[0];
    goto LABEL_109;
  }
  v84 = GameData_212eba8[0];
  if ((v83 & 0x8000000000000000LL) != 0) {
  LABEL_175:
    GameRoutine_a78a90();
  }
  v85 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       (__int64)v49 - v48, 16, 0);
  memcpy(v85, v48, (unsigned __int64)v49 - v48);
  GameRoutine_1a0a8b0(v85, v85 + v83, (__int64)v147_.v147);
  v86 = v83 >> 2;
  if (((v83 >> 2) & 0x80000001) == 1) {
    v87 = *(float*)(v85 + 4LL * ((unsigned int)(v86 - 1) >> 1));
  }
  else {
    v87 = (float)(*(float*)(v85 + 4LL * ((int)v86 / 2) - 4) +
                  *(float*)(v85 + 4LL * ((int)v86 / 2))) *
          0x1.0000000000000p-1f;
  }
  v88 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v88 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v88,
                                v85);
LABEL_109:
  v89 = *(_QWORD*)(a1 + 8);
  v90 = 0x0.0p+0f;
  v91 = **(_QWORD**)(v89 + 880);
  if (v91 != 0) {
    v92 = *v84;
    if (*v84 != 0) {
      v93 = *(_QWORD**)(v92 + 8);
      v94 = *(_QWORD**)(v92 + 16);
      if (v93 != v94) {
        while (*v93 != v91) {
          v93 += 2;
          if (v93 == v94) {
            v90 = 0x0.0p+0f;
            goto LABEL_117;
          }
        }
      }
      v90 = 0x0.0p+0f;
      if (v93 != v94) {
        v90 =
            (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(v91 + 16) + 488LL) + 32LL) *
                    0x1.ca5dc20000000p+5f) +
            0x1.6800000000000p+7f;
      }
    }
  }
LABEL_117:
  v95 = fmodf(*(float*)(v89 + 832) - v90, 0x1.6800000000000p+8f);
  if (v95 >= 0x0.0p+0f) {
    v96 = v95 + 0x0.0p+0f;
  }
  else {
    v96 = (float)(v95 + 0x0.0p+0f) + 0x1.6800000000000p+8f;
  }
  if (v96 > 0x1.6800000000000p+7f) {
    v96 = v96 + -0x1.6800000000000p+8f;
  }
  v97 = fabsf(v96);
  if ((float)((float)((float)(v97 / 0x1.6800000000000p+7f) +
                      -0x1.0000000000000p-1f) +
              (float)((float)(v97 / 0x1.6800000000000p+7f) +
                      -0x1.0000000000000p-1f)) >= 0x0.0p+0f) {
    v98 = v87;
  }
  else {
    v98 = -v87;
  }
  v146 = v98;
  if (v48 != 0) {
    v99 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v99 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v99,
                                  v48);
  }
  v100 = *(_QWORD*)(a1 + 40);
  v101 = *(_QWORD*)(a1 + 48);
  if ((unsigned __int64)(v101 - v100) >= 5) {
    v102 = v101 - 4;
    do {
      if (v101 != v100 + 4) {
        memmove(v100, v100 + 4, v102 - v100);
        v100 = *(_QWORD*)(a1 + 40);
      }
      v101 = v102;
      *(_QWORD*)(a1 + 48) = v102;
      v102 -= 4;
    } while (v102 - v100 != 0 &&
             (unsigned __int64)(v102 - v100) < 0xFFFFFFFFFFFFFFFCLL);
  }
  AnimCtrlModule_a78450((__int64*)(a1 + 40), &v146);
  v104 = *(_QWORD*)(a1 + 40);
  v103 = *(_QWORD*)(a1 + 48);
  v105 = v103 - v104;
  if (v103 == v104) {
    goto LABEL_168;
  }
  v106 = v105 >> 2;
  v107 = ((unsigned __int64)v105 >> 2) & 3;
  if (v106 >= 4) {
    v111 = (float*)(v104 + 8);
    v112 = 0;
    v109 = 0;
    v110 = 0;
    do {
      v113 = *(v111 - 2);
      v114 = *(v111 - 1);
      if (v113 >= 0x0.0p+0f) {
        v115 = v109;
      }
      else {
        v115 = v109 + 1;
      }
      if (v113 <= 0x0.0p+0f) {
        v109 = v115;
      }
      else {
        ++v110;
      }
      if (v114 <= 0x0.0p+0f) {
        if (v114 < 0x0.0p+0f) {
          ++v109;
        }
      }
      else {
        ++v110;
      }
      if (*v111 <= 0x0.0p+0f) {
        if (*v111 < 0x0.0p+0f) {
          ++v109;
        }
      }
      else {
        ++v110;
      }
      v116 = v111[1];
      if (v116 > 0x0.0p+0f) {
        ++v110;
      }
      else if (v116 < 0x0.0p+0f) {
        ++v109;
      }
      v111 += 4;
      v112 -= 4;
    } while (-(__int64)(v106 & 0xFFFFFFFFFFFFFFFCLL) != v112);
    v108 = -v112;
    if (v107 != 0) {
      goto LABEL_160;
    }
  }
  else {
    v108 = 0;
    v109 = 0;
    v110 = 0;
    if (v107 == 0) {
      goto LABEL_167;
    }
  LABEL_160:
    v117 = (float*)(v104 + 4 * v108);
    do {
      v118 = *v117++;
      v119 = v118 < 0x0.0p+0f;
      if (v118 > 0x0.0p+0f) {
        ++v110;
      }
      else if (v119) {
        ++v109;
      }
      --v107;
    } while (v107 != 0);
  }
LABEL_167:
  if (v106 == v110) {
  LABEL_168:
    v120 = 1;
    goto LABEL_169;
  }
  if (v106 == v109) {
    v120 = 0;
  LABEL_169:
    *(_WORD*)(a1 + 64) = v120 | 0x100;
  }
  else if (*(_BYTE*)(a1 + 65) == 1) {
    *(_BYTE*)(a1 + 65) = 0;
  }
}

#pragma GCC visibility pop
