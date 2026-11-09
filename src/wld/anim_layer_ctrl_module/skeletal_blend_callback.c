#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ec38[6];
void __attribute__((noreturn)) GameRoutine_ce5300(void);
__int64 SkeletalBlendCallback_Unknown2(__int64 result, __int64 a2);
__int64* SkeletalBlendCallback_ce5120(__int64* result, _QWORD* a2);

__int64 SkeletalBlendCallback_Unknown2(__int64 result, __int64 a2)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  _BYTE* i;
  __int64 v7;
  __int64 v8;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  float v14;
  float v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;

  v2 = *(_QWORD*)(result + 8);
  v3 = *(_DWORD*)(v2 + 80);
  if ((v3 & 0x80000000) == 0) {
    v4 = 0;
    v5 = 104LL * v3 + 104;
    for (i = (_BYTE*)(*(_QWORD*)(v2 + 56) + 4LL);; i += 8) {
      if (*i == 1) {
        v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 24) + 72LL) + v4);
        if (v7 != 0) {
          v8 = *(_QWORD*)(v7 + 24);
          if (v8 != 0 && v8 == *(_QWORD*)a2) {
            break;
          }
        }
      }
      v4 += 104;
      if (v5 == v4) {
        return result;
      }
    }
    v10 = *((_DWORD*)i - 1);
    v11 = *(_QWORD*)(v2 + 88);
    v12 = *(_QWORD*)(v2 + 96);
    v13 = v11;
    if (v11 != v12) {
      v13 = v11;
      while (*(_DWORD*)(v13 + 48) != v10) {
        v13 += 64;
        if (v13 == v12) {
          goto LABEL_19;
        }
      }
    }
    if (v13 == v12) {
    LABEL_19:
      if (v11 == v12) {
        v14 = 1.0;
      }
      else {
        v16 = *(int*)(a2 + 8);
        v14 = 1.0;
        v17 = v16 >> 6;
        v18 = 1LL << v16;
        do {
          if (*(_DWORD*)(v11 + 56) == 1 && v10 < *(_DWORD*)(v11 + 48) &&
              (*(_QWORD*)(*(_QWORD*)(v11 + 24) + 8 * v17) & v18) != 0) {
            v14 = v14 * (float)(1.0 - *(float*)(v11 + 52));
          }
          v11 += 64;
        } while (v11 != v12);
      }
      v15 = *(float*)(a2 + 12);
    }
    else {
      if (((*(_QWORD*)(*(_QWORD*)(v13 + 24) +
                       8 * ((unsigned __int64)*(int*)(a2 + 8) >> 6)) >>
            *(_DWORD*)(a2 + 8)) &
           1) == 0) {
        *(_DWORD*)(a2 + 12) = 0;
        return result;
      }
      v14 = *(float*)(a2 + 12);
      v15 = *(float*)(v13 + 52);
    }
    *(float*)(a2 + 12) = v14 * v15;
  }
  return result;
}

__int64* SkeletalBlendCallback_ce5120(__int64* result, _QWORD* a2)
{
  _QWORD* v2;
  __int64 (***v3)(_QWORD);
  __int64* v5;
  __int64** v6;
  _QWORD* v7;
  __int64* v8;
  __int64* v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  __int64* v13;
  char* v14;
  char* v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 (***v23)(_QWORD);
  __int64 (**v24)(_QWORD);
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64** v28;
  __int64* v29;

  v3 = (__int64 (***)(_QWORD))*result;
  v2 = (_QWORD*)result[1];
  v5 = result;
  v6 = (__int64**)(a2[1] + *result - (_QWORD)v2);
  if (v2 != (_QWORD*)*result) {
    v29 = result;
    v7 = (_QWORD*)*result;
    v28 = (__int64**)(a2[1] + *result - (_QWORD)v2);
    v8 = GameData_212ec38[0] + 2;
    do {
      *v6 = v8;
      v12 = (__int64*)v7[1];
      v13 = (__int64*)v7[2];
      v6[3] = nullptr;
      v6[4] = nullptr;
      v6[5] = nullptr;
      v6[1] = v12;
      v6[2] = v13;
      v15 = (char*)v7[3];
      v14 = (char*)v7[4];
      v16 = v14 - v15;
      if (v14 != v15) {
        if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * (v16 >> 3)) >=
            0x492492492492493LL) {
          GameRoutine_ce5300();
        }
        v17 = (__int64*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v14 - v15, 16, 0);
        v6[3] = v17;
        v6[4] = v17;
        v6[5] = (__int64*)((char*)v17 + v16);
        do {
          *v17 = *(_QWORD*)v15;
          v22 = *((_QWORD*)v15 + 1);
          v17[1] = v22;
          if (v22 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                                      memory_order_relaxed);
          }
          v17[2] = *((_QWORD*)v15 + 2);
          v18 = *((_QWORD*)v15 + 3);
          v19 = *((_QWORD*)v15 + 4);
          v20 = *((_QWORD*)v15 + 5);
          v21 = *((_QWORD*)v15 + 6);
          v15 += 56;
          v17[5] = v20;
          v17[6] = v21;
          v17[3] = v18;
          v17[4] = v19;
          v17 += 7;
        } while (v15 != v14);
        v6[4] = v17;
      }
      v9 = (__int64*)v7[6];
      v10 = (__int64*)v7[7];
      v11 = (__int64*)v7[8];
      v7 += 9;
      v6[7] = v10;
      v6[8] = v11;
      v6[6] = v9;
      v6 += 9;
    } while (v7 != v2);
    v6 = v28;
    v5 = v29;
    v23 = v3;
    do {
      v24 = *v23;
      v23 += 9;
      result = (__int64*)(*v24)(v3);
      v3 = v23;
    } while (v23 != v2);
  }
  a2[1] = v6;
  v25 = *v5;
  v5[1] = *v5;
  *v5 = a2[1];
  a2[1] = v25;
  v26 = v5[1];
  v5[1] = a2[2];
  a2[2] = v26;
  v27 = v5[2];
  v5[2] = a2[3];
  a2[3] = v27;
  *a2 = a2[1];
  return result;
}

#pragma GCC visibility pop
