#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64** nvidia_dlss_rel_source_frameworks_cubin_a6cc0_alt1(
    __int64** result,
    __int64*) __asm__("nvidia_dlss_rel_source_frameworks_cubin_a6cc0");
__int64** nvidia_dlss_rel_source_frameworks_cubin_a7720(__int64**,
                                                        unsigned __int64*);
__int64* nvidia_dlss_rel_source_frameworks_cubin_a7100_alt1(
    __int64**, unsigned __int64*, __int64*,
    __int64*) __asm__("nvidia_dlss_rel_source_frameworks_cubin_a7100");
__int64 NgxRoutine_27b20(_QWORD, _QWORD);
__int64 NgxRoutine_29c90(_QWORD);
__int64 NgxRoutine_420(__int64);
__int64 NgxRoutine_420_alt1(_QWORD) __asm__("NgxRoutine_420");
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_a4b40(_QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_b4b90(__int64, __int64, __int64, __int64, ...);
__int64 NgxRoutine_b4b90_alt1(_QWORD, _QWORD, _QWORD, const char*,
                              ...) __asm__("NgxRoutine_b4b90");
__int64 NgxRoutine_b4c00(_QWORD, _QWORD, _QWORD, const char*, ...);
__int64 NgxRoutine_b4c00_alt1(__int64 result, __int64, __int64, __int64,
                              __int64, __int64, __int64, __int64,
                              char) __asm__("NgxRoutine_b4c00");
__int64 NgxRoutine_bf670(_QWORD, _QWORD);
__int64 NgxRoutine_bf670_alt1(unsigned __int8*,
                              __int64) __asm__("NgxRoutine_bf670");
__int64 NgxRoutine_e3000(_QWORD);
__int64 NgxRoutine_e3000_alt1() __asm__("NgxRoutine_e3000");
__int64 PushToDestroy_alt1(_QWORD, _QWORD) __asm__("PushToDestroy");
__int64 atoi_plt(_QWORD);
__int64 getenv_plt(_QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a6b60(_QWORD, _QWORD);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a6b60_alt1(
    __int64*,
    __int64*) __asm__("nvidia_dlss_rel_source_frameworks_cubin_a6b60");
__int64 nvidia_dlss_rel_source_frameworks_cubin_a6cc0(_QWORD, _QWORD);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a7100(_QWORD, _QWORD, _QWORD,
                                                      _QWORD);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a7260(_QWORD, _QWORD);
__int64 nvidia_dlss_rel_source_frameworks_cubin_a73c0(_QWORD, _QWORD, _QWORD);
__int64 strlen_plt(_QWORD);
extern _DWORD NgxData_f7984[25];
extern _UNKNOWN* NgxData_952b98;
extern __int64* NgxData_952b90;
extern int NgxData_f796c[];
extern unsigned int NgxData_f7954[6];
void __attribute__((noreturn)) NgxRoutine_27cb0();
__int64 genericPostInit(__int64 a1);
__int64 ngx_cubin_generic_a40a0(__int64 a1);
__int64 ngx_cubin_generic_a4110(_QWORD* a1);
__int64 PushToDestroy(__int64 a1, __int64 a2);
__int64 ngx_cubin_generic_a45c0(__int64 a1);
const char* ngx_cubin_generic_a45f0(__int64 a1);
__int64 ngx_cubin_generic_a4620(__int64 a1, __int64 a2, __int64* a3,
                                unsigned int a4, int a5);
__int64 ngx_cubin_generic_a46c0(_QWORD* a1, __int64 a2, unsigned __int64 a3,
                                __int64 a4, unsigned int a5);
__int64 RecycleBuffer(_QWORD* a1, unsigned int* a2, _QWORD* a3, __int64 a4,
                      char a5);
__int64 ngx_cubin_generic_a4c60(__int64* a1, __int64 a2, __int64 a3,
                                __int64 a4);
__int64 CreateBufferResource(__int64* a1, __int64 a2, unsigned __int64* a3,
                             __int64 a4, int a5);
__int64 CreateTexture2DResourceShared(__int64 a1, unsigned int* a2,
                                      unsigned __int64* a3, __int64 a4, int a5);
_QWORD* ngx_cubin_generic_a55e0(_QWORD* result, __int64 a2,
                                unsigned __int64 a3);
__int64 ngx_cubin_generic_a5670(_QWORD* a1, _QWORD* a2);
__int64 CollectGarbage(__int64 a1, double a2);
__int64 CopyHostToDeviceBuffer(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                               unsigned __int64 a5, unsigned __int64 a6);

__int64 genericPostInit(__int64 a1)
{
  unsigned int v2;
  char v3;
  char v4;
  char* v5;
  int v7;

  v7 = 0;
  if ((NgxRoutine_27b20(279951210, &v7) & 1) != 0) {
    v2 = *(_DWORD*)(a1 + 808);
    if (v2 > 0x16F) {
      if (v2 == 368) {
        v3 = (unsigned __int8)v7 >> 1;
        v4 = (v7 & 2) != 0;
      }
      else {
        v3 = (unsigned __int8)v7 >> 2;
        v4 = (v7 & 4) != 0;
      }
    }
    else {
      v3 = v7;
      v4 = v7 & 1;
    }
    *(_BYTE*)(a1 + 817) = v4;
  }
  else {
    v3 = *(_BYTE*)(a1 + 817);
  }
  if ((v3 & 1) != 0) {
    v5 = "supported";
  }
  else {
    v5 = "not supported";
  }
  NgxRoutine_b4b90(
      (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
               "dlss/rel/source/frameworks/cubin/ngx_cubin_generic.cpp",
      147, (__int64)"genericPostInit", (__int64)"Fast UAV clear: %s", v5);
  return 0;
}

__int64 ngx_cubin_generic_a40a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  v2 = getenv_plt("__NGX_SHOW_INDICATOR");
  if (v2 != 0) {
    *(_DWORD*)(a1 + 288) = atoi_plt(v2);
  }
  v3 = getenv_plt("__NGX_CUBIN_DISABLE_RESOURCE_CACHE");
  if (v3 != 0) {
    *(_DWORD*)(a1 + 296) = atoi_plt(v3);
  }
  if (*(_DWORD*)(a1 + 288) != 1024) {
    *(_DWORD*)(a1 + 288) = 0;
  }
  return 0;
}

__int64 ngx_cubin_generic_a4110(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
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
  __int64 v18;
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

  if (a1[86] == 0 ||
      (_DWORD)(result = (*(__int64 (**)(_QWORD*))(*a1 + 176LL))(a1)) == 0) {
    v3 = a1[99];
    a1[86] = 0;
    if (v3 == 0 ||
        (_DWORD)(result = (*(__int64 (**)(_QWORD*))(*a1 + 176LL))(a1)) == 0) {
      v4 = a1[38];
      a1[99] = 0;
      PushToDestroy_alt1(a1, v4);
      v5 = a1[54];
      a1[38] = 0;
      PushToDestroy_alt1(a1, v5);
      v6 = a1[70];
      a1[54] = 0;
      PushToDestroy_alt1(a1, v6);
      v7 = a1[39];
      a1[70] = 0;
      PushToDestroy_alt1(a1, v7);
      v8 = a1[55];
      a1[39] = 0;
      PushToDestroy_alt1(a1, v8);
      v9 = a1[71];
      a1[55] = 0;
      PushToDestroy_alt1(a1, v9);
      v10 = a1[40];
      a1[71] = 0;
      PushToDestroy_alt1(a1, v10);
      v11 = a1[56];
      a1[40] = 0;
      PushToDestroy_alt1(a1, v11);
      v12 = a1[72];
      a1[56] = 0;
      PushToDestroy_alt1(a1, v12);
      v13 = a1[41];
      a1[72] = 0;
      PushToDestroy_alt1(a1, v13);
      v14 = a1[57];
      a1[41] = 0;
      PushToDestroy_alt1(a1, v14);
      v15 = a1[73];
      a1[57] = 0;
      PushToDestroy_alt1(a1, v15);
      v16 = a1[42];
      a1[73] = 0;
      PushToDestroy_alt1(a1, v16);
      v17 = a1[58];
      a1[42] = 0;
      PushToDestroy_alt1(a1, v17);
      v18 = a1[74];
      a1[58] = 0;
      PushToDestroy_alt1(a1, v18);
      v19 = a1[43];
      a1[74] = 0;
      PushToDestroy_alt1(a1, v19);
      v20 = a1[59];
      a1[43] = 0;
      PushToDestroy_alt1(a1, v20);
      v21 = a1[75];
      a1[59] = 0;
      PushToDestroy_alt1(a1, v21);
      v22 = a1[44];
      a1[75] = 0;
      PushToDestroy_alt1(a1, v22);
      v23 = a1[60];
      a1[44] = 0;
      PushToDestroy_alt1(a1, v23);
      v24 = a1[76];
      a1[60] = 0;
      PushToDestroy_alt1(a1, v24);
      v25 = a1[45];
      a1[76] = 0;
      PushToDestroy_alt1(a1, v25);
      v26 = a1[61];
      a1[45] = 0;
      PushToDestroy_alt1(a1, v26);
      v27 = a1[77];
      a1[61] = 0;
      PushToDestroy_alt1(a1, v27);
      v28 = a1[46];
      a1[77] = 0;
      PushToDestroy_alt1(a1, v28);
      v29 = a1[62];
      a1[46] = 0;
      PushToDestroy_alt1(a1, v29);
      v30 = a1[78];
      a1[62] = 0;
      PushToDestroy_alt1(a1, v30);
      v31 = a1[47];
      a1[78] = 0;
      PushToDestroy_alt1(a1, v31);
      v32 = a1[63];
      a1[47] = 0;
      PushToDestroy_alt1(a1, v32);
      v33 = a1[79];
      a1[63] = 0;
      PushToDestroy_alt1(a1, v33);
      v34 = a1[48];
      a1[79] = 0;
      PushToDestroy_alt1(a1, v34);
      v35 = a1[64];
      a1[48] = 0;
      PushToDestroy_alt1(a1, v35);
      v36 = a1[80];
      a1[64] = 0;
      PushToDestroy_alt1(a1, v36);
      v37 = a1[49];
      a1[80] = 0;
      PushToDestroy_alt1(a1, v37);
      v38 = a1[65];
      a1[49] = 0;
      PushToDestroy_alt1(a1, v38);
      v39 = a1[81];
      a1[65] = 0;
      PushToDestroy_alt1(a1, v39);
      v40 = a1[50];
      a1[81] = 0;
      PushToDestroy_alt1(a1, v40);
      v41 = a1[66];
      a1[50] = 0;
      PushToDestroy_alt1(a1, v41);
      v42 = a1[82];
      a1[66] = 0;
      PushToDestroy_alt1(a1, v42);
      v43 = a1[51];
      a1[82] = 0;
      PushToDestroy_alt1(a1, v43);
      v44 = a1[67];
      a1[51] = 0;
      PushToDestroy_alt1(a1, v44);
      v45 = a1[83];
      a1[67] = 0;
      PushToDestroy_alt1(a1, v45);
      v46 = a1[52];
      a1[83] = 0;
      PushToDestroy_alt1(a1, v46);
      v47 = a1[68];
      a1[52] = 0;
      PushToDestroy_alt1(a1, v47);
      v48 = a1[84];
      a1[68] = 0;
      PushToDestroy_alt1(a1, v48);
      v49 = a1[53];
      a1[84] = 0;
      PushToDestroy_alt1(a1, v49);
      v50 = a1[69];
      a1[53] = 0;
      PushToDestroy_alt1(a1, v50);
      v51 = a1[85];
      a1[69] = 0;
      PushToDestroy_alt1(a1, v51);
      v52 = a1[87];
      a1[85] = 0;
      PushToDestroy_alt1(a1, v52);
      v53 = *a1;
      a1[87] = 0;
      a1[88] = 0;
      result = (*(__int64 (**)(_QWORD*, double))(v53 + 112))(a1, 0.0);
      if ((_DWORD)result == 0) {
        v54 = NgxRoutine_b4c00(
            "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
            "dlss/rel/source/frameworks/cubin/ngx_cubin_generic.cpp",
            248, "Shutdown", "Delayed destroy resource list count %llu", a1[9]);
        NgxRoutine_29c90(v54);
        return 0;
      }
    }
  }
  return result;
}

__int64 PushToDestroy(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v5;
  _QWORD v7[3];

  if (a2 != 0) {
    v3 = *(_QWORD*)(a1 + 112);
    if (v3 != 0) {
      v7[0] = a2;
      v5 = v3 + 16;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 24LL))(v3, a2);
      v3 = nvidia_dlss_rel_source_frameworks_cubin_a7260(v5, v7);
      if (v3 != 0) {
        v3 = nvidia_dlss_rel_source_frameworks_cubin_a6b60(v5, v3);
      }
    }
    v7[0] = a2;
    v7[1] = 0;
    v7[2] = NgxRoutine_e3000(v3);
    nvidia_dlss_rel_source_frameworks_cubin_a73c0(a1 + 48, v7, v7);
    NgxRoutine_b4c00(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/frameworks/cubin/ngx_cubin_generic.cpp",
        998, "PushToDestroy", "Scheduled to destroy 0x%llx", a2);
  }
  return 0;
}

__int64 ngx_cubin_generic_a45c0(__int64 a1)
{
  unsigned int v1;

  v1 = *(_DWORD*)(a1 + 812) - 1;
  if (v1 > 5) {
    return 10000;
  }
  else {
    return NgxData_f7954[v1];
  }
}

const char* ngx_cubin_generic_a45f0(__int64 a1)
{
  unsigned int v1;

  v1 = *(_DWORD*)(a1 + 812) - 1;
  if (v1 > 5) {
    return "unknown";
  }
  else {
    return (char*)NgxData_f796c + NgxData_f796c[v1];
  }
}

__int64 ngx_cubin_generic_a4620(__int64 a1, __int64 a2, __int64* a3,
                                unsigned int a4, int a5)
{
  __int64 result;
  __int64 v9;
  __int64 v10;

  if (a5 != 0) {
    return 4294967192LL;
  }
  if (a4 == 0) {
    return 0;
  }
  v9 = a4;
  while (1) {
    v10 = *a3++;
    result = (*(__int64 (**)(__int64, __int64, __int64, _QWORD))(
        *(_QWORD*)a1 + 360LL))(a1, a2, v10, 0);
    if ((_DWORD)result != 0) {
      break;
    }
    if (--v9 == 0) {
      return 0;
    }
  }
  return result;
}

__int64 ngx_cubin_generic_a46c0(_QWORD* a1, __int64 a2, unsigned __int64 a3,
                                __int64 a4, unsigned int a5)
{
  _QWORD* v5;
  _QWORD* v7;
  unsigned __int64 v8;
  bool v9;
  __int64 v10;
  _QWORD* v11;
  unsigned int v12;
  int v14;

  v5 = (_QWORD*)a1[12];
  if (v5 == nullptr) {
    return (*(unsigned int (**)(_QWORD*, __int64, unsigned __int64, __int64,
                                _QWORD))(*a1 + 616LL))(a1, a2, a3, a4, a5);
  }
  v7 = a1 + 12;
  do {
    v8 = v5[4];
    v9 = v8 >= a3;
    v10 = v8 < a3;
    if (v9) {
      v7 = v5;
    }
    v5 = (_QWORD*)v5[v10];
  } while (v5 != nullptr);
  if (v7 == a1 + 12 || a3 < v7[4]) {
    return (*(unsigned int (**)(_QWORD*, __int64, unsigned __int64, __int64,
                                _QWORD))(*a1 + 616LL))(a1, a2, a3, a4, a5);
  }
  else {
    v11 = v7;
    if (*((_BYTE*)v7 + 100) != 1 || (v14 = *((_DWORD*)v7 + 24), v12 = 0,
                                     *((_BYTE*)v7 + 100) = 0, v14 != a5)) {
      v12 = (*(__int64 (**)(_QWORD*))(*a1 + 616LL))(a1);
      if (v12 == 0) {
        *((_DWORD*)v11 + 24) = a5;
        return 0;
      }
    }
  }
  return v12;
}

__int64 RecycleBuffer(_QWORD* a1, unsigned int* a2, _QWORD* a3, __int64 a4,
                      char a5)
{
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v12;
  unsigned __int64 v13;
  _QWORD* v14;
  unsigned __int64 v15;
  bool v16;
  __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  __int64 result;
  bool v21;
  char* v22;
  unsigned int v23;
  _QWORD* v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  int v28;

  v5 = (_QWORD*)a1[8];
  if (v5 == nullptr) {
    return 4294967289LL;
  }
  v6 = a1 + 12;
  while (1) {
    v12 = (_QWORD*)*v6;
    if (*v6 == 0) {
      goto LABEL_4;
    }
    v13 = v5[2];
    v14 = v6;
    do {
      v15 = v12[4];
      v16 = v15 >= v13;
      v17 = v15 < v13;
      if (v16) {
        v14 = v12;
      }
      v12 = (_QWORD*)v12[v17];
    } while (v12 != nullptr);
    if (v14 != v6) {
      v18 = v14[4];
      v19 = v13 >= v18 ? v14 : v6;
      if (v13 >= v18) {
        result = (*(__int64 (**)(_QWORD*, int*))(*a1 + 104LL))(a1, &v28);
        if ((_DWORD)result != 0) {
          return result;
        }
        if (v28 != 5) {
          break;
        }
        if ((a5 & 1) != 0) {
          if ((NgxRoutine_a4b40(v19 + 5, a2, a4) & 1) != 0) {
            goto LABEL_44;
          }
        }
        else if (*((_DWORD*)v19 + 10) >= *a2 && *((_DWORD*)v19 + 11) >= a2[1] &&
                 *((_DWORD*)v19 + 14) == a2[4] &&
                 *((_DWORD*)v19 + 12) == a2[2] &&
                 *((_DWORD*)v19 + 13) == a2[3] &&
                 *((_DWORD*)v19 + 16) == a2[6] &&
                 *((_DWORD*)v19 + 17) == a2[7] &&
                 *((_DWORD*)v19 + 18) == a2[8] && (v19[11] & 2) != 0 &&
                 (unsigned int)NgxRoutine_bf670(v19 + 14, a4) == 0) {
          goto LABEL_44;
        }
      }
    }
  LABEL_4:
    v5 = (_QWORD*)*v5;
    if (v5 == nullptr) {
      return 4294967289LL;
    }
  }
  if (*((_DWORD*)v19 + 10) != *a2 || *((_DWORD*)v19 + 11) != a2[1] ||
      *((_DWORD*)v19 + 14) != a2[4] || *((_DWORD*)v19 + 12) != a2[2] ||
      *((_DWORD*)v19 + 13) != a2[3] || *((_DWORD*)v19 + 16) != a2[6] ||
      *((_DWORD*)v19 + 17) != a2[7]) {
    goto LABEL_4;
  }
  v21 = *((_DWORD*)v19 + 18) != a2[8] || (v19[11] & 2) == 0;
  if (v21) {
    goto LABEL_4;
  }
LABEL_44:
  *a3 = v5[2];
  nvidia_dlss_rel_source_frameworks_cubin_a6b60(a1 + 6, v5);
  if ((v19[14] & 1) != 0) {
    v22 = (char*)v19[16];
  }
  else {
    v22 = (char*)v19 + 113;
  }
  NgxRoutine_b4c00(
      "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/rel/"
      "source/frameworks/cubin/ngx_cubin_generic.cpp",
      621, "RecycleBuffer",
      "Recycling Buffer Resource 0x%llx size in Bytes (%u) %s -> %s", *a3, *a2,
      v22, a4);
  v23 = *((_DWORD*)v19 + 24);
  if (a2[14] != v23) {
    a2[14] = v23;
    *((_BYTE*)a2 + 60) = 1;
  }
  *((_QWORD*)a2 + 12) = v19[17];
  if ((a5 & 1) != 0 || v28 != 5) {
  LABEL_53:
    v24 = (_QWORD*)v19[1];
    if (v24 != nullptr) {
      do {
        v25 = v24;
        v24 = (_QWORD*)*v24;
      } while (v24 != nullptr);
    }
    else {
      v26 = v19;
      do {
        v25 = (_QWORD*)v26[2];
        v21 = v26 == (_QWORD*)*v25;
        v26 = v25;
      } while (!v21);
    }
    if ((_QWORD*)a1[11] == v19) {
      a1[11] = v25;
    }
    v27 = a1[12];
    --a1[13];
    nvidia_dlss_rel_source_frameworks_cubin_a6cc0(v27, v19);
    if ((v19[14] & 1) != 0) {
      NgxRoutine_430(v19[16], v19[14] & 0xFFFFFFFFFFFFFFFELL);
    }
    NgxRoutine_430(v19, 144);
    nvidia_dlss_rel_source_frameworks_cubin_a7100(a1 + 11, a3, a3, a2);
    if ((a5 & 1) == 0) {
      (*(void (**)(_QWORD*, _QWORD, __int64))(*a1 + 632LL))(a1, *a3, a4);
    }
    return 0;
  }
  else {
    result = (*(__int64 (**)(_QWORD*, unsigned int*, _QWORD*))(*a1 + 656LL))(
        a1, a2, a3);
    if ((_DWORD)result == 0) {
      *a2 = *((_DWORD*)v19 + 10);
      goto LABEL_53;
    }
  }
  return result;
}

__int64 ngx_cubin_generic_a4c60(__int64* a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 result;
  unsigned int v16;
  _QWORD v17[4];
  int v18;
  __int64 v19;
  int v20;
  char v21;
  int v22;
  char v23;
  int v24;
  _QWORD v25[2];
  char* v26;
  __int64 v27;

  v4 = *(_QWORD*)(a2 + 16);
  v5 = *(_QWORD*)(a2 + 24);
  v19 = 0;
  v23 = 0;
  v17[2] = v4;
  v17[3] = v5;
  v18 = *(_DWORD*)(a2 + 32);
  v9 = *(_QWORD*)(a2 + 8);
  v17[0] = *(_QWORD*)a2;
  v17[1] = v9;
  v20 = 2;
  v21 = 1;
  v22 = -1;
  v24 = -1;
  v10 = strlen_plt(a4);
  if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
    NgxRoutine_27cb0();
  }
  v11 = v10;
  if (v10 >= 0x17) {
    if ((v10 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v10 | 7) + 1;
    }
    v12 = (char*)NgxRoutine_420(v13);
    v25[1] = v11;
    v26 = v12;
    v25[0] = v13 | 1;
    goto LABEL_9;
  }
  LOBYTE(v25[0]) = 2 * v10;
  v12 = (char*)v25 + 1;
  if (v10 != 0) {
  LABEL_9:
    memcpy_plt(v12, a4, v11);
  }
  v14 = *a1;
  v12[v11] = 0;
  v27 = 0;
  result = (*(__int64 (**)(__int64*, _QWORD*, __int64, __int64, __int64))(
      v14 + 648))(a1, v17, a3, a4, 1);
  if ((v25[0] & 1) != 0) {
    v16 = result;
    NgxRoutine_430(v26, v25[0] & 0xFFFFFFFFFFFFFFFELL);
    return v16;
  }
  return result;
}

__int64 CreateBufferResource(__int64* a1, __int64 a2, unsigned __int64* a3,
                             __int64 a4, int a5)
{
  int v5;
  int v9;
  int v10;
  bool v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 result;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  _QWORD* v26;
  unsigned int v27;
  char v28;
  struct {
    __int64 v29[4];
    int v30;
    char gap44_[4];
    __int64 v31;
    int v32;
    char v33;
    char gap61_[3];
    unsigned int v34;
    char v35;
    char gap69_[3];
    int v36;
  } v29_;
  struct {
    _QWORD v37[2];
    _QWORD* v38;
    __int64 v39;
  } v37_;

  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v5 = *(_DWORD*)(a2 + 24);
  v29_.v31 = 0;
  v29_.v35 = 0;
  if (v5 == 1) {
    v9 = 6;
  }
  else {
    v9 = 2;
  }
  if (v5 == 3) {
    v10 = 1024;
  }
  else {
    v10 = 0;
  }
  v11 = v5 == 2;
  v12 = *(_QWORD*)(a2 + 16);
  v13 = *(_QWORD*)(a2 + 24);
  v29_.v32 = v9;
  v29_.v33 = 1;
  v29_.v29[2] = v12;
  v29_.v29[3] = v13;
  v29_.v30 = *(_DWORD*)(a2 + 32);
  v14 = *(_QWORD*)(a2 + 8);
  v29_.v29[0] = *(_QWORD*)a2;
  v29_.v29[1] = v14;
  if (v11) {
    v15 = 2755;
  }
  else {
    v15 = v10;
  }
  if (a5 != -1) {
    v15 = a5;
  }
  v29_.v34 = v15;
  v29_.v36 = v15;
  v16 = strlen_plt(a4),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v16 >= 0xFFFFFFFFFFFFFFF7LL) {
    NgxRoutine_27cb0(),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v17 = v16;
  if (v16 >= 0x17) {
    if ((v16 | 7) == 0x17) {
      v19 = 26;
    }
    else {
      v19 = (v16 | 7) + 1;
    }
    v18 = (char*)NgxRoutine_420_alt1(v19),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v37_.v37[1] = v17;
    v37_.v38 = v18;
    v37_.v37[0] = v19 | 1;
  }
  else {
    LOBYTE(v37_.v37[0]) = 2 * v16;
    v18 = (char*)v37_.v37 + 1;
    if (v16 == 0) {
      goto LABEL_21;
    }
  }
  memcpy_plt(v18, a4, v17),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
LABEL_21:
  v20 = *a1;
  v18[v17] = 0;
  v37_.v39 = 0;
  result = (*(__int64 (**)(__int64*, __int64*, unsigned __int64*, __int64,
                           _QWORD))(v20 + 648))(a1, v29_.v29, a3, a4, 0),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((_DWORD)result == -7) {
    v24 = a1[103];
    ++*((_DWORD*)a1 + 205);
    v25 = LODWORD(v29_.v29[0]);
    v37_.v39 = LODWORD(v29_.v29[0]);
    a1[103] = v24 + LODWORD(v29_.v29[0]);
    atomic_fetch_add((atomic_ullong* volatile)NgxData_952b90, v25);
    v26 = (v37_.v37[0] & 1) != 0 ? v37_.v38 : (_QWORD*)((char*)v37_.v37 + 1);
    NgxRoutine_b4c00_alt1(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/frameworks/cubin/ngx_cubin_generic.cpp",
        710, (__int64)"CreateBufferResource",
        (__int64)"CUBIN 1D alloc (%s), m_allocCount=%d, currentSize %.1lf MB, "
                 "totalSize %.1lf MB",
        (__int64)v26, *((unsigned int*)a1 + 205), v22, v23, v28),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    result = (*(__int64 (**)(__int64*, __int64*, unsigned __int64*, _QWORD))(
        *a1 + 600))(a1, v29_.v29, a3, v29_.v34),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if ((_DWORD)result == 0 && *a3 != 0) {
      nvidia_dlss_rel_source_frameworks_cubin_a7100_alt1(
          (__int64**)a1 + 11, a3, (__int64*)a3, v29_.v29),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      (*(void (**)(__int64*, unsigned __int64, __int64))(*a1 + 632))(a1, *a3,
                                                                     a4),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      result = 0;
    }
  }
  if ((v37_.v37[0] & 1) != 0) {
    v27 = result;
    NgxRoutine_430(v37_.v38, v37_.v37[0] & 0xFFFFFFFFFFFFFFFELL),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    return v27;
  }
  return result;
}

__int64 CreateTexture2DResourceShared(__int64 a1, unsigned int* a2,
                                      unsigned __int64* a3, __int64 a4, int a5)
{
  __int64 v5;
  unsigned int v6;
  unsigned int v11;
  int v12;
  __int64 v13;
  int v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  char* v19;
  __int64* v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  unsigned __int64 v24;
  _QWORD* v25;
  unsigned __int64 v26;
  bool v27;
  __int64 v28;
  unsigned __int64 v29;
  _QWORD* v30;
  __int64 result;
  unsigned int v32;
  int v33;
  bool v34;
  unsigned int v35;
  __int64 v36;
  int v37;
  unsigned int v39;
  int v40;
  unsigned __int64 v41;
  __int64 v42;
  char* v43;
  unsigned int v45;
  int v46;
  _QWORD* v47;
  _QWORD* v48;
  _QWORD* v49;
  __int64** v50;
  char v51;
  int v52;
  struct {
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    unsigned int v57;
    char gap60_[4];
    __int64 v58;
    int v59;
    char v60;
    char gap77_[3];
    unsigned int v61;
    char v62;
    char gap85_[3];
    int v63;
  } v53_;
  struct {
    _QWORD v64[2];
    char* v65;
    unsigned __int64 v66;
  } v64_;

  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v5 = *((_QWORD*)a2 + 3);
  v6 = a2[6];
  v53_.v55 = *((_QWORD*)a2 + 2);
  v53_.v56 = v5;
  v11 = a2[8];
  v53_.v58 = 0;
  v53_.v62 = 0;
  if (v6 == 1) {
    v12 = 5;
  }
  else {
    v12 = 1;
  }
  v53_.v59 = v12;
  v53_.v60 = 1;
  v53_.v57 = v11;
  v13 = *((_QWORD*)a2 + 1);
  v53_.v53 = *(_QWORD*)a2;
  v53_.v54 = v13;
  if (v6 == 2) {
    v14 = 2755;
  }
  else {
    v14 = 1024;
  }
  if (a5 != -1) {
    v14 = a5;
  }
  v53_.v61 = v14;
  v53_.v63 = v14;
  v15 = strlen_plt(a4),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
    NgxRoutine_27cb0(),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v18 = v15;
  if (v15 >= 0x17) {
    if ((v15 | 7) == 0x17) {
      v21 = 26;
    }
    else {
      v21 = (v15 | 7) + 1;
    }
    v19 = (char*)NgxRoutine_420_alt1(v21),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v64_.v64[1] = v18;
    v64_.v65 = v19;
    v64_.v64[0] = v21 | 1;
  }
  else {
    LOBYTE(v64_.v64[0]) = 2 * v15;
    v19 = (char*)v64_.v64 + 1;
    if (v15 == 0) {
      BYTE1(v64_.v64[0]) = 0;
      v64_.v66 = 0;
      v20 = *(__int64**)(a1 + 64);
      if (v20 == nullptr) {
        goto LABEL_66;
      }
      goto LABEL_19;
    }
  }
  memcpy_plt(v19, a4, v18),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v19[v18] = 0;
  v64_.v66 = 0;
  v20 = *(__int64**)(a1 + 64);
  if (v20 == nullptr) {
  LABEL_66:
    ++*(_DWORD*)(a1 + 820);
    v37 = HIDWORD(v53_.v54);
    v52 = HIDWORD(v53_.v54);
    if (HIDWORD(v53_.v54) == 0 && (_DWORD)v53_.v54 != -1) {
      (*(void (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v37 = v52;
    }
    v39 = v37 - 1;
    if (v39 > 0x18) {
      v40 = 0;
    }
    else {
      v40 = NgxData_f7984[v39];
    }
    v41 = (unsigned int)(HIDWORD(v53_.v53) * v53_.v53 * v40);
    v42 = *(_QWORD*)(a1 + 824);
    v64_.v66 = v41;
    *(_QWORD*)(a1 + 824) = v42 + v41;
    atomic_fetch_add((atomic_ullong* volatile)NgxData_952b90, v41);
    if ((v64_.v64[0] & 1) != 0) {
      v43 = v64_.v65;
    }
    else {
      v43 = (char*)v64_.v64 + 1;
    }
    NgxRoutine_b4c00_alt1(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/frameworks/cubin/ngx_cubin_generic.cpp",
        886, (__int64)"CreateTexture2DResourceShared",
        (__int64)"CUBIN 2D alloc (%s), m_allocCount=%d, currentSize %.1lf MB, "
                 "totalSize %.1lf MB",
        (__int64)v43, *(unsigned int*)(a1 + 820), v16, v17, v51),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    result =
        (*(__int64 (**)(__int64, __int64*, unsigned __int64*, _QWORD, _QWORD))(
            *(_QWORD*)a1 + 608LL))(a1, &v53_.v53, a3, 0, v53_.v61),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if ((_DWORD)result == 0 && *a3 != 0) {
      nvidia_dlss_rel_source_frameworks_cubin_a7100_alt1(
          (__int64**)(a1 + 88), a3, (__int64*)a3, &v53_.v53),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      (*(void (**)(__int64, unsigned __int64, __int64))(*(_QWORD*)a1 + 640LL))(
          a1, *a3, a4),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      result = 0;
    }
  LABEL_82:
    if ((v64_.v64[0] & 1) == 0) {
      return result;
    }
    goto LABEL_83;
  }
LABEL_19:
  v22 = (_QWORD*)(a1 + 96);
  while (1) {
    v23 = (_QWORD*)*v22;
    if (*v22 == 0) {
      goto LABEL_20;
    }
    v24 = v20[2];
    v25 = (_QWORD*)(a1 + 96);
    do {
      v26 = v23[4];
      v27 = v26 >= v24;
      v28 = v26 < v24;
      if (v27) {
        v25 = v23;
      }
      v23 = (_QWORD*)v23[v28];
    } while (v23 != nullptr);
    if (v25 != v22) {
      v29 = v25[4];
      v30 = v24 >= v29 ? v25 : (_QWORD*)(a1 + 96);
      if (v24 >= v29) {
        result =
            (*(__int64 (**)(__int64, int*))(*(_QWORD*)a1 + 104LL))(a1, &v52),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        if ((_DWORD)result != 0) {
          goto LABEL_82;
        }
        v32 = *a2;
        if (v52 != 5) {
          break;
        }
        if (*((_DWORD*)v30 + 10) >= v32 && *((_DWORD*)v30 + 11) >= a2[1] &&
            *((_DWORD*)v30 + 14) == a2[4] && *((_DWORD*)v30 + 12) == a2[2] &&
            *((_DWORD*)v30 + 13) == a2[3] && *((_DWORD*)v30 + 16) == a2[6] &&
            *((_DWORD*)v30 + 17) == a2[7] && *((_DWORD*)v30 + 18) == a2[8] &&
            (v30[11] & 1) != 0) {
          v33 = NgxRoutine_bf670_alt1((unsigned __int8*)v30 + 112, a4),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          LODWORD(result) = 0;
          if (v33 == 0) {
            goto LABEL_59;
          }
        }
      }
    }
  LABEL_20:
    v20 = (__int64*)*v20;
    if (v20 == nullptr) {
      goto LABEL_66;
    }
  }
  if (*((_DWORD*)v30 + 10) != v32 || *((_DWORD*)v30 + 11) != a2[1] ||
      *((_DWORD*)v30 + 14) != a2[4] || *((_DWORD*)v30 + 12) != a2[2] ||
      *((_DWORD*)v30 + 13) != a2[3] || *((_DWORD*)v30 + 16) != a2[6] ||
      *((_DWORD*)v30 + 17) != a2[7]) {
    goto LABEL_20;
  }
  v34 = *((_DWORD*)v30 + 18) != a2[8] || (v30[11] & 1) == 0;
  if (v34) {
    goto LABEL_20;
  }
LABEL_59:
  v35 = result;
  *a3 = v20[2];
  nvidia_dlss_rel_source_frameworks_cubin_a6b60_alt1((__int64*)(a1 + 48), v20),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v30[14] & 1) != 0) {
    v36 = v30[16];
  }
  else {
    LOBYTE(v36) = (_BYTE)v30 + 113;
  }
  NgxRoutine_b4c00_alt1(
      (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
               "dlss/rel/source/frameworks/cubin/ngx_cubin_generic.cpp",
      842, (__int64)"CreateTexture2DResourceShared",
      (__int64)"Recycling Texture2D resource 0x%llx fmt %s size (%u,%u) %s -> "
               "%s",
      *a3, *((_QWORD*)NgxData_952b98 + a2[3]), *a2, a2[1], v36),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v53_.v61 != *((_DWORD*)v30 + 24)) {
    v53_.v61 = *((_DWORD*)v30 + 24);
    v53_.v62 = 1;
  }
  v64_.v66 = v30[17];
  if (v52 == 5) {
    if ((*(unsigned int (**)(__int64, __int64*, unsigned __int64*, _QWORD))(
            *(_QWORD*)a1 + 664LL))(a1, &v53_.v53, a3, 0) != 0) {
      goto LABEL_66;
    }
    v46 = *((_DWORD*)v30 + 11);
    LODWORD(v53_.v53) = *((_DWORD*)v30 + 10);
    HIDWORD(v53_.v53) = v46;
  }
  v47 = (_QWORD*)v30[1];
  if (v47 != nullptr) {
    do {
      v48 = v47;
      v47 = (_QWORD*)*v47;
    } while (v47 != nullptr);
  }
  else {
    v49 = v30;
    do {
      v48 = (_QWORD*)v49[2];
      v34 = v49 == (_QWORD*)*v48;
      v49 = v48;
    } while (!v34);
  }
  if (*(_QWORD**)(a1 + 88) == v30) {
    *(_QWORD*)(a1 + 88) = v48;
  }
  v50 = *(__int64***)(a1 + 96);
  --*(_QWORD*)(a1 + 104);
  nvidia_dlss_rel_source_frameworks_cubin_a6cc0_alt1(v50, v30),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v30[14] & 1) != 0) {
    NgxRoutine_430(v30[16], v30[14] & 0xFFFFFFFFFFFFFFFELL),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  NgxRoutine_430(v30, 144),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  nvidia_dlss_rel_source_frameworks_cubin_a7100_alt1((__int64**)(a1 + 88), a3,
                                                     (__int64*)a3, &v53_.v53),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  (*(void (**)(__int64, unsigned __int64, __int64))(*(_QWORD*)a1 + 640LL))(
      a1, *a3, a4),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  result = v35;
  if ((v64_.v64[0] & 1) != 0) {
  LABEL_83:
    v45 = result;
    NgxRoutine_430(v64_.v65, v64_.v64[0] & 0xFFFFFFFFFFFFFFFELL),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    return v45;
  }
  return result;
}

_QWORD* ngx_cubin_generic_a55e0(_QWORD* result, __int64 a2, unsigned __int64 a3)
{
  _QWORD* v3;
  _QWORD* v4;
  unsigned __int64 v5;
  bool v6;
  __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  int v10;

  v3 = (_QWORD*)result[12];
  if (v3 != nullptr) {
    v4 = result + 12;
    do {
      v5 = v3[4];
      v6 = v5 >= a3;
      v7 = v5 < a3;
      if (v6) {
        v4 = v3;
      }
      v3 = (_QWORD*)v3[v7];
    } while (v3 != nullptr);
    if (v4 != result + 12) {
      v8 = v4[4];
      if (a3 >= v8) {
        v9 = v4;
      }
      else {
        v9 = result + 12;
      }
      if (a3 >= v8 && *((_BYTE*)v9 + 100) == 1) {
        v10 = *((_DWORD*)v9 + 26);
        result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 616LL))(result);
        *((_DWORD*)v9 + 24) = v10;
        *((_BYTE*)v9 + 100) = 0;
      }
    }
  }
  return result;
}

__int64 ngx_cubin_generic_a5670(_QWORD* a1, _QWORD* a2)
{
  _QWORD* v2;
  __int64 result;
  unsigned int v5;
  __int64 v6;
  int v7;

  v2 = a1 + 14;
  if (a1[14] != 0) {
    result = 0;
  }
  else {
    result = (*(__int64 (**)(_QWORD*, _QWORD*))(*a1 + 672LL))(a1, a1 + 14);
    if ((_DWORD)result != 0) {
      v5 = result;
      NgxRoutine_b4b90_alt1(
          "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
          "rel/source/frameworks/cubin/ngx_cubin_generic.cpp",
          937, "CreateFeature",
          "error: CreateFeatureImpl() failed - nvapi status %d", result);
      result = v5;
    }
  }
  v6 = *v2;
  v7 = *(_DWORD*)(*v2 + 8LL);
  *a2 = *v2;
  *(_DWORD*)(v6 + 8) = v7 + 1;
  return result;
}

__int64 CollectGarbage(__int64 a1, double a2)
{

#pragma clang fp contract(off)
  __int64* v2;
  _QWORD* v4;
  atomic_ullong* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  unsigned __int64 v10;
  _QWORD* v11;
  unsigned __int64 v12;
  bool v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v18;

  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v2 = *(__int64**)(a1 + 64);
  if (v2 != nullptr) {
    v4 = (_QWORD*)(a1 + 96);
    v6 = (atomic_ullong*)NgxData_952b90;
    do {
      while ((double)(NgxRoutine_e3000_alt1() - v2[4]) / 0x1.e848000000000p+19 <
                 a2 &&
             (*(_BYTE*)(a1 + 818) & 1) == 0) {
        v2 = (__int64*)*v2;
        if (v2 == nullptr) {
          return 0;
        }
      }
      v9 = (_QWORD*)*v4;
      if (*v4 == 0) {
        goto LABEL_17;
      }
      v10 = v2[2];
      v11 = v4;
      do {
        v12 = v9[4];
        v13 = v12 >= v10;
        v14 = v12 < v10;
        if (v13) {
          v11 = v9;
        }
        v9 = (_QWORD*)v9[v14];
      } while (v9 != nullptr);
      if (v11 != v4 && v10 >= v11[4]) {
        if ((v11[14] & 1) != 0) {
          v15 = v11[16];
        }
        else {
          v15 = (__int64)v11 + 113;
        }
        NgxRoutine_b4c00_alt1(
            (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/"
                     "drivers/nvn2/dlss/rel/source/frameworks/cubin/ngx_c"
                     "ubin_generic.cpp",
            1033, (__int64)"CollectGarbage",
            (__int64)"Releasing resource 0x%llx (%s)", v2[2], v15, v7, v8, v18),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v16 = v11[17];
        *(_QWORD*)(a1 + 824) -= v16;
        atomic_fetch_add(v6, -v16);
        if (v2[2] != 0) {
        LABEL_18:
          (*(void (**)(__int64))(*(_QWORD*)a1 + 584LL))(a1),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        }
      }
      else {
      LABEL_17:
        NgxRoutine_b4c00_alt1(
            (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/"
                     "drivers/nvn2/dlss/rel/source/frameworks/cubin/ngx_c"
                     "ubin_generic.cpp",
            1040, (__int64)"CollectGarbage",
            (__int64)"Releasing resource 0x%llx (%s)", v2[2],
            (__int64)"Unknown", v7, v8, v18),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        if (v2[2] != 0) {
          goto LABEL_18;
        }
      }
      if (v2[3] != 0) {
        (*(void (**)(__int64))(*(_QWORD*)a1 + 592LL))(a1),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
      nvidia_dlss_rel_source_frameworks_cubin_a7720((__int64**)(a1 + 88),
                                                    (unsigned __int64*)v2 + 2),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v2 = (__int64*)nvidia_dlss_rel_source_frameworks_cubin_a6b60_alt1(
          (__int64*)(a1 + 48), v2),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    } while (v2 != nullptr);
  }
  return 0;
}

__int64 CopyHostToDeviceBuffer(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                               unsigned __int64 a5, unsigned __int64 a6)
{
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  bool v11;
  __int64 v12;
  unsigned int v13;
  _QWORD* v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  unsigned __int64 v19;
  bool v20;
  __int64 v21;
  unsigned int v22;
  _QWORD* v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  unsigned __int64 v28;
  bool v29;
  __int64 v30;

  v7 = a1 + 12;
  v6 = (_QWORD*)a1[12];
  if (v6 != nullptr) {
    v8 = a1 + 12;
    v9 = (_QWORD*)a1[12];
    do {
      v10 = v9[4];
      v11 = v10 >= a5;
      v12 = v10 < a5;
      if (v11) {
        v8 = v9;
      }
      v9 = (_QWORD*)v9[v12];
    } while (v9 != nullptr);
    if (v8 == v7) {
      goto LABEL_14;
    }
    if (a5 < v8[4]) {
      goto LABEL_14;
    }
    if (*((_BYTE*)v8 + 100) != 1) {
      goto LABEL_14;
    }
    v13 = *((_DWORD*)v8 + 26);
    v14 = a1;
    v15 = a2;
    v16 = a5;
    v17 = a6;
    (*(void (**)(_QWORD*, __int64, unsigned __int64, _QWORD, _QWORD))(
        *a1 + 616LL))(a1, a2, a5, *((unsigned int*)v8 + 24), v13);
    v6 = (_QWORD*)v14[12];
    a1 = v14;
    a2 = v15;
    a5 = v16;
    a6 = v17;
    *((_DWORD*)v8 + 24) = v13;
    *((_BYTE*)v8 + 100) = 0;
    if (v6 != nullptr) {
    LABEL_14:
      v18 = v7;
      do {
        v19 = v6[4];
        v20 = v19 >= a6;
        v21 = v19 < a6;
        if (v20) {
          v18 = v6;
        }
        v6 = (_QWORD*)v6[v21];
      } while (v6 != nullptr);
      if (v18 != v7 && a6 >= v18[4] && *((_BYTE*)v18 + 100) == 1) {
        v22 = *((_DWORD*)v18 + 26);
        v23 = a1;
        v24 = a5;
        v25 = a6;
        (*(void (**)(_QWORD*, __int64, unsigned __int64, _QWORD, _QWORD))(
            *a1 + 616LL))(a1, a2, a6, *((unsigned int*)v18 + 24), v22);
        a1 = v23;
        a5 = v24;
        a6 = v25;
        *((_DWORD*)v18 + 24) = v22;
        *((_BYTE*)v18 + 100) = 0;
      }
    }
  }
  if (a5 == 0 || a6 == 0) {
    NgxRoutine_b4b90_alt1(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/frameworks/cubin/ngx_cubin_generic.cpp",
        1072, "CopyHostToDeviceBuffer",
        "error: CopyHostToDeviceBuffer called with null InTargetBuffer or null "
        "InUploadResource");
    return 4294967291LL;
  }
  v26 = (_QWORD*)*v7;
  if (*v7 != 0) {
    v27 = v7;
    do {
      v28 = v26[4];
      v29 = v28 >= a5;
      v30 = v28 < a5;
      if (v29) {
        v27 = v26;
      }
      v26 = (_QWORD*)v26[v30];
    } while (v26 != nullptr);
    if (v27 != v7 && a5 >= v27[4]) {
      return (*(__int64 (**)(_QWORD*))(*a1 + 624LL))(a1);
    }
  }
  NgxRoutine_b4b90_alt1(
      "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/rel/"
      "source/frameworks/cubin/ngx_cubin_generic.cpp",
      1079, "CopyHostToDeviceBuffer",
      "error: CopyHostToDeviceBuffer requires an NGX internal InUploadResource "
      "to work");
  return 4294967291LL;
}

#pragma GCC visibility pop
