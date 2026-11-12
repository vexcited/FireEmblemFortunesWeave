#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_a71900(_QWORD* result, __int64, __int64**, int*);
__int64 GameRoutine_a73160(__int64 result);
__int64 GameRoutine_a738c0(__int64, __int64, int);
__int64 GameRoutine_a73d40(__int64 result, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 gxc_NvnStateCache_BindBlendState(__int64 result, int);
__int64 gxc_NvnStateCache_BindDepthStencilState(__int64 result, int);
__int64 gxc_NvnStateCache_BindMultisampleState(__int64 result, int);
__int64 gxc_NvnStateCache_BindPolygonState(__int64 result, int);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_Reset(__int64 result);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN** GameData_212e738;
extern __int64 (*GameData_1fc5d40[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_21fdec4;
extern int GameData_21fdee0;
extern int GameData_21fdf10;
extern int GameData_21fdf14;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_a7f560();
__int64 gfxa_TaskCharaSelfShadow_Impl_draw(__int64 a1, __int64 a2, __int64 a3,
                                           _QWORD* a4, __int64 a5);
_QWORD* GameHr_a71900(_QWORD* result, __int64, __int64**, int*);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 gfxa_TaskCharaSelfShadow_Impl_draw(__int64 a1, __int64 a2, __int64 a3,
                                           _QWORD* a4, __int64 a5)
{

#pragma clang fp contract(off)
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
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
  int32x4_t v47;
  int32x4_t v48;
  int32x4_t v49;
  int32x4_t v50;
  __int64 v51;
  int v52;
  int v53;
  __int64 v54;
  __int64 v55;
  int v56;
  __int64 v57;
  __int64 v58;
  unsigned int v60;
  _QWORD* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  struct {
    _QWORD v65[4];
    _QWORD* v66;
  } v65_;
  struct {
    int v67;
    char v68;
    char gap109_[3];
    __int64 v69;
  } v67_;
  struct {
    __int64* v70;
    __int64* v71;
    __int64* v72;
  } v70_;

  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
  v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 49),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
      v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
  gxc_NvnStateCache_Reset(a4[1]),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
      v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
      v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
  v9 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v9, GameData_21fdec4),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
      v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
  gxc_NvnStateCache_BindBlendState(v9, GameData_21fdee0),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
      v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
  gxc_NvnStateCache_BindPolygonState(v9, GameData_21fdf10),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
      v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
  gxc_NvnStateCache_BindMultisampleState(v9, GameData_21fdf14),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
      v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
  gxc_NvnStateCache_ClearCommandList(a4[1]),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
      v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 168LL))(*a4, 1),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
      v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
  v10 = *(_QWORD**)(a5 + 16);
  v11 = 0;
  if (v10 == nullptr) {
    goto LABEL_64;
  }
  v12 = *(_QWORD**)(a5 + 24);
  if (v12 == nullptr) {
    goto LABEL_64;
  }
  v13 = (__int64*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
  v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
  v70_.v70 = v13;
  v70_.v71 = v13;
  v70_.v72 = v13 + 10;
  v15 = v10[1];
  v14 = v10[2];
  if (v15 == v14) {
    v17 = v13;
    v11 = 0;
    goto LABEL_61;
  }
  v16 = 0;
  while (2) {
    if (*(_BYTE*)v15 != 1) {
      goto LABEL_8;
    }
    if (*(_BYTE*)(v15 + 128) != 1) {
      goto LABEL_8;
    }
    if ((*(_BYTE*)(v15 + 1) & 1) != 0) {
      goto LABEL_8;
    }
    v18 = v10[5];
    if (v18 == 0 || v10[7] == 0) {
      goto LABEL_8;
    }
    v19 = *(_QWORD*)(v15 + 120);
    v20 = v18 - 1;
    if ((v18 & (v18 - 1)) != 0) {
      v21 = *(_QWORD*)(v15 + 120);
      if (v19 >= v18) {
        v21 = v19 % v18;
      }
    }
    else {
      v21 = v20 & v19;
    }
    v22 = *(_QWORD**)(v10[4] + 8 * v21);
    if (v22 == nullptr) {
      goto LABEL_8;
    }
    v23 = (_QWORD*)*v22;
    if (v23 == nullptr) {
      goto LABEL_8;
    }
    if ((v18 & v20) == 0) {
      while (1) {
        v25 = v23[1];
        if (v19 == v25) {
          if (v23[2] == v19) {
            goto LABEL_34;
          }
        }
        else if ((v25 & v20) != v21) {
          goto LABEL_8;
        }
        v23 = (_QWORD*)*v23;
        if (v23 == nullptr) {
          goto LABEL_8;
        }
      }
    }
    while (1) {
      v24 = v23[1];
      if (v19 == v24) {
        break;
      }
      if (v24 >= v18) {
        v24 %= v18;
      }
      if (v24 != v21) {
        goto LABEL_8;
      }
    LABEL_23:
      v23 = (_QWORD*)*v23;
      if (v23 == nullptr) {
        goto LABEL_8;
      }
    }
    if (v23[2] != v19) {
      goto LABEL_23;
    }
  LABEL_34:
    v60 = v16;
    v61 = v12;
    v62 = a1;
    v26 = v70_.v70;
    v28 = v23[4];
    v27 = v23[5];
    v63 = a3;
    v70_.v71 = v70_.v70;
    if (v28 != v27) {
      v64 = v27;
      do {
        if (v26 < v70_.v72) {
          *v26++ = *(_QWORD*)(v28 + 8);
        }
        else {
          v29 = v70_.v70;
          v30 = (char*)v26 - (char*)v70_.v70;
          v31 = v26 - v70_.v70;
          v32 = v31 + 1;
          if ((unsigned __int64)(v31 + 1) >> 61 != 0) {
            GameRoutine_a7f560(),
                v43 =
                    COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v48 = COERCE_AS(__typeof__(v48),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v49 = COERCE_AS(__typeof__(v49),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v50 = COERCE_AS(__typeof__(v50),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v52 = COERCE_AS(__typeof__(v52),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v53 = COERCE_AS(__typeof__(v53),
                                PSEUDO_REGISTER(float, "s1", "=w"));
          }
          v33 = (char*)v70_.v72 - (char*)v70_.v70;
          if (((char*)v70_.v72 - (char*)v70_.v70) >> 2 > v32) {
            v32 = v33 >> 2;
          }
          if ((unsigned __int64)v33 >= 0x7FFFFFFFFFFFFFF8LL) {
            v34 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v34 = v32;
          }
          if (v34 != 0) {
            if (v34 >> 61 != 0) {
              GameRoutine_60a210(),
                  v43 = COERCE_AS(
                      __typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v48 = COERCE_AS(__typeof__(v48),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v49 = COERCE_AS(__typeof__(v49),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v50 = COERCE_AS(__typeof__(v50),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v52 = COERCE_AS(__typeof__(v52),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v53 = COERCE_AS(__typeof__(v53),
                                  PSEUDO_REGISTER(float, "s1", "=w"));
            }
            v35 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v34, 16, 0),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v48 =
                COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v49 =
                COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v50 =
                COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
            v53 =
                COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
          }
          else {
            v35 = 0;
          }
          v36 = v35 + 8 * v34;
          v37 = (__int64*)(v35 + v30 - 8 * v31);
          *(_QWORD*)(v35 + v30) = *(_QWORD*)(v28 + 8);
          v26 = (__int64*)(v35 + v30 + 8);
          memcpy_alt1((__int64)v37, (__int64)v29, v30),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v48 = COERCE_AS(__typeof__(v48),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v50 = COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v52 = COERCE_AS(__typeof__(v52),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v53 = COERCE_AS(__typeof__(v53),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          v70_.v70 = v37;
          v70_.v71 = v26;
          v70_.v72 = (__int64*)v36;
          if (v29 != nullptr) {
            v38 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v38 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, (__int64)v29),
                v43 =
                    COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v48 = COERCE_AS(__typeof__(v48),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v49 = COERCE_AS(__typeof__(v49),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v50 = COERCE_AS(__typeof__(v50),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v52 = COERCE_AS(__typeof__(v52),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v53 = COERCE_AS(__typeof__(v53),
                                PSEUDO_REGISTER(float, "s1", "=w"));
          }
          v27 = v64;
        }
        v28 += 24;
        v70_.v71 = v26;
      } while (v28 != v27);
    }
    a3 = v63;
    v39 = *a4;
    v40 = *(_QWORD*)(v63 + 8LL * *(int*)(v15 + 4));
    v41 = (*(__int64 (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
    v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
    v42 = (*(__int64 (**)(__int64))(*(_QWORD*)v41 + 32LL))(v41),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
    v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
    (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v39 + 112LL))(v39, v42,
                                                                     v43),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
        v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 72LL))(*a4, 0, 0, *(unsigned int*)(v15 + 144),
                               *(unsigned int*)(v15 + 148)),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
        v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 88LL))(*a4, 0, 0, *(unsigned int*)(v15 + 144),
                               *(unsigned int*)(v15 + 148)),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
        v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
    (*(void (**)(_QWORD, _QWORD, _QWORD, float))(*(_QWORD*)*a4 + 152LL))(
        *a4, 0, 0, 0x1.0000000000000p+0f),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
        v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
    v44 = v15 + 16LL * *(int*)(v15 + 80);
    (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 224LL))(*a4, 1, 0, *(_QWORD*)(v44 + 88),
                                *(_QWORD*)(v44 + 96)),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
        v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
    a1 = v62;
    v45 = *(_QWORD*)(v15 + 136);
    v46 = *(_QWORD*)(v62 + 24);
    *(_QWORD*)(v46 + 80) = v45;
    if (v45 != 0) {
      *(long double*)&v47 =
          ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v45 + 16LL))(v45),
             v43 = COERCE_AS(__typeof__(v43),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
             v48 = COERCE_AS(__typeof__(v48),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
             v49 = COERCE_AS(__typeof__(v49),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
             v50 = COERCE_AS(__typeof__(v50),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
             v52 =
                 COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
             v53 =
                 COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
      v51 = *(_QWORD*)(v46 + 80);
      *(_QWORD*)(v46 + 88) = LANES128_OF(vzip2q_s32(v47, v48)).n128_u64[0];
      *(_QWORD*)(v46 + 96) = LANES128_OF(vzip2q_s32(v49, v50)).n128_u64[0];
      (*(void (**)(__int64))(*(_QWORD*)v51 + 32LL))(v51),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
          v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    else {
      v52 = 0;
      v53 = 0;
      *(_QWORD*)(v46 + 88) = 0;
      *(_QWORD*)(v46 + 96) = 0;
    }
    *(_DWORD*)(v46 + 104) = v52;
    *(_DWORD*)(v46 + 108) = v53;
    v12 = v61;
    GameRoutine_a73160(*(_QWORD*)(v62 + 24)),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
        v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
    v54 = *(_QWORD*)(v62 + 24);
    v67_.v68 = 0;
    v67_.v67 = 0;
    v67_.v69 = 32;
    GameHr_a71900(v61, v54, &v70_.v70, &v67_.v67),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
        v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
    v55 = *(_QWORD*)(v62 + 24);
    v65_.v65[0] = GameData_1fc5d40;
    v65_.v65[1] = v62;
    v65_.v66 = v65_.v65;
    v56 = GameRoutine_a738c0(v55, (__int64)v65_.v65, 1),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
    v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
    v57 = 32;
    if (v65_.v66 == v65_.v65) {
    LABEL_6:
      (*(void (**)(__int64))(*v65_.v66 + v57))((__int64)v65_.v66),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
          v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    else if (v65_.v66 != nullptr) {
      v57 = 40;
      goto LABEL_6;
    }
    v16 = v56 + v60;
    GameRoutine_a73d40(*(_QWORD*)(v62 + 24), (__int64)a4),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
        v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
  LABEL_8:
    v15 += 160;
    if (v15 != v14) {
      continue;
    }
    break;
  }
  v17 = v70_.v70;
  v11 = v16;
  if (v70_.v70 != nullptr) {
  LABEL_61:
    v70_.v71 = v17;
    v58 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v58 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, (__int64)v17),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
        v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
  }
LABEL_64:
  (*(void (**)(_QWORD, _QWORD))(*(_QWORD*)*a4 + 168LL))(*a4, 0),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(float, "s0", "=w")),
      v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s1", "=w"));
  return v11;
}

#pragma GCC visibility pop
