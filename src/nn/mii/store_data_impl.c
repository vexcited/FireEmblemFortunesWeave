#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mii_detail_CalculateAndSetCrc16_plt_86c4c0(_QWORD, _QWORD);
__int64 nn_mii_detail_CalculateAndSetCrc16_plt_86c4d0(_QWORD, _QWORD, _QWORD);
__int64 nn_mii_detail_CalculateCrc16_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_mii_detail_CreateRandomMii_plt(_QWORD);
__int64 nn_mii_detail_GetDeviceId_plt(_QWORD);
__int64 nn_mii_detail_UtilityImpl_MakeCreateId_plt(_QWORD, _QWORD);
__int64 nn_mii_detail_StoreDataRaw_BuildRandom(_QWORD* a1, __int64 a2);

__int64 nn_mii_detail_StoreDataRaw_BuildRandom(_QWORD* a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD v15[2];

  v13 = 0;
  v14 = 0;
  v11 = 0;
  v12 = 0;
  v9 = 0;
  v10 = 0;
  nn_mii_detail_CreateRandomMii_plt(&v9);
  v4 = v12;
  a1[2] = v11;
  a1[3] = v4;
  v5 = v14;
  a1[4] = v13;
  a1[5] = v5;
  v6 = v10;
  *a1 = v9;
  a1[1] = v6;
  nn_mii_detail_UtilityImpl_MakeCreateId_plt(a2, a1 + 6);
  nn_mii_detail_CalculateAndSetCrc16_plt_86c4c0(a1, 66);
  v15[0] = 0;
  v15[1] = 0;
  nn_mii_detail_GetDeviceId_plt(v15);
  v7 = nn_mii_detail_CalculateCrc16_plt(v15, 16, 0);
  return nn_mii_detail_CalculateAndSetCrc16_plt_86c4d0(a1, 68, v7);
}

#pragma GCC visibility pop
