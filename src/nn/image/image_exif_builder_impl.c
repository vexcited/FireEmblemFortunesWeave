#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_image_detail_InitializeIfdHeader_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_image_detail_InitializeTiffHeader_plt(_QWORD, _QWORD);
extern _UNKNOWN SdkData_bcbd54;
extern _UNKNOWN SdkData_bcbd5c;
extern _UNKNOWN SdkData_bcbd5e;
extern _UNKNOWN SdkData_bcbd60;
extern _UNKNOWN SdkData_bcbd64;
extern _UNKNOWN SdkData_bcbd68;
extern _UNKNOWN SdkData_bcbd6c;
extern _UNKNOWN SdkData_bcbd6e;
__int64 nn_image_ExifBuilder_Analyze(void* this_);

__int64 nn_image_ExifBuilder_Analyze(void* this_)
{
  __int64 v1;
  int v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int16 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  unsigned int v25;

  v1 = *((_QWORD*)this_ + 2);
  nn_image_detail_InitializeTiffHeader_plt(v1, 19789);
  v3 = *(unsigned __int16*)(v1 + 682);
  *(_DWORD*)(v1 + 64) = 0;
  *(_QWORD*)(v1 + 56) = 0x20000010FLL;
  v4 = v1 + 56;
  *(_WORD*)(v1 + 64) = 18;
  *(_QWORD*)(v1 + 72) = "Nintendo co., ltd";
  if (v3 != 0) {
    *(_DWORD*)(v1 + 88) = 1;
    *(_QWORD*)(v1 + 96) = v1 + 682;
    v5 = 2;
    *(_QWORD*)(v1 + 80) = 0x300000112LL;
  }
  else {
    v5 = 1;
  }
  v6 = v4 + 24LL * v5;
  *(_DWORD*)(v6 + 8) = 1;
  *(_QWORD*)v6 = 0x50000011ALL;
  *(_DWORD*)(v6 + 32) = 1;
  *(_DWORD*)(v6 + 56) = 1;
  *(_QWORD*)(v6 + 64) = &SdkData_bcbd5c;
  v7 = v5 + 3;
  *(_QWORD*)(v6 + 16) = "H";
  *(_QWORD*)(v6 + 24) = 0x50000011BLL;
  *(_QWORD*)(v6 + 40) = &SdkData_bcbd54;
  *(_QWORD*)(v6 + 48) = 0x300000128LL;
  v8 = *(_QWORD*)(v1 + 672);
  if (v8 != 0) {
    v9 = v4 + 24LL * v7;
    *(_QWORD*)v9 = 0x200000131LL;
    v10 = *(_WORD*)(v1 + 680);
    *(_DWORD*)(v9 + 8) = 0;
    *(_QWORD*)(v9 + 16) = v8;
    *(_WORD*)(v9 + 8) = v10;
    v7 = v5 | 4;
  }
  if (*(_QWORD*)(v1 + 688) != 0) {
    v11 = v4 + 24LL * v7++;
    *(_DWORD*)(v11 + 8) = 20;
    *(_QWORD*)v11 = 0x200000132LL;
    *(_QWORD*)(v11 + 16) = *(_QWORD*)(v1 + 688);
  }
  v12 = *(unsigned __int16*)(v1 + 40);
  v13 = v4 + 24LL * v7;
  *(_DWORD*)(v13 + 8) = 1;
  *(_QWORD*)v13 = 0x300000213LL;
  *(_DWORD*)(v13 + 32) = 1;
  *(_QWORD*)(v13 + 16) = &SdkData_bcbd5e;
  *(_QWORD*)(v13 + 24) = 0x400008769LL;
  *(_QWORD*)(v13 + 40) = v1 + 696;
  if ((nn_image_detail_InitializeIfdHeader_plt(v1 + 48, v4, v7 + 2, v12) & 1) !=
      0) {
    v14 = *(unsigned __int16*)(v1 + 52);
    v15 = v1 + 328;
    *(_DWORD*)(v1 + 336) = 4;
    *(_DWORD*)(v1 + 360) = 4;
    *(_QWORD*)(v1 + 328) = 0x700009000LL;
    *(_QWORD*)(v1 + 344) = &SdkData_bcbd60;
    *(_QWORD*)(v1 + 352) = 0x700009101LL;
    *(_QWORD*)(v1 + 368) = &SdkData_bcbd64;
    v16 = *(_QWORD*)(v1 + 704);
    *(_DWORD*)(v1 + 696) = v14;
    if (v16 != 0) {
      *(_QWORD*)(v1 + 392) = v16;
      v17 = 3;
      *(_DWORD*)(v1 + 384) = 0;
      *(_QWORD*)(v1 + 376) = 0x70000927CLL;
      *(_WORD*)(v1 + 384) = *(_WORD*)(v1 + 712);
    }
    else {
      v17 = 2;
    }
    v18 = v17 | 4;
    v19 = v15 + 24LL * v17;
    *(_DWORD*)(v19 + 8) = 4;
    *(_QWORD*)v19 = 0x70000A000LL;
    *(_QWORD*)(v19 + 16) = &SdkData_bcbd68;
    *(_QWORD*)(v19 + 24) = 0x30000A001LL;
    *(_QWORD*)(v19 + 40) = &SdkData_bcbd6c;
    *(_QWORD*)(v19 + 48) = 0x800000A002LL;
    *(_DWORD*)(v19 + 32) = 1;
    *(_DWORD*)(v19 + 52) = 3;
    *(_DWORD*)(v19 + 56) = 1;
    *(_QWORD*)(v19 + 64) = v1 + 714;
    *(_QWORD*)(v19 + 72) = 0x800000A003LL;
    *(_DWORD*)(v19 + 76) = 3;
    *(_DWORD*)(v19 + 80) = 1;
    v20 = *(_QWORD*)(v1 + 720);
    *(_QWORD*)(v19 + 88) = v1 + 716;
    if (v20 != 0) {
      v21 = v15 + 24LL * (unsigned int)v18;
      v18 = v17 + 5;
      *(_DWORD*)(v21 + 8) = 33;
      *(_QWORD*)(v21 + 16) = v20;
      *(_QWORD*)v21 = 0x20000A420LL;
    }
    if ((nn_image_detail_InitializeIfdHeader_plt(v1 + 320, v15, v18, v14) &
         1) != 0) {
      v22 = *(unsigned __int16*)(v1 + 324);
      v23 = *(_QWORD*)(v1 + 728);
      *(_WORD*)(v1 + 324) = 0;
      *(_WORD*)(v1 + 52) = v22;
      if (v23 == 0) {
        *((_WORD*)this_ + 12) = v22;
        *(_WORD*)(v1 + 52) = 0;
        *(_DWORD*)(v1 + 520) = 0;
        *(_WORD*)(v1 + 524) = 0;
        goto LABEL_21;
      }
      *(_QWORD*)(v1 + 568) = "H";
      *(_QWORD*)(v1 + 592) = &SdkData_bcbd54;
      *(_QWORD*)(v1 + 616) = &SdkData_bcbd5c;
      *(_DWORD*)(v1 + 536) = 1;
      *(_DWORD*)(v1 + 560) = 1;
      *(_DWORD*)(v1 + 584) = 1;
      *(_DWORD*)(v1 + 608) = 1;
      *(_DWORD*)(v1 + 632) = 1;
      *(_DWORD*)(v1 + 656) = 1;
      *(_QWORD*)(v1 + 528) = 0x300000103LL;
      *(_QWORD*)(v1 + 648) = 0x400000202LL;
      *(_QWORD*)(v1 + 544) = &SdkData_bcbd6e;
      *(_QWORD*)(v1 + 552) = 0x50000011ALL;
      *(_QWORD*)(v1 + 664) = v1 + 740;
      *(_QWORD*)(v1 + 576) = 0x50000011BLL;
      *(_QWORD*)(v1 + 600) = 0x300000128LL;
      *(_QWORD*)(v1 + 624) = 0x400000201LL;
      *(_QWORD*)(v1 + 640) = v1 + 736;
      if ((nn_image_detail_InitializeIfdHeader_plt(v1 + 520, v1 + 528, 6, v22) &
           1) != 0) {
        v24 = *(unsigned __int16*)(v1 + 524);
        v25 = *(_DWORD*)(v1 + 740) + v24;
        if (v25 <= 0xFFF7) {
          *(_DWORD*)(v1 + 736) = v24;
          *(_WORD*)(v1 + 524) = 0;
          *((_WORD*)this_ + 12) = v25;
        LABEL_21:
          *((_DWORD*)this_ + 2) = 2;
          return 0;
        }
      }
    }
  }
  return 4294967230LL;
}

#pragma GCC visibility pop
