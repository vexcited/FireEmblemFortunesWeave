#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    collision_6706c0_alt1(PSEUDO_X8, _QWORD, _QWORD, _QWORD,
                          _QWORD) __asm__("collision_6706c0");
__int64 GameRoutine_14a0820(_QWORD);
__int64 GameRoutine_2b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_675000(_QWORD, _QWORD);
__int64 GameRoutine_675260(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN* GameData_1f50948;
extern _UNKNOWN* GameData_212c840;
extern __int64 (*GameData_1f903e8[])();
extern __int64 (*GameData_1f90470[])();
extern __int64 (*GameData_212c848[2])();
extern __int64 (*collision_anonymous_CastFilter_vtable[])();
extern __int64* GameData_212c838;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_6706a0();
__int64* collision_6704c0(__int64* result, unsigned __int64 a2);
__attribute__((swiftcall)) void collision_6706c0(PSEUDO_X8 x8_,
                                                 __int64 unused_int0,
                                                 __int64 a1, __int64* a2,
                                                 __int64 a3);
__attribute__((swiftcall)) void
collision_670880(PSEUDO_X8 x8_, unsigned int* result, __int64 a2, __int64 a3);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8 x8_,
                                                 float32x4_t* result,
                                                 float32x4_t* a2, __int64 a3);
__attribute__((swiftcall)) void collision_672120(PSEUDO_X8 x8_, __int128* a1,
                                                 __int64 a2, float a4);
__attribute__((swiftcall)) void collision_672fa0(PSEUDO_X8 x8_, _OWORD* a1,
                                                 __int64 a2, float a4);
__int64 GameRoutine_14a0820_alt1(_QWORD*) __asm__("GameRoutine_14a0820");
__int64 GameRoutine_2b0_alt1() __asm__("GameRoutine_2b0");
__int64 GameRoutine_675260_alt1(__int64*,
                                __int64) __asm__("GameRoutine_675260");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void GameRoutine_675000_alt1(__int64*, __int64) __asm__("GameRoutine_675000");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64* collision_6704c0(__int64* result, unsigned __int64 a2)
{
  __int64* v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  int v9;
  _QWORD* v10;
  unsigned int v11;
  int v12;
  int v13;
  unsigned int v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  int v20;
  __int64 v21;
  bool v22;
  int v23;
  __int64 v24;
  bool v25;
  _QWORD* v26;
  __int64 v27;
  int v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  struct {
    __int64 v34;
    int v35;
  } v34_;
  struct {
    unsigned __int64 v36;
    int v37;
  } v36_;
  struct {
    __int64 v38;
    int v39;
  } v38_;
  __int64 v40[4];
  char v41;

  if (a2 > result[2] << 6) {
    if ((a2 & 0x8000000000000000LL) != 0) {
      GameRoutine_6706a0();
    }
    v2 = result;
    v3 = fw_memory_g_heap_manager_ptr;
    v4 = ((a2 - 1) >> 6) + 1;
    v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        8 * v4, 16, 0);
    v6 = *v2;
    v7 = v2[1];
    v8 = v5;
    v34_.v34 = v5;
    v38_.v38 = v6;
    v9 = v7 & 0x3F;
    v38_.v39 = 0;
    v34_.v35 = 0;
    v36_.v37 = v9;
    v36_.v36 = v6 + 8 * (v7 >> 6);
    result =
        X8CALL_X0(void*, collision_6706c0_alt1((void*)(v40), &v41, &v38_.v38,
                                               &v36_.v36, &v34_.v34));
    if ((v7 & 0x3F) != 0) {
      v10 = (_QWORD*)(v8 + 8 * (v7 >> 6));
      v11 = v9 ^ 0x3F;
      v12 = 64 - v9;
      v13 = (64 - v9) & 3;
      if (v13 != 0) {
        v14 = v9 | 0xFFFFFFC0;
        do {
          v15 = 1LL << v9;
          v16 = v9 == 63;
          ++v14;
          if (v9 == 63) {
            v9 = 0;
          }
          else {
            ++v9;
          }
          *v10 &= ~v15;
          if (v16) {
            v17 = 8;
          }
          else {
            v17 = 0;
          }
          --v13;
          v10 = (_QWORD*)((char*)v10 + v17);
        } while (v13 != 0);
        v12 = -v14;
      }
      if (v11 >= 3) {
        do {
          *v10 &= ~(1LL << v9);
          v18 = v9 == 63;
          v19 = &v10[v18];
          if (v9 == 63) {
            v20 = 0;
          }
          else {
            v20 = v9 + 1;
          }
          v21 = 1LL << v20;
          v22 = v20 == 63;
          if (v20 == 63) {
            v23 = 0;
          }
          else {
            v23 = v20 + 1;
          }
          *v19 &= ~v21;
          v24 = v22;
          v25 = v23 == 63;
          v26 = &v19[v24];
          v27 = 1LL << v23;
          if (v23 == 63) {
            v28 = 0;
          }
          else {
            v28 = v23 + 1;
          }
          *v26 &= ~v27;
          v29 = v25;
          v30 = &v26[v29];
          if (v28 == 63) {
            v9 = 0;
          }
          else {
            v9 = v28 + 1;
          }
          *v30 &= ~(1LL << v28);
          v31 = v28 == 63;
          v12 -= 4;
          v10 = &v30[v31];
        } while (v12 != 0);
      }
    }
    v32 = *v2;
    *v2 = v8;
    v2[1] = v7;
    v2[2] = v4;
    if (v32 != 0) {
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v33 = 56;
      }
      return (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v33, v32);
    }
  }
  return result;
}

__attribute__((swiftcall)) void collision_6706c0(PSEUDO_X8 x8_,
                                                 __int64 unused_int0,
                                                 __int64 a1, __int64* a2,
                                                 __int64 a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64* v7;
  unsigned __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  __int64 v17;
  __int64* v18;
  struct {
    unsigned __int64* v19;
    int v20;
  } v19_;
  struct {
    __int64 v21;
    int v22;
  } v21_;
  struct {
    __int64* v23;
    int v24;
  } v23_;
  struct {
    __int64 v25;
    int v26;
  } v25_;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v5 = *(unsigned int*)(a1 + 8);
  if ((_DWORD)v5 == *(_DWORD*)(a3 + 8)) {
    v7 = *(__int64**)a1;
    v8 = *(unsigned __int64**)a3;
    v9 = *((unsigned int*)a2 + 2) - v5 + 8 * (*a2 - *(_QWORD*)a1);
    if (v9 >= 1) {
      if ((_DWORD)v5 != 0) {
        if (v9 >= (unsigned __int64)(unsigned int)(64 - v5)) {
          v10 = (unsigned int)(64 - v5);
        }
        else {
          v10 = *((unsigned int*)a2 + 2) - v5 + 8 * (*a2 - *(_QWORD*)a1);
        }
        v9 -= v10;
        v11 = *v7++;
        *v8 = *v8 & ~((0xFFFFFFFFFFFFFFFFLL >>
                       (64 - (unsigned __int8)v5 - (unsigned __int8)v10)) &
                      (-1LL << v5)) |
              v11 &
                  (0xFFFFFFFFFFFFFFFFLL >>
                   (64 - (unsigned __int8)v5 - (unsigned __int8)v10)) &
                  (-1LL << v5);
        v12 = v10 + v5;
        v13 = (unsigned __int64)(v10 + v5) >> 3;
        LODWORD(v5) = v12 & 0x3F;
        v8 = (unsigned __int64*)((char*)v8 + (v13 & 0x3FFFFFF8));
      }
      if (v9 >= 0) {
        v14 = v9;
      }
      else {
        v14 = v9 + 63;
      }
      v15 = v14 >> 6;
      if ((unsigned __int64)(v9 + 63) >= 0x7F) {
        result = memmove_alt1((__int64)v8, (__int64)v7, 8 * v15);
      }
      v8 += v15;
      if (v9 - (v15 << 6) >= 1) {
        LODWORD(v5) = v9 - ((_DWORD)v15 << 6);
        *v8 = *v8 & ~(0xFFFFFFFFFFFFFFFFLL >>
                      (((_BYTE)v15 << 6) - (unsigned __int8)v9)) |
              v7[v15] & (0xFFFFFFFFFFFFFFFFLL >>
                         (((_BYTE)v15 << 6) - (unsigned __int8)v9));
      }
    }
    v17 = *a2;
    *(_QWORD*)(a4 + 16) = v8;
    *(_DWORD*)(a4 + 24) = v5;
    *(_QWORD*)a4 = v17;
    *(_DWORD*)(a4 + 8) = *((_DWORD*)a2 + 2);
  }
  else {
    v18 = *(__int64**)a1;
    v19_.v20 = *(_DWORD*)(a3 + 8);
    v23_.v24 = v5;
    v23_.v23 = v18;
    v21_.v21 = *a2;
    v21_.v22 = *((_DWORD*)a2 + 2);
    v19_.v19 = *(unsigned __int64**)a3;
    result = (__int64)X8CALL_X0(
        unsigned int*,
        collision_670880((void*)((__int64)&v25_.v25), (unsigned int*)&v23_.v23,
                         (__int64)&v21_.v21, (__int64)&v19_.v19));
    *(_QWORD*)a4 = *a2;
    *(_DWORD*)(a4 + 8) = *((_DWORD*)a2 + 2);
    *(_QWORD*)(a4 + 16) = v25_.v25;
    *(_DWORD*)(a4 + 24) = v25_.v26;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

collision_670880(PSEUDO_X8 x8_, unsigned int* result, __int64 a2, __int64 a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  int v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  bool v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  _QWORD* v23;
  _QWORD* v24;
  int v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  _QWORD* v31;
  unsigned __int64 v32;
  _QWORD* v33;
  __int64 v34;
  unsigned __int64 v35;
  _QWORD* v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  _QWORD* v42;

  v4 = *(unsigned __int64**)result;
  v5 = result[2];
  v6 = *(unsigned int*)(a2 + 8) + 8LL * (*(_QWORD*)a2 - *(_QWORD*)result) - v5;
  if (v6 >= 1) {
    if ((_DWORD)v5 != 0) {
      v7 = *v4;
      v8 = (unsigned int)(64 - v5);
      if (v6 >= v8) {
        v9 = (unsigned int)(64 - v5);
      }
      else {
        v9 = *(unsigned int*)(a2 + 8) +
             8LL * (*(_QWORD*)a2 - *(_QWORD*)result) - v5;
      }
      v6 -= v9;
      v10 = (-1LL << v5) & v7;
      v11 = *(_DWORD*)(a3 + 8);
      v12 = (0xFFFFFFFFFFFFFFFFLL >>
             ((unsigned __int8)v8 - (unsigned __int8)v9)) &
            v10;
      v13 = (unsigned int)(64 - v11);
      v14 = -1LL << v11;
      if (v9 >= v13) {
        v15 = v13;
      }
      else {
        v15 = v9;
      }
      v16 = v9 - v15;
      **(_QWORD**)a3 &= ~((0xFFFFFFFFFFFFFFFFLL >>
                           ((unsigned __int8)v13 - (unsigned __int8)v15)) &
                          v14);
      v17 = *(_DWORD*)(a3 + 8);
      v18 = result[2];
      v19 = v17 > v18;
      v20 = v12 >> ((unsigned __int8)v18 - (unsigned __int8)v17);
      v21 = v12 << ((unsigned __int8)v17 - (unsigned __int8)v18);
      if (!v19) {
        v21 = v20;
      }
      **(_QWORD**)a3 |= v21;
      v22 = *(unsigned int*)(a3 + 8);
      v23 = *(_QWORD**)a3;
      *(_DWORD*)(a3 + 8) = ((_BYTE)v22 + (_BYTE)v15) & 0x3F;
      v24 = (_QWORD*)((char*)v23 + (((v15 + v22) >> 3) & 0x3FFFFFF8));
      *(_QWORD*)a3 = v24;
      if (v16 >= 1) {
        *v24 &= ~(0xFFFFFFFFFFFFFFFFLL >> (-(char)v16 & 63));
        **(_QWORD**)a3 |=
            v12 >> ((unsigned __int8)v15 + (unsigned __int8)result[2]);
        *(_DWORD*)(a3 + 8) = v16;
      }
      v4 = (unsigned __int64*)(*(_QWORD*)result + 8LL);
      *(_QWORD*)result = v4;
    }
    v25 = *(_DWORD*)(a3 + 8);
    v26 = v6 - 64;
    v27 = (unsigned int)(64 - v25);
    if (v6 < 64) {
      v26 = v6;
    }
    else {
      v28 = -1LL << v25;
      v29 = ~v28;
      if ((v26 & 0x40) == 0) {
        v30 = *v4;
        **(_QWORD**)a3 &= v29;
        **(_QWORD**)a3 |= v30 << *(_DWORD*)(a3 + 8);
        v31 = *(_QWORD**)a3;
        *(_QWORD*)a3 += 8LL;
        v31[1] &= v28;
        **(_QWORD**)a3 |= v30 >> v27;
        v4 = (unsigned __int64*)(*(_QWORD*)result + 8LL);
        v6 = v26;
        *(_QWORD*)result = v4;
      }
      if ((unsigned __int64)v26 >= 0x40) {
        do {
          v32 = *v4;
          **(_QWORD**)a3 &= v29;
          **(_QWORD**)a3 |= v32 << *(_DWORD*)(a3 + 8);
          v33 = *(_QWORD**)a3;
          *(_QWORD*)a3 += 8LL;
          v33[1] &= v28;
          **(_QWORD**)a3 |= v32 >> v27;
          v34 = *(_QWORD*)result;
          *(_QWORD*)result += 8LL;
          v35 = *(_QWORD*)(v34 + 8);
          **(_QWORD**)a3 &= v29;
          **(_QWORD**)a3 |= v35 << *(_DWORD*)(a3 + 8);
          v36 = *(_QWORD**)a3;
          *(_QWORD*)a3 += 8LL;
          v36[1] &= v28;
          **(_QWORD**)a3 |= v35 >> v27;
          v26 = v6 - 128;
          v37 = v6 - 192;
          v6 -= 128;
          v4 = (unsigned __int64*)(*(_QWORD*)result + 8LL);
          *(_QWORD*)result = v4;
        } while (v37 < 0xFFFFFFFFFFFFFF80LL);
      }
    }
    if (v26 >= 1) {
      v38 = *v4 & (0xFFFFFFFFFFFFFFFFLL >> (-(char)v26 & 63));
      if (v26 >= v27) {
        v39 = v27;
      }
      else {
        v39 = v26;
      }
      **(_QWORD**)a3 &= ~((-1LL << *(_DWORD*)(a3 + 8)) &
                          (0xFFFFFFFFFFFFFFFFLL >>
                           ((unsigned __int8)v27 - (unsigned __int8)v39)));
      **(_QWORD**)a3 |= v38 << *(_DWORD*)(a3 + 8);
      v40 = *(unsigned int*)(a3 + 8);
      v41 = *(_QWORD**)a3;
      *(_DWORD*)(a3 + 8) = ((_BYTE)v40 + (_BYTE)v39) & 0x3F;
      v42 = (_QWORD*)((char*)v41 +
                      (((unsigned __int64)(v39 + v40) >> 3) & 0x3FFFFFF8));
      *(_QWORD*)a3 = v42;
      if (v26 - v39 >= 1) {
        *v42 &= ~(0xFFFFFFFFFFFFFFFFLL >>
                  ((unsigned __int8)v39 - (unsigned __int8)v26));
        **(_QWORD**)a3 |= v38 >> v39;
        *(_DWORD*)(a3 + 8) = v26 - v39;
      }
    }
  }
  *(_QWORD*)a4 = *(_QWORD*)a3;
  *(_DWORD*)(a4 + 8) = *(_DWORD*)(a3 + 8);
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8 x8_,
                                                 float32x4_t* result,
                                                 float32x4_t* a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  float32x4_t v5;
  int8x16_t v6;
  int8x16_t v7;
  float32x4_t* v8;
  float32x4_t v10;
  float32x4_t v11;
  unsigned __int8 explicit;
  __int64* v13;
  _QWORD* v14;
  float32x4_t v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int128 v20;
  __int128 v21;
  __int64 v22;
  int v23;
  char v24;
  __int64 v25;
  _QWORD* v26;
  int v27;
  __int64 v28;
  float v29;
  float32x4_t v30;
  float32x4_t v31;
  __int64 v32;
  int v33;
  unsigned int* v34;
  __int64 v35;
  signed int v36;
  float32x4_t v37;
  __int128 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  int8x16_t v43;
  long double v44;
  _BYTE v45[12];
  _DWORD v46[3];
  struct {
    char gap64_[8];
    __int64 (**v47)();
    unsigned int v48;
    __int16 v49;
    char gap86_[2];
    __int64 v50;
    __int128 v51;
    __int64 v52;
    int v53;
    char gap124_[4];
    __int64 v54;
    __int64 v55;
    char v56;
    char gap145_[7];
    int* v57;
    __int64 v58;
  } v47_;
  struct {
    int v59;
    __int16 v60;
    char gap174_[2];
    __int64 v61;
    __int64 v62;
    __int64 v63;
    __int64 v64;
    int v65;
    char gap212_[4];
    __int64 v66;
    __int64 v67;
    int v68;
    __int16 v69;
    char gap238_[2];
    __int64 v70;
    __int64 v71;
    __int64 v72;
    __int64 v73;
    int v74;
    char gap276_[4];
    __int64 v75;
    __int64 v76;
    int v77;
    __int16 v78;
    char gap302_[2];
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    int v83;
    char gap340_[4];
    __int64 v84;
    __int64 v85;
    int v86;
    __int16 v87;
    char gap366_[2];
    __int64 v88;
    __int64 v89;
    __int64 v90;
    __int64 v91;
    int v92;
    char gap404_[4];
    __int64 v93;
    __int64 v94;
    int v95;
    __int16 v96;
    char gap430_[2];
    __int64 v97;
    __int64 v98;
    __int64 v99;
    __int64 v100;
    int v101;
    char gap468_[4];
    __int64 v102;
    __int64 v103;
    int v104;
    __int16 v105;
    char gap494_[2];
    __int64 v106;
    __int64 v107;
    __int64 v108;
    __int64 v109;
    int v110;
    char gap532_[4];
    __int64 v111;
    __int64 v112;
    int v113;
    __int16 v114;
    char gap558_[2];
    __int64 v115;
    __int64 v116;
    __int64 v117;
    __int64 v118;
    int v119;
    char gap596_[4];
    __int64 v120;
    __int64 v121;
    int v122;
    __int16 v123;
    char gap622_[2];
    __int64 v124;
    __int64 v125;
    __int64 v126;
    __int64 v127;
    int v128;
    char gap660_[4];
    __int64 v129;
    __int64 v130;
    int v131;
    __int16 v132;
    char gap686_[2];
    __int64 v133;
    __int64 v134;
    __int64 v135;
    __int64 v136;
    int v137;
    char gap724_[4];
    __int64 v138;
    __int64 v139;
    int v140;
    __int16 v141;
    char gap750_[2];
    __int64 v142;
    __int64 v143;
    __int64 v144;
    __int64 v145;
    int v146;
    char gap788_[4];
    __int64 v147;
    __int64 v148;
    int v149;
    __int16 v150;
    char gap814_[2];
    __int64 v151;
    __int64 v152;
    __int64 v153;
    __int64 v154;
    int v155;
    char gap852_[4];
    __int64 v156;
    __int64 v157;
    int v158;
    __int16 v159;
    char gap878_[2];
    __int64 v160;
    __int64 v161;
    __int64 v162;
    __int64 v163;
    int v164;
    char gap916_[4];
    __int64 v165;
    __int64 v166;
    int v167;
    __int16 v168;
    char gap942_[2];
    __int64 v169;
    __int64 v170;
    __int64 v171;
    __int64 v172;
    int v173;
    char gap980_[4];
    __int64 v174;
    __int64 v175;
    int v176;
    __int16 v177;
    char gap1006_[2];
    __int64 v178;
    __int64 v179;
    __int64 v180;
    __int64 v181;
    int v182;
    char gap1044_[4];
    __int64 v183;
    __int64 v184;
    int v185;
    __int16 v186;
    char gap1070_[2];
    __int64 v187;
    __int64 v188;
    __int64 v189;
    __int64 v190;
    int v191;
    char gap1108_[4];
    __int64 v192;
    __int64 v193;
    int v194;
    __int16 v195;
    char gap1134_[2];
    __int64 v196;
    __int64 v197;
    __int64 v198;
    __int64 v199;
    int v200;
    char gap1172_[4];
    __int64 v201;
    __int64 v202;
    int v203;
    __int16 v204;
    char gap1198_[2];
    __int64 v205;
    __int64 v206;
    __int64 v207;
    __int64 v208;
    int v209;
    char gap1236_[4];
    __int64 v210;
    __int64 v211;
    int v212;
    __int16 v213;
    char gap1262_[2];
    __int64 v214;
    __int64 v215;
    __int64 v216;
    __int64 v217;
    int v218;
    char gap1300_[4];
    __int64 v219;
    __int64 v220;
    int v221;
    __int16 v222;
    char gap1326_[2];
    __int64 v223;
    __int64 v224;
    __int64 v225;
    __int64 v226;
    int v227;
    char gap1364_[4];
    __int64 v228;
    __int64 v229;
    int v230;
    __int16 v231;
    char gap1390_[2];
    __int64 v232;
    __int64 v233;
    __int64 v234;
    __int64 v235;
    int v236;
    char gap1428_[4];
    __int64 v237;
    __int64 v238;
    int v239;
    __int16 v240;
    char gap1454_[2];
    __int64 v241;
    __int64 v242;
    __int64 v243;
    __int64 v244;
    int v245;
    char gap1492_[4];
    __int64 v246;
    __int64 v247;
    int v248;
    __int16 v249;
    char gap1518_[2];
    __int64 v250;
    __int64 v251;
    __int64 v252;
    __int64 v253;
    int v254;
    char gap1556_[4];
    __int64 v255;
    __int64 v256;
    int v257;
    __int16 v258;
    char gap1582_[2];
    __int64 v259;
    __int64 v260;
    __int64 v261;
    __int64 v262;
    int v263;
    char gap1620_[4];
    __int64 v264;
    __int64 v265;
    int v266;
    __int16 v267;
    char gap1646_[2];
    __int64 v268;
    __int64 v269;
    __int64 v270;
    __int64 v271;
    int v272;
    char gap1684_[4];
    __int64 v273;
    __int64 v274;
    int v275;
    __int16 v276;
    char gap1710_[2];
    __int64 v277;
    __int64 v278;
    __int64 v279;
    __int64 v280;
    int v281;
    char gap1748_[4];
    __int64 v282;
    __int64 v283;
    int v284;
    __int16 v285;
    char gap1774_[2];
    __int64 v286;
    __int64 v287;
    __int64 v288;
    __int64 v289;
    int v290;
    char gap1812_[4];
    __int64 v291;
    __int64 v292;
    int v293;
    __int16 v294;
    char gap1838_[2];
    __int64 v295;
    __int64 v296;
    __int64 v297;
    __int64 v298;
    int v299;
    char gap1876_[4];
    __int64 v300;
    __int64 v301;
    int v302;
    __int16 v303;
    char gap1902_[2];
    __int64 v304;
    __int64 v305;
    __int64 v306;
    __int64 v307;
    int v308;
    char gap1940_[4];
    __int64 v309;
    __int64 v310;
    int v311;
    __int16 v312;
    char gap1966_[2];
    __int64 v313;
    __int64 v314;
    __int64 v315;
    __int64 v316;
    int v317;
    char gap2004_[4];
    __int64 v318;
    __int64 v319;
    int v320;
    __int16 v321;
    char gap2030_[2];
    __int64 v322;
    __int64 v323;
    __int64 v324;
    __int64 v325;
    int v326;
    char gap2068_[4];
    __int64 v327;
    __int64 v328;
    int v329;
    __int16 v330;
    char gap2094_[2];
    __int64 v331;
    __int64 v332;
    __int64 v333;
    __int64 v334;
    int v335;
    char gap2132_[4];
    __int64 v336;
    __int64 v337;
    int v338;
    __int16 v339;
    char gap2158_[2];
    __int64 v340;
    __int64 v341;
    __int64 v342;
    __int64 v343;
    int v344;
    char gap2196_[4];
    __int64 v345;
    __int64 v346;
  } v59_;
  _QWORD v347[2];
  _QWORD v348[2];
  __int16 v349;
  int v350;
  __int16 v351;

  v5 = vsubq_f32(*a2, *result);
  v7 = vmulq_f32(v5, v5);
  v6 = vextq_s8(v7, v7, 8u);
  LANES128(v7).n128_u64[0] =
      LANES64_OF(vadd_f32(COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0])))
          .n64_u64[0];
  LANES128(v7).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0])))
          .n64_u64[0];
  LANES128(v6).n128_u64[0] =
      LANES64_OF(vsqrt_f32(COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0])))
          .n64_u64[0];
  v44 = *(long double*)&v6;
  if (LANES128(v6).n128_f32[0] <= 0x0.0p+0f) {
    *(_BYTE*)a4 = 0;
    *(_BYTE*)(a4 + 80) = 0;
    {
      result;
      return;
    }
  }
  LANES128(v7).n128_u64[1] = LANES128(v7).n128_u64[0];
  v348[1] = 0;
  v47_.v49 = 0;
  v47_.v50 = 0;
  v47_.v51 = (__typeof__(v47_.v51)){0};
  v8 = result;
  v347[0] = collision_anonymous_CastFilter_vtable;
  v347[1] = a3;
  v10 = vrsqrteq_f32(v7);
  v349 = 7;
  v348[0] = a3;
  v47_.v57 = &v59_.v59;
  v47_.v58 = 32;
  v47_.v53 = 0;
  v47_.v54 = 0;
  v47_.v55 = 0;
  v47_.v56 = 0;
  v59_.v60 = 0;
  v59_.v61 = 0;
  v59_.v62 = 0;
  v59_.v65 = 0;
  v59_.v66 = 0;
  v59_.v67 = 0;
  v59_.v69 = 0;
  v59_.v70 = 0;
  v59_.v71 = 0;
  v59_.v74 = 0;
  v59_.v75 = 0;
  v59_.v76 = 0;
  v59_.v78 = 0;
  v59_.v79 = 0;
  v59_.v80 = 0;
  v59_.v83 = 0;
  v59_.v84 = 0;
  v59_.v85 = 0;
  v59_.v87 = 0;
  v59_.v88 = 0;
  v59_.v89 = 0;
  v59_.v92 = 0;
  v59_.v93 = 0;
  v59_.v94 = 0;
  v11 = vmulq_f32(v10, vrsqrtsq_f32(v10, vmulq_f32(v7, v10)));
  v59_.v96 = 0;
  v59_.v97 = 0;
  v59_.v98 = 0;
  v59_.v101 = 0;
  v59_.v102 = 0;
  v59_.v103 = 0;
  v47_.v48 = -1;
  v47_.v52 = 2139095039;
  v59_.v59 = -1;
  v59_.v63 = 0;
  v59_.v64 = 2139095039;
  v59_.v68 = -1;
  v59_.v72 = 0;
  v59_.v73 = 2139095039;
  v59_.v77 = -1;
  v59_.v81 = 0;
  v59_.v82 = 2139095039;
  v59_.v86 = -1;
  v59_.v90 = 0;
  v59_.v91 = 2139095039;
  v59_.v95 = -1;
  v59_.v99 = 0;
  v59_.v100 = 2139095039;
  v47_.v47 = GameData_1f903e8;
  v59_.v104 = -1;
  v59_.v105 = 0;
  v59_.v106 = 0;
  v59_.v107 = 0;
  v59_.v108 = 0;
  v59_.v109 = 2139095039;
  v59_.v110 = 0;
  v59_.v112 = 0;
  v59_.v111 = 0;
  v59_.v113 = -1;
  v59_.v114 = 0;
  v59_.v116 = 0;
  v59_.v115 = 0;
  v59_.v117 = 0;
  v59_.v118 = 2139095039;
  v59_.v119 = 0;
  v59_.v121 = 0;
  v59_.v120 = 0;
  v59_.v122 = -1;
  v59_.v123 = 0;
  v59_.v126 = 0;
  v59_.v125 = 0;
  v59_.v124 = 0;
  v59_.v127 = 2139095039;
  v59_.v128 = 0;
  v59_.v130 = 0;
  v59_.v129 = 0;
  v59_.v131 = -1;
  v59_.v132 = 0;
  v59_.v135 = 0;
  v59_.v134 = 0;
  v59_.v133 = 0;
  v59_.v136 = 2139095039;
  v59_.v137 = 0;
  v59_.v139 = 0;
  v59_.v138 = 0;
  v59_.v140 = -1;
  v59_.v141 = 0;
  v59_.v144 = 0;
  v59_.v143 = 0;
  v59_.v142 = 0;
  v59_.v145 = 2139095039;
  v59_.v146 = 0;
  v59_.v148 = 0;
  v59_.v147 = 0;
  v59_.v149 = -1;
  v59_.v150 = 0;
  v59_.v153 = 0;
  v59_.v152 = 0;
  v59_.v151 = 0;
  v59_.v154 = 2139095039;
  v59_.v155 = 0;
  v59_.v157 = 0;
  v59_.v156 = 0;
  v59_.v158 = -1;
  v59_.v159 = 0;
  v59_.v162 = 0;
  v59_.v161 = 0;
  v59_.v160 = 0;
  v59_.v163 = 2139095039;
  v59_.v164 = 0;
  v59_.v166 = 0;
  v59_.v165 = 0;
  v59_.v167 = -1;
  v59_.v168 = 0;
  v59_.v171 = 0;
  v59_.v170 = 0;
  v59_.v169 = 0;
  v59_.v172 = 2139095039;
  v59_.v173 = 0;
  v59_.v175 = 0;
  v59_.v174 = 0;
  v59_.v176 = -1;
  v59_.v177 = 0;
  v59_.v180 = 0;
  v59_.v179 = 0;
  v59_.v178 = 0;
  v59_.v181 = 2139095039;
  v59_.v182 = 0;
  v59_.v184 = 0;
  v59_.v183 = 0;
  v59_.v185 = -1;
  v59_.v186 = 0;
  v59_.v189 = 0;
  v59_.v188 = 0;
  v59_.v187 = 0;
  v59_.v190 = 2139095039;
  v59_.v191 = 0;
  v59_.v193 = 0;
  v59_.v192 = 0;
  v59_.v194 = -1;
  v59_.v195 = 0;
  v59_.v198 = 0;
  v59_.v197 = 0;
  v59_.v196 = 0;
  v59_.v199 = 2139095039;
  v59_.v200 = 0;
  v59_.v202 = 0;
  v59_.v201 = 0;
  v59_.v203 = -1;
  v59_.v204 = 0;
  v59_.v207 = 0;
  v59_.v206 = 0;
  v59_.v205 = 0;
  v59_.v208 = 2139095039;
  v59_.v209 = 0;
  v59_.v211 = 0;
  v59_.v210 = 0;
  v59_.v212 = -1;
  v59_.v213 = 0;
  v59_.v216 = 0;
  v59_.v215 = 0;
  v59_.v214 = 0;
  v59_.v217 = 2139095039;
  v59_.v218 = 0;
  v59_.v220 = 0;
  v59_.v219 = 0;
  v59_.v221 = -1;
  v59_.v222 = 0;
  v59_.v225 = 0;
  v59_.v224 = 0;
  v59_.v223 = 0;
  v59_.v226 = 2139095039;
  v59_.v227 = 0;
  v59_.v229 = 0;
  v59_.v228 = 0;
  v59_.v230 = -1;
  v59_.v231 = 0;
  v59_.v234 = 0;
  v59_.v233 = 0;
  v59_.v232 = 0;
  v59_.v235 = 2139095039;
  v59_.v236 = 0;
  v59_.v238 = 0;
  v59_.v237 = 0;
  v59_.v239 = -1;
  v59_.v240 = 0;
  v59_.v243 = 0;
  v59_.v242 = 0;
  v59_.v241 = 0;
  v59_.v244 = 2139095039;
  v59_.v245 = 0;
  v59_.v247 = 0;
  v59_.v246 = 0;
  v59_.v248 = -1;
  v59_.v249 = 0;
  v59_.v252 = 0;
  v59_.v251 = 0;
  v59_.v250 = 0;
  v59_.v253 = 2139095039;
  v59_.v254 = 0;
  v59_.v256 = 0;
  v59_.v255 = 0;
  v59_.v257 = -1;
  v59_.v258 = 0;
  v59_.v261 = 0;
  v59_.v260 = 0;
  v59_.v259 = 0;
  v59_.v262 = 2139095039;
  v59_.v263 = 0;
  v59_.v265 = 0;
  v59_.v264 = 0;
  v59_.v266 = -1;
  v59_.v267 = 0;
  v59_.v270 = 0;
  v59_.v269 = 0;
  v59_.v268 = 0;
  v59_.v271 = 2139095039;
  v59_.v272 = 0;
  v59_.v274 = 0;
  v59_.v273 = 0;
  v59_.v275 = -1;
  v59_.v276 = 0;
  v59_.v279 = 0;
  v59_.v278 = 0;
  v59_.v277 = 0;
  v59_.v280 = 2139095039;
  v59_.v281 = 0;
  v59_.v283 = 0;
  v59_.v282 = 0;
  v59_.v284 = -1;
  v59_.v285 = 0;
  v59_.v288 = 0;
  v59_.v287 = 0;
  v59_.v286 = 0;
  v59_.v289 = 2139095039;
  v59_.v290 = 0;
  v59_.v292 = 0;
  v59_.v291 = 0;
  v59_.v293 = -1;
  v59_.v294 = 0;
  v59_.v297 = 0;
  v59_.v296 = 0;
  v59_.v295 = 0;
  v59_.v298 = 2139095039;
  v59_.v299 = 0;
  v59_.v301 = 0;
  v59_.v300 = 0;
  v59_.v302 = -1;
  v59_.v303 = 0;
  v59_.v306 = 0;
  v59_.v305 = 0;
  v59_.v304 = 0;
  v59_.v307 = 2139095039;
  v59_.v308 = 0;
  v59_.v310 = 0;
  v59_.v309 = 0;
  v59_.v311 = -1;
  v59_.v312 = 0;
  v59_.v315 = 0;
  v59_.v314 = 0;
  v59_.v313 = 0;
  v59_.v316 = 2139095039;
  v59_.v317 = 0;
  v59_.v319 = 0;
  v59_.v318 = 0;
  v59_.v320 = -1;
  v59_.v321 = 0;
  v59_.v324 = 0;
  v59_.v323 = 0;
  v59_.v322 = 0;
  v59_.v325 = 2139095039;
  v59_.v326 = 0;
  v59_.v328 = 0;
  v59_.v327 = 0;
  v59_.v329 = -1;
  v59_.v330 = 0;
  v59_.v333 = 0;
  v59_.v332 = 0;
  v59_.v331 = 0;
  v59_.v334 = 2139095039;
  v59_.v335 = 0;
  v59_.v337 = 0;
  v59_.v336 = 0;
  v59_.v338 = -1;
  v59_.v339 = 0;
  v59_.v342 = 0;
  v59_.v341 = 0;
  v59_.v340 = 0;
  v59_.v343 = 2139095039;
  v59_.v344 = 0;
  v43 = vbicq_s8(
      vmulq_f32(v5, vmulq_f32(v11, vrsqrtsq_f32(v11, vmulq_f32(v7, v11)))),
      vceqzq_f32(v7));
  v59_.v346 = 0;
  v59_.v345 = 0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                                  memory_order_acquire);
  v13 = GameData_212c838;
  if ((explicit & 1) == 0) {
    v42 = __cxa_guard_acquire_alt1((__int64)GameData_212c840);
    v13 = GameData_212c838;
    if (v42 != 0) {
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c838) = 0;
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 8) = 0;
      *v13 = 0;
      v13[1] = 0;
      *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v13) = 0;
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v13) = 0;
      *((_BYTE*)((char*)0x40LL) + (_QWORD)v13) = 0;
      *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v13) = 0;
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v13) =
          (_UNKNOWN*)1065353216;
      GameRoutine_14a0820_alt1(GameData_212c838);
      GameRoutine_2b0_alt1();
      __cxa_guard_release_alt1((__int64)GameData_212c840);
      v13 = GameData_212c838;
    }
  }
  v14 = *(_QWORD**)(*v13 + 32);
  (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*v14 + 936LL))(*v14, 0, 0);
  v15 = *v8;
  v16 = *v14;
  *(_QWORD*)v46 = LANES128(*(v8)).n128_u64[0];
  v46[2] = LANES128(v15).n128_u32[2];
  qmemcpy(v45, &v43, sizeof(v45));
  v351 = 1;
  v350 = 1;
  if (((*(__int64 (**)(__int64, _DWORD*, _BYTE*, __int64 (***)(void), __int16*,
                       _QWORD*, _QWORD*, _QWORD, long double, int*))(
           *(_QWORD*)v16 + 72LL))(v16, v46, v45, &v47_.v47, &v351, v348, v347,
                                  0, v44, &v350) &
       1) != 0 &&
      (v47_.v56 & 1) != 0) {
    v17 = *(_QWORD*)(v47_.v55 + 16);
    if (v17 != 0) {
      if ((**(unsigned int (***)(_QWORD))v17)(*(_QWORD*)(v47_.v55 + 16)) == 0) {
        v25 = *(_QWORD*)(v17 + 64);
        v26 = *(_QWORD**)(v17 + 8);
        v27 = *(_DWORD*)(v17 + 72);
        v28 = (*(__int64 (**)(__int64))(*(_QWORD*)v25 + 128LL))(v25);
        v29 = *(float*)&v47_.v52 / *(float*)&v44;
        v30 = *v8;
        v31 = vsubq_f32(*a2, *v8);
        v32 = v26[6];
        v33 = *(_DWORD*)(v28 + 4LL * v47_.v48) + v27;
        v34 = (unsigned int*)(v26[9] + 24LL * v33);
        v35 = v34[3];
        v36 = v34[4];
        LODWORD(v34) = v34[5];
        *(_DWORD*)(a4 + 32) = v33;
        *(_DWORD*)(a4 + 36) = v36;
        *(_DWORD*)(a4 + 40) = (_DWORD)v34;
        v37 = vaddq_f32(v30, vmulq_n_f32(v31, v29));
        v38 = *(_OWORD*)(v32 + 16 * v35);
        v39 = v26[12] + 40LL * v36;
        *(float32x4_t*)a4 = v37;
        *(_OWORD*)(a4 + 16) = v38;
        *(_QWORD*)(a4 + 48) = *(_QWORD*)(v39 + 24);
        *(_QWORD*)(a4 + 56) = v26;
        goto LABEL_12;
      }
      if ((**(unsigned int (***)(__int64))v17)(v17) == 1) {
        *(_QWORD*)&v20 = v47_.v50;
        LODWORD(v18) = v47_.v51;
        LODWORD(v19) = DWORD3(v47_.v51);
        *((_QWORD*)&v20 + 1) = v18;
        *(_QWORD*)&v21 = *(_QWORD*)((char*)&v47_.v51 + 4);
        v22 = *(_QWORD*)(v17 + 24);
        v23 = *(_DWORD*)(v17 + 32);
        *(_QWORD*)(a4 + 32) = 0;
        *(_DWORD*)(a4 + 40) = v23;
        *(_QWORD*)(a4 + 48) = v22;
        *(_QWORD*)(a4 + 56) = 0;
        *((_QWORD*)&v21 + 1) = v19;
        *(_OWORD*)a4 = v20;
        *(_OWORD*)(a4 + 16) = v21;
      LABEL_12:
        v40 = v47_.v55;
        *(_DWORD*)(a4 + 72) = 0;
        *(_QWORD*)(a4 + 64) = v40;
        v24 = 1;
        goto LABEL_13;
      }
    }
  }
  v24 = 0;
  *(_BYTE*)a4 = 0;
LABEL_13:
  v41 = *v14;
  *(_BYTE*)(a4 + 80) = v24;
  {
    (float32x4_t*)(*(__int64 (**)(__int64))(*(_QWORD*)v41 + 944LL))(v41);
    return;
  }
}

__attribute__((swiftcall)) void collision_672120(PSEUDO_X8 x8_, __int128* a1,
                                                 __int64 a2, float a4)
{

#pragma clang fp contract(off)
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int8 explicit;
  __int64* v8;
  _QWORD* v9;
  __int128 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  struct {
    __int64 v31;
    __int64 v32;
  } v31_;
  struct {
    __int64 v33;
    __int64 v34;
    __int64 v35;
    int v36;
  } v33_;
  struct {
    __int64 v37;
    unsigned __int64 v38;
    unsigned __int64 v39;
  } v37_;
  struct {
    __int64 v40;
    __int64 v41;
  } v40_;
  struct {
    __int64 (**v42)();
    int v43;
    char gap108_[4];
    __int64 v44;
    __int64 v45;
    char v46;
    char gap129_[7];
    int* v47;
    __int64 v48;
  } v42_;
  struct {
    int v49;
    char gap156_[4];
    __int64 v50;
    __int64 v51;
    int v52;
    char gap180_[4];
    __int64 v53;
    __int64 v54;
    int v55;
    char gap204_[4];
    __int64 v56;
    __int64 v57;
    int v58;
    char gap228_[4];
    __int64 v59;
    __int64 v60;
    int v61;
    char gap252_[4];
    __int64 v62;
    __int64 v63;
    int v64;
    char gap276_[4];
    __int64 v65;
    __int64 v66;
    int v67;
    char gap300_[4];
    __int64 v68;
    __int64 v69;
    int v70;
    char gap324_[4];
    __int64 v71;
    __int64 v72;
    int v73;
    char gap348_[4];
    __int64 v74;
    __int64 v75;
    int v76;
    char gap372_[4];
    __int64 v77;
    __int64 v78;
    int v79;
    char gap396_[4];
    __int64 v80;
    __int64 v81;
    int v82;
    char gap420_[4];
    __int64 v83;
    __int64 v84;
    int v85;
    char gap444_[4];
    __int64 v86;
    __int64 v87;
    int v88;
    char gap468_[4];
    __int64 v89;
    __int64 v90;
    int v91;
    char gap492_[4];
    __int64 v92;
    __int64 v93;
    int v94;
    char gap516_[4];
    __int64 v95;
    __int64 v96;
    int v97;
    char gap540_[4];
    __int64 v98;
    __int64 v99;
    int v100;
    char gap564_[4];
    __int64 v101;
    __int64 v102;
    int v103;
    char gap588_[4];
    __int64 v104;
    __int64 v105;
    int v106;
    char gap612_[4];
    __int64 v107;
    __int64 v108;
    int v109;
    char gap636_[4];
    __int64 v110;
    __int64 v111;
    int v112;
    char gap660_[4];
    __int64 v113;
    __int64 v114;
    int v115;
    char gap684_[4];
    __int64 v116;
    __int64 v117;
    int v118;
    char gap708_[4];
    __int64 v119;
    __int64 v120;
    int v121;
    char gap732_[4];
    __int64 v122;
    __int64 v123;
    int v124;
    char gap756_[4];
    __int64 v125;
    __int64 v126;
    int v127;
    char gap780_[4];
    __int64 v128;
    __int64 v129;
    int v130;
    char gap804_[4];
    __int64 v131;
    __int64 v132;
    int v133;
    char gap828_[4];
    __int64 v134;
    __int64 v135;
    int v136;
    char gap852_[4];
    __int64 v137;
    __int64 v138;
    int v139;
    char gap876_[4];
    __int64 v140;
    __int64 v141;
    int v142;
    char gap900_[4];
    __int64 v143;
    __int64 v144;
  } v49_;
  struct {
    _QWORD v145[2];
    __int16 v146;
  } v145_;
  _QWORD v147[2];
  int v148;

  v145_.v145[0] = 0;
  v145_.v145[1] = 0;
  v42_.v44 = 0;
  v42_.v45 = 0;
  v42_.v46 = 0;
  v147[0] = collision_anonymous_CastFilter_vtable;
  v147[1] = a2;
  v145_.v146 = 39;
  v49_.v50 = 0;
  v49_.v51 = 0;
  v49_.v53 = 0;
  v49_.v54 = 0;
  v49_.v56 = 0;
  v49_.v57 = 0;
  v49_.v59 = 0;
  v49_.v60 = 0;
  v49_.v62 = 0;
  v49_.v63 = 0;
  v49_.v65 = 0;
  v49_.v66 = 0;
  v49_.v68 = 0;
  v49_.v69 = 0;
  v49_.v71 = 0;
  v49_.v72 = 0;
  v42_.v47 = &v49_.v49;
  v42_.v48 = 32;
  v42_.v43 = -1;
  v49_.v49 = -1;
  v49_.v52 = -1;
  v49_.v55 = -1;
  v49_.v58 = -1;
  v49_.v61 = -1;
  v49_.v64 = -1;
  v49_.v67 = -1;
  v49_.v70 = -1;
  v42_.v42 = GameData_1f90470;
  v49_.v73 = -1;
  v49_.v74 = 0;
  v49_.v75 = 0;
  v49_.v76 = -1;
  v49_.v77 = 0;
  v49_.v78 = 0;
  v49_.v79 = -1;
  v49_.v80 = 0;
  v49_.v81 = 0;
  v49_.v82 = -1;
  v49_.v83 = 0;
  v49_.v84 = 0;
  v49_.v85 = -1;
  v49_.v86 = 0;
  v49_.v87 = 0;
  v49_.v88 = -1;
  v49_.v89 = 0;
  v49_.v90 = 0;
  v49_.v91 = -1;
  v49_.v92 = 0;
  v49_.v93 = 0;
  v49_.v94 = -1;
  v49_.v96 = 0;
  v49_.v95 = 0;
  v49_.v97 = -1;
  v49_.v99 = 0;
  v49_.v98 = 0;
  v49_.v100 = -1;
  v49_.v102 = 0;
  v49_.v101 = 0;
  v49_.v103 = -1;
  v49_.v105 = 0;
  v49_.v104 = 0;
  v49_.v106 = -1;
  v49_.v108 = 0;
  v49_.v107 = 0;
  v49_.v109 = -1;
  v49_.v111 = 0;
  v49_.v110 = 0;
  v49_.v112 = -1;
  v49_.v114 = 0;
  v49_.v113 = 0;
  v49_.v115 = -1;
  v49_.v117 = 0;
  v49_.v116 = 0;
  v49_.v118 = -1;
  v49_.v120 = 0;
  v49_.v119 = 0;
  v49_.v121 = -1;
  v49_.v123 = 0;
  v49_.v122 = 0;
  v49_.v124 = -1;
  v49_.v126 = 0;
  v49_.v125 = 0;
  v49_.v127 = -1;
  v49_.v129 = 0;
  v49_.v128 = 0;
  v49_.v130 = -1;
  v49_.v132 = 0;
  v49_.v131 = 0;
  v49_.v133 = -1;
  v49_.v135 = 0;
  v49_.v134 = 0;
  v49_.v136 = -1;
  v49_.v138 = 0;
  v49_.v137 = 0;
  v49_.v139 = -1;
  v49_.v141 = 0;
  v49_.v140 = 0;
  v49_.v142 = -1;
  v49_.v144 = 0;
  v49_.v143 = 0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                                  memory_order_acquire);
  v8 = GameData_212c838;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212c840) != 0) {
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v8) = 0;
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v8 + 8) = 0;
    *v8 = 0;
    v8[1] = 0;
    *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v8) = 0;
    *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v8) = 0;
    *((_BYTE*)((char*)0x40LL) + (_QWORD)v8) = 0;
    *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v8) = 0;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v8) =
        (_UNKNOWN*)1065353216;
    GameRoutine_14a0820_alt1(v8);
    GameRoutine_2b0_alt1();
    __cxa_guard_release_alt1((__int64)GameData_212c840);
  }
  v9 = *(_QWORD**)(*v8 + 32);
  (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*v9 + 936LL))(*v9, 0, 0);
  v10 = *a1;
  v11 = *v9;
  LODWORD(v40_.v40) = 0;
  *(float*)&v40_.v41 = a4;
  v31_.v31 = 0;
  v31_.v32 = 0x3F80000000000000LL;
  v33_.v33 = v10;
  LODWORD(v33_.v34) = DWORD2(v10);
  v148 = 1;
  if (((*(__int64 (**)(__int64, __int64*, __int64*, __int64 (***)(void),
                       _QWORD*, _QWORD*, _QWORD, int*))(*(_QWORD*)v11 + 88LL))(
           v11, &v40_.v40, &v31_.v31, &v42_.v42, v145_.v145, v147, 0, &v148) &
       1) == 0) {
    goto LABEL_25;
  }
  GameRoutine_675000_alt1(&v40_.v40, (__int64)&v42_.v42);
  v12 = v40_.v40;
  v13 = v40_.v41;
  if (v40_.v40 == v40_.v41) {
    if (v40_.v40 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v40_.v40);
    }
  LABEL_25:
    *(_BYTE*)a3 = 0;
    *(_BYTE*)(a3 + 24) = 0;
    {
      (*(__int64 (**)(_QWORD))(*(_QWORD*)*v9 + 944LL))(*v9);
      return;
    }
  }
  v14 = 0;
  v37_.v38 = 0;
  v37_.v39 = 0;
  v15 = v40_.v40;
  v37_.v37 = 0;
  do {
    v16 = *(_QWORD*)(*(_QWORD*)v15 + 16LL);
    v17 = *(_QWORD*)(v16 + 16);
    if (v17 == 0) {
      goto LABEL_6;
    }
    if ((**(unsigned int (***)(_QWORD))v17)(*(_QWORD*)(v16 + 16)) != 0) {
      if ((**(unsigned int (***)(__int64))v17)(v17) != 1) {
        goto LABEL_6;
      }
      v18 = *(_QWORD*)(v17 + 16);
      v19 = *(_QWORD*)(*(_QWORD*)v15 + 16LL);
      v31_.v31 = 0;
      v31_.v32 = v19;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
          *(_QWORD*)v18 + 176LL))((void*)(&v33_.v33), (__int64)v18);
      if (v14 >= v37_.v39) {
        v14 = GameRoutine_675260_alt1(&v37_.v37, (__int64)&v31_.v31);
        goto LABEL_16;
      }
      v20 = v31_.v32;
      *(_QWORD*)v14 = v31_.v31;
      *(_QWORD*)(v14 + 8) = v20;
      v21 = v33_.v33;
      *(_QWORD*)(v14 + 32) = v33_.v35;
      v22 = v33_.v36;
      *(_DWORD*)(v14 + 16) = v21;
      *(_DWORD*)(v14 + 40) = v22;
      *(_DWORD*)(v14 + 20) = HIDWORD(v33_.v33);
      *(_QWORD*)(v14 + 24) = v33_.v34;
    }
    else {
      v23 = *(_QWORD*)(v17 + 8);
      v24 = *(_QWORD*)(*(_QWORD*)v15 + 16LL);
      v33_.v33 = 0;
      v33_.v34 = 0x3F80000000000000LL;
      v33_.v35 = 0;
      v33_.v36 = 0;
      v31_.v31 = v23;
      v31_.v32 = v24;
      if (v14 >= v37_.v39) {
        v14 = GameRoutine_675260_alt1(&v37_.v37, (__int64)&v31_.v31);
        v37_.v38 = v14;
        goto LABEL_6;
      }
      v25 = v31_.v31;
      v26 = v31_.v32;
      *(_QWORD*)(v14 + 24) = 0x3F80000000000000LL;
      *(_QWORD*)(v14 + 32) = 0;
      *(_DWORD*)(v14 + 40) = 0;
      *(_QWORD*)(v14 + 16) = 0;
      *(_QWORD*)v14 = v25;
      *(_QWORD*)(v14 + 8) = v26;
    }
    v14 += 48LL;
  LABEL_16:
    v37_.v38 = v14;
  LABEL_6:
    v15 += 8;
  } while (v15 != v13);
  v27 = v37_.v39;
  *(_QWORD*)a3 = v37_.v37;
  *(_QWORD*)(a3 + 8) = v14;
  *(_QWORD*)(a3 + 16) = v27;
  *(_BYTE*)(a3 + 24) = 1;
  if (v12 != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v12);
  }
  {
    (*(__int64 (**)(_QWORD))(*(_QWORD*)*v9 + 944LL))(*v9);
    return;
  }
}

__attribute__((swiftcall)) void collision_672fa0(PSEUDO_X8 x8_, _OWORD* a1,
                                                 __int64 a2, float a4)
{

#pragma clang fp contract(off)
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int8 explicit;
  __int64* v6;
  _QWORD* v7;
  __int128 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  _OWORD* v27;
  int v28;
  int v29;
  struct {
    __int64 v30;
    __int64 v31;
  } v30_;
  struct {
    __int64 v32;
    __int64 v33;
    __int64 v34;
    int v35;
  } v32_;
  struct {
    __int64 v36;
    unsigned __int64 v37;
    unsigned __int64 v38;
  } v36_;
  struct {
    __int64 v39;
    __int64 v40;
  } v39_;
  struct {
    __int64 (**v41)();
    int v42;
    char gap108_[4];
    __int64 v43;
    __int64 v44;
    char v45;
    char gap129_[7];
    int* v46;
    __int64 v47;
  } v41_;
  struct {
    int v48;
    char gap156_[4];
    __int64 v49;
    __int64 v50;
    int v51;
    char gap180_[4];
    __int64 v52;
    __int64 v53;
    int v54;
    char gap204_[4];
    __int64 v55;
    __int64 v56;
    int v57;
    char gap228_[4];
    __int64 v58;
    __int64 v59;
    int v60;
    char gap252_[4];
    __int64 v61;
    __int64 v62;
    int v63;
    char gap276_[4];
    __int64 v64;
    __int64 v65;
    int v66;
    char gap300_[4];
    __int64 v67;
    __int64 v68;
    int v69;
    char gap324_[4];
    __int64 v70;
    __int64 v71;
    int v72;
    char gap348_[4];
    __int64 v73;
    __int64 v74;
    int v75;
    char gap372_[4];
    __int64 v76;
    __int64 v77;
    int v78;
    char gap396_[4];
    __int64 v79;
    __int64 v80;
    int v81;
    char gap420_[4];
    __int64 v82;
    __int64 v83;
    int v84;
    char gap444_[4];
    __int64 v85;
    __int64 v86;
    int v87;
    char gap468_[4];
    __int64 v88;
    __int64 v89;
    int v90;
    char gap492_[4];
    __int64 v91;
    __int64 v92;
    int v93;
    char gap516_[4];
    __int64 v94;
    __int64 v95;
    int v96;
    char gap540_[4];
    __int64 v97;
    __int64 v98;
    int v99;
    char gap564_[4];
    __int64 v100;
    __int64 v101;
    int v102;
    char gap588_[4];
    __int64 v103;
    __int64 v104;
    int v105;
    char gap612_[4];
    __int64 v106;
    __int64 v107;
    int v108;
    char gap636_[4];
    __int64 v109;
    __int64 v110;
    int v111;
    char gap660_[4];
    __int64 v112;
    __int64 v113;
    int v114;
    char gap684_[4];
    __int64 v115;
    __int64 v116;
    int v117;
    char gap708_[4];
    __int64 v118;
    __int64 v119;
    int v120;
    char gap732_[4];
    __int64 v121;
    __int64 v122;
    int v123;
    char gap756_[4];
    __int64 v124;
    __int64 v125;
    int v126;
    char gap780_[4];
    __int64 v127;
    __int64 v128;
    int v129;
    char gap804_[4];
    __int64 v130;
    __int64 v131;
    int v132;
    char gap828_[4];
    __int64 v133;
    __int64 v134;
    int v135;
    char gap852_[4];
    __int64 v136;
    __int64 v137;
    int v138;
    char gap876_[4];
    __int64 v139;
    __int64 v140;
    int v141;
    char gap900_[4];
    __int64 v142;
    __int64 v143;
  } v48_;
  struct {
    _QWORD v144[2];
    __int16 v145;
  } v144_;
  struct {
    _QWORD v146[2];
    char gap960_[24];
    float v147;
  } v146_;
  int v148;

  v144_.v144[0] = 0;
  v144_.v144[1] = 0;
  v41_.v43 = 0;
  v41_.v44 = 0;
  v41_.v45 = 0;
  v146_.v146[0] = collision_anonymous_CastFilter_vtable;
  v146_.v146[1] = a2;
  v144_.v145 = 39;
  v48_.v49 = 0;
  v48_.v50 = 0;
  v48_.v52 = 0;
  v48_.v53 = 0;
  v48_.v55 = 0;
  v48_.v56 = 0;
  v48_.v58 = 0;
  v48_.v59 = 0;
  v48_.v61 = 0;
  v48_.v62 = 0;
  v48_.v64 = 0;
  v48_.v65 = 0;
  v48_.v67 = 0;
  v48_.v68 = 0;
  v48_.v70 = 0;
  v48_.v71 = 0;
  v48_.v73 = 0;
  v48_.v74 = 0;
  v48_.v76 = 0;
  v48_.v77 = 0;
  v41_.v46 = &v48_.v48;
  v41_.v47 = 32;
  v41_.v42 = -1;
  v48_.v48 = -1;
  v48_.v51 = -1;
  v48_.v54 = -1;
  v48_.v57 = -1;
  v48_.v60 = -1;
  v48_.v63 = -1;
  v48_.v66 = -1;
  v48_.v69 = -1;
  v41_.v41 = GameData_1f90470;
  v48_.v72 = -1;
  v48_.v75 = -1;
  v48_.v78 = -1;
  v48_.v79 = 0;
  v48_.v80 = 0;
  v48_.v81 = -1;
  v48_.v82 = 0;
  v48_.v83 = 0;
  v48_.v84 = -1;
  v48_.v85 = 0;
  v48_.v86 = 0;
  v48_.v87 = -1;
  v48_.v88 = 0;
  v48_.v89 = 0;
  v48_.v90 = -1;
  v48_.v91 = 0;
  v48_.v92 = 0;
  v48_.v93 = -1;
  v48_.v95 = 0;
  v48_.v94 = 0;
  v48_.v96 = -1;
  v48_.v98 = 0;
  v48_.v97 = 0;
  v48_.v99 = -1;
  v48_.v101 = 0;
  v48_.v100 = 0;
  v48_.v102 = -1;
  v48_.v104 = 0;
  v48_.v103 = 0;
  v48_.v105 = -1;
  v48_.v107 = 0;
  v48_.v106 = 0;
  v48_.v108 = -1;
  v48_.v110 = 0;
  v48_.v109 = 0;
  v48_.v111 = -1;
  v48_.v113 = 0;
  v48_.v112 = 0;
  v48_.v114 = -1;
  v48_.v116 = 0;
  v48_.v115 = 0;
  v48_.v117 = -1;
  v48_.v119 = 0;
  v48_.v118 = 0;
  v48_.v120 = -1;
  v48_.v122 = 0;
  v48_.v121 = 0;
  v48_.v123 = -1;
  v48_.v125 = 0;
  v48_.v124 = 0;
  v48_.v126 = -1;
  v48_.v128 = 0;
  v48_.v127 = 0;
  v48_.v129 = -1;
  v48_.v131 = 0;
  v48_.v130 = 0;
  v48_.v132 = -1;
  v48_.v134 = 0;
  v48_.v133 = 0;
  v48_.v135 = -1;
  v48_.v137 = 0;
  v48_.v136 = 0;
  v48_.v138 = -1;
  v48_.v140 = 0;
  v48_.v139 = 0;
  v48_.v141 = -1;
  v48_.v143 = 0;
  v48_.v142 = 0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                                  memory_order_acquire);
  v6 = GameData_212c838;
  if ((explicit & 1) == 0) {
    v27 = a1;
    v146_.v147 = a4;
    v28 = __cxa_guard_acquire_alt1((__int64)GameData_212c840);
    a4 = v146_.v147;
    v29 = v28;
    a1 = v27;
    if (v29 != 0) {
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6) = 0;
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6 + 8) = 0;
      *v6 = 0;
      v6[1] = 0;
      *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v6) = 0;
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v6) = 0;
      *((_BYTE*)((char*)0x40LL) + (_QWORD)v6) = 0;
      *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v6) = 0;
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v6) =
          (_UNKNOWN*)1065353216;
      GameRoutine_14a0820_alt1(v6);
      GameRoutine_2b0_alt1();
      __cxa_guard_release_alt1((__int64)GameData_212c840);
      a4 = v146_.v147;
      a1 = v27;
    }
  }
  v7 = **(_QWORD***)(*v6 + 32);
  *(float*)&v39_.v40 = a4;
  v8 = *a1;
  v30_.v30 = 0;
  v30_.v31 = 0x3F80000000000000LL;
  LODWORD(v39_.v39) = 0;
  v32_.v32 = v8;
  LODWORD(v32_.v33) = DWORD2(v8);
  v148 = 1;
  if (((unsigned int)X8CALL_X0(
           _QWORD*,
           (*(__attribute__((swiftcall)) void (**)(
               PSEUDO_X8, _QWORD*, __int64*, __int64*, __int64 (***)(void),
               _QWORD*, _QWORD*, _QWORD, int*))(*v7 + 88LL))(
               (void*)v7, v7, &v39_.v39, &v30_.v30, &v41_.v41, v144_.v144,
               v146_.v146, 0, &v148)) &
       1) == 0) {
    goto LABEL_25;
  }
  GameRoutine_675000_alt1(&v39_.v39, (__int64)&v41_.v41);
  v9 = v39_.v39;
  v10 = v39_.v40;
  if (v39_.v39 == v39_.v40) {
    if (v39_.v39 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v39_.v39);
    }
  LABEL_25:
    *(_BYTE*)a3 = 0;
    *(_BYTE*)(a3 + 24) = 0;
    return;
  }
  v11 = 0;
  v36_.v37 = 0;
  v36_.v38 = 0;
  v12 = v39_.v39;
  v36_.v36 = 0;
  do {
    v13 = *(_QWORD*)(*(_QWORD*)v12 + 16LL);
    v14 = *(_QWORD*)(v13 + 16);
    if (v14 == 0) {
      goto LABEL_6;
    }
    if ((**(unsigned int (***)(_QWORD))v14)(*(_QWORD*)(v13 + 16)) != 0) {
      if ((**(unsigned int (***)(__int64))v14)(v14) != 1) {
        goto LABEL_6;
      }
      v15 = *(_QWORD*)(v14 + 16);
      v16 = *(_QWORD*)(*(_QWORD*)v12 + 16LL);
      v30_.v30 = 0;
      v30_.v31 = v16;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
          *(_QWORD*)v15 + 176LL))((void*)(&v32_.v32), (__int64)v15);
      if (v11 >= v36_.v38) {
        v11 = GameRoutine_675260_alt1(&v36_.v36, (__int64)&v30_.v30);
        goto LABEL_16;
      }
      v17 = v30_.v31;
      *(_QWORD*)v11 = v30_.v30;
      *(_QWORD*)(v11 + 8) = v17;
      v18 = v32_.v32;
      *(_QWORD*)(v11 + 32) = v32_.v34;
      v19 = v32_.v35;
      *(_DWORD*)(v11 + 16) = v18;
      *(_DWORD*)(v11 + 40) = v19;
      *(_DWORD*)(v11 + 20) = HIDWORD(v32_.v32);
      *(_QWORD*)(v11 + 24) = v32_.v33;
    }
    else {
      v20 = *(_QWORD*)(v14 + 8);
      v21 = *(_QWORD*)(*(_QWORD*)v12 + 16LL);
      v32_.v32 = 0;
      v32_.v33 = 0x3F80000000000000LL;
      v32_.v34 = 0;
      v32_.v35 = 0;
      v30_.v30 = v20;
      v30_.v31 = v21;
      if (v11 >= v36_.v38) {
        v11 = GameRoutine_675260_alt1(&v36_.v36, (__int64)&v30_.v30);
        v36_.v37 = v11;
        goto LABEL_6;
      }
      v22 = v30_.v30;
      v23 = v30_.v31;
      *(_QWORD*)(v11 + 24) = 0x3F80000000000000LL;
      *(_QWORD*)(v11 + 32) = 0;
      *(_DWORD*)(v11 + 40) = 0;
      *(_QWORD*)(v11 + 16) = 0;
      *(_QWORD*)v11 = v22;
      *(_QWORD*)(v11 + 8) = v23;
    }
    v11 += 48LL;
  LABEL_16:
    v36_.v37 = v11;
  LABEL_6:
    v12 += 8;
  } while (v12 != v10);
  v24 = v36_.v38;
  *(_QWORD*)a3 = v36_.v36;
  *(_QWORD*)(a3 + 8) = v11;
  *(_QWORD*)(a3 + 16) = v24;
  *(_BYTE*)(a3 + 24) = 1;
  if (v9 != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v9);
  }
}

#pragma GCC visibility pop
