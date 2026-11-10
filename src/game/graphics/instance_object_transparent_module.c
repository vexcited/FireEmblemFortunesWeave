#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ObjectTransparentModuleBase_febe40(_QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_21c9758;
__int64 InstanceObjectTransparentModule_fb82a0(__int64 result, __int64 a2,
                                               __int64 a3, __int64 a4,
                                               __int64 a5, __int64 a6);
__int64 InstanceObjectTransparentModule_Unknown9(__int64 result);
__int64 InstanceObjectTransparentModule_Unknown10(__int64 result, float a2);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_fb8eb0(void);
__n128 InstanceObjectTransparentModule_fb8ac0(_QWORD* a1, unsigned __int64 a2);

__int64 InstanceObjectTransparentModule_fb82a0(__int64 result, __int64 a2,
                                               __int64 a3, __int64 a4,
                                               __int64 a5, __int64 a6)
{
  float v6;
  int v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  float v11;
  float v12;
  float v13;
  __int64 v14;
  float v15;
  float v16;
  __int64 v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  __int64 v25;
  float v26;
  float v27;
  float v28;
  float v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  float v33;
  __int64 v34;
  float v35;
  bool v36;
  float v37;
  float v38;
  bool v40;
  bool v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  int v47;
  __int64 v48;
  float v49;
  float v50;
  __int64 v51;
  __int64 v52;
  float* v53;
  __int64 v54;
  __int64 v55;
  int v56;
  __int64 v57;
  int v58;
  __int64 v59;
  float v61;
  float v62;
  bool v64;
  bool v65;
  __int64 v66;
  __int64 v67;
  int v68;
  __int64 v69;
  __int64 v70;
  int v71;

  v6 = *(float*)(result + 84);
  v7 = *(unsigned __int8*)(a2 + 4);
  if (v6 != *(float*)a2) {
    v6 = *(float*)a2;
    *(_DWORD*)(result + 84) = *(_DWORD*)a2;
    *(_BYTE*)(result + 89) = 1;
  }
  if (*(_BYTE*)(result + 88) == 1) {
    *(_WORD*)(result + 88) = 256;
    v8 = *(_QWORD*)(result + 56);
    if (*(_QWORD*)(result + 64) != v8) {
      v9 = 0;
      v10 = 0;
      v11 =
          (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(result + 8) + 496LL) + 16LL) *
                  16.683f) /
          1000.0f;
      v12 = fabsf(v11);
      do {
        if (*(_BYTE*)(result + 80) != 1 ||
            ((v14 = *(_QWORD*)(v8 + v9 + 20)) & 0x100000000LL) == 0) {
          *(_DWORD*)(v8 + v9 + 16) = 0;
          goto LABEL_14;
        }
        if (GameData_21c9758 != 0) {
          v21 = *(float*)(GameData_21c9758 + 308);
          if (v7 != 0) {
            goto LABEL_32;
          }
        }
        else {
          v21 = 0.0f;
          if (v7 != 0) {
          LABEL_32:
            *(float*)(v8 + v9 + 16) = v21;
            goto LABEL_38;
          }
        }
        v23 = *(float*)(v8 + v9 + 16) +
              (float)((float)(*(float*)(*(_QWORD*)(*(_QWORD*)(result + 8) +
                                                   496LL) +
                                        16LL) *
                              16.683f) /
                      1000.0f);
        *(float*)(v8 + v9 + 16) = v23;
        if (v23 < v21) {
          goto LABEL_77;
        }
      LABEL_38:
        if (GameData_21c9758 != 0) {
          v24 = *(float*)(GameData_21c9758 + 312);
        }
        else {
          v24 = 0.0f;
        }
        v30 = v8 + 8LL * (int)v14;
        if (*(float*)(v30 + v9) >= v24) {
          v24 = *(float*)(v30 + v9);
        }
        *(float*)(v30 + v9) = v24;
        if (*(_BYTE*)(v8 + v9 + 24) == 1) {
        LABEL_77:
          *(_BYTE*)(v8 + v9 + 24) = 0;
        }
      LABEL_14:
        v15 = *(float*)(v8 + v9);
        if ((v7 & 1) != 0) {
          if (v15 != 0.0f || *(float*)(v8 + v9 + 4) != 1.0f) {
            *(_BYTE*)(result + 88) = 1;
            if (*(float*)(v8 + v9) <= 0.0f) {
              v16 = 1.0f;
            }
            else {
              v16 = v6;
            }
            *(float*)(v8 + v9 + 4) = v16;
          }
          v17 = v8 + v9;
          if (*(float*)(v17 + 8) != 0.0f || *(float*)(v17 + 12) != 1.0f) {
            *(_BYTE*)(result + 88) = 1;
            if (*(float*)(v17 + 8) <= 0.0f) {
              v13 = 1.0f;
            }
            else {
              v13 = v6;
            }
            *(float*)(v17 + 12) = v13;
          }
          goto LABEL_10;
        }
        if (v15 != 0.0f || *(float*)(v8 + v9 + 4) != 1.0f) {
          *(_BYTE*)(result + 88) = 1;
          v18 = *(float*)(v8 + v9);
          v19 = *(float*)(v8 + v9 + 4);
          if (v18 > 0.0f) {
            v20 = fabsf(v11 / *(float*)(a2 + 16));
            if (v19 > v6) {
              v19 = v19 - v20;
              if (v19 >= v6) {
                goto LABEL_43;
              }
            LABEL_42:
              v19 = v6;
              goto LABEL_43;
            }
            if (v19 < v6) {
              v19 = v19 + v20;
              if (v19 > v6) {
                goto LABEL_42;
              }
            }
          LABEL_43:
            v18 = v18 - v12;
            if (v18 >= 0.0f) {
            LABEL_51:
              *(float*)(v8 + v9) = v18;
              *(float*)(v8 + v9 + 4) = v19;
              goto LABEL_52;
            }
          LABEL_50:
            v18 = 0.0f;
            goto LABEL_51;
          }
          v22 = fabsf(v11 / *(float*)(a2 + 8));
          if (v19 <= 1.0f) {
            if (v19 < 1.0f) {
              v19 = v19 + v22;
              if (v19 > 1.0f) {
                goto LABEL_47;
              }
            }
          }
          else {
            v19 = v19 - v22;
            if (v19 >= 1.0f) {
              goto LABEL_48;
            }
          LABEL_47:
            v19 = 1.0f;
          }
        LABEL_48:
          if (v18 >= 0.0f) {
            goto LABEL_51;
          }
          v18 = v12 + v18;
          if (v18 <= 0.0f) {
            goto LABEL_51;
          }
          goto LABEL_50;
        }
      LABEL_52:
        v25 = v8 + v9;
        if (*(float*)(v25 + 8) == 0.0f && *(float*)(v25 + 12) == 1.0f) {
          goto LABEL_10;
        }
        *(_BYTE*)(result + 88) = 1;
        v26 = *(float*)(v25 + 8);
        v27 = *(float*)(v25 + 12);
        if (v26 > 0.0f) {
          v28 = fabsf(v11 / *(float*)(a2 + 20));
          if (v27 <= v6) {
            if (v27 >= v6 || (v27 = v27 + v28) <= v6) {
            LABEL_64:
              v26 = v26 - v12;
              if (v26 >= 0.0f) {
                goto LABEL_72;
              }
              goto LABEL_71;
            }
          }
          else {
            v27 = v27 - v28;
            if (v27 >= v6) {
              goto LABEL_64;
            }
          }
          v27 = v6;
          goto LABEL_64;
        }
        v29 = fabsf(v11 / *(float*)(a2 + 12));
        if (v27 > 1.0f) {
          v27 = v27 - v29;
          if (v27 >= 1.0f) {
            goto LABEL_69;
          }
        LABEL_68:
          v27 = 1.0f;
          goto LABEL_69;
        }
        if (v27 < 1.0f) {
          v27 = v27 + v29;
          if (v27 > 1.0f) {
            goto LABEL_68;
          }
        }
      LABEL_69:
        if (v26 < 0.0f) {
          v26 = v12 + v26;
          if (v26 <= 0.0f) {
            goto LABEL_72;
          }
        LABEL_71:
          v26 = 0.0f;
        }
      LABEL_72:
        *(float*)(v25 + 8) = v26;
        *(float*)(v25 + 12) = v27;
      LABEL_10:
        v8 = *(_QWORD*)(result + 56);
        ++v10;
        v9 += 28;
      } while (0x6DB6DB6DB6DB6DB7LL * ((*(_QWORD*)(result + 64) - v8) >> 2) >
               v10);
    }
  }
  if (*(_BYTE*)(result + 89) == 1) {
    v31 = *(_QWORD*)(result + 56);
    v32 = *(_QWORD*)(result + 64);
    *(_BYTE*)(result + 89) = 0;
    if (v31 != v32) {
      v33 = *(float*)(result + 44);
      v34 = *(_QWORD*)(*(_QWORD*)(result + 24) + 184LL);
      v35 = (float)(1.0f - *(float*)(result + 84)) *
            fminf(fmaxf(v33, 0.0f), 1.0f);
      v36 = *(float*)(v34 + 4) == v33 && *(float*)(v34 + 8) == v35;
      if (!v36) {
        v37 = *(float*)(v34 + 28);
        v38 = *(float*)(v34 + 32);
        v36 = *(float*)v34 == *(float*)(v34 + 24);
        *(float*)(v34 + 4) = v33;
        *(float*)(v34 + 8) = v35;
        v40 = v36 && v33 == v37 && v35 == v38;
        v41 = !v40 || *(float*)(v34 + 12) != *(float*)(v34 + 36) ||
              ((*(_DWORD*)(v34 + 16) ^ *(_DWORD*)(v34 + 40)) & 0x3FLL) != 0;
        *(_BYTE*)(v34 + 49) = v41;
      }
      if (*(_BYTE*)(result + 90) == 1) {
        v42 = *(_QWORD*)(*(_QWORD*)(result + 24) + 32LL);
        if (v42 != 0 && *(_BYTE*)(v42 + 142) == 1) {
          v43 = *(_QWORD*)(v42 + 376) - *(_QWORD*)(v42 + 368);
          if (v43 >= 1) {
            v44 = result;
            memset(*(_QWORD*)(v42 + 368), 255, v43, a4, a5, a6);
            result = v44;
          }
          *(_BYTE*)(v42 + 142) = 0;
        }
        *(_BYTE*)(result + 90) = 0;
      }
      v45 = *(_QWORD*)(result + 56);
      if (*(_QWORD*)(result + 64) != v45) {
        v46 = 0;
        v47 = 1;
        do {
          v48 = v45 + 28 * v46;
          v49 = *(float*)(v48 + 12) * *(float*)(result + 44);
          v50 = (float)(1.0f - *(float*)(v48 + 4)) *
                fminf(fmaxf(v49, 0.0f), 1.0f);
          if (v49 != 1.0f || v50 != 0.0f) {
            v51 = *(_QWORD*)(result + 24);
            *(_BYTE*)(result + 90) = 1;
            v52 = *(_QWORD*)(v51 + 184);
            if (v47 < 1) {
            LABEL_118:
              if (v47 >=
                  (int)(-1227133513 *
                        ((unsigned __int64)(*(_QWORD*)(v51 + 192) - v52) >>
                         3))) {
                v66 = *(_QWORD*)(v51 + 32);
                if (v66 != 0) {
                  v67 = *(_QWORD*)(v66 + 368);
                  v68 = *(_DWORD*)(v51 + 176);
                  if (*(_DWORD*)(v67 + 4LL * (int)v46) != v68) {
                    *(_DWORD*)(v67 + 4LL * (int)v46) = v68;
                    if ((v68 & 0x80000000) == 0) {
                      *(_BYTE*)(v66 + 142) = 1;
                    }
                  }
                }
              }
              else {
                v59 = v52 + 56LL * v47;
                if (*(float*)(v59 + 4) != v49 || *(float*)(v59 + 8) != v50) {
                  v61 = *(float*)(v59 + 28);
                  v62 = *(float*)(v59 + 32);
                  v36 = *(float*)v59 == *(float*)(v59 + 24);
                  *(float*)(v59 + 4) = v49;
                  *(float*)(v59 + 8) = v50;
                  v64 = v36 && v49 == v61 && v50 == v62;
                  v65 = !v64 || *(float*)(v59 + 12) != *(float*)(v59 + 36) ||
                        ((*(_DWORD*)(v59 + 16) ^ *(_DWORD*)(v59 + 40)) &
                         0x3FLL) != 0;
                  *(_BYTE*)(v59 + 49) = v65;
                  v51 = *(_QWORD*)(result + 24);
                }
                v69 = *(_QWORD*)(v51 + 32);
                if (v69 != 0) {
                  v70 = *(_QWORD*)(v69 + 368);
                  v71 = *(_DWORD*)(v51 + 176) + v47;
                  if (*(_DWORD*)(v70 + 4LL * (int)v46) != v71) {
                    *(_DWORD*)(v70 + 4LL * (int)v46) = v71;
                    if ((v71 & 0x80000000) == 0) {
                      *(_BYTE*)(v69 + 142) = 1;
                    }
                  }
                }
                ++v47;
              }
            }
            else {
              v53 = (float*)(v52 + 8);
              v54 = 0;
              while (*v53 != v50 || *(v53 - 1) != v49) {
                --v54;
                v53 += 14;
                if ((unsigned int)v47 + v54 == 0) {
                  goto LABEL_118;
                }
              }
              v55 = *(_QWORD*)(v51 + 32);
              if (v55 != 0) {
                v56 = *(_DWORD*)(v51 + 176);
                v57 = *(_QWORD*)(v55 + 368);
                if (v56 - *(_DWORD*)(v57 + 4LL * (int)v46) != (_DWORD)v54) {
                  v58 = v56 - v54;
                  *(_DWORD*)(v57 + 4LL * (int)v46) = v58;
                  if ((v58 & 0x80000000) == 0) {
                    *(_BYTE*)(v55 + 142) = 1;
                  }
                }
              }
            }
          }
          v45 = *(_QWORD*)(result + 56);
          ++v46;
        } while (0x6DB6DB6DB6DB6DB7LL * ((*(_QWORD*)(result + 64) - v45) >> 2) >
                 v46);
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
