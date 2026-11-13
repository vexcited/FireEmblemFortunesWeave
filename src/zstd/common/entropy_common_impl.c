#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_248870(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD);
__int64 HUF_readStats_wksp(unsigned __int64 a1, unsigned __int64 a2, __int64 a3,
                           _DWORD* a4, _DWORD* a5, char* a6,
                           unsigned __int64 a7, __int64 a8, __int64 a9);

__int64 HUF_readStats_wksp(unsigned __int64 a1, unsigned __int64 a2, __int64 a3,
                           _DWORD* a4, _DWORD* a5, char* a6,
                           unsigned __int64 a7, __int64 a8, __int64 a9)
{
  unsigned __int64 v10;
  _DWORD* v11;
  __int64 v12;
  _DWORD* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned int v18;
  unsigned __int64 v19;
  unsigned int v20;
  unsigned __int64 v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned __int64 v28;
  unsigned __int64 v29;
  bool v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int8* v34;
  _BYTE* v35;
  char v36;
  int8x16_t v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  int8x16_t* v41;
  int8x16_t v42;
  int8x16_t v43;
  char* v44;
  __int64 v45;
  char* v46;
  __int64 v47;
  int8x8_t v48;
  int8x8x2_t v49;
  int8x16x2_t v50;
  int8x16x2_t v51;

  if (a7 == 0) {
    return -72;
  }
  v10 = (unsigned __int8)*a6;
  if (*a6 < 0) {
    v16 = (v10 - 126) >> 1;
    if (v16 >= a7) {
      return -72;
    }
    v15 = v10 - 127;
    if (v10 - 127 >= a2) {
      return -20;
    }
    if (v10 == 127) {
      *(_DWORD*)(a3 + 48) = 0;
      v17 = -20;
      *(_OWORD*)(a3 + 16) = 0u;
      *(_OWORD*)(a3 + 32) = 0u;
      *(_OWORD*)a3 = 0u;
      return v17;
    }
    v28 = v10 - 128;
    if (v10 - 128 < 0xE || ((v29 = (unsigned __int64)(a6 + 1),
                             a1 < (unsigned __int64)&a6[(v28 >> 1) + 2])
                                ? (v30 = v29 >= a1 + (v10 & 0x7E) + 2)
                                : (v30 = true),
                            !v30)) {
      v12 = a3;
      v13 = a4;
      v33 = 0;
      goto LABEL_29;
    }
    v31 = (v28 >> 1) + 1;
    if (v28 >= 0x3E) {
      ((uint64_t*)&v37)[0] = 0xF0F0F0F0F0F0F0FLL;
      ((uint64_t*)&v37)[1] = 0xF0F0F0F0F0F0F0FLL;
      v32 = v31 & 0x60;
      v38 = (char*)(a1 + 32);
      v12 = a3;
      v13 = a4;
      v39 = 0;
      do {
        v40 = v39 & 0x7FFFFFFFFFFFFFE0LL;
        v39 += 32;
        v41 = (int8x16_t*)(v29 + v40);
        v42 = *v41;
        v43 = v41[1];
        v44 = v38 - 32;
        v51.val[0] = vshrq_n_u8(v43, 4u);
        v51.val[1] = vandq_s8(v43, v37);
        v50.val[0] = vshrq_n_u8(v42, 4u);
        v50.val[1] = vandq_s8(v42, v37);
        vst2q_s8(v38, v51);
        v38 += 64;
        vst2q_s8(v44, v50);
      } while (v32 != v39);
      if (v31 == v32) {
        goto LABEL_42;
      }
      if ((v31 & 0x18) == 0) {
        v33 = 2 * v32;
      LABEL_29:
        v11 = a5;
        v34 = (unsigned __int8*)&a6[(v33 >> 1) + 1];
        do {
          v35 = (_BYTE*)(a1 + v33);
          v33 += 2LL;
          *v35 = *v34 >> 4;
          v36 = *v34++;
          v35[1] = v36 & 0xF;
        } while (v33 < v15);
        v14 = a1;
        *(_DWORD*)(v12 + 48) = 0;
        *(_OWORD*)(v12 + 16) = 0u;
        *(_OWORD*)(v12 + 32) = 0u;
        *(_OWORD*)v12 = 0u;
      LABEL_6:
        v18 = 1;
        v19 = 0;
        v20 = 0;
        while (1) {
          v21 = *(unsigned __int8*)(v14 + v19);
          if (v21 > 0xC) {
            break;
          }
          ++*(_DWORD*)(v12 + 4 * v21);
          v20 += 1 << *(_BYTE*)(v14 + v19) >> 1;
          v19 = v18++;
          if (v15 <= v19) {
            if (v20 == 0) {
              return -20;
            }
            v22 = __clz(v20);
            if ((v22 ^ 0x1C) > 0xB) {
              return -20;
            }
            *v11 = 32 - v22;
            v23 = (1 << (-(char)v22 & 31)) - v20;
            v24 = __clz(v23);
            if (0x80000000 >> v24 != v23) {
              return -20;
            }
            v25 = 32 - v24;
            *(_BYTE*)(v14 + v15) = v25;
            ++*(_DWORD*)(v12 + 4LL * v25);
            v17 = -20;
            v26 = *(_DWORD*)(v12 + 4);
            if (v26 >= 2 && (v26 & 1) == 0) {
              *v13 = v15 + 1;
              return v16 + 1;
            }
            return v17;
          }
        }
        return -20;
      }
    }
    else {
      v32 = 0;
    }
    v45 = v31 & 0x78;
    v46 = (char*)(a1 + 2 * v32);
    v12 = a3;
    v13 = a4;
    v33 = 2 * v45;
    do {
      v47 = v32 & 0x7FFFFFFFFFFFFFF8LL;
      v32 += 8;
      ((uint64_t*)&v48)[0] = *(unsigned __int64*)(v29 + v47);
      v49.val[0] = vshr_n_u8(v48, 4u);
      v49.val[1] = vand_s8(v48, (int8x8_t)0xF0F0F0F0F0F0F0FLL);
      vst2_s8(v46, v49);
      v46 += 16;
    } while (v45 != v32);
    if (v31 != v45) {
      goto LABEL_29;
    }
  LABEL_42:
    v11 = a5;
    v14 = a1;
    *(_DWORD*)(v12 + 48) = 0;
    *(_OWORD*)(v12 + 16) = 0u;
    *(_OWORD*)(v12 + 32) = 0u;
    *(_OWORD*)v12 = 0u;
    goto LABEL_6;
  }
  if (a7 <= v10) {
    return -72;
  }
  v11 = a5;
  v12 = a3;
  v13 = a4;
  v14 = a1;
  v15 = CudaDriverRoutine_248870(a1, a2 - 1, a6 + 1, (unsigned __int8)*a6, 6,
                                 a8, a9);
  v16 = v10;
  v17 = v15;
  if (v15 <= 0xFFFFFFFFFFFFFF88LL) {
    *(_DWORD*)(v12 + 48) = 0;
    *(_OWORD*)(v12 + 16) = 0u;
    *(_OWORD*)(v12 + 32) = 0u;
    *(_OWORD*)v12 = 0u;
    if (v15 != 0) {
      goto LABEL_6;
    }
    return -20;
  }
  return v17;
}

#pragma GCC visibility pop
