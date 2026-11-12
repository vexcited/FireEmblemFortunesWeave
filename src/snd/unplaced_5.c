#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameHr_188d70(__int64, __int64, int);
__int64 snd_fnd_WeakHandle_get(__int64);
extern __int64* snd_g_memory_ptr[2];
__int64 snd_1898a0(__int64 a1);

__int64 snd_1898a0(__int64 a1)
{
  __int64 result;
  int v3;
  __int64* v4;
  __int64 v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  int v18;
  int v20;
  __int64 v21;
  int v22;
  __int64 v24;
  int v25;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 152LL))(a1);
  if ((result & 1) != 0) {
    v3 = 0x4000;
    v4 = snd_g_memory_ptr[0];
    v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 0x4000,
                                                 32);
    v6 = 0;
    v7 = *(_DWORD*)(*(_QWORD*)(a1 + 160) + 64LL);
    while (1) {
      v8 = snd_fnd_WeakHandle_get(*(_QWORD*)(a1 + 48) + 24LL);
      if (v8 != 0) {
        LODWORD(v8) = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 80LL))(v8);
      }
      if (v7 >= (int)v8) {
        break;
      }
      v9 = snd_fnd_WeakHandle_get(*(_QWORD*)(a1 + 48) + 24LL);
      if (v9 != 0) {
        LODWORD(v9) = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 80LL))(v9);
      }
      if (v3 + v7 > (int)v9) {
        v10 = snd_fnd_WeakHandle_get(*(_QWORD*)(a1 + 48) + 24LL);
        if (v10 != 0) {
          LODWORD(v10) = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 80LL))(v10);
        }
        v3 = v10 - v7;
      }
      v11 = *(_QWORD*)(a1 + 48);
      v12 = v7 & ~(v7 >> 31);
      *(_DWORD*)(a1 + 76) = v12;
      v13 = snd_fnd_WeakHandle_get(v11 + 24);
      if (v13 != 0) {
        LODWORD(v13) = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 80LL))(v13);
      }
      if (v12 > (int)v13) {
        v14 = snd_fnd_WeakHandle_get(*(_QWORD*)(a1 + 48) + 24LL);
        if (v14 != 0) {
          LODWORD(v14) = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 80LL))(v14);
        }
        *(_DWORD*)(a1 + 76) = v14;
      }
      GameHr_188d70(a1, v5, v3);
      if ((unsigned int)v3 <= 0xFFF) {
        v20 = 0;
        do {
          ++v6;
          v21 = *(_QWORD*)(a1 + 160);
          v20 += bswap32(*(_DWORD*)(v5 + v20)) + 8;
          v22 = *(_DWORD*)(v21 + 92);
          if (v22 >= 1 && v6 == v22) {
            *(_DWORD*)(v21 + 96) = v20 + v7;
          }
        } while (v20 < v3);
        v7 += v20;
      }
      else {
        v15 = 0;
        do {
          ++v6;
          v17 = *(_QWORD*)(a1 + 160);
          v15 += bswap32(*(_DWORD*)(v5 + v15)) + 8;
          v18 = *(_DWORD*)(v17 + 92);
          if (v18 >= 1 && v6 == v18) {
            *(_DWORD*)(v17 + 96) = v15 + v7;
          }
          if (v3 - 4096LL > (unsigned __int64)v15 && v15 < v3) {
            v16 = 0;
          }
          else {
            v16 = v15;
          }
          v7 += v16;
        } while (v3 - 4096LL > (unsigned __int64)v15 && v15 < v3);
      }
    }
    v24 = *v4;
    if (v6 <= 1) {
      v25 = 1;
    }
    else {
      v25 = v6;
    }
    *(_DWORD*)(*(_QWORD*)(a1 + 160) + 88LL) = v25 - 1;
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v24 + 24LL))(v24, v5);
  }
  return result;
}

#pragma GCC visibility pop
