#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_account_detail_IsInitialized_plt(void);
__int64 nn_account_detail_TrySelectUserWithoutInteraction_plt_85f960(_QWORD,
                                                                     _QWORD,
                                                                     _QWORD);
__int64 nn_applet_CloseLibraryApplet_plt(_QWORD);
__int64 nn_applet_CreateLargeStorage_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_applet_CreateLibraryApplet_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_applet_PushToInChannel_plt(_QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_la_CommonArgumentsWriter_CommonArgumentsWriter_plt_85fb00(_QWORD,
                                                                     _QWORD);
__int64 nn_la_CommonArgumentsWriter_Destroy_CommonArgumentsWriter_plt(_QWORD);
__int64 nn_la_CommonArgumentsWriter_PushToInChannel_plt(_QWORD, _QWORD);
__int64 nn_la_PopFromOutChannel_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_la_PushToInChannel_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_la_StartLibraryApplet_plt(_QWORD, _QWORD);
extern unsigned int SdkData_bb1210[4];
__int64 account_detail_api_1a9130(unsigned int* a1, _DWORD* a2, __int64 a3,
                                  __int64 a4, char a5);
__int64 nn_account_detail_ShowUserSelectorCommon(_OWORD* a1, __int64 a2,
                                                 char a3);

__int64 account_detail_api_1a9130(unsigned int* a1, _DWORD* a2, __int64 a3,
                                  __int64 a4, char a5)
{
  unsigned int v10;
  __int64 v11;
  __int64 result;
  unsigned int v13;
  int v14;
  __int64 v15;
  _QWORD v16[3];
  __int64 v17;

  v10 = *a2 - 13;
  if (v10 > 3) {
    v17 = 0;
    result = nn_applet_CreateLibraryApplet_plt(&v17, 16777232, 0);
    if ((_DWORD)result != 0) {
      return result;
    }
  }
  else {
    v11 = SdkData_bb1210[v10];
    v17 = 0;
    result = nn_applet_CreateLibraryApplet_plt(&v17, v11, 0);
    if ((_DWORD)result != 0) {
      return result;
    }
  }
  memset(v16, 0, sizeof(v16));
  nn_la_CommonArgumentsWriter_CommonArgumentsWriter_plt_85fb00(v16, 0x20000);
  nn_la_CommonArgumentsWriter_PushToInChannel_plt(v16, v17);
  nn_la_PushToInChannel_plt(v17, a2, 160);
  if (a3 != 0) {
    v15 = 0;
    v14 = nn_applet_CreateLargeStorage_plt(&v15, a3, a4, 0);
    if (v14 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v14);
      __udf(0);
    }
    nn_applet_PushToInChannel_plt(v17, v15);
  }
  if ((unsigned int)nn_la_StartLibraryApplet_plt(v17, a5 & 1) != 0) {
    v13 = 636;
  }
  else {
    nn_la_PopFromOutChannel_plt(v17, a1, 24, 0);
    v13 = *a1;
  }
  nn_la_CommonArgumentsWriter_Destroy_CommonArgumentsWriter_plt(v16);
  nn_applet_CloseLibraryApplet_plt(v17);
  return v13;
}

__int64 nn_account_detail_ShowUserSelectorCommon(_OWORD* a1, __int64 a2,
                                                 char a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int128 v10;
  _QWORD v11[3];

  v6 = nn_account_detail_IsInitialized_plt();
  if ((v6 & 1) == 0) {
    v6 = nn_diag_detail_AbortImpl_plt_856170(v6);
  LABEL_14:
    v6 = nn_diag_detail_AbortImpl_plt_856170(v6);
  LABEL_15:
    nn_diag_detail_AbortImpl_plt_856170(v6);
    __udf(0);
  }
  if ((a3 & 1) != 0 || (*(_BYTE*)(a2 + 145) & 1) == 0) {
    goto LABEL_10;
  }
  if (*(_OWORD*)(a2 + 8) != 0) {
    goto LABEL_14;
  }
  if (*(_BYTE*)(a2 + 149) == 1) {
    goto LABEL_15;
  }
  v7 = *(unsigned int*)(a2 + 152);
  v8 = *(unsigned __int8*)(a2 + 144);
  *(_OWORD*)v11 = 0u;
  result =
      nn_account_detail_TrySelectUserWithoutInteraction_plt_85f960(v11, v8, v7);
  if ((_DWORD)result != 0) {
    return result;
  }
  if (*(_OWORD*)v11 != 0) {
    v10 = *(_OWORD*)v11;
  LABEL_12:
    *a1 = v10;
    return result;
  }
LABEL_10:
  memset(v11, 0, sizeof(v11));
  result = account_detail_api_1a9130((unsigned int*)v11, (_DWORD*)a2, 0, 0, 0);
  if ((_DWORD)result == 0) {
    v10 = *(_OWORD*)&v11[1];
    goto LABEL_12;
  }
  return result;
}

#pragma GCC visibility pop
