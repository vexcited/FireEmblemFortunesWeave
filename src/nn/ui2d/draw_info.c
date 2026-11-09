#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_55dc90(__int64 result);
__int64 GameRoutine_5fd120(_QWORD);
__int64 GameRoutine_5fd2e0(_QWORD);
__int64 GameRoutine_5fdd40(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fdf40(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN* GameData_21361e0;
extern __int64* GameData_21361e8;
void GameRoutine_55dc00(__int64, int);
__int64 DrawInfo_5768c0(__int64 result, __int64 a2);
__int64 DrawInfo_5768f0(__int64 result);
void DrawInfo_576900(__int64 a1, int a2);
__int64 DrawInfo_576950(__int64 a1);
__int64 DrawInfo_5769a0(__int64 result, int a2);
__int64 DrawInfo_5769c0(__int64 result, __int64 a2, int a3, int a4);
_QWORD* DrawInfo_5769d0(_QWORD* result, __int64* a2);
__int64 DrawInfo_576a40(__int64 a1, __int64 a2, unsigned __int16 a3);
__int64 DrawInfo_576aa0(__int64 a1, __int64 a2);
long double DrawInfo_576b20(__int64 a1, __int64 a2);
long double DrawInfo_576b40(__int64 a1, __int64 a2);
__int64* DrawInfo_Destructor();
__int64 GameRoutine_5fcb50(_QWORD);
__int64 GameRoutine_5fcb70(_QWORD);
extern _UNKNOWN** GameData_2136818[3];
extern _UNKNOWN** GameData_2136820[2];
extern _UNKNOWN** GameData_2136828;
void DrawInfo_55dc00(__int64 a1, int a2);
__int64 DrawInfo_55dc90(__int64 result);
__int64 DrawInfo_5fdd40(__int64 a1, unsigned int a2, unsigned int a3,
                        __int64 a4);
__int64 DrawInfo_5fdf40(__int64 a1, __int64 a2, int a3, __int64 a4);

void DrawInfo_55dc00(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  if ((*(_DWORD*)(a1 + 44) & 0x80000000) != 0) {
    v2 = *(_QWORD*)(a1 + 8);
    *(_DWORD*)(a1 + 44) = a2;
    if (v2 != 0) {
      v3 = a1;
      v4 = GameRoutine_5fcb50(v2 + 72LL * a2);
      a1 = v3;
      *(_QWORD*)(v3 + 56) = v4;
    }
    if ((*(_BYTE*)a1 & 1) != 0) {
      atomic_store(0, *(unsigned __int64**)(a1 + 64));
      atomic_store(0, *(unsigned __int64**)(a1 + 72));
    }
    else {
      *(_QWORD*)(a1 + 64) = 0;
      *(_QWORD*)(a1 + 72) = 0;
    }
  }
}

__int64 DrawInfo_55dc90(__int64 result)
{
  unsigned int v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_DWORD*)(result + 44);
  if ((v1 & 0x80000000) == 0) {
    v2 = *(_QWORD*)(result + 8);
    v3 = result;
    if (v2 != 0) {
      result = GameRoutine_5fcb70(v2 + 72LL * v1);
    }
    *(_QWORD*)(v3 + 56) = 0;
    *(_DWORD*)(v3 + 44) = -1;
    if ((*(_BYTE*)v3 & 1) != 0) {
      atomic_store(0, *(unsigned __int64**)(v3 + 64));
      atomic_store(0, *(unsigned __int64**)(v3 + 72));
    }
    else {
      *(_QWORD*)(v3 + 64) = 0;
      *(_QWORD*)(v3 + 72) = 0;
    }
  }
  return result;
}

__int64 DrawInfo_5768c0(__int64 result, __int64 a2)
{
  char v2;

  v2 = *(_BYTE*)(result + 404);
  *(_QWORD*)(result + 408) = 0;
  *(_WORD*)(result + 416) = 0;
  *(_QWORD*)(result + 192) = a2;
  *(_BYTE*)(result + 404) = v2 | 0x40;
  return result;
}

__int64 DrawInfo_5768f0(__int64 result)
{
  *(_QWORD*)(result + 408) = 0;
  *(_WORD*)(result + 416) = 0;
  return result;
}

void DrawInfo_576900(__int64 a1, int a2)
{
  __int64 v3;
  __int64 v5;

  v3 = *(_QWORD*)(a1 + 200);
  if (v3 != 0) {
    GameRoutine_55dc00(v3, a2);
  }
  v5 = *(_QWORD*)(a1 + 208);
  if (v5 != 0) {
    GameRoutine_55dc00(v5, a2);
  }
}

__int64 DrawInfo_576950(__int64 a1)
{
  __int64 v2;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 200);
  if (v2 != 0) {
    GameRoutine_55dc90(v2);
  }
  result = *(_QWORD*)(a1 + 208);
  if (result != 0) {
    return GameRoutine_55dc90(result);
  }
  return result;
}

__int64 DrawInfo_5769a0(__int64 result, int a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *(_QWORD*)(result + 200);
  if (v2 != 0) {
    *(_DWORD*)(v2 + 48) = a2;
  }
  v3 = *(_QWORD*)(result + 208);
  if (v3 != 0) {
    *(_DWORD*)(v3 + 48) = a2;
  }
  return result;
}

__int64 DrawInfo_5769c0(__int64 result, __int64 a2, int a3, int a4)
{
  *(_QWORD*)(result + 216) = a2;
  *(_DWORD*)(result + 224) = a3;
  *(_DWORD*)(result + 228) = a4;
  return result;
}

_QWORD* DrawInfo_5769d0(_QWORD* result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = a2[7];
  result[7] = a2[5];
  result[9] = v2;
  v3 = a2[3];
  result[3] = a2[1];
  result[5] = v3;
  v4 = *a2;
  result[4] = a2[2];
  result[2] = v4;
  v5 = a2[4];
  result[8] = a2[6];
  result[6] = v5;
  return result;
}

__int64 DrawInfo_576a40(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  bool v3;
  unsigned int v4;

  v3 = *(_QWORD*)(a1 + 408) == a2 && *(unsigned __int16*)(a1 + 416) == a3;
  v4 = !v3;
  if (!v3) {
    *(_QWORD*)(a1 + 408) = a2;
    *(_WORD*)(a1 + 416) = a3;
  }
  return v4;
}

__int64 DrawInfo_576aa0(__int64 a1, __int64 a2)
{
  __int64 result;

  GameRoutine_5fdf40(a2, 0, 1, a1 + 304);
  result = GameRoutine_5fdd40(a2, 0, 1, a1 + 256);
  if (*(_QWORD*)(a1 + 344) != 0) {
    result = GameRoutine_5fd2e0(a2);
  }
  if (*(_QWORD*)(a1 + 352) != 0) {
    return GameRoutine_5fd120(a2);
  }
  return result;
}

long double DrawInfo_576b20(__int64 a1, __int64 a2)
{
  long double result;
  __int128 v3;
  __int128 v4;
  __int128 v5;

  result = *(long double*)(a1 + 16);
  v3 = *(_OWORD*)(a1 + 32);
  v4 = *(_OWORD*)(a1 + 48);
  v5 = *(_OWORD*)(a1 + 64);
  *(long double*)a2 = result;
  *(_OWORD*)(a2 + 16) = v3;
  *(_OWORD*)(a2 + 32) = v4;
  *(_OWORD*)(a2 + 48) = v5;
  return result;
}

long double DrawInfo_576b40(__int64 a1, __int64 a2)
{
  long double result;
  __int128 v3;
  __int128 v4;

  if ((*(_BYTE*)(a1 + 404) & 0x20) == 0) {
    result = *(long double*)(a1 + 128);
    v3 = *(_OWORD*)(a1 + 144);
    v4 = *(_OWORD*)(a1 + 160);
    *(_BYTE*)(a1 + 404) |= 0x20u;
    *(long double*)a2 = result;
    *(_OWORD*)(a2 + 16) = v3;
    *(_OWORD*)(a2 + 32) = v4;
  }
  return result;
}

__int64* DrawInfo_Destructor()
{
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_21361e0,
                            memory_order_acquire) &
       1) != 0) {
    return GameData_21361e8;
  }
  if ((unsigned int)__cxa_guard_acquire(GameData_21361e0) != 0) {
    *GameData_21361e8 = 0;
    __cxa_guard_release(GameData_21361e0);
  }
  return GameData_21361e8;
}

__int64 DrawInfo_5fdd40(__int64 a1, unsigned int a2, unsigned int a3,
                        __int64 a4)
{
  __int64 v7;
  __int64 v8;
  _DWORD* v9;
  _QWORD* v10;
  int* v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  int v22;
  __int64 v23;
  int v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;
  int v29;
  _DWORD* v30;
  int v31;
  int v32;
  int v33;
  _QWORD v35[16];
  _QWORD v36[32];

  memset(v36, 0, sizeof(v36));
  memset(v35, 0, sizeof(v35));
  if ((int)a3 >= 1) {
    v7 = a3 & 3;
    if (a3 < 4) {
      v8 = 0;
      v9 = v35;
      v10 = v36;
      if ((a3 & 3) == 0) {
        goto LABEL_10;
      }
      goto LABEL_8;
    }
    v11 = (int*)(a4 + 96);
    v12 = v35;
    v13 = v36;
    v14 = 0;
    do {
      v15 = *(v11 - 24);
      v16 = *(v11 - 21);
      v14 -= 4;
      v17 = *((_QWORD*)v11 - 10);
      *(_QWORD*)((char*)v13 + 4) = *(_QWORD*)(v11 - 23);
      v18 = *((_QWORD*)v11 - 6);
      *v12 = v17;
      v9 = v12 + 4;
      *(_DWORD*)v13 = v15;
      *((_DWORD*)v13 + 3) = v16;
      v13[2] = v18;
      v19 = *(v11 - 9);
      v20 = *(_QWORD*)(v11 + 1);
      *((_DWORD*)v13 + 6) = *(v11 - 10);
      *((_DWORD*)v13 + 7) = v19;
      v21 = *(v11 - 8);
      v22 = *(v11 - 7);
      *(_QWORD*)((char*)v13 + 36) = v20;
      v23 = *((_QWORD*)v11 + 2);
      *((_DWORD*)v12 + 2) = v21;
      *((_DWORD*)v12 + 3) = v22;
      v24 = *v11;
      v12[2] = v23;
      v25 = *((_QWORD*)v11 + 6);
      *((_DWORD*)v13 + 8) = v24;
      v26 = v11[3];
      v13[6] = v25;
      v10 = v13 + 8;
      *((_DWORD*)v13 + 11) = v26;
      v27 = v11[15];
      *((_DWORD*)v13 + 14) = v11[14];
      *((_DWORD*)v13 + 15) = v27;
      v28 = v11[16];
      v29 = v11[17];
      v11 += 48;
      v13 += 8;
      *((_DWORD*)v12 + 6) = v28;
      *((_DWORD*)v12 + 7) = v29;
      v12 += 4;
    } while (-(__int64)(a3 & 0x7FFFFFFC) != v14);
    v8 = -v14;
    if ((a3 & 3) != 0) {
    LABEL_8:
      v30 = (_DWORD*)(a4 + 48 * v8 + 12);
      do {
        v31 = *(v30 - 3);
        --v7;
        *(_QWORD*)((char*)v10 + 4) = *((_QWORD*)v30 - 1);
        *(_DWORD*)v10 = v31;
        v32 = v30[1];
        *((_DWORD*)v10 + 3) = *v30;
        v33 = v30[2];
        v30 += 12;
        v10 += 2;
        *v9 = v32;
        v9[1] = v33;
        v9 += 2;
      } while (v7 != 0);
    }
  }

LABEL_10:
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD*))GameData_2136818[0])(
      *(_QWORD*)(a1 + 208), a2, a3, v36);
  return ((__int64 (*)(_QWORD, _QWORD, _QWORD, _QWORD*))*GameData_2136828)(
      *(_QWORD*)(a1 + 208), a2, a3, v35);
}

__int64 DrawInfo_5fdf40(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  _QWORD* v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  __int64 v18;
  int v19;
  _QWORD v21[32];

  memset(v21, 0, sizeof(v21));
  if (a3 >= 1) {
    v4 = a3 & 3;
    if ((unsigned int)a3 < 4) {
      v5 = 0;
      v6 = v21;
      if ((a3 & 3) == 0) {
        return (*(__int64 (**)(_QWORD))GameData_2136820[0])(
            *(_QWORD*)(a1 + 208));
      }
      goto LABEL_8;
    }
    v7 = (__int64*)(a4 + 64);
    v8 = v21;
    v9 = 0;
    do {
      v10 = *((_DWORD*)v7 - 15);
      v11 = *(v7 - 7);
      v9 -= 4;
      *(_DWORD*)v8 = *((_DWORD*)v7 - 16);
      *((_DWORD*)v8 + 1) = v10;
      v12 = *((_DWORD*)v7 - 8);
      v13 = *((_DWORD*)v7 - 7);
      v8[1] = v11;
      v14 = *(v7 - 3);
      *((_DWORD*)v8 + 4) = v12;
      *((_DWORD*)v8 + 5) = v13;
      v15 = *v7;
      v8[3] = v14;
      v8[4] = v15;
      v16 = *((_DWORD*)v7 + 3);
      *((_DWORD*)v8 + 10) = *((_DWORD*)v7 + 2);
      *((_DWORD*)v8 + 11) = v16;
      LODWORD(v15) = *((_DWORD*)v7 + 8);
      *(_QWORD*)((char*)v8 + 52) = *(__int64*)((char*)v7 + 36);
      v17 = *((_DWORD*)v7 + 11);
      *((_DWORD*)v8 + 12) = v15;
      v6 = v8 + 8;
      v7 += 16;
      *((_DWORD*)v8 + 15) = v17;
      v8 += 8;
    } while (-(__int64)(a3 & 0x7FFFFFFC) != v9);
    v5 = -v9;
    if ((a3 & 3) != 0) {
    LABEL_8:
      v18 = a4 + 32 * v5 + 8;
      do {
        --v4;
        *(_DWORD*)v6 = *(_DWORD*)(v18 - 8);
        *(_QWORD*)((char*)v6 + 4) = *(_QWORD*)(v18 - 4);
        v19 = *(_DWORD*)(v18 + 4);
        v18 += 32;
        *((_DWORD*)v6 + 3) = v19;
        v6 += 2;
      } while (v4 != 0);
    }
  }
  return (*(__int64 (**)(_QWORD))GameData_2136820[0])(*(_QWORD*)(a1 + 208));
}

#pragma GCC visibility pop
