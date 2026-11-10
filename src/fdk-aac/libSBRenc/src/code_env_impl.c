#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 SdkData_e87f28;
extern __int64 SdkData_e87f30;
extern __int64 SdkData_e87f38;
extern __int64 SdkData_e87f40;
extern __int64 SdkData_e87f48;
extern __int64 SdkData_e87f50;
extern __int64 SdkData_e87f58;
extern __int64 SdkData_e87f60;
extern __int64 SdkData_e87f68;
extern __int64 SdkData_e87f70;
extern __int64 SdkData_e87f78;
extern __int64 SdkData_e87f80;
extern __int64 SdkData_e87f88;
extern __int64 SdkData_e87f90;
extern __int64 SdkData_e87f98;
extern __int64 SdkData_e87fa0;
extern __int64 SdkData_e87fa8;
extern __int64 SdkData_e87fb0;
extern __int64 SdkData_e87fb8;
extern __int64 SdkData_e87fc0;
__int64 nn_codec_FDKsbrEnc_InitSbrHuffmanTables(__int64 a1, __int64 a2,
                                                __int64 a3, int a4);

__int64 nn_codec_FDKsbrEnc_InitSbrHuffmanTables(__int64 a1, __int64 a2,
                                                __int64 a3, int a4)
{
  unsigned int v4;
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
  int v16;
  int v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  int v26;

  v4 = 1;
  if (a1 != 0 && a2 != 0 && a3 != 0) {
    *(_DWORD*)(a1 + 1424) = a4;
    v5 = SdkData_e87f28;
    v6 = SdkData_e87f30;
    v7 = SdkData_e87f38;
    v8 = SdkData_e87f40;
    if (a4 == 1) {
      v12 = SdkData_e87f40;
      v11 = SdkData_e87f38;
      v10 = SdkData_e87f30;
      v9 = SdkData_e87f28;
      v13 = SdkData_e87f88;
      v14 = SdkData_e87f90;
      v15 = SdkData_e87f98;
      v18 = SdkData_e87fa0;
      v16 = 5;
      v17 = 6;
      v19 = 31;
      v20 = 12;
      goto LABEL_8;
    }
    if (a4 == 0) {
      v9 = SdkData_e87f48;
      v10 = SdkData_e87f50;
      v11 = SdkData_e87f58;
      v12 = SdkData_e87f60;
      v13 = SdkData_e87f68;
      v14 = SdkData_e87f70;
      v15 = SdkData_e87f78;
      v16 = 6;
      v17 = 7;
      v18 = SdkData_e87f80;
      v19 = 60;
      v20 = 24;
    LABEL_8:
      *(_QWORD*)(a1 + 1072) = v14;
      *(_QWORD*)(a1 + 1064) = v18;
      v4 = 0;
      *(_QWORD*)(a1 + 1096) = v15;
      *(_QWORD*)(a1 + 1104) = v13;
      *(_QWORD*)(a1 + 1080) = v12;
      *(_QWORD*)(a1 + 1112) = v11;
      *(_QWORD*)(a1 + 1088) = v10;
      *(_QWORD*)(a1 + 1120) = v9;
      *(_QWORD*)(a1 + 1032) = v18;
      *(_QWORD*)(a1 + 1048) = v15;
      *(_QWORD*)(a1 + 1040) = v12;
      *(_QWORD*)(a1 + 1056) = v11;
      *(_DWORD*)(a1 + 1024) = v20;
      *(_DWORD*)(a1 + 1028) = v19;
      *(_DWORD*)(a1 + 1292) = v17;
      v21 = SdkData_e87fb0;
      *(_DWORD*)(a1 + 1288) = v16;
      *(_QWORD*)(a1 + 1168) = v21;
      v22 = SdkData_e87fb8;
      *(_QWORD*)(a1 + 1160) = SdkData_e87fb8;
      *(_QWORD*)(a1 + 1184) = SdkData_e87fa8;
      v23 = SdkData_e87fc0;
      *(_QWORD*)(a1 + 1192) = v7;
      *(_QWORD*)(a1 + 1144) = v7;
      *(_QWORD*)(a1 + 1200) = v8;
      *(_QWORD*)(a1 + 1216) = v6;
      *(_QWORD*)(a1 + 1208) = v5;
      *(_QWORD*)(a1 + 1136) = v21;
      *(_QWORD*)(a1 + 1128) = v22;
      *(_QWORD*)(a1 + 1152) = v8;
      *(_QWORD*)(a1 + 1296) = 0x500000005LL;
      *(_QWORD*)(a1 + 1176) = v23;
      *(_DWORD*)(a2 + 96) = v20;
      *(_DWORD*)(a2 + 100) = *(_DWORD*)(a1 + 1024);
      v24 = *(_DWORD*)(a1 + 1028);
      *(_DWORD*)(a2 + 88) = v24;
      *(_DWORD*)(a2 + 92) = v24;
      v25 = *(_DWORD*)(a1 + 1028);
      *(_DWORD*)(a2 + 80) = v25;
      *(_DWORD*)(a2 + 84) = v25;
      *(_QWORD*)(a2 + 128) = *(_QWORD*)(a1 + 1096);
      *(_QWORD*)(a2 + 136) = *(_QWORD*)(a1 + 1104);
      *(_QWORD*)(a2 + 112) = *(_QWORD*)(a1 + 1048);
      *(_QWORD*)(a2 + 144) = *(_QWORD*)(a1 + 1112);
      *(_QWORD*)(a2 + 152) = *(_QWORD*)(a1 + 1120);
      *(_QWORD*)(a2 + 120) = *(_QWORD*)(a1 + 1056);
      v26 = *(_DWORD*)(a1 + 1028);
      *(_DWORD*)(a2 + 80) = v26;
      *(_DWORD*)(a2 + 84) = v26;
      *(_DWORD*)(a2 + 104) = *(_DWORD*)(a1 + 1292);
      *(_DWORD*)(a2 + 108) = *(_DWORD*)(a1 + 1288);
      *(_QWORD*)(a3 + 88) = 0x1F0000001FLL;
      *(_QWORD*)(a3 + 96) = 0xC0000000CLL;
      *(_QWORD*)(a3 + 80) = 0x1F0000001FLL;
      *(_QWORD*)(a3 + 128) = *(_QWORD*)(a1 + 1160);
      *(_QWORD*)(a3 + 136) = *(_QWORD*)(a1 + 1176);
      *(_QWORD*)(a3 + 112) = *(_QWORD*)(a1 + 1128);
      *(_QWORD*)(a3 + 144) = *(_QWORD*)(a1 + 1192);
      *(_QWORD*)(a3 + 152) = *(_QWORD*)(a1 + 1208);
      *(_QWORD*)(a3 + 120) = *(_QWORD*)(a1 + 1144);
      *(_DWORD*)(a3 + 104) = *(_DWORD*)(a1 + 1300);
      *(_DWORD*)(a3 + 108) = *(_DWORD*)(a1 + 1296);
      *(_DWORD*)(a2 + 4) = 0;
      *(_DWORD*)(a3 + 4) = 0;
    }
  }
  return v4;
}

#pragma GCC visibility pop
