#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 MovieFree_plt(_QWORD);
__int64 MovieMalloc_plt(_QWORD);
__int64 MovieRoutine_75b60();
__int64 MovieRoutine_75d80();
__int64 get_mono_channel(_QWORD, _QWORD, _QWORD);
__int64 get_right_channel(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 opus_decode_native(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, _DWORD);
__int64 opus_decoder_get_size_plt(_QWORD);
__int64 opus_multistream_75140(int*, int, int);
__int64 opus_multistream_decode_native_alt1(
    int*, __int64, int, __int64,
    void (*)(__int64, __int64, _QWORD, char*, __int64, _QWORD, __int64), int,
    unsigned int, int, __int64) __asm__("opus_multistream_decode_native");
__int64 opus_multistream_decoder_ctl_plt(_QWORD, _QWORD, _QWORD);
__int64 opus_multistream_decoder_init_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                          _QWORD, _QWORD);
__int64 opus_packet_get_nb_samples_plt(_QWORD, _QWORD, _QWORD);
__int64 opus_packet_parse_impl(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                               _QWORD, _QWORD);
__int64 opus_multistream_decoder_create(unsigned int a1, unsigned int a2,
                                        int a3, unsigned int a4, __int64 a5,
                                        _DWORD* a6);
__int64 opus_multistream_decode_native(
    int* a1, __int64 a2, int a3, __int64 a4,
    void (*a5)(__int64, __int64, _QWORD, char*, __int64, _QWORD, __int64),
    int a6, unsigned int a7, int a8, __int64 a9);
__int64 opus_multistream_decode(int* a1, __int64 a2, int a3, __int64 a4, int a5,
                                unsigned int a6);
__int64 opus_multistream_decode_float(int* a1, __int64 a2, int a3, __int64 a4,
                                      int a5, unsigned int a6);

__int64 opus_multistream_decoder_create(unsigned int a1, unsigned int a2,
                                        int a3, unsigned int a4, __int64 a5,
                                        _DWORD* a6)
{
  unsigned int v8;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v18;

  if (a2 - 256 < 0xFFFFFF01 || (a4 & 0x80000000) != 0 || a3 < 1 ||
      (v8 = a3 - a4, a3 < (int)a4) || a3 > (int)(255 - a4)) {
    if (a6 != nullptr) {
      *a6 = -1;
      return 0;
    }
  }
  else {
    v14 = opus_decoder_get_size_plt(2);
    v15 = opus_decoder_get_size_plt(1);
    v16 = MovieMalloc_plt((int)(((v15 + 7) & 0xFFFFFFF8) * v8 +
                                ((v14 + 7) & 0xFFFFFFF8) * a4 + 272));
    if (v16 != 0) {
      v17 = v16;
      v18 = opus_multistream_decoder_init_plt(v16, a1, a2, (unsigned int)a3, a4,
                                              a5);
      if (a6 != nullptr) {
        *a6 = v18;
      }
      if (v18 == 0) {
        return v17;
      }
      MovieFree_plt(v17);
    }
    else if (a6 != nullptr) {
      *a6 = -7;
      return 0;
    }
  }
  return 0;
}

__int64 opus_multistream_decode_native(
    int* a1, __int64 a2, int a3, __int64 a4,
    void (*a5)(__int64, __int64, _QWORD, char*, __int64, _QWORD, __int64),
    int a6, unsigned int a7, int a8, __int64 a9)
{
  __int64 v9;
  __int64 v10;
  unsigned int v14;
  __int64 result;
  __int64 v19;
  char* v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  int v26;
  int v27;
  int* v28;
  int v29;
  unsigned int v30;
  int v31;
  __int64 v32;
  int* v33;
  __int64 v34;
  unsigned int i;
  unsigned int j;
  unsigned int v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  unsigned int v42;
  __int64 v43;
  unsigned int v44;
  int v45;
  int v46;
  int v47;
  __int64 v48;
  int v49;
  __int64 v50;
  int v51;
  unsigned int v52;
  _DWORD v53[25];
  _BYTE v54[4];
  __int64 v55;
  __int64 v56;

  if (a6 < 1) {
    return 0xFFFFFFFFLL;
  }
  v55 = v9;
  v56 = v10;
  v50 = a2;
  v14 = a6;
  v51 = 0;
  if ((unsigned int)opus_multistream_decoder_ctl_plt(a1, 4029, &v51) != 0) {
    return 4294967293LL;
  }
  if ((int)v14 >= 3 * (v51 / 25)) {
    v14 = 3 * (v51 / 25);
  }
  v19 = 2LL * (int)(2 * v14);
  v20 = (char*)&v43 - ((v19 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  memset_plt(v20, 0, v19);
  v47 = opus_decoder_get_size_plt(2);
  v46 = opus_decoder_get_size_plt(1);
  if (a3 < 0) {
    return 0xFFFFFFFFLL;
  }
  v21 = v50;
  if (a3 == 0) {
  LABEL_21:
    v27 = a1[1];
    if (v27 >= 1) {
      v28 = a1 + 68;
      HIDWORD(v43) = a8;
      v44 = a7;
      v29 = a3;
      v30 = 0;
      v45 = v29;
      do {
        v31 = v46;
        if ((int)v30 < a1[2]) {
          v31 = v47;
        }
        if (v45 != 0 && v29 < 1) {
          return 4294967293LL;
        }
        v49 = v31;
        v53[0] = 0;
        v50 = v21;
        v14 = opus_decode_native(v28, v21, (unsigned int)v29, v20, v14, v44,
                                 v30 != v27 - 1, v53, a8);
        if ((int)v14 < 1) {
          return v14;
        }
        v32 = 0xFFFFFFFFLL;
        v33 = a1;
        v34 = v30;
        v48 = v53[0];
        if ((int)v30 >= a1[2]) {
          while (1) {
            v37 = get_mono_channel(v33, v34, v32);
            if (v37 == -1) {
              break;
            }
            a5(a4, (unsigned int)*a1, v37, v20, 1, v14, a9);
            v33 = a1;
            v34 = v30;
            v32 = v37;
          }
        }
        else {
          for (i = opus_multistream_75140(a1, v30, -1); i != -1;
               i = opus_multistream_75140(a1, v30, i)) {
            a5(a4, (unsigned int)*a1, i, v20, 2, v14, a9);
          }
          for (j = get_right_channel(a1, v30, 0xFFFFFFFFLL); j != -1;
               j = get_right_channel(a1, v30, j)) {
            a5(a4, (unsigned int)*a1, j, v20 + 2, 2, v14, a9);
          }
        }
        a8 = HIDWORD(v43);
        ++v30;
        v28 = (int*)((char*)v28 + (int)((v49 + 7) & 0xFFFFFFF8));
        v21 = v50 + v48;
        v29 -= v48;
        v27 = a1[1];
      } while ((int)v30 < v27);
    }
    v38 = (unsigned int)*a1;
    if ((int)v38 >= 1) {
      v39 = 0;
      do {
        if (*((unsigned __int8*)a1 + v39 + 12) == 255) {
          a5(a4, v38, (unsigned int)v39, nullptr, 0, v14, a9);
          v38 = (unsigned int)*a1;
        }
        ++v39;
      } while (v39 < (int)v38);
    }
    return v14;
  }
  v22 = a1[1];
  if (a3 < 2 * v22 - 1) {
    return 4294967292LL;
  }
  if (v22 <= 0) {
    LODWORD(result) = 0;
  LABEL_19:
    if ((int)result > (int)v14) {
      return 4294967294LL;
    }
    goto LABEL_21;
  }
  v23 = v50;
  v24 = (unsigned int)a3;
  v25 = v51;
  HIDWORD(v43) = a8;
  v26 = v22 - 1;
  v54[0] = 0;
  memset(v53, 0, 96);
  v52 = 0;
  v45 = v24;
  result = opus_packet_parse_impl(v50, v24, v22 != 1, v54, 0, v53, 0, &v52);
  if ((result & 0x80000000) == 0) {
    v44 = a7;
    result = opus_packet_get_nb_samples_plt(v23, v52, v25);
    v21 = v23;
    if (v22 != 1) {
      v40 = v45 - v52;
      v41 = v23 + (int)v52;
      while (v40 >= 1) {
        v42 = result;
        result = opus_packet_parse_impl(v41, (unsigned int)v40, v26 != 1, v54,
                                        0, v53, 0, &v52);
        if ((result & 0x80000000) != 0) {
          return result;
        }
        if (v42 !=
            (unsigned int)opus_packet_get_nb_samples_plt(v41, v52, v25)) {
          break;
        }
        v21 = v50;
        --v26;
        result = v42;
        v41 += (int)v52;
        v40 -= v52;
        if (v26 == 0) {
          goto LABEL_16;
        }
      }
      return 4294967292LL;
    }
  LABEL_16:
    a8 = HIDWORD(v43);
    a7 = v44;
    a3 = v45;
    if ((result & 0x80000000) == 0) {
      goto LABEL_19;
    }
  }
  return result;
}

__int64 opus_multistream_decode(int* a1, __int64 a2, int a3, __int64 a4, int a5,
                                unsigned int a6)
{
  return opus_multistream_decode_native_alt1(
      a1, a2, a3, a4,
      (void (*)(__int64, __int64, _QWORD, char*, __int64, _QWORD,
                __int64))MovieRoutine_75b60,
      a5, a6, 0, 0);
}

__int64 opus_multistream_decode_float(int* a1, __int64 a2, int a3, __int64 a4,
                                      int a5, unsigned int a6)
{
  return opus_multistream_decode_native_alt1(
      a1, a2, a3, a4,
      (void (*)(__int64, __int64, _QWORD, char*, __int64, _QWORD,
                __int64))MovieRoutine_75d80,
      a5, a6, 0, 0);
}

#pragma GCC visibility pop
