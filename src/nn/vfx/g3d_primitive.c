#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5e9020(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5e90c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fcbc0(_QWORD);
__int64 G3dPrimitive_Unknown2(__int64 a1, int a2);
__int64 G3dPrimitive_Unknown3(__int64 a1, int a2);
__int64 G3dPrimitive_Unknown4(__int64 a1, __int64 a2, int a3);
__int64 G3dPrimitive_Unknown6(__int64 a1);
__int64 G3dPrimitive_Unknown7(__int64 a1, unsigned int a2);
__int64 G3dPrimitive_Unknown8(__int64 a1, unsigned int a2);
__int64 G3dPrimitive_Unknown10(__int64 a1, unsigned int a2);
__int64 G3dPrimitive_Unknown11(__int64 result, __int64 a2, unsigned int a3,
                               int a4);
__int64 G3dPrimitive_Unknown12(__int64 result, __int64 a2, unsigned int a3,
                               unsigned int a4, int a5);
__int64 RectDrawer_5fcbc0(_QWORD, _QWORD);
__int64 RectDrawer_5fcdc0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD);
__int64 G3DPrimitive_5e9020(__int64 a1, __int64 a2, int a3, int a4,
                            unsigned int a5);
__int64 G3DPrimitive_5e90c0(__int64 a1, __int64 a2, int a3, int a4,
                            unsigned int a5, unsigned int a6);

__int64 G3dPrimitive_Unknown2(__int64 a1, int a2)
{
  return *(int*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 56LL) + 16LL * a2);
}

__int64 G3dPrimitive_Unknown3(__int64 a1, int a2)
{
  return *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 48LL) + 16LL * a2);
}

__int64 G3dPrimitive_Unknown4(__int64 a1, __int64 a2, int a3)
{
  return GameRoutine_5fcbc0(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 40LL) + 8LL * a3));
}

__int64 G3dPrimitive_Unknown6(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 24) + 77LL);
}

__int64 G3dPrimitive_Unknown7(__int64 a1, unsigned int a2)
{
  return *(unsigned int*)(a1 + 4LL * a2 + 84);
}

__int64 G3dPrimitive_Unknown8(__int64 a1, unsigned int a2)
{
  return *(unsigned int*)(a1 + 4LL * a2 + 64);
}

__int64 G3dPrimitive_Unknown10(__int64 a1, unsigned int a2)
{
  return *(_QWORD*)(a1 + 8LL * a2 + 104);
}

__int64 G3dPrimitive_Unknown11(__int64 result, __int64 a2, unsigned int a3,
                               int a4)
{
  __int64 v4;
  __int64 v5;
  int v6;

  v4 = *(_QWORD*)(result + 32);
  v5 = *(_QWORD*)(v4 + 24);
  if (v5 != 0) {
    v6 = *(unsigned __int8*)(v4 + 91) - 1;
    if (a4 < v6) {
      v6 = a4;
    }
    return GameRoutine_5e9020(v5 + 56LL * v6, a2, 0,
                              *(unsigned __int16*)(v5 + 56LL * v6 + 52), a3);
  }
  return result;
}

__int64 G3dPrimitive_Unknown12(__int64 result, __int64 a2, unsigned int a3,
                               unsigned int a4, int a5)
{
  __int64 v5;
  __int64 v6;
  int v7;

  v5 = *(_QWORD*)(result + 32);
  v6 = *(_QWORD*)(v5 + 24);
  if (v6 != 0) {
    v7 = *(unsigned __int8*)(v5 + 91) - 1;
    if (a5 < v7) {
      v7 = a5;
    }
    return GameRoutine_5e90c0(v6 + 56LL * v7, a2, 0,
                              *(unsigned __int16*)(v6 + 56LL * v7 + 52), a3,
                              a4);
  }
  return result;
}

__int64 G3DPrimitive_5e9020(__int64 a1, __int64 a2, int a3, int a4,
                            unsigned int a5)
{
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v19[2];

  v8 = *(_QWORD*)a1 + 8LL * (a4 + a3);
  v9 = *(unsigned int*)(*(_QWORD*)a1 + 8LL * a3);
  v10 = *(_DWORD*)(a1 + 40);
  v11 = *(_QWORD*)(a1 + 16);
  v12 = *(unsigned int*)(v8 - 8);
  v13 = *(_DWORD*)(v8 - 4);
  v19[0] = 0;
  v19[1] = 0;
  v14 = (v12 - v9) >> v10;
  RectDrawer_5fcbc0(v11, v19);
  v15 = *(unsigned int*)(a1 + 36);
  v16 = *(unsigned int*)(a1 + 40);
  v17 = *(unsigned int*)(a1 + 48);
  v19[0] += v9;
  return RectDrawer_5fcdc0(a2, v15, v16, v19, (unsigned int)(v13 + v14), v17,
                           a5, 0);
}

__int64 G3DPrimitive_5e90c0(__int64 a1, __int64 a2, int a3, int a4,
                            unsigned int a5, unsigned int a6)
{
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD v21[2];

  v10 = *(_QWORD*)a1 + 8LL * (a4 + a3);
  v11 = *(unsigned int*)(*(_QWORD*)a1 + 8LL * a3);
  v12 = *(_DWORD*)(a1 + 40);
  v13 = *(_QWORD*)(a1 + 16);
  v14 = *(unsigned int*)(v10 - 8);
  v15 = *(_DWORD*)(v10 - 4);
  v21[0] = 0;
  v21[1] = 0;
  v16 = (v14 - v11) >> v12;
  RectDrawer_5fcbc0(v13, v21);
  v17 = *(unsigned int*)(a1 + 36);
  v18 = *(unsigned int*)(a1 + 40);
  v19 = *(unsigned int*)(a1 + 48);
  v21[0] += v11;
  return RectDrawer_5fcdc0(a2, v17, v18, v21, (unsigned int)(v15 + v16), v19,
                           a5, a6);
}

#pragma GCC visibility pop
