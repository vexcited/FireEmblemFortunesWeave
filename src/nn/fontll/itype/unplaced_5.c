#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 FSS_calloc_plt(__int64, unsigned int);
__int64 ScaleFuncCall_plt(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_432e00();
__int64 fs_api_416160(__int64 result, __int64, __int64, signed int, __int64);
__int64 get_scale_inputs_plt(void);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 modify_scale_plt(__int64, unsigned int);
__int64 nn_fontll_itype_432db0();
__int64 nn_fontll_itype_432de0();
__int64 nn_fontll_itype_432df0();
__int64 nn_fontll_itype_432e10();
__int64 nn_fontll_itype_432e50();
__int64 setjmp_plt(_QWORD);
__int64 vardiv_64_plt(__int64, int, char);
__int64 varmul_64_plt(int, int, char);
__int64 varmul_64_plt_alt1(_QWORD, _QWORD, _QWORD) __asm__("varmul_64_plt");
extern __int64 SdkData_e880d8;
__int64 nn_fontll_itype_415de0(__int64 a1, unsigned int a2, unsigned int a3,
                               unsigned int a4, unsigned int a5);
__int64 nn_fontll_itype_432c00(__int64 a1, unsigned __int8* a2,
                               unsigned __int64 a3, unsigned __int64 a4);

__int64 nn_fontll_itype_415de0(__int64 a1, unsigned int a2, unsigned int a3,
                               unsigned int a4, unsigned int a5)
{
  __int64 result;
  __int64 v11;
  __int64* v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  struct {
    char v25[2];
    __int16 v26;
    unsigned __int16 v27;
  } v25_;
  __int128 v28;
  int v29;
  __int64 v30;

  if (*(_QWORD*)(a1 + 16) != 0) {
    *(_DWORD*)(a1 + 80) = a2;
    *(_DWORD*)(a1 + 84) = a3;
    v30 = 0;
    v29 = 0;
    *(_DWORD*)(a1 + 88) = a4;
    *(_DWORD*)(a1 + 92) = a5;
    result = get_scale_inputs_plt();
    if ((_DWORD)result == 0) {
      v11 = *(_QWORD*)(a1 + 16);
      *(_WORD*)(a1 + 112) = (unsigned int)(v30 + 0x8000) >> 16;
      if (*(_WORD*)(v11 + 32) == 0) {
      LABEL_40:
        *(_DWORD*)(a1 + 72) = 0;
        return 0;
      }
      v12 = *(__int64**)(a1 + 32);
      v13 = 0;
      while (1) {
        if (v12 == nullptr) {
          result = 315;
          break;
        }
        v14 = *v12;
        v15 = *(_QWORD*)(*v12 + 56);
        if (*(_QWORD*)(v11 + 48) == v15) {
          *(_WORD*)(a1 + 40) = v13;
        }
        *(_QWORD*)&v28 = __PAIR64__(a3, a2);
        *((_QWORD*)&v28 + 1) = __PAIR64__(a5, a4);
        fs_api_416160(a1, v11, v14, v30, (__int64)v25_.v25);
        result = *(unsigned int*)(a1 + 72);
        if ((_DWORD)result != 0) {
          return result;
        }
        if (v25_.v26 != 0) {
          v16 = vardiv_64_plt((unsigned int)(v30 + (v25_.v26 << 8)), v30, 16);
          LODWORD(v28) = varmul_64_plt(v28, v16, 16);
          DWORD1(v28) = varmul_64_plt(SDWORD1(v28), v16, 16);
          DWORD2(v28) = varmul_64_plt(SDWORD2(v28), v16, 16);
          v17 = varmul_64_plt(SHIDWORD(v28), v16, 16);
          HIDWORD(v28) = v17;
          v18 = v25_.v27;
          if ((*(_BYTE*)(v15 + 36) & 0x40) == 0) {
            goto LABEL_18;
          }
        }
        else {
          v17 = HIDWORD(v28);
          v18 = v25_.v27;
          if ((*(_BYTE*)(v15 + 36) & 0x40) == 0) {
            goto LABEL_18;
          }
        }
        if ((int)v28 >= 1 && *(_QWORD*)((char*)&v28 + 4) == 0 && v17 >= 1) {
          LODWORD(v28) =
              (v28 + ((int)((_DWORD)v28 << 15) >> 31 << 16)) & 0xFFFF0000;
          HIDWORD(v28) = (v17 + (v17 << 15 >> 31 << 16)) & 0xFFFF0000;
        }
      LABEL_18:
        if (*(_BYTE*)(v14 + 43) != 0) {
          result = modify_scale_plt((__int64)&v28, *(_DWORD*)(v14 + 48));
          *(_DWORD*)(a1 + 72) = result;
          if ((_DWORD)result != 0) {
            return result;
          }
        }
        v19 = *(_QWORD*)(a1 + 128);
        *(_DWORD*)(a1 + 72) = 0;
        v20 = *(_QWORD*)(v19 + 8);
        if (v20 == 0) {
        LABEL_31:
          v21 = FSS_calloc_plt(a1, 0x128u);
          if (v21 == 0) {
            return *(unsigned int*)(a1 + 72);
          }
          *(_QWORD*)v21 = v15;
          *(_WORD*)(v21 + 24) = v18;
          *(_OWORD*)(v21 + 8) = v28;
          *(_DWORD*)(v21 + 28) = *(_DWORD*)(a1 + 96);
          *(_DWORD*)(v21 + 32) = *(_DWORD*)(v14 + 44) + *(_DWORD*)(a1 + 100);
          *(_WORD*)(v21 + 48) = 1;
          goto LABEL_33;
        }
        v21 = 0;
        v22 = v20;
        while (1) {
          v23 = v21;
          v21 = v22;
          if (*(_QWORD*)v22 == v15 && *(_DWORD*)(v22 + 8) == (_DWORD)v28 &&
              *(_QWORD*)(v22 + 12) == *(_QWORD*)((char*)&v28 + 4) &&
              __PAIR64__(*(unsigned __int16*)(v22 + 24),
                         *(_DWORD*)(v22 + 20)) ==
                  __PAIR64__(v18, HIDWORD(v28)) &&
              *(_DWORD*)(v22 + 32) ==
                  *(_DWORD*)(v14 + 44) + *(_DWORD*)(a1 + 100)) {
            break;
          }
          v22 = *(_QWORD*)(v22 + 288);
          if (v22 == 0) {
            goto LABEL_31;
          }
        }
        if (v22 != v20) {
          if (v23 != 0) {
            *(_QWORD*)(v23 + 288) = *(_QWORD*)(v22 + 288);
          LABEL_33:
            v20 = *(_QWORD*)(*(_QWORD*)(a1 + 128) + 8LL);
          }
          *(_QWORD*)(v21 + 288) = v20;
          *(_QWORD*)(*(_QWORD*)(a1 + 128) + 8LL) = v21;
        }
        v24 = v12[1];
        if (v24 != 0) {
          --*(_DWORD*)(v24 + 276);
        }
        v12[1] = v21;
        v12 += 3;
        ++*(_DWORD*)(v21 + 276);
        *(_QWORD*)(a1 + 48) = v15;
        *(_QWORD*)(a1 + 56) = v21;
        *(_WORD*)(a1 + 40) = v13++;
        v11 = *(_QWORD*)(a1 + 16);
        if (v13 >= *(unsigned __int16*)(v11 + 32)) {
          goto LABEL_40;
        }
      }
    }
  }
  else {
    result = 305;
  }
  *(_DWORD*)(a1 + 72) = result;
  return result;
}

__int64 nn_fontll_itype_432c00(__int64 a1, unsigned __int8* a2,
                               unsigned __int64 a3, unsigned __int64 a4)
{
  int v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  void (*v12)(_QWORD*, __int64);
  __int64 v14;
  __int64 v15;
  _QWORD v16[4];
  struct {
    __int16 v17;
    char gap34_[6];
    __int64 v18;
    unsigned __int8* v19;
    __int64 v20;
    unsigned __int64 v21;
    char gap72_[4];
    int v22;
    char gap80_[10];
    unsigned __int8 v23;
    char gap91_[1];
    __int16 v24;
    char gap94_[2];
    __int64 (*v25)();
    __int64 (*v26)();
    __int64 (*v27)();
    __int64 (*v28)();
    __int64 (*v29)();
  } v17_;
  __int64 v30;

  memset_plt((void*)&v17_.v17, nullptr, 416, a4);
  v17_.v20 = a1;
  v17_.v21 = a4;
  v17_.v22 = 0;
  v17_.v19 = nullptr;
  v16[0] = a1 + 88;
  v16[1] = a1 + 88;
  v17_.v17 = 0x4000;
  v16[2] = a1 + 88;
  v16[3] = 0x400000004000LL;
  v17_.v24 = 0x4000;
  v17_.v25 = nn_fontll_itype_432db0;
  v17_.v26 = nn_fontll_itype_432de0;
  v8 = *(unsigned __int8*)(a4 + 289);
  v17_.v27 = nn_fontll_itype_432de0;
  if (v8 == 1) {
    goto LABEL_2;
  }
  if (*(unsigned __int16*)(a4 + 34) < 2u) {
  LABEL_8:
    LODWORD(v10) = 0;
    return (unsigned int)v10;
  }
  if (*(_BYTE*)(a4 + 276) != 0) {
    v17_.v28 = nn_fontll_itype_432df0;
    v17_.v29 = SdkRoutine_432e00;
  }
  else {
    v14 = *(unsigned int*)(a4 + 40);
    v15 = *(unsigned int*)(a4 + 280);
    v17_.v28 = nn_fontll_itype_432e10;
    v17_.v29 = nn_fontll_itype_432e50;
    if ((int)varmul_64_plt_alt1(v14, v15, 16) <= 0x10000 ||
        (int)varmul_64_plt_alt1(*(unsigned int*)(a4 + 40),
                                *(unsigned int*)(a4 + 284), 16) < 65537) {
      goto LABEL_8;
    }
  }
  if (*(_BYTE*)(a4 + 288) == 0 && *(_WORD*)(a4 + 160) != 0) {
    *(_DWORD*)(a4 + 120) =
        ScaleFuncCall_plt(*(unsigned int*)(a4 + 272), a4 + 256,
                          (unsigned int)*(__int16*)(a4 + 160));
  }
LABEL_2:
  v17_.v18 = *(_QWORD*)(a4 + 8);
  v9 = setjmp_plt(&v30);
  v10 = v9;
  if (v9 == 0) {
    if ((unsigned __int64)a2 < a3) {
      v11 = SdkData_e880d8;
      do {
        v17_.v19 = a2 + 1;
        v12 = *(void (**)(_QWORD*, __int64))(v11 + 8LL * *a2);
        v17_.v23 = *a2;
        v12(v16, v10);
        a2 = v17_.v19;
      } while ((unsigned __int64)v17_.v19 < a3);
    }
    goto LABEL_8;
  }
  return (unsigned int)v10;
}

#pragma GCC visibility pop
