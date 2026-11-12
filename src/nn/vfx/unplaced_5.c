#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CalculateAllocatedSizeHeap_5c7400(__int64, __int64, __int64*);
__int64 GameHr_5ded80(__int64, __int64*, __int64, int, __int64);
__int64 GameHr_5fc7e0(__int64*, __int64);
__int64 GameRoutine_5c02c0(const char*, ...);
__int64 GameRoutine_5c7e20(__int64);
__int64 GameRoutine_5c7ea0(__int64, __int64, __int64);
__int64 GameRoutine_5fc180(_QWORD);
__int64 GameRoutine_5fcb50(__int64);
__int64 GameRoutine_5fcb70(_QWORD);
__int64 GameRoutine_5fcb80(__int64 result);
__int64 RectDrawer_5fcbc0(__int64, __int64*);
__int64 memset(__int64, int, unsigned __int64);
extern __int64 GameData_2136448[3];
__int64 nn_vfx_5c65e0(__int64 result, __int64 a2);
__int64 nn_vfx_5c6e20(__int64 a1, __int64 a2, __int64* a3);

__int64 nn_vfx_5c65e0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _DWORD* v4;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  _DWORD* v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  _QWORD v32[2];

  v2 = *(unsigned int*)(a2 + 8);
  v3 = result;
  if ((_DWORD)v2 == -1) {
    *(_DWORD*)(result + 104) = 0;
  LABEL_33:
    *(_QWORD*)(result + 112) = 0;
    *(_QWORD*)(result + 120) = 0;
    return result;
  }
  v4 = (_DWORD*)(a2 + v2);
  v6 = 0;
  do {
    v7 = (unsigned int)v4[3];
    if (*v4 == 1296650832) {
      ++v6;
    }
    v4 = (_DWORD*)((char*)v4 + v7);
  } while ((_DWORD)v7 != -1);
  *(_DWORD*)(result + 104) = v6;
  if (v6 == 0) {
    goto LABEL_33;
  }
  v8 = 152LL * v6 + 32;
  v9 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)(result + 1112) + 16LL))(*(_QWORD*)(result + 1112), v8, 128);
  v10 = *(_QWORD*)(v3 + 1120);
  v11 = *(_DWORD*)(v3 + 104);
  *(_QWORD*)(v3 + 112) = v9;
  *(_QWORD*)(v3 + 1120) = v10 + v8;
  ++*(_DWORD*)(v3 + 1128);
  if (v11 != 0) {
    v12 = GameData_2136448[0];
    v13 = 152LL * v11 - 152;
    v14 = v9;
    if ((~(v13 / 0x98) & 7) != 0) {
      v15 = ((unsigned __int8)(v13 / 0x98) + 1) & 7;
      v14 = v9;
      do {
        *(_QWORD*)v14 = v12 + 16;
        *(_BYTE*)(v14 + 8) = 0;
        --v15;
        *(_QWORD*)(v14 + 12) = 0;
        *(_QWORD*)(v14 + 20) = 0;
        *(_QWORD*)(v14 + 28) = 0;
        *(_QWORD*)(v14 + 36) = 0;
        *(_QWORD*)(v14 + 44) = 0;
        *(_QWORD*)(v14 + 52) = 0;
        *(_QWORD*)(v14 + 60) = 0;
        *(_QWORD*)(v14 + 68) = 0;
        *(_QWORD*)(v14 + 76) = 0;
        *(_DWORD*)(v14 + 84) = 0;
        v14 += 152;
      } while (v15 != 0);
    }
    if (v13 >= 0x428) {
      v16 = v9 + 152LL * v11;
      v17 = v12 + 16;
      do {
        *(_QWORD*)v14 = v17;
        *(_BYTE*)(v14 + 8) = 0;
        v18 = (_QWORD*)(v14 + 316);
        *(_QWORD*)(v14 + 12) = 0;
        *(_QWORD*)(v14 + 20) = 0;
        *(_QWORD*)(v14 + 28) = 0;
        *(_QWORD*)(v14 + 36) = 0;
        *(_QWORD*)(v14 + 44) = 0;
        *(_QWORD*)(v14 + 52) = 0;
        *(_QWORD*)(v14 + 60) = 0;
        *(_QWORD*)(v14 + 68) = 0;
        *(_QWORD*)(v14 + 76) = 0;
        *(_DWORD*)(v14 + 84) = 0;
        *(_QWORD*)(v14 + 152) = v17;
        *(_BYTE*)(v14 + 160) = 0;
        *(_QWORD*)(v14 + 164) = 0;
        *(_QWORD*)(v14 + 172) = 0;
        *(_QWORD*)(v14 + 180) = 0;
        *(_QWORD*)(v14 + 188) = 0;
        *(_QWORD*)(v14 + 196) = 0;
        *(_QWORD*)(v14 + 204) = 0;
        *(_QWORD*)(v14 + 212) = 0;
        *(_QWORD*)(v14 + 220) = 0;
        *(_QWORD*)(v14 + 228) = 0;
        *(_DWORD*)(v14 + 236) = 0;
        *(_QWORD*)(v14 + 304) = v17;
        *(_BYTE*)(v14 + 312) = 0;
        *(_DWORD*)(v14 + 388) = 0;
        *(_QWORD*)(v14 + 456) = v17;
        *(_BYTE*)(v14 + 464) = 0;
        *(_DWORD*)(v14 + 540) = 0;
        *(_QWORD*)(v14 + 608) = v17;
        *(_BYTE*)(v14 + 616) = 0;
        *(_DWORD*)(v14 + 692) = 0;
        *(_QWORD*)(v14 + 760) = v17;
        *(_BYTE*)(v14 + 768) = 0;
        *(_DWORD*)(v14 + 844) = 0;
        *(_QWORD*)(v14 + 912) = v17;
        *(_BYTE*)(v14 + 920) = 0;
        *(_DWORD*)(v14 + 996) = 0;
        *(_QWORD*)(v14 + 1064) = v17;
        *(_BYTE*)(v14 + 1072) = 0;
        *(_DWORD*)(v14 + 1148) = 0;
        v14 += 1216;
        *v18 = 0;
        v18[1] = 0;
        v18[2] = 0;
        v18[3] = 0;
        v18[4] = 0;
        v18[5] = 0;
        v18[6] = 0;
        v18[7] = 0;
        v18[8] = 0;
        v18[19] = 0;
        v18[20] = 0;
        v18[21] = 0;
        v18[22] = 0;
        v18[23] = 0;
        v18[24] = 0;
        v18[25] = 0;
        v18[26] = 0;
        v18[27] = 0;
        v18[38] = 0;
        v18[39] = 0;
        v18[40] = 0;
        v18[41] = 0;
        v18[42] = 0;
        v18[43] = 0;
        v18[44] = 0;
        v18[45] = 0;
        v18[46] = 0;
        v18[57] = 0;
        v18[58] = 0;
        v18[59] = 0;
        v18[60] = 0;
        v18[61] = 0;
        v18[62] = 0;
        v18[63] = 0;
        v18[64] = 0;
        v18[65] = 0;
        v18[84] = 0;
        v18[83] = 0;
        v18[82] = 0;
        v18[81] = 0;
        v18[80] = 0;
        v18[79] = 0;
        v18[78] = 0;
        v18[77] = 0;
        v18[76] = 0;
        v18[103] = 0;
        v18[102] = 0;
        v18[101] = 0;
        v18[100] = 0;
        v18[99] = 0;
        v18[98] = 0;
        v18[97] = 0;
        v18[96] = 0;
        v18[95] = 0;
      } while (v14 != v16);
    }
  }
  *(_QWORD*)(v3 + 120) = v9;
  v19 = *(unsigned int*)(a2 + 8);
  if ((_DWORD)v19 == -1) {
  LABEL_18:
    v20 = nullptr;
  }
  else {
    v20 = (_DWORD*)(a2 + v19);
    while (*v20 != 1296650832) {
      v21 = (unsigned int)v20[3];
      v20 = (_DWORD*)((char*)v20 + v21);
      if ((_DWORD)v21 == -1) {
        goto LABEL_18;
      }
    }
  }
  v22 = *(__int64**)(v3 + 16);
  v32[0] = 0;
  v32[1] = 0;
  GameRoutine_5fc180(v32);
  HIDWORD(v32[0]) = 4;
  v23 = GameHr_5fc7e0(v22, (__int64)v32);
  v24 = 0;
  if (v20 != nullptr) {
    v25 = v23 - 1;
    v26 = -v23;
    v27 = (__int64)v20;
    do {
      v24 += (v25 + GameRoutine_5c7e20(v27)) & v26;
      v28 = *(unsigned int*)(v27 + 12);
      v27 += v28;
    } while ((_DWORD)v28 != -1);
  }
  if ((GameHr_5ded80(v3 + 672, *(__int64**)(v3 + 16), v3 + 1104, 4, v24) & 1) !=
      0) {
    RectDrawer_5fcbc0(v3 + 672, (__int64*)(v3 + 1072));
  }
  *(_QWORD*)(v3 + 1088) = 0;
  *(_QWORD*)(v3 + 1096) = GameRoutine_5fcb50(v3 + 672);
  if (v20 != nullptr) {
    v29 = 0;
    v30 = 0;
    if ((GameRoutine_5c7ea0(*(_QWORD*)(v3 + 120), v3 + 672, (__int64)v20) &
         1) == 0) {
      goto LABEL_28;
    }
    while (1) {
      *(_QWORD*)(v3 + 224) += (unsigned int)v20[1];
      v31 = (unsigned int)v20[3];
      if ((_DWORD)v31 == -1) {
        break;
      }
      while (1) {
        v20 = (_DWORD*)((char*)v20 + v31);
        ++v30;
        v29 += 152;
        if ((GameRoutine_5c7ea0(*(_QWORD*)(v3 + 120) + v29, v3 + 672,
                                (__int64)v20) &
             1) != 0) {
          break;
        }
      LABEL_28:
        GameRoutine_5c02c0("Faild to initialize primitive: Index %d \n", v30);
        v31 = (unsigned int)v20[3];
        if ((_DWORD)v31 == -1) {
          goto LABEL_31;
        }
      }
    }
  }
LABEL_31:
  GameRoutine_5fcb80(v3 + 672);
  return GameRoutine_5fcb70(v3 + 672);
}

__int64 nn_vfx_5c6e20(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v3;
  _DWORD* v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  __int64 v17;
  _DWORD* v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;

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
  v13 = *(int*)(a1 + 76);
  v14 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)(a1 + 1112) + 16LL))(*(_QWORD*)(a1 + 1112), 8 * v13, 128);
  v15 = *(_QWORD*)(a1 + 1120);
  *(_QWORD*)(a1 + 96) = v14;
  *(_QWORD*)(a1 + 1120) = v15 + 8 * v13;
  ++*(_DWORD*)(a1 + 1128);
  result = memset(v14, 0, 8LL * *(int*)(a1 + 76));
  v17 = *(unsigned int*)(a2 + 8);
  if ((_DWORD)v17 != -1) {
    v18 = (_DWORD*)(a2 + v17);
    while (*v18 != 1413829445) {
      v19 = (unsigned int)v18[3];
      v18 = (_DWORD*)((char*)v18 + v19);
      if ((_DWORD)v19 == -1) {
        return result;
      }
    }
    v20 = 0;
    do {
      *(_QWORD*)(*(_QWORD*)(a1 + 88) + 56LL * v20 + 8) = v18;
      result = CalculateAllocatedSizeHeap_5c7400(
          a1, *(_QWORD*)(a1 + 88) + 56LL * v20, a3);
      v21 = (unsigned int)v18[3];
      ++v20;
      v18 = (_DWORD*)((char*)v18 + v21);
    } while ((_DWORD)v21 != -1);
  }
  return result;
}

#pragma GCC visibility pop
