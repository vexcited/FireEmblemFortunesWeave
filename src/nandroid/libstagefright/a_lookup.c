#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_lmem_CreateExpHeap_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_movie_detail_AllocateMemory(__int64, _QWORD**);
void __attribute__((noreturn)) nn_fs_10de70();
__int64 nandroid_ALookup_ALookup_4c4120(__int64 result, __int64* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        __int64 a5);
__int64 nandroid_ALookup_ALookup_51c760(__int64 result, __int64* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        __int64 a5);
__int64 nandroid_ALookup_ALookup_51c8c0(__int64 result, __int64* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        __int64 a5);
__int64 nandroid_ALookup_ALookup_51ca20(__int64 result, __int64* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        __int64 a5);
__int64 nandroid_ALookup_ALookup_51cb80(__int64 result, __int64* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        __int64 a5);
__int64 nandroid_ALookup_ALookup_51cce0(__int64 result, __int64* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        __int64 a5);
__int64 nandroid_ALookup_ALookup_51cea0(__int64 result, __int64* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        __int64 a5);
__int64 nandroid_ALookup_ALookup_51d000(__int64 result, __int64* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        __int64 a5);
__int64 nandroid_ALookup_ALookup_51d160(__int64 result, __int64* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        __int64 a5);
__int64 nandroid_ALookup_ALookup_51d320(__int64 result, __int64* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        __int64 a5);
__int64 nandroid_ALookup_ALookup_51d480(__int64 result, __int64* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        __int64 a5);
__int64 nandroid_ALookup_ALookup_51d5e0(__int64 result, __int64* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        __int64 a5);

__int64 nandroid_ALookup_ALookup_4c4120(__int64 result, __int64* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        __int64 a5)
{
  __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;

  v7 = result;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_DWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 88) = 1;
  if (a4 != 0) {
    result = nn_lmem_CreateExpHeap_plt(a4, a5, 0);
    *(_QWORD*)v7 = result;
    *(_QWORD*)(v7 + 8) = v7;
    *(_DWORD*)(v7 + 16) = 2;
  }
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = v7 + 8;
  if (a3 != 0) {
    if (a3 >> 61 != 0) {
      nn_fs_10de70();
    }
    result = nn_movie_detail_AllocateMemory(8 * a3, (_QWORD**)(v7 + 8));
    v8 = 8 * a3 - 8;
    *(_QWORD*)(v7 + 96) = result;
    *(_QWORD*)(v7 + 104) = result;
    *(_QWORD*)(v7 + 112) = result + 8 * a3;
    if ((~(8 * (_BYTE)a3 - 8) & 0x38) != 0) {
      v10 = -(__int64)(((unsigned __int8)((unsigned int)v8 >> 3) + 1) & 7);
      v9 = a2;
      do {
        v11 = *v9++;
        v12 = __CFADD__(v10++, 1);
        *(_QWORD*)result = v11;
        result += 8;
      } while (!v12);
    }
    else {
      v9 = a2;
    }
    if (v8 >= 0x38) {
      do {
        *(_QWORD*)result = *v9;
        *(_QWORD*)(result + 8) = v9[1];
        *(_QWORD*)(result + 16) = v9[2];
        *(_QWORD*)(result + 24) = v9[3];
        *(_QWORD*)(result + 32) = v9[4];
        *(_QWORD*)(result + 40) = v9[5];
        *(_QWORD*)(result + 48) = v9[6];
        v13 = v9[7];
        v9 += 8;
        *(_QWORD*)(result + 56) = v13;
        result += 64;
      } while (v9 != &a2[a3]);
    }
    *(_QWORD*)(v7 + 104) = result;
  }
  return result;
}

__int64 nandroid_ALookup_ALookup_51c760(__int64 result, __int64* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        __int64 a5)
{
  __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;

  v7 = result;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_DWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 88) = 1;
  if (a4 != 0) {
    result = nn_lmem_CreateExpHeap_plt(a4, a5, 0);
    *(_QWORD*)v7 = result;
    *(_QWORD*)(v7 + 8) = v7;
    *(_DWORD*)(v7 + 16) = 2;
  }
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = v7 + 8;
  if (a3 != 0) {
    if (a3 >> 61 != 0) {
      nn_fs_10de70();
    }
    result = nn_movie_detail_AllocateMemory(8 * a3, (_QWORD**)(v7 + 8));
    v8 = 8 * a3 - 8;
    *(_QWORD*)(v7 + 96) = result;
    *(_QWORD*)(v7 + 104) = result;
    *(_QWORD*)(v7 + 112) = result + 8 * a3;
    if ((~(8 * (_BYTE)a3 - 8) & 0x38) != 0) {
      v10 = -(__int64)(((unsigned __int8)((unsigned int)v8 >> 3) + 1) & 7);
      v9 = a2;
      do {
        v11 = *v9++;
        v12 = __CFADD__(v10++, 1);
        *(_QWORD*)result = v11;
        result += 8;
      } while (!v12);
    }
    else {
      v9 = a2;
    }
    if (v8 >= 0x38) {
      do {
        *(_QWORD*)result = *v9;
        *(_QWORD*)(result + 8) = v9[1];
        *(_QWORD*)(result + 16) = v9[2];
        *(_QWORD*)(result + 24) = v9[3];
        *(_QWORD*)(result + 32) = v9[4];
        *(_QWORD*)(result + 40) = v9[5];
        *(_QWORD*)(result + 48) = v9[6];
        v13 = v9[7];
        v9 += 8;
        *(_QWORD*)(result + 56) = v13;
        result += 64;
      } while (v9 != &a2[a3]);
    }
    *(_QWORD*)(v7 + 104) = result;
  }
  return result;
}

__int64 nandroid_ALookup_ALookup_51c8c0(__int64 result, __int64* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        __int64 a5)
{
  __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;

  v7 = result;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_DWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 88) = 1;
  if (a4 != 0) {
    result = nn_lmem_CreateExpHeap_plt(a4, a5, 0);
    *(_QWORD*)v7 = result;
    *(_QWORD*)(v7 + 8) = v7;
    *(_DWORD*)(v7 + 16) = 2;
  }
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = v7 + 8;
  if (a3 != 0) {
    if (a3 >> 61 != 0) {
      nn_fs_10de70();
    }
    result = nn_movie_detail_AllocateMemory(8 * a3, (_QWORD**)(v7 + 8));
    v8 = 8 * a3 - 8;
    *(_QWORD*)(v7 + 96) = result;
    *(_QWORD*)(v7 + 104) = result;
    *(_QWORD*)(v7 + 112) = result + 8 * a3;
    if ((~(8 * (_BYTE)a3 - 8) & 0x38) != 0) {
      v10 = -(__int64)(((unsigned __int8)((unsigned int)v8 >> 3) + 1) & 7);
      v9 = a2;
      do {
        v11 = *v9++;
        v12 = __CFADD__(v10++, 1);
        *(_QWORD*)result = v11;
        result += 8;
      } while (!v12);
    }
    else {
      v9 = a2;
    }
    if (v8 >= 0x38) {
      do {
        *(_QWORD*)result = *v9;
        *(_QWORD*)(result + 8) = v9[1];
        *(_QWORD*)(result + 16) = v9[2];
        *(_QWORD*)(result + 24) = v9[3];
        *(_QWORD*)(result + 32) = v9[4];
        *(_QWORD*)(result + 40) = v9[5];
        *(_QWORD*)(result + 48) = v9[6];
        v13 = v9[7];
        v9 += 8;
        *(_QWORD*)(result + 56) = v13;
        result += 64;
      } while (v9 != &a2[a3]);
    }
    *(_QWORD*)(v7 + 104) = result;
  }
  return result;
}

__int64 nandroid_ALookup_ALookup_51ca20(__int64 result, __int64* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        __int64 a5)
{
  __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;

  v7 = result;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_DWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 88) = 1;
  if (a4 != 0) {
    result = nn_lmem_CreateExpHeap_plt(a4, a5, 0);
    *(_QWORD*)v7 = result;
    *(_QWORD*)(v7 + 8) = v7;
    *(_DWORD*)(v7 + 16) = 2;
  }
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = v7 + 8;
  if (a3 != 0) {
    if (a3 >> 61 != 0) {
      nn_fs_10de70();
    }
    result = nn_movie_detail_AllocateMemory(8 * a3, (_QWORD**)(v7 + 8));
    v8 = 8 * a3 - 8;
    *(_QWORD*)(v7 + 96) = result;
    *(_QWORD*)(v7 + 104) = result;
    *(_QWORD*)(v7 + 112) = result + 8 * a3;
    if ((~(8 * (_BYTE)a3 - 8) & 0x38) != 0) {
      v10 = -(__int64)(((unsigned __int8)((unsigned int)v8 >> 3) + 1) & 7);
      v9 = a2;
      do {
        v11 = *v9++;
        v12 = __CFADD__(v10++, 1);
        *(_QWORD*)result = v11;
        result += 8;
      } while (!v12);
    }
    else {
      v9 = a2;
    }
    if (v8 >= 0x38) {
      do {
        *(_QWORD*)result = *v9;
        *(_QWORD*)(result + 8) = v9[1];
        *(_QWORD*)(result + 16) = v9[2];
        *(_QWORD*)(result + 24) = v9[3];
        *(_QWORD*)(result + 32) = v9[4];
        *(_QWORD*)(result + 40) = v9[5];
        *(_QWORD*)(result + 48) = v9[6];
        v13 = v9[7];
        v9 += 8;
        *(_QWORD*)(result + 56) = v13;
        result += 64;
      } while (v9 != &a2[a3]);
    }
    *(_QWORD*)(v7 + 104) = result;
  }
  return result;
}

__int64 nandroid_ALookup_ALookup_51cb80(__int64 result, __int64* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        __int64 a5)
{
  __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;

  v7 = result;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_DWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 88) = 1;
  if (a4 != 0) {
    result = nn_lmem_CreateExpHeap_plt(a4, a5, 0);
    *(_QWORD*)v7 = result;
    *(_QWORD*)(v7 + 8) = v7;
    *(_DWORD*)(v7 + 16) = 2;
  }
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = v7 + 8;
  if (a3 != 0) {
    if (a3 >> 61 != 0) {
      nn_fs_10de70();
    }
    result = nn_movie_detail_AllocateMemory(8 * a3, (_QWORD**)(v7 + 8));
    v8 = 8 * a3 - 8;
    *(_QWORD*)(v7 + 96) = result;
    *(_QWORD*)(v7 + 104) = result;
    *(_QWORD*)(v7 + 112) = result + 8 * a3;
    if ((~(8 * (_BYTE)a3 - 8) & 0x38) != 0) {
      v10 = -(__int64)(((unsigned __int8)((unsigned int)v8 >> 3) + 1) & 7);
      v9 = a2;
      do {
        v11 = *v9++;
        v12 = __CFADD__(v10++, 1);
        *(_QWORD*)result = v11;
        result += 8;
      } while (!v12);
    }
    else {
      v9 = a2;
    }
    if (v8 >= 0x38) {
      do {
        *(_QWORD*)result = *v9;
        *(_QWORD*)(result + 8) = v9[1];
        *(_QWORD*)(result + 16) = v9[2];
        *(_QWORD*)(result + 24) = v9[3];
        *(_QWORD*)(result + 32) = v9[4];
        *(_QWORD*)(result + 40) = v9[5];
        *(_QWORD*)(result + 48) = v9[6];
        v13 = v9[7];
        v9 += 8;
        *(_QWORD*)(result + 56) = v13;
        result += 64;
      } while (v9 != &a2[a3]);
    }
    *(_QWORD*)(v7 + 104) = result;
  }
  return result;
}

__int64 nandroid_ALookup_ALookup_51cce0(__int64 result, __int64* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        __int64 a5)
{
  __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  bool v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;

  v7 = result;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_DWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 88) = 1;
  if (a4 != 0) {
    result = nn_lmem_CreateExpHeap_plt(a4, a5, 0);
    *(_QWORD*)v7 = result;
    *(_QWORD*)(v7 + 8) = v7;
    *(_DWORD*)(v7 + 16) = 2;
  }
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = v7 + 8;
  if (a3 != 0) {
    if (a3 >= 0x1555555555555556LL) {
      nn_fs_10de70();
    }
    result = nn_movie_detail_AllocateMemory(12 * a3, (_QWORD**)(v7 + 8));
    v8 = 12 * a3 - 12;
    *(_QWORD*)(v7 + 96) = result;
    *(_QWORD*)(v7 + 104) = result;
    *(_QWORD*)(v7 + 112) = result + 12 * a3;
    if ((~(v8 / 0xC) & 7) != 0) {
      v10 = -(__int64)(((unsigned __int8)(v8 / 0xC) + 1) & 7);
      v9 = a2;
      do {
        v11 = *v9;
        v12 = *((_DWORD*)v9 + 2);
        v9 = (__int64*)((char*)v9 + 12);
        v13 = __CFADD__(v10++, 1);
        *(_DWORD*)(result + 8) = v12;
        *(_QWORD*)result = v11;
        result += 12;
      } while (!v13);
    }
    else {
      v9 = a2;
    }
    if (v8 >= 0x54) {
      do {
        v14 = *v9;
        *(_DWORD*)(result + 8) = *((_DWORD*)v9 + 2);
        *(_QWORD*)result = v14;
        v15 = *(__int64*)((char*)v9 + 12);
        *(_DWORD*)(result + 20) = *((_DWORD*)v9 + 5);
        *(_QWORD*)(result + 12) = v15;
        v16 = v9[3];
        *(_DWORD*)(result + 32) = *((_DWORD*)v9 + 8);
        *(_QWORD*)(result + 24) = v16;
        v17 = *(__int64*)((char*)v9 + 36);
        *(_DWORD*)(result + 44) = *((_DWORD*)v9 + 11);
        *(_QWORD*)(result + 36) = v17;
        v18 = v9[6];
        *(_DWORD*)(result + 56) = *((_DWORD*)v9 + 14);
        *(_QWORD*)(result + 48) = v18;
        v19 = *(__int64*)((char*)v9 + 60);
        *(_DWORD*)(result + 68) = *((_DWORD*)v9 + 17);
        *(_QWORD*)(result + 60) = v19;
        v20 = v9[9];
        *(_DWORD*)(result + 80) = *((_DWORD*)v9 + 20);
        *(_QWORD*)(result + 72) = v20;
        v21 = *(__int64*)((char*)v9 + 84);
        v22 = *((_DWORD*)v9 + 23);
        v9 += 12;
        *(_DWORD*)(result + 92) = v22;
        *(_QWORD*)(result + 84) = v21;
        result += 96;
      } while (v9 != (__int64*)((char*)a2 + 12 * a3));
    }
    *(_QWORD*)(v7 + 104) = result;
  }
  return result;
}

__int64 nandroid_ALookup_ALookup_51cea0(__int64 result, __int64* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        __int64 a5)
{
  __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;

  v7 = result;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_DWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 88) = 1;
  if (a4 != 0) {
    result = nn_lmem_CreateExpHeap_plt(a4, a5, 0);
    *(_QWORD*)v7 = result;
    *(_QWORD*)(v7 + 8) = v7;
    *(_DWORD*)(v7 + 16) = 2;
  }
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = v7 + 8;
  if (a3 != 0) {
    if (a3 >> 61 != 0) {
      nn_fs_10de70();
    }
    result = nn_movie_detail_AllocateMemory(8 * a3, (_QWORD**)(v7 + 8));
    v8 = 8 * a3 - 8;
    *(_QWORD*)(v7 + 96) = result;
    *(_QWORD*)(v7 + 104) = result;
    *(_QWORD*)(v7 + 112) = result + 8 * a3;
    if ((~(8 * (_BYTE)a3 - 8) & 0x38) != 0) {
      v10 = -(__int64)(((unsigned __int8)((unsigned int)v8 >> 3) + 1) & 7);
      v9 = a2;
      do {
        v11 = *v9++;
        v12 = __CFADD__(v10++, 1);
        *(_QWORD*)result = v11;
        result += 8;
      } while (!v12);
    }
    else {
      v9 = a2;
    }
    if (v8 >= 0x38) {
      do {
        *(_QWORD*)result = *v9;
        *(_QWORD*)(result + 8) = v9[1];
        *(_QWORD*)(result + 16) = v9[2];
        *(_QWORD*)(result + 24) = v9[3];
        *(_QWORD*)(result + 32) = v9[4];
        *(_QWORD*)(result + 40) = v9[5];
        *(_QWORD*)(result + 48) = v9[6];
        v13 = v9[7];
        v9 += 8;
        *(_QWORD*)(result + 56) = v13;
        result += 64;
      } while (v9 != &a2[a3]);
    }
    *(_QWORD*)(v7 + 104) = result;
  }
  return result;
}

__int64 nandroid_ALookup_ALookup_51d000(__int64 result, __int64* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        __int64 a5)
{
  __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;

  v7 = result;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_DWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 88) = 1;
  if (a4 != 0) {
    result = nn_lmem_CreateExpHeap_plt(a4, a5, 0);
    *(_QWORD*)v7 = result;
    *(_QWORD*)(v7 + 8) = v7;
    *(_DWORD*)(v7 + 16) = 2;
  }
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = v7 + 8;
  if (a3 != 0) {
    if (a3 >> 61 != 0) {
      nn_fs_10de70();
    }
    result = nn_movie_detail_AllocateMemory(8 * a3, (_QWORD**)(v7 + 8));
    v8 = 8 * a3 - 8;
    *(_QWORD*)(v7 + 96) = result;
    *(_QWORD*)(v7 + 104) = result;
    *(_QWORD*)(v7 + 112) = result + 8 * a3;
    if ((~(8 * (_BYTE)a3 - 8) & 0x38) != 0) {
      v10 = -(__int64)(((unsigned __int8)((unsigned int)v8 >> 3) + 1) & 7);
      v9 = a2;
      do {
        v11 = *v9++;
        v12 = __CFADD__(v10++, 1);
        *(_QWORD*)result = v11;
        result += 8;
      } while (!v12);
    }
    else {
      v9 = a2;
    }
    if (v8 >= 0x38) {
      do {
        *(_QWORD*)result = *v9;
        *(_QWORD*)(result + 8) = v9[1];
        *(_QWORD*)(result + 16) = v9[2];
        *(_QWORD*)(result + 24) = v9[3];
        *(_QWORD*)(result + 32) = v9[4];
        *(_QWORD*)(result + 40) = v9[5];
        *(_QWORD*)(result + 48) = v9[6];
        v13 = v9[7];
        v9 += 8;
        *(_QWORD*)(result + 56) = v13;
        result += 64;
      } while (v9 != &a2[a3]);
    }
    *(_QWORD*)(v7 + 104) = result;
  }
  return result;
}

__int64 nandroid_ALookup_ALookup_51d160(__int64 result, __int64* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        __int64 a5)
{
  __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  bool v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;

  v7 = result;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_DWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 88) = 1;
  if (a4 != 0) {
    result = nn_lmem_CreateExpHeap_plt(a4, a5, 0);
    *(_QWORD*)v7 = result;
    *(_QWORD*)(v7 + 8) = v7;
    *(_DWORD*)(v7 + 16) = 2;
  }
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = v7 + 8;
  if (a3 != 0) {
    if (a3 >= 0x1555555555555556LL) {
      nn_fs_10de70();
    }
    result = nn_movie_detail_AllocateMemory(12 * a3, (_QWORD**)(v7 + 8));
    v8 = 12 * a3 - 12;
    *(_QWORD*)(v7 + 96) = result;
    *(_QWORD*)(v7 + 104) = result;
    *(_QWORD*)(v7 + 112) = result + 12 * a3;
    if ((~(v8 / 0xC) & 7) != 0) {
      v10 = -(__int64)(((unsigned __int8)(v8 / 0xC) + 1) & 7);
      v9 = a2;
      do {
        v11 = *v9;
        v12 = *((_DWORD*)v9 + 2);
        v9 = (__int64*)((char*)v9 + 12);
        v13 = __CFADD__(v10++, 1);
        *(_DWORD*)(result + 8) = v12;
        *(_QWORD*)result = v11;
        result += 12;
      } while (!v13);
    }
    else {
      v9 = a2;
    }
    if (v8 >= 0x54) {
      do {
        v14 = *v9;
        *(_DWORD*)(result + 8) = *((_DWORD*)v9 + 2);
        *(_QWORD*)result = v14;
        v15 = *(__int64*)((char*)v9 + 12);
        *(_DWORD*)(result + 20) = *((_DWORD*)v9 + 5);
        *(_QWORD*)(result + 12) = v15;
        v16 = v9[3];
        *(_DWORD*)(result + 32) = *((_DWORD*)v9 + 8);
        *(_QWORD*)(result + 24) = v16;
        v17 = *(__int64*)((char*)v9 + 36);
        *(_DWORD*)(result + 44) = *((_DWORD*)v9 + 11);
        *(_QWORD*)(result + 36) = v17;
        v18 = v9[6];
        *(_DWORD*)(result + 56) = *((_DWORD*)v9 + 14);
        *(_QWORD*)(result + 48) = v18;
        v19 = *(__int64*)((char*)v9 + 60);
        *(_DWORD*)(result + 68) = *((_DWORD*)v9 + 17);
        *(_QWORD*)(result + 60) = v19;
        v20 = v9[9];
        *(_DWORD*)(result + 80) = *((_DWORD*)v9 + 20);
        *(_QWORD*)(result + 72) = v20;
        v21 = *(__int64*)((char*)v9 + 84);
        v22 = *((_DWORD*)v9 + 23);
        v9 += 12;
        *(_DWORD*)(result + 92) = v22;
        *(_QWORD*)(result + 84) = v21;
        result += 96;
      } while (v9 != (__int64*)((char*)a2 + 12 * a3));
    }
    *(_QWORD*)(v7 + 104) = result;
  }
  return result;
}

__int64 nandroid_ALookup_ALookup_51d320(__int64 result, __int64* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        __int64 a5)
{
  __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;

  v7 = result;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_DWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 88) = 1;
  if (a4 != 0) {
    result = nn_lmem_CreateExpHeap_plt(a4, a5, 0);
    *(_QWORD*)v7 = result;
    *(_QWORD*)(v7 + 8) = v7;
    *(_DWORD*)(v7 + 16) = 2;
  }
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = v7 + 8;
  if (a3 != 0) {
    if (a3 >> 61 != 0) {
      nn_fs_10de70();
    }
    result = nn_movie_detail_AllocateMemory(8 * a3, (_QWORD**)(v7 + 8));
    v8 = 8 * a3 - 8;
    *(_QWORD*)(v7 + 96) = result;
    *(_QWORD*)(v7 + 104) = result;
    *(_QWORD*)(v7 + 112) = result + 8 * a3;
    if ((~(8 * (_BYTE)a3 - 8) & 0x38) != 0) {
      v10 = -(__int64)(((unsigned __int8)((unsigned int)v8 >> 3) + 1) & 7);
      v9 = a2;
      do {
        v11 = *v9++;
        v12 = __CFADD__(v10++, 1);
        *(_QWORD*)result = v11;
        result += 8;
      } while (!v12);
    }
    else {
      v9 = a2;
    }
    if (v8 >= 0x38) {
      do {
        *(_QWORD*)result = *v9;
        *(_QWORD*)(result + 8) = v9[1];
        *(_QWORD*)(result + 16) = v9[2];
        *(_QWORD*)(result + 24) = v9[3];
        *(_QWORD*)(result + 32) = v9[4];
        *(_QWORD*)(result + 40) = v9[5];
        *(_QWORD*)(result + 48) = v9[6];
        v13 = v9[7];
        v9 += 8;
        *(_QWORD*)(result + 56) = v13;
        result += 64;
      } while (v9 != &a2[a3]);
    }
    *(_QWORD*)(v7 + 104) = result;
  }
  return result;
}

__int64 nandroid_ALookup_ALookup_51d480(__int64 result, __int64* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        __int64 a5)
{
  __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;

  v7 = result;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_DWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 88) = 1;
  if (a4 != 0) {
    result = nn_lmem_CreateExpHeap_plt(a4, a5, 0);
    *(_QWORD*)v7 = result;
    *(_QWORD*)(v7 + 8) = v7;
    *(_DWORD*)(v7 + 16) = 2;
  }
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = v7 + 8;
  if (a3 != 0) {
    if (a3 >> 61 != 0) {
      nn_fs_10de70();
    }
    result = nn_movie_detail_AllocateMemory(8 * a3, (_QWORD**)(v7 + 8));
    v8 = 8 * a3 - 8;
    *(_QWORD*)(v7 + 96) = result;
    *(_QWORD*)(v7 + 104) = result;
    *(_QWORD*)(v7 + 112) = result + 8 * a3;
    if ((~(8 * (_BYTE)a3 - 8) & 0x38) != 0) {
      v10 = -(__int64)(((unsigned __int8)((unsigned int)v8 >> 3) + 1) & 7);
      v9 = a2;
      do {
        v11 = *v9++;
        v12 = __CFADD__(v10++, 1);
        *(_QWORD*)result = v11;
        result += 8;
      } while (!v12);
    }
    else {
      v9 = a2;
    }
    if (v8 >= 0x38) {
      do {
        *(_QWORD*)result = *v9;
        *(_QWORD*)(result + 8) = v9[1];
        *(_QWORD*)(result + 16) = v9[2];
        *(_QWORD*)(result + 24) = v9[3];
        *(_QWORD*)(result + 32) = v9[4];
        *(_QWORD*)(result + 40) = v9[5];
        *(_QWORD*)(result + 48) = v9[6];
        v13 = v9[7];
        v9 += 8;
        *(_QWORD*)(result + 56) = v13;
        result += 64;
      } while (v9 != &a2[a3]);
    }
    *(_QWORD*)(v7 + 104) = result;
  }
  return result;
}

__int64 nandroid_ALookup_ALookup_51d5e0(__int64 result, __int64* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        __int64 a5)
{
  __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;

  v7 = result;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_DWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 88) = 1;
  if (a4 != 0) {
    result = nn_lmem_CreateExpHeap_plt(a4, a5, 0);
    *(_QWORD*)v7 = result;
    *(_QWORD*)(v7 + 8) = v7;
    *(_DWORD*)(v7 + 16) = 2;
  }
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = v7 + 8;
  if (a3 != 0) {
    if (a3 >> 61 != 0) {
      nn_fs_10de70();
    }
    result = nn_movie_detail_AllocateMemory(8 * a3, (_QWORD**)(v7 + 8));
    v8 = 8 * a3 - 8;
    *(_QWORD*)(v7 + 96) = result;
    *(_QWORD*)(v7 + 104) = result;
    *(_QWORD*)(v7 + 112) = result + 8 * a3;
    if ((~(8 * (_BYTE)a3 - 8) & 0x38) != 0) {
      v10 = -(__int64)(((unsigned __int8)((unsigned int)v8 >> 3) + 1) & 7);
      v9 = a2;
      do {
        v11 = *v9++;
        v12 = __CFADD__(v10++, 1);
        *(_QWORD*)result = v11;
        result += 8;
      } while (!v12);
    }
    else {
      v9 = a2;
    }
    if (v8 >= 0x38) {
      do {
        *(_QWORD*)result = *v9;
        *(_QWORD*)(result + 8) = v9[1];
        *(_QWORD*)(result + 16) = v9[2];
        *(_QWORD*)(result + 24) = v9[3];
        *(_QWORD*)(result + 32) = v9[4];
        *(_QWORD*)(result + 40) = v9[5];
        *(_QWORD*)(result + 48) = v9[6];
        v13 = v9[7];
        v9 += 8;
        *(_QWORD*)(result + 56) = v13;
        result += 64;
      } while (v9 != &a2[a3]);
    }
    *(_QWORD*)(v7 + 104) = result;
  }
  return result;
}

#pragma GCC visibility pop
