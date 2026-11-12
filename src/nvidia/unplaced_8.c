#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NvOsAlloc_plt(_QWORD);
__int64 NvOsDrvIoctl2_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvOsDrvIoctl3_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvOsDrvIoctl_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvOsFree_plt(_QWORD);
__int64 NvOsGetConfigString_plt(_QWORD, _QWORD, _QWORD);
__int64 NvOsGetConfigU32_plt(_QWORD, _QWORD);
__int64 NvOsGetCurrentAllocator_plt(void);
__int64 NvOsSystemEventCreate_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmMemHandleAllocAttr_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmMemHandleFree_plt(_QWORD);
__int64 NvRmSurfaceComputeAlignment_plt(_QWORD, _QWORD);
__int64 NvRmSurfaceDumpJson_plt(_QWORD, _QWORD, _QWORD, const char*, ...);
__int64 NvRmSurfaceSetup_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmSyncClose_plt(_QWORD);
__int64 NvRmSyncCreateFromFdWithAttr_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmSyncCreateFromSyncpointsWithAttr_plt(_QWORD, _QWORD, _QWORD,
                                                 _QWORD);
__int64 NvRmSyncCreateFromSyncpoints_plt(_QWORD, _QWORD);
__int64 NvRmSyncDup_plt(_QWORD);
__int64 NvRmSyncExtractFd_plt(_QWORD, _QWORD);
__int64 NvRmSyncExtractSyncpoint_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmSyncGetNumSyncpoints_plt(_QWORD, _QWORD);
__int64 NvRmSyncIsFd_plt(_QWORD);
__int64 NvRmSyncIsSyncpoints_plt(_QWORD);
__int64 NvRmSyncWait_plt(_QWORD, _QWORD);
__int64 NvSha1Digest(_QWORD, _QWORD, _QWORD);
__int64 NvSpookyHashLong(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvSpookyHashShort(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 OpenGL(__int64, __int64, _DWORD**, unsigned __int64);
__int64 SdkRoutine_602440(_QWORD);
__int64 SdkRoutine_629310(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_629ca0(void);
__int64 SdkRoutine_63de10(_QWORD);
__int64 SdkRoutine_63e0d0(_QWORD);
__int64 SdkRoutine_6460f0();
__int64 SdkRoutine_646140();
__int64 SdkRoutine_646150();
__int64 SdkRoutine_646160();
__int64 SdkRoutine_646580(__int64);
__int64 SdkRoutine_646590(__int64);
__int64 SdkRoutine_646740();
__int64 SdkRoutine_646780();
__int64 SdkRoutine_646790();
__int64 SdkRoutine_6467a0();
__int64 SdkRoutine_6467b0();
__int64 SdkRoutine_6467c0();
__int64 exit_plt(_QWORD);
__int64 fprintf_plt(_QWORD, const char*, ...);
__int64 memcmp_plt(_QWORD, _QWORD, _QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 nn_wsi_nv_OnAcquireTexture_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_wsi_nv_OnPresentTexture_plt_8759b0(_QWORD, _QWORD);
__int64 nn_wsi_nv_OnWindowFinalize_plt(_QWORD);
__int64 nvidia_629e00(__int64);
__int64 nvidia_629f40(__int64*, __int64, __int64);
__int64 nvidia_62a2d0(_QWORD*, __int64);
__int64 nvidia_63e080_alt1(_QWORD, _QWORD, _QWORD,
                           _QWORD) __asm__("nvidia_63e080");
__int64 nvidia_63f980(_QWORD);
__int64 nvidia_63fca0_alt1(__int64, __int64, __int64,
                           __int64*) __asm__("nvidia_63fca0");
__int64 nvidia_644da0_alt1(_QWORD, _QWORD, _QWORD,
                           _QWORD) __asm__("nvidia_644da0");
__int64 nvidia_645e00_alt1(_QWORD, _QWORD) __asm__("nvidia_645e00");
__int64 nvidia_646610_alt1() __asm__("nvidia_646610");
__int64 strnlen_plt(_QWORD, _QWORD);
extern _BYTE* SdkData_e89b18;
extern _BYTE SdkData_c7798b_alt1[62] __asm__("SdkData_c7798b");
extern _BYTE* SdkData_e899c8;
extern _BYTE* SdkData_e899e8;
extern _BYTE* SdkData_e899f8;
extern _BYTE* SdkData_e89a00;
extern _BYTE* SdkData_e89a08;
extern _BYTE* SdkData_e89a10;
extern _BYTE* SdkData_e89a18;
extern _BYTE* SdkData_e89a20;
extern _BYTE* SdkData_e89a28;
extern _BYTE* SdkData_e89a30;
extern _BYTE* SdkData_e89a38;
extern _BYTE* SdkData_e89a58;
extern _BYTE* SdkData_e89a90;
extern _BYTE* SdkData_e89a98;
extern _BYTE* SdkData_e89aa0;
extern _BYTE* SdkData_e89ab8;
extern _BYTE* SdkData_e89ac0;
extern _BYTE* SdkData_e89b40;
extern _BYTE* SdkData_e89b48;
extern _BYTE* SdkData_e89b58;
extern _BYTE* SdkData_e89b60;
extern _BYTE* SdkData_e89b68;
extern _BYTE* SdkData_e89b70;
extern _QWORD SdkData_e899c8_alt1 __asm__("SdkData_e899c8");
extern _QWORD SdkData_e89a00_alt1 __asm__("SdkData_e89a00");
extern _QWORD SdkData_e89a18_alt1 __asm__("SdkData_e89a18");
extern _QWORD SdkData_e89a20_alt1 __asm__("SdkData_e89a20");
extern _QWORD SdkData_e89a38_alt1 __asm__("SdkData_e89a38");
extern _QWORD SdkData_e89a90_alt1 __asm__("SdkData_e89a90");
extern __int64 (*SdkData_e74ce0[])();
extern __int64* SdkData_e899b0[3];
extern __int64* SdkData_e899f0;
extern __int64* SdkData_e89b08[2];
extern __int64 SdkData_1040738;
extern int* SdkData_e89a48[2];
extern int* SdkData_e89b00[3];
extern int* SdkData_e89b20[4];
extern int* SdkData_e89b28[3];
extern int* SdkData_e89b30[2];
extern int* SdkData_e89b38;
extern int* SdkData_e89b50;
extern unsigned __int8 SdkData_c7798b[62];
extern void (*SdkData_e86b68[37])();
__int64 nvidia_63dce0(__int64 a1, _DWORD* a2);
__int64 nvidia_63dd60(__int64 a1, int a2);
__int64 nvidia_63de20(__int64 a1, __int64 a2, unsigned int* a3, _QWORD* a4);
__int64 nvidia_63e080(__int64 a1, __int64 a2, __int64 a3, int a4);
__int64 nvidia_63e0f0(__int64 a1);
__int64 nvidia_63e140(__int64 result, _QWORD* a2);
__int64 nvidia_63e170(_QWORD* a1);
__int64 nvidia_63e1e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64* a5, __int64 a6, __int64* a7);
__int64 nvidia_63fa00(__int64* a1, unsigned __int64 a2);
__int64 nvidia_63fac0(__int64 a1, unsigned __int64 a2, __int64 a3);
__int64 nvidia_63fca0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64* a4);
__int64 nvidia_63fd60();
__int64 nvidia_63fe80();
__int64 nvidia_640090();
__int64 nvidia_6402a0();
__int64 nvidia_6404b0();
__int64 nvidia_6406c0();
__int64 nvidia_6408e0();
__int64 nvidia_640b00();
__int64 nvidia_640d20();
__int64 nvidia_640f30();
__int64 nvidia_641140();
__int64 nvidia_641350();
__int64 nvidia_641570();
__int64 nvidia_641790();
__int64 nvidia_6419b0();
__int64 nvidia_641bd0();
__int64 nvidia_641df0();
__int64 nvidia_642010();
__int64 nvidia_642230();
__int64 nvidia_642450();
__int64 nvidia_642670();
__int64 nvidia_642890();
__int64 nvidia_642ab0();
__int64 nvidia_642cd0();
__int64 nvidia_642ef0();
__int64 nvidia_643110();
__int64 nvidia_643330();
__int64 nvidia_643550();
__int64 nvidia_643770();
__int64 nvidia_643990();
__int64 nvidia_643bb0();
__int64 nvidia_643dd0();
__int64 nvidia_643ff0();
__int64 nvidia_644660(unsigned int a1);
_BYTE* nvidia_644970(_BYTE* result, _BYTE* a2);
__int64 nvidia_644c60();
__int64 nvidia_644ce0(__int64 a1, int a2);
__int64 nvidia_644cf0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4,
                      __int64* a5, unsigned __int64 a6);
__int64 nvidia_644da0(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 nvidia_644df0(__int64 result, int* a2, int a3, unsigned int a4,
                      _QWORD* a5, bool* a6);
__int64 nvidia_644ec0(__int64 a1, char a2, _BYTE* a3, __int64 a4);
bool nvidia_6457c0(__int64 a1);
bool nvidia_6457e0(_DWORD* a1);
bool nvidia_645800(_DWORD* a1);
__int64 nvidia_645820(__int64 a1, _QWORD* a2);
__int64 nvidia_645950(__int64 a1, __int64 a2, __int64 a3, void** a4);
__int64 nvidia_645b10(__int64 a1, __int64 a2);
__int64 nvidia_645b30(__int64 a1, __int64 a2);
__int64 nvidia_645b40(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 nvidia_645b50(__int64 a1);
__int64 nvidia_645b90(__int64 a1, __int64 a2, void* a3, __int64* a4);
__int64 nvidia_645c40(__int64 a1, __int64 a2);
__int64 nvidia_645d00(__int64 a1, __int64* a2);
__int64 nvidia_645da0(__int64 a1, char a2, char a3);
__int64 nvidia_645e00(__int64 a1, unsigned int a2);
__int64 nvidia_646610(__int64 a1);
__int64 nvidia_646620(__int64 a1, __int64 a2, void** a3);
__int64 nvidia_6467d0(__int64 a1, __int64 a2);
__int64 nvidia_6468a0(__int64 a1, _QWORD* a2);
__int64 nvidia_646a20(__int64 a1, __int64 a2, __int64 a3);
__int64 nvidia_646a80(__int64 a1, __int64 a2);
__int64 nvidia_646ac0(__int64 a1);
__int64 nvidia_646b60(__int64 a1);
__int64 nvidia_646b70(__int64 a1, __int64 a2, void* a3, _QWORD* a4);
__int64 nvidia_646e90(__int64 a1, __int64 a2);
__int64 nvidia_646f80(__int64 a1, __int64* a2);
__int64 NvRmSurfaceWrite_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt_alt1(void* this_, void*, int,
                        unsigned __int64) __asm__("memset_plt");
__int64 nvidia_6467d0_alt1() __asm__("nvidia_6467d0");
__int64 unplaced_8_6463a0(_QWORD* a1, __int64 a2, __int64 a3, _QWORD* a4);
__int64 unplaced_8_6464f0(__int64 a1);
__int64 unplaced_8_646500(__int64 a1);
__int64 unplaced_8_646510(__int64 a1);
__int64 unplaced_8_646520(__int64 a1);
__int64 unplaced_8_646530(__int64 a1);
__int64 unplaced_8_646540(__int64 a1);
__int64 unplaced_8_646550(__int64 a1);
__int64 unplaced_8_646560(__int64 a1);
__int64 unplaced_8_646570(__int64 a1);
__int64 unplaced_8_646580(__int64 a1);
__int64 unplaced_8_646590(__int64 a1);
__int64 unplaced_8_6465a0(__int64 a1);
__int64 unplaced_8_6465b0(__int64 a1);
__int64 unplaced_8_6465c0(__int64 a1);
__int64 unplaced_8_6465d0(__int64 a1);
__int64 unplaced_8_6465e0(__int64 a1);
__int64 unplaced_8_6465f0(__int64 a1);
__int64 unplaced_8_646600(__int64 a1);
__int64 unplaced_8_646780(__int64 a1);
__int64 unplaced_8_646790(__int64 a1);
__int64 unplaced_8_6467a0(__int64 a1);
__int64 unplaced_8_6467b0(__int64 a1);
__int64 unplaced_8_6467c0(__int64 a1);

__int64 nvidia_63dce0(__int64 a1, _DWORD* a2)
{
  __int64 v2;
  unsigned int v4;
  __int64 v5;
  __int64 result;
  int v8;

  v2 = *(_QWORD*)(a1 + 56);
  v8 = 0;
  v4 = *(_DWORD*)(v2 + 60);
  v5 = *(_QWORD*)(v2 + 80) & 0x100LL;
  if (v4 < 0xA || v5 == 0) {
    *a2 = v8;
    return 2;
  }
  else {
    LODWORD(result) =
        nvidia_644da0_alt1(*(unsigned int*)(a1 + 48), 2147767306LL, &v8, 4);
    if ((_DWORD)result != 0) {
      result = (unsigned int)result;
    }
    else {
      result = 0;
    }
    *a2 = v8;
  }
  return result;
}

__int64 nvidia_63dd60(__int64 a1, int a2)
{
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  int v9;

  if ((*(_BYTE*)((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1) + 24) &
       1) != 0) {
    return 0;
  }
  v5 = *(_QWORD*)(a1 + 56);
  v9 = a2;
  v6 = *(_DWORD*)(v5 + 60);
  v7 = *(_QWORD*)(v5 + 80) & 0x100LL;
  if (v6 < 8 || v7 == 0) {
    return 2;
  }
  else {
    return nvidia_644da0_alt1(*(unsigned int*)(a1 + 48), 3221509128LL, &v9, 4);
  }
}

__int64 nvidia_63de20(__int64 a1, __int64 a2, unsigned int* a3, _QWORD* a4)
{
  unsigned int v4;
  __int64 v8;
  _BYTE* v9;
  __int64 result;
  unsigned int v11;

  v4 = *a3;
  v8 = NvOsAlloc_plt(40);
  if (v8 == 0) {
    return 6;
  }
  v9 = (_BYTE*)v8;
  nvidia_63e080_alt1(v8, a1, a2, v4);
  result = SdkRoutine_63e0d0(v9);
  if ((_DWORD)result != 0) {
    v11 = result;
    (**(void (***)(_BYTE*))v9)(v9);
    v9[17] = 1;
    (*(void (**)(_BYTE*))(*(_QWORD*)v9 + 8LL))(v9);
    NvOsFree_plt(v9);
    return v11;
  }
  else {
    *a4 = v9;
  }
  return result;
}

__int64 nvidia_63e080(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result;

  result = nvidia_62a2d0((_QWORD*)a1, a2);
  *(_QWORD*)(a1 + 24) = a3;
  *(_QWORD*)a1 = SdkData_e74ce0;
  *(_DWORD*)(a1 + 32) = -1;
  *(_DWORD*)(a1 + 36) = a4;
  return result;
}

__int64 nvidia_63e0f0(__int64 a1)
{
  __int64 result;

  if (*(_DWORD*)(a1 + 32) == -1) {
    return 0;
  }
  result = SdkRoutine_63de10(*(_QWORD*)(a1 + 8));
  *(_DWORD*)(a1 + 32) = -1;
  return result;
}

__int64 nvidia_63e140(__int64 result, _QWORD* a2)
{
  int v2;
  __int64 v3;
  __int64 v4;

  a2[2] = 0;
  a2[3] = 0;
  *a2 = 0;
  a2[1] = 0;
  v2 = *(_DWORD*)(result + 32);
  v3 = *(_QWORD*)(result + 8);
  *(_DWORD*)a2 = *(_DWORD*)(result + 36);
  v4 = *(_QWORD*)(result + 24);
  *((_DWORD*)a2 + 6) = v2;
  a2[1] = v4;
  a2[2] = v3;
  return result;
}

__int64 nvidia_63e170(_QWORD* a1)
{
  *a1 = SdkData_e74ce0;
  return SdkRoutine_629ca0();
}

__int64 nvidia_63e1e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64* a5, __int64 a6, __int64* a7)
{
  __int64* v9;
  unsigned int v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  _DWORD* v15;
  unsigned __int64 v16;
  _DWORD* v17;
  __int64 v18;
  __int64* v19;
  unsigned int v20;
  __int64 v21;
  unsigned __int64 v22;
  int v23;
  unsigned int v24;
  __int64 v26;
  _QWORD v27[3];
  _DWORD v28[32];
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  _DWORD* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  _DWORD v42[3];

  v9 = a5;
  memset(v27, 0, sizeof(v27));
  v34 = 0;
  v35 = nullptr;
  v36 = 0;
  v37 = 0;
  v30 = 0;
  v31 = nullptr;
  v32 = 0;
  v33 = 0;
  v29 = 0;
  if (a5 == nullptr) {
    v10 = 0;
    goto LABEL_23;
  }
  if (*((_DWORD*)a5 + 2) == 1) {
    v10 = 0;
    a5 = nullptr;
    goto LABEL_23;
  }
  v26 = a1;
  v11 = a2;
  v12 = a3;
  v13 = a4;
  if ((unsigned __int8)NvRmSyncIsSyncpoints_plt(a5) != 0) {
    LODWORD(v38) = 0;
    v14 = NvRmSyncGetNumSyncpoints_plt(v9, &v38);
    if (v14 == 0) {
      if ((unsigned int)v38 < 0x11) {
        v15 = v28;
        if ((_DWORD)v38 != 0) {
          goto LABEL_9;
        }
      LABEL_20:
        v18 = 0;
      LABEL_21:
        v10 = 0;
        v36 = v18;
        v37 = v18;
        v35 = v15;
        LODWORD(v34) = 2;
        goto LABEL_22;
      }
      v14 = nvidia_63f980(v27);
      if (v14 == 0) {
        v15 = (_DWORD*)v27[0];
        if ((_DWORD)v38 != 0) {
        LABEL_9:
          v16 = 0;
          v17 = v15;
          while (1) {
            v14 = NvRmSyncExtractSyncpoint_plt(v9, (unsigned int)v16, v17);
            if (v14 != 0) {
              goto LABEL_46;
            }
            v18 = (unsigned int)v38;
            ++v16;
            v17 += 2;
            if (v16 >= (unsigned int)v38) {
              goto LABEL_21;
            }
          }
        }
        goto LABEL_20;
      }
    }
  LABEL_46:
    v10 = v14;
    goto LABEL_17;
  }
  if ((unsigned __int8)NvRmSyncIsFd_plt(v9) == 0) {
    v10 = 4;
  LABEL_17:
    NvRmSyncClose_plt(v9);
    a1 = v26;
    a4 = v13;
    a3 = v12;
    a2 = v11;
    a5 = nullptr;
    goto LABEL_23;
  }
  v28[0] = -1;
  v10 = NvRmSyncExtractFd_plt(v9, v28);
  if (v10 != 0) {
    goto LABEL_17;
  }
  LODWORD(v34) = 1;
  HIDWORD(v34) = v28[0];
LABEL_22:
  a5 = &v34;
  a1 = v26;
  a4 = v13;
  a3 = v12;
  a2 = v11;
LABEL_23:
  if (a6 != 0) {
    v19 = &v30;
    v31 = &v29;
    v32 = 1;
    v33 = 0;
    if (v10 != 0) {
      goto LABEL_25;
    }
  }
  else {
    v19 = nullptr;
    if (v10 != 0) {
    LABEL_25:
      nvidia_63f980(v27);
      if (*((_BYTE*)a7 + 16) == 1) {
        goto LABEL_26;
      }
    LABEL_33:
      if (a6 == 0) {
        goto LABEL_45;
      }
      goto LABEL_34;
    }
  }
  v20 = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64*, __int64*,
                        __int64*))(*(_QWORD*)a1 + 48LL))(a1, a2, a3, a4, a5,
                                                         v19, a7);
  if (v20 != 0) {
    v10 = v20;
  }
  else {
    v10 = 0;
  }
  nvidia_63f980(v27);
  if (*((_BYTE*)a7 + 16) != 1) {
    goto LABEL_33;
  }
LABEL_26:
  NvRmSyncClose_plt(v9);
  if (a6 == 0) {
    goto LABEL_45;
  }
LABEL_34:
  if (v10 == 0) {
    if ((_DWORD)v30 == 1) {
      v40 = 0;
      v41 = 0;
      v38 = 1;
      v39 = 0;
      v42[0] = HIDWORD(v30);
      v24 = NvRmSyncCreateFromFdWithAttr_plt(v42, &v38, a6);
    }
    else {
      if ((_DWORD)v30 != 2) {
        v10 = 4;
        goto LABEL_45;
      }
      v21 = *a7;
      v22 = a7[1];
      v40 = 0;
      v41 = 0;
      v38 = 0;
      v39 = v21;
      v23 = -1;
      if (v22 < 0xFFFFFFFF) {
        v23 = v22;
      }
      LODWORD(v40) = v23;
      if (HIDWORD(v33) != 0) {
        NvRmSyncCreateFromSyncpointsWithAttr_plt(v31, 0, &v38, a6);
        v10 = 11;
        goto LABEL_45;
      }
      v24 = NvRmSyncCreateFromSyncpointsWithAttr_plt(v31, v33, &v38, a6);
    }
    v10 = v24;
  }
LABEL_45:
  nvidia_63f980(v27);
  NvOsFree_plt(v27[0]);
  return v10;
}

__int64 nvidia_63fa00(__int64* a1, unsigned __int64 a2)
{
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;

  if (a1[2] >= a2) {
    return 0;
  }
  if (a2 >> 61 != 0) {
    return 6;
  }
  v5 = NvOsAlloc_plt(8 * a2);
  if (v5 == 0) {
    return 6;
  }
  v6 = v5;
  if (a1[1] != 0) {
    v7 = 0;
    do {
      *(_QWORD*)(v5 + 8 * v7) = *(_QWORD*)(*a1 + 8 * v7);
      ++v7;
    } while (v7 < a1[1]);
  }
  NvOsFree_plt(*a1);
  *a1 = v6;
  a1[2] = a2;
  return 0;
}

__int64 nvidia_63fac0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 result;

  if (a2 > 0xBF) {
    v4 = NvSpookyHashLong(a1, a2, 0, 0);
  }
  else {
    v4 = NvSpookyHashShort(a1, a2, 0, 0);
  }
  v5 = v4;
  result = memcpy_plt(a3, "NVRM_GPU_", 9);
  *(_BYTE*)(a3 + 9) = SdkData_c7798b[v5 % 0x3E];
  *(_BYTE*)(a3 + 10) = SdkData_c7798b
      [v5 / 0x3E -
       62 * ((unsigned __int64)((v5 / 0x3E *
                                 (unsigned __int128)0x842108421084211uLL) >>
                                64) >>
             1)];
  *(_BYTE*)(a3 + 11) = SdkData_c7798b
      [v5 / 0xF04 -
       62 * ((v5 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
  *(_BYTE*)(a3 + 12) = SdkData_c7798b
      [v5 / 0x3A2F8 -
       62 * ((v5 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
  *(_BYTE*)(a3 + 13) = SdkData_c7798b
      [v5 / 0xE17810 -
       62 * ((v5 / 0xE17810 * (unsigned __int128)0x421084210842109uLL) >> 64)];
  *(_BYTE*)(a3 + 14) = SdkData_c7798b
      [v5 / 0x369B13E0 -
       62LL * (unsigned int)((v5 / 0x369B13E0 *
                              (unsigned __int128)0x421084210842109uLL) >>
                             64)];
  *(_BYTE*)(a3 + 15) = SdkData_c7798b
      [v5 / 0xD398ED040LL -
       62 * ((unsigned int)((554189329 * (v5 / 0xD398ED040LL)) >> 32) >> 3)];
  *(_WORD*)(a3 + 16) = SdkData_c7798b[(
      unsigned int)(v5 / 0x333F0966F80LL -
                    62 * ((69273667 * (v5 / 0x333F0966F80LL)) >> 32))];
  return result;
}

__int64 nvidia_63fca0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64* a4)
{
  __int64 result;
  __int64 v9;
  _QWORD v10[2];
  __int16 v11;
  _BYTE v12[256];

  if ((unsigned int)NvOsGetConfigString_plt(a1, v12, 256) == 0 ||
      (v11 = 0, v10[0] = 0, v10[1] = 0, nvidia_63fac0(a1, a2, (__int64)v10),
       (_DWORD)(result = NvOsGetConfigString_plt(v10, v12, 256)) == 0)) {
    v9 = strnlen_plt(v12, 256);
    result = NvOsAlloc_plt(v9 + 1);
    if (result != 0) {
      a3 = result;
      result = memcpy_plt(result, v12, v9);
      *(_BYTE*)(a3 + v9) = 0;
    }
  }
  *a4 = a3;
  return result;
}

__int64 nvidia_63fd60()
{
  __int64 result;

  nvidia_63fe80();
  nvidia_63fca0_alt1((__int64)"NVRM_GPU_DEFAULT_SCHEDULING_DOMAIN_NAME", 39, 0,
                     SdkData_e89b08[0]);
  nvidia_63fca0_alt1((__int64)"NVRM_GPU_DUMMY", 14, 0, SdkData_e899b0[0]);
  nvidia_640090();
  nvidia_6402a0();
  nvidia_6404b0();
  nvidia_6406c0();
  nvidia_6408e0();
  nvidia_640b00();
  nvidia_63fca0_alt1((__int64)"NVRM_GPU_NVGPU_ECC_OVERRIDES", 28, 0,
                     SdkData_e899f0);
  nvidia_640d20();
  nvidia_640f30();
  nvidia_641140();
  nvidia_641350();
  nvidia_641570();
  nvidia_641790();
  nvidia_6419b0();
  nvidia_641bd0();
  nvidia_641df0();
  nvidia_642010();
  nvidia_642230();
  nvidia_642450();
  nvidia_642670();
  nvidia_642890();
  nvidia_642ab0();
  nvidia_642cd0();
  nvidia_642ef0();
  nvidia_643110();
  nvidia_643330();
  nvidia_643550();
  nvidia_643770();
  nvidia_643990();
  nvidia_643bb0();
  result = nvidia_643dd0();
  if (*SdkData_e89b18 == 1) {
    fprintf_plt(*(_QWORD*)SdkData_e86b68[0],
                "%s is set, libnvrm_gpu.so cannot be used!\n",
                "NVRM_GPU_PREVENT_USE");
    exit_plt(1);
    return nvidia_63fe80();
  }
  return result;
}

__int64 nvidia_63fe80()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  int* v6;
  _QWORD v7[2];
  __int16 v8;

  result =
      NvOsGetConfigU32_plt("NVRM_GPU_DEFAULT_DEVICE_INDEX", SdkData_e89b20[0]);
  if ((_DWORD)result != 0) {
    v8 = 0;
    v7[0] = 0;
    v7[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_DEFAULT_DEVICE_INDEX", 29, 0, 0);
    memcpy_plt(v7, "NVRM_GPU_", 9);
    HIBYTE(v8) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v7[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v7[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v7[1]) = v3;
    BYTE5(v7[1]) = v4;
    BYTE4(v7[1]) = v5;
    BYTE6(v7[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v7[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v8) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    v6 = SdkData_e89b20[0];
    result = NvOsGetConfigU32_plt(v7, SdkData_e89b20[0]);
    if ((_DWORD)result != 0) {
      *v6 = 0;
    }
  }
  return result;
}

__int64 nvidia_640090()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  int* v6;
  _QWORD v7[2];
  __int16 v8;

  result =
      NvOsGetConfigU32_plt("NVRM_GPU_CHANNEL_INTERLEAVE", SdkData_e89b28[0]);
  if ((_DWORD)result != 0) {
    v8 = 0;
    v7[0] = 0;
    v7[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_CHANNEL_INTERLEAVE", 27, 0, 0);
    memcpy_plt(v7, "NVRM_GPU_", 9);
    HIBYTE(v8) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v7[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v7[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v7[1]) = v3;
    BYTE5(v7[1]) = v4;
    BYTE4(v7[1]) = v5;
    BYTE6(v7[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v7[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v8) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    v6 = SdkData_e89b28[0];
    result = NvOsGetConfigU32_plt(v7, SdkData_e89b28[0]);
    if ((_DWORD)result != 0) {
      *v6 = 0;
    }
  }
  return result;
}

__int64 nvidia_6402a0()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  int* v6;
  _QWORD v7[2];
  __int16 v8;

  result = NvOsGetConfigU32_plt("NVRM_GPU_CHANNEL_PRIORITY", SdkData_e89b30[0]);
  if ((_DWORD)result != 0) {
    v8 = 0;
    v7[0] = 0;
    v7[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_CHANNEL_PRIORITY", 25, 0, 0);
    memcpy_plt(v7, "NVRM_GPU_", 9);
    HIBYTE(v8) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v7[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v7[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v7[1]) = v3;
    BYTE5(v7[1]) = v4;
    BYTE4(v7[1]) = v5;
    BYTE6(v7[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v7[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v8) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    v6 = SdkData_e89b30[0];
    result = NvOsGetConfigU32_plt(v7, SdkData_e89b30[0]);
    if ((_DWORD)result != 0) {
      *v6 = 0;
    }
  }
  return result;
}

__int64 nvidia_6404b0()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  int* v6;
  _QWORD v7[2];
  __int16 v8;

  result = NvOsGetConfigU32_plt("NVRM_GPU_CHANNEL_TIMESLICE", SdkData_e89b38);
  if ((_DWORD)result != 0) {
    v8 = 0;
    v7[0] = 0;
    v7[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_CHANNEL_TIMESLICE", 26, 0, 0);
    memcpy_plt(v7, "NVRM_GPU_", 9);
    HIBYTE(v8) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v7[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v7[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v7[1]) = v3;
    BYTE5(v7[1]) = v4;
    BYTE4(v7[1]) = v5;
    BYTE6(v7[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v7[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v8) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    v6 = SdkData_e89b38;
    result = NvOsGetConfigU32_plt(v7, SdkData_e89b38);
    if ((_DWORD)result != 0) {
      *v6 = 0;
    }
  }
  return result;
}

__int64 nvidia_6406c0()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  bool v6;
  char v7;
  _QWORD v8[2];
  __int16 v9;
  int v10;

  v10 = 0;
  result = NvOsGetConfigU32_plt("NVRM_GPU_DISABLE_COMPRESSION", &v10);
  if ((_DWORD)result != 0) {
    v9 = 0;
    v8[0] = 0;
    v8[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_DISABLE_COMPRESSION", 28, 0, 0);
    memcpy_plt(v8, "NVRM_GPU_", 9);
    HIBYTE(v9) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v8[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v8[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v8[1]) = v3;
    BYTE5(v8[1]) = v4;
    BYTE4(v8[1]) = v5;
    BYTE6(v8[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v8[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v9) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    result = NvOsGetConfigU32_plt(v8, &v10);
    v6 = (_DWORD)result != 0 || v10 == 0;
  }
  else {
    v6 = v10 == 0;
  }
  v7 = !v6;
  *SdkData_e89b40 = v7;
  return result;
}

__int64 nvidia_6408e0()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  bool v6;
  char v7;
  _QWORD v8[2];
  __int16 v9;
  int v10;

  v10 = 0;
  result = NvOsGetConfigU32_plt("NVRM_GPU_NVGPU_DISABLE", &v10);
  if ((_DWORD)result != 0) {
    v9 = 0;
    v8[0] = 0;
    v8[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_NVGPU_DISABLE", 22, 0, 0);
    memcpy_plt(v8, "NVRM_GPU_", 9);
    HIBYTE(v9) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v8[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v8[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v8[1]) = v3;
    BYTE5(v8[1]) = v4;
    BYTE4(v8[1]) = v5;
    BYTE6(v8[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v8[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v9) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    result = NvOsGetConfigU32_plt(v8, &v10);
    v6 = (_DWORD)result != 0 || v10 == 0;
  }
  else {
    v6 = v10 == 0;
  }
  v7 = !v6;
  *SdkData_e89ac0 = v7;
  return result;
}

__int64 nvidia_640b00()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  bool v6;
  char v7;
  _QWORD v8[2];
  __int16 v9;
  int v10;

  v10 = 0;
  result = NvOsGetConfigU32_plt("NVRM_GPU_NVGPU_DO_NFA_PARTIAL_MAP", &v10);
  if ((_DWORD)result != 0) {
    v9 = 0;
    v8[0] = 0;
    v8[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_NVGPU_DO_NFA_PARTIAL_MAP", 33, 0, 0);
    memcpy_plt(v8, "NVRM_GPU_", 9);
    HIBYTE(v9) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v8[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v8[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v8[1]) = v3;
    BYTE5(v8[1]) = v4;
    BYTE4(v8[1]) = v5;
    BYTE6(v8[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v8[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v9) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    result = NvOsGetConfigU32_plt(v8, &v10);
    v6 = (_DWORD)result != 0 || v10 == 0;
  }
  else {
    v6 = v10 == 0;
  }
  v7 = !v6;
  *SdkData_e89b48 = v7;
  return result;
}

__int64 nvidia_640d20()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  int* v6;
  _QWORD v7[2];
  __int16 v8;

  result = NvOsGetConfigU32_plt("NVRM_GPU_NVGPU_FORCE_L2_SECTOR_PROMOTION",
                                SdkData_e89b00[0]);
  if ((_DWORD)result != 0) {
    v8 = 0;
    v7[0] = 0;
    v7[1] = 0;
    v1 =
        NvSpookyHashShort("NVRM_GPU_NVGPU_FORCE_L2_SECTOR_PROMOTION", 40, 0, 0);
    memcpy_plt(v7, "NVRM_GPU_", 9);
    HIBYTE(v8) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v7[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v7[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v7[1]) = v3;
    BYTE5(v7[1]) = v4;
    BYTE4(v7[1]) = v5;
    BYTE6(v7[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v7[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v8) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    v6 = SdkData_e89b00[0];
    result = NvOsGetConfigU32_plt(v7, SdkData_e89b00[0]);
    if ((_DWORD)result != 0) {
      *v6 = -1;
    }
  }
  return result;
}

__int64 nvidia_640f30()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  int* v6;
  _QWORD v7[2];
  __int16 v8;

  result = NvOsGetConfigU32_plt("NVRM_GPU_NVGPU_FORCE_SCG", SdkData_e89a48[0]);
  if ((_DWORD)result != 0) {
    v8 = 0;
    v7[0] = 0;
    v7[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_NVGPU_FORCE_SCG", 24, 0, 0);
    memcpy_plt(v7, "NVRM_GPU_", 9);
    HIBYTE(v8) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v7[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v7[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v7[1]) = v3;
    BYTE5(v7[1]) = v4;
    BYTE4(v7[1]) = v5;
    BYTE6(v7[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v7[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v8) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    v6 = SdkData_e89a48[0];
    result = NvOsGetConfigU32_plt(v7, SdkData_e89a48[0]);
    if ((_DWORD)result != 0) {
      *v6 = 0;
    }
  }
  return result;
}

__int64 nvidia_641140()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  int* v6;
  _QWORD v7[2];
  __int16 v8;

  result =
      NvOsGetConfigU32_plt("NVRM_GPU_NVGPU_FORCE_SM_DIVERSITY", SdkData_e89b50);
  if ((_DWORD)result != 0) {
    v8 = 0;
    v7[0] = 0;
    v7[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_NVGPU_FORCE_SM_DIVERSITY", 33, 0, 0);
    memcpy_plt(v7, "NVRM_GPU_", 9);
    HIBYTE(v8) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v7[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v7[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v7[1]) = v3;
    BYTE5(v7[1]) = v4;
    BYTE4(v7[1]) = v5;
    BYTE6(v7[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v7[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v8) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    v6 = SdkData_e89b50;
    result = NvOsGetConfigU32_plt(v7, SdkData_e89b50);
    if ((_DWORD)result != 0) {
      *v6 = 0;
    }
  }
  return result;
}

__int64 nvidia_641350()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  bool v6;
  char v7;
  _QWORD v8[2];
  __int16 v9;
  int v10;

  v10 = 0;
  result = NvOsGetConfigU32_plt("NVRM_GPU_NVGPU_NO_ALWAYS_IO_COHERENCY", &v10);
  if ((_DWORD)result != 0) {
    v9 = 0;
    v8[0] = 0;
    v8[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_NVGPU_NO_ALWAYS_IO_COHERENCY", 37, 0, 0);
    memcpy_plt(v8, "NVRM_GPU_", 9);
    HIBYTE(v9) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v8[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v8[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v8[1]) = v3;
    BYTE5(v8[1]) = v4;
    BYTE4(v8[1]) = v5;
    BYTE6(v8[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v8[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v9) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    result = NvOsGetConfigU32_plt(v8, &v10);
    v6 = (_DWORD)result != 0 || v10 == 0;
  }
  else {
    v6 = v10 == 0;
  }
  v7 = !v6;
  *SdkData_e89a20 = v7;
  return result;
}

__int64 nvidia_641570()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  bool v6;
  char v7;
  _QWORD v8[2];
  __int16 v9;
  int v10;

  v10 = 0;
  result = NvOsGetConfigU32_plt("NVRM_GPU_NVGPU_NO_ASYNC_CE", &v10);
  if ((_DWORD)result != 0) {
    v9 = 0;
    v8[0] = 0;
    v8[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_NVGPU_NO_ASYNC_CE", 26, 0, 0);
    memcpy_plt(v8, "NVRM_GPU_", 9);
    HIBYTE(v9) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v8[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v8[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v8[1]) = v3;
    BYTE5(v8[1]) = v4;
    BYTE4(v8[1]) = v5;
    BYTE6(v8[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v8[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v9) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    result = NvOsGetConfigU32_plt(v8, &v10);
    v6 = (_DWORD)result != 0 || v10 == 0;
  }
  else {
    v6 = v10 == 0;
  }
  v7 = !v6;
  *SdkData_e89a90 = v7;
  return result;
}

__int64 nvidia_641790()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  bool v6;
  char v7;
  _QWORD v8[2];
  __int16 v9;
  int v10;

  v10 = 0;
  result = NvOsGetConfigU32_plt("NVRM_GPU_NVGPU_NO_BIG_PAGES", &v10);
  if ((_DWORD)result != 0) {
    v9 = 0;
    v8[0] = 0;
    v8[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_NVGPU_NO_BIG_PAGES", 27, 0, 0);
    memcpy_plt(v8, "NVRM_GPU_", 9);
    HIBYTE(v9) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v8[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v8[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v8[1]) = v3;
    BYTE5(v8[1]) = v4;
    BYTE4(v8[1]) = v5;
    BYTE6(v8[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v8[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v9) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    result = NvOsGetConfigU32_plt(v8, &v10);
    v6 = (_DWORD)result != 0 || v10 == 0;
  }
  else {
    v6 = v10 == 0;
  }
  v7 = !v6;
  *SdkData_e89a38 = v7;
  return result;
}

__int64 nvidia_6419b0()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  bool v6;
  char v7;
  _QWORD v8[2];
  __int16 v9;
  int v10;

  v10 = 0;
  result =
      NvOsGetConfigU32_plt("NVRM_GPU_NVGPU_NO_CHANNEL_SETPRIORITY_EMUL", &v10);
  if ((_DWORD)result != 0) {
    v9 = 0;
    v8[0] = 0;
    v8[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_NVGPU_NO_CHANNEL_SETPRIORITY_EMUL", 42, 0,
                           0);
    memcpy_plt(v8, "NVRM_GPU_", 9);
    HIBYTE(v9) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v8[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v8[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v8[1]) = v3;
    BYTE5(v8[1]) = v4;
    BYTE4(v8[1]) = v5;
    BYTE6(v8[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v8[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v9) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    result = NvOsGetConfigU32_plt(v8, &v10);
    v6 = (_DWORD)result != 0 || v10 == 0;
  }
  else {
    v6 = v10 == 0;
  }
  v7 = !v6;
  *SdkData_e89a00 = v7;
  return result;
}

__int64 nvidia_641bd0()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  bool v6;
  char v7;
  _QWORD v8[2];
  __int16 v9;
  int v10;

  v10 = 0;
  result = NvOsGetConfigU32_plt("NVRM_GPU_NVGPU_NO_IO_COHERENCY", &v10);
  if ((_DWORD)result != 0) {
    v9 = 0;
    v8[0] = 0;
    v8[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_NVGPU_NO_IO_COHERENCY", 30, 0, 0);
    memcpy_plt(v8, "NVRM_GPU_", 9);
    HIBYTE(v9) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v8[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v8[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v8[1]) = v3;
    BYTE5(v8[1]) = v4;
    BYTE4(v8[1]) = v5;
    BYTE6(v8[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v8[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v9) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    result = NvOsGetConfigU32_plt(v8, &v10);
    v6 = (_DWORD)result != 0 || v10 == 0;
  }
  else {
    v6 = v10 == 0;
  }
  v7 = !v6;
  *SdkData_e89a18 = v7;
  return result;
}

__int64 nvidia_641df0()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  bool v6;
  char v7;
  _QWORD v8[2];
  __int16 v9;
  int v10;

  v10 = 0;
  result = NvOsGetConfigU32_plt("NVRM_GPU_NVGPU_NO_IOCTL_MUTEX", &v10);
  if ((_DWORD)result != 0) {
    v9 = 0;
    v8[0] = 0;
    v8[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_NVGPU_NO_IOCTL_MUTEX", 29, 0, 0);
    memcpy_plt(v8, "NVRM_GPU_", 9);
    HIBYTE(v9) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v8[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v8[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v8[1]) = v3;
    BYTE5(v8[1]) = v4;
    BYTE4(v8[1]) = v5;
    BYTE6(v8[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v8[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v9) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    result = NvOsGetConfigU32_plt(v8, &v10);
    v6 = (_DWORD)result != 0 || v10 == 0;
  }
  else {
    v6 = v10 == 0;
  }
  v7 = !v6;
  *SdkData_e899c8 = v7;
  return result;
}

__int64 nvidia_642010()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  bool v6;
  char v7;
  _QWORD v8[2];
  __int16 v9;
  int v10;

  v10 = 0;
  result = NvOsGetConfigU32_plt("NVRM_GPU_NVGPU_NO_L2_CACHING", &v10);
  if ((_DWORD)result != 0) {
    v9 = 0;
    v8[0] = 0;
    v8[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_NVGPU_NO_L2_CACHING", 28, 0, 0);
    memcpy_plt(v8, "NVRM_GPU_", 9);
    HIBYTE(v9) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v8[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v8[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v8[1]) = v3;
    BYTE5(v8[1]) = v4;
    BYTE4(v8[1]) = v5;
    BYTE6(v8[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v8[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v9) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    result = NvOsGetConfigU32_plt(v8, &v10);
    v6 = (_DWORD)result != 0 || v10 == 0;
  }
  else {
    v6 = v10 == 0;
  }
  v7 = !v6;
  *SdkData_e89b58 = v7;
  return result;
}

__int64 nvidia_642230()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  bool v6;
  char v7;
  _QWORD v8[2];
  __int16 v9;
  int v10;

  v10 = 0;
  result = NvOsGetConfigU32_plt("NVRM_GPU_NVGPU_NO_L3", &v10);
  if ((_DWORD)result != 0) {
    v9 = 0;
    v8[0] = 0;
    v8[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_NVGPU_NO_L3", 20, 0, 0);
    memcpy_plt(v8, "NVRM_GPU_", 9);
    HIBYTE(v9) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v8[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v8[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v8[1]) = v3;
    BYTE5(v8[1]) = v4;
    BYTE4(v8[1]) = v5;
    BYTE6(v8[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v8[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v9) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    result = NvOsGetConfigU32_plt(v8, &v10);
    v6 = (_DWORD)result != 0 || v10 == 0;
  }
  else {
    v6 = v10 == 0;
  }
  v7 = !v6;
  *SdkData_e89a98 = v7;
  return result;
}

__int64 nvidia_642450()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  bool v6;
  char v7;
  _QWORD v8[2];
  __int16 v9;
  int v10;

  v10 = 0;
  result = NvOsGetConfigU32_plt("NVRM_GPU_NVGPU_NO_MAP_BUFFER_BATCH", &v10);
  if ((_DWORD)result != 0) {
    v9 = 0;
    v8[0] = 0;
    v8[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_NVGPU_NO_MAP_BUFFER_BATCH", 34, 0, 0);
    memcpy_plt(v8, "NVRM_GPU_", 9);
    HIBYTE(v9) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v8[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v8[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v8[1]) = v3;
    BYTE5(v8[1]) = v4;
    BYTE4(v8[1]) = v5;
    BYTE6(v8[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v8[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v9) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    result = NvOsGetConfigU32_plt(v8, &v10);
    v6 = (_DWORD)result != 0 || v10 == 0;
  }
  else {
    v6 = v10 == 0;
  }
  v7 = !v6;
  *SdkData_e89b60 = v7;
  return result;
}

__int64 nvidia_642670()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  bool v6;
  char v7;
  _QWORD v8[2];
  __int16 v9;
  int v10;

  v10 = 0;
  result = NvOsGetConfigU32_plt("NVRM_GPU_NVGPU_NO_PROBE_IGPU", &v10);
  if ((_DWORD)result != 0) {
    v9 = 0;
    v8[0] = 0;
    v8[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_NVGPU_NO_PROBE_IGPU", 28, 0, 0);
    memcpy_plt(v8, "NVRM_GPU_", 9);
    HIBYTE(v9) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v8[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v8[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v8[1]) = v3;
    BYTE5(v8[1]) = v4;
    BYTE4(v8[1]) = v5;
    BYTE6(v8[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v8[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v9) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    result = NvOsGetConfigU32_plt(v8, &v10);
    v6 = (_DWORD)result != 0 || v10 == 0;
  }
  else {
    v6 = v10 == 0;
  }
  v7 = !v6;
  *SdkData_e89ab8 = v7;
  return result;
}

__int64 nvidia_642890()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  bool v6;
  char v7;
  _QWORD v8[2];
  __int16 v9;
  int v10;

  v10 = 0;
  result = NvOsGetConfigU32_plt("NVRM_GPU_NVGPU_NO_SPARSE", &v10);
  if ((_DWORD)result != 0) {
    v9 = 0;
    v8[0] = 0;
    v8[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_NVGPU_NO_SPARSE", 24, 0, 0);
    memcpy_plt(v8, "NVRM_GPU_", 9);
    HIBYTE(v9) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v8[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v8[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v8[1]) = v3;
    BYTE5(v8[1]) = v4;
    BYTE4(v8[1]) = v5;
    BYTE6(v8[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v8[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v9) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    result = NvOsGetConfigU32_plt(v8, &v10);
    v6 = (_DWORD)result != 0 || v10 == 0;
  }
  else {
    v6 = v10 == 0;
  }
  v7 = !v6;
  *SdkData_e899e8 = v7;
  return result;
}

__int64 nvidia_642ab0()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  bool v6;
  char v7;
  _QWORD v8[2];
  __int16 v9;
  int v10;

  v10 = 0;
  result = NvOsGetConfigU32_plt("NVRM_GPU_NVGPU_NO_SYNCFD", &v10);
  if ((_DWORD)result != 0) {
    v9 = 0;
    v8[0] = 0;
    v8[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_NVGPU_NO_SYNCFD", 24, 0, 0);
    memcpy_plt(v8, "NVRM_GPU_", 9);
    HIBYTE(v9) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v8[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v8[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v8[1]) = v3;
    BYTE5(v8[1]) = v4;
    BYTE4(v8[1]) = v5;
    BYTE6(v8[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v8[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v9) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    result = NvOsGetConfigU32_plt(v8, &v10);
    v6 = (_DWORD)result != 0 || v10 == 0;
  }
  else {
    v6 = v10 == 0;
  }
  v7 = !v6;
  *SdkData_e89b68 = v7;
  return result;
}

__int64 nvidia_642cd0()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  bool v6;
  char v7;
  _QWORD v8[2];
  __int16 v9;
  int v10;

  v10 = 0;
  result = NvOsGetConfigU32_plt("NVRM_GPU_NVGPU_NO_SYNCPOINTS", &v10);
  if ((_DWORD)result != 0) {
    v9 = 0;
    v8[0] = 0;
    v8[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_NVGPU_NO_SYNCPOINTS", 28, 0, 0);
    memcpy_plt(v8, "NVRM_GPU_", 9);
    HIBYTE(v9) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v8[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v8[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v8[1]) = v3;
    BYTE5(v8[1]) = v4;
    BYTE4(v8[1]) = v5;
    BYTE6(v8[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v8[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v9) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    result = NvOsGetConfigU32_plt(v8, &v10);
    v6 = (_DWORD)result != 0 || v10 == 0;
  }
  else {
    v6 = v10 == 0;
  }
  v7 = !v6;
  *SdkData_e899f8 = v7;
  return result;
}

__int64 nvidia_642ef0()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  bool v6;
  char v7;
  _QWORD v8[2];
  __int16 v9;
  int v10;

  v10 = 0;
  result = NvOsGetConfigU32_plt("NVRM_GPU_NVGPU_NO_TTU", &v10);
  if ((_DWORD)result != 0) {
    v9 = 0;
    v8[0] = 0;
    v8[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_NVGPU_NO_TTU", 21, 0, 0);
    memcpy_plt(v8, "NVRM_GPU_", 9);
    HIBYTE(v9) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v8[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v8[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v8[1]) = v3;
    BYTE5(v8[1]) = v4;
    BYTE4(v8[1]) = v5;
    BYTE6(v8[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v8[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v9) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    result = NvOsGetConfigU32_plt(v8, &v10);
    v6 = (_DWORD)result != 0 || v10 == 0;
  }
  else {
    v6 = v10 == 0;
  }
  v7 = !v6;
  *SdkData_e89a28 = v7;
  return result;
}

__int64 nvidia_643110()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  bool v6;
  char v7;
  _QWORD v8[2];
  __int16 v9;
  int v10;

  v10 = 0;
  result =
      NvOsGetConfigU32_plt("NVRM_GPU_NVGPU_NO_USER_MANAGED_SYNCPOINT", &v10);
  if ((_DWORD)result != 0) {
    v9 = 0;
    v8[0] = 0;
    v8[1] = 0;
    v1 =
        NvSpookyHashShort("NVRM_GPU_NVGPU_NO_USER_MANAGED_SYNCPOINT", 40, 0, 0);
    memcpy_plt(v8, "NVRM_GPU_", 9);
    HIBYTE(v9) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v8[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v8[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v8[1]) = v3;
    BYTE5(v8[1]) = v4;
    BYTE4(v8[1]) = v5;
    BYTE6(v8[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v8[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v9) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    result = NvOsGetConfigU32_plt(v8, &v10);
    v6 = (_DWORD)result != 0 || v10 == 0;
  }
  else {
    v6 = v10 == 0;
  }
  v7 = !v6;
  *SdkData_e89a08 = v7;
  return result;
}

__int64 nvidia_643330()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  bool v6;
  char v7;
  _QWORD v8[2];
  __int16 v9;
  int v10;

  v10 = 0;
  result = NvOsGetConfigU32_plt("NVRM_GPU_NVGPU_NO_VPR", &v10);
  if ((_DWORD)result != 0) {
    v9 = 0;
    v8[0] = 0;
    v8[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_NVGPU_NO_VPR", 21, 0, 0);
    memcpy_plt(v8, "NVRM_GPU_", 9);
    HIBYTE(v9) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v8[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v8[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v8[1]) = v3;
    BYTE5(v8[1]) = v4;
    BYTE4(v8[1]) = v5;
    BYTE6(v8[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v8[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v9) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    result = NvOsGetConfigU32_plt(v8, &v10);
    v6 = (_DWORD)result != 0 || v10 == 0;
  }
  else {
    v6 = v10 == 0;
  }
  v7 = !v6;
  *SdkData_e89b70 = v7;
  return result;
}

__int64 nvidia_643550()
{
  __int64 result;
  unsigned __int64 v1;
  char v2;
  char v3;
  char v4;
  char v5;
  bool v6;
  char v7;
  _QWORD v8[2];
  __int16 v9;
  int v10;

  v10 = 0;
  result = NvOsGetConfigU32_plt("NVRM_GPU_NVGPU_NO_ZBC", &v10);
  if ((_DWORD)result != 0) {
    v9 = 0;
    v8[0] = 0;
    v8[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_NVGPU_NO_ZBC", 21, 0, 0);
    memcpy_plt(v8, "NVRM_GPU_", 9);
    HIBYTE(v9) = 0;
    v2 = SdkData_c7798b_alt1
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b_alt1[v1 % 0x3E];
    v4 = SdkData_c7798b_alt1[v1 / 0xE17810 -
                             62 * ((v1 / 0xE17810 *
                                    (unsigned __int128)0x421084210842109uLL) >>
                                   64)];
    BYTE2(v8[1]) = SdkData_c7798b_alt1
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v8[1]) = v2;
    v5 = SdkData_c7798b_alt1
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v8[1]) = v3;
    BYTE5(v8[1]) = v4;
    BYTE4(v8[1]) = v5;
    BYTE6(v8[1]) = SdkData_c7798b_alt1
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v8[1]) = SdkData_c7798b_alt1
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v9) = SdkData_c7798b_alt1[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    result = NvOsGetConfigU32_plt(v8, &v10);
    v6 = (_DWORD)result != 0 || v10 == 0;
  }
  else {
    v6 = v10 == 0;
  }
  v7 = !v6;
  *SdkData_e89a10 = v7;
  return result;
}

__int64 nvidia_643770()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  bool v6;
  char v7;
  _QWORD v8[2];
  __int16 v9;
  int v10;

  v10 = 0;
  result = NvOsGetConfigU32_plt("NVRM_GPU_NVGPU_NO_ZCULL", &v10);
  if ((_DWORD)result != 0) {
    v9 = 0;
    v8[0] = 0;
    v8[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_NVGPU_NO_ZCULL", 23, 0, 0);
    memcpy_plt(v8, "NVRM_GPU_", 9);
    HIBYTE(v9) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v8[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v8[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v8[1]) = v3;
    BYTE5(v8[1]) = v4;
    BYTE4(v8[1]) = v5;
    BYTE6(v8[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v8[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v9) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    result = NvOsGetConfigU32_plt(v8, &v10);
    v6 = (_DWORD)result != 0 || v10 == 0;
  }
  else {
    v6 = v10 == 0;
  }
  v7 = !v6;
  *SdkData_e89a30 = v7;
  return result;
}

__int64 nvidia_643990()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  bool v6;
  char v7;
  _QWORD v8[2];
  __int16 v9;
  int v10;

  v10 = 0;
  result = NvOsGetConfigU32_plt("NVRM_GPU_NVGPU_USE_SYSMEM_FOR_VIDMEM", &v10);
  if ((_DWORD)result != 0) {
    v9 = 0;
    v8[0] = 0;
    v8[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_NVGPU_USE_SYSMEM_FOR_VIDMEM", 36, 0, 0);
    memcpy_plt(v8, "NVRM_GPU_", 9);
    HIBYTE(v9) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v8[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v8[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v8[1]) = v3;
    BYTE5(v8[1]) = v4;
    BYTE4(v8[1]) = v5;
    BYTE6(v8[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v8[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v9) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    result = NvOsGetConfigU32_plt(v8, &v10);
    v6 = (_DWORD)result != 0 || v10 == 0;
  }
  else {
    v6 = v10 == 0;
  }
  v7 = !v6;
  *SdkData_e89aa0 = v7;
  return result;
}

__int64 nvidia_643bb0()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  bool v6;
  char v7;
  _QWORD v8[2];
  __int16 v9;
  int v10;

  v10 = 0;
  result = NvOsGetConfigU32_plt("NVRM_GPU_NVGPU_DISABLE_WATCHDOG", &v10);
  if ((_DWORD)result != 0) {
    v9 = 0;
    v8[0] = 0;
    v8[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_NVGPU_DISABLE_WATCHDOG", 31, 0, 0);
    memcpy_plt(v8, "NVRM_GPU_", 9);
    HIBYTE(v9) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v8[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v8[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v8[1]) = v3;
    BYTE5(v8[1]) = v4;
    BYTE4(v8[1]) = v5;
    BYTE6(v8[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v8[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v9) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    result = NvOsGetConfigU32_plt(v8, &v10);
    v6 = (_DWORD)result != 0 || v10 == 0;
  }
  else {
    v6 = v10 == 0;
  }
  v7 = !v6;
  *SdkData_e89a58 = v7;
  return result;
}

__int64 nvidia_643dd0()
{
  __int64 result;
  unsigned __int64 v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  unsigned __int8 v5;
  bool v6;
  char v7;
  _QWORD v8[2];
  __int16 v9;
  int v10;

  v10 = 0;
  result = NvOsGetConfigU32_plt("NVRM_GPU_PREVENT_USE", &v10);
  if ((_DWORD)result != 0) {
    v9 = 0;
    v8[0] = 0;
    v8[1] = 0;
    v1 = NvSpookyHashShort("NVRM_GPU_PREVENT_USE", 20, 0, 0);
    memcpy_plt(v8, "NVRM_GPU_", 9);
    HIBYTE(v9) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v8[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v8[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v8[1]) = v3;
    BYTE5(v8[1]) = v4;
    BYTE4(v8[1]) = v5;
    BYTE6(v8[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v8[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v9) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    result = NvOsGetConfigU32_plt(v8, &v10);
    v6 = (_DWORD)result != 0 || v10 == 0;
  }
  else {
    v6 = v10 == 0;
  }
  v7 = !v6;
  *SdkData_e89b18 = v7;
  return result;
}

__int64 nvidia_643ff0()
{
  __int64* v0;
  __int64* v1;
  __int64* v2;
  __int64 result;
  int* v4;
  int* v5;
  int* v6;
  _BYTE* v7;
  _BYTE* v8;
  _BYTE* v9;
  _BYTE* v10;
  _BYTE* v11;
  _BYTE* v12;

  *SdkData_e89b20[0] = 0;
  v0 = SdkData_e89b08[0];
  if (*SdkData_e89b08[0] != 0) {
    NvOsFree_plt(*SdkData_e89b08[0]);
  }
  *v0 = 0;
  v1 = SdkData_e899b0[0];
  if (*SdkData_e899b0[0] != 0) {
    NvOsFree_plt(*SdkData_e899b0[0]);
  }
  *v1 = 0;
  *SdkData_e89b28[0] = 0;
  *SdkData_e89b30[0] = 0;
  *SdkData_e89b38 = 0;
  *SdkData_e89b40 = 0;
  *SdkData_e89ac0 = 0;
  *SdkData_e89b48 = 0;
  v2 = SdkData_e899f0;
  result = *SdkData_e899f0;
  if (*SdkData_e899f0 != 0) {
    result = NvOsFree_plt(result);
  }
  v4 = SdkData_e89b00[0];
  *v2 = 0;
  v5 = SdkData_e89a48[0];
  *v4 = -1;
  v6 = SdkData_e89b50;
  v7 = (_BYTE*)SdkData_e89a20_alt1;
  *v5 = 0;
  v8 = (_BYTE*)SdkData_e89a90_alt1;
  *v6 = 0;
  v9 = (_BYTE*)SdkData_e89a38_alt1;
  *v7 = 0;
  v10 = (_BYTE*)SdkData_e89a00_alt1;
  *v8 = 0;
  v11 = (_BYTE*)SdkData_e89a18_alt1;
  *v9 = 0;
  v12 = (_BYTE*)SdkData_e899c8_alt1;
  *v10 = 0;
  *v11 = 0;
  *v12 = 0;
  *SdkData_e89b58 = 0;
  *SdkData_e89a98 = 0;
  *SdkData_e89b60 = 0;
  *SdkData_e89ab8 = 0;
  *SdkData_e899e8 = 0;
  *SdkData_e89b68 = 0;
  *SdkData_e899f8 = 0;
  *SdkData_e89a28 = 0;
  *SdkData_e89a08 = 0;
  *SdkData_e89b70 = 0;
  *SdkData_e89a10 = 0;
  *SdkData_e89a30 = 0;
  *SdkData_e89aa0 = 0;
  *SdkData_e89a58 = 0;
  *SdkData_e89b18 = 0;
  return result;
}

__int64 nvidia_644660(unsigned int a1)
{
  _QWORD v4[2];
  int v5;
  _QWORD v6[15];
  char v7;
  _QWORD v8[2];
  int v9;
  _QWORD v10[2];
  int v11;

  v11 = 0;
  v10[0] = 0;
  v10[1] = 0;
  v8[0] = 0xD4B6B5EEEA339DALL;
  v8[1] = 0x90186095EFBF5532LL;
  v9 = 151509167;
  NvSha1Digest(v8, 0, v10);
  if ((unsigned int)memcmp_plt(v10, v8, 20) != 0) {
    return 15;
  }
  v7 = -71;
  v6[12] = 0xA3104A464206100DLL;
  v6[13] = 0x9D3025A22E876932LL;
  v6[14] = 0x6ED74AF53DAE7E6CLL;
  v6[8] = 0xEABE77A04713995LL;
  v6[9] = 0x6C8CFC9EFC71555BLL;
  v6[10] = 0x18F965B9AF934D9CLL;
  v6[11] = 0x6A574116FCD87949LL;
  v6[4] = 0x7ABA66E913D1F243LL;
  v6[5] = 0x58645B15C129D77FLL;
  v6[6] = 0x5AF88FCC4A227ABBLL;
  v6[7] = 0xE48513DB95AA6DE1LL;
  v6[0] = 0xEA30334B5CAF0C1BLL;
  v6[1] = 0x832239EA0618EE6DLL;
  v6[2] = 0x14017470F644A431LL;
  v6[3] = 0x737E9312757C4F7LL;
  v5 = -1931134565;
  v4[0] = 0xD49778E3638A7651LL;
  v4[1] = 0x941CBF74C9E19396LL;
  NvSha1Digest(v6, 121, v10);
  if ((unsigned int)memcmp_plt(v10, v4, 20) != 0) {
    return 15;
  }
  else {
    return a1;
  }
}

_BYTE* nvidia_644970(_BYTE* result, _BYTE* a2)
{
  *result = *a2;
  *a2 = 0;
  return result;
}

__int64 nvidia_644c60() { return SdkData_1040738; }

__int64 nvidia_644ce0(__int64 a1, int a2)
{
  return NvOsDrvIoctl_plt(a1, a2 & 0xC000FFFF, 0, 0);
}

__int64 nvidia_644cf0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4,
                      __int64* a5, unsigned __int64 a6)
{
  __int64 v6;
  __int64 v7;

  if (a4 == 1) {
    v6 = *a3;
    v7 = a3[1];
    a2 = a2 & 0xC000FFFF | ((unsigned __int16)(v7 & 0x3FFF) << 16);
    if (a6 != 2) {
      return NvOsDrvIoctl_plt(a1, a2, v6, v7);
    }
    return NvOsDrvIoctl3_plt(a1, a2, v6, v7, a5[2], a5[3]);
  }
  if (a6 == 1) {
    a2 = a2 & 0xC000FFFF | (((_DWORD)a5[1] & 0x3FFFu) << 16);
  }
  else if (a4 == 0) {
    a2 = (unsigned int)a2 & 0xC000FFFF;
    if (a6 != 2) {
      goto LABEL_19;
    }
  LABEL_15:
    v6 = *a5;
    v7 = a5[1];
    return NvOsDrvIoctl3_plt(a1, a2, v6, v7, a5[2], a5[3]);
  }
  if (a4 == 2 && a6 <= 1) {
    return NvOsDrvIoctl2_plt(a1, a2, *a3, a3[1], a3[2], a3[3]);
  }
  if (a4 == 0 && a6 == 2) {
    goto LABEL_15;
  }
  if (a6 == 1) {
    v6 = *a5;
    v7 = a5[1];
    return NvOsDrvIoctl_plt(a1, a2, v6, v7);
  }
  if (a4 == 0) {
  LABEL_19:
    v6 = 0;
    v7 = 0;
    return NvOsDrvIoctl_plt(a1, a2, v6, v7);
  }
  return 11;
}

__int64 nvidia_644da0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4;
  unsigned int v5;

  if ((a2 & 0x40000000) != 0) {
    v4 = (_DWORD)a4 << 16;
    if ((a2 & 0x80000000) != 0) {
      v5 = a2 & 0xC000FFFF;
    }
    else {
      v4 &= 0x3FFF0000u;
      v5 = a2 & 0x4000FFFF;
    }
    a2 = v4 | v5;
  }
  else if ((a2 & 0x80000000) != 0) {
    a2 = a2 & 0x8000FFFF | ((unsigned __int16)(a4 & 0x3FFF) << 16);
  }
  else {
    a2 = (unsigned __int16)a2;
    a3 = 0;
    a4 = 0;
  }
  return NvOsDrvIoctl_plt(a1, a2, a3, a4);
}

__int64 nvidia_644df0(__int64 result, int* a2, int a3, unsigned int a4,
                      _QWORD* a5, bool* a6)
{
  bool v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  int v10;
  bool* v12;
  int v14;

  if (a3 != 2) {
    if (a3 == 1) {
      v7 = result + 8LL * a4;
      v9 = *(_QWORD*)(v7 + 72);
      v8 = (_QWORD*)(v7 + 72);
      if (v9 != 0) {
        v10 = *a2;
        v6 = true;
        *((_BYTE*)a2 + 4) = 1;
        if (v10 != 0) {
          goto LABEL_12;
        }
        *a2 = 8;
      }
      else {
        v12 = a6;
        result =
            NvOsSystemEventCreate_plt(*(unsigned int*)(result + 48), a4, v8);
        v14 = *a2;
        *((_BYTE*)a2 + 4) = 1;
        if ((_DWORD)result != 0) {
          if (v14 == 0) {
            *a2 = result;
          }
          v6 = true;
          a6 = v12;
          goto LABEL_12;
        }
        a6 = v12;
        if (v14 == 0) {
          *a5 = *v8;
        }
      }
      v6 = true;
      goto LABEL_12;
    }
    if (a3 != 0) {
      return result;
    }
  }
  v6 = *(_QWORD*)(result + 8LL * a4 + 72) != 0;
LABEL_12:
  *a6 = v6;
  return result;
}

__int64 nvidia_644ec0(__int64 a1, char a2, _BYTE* a3, __int64 a4)
{
  unsigned int v4;
  unsigned int v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    __int64 v18;
    char v19;
  } v18_;
  struct {
    __int64 v20;
    char v21;
  } v20_;
  struct {
    __int64 v22;
    char v23;
  } v22_;
  struct {
    __int64 v24;
    char v25;
  } v24_;
  struct {
    __int64 v26;
    char v27;
  } v26_;
  struct {
    __int64 v28;
    char v29;
  } v28_;
  struct {
    __int64 v30;
    char v31;
  } v30_;
  struct {
    __int64 v32;
    char v33;
  } v32_;

  v4 = 0;
  v32_.v32 = 0;
  v32_.v33 = 0;
  v30_.v30 = 0;
  v30_.v31 = 0;
  v28_.v28 = 0;
  v28_.v29 = 0;
  v26_.v26 = 0;
  v26_.v27 = 0;
  v24_.v24 = 0;
  v24_.v25 = 0;
  v22_.v22 = 0;
  v22_.v23 = 0;
  v20_.v20 = 0;
  v20_.v21 = 0;
  v18_.v18 = 0;
  v18_.v19 = 0;
  *a3 = 0;
  if ((a2 & 1) != 0) {
    v8 = nvidia_629f40(&v32_.v32, a1, (__int64)"-gpu");
    if (v8 != 0 ||
        (v8 = nvidia_629f40(&v30_.v30, a1, (__int64)"-ctrl-gpu")) != 0 ||
        (v8 = nvidia_629f40(&v28_.v28, a1, (__int64)"-as-gpu")) != 0 ||
        (v8 = nvidia_629f40(&v26_.v26, a1, (__int64)"-dbg-gpu")) != 0 ||
        (v8 = nvidia_629f40(&v24_.v24, a1, (__int64)"-prof-gpu")) != 0 ||
        (v8 = nvidia_629f40(&v20_.v20, a1, (__int64)"-prof-ctx-gpu")) != 0 ||
        (v8 = nvidia_629f40(&v18_.v18, a1, (__int64)"-prof-dev-gpu")) != 0 ||
        (v8 = nvidia_629f40(&v22_.v22, a1, (__int64)"-tsg-gpu")) != 0) {
      v4 = v8;
    }
    else {
      v4 = SdkRoutine_629310(a4, "nvgpu:", v32_.v32);
      if (v4 == 0) {
        nvidia_629e00(a4 + 160);
        v10 = v32_.v32;
        v32_.v32 = 0;
        *(_QWORD*)(a4 + 160) = v10;
        LOBYTE(v10) = v32_.v33;
        v32_.v33 = 0;
        *(_BYTE*)(a4 + 168) = v10;
        nvidia_629e00(a4 + 24);
        v11 = v30_.v30;
        v30_.v30 = 0;
        *(_QWORD*)(a4 + 24) = v11;
        LOBYTE(v11) = v30_.v31;
        v30_.v31 = 0;
        *(_BYTE*)(a4 + 32) = v11;
        nvidia_629e00(a4 + 176);
        v12 = v28_.v28;
        v28_.v28 = 0;
        *(_QWORD*)(a4 + 176) = v12;
        LOBYTE(v12) = v28_.v29;
        v28_.v29 = 0;
        *(_BYTE*)(a4 + 184) = v12;
        nvidia_629e00(a4 + 40);
        v13 = v26_.v26;
        v26_.v26 = 0;
        *(_QWORD*)(a4 + 40) = v13;
        LOBYTE(v13) = v26_.v27;
        v26_.v27 = 0;
        *(_BYTE*)(a4 + 48) = v13;
        nvidia_629e00(a4 + 56);
        v14 = v24_.v24;
        v24_.v24 = 0;
        *(_QWORD*)(a4 + 56) = v14;
        LOBYTE(v14) = v24_.v25;
        v24_.v25 = 0;
        *(_BYTE*)(a4 + 64) = v14;
        nvidia_629e00(a4 + 72);
        v15 = v20_.v20;
        v20_.v20 = 0;
        *(_QWORD*)(a4 + 72) = v15;
        LOBYTE(v15) = v20_.v21;
        v20_.v21 = 0;
        *(_BYTE*)(a4 + 80) = v15;
        nvidia_629e00(a4 + 88);
        v16 = v18_.v18;
        v18_.v18 = 0;
        *(_QWORD*)(a4 + 88) = v16;
        LOBYTE(v16) = v18_.v19;
        v18_.v19 = 0;
        *(_BYTE*)(a4 + 96) = v16;
        nvidia_629e00(a4 + 192);
        v17 = v22_.v22;
        v22_.v22 = 0;
        *(_QWORD*)(a4 + 192) = v17;
        LOBYTE(v17) = v22_.v23;
        v22_.v23 = 0;
        *(_BYTE*)(a4 + 200) = v17;
        *a3 = 1;
      }
    }
  }
  nvidia_629e00((__int64)&v18_.v18);
  nvidia_629e00((__int64)&v20_.v20);
  nvidia_629e00((__int64)&v22_.v22);
  nvidia_629e00((__int64)&v24_.v24);
  nvidia_629e00((__int64)&v26_.v26);
  nvidia_629e00((__int64)&v28_.v28);
  nvidia_629e00((__int64)&v30_.v30);
  nvidia_629e00((__int64)&v32_.v32);
  return v4;
}

bool nvidia_6457c0(__int64 a1) { return a1 == 0 || a1 == 3221225473LL; }

bool nvidia_6457e0(_DWORD* a1) { return *a1 == -2074896813; }

bool nvidia_645800(_DWORD* a1) { return *a1 == -1739179675; }

__int64 nvidia_645820(__int64 a1, _QWORD* a2)
{
  *a2 = a1;
  return 0;
}

__int64 nvidia_645950(__int64 a1, __int64 a2, __int64 a3, void** a4)
{
  void* v7;
  void* v9;
  unsigned int v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  int v27;
  __int64 v28;
  int v29;
  char v30;
  __int64 v31;
  __int64 v32;
  _BYTE v33[55];
  struct {
    __int64 v34;
    int v35;
  } v34_;

  v7 = (void*)NvOsAlloc_plt(520);
  if (v7 == nullptr) {
    return 6;
  }
  v9 = v7;
  memset_plt(v7, nullptr, 520);
  *((_QWORD*)v9 + 64) = a2;
  v10 = *(_DWORD*)(a2 + 4);
  v11 = *(_DWORD*)(a2 + 8);
  v12 = *(_QWORD*)(a2 + 16);
  *((_QWORD*)v9 + 45) = a1;
  *(_QWORD*)v9 = SdkRoutine_6460f0;
  *((_QWORD*)v9 + 1) = SdkRoutine_646140;
  v34_.v35 = 0;
  *((_QWORD*)v9 + 2) = SdkRoutine_646150;
  *((_QWORD*)v9 + 5) = SdkRoutine_646160;
  v34_.v34 = 0x300000008LL;
  v13 = SdkRoutine_602440(a1);
  v24 = 0;
  v25 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  *(_QWORD*)v33 = 0;
  *(_DWORD*)&v33[7] = 0;
  *(_QWORD*)&v33[11] = NvOsGetCurrentAllocator_plt();
  memset(&v33[19], 0, 24);
  *(_QWORD*)&v33[43] = 0xFFFFFFFF00000003LL;
  NvRmSurfaceSetup_plt((char*)v9 + 368, v10, v11, v12, &v34_.v34);
  v26 = NvRmSurfaceComputeAlignment_plt(v13, (char*)v9 + 368);
  v27 = 2;
  v28 = *((_QWORD*)v9 + 53);
  v29 = 1792;
  result = NvRmMemHandleAllocAttr_plt(v13, &v24, (char*)v9 + 392);
  if ((_DWORD)result != 0) {
    v15 = result;
    if (*((_QWORD*)v9 + 61) != 0) {
      (*((void (**)(void))v9 + 62))();
    }
    v16 = *((unsigned int*)v9 + 98);
    if ((_DWORD)v16 != 0) {
      NvRmMemHandleFree_plt(v16);
    }
    NvOsFree_plt(v9);
    return v15;
  }
  else {
    v17 = *((_QWORD*)v9 + 54);
    v18 = *((_QWORD*)v9 + 55);
    *((_DWORD*)v9 + 16) = 0;
    *((_QWORD*)v9 + 42) = 0x100000001LL;
    v19 = *((_QWORD*)v9 + 56);
    *((_QWORD*)v9 + 17) = v17;
    *((_QWORD*)v9 + 18) = v18;
    *((_QWORD*)v9 + 19) = v19;
    v20 = *((_QWORD*)v9 + 51);
    *((_QWORD*)v9 + 13) = *((_QWORD*)v9 + 50);
    *((_QWORD*)v9 + 14) = v20;
    v21 = *((_QWORD*)v9 + 53);
    *((_QWORD*)v9 + 15) = *((_QWORD*)v9 + 52);
    *((_QWORD*)v9 + 16) = v21;
    v22 = *((_QWORD*)v9 + 47);
    *((_QWORD*)v9 + 9) = *((_QWORD*)v9 + 46);
    *((_QWORD*)v9 + 10) = v22;
    v23 = *((_QWORD*)v9 + 49);
    *((_QWORD*)v9 + 11) = *((_QWORD*)v9 + 48);
    *((_QWORD*)v9 + 12) = v23;
    *a4 = v9;
  }
  return result;
}

__int64 nvidia_645b10(__int64 a1, __int64 a2)
{
  *(_BYTE*)(a2 + 8) = 1;
  *(_BYTE*)(a2 + 16) = 1;
  *(_DWORD*)(a2 + 19) = 16843008;
  return 0;
}

__int64 nvidia_645b30(__int64 a1, __int64 a2) { return *(_QWORD*)(a2 + 120); }

__int64 nvidia_645b40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_QWORD*)(a2 + 120) = a3;
  *(_QWORD*)(a2 + 128) = a4;
  return 0;
}

__int64 nvidia_645b50(__int64 a1)
{
  nvidia_645e00_alt1(a1, 0);
  return NvOsFree_plt(a1);
}

__int64 nvidia_645b90(__int64 a1, __int64 a2, void* a3, __int64* a4)
{
  unsigned int v8;
  __int64 result;
  __int64 v11;

  if (*(_BYTE*)(a1 + 264) != 0) {
    v8 = 1;
  }
  else {
    v8 = 2;
  }
  result = nvidia_645e00(a1, v8);
  if ((_DWORD)result == 0) {
    *(_DWORD*)a2 = 0;
    *(_QWORD*)(a2 + 272) = 0x100000001LL;
    memcpy_plt(a2 + 8, *(_QWORD*)(a1 + 240), 88);
    memset_plt(a3, nullptr, 280);
    v11 = NvRmSyncDup_plt(*(_QWORD*)(*(_QWORD*)(a1 + 240) + 88LL));
    *a4 = v11;
    return 0;
  }
  return result;
}

__int64 nvidia_645c40(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  int v6;
  int v7;
  __int64 v8;
  __int64* v10;
  __int64 v11;

  v2 = *(_QWORD*)(a1 + 240);
  v5 = *(_QWORD*)(v2 + 88);
  if (v5 != 0) {
    NvRmSyncClose_plt(v5);
    v2 = *(_QWORD*)(a1 + 240);
  }
  v6 = *(unsigned __int8*)(a1 + 264);
  v7 = *(unsigned __int8*)(a1 + 265);
  *(_QWORD*)(v2 + 88) = a2;
  if (v6 != v7) {
    *(_BYTE*)(a1 + 264) = v7;
    if (v7 != 0) {
      v8 = 1;
    }
    else {
      v8 = 2;
    }
    if ((unsigned int)nvidia_645e00_alt1(a1, v8) != 0) {
      return 1;
    }
    v2 = *(_QWORD*)(a1 + 240);
  }
  if (v2 == *(_QWORD*)(a1 + 224) - 104LL) {
    v10 = (__int64*)(a1 + 216);
  }
  else {
    v10 = (__int64*)(v2 + 104);
  }
  v11 = *v10;
  *(_QWORD*)(a1 + 240) = v11 - 104;
  ++*(_DWORD*)(v11 + 32);
  return 3;
}

__int64 nvidia_645d00(__int64 a1, __int64* a2)
{
  void* v4;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v4 = (void*)NvOsAlloc_plt(144);
  result = memset_plt(v4, nullptr, 144);
  v7 = *a2;
  v8 = a2[2];
  *((_QWORD*)v4 + 1) = a2[1];
  *((_QWORD*)v4 + 2) = v8;
  *(_QWORD*)v4 = v7;
  v9 = a2[3];
  v10 = a2[4];
  v11 = a2[6];
  *((_QWORD*)v4 + 5) = a2[5];
  *((_QWORD*)v4 + 6) = v11;
  *((_QWORD*)v4 + 3) = v9;
  *((_QWORD*)v4 + 4) = v10;
  v12 = a2[7];
  v13 = a2[8];
  v14 = a2[10];
  *((_QWORD*)v4 + 9) = a2[9];
  *((_QWORD*)v4 + 10) = v14;
  *((_QWORD*)v4 + 7) = v12;
  *((_QWORD*)v4 + 8) = v13;
  v15 = *(_QWORD*)(a1 + 216);
  a1 += 216;
  *((_QWORD*)v4 + 13) = v15;
  v4 = (void*)((char*)v4 + 104);
  *(_QWORD*)(v15 + 8) = v4;
  LODWORD(v12) = *(_DWORD*)(a1 + 16);
  *((_BYTE*)v4 - 8) = 0;
  *((_QWORD*)v4 + 1) = a1;
  *(_QWORD*)a1 = v4;
  *(_DWORD*)(a1 + 16) = v12 + 1;
  return result;
}

__int64 nvidia_645da0(__int64 a1, char a2, char a3)
{
  __int64 v4;

  *(_BYTE*)(a1 + 265) = a2;
  if (a3 != 0) {
    return 0;
  }
  *(_BYTE*)(a1 + 264) = a2;
  if (a2 != 0) {
    v4 = 1;
  }
  else {
    v4 = 2;
  }
  return nvidia_645e00_alt1(a1, v4);
}

__int64 nvidia_645e00(__int64 a1, unsigned int a2)
{
  unsigned int v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  __int64 result;
  void* v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD v33[3];
  struct {
    _QWORD v34[4];
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
  } v34_;
  __int64 v39;
  int v40;
  int v41;
  int v42;
  __int64 v43;
  int v44;
  char v45;
  __int64 v46;
  __int64 v47;
  _BYTE v48[55];
  struct {
    __int64 v49;
    int v50;
  } v49_;

  v2 = *(_DWORD*)(a1 + 232);
  if (v2 >= a2) {
  LABEL_4:
    if (v2 != 0 && *(_QWORD*)(a1 + 240) == 0) {
      *(_QWORD*)(a1 + 240) = *(_QWORD*)(a1 + 216) - 104LL;
    }
    for (; v2 > a2; v2 = *(_DWORD*)(a1 + 232)) {
      while (1) {
        v24 = *(_QWORD*)(a1 + 240);
        if (v2 < 2) {
          break;
        }
        if (v24 == *(_QWORD*)(a1 + 224) - 104LL) {
          v25 = (__int64*)(a1 + 216);
        }
        else {
          v25 = (__int64*)(v24 + 104);
        }
        v26 = (__int64*)*v25;
        if (*(_QWORD*)(*v25 + 16) != 0) {
          ((void (*)(void))v26[3])();
        }
        v27 = *(v26 - 2);
        if (v27 != 0) {
          NvRmSyncWait_plt(v27, 0xFFFFFFFFLL);
          NvRmSyncClose_plt(*(v26 - 2));
        }
        if (*((_BYTE*)v26 - 8) != 0) {
          v28 = *((unsigned int*)v26 - 20);
          if ((_DWORD)v28 != 0) {
            NvRmMemHandleFree_plt(v28);
          }
        }
        v30 = *v26;
        v29 = (_QWORD*)v26[1];
        *(_QWORD*)(v30 + 8) = v29;
        *v29 = v30;
        LODWORD(v29) = *(_DWORD*)(a1 + 232);
        *v26 = (__int64)v26;
        v26[1] = (__int64)v26;
        *(_DWORD*)(a1 + 232) = (_DWORD)v29 - 1;
        NvOsFree_plt(v26 - 13);
        v2 = *(_DWORD*)(a1 + 232);
        if (v2 <= a2) {
          return 0;
        }
      }
      if (*(_QWORD*)(v24 + 120) != 0) {
        (*(void (**)(__int64))(v24 + 128))((__int64)(a1 + 240));
      }
      v31 = *(_QWORD*)(v24 + 88);
      if (v31 != 0) {
        NvRmSyncWait_plt(v31, 0xFFFFFFFFLL);
        NvRmSyncClose_plt(*(_QWORD*)(v24 + 88));
      }
      if (*(_BYTE*)(v24 + 96) != 0) {
        v32 = *(unsigned int*)(v24 + 24);
        if ((_DWORD)v32 != 0) {
          NvRmMemHandleFree_plt(v32);
        }
      }
      v22 = *(_QWORD**)(v24 + 112);
      v23 = *(_QWORD*)(v24 + 104);
      *(_QWORD*)(v23 + 8) = v22;
      *v22 = v23;
      LODWORD(v22) = *(_DWORD*)(a1 + 232);
      *(_QWORD*)(v24 + 112) = v24 + 104;
      *(_QWORD*)(v24 + 104) = v24 + 104;
      *(_DWORD*)(a1 + 232) = (_DWORD)v22 - 1;
      NvOsFree_plt(v24);
      *(_QWORD*)(a1 + 240) = 0;
    }
    return 0;
  }
  else {
    while (1) {
      v5 = *(_QWORD*)(a1 + 248);
      v6 = *(_QWORD*)(a1 + 256);
      v7 = *(_QWORD*)(a1 + 208);
      v8 = *(_DWORD*)(v5 + 4);
      v9 = *(_DWORD*)(v5 + 8);
      v49_.v50 = 0;
      v49_.v49 = 0x300000008LL;
      v10 = SdkRoutine_602440(v7);
      v39 = 0;
      v40 = 0;
      v45 = 0;
      v46 = 0;
      v47 = 0;
      *(_QWORD*)v48 = 0;
      *(_DWORD*)&v48[7] = 0;
      *(_QWORD*)&v48[11] = NvOsGetCurrentAllocator_plt();
      memset(&v48[19], 0, 24);
      *(_QWORD*)&v48[43] = 0xFFFFFFFF00000003LL;
      NvRmSurfaceSetup_plt(v33, v8, v9, v6, &v49_.v49);
      v41 = NvRmSurfaceComputeAlignment_plt(v10, v33);
      v42 = 2;
      v44 = 1792;
      v43 = v34_.v35;
      result = NvRmMemHandleAllocAttr_plt(v10, &v39, v34_.v34);
      if ((_DWORD)result != 0) {
        break;
      }
      v12 = (void*)NvOsAlloc_plt(144);
      memset_plt(v12, nullptr, 144);
      qmemcpy(v12, v33, 24);
      v14 = v34_.v34[3];
      v16 = v34_.v34[0];
      v15 = v34_.v34[1];
      *((_QWORD*)v12 + 5) = v34_.v34[2];
      *((_QWORD*)v12 + 6) = v14;
      *((_QWORD*)v12 + 3) = v16;
      *((_QWORD*)v12 + 4) = v15;
      v17 = v34_.v38;
      v19 = v34_.v35;
      v18 = v34_.v36;
      *((_QWORD*)v12 + 9) = v34_.v37;
      *((_QWORD*)v12 + 10) = v17;
      *((_QWORD*)v12 + 7) = v19;
      *((_QWORD*)v12 + 8) = v18;
      v20 = *(_QWORD*)(a1 + 216);
      *((_QWORD*)v12 + 13) = v20;
      v12 = (void*)((char*)v12 + 104);
      *(_QWORD*)(v20 + 8) = v12;
      LODWORD(v20) = *(_DWORD*)(a1 + 232);
      *((_BYTE*)v12 - 8) = 1;
      *((_QWORD*)v12 + 1) = a1 + 216;
      *(_QWORD*)(a1 + 216) = v12;
      v2 = v20 + 1;
      *(_DWORD*)(a1 + 232) = v2;
      if (v2 >= a2) {
        goto LABEL_4;
      }
    }
  }
  return result;
}

__int64 unplaced_8_6463a0(_QWORD* a1, __int64 a2, __int64 a3, _QWORD* a4)
{
  unsigned __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  int v14;
  _BYTE v15[280];
  struct {
    _BYTE v16[280];
    __int64 v17;
  } v16_;

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  memset_plt_alt1((void*)v16_.v16, nullptr, 280, (unsigned __int64)a4),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  memset_plt_alt1((void*)v15, nullptr, 280, v8),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v9 = a1[46];
  *a4 = 0;
  result = (*(__int64 (**)(void*))(v9 + 64))(*(void**)&a1[46]),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if ((_DWORD)result == 0) {
    a1[9] = nvidia_6467d0_alt1;
    *a4 = v16_.v17;
    memcpy_plt(a2, v16_.v16, 280),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    if (a3 != 0) {
      memcpy_plt(a3, v15, 280),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    }
    memcpy_plt(a1 + 48, v16_.v16, 280),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    result = 0;
    if (*(_BYTE*)(a1[45] + 72LL) != 0) {
      v11 = NvOsAlloc_plt(
          4LL * (unsigned int)(*(_DWORD*)(a2 + 12) * *(_DWORD*)(a2 + 8))),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      v12 = v11;
      if (*(_DWORD*)(a2 + 12) * *(_DWORD*)(a2 + 8) != 0) {
        v13 = 0;
        v14 = *(_DWORD*)(a1[45] + 76LL);
        do {
          *(_DWORD*)(v11 + 4 * v13++) = v14;
        } while (v13 <
                 (unsigned int)(*(_DWORD*)(a2 + 12) * *(_DWORD*)(a2 + 8)));
      }
      NvRmSurfaceWrite_plt(a2 + 8, 0, 0),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      NvOsFree_plt(v12),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      return 0;
    }
  }
  return result;
}

__int64 unplaced_8_6464f0(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 368) + 80LL))(
      *(void**)(a1 + 368));
}

__int64 unplaced_8_646500(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 368) + 88LL))(
      *(void**)(a1 + 368));
}

__int64 unplaced_8_646510(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 368) + 120LL))(
      *(void**)(a1 + 368));
}

__int64 unplaced_8_646520(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 368) + 128LL))(
      *(void**)(a1 + 368));
}

__int64 unplaced_8_646530(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 368) + 96LL))(
      *(void**)(a1 + 368));
}

__int64 unplaced_8_646540(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 368) + 144LL))(
      *(void**)(a1 + 368));
}

__int64 unplaced_8_646550(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 368) + 104LL))(
      *(void**)(a1 + 368));
}

__int64 unplaced_8_646560(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 368) + 112LL))(
      *(void**)(a1 + 368));
}

__int64 unplaced_8_646570(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 368) + 136LL))(
      *(void**)(a1 + 368));
}

__int64 unplaced_8_646580(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 368) + 24LL))(
      *(void**)(a1 + 368));
}

__int64 unplaced_8_646590(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 368) + 40LL))(
      *(void**)(a1 + 368));
}

__int64 unplaced_8_6465a0(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 368) + 152LL))(
      *(void**)(a1 + 368));
}

__int64 unplaced_8_6465b0(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 368) + 160LL))(
      *(void**)(a1 + 368));
}

__int64 unplaced_8_6465c0(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 368) + 168LL))(
      *(void**)(a1 + 368));
}

__int64 unplaced_8_6465d0(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 368) + 176LL))(
      *(void**)(a1 + 368));
}

__int64 unplaced_8_6465e0(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 368) + 184LL))(
      *(void**)(a1 + 368));
}

__int64 unplaced_8_6465f0(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 368) + 192LL))(
      *(void**)(a1 + 368));
}

__int64 unplaced_8_646600(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 368) + 200LL))(
      *(void**)(a1 + 368));
}

__int64 nvidia_646610(__int64 a1) { return *(_QWORD*)(a1 + 368) >> 3; }

__int64 nvidia_646620(__int64 a1, __int64 a2, void** a3)
{
  void* v6;
  void* v8;

  v6 = (void*)NvOsAlloc_plt(376);
  if (v6 == nullptr) {
    return 6;
  }
  v8 = v6;
  memset_plt(v6, nullptr, 376);
  *(_QWORD*)v8 = SdkRoutine_646740;
  if (*(_QWORD*)(a2 + 8) != 0) {
    *((_QWORD*)v8 + 1) = SdkRoutine_646780;
  }
  if (*(_QWORD*)(a2 + 16) != 0) {
    *((_QWORD*)v8 + 2) = SdkRoutine_646790;
  }
  if (*(_QWORD*)(a2 + 24) != 0) {
    *((_QWORD*)v8 + 3) = SdkRoutine_646580;
  }
  if (*(_QWORD*)(a2 + 32) != 0) {
    *((_QWORD*)v8 + 4) = SdkRoutine_6467a0;
  }
  if (*(_QWORD*)(a2 + 40) != 0) {
    *((_QWORD*)v8 + 5) = SdkRoutine_646590;
  }
  *((_QWORD*)v8 + 43) = SdkRoutine_6467b0;
  *((_QWORD*)v8 + 44) = SdkRoutine_6467c0;
  *((_DWORD*)v8 + 14) = *(_DWORD*)(a2 + 56);
  *((_QWORD*)v8 + 6) = nvidia_646610_alt1;
  memcpy_plt((char*)v8 + 64, a2 + 64, 280);
  *((_QWORD*)v8 + 45) = a1;
  *((_QWORD*)v8 + 46) = a2;
  *a3 = v8;
  return 0;
}

__int64 unplaced_8_646780(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 368) + 8LL))(
      *(void**)(a1 + 368));
}

__int64 unplaced_8_646790(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 368) + 16LL))(
      *(void**)(a1 + 368));
}

__int64 unplaced_8_6467a0(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 368) + 32LL))(
      *(void**)(a1 + 368));
}

__int64 unplaced_8_6467b0(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 368) + 344LL))(
      *(void**)(a1 + 368));
}

__int64 unplaced_8_6467c0(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 368) + 352LL))(
      *(void**)(a1 + 368));
}

__int64 nvidia_6467d0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  int v6;

  v2 = *(_QWORD*)(a1 + 368);
  if (*(_BYTE*)(*(_QWORD*)(a1 + 360) + 64LL) != 0) {
    v4 = NvRmSyncDup_plt(a2);
    NvRmSyncWait_plt(v4, 0xFFFFFFFFLL);
    NvRmSyncClose_plt(v4);
    v5 = *(_QWORD*)(a1 + 360);
    v6 = *(_DWORD*)(v5 + 68);
    *(_DWORD*)(v5 + 68) = v6 + 1;
    NvRmSurfaceDumpJson_plt(a1 + 392, 1, 0, "nvwsi/dump%05u.raw", v6);
  }
  return (*(__int64 (**)(__int64))(v2 + 72))(v2);
}

__int64 nvidia_6468a0(__int64 a1, _QWORD* a2)
{
  *a2 = a1;
  return 0;
}

__int64 nvidia_646a20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  bool v4;
  bool v5;
  _BOOL8 v6;

  *(_BYTE*)(a3 + 25) = 0;
  result = 0;
  v4 = a2 == 0x200A62120LL || a2 == 0x200A66840LL;
  v5 = v4 || a2 == 0x214A62120LL;
  v6 = !v4 && a2 == 0x214A62120LL;
  *(_BYTE*)(a3 + 24) = v5;
  *(_QWORD*)(a3 + 8) = v6;
  *(_QWORD*)(a3 + 16) = v6;
  return result;
}

__int64 nvidia_646a80(__int64 a1, __int64 a2)
{
  *(_BYTE*)(a2 + 8) = 1;
  *(_BYTE*)(a2 + 16) = 1;
  *(_DWORD*)(a2 + 4) = 8;
  *(_DWORD*)(a2 + 19) = 16843008;
  return 0;
}

__int64 nvidia_646ac0(__int64 a1)
{
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;

  if (*(_DWORD*)(a1 + 232) != 0) {
    v2 = 0;
    do {
      v3 = *(_QWORD*)(a1 + 216 + 8 * v2);
      NvRmSyncClose_plt(*(_QWORD*)(v3 + 88));
      if (*(_BYTE*)(v3 + 96) != 0) {
        v4 = *(unsigned int*)(v3 + 24);
        if ((_DWORD)v4 != 0) {
          NvRmMemHandleFree_plt(v4);
        }
      }
      --*(_DWORD*)(a1 + 232);
      NvOsFree_plt(v3);
      ++v2;
    } while (v2 < *(unsigned int*)(a1 + 232));
  }
  nn_wsi_nv_OnWindowFinalize_plt(a1 + 264);
  return NvOsFree_plt(a1);
}

__int64 nvidia_646b60(__int64 a1)
{
  return *(_QWORD*)(a1 + 8LL * *(unsigned int*)(a1 + 236) + 216);
}

__int64 nvidia_646b70(__int64 a1, __int64 a2, void* a3, _QWORD* a4)
{
  void* v5;
  __int64 result;
  unsigned int v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  _DWORD** v43;
  struct {
    __int64 v45;
    __int64 v46;
    __int64 v47;
  } v45_;
  struct {
    _QWORD v48[2];
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
  } v48_;
  __int64 v55;
  __int64 v56;
  int v57;
  __int64 v58;
  int v59;
  char v60;
  __int64 v61;
  __int16 v62;
  __int64 v63;
  __int16 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  struct {
    __int64 v70;
    int v71;
  } v70_;

  v5 = a3;
  if (*(_DWORD*)(a1 + 232) != 0) {
    goto LABEL_2;
  }
  v10 = *(_DWORD*)(a1 + 248);
  v70_.v71 = 0;
  v11 = *(_QWORD*)(a1 + 208);
  v12 = *(_DWORD*)(a1 + 252);
  v13 = *(_QWORD*)(a1 + 240);
  v70_.v70 = 0x300000008LL;
  v14 = SdkRoutine_602440(v11);
  v55 = 0;
  LODWORD(v56) = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v65 = NvOsGetCurrentAllocator_plt();
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v69 = 0xFFFFFFFF00000003LL;
  NvRmSurfaceSetup_plt(&v45_.v45, v10, v12, v13, &v70_.v70);
  HIDWORD(v56) = NvRmSurfaceComputeAlignment_plt(v14, &v45_.v45);
  v57 = 2;
  v59 = 1792;
  v58 = v48_.v51;
  result = NvRmMemHandleAllocAttr_plt(v14, &v55, v48_.v48);
  if ((_DWORD)result == 0) {
    v15 = NvOsAlloc_plt(104);
    memset_plt((void*)v15, nullptr, 104);
    v18 = v45_.v46;
    v17 = v45_.v47;
    v43 = (_DWORD**)(a1 + 216);
    *(_QWORD*)v15 = v45_.v45;
    *(_QWORD*)(v15 + 8) = v18;
    *(_QWORD*)(v15 + 16) = v17;
    v70_.v71 = 0;
    v19 = v48_.v50;
    v21 = v48_.v48[0];
    v20 = v48_.v48[1];
    *(_QWORD*)(v15 + 40) = v48_.v49;
    *(_QWORD*)(v15 + 48) = v19;
    *(_QWORD*)(v15 + 24) = v21;
    *(_QWORD*)(v15 + 32) = v20;
    v22 = v48_.v54;
    v24 = v48_.v51;
    v23 = v48_.v52;
    *(_QWORD*)(v15 + 72) = v48_.v53;
    *(_QWORD*)(v15 + 80) = v22;
    *(_QWORD*)(v15 + 56) = v24;
    *(_QWORD*)(v15 + 64) = v23;
    *(_BYTE*)(v15 + 96) = 1;
    v25 = *(unsigned int*)(a1 + 232);
    v26 = *(_QWORD*)(a1 + 208);
    *(_QWORD*)(a1 + 216 + 8 * v25) = v15;
    LODWORD(v15) = *(_DWORD*)(a1 + 248);
    v27 = *(_DWORD*)(a1 + 252);
    v28 = *(_QWORD*)(a1 + 240);
    *(_DWORD*)(a1 + 232) = v25 + 1;
    v70_.v70 = 0x300000008LL;
    v29 = SdkRoutine_602440(v26);
    v55 = 0;
    LODWORD(v56) = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v65 = NvOsGetCurrentAllocator_plt();
    v66 = 0;
    v67 = 0;
    v68 = 0;
    v69 = 0xFFFFFFFF00000003LL;
    NvRmSurfaceSetup_plt(&v45_.v45, (unsigned int)v15, v27, v28, &v70_.v70);
    v30 = NvRmSurfaceComputeAlignment_plt(v29, &v45_.v45);
    v59 = 1792;
    HIDWORD(v56) = v30;
    v57 = 2;
    v58 = v48_.v51;
    result = NvRmMemHandleAllocAttr_plt(v29, &v55, v48_.v48);
    if ((_DWORD)result == 0) {
      v31 = NvOsAlloc_plt(104);
      memset_plt((void*)v31, nullptr, 104);
      v34 = v45_.v46;
      v33 = v45_.v47;
      *(_QWORD*)v31 = v45_.v45;
      *(_QWORD*)(v31 + 8) = v34;
      *(_QWORD*)(v31 + 16) = v33;
      v35 = v48_.v50;
      v37 = v48_.v48[0];
      v36 = v48_.v48[1];
      *(_QWORD*)(v31 + 40) = v48_.v49;
      *(_QWORD*)(v31 + 48) = v35;
      *(_QWORD*)(v31 + 24) = v37;
      *(_QWORD*)(v31 + 32) = v36;
      v38 = v48_.v54;
      v40 = v48_.v51;
      v39 = v48_.v52;
      *(_QWORD*)(v31 + 72) = v48_.v53;
      *(_QWORD*)(v31 + 80) = v38;
      *(_QWORD*)(v31 + 56) = v40;
      *(_QWORD*)(v31 + 64) = v39;
      *(_BYTE*)(v31 + 96) = 1;
      v41 = *(unsigned int*)(a1 + 232);
      v42 = (unsigned int)(v41 + 1);
      v43[v41] = (_DWORD*)v31;
      *(_DWORD*)(a1 + 232) = v42;
      OpenGL(a1 + 264, a1 + 248, v43, v42);
      v5 = a3;
    LABEL_2:
      LODWORD(v70_.v70) = 0;
      nn_wsi_nv_OnAcquireTexture_plt(a1 + 264, &v55, &v70_.v70);
      *(_DWORD*)(a1 + 236) = v70_.v70;
      v45_.v45 = v56;
      *a4 = NvRmSyncCreateFromSyncpoints_plt(&v45_.v45, 1);
      *(_DWORD*)a2 = 0;
      *(_QWORD*)(a2 + 272) = 0x100000001LL;
      memcpy_plt(a2 + 8,
                 *(_QWORD*)(a1 + 8LL * *(unsigned int*)(a1 + 236) + 216), 88);
      memset_plt(v5, nullptr, 280);
      return 0;
    }
  }
  return result;
}

__int64 nvidia_646e90(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = a1 + 216;
  v5 = *(_QWORD*)(a1 + 216 + 8LL * *(unsigned int*)(a1 + 236));
  v6 = *(_QWORD*)(v5 + 88);
  if (v6 != 0) {
    NvRmSyncClose_plt(v6);
    v5 = *(_QWORD*)(v2 + 8LL * *(unsigned int*)(a1 + 236));
  }
  *(_QWORD*)(v5 + 88) = a2;
  v9 = 0;
  v10 = 0;
  if ((unsigned __int8)NvRmSyncIsFd_plt(a2) != 0) {
    if ((unsigned int)NvRmSyncExtractFd_plt(a2, (char*)&v9 + 4) != 0) {
      LODWORD(v9) = 1;
    }
  }
  else if ((unsigned __int8)NvRmSyncIsSyncpoints_plt(a2) != 0 &&
           (unsigned int)NvRmSyncExtractSyncpoint_plt(a2, 0, &v11) == 0) {
    LODWORD(v9) = 2;
    v10 = v11;
  }
  nn_wsi_nv_OnPresentTexture_plt_8759b0(a1 + 264, &v9);
  v8 = *(_QWORD*)(v2 + 8LL * *(unsigned int*)(a1 + 236));
  ++*(_DWORD*)(v8 + 100);
  return 3;
}

__int64 nvidia_646f80(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64 result;
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

  v4 = NvOsAlloc_plt(104);
  result = memset_plt((void*)v4, nullptr, 104);
  v7 = *a2;
  v8 = a2[2];
  *(_QWORD*)(v4 + 8) = a2[1];
  *(_QWORD*)(v4 + 16) = v8;
  *(_QWORD*)v4 = v7;
  v9 = a2[3];
  v10 = a2[4];
  v11 = a2[6];
  *(_QWORD*)(v4 + 40) = a2[5];
  *(_QWORD*)(v4 + 48) = v11;
  *(_QWORD*)(v4 + 24) = v9;
  *(_QWORD*)(v4 + 32) = v10;
  v12 = a2[7];
  v13 = a2[8];
  v14 = a2[9];
  v15 = a2[10];
  *(_BYTE*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 72) = v14;
  *(_QWORD*)(v4 + 80) = v15;
  *(_QWORD*)(v4 + 56) = v12;
  *(_QWORD*)(v4 + 64) = v13;
  v16 = *(unsigned int*)(a1 + 232);
  *(_QWORD*)(a1 + 8 * v16 + 216) = v4;
  *(_DWORD*)(a1 + 232) = v16 + 1;
  return result;
}

#pragma GCC visibility pop
