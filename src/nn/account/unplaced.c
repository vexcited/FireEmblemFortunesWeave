#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nn_account_detail_MakeUserHandle_plt(PSEUDO_X8, _QWORD, _QWORD);
__int64 SdkRoutine_1ad590(__int64*, _QWORD**);
__int64 SdkRoutine_1ae100();
__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 nn_account_IsUserRegistrationRequestPermitted_plt(_QWORD);
__int64 nn_account_ListAllUsers_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_account_ListPushedOpenUsers_plt(_QWORD, _QWORD);
__int64 nn_account_detail_ClientUserHandleStore_Add_plt(_QWORD);
__int64 nn_account_detail_GetAccountServiceObjectForApplication_plt(_QWORD);
__int64 nn_account_detail_ShowUserSelectorCommon_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_account_detail_StartPselApplet_plt(_QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
extern _UNKNOWN* SdkData_ebb0d0;
extern _UNKNOWN SdkData_ebb0c8;
extern _UNKNOWN SdkData_ebb0e0;
extern __int64 SdkData_e870b8;
extern __int64 SdkData_e870e8;
extern __int64 SdkData_ebb0d8;
extern __int64 nn_account_detail_g_BaasAccessTokenAccessor;
extern int SdkData_ebb0cc;
__int64 nn_account_ShowUserSelectorForSystem(__int64 a1, __int64* a2,
                                             __int64 a3);
__int64 nn_account_ShowUserSelectorForLauncher_1a7600(__int64 a1, __int64* a2,
                                                      _QWORD* a3);
__int64 nn_account_ShowUserSelectorForLauncher_1a7710(__int64 a1, __int64* a2,
                                                      __int64* a3, __int64 a4);
__int64 nn_account_ShowUserSelector(__int64 a1, __int64* a2);
__int64 nn_account_ShowUserCreator(void* this_);
__int64 nn_account_ShowUserCreatorForSystem();
__int64 nn_account_1a8b30(_QWORD* a1);
__int64 nn_account_PopOpenUsers(_DWORD* a1, __int64** a2, int a3);
__int64 nn_account_InitializeBaasAccessTokenAccessor(void* this_);
__int64 nn_account_InitializeBaasAccessTokenAccessorWith(__int64* a1);
__int64 nn_account_FinalizeBaasAccessTokenAccessor(void* this_);
__attribute__((swiftcall)) void nn_account_MakePreselectionInfo(PSEUDO_X8 x8_,
                                                                _QWORD* a1);
__int64 nn_account_1b16c0(_QWORD* a1);

__int64 nn_account_ShowUserSelectorForSystem(__int64 a1, __int64* a2,
                                             __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
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
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  _BYTE v42[4];

  v42[0] = 0;
  LODWORD(v22) = nn_account_IsUserRegistrationRequestPermitted_plt(v42);
  if ((_DWORD)v22 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v22);
    __udf(0);
  }
  v6 = *a2;
  v7 = a2[1];
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v40 = 0;
  v41 = 0;
  v34 = 0;
  v35 = 0;
  v8 = a2[12];
  v9 = a2[13];
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v10 = a2[2];
  v11 = a2[3];
  v23 = v6;
  v24 = v7;
  LOBYTE(v6) = *((_BYTE*)a2 + 128);
  v35 = v8;
  v36 = v9;
  v37 = 0;
  v25 = v10;
  v26 = v11;
  BYTE1(v40) = v6;
  LOBYTE(v6) = *((_BYTE*)a2 + 129);
  v12 = a2[15];
  v37 = a2[14];
  v38 = 0;
  v13 = a2[4];
  v14 = a2[5];
  v15 = a2[6];
  v16 = a2[7];
  v38 = v12;
  v39 = 0;
  v17 = *(unsigned __int8*)(a3 + 5);
  v27 = v13;
  v28 = v14;
  v29 = v15;
  v30 = v16;
  LOBYTE(v40) = v6;
  BYTE2(v40) = 1;
  v18 = a2[9];
  v20 = a2[10];
  v19 = a2[11];
  v31 = a2[8];
  v32 = v18;
  v33 = v20;
  v34 = v19;
  BYTE3(v40) = v42[0];
  WORD2(v40) = *((_WORD*)a2 + 65);
  HIBYTE(v40) = *((_BYTE*)a2 + 132) ^ 1;
  BYTE6(v40) = *(_BYTE*)(a3 + 4);
  LODWORD(v41) = *(_DWORD*)a3;
  BYTE4(v41) = *(_BYTE*)(a3 + 6);
  return nn_account_detail_ShowUserSelectorCommon_plt(a1, &v22, v17);
}

__int64 nn_account_ShowUserSelectorForLauncher_1a7600(__int64 a1, __int64* a2,
                                                      _QWORD* a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64* v29;
  __int64* v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
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
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  _BYTE v68[4];
  __int64* v69;
  __int64 v70;
  _QWORD* v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int128 v92;
  __int64 v93;
  _BYTE v94[4];

  v94[0] = 0;
  LODWORD(v74) = nn_account_IsUserRegistrationRequestPermitted_plt(v94);
  if ((_DWORD)v74 != 0) {
    v23 = nn_diag_detail_AbortImpl_plt_858db0(&v74);
    v69 = &v93;
    v70 = v24;
    v71 = a3;
    v72 = a2;
    v73 = a1;
    v25 = v23;
    v27 = v26;
    v29 = v28;
    v31 = v30;
    v68[0] = 0;
    LODWORD(v48) = nn_account_IsUserRegistrationRequestPermitted_plt(v68);
    if ((_DWORD)v48 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v48);
      __udf(0);
    }
    v32 = *v31;
    v33 = v31[1];
    v34 = v31[12];
    v35 = v31[13];
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v60 = 0;
    v61 = 0;
    v67 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    v36 = v31[2];
    v37 = v31[3];
    v61 = v34;
    v62 = v35;
    v63 = 0;
    v49 = v32;
    v50 = v33;
    v38 = *v29;
    LOBYTE(v33) = *((_BYTE*)v31 + 128);
    v51 = v36;
    v52 = v37;
    v39 = v31[15];
    v63 = v31[14];
    v64 = v39;
    v65 = v38;
    v66 = 0;
    LOBYTE(v38) = *((_BYTE*)v31 + 129);
    v40 = v31[4];
    v41 = v31[5];
    v42 = *(unsigned __int8*)(v27 + 5);
    BYTE1(v66) = v33;
    v53 = v40;
    v54 = v41;
    BYTE2(v66) = 1;
    LOBYTE(v66) = v38;
    v43 = v31[6];
    v44 = v31[7];
    v45 = v31[9];
    v47 = v31[10];
    v46 = v31[11];
    v57 = v31[8];
    v58 = v45;
    v59 = v47;
    v60 = v46;
    v55 = v43;
    v56 = v44;
    BYTE3(v66) = v68[0];
    WORD2(v66) = *((_WORD*)v31 + 65);
    HIBYTE(v66) = *((_BYTE*)v31 + 132) ^ 1;
    BYTE6(v66) = *(_BYTE*)(v27 + 4);
    LODWORD(v67) = *(_DWORD*)v27;
    BYTE4(v67) = *(_BYTE*)(v27 + 6);
    return nn_account_detail_ShowUserSelectorCommon_plt(v25, &v48, v42);
  }
  else {
    v6 = *a2;
    v7 = a2[1];
    v8 = a2[12];
    v9 = a2[13];
    v74 = 0;
    v75 = 0;
    v76 = 0;
    v77 = 0;
    v86 = 0;
    v87 = 0;
    v92 = 0u;
    v78 = 0;
    v79 = 0;
    v80 = 0;
    v81 = 0;
    v82 = 0;
    v83 = 0;
    v84 = 0;
    v85 = 0;
    v10 = a2[2];
    v11 = a2[3];
    v87 = v8;
    v88 = v9;
    v89 = 0;
    v75 = v6;
    v76 = v7;
    v12 = a2[14];
    v13 = a2[15];
    v14 = *a3;
    v77 = v10;
    v78 = v11;
    v89 = v12;
    v90 = v13;
    v91 = v14;
    LOBYTE(v14) = *((_BYTE*)a2 + 128);
    BYTE3(v92) = v94[0];
    LOWORD(v7) = *((_WORD*)a2 + 65);
    BYTE1(v92) = v14;
    LOBYTE(v14) = *((_BYTE*)a2 + 129);
    WORD2(v92) = v7;
    LOBYTE(v7) = *((_BYTE*)a2 + 132);
    LOBYTE(v92) = v14;
    v15 = a2[4];
    v16 = a2[5];
    v17 = a2[6];
    v18 = a2[7];
    v19 = a2[9];
    v21 = a2[10];
    v20 = a2[11];
    v83 = a2[8];
    v84 = v19;
    v85 = v21;
    v86 = v20;
    v79 = v15;
    v80 = v16;
    v81 = v17;
    v82 = v18;
    BYTE2(v92) = 1;
    *(_QWORD*)((char*)&v92 + 7) = (unsigned __int8)v7 ^ 1u;
    BYTE6(v92) = 1;
    return nn_account_detail_ShowUserSelectorCommon_plt(a1, &v74, 0);
  }
}

__int64 nn_account_ShowUserSelectorForLauncher_1a7710(__int64 a1, __int64* a2,
                                                      __int64* a3, __int64 a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  struct {
    __int64 v25;
    __int64 v26;
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
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
  } v25_;
  _BYTE v45[4];

  v45[0] = 0;
  LODWORD(v25_.v25) = nn_account_IsUserRegistrationRequestPermitted_plt(v45);
  if ((_DWORD)v25_.v25 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v25_.v25);
  }
  v8 = *a2;
  v9 = a2[1];
  v10 = a2[12];
  v11 = a2[13];
  v25_.v25 = 0;
  v25_.v26 = 0;
  v25_.v27 = 0;
  v25_.v28 = 0;
  v25_.v37 = 0;
  v25_.v38 = 0;
  v25_.v44 = 0;
  v25_.v29 = 0;
  v25_.v30 = 0;
  v25_.v31 = 0;
  v25_.v32 = 0;
  v25_.v33 = 0;
  v25_.v34 = 0;
  v25_.v35 = 0;
  v25_.v36 = 0;
  v12 = a2[2];
  v13 = a2[3];
  v25_.v38 = v10;
  v25_.v39 = v11;
  v25_.v40 = 0;
  v25_.v26 = v8;
  v25_.v27 = v9;
  v14 = *a3;
  LOBYTE(v9) = *((_BYTE*)a2 + 128);
  v25_.v28 = v12;
  v25_.v29 = v13;
  v15 = a2[15];
  v25_.v40 = a2[14];
  v25_.v41 = v15;
  v25_.v42 = v14;
  v25_.v43 = 0;
  LOBYTE(v14) = *((_BYTE*)a2 + 129);
  v16 = a2[4];
  v17 = a2[5];
  v18 = *(unsigned __int8*)(a4 + 5);
  BYTE1(v25_.v43) = v9;
  v25_.v30 = v16;
  v25_.v31 = v17;
  BYTE2(v25_.v43) = 1;
  LOBYTE(v25_.v43) = v14;
  v19 = a2[6];
  v20 = a2[7];
  v21 = a2[9];
  v23 = a2[10];
  v22 = a2[11];
  v25_.v34 = a2[8];
  v25_.v35 = v21;
  v25_.v36 = v23;
  v25_.v37 = v22;
  v25_.v32 = v19;
  v25_.v33 = v20;
  BYTE3(v25_.v43) = v45[0];
  WORD2(v25_.v43) = *((_WORD*)a2 + 65);
  HIBYTE(v25_.v43) = *((_BYTE*)a2 + 132) ^ 1;
  BYTE6(v25_.v43) = *(_BYTE*)(a4 + 4);
  LODWORD(v25_.v44) = *(_DWORD*)a4;
  BYTE4(v25_.v44) = *(_BYTE*)(a4 + 6);
  return nn_account_detail_ShowUserSelectorCommon_plt(a1, &v25_.v25, v18);
}

__int64 nn_account_ShowUserSelector(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
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
  __int128 v37;
  _BYTE v38[4];

  v38[0] = 0;
  LODWORD(v19) = nn_account_IsUserRegistrationRequestPermitted_plt(v38);
  if ((_DWORD)v19 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v19);
    __udf(0);
  }
  v4 = *a2;
  v5 = a2[1];
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v37 = 0u;
  v31 = 0;
  v32 = 0;
  v6 = a2[12];
  v7 = a2[13];
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v8 = a2[2];
  v9 = a2[3];
  v20 = v4;
  v21 = v5;
  LOBYTE(v4) = *((_BYTE*)a2 + 128);
  v32 = v6;
  v33 = v7;
  v34 = 0;
  LOWORD(v5) = *((_WORD*)a2 + 65);
  v22 = v8;
  v23 = v9;
  BYTE1(v37) = v4;
  LOBYTE(v4) = *((_BYTE*)a2 + 129);
  WORD2(v37) = v5;
  v10 = a2[15];
  v11 = a2[4];
  v12 = a2[5];
  v34 = a2[14];
  v35 = v10;
  v36 = 0;
  v24 = v11;
  v25 = v12;
  LOBYTE(v37) = v4;
  BYTE3(v37) = v38[0];
  LOBYTE(v4) = *((_BYTE*)a2 + 132);
  v13 = a2[6];
  v14 = a2[7];
  v15 = a2[9];
  v17 = a2[10];
  v16 = a2[11];
  v28 = a2[8];
  v29 = v15;
  v30 = v17;
  v31 = v16;
  v26 = v13;
  v27 = v14;
  *(_QWORD*)((char*)&v37 + 7) = (unsigned __int8)v4 ^ 1u;
  BYTE6(v37) = 1;
  return nn_account_detail_ShowUserSelectorCommon_plt(a1, &v19, 0);
}

__int64 nn_account_ShowUserCreator(void* this_)
{
  __int64 result;
  _QWORD v2[20];
  _BYTE v3[4];

  v3[0] = 0;
  result = nn_account_IsUserRegistrationRequestPermitted_plt(v3);
  if ((_DWORD)result == 0) {
    if ((v3[0] & 1) == 0) {
      nn_diag_detail_AbortImpl_plt_856170(result);
    }
    memset(&v2[1], 0, 152);
    v2[0] = 1;
    return nn_account_detail_StartPselApplet_plt(v2, 0);
  }
  return result;
}

__int64 nn_account_ShowUserCreatorForSystem()
{
  __int64 result;
  _QWORD v1[20];
  _BYTE v2[4];

  v2[0] = 0;
  result = nn_account_IsUserRegistrationRequestPermitted_plt(v2);
  if ((_DWORD)result == 0) {
    if (v2[0] == 1) {
      memset(&v1[1], 0, 152);
      v1[0] = 1;
      return nn_account_detail_StartPselApplet_plt(v1, 0);
    }
    else {
      return 21628;
    }
  }
  return result;
}

__int64 nn_account_1a8b30(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;

  *a1 = SdkData_e870b8 + 16;
  v1 = (_QWORD*)a1[3];
  if (v1 != nullptr) {
    v2 = a1;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(*v1 + 8LL))(
        (void*)v1, a1[3]);
    a1 = v2;
  }
  return SdkRoutine_857220(a1, 32);
}

__int64 nn_account_PopOpenUsers(_DWORD* a1, __int64** a2, int a3)
{
  __int64 result;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  struct {
    __int64* v32;
    __int64* v33;
    __int64* v34;
  } v32_;
  int v35;
  __int64 v36;
  _QWORD v37[2];
  _QWORD v38[2];
  _QWORD v39[2];
  _QWORD v40[2];
  _QWORD v41[2];
  _QWORD v42[2];
  _QWORD v43[2];
  _QWORD v44[2];

  v44[0] = 0;
  v44[1] = 0;
  v43[0] = 0;
  v43[1] = 0;
  v42[0] = 0;
  v42[1] = 0;
  v41[0] = 0;
  v41[1] = 0;
  v40[0] = 0;
  v40[1] = 0;
  v39[0] = 0;
  v39[1] = 0;
  v38[0] = 0;
  v38[1] = 0;
  v37[0] = 0;
  v37[1] = 0;
  result = nn_account_ListPushedOpenUsers_plt(v37, 8);
  if (a3 < (int)result) {
    nn_diag_detail_AbortImpl_plt_856170(result);
  }
  v7 = result;
  if ((_DWORD)result != 0) {
    v36 = 0;
    v8 = ((__int64 (*)(
        void))nn_account_detail_GetAccountServiceObjectForApplication_plt)();
    v32_.v32 = &v36;
    v35 = (*(__int64 (**)(__int64, __int64**, _QWORD*))(*(_QWORD*)v8 + 176LL))(
        v8, &v32_.v32, v37);
    if (v35 != 0) {
      goto LABEL_35;
    }
    v9 = v36;
    v32_.v33 = nullptr;
    v32_.v34 = nullptr;
    v32_.v32 = nullptr;
    v36 = 0;
    nn_account_detail_MakeUserHandle_plt((void*)(&v32_.v32), v37, v9);
    nn_account_detail_ClientUserHandleStore_Add_plt(&v32_.v32);
    v10 = v32_.v33;
    result = v36;
    *a2 = v32_.v32;
    a2[1] = v10;
    a2[2] = v32_.v34;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
    if (v7 != 1) {
      v36 = 0;
      v11 = nn_account_detail_GetAccountServiceObjectForApplication_plt(result);
      v32_.v32 = &v36;
      v35 = (*(__int64 (**)(__int64, __int64**, _QWORD*))(
          *(_QWORD*)v11 + 176LL))(v11, &v32_.v32, v38);
      if (v35 != 0) {
        goto LABEL_35;
      }
      v12 = v36;
      v32_.v33 = nullptr;
      v32_.v34 = nullptr;
      v32_.v32 = nullptr;
      v36 = 0;
      nn_account_detail_MakeUserHandle_plt((void*)(&v32_.v32), v38, v12);
      nn_account_detail_ClientUserHandleStore_Add_plt(&v32_.v32);
      v13 = v32_.v33;
      result = v36;
      a2[3] = v32_.v32;
      a2[4] = v13;
      a2[5] = v32_.v34;
      if (result != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
      }
      if (v7 != 2) {
        v36 = 0;
        v14 =
            nn_account_detail_GetAccountServiceObjectForApplication_plt(result);
        v32_.v32 = &v36;
        v35 = (*(__int64 (**)(__int64, __int64**, _QWORD*))(
            *(_QWORD*)v14 + 176LL))(v14, &v32_.v32, v39);
        if (v35 != 0) {
          goto LABEL_35;
        }
        v15 = v36;
        v32_.v33 = nullptr;
        v32_.v34 = nullptr;
        v32_.v32 = nullptr;
        v36 = 0;
        nn_account_detail_MakeUserHandle_plt((void*)(&v32_.v32), v39, v15);
        nn_account_detail_ClientUserHandleStore_Add_plt(&v32_.v32);
        v16 = v32_.v33;
        result = v36;
        a2[6] = v32_.v32;
        a2[7] = v16;
        a2[8] = v32_.v34;
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        }
        if (v7 != 3) {
          v36 = 0;
          v17 = nn_account_detail_GetAccountServiceObjectForApplication_plt(
              result);
          v32_.v32 = &v36;
          v35 = (*(__int64 (**)(__int64, __int64**, _QWORD*))(
              *(_QWORD*)v17 + 176LL))(v17, &v32_.v32, v40);
          if (v35 != 0) {
            goto LABEL_35;
          }
          v18 = v36;
          v32_.v33 = nullptr;
          v32_.v34 = nullptr;
          v32_.v32 = nullptr;
          v36 = 0;
          nn_account_detail_MakeUserHandle_plt((void*)(&v32_.v32), v40, v18);
          nn_account_detail_ClientUserHandleStore_Add_plt(&v32_.v32);
          v19 = v32_.v33;
          result = v36;
          a2[9] = v32_.v32;
          a2[10] = v19;
          a2[11] = v32_.v34;
          if (result != 0) {
            result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
          }
          if (v7 != 4) {
            v36 = 0;
            v20 = nn_account_detail_GetAccountServiceObjectForApplication_plt(
                result);
            v32_.v32 = &v36;
            v35 = (*(__int64 (**)(__int64, __int64**, _QWORD*))(
                *(_QWORD*)v20 + 176LL))(v20, &v32_.v32, v41);
            if (v35 != 0) {
              goto LABEL_35;
            }
            v21 = v36;
            v32_.v33 = nullptr;
            v32_.v34 = nullptr;
            v32_.v32 = nullptr;
            v36 = 0;
            nn_account_detail_MakeUserHandle_plt((void*)(&v32_.v32), v41, v21);
            nn_account_detail_ClientUserHandleStore_Add_plt(&v32_.v32);
            v22 = v32_.v33;
            result = v36;
            a2[12] = v32_.v32;
            a2[13] = v22;
            a2[14] = v32_.v34;
            if (result != 0) {
              result =
                  (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
            }
            if (v7 != 5) {
              v36 = 0;
              v23 = nn_account_detail_GetAccountServiceObjectForApplication_plt(
                  result);
              v32_.v32 = &v36;
              v35 = (*(__int64 (**)(__int64, __int64**, _QWORD*))(
                  *(_QWORD*)v23 + 176LL))(v23, &v32_.v32, v42);
              if (v35 != 0) {
                goto LABEL_35;
              }
              v24 = v36;
              v32_.v33 = nullptr;
              v32_.v34 = nullptr;
              v32_.v32 = nullptr;
              v36 = 0;
              nn_account_detail_MakeUserHandle_plt((void*)(&v32_.v32), v42,
                                                   v24);
              nn_account_detail_ClientUserHandleStore_Add_plt(&v32_.v32);
              v25 = v32_.v33;
              result = v36;
              a2[15] = v32_.v32;
              a2[16] = v25;
              a2[17] = v32_.v34;
              if (result != 0) {
                result =
                    (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
              }
              if (v7 != 6) {
                v36 = 0;
                v26 =
                    nn_account_detail_GetAccountServiceObjectForApplication_plt(
                        result);
                v32_.v32 = &v36;
                v35 = (*(__int64 (**)(__int64, __int64**, _QWORD*))(
                    *(_QWORD*)v26 + 176LL))(v26, &v32_.v32, v43);
                if (v35 != 0) {
                  goto LABEL_35;
                }
                v27 = v36;
                v32_.v33 = nullptr;
                v32_.v34 = nullptr;
                v32_.v32 = nullptr;
                v36 = 0;
                nn_account_detail_MakeUserHandle_plt((void*)(&v32_.v32), v43,
                                                     v27);
                nn_account_detail_ClientUserHandleStore_Add_plt(&v32_.v32);
                v28 = v32_.v33;
                result = v36;
                a2[18] = v32_.v32;
                a2[19] = v28;
                a2[20] = v32_.v34;
                if (result != 0) {
                  result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(
                      result);
                }
                if (v7 != 7) {
                  v36 = 0;
                  v29 =
                      nn_account_detail_GetAccountServiceObjectForApplication_plt(
                          result);
                  v32_.v32 = &v36;
                  v35 = (*(__int64 (**)(__int64, __int64**, _QWORD*))(
                      *(_QWORD*)v29 + 176LL))(v29, &v32_.v32, v44);
                  if (v35 == 0) {
                    v30 = v36;
                    v32_.v33 = nullptr;
                    v32_.v34 = nullptr;
                    v32_.v32 = nullptr;
                    v36 = 0;
                    nn_account_detail_MakeUserHandle_plt((void*)(&v32_.v32),
                                                         v44, v30);
                    nn_account_detail_ClientUserHandleStore_Add_plt(&v32_.v32);
                    v31 = v32_.v33;
                    result = v36;
                    a2[21] = v32_.v32;
                    a2[22] = v31;
                    a2[23] = v32_.v34;
                    if (result != 0) {
                      result = (*(__int64 (**)(__int64))(*(_QWORD*)result +
                                                         8LL))(result);
                    }
                    goto LABEL_34;
                  }
                LABEL_35:
                  nn_diag_detail_AbortImpl_plt_858db0(&v35);
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_34:
  *a1 = v7;
  return result;
}

__int64 nn_account_InitializeBaasAccessTokenAccessor(void* this_)
{
  int v1;
  int v3;
  __int64 v4[3];
  _QWORD* v5;

  v4[2] = 0;
  v4[0] = (__int64)&SdkData_ebb0e0;
  v4[1] = (__int64)"acc:aa";
  nn_os_SdkMutexType_Lock_plt(&SdkData_ebb0c8);
  if (SdkData_ebb0cc != 0) {
    if (SdkData_ebb0d0 == nullptr) {
      SdkData_ebb0d0 = SdkRoutine_1ae100;
      SdkData_ebb0d8 = (__int64)&SdkData_ebb0e0;
    }
    ++SdkData_ebb0cc;
  }
  else {
    v5 = nullptr;
    v1 = SdkRoutine_1ad590(v4, &v5);
    if (v1 != 0) {
      v3 = v1;
      if (v5 != nullptr) {
        (*(void (**)(_QWORD*))(*v5 + 8LL))(v5);
      }
      nn_os_SdkMutexType_Unlock_plt(&SdkData_ebb0c8);
      LODWORD(v4[0]) = v3;
      nn_diag_detail_AbortImpl_plt_858db0(v4);
    }
    SdkData_ebb0cc = 1;
    nn_account_detail_g_BaasAccessTokenAccessor = (__int64)v5;
    SdkData_ebb0d0 = SdkRoutine_1ae100;
    SdkData_ebb0d8 = (__int64)&SdkData_ebb0e0;
  }
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_ebb0c8);
}

__int64 nn_account_InitializeBaasAccessTokenAccessorWith(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;

  v1 = *a1;
  *a1 = 0;
  if (v1 != 0) {
    (**(void (***)(__int64))v1)(v1);
  }
  nn_os_SdkMutexType_Lock_plt(&SdkData_ebb0c8);
  v2 = v1;
  if (SdkData_ebb0cc == 0) {
    v2 = 0;
    nn_account_detail_g_BaasAccessTokenAccessor = v1;
  }
  ++SdkData_ebb0cc;
  result = nn_os_SdkMutexType_Unlock_plt(&SdkData_ebb0c8);
  if (v2 != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  if (v1 != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 8LL))(v1);
  }
  return result;
}

__int64 nn_account_FinalizeBaasAccessTokenAccessor(void* this_)
{
  nn_os_SdkMutexType_Lock_plt(&SdkData_ebb0c8);
  if (--SdkData_ebb0cc != 0) {
    return nn_os_SdkMutexType_Unlock_plt(&SdkData_ebb0c8);
  }
  else {
    (*(void (**)(__int64))(
        *(_QWORD*)nn_account_detail_g_BaasAccessTokenAccessor + 8LL))(
        nn_account_detail_g_BaasAccessTokenAccessor);
    nn_account_detail_g_BaasAccessTokenAccessor = 0;
    if (SdkData_ebb0d0 != nullptr) {
      ((void (*)(__int64))SdkData_ebb0d0)(SdkData_ebb0d8);
    }
    SdkData_ebb0d0 = nullptr;
    SdkData_ebb0d8 = 0;
    return nn_os_SdkMutexType_Unlock_plt(&SdkData_ebb0c8);
  }
}

__attribute__((swiftcall)) void nn_account_MakePreselectionInfo(PSEUDO_X8 x8_,
                                                                _QWORD* a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  __int64 v5;
  _QWORD* v6;
  __int64 v8;
  int v9;
  __int64 v10;
  _QWORD v11[15];
  int v12;

  v12 = 0;
  v10 = 0;
  memset(v11, 0, sizeof(v11));
  result = nn_account_ListAllUsers_plt(&v12, &v10, 8);
  v9 = result;
  if ((_DWORD)result != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v9);
  }
  v5 = (unsigned int)v12;
  if (v12 < 1) {
  LABEL_9:
    nn_diag_detail_AbortImpl_plt_856170(result);
  }
  v6 = v11;
  while (*(v6 - 1) != *a1 || *v6 != a1[1]) {
    v6 += 2;
    if (--v5 == 0) {
      goto LABEL_9;
    }
  }
  *(_QWORD*)a2 = 0;
  *(_QWORD*)(a2 + 8) = 0;
  *(_QWORD*)(a2 + 120) = 0;
  *(_QWORD*)(a2 + 128) = 0;
  *(_QWORD*)(a2 + 104) = 0;
  *(_QWORD*)(a2 + 112) = 0;
  *(_QWORD*)(a2 + 88) = 0;
  *(_QWORD*)(a2 + 96) = 0;
  *(_QWORD*)(a2 + 72) = 0;
  *(_QWORD*)(a2 + 80) = 0;
  *(_QWORD*)(a2 + 56) = 0;
  *(_QWORD*)(a2 + 64) = 0;
  *(_QWORD*)(a2 + 40) = 0;
  *(_QWORD*)(a2 + 48) = 0;
  *(_QWORD*)(a2 + 24) = 0;
  *(_QWORD*)(a2 + 32) = 0;
  *(_DWORD*)a2 = -946563126;
  *(_BYTE*)(a2 + 4) = 1;
  v8 = a1[1];
  *(_QWORD*)(a2 + 8) = *a1;
  *(_QWORD*)(a2 + 16) = 0;
  *(_QWORD*)(a2 + 16) = v8;
  {
    result;
    return;
  }
}

__int64 nn_account_1b16c0(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;

  *a1 = SdkData_e870e8 + 16;
  v1 = (_QWORD*)a1[3];
  if (v1 != nullptr) {
    v2 = a1;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(*v1 + 8LL))(
        (void*)v1, a1[3]);
    a1 = v2;
  }
  return SdkRoutine_857220(a1, 32);
}

#pragma GCC visibility pop
