#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_account_CreateExternalNetworkServiceAccountRegistrar_plt(_QWORD,
                                                                    _QWORD,
                                                                    _QWORD);
__int64
    nn_account_ExternalNetworkServiceAccountRegistrar_Destroy_ExternalNetworkServiceAccountRegistrar_plt(
        _QWORD);
__int64
    nn_account_ExternalNetworkServiceAccountRegistrar_ExternalNetworkServiceAccountRegistrar_plt_85f8b0(
        _QWORD);
__int64
    nn_account_ExternalNetworkServiceAccountRegistrar_GetOAuthProcedureSessionId_plt(
        _QWORD, _QWORD);
__int64
    nn_account_ExternalNetworkServiceAccountRegistrar_RegisterUser_plt(_QWORD,
                                                                       _QWORD);
__int64 nn_account_GetUserCount_plt(_QWORD);
__int64 nn_account_detail_StartPselApplet_plt(_QWORD, _QWORD);
__int64 nn_account_detail_TrySelectUserWithoutInteraction_plt_85f950(_QWORD,
                                                                     _QWORD);
__int64 nn_account_detail_TrySelectUserWithoutInteraction_plt_85f960(_QWORD,
                                                                     _QWORD,
                                                                     _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_account_ShowUserCreatorForImmediateNaLoginTest(void* this_,
                                                          void* a2);
__int64 nn_account_ShowLicenseRequirementsForNetworkServiceWithUserContextImpl(
    __int64* a1, __int64 a2, __int64 a3);
bool nn_account_TrySelectUserImplicitly_1a81a0(_OWORD* a1, unsigned __int8* a2);
bool nn_account_TrySelectUserImplicitly_1a8210(_OWORD* a1, unsigned int a2,
                                               unsigned __int8* a3);
__int64 nn_account_RefineUserIcon(_WORD* a1);

__int64 nn_account_ShowUserCreatorForImmediateNaLoginTest(void* this_, void* a2)
{
  unsigned int v4;
  _QWORD v6[2];
  int v7;
  _QWORD v8[20];
  int v9;
  struct {
    __int64 v10;
    __int64 v11;
  } v10_;
  __int64 v12;

  v12 = 0;
  nn_account_ExternalNetworkServiceAccountRegistrar_ExternalNetworkServiceAccountRegistrar_plt_85f8b0(
      &v12);
  LODWORD(v8[0]) = nn_account_CreateExternalNetworkServiceAccountRegistrar_plt(
      &v12, this_, a2);
  if (LODWORD(v8[0]) != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v8);
  }
  v10_.v10 = 0;
  v10_.v11 = 0;
  LODWORD(v8[0]) =
      nn_account_ExternalNetworkServiceAccountRegistrar_GetOAuthProcedureSessionId_plt(
          &v12, &v10_.v10);
  if (LODWORD(v8[0]) != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v8);
  }
  v9 = 0;
  LODWORD(v8[0]) = nn_account_GetUserCount_plt(&v9);
  if (LODWORD(v8[0]) != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v8);
  }
  v8[0] = 12;
  v8[1] = v10_.v10;
  v8[2] = v10_.v11;
  memset(&v8[3], 0, 136);
  v4 = nn_account_detail_StartPselApplet_plt(v8, 0);
  if (v4 == 0) {
    v7 = 0;
    LODWORD(v6[0]) = nn_account_GetUserCount_plt(&v7);
    if (LODWORD(v6[0]) != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(v6);
    }
    if (v7 == v9) {
      v6[0] = 0;
      v6[1] = 0;
      v4 = nn_account_ExternalNetworkServiceAccountRegistrar_RegisterUser_plt(
          &v12, v6);
    }
    else {
      v4 = 0;
    }
  }
  nn_account_ExternalNetworkServiceAccountRegistrar_Destroy_ExternalNetworkServiceAccountRegistrar_plt(
      &v12);
  return v4;
}

__int64 nn_account_ShowLicenseRequirementsForNetworkServiceWithUserContextImpl(
    __int64* a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[16];

  v6 = 0;
  memset(v9, 0, sizeof(v9));
  v5 = 11;
  v3 = a1[1];
  v6 = *a1;
  v7 = v3;
  v8 = 0;
  memcpy_plt(v9, a2, a3);
  return nn_account_detail_StartPselApplet_plt(&v5, 0);
}

bool nn_account_TrySelectUserImplicitly_1a81a0(_OWORD* a1, unsigned __int8* a2)
{
  __int64 v2;
  _BOOL8 result;
  __int128 v5;
  int v6;

  v2 = *a2;
  v5 = 0u;
  v6 = nn_account_detail_TrySelectUserWithoutInteraction_plt_85f950(&v5, v2);
  if (v6 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v6);
    __udf(0);
  }
  result = v5 != 0;
  if (v5 != 0) {
    *a1 = v5;
  }
  return result;
}

bool nn_account_TrySelectUserImplicitly_1a8210(_OWORD* a1, unsigned int a2,
                                               unsigned __int8* a3)
{
  __int64 v4;
  _BOOL8 result;
  __int128 v7;
  int v8;

  v4 = *a3;
  v7 = 0u;
  v8 =
      nn_account_detail_TrySelectUserWithoutInteraction_plt_85f960(&v7, v4, a2);
  if (v8 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v8);
    __udf(0);
  }
  result = v7 != 0;
  if (v7 != 0) {
    *a1 = v7;
  }
  return result;
}

__int64 nn_account_RefineUserIcon(_WORD* a1)
{
  _QWORD v2[20];

  memset(&v2[2], 0, 144);
  v2[0] = 17;
  v2[1] = 1;
  *(_WORD*)((char*)&v2[1] + 1) = *a1;
  return nn_account_detail_StartPselApplet_plt(v2, 0);
}

#pragma GCC visibility pop
