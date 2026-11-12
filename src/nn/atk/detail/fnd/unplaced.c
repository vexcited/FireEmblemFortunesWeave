#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2b43c0(__int64 result);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 nn_atk_detail_fnd_2b3fd0(__int64 a1, __int64 a2, unsigned __int64 a3,
                                 unsigned int* a4, __int64 a5, __int64 a6);
__int64 nn_atk_detail_fnd_2b47f0(__int64 a1, __int64 a2, int a3);

__int64 nn_atk_detail_fnd_2b3fd0(__int64 a1, __int64 a2, unsigned __int64 a3,
                                 unsigned int* a4, __int64 a5, __int64 a6)
{
  __int64 v7;
  __int64 v8;
  __int64 v16;
  unsigned __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  bool v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  bool v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned int v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned int v42;
  unsigned __int64 v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;

  v7 = *(_QWORD*)(a1 + 8);
  v8 = *(_QWORD*)(a1 + 24);
  if (v7 != 0 && v8 != 0 && *(_QWORD*)(a1 + 32) != 0) {
    v18 = *(_QWORD*)(a1 + 48);
    if (v18 == 0 || *(_BYTE*)(a1 + 56) != 2) {
      v24 = false;
      goto LABEL_19;
    }
    v19 = *(_QWORD*)(a1 + 40);
    if (v19 != (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 56LL))(v7)) {
      if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 88LL))(
               *(_QWORD*)(a1 + 8)) &
           1) == 0) {
        v20 = 0x80000000;
        goto LABEL_64;
      }
      v20 = (*(__int64 (**)(_QWORD, __int64, _QWORD))(
          **(_QWORD**)(a1 + 8) + 48LL))(*(_QWORD*)(a1 + 8), v19, 0);
      if ((v20 & 0x80000000) != 0) {
        goto LABEL_64;
      }
    }
    v21 = *(_QWORD*)(a1 + 8);
    v22 = *(_QWORD*)(a1 + 24);
    v23 = *(_QWORD*)(a1 + 48);
    v46 = 0;
    (*(void (**)(__int64, __int64, __int64, unsigned int*))(
        *(_QWORD*)v21 + 40LL))(v21, v22, v23, &v46);
    v20 = v46;
    *(_BYTE*)(a1 + 56) = 0;
    *(_QWORD*)(a1 + 40) = 0xFFFFFFFFLL;
    *(_QWORD*)(a1 + 48) = 0;
    if ((v20 & 0x80000000) == 0) {
      v8 = *(_QWORD*)(a1 + 24);
      v18 = 0;
      v24 = *(_QWORD*)(a1 + 8) == 0;
    LABEL_19:
      v25 = 0;
      if (!v24 && v8 != 0) {
        v25 = 0;
        if (*(_QWORD*)(a1 + 32) != 0 && *(_BYTE*)(a1 + 56) == 1) {
          v26 = *(_QWORD*)(a1 + 40);
          if (v26 == 0xFFFFFFFFLL ||
              (v27 = *(_QWORD*)(a1 + 16), v28 = __OFSUB__(v27, v26),
               (((v29 = v27 - v26) & 0x8000000000000000LL) != 0LL) ^ v28)) {
            v25 = 0;
          }
          else {
            v43 = v18 - v29;
            if (v18 < v29) {
              v43 = 0;
            }
            if (v18 >= v29 + a3) {
              v25 = a3;
            }
            else {
              v25 = v43;
            }
            if (v25 != 0) {
              memcpy(a2, v8 + v29, v25);
              *(_QWORD*)(a1 + 16) += v25;
            }
          }
        }
      }
      v30 = a3 - v25;
      if (a3 <= v25) {
        return a3;
      }
      v31 = *(_QWORD*)(a1 + 16);
      if (v31 == (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 56LL))(
                     *(_QWORD*)(a1 + 8))) {
      LABEL_31:
        v32 = *(_QWORD*)(a1 + 32);
        if (v30 <= v32) {
          if (a5 != 0) {
            (**(void (***)(__int64, __int64))a5)(a5, a6);
            v32 = *(_QWORD*)(a1 + 32);
          }
          v40 = *(_QWORD*)(a1 + 8);
          v41 = *(_QWORD*)(a1 + 24);
          v45 = 0;
          v34 = (*(__int64 (**)(__int64, __int64, unsigned __int64,
                                unsigned int*))(*(_QWORD*)v40 + 32LL))(
              v40, v41, v32, &v45);
          if (a5 != 0) {
            (*(void (**)(__int64, __int64))(*(_QWORD*)a5 + 8LL))(a5, a6);
          }
          v42 = v45;
          if (a4 != nullptr) {
            *a4 = v45;
          }
          if ((v42 & 0x80000000) == 0) {
            v36 = a2 + v25;
            *(_BYTE*)(a1 + 56) = 1;
            v39 = *(_QWORD*)(a1 + 24);
            if (v34 >= v30) {
              v37 = a3 - v25;
            }
            else {
              v37 = v34;
            }
            *(_QWORD*)(a1 + 40) = *(_QWORD*)(a1 + 16);
            *(_QWORD*)(a1 + 48) = v34;
            goto LABEL_55;
          }
        }
        else {
          if (a5 != 0) {
            (**(void (***)(__int64, __int64))a5)(a5, a6);
          }
          v33 = *(_QWORD*)(a1 + 8);
          v44 = 0;
          v34 = (*(__int64 (**)(__int64, __int64, unsigned __int64,
                                unsigned int*))(*(_QWORD*)v33 + 32LL))(
              v33, a2, a3 - v25, &v44);
          if (a5 != 0) {
            (*(void (**)(__int64, __int64))(*(_QWORD*)a5 + 8LL))(a5, a6);
          }
          v35 = v44;
          if (a4 != nullptr) {
            *a4 = v44;
          }
          if ((v35 & 0x80000000) == 0) {
            v36 = *(_QWORD*)(a1 + 24);
            v37 = *(_QWORD*)(a1 + 32);
            if (v37 >= v34) {
              v38 = v34;
            }
            else {
              v38 = *(_QWORD*)(a1 + 32);
            }
            *(_QWORD*)(a1 + 40) = *(_QWORD*)(a1 + 16) - v38;
            *(_QWORD*)(a1 + 48) = v38;
            v39 = a2 + -(__int16)v38;
          LABEL_55:
            memcpy(v36, v39, v37);
            v25 += v34;
            *(_QWORD*)(a1 + 16) += v30;
            if (v25 < a3) {
              return v25;
            }
            if (a4 != nullptr) {
              *a4 = 0;
            }
            return a3;
          }
        }
        GameRoutine_2b43c0(a1);
        return v25;
      }
      if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 88LL))(
               *(_QWORD*)(a1 + 8)) &
           1) != 0) {
        v20 = (*(__int64 (**)(_QWORD, __int64, _QWORD))(
            **(_QWORD**)(a1 + 8) + 48LL))(*(_QWORD*)(a1 + 8), v31, 0);
        if ((v20 & 0x80000000) == 0) {
          goto LABEL_31;
        }
      }
      else {
        v20 = 0x80000000;
      }
      if (a4 == nullptr) {
        return 0;
      }
    LABEL_65:
      v25 = 0;
      *a4 = v20;
      return v25;
    }
  LABEL_64:
    if (a4 == nullptr) {
      return 0;
    }
    goto LABEL_65;
  }
  if (a5 == 0) {
    return (*(__int64 (**)(__int64, __int64, unsigned __int64, unsigned int*))(
        *(_QWORD*)v7 + 32LL))(v7, a2, a3, a4);
  }
  (**(void (***)(__int64, __int64))a5)(a5, a6);
  v16 = (*(__int64 (**)(_QWORD, __int64, unsigned __int64, unsigned int*))(
      **(_QWORD**)(a1 + 8) + 32LL))(*(_QWORD*)(a1 + 8), a2, a3, a4);
  (*(void (**)(__int64, __int64))(*(_QWORD*)a5 + 8LL))(a5, a6);
  return v16;
}

__int64 nn_atk_detail_fnd_2b47f0(__int64 a1, __int64 a2, int a3)
{
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 result;
  __int64 v12;

  v6 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 64LL))(
      *(_QWORD*)(a1 + 8));
  v7 = *(__int64**)(a1 + 8);
  v8 = *v7;
  if (v7 == nullptr || *(_QWORD*)(a1 + 24) == 0 || *(_QWORD*)(a1 + 32) == 0) {
    return (*(__int64 (**)(__int64))(v8 + 48))((__int64)v7);
  }
  if (((*(__int64 (**)(__int64))(v8 + 88))((__int64)v7) & 1) == 0) {
    return 0x80000000LL;
  }
  if (a3 == 2) {
    v12 = *(_QWORD*)(a1 + 16) + a2;
    if (v6 <= v12) {
      return 0x80000000LL;
    }
    goto LABEL_21;
  }
  if (a3 == 1) {
    v12 = v6 - a2;
    if (v6 < a2) {
      return 0x80000000LL;
    }
  LABEL_21:
    *(_QWORD*)(a1 + 16) = v12;
    return 0;
  }
  result = 0x80000000LL;
  if (a3 == 0 && (a2 & 0x8000000000000000LL) == 0 && v6 > a2) {
    result = 0;
    *(_QWORD*)(a1 + 16) = a2;
  }
  return result;
}

#pragma GCC visibility pop
