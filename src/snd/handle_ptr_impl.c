#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_1905a40(_QWORD, _QWORD, _QWORD);
__int64 snd_Voice_hasFeature(_QWORD, _QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD, float);
extern __int64 snd_g_memory;
extern __int64* snd_g_memory_ptr[2];
void __attribute__((noreturn)) GameRoutine_1119d0(void);
__int64 HandlePtr_103db0(__int64 a1, __int64* a2, float a3);
__int64 HandlePtr_103f30(__int64 a1, __int64* a2, float a3);
__int64 HandlePtr_1116c0(__int64* a1, __int64* a2);
__int64* HandlePtr_111880(__int64* result, _QWORD* a2);
_QWORD* HandlePtr_111c00(__int64 a1, __int64 a2);
__int64* HandlePtr_111d60(__int64* result, _QWORD* a2);
__int64* HandlePtr_111ee0(__int64* result);

__int64 HandlePtr_103db0(__int64 a1, __int64* a2, float a3)
{
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v7;

  v3 = *a2;
  v4 = *(_QWORD*)(a1 + 8);
  result = snd_fnd_WeakHandle_get(*a2 + 5848, a3);
  v7 = result - 5592;
  if (result == 0) {
    v7 = 0;
  }
  if (v7 == v4) {
    if ((snd_Voice_hasFeature(v3, 29) & 1) != 0) {
      return (*(__int64 (**)(__int64, _QWORD, double, double))(
          *(_QWORD*)v3 + 752LL))(v3, 0, 0.0, 0.0);
    }
    else {
      return (*(__int64 (**)(__int64, _QWORD, _QWORD, double))(
          *(_QWORD*)v3 + 248LL))(v3, *(_QWORD*)(a1 + 16), 0, 0.0);
    }
  }
  return result;
}

__int64 HandlePtr_103f30(__int64 a1, __int64* a2, float a3)
{
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v7;

  v3 = *a2;
  v4 = *(_QWORD*)(a1 + 8);
  result = snd_fnd_WeakHandle_get(*a2 + 5848, a3);
  v7 = result - 5592;
  if (result == 0) {
    v7 = 0;
  }
  if (v7 == v4) {
    if ((snd_Voice_hasFeature(v3, 29) & 1) != 0) {
      return (*(__int64 (**)(__int64, _QWORD, double, double))(
          *(_QWORD*)v3 + 752LL))(v3, 0, 0.0, 0.0);
    }
    else {
      return (*(__int64 (**)(__int64, _QWORD, _QWORD, double))(
          *(_QWORD*)v3 + 248LL))(v3, *(_QWORD*)(a1 + 16), 0, 0.0);
    }
  }
  return result;
}

__int64 HandlePtr_1116c0(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;

  v2 = *a1;
  v3 = a1[1] - *a1;
  v4 = (v3 >> 6) + 1;
  if (v4 >> 58 != 0) {
    GameRoutine_1119d0();
  }
  v5 = a1[2];
  v26 = a1 + 2;
  v8 = snd_g_memory_ptr[0];
  v9 = v5 - v2;
  if (v9 >> 5 > v4) {
    v4 = v9 >> 5;
  }
  if ((unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFC0LL) {
    v10 = 0x3FFFFFFFFFFFFFFLL;
  }
  else {
    v10 = v4;
  }
  if ((unsigned __int64)(v10 - 0x400000000000000LL) >= 0xFC00000000000001LL) {
    v11 = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], v10 << 6,
                                                 32);
    v3 += v11;
    v22 = v11;
    v23 = v3;
    v25 = v11 + (v10 << 6);
    if ((*(_BYTE*)a2 & 1) != 0) {
      goto LABEL_9;
    }
  }
  else {
    v22 = 0;
    v23 = v3;
    v25 = v10 << 6;
    if ((*(_BYTE*)a2 & 1) != 0) {
    LABEL_9:
      GameRoutine_1905a40(v3, a2[2], a2[1]);
      goto LABEL_12;
    }
  }
  v12 = *a2;
  v13 = a2[2];
  *(_QWORD*)(v3 + 8) = a2[1];
  *(_QWORD*)(v3 + 16) = v13;
  *(_QWORD*)v3 = v12;

LABEL_12:
  v14 = *((_DWORD*)a2 + 6);
  *(_QWORD*)(v3 + 32) = 0;
  v15 = v3 + 32;
  *(_DWORD*)(v15 - 8) = v14;
  *(_DWORD*)(v15 + 8) = 0x2000;
  GameRoutine_112180(v15, a2 + 4);
  v16 = a2[7];
  *(_QWORD*)(v15 + 16) = a2[6];
  *(_QWORD*)(v15 + 24) = v16;
  v24 = v15 + 32;
  HandlePtr_111880(a1, &v22);
  v17 = a1[1];
  v19 = v23;
  v18 = v24;
  if (v23 != v24) {
    do {
      v21 = v18 - 64;
      v24 = v18 - 64;
      if ((*(_BYTE*)(v18 - 64) & 1) != 0) {
        (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v8 + 24LL))(
            *v8, *(_QWORD*)(v18 - 48));
        v21 = v24;
      }
      v18 = v21;
    } while (v19 != v21);
  }
  if (v22 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v8 + 24LL))(*v8);
  }
  return v17;
}

__int64* HandlePtr_111880(__int64* result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v3 = *result;
  v2 = result[1];
  v5 = result;
  v6 = a2[1] + *result - v2;
  if (v2 != *result) {
    v7 = 0;
    do {
      v15 = (__int64*)(v3 + v7);
      v16 = (_QWORD*)(v6 + v7);
      if ((*(_BYTE*)(v3 + v7) & 1) != 0) {
        GameRoutine_1905a40(v16, v15[2], v15[1]);
      }
      else {
        v8 = *v15;
        v9 = v15[1];
        v10 = v15[2];
        v16[1] = v9;
        v16[2] = v10;
        *v16 = v8;
      }
      v11 = v3 + v7;
      v12 = *(_DWORD*)(v3 + v7 + 24);
      *(_QWORD*)(v6 + v7 + 32) = 0;
      v13 = v6 + v7 + 32;
      *(_DWORD*)(v13 + 8) = 0x2000;
      *(_DWORD*)(v13 - 8) = v12;
      result = (__int64*)GameRoutine_112180(v13, v3 + v7 + 32);
      v14 = *(_QWORD*)(v3 + v7 + 56);
      v7 += 64;
      *(_QWORD*)(v13 + 16) = *(_QWORD*)(v11 + 48);
      *(_QWORD*)(v13 + 24) = v14;
    } while (v3 + v7 != v2);
    do {
      if ((*(_BYTE*)v3 & 1) != 0) {
        result = (__int64*)(*(__int64 (**)(__int64, _QWORD))(
            *(_QWORD*)snd_g_memory + 24LL))(snd_g_memory, *(_QWORD*)(v3 + 16));
      }
      v3 += 64;
    } while (v3 != v2);
  }
  a2[1] = v6;
  v17 = *v5;
  v5[1] = *v5;
  *v5 = a2[1];
  a2[1] = v17;
  v18 = v5[1];
  v5[1] = a2[2];
  a2[2] = v18;
  v19 = v5[2];
  v5[2] = a2[3];
  a2[3] = v19;
  *a2 = a2[1];
  return result;
}

_QWORD* HandlePtr_111c00(__int64 a1, __int64 a2)
{
  _QWORD* result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  *(_DWORD*)a1 = *(_DWORD*)a2;
  result = (_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(a2 + 8) & 1) != 0) {
    result = (_QWORD*)GameRoutine_1905a40(result, *(_QWORD*)(a2 + 24),
                                          *(_QWORD*)(a2 + 16));
    *(_QWORD*)(a1 + 40) = 0;
    *(_QWORD*)(a1 + 48) = 0;
    *(_QWORD*)(a1 + 32) = 0;
    v7 = *(_QWORD*)(a2 + 32);
    v8 = *(_QWORD*)(a2 + 40);
    v9 = v8 - v7;
    if (v8 == v7) {
      return result;
    }
  }
  else {
    v5 = *(_QWORD*)(a2 + 8);
    v6 = *(_QWORD*)(a2 + 24);
    result[1] = *(_QWORD*)(a2 + 16);
    result[2] = v6;
    *result = v5;
    *(_QWORD*)(a1 + 40) = 0;
    *(_QWORD*)(a1 + 48) = 0;
    *(_QWORD*)(a1 + 32) = 0;
    v7 = *(_QWORD*)(a2 + 32);
    v8 = *(_QWORD*)(a2 + 40);
    v9 = v8 - v7;
    if (v8 == v7) {
      return result;
    }
  }
  if (v9 < 0) {
    GameRoutine_1119d0();
  }
  v10 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], v9, 32);
  v11 = 0;
  *(_QWORD*)(a1 + 32) = v10;
  *(_QWORD*)(a1 + 40) = v10;
  *(_QWORD*)(a1 + 48) = v10 + v9;
  do {
    v16 = (__int64*)(v7 + v11);
    v17 = (_QWORD*)(v10 + v11);
    if ((*(_BYTE*)(v7 + v11) & 1) != 0) {
      GameRoutine_1905a40(v17, v16[2], v16[1]);
    }
    else {
      v18 = *v16;
      v19 = v16[1];
      v20 = v16[2];
      v17[1] = v19;
      v17[2] = v20;
      *v17 = v18;
    }
    v12 = v7 + v11;
    v13 = *(_DWORD*)(v7 + v11 + 24);
    *(_QWORD*)(v10 + v11 + 32) = 0;
    v14 = v10 + v11 + 32;
    *(_DWORD*)(v14 + 8) = 0x2000;
    *(_DWORD*)(v14 - 8) = v13;
    result = (_QWORD*)GameRoutine_112180(v14, v7 + v11 + 32);
    v15 = *(_QWORD*)(v7 + v11 + 56);
    v11 += 64;
    *(_QWORD*)(v14 + 16) = *(_QWORD*)(v12 + 48);
    *(_QWORD*)(v14 + 24) = v15;
  } while (v7 + v11 != v8);
  *(_QWORD*)(a1 + 40) = v10 + v11;
  return result;
}

__int64* HandlePtr_111d60(__int64* result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v3 = *result;
  v2 = result[1];
  v4 = a2[1];
  v6 = result;
  v7 = v4 + *result - v2;
  if (v2 != *result) {
    v8 = *result;
    v9 = v4 + *result - v2;
    do {
      result = HandlePtr_111c00(v9, v8);
      v8 += 56;
      v9 += 56;
    } while (v8 != v2);
    do {
      v10 = *(_QWORD*)(v3 + 32);
      if (v10 != 0) {
        v11 = *(_QWORD*)(v3 + 40);
        v12 = *(_QWORD*)(v3 + 32);
        if (v10 != v11) {
          v13 = *(_QWORD*)(v3 + 40);
          do {
            v14 = *(_BYTE*)(v13 - 64);
            v13 -= 64;
            if ((v14 & 1) != 0) {
              (*(void (**)(__int64, _QWORD))(*(_QWORD*)snd_g_memory + 24LL))(
                  snd_g_memory, *(_QWORD*)(v11 - 48));
            }
            v11 = v13;
          } while (v13 != v10);
          v12 = *(_QWORD*)(v3 + 32);
        }
        v15 = snd_g_memory;
        *(_QWORD*)(v3 + 40) = v10;
        result = (__int64*)(*(__int64 (**)(__int64, __int64))(*(_QWORD*)v15 +
                                                              24LL))(v15, v12);
      }
      if ((*(_BYTE*)(v3 + 8) & 1) != 0) {
        result = (__int64*)(*(__int64 (**)(__int64, _QWORD))(
            *(_QWORD*)snd_g_memory + 24LL))(snd_g_memory, *(_QWORD*)(v3 + 24));
      }
      v3 += 56;
    } while (v3 != v2);
  }
  a2[1] = v7;
  v16 = *v6;
  v6[1] = *v6;
  *v6 = a2[1];
  a2[1] = v16;
  v17 = v6[1];
  v6[1] = a2[2];
  a2[2] = v17;
  v18 = v6[2];
  v6[2] = a2[3];
  a2[3] = v18;
  *a2 = a2[1];
  return result;
}

__int64* HandlePtr_111ee0(__int64* result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  __int64* v3;
  __int64* v4;
  _QWORD* v5;
  unsigned __int64 v6;
  char* v7;
  char* v8;
  char* v9;
  _QWORD* v10;
  char* v11;
  char* v12;
  char* v13;
  __int64* v14;

  v1 = result[2] - *result;
  v2 = result[1] - *result;
  if (v1 > v2) {
    v14 = result + 2;
    v3 = snd_g_memory_ptr[0];
    if ((unsigned __int64)(((__int64)v2 >> 6) - 0x400000000000000LL) >=
        0xFC00000000000001LL) {
      v4 = result;
      v5 =
          X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                 PSEUDO_X8, _QWORD, unsigned __int64, __int64))(
                                 **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(
                                 (void*)*(_QWORD**)snd_g_memory_ptr[0],
                                 *snd_g_memory_ptr[0], v2, 32));
      result = v4;
      v6 = v4[2] - *v4;
      v10 = v5;
      v11 = (char*)v5 + v2;
      v12 = (char*)v5 + v2;
      v13 = (char*)v5 + v2;
      if (v2 >= v6) {
        goto LABEL_7;
      }
    }
    else {
      v10 = nullptr;
      v11 = (char*)v2;
      v12 = (char*)v2;
      v13 = (char*)v2;
      if (v2 >= v1) {
      LABEL_7:
        if (v10 != nullptr) {
          return (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)*v3 + 24LL))(
              *v3);
        }
        return result;
      }
    }
    result = HandlePtr_111880(result, &v10);
    v8 = v11;
    v7 = v12;
    if (v11 != v12) {
      do {
        v9 = v7 - 64;
        v12 = v7 - 64;
        if ((*(v7 - 64) & 1) != 0) {
          result = (__int64*)(*(__int64 (**)(__int64, _QWORD))(
              *(_QWORD*)*v3 + 24LL))(*v3, *((_QWORD*)v7 - 6));
          v9 = v12;
        }
        v7 = v9;
      } while (v8 != v9);
    }
    goto LABEL_7;
  }
  return result;
}

#pragma GCC visibility pop
