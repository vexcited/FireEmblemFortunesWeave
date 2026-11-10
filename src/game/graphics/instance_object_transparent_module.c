#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ObjectTransparentModuleBase_febe40(_QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_21c9758;
__int64 InstanceObjectTransparentModule_fb82a0_alt1(
    __int64 result, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
    __int64 a6) __asm__("InstanceObjectTransparentModule_fb82a0");
__int64 InstanceObjectTransparentModule_Unknown9(__int64 result);
__int64 InstanceObjectTransparentModule_Unknown10(__int64 result, float a2);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_fb8eb0(void);
__n128 InstanceObjectTransparentModule_fb8ac0(_QWORD* a1, unsigned __int64 a2);
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 InstanceObjectTransparentModule_fb82a0(__int64 result, __int64 a2);

__int64 InstanceObjectTransparentModule_fb82a0(__int64 result, __int64 a2)
{

#pragma clang fp contract(off)
  float v2;
  int v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  float v7;
  float v8;
  float v9;
  __int64 v10;
  float v11;
  float v12;
  __int64 v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  __int64 v21;
  float v22;
  float v23;
  float v24;
  float v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  float v29;
  __int64 v30;
  float v31;
  bool v32;
  float v33;
  float v34;
  bool v36;
  bool v37;
  __int64 v38;
  signed __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  int v43;
  __int64 v44;
  float v45;
  float v46;
  __int64 v47;
  __int64 v48;
  float* v49;
  __int64 v50;
  __int64 v51;
  int v52;
  __int64 v53;
  int v54;
  __int64 v55;
  float v57;
  float v58;
  bool v60;
  bool v61;
  __int64 v62;
  __int64 v63;
  int v64;
  __int64 v65;
  __int64 v66;
  int v67;

  v2 = *(float*)(result + 84);
  v3 = *(unsigned __int8*)(a2 + 4);
  if (v2 != *(float*)a2) {
    v2 = *(float*)a2;
    *(_DWORD*)(result + 84) = *(_DWORD*)a2;
    *(_BYTE*)(result + 89) = 1;
  }
  if (*(_BYTE*)(result + 88) == 1) {
    *(_WORD*)(result + 88) = 256;
    v4 = *(_QWORD*)(result + 56);
    if (*(_QWORD*)(result + 64) != v4) {
      v5 = 0;
      v6 = 0;
      v7 =
          (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(result + 8) + 496LL) + 16LL) *
                  0x1.0aef000000000p+4f) /
          0x1.f400000000000p+9f;
      v8 = fabsf(v7);
      do {
        if (*(_BYTE*)(result + 80) != 1 ||
            ((v10 = *(_QWORD*)(v4 + v5 + 20)) & 0x100000000LL) == 0) {
          *(_DWORD*)(v4 + v5 + 16) = 0;
          goto LABEL_14;
        }
        if (GameData_21c9758 != 0) {
          v17 = *(float*)(GameData_21c9758 + 308);
          if (v3 != 0) {
            goto LABEL_32;
          }
        }
        else {
          v17 = 0x0.0p+0f;
          if (v3 != 0) {
          LABEL_32:
            *(float*)(v4 + v5 + 16) = v17;
            goto LABEL_38;
          }
        }
        v19 = *(float*)(v4 + v5 + 16) +
              (float)((float)(*(float*)(*(_QWORD*)(*(_QWORD*)(result + 8) +
                                                   496LL) +
                                        16LL) *
                              0x1.0aef000000000p+4f) /
                      0x1.f400000000000p+9f);
        *(float*)(v4 + v5 + 16) = v19;
        if (v19 < v17) {
          goto LABEL_77;
        }
      LABEL_38:
        if (GameData_21c9758 != 0) {
          v20 = *(float*)(GameData_21c9758 + 312);
        }
        else {
          v20 = 0x0.0p+0f;
        }
        v26 = v4 + 8LL * (int)v10;
        if (*(float*)(v26 + v5) >= v20) {
          v20 = *(float*)(v26 + v5);
        }
        *(float*)(v26 + v5) = v20;
        if (*(_BYTE*)(v4 + v5 + 24) == 1) {
        LABEL_77:
          *(_BYTE*)(v4 + v5 + 24) = 0;
        }
      LABEL_14:
        v11 = *(float*)(v4 + v5);
        if ((v3 & 1) != 0) {
          if (v11 != 0x0.0p+0f ||
              *(float*)(v4 + v5 + 4) != 0x1.0000000000000p+0f) {
            *(_BYTE*)(result + 88) = 1;
            if (*(float*)(v4 + v5) <= 0x0.0p+0f) {
              v12 = 0x1.0000000000000p+0f;
            }
            else {
              v12 = v2;
            }
            *(float*)(v4 + v5 + 4) = v12;
          }
          v13 = v4 + v5;
          if (*(float*)(v13 + 8) != 0x0.0p+0f ||
              *(float*)(v13 + 12) != 0x1.0000000000000p+0f) {
            *(_BYTE*)(result + 88) = 1;
            if (*(float*)(v13 + 8) <= 0x0.0p+0f) {
              v9 = 0x1.0000000000000p+0f;
            }
            else {
              v9 = v2;
            }
            *(float*)(v13 + 12) = v9;
          }
          goto LABEL_10;
        }
        if (v11 != 0x0.0p+0f ||
            *(float*)(v4 + v5 + 4) != 0x1.0000000000000p+0f) {
          *(_BYTE*)(result + 88) = 1;
          v14 = *(float*)(v4 + v5);
          v15 = *(float*)(v4 + v5 + 4);
          if (v14 > 0x0.0p+0f) {
            v16 = fabsf(v7 / *(float*)(a2 + 16));
            if (v15 > v2) {
              v15 = v15 - v16;
              if (v15 >= v2) {
                goto LABEL_43;
              }
            LABEL_42:
              v15 = v2;
              goto LABEL_43;
            }
            if (v15 < v2) {
              v15 = v15 + v16;
              if (v15 > v2) {
                goto LABEL_42;
              }
            }
          LABEL_43:
            v14 = v14 - v8;
            if (v14 >= 0x0.0p+0f) {
            LABEL_51:
              *(float*)(v4 + v5) = v14;
              *(float*)(v4 + v5 + 4) = v15;
              goto LABEL_52;
            }
          LABEL_50:
            v14 = 0x0.0p+0f;
            goto LABEL_51;
          }
          v18 = fabsf(v7 / *(float*)(a2 + 8));
          if (v15 <= 0x1.0000000000000p+0f) {
            if (v15 < 0x1.0000000000000p+0f) {
              v15 = v15 + v18;
              if (v15 > 0x1.0000000000000p+0f) {
                goto LABEL_47;
              }
            }
          }
          else {
            v15 = v15 - v18;
            if (v15 >= 0x1.0000000000000p+0f) {
              goto LABEL_48;
            }
          LABEL_47:
            v15 = 0x1.0000000000000p+0f;
          }
        LABEL_48:
          if (v14 >= 0x0.0p+0f) {
            goto LABEL_51;
          }
          v14 = v8 + v14;
          if (v14 <= 0x0.0p+0f) {
            goto LABEL_51;
          }
          goto LABEL_50;
        }
      LABEL_52:
        v21 = v4 + v5;
        if (*(float*)(v21 + 8) == 0x0.0p+0f &&
            *(float*)(v21 + 12) == 0x1.0000000000000p+0f) {
          goto LABEL_10;
        }
        *(_BYTE*)(result + 88) = 1;
        v22 = *(float*)(v21 + 8);
        v23 = *(float*)(v21 + 12);
        if (v22 > 0x0.0p+0f) {
          v24 = fabsf(v7 / *(float*)(a2 + 20));
          if (v23 <= v2) {
            if (v23 >= v2 || (v23 = v23 + v24) <= v2) {
            LABEL_64:
              v22 = v22 - v8;
              if (v22 >= 0x0.0p+0f) {
                goto LABEL_72;
              }
              goto LABEL_71;
            }
          }
          else {
            v23 = v23 - v24;
            if (v23 >= v2) {
              goto LABEL_64;
            }
          }
          v23 = v2;
          goto LABEL_64;
        }
        v25 = fabsf(v7 / *(float*)(a2 + 12));
        if (v23 > 0x1.0000000000000p+0f) {
          v23 = v23 - v25;
          if (v23 >= 0x1.0000000000000p+0f) {
            goto LABEL_69;
          }
        LABEL_68:
          v23 = 0x1.0000000000000p+0f;
          goto LABEL_69;
        }
        if (v23 < 0x1.0000000000000p+0f) {
          v23 = v23 + v25;
          if (v23 > 0x1.0000000000000p+0f) {
            goto LABEL_68;
          }
        }
      LABEL_69:
        if (v22 < 0x0.0p+0f) {
          v22 = v8 + v22;
          if (v22 <= 0x0.0p+0f) {
            goto LABEL_72;
          }
        LABEL_71:
          v22 = 0x0.0p+0f;
        }
      LABEL_72:
        *(float*)(v21 + 8) = v22;
        *(float*)(v21 + 12) = v23;
      LABEL_10:
        v4 = *(_QWORD*)(result + 56);
        ++v6;
        v5 += 28;
      } while (0x6DB6DB6DB6DB6DB7LL * ((*(_QWORD*)(result + 64) - v4) >> 2) >
               v6);
    }
  }
  if (*(_BYTE*)(result + 89) == 1) {
    v27 = *(_QWORD*)(result + 56);
    v28 = *(_QWORD*)(result + 64);
    *(_BYTE*)(result + 89) = 0;
    if (v27 != v28) {
      v29 = *(float*)(result + 44);
      v30 = *(_QWORD*)(*(_QWORD*)(result + 24) + 184LL);
      v31 = (float)(0x1.0000000000000p+0f - *(float*)(result + 84)) *
            fminf(fmaxf(v29, 0x0.0p+0f), 0x1.0000000000000p+0f);
      v32 = *(float*)(v30 + 4) == v29 && *(float*)(v30 + 8) == v31;
      if (!v32) {
        v33 = *(float*)(v30 + 28);
        v34 = *(float*)(v30 + 32);
        v32 = *(float*)v30 == *(float*)(v30 + 24);
        *(float*)(v30 + 4) = v29;
        *(float*)(v30 + 8) = v31;
        v36 = v32 && v29 == v33 && v31 == v34;
        v37 = !v36 || *(float*)(v30 + 12) != *(float*)(v30 + 36) ||
              ((*(_DWORD*)(v30 + 16) ^ *(_DWORD*)(v30 + 40)) & 0x3FLL) != 0;
        *(_BYTE*)(v30 + 49) = v37;
      }
      if (*(_BYTE*)(result + 90) == 1) {
        v38 = *(_QWORD*)(*(_QWORD*)(result + 24) + 32LL);
        if (v38 != 0 && *(_BYTE*)(v38 + 142) == 1) {
          v39 = *(_QWORD*)(v38 + 376) - *(_QWORD*)(v38 + 368);
          if (v39 >= 1) {
            v40 = result;
            memset_alt1(*(_QWORD*)(v38 + 368), 255, v39);
            result = v40;
          }
          *(_BYTE*)(v38 + 142) = 0;
        }
        *(_BYTE*)(result + 90) = 0;
      }
      v41 = *(_QWORD*)(result + 56);
      if (*(_QWORD*)(result + 64) != v41) {
        v42 = 0;
        v43 = 1;
        do {
          v44 = v41 + 28 * v42;
          v45 = *(float*)(v44 + 12) * *(float*)(result + 44);
          v46 = (float)(0x1.0000000000000p+0f - *(float*)(v44 + 4)) *
                fminf(fmaxf(v45, 0x0.0p+0f), 0x1.0000000000000p+0f);
          if (v45 != 0x1.0000000000000p+0f || v46 != 0x0.0p+0f) {
            v47 = *(_QWORD*)(result + 24);
            *(_BYTE*)(result + 90) = 1;
            v48 = *(_QWORD*)(v47 + 184);
            if (v43 < 1) {
            LABEL_118:
              if (v43 >=
                  (int)(-1227133513 *
                        ((unsigned __int64)(*(_QWORD*)(v47 + 192) - v48) >>
                         3))) {
                v62 = *(_QWORD*)(v47 + 32);
                if (v62 != 0) {
                  v63 = *(_QWORD*)(v62 + 368);
                  v64 = *(_DWORD*)(v47 + 176);
                  if (*(_DWORD*)(v63 + 4LL * (int)v42) != v64) {
                    *(_DWORD*)(v63 + 4LL * (int)v42) = v64;
                    if ((v64 & 0x80000000) == 0) {
                      *(_BYTE*)(v62 + 142) = 1;
                    }
                  }
                }
              }
              else {
                v55 = v48 + 56LL * v43;
                if (*(float*)(v55 + 4) != v45 || *(float*)(v55 + 8) != v46) {
                  v57 = *(float*)(v55 + 28);
                  v58 = *(float*)(v55 + 32);
                  v32 = *(float*)v55 == *(float*)(v55 + 24);
                  *(float*)(v55 + 4) = v45;
                  *(float*)(v55 + 8) = v46;
                  v60 = v32 && v45 == v57 && v46 == v58;
                  v61 = !v60 || *(float*)(v55 + 12) != *(float*)(v55 + 36) ||
                        ((*(_DWORD*)(v55 + 16) ^ *(_DWORD*)(v55 + 40)) &
                         0x3FLL) != 0;
                  *(_BYTE*)(v55 + 49) = v61;
                  v47 = *(_QWORD*)(result + 24);
                }
                v65 = *(_QWORD*)(v47 + 32);
                if (v65 != 0) {
                  v66 = *(_QWORD*)(v65 + 368);
                  v67 = *(_DWORD*)(v47 + 176) + v43;
                  if (*(_DWORD*)(v66 + 4LL * (int)v42) != v67) {
                    *(_DWORD*)(v66 + 4LL * (int)v42) = v67;
                    if ((v67 & 0x80000000) == 0) {
                      *(_BYTE*)(v65 + 142) = 1;
                    }
                  }
                }
                ++v43;
              }
            }
            else {
              v49 = (float*)(v48 + 8);
              v50 = 0;
              while (*v49 != v46 || *(v49 - 1) != v45) {
                --v50;
                v49 += 14;
                if ((unsigned int)v43 + v50 == 0) {
                  goto LABEL_118;
                }
              }
              v51 = *(_QWORD*)(v47 + 32);
              if (v51 != 0) {
                v52 = *(_DWORD*)(v47 + 176);
                v53 = *(_QWORD*)(v51 + 368);
                if (v52 - *(_DWORD*)(v53 + 4LL * (int)v42) != (_DWORD)v50) {
                  v54 = v52 - v50;
                  *(_DWORD*)(v53 + 4LL * (int)v42) = v54;
                  if ((v54 & 0x80000000) == 0) {
                    *(_BYTE*)(v51 + 142) = 1;
                  }
                }
              }
            }
          }
          v41 = *(_QWORD*)(result + 56);
          ++v42;
        } while (0x6DB6DB6DB6DB6DB7LL * ((*(_QWORD*)(result + 64) - v41) >> 2) >
                 v42);
      }
    }
  }
  return result;
}

__int64 InstanceObjectTransparentModule_Unknown9(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  *(_DWORD*)(result + 44) = 1065353216;
  *(_WORD*)(result + 88) = 257;
  v1 = *(_QWORD*)(result + 56);
  if (*(_QWORD*)(result + 64) != v1) {
    v2 = 0;
    v3 = 0;
    do {
      v4 = (_QWORD*)(v1 + v2);
      ++v3;
      v2 += 28;
      *v4 = 0x3F80000000000000LL;
      v4[1] = 0x3F80000000000000LL;
      v1 = *(_QWORD*)(result + 56);
    } while (0x6DB6DB6DB6DB6DB7LL * ((*(_QWORD*)(result + 64) - v1) >> 2) > v3);
  }
  if (GameData_21c9758 != 0) {
    v5 = *(_QWORD*)(GameData_21c9758 + 240);
    v6 = *(int*)(result + 40);
    if (0xAAAAAAAAAAAAAAABLL *
            ((*(_QWORD*)(GameData_21c9758 + 248) - v5) >> 3) >
        v6) {
      v7 = (__int64*)(v5 + 24LL * (int)v6);
      v9 = *v7;
      v8 = v7[1];
      if (v9 != v8) {
        while (*(_QWORD*)(v9 + 16) != result) {
          v9 += 48;
          if (v9 == v8) {
            return result;
          }
        }
      }
      if (v9 != v8) {
        if (*(_QWORD*)(v9 + 8) != 0) {
          v10 = *(_QWORD*)(v9 + 8);
        }
        else {
          v10 = *(_QWORD*)(v9 + 16);
        }
        result = ObjectTransparentModuleBase_febe40(v10);
        *(_BYTE*)v9 = 1;
      }
    }
  }
  return result;
}

__int64 InstanceObjectTransparentModule_Unknown10(__int64 result, float a2)
{
  if (*(float*)(result + 44) != a2) {
    *(float*)(result + 44) = a2;
    *(_BYTE*)(result + 89) = 1;
  }
  return result;
}

__n128 InstanceObjectTransparentModule_fb8ac0(_QWORD* a1, unsigned __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  bool v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __n128 result;
  __int64 v26;

  v2 = a1[1];
  v3 = a1[2];
  if (0x6DB6DB6DB6DB6DB7LL * ((v3 - v2) >> 2) >= a2) {
    if (a2 != 0) {
      v12 = v2 + 28 * a2;
      v13 = 28 * a2 - 28;
      if ((~(v13 / 0x1C) & 7) != 0) {
        v14 = -(__int64)(((unsigned __int8)(v13 / 0x1C) + 1) & 7);
        do {
          *(_QWORD*)v2 = 0;
          *(_QWORD*)(v2 + 8) = 0;
          *(_DWORD*)(v2 + 24) = 0;
          v15 = __CFADD__(v14++, 1);
          *(_QWORD*)(v2 + 16) = 0;
          *(_DWORD*)(v2 + 4) = 1065353216;
          *(_DWORD*)(v2 + 12) = 1065353216;
          v2 += 28;
        } while (!v15);
      }
      if (v13 >= 0xC4) {
        do {
          *(_QWORD*)v2 = 0;
          *(_QWORD*)(v2 + 8) = 0;
          *(_DWORD*)(v2 + 24) = 0;
          *(_QWORD*)(v2 + 16) = 0;
          *(_DWORD*)(v2 + 4) = 1065353216;
          *(_DWORD*)(v2 + 12) = 1065353216;
          *(_QWORD*)(v2 + 28) = 0;
          *(_QWORD*)(v2 + 36) = 0;
          *(_QWORD*)(v2 + 44) = 0;
          *(_DWORD*)(v2 + 52) = 0;
          *(_DWORD*)(v2 + 32) = 1065353216;
          *(_DWORD*)(v2 + 40) = 1065353216;
          *(_QWORD*)(v2 + 56) = 0;
          *(_QWORD*)(v2 + 64) = 0;
          *(_QWORD*)(v2 + 72) = 0;
          *(_DWORD*)(v2 + 80) = 0;
          *(_DWORD*)(v2 + 60) = 1065353216;
          *(_DWORD*)(v2 + 68) = 1065353216;
          *(_DWORD*)(v2 + 108) = 0;
          *(_QWORD*)(v2 + 100) = 0;
          *(_QWORD*)(v2 + 92) = 0;
          *(_QWORD*)(v2 + 84) = 0;
          *(_DWORD*)(v2 + 88) = 1065353216;
          *(_DWORD*)(v2 + 96) = 1065353216;
          *(_DWORD*)(v2 + 136) = 0;
          *(_QWORD*)(v2 + 120) = 0;
          *(_QWORD*)(v2 + 128) = 0;
          *(_QWORD*)(v2 + 112) = 0;
          *(_DWORD*)(v2 + 116) = 1065353216;
          *(_DWORD*)(v2 + 124) = 1065353216;
          *(_DWORD*)(v2 + 164) = 0;
          *(_QWORD*)(v2 + 156) = 0;
          *(_QWORD*)(v2 + 148) = 0;
          *(_QWORD*)(v2 + 140) = 0;
          *(_DWORD*)(v2 + 144) = 1065353216;
          *(_DWORD*)(v2 + 152) = 1065353216;
          *(_DWORD*)(v2 + 192) = 0;
          *(_QWORD*)(v2 + 176) = 0;
          *(_QWORD*)(v2 + 184) = 0;
          *(_QWORD*)(v2 + 168) = 0;
          *(_DWORD*)(v2 + 172) = 1065353216;
          *(_DWORD*)(v2 + 180) = 1065353216;
          *(_DWORD*)(v2 + 220) = 0;
          *(_QWORD*)(v2 + 212) = 0;
          *(_QWORD*)(v2 + 204) = 0;
          *(_QWORD*)(v2 + 196) = 0;
          *(_DWORD*)(v2 + 200) = 1065353216;
          *(_DWORD*)(v2 + 208) = 1065353216;
          v2 += 224;
        } while (v2 != v12);
      }
      v2 = v12;
    }
    a1[1] = v2;
  }
  else {
    v5 = v2 - *a1;
    v6 = a2 + 0x6DB6DB6DB6DB6DB7LL * (v5 >> 2);
    if (v6 > 0x924924924924924LL) {
      GameRoutine_fb8eb0();
    }
    v7 = fw_memory_g_heap_manager_ptr;
    v8 = 0x6DB6DB6DB6DB6DB7LL * ((v3 - *a1) >> 2);
    if (2 * v8 > v6) {
      v6 = 2 * v8;
    }
    if (v8 >= 0x492492492492492LL) {
      v9 = 0x924924924924924LL;
    }
    else {
      v9 = v6;
    }
    if (v9 != 0) {
      if (v9 > 0x924924924924924LL) {
        GameRoutine_60a210(a1);
      }
      v10 = a2;
      v11 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 28 * v9, 16, 0);
      a2 = v10;
    }
    else {
      v11 = 0;
    }
    v16 = v11 + v5;
    v17 = 28 * a2 - 28;
    v18 = v11 + v5 + 28 * a2;
    if ((~(v17 / 0x1C) & 7) != 0) {
      v20 = -(__int64)(((unsigned __int8)(v17 / 0x1C) + 1) & 7);
      v19 = v11 + v5;
      do {
        *(_QWORD*)v19 = 0;
        *(_QWORD*)(v19 + 8) = 0;
        *(_DWORD*)(v19 + 24) = 0;
        v15 = __CFADD__(v20++, 1);
        *(_QWORD*)(v19 + 16) = 0;
        *(_DWORD*)(v19 + 4) = 1065353216;
        *(_DWORD*)(v19 + 12) = 1065353216;
        v19 += 28;
      } while (!v15);
    }
    else {
      v19 = v11 + v5;
    }
    if (v17 >= 0xC4) {
      do {
        *(_QWORD*)v19 = 0;
        *(_QWORD*)(v19 + 8) = 0;
        *(_DWORD*)(v19 + 24) = 0;
        *(_QWORD*)(v19 + 16) = 0;
        *(_DWORD*)(v19 + 4) = 1065353216;
        *(_DWORD*)(v19 + 12) = 1065353216;
        *(_QWORD*)(v19 + 28) = 0;
        *(_QWORD*)(v19 + 36) = 0;
        *(_QWORD*)(v19 + 44) = 0;
        *(_DWORD*)(v19 + 52) = 0;
        *(_DWORD*)(v19 + 32) = 1065353216;
        *(_DWORD*)(v19 + 40) = 1065353216;
        *(_QWORD*)(v19 + 56) = 0;
        *(_QWORD*)(v19 + 64) = 0;
        *(_QWORD*)(v19 + 72) = 0;
        *(_DWORD*)(v19 + 80) = 0;
        *(_DWORD*)(v19 + 60) = 1065353216;
        *(_DWORD*)(v19 + 68) = 1065353216;
        *(_DWORD*)(v19 + 108) = 0;
        *(_QWORD*)(v19 + 100) = 0;
        *(_QWORD*)(v19 + 92) = 0;
        *(_QWORD*)(v19 + 84) = 0;
        *(_DWORD*)(v19 + 88) = 1065353216;
        *(_DWORD*)(v19 + 96) = 1065353216;
        *(_DWORD*)(v19 + 136) = 0;
        *(_QWORD*)(v19 + 120) = 0;
        *(_QWORD*)(v19 + 128) = 0;
        *(_QWORD*)(v19 + 112) = 0;
        *(_DWORD*)(v19 + 116) = 1065353216;
        *(_DWORD*)(v19 + 124) = 1065353216;
        *(_DWORD*)(v19 + 164) = 0;
        *(_QWORD*)(v19 + 156) = 0;
        *(_QWORD*)(v19 + 148) = 0;
        *(_QWORD*)(v19 + 140) = 0;
        *(_DWORD*)(v19 + 144) = 1065353216;
        *(_DWORD*)(v19 + 152) = 1065353216;
        *(_DWORD*)(v19 + 192) = 0;
        *(_QWORD*)(v19 + 176) = 0;
        *(_QWORD*)(v19 + 184) = 0;
        *(_QWORD*)(v19 + 168) = 0;
        *(_DWORD*)(v19 + 172) = 1065353216;
        *(_DWORD*)(v19 + 180) = 1065353216;
        *(_DWORD*)(v19 + 220) = 0;
        *(_QWORD*)(v19 + 212) = 0;
        *(_QWORD*)(v19 + 204) = 0;
        *(_QWORD*)(v19 + 196) = 0;
        *(_DWORD*)(v19 + 200) = 1065353216;
        *(_DWORD*)(v19 + 208) = 1065353216;
        v19 += 224;
      } while (v19 != v18);
    }
    v21 = v11 + 28 * v9;
    v22 = *a1;
    v23 = a1[1] - *a1;
    v24 = v16 - v23;
    memcpy(v16 - v23, *a1, v23);
    *a1 = v24;
    a1[1] = v18;
    a1[2] = v21;
    if (v22 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v26 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v26);
    }
  }
  return result;
}

#pragma GCC visibility pop
