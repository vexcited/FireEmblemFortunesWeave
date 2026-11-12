#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ScaleFuncCall_plt(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_432e00();
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 nn_fontll_itype_432db0();
__int64 nn_fontll_itype_432de0();
__int64 nn_fontll_itype_432df0();
__int64 nn_fontll_itype_432e10();
__int64 nn_fontll_itype_432e50();
__int64 setjmp_plt(_QWORD);
__int64 varmul_64_plt(_QWORD, _QWORD, _QWORD);
extern __int64 SdkData_e880d8;
__int64 fnt_Execute(__int64 a1, unsigned __int8* a2, unsigned __int64 a3,
                    unsigned __int64 a4);

__int64 fnt_Execute(__int64 a1, unsigned __int8* a2, unsigned __int64 a3,
                    unsigned __int64 a4)
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
    if ((int)varmul_64_plt(v14, v15, 16) <= 0x10000 ||
        (int)varmul_64_plt(*(unsigned int*)(a4 + 40),
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
