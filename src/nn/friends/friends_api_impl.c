#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_friends_detail_CheckInternetRequestAccepted_plt(void);
__int64 nn_friends_detail_NormalizeInAppScreenName_plt(_QWORD, _QWORD);
__int64 friends_api_4579e0(_QWORD* a1, __int64 a2, _QWORD* a3, __int64 a4,
                           __int64 a5);
__int64 friends_api_457ac0(__int64 a1);

__int64 friends_api_4579e0(_QWORD* a1, __int64 a2, _QWORD* a3, __int64 a4,
                           __int64 a5)
{
  __int64 result;
  _QWORD v10[9];
  _QWORD v11[9];

  memset(v11, 0, sizeof(v11));
  result = nn_friends_detail_NormalizeInAppScreenName_plt(v11, a4);
  if ((_DWORD)result == 0) {
    memset(v10, 0, sizeof(v10));
    result = nn_friends_detail_NormalizeInAppScreenName_plt(v10, a5);
    if ((_DWORD)result == 0) {
      result = nn_friends_detail_CheckInternetRequestAccepted_plt();
      if ((_DWORD)result == 0) {
        return (*(__int64 (**)(_QWORD, __int64, _QWORD, _QWORD*, _QWORD*,
                               _QWORD))(*(_QWORD*)*a1 + 104LL))(*a1, a2, *a3,
                                                                v11, v10, 0);
      }
    }
  }
  return result;
}

__int64 friends_api_457ac0(__int64 a1)
{
  return (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64))(a1 + 8))(
      a1 + 16, a1 + 24, a1 + 40, a1 + 48, a1 + 120);
}

#pragma GCC visibility pop
