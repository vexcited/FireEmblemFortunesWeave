#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_1a0620(_QWORD);

__int64 CudaDriverHr_1f2be0(__int64 a1, char a2, unsigned int a3)
{
  __int64 v3;
  _DWORD* v7;
  __int64 v8;
  __int64 result;
  int v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  char v13;
  int v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  char v17;
  int8x16_t v18;

  v3 = *(_QWORD*)(a1 + 24);
  if (v3 == 0 || (CudaDriverRoutine_1a0620(*(_QWORD*)(a1 + 24)) & 1) == 0) {
    return 0;
  }
  v7 = (_DWORD*)(a1 + 23372880);
  if ((a2 & 1) != 0) {
    if (*v7 != 0) {
      v8 = 0;
      while (1) {
        result = (*(__int64 (**)(__int64, _QWORD, _QWORD, int8x16_t*))(
            a1 + 23376112))(a1 + 23372872, *(_QWORD*)(v3 + 608),
                            (unsigned int)v8, &v18);
        if ((_DWORD)result != 0) {
          return result;
        }
        v10 = *(_DWORD*)(a1 + 23372884);
        v18 = *(int8x16_t*)(a1 + 23368776 + 16 * v8);
        if (v10 != 0) {
          v11 = 0;
          do {
            if (v11 > 0x3F) {
              v13 = 64 - v11;
              if ((unsigned int)v11 > 0x40) {
                v13 = 0;
              }
              v12 = ((uint64_t*)&v18)[1] >> v11 << v13;
            }
            else {
              v12 = ((uint64_t*)&v18)[0] >> v11;
            }
            result = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, unsigned __int64))(
                a1 + 23376960))(*(_QWORD*)(v3 + 608), (unsigned int)v8,
                                (unsigned int)v11, v12 & 1);
            if ((_DWORD)result != 0) {
              return result;
            }
          } while (++v11 < *(unsigned int*)(a1 + 23372884));
        }
        if (++v8 >= (unsigned __int64)(unsigned int)*v7) {
          goto LABEL_29;
        }
      }
    }
    goto LABEL_29;
  }
  result = (*(__int64 (**)(__int64, _QWORD, _QWORD, int8x16_t*))(
      a1 + 23376112))(a1 + 23372872, *(_QWORD*)(v3 + 608), a3, &v18);
  if ((_DWORD)result != 0) {
    return result;
  }
  v14 = *(_DWORD*)(a1 + 23372884);
  v18 = vorrq_s8(*(int8x16_t*)(a1 + 16LL * a3 + 23368776),
                 vbicq_s8(v18, *(int8x16_t*)(a1 + 91280LL * a3 + 1144)));
  if (v14 == 0) {
  LABEL_28:
    result = (*(__int64 (**)(__int64, _QWORD, int8x16_t*))(a1 + 23375408))(
        a1, a3, &v18);
    if ((_DWORD)result != 0) {
      return result;
    }
  LABEL_29:
    result = (*(__int64 (**)(__int64, _QWORD, __int64))(
        *(_QWORD*)(a1 + 32306416) + 296LL))(a1, *(_QWORD*)(v3 + 248), 2);
    if ((_DWORD)result != 0) {
      return result;
    }
    return 0;
  }
  v15 = 0;
  while (1) {
    if (v15 > 0x3F) {
      v17 = 64 - v15;
      if ((unsigned int)v15 > 0x40) {
        v17 = 0;
      }
      v16 = ((uint64_t*)&v18)[1] >> v15 << v17;
    }
    else {
      v16 = ((uint64_t*)&v18)[0] >> v15;
    }
    result = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, unsigned __int64))(
        a1 + 23376960))(*(_QWORD*)(v3 + 608), a3, (unsigned int)v15, v16 & 1);
    if ((_DWORD)result != 0) {
      return result;
    }
    if (++v15 >= *(unsigned int*)(a1 + 23372884)) {
      goto LABEL_28;
    }
  }
}

#pragma GCC visibility pop
