#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d9e4e0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* ui_control_18883e0(float* a1, unsigned __int8* a2, char* a3);
__int64* ui_control_1888dc0(__int64 a1, __int64 a2);

_QWORD* ui_control_18883e0(float* a1, unsigned __int8* a2, char* a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  bool v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  _QWORD* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  float v30;
  float v31;
  float v32;
  _BOOL8 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 primeEm;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  unsigned __int64 v43;

  v4 = *a2;
  v7 = (v4 & 1) == 0;
  v8 = v4 >> 1;
  if (v7) {
    v9 = a2 + 1;
  }
  else {
    v9 = *((unsigned __int8**)a2 + 2);
  }
  if (v7) {
    v10 = v8;
  }
  else {
    v10 = *((_QWORD*)a2 + 1);
  }
  v11 = std___1___hash_memory(v9, v10);
  v12 = *((_QWORD*)a1 + 1);
  v13 = v11;
  if (v12 != 0) {
    v14 = v12 - 1;
    if ((v12 & (v12 - 1)) != 0) {
      v3 = v11;
      if (v11 >= v12) {
        v3 = v11 % v12;
      }
    }
    else {
      v3 = v14 & v11;
    }
    v15 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
    if (v15 != nullptr) {
      v16 = (_QWORD*)*v15;
      if (*v15 != 0) {
        if ((v12 & v14) == 0) {
          while (1) {
            v21 = v16[1];
            if (v21 == v13) {
              v22 = *((unsigned __int8*)v16 + 16);
              v23 = v16[3];
              if ((v22 & 1) == 0) {
                v23 = v22 >> 1;
              }
              if (v23 == v10) {
                v24 = (v22 & 1) != 0 ? (_QWORD*)v16[4]
                                     : (_QWORD*)((char*)v16 + 17);
                if ((unsigned int)memcmp(v24, v9, v10) == 0) {
                  return v16;
                }
              }
            }
            else if ((v21 & v14) != v3) {
              goto LABEL_41;
            }
            v16 = (_QWORD*)*v16;
            if (v16 == nullptr) {
              goto LABEL_41;
            }
          }
        }
        do {
          v17 = v16[1];
          if (v17 == v13) {
            v18 = *((unsigned __int8*)v16 + 16);
            v19 = v16[3];
            if ((v18 & 1) == 0) {
              v19 = v18 >> 1;
            }
            if (v19 == v10) {
              v20 =
                  (v18 & 1) != 0 ? (_QWORD*)v16[4] : (_QWORD*)((char*)v16 + 17);
              if ((unsigned int)memcmp(v20, v9, v10) == 0) {
                return v16;
              }
            }
          }
          else {
            if (v17 >= v12) {
              v17 %= v12;
            }
            if (v17 != v3) {
              break;
            }
          }
          v16 = (_QWORD*)*v16;
        } while (v16 != nullptr);
      }
    }
  }
LABEL_41:
  v25 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  v26 = *a3;
  v16 = v25;
  *v25 = 0;
  v25[1] = v13;
  if ((v26 & 1) != 0) {
    fw_text_String_CopyTerminated(v25 + 2, *((_QWORD*)a3 + 2),
                                  *((_QWORD*)a3 + 1));
  }
  else {
    v27 = *((_QWORD*)a3 + 1);
    v25[2] = *(_QWORD*)a3;
    v25[3] = v27;
    v25[4] = *((_QWORD*)a3 + 2);
  }
  if ((a3[24] & 1) != 0) {
    fw_text_String_CopyTerminated(v16 + 5, *((_QWORD*)a3 + 5),
                                  *((_QWORD*)a3 + 4));
  }
  else {
    v28 = *((_QWORD*)a3 + 4);
    v29 = *((_QWORD*)a3 + 5);
    v16[5] = *((_QWORD*)a3 + 3);
    v16[6] = v28;
    v16[7] = v29;
  }
  v30 = a1[8];
  v31 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v12 == 0 || (float)(v30 * (float)v12) < v31) {
    v32 = v31 / v30;
    v33 = true;
    if (v12 >= 3) {
      v33 = (v12 & (v12 - 1)) != 0;
    }
    v34 = v33 | (2 * v12);
    v35 = vcvtps_u64_f32(v32);
    if (v34 <= v35) {
      primeEm = v35;
    }
    else {
      primeEm = v34;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v37 = *((_QWORD*)a1 + 1);
    if (primeEm > v37) {
      goto LABEL_59;
    }
    if (primeEm < v37) {
      v38 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v37 < 3 || (v37 & (v37 - 1)) != 0) {
        v38 = std___1___next_prime(v38);
      }
      else {
        v39 = 1LL << -(char)__clz(v38 - 1);
        if (v38 >= 2) {
          v38 = v39;
        }
      }
      if (primeEm <= v38) {
        primeEm = v38;
      }
      if (primeEm < v37) {
      LABEL_59:
        GameRoutine_d9e4e0(a1, primeEm);
      }
    }
    v12 = *((_QWORD*)a1 + 1);
    if ((v12 & (v12 - 1)) != 0) {
      if (v13 >= v12) {
        v3 = v13 % v12;
      }
      else {
        v3 = v13;
      }
    }
    else {
      v3 = (v12 - 1) & v13;
    }
  }
  v40 = *(_QWORD*)a1;
  v41 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v41 != nullptr) {
    *v16 = *v41;
    *v41 = v16;
  }
  else {
    v42 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = v16;
    *v16 = v42;
    *(_QWORD*)(v40 + 8 * v3) = a1 + 4;
    if (*v16 != 0) {
      v43 = *(_QWORD*)(*v16 + 8LL);
      if ((v12 & (v12 - 1)) != 0) {
        if (v43 >= v12) {
          v43 %= v12;
        }
      }
      else {
        v43 &= v12 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v43) = v16;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return v16;
}

__int64* ui_control_1888dc0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2;
  _QWORD* v3;
  bool v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64** v14;
  __int64* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64* v23;
  float v24;
  float v25;
  float v26;
  _BOOL8 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 primeEm;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  _QWORD* v37;
  unsigned __int64 v38;

  v2 = *(unsigned __int8*)(a2 + 16);
  v3 = (_QWORD*)a2;
  v5 = (v2 & 1) == 0;
  v6 = v2 >> 1;
  if (v5) {
    v7 = a2 + 17;
  }
  else {
    v7 = *(_QWORD*)(a2 + 32);
  }
  if (v5) {
    v8 = v6;
  }
  else {
    v8 = *(_QWORD*)(a2 + 24);
  }
  v9 = std___1___hash_memory(v7, v8);
  v3[1] = v9;
  v10 = *(_QWORD*)(a1 + 8);
  if (v10 != 0) {
    v11 = v10 - 1;
    v12 = v9;
    if ((v10 & (v10 - 1)) != 0) {
      v13 = v9;
      if (v9 >= v10) {
        v13 = v9 % v10;
      }
    }
    else {
      v13 = v11 & v9;
    }
    v14 = *(__int64***)(*(_QWORD*)a1 + 8 * v13);
    if (v14 != nullptr) {
      v15 = *v14;
      if (*v14 != nullptr) {
        if ((v10 & v11) == 0) {
          while (1) {
            v20 = v15[1];
            if (v20 == v12) {
              v21 = *((unsigned __int8*)v15 + 16);
              v22 = v15[3];
              if ((v21 & 1) == 0) {
                v22 = v21 >> 1;
              }
              if (v22 == v8) {
                v23 = (v21 & 1) != 0 ? (__int64*)v15[4]
                                     : (__int64*)((char*)v15 + 17);
                if ((unsigned int)memcmp(v23, v7, v8) == 0) {
                  return v15;
                }
              }
            }
            else if ((v20 & v11) != v13) {
              goto LABEL_40;
            }
            v15 = (__int64*)*v15;
            if (v15 == nullptr) {
              goto LABEL_40;
            }
          }
        }
        do {
          v16 = v15[1];
          if (v16 == v12) {
            v17 = *((unsigned __int8*)v15 + 16);
            v18 = v15[3];
            if ((v17 & 1) == 0) {
              v18 = v17 >> 1;
            }
            if (v18 == v8) {
              v19 = (v17 & 1) != 0 ? (__int64*)v15[4]
                                   : (__int64*)((char*)v15 + 17);
              if ((unsigned int)memcmp(v19, v7, v8) == 0) {
                return v15;
              }
            }
          }
          else {
            if (v16 >= v10) {
              v16 %= v10;
            }
            if (v16 != v13) {
              break;
            }
          }
          v15 = (__int64*)*v15;
        } while (v15 != nullptr);
      }
    }
  }
LABEL_40:
  v24 = *(float*)(a1 + 32);
  v25 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v10 == 0 || (float)(v24 * (float)v10) < v25) {
    v26 = v25 / v24;
    v27 = true;
    if (v10 >= 3) {
      v27 = (v10 & (v10 - 1)) != 0;
    }
    v28 = v27 | (2 * v10);
    v29 = vcvtps_u64_f32(v26);
    if (v28 <= v29) {
      v30 = v29;
    }
    else {
      v30 = v28;
    }
    if (v30 == 1) {
      v30 = 2;
    }
    else if ((v30 & (v30 - 1)) != 0) {
      primeEm = std___1___next_prime(v30);
      v10 = *(_QWORD*)(a1 + 8);
      v30 = primeEm;
    }
    if (v30 > v10) {
      goto LABEL_52;
    }
    if (v30 < v10) {
      v32 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v10 < 3 || (v10 & (v10 - 1)) != 0) {
        v32 = std___1___next_prime(v32);
      }
      else {
        v33 = 1LL << -(char)__clz(v32 - 1);
        if (v32 >= 2) {
          v32 = v33;
        }
      }
      if (v30 <= v32) {
        v30 = v32;
      }
      if (v30 < v10) {
      LABEL_52:
        GameRoutine_d9e4e0(a1, v30);
      }
    }
  }
  v34 = *(_QWORD*)(a1 + 8);
  v35 = v3[1];
  v36 = v34 - 1;
  if ((v34 & (v34 - 1)) != 0) {
    if (v35 >= v34) {
      v35 %= v34;
    }
  }
  else {
    v35 &= v36;
  }
  v37 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v35);
  if (v37 != nullptr) {
    *v3 = *v37;
    *v37 = v3;
  }
  else {
    *v3 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v3;
    *(_QWORD*)(*(_QWORD*)a1 + 8 * v35) = a1 + 16;
    if (*v3 != 0) {
      v38 = *(_QWORD*)(*v3 + 8LL);
      if ((v34 & v36) != 0) {
        if (v38 >= v34) {
          v38 %= v34;
        }
      }
      else {
        v38 &= v36;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v38) = v3;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return v3;
}

#pragma GCC visibility pop
