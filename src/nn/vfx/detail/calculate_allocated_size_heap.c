#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5b93c0(__int64 result, __int64);
__int64 GameRoutine_5c04f0(const char*, ...);
__int64 GameRoutine_5c71a0(_QWORD, _QWORD, _QWORD);
__int64 strcmp(_QWORD, _QWORD);
long double GameRoutine_5b6970(__int64);
__int64 CalculateAllocatedSizeHeap_Unknown2(__int64 a1, __int64 a2);
__int64 CalculateAllocatedSizeHeap_Unknown3(__int64 a1);
__int64 CalculateAllocatedSizeHeap_5c7020(
    __int64 result, __int64 (*a2)(__int64*, _QWORD, __int64), __int64 a3);
__int64 CalculateAllocatedSizeHeap_5c7360(
    __int64 result, __int64 (*a2)(__int64*, __int64, __int64), __int64 a3);
void CalculateAllocatedSizeHeap_5c7400(__int64 a1, __int64 a2, __int64* a3);
__int64 CalculateAllocatedSizeHeap_5c7840(__int64 a1, __int64 a2);
__int64 CalculateAllocatedSizeHeap_5c7a00(_QWORD* a1, __int64 a2);
__int64 CalculateAllocatedSizeHeap_5c7a60(__int64 a1, __int64 a2);
__int64 CalculateAllocatedSizeHeap_5c7400_alt1(
    __int64, __int64, __int64*) __asm__("CalculateAllocatedSizeHeap_5c7400");
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 CalculateAllocatedSizeHeap_5c6e20(__int64 a1, __int64 a2, __int64* a3);
__int64 CalculateAllocatedSizeHeap_5c78c0(__int64 a1, __int64 a2);

__int64 CalculateAllocatedSizeHeap_5c6e20(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v3;
  _DWORD* v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 result;
  __int64 v23;
  _DWORD* v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;

  v3 = *(unsigned int*)(a2 + 8);
  if ((_DWORD)v3 == -1) {
    v8 = 0;
  }
  else {
    v7 = (_DWORD*)(a2 + v3);
    v8 = 0;
    do {
      v9 = (unsigned int)v7[3];
      if (*v7 == 1413829445) {
        ++v8;
      }
      v7 = (_DWORD*)((char*)v7 + v9);
    } while ((_DWORD)v9 != -1);
  }
  v10 = *(_QWORD*)(a1 + 1112);
  *(_DWORD*)(a1 + 76) = v8;
  v11 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v10 + 16LL))(
      v10, 56LL * v8, 128);
  v12 = *(_QWORD*)(a1 + 1120);
  *(_QWORD*)(a1 + 88) = v11;
  *(_QWORD*)(a1 + 1120) = v12 + 56LL * v8;
  ++*(_DWORD*)(a1 + 1128);
  memset(v11, 0, 56LL * *(int*)(a1 + 76));
  v16 = *(int*)(a1 + 76);
  v17 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)(a1 + 1112) + 16LL))(*(_QWORD*)(a1 + 1112), 8 * v16, 128);
  v18 = *(_QWORD*)(a1 + 1120);
  *(_QWORD*)(a1 + 96) = v17;
  *(_QWORD*)(a1 + 1120) = v18 + 8 * v16;
  ++*(_DWORD*)(a1 + 1128);
  result = memset(v17, 0, 8LL * *(int*)(a1 + 76));
  v23 = *(unsigned int*)(a2 + 8);
  if ((_DWORD)v23 != -1) {
    v24 = (_DWORD*)(a2 + v23);
    while (*v24 != 1413829445) {
      v25 = (unsigned int)v24[3];
      v24 = (_DWORD*)((char*)v24 + v25);
      if ((_DWORD)v25 == -1) {
        return result;
      }
    }
    v26 = 0;
    do {
      *(_QWORD*)(*(_QWORD*)(a1 + 88) + 56LL * v26 + 8) = v24;
      result = CalculateAllocatedSizeHeap_5c7400_alt1(
          a1, *(_QWORD*)(a1 + 88) + 56LL * v26, a3);
      v27 = (unsigned int)v24[3];
      ++v26;
      v24 = (_DWORD*)((char*)v24 + v27);
    } while ((_DWORD)v27 != -1);
  }
  return result;
}

__int64 CalculateAllocatedSizeHeap_Unknown2(__int64 a1, __int64 a2)
{
  __int64 result;

  result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 16LL))(
      *(_QWORD*)(a1 + 8));
  *(_QWORD*)(a1 + 16) += a2;
  ++*(_DWORD*)(a1 + 24);
  return result;
}

__int64 CalculateAllocatedSizeHeap_Unknown3(__int64 a1)
{
  --*(_DWORD*)(a1 + 24);
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 24LL))(
      *(_QWORD*)(a1 + 8));
}

__int64 CalculateAllocatedSizeHeap_5c7020(
    __int64 result, __int64 (*a2)(__int64*, _QWORD, __int64), __int64 a3)
{
  __int64 v3;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 i;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;

  if (a2 != nullptr) {
    v3 = result;
    if (*(int*)(result + 160) >= 1) {
      v6 = 0;
      do {
        v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 168) + 40LL) + 8 * v6);
        v16 = -1;
        result = a2(&v16, *(_QWORD*)(v7 + 136), a3);
        ++v6;
        *(_QWORD*)(v7 + 144) = v16;
      } while (v6 < *(int*)(v3 + 160));
    }
    v8 = *(_DWORD*)(v3 + 76);
    if (v8 >= 1) {
      v9 = *(_QWORD*)(v3 + 88);
      for (i = 0; i < v8; ++i) {
        if (*(int*)(v9 + 56 * i + 4) >= 1) {
          v11 = 0;
          v12 = 0;
          v13 = 56 * i;
          do {
            v14 = (_QWORD*)(*(_QWORD*)(v9 + v13 + 24) + v11);
            v14[9] = -1;
            v14 += 9;
            v15 = *(v14 - 7);
            v14[2] = -1;
            v14[1] = -1;
            GameRoutine_5c71a0(v3, v14, *(_QWORD*)(v15 + 2544));
            GameRoutine_5c71a0(v3, v14 + 1, *(_QWORD*)(*(v14 - 7) + 2576LL));
            result = GameRoutine_5c71a0(v3, v14 + 2,
                                        *(_QWORD*)(*(v14 - 7) + 2608LL));
            v9 = *(_QWORD*)(v3 + 88);
            ++v12;
            v11 += 992;
          } while (v12 < *(int*)(v9 + v13 + 4));
          v8 = *(_DWORD*)(v3 + 76);
        }
      }
    }
  }
  return result;
}

__int64 CalculateAllocatedSizeHeap_5c7360(
    __int64 result, __int64 (*a2)(__int64*, __int64, __int64), __int64 a3)
{
  __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if (a2 != nullptr) {
    v3 = result;
    if (*(int*)(result + 160) >= 1) {
      v6 = 0;
      do {
        v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 168) + 40LL) + 8 * v6);
        v8 = *(_QWORD*)(v7 + 136);
        v9 = *(_QWORD*)(v7 + 144);
        result = a2(&v9, v8, a3);
        *(_QWORD*)(v7 + 144) = -1;
        ++v6;
      } while (v6 < *(int*)(v3 + 160));
    }
  }
  return result;
}

void CalculateAllocatedSizeHeap_5c7400(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _DWORD* v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _DWORD* v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;

  v5 = a1;
  *(_BYTE*)(a2 + 40) = 1;
  v6 = *(_QWORD*)(a2 + 8) + *(unsigned int*)(*(_QWORD*)(a2 + 8) + 20LL);
  *(_QWORD*)(a2 + 16) = v6;
  *(_DWORD*)(a1 + 80) += *(_DWORD*)(v6 + 80);
  v7 = *(_QWORD*)(a2 + 8);
  v8 = *(unsigned int*)(v7 + 8);
  if ((_DWORD)v8 == -1) {
    v10 = 0;
  }
  else {
    v9 = (_DWORD*)(v7 + v8);
    v10 = 0;
    do {
      v11 = (unsigned int)v9[3];
      if (*v9 == 1381256517) {
        ++v10;
      }
      v9 = (_DWORD*)((char*)v9 + v11);
    } while ((_DWORD)v11 != -1);
  }
  *(_DWORD*)a2 = v10;
  v12 = *(_DWORD*)(*(_QWORD*)(a2 + 16) + 80LL);
  *(_DWORD*)(a2 + 4) = v12;
  v13 = 992LL * v12 + 32;
  v14 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)(a1 + 1112) + 16LL))(*(_QWORD*)(a1 + 1112), v13, 128);
  v15 = v14;
  *(_QWORD*)(v5 + 1120) += v13;
  ++*(_DWORD*)(v5 + 1128);
  *(_QWORD*)(a2 + 32) = v14;
  v16 = *(int*)(a2 + 4);
  if ((_DWORD)v16 != 0) {
    v17 = v14;
    v18 = 992 * v16;
    do {
      GameRoutine_5b6970(v17);
      v17 += 992;
      v18 -= 992;
    } while (v18 != 0);
  }
  v19 = *(_QWORD*)(a2 + 8);
  *(_QWORD*)(a2 + 24) = v15;
  v20 = *(unsigned int*)(v19 + 8);
  if ((_DWORD)v20 != -1) {
    v21 = (_DWORD*)(v19 + v20);
    while (*v21 != 1381256517) {
      v22 = (unsigned int)v21[3];
      v21 = (_DWORD*)((char*)v21 + v22);
      if ((_DWORD)v22 == -1) {
        goto LABEL_15;
      }
    }
    v23 = 0;
    v24 = 0;
    *(_WORD*)(a2 + 41) = 0;
    v49 = v5;
    v25 = *(_QWORD*)(a2 + 24);
    *(_QWORD*)(v25 + 272) = 0;
    while (1) {
      *(_DWORD*)(v25 + 8) = v23;
      v26 = (char*)v21 + (unsigned int)v21[5];
      *(_QWORD*)(v25 + 16) = v26;
      *(_QWORD*)(v25 + 24) = v26 + 80;
      GameRoutine_5b93c0(v25, (__int64)v21);
      v27 = a3[1];
      v28 = -v27;
      v29 = ((v27 + 1871) & -v27) + *a3;
      *a3 = v29;
      if (*(_QWORD*)(v25 + 768) != 0) {
        v29 += (v27 + *(_QWORD*)(v25 + 776) - 1) & v28;
        *a3 = v29;
      }
      if (*(_QWORD*)(v25 + 824) != 0) {
        v29 += (v27 + 127) & v28;
        *a3 = v29;
      }
      if (*(_BYTE*)(v25 + 3) == 1) {
        *a3 = v29 + ((v27 + 287) & v28);
      }
      *(_QWORD*)(v5 + 192) += (unsigned int)v21[1];
      v30 = *(_QWORD*)(v25 + 16);
      if (*(_BYTE*)(v30 + 2216) != 0) {
        break;
      }
      if (*(_BYTE*)(v30 + 2032) == 0) {
        goto LABEL_27;
      }
    LABEL_28:
      *(_QWORD*)(v25 + 144) = 0;
      v31 = v25 + 144;
      ++v24;
      *(_QWORD*)(v25 + 256) = 0;
      *(_QWORD*)(v25 + 264) = 0;
      *(_QWORD*)(v25 + 240) = 0;
      *(_QWORD*)(v25 + 248) = 0;
      *(_QWORD*)(v25 + 224) = 0;
      *(_QWORD*)(v25 + 232) = 0;
      *(_QWORD*)(v25 + 208) = 0;
      *(_QWORD*)(v25 + 216) = 0;
      *(_QWORD*)(v25 + 192) = 0;
      *(_QWORD*)(v25 + 200) = 0;
      *(_QWORD*)(v25 + 176) = 0;
      *(_QWORD*)(v25 + 184) = 0;
      *(_QWORD*)(v25 + 160) = 0;
      *(_QWORD*)(v25 + 168) = 0;
      *(_QWORD*)(v25 + 152) = 0;
      *(_DWORD*)(v25 + 136) = 0;
      v32 = (unsigned int)v21[2];
      if ((_DWORD)v32 != -1) {
        v50 = v25;
        v33 = 992LL * v24;
        v34 = (__int64)v21 + v32;
        v51 = v23;
        v35 = 0;
        do {
          v39 = *(_QWORD*)(a2 + 24);
          v40 = v39 + v33;
          *(_DWORD*)(v40 + 8) = v35;
          v41 = v34 + *(unsigned int*)(v34 + 20);
          *(_QWORD*)(v40 + 16) = v41;
          *(_QWORD*)(v40 + 24) = v41 + 80;
          GameRoutine_5b93c0(v39 + v33, v34);
          v42 = a3[1];
          v43 = -v42;
          v44 = ((v42 + 1871) & -v42) + *a3;
          *a3 = v44;
          if (*(_QWORD*)(v39 + v33 + 768) != 0) {
            v44 += (v42 + *(_QWORD*)(v40 + 776) - 1) & v43;
            *a3 = v44;
          }
          if (*(_QWORD*)(v40 + 824) != 0) {
            v44 += (v42 + 127) & v43;
            *a3 = v44;
          }
          if (*(_BYTE*)(v39 + v33 + 3) == 1) {
            *a3 = v44 + ((v42 + 287) & v43);
          }
          v45 = *(_QWORD*)(v40 + 16);
          *(_BYTE*)(v39 + v33 + 4) = 1;
          if (*(_BYTE*)(v45 + 2216) != 0) {
            *(_BYTE*)(a2 + 42) = 1;
          }
          v36 = v39 + v33;
          *(_QWORD*)(v31 + 8 * v35) = v40;
          v33 += 992;
          ++v24;
          *(_QWORD*)(v36 + 272) = 0;
          v37 = *(_QWORD**)(v31 + 8 * v35++);
          v37[32] = 0;
          v37[33] = 0;
          v37[30] = 0;
          v37[31] = 0;
          v37[28] = 0;
          v37[29] = 0;
          v37[26] = 0;
          v37[27] = 0;
          v37[24] = 0;
          v37[25] = 0;
          v37[22] = 0;
          v37[23] = 0;
          v37[20] = 0;
          v37[21] = 0;
          v37[18] = 0;
          v37[19] = 0;
          v38 = *(unsigned int*)(v34 + 12);
          v34 += v38;
        } while ((_DWORD)v38 != -1);
        v5 = v49;
        v25 = v50;
        *(_DWORD*)(v50 + 136) = v35;
        v23 = v51;
      }
      v46 = (unsigned int)v21[3];
      if ((_DWORD)v46 == -1) {
        return;
      }
      ++v23;
      v21 = (_DWORD*)((char*)v21 + v46);
      while (*v21 != 1381256517) {
        v47 = (unsigned int)v21[3];
        v21 = (_DWORD*)((char*)v21 + v47);
        if ((_DWORD)v47 == -1) {
          return;
        }
      }
      v48 = v25;
      v25 = *(_QWORD*)(a2 + 24) + 992LL * v24;
      *(_QWORD*)(v25 + 272) = 0;
      if (v48 != 0) {
        *(_QWORD*)(v48 + 272) = v25;
      }
    }
    *(_BYTE*)(a2 + 42) = 1;
    if (*(_BYTE*)(*(_QWORD*)(v25 + 16) + 2032LL) != 0) {
      goto LABEL_28;
    }
  LABEL_27:
    *(_BYTE*)(a2 + 41) = 1;
    goto LABEL_28;
  }

LABEL_15:
  *(_WORD*)(a2 + 41) = 0;
}

__int64 CalculateAllocatedSizeHeap_5c7840(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 result;

  if (a2 == -1) {
    return 0;
  }
  v2 = *(unsigned int*)(a1 + 104);
  if ((int)v2 < 1) {
  LABEL_6:
    result = *(_QWORD*)(a1 + 1192);
    if (result != 0) {
      result = CalculateAllocatedSizeHeap_5c7840(result, a2);
      if (result == 0) {
        GameRoutine_5c04f0(
            "Appointed Primitive is not found from Resident Resource.\n");
        return 0;
      }
    }
  }
  else {
    result = *(_QWORD*)(a1 + 120);
    while (*(_QWORD*)(result + 24) != a2) {
      result += 152;
      if (--v2 == 0) {
        goto LABEL_6;
      }
    }
  }
  return result;
}

__int64 CalculateAllocatedSizeHeap_5c78c0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  bool v15;
  unsigned __int64 v16;
  unsigned __int16* v17;
  unsigned __int64 v18;

  if (a2 == -1) {
    return 0;
  }
  v3 = *(_QWORD*)(a1 + 168);
  v2 = *(_QWORD*)(a1 + 176);
  if (v3 == 0 || v2 == 0) {
    return 0;
  }
  while (*(_QWORD*)v2 != a2) {
    v5 = *(unsigned int*)(v2 + 8);
    v2 += v5;
    if ((_DWORD)v5 == 0) {
      return 0;
    }
  }
  v7 = *(_QWORD*)(v3 + 56);
  v8 = v2 + 16;
  v9 = strlen(v2 + 16);
  v10 = *(unsigned __int16*)(v7 + 12);
  v11 = v7 + 8;
  v12 = v7 + 8 + 16 * v10;
  v13 = *(_DWORD*)v12;
  if (*(_DWORD*)(v7 + 8) < *(_DWORD*)v12) {
    do {
      v16 = (__int64)v13 >> 3;
      if (v9 > v16) {
        v14 = (*(unsigned __int8*)(v8 + v9 + ~v16) >> (v13 & 7)) & 1;
      }
      else {
        v14 = 0;
      }
      v10 = *(unsigned __int16*)(v7 + 12 + 16 * v10 + 2 * v14);
      v15 = v13 < *(_DWORD*)(v11 + 16 * v10);
      v13 = *(_DWORD*)(v11 + 16 * v10);
    } while (v15);
    v12 = v11 + 16 * v10;
  }
  v17 = *(unsigned __int16**)(v12 + 8);
  if (v9 == *v17 && (unsigned int)memcmp(v17 + 1, v8, v9) == 0 &&
      (~(v18 = v12 - v7 - 24) & 0xFFFFFFFF0LL) != 0) {
    return *(_QWORD*)(*(_QWORD*)(v3 + 40) + 8LL * (int)(v18 >> 4));
  }
  else {
    return 0;
  }
}

__int64 CalculateAllocatedSizeHeap_5c7a00(_QWORD* a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;

  while (1) {
    v2 = a1[18];
    v3 = a1[23];
    if (v2 != 0 && v3 != 0) {
      break;
    }
  LABEL_2:
    a1 = (_QWORD*)a1[149];
    if (a1 == nullptr) {
      return 0;
    }
  }
  while (*(_QWORD*)v3 != a2) {
    v5 = *(unsigned int*)(v3 + 8);
    v2 += 144;
    v3 += v5;
    if ((_DWORD)v5 == 0) {
      goto LABEL_2;
    }
  }
  return v2;
}

__int64 CalculateAllocatedSizeHeap_5c7a60(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64* v5;
  __int64 v6;

  v2 = *(unsigned int*)(a1 + 76);
  if ((int)v2 < 1) {
  LABEL_5:
    LODWORD(v4) = -1;
  }
  else {
    v4 = 0;
    v5 = (__int64*)(*(_QWORD*)(a1 + 88) + 16LL);
    while (1) {
      v6 = *v5;
      v5 += 7;
      if ((unsigned int)strcmp(a2, v6 + 16) == 0) {
        break;
      }
      if (v2 == ++v4) {
        goto LABEL_5;
      }
    }
  }
  return (unsigned int)v4;
}

#pragma GCC visibility pop
