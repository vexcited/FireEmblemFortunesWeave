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
  unsigned int* result;
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
        result = (unsigned int*)memmove(v8, v7, 8 * v15);
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
    result = X8CALL_X0(
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
        *v24 &= ~(0xFFFFFFFFFFFFFFFFLL >> -(char)v16);
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
      v38 = *v4 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v26);
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
  __int64 (**v47)();
  unsigned int v48;
  __int16 v49;
  __int64 v50;
  __int128 v51;
  __int64 v52;
  int v53;
  __int64 v54;
  __int64 v55;
  char v56;
  int* v57;
  __int64 v58;
  int v59;
  __int16 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int v65;
  __int64 v66;
  __int64 v67;
  int v68;
  __int16 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  int v74;
  __int64 v75;
  __int64 v76;
  int v77;
  __int16 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  int v83;
  __int64 v84;
  __int64 v85;
  int v86;
  __int16 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  int v92;
  __int64 v93;
  __int64 v94;
  int v95;
  __int16 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  int v101;
  __int64 v102;
  __int64 v103;
  int v104;
  __int16 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  int v110;
  __int64 v111;
  __int64 v112;
  int v113;
  __int16 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  int v119;
  __int64 v120;
  __int64 v121;
  int v122;
  __int16 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  int v128;
  __int64 v129;
  __int64 v130;
  int v131;
  __int16 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  int v137;
  __int64 v138;
  __int64 v139;
  int v140;
  __int16 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  int v146;
  __int64 v147;
  __int64 v148;
  int v149;
  __int16 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  int v155;
  __int64 v156;
  __int64 v157;
  int v158;
  __int16 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  int v164;
  __int64 v165;
  __int64 v166;
  int v167;
  __int16 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  int v173;
  __int64 v174;
  __int64 v175;
  int v176;
  __int16 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  int v182;
  __int64 v183;
  __int64 v184;
  int v185;
  __int16 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  int v191;
  __int64 v192;
  __int64 v193;
  int v194;
  __int16 v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  int v200;
  __int64 v201;
  __int64 v202;
  int v203;
  __int16 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  int v209;
  __int64 v210;
  __int64 v211;
  int v212;
  __int16 v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  int v218;
  __int64 v219;
  __int64 v220;
  int v221;
  __int16 v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  __int64 v226;
  int v227;
  __int64 v228;
  __int64 v229;
  int v230;
  __int16 v231;
  __int64 v232;
  __int64 v233;
  __int64 v234;
  __int64 v235;
  int v236;
  __int64 v237;
  __int64 v238;
  int v239;
  __int16 v240;
  __int64 v241;
  __int64 v242;
  __int64 v243;
  __int64 v244;
  int v245;
  __int64 v246;
  __int64 v247;
  int v248;
  __int16 v249;
  __int64 v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  int v254;
  __int64 v255;
  __int64 v256;
  int v257;
  __int16 v258;
  __int64 v259;
  __int64 v260;
  __int64 v261;
  __int64 v262;
  int v263;
  __int64 v264;
  __int64 v265;
  int v266;
  __int16 v267;
  __int64 v268;
  __int64 v269;
  __int64 v270;
  __int64 v271;
  int v272;
  __int64 v273;
  __int64 v274;
  int v275;
  __int16 v276;
  __int64 v277;
  __int64 v278;
  __int64 v279;
  __int64 v280;
  int v281;
  __int64 v282;
  __int64 v283;
  int v284;
  __int16 v285;
  __int64 v286;
  __int64 v287;
  __int64 v288;
  __int64 v289;
  int v290;
  __int64 v291;
  __int64 v292;
  int v293;
  __int16 v294;
  __int64 v295;
  __int64 v296;
  __int64 v297;
  __int64 v298;
  int v299;
  __int64 v300;
  __int64 v301;
  int v302;
  __int16 v303;
  __int64 v304;
  __int64 v305;
  __int64 v306;
  __int64 v307;
  int v308;
  __int64 v309;
  __int64 v310;
  int v311;
  __int16 v312;
  __int64 v313;
  __int64 v314;
  __int64 v315;
  __int64 v316;
  int v317;
  __int64 v318;
  __int64 v319;
  int v320;
  __int16 v321;
  __int64 v322;
  __int64 v323;
  __int64 v324;
  __int64 v325;
  int v326;
  __int64 v327;
  __int64 v328;
  int v329;
  __int16 v330;
  __int64 v331;
  __int64 v332;
  __int64 v333;
  __int64 v334;
  int v335;
  __int64 v336;
  __int64 v337;
  int v338;
  __int16 v339;
  __int64 v340;
  __int64 v341;
  __int64 v342;
  __int64 v343;
  int v344;
  __int64 v345;
  __int64 v346;
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
  if (LANES128(v6).n128_f32[0] <= 0.0) {
    *(_BYTE*)a4 = 0;
    *(_BYTE*)(a4 + 80) = 0;
    {
      result;
      return;
    }
  }
  LANES128(v7).n128_u64[1] = LANES128(v7).n128_u64[0];
  v348[1] = 0;
  v49 = 0;
  v50 = 0;
  v51 = (__typeof__(v51)){0};
  v8 = result;
  v347[0] = collision_anonymous_CastFilter_vtable;
  v347[1] = a3;
  v10 = vrsqrteq_f32(v7);
  v349 = 7;
  v348[0] = a3;
  v57 = &v59;
  v58 = 32;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v83 = 0;
  v84 = 0;
  v85 = 0;
  v87 = 0;
  v88 = 0;
  v89 = 0;
  v92 = 0;
  v93 = 0;
  v94 = 0;
  v11 = vmulq_f32(v10, vrsqrtsq_f32(v10, vmulq_f32(v7, v10)));
  v96 = 0;
  v97 = 0;
  v98 = 0;
  v101 = 0;
  v102 = 0;
  v103 = 0;
  v48 = -1;
  v52 = 2139095039;
  v59 = -1;
  v63 = 0;
  v64 = 2139095039;
  v68 = -1;
  v72 = 0;
  v73 = 2139095039;
  v77 = -1;
  v81 = 0;
  v82 = 2139095039;
  v86 = -1;
  v90 = 0;
  v91 = 2139095039;
  v95 = -1;
  v99 = 0;
  v100 = 2139095039;
  v47 = GameData_1f903e8;
  v104 = -1;
  v105 = 0;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v109 = 2139095039;
  v110 = 0;
  v112 = 0;
  v111 = 0;
  v113 = -1;
  v114 = 0;
  v116 = 0;
  v115 = 0;
  v117 = 0;
  v118 = 2139095039;
  v119 = 0;
  v121 = 0;
  v120 = 0;
  v122 = -1;
  v123 = 0;
  v126 = 0;
  v125 = 0;
  v124 = 0;
  v127 = 2139095039;
  v128 = 0;
  v130 = 0;
  v129 = 0;
  v131 = -1;
  v132 = 0;
  v135 = 0;
  v134 = 0;
  v133 = 0;
  v136 = 2139095039;
  v137 = 0;
  v139 = 0;
  v138 = 0;
  v140 = -1;
  v141 = 0;
  v144 = 0;
  v143 = 0;
  v142 = 0;
  v145 = 2139095039;
  v146 = 0;
  v148 = 0;
  v147 = 0;
  v149 = -1;
  v150 = 0;
  v153 = 0;
  v152 = 0;
  v151 = 0;
  v154 = 2139095039;
  v155 = 0;
  v157 = 0;
  v156 = 0;
  v158 = -1;
  v159 = 0;
  v162 = 0;
  v161 = 0;
  v160 = 0;
  v163 = 2139095039;
  v164 = 0;
  v166 = 0;
  v165 = 0;
  v167 = -1;
  v168 = 0;
  v171 = 0;
  v170 = 0;
  v169 = 0;
  v172 = 2139095039;
  v173 = 0;
  v175 = 0;
  v174 = 0;
  v176 = -1;
  v177 = 0;
  v180 = 0;
  v179 = 0;
  v178 = 0;
  v181 = 2139095039;
  v182 = 0;
  v184 = 0;
  v183 = 0;
  v185 = -1;
  v186 = 0;
  v189 = 0;
  v188 = 0;
  v187 = 0;
  v190 = 2139095039;
  v191 = 0;
  v193 = 0;
  v192 = 0;
  v194 = -1;
  v195 = 0;
  v198 = 0;
  v197 = 0;
  v196 = 0;
  v199 = 2139095039;
  v200 = 0;
  v202 = 0;
  v201 = 0;
  v203 = -1;
  v204 = 0;
  v207 = 0;
  v206 = 0;
  v205 = 0;
  v208 = 2139095039;
  v209 = 0;
  v211 = 0;
  v210 = 0;
  v212 = -1;
  v213 = 0;
  v216 = 0;
  v215 = 0;
  v214 = 0;
  v217 = 2139095039;
  v218 = 0;
  v220 = 0;
  v219 = 0;
  v221 = -1;
  v222 = 0;
  v225 = 0;
  v224 = 0;
  v223 = 0;
  v226 = 2139095039;
  v227 = 0;
  v229 = 0;
  v228 = 0;
  v230 = -1;
  v231 = 0;
  v234 = 0;
  v233 = 0;
  v232 = 0;
  v235 = 2139095039;
  v236 = 0;
  v238 = 0;
  v237 = 0;
  v239 = -1;
  v240 = 0;
  v243 = 0;
  v242 = 0;
  v241 = 0;
  v244 = 2139095039;
  v245 = 0;
  v247 = 0;
  v246 = 0;
  v248 = -1;
  v249 = 0;
  v252 = 0;
  v251 = 0;
  v250 = 0;
  v253 = 2139095039;
  v254 = 0;
  v256 = 0;
  v255 = 0;
  v257 = -1;
  v258 = 0;
  v261 = 0;
  v260 = 0;
  v259 = 0;
  v262 = 2139095039;
  v263 = 0;
  v265 = 0;
  v264 = 0;
  v266 = -1;
  v267 = 0;
  v270 = 0;
  v269 = 0;
  v268 = 0;
  v271 = 2139095039;
  v272 = 0;
  v274 = 0;
  v273 = 0;
  v275 = -1;
  v276 = 0;
  v279 = 0;
  v278 = 0;
  v277 = 0;
  v280 = 2139095039;
  v281 = 0;
  v283 = 0;
  v282 = 0;
  v284 = -1;
  v285 = 0;
  v288 = 0;
  v287 = 0;
  v286 = 0;
  v289 = 2139095039;
  v290 = 0;
  v292 = 0;
  v291 = 0;
  v293 = -1;
  v294 = 0;
  v297 = 0;
  v296 = 0;
  v295 = 0;
  v298 = 2139095039;
  v299 = 0;
  v301 = 0;
  v300 = 0;
  v302 = -1;
  v303 = 0;
  v306 = 0;
  v305 = 0;
  v304 = 0;
  v307 = 2139095039;
  v308 = 0;
  v310 = 0;
  v309 = 0;
  v311 = -1;
  v312 = 0;
  v315 = 0;
  v314 = 0;
  v313 = 0;
  v316 = 2139095039;
  v317 = 0;
  v319 = 0;
  v318 = 0;
  v320 = -1;
  v321 = 0;
  v324 = 0;
  v323 = 0;
  v322 = 0;
  v325 = 2139095039;
  v326 = 0;
  v328 = 0;
  v327 = 0;
  v329 = -1;
  v330 = 0;
  v333 = 0;
  v332 = 0;
  v331 = 0;
  v334 = 2139095039;
  v335 = 0;
  v337 = 0;
  v336 = 0;
  v338 = -1;
  v339 = 0;
  v342 = 0;
  v341 = 0;
  v340 = 0;
  v343 = 2139095039;
  v344 = 0;
  v43 = vbicq_s8(
      vmulq_f32(v5, vmulq_f32(v11, vrsqrtsq_f32(v11, vmulq_f32(v7, v11)))),
      vceqzq_f32(v7));
  v346 = 0;
  v345 = 0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                                  memory_order_acquire);
  v13 = GameData_212c838;
  if ((explicit & 1) == 0) {
    v42 = __cxa_guard_acquire(GameData_212c840);
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
      GameRoutine_14a0820(GameData_212c838);
      GameRoutine_2b0(GameData_212c848[0], GameData_212c838, &GameData_1f50948);
      __cxa_guard_release(GameData_212c840);
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
  if (((*(__int64 (**)(__int64, _DWORD*, _BYTE*, __int64 (***)(), __int16*,
                       _QWORD*, _QWORD*, _QWORD, long double, int*))(
           *(_QWORD*)v16 + 72LL))(v16, v46, v45, &v47, &v351, v348, v347, 0,
                                  v44, &v350) &
       1) != 0 &&
      (v56 & 1) != 0) {
    v17 = *(_QWORD*)(v55 + 16);
    if (v17 != 0) {
      if ((**(unsigned int (***)(_QWORD))v17)(*(_QWORD*)(v55 + 16)) == 0) {
        v25 = *(_QWORD*)(v17 + 64);
        v26 = *(_QWORD**)(v17 + 8);
        v27 = *(_DWORD*)(v17 + 72);
        v28 = (*(__int64 (**)(__int64))(*(_QWORD*)v25 + 128LL))(v25);
        v29 = *(float*)&v52 / *(float*)&v44;
        v30 = *v8;
        v31 = vsubq_f32(*a2, *v8);
        v32 = v26[6];
        v33 = *(_DWORD*)(v28 + 4LL * v48) + v27;
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
        *(_QWORD*)&v20 = v50;
        LODWORD(v18) = v51;
        LODWORD(v19) = HIDWORD(v51);
        *((_QWORD*)&v20 + 1) = v18;
        *(_QWORD*)&v21 = *(_QWORD*)((char*)&v51 + 4);
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
        v40 = v55;
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
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 (**v42)();
  int v43;
  __int64 v44;
  __int64 v45;
  char v46;
  int* v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  int v52;
  __int64 v53;
  __int64 v54;
  int v55;
  __int64 v56;
  __int64 v57;
  int v58;
  __int64 v59;
  __int64 v60;
  int v61;
  __int64 v62;
  __int64 v63;
  int v64;
  __int64 v65;
  __int64 v66;
  int v67;
  __int64 v68;
  __int64 v69;
  int v70;
  __int64 v71;
  __int64 v72;
  int v73;
  __int64 v74;
  __int64 v75;
  int v76;
  __int64 v77;
  __int64 v78;
  int v79;
  __int64 v80;
  __int64 v81;
  int v82;
  __int64 v83;
  __int64 v84;
  int v85;
  __int64 v86;
  __int64 v87;
  int v88;
  __int64 v89;
  __int64 v90;
  int v91;
  __int64 v92;
  __int64 v93;
  int v94;
  __int64 v95;
  __int64 v96;
  int v97;
  __int64 v98;
  __int64 v99;
  int v100;
  __int64 v101;
  __int64 v102;
  int v103;
  __int64 v104;
  __int64 v105;
  int v106;
  __int64 v107;
  __int64 v108;
  int v109;
  __int64 v110;
  __int64 v111;
  int v112;
  __int64 v113;
  __int64 v114;
  int v115;
  __int64 v116;
  __int64 v117;
  int v118;
  __int64 v119;
  __int64 v120;
  int v121;
  __int64 v122;
  __int64 v123;
  int v124;
  __int64 v125;
  __int64 v126;
  int v127;
  __int64 v128;
  __int64 v129;
  int v130;
  __int64 v131;
  __int64 v132;
  int v133;
  __int64 v134;
  __int64 v135;
  int v136;
  __int64 v137;
  __int64 v138;
  int v139;
  __int64 v140;
  __int64 v141;
  int v142;
  __int64 v143;
  __int64 v144;
  _QWORD v145[2];
  __int16 v146;
  _QWORD v147[2];
  int v148;

  v145[0] = 0;
  v145[1] = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v147[0] = collision_anonymous_CastFilter_vtable;
  v147[1] = a2;
  v146 = 39;
  v50 = 0;
  v51 = 0;
  v53 = 0;
  v54 = 0;
  v56 = 0;
  v57 = 0;
  v59 = 0;
  v60 = 0;
  v62 = 0;
  v63 = 0;
  v65 = 0;
  v66 = 0;
  v68 = 0;
  v69 = 0;
  v71 = 0;
  v72 = 0;
  v47 = &v49;
  v48 = 32;
  v43 = -1;
  v49 = -1;
  v52 = -1;
  v55 = -1;
  v58 = -1;
  v61 = -1;
  v64 = -1;
  v67 = -1;
  v70 = -1;
  v42 = GameData_1f90470;
  v73 = -1;
  v74 = 0;
  v75 = 0;
  v76 = -1;
  v77 = 0;
  v78 = 0;
  v79 = -1;
  v80 = 0;
  v81 = 0;
  v82 = -1;
  v83 = 0;
  v84 = 0;
  v85 = -1;
  v86 = 0;
  v87 = 0;
  v88 = -1;
  v89 = 0;
  v90 = 0;
  v91 = -1;
  v92 = 0;
  v93 = 0;
  v94 = -1;
  v96 = 0;
  v95 = 0;
  v97 = -1;
  v99 = 0;
  v98 = 0;
  v100 = -1;
  v102 = 0;
  v101 = 0;
  v103 = -1;
  v105 = 0;
  v104 = 0;
  v106 = -1;
  v108 = 0;
  v107 = 0;
  v109 = -1;
  v111 = 0;
  v110 = 0;
  v112 = -1;
  v114 = 0;
  v113 = 0;
  v115 = -1;
  v117 = 0;
  v116 = 0;
  v118 = -1;
  v120 = 0;
  v119 = 0;
  v121 = -1;
  v123 = 0;
  v122 = 0;
  v124 = -1;
  v126 = 0;
  v125 = 0;
  v127 = -1;
  v129 = 0;
  v128 = 0;
  v130 = -1;
  v132 = 0;
  v131 = 0;
  v133 = -1;
  v135 = 0;
  v134 = 0;
  v136 = -1;
  v138 = 0;
  v137 = 0;
  v139 = -1;
  v141 = 0;
  v140 = 0;
  v142 = -1;
  v144 = 0;
  v143 = 0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                                  memory_order_acquire);
  v8 = GameData_212c838;
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_212c840) != 0) {
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
    GameRoutine_14a0820(v8);
    GameRoutine_2b0(GameData_212c848[0], v8, &GameData_1f50948);
    __cxa_guard_release(GameData_212c840);
  }
  v9 = *(_QWORD**)(*v8 + 32);
  (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*v9 + 936LL))(*v9, 0, 0);
  v10 = *a1;
  v11 = *v9;
  LODWORD(v40) = 0;
  *(float*)&v41 = a4;
  v31 = 0;
  v32 = 0x3F80000000000000LL;
  v33 = v10;
  LODWORD(v34) = DWORD2(v10);
  v148 = 1;
  if (((*(__int64 (**)(__int64, __int64*, __int64*, __int64 (***)(), _QWORD*,
                       _QWORD*, _QWORD, int*))(*(_QWORD*)v11 + 88LL))(
           v11, &v40, &v31, &v42, v145, v147, 0, &v148) &
       1) == 0) {
    goto LABEL_25;
  }
  GameRoutine_675000(&v40, &v42);
  v12 = v40;
  v13 = v41;
  if (v40 == v41) {
    if (v40 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v40);
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
  v38 = 0;
  v39 = 0;
  v15 = v40;
  v37 = 0;
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
      v31 = 0;
      v32 = v19;
      (*(void (**)(__int64* __return_ptr))(*(_QWORD*)v18 + 176LL))(&v33);
      if (v14 >= v39) {
        v14 = GameRoutine_675260(&v37, &v31);
        goto LABEL_16;
      }
      v20 = v32;
      *(_QWORD*)v14 = v31;
      *(_QWORD*)(v14 + 8) = v20;
      v21 = v33;
      *(_QWORD*)(v14 + 32) = v35;
      v22 = v36;
      *(_DWORD*)(v14 + 16) = v21;
      *(_DWORD*)(v14 + 40) = v22;
      *(_DWORD*)(v14 + 20) = HIDWORD(v33);
      *(_QWORD*)(v14 + 24) = v34;
    }
    else {
      v23 = *(_QWORD*)(v17 + 8);
      v24 = *(_QWORD*)(*(_QWORD*)v15 + 16LL);
      v33 = 0;
      v34 = 0x3F80000000000000LL;
      v35 = 0;
      v36 = 0;
      v31 = v23;
      v32 = v24;
      if (v14 >= v39) {
        v14 = GameRoutine_675260(&v37, &v31);
        v38 = v14;
        goto LABEL_6;
      }
      v25 = v31;
      v26 = v32;
      *(_QWORD*)(v14 + 24) = 0x3F80000000000000LL;
      *(_QWORD*)(v14 + 32) = 0;
      *(_DWORD*)(v14 + 40) = 0;
      *(_QWORD*)(v14 + 16) = 0;
      *(_QWORD*)v14 = v25;
      *(_QWORD*)(v14 + 8) = v26;
    }
    v14 += 48LL;
  LABEL_16:
    v38 = v14;
  LABEL_6:
    v15 += 8;
  } while (v15 != v13);
  v27 = v39;
  *(_QWORD*)a3 = v37;
  *(_QWORD*)(a3 + 8) = v14;
  *(_QWORD*)(a3 + 16) = v27;
  *(_BYTE*)(a3 + 24) = 1;
  if (v12 != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v28,
                                  v12);
  }
  {
    (*(__int64 (**)(_QWORD))(*(_QWORD*)*v9 + 944LL))(*v9);
    return;
  }
}

__attribute__((swiftcall)) void collision_672fa0(PSEUDO_X8 x8_, _OWORD* a1,
                                                 __int64 a2, float a4)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int8 explicit;
  __int64* v6;
  _QWORD* v7;
  __int128 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  _OWORD* v28;
  int v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 (**v42)();
  int v43;
  __int64 v44;
  __int64 v45;
  char v46;
  int* v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  int v52;
  __int64 v53;
  __int64 v54;
  int v55;
  __int64 v56;
  __int64 v57;
  int v58;
  __int64 v59;
  __int64 v60;
  int v61;
  __int64 v62;
  __int64 v63;
  int v64;
  __int64 v65;
  __int64 v66;
  int v67;
  __int64 v68;
  __int64 v69;
  int v70;
  __int64 v71;
  __int64 v72;
  int v73;
  __int64 v74;
  __int64 v75;
  int v76;
  __int64 v77;
  __int64 v78;
  int v79;
  __int64 v80;
  __int64 v81;
  int v82;
  __int64 v83;
  __int64 v84;
  int v85;
  __int64 v86;
  __int64 v87;
  int v88;
  __int64 v89;
  __int64 v90;
  int v91;
  __int64 v92;
  __int64 v93;
  int v94;
  __int64 v95;
  __int64 v96;
  int v97;
  __int64 v98;
  __int64 v99;
  int v100;
  __int64 v101;
  __int64 v102;
  int v103;
  __int64 v104;
  __int64 v105;
  int v106;
  __int64 v107;
  __int64 v108;
  int v109;
  __int64 v110;
  __int64 v111;
  int v112;
  __int64 v113;
  __int64 v114;
  int v115;
  __int64 v116;
  __int64 v117;
  int v118;
  __int64 v119;
  __int64 v120;
  int v121;
  __int64 v122;
  __int64 v123;
  int v124;
  __int64 v125;
  __int64 v126;
  int v127;
  __int64 v128;
  __int64 v129;
  int v130;
  __int64 v131;
  __int64 v132;
  int v133;
  __int64 v134;
  __int64 v135;
  int v136;
  __int64 v137;
  __int64 v138;
  int v139;
  __int64 v140;
  __int64 v141;
  int v142;
  __int64 v143;
  __int64 v144;
  _QWORD v145[2];
  __int16 v146;
  _QWORD v147[2];
  float v148;
  int v149;

  v145[0] = 0;
  v145[1] = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v147[0] = collision_anonymous_CastFilter_vtable;
  v147[1] = a2;
  v146 = 39;
  v50 = 0;
  v51 = 0;
  v53 = 0;
  v54 = 0;
  v56 = 0;
  v57 = 0;
  v59 = 0;
  v60 = 0;
  v62 = 0;
  v63 = 0;
  v65 = 0;
  v66 = 0;
  v68 = 0;
  v69 = 0;
  v71 = 0;
  v72 = 0;
  v74 = 0;
  v75 = 0;
  v77 = 0;
  v78 = 0;
  v47 = &v49;
  v48 = 32;
  v43 = -1;
  v49 = -1;
  v52 = -1;
  v55 = -1;
  v58 = -1;
  v61 = -1;
  v64 = -1;
  v67 = -1;
  v70 = -1;
  v42 = GameData_1f90470;
  v73 = -1;
  v76 = -1;
  v79 = -1;
  v80 = 0;
  v81 = 0;
  v82 = -1;
  v83 = 0;
  v84 = 0;
  v85 = -1;
  v86 = 0;
  v87 = 0;
  v88 = -1;
  v89 = 0;
  v90 = 0;
  v91 = -1;
  v92 = 0;
  v93 = 0;
  v94 = -1;
  v96 = 0;
  v95 = 0;
  v97 = -1;
  v99 = 0;
  v98 = 0;
  v100 = -1;
  v102 = 0;
  v101 = 0;
  v103 = -1;
  v105 = 0;
  v104 = 0;
  v106 = -1;
  v108 = 0;
  v107 = 0;
  v109 = -1;
  v111 = 0;
  v110 = 0;
  v112 = -1;
  v114 = 0;
  v113 = 0;
  v115 = -1;
  v117 = 0;
  v116 = 0;
  v118 = -1;
  v120 = 0;
  v119 = 0;
  v121 = -1;
  v123 = 0;
  v122 = 0;
  v124 = -1;
  v126 = 0;
  v125 = 0;
  v127 = -1;
  v129 = 0;
  v128 = 0;
  v130 = -1;
  v132 = 0;
  v131 = 0;
  v133 = -1;
  v135 = 0;
  v134 = 0;
  v136 = -1;
  v138 = 0;
  v137 = 0;
  v139 = -1;
  v141 = 0;
  v140 = 0;
  v142 = -1;
  v144 = 0;
  v143 = 0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                                  memory_order_acquire);
  v6 = GameData_212c838;
  if ((explicit & 1) == 0) {
    v28 = a1;
    v148 = a4;
    v29 = __cxa_guard_acquire(GameData_212c840);
    a4 = v148;
    v30 = v29;
    a1 = v28;
    if (v30 != 0) {
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
      GameRoutine_14a0820(v6);
      GameRoutine_2b0(GameData_212c848[0], v6, &GameData_1f50948);
      __cxa_guard_release(GameData_212c840);
      a4 = v148;
      a1 = v28;
    }
  }
  v7 = **(_QWORD***)(*v6 + 32);
  *(float*)&v41 = a4;
  v8 = *a1;
  v31 = 0;
  v32 = 0x3F80000000000000LL;
  LODWORD(v40) = 0;
  v33 = v8;
  LODWORD(v34) = DWORD2(v8);
  v149 = 1;
  result = (__int64)(*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD*, __int64*,
                                     __int64*, __int64 (***)(), _QWORD*,
                                     _QWORD*, _QWORD, int*))(*v7 + 88LL))(
      v7, v7, &v40, &v31, &v42, v145, v147, 0, &v149);
  if ((result & 1) == 0) {
    goto LABEL_25;
  }
  result = GameRoutine_675000(&v40, &v42);
  v10 = v40;
  v11 = v41;
  if (v40 == v41) {
    if (v40 != 0) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v40);
    }
  LABEL_25:
    *(_BYTE*)a3 = 0;
    *(_BYTE*)(a3 + 24) = 0;
    {
      result;
      return;
    }
  }
  v12 = 0;
  v38 = 0;
  v39 = 0;
  v13 = v40;
  v37 = 0;
  do {
    v14 = *(_QWORD*)(*(_QWORD*)v13 + 16LL);
    v15 = *(_QWORD*)(v14 + 16);
    if (v15 == 0) {
      goto LABEL_6;
    }
    result = (**(__int64 (***)(_QWORD))v15)(*(_QWORD*)(v14 + 16));
    if ((_DWORD)result != 0) {
      result = (**(__int64 (***)(__int64))v15)(v15);
      if ((_DWORD)result != 1) {
        goto LABEL_6;
      }
      v16 = *(_QWORD*)(v15 + 16);
      v17 = *(_QWORD*)(*(_QWORD*)v13 + 16LL);
      v31 = 0;
      v32 = v17;
      result = (__int64)(*(_QWORD * (**)(__int64* __return_ptr))(*(_QWORD*)v16 +
                                                                 176LL))(&v33);
      if (v12 >= v39) {
        result = GameRoutine_675260(&v37, &v31);
        v12 = result;
        goto LABEL_16;
      }
      v18 = v32;
      *(_QWORD*)v12 = v31;
      *(_QWORD*)(v12 + 8) = v18;
      v19 = v33;
      *(_QWORD*)(v12 + 32) = v35;
      v20 = v36;
      *(_DWORD*)(v12 + 16) = v19;
      *(_DWORD*)(v12 + 40) = v20;
      *(_DWORD*)(v12 + 20) = HIDWORD(v33);
      *(_QWORD*)(v12 + 24) = v34;
    }
    else {
      v21 = *(_QWORD*)(v15 + 8);
      v22 = *(_QWORD*)(*(_QWORD*)v13 + 16LL);
      v33 = 0;
      v34 = 0x3F80000000000000LL;
      v35 = 0;
      v36 = 0;
      v31 = v21;
      v32 = v22;
      if (v12 >= v39) {
        result = GameRoutine_675260(&v37, &v31);
        v12 = result;
        v38 = result;
        goto LABEL_6;
      }
      v23 = v31;
      v24 = v32;
      *(_QWORD*)(v12 + 24) = 0x3F80000000000000LL;
      *(_QWORD*)(v12 + 32) = 0;
      *(_DWORD*)(v12 + 40) = 0;
      *(_QWORD*)(v12 + 16) = 0;
      *(_QWORD*)v12 = v23;
      *(_QWORD*)(v12 + 8) = v24;
    }
    v12 += 48LL;
  LABEL_16:
    v38 = v12;
  LABEL_6:
    v13 += 8;
  } while (v13 != v11);
  v25 = v39;
  *(_QWORD*)a3 = v37;
  *(_QWORD*)(a3 + 8) = v12;
  *(_QWORD*)(a3 + 16) = v25;
  *(_BYTE*)(a3 + 24) = 1;
  if (v10 != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    {
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v10);
      return;
    }
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
