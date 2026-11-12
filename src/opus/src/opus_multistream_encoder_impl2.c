#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 MovieFree_plt(_QWORD);
__int64 MovieMalloc_plt(_QWORD);
__int64 MovieRoutine_78460(
    int*, void (*)(__int16*, __int64, __int64, _QWORD, _QWORD, __int64, _QWORD),
    __int64, unsigned int, _BYTE*, int, int, __int64, int, __int64);
__int64 MovieRoutine_796e0();
__int64 get_mono_channel(_QWORD, _QWORD, _QWORD);
__int64 get_right_channel(_QWORD, _QWORD, _QWORD);
__int64 isqrt32(_QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 ms_get_preemph_mem(_QWORD);
__int64 opus_copy_channel_in_float();
__int64 opus_encoder_ctl_plt(_QWORD, _QWORD, _QWORD);
__int64 opus_encoder_get_size_plt(_QWORD);
__int64 opus_encoder_init_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 opus_multistream_75140(_QWORD, _QWORD, _QWORD);
__int64 opus_multistream_encoder_77b80_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
    _QWORD) __asm__("opus_multistream_encoder_77b80");
__int64 opus_multistream_encoder_79520_alt1(_QWORD) __asm__(
    "opus_multistream_encoder_79520");
__int64 validate_layout(_QWORD);
extern _UNKNOWN MovieData_a9460;
extern __int64 (*MovieData_c0bd0)();
extern __int64 (*downmix_float_ptr[2])();
__int64 opus_multistream_surround_encoder_get_size(int a1, int a2);
__int64 opus_multistream_encoder_77b80(_DWORD* a1, unsigned int a2, int a3,
                                       int a4, int a5, __int64 a6,
                                       unsigned int a7, int a8);
__int64 opus_multistream_surround_encoder_init(__int64 a1, __int64 a2,
                                               __int64 a3, int a4, int* a5,
                                               _DWORD* a6, _WORD* a7,
                                               unsigned int a8);
__int64 opus_multistream_encoder_create(unsigned int a1, unsigned int a2,
                                        int a3, unsigned int a4, __int64 a5,
                                        unsigned int a6, int* a7);
__int64 opus_multistream_encoder_79520(__int64 a1);
__int64 opus_multistream_encode(int* a1, __int64 a2, unsigned int a3, _BYTE* a4,
                                int a5);
__int64 opus_multistream_encode_float(int* a1, __int64 a2, unsigned int a3,
                                      _BYTE* a4, int a5);

__int64 opus_multistream_surround_encoder_get_size(int a1, int a2)
{
  int* v3;
  __int64 result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  if (a2 != 0) {
    if (a2 == 1 && (unsigned int)(a1 - 1) <= 7) {
      v3 = (int*)((char*)&MovieData_a9460 + 16 * (unsigned int)(a1 - 1));
      v5 = *v3;
      LODWORD(result) = v3[1];
      v6 = 0;
      if (v5 < 1) {
        goto LABEL_17;
      }
    LABEL_15:
      v7 = v5 - result;
      if (v5 >= (unsigned int)result) {
        v8 = result;
        v9 = opus_encoder_get_size_plt(2);
        v6 = ((opus_encoder_get_size_plt(1) + 7) & 0xFFFFFFF8) * v7 +
             ((v9 + 7) & 0xFFFFFFF8) * v8 + 296;
      }
      goto LABEL_17;
    }
    result = 0;
    if (a2 != 255) {
      if (a2 != 2) {
        return result;
      }
      if ((unsigned int)(a1 - 228) < 0xFFFFFF1D) {
        return 0;
      }
      v11 = isqrt32((unsigned int)a1);
      v5 = v11 * v11;
      if (a1 != v11 * v11 && a1 - v11 * v11 != 2) {
        return 0;
      }
      LODWORD(result) = a1 != v5;
      if (a1 != v5) {
        ++v5;
      }
      v6 = 0;
      if (v5 >= 1) {
        goto LABEL_15;
      }
      goto LABEL_17;
    }
  }
  else {
    result = 0;
    if (a1 != 1) {
      if (a1 != 2) {
        return result;
      }
      v5 = 1;
      LODWORD(result) = 1;
      v6 = 0;
      goto LABEL_15;
    }
  }
  v5 = a1;
  v6 = 0;
  if (a1 >= 1) {
    goto LABEL_15;
  }
LABEL_17:
  v10 = 484 * a1;
  if (a1 <= 2) {
    v10 = 0;
  }
  return (unsigned int)(v6 + v10);
}

__int64 opus_multistream_encoder_77b80(_DWORD* a1, unsigned int a2, int a3,
                                       int a4, int a5, __int64 a6,
                                       unsigned int a7, int a8)
{
  __int64 result;
  __int64 v14;
  __int64 v15;
  _BYTE* v16;
  _BYTE* v17;
  __int64 v18;
  char v19;
  char* v20;
  char* v21;
  _BYTE* v22;
  char v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  _DWORD* v28;
  int v29;
  int v30;
  int v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;

  if ((unsigned int)(a3 - 256) < 0xFFFFFF01) {
    return 0xFFFFFFFFLL;
  }
  result = 0xFFFFFFFFLL;
  if ((a5 & 0x80000000) == 0 && a4 >= 1 && a5 <= a4 && a4 <= 255 - a5) {
    a1[67] = 0;
    *a1 = a3;
    a1[1] = a4;
    a1[2] = a5;
    if (a8 != 1) {
      a1[68] = -1;
    }
    a1[69] = a7;
    a1[72] = -1000;
    a1[70] = 5000;
    v14 = a3 & 7;
    if ((unsigned int)(a3 - 1) >= 7) {
      v16 = (char*)a1 + 19;
      v17 = (_BYTE*)(a6 + 3);
      v18 = 0;
      do {
        v18 -= 8;
        *(v16 - 7) = *(v17 - 3);
        *(v16 - 6) = *(v17 - 2);
        *(v16 - 5) = *(v17 - 1);
        *(v16 - 4) = *v17;
        *(v16 - 3) = v17[1];
        *(v16 - 2) = v17[2];
        *(v16 - 1) = v17[3];
        v19 = v17[4];
        v17 += 8;
        *v16 = v19;
        v16 += 8;
      } while (-(__int64)((unsigned __int8)a3 & 0xF8) != v18);
      v15 = -v18;
      if ((a3 & 7) == 0) {
      LABEL_17:
        if ((unsigned int)validate_layout(a1) != 0) {
          if (a8 == 1) {
            if ((int)a1[1] >= 1) {
              v24 = 0;
              while (1) {
                if ((signed int)v24 >= a1[2]) {
                  result = get_mono_channel(a1, v24, 0xFFFFFFFFLL);
                }
                else {
                  result = opus_multistream_75140(a1, v24, 0xFFFFFFFFLL);
                  if ((_DWORD)result == -1) {
                    return result;
                  }
                  result = get_right_channel(a1, v24, 0xFFFFFFFFLL);
                }
                if ((_DWORD)result == -1) {
                  return result;
                }
                if ((signed int)++v24 >= a1[1]) {
                  goto LABEL_27;
                }
              }
            }
          LABEL_34:
            v28 = a1 + 74;
            v29 = opus_encoder_get_size_plt(2);
            v30 = opus_encoder_get_size_plt(1);
            if ((int)a1[2] < 1) {
              v31 = 0;
            LABEL_42:
              if (v31 >= a1[1]) {
              LABEL_48:
                if (a8 == 1) {
                  v35 = ms_get_preemph_mem(a1);
                  memset_plt(v35, 0, (unsigned int)(4 * a3));
                  v36 = opus_multistream_encoder_79520_alt1(a1);
                  memset_plt(v36, 0, (unsigned int)(480 * a3));
                }
                a1[71] = a8;
                return 0;
              }
              else {
                v33 = (int)((v30 + 7) & 0xFFFFFFF8);
                while (1) {
                  result = opus_encoder_init_plt(v28, a2, 1, a7);
                  if (v31 == a1[68]) {
                    v34 = result;
                    opus_encoder_ctl_plt(v28, 10024, 1);
                    result = v34;
                  }
                  if ((_DWORD)result != 0) {
                    break;
                  }
                  v28 = (_DWORD*)((char*)v28 + v33);
                  if (++v31 >= a1[1]) {
                    goto LABEL_48;
                  }
                }
              }
            }
            else {
              v31 = 0;
              v32 = (int)((v29 + 7) & 0xFFFFFFF8);
              while (1) {
                result = opus_encoder_init_plt(v28, a2, 2, a7);
                if ((_DWORD)result != 0) {
                  break;
                }
                if (v31 == a1[68]) {
                  opus_encoder_ctl_plt(v28, 10024, 1);
                }
                v28 = (_DWORD*)((char*)v28 + v32);
                if (++v31 >= a1[2]) {
                  goto LABEL_42;
                }
              }
            }
            return result;
          }
        LABEL_27:
          if (a8 != 2) {
            goto LABEL_34;
          }
          v25 = *a1;
          if ((unsigned int)(*a1 - 228) >= 0xFFFFFF1D) {
            v26 = isqrt32(v25);
            if (v25 == v26 * v26 || v25 - v26 * v26 == 2) {
              goto LABEL_34;
            }
          }
        }
        return 0xFFFFFFFFLL;
      }
    }
    else {
      v15 = 0;
      if ((a3 & 7) == 0) {
        goto LABEL_17;
      }
    }
    v20 = (char*)a1 + v15;
    v21 = (char*)(a6 + v15);
    v22 = v20 + 12;
    do {
      v23 = *v21++;
      --v14;
      *v22++ = v23;
    } while (v14 != 0);
    goto LABEL_17;
  }
  return result;
}

__int64 opus_multistream_surround_encoder_init(__int64 a1, __int64 a2,
                                               __int64 a3, int a4, int* a5,
                                               _DWORD* a6, _WORD* a7,
                                               unsigned int a8)
{
  unsigned int v8;
  unsigned int v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  _WORD* v14;
  _DWORD* v15;
  int* v16;
  int* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int* v21;
  unsigned int v22;
  int* v23;
  _WORD* v24;
  unsigned int v25;
  unsigned int v26;
  int v27;
  int v28;
  __int64 v29;
  _BYTE* v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  int v35;
  __int64 v36;
  __int64 v37;
  int v38;

  v8 = -1;
  if ((unsigned int)(a3 - 256) < 0xFFFFFF01) {
    return v8;
  }
  *(_DWORD*)(a1 + 272) = -1;
  if (a4 != 0) {
    if ((unsigned int)a3 <= 8 && a4 == 1) {
      v10 = a2;
      v11 = a1;
      v12 = a3;
      v13 = a8;
      v14 = a7;
      v15 = a6;
      v16 = a5;
      v17 = (int*)((char*)&MovieData_a9460 + 16 * (unsigned int)(a3 - 1));
      *a5 = *v17;
      *a6 = v17[1];
      memcpy_plt(a7, v17 + 2, (unsigned int)a3);
      a4 = 1;
      a1 = v11;
      a5 = v16;
      a2 = v10;
      a6 = v15;
      a3 = v12;
      a7 = v14;
      a8 = v13;
      if (v12 >= 6) {
        *(_DWORD*)(v11 + 272) = *v16 - 1;
      }
      goto LABEL_26;
    }
    if (a4 == 2) {
      if ((unsigned int)(a3 - 228) >= 0xFFFFFF1D) {
        v20 = a1;
        v21 = a5;
        v22 = a2;
        v23 = a6;
        v24 = a7;
        v25 = a8;
        v26 = a3;
        v27 = isqrt32((unsigned int)a3);
        v28 = v27 * v27;
        a3 = v26;
        if (v26 == v27 * v27 || v26 - v27 * v27 == 2) {
          a5 = v21;
          a4 = 2;
          if (v21 != nullptr) {
            if (v26 == v28) {
              v35 = v27 * v27;
            }
            else {
              v35 = v28 + 1;
            }
            *v21 = v35;
          }
          a8 = v25;
          a7 = v24;
          a6 = v23;
          a2 = v22;
          a1 = v20;
          if (v23 != nullptr) {
            LODWORD(v36) = v26 != v28;
            *v23 = v36;
            if (*v21 > (int)v36) {
              v37 = 0;
              do {
                *((_BYTE*)v24 + v37) = v37 + 2 * v36;
                ++v37;
                v36 = *v23;
              } while (v37 < *v21 - v36);
            }
            if ((int)v36 >= 1) {
              v38 = 0;
              do {
                *((_BYTE*)v24 + v38 + *v21 - (int)v36) = v38;
                ++v38;
                LODWORD(v36) = *v23;
              } while (v38 < 2 * *v23);
            }
          }
          goto LABEL_26;
        }
      }
      return (unsigned int)-1;
    }
    if (a4 == 255) {
      v18 = a3 & 7;
      *a5 = a3;
      *a6 = 0;
      if ((unsigned int)(a3 - 1) >= 7) {
        v29 = 7;
        do {
          v30 = (char*)a7 + v29;
          *(v30 - 7) = v29 - 7;
          *(v30 - 6) = v29 - 6;
          *(v30 - 5) = v29 - 5;
          *(v30 - 4) = v29 - 4;
          *(v30 - 3) = v29 - 3;
          *(v30 - 2) = v29 - 2;
          *(v30 - 1) = v29 - 1;
          *v30 = v29;
          v31 = v29 + 8;
          v32 = v29 + 1;
          v29 += 8;
        } while (v32 != (a3 & 0xF8));
        v19 = v31 - 7;
      }
      else {
        v19 = 0;
      }
      if ((a3 & 7) != 0) {
        do {
          *((_BYTE*)a7 + v19) = v19;
          ++v19;
          --v18;
        } while (v18 != 0);
      }
      goto LABEL_26;
    }
    return (unsigned int)-5;
  }
  if ((unsigned __int8)a3 == 2) {
    *a5 = 1;
    *a6 = 1;
    *a7 = 256;
  }
  else {
    if ((_DWORD)a3 != 1) {
      return (unsigned int)-5;
    }
    *a5 = 1;
    *a6 = 0;
    *(_BYTE*)a7 = 0;
  }
LABEL_26:
  if (a4 == 2) {
    v33 = 2;
  }
  else {
    v33 = 0;
  }
  if (a4 == 1 && (unsigned int)a3 > 2) {
    v33 = 1;
  }
  return opus_multistream_encoder_77b80_alt1(a1, a2, a3, (unsigned int)*a5,
                                             (unsigned int)*a6, a7, a8, v33);
}

__int64 opus_multistream_encoder_create(unsigned int a1, unsigned int a2,
                                        int a3, unsigned int a4, __int64 a5,
                                        unsigned int a6, int* a7)
{
  __int64 result;
  int v8;
  unsigned int v10;
  int* v16;
  int v17;
  int v18;
  __int64 v19;

  if (a2 - 256 < 0xFFFFFF01 || (a4 & 0x80000000) != 0 || a3 < 1 ||
      (v10 = a3 - a4, a3 < (int)a4) || a3 > (int)(255 - a4)) {
    result = 0;
    if (a7 == nullptr) {
      return result;
    }
    v8 = -1;
    goto LABEL_4;
  }
  v16 = a7;
  v17 = opus_encoder_get_size_plt(2);
  v18 = opus_encoder_get_size_plt(1);
  result = MovieMalloc_plt((int)(((v18 + 7) & 0xFFFFFFF8) * v10 +
                                 ((v17 + 7) & 0xFFFFFFF8) * a4 + 296));
  if (result == 0) {
    if (v16 == nullptr) {
      return result;
    }
    a7 = v16;
    v8 = -7;
    goto LABEL_4;
  }
  v19 = result;
  v8 = opus_multistream_encoder_77b80_alt1(result, a1, a2, (unsigned int)a3, a4,
                                           a5, a6, 0);
  if (v8 == 0) {
    result = v19;
    a7 = v16;
    if (v16 == nullptr) {
      return result;
    }
    goto LABEL_4;
  }
  MovieFree_plt(v19);
  result = 0;
  a7 = v16;
  if (v16 != nullptr) {
  LABEL_4:
    *a7 = v8;
  }
  return result;
}

__int64 opus_multistream_encoder_79520(__int64 a1)
{
  int v2;
  int v3;
  int v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  int v24;
  int v25;
  int v27;

  v2 = opus_encoder_get_size_plt(2);
  v3 = opus_encoder_get_size_plt(1);
  v4 = *(_DWORD*)(a1 + 4);
  v5 = a1 + 296;
  if (v4 >= 1) {
    v6 = *(_DWORD*)(a1 + 8);
    v7 = *(_DWORD*)(a1 + 4) & 7;
    if ((unsigned int)v4 >= 8) {
      v9 = v4 & 0x7FFFFFF8;
      v8 = 0;
      do {
        if (v8 >= v6) {
          v10 = v3;
        }
        else {
          v10 = v2;
        }
        v11 = v5 + (int)((v10 + 7) & 0xFFFFFFF8);
        if (v8 + 1 >= v6) {
          v12 = v3;
        }
        else {
          v12 = v2;
        }
        v13 = v11 + (int)((v12 + 7) & 0xFFFFFFF8);
        if (v8 + 2 >= v6) {
          v14 = v3;
        }
        else {
          v14 = v2;
        }
        v15 = v13 + (int)((v14 + 7) & 0xFFFFFFF8);
        if (v8 + 3 >= v6) {
          v16 = v3;
        }
        else {
          v16 = v2;
        }
        v17 = v15 + (int)((v16 + 7) & 0xFFFFFFF8);
        if (v8 + 4 >= v6) {
          v18 = v3;
        }
        else {
          v18 = v2;
        }
        v19 = v17 + (int)((v18 + 7) & 0xFFFFFFF8);
        if (v8 + 5 >= v6) {
          v20 = v3;
        }
        else {
          v20 = v2;
        }
        v21 = v19 + (int)((v20 + 7) & 0xFFFFFFF8);
        if (v8 + 6 >= v6) {
          v22 = v3;
        }
        else {
          v22 = v2;
        }
        v23 = v21 + (int)((v22 + 7) & 0xFFFFFFF8);
        v24 = v8 + 7;
        v8 += 8;
        if (v24 >= v6) {
          v25 = v3;
        }
        else {
          v25 = v2;
        }
        v5 = v23 + (int)((v25 + 7) & 0xFFFFFFF8);
      } while (v8 != v9);
    }
    else {
      v8 = 0;
    }
    for (; v7 != 0; v5 += (int)((v27 + 7) & 0xFFFFFFF8)) {
      if (v8++ < v6) {
        v27 = v2;
      }
      else {
        v27 = v3;
      }
      --v7;
    }
  }
  return v5;
}

__int64 opus_multistream_encode(int* a1, __int64 a2, unsigned int a3, _BYTE* a4,
                                int a5)
{
  return MovieRoutine_78460(
      a1,
      (void (*)(__int16*, __int64, __int64, _QWORD, _QWORD, __int64,
                _QWORD))MovieRoutine_796e0,
      a2, a3, a4, a5, 16, (__int64)MovieData_c0bd0, 0, 0);
}

__int64 opus_multistream_encode_float(int* a1, __int64 a2, unsigned int a3,
                                      _BYTE* a4, int a5)
{
  return MovieRoutine_78460(
      a1,
      (void (*)(__int16*, __int64, __int64, _QWORD, _QWORD, __int64,
                _QWORD))opus_copy_channel_in_float,
      a2, a3, a4, a5, 16, (__int64)downmix_float_ptr[0], 1, 0);
}

#pragma GCC visibility pop
