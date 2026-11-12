#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* nvidia_dlss_rel_source_features_dlaa_659c0(_QWORD* result);
__attribute__((swiftcall)) void nvidia_dlss_rel_source_a3670(PSEUDO_X8, _QWORD,
                                                             _QWORD);
__attribute__((swiftcall)) void nvidia_dlss_rel_source_a3890(PSEUDO_X8, _QWORD,
                                                             _QWORD);
__attribute__((swiftcall)) void nvidia_dlss_rel_source_a3ab0(PSEUDO_X8, _QWORD,
                                                             _QWORD);
__attribute__((swiftcall)) void nvidia_dlss_rel_source_a3cd0(PSEUDO_X8, _QWORD,
                                                             _QWORD);
__int64 NgxRoutine_29320(__int64*, __int64, unsigned __int64);
__int64 NgxRoutine_29ca0(__int64 result);
__int64 NgxRoutine_29cf0(_DWORD*, int, int, int, int, int);
__int64 NgxRoutine_420(__int64);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_6a040(__int64);
__int64 NgxRoutine_6a280(__int64);
__int64 NgxRoutine_70310(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD, _DWORD, _DWORD);
__int64 NgxRoutine_a9080(_QWORD, _QWORD);
__int64 NgxRoutine_b4b90(_QWORD, _QWORD, _QWORD, const char*, ...);
__int64 NgxRoutine_baf10(_QWORD);
__int64 NgxRoutine_baf10_alt1(__int64 result) __asm__("NgxRoutine_baf10");
__int64 NgxRoutine_bf2e0(_QWORD, _QWORD, _QWORD);
__int64 dltss_network_65f70_alt1(_QWORD, _QWORD) __asm__("dltss_network_65f70");
__int64 dltss_network_661d0_alt1(_QWORD, _QWORD) __asm__("dltss_network_661d0");
__int64 dltss_network_66810_alt1(_QWORD, _QWORD) __asm__("dltss_network_66810");
__int64 dltss_network_668a0_alt1(_QWORD, _QWORD) __asm__("dltss_network_668a0");
__int64 dltss_network_67450_alt1(_QWORD, _QWORD) __asm__("dltss_network_67450");
__int64 dltss_network_69b00_alt1(_QWORD) __asm__("dltss_network_69b00");
__int64 dltss_network_69e00_alt1(_QWORD) __asm__("dltss_network_69e00");
__int64 dltss_network_6b430_alt1(_QWORD, _QWORD, _QWORD,
                                 _QWORD) __asm__("dltss_network_6b430");
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 nvidia_dlss_a9960(void);
__int64 nvidia_dlss_a9960_alt1(_QWORD, _QWORD,
                               _QWORD) __asm__("nvidia_dlss_a9960");
__int64 nvidia_dlss_a9970(_QWORD, _QWORD);
__int64 nvidia_dlss_a9980(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nvidia_dlss_a9a30(_QWORD, _QWORD, _QWORD);
__int64 nvidia_dlss_a9a70(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nvidia_dlss_a9b20(_QWORD, _QWORD, _QWORD);
__int64 setupKernel_alt1(_QWORD, _QWORD) __asm__("setupKernel");
__int64 strlen_plt(_QWORD);
extern _DWORD* NgxData_952a50;
extern _UNKNOWN* NgxData_952a00;
extern __int64 (*NgxData_94cdc8[])();
extern __int64 (*NgxData_94ce48[])();
extern __int64 (*NgxData_94ce88[])();
extern __int64 NgxData_952a70;
extern __int64* NgxData_952220;
extern __int64* NgxData_9529f0[2];
extern __int64* NgxData_9529f8;
extern __int64* NgxData_952a08[9];
extern __int64* NgxData_952a18[7];
void __attribute__((noreturn)) NgxRoutine_27cb0();
void __attribute__((noreturn)) nvidia_dlss_rel_source_common_33410();
__int64 dltss_network_65ab0(__int64 a1);
__int64 dltss_network_65b40(__int64 a1, __int64 a2, __int64* a3, int a4, int a5,
                            int a6, __int64 a7, __int64 a8, int a9, __int64 a10,
                            int a11);
__int64 dltss_network_65c90(__int64 a1, __int64 a2, _QWORD* a3, __int64* a4,
                            unsigned int a5, unsigned int a6, _QWORD* a7,
                            unsigned int a8, __int64 a9, __int64 a10, int a11);
__int64 dltss_network_65f70(__int64 a1, unsigned int a2);
__int64 dltss_network_661d0(__int64 a1, unsigned int a2);
__int64 dltss_network_664c0(_QWORD* a1, __int64 a2, unsigned int a3);
__int64 dltss_network_66810(__int64 a1, __int64 a2);
__int64 dltss_network_668a0(__int64 a1, __int64 a2);
__int64 dltss_network_66930(__int64 a1, int a2);
__int64 dltss_network_671f0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            unsigned int a5);
__int64 dltss_network_67450(__int64 a1, unsigned int a2);
__int64 dltss_network_675c0(__int64 a1, unsigned int a2);
__int64 dltss_network_69850(__int64 a1, __int64 a2, __int64* a3, __int64* a4,
                            unsigned int a5, unsigned int a6, int a7,
                            _QWORD* a8, unsigned int a9, __int64 a10,
                            __int64 a11, int a12);
__int64 dltss_network_69b00(__int64 a1);
__int64 dltss_network_69e00(__int64 a1);
__int64 dltss_network_6a520(__int64 a1);
__int64 dltss_network_6a650(__int64 a1, __int64 a2, _QWORD* a3, __int64* a4,
                            unsigned int a5, unsigned int a6, int a7,
                            _QWORD* a8, __int64* a9, unsigned int a10,
                            __int64 a11, char a12, __int64 a13, int a14,
                            int a15, int a16);
__int64 setupKernel(__int64 a1, unsigned int a2);
float dltss_network_6aed0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, unsigned int a6, _QWORD* a7);
__int64 dltss_network_6b430(__int64 a1, unsigned int a2, __int64 a3,
                            __int64 a4);
__int64 setWeightsHelper(__int64 a1, __int64* a2, __int64 a3);
__int64 setBiasesHelper(__int64 a1, __int64* a2, __int64 a3);
__int64 reuseWeightsBias(__int64 a1);
_QWORD* Destroy_CubinConvLayer(__int64 a1);

__int64 dltss_network_65ab0(__int64 a1)
{
  int v2;

  *NgxData_9529f0[0] = 0;
  if ((*(unsigned int (**)(__int64, void*))(*(_QWORD*)a1 + 104LL))(
          a1, NgxData_952a00) != 0) {
    v2 = (*(__int64 (**)(__int64, void*))(*(_QWORD*)a1 + 104LL))(
        a1, NgxData_952a00);
    NgxRoutine_b4b90(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/features/dlaa/dltss_network.cpp",
        105, "Initialize", "Error: NVAPI failed %d", v2);
  }
  return 1;
}

__int64 dltss_network_65b40(__int64 a1, __int64 a2, __int64* a3, int a4, int a5,
                            int a6, __int64 a7, __int64 a8, int a9, __int64 a10,
                            int a11)
{
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;

  v15 = NgxData_9529f8;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)a1 = v15 + 2;
  *(_QWORD*)(a1 + 8) = a2;
  if ((*(_BYTE*)a3 & 1) != 0) {
    NgxRoutine_29320((__int64*)(a1 + 64), a3[2], a3[1]);
  }
  else {
    v16 = *a3;
    v17 = a3[2];
    *(_QWORD*)(a1 + 72) = a3[1];
    *(_QWORD*)(a1 + 80) = v17;
    *(_QWORD*)(a1 + 64) = v16;
  }
  v18 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_DWORD*)(a1 + 104) = a11;
  *(_DWORD*)(a1 + 108) = a9;
  *(_DWORD*)(a1 + 112) = 1;
  if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
    v19 = v18;
  }
  else {
    v19 = a1 + 65;
  }
  *(_QWORD*)(a1 + 120) = NgxRoutine_a9080(a10, v19);
  *(_DWORD*)(a1 + 128) = 0;
  v20 = NgxData_952a08[0];
  *(_DWORD*)(a1 + 92) = a4;
  *(_DWORD*)(a1 + 96) = a5;
  *(_DWORD*)(a1 + 100) = a6;
  *(_QWORD*)a1 = v20 + 2;
  nvidia_dlss_a9960();
  return nvidia_dlss_a9970(*(_QWORD*)(a1 + 120),
                           *(int*)(a1 + 96) * (__int64)*(int*)(a1 + 100) *
                               *(int*)(a1 + 92) * *(int*)(a1 + 108));
}

__int64 dltss_network_65c90(__int64 a1, __int64 a2, _QWORD* a3, __int64* a4,
                            unsigned int a5, unsigned int a6, _QWORD* a7,
                            unsigned int a8, __int64 a9, __int64 a10, int a11)
{
  __int64 v11;
  unsigned __int64 v20;
  unsigned __int64 v21;
  char* v22;
  int v23;
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
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 result;
  unsigned int v39;
  unsigned int v40;
  _QWORD* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD v49[2];
  __int64 v50;

  v11 = *a3;
  v20 = strlen_plt(*a3);
  if (v20 >= 0xFFFFFFFFFFFFFFF7LL) {
    NgxRoutine_27cb0();
  }
  v21 = v20;
  v46 = a2;
  if (v20 >= 0x17) {
    v45 = a5;
    v39 = a6;
    v40 = a8;
    v41 = a7;
    if ((v20 | 7) == 0x17) {
      v42 = 26;
    }
    else {
      v42 = (v20 | 7) + 1;
    }
    v43 = NgxRoutine_420(v42);
    v44 = v42 | 1;
    a7 = v41;
    a8 = v40;
    a6 = v39;
    a5 = v45;
    v22 = (char*)v43;
    v49[1] = v21;
    v50 = v43;
    v49[0] = v44;
  LABEL_27:
    memmove_plt(v22, v11, v21);
    v22[v21] = 0;
    v23 = a11;
    v24 = a4[1];
    v47 = *a4;
    v48 = v24;
    if (v24 == 0) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  LOBYTE(v49[0]) = 2 * v20;
  v22 = (char*)v49 + 1;
  if (v20 != 0) {
    goto LABEL_27;
  }
  BYTE1(v49[0]) = 0;
  v23 = a11;
  v24 = a4[1];
  v47 = *a4;
  v48 = v24;
  if (v24 != 0) {
  LABEL_5:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                              memory_order_relaxed);
  }
LABEL_6:
  NgxRoutine_70310(a1, v46, v49, &v47, a5, a6, a8, a9, 0, v23);
  v25 = v48;
  if (v48 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
    if ((v49[0] & 1) == 0) {
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
  NgxRoutine_baf10(v25);
  if ((v49[0] & 1) != 0) {
  LABEL_9:
    NgxRoutine_430(v50, v49[0] & 0xFFFFFFFFFFFFFFFELL);
  }
LABEL_10:
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)a1 = NgxData_94cdc8;
  v26 = *a3;
  v27 = a3[1];
  v28 = a3[2];
  v29 = a3[3];
  *(_QWORD*)(a1 + 368) = 0;
  *(_DWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 352) = v28;
  *(_QWORD*)(a1 + 360) = v29;
  *(_QWORD*)(a1 + 336) = v26;
  *(_QWORD*)(a1 + 344) = v27;
  v31 = *a4;
  v30 = a4[1];
  if (v30 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 8), 1u,
                              memory_order_relaxed);
  }
  v32 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 32) = v31;
  *(_QWORD*)(a1 + 40) = v30;
  if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
    NgxRoutine_baf10(v32);
  }
  v33 = *(_QWORD*)(a1 + 16);
  v34 = *(_DWORD*)(v33 + 96);
  *(_DWORD*)(a1 + 92) = *(_DWORD*)(v33 + 92) / 2;
  *(_DWORD*)(a1 + 96) = v34 / 2;
  v36 = *a7;
  v35 = a7[1];
  if (v35 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 8), 1u,
                              memory_order_relaxed);
  }
  v37 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 48) = v36;
  *(_QWORD*)(a1 + 56) = v35;
  if (v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
    NgxRoutine_baf10(v37);
  }
  nvidia_dlss_a9960_alt1(
      *(_QWORD*)(a1 + 120),
      *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 120LL) + 48LL),
      *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 120LL) + 52LL));
  result = nvidia_dlss_a9970(*(_QWORD*)(a1 + 120),
                             *(int*)(a1 + 96) * (__int64)*(int*)(a1 + 100) *
                                 *(int*)(a1 + 92) * *(int*)(a1 + 108));
  if (*(_QWORD*)(a1 + 344) != 0) {
    result = dltss_network_65f70_alt1(a1, 0);
    *(_DWORD*)(a1 + 128) = 0;
  }
  return result;
}

__int64 dltss_network_65f70(__int64 a1, unsigned int a2)
{
  __int64 v3;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64** v11;
  char* v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64* v16;
  int v17;
  __int64 v18;
  __int64 v19;
  int v20;
  _QWORD v22[2];
  char* v23;
  __int64* v24;
  __int64 v25;

  v3 = *(_QWORD*)(a1 + 8);
  v5 = a2;
  v25 = 0;
  if ((*(unsigned int (**)(__int64, __int64*))(*(_QWORD*)v3 + 64LL))(
          v3, &v25) != 0) {
    v6 = (*(__int64 (**)(_QWORD, __int64*))(**(_QWORD**)(a1 + 8) + 64LL))(
        *(_QWORD*)(a1 + 8), &v25);
    NgxRoutine_b4b90(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/features/dlaa/dltss_network.cpp",
        268, "SetupKernel", "Error: NVAPI failed %d", v6);
  }
  v7 = v25;
  v8 = *(_QWORD*)(a1 + 352 + 8 * v5);
  v9 = strlen_plt(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    NgxRoutine_27cb0();
  }
  v10 = v9;
  v11 = (__int64**)(a1 + 16LL * a2 + 320);
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v9 | 7) + 1;
    }
    v12 = (char*)NgxRoutine_420(v13);
    v22[1] = v10;
    v23 = v12;
    v22[0] = v13 | 1;
  }
  else {
    LOBYTE(v22[0]) = 2 * v9;
    v12 = (char*)v22 + 1;
    if (v9 == 0) {
      goto LABEL_12;
    }
  }
  memmove_plt(v12, v8, v10);
LABEL_12:
  v12[v10] = 0;
  nvidia_dlss_rel_source_a3670((void*)&v24, v7, v22);
  v14 = v24;
  v15 = *v11;
  v24 = nullptr;
  *v11 = v14;
  if (v15 != nullptr) {
    (*(void (**)(__int64*))(*v15 + 120))(v15);
    v16 = v24;
    v24 = nullptr;
    if (v16 != nullptr) {
      (*(void (**)(__int64*))(*v16 + 120))(v16);
    }
  }
  if ((v22[0] & 1) != 0) {
    NgxRoutine_430(v23, v22[0] & 0xFFFFFFFFFFFFFFFELL);
  }
  (*(void (**)(__int64*, _QWORD, _QWORD))(**v11 + 32))(*v11, 0, 0);
  v17 =
      (*(__int64 (**)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, __int64, _QWORD,
                      _QWORD, int, _QWORD))(**(_QWORD**)(a1 + 8) + 120LL))(
          *(_QWORD*)(a1 + 8), **(_QWORD**)(a1 + 8 * v5 + 344),
          *(unsigned int*)(*(_QWORD*)(a1 + 8 * v5 + 344) + 8LL),
          *(_QWORD*)(a1 + 352 + 8 * v5), 1, a1 + 16LL * a2 + 328,
          *((unsigned int*)*v11 + 5), *((unsigned int*)*v11 + 6), 1, 0);
  *(_DWORD*)(a1 + 128) = v17;
  if (v17 != 0) {
    NgxRoutine_b4b90(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/features/dlaa/dltss_network.cpp",
        280, "SetupKernel", "Error: NVAPI failed %d", v17);
  }
  dltss_network_661d0_alt1(a1, a2);
  (*(void (**)(__int64*))(**v11 + 40))(*v11);
  v19 = **v11;
  v18 = (*v11)[1];
  v20 = *((_DWORD*)*v11 + 4);
  *(_DWORD*)(a1 + 368) = v18;
  *(_DWORD*)(a1 + 376) = v20;
  *(_DWORD*)(a1 + 372) = HIDWORD(v18);
  (*(void (**)(void*))(v19 + 8))((void*)*v11);
  return 0;
}

__int64 dltss_network_661d0(__int64 a1, unsigned int a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int* v7;
  int v8;
  __int64 v9;
  __int64 v10;
  int* v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int* v18;
  int v19;
  __int64 v20;
  int* v21;
  int v22;
  __int64 result;
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
  struct {
    __int128 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    int v46;
  } v42_;

  v3 = a2;
  v4 = *(_QWORD*)(a1 + 16LL * a2 + 320);
  v5 = *(_QWORD*)(a1 + 32);
  v7 = *(int**)(v5 + 16);
  v6 = *(_QWORD*)(v5 + 24);
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
  }
  if (*(_DWORD*)(a1 + 4LL * a2 + 364) == 1) {
    v8 = 2;
  }
  else {
    v8 = 1;
  }
  NgxRoutine_29ca0((__int64)&v42_.v42);
  NgxRoutine_29cf0(&v42_.v42, 1, v7[24], v7[23], v7[25], v8);
  v42_.v46 = v7[26];
  *(_DWORD*)(v4 + 152) = v42_.v46;
  *(_OWORD*)(v4 + 112) = v42_.v42;
  v9 = v42_.v45;
  *(_QWORD*)(v4 + 136) = v42_.v44;
  *(_QWORD*)(v4 + 144) = v9;
  *(_QWORD*)(v4 + 128) = v42_.v43;
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    NgxRoutine_baf10_alt1(v6);
  }
  v10 = a1 + 360;
  v11 = *(int**)(a1 + 32);
  if (*(_DWORD*)(a1 + 360 + 4 * v3) == 1) {
    v12 = 2;
  }
  else {
    v12 = 1;
  }
  NgxRoutine_29ca0((__int64)&v42_.v42);
  NgxRoutine_29cf0(&v42_.v42, 1, v11[24], v11[23], v11[25], v12);
  *(_DWORD*)(v4 + 200) = v11[26];
  *(_OWORD*)(v4 + 160) = v42_.v42;
  v13 = v42_.v45;
  *(_QWORD*)(v4 + 184) = v42_.v44;
  *(_QWORD*)(v4 + 192) = v13;
  *(_QWORD*)(v4 + 176) = v42_.v43;
  if (*(_DWORD*)(v10 + 4 * v3) == 1) {
    v14 = 2;
  }
  else {
    v14 = 1;
  }
  NgxRoutine_29ca0((__int64)&v42_.v42);
  NgxRoutine_29cf0(&v42_.v42, 1, *(_DWORD*)(a1 + 96), *(_DWORD*)(a1 + 92),
                   *(_DWORD*)(a1 + 100), v14);
  *(_DWORD*)(v4 + 248) = *(_DWORD*)(a1 + 104);
  *(_OWORD*)(v4 + 208) = v42_.v42;
  v15 = v42_.v45;
  *(_QWORD*)(v4 + 232) = v42_.v44;
  *(_QWORD*)(v4 + 240) = v15;
  *(_QWORD*)(v4 + 224) = v42_.v43;
  v16 = *(_QWORD*)(a1 + 32);
  v18 = *(int**)(v16 + 48);
  v17 = *(_QWORD*)(v16 + 56);
  if (v17 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                              memory_order_relaxed);
  }
  v19 = *(_DWORD*)(v10 + 4 * v3);
  NgxRoutine_29ca0((__int64)&v42_.v42);
  NgxRoutine_29cf0(&v42_.v42, 1, v18[24], v18[23], v18[25], v19);
  v42_.v46 = v18[26];
  *(_DWORD*)(v4 + 296) = v42_.v46;
  *(_OWORD*)(v4 + 256) = v42_.v42;
  v20 = v42_.v45;
  *(_QWORD*)(v4 + 280) = v42_.v44;
  *(_QWORD*)(v4 + 288) = v20;
  *(_QWORD*)(v4 + 272) = v42_.v43;
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    NgxRoutine_baf10_alt1(v17);
  }
  v21 = *(int**)(a1 + 48);
  v22 = *(_DWORD*)(v10 + 4 * v3);
  NgxRoutine_29ca0((__int64)&v42_.v42);
  result = NgxRoutine_29cf0(&v42_.v42, 1, v21[24], v21[23], v21[25], v22);
  *(_DWORD*)(v4 + 344) = v21[26];
  *(_OWORD*)(v4 + 304) = v42_.v42;
  v24 = v42_.v45;
  *(_QWORD*)(v4 + 328) = v42_.v44;
  *(_QWORD*)(v4 + 336) = v24;
  *(_QWORD*)(v4 + 320) = v42_.v43;
  v25 = *(_QWORD*)(a1 + 32);
  v26 = *(_QWORD*)(v25 + 224);
  *(_QWORD*)(v4 + 400) = *(_QWORD*)(v25 + 216);
  *(_QWORD*)(v4 + 408) = v26;
  v27 = *(_QWORD*)(v25 + 232);
  v28 = *(_QWORD*)(v25 + 240);
  v29 = *(_QWORD*)(v25 + 248);
  *(_DWORD*)(v4 + 440) = *(_DWORD*)(v25 + 256);
  *(_QWORD*)(v4 + 424) = v28;
  *(_QWORD*)(v4 + 432) = v29;
  *(_QWORD*)(v4 + 416) = v27;
  v31 = *(_QWORD*)(a1 + 240);
  v30 = *(_QWORD*)(a1 + 248);
  LODWORD(v27) = *(_DWORD*)(a1 + 256);
  *(_QWORD*)(v4 + 512) = *(_QWORD*)(a1 + 232);
  *(_DWORD*)(v4 + 536) = v27;
  *(_QWORD*)(v4 + 528) = v30;
  *(_QWORD*)(v4 + 520) = v31;
  v32 = *(_QWORD*)(a1 + 224);
  *(_QWORD*)(v4 + 496) = *(_QWORD*)(a1 + 216);
  *(_QWORD*)(v4 + 504) = v32;
  v33 = *(_QWORD*)(a1 + 32);
  v34 = *(_QWORD*)(v33 + 272);
  *(_QWORD*)(v4 + 352) = *(_QWORD*)(v33 + 264);
  *(_QWORD*)(v4 + 360) = v34;
  v35 = *(_QWORD*)(v33 + 280);
  v36 = *(_QWORD*)(v33 + 288);
  v37 = *(_QWORD*)(v33 + 296);
  *(_DWORD*)(v4 + 392) = *(_DWORD*)(v33 + 304);
  *(_QWORD*)(v4 + 376) = v36;
  *(_QWORD*)(v4 + 384) = v37;
  *(_QWORD*)(v4 + 368) = v35;
  v38 = *(_QWORD*)(a1 + 272);
  *(_QWORD*)(v4 + 448) = *(_QWORD*)(a1 + 264);
  *(_QWORD*)(v4 + 456) = v38;
  v39 = *(_QWORD*)(a1 + 280);
  v40 = *(_QWORD*)(a1 + 288);
  v41 = *(_QWORD*)(a1 + 296);
  *(_DWORD*)(v4 + 488) = *(_DWORD*)(a1 + 304);
  *(_QWORD*)(v4 + 472) = v40;
  *(_QWORD*)(v4 + 480) = v41;
  *(_QWORD*)(v4 + 464) = v39;
  return result;
}

__int64 dltss_network_664c0(_QWORD* a1, __int64 a2, unsigned int a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;

  memcpy_plt(a2, a1[2 * a3 + 40] + 1736LL, 372);
  v5 = a1[4];
  v6 = *(_QWORD*)(v5 + 48);
  v7 = *(_QWORD*)(v5 + 56);
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
  }
  v8 = nvidia_dlss_a9a30(*(_QWORD*)(v6 + 120), a1[1], a2 + 80);
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v14 = v8;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    NgxRoutine_baf10(v7);
    if (v14 != 0) {
      goto LABEL_6;
    }
  }
  else if (v8 != 0) {
  LABEL_6:
    v9 = a1[4];
    v10 = *(_QWORD*)(v9 + 48);
    v11 = *(_QWORD*)(v9 + 56);
    if (v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
      v12 = nvidia_dlss_a9a30(*(_QWORD*)(v10 + 120), a1[1], a2 + 80);
      NgxRoutine_b4b90(
          "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
          "rel/source/features/dlaa/dltss_network.cpp",
          306, "SetParamsBeforeDispatch", "Error: NVAPI failed %d", v12);
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        return 0;
      }
      goto LABEL_24;
    }
    v16 =
        (unsigned int)nvidia_dlss_a9a30(*(_QWORD*)(v10 + 120), a1[1], a2 + 80);
    NgxRoutine_b4b90(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/features/dlaa/dltss_network.cpp",
        306, "SetParamsBeforeDispatch", "Error: NVAPI failed %d", v16);
    return 0;
  }
  if ((unsigned int)nvidia_dlss_a9a30(a1[15], a1[1], a2 + 160) != 0) {
    v15 = (unsigned int)nvidia_dlss_a9a30(a1[15], a1[1], a2 + 160);
    NgxRoutine_b4b90(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/features/dlaa/dltss_network.cpp",
        307, "SetParamsBeforeDispatch", "Error: NVAPI failed %d", v15);
    return 0;
  }
  if ((unsigned int)nvidia_dlss_a9a30(*(_QWORD*)(a1[6] + 120LL), a1[1],
                                      a2 + 168) != 0) {
    v17 = (unsigned int)nvidia_dlss_a9a30(*(_QWORD*)(a1[6] + 120LL), a1[1],
                                          a2 + 168);
    NgxRoutine_b4b90(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/features/dlaa/dltss_network.cpp",
        308, "SetParamsBeforeDispatch", "Error: NVAPI failed %d", v17);
    return 0;
  }
  v18 = a1[4];
  v19 = *(_QWORD*)(v18 + 16);
  v20 = *(_QWORD*)(v18 + 24);
  if (v20 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                              memory_order_relaxed);
  }
  v21 = nvidia_dlss_a9b20(*(_QWORD*)(v19 + 120), a1[1], a2);
  if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    v22 = v21;
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    NgxRoutine_baf10(v20);
    v21 = v22;
  }
  v23 = a1[4];
  if (v21 != 0) {
    v24 = *(_QWORD*)(v23 + 16);
    v11 = *(_QWORD*)(v23 + 24);
    if (v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
      v25 = nvidia_dlss_a9b20(*(_QWORD*)(v24 + 120), a1[1], a2);
      NgxRoutine_b4b90(
          "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
          "rel/source/features/dlaa/dltss_network.cpp",
          309, "SetParamsBeforeDispatch", "Error: NVAPI failed %d", v25);
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        return 0;
      }
    LABEL_24:
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      NgxRoutine_baf10(v11);
      return 0;
    }
    v26 = (unsigned int)nvidia_dlss_a9b20(*(_QWORD*)(v24 + 120), a1[1], a2);
    NgxRoutine_b4b90(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/features/dlaa/dltss_network.cpp",
        309, "SetParamsBeforeDispatch", "Error: NVAPI failed %d", v26);
    return 0;
  }
  if ((dltss_network_66810_alt1(a1[4], a2 + 8) & 1) == 0 ||
      (dltss_network_668a0_alt1(a1[4], a2 + 88) & 1) == 0 ||
      (dltss_network_66810_alt1(a1, a2 + 40) & 1) == 0) {
    return 0;
  }
  return dltss_network_668a0_alt1(a1, a2 + 176);
}

__int64 dltss_network_66810(__int64 a1, __int64 a2)
{
  int v4;

  if ((*(unsigned int (**)(_QWORD, _QWORD, __int64))(
          **(_QWORD**)(a1 + 8) + 208LL))(*(_QWORD*)(a1 + 8),
                                         *(_QWORD*)(a1 + 136), a2) == 0) {
    return 1;
  }
  v4 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 8) + 208LL))(
      *(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 136), a2);
  NgxRoutine_b4b90("C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                   1315, "GetWeightsVirtualAddress", "Error: NVAPI failed %d",
                   v4);
  return 0;
}

__int64 dltss_network_668a0(__int64 a1, __int64 a2)
{
  int v4;

  if ((*(unsigned int (**)(_QWORD, _QWORD, __int64))(
          **(_QWORD**)(a1 + 8) + 208LL))(*(_QWORD*)(a1 + 8),
                                         *(_QWORD*)(a1 + 168), a2) == 0) {
    return 1;
  }
  v4 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 8) + 208LL))(
      *(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 168), a2);
  NgxRoutine_b4b90("C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                   1321, "GetBiasesVirtualAddress", "Error: NVAPI failed %d",
                   v4);
  return 0;
}

__int64 dltss_network_66930(__int64 a1, int a2)
{
  __int64 v2;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 result;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  _BYTE v31[376];

  LODWORD(v2) = a2;
  v4 = NgxData_952220;
  v5 = *(_QWORD*)(a1 + 32);
  v6 = *NgxData_952220;
  v7 = *(_QWORD*)(v5 + 16);
  v8 = *(_QWORD*)(v5 + 24);
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
  }
  v9 = (*(__int64 (**)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD**)(a1 + 8) +
                                                         360LL))(
      *(_QWORD*)(a1 + 8), v6, *(_QWORD*)(*(_QWORD*)(v7 + 120) + 64LL), 0);
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v16 = v9;
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    NgxRoutine_baf10(v8);
    if (v16 != 0) {
    LABEL_6:
      v10 = *(_QWORD*)(a1 + 32);
      v11 = *v4;
      v12 = *(_QWORD*)(v10 + 16);
      v13 = *(_QWORD*)(v10 + 24);
      if (v13 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                  memory_order_relaxed);
        v14 = (*(__int64 (**)(_QWORD, __int64, _QWORD, _QWORD))(
            **(_QWORD**)(a1 + 8) + 360LL))(
            *(_QWORD*)(a1 + 8), v11, *(_QWORD*)(*(_QWORD*)(v12 + 120) + 64LL),
            0);
        NgxRoutine_b4b90(
            "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
            "dlss/rel/source/features/dlaa/dltss_network.cpp",
            320, "Dispatch", "Error: NVAPI failed %d", v14);
        result = 0;
        if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          return result;
        }
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        NgxRoutine_baf10(v13);
      }
      else {
        v19 = (*(unsigned int (**)(_QWORD, __int64, _QWORD, _QWORD))(
            **(_QWORD**)(a1 + 8) + 360LL))(
            *(_QWORD*)(a1 + 8), v11, *(_QWORD*)(*(_QWORD*)(v12 + 120) + 64LL),
            0);
        NgxRoutine_b4b90(
            "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
            "dlss/rel/source/features/dlaa/dltss_network.cpp",
            320, "Dispatch", "Error: NVAPI failed %d", v19);
      }
      return 0;
    }
  }
  else if (v9 != 0) {
    goto LABEL_6;
  }
  if (*(_QWORD*)(a1 + 320 + 16LL * (unsigned int)v2 + 8) != 0) {
    v2 = (unsigned int)v2;
  }
  else {
    v2 = 0;
  }
  v17 = a1 + 320 + 16LL * (unsigned int)v2;
  if ((*(unsigned int (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 240LL))(
          *(_QWORD*)(a1 + 8), *(_QWORD*)(v17 + 8)) != 0) {
    v18 = (*(unsigned int (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 240LL))(
        *(_QWORD*)(a1 + 8), *(_QWORD*)(v17 + 8));
    NgxRoutine_b4b90(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/features/dlaa/dltss_network.cpp",
        327, "Dispatch", "Error: NVAPI failed %d", v18);
    return 0;
  }
  v30 = NgxData_952a18[0] + 2;
  memset_plt(v31, 0, 376);
  v20 = dltss_network_664c0((_QWORD*)a1, (__int64)v31, v2);
  result = 0;
  if ((v20 & 1) != 0) {
    if ((*(unsigned int (**)(_QWORD, __int64**, __int64, _QWORD, _QWORD,
                             _QWORD))(**(_QWORD**)(a1 + 8) + 344LL))(
            *(_QWORD*)(a1 + 8), &v30, *v4, *(unsigned int*)(a1 + 368),
            *(unsigned int*)(a1 + 372), *(unsigned int*)(a1 + 376)) != 0) {
      v21 = (*(unsigned int (**)(_QWORD, __int64**, __int64, _QWORD, _QWORD,
                                 _QWORD))(**(_QWORD**)(a1 + 8) + 344LL))(
          *(_QWORD*)(a1 + 8), &v30, *v4, *(unsigned int*)(a1 + 368),
          *(unsigned int*)(a1 + 372), *(unsigned int*)(a1 + 376));
      NgxRoutine_b4b90(
          "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
          "rel/source/features/dlaa/dltss_network.cpp",
          338, "Dispatch", "Error: NVAPI failed %d", v21);
      return 0;
    }
    v22 = a1 + 360;
    v23 = *(_QWORD*)(a1 + 48);
    v24 = *(_QWORD*)(a1 + 56);
    v25 = *(_DWORD*)(a1 + 360 + 4 * v2);
    *(_DWORD*)(a1 + 112) = v25;
    if (v24 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                                memory_order_relaxed);
      *(_DWORD*)(v23 + 112) = *(_DWORD*)(v22 + 4 * v2);
      if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
        NgxRoutine_baf10(v24);
      }
    }
    else {
      *(_DWORD*)(v23 + 112) = v25;
    }
    v26 = *(_QWORD*)(a1 + 32);
    v27 = *(_DWORD*)(v22 + 4 * v2);
    v28 = *(_QWORD*)(v26 + 48);
    v29 = *(_QWORD*)(v26 + 56);
    *(_DWORD*)(v26 + 112) = v27;
    if (v29 != 0) {
      result = 1;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                memory_order_relaxed);
      *(_DWORD*)(v28 + 112) = *(_DWORD*)(v22 + 4 * v2);
      if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
        NgxRoutine_baf10(v29);
        return 1;
      }
    }
    else {
      *(_DWORD*)(v28 + 112) = v27;
      return 1;
    }
  }
  return result;
}

__int64 dltss_network_671f0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            unsigned int a5)
{
  __int64 v6;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64** v14;
  char* v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64* v19;
  int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  _QWORD v25[2];
  char* v26;
  __int64* v27;
  __int64 v28;

  if (a2 == 0) {
    return 0;
  }
  v6 = *(_QWORD*)(a1 + 8);
  v8 = a5;
  v28 = 0;
  if ((*(unsigned int (**)(__int64, __int64*))(*(_QWORD*)v6 + 64LL))(
          v6, &v28) != 0) {
    v9 = (*(__int64 (**)(_QWORD, __int64*))(**(_QWORD**)(a1 + 8) + 64LL))(
        *(_QWORD*)(a1 + 8), &v28);
    NgxRoutine_b4b90(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/features/dlaa/dltss_network.cpp",
        421, "SetupKernel", "Error: NVAPI failed %d", v9);
  }
  v10 = v28;
  v11 = *(_QWORD*)(a1 + 328 + 8 * v8);
  v12 = strlen_plt(v11);
  if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
    NgxRoutine_27cb0();
  }
  v13 = v12;
  v14 = (__int64**)(a1 + 16LL * a5 + 440);
  if (v12 >= 0x17) {
    if ((v12 | 7) == 0x17) {
      v16 = 26;
    }
    else {
      v16 = (v12 | 7) + 1;
    }
    v15 = (char*)NgxRoutine_420(v16);
    v25[1] = v13;
    v26 = v15;
    v25[0] = v16 | 1;
    goto LABEL_12;
  }
  LOBYTE(v25[0]) = 2 * v12;
  v15 = (char*)v25 + 1;
  if (v12 != 0) {
  LABEL_12:
    memmove_plt(v15, v11, v13);
  }
  v15[v13] = 0;
  nvidia_dlss_rel_source_a3670((void*)&v27, v10, v25);
  v17 = v27;
  v18 = *v14;
  v27 = nullptr;
  *v14 = v17;
  if (v18 != nullptr) {
    (*(void (**)(__int64*))(*v18 + 120))(v18);
    v19 = v27;
    v27 = nullptr;
    if (v19 != nullptr) {
      (*(void (**)(__int64*))(*v19 + 120))(v19);
    }
  }
  if ((v25[0] & 1) != 0) {
    NgxRoutine_430(v26, v25[0] & 0xFFFFFFFFFFFFFFFELL);
  }
  (*(void (**)(__int64*, _QWORD, _QWORD))(**v14 + 32))(*v14, 0, 0);
  v20 =
      (*(__int64 (**)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, __int64, _QWORD,
                      _QWORD, int, _QWORD))(**(_QWORD**)(a1 + 8) + 120LL))(
          *(_QWORD*)(a1 + 8), **(_QWORD**)(a1 + 8 * v8 + 320),
          *(unsigned int*)(*(_QWORD*)(a1 + 8 * v8 + 320) + 8LL),
          *(_QWORD*)(a1 + 328 + 8 * v8), 72, a1 + 16LL * a5 + 448,
          *((unsigned int*)*v14 + 5), *((unsigned int*)*v14 + 6), 1, 0);
  *(_DWORD*)(a1 + 128) = v20;
  if (v20 != 0) {
    NgxRoutine_b4b90(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/features/dlaa/dltss_network.cpp",
        433, "SetupKernel", "Error: NVAPI failed %d", v20);
  }
  dltss_network_67450_alt1(a1, a5);
  (*(void (**)(__int64*))(**v14 + 40))(*v14);
  v22 = **v14;
  v21 = (*v14)[1];
  v23 = *((_DWORD*)*v14 + 4);
  *(_DWORD*)(a1 + 344) = v21;
  *(_DWORD*)(a1 + 352) = v23;
  *(_DWORD*)(a1 + 348) = HIDWORD(v21);
  (*(void (**)(void*))(v22 + 8))((void*)*v14);
  return 0;
}

__int64 dltss_network_67450(__int64 a1, unsigned int a2)
{
  __int64 v2;
  int* v3;
  __int64 v5;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int* v10;
  int v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  struct {
    __int128 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
  } v22_;

  v2 = a1 + 4LL * a2;
  v3 = *(int**)(a1 + 16);
  v5 = *(_QWORD*)(a1 + 16LL * a2 + 440);
  if (*(_DWORD*)(v2 + 340) == 1) {
    v6 = 2;
  }
  else {
    v6 = 1;
  }
  NgxRoutine_29ca0((__int64)&v22_.v22);
  NgxRoutine_29cf0(&v22_.v22, 1, v3[24], v3[23], v3[25], v6);
  *(_DWORD*)(v5 + 152) = v3[26];
  *(_OWORD*)(v5 + 112) = v22_.v22;
  v7 = v22_.v25;
  *(_QWORD*)(v5 + 136) = v22_.v24;
  *(_QWORD*)(v5 + 144) = v7;
  *(_QWORD*)(v5 + 128) = v22_.v23;
  if (*(_DWORD*)(v2 + 336) == 1) {
    v8 = 2;
  }
  else {
    v8 = 1;
  }
  NgxRoutine_29ca0((__int64)&v22_.v22);
  NgxRoutine_29cf0(&v22_.v22, 1, *(_DWORD*)(a1 + 96), *(_DWORD*)(a1 + 92),
                   *(_DWORD*)(a1 + 100), v8);
  *(_DWORD*)(v5 + 200) = *(_DWORD*)(a1 + 104);
  *(_OWORD*)(v5 + 160) = v22_.v22;
  v9 = v22_.v25;
  *(_QWORD*)(v5 + 184) = v22_.v24;
  *(_QWORD*)(v5 + 192) = v9;
  *(_QWORD*)(v5 + 176) = v22_.v23;
  v10 = *(int**)(a1 + 48);
  v11 = *(_DWORD*)(v2 + 336);
  NgxRoutine_29ca0((__int64)&v22_.v22);
  result = NgxRoutine_29cf0(&v22_.v22, 1, v10[24], v10[23], v10[25], v11);
  *(_DWORD*)(v5 + 296) = v10[26];
  *(_OWORD*)(v5 + 256) = v22_.v22;
  v13 = v22_.v25;
  *(_QWORD*)(v5 + 280) = v22_.v24;
  *(_QWORD*)(v5 + 288) = v13;
  *(_QWORD*)(v5 + 272) = v22_.v23;
  v14 = *(_QWORD*)(a1 + 224);
  *(_QWORD*)(v5 + 400) = *(_QWORD*)(a1 + 216);
  *(_QWORD*)(v5 + 408) = v14;
  v15 = *(_QWORD*)(a1 + 232);
  v16 = *(_QWORD*)(a1 + 240);
  v17 = *(_QWORD*)(a1 + 248);
  *(_DWORD*)(v5 + 440) = *(_DWORD*)(a1 + 256);
  *(_QWORD*)(v5 + 424) = v16;
  *(_QWORD*)(v5 + 432) = v17;
  *(_QWORD*)(v5 + 416) = v15;
  v19 = *(_QWORD*)(a1 + 288);
  v18 = *(_QWORD*)(a1 + 296);
  v20 = *(_QWORD*)(a1 + 280);
  *(_DWORD*)(v5 + 392) = *(_DWORD*)(a1 + 304);
  *(_QWORD*)(v5 + 376) = v19;
  *(_QWORD*)(v5 + 384) = v18;
  *(_QWORD*)(v5 + 368) = v20;
  v21 = *(_QWORD*)(a1 + 272);
  *(_QWORD*)(v5 + 352) = *(_QWORD*)(a1 + 264);
  *(_QWORD*)(v5 + 360) = v21;
  return result;
}

__int64 dltss_network_675c0(__int64 a1, unsigned int a2)
{
  _QWORD* v3;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  int v24;
  unsigned int v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  int v31;
  unsigned int v32;
  int v33;
  unsigned int v34;
  int v35;
  unsigned int v36;
  int v37;
  unsigned int v38;
  int v39;
  unsigned int v40;
  int v41;
  unsigned int v42;
  int v43;
  unsigned int v44;
  int v45;
  unsigned int v46;
  int v47;
  unsigned int v48;
  int v49;
  unsigned int v50;
  int v51;
  unsigned int v52;
  int v53;
  unsigned int v54;
  int v55;
  unsigned int v56;
  int v57;
  unsigned int v58;
  int v59;
  unsigned int v60;
  int v61;
  unsigned int v62;
  int v63;
  unsigned int v64;
  int v65;
  unsigned int v66;
  int v67;
  unsigned int v68;
  int v69;
  unsigned int v70;
  int v71;
  unsigned int v72;
  int v73;
  unsigned int v74;
  int v75;
  unsigned int v76;
  int v77;
  unsigned int v78;
  int v79;
  unsigned int v80;
  int v81;
  unsigned int v82;
  int v83;
  unsigned int v84;
  int v85;
  unsigned int v86;
  int v87;
  unsigned int v88;
  int v89;
  unsigned int v90;
  int v91;
  unsigned int v92;
  int v93;
  unsigned int v94;
  int v95;
  unsigned int v96;
  int v97;
  unsigned int v98;
  int v99;
  unsigned int v100;
  int v101;
  unsigned int v102;
  int v103;
  unsigned int v104;
  int v105;
  unsigned int v106;
  int v107;
  unsigned int v108;
  int v109;
  unsigned int v110;
  int v111;
  unsigned int v112;
  int v113;
  unsigned int v114;
  int v115;
  unsigned int v116;
  int v117;
  unsigned int v118;
  int v119;
  unsigned int v120;
  int v121;
  unsigned int v122;
  int v123;
  unsigned int v124;
  int v125;
  unsigned int v126;
  int v127;
  unsigned int v128;
  int v129;
  unsigned int v130;
  int v131;
  unsigned int v132;
  int v133;
  unsigned int v134;
  int v135;
  unsigned int v136;
  int v137;
  unsigned int v138;
  int v139;
  unsigned int v140;
  int v141;
  unsigned int v142;
  int v143;
  unsigned int v144;
  int v145;
  unsigned int v146;
  int v147;
  unsigned int v148;
  int v149;
  unsigned int v150;
  int v151;
  unsigned int v152;
  int v153;
  unsigned int v154;
  int v155;
  unsigned int v156;
  int v157;
  int v158;
  __int64 v159;
  __int64 v161;
  int v162;
  __int64 v163;
  __int64 v164;

  v3 = (_QWORD*)(a1 + 8);
  v5 = *(_QWORD*)(a1 + 440 + 16LL * a2 + 8);
  v6 = NgxData_952220;
  if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, _QWORD))(
          **(_QWORD**)(a1 + 8) + 360LL))(
          *(_QWORD*)(a1 + 8), *NgxData_952220,
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 120LL) + 64LL), 0) != 0) {
    v7 = (*(unsigned int (**)(_QWORD, __int64, _QWORD, _QWORD))(
        **(_QWORD**)(a1 + 8) + 360LL))(
        *(_QWORD*)(a1 + 8), *v6,
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 120LL) + 64LL), 0);
    NgxRoutine_b4b90(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/features/dlaa/dltss_network.cpp",
        458, "Dispatch", "Error: NVAPI failed %d", v7);
  }
  else {
    if (v5 != 0) {
      v8 = a2;
    }
    else {
      v8 = 0;
    }
    v9 = &v3[2 * v8 + 54];
    if ((*(unsigned int (**)(_QWORD, __int64))(*(_QWORD*)*v3 + 240LL))(
            *v3, v9[1]) != 0) {
      v10 = (*(unsigned int (**)(_QWORD, __int64))(*(_QWORD*)*v3 + 240LL))(
          *v3, v9[1]);
      NgxRoutine_b4b90(
          "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
          "rel/source/features/dlaa/dltss_network.cpp",
          461, "Dispatch", "Error: NVAPI failed %d", v10);
    }
    else {
      v11 = *v9;
      if ((unsigned int)nvidia_dlss_a9980(
              *(_QWORD*)(a1 + 120), *(_QWORD*)(a1 + 8), 3, a1 + 360) != 0) {
        v12 = nvidia_dlss_a9980(*(_QWORD*)(a1 + 120), *(_QWORD*)(a1 + 8), 3,
                                a1 + 360);
        NgxRoutine_b4b90(
            "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
            "dlss/rel/source/features/dlaa/dltss_network.cpp",
            472, "Dispatch", "Error: NVAPI failed %d", v12);
      }
      if ((unsigned int)nvidia_dlss_a9980(
              *(_QWORD*)(*(_QWORD*)(a1 + 48) + 120LL), *(_QWORD*)(a1 + 8), 5,
              a1 + 360) != 0) {
        v13 = nvidia_dlss_a9980(*(_QWORD*)(*(_QWORD*)(a1 + 48) + 120LL),
                                *(_QWORD*)(a1 + 8), 5, a1 + 360);
        NgxRoutine_b4b90(
            "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
            "dlss/rel/source/features/dlaa/dltss_network.cpp",
            474, "Dispatch", "Error: NVAPI failed %d", v13);
      }
      if ((unsigned int)nvidia_dlss_a9a70(
              *(_QWORD*)(*(_QWORD*)(a1 + 16) + 120LL), *(_QWORD*)(a1 + 8), 0,
              a1 + 360) != 0) {
        v14 = nvidia_dlss_a9a70(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 120LL),
                                *(_QWORD*)(a1 + 8), 1, a1 + 360);
        NgxRoutine_b4b90(
            "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
            "dlss/rel/source/features/dlaa/dltss_network.cpp",
            476, "Dispatch", "Error: NVAPI failed %d", v14);
        v15 = 2;
      }
      else {
        v15 = 1;
      }
      v16 = (*(__int64 (**)(_QWORD, _QWORD, __int64*))(
          **(_QWORD**)(a1 + 8) + 208LL))(*(_QWORD*)(a1 + 8),
                                         *(_QWORD*)(a1 + 136), &v164);
      v17 = *(_QWORD*)(a1 + 8);
      if (v16 != 0) {
        v18 = (*(unsigned int (**)(__int64, _QWORD, __int64*))(
            *(_QWORD*)v17 + 208LL))(v17, *(_QWORD*)(a1 + 136), &v164);
        NgxRoutine_b4b90(
            "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
            "dlss/rel/source/features/dlaa/dltss_network.cpp",
            1315, "GetWeightsVirtualAddress", "Error: NVAPI failed %d", v18);
      }
      else {
        v19 = v15 + 1;
        if ((*(unsigned int (**)(__int64, _QWORD, __int64, __int64, _QWORD))(
                *(_QWORD*)v17 + 288LL))(v17, v15, v164, a1 + 360, 0) != 0) {
          v20 = (*(__int64 (**)(_QWORD, _QWORD, __int64, __int64, _QWORD))(
              *(_QWORD*)*v3 + 288LL))(*v3, v19, v164, a1 + 360, 0);
          NgxRoutine_b4b90(
              "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
              "dlss/rel/source/features/dlaa/dltss_network.cpp",
              479, "Dispatch", "Error: NVAPI failed %d", v20);
          v19 = v15 + 2;
        }
        v21 = v19 + 1;
        if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64))(
                *(_QWORD*)*v3 + 328LL))(*v3, v19, 0, a1 + 360) != 0) {
          v22 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64))(
              *(_QWORD*)*v3 + 328LL))(*v3, v21, 0, a1 + 360);
          NgxRoutine_b4b90(
              "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
              "dlss/rel/source/features/dlaa/dltss_network.cpp",
              480, "Dispatch", "Error: NVAPI failed %d", v22);
          v21 = v19 + 2;
        }
        v23 = v21 + 2;
        if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64))(
                *(_QWORD*)*v3 + 328LL))(*v3, v21 + 1, 0, a1 + 360) != 0) {
          v24 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64))(
              *(_QWORD*)*v3 + 328LL))(*v3, v23, 0, a1 + 360);
          NgxRoutine_b4b90(
              "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
              "dlss/rel/source/features/dlaa/dltss_network.cpp",
              483, "Dispatch", "Error: NVAPI failed %d", v24);
          v23 = v21 + 3;
        }
        v25 = v23 + 2;
        if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64))(
                *(_QWORD*)*v3 + 328LL))(*v3, v23 + 1, 0, a1 + 360) != 0) {
          v26 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64))(
              *(_QWORD*)*v3 + 328LL))(*v3, v25, 0, a1 + 360);
          NgxRoutine_b4b90(
              "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
              "dlss/rel/source/features/dlaa/dltss_network.cpp",
              486, "Dispatch", "Error: NVAPI failed %d", v26);
          v25 = v23 + 3;
        }
        v27 = (*(__int64 (**)(_QWORD, _QWORD, __int64*))(
            **(_QWORD**)(a1 + 8) + 208LL))(*(_QWORD*)(a1 + 8),
                                           *(_QWORD*)(a1 + 168), &v163);
        v28 = *(_QWORD*)(a1 + 8);
        if (v27 != 0) {
          v29 = (*(unsigned int (**)(__int64, _QWORD, __int64*))(
              *(_QWORD*)v28 + 208LL))(v28, *(_QWORD*)(a1 + 168), &v163);
          NgxRoutine_b4b90(
              "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
              "dlss/rel/source/features/dlaa/dltss_network.cpp",
              1321, "GetBiasesVirtualAddress", "Error: NVAPI failed %d", v29);
        }
        else {
          v30 = v25 + 1;
          if ((*(unsigned int (**)(__int64, _QWORD, __int64, __int64, _QWORD))(
                  *(_QWORD*)v28 + 288LL))(v28, v25, v163, a1 + 360, 0) != 0) {
            v31 = (*(__int64 (**)(_QWORD, _QWORD, __int64, __int64, _QWORD))(
                *(_QWORD*)*v3 + 288LL))(*v3, v30, v163, a1 + 360, 0);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                489, "Dispatch", "Error: NVAPI failed %d", v31);
            v30 = v25 + 2;
          }
          v32 = v30 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64))(
                  *(_QWORD*)*v3 + 328LL))(*v3, v30, 0, a1 + 360) != 0) {
            v33 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64))(
                *(_QWORD*)*v3 + 328LL))(*v3, v32, 0, a1 + 360);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                490, "Dispatch", "Error: NVAPI failed %d", v33);
            v32 = v30 + 2;
          }
          v34 = v32 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(*v3, v32, *(unsigned int*)(v11 + 632),
                                          a1 + 360, 72) != 0) {
            v35 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v34, *(unsigned int*)(v11 + 632),
                                        a1 + 360, 72);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                492, "Dispatch", "Error: NVAPI failed %d", v35);
            v34 = v32 + 2;
          }
          v36 = v34 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(*v3, v34, *(unsigned int*)(v11 + 636),
                                          a1 + 360, 76) != 0) {
            v37 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v36, *(unsigned int*)(v11 + 636),
                                        a1 + 360, 76);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                493, "Dispatch", "Error: NVAPI failed %d", v37);
            v36 = v34 + 2;
          }
          v38 = v36 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(*v3, v36, *(unsigned int*)(v11 + 640),
                                          a1 + 360, 80) != 0) {
            v39 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v38, *(unsigned int*)(v11 + 640),
                                        a1 + 360, 80);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                494, "Dispatch", "Error: NVAPI failed %d", v39);
            v38 = v36 + 2;
          }
          v40 = v38 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(*v3, v38, *(unsigned int*)(v11 + 644),
                                          a1 + 360, 84) != 0) {
            v41 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v40, *(unsigned int*)(v11 + 644),
                                        a1 + 360, 84);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                495, "Dispatch", "Error: NVAPI failed %d", v41);
            v40 = v38 + 2;
          }
          v42 = v40 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(*v3, v40, *(unsigned int*)(v11 + 648),
                                          a1 + 360, 88) != 0) {
            v43 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v42, *(unsigned int*)(v11 + 648),
                                        a1 + 360, 88);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                496, "Dispatch", "Error: NVAPI failed %d", v43);
            v42 = v40 + 2;
          }
          v44 = v42 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(*v3, v42, *(unsigned int*)(v11 + 652),
                                          a1 + 360, 92) != 0) {
            v45 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v44, *(unsigned int*)(v11 + 652),
                                        a1 + 360, 92);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                497, "Dispatch", "Error: NVAPI failed %d", v45);
            v44 = v42 + 2;
          }
          v46 = v44 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(*v3, v44, *(unsigned int*)(v11 + 656),
                                          a1 + 360, 96) != 0) {
            v47 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v46, *(unsigned int*)(v11 + 656),
                                        a1 + 360, 96);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                498, "Dispatch", "Error: NVAPI failed %d", v47);
            v46 = v44 + 2;
          }
          v48 = v46 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(*v3, v46, *(unsigned int*)(v11 + 660),
                                          a1 + 360, 100) != 0) {
            v49 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v48, *(unsigned int*)(v11 + 660),
                                        a1 + 360, 100);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                499, "Dispatch", "Error: NVAPI failed %d", v49);
            v48 = v46 + 2;
          }
          v50 = v48 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(*v3, v48, *(unsigned int*)(v11 + 664),
                                          a1 + 360, 104) != 0) {
            v51 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v50, *(unsigned int*)(v11 + 664),
                                        a1 + 360, 104);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                500, "Dispatch", "Error: NVAPI failed %d", v51);
            v50 = v48 + 2;
          }
          v52 = v50 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(*v3, v50, *(unsigned int*)(v11 + 668),
                                          a1 + 360, 108) != 0) {
            v53 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v52, *(unsigned int*)(v11 + 668),
                                        a1 + 360, 108);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                501, "Dispatch", "Error: NVAPI failed %d", v53);
            v52 = v50 + 2;
          }
          v54 = v52 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(*v3, v52, *(unsigned int*)(v11 + 672),
                                          a1 + 360, 112) != 0) {
            v55 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v54, *(unsigned int*)(v11 + 672),
                                        a1 + 360, 112);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                502, "Dispatch", "Error: NVAPI failed %d", v55);
            v54 = v52 + 2;
          }
          v56 = v54 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(*v3, v54, *(unsigned int*)(v11 + 676),
                                          a1 + 360, 116) != 0) {
            v57 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v56, *(unsigned int*)(v11 + 676),
                                        a1 + 360, 116);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                503, "Dispatch", "Error: NVAPI failed %d", v57);
            v56 = v54 + 2;
          }
          v58 = v56 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(*v3, v56, *(unsigned int*)(v11 + 680),
                                          a1 + 360, 120) != 0) {
            v59 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v58, *(unsigned int*)(v11 + 680),
                                        a1 + 360, 120);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                504, "Dispatch", "Error: NVAPI failed %d", v59);
            v58 = v56 + 2;
          }
          v60 = v58 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(*v3, v58, *(unsigned int*)(v11 + 684),
                                          a1 + 360, 124) != 0) {
            v61 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v60, *(unsigned int*)(v11 + 684),
                                        a1 + 360, 124);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                505, "Dispatch", "Error: NVAPI failed %d", v61);
            v60 = v58 + 2;
          }
          v62 = v60 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(*v3, v60, *(unsigned int*)(v11 + 688),
                                          a1 + 360, 128) != 0) {
            v63 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v62, *(unsigned int*)(v11 + 688),
                                        a1 + 360, 128);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                506, "Dispatch", "Error: NVAPI failed %d", v63);
            v62 = v60 + 2;
          }
          v64 = v62 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(*v3, v62, *(unsigned int*)(v11 + 692),
                                          a1 + 360, 132) != 0) {
            v65 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v64, *(unsigned int*)(v11 + 692),
                                        a1 + 360, 132);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                507, "Dispatch", "Error: NVAPI failed %d", v65);
            v64 = v62 + 2;
          }
          v66 = v64 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(*v3, v64, *(unsigned int*)(v11 + 696),
                                          a1 + 360, 136) != 0) {
            v67 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v66, *(unsigned int*)(v11 + 696),
                                        a1 + 360, 136);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                508, "Dispatch", "Error: NVAPI failed %d", v67);
            v66 = v64 + 2;
          }
          v68 = v66 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(*v3, v66, *(unsigned int*)(v11 + 700),
                                          a1 + 360, 140) != 0) {
            v69 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v68, *(unsigned int*)(v11 + 700),
                                        a1 + 360, 140);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                509, "Dispatch", "Error: NVAPI failed %d", v69);
            v68 = v66 + 2;
          }
          v70 = v68 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(*v3, v68, *(unsigned int*)(v11 + 704),
                                          a1 + 360, 144) != 0) {
            v71 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v70, *(unsigned int*)(v11 + 704),
                                        a1 + 360, 144);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                510, "Dispatch", "Error: NVAPI failed %d", v71);
            v70 = v68 + 2;
          }
          v72 = v70 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(*v3, v70, *(unsigned int*)(v11 + 708),
                                          a1 + 360, 148) != 0) {
            v73 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v72, *(unsigned int*)(v11 + 708),
                                        a1 + 360, 148);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                511, "Dispatch", "Error: NVAPI failed %d", v73);
            v72 = v70 + 2;
          }
          v74 = v72 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(*v3, v72, *(unsigned int*)(v11 + 712),
                                          a1 + 360, 152) != 0) {
            v75 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v74, *(unsigned int*)(v11 + 712),
                                        a1 + 360, 152);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                512, "Dispatch", "Error: NVAPI failed %d", v75);
            v74 = v72 + 2;
          }
          v76 = v74 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 288LL))(*v3, v74, *(_QWORD*)(v11 + 720),
                                          a1 + 360, 160) != 0) {
            v77 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 288LL))(*v3, v76, *(_QWORD*)(v11 + 720),
                                        a1 + 360, 160);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                513, "Dispatch", "Error: NVAPI failed %d", v77);
            v76 = v74 + 2;
          }
          v78 = v76 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 288LL))(*v3, v76, *(_QWORD*)(v11 + 728),
                                          a1 + 360, 168) != 0) {
            v79 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 288LL))(*v3, v78, *(_QWORD*)(v11 + 728),
                                        a1 + 360, 168);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                514, "Dispatch", "Error: NVAPI failed %d", v79);
            v78 = v76 + 2;
          }
          v80 = v78 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 288LL))(*v3, v78, *(_QWORD*)(v11 + 736),
                                          a1 + 360, 176) != 0) {
            v81 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 288LL))(*v3, v80, *(_QWORD*)(v11 + 736),
                                        a1 + 360, 176);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                515, "Dispatch", "Error: NVAPI failed %d", v81);
            v80 = v78 + 2;
          }
          v82 = v80 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 288LL))(*v3, v80, *(_QWORD*)(v11 + 744),
                                          a1 + 360, 184) != 0) {
            v83 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 288LL))(*v3, v82, *(_QWORD*)(v11 + 744),
                                        a1 + 360, 184);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                516, "Dispatch", "Error: NVAPI failed %d", v83);
            v82 = v80 + 2;
          }
          v84 = v82 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 288LL))(*v3, v82, *(_QWORD*)(v11 + 752),
                                          a1 + 360, 192) != 0) {
            v85 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 288LL))(*v3, v84, *(_QWORD*)(v11 + 752),
                                        a1 + 360, 192);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                517, "Dispatch", "Error: NVAPI failed %d", v85);
            v84 = v82 + 2;
          }
          v86 = v84 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 288LL))(*v3, v84, *(_QWORD*)(v11 + 760),
                                          a1 + 360, 200) != 0) {
            v87 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 288LL))(*v3, v86, *(_QWORD*)(v11 + 760),
                                        a1 + 360, 200);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                518, "Dispatch", "Error: NVAPI failed %d", v87);
            v86 = v84 + 2;
          }
          v88 = v86 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 288LL))(*v3, v86, *(_QWORD*)(v11 + 768),
                                          a1 + 360, 208) != 0) {
            v89 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 288LL))(*v3, v88, *(_QWORD*)(v11 + 768),
                                        a1 + 360, 208);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                519, "Dispatch", "Error: NVAPI failed %d", v89);
            v88 = v86 + 2;
          }
          v90 = v88 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 288LL))(*v3, v88, *(_QWORD*)(v11 + 776),
                                          a1 + 360, 216) != 0) {
            v91 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 288LL))(*v3, v90, *(_QWORD*)(v11 + 776),
                                        a1 + 360, 216);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                520, "Dispatch", "Error: NVAPI failed %d", v91);
            v90 = v88 + 2;
          }
          v92 = v90 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 288LL))(*v3, v90, *(_QWORD*)(v11 + 784),
                                          a1 + 360, 224) != 0) {
            v93 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 288LL))(*v3, v92, *(_QWORD*)(v11 + 784),
                                        a1 + 360, 224);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                521, "Dispatch", "Error: NVAPI failed %d", v93);
            v92 = v90 + 2;
          }
          v94 = v92 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 288LL))(*v3, v92, *(_QWORD*)(v11 + 792),
                                          a1 + 360, 232) != 0) {
            v95 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 288LL))(*v3, v94, *(_QWORD*)(v11 + 792),
                                        a1 + 360, 232);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                522, "Dispatch", "Error: NVAPI failed %d", v95);
            v94 = v92 + 2;
          }
          v96 = v94 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(*v3, v94, *(unsigned int*)(v11 + 800),
                                          a1 + 360, 240) != 0) {
            v97 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v96, *(unsigned int*)(v11 + 800),
                                        a1 + 360, 240);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                523, "Dispatch", "Error: NVAPI failed %d", v97);
            v96 = v94 + 2;
          }
          v98 = v96 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(*v3, v96, *(unsigned int*)(v11 + 804),
                                          a1 + 360, 244) != 0) {
            v99 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v98, *(unsigned int*)(v11 + 804),
                                        a1 + 360, 244);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                524, "Dispatch", "Error: NVAPI failed %d", v99);
            v98 = v96 + 2;
          }
          v100 = v98 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(*v3, v98, *(unsigned int*)(v11 + 808),
                                          a1 + 360, 248) != 0) {
            v101 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v100, *(unsigned int*)(v11 + 808),
                                        a1 + 360, 248);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                525, "Dispatch", "Error: NVAPI failed %d", v101);
            v100 = v98 + 2;
          }
          v102 = v100 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(
                  *v3, v100, *(unsigned int*)(v11 + 812), a1 + 360, 252) != 0) {
            v103 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v102, *(unsigned int*)(v11 + 812),
                                        a1 + 360, 252);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                526, "Dispatch", "Error: NVAPI failed %d", v103);
            v102 = v100 + 2;
          }
          v104 = v102 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 280LL))(
                  *v3, v102, *(unsigned int*)(v11 + 816), a1 + 360, 256) != 0) {
            v105 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 280LL))(*v3, v104, *(unsigned int*)(v11 + 816),
                                        a1 + 360, 256);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                527, "Dispatch", "Error: NVAPI failed %d", v105);
            v104 = v102 + 2;
          }
          v106 = v104 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, __int64, __int64, _QWORD))(
                  *(_QWORD*)*v3 + 288LL))(*v3, v104, v164, a1 + 360, 0) != 0) {
            v107 = (*(__int64 (**)(_QWORD, _QWORD, __int64, __int64, _QWORD))(
                *(_QWORD*)*v3 + 288LL))(*v3, v106, v164, a1 + 360, 0);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                528, "Dispatch", "Error: NVAPI failed %d", v107);
            v106 = v104 + 2;
          }
          v108 = v106 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(
                  *v3, v106, *(unsigned int*)(v11 + 832), a1 + 360, 272) != 0) {
            v109 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v108, *(unsigned int*)(v11 + 832),
                                        a1 + 360, 272);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                529, "Dispatch", "Error: NVAPI failed %d", v109);
            v108 = v106 + 2;
          }
          v110 = v108 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(
                  *v3, v108, *(unsigned int*)(v11 + 836), a1 + 360, 276) != 0) {
            v111 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v110, *(unsigned int*)(v11 + 836),
                                        a1 + 360, 276);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                530, "Dispatch", "Error: NVAPI failed %d", v111);
            v110 = v108 + 2;
          }
          v112 = v110 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(
                  *v3, v110, *(unsigned int*)(v11 + 840), a1 + 360, 280) != 0) {
            v113 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v112, *(unsigned int*)(v11 + 840),
                                        a1 + 360, 280);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                531, "Dispatch", "Error: NVAPI failed %d", v113);
            v112 = v110 + 2;
          }
          v114 = v112 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(
                  *v3, v112, *(unsigned int*)(v11 + 844), a1 + 360, 284) != 0) {
            v115 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v114, *(unsigned int*)(v11 + 844),
                                        a1 + 360, 284);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                532, "Dispatch", "Error: NVAPI failed %d", v115);
            v114 = v112 + 2;
          }
          v116 = v114 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(
                  *v3, v114, *(unsigned int*)(v11 + 848), a1 + 360, 288) != 0) {
            v117 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v116, *(unsigned int*)(v11 + 848),
                                        a1 + 360, 288);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                533, "Dispatch", "Error: NVAPI failed %d", v117);
            v116 = v114 + 2;
          }
          v118 = v116 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(
                  *v3, v116, *(unsigned int*)(v11 + 852), a1 + 360, 292) != 0) {
            v119 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v118, *(unsigned int*)(v11 + 852),
                                        a1 + 360, 292);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                534, "Dispatch", "Error: NVAPI failed %d", v119);
            v118 = v116 + 2;
          }
          v120 = v118 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(
                  *v3, v118, *(unsigned int*)(v11 + 856), a1 + 360, 296) != 0) {
            v121 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v120, *(unsigned int*)(v11 + 856),
                                        a1 + 360, 296);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                535, "Dispatch", "Error: NVAPI failed %d", v121);
            v120 = v118 + 2;
          }
          v122 = v120 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(
                  *v3, v120, *(unsigned int*)(v11 + 860), a1 + 360, 300) != 0) {
            v123 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v122, *(unsigned int*)(v11 + 860),
                                        a1 + 360, 300);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                536, "Dispatch", "Error: NVAPI failed %d", v123);
            v122 = v120 + 2;
          }
          v124 = v122 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(
                  *v3, v122, *(unsigned int*)(v11 + 864), a1 + 360, 304) != 0) {
            v125 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v124, *(unsigned int*)(v11 + 864),
                                        a1 + 360, 304);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                537, "Dispatch", "Error: NVAPI failed %d", v125);
            v124 = v122 + 2;
          }
          v126 = v124 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(
                  *v3, v124, *(unsigned int*)(v11 + 868), a1 + 360, 308) != 0) {
            v127 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v126, *(unsigned int*)(v11 + 868),
                                        a1 + 360, 308);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                538, "Dispatch", "Error: NVAPI failed %d", v127);
            v126 = v124 + 2;
          }
          v128 = v126 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 280LL))(
                  *v3, v126, *(unsigned int*)(v11 + 872), a1 + 360, 312) != 0) {
            v129 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 280LL))(*v3, v128, *(unsigned int*)(v11 + 872),
                                        a1 + 360, 312);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                539, "Dispatch", "Error: NVAPI failed %d", v129);
            v128 = v126 + 2;
          }
          v130 = v128 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 280LL))(
                  *v3, v128, *(unsigned int*)(v11 + 876), a1 + 360, 316) != 0) {
            v131 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 280LL))(*v3, v130, *(unsigned int*)(v11 + 876),
                                        a1 + 360, 316);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                540, "Dispatch", "Error: NVAPI failed %d", v131);
            v130 = v128 + 2;
          }
          v132 = v130 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 280LL))(
                  *v3, v130, *(unsigned int*)(v11 + 880), a1 + 360, 320) != 0) {
            v133 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 280LL))(*v3, v132, *(unsigned int*)(v11 + 880),
                                        a1 + 360, 320);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                541, "Dispatch", "Error: NVAPI failed %d", v133);
            v132 = v130 + 2;
          }
          v134 = v132 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 280LL))(
                  *v3, v132, *(unsigned int*)(v11 + 884), a1 + 360, 324) != 0) {
            v135 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 280LL))(*v3, v134, *(unsigned int*)(v11 + 884),
                                        a1 + 360, 324);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                542, "Dispatch", "Error: NVAPI failed %d", v135);
            v134 = v132 + 2;
          }
          v136 = v134 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(
                  *v3, v134, *(unsigned int*)(v11 + 888), a1 + 360, 328) != 0) {
            v137 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v136, *(unsigned int*)(v11 + 888),
                                        a1 + 360, 328);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                543, "Dispatch", "Error: NVAPI failed %d", v137);
            v136 = v134 + 2;
          }
          v138 = v136 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(
                  *v3, v136, *(unsigned int*)(v11 + 892), a1 + 360, 332) != 0) {
            v139 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v138, *(unsigned int*)(v11 + 892),
                                        a1 + 360, 332);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                544, "Dispatch", "Error: NVAPI failed %d", v139);
            v138 = v136 + 2;
          }
          v140 = v138 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(
                  *v3, v138, *(unsigned int*)(v11 + 896), a1 + 360, 336) != 0) {
            v141 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v140, *(unsigned int*)(v11 + 896),
                                        a1 + 360, 336);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                545, "Dispatch", "Error: NVAPI failed %d", v141);
            v140 = v138 + 2;
          }
          v142 = v140 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(
                  *v3, v140, *(unsigned int*)(v11 + 900), a1 + 360, 340) != 0) {
            v143 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v142, *(unsigned int*)(v11 + 900),
                                        a1 + 360, 340);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                546, "Dispatch", "Error: NVAPI failed %d", v143);
            v142 = v140 + 2;
          }
          v144 = v142 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(
                  *v3, v142, *(unsigned int*)(v11 + 904), a1 + 360, 344) != 0) {
            v145 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v144, *(unsigned int*)(v11 + 904),
                                        a1 + 360, 344);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                547, "Dispatch", "Error: NVAPI failed %d", v145);
            v144 = v142 + 2;
          }
          v146 = v144 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(
                  *v3, v144, *(unsigned int*)(v11 + 908), a1 + 360, 348) != 0) {
            v147 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v146, *(unsigned int*)(v11 + 908),
                                        a1 + 360, 348);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                548, "Dispatch", "Error: NVAPI failed %d", v147);
            v146 = v144 + 2;
          }
          v148 = v146 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(
                  *v3, v146, *(unsigned int*)(v11 + 912), a1 + 360, 352) != 0) {
            v149 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v148, *(unsigned int*)(v11 + 912),
                                        a1 + 360, 352);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                549, "Dispatch", "Error: NVAPI failed %d", v149);
            v148 = v146 + 2;
          }
          v150 = v148 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 272LL))(
                  *v3, v148, *(unsigned int*)(v11 + 916), a1 + 360, 356) != 0) {
            v151 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 272LL))(*v3, v150, *(unsigned int*)(v11 + 916),
                                        a1 + 360, 356);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                550, "Dispatch", "Error: NVAPI failed %d", v151);
            v150 = v148 + 2;
          }
          v152 = v150 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 288LL))(*v3, v150, *(_QWORD*)(v11 + 920),
                                          a1 + 360, 360) != 0) {
            v153 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 288LL))(*v3, v152, *(_QWORD*)(v11 + 920),
                                        a1 + 360, 360);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                553, "Dispatch", "Error: NVAPI failed %d", v153);
            v152 = v150 + 2;
          }
          v154 = v152 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 288LL))(*v3, v152, *(_QWORD*)(v11 + 928),
                                          a1 + 360, 368) != 0) {
            v155 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 288LL))(*v3, v154, *(_QWORD*)(v11 + 928),
                                        a1 + 360, 368);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                554, "Dispatch", "Error: NVAPI failed %d", v155);
            v154 = v152 + 2;
          }
          v156 = v154 + 1;
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 288LL))(*v3, v154, *(_QWORD*)(v11 + 936),
                                          a1 + 360, 376) != 0) {
            v157 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 288LL))(*v3, v156, *(_QWORD*)(v11 + 936),
                                        a1 + 360, 376);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                555, "Dispatch", "Error: NVAPI failed %d", v157);
            v156 = v154 + 2;
          }
          if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                  *(_QWORD*)*v3 + 288LL))(*v3, v156, *(_QWORD*)(v11 + 944),
                                          a1 + 360, 384) != 0) {
            v158 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
                *(_QWORD*)*v3 + 288LL))(*v3, v156 + 1, *(_QWORD*)(v11 + 944),
                                        a1 + 360, 384);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                556, "Dispatch", "Error: NVAPI failed %d", v158);
          }
          if ((*(unsigned int (**)(_QWORD, __int64, __int64, _QWORD, _QWORD,
                                   _QWORD))(**(_QWORD**)(a1 + 8) + 344LL))(
                  *(_QWORD*)(a1 + 8), a1 + 360, *v6, *(unsigned int*)(a1 + 344),
                  *(unsigned int*)(a1 + 348),
                  *(unsigned int*)(a1 + 352)) == 0) {
            v161 = *(_QWORD*)(a1 + 48);
            v162 = *(_DWORD*)(a1 + 4 * v8 + 336);
            *(_DWORD*)(a1 + 112) = v162;
            *(_DWORD*)(v161 + 112) = v162;
            return 1;
          }
          v159 = (*(unsigned int (**)(_QWORD, __int64, __int64, _QWORD, _QWORD,
                                      _QWORD))(**(_QWORD**)(a1 + 8) + 344LL))(
              *(_QWORD*)(a1 + 8), a1 + 360, *v6, *(unsigned int*)(a1 + 344),
              *(unsigned int*)(a1 + 348), *(unsigned int*)(a1 + 352));
          NgxRoutine_b4b90(
              "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
              "dlss/rel/source/features/dlaa/dltss_network.cpp",
              559, "Dispatch", "Error: NVAPI failed %d", v159);
        }
      }
    }
  }
  return 0;
}

__int64 dltss_network_69850(__int64 a1, __int64 a2, __int64* a3, __int64* a4,
                            unsigned int a5, unsigned int a6, int a7,
                            _QWORD* a8, unsigned int a9, __int64 a10,
                            __int64 a11, int a12)
{
  __int64 v12;
  unsigned __int64 v21;
  unsigned __int64 v22;
  char* v23;
  int v24;
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
  int v35;
  __int64 result;
  unsigned int v37;
  int v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD v47[2];
  __int64 v48;

  v12 = a3[3];
  v21 = strlen_plt(v12);
  if (v21 >= 0xFFFFFFFFFFFFFFF7LL) {
    NgxRoutine_27cb0();
  }
  v22 = v21;
  v44 = a2;
  if (v21 >= 0x17) {
    v43 = a5;
    v37 = a6;
    v38 = a7;
    v39 = a8;
    if ((v21 | 7) == 0x17) {
      v40 = 26;
    }
    else {
      v40 = (v21 | 7) + 1;
    }
    v41 = NgxRoutine_420(v40);
    v42 = v40 | 1;
    a8 = v39;
    a7 = v38;
    a6 = v37;
    a5 = v43;
    v23 = (char*)v41;
    v47[1] = v22;
    v48 = v41;
    v47[0] = v42;
  LABEL_23:
    memmove_plt(v23, v12, v22);
    v23[v22] = 0;
    v24 = a12;
    v25 = a4[1];
    v45 = *a4;
    v46 = v25;
    if (v25 == 0) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  LOBYTE(v47[0]) = 2 * v21;
  v23 = (char*)v47 + 1;
  if (v21 != 0) {
    goto LABEL_23;
  }
  BYTE1(v47[0]) = 0;
  v24 = a12;
  v25 = a4[1];
  v45 = *a4;
  v46 = v25;
  if (v25 != 0) {
  LABEL_5:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                              memory_order_relaxed);
  }
LABEL_6:
  NgxRoutine_70310(a1, v44, v47, &v45, a5, a6, a9, a10, 0, v24);
  v26 = v46;
  if (v46 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
    if ((v47[0] & 1) == 0) {
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
  NgxRoutine_baf10(v26);
  if ((v47[0] & 1) != 0) {
  LABEL_9:
    NgxRoutine_430(v48, v47[0] & 0xFFFFFFFFFFFFFFFELL);
  }
LABEL_10:
  *(_QWORD*)a1 = NgxData_94ce48;
  v27 = *a3;
  v28 = a3[1];
  v29 = a3[2];
  v30 = a3[3];
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_DWORD*)(a1 + 376) = a7;
  *(_QWORD*)(a1 + 320) = v27;
  *(_QWORD*)(a1 + 328) = v28;
  *(_QWORD*)(a1 + 336) = v29;
  *(_QWORD*)(a1 + 344) = v30;
  *(_QWORD*)(a1 + 380) = 0x100000001LL;
  *(_DWORD*)(a1 + 388) = 1;
  v31 = *(_QWORD*)(a1 + 16);
  LODWORD(v28) = *(_DWORD*)(v31 + 92);
  LODWORD(v31) = *(_DWORD*)(v31 + 96);
  *(_DWORD*)(a1 + 92) = v28;
  *(_DWORD*)(a1 + 96) = v31;
  v32 = *a8;
  v33 = a8[1];
  if (v33 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 8), 1u,
                              memory_order_relaxed);
  }
  v34 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 48) = v32;
  *(_QWORD*)(a1 + 56) = v33;
  if (v34 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
      NgxRoutine_baf10(v34);
    }
    v32 = *(_QWORD*)(a1 + 48);
  }
  if (v32 != 0) {
    v35 = 2 * *(_DWORD*)(a1 + 96);
    *(_DWORD*)(a1 + 92) *= 2;
    *(_DWORD*)(a1 + 96) = v35;
  }
  nvidia_dlss_a9960_alt1(
      *(_QWORD*)(a1 + 120),
      *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 120LL) + 48LL),
      *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 120LL) + 52LL));
  nvidia_dlss_a9970(*(_QWORD*)(a1 + 120),
                    *(int*)(a1 + 96) * (__int64)*(int*)(a1 + 100) *
                        *(int*)(a1 + 92) * *(int*)(a1 + 108));
  result = dltss_network_69b00_alt1(a1);
  *(_DWORD*)(a1 + 128) = 0;
  return result;
}

__int64 dltss_network_69b00(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  int v20;
  int v21;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  char* v29;
  __int64 v30;
  __int64 v31;

  v2 = *(_QWORD*)(a1 + 8);
  v31 = 0;
  if ((*(unsigned int (**)(__int64, __int64*))(*(_QWORD*)v2 + 64LL))(
          v2, &v31) != 0) {
    v3 = (*(__int64 (**)(_QWORD, __int64*))(**(_QWORD**)(a1 + 8) + 64LL))(
        *(_QWORD*)(a1 + 8), &v31);
    NgxRoutine_b4b90(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/features/dlaa/dltss_network.cpp",
        759, "SetupKernel", "Error: NVAPI failed %d", v3);
  }
  if (*(_QWORD*)(a1 + 48) == 0) {
    v9 = *(_QWORD*)(a1 + 336);
    v10 = v31;
    v11 = strlen_plt(v9);
    if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_35:
      NgxRoutine_27cb0();
    }
    v12 = v11;
    if (v11 >= 0x17) {
      if ((v11 | 7) == 0x17) {
        v23 = 26;
      }
      else {
        v23 = (v11 | 7) + 1;
      }
      v13 = (char*)NgxRoutine_420(v23);
      v28 = v12;
      v29 = v13;
      v27 = v23 | 1;
    }
    else {
      LOBYTE(v27) = 2 * v11;
      v13 = (char*)&v27 + 1;
      if (v11 == 0) {
        goto LABEL_30;
      }
    }
    memmove_plt(v13, v9, v12);
  LABEL_30:
    v13[v12] = 0;
    nvidia_dlss_rel_source_a3ab0((void*)&v30, v10, &v27);
    v24 = v30;
    v25 = *(_QWORD*)(a1 + 360);
    v30 = 0;
    *(_QWORD*)(a1 + 360) = v24;
    if (v25 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v25 + 120LL))(v25);
      v26 = v30;
      v30 = 0;
      if (v26 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v26 + 120LL))(v26);
      }
    }
    v18 = (__int64*)(a1 + 360);
    if ((v27 & 1) != 0) {
      goto LABEL_21;
    }
    goto LABEL_22;
  }
  v4 = *(_QWORD*)(a1 + 336);
  v5 = v31;
  v6 = strlen_plt(v4);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_35;
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (v6 | 7) + 1;
    }
    v8 = (char*)NgxRoutine_420(v14);
    v28 = v7;
    v29 = v8;
    v27 = v14 | 1;
  }
  else {
    LOBYTE(v27) = 2 * v6;
    v8 = (char*)&v27 + 1;
    if (v6 == 0) {
      goto LABEL_17;
    }
  }
  memmove_plt(v8, v4, v7);
LABEL_17:
  v8[v7] = 0;
  nvidia_dlss_rel_source_a3cd0((void*)&v30, v5, &v27);
  v15 = v30;
  v16 = *(_QWORD*)(a1 + 352);
  v30 = 0;
  *(_QWORD*)(a1 + 352) = v15;
  if (v16 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 120LL))(v16);
    v17 = v30;
    v30 = 0;
    if (v17 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v17 + 120LL))(v17);
    }
  }
  v18 = (__int64*)(a1 + 352);
  if ((v27 & 1) != 0) {
  LABEL_21:
    NgxRoutine_430(v29, v27 & 0xFFFFFFFFFFFFFFFELL);
  }
LABEL_22:
  v19 = *v18;
  (*(void (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v19 + 32LL))(v19, 0, 0);
  v20 =
      (*(__int64 (**)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, __int64, _QWORD,
                      _QWORD, int, _QWORD))(**(_QWORD**)(a1 + 8) + 120LL))(
          *(_QWORD*)(a1 + 8), **(_QWORD**)(a1 + 328),
          *(unsigned int*)(*(_QWORD*)(a1 + 328) + 8LL), *(_QWORD*)(a1 + 336), 1,
          a1 + 368, *(unsigned int*)(v19 + 20), *(unsigned int*)(v19 + 24), 1,
          0);
  *(_DWORD*)(a1 + 128) = v20;
  if (v20 != 0) {
    NgxRoutine_b4b90(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/features/dlaa/dltss_network.cpp",
        783, "SetupKernel", "Error: NVAPI failed %d", v20);
  }
  dltss_network_69e00_alt1(a1);
  (*(void (**)(__int64))(*(_QWORD*)v19 + 40LL))(v19);
  v21 = *(_DWORD*)(v19 + 16);
  *(_QWORD*)(a1 + 380) = *(_QWORD*)(v19 + 8);
  *(_DWORD*)(a1 + 388) = v21;
  (*(void (**)(__int64))(*(_QWORD*)v19 + 8LL))(v19);
  return 0;
}

__int64 dltss_network_69e00(__int64 a1)
{
  __int64 v1;
  int* v3;
  int v4;
  __int64 v5;
  int v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int* v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int* v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  struct {
    __int128 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
  } v29_;

  v1 = *(_QWORD*)(a1 + 360);
  if (v1 != 0) {
    v3 = *(int**)(a1 + 16);
    if (*(_DWORD*)(a1 + 324) == 1) {
      v4 = 2;
    }
    else {
      v4 = 1;
    }
    NgxRoutine_29ca0((__int64)&v29_.v29);
    NgxRoutine_29cf0(&v29_.v29, 1, v3[24], v3[23], v3[25], v4);
    *(_DWORD*)(v1 + 152) = v3[26];
    *(_OWORD*)(v1 + 112) = v29_.v29;
    v5 = v29_.v32;
    *(_QWORD*)(v1 + 136) = v29_.v31;
    *(_QWORD*)(v1 + 144) = v5;
    *(_QWORD*)(v1 + 128) = v29_.v30;
    if (*(_DWORD*)(a1 + 320) == 1) {
      v6 = 2;
    }
    else {
      v6 = 1;
    }
    NgxRoutine_29ca0((__int64)&v29_.v29);
    result = NgxRoutine_29cf0(&v29_.v29, 1, *(_DWORD*)(a1 + 96),
                              *(_DWORD*)(a1 + 92), *(_DWORD*)(a1 + 100), v6);
    *(_DWORD*)(v1 + 200) = *(_DWORD*)(a1 + 104);
    *(_OWORD*)(v1 + 160) = v29_.v29;
    v8 = v29_.v32;
    *(_QWORD*)(v1 + 184) = v29_.v31;
    *(_QWORD*)(v1 + 192) = v8;
    *(_QWORD*)(v1 + 176) = v29_.v30;
    v9 = *(_QWORD*)(a1 + 224);
    *(_QWORD*)(v1 + 208) = *(_QWORD*)(a1 + 216);
    *(_QWORD*)(v1 + 216) = v9;
    v10 = *(_QWORD*)(a1 + 232);
    v11 = *(_QWORD*)(a1 + 240);
    v12 = *(_QWORD*)(a1 + 248);
    *(_DWORD*)(v1 + 248) = *(_DWORD*)(a1 + 256);
    *(_QWORD*)(v1 + 232) = v11;
    *(_QWORD*)(v1 + 240) = v12;
    *(_QWORD*)(v1 + 224) = v10;
  }
  else {
    v1 = *(_QWORD*)(a1 + 352);
    v13 = *(int**)(a1 + 16);
    if (*(_DWORD*)(a1 + 324) == 1) {
      v14 = 2;
    }
    else {
      v14 = 1;
    }
    NgxRoutine_29ca0((__int64)&v29_.v29);
    NgxRoutine_29cf0(&v29_.v29, 1, v13[24], v13[23], v13[25], v14);
    *(_DWORD*)(v1 + 152) = v13[26];
    *(_OWORD*)(v1 + 112) = v29_.v29;
    v15 = v29_.v32;
    *(_QWORD*)(v1 + 136) = v29_.v31;
    *(_QWORD*)(v1 + 144) = v15;
    *(_QWORD*)(v1 + 128) = v29_.v30;
    if (*(_DWORD*)(a1 + 320) == 1) {
      v16 = 2;
    }
    else {
      v16 = 1;
    }
    NgxRoutine_29ca0((__int64)&v29_.v29);
    NgxRoutine_29cf0(&v29_.v29, 1, *(_DWORD*)(a1 + 96), *(_DWORD*)(a1 + 92),
                     *(_DWORD*)(a1 + 100), v16);
    *(_DWORD*)(v1 + 248) = *(_DWORD*)(a1 + 104);
    *(_OWORD*)(v1 + 208) = v29_.v29;
    v17 = v29_.v32;
    *(_QWORD*)(v1 + 232) = v29_.v31;
    *(_QWORD*)(v1 + 240) = v17;
    *(_QWORD*)(v1 + 224) = v29_.v30;
    v18 = *(int**)(a1 + 48);
    if (*(_DWORD*)(a1 + 324) == 1) {
      v19 = 2;
    }
    else {
      v19 = 1;
    }
    NgxRoutine_29ca0((__int64)&v29_.v29);
    result = NgxRoutine_29cf0(&v29_.v29, 1, v18[24], v18[23], v18[25], v19);
    *(_DWORD*)(v1 + 200) = v18[26];
    *(_OWORD*)(v1 + 160) = v29_.v29;
    v20 = v29_.v32;
    *(_QWORD*)(v1 + 184) = v29_.v31;
    *(_QWORD*)(v1 + 192) = v20;
    *(_QWORD*)(v1 + 176) = v29_.v30;
    v21 = *(_QWORD*)(a1 + 224);
    *(_QWORD*)(v1 + 304) = *(_QWORD*)(a1 + 216);
    *(_QWORD*)(v1 + 312) = v21;
    v22 = *(_QWORD*)(a1 + 232);
    v23 = *(_QWORD*)(a1 + 240);
    v24 = *(_QWORD*)(a1 + 248);
    *(_DWORD*)(v1 + 344) = *(_DWORD*)(a1 + 256);
    *(_QWORD*)(v1 + 328) = v23;
    *(_QWORD*)(v1 + 336) = v24;
    *(_QWORD*)(v1 + 320) = v22;
  }
  v25 = *(_QWORD*)(a1 + 272);
  *(_QWORD*)(v1 + 256) = *(_QWORD*)(a1 + 264);
  *(_QWORD*)(v1 + 264) = v25;
  v26 = *(_QWORD*)(a1 + 280);
  v27 = *(_QWORD*)(a1 + 288);
  v28 = *(_QWORD*)(a1 + 296);
  *(_DWORD*)(v1 + 296) = *(_DWORD*)(a1 + 304);
  *(_QWORD*)(v1 + 280) = v27;
  *(_QWORD*)(v1 + 288) = v28;
  *(_QWORD*)(v1 + 272) = v26;
  return result;
}

__int64 dltss_network_6a520(__int64 a1)
{
  __int64* v2;
  int v3;
  int v5;

  v2 = NgxData_952220;
  if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, _QWORD))(
          **(_QWORD**)(a1 + 8) + 360LL))(
          *(_QWORD*)(a1 + 8), *NgxData_952220,
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 120LL) + 64LL), 0) != 0) {
    v3 = (*(__int64 (**)(_QWORD, __int64, _QWORD, _QWORD))(
        **(_QWORD**)(a1 + 8) + 360LL))(
        *(_QWORD*)(a1 + 8), *v2,
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 120LL) + 64LL), 0);
    NgxRoutine_b4b90(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/features/dlaa/dltss_network.cpp",
        838, "Dispatch", "Error: NVAPI failed %d", v3);
    return 0;
  }
  else if ((*(unsigned int (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 240LL))(
               *(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 368)) != 0) {
    v5 = (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 240LL))(
        *(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 368));
    NgxRoutine_b4b90(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/features/dlaa/dltss_network.cpp",
        841, "Dispatch", "Error: NVAPI failed %d", v5);
    return 0;
  }
  else if (*(_QWORD*)(a1 + 360) != 0) {
    return NgxRoutine_6a040(a1);
  }
  else {
    return NgxRoutine_6a280(a1);
  }
}

__int64 dltss_network_6a650(__int64 a1, __int64 a2, _QWORD* a3, __int64* a4,
                            unsigned int a5, unsigned int a6, int a7,
                            _QWORD* a8, __int64* a9, unsigned int a10,
                            __int64 a11, char a12, __int64 a13, int a14,
                            int a15, int a16)
{
  __int64 v16;
  unsigned __int64 v25;
  unsigned __int64 v26;
  char* v27;
  int v28;
  char v29;
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
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  int v49;
  __int64 result;
  unsigned int v51;
  int v52;
  _QWORD* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  _QWORD v61[2];
  __int64 v62;

  v16 = a3[1];
  v25 = strlen_plt(v16);
  if (v25 >= 0xFFFFFFFFFFFFFFF7LL) {
    NgxRoutine_27cb0();
  }
  v26 = v25;
  v58 = a2;
  if (v25 >= 0x17) {
    v57 = a5;
    v51 = a6;
    v52 = a7;
    v53 = a8;
    if ((v25 | 7) == 0x17) {
      v54 = 26;
    }
    else {
      v54 = (v25 | 7) + 1;
    }
    v55 = NgxRoutine_420(v54);
    v56 = v54 | 1;
    a8 = v53;
    a7 = v52;
    a6 = v51;
    a5 = v57;
    v27 = (char*)v55;
    v61[1] = v26;
    v62 = v55;
    v61[0] = v56;
  LABEL_25:
    memmove_plt(v27, v16, v26);
    v27[v26] = 0;
    v28 = a14;
    v29 = a12;
    v30 = a4[1];
    v59 = *a4;
    v60 = v30;
    if (v30 == 0) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  LOBYTE(v61[0]) = 2 * v25;
  v27 = (char*)v61 + 1;
  if (v25 != 0) {
    goto LABEL_25;
  }
  BYTE1(v61[0]) = 0;
  v28 = a14;
  v29 = a12;
  v30 = a4[1];
  v59 = *a4;
  v60 = v30;
  if (v30 != 0) {
  LABEL_5:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 8), 1u,
                              memory_order_relaxed);
  }
LABEL_6:
  NgxRoutine_70310(a1, v58, v61, &v59, a5, a6, a10, a11, v29 & 1, v28);
  v31 = v60;
  if (v60 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v60 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
    if ((v61[0] & 1) == 0) {
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
  NgxRoutine_baf10(v31);
  if ((v61[0] & 1) != 0) {
  LABEL_9:
    NgxRoutine_430(v62, v61[0] & 0xFFFFFFFFFFFFFFFELL);
  }
LABEL_10:
  *(_QWORD*)a1 = NgxData_94ce88;
  *(_QWORD*)(a1 + 320) = *a3;
  v32 = a3[1];
  v33 = a3[2];
  v34 = a3[4];
  *(_QWORD*)(a1 + 344) = a3[3];
  *(_QWORD*)(a1 + 352) = v34;
  *(_QWORD*)(a1 + 328) = v32;
  *(_QWORD*)(a1 + 336) = v33;
  v35 = a3[5];
  v36 = a3[6];
  v37 = a3[7];
  v38 = a3[8];
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 536) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 640) = 0;
  *(_QWORD*)(a1 + 632) = 0;
  *(_QWORD*)(a1 + 624) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_DWORD*)(a1 + 400) = a7;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_DWORD*)(a1 + 592) = 0;
  *(_QWORD*)(a1 + 360) = v35;
  *(_QWORD*)(a1 + 368) = v36;
  *(_QWORD*)(a1 + 376) = v37;
  *(_QWORD*)(a1 + 384) = v38;
  *(_QWORD*)(a1 + 404) = 0x100000001LL;
  *(_DWORD*)(a1 + 412) = 1;
  v40 = *a9;
  v39 = a9[1];
  if (v39 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v39 + 8), 1u,
                              memory_order_relaxed);
  }
  v41 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 32) = v40;
  *(_QWORD*)(a1 + 40) = v39;
  if (v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
    NgxRoutine_baf10(v41);
  }
  v42 = *(_QWORD*)(a1 + 16);
  v43 = *(_DWORD*)(v42 + 92);
  LODWORD(v42) = 2 * *(_DWORD*)(v42 + 96);
  *(_DWORD*)(a1 + 92) = 2 * v43;
  *(_DWORD*)(a1 + 96) = v42;
  v45 = *a8;
  v44 = a8[1];
  if (v44 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v44 + 8), 1u,
                              memory_order_relaxed);
  }
  v46 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 48) = v45;
  *(_QWORD*)(a1 + 56) = v44;
  if (v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
    NgxRoutine_baf10(v46);
  }
  v47 = *(_DWORD*)(a1 + 96);
  v48 = *(_QWORD*)(a1 + 120);
  v49 = *(_DWORD*)(a1 + 92) - a15;
  *(_DWORD*)(a1 + 256) = 0;
  *(_DWORD*)(a1 + 392) = v49;
  *(_DWORD*)(a1 + 396) = v47 - a16;
  nvidia_dlss_a9960_alt1(
      v48, *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 120LL) + 48LL),
      *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 120LL) + 52LL));
  nvidia_dlss_a9970(*(_QWORD*)(a1 + 120),
                    *(int*)(a1 + 92) * (__int64)*(int*)(a1 + 100) *
                        *(int*)(a1 + 96) * *(int*)(a1 + 108));
  result = setupKernel_alt1(a1, 0);
  *(_DWORD*)(a1 + 128) = 0;
  return result;
}

__int64 setupKernel(__int64 a1, unsigned int a2)
{
  __int64 v2;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v22;
  _QWORD v23[2];
  char* v24;
  __int64 v25;
  __int64 v26;

  v2 = 3;
  v4 = a1 + 8LL * a2 + 336;
  v5 = (__int64*)v4;
  v6 = a1 + 48LL * a2 + 608;
  do {
    v8 = *v5++;
    v7 = v8;
    if (v8 == 0) {
      goto LABEL_2;
    }
    v9 = *(_QWORD*)(a1 + 8);
    v26 = 0;
    if ((*(unsigned int (**)(__int64, __int64*))(*(_QWORD*)v9 + 64LL))(
            v9, &v26) != 0) {
      v10 = (*(__int64 (**)(_QWORD, __int64*))(**(_QWORD**)(a1 + 8) + 64LL))(
          *(_QWORD*)(a1 + 8), &v26);
      NgxRoutine_b4b90(
          "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
          "rel/source/features/dlaa/dltss_network.cpp",
          940, "setupKernel", "Error: NVAPI failed %d", v10);
    }
    v11 = *(_QWORD*)(v4 + 24);
    v12 = v26;
    v13 = strlen_plt(v11);
    if (v13 >= 0xFFFFFFFFFFFFFFF7LL) {
      NgxRoutine_27cb0();
    }
    v14 = v13;
    if (v13 >= 0x17) {
      if ((v13 | 7) == 0x17) {
        v16 = 26;
      }
      else {
        v16 = (v13 | 7) + 1;
      }
      v15 = (char*)NgxRoutine_420(v16);
      v23[1] = v14;
      v24 = v15;
      v23[0] = v16 | 1;
    LABEL_14:
      memmove_plt(v15, v11, v14);
      goto LABEL_15;
    }
    v15 = (char*)v23 + 1;
    LOBYTE(v23[0]) = 2 * v13;
    if (v13 != 0) {
      goto LABEL_14;
    }
  LABEL_15:
    v15[v14] = 0;
    nvidia_dlss_rel_source_a3890((void*)&v25, v12, v23);
    v17 = v25;
    v18 = *(_QWORD*)(v6 - 8);
    v25 = 0;
    *(_QWORD*)(v6 - 8) = v17;
    if (v18 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 120LL))(v18);
      v19 = v25;
      v25 = 0;
      if (v19 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 120LL))(v19);
      }
    }
    if ((v23[0] & 1) != 0) {
      NgxRoutine_430(v24, v23[0] & 0xFFFFFFFFFFFFFFFELL);
    }
    v22 &= 0xFFFFFFFF00000000LL;
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(v6 - 8) + 32LL))(
        *(_QWORD*)(v6 - 8), 0);
    v20 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64, __int64,
                          _QWORD, _QWORD, int,
                          _QWORD))(**(_QWORD**)(a1 + 8) + 120LL))(
        *(_QWORD*)(a1 + 8), *(_QWORD*)v7, *(unsigned int*)(v7 + 8), v11, 1, v6,
        *(unsigned int*)(*(_QWORD*)(v6 - 8) + 20LL),
        *(unsigned int*)(*(_QWORD*)(v6 - 8) + 24LL), 1, 0);
    *(_DWORD*)(a1 + 128) = v20;
    if (v20 != 0) {
      NgxRoutine_b4b90(
          "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
          "rel/source/features/dlaa/dltss_network.cpp",
          952, "setupKernel", "Error: NVAPI failed %d", v20);
    }
  LABEL_2:
    --v2;
    v6 += 16;
    v4 = (__int64)v5;
  } while (v2 != 0);
  return 0;
}

float dltss_network_6aed0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, unsigned int a6, _QWORD* a7)
{
  int v10;
  float result;
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
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  float v38;
  int v39;
  float v40;
  int v41;
  int v42;
  float v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  __int64 v52;

  dltss_network_6b430_alt1(a1, a6, *a7, a5);
  (*(void (**)(_QWORD))(*(_QWORD*)*a7 + 40LL))(*a7);
  v10 = *(_DWORD*)(*a7 + 16LL);
  *(_QWORD*)(a1 + 404) = *(_QWORD*)(*a7 + 8LL);
  *(_DWORD*)(a1 + 412) = v10;
  if ((*(unsigned int (**)(_QWORD))(*(_QWORD*)*a7 + 8LL))(*a7) == 0) {
    memcpy_plt(a2, *a7 + 888LL, 656);
    if ((unsigned int)nvidia_dlss_a9a30(*(_QWORD*)(a1 + 120),
                                        *(_QWORD*)(a1 + 8), a2 + 256) != 0) {
      v12 = (unsigned int)nvidia_dlss_a9a30(*(_QWORD*)(a1 + 120),
                                            *(_QWORD*)(a1 + 8), a2 + 256);
      NgxRoutine_b4b90(
          "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
          "rel/source/features/dlaa/dltss_network.cpp",
          1060, "SetParamsBeforeDispatch", "Error: NVAPI failed %d", v12);
    }
    else if ((unsigned int)nvidia_dlss_a9b20(
                 *(_QWORD*)(*(_QWORD*)(a1 + 16) + 120LL), *(_QWORD*)(a1 + 8),
                 a2) != 0) {
      v13 = (unsigned int)nvidia_dlss_a9b20(
          *(_QWORD*)(*(_QWORD*)(a1 + 16) + 120LL), *(_QWORD*)(a1 + 8), a2);
      NgxRoutine_b4b90(
          "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
          "rel/source/features/dlaa/dltss_network.cpp",
          1062, "SetParamsBeforeDispatch", "Error: NVAPI failed %d", v13);
    }
    else if ((unsigned int)nvidia_dlss_a9a30(
                 *(_QWORD*)(*(_QWORD*)(a1 + 48) + 120LL), *(_QWORD*)(a1 + 8),
                 a2 + 8) != 0) {
      v14 = (unsigned int)nvidia_dlss_a9a30(
          *(_QWORD*)(*(_QWORD*)(a1 + 48) + 120LL), *(_QWORD*)(a1 + 8), a2 + 8);
      NgxRoutine_b4b90(
          "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
          "rel/source/features/dlaa/dltss_network.cpp",
          1063, "SetParamsBeforeDispatch", "Error: NVAPI failed %d", v14);
    }
    else if ((dltss_network_66810(*(_QWORD*)(a1 + 32), a2 + 16) & 1) != 0 &&
             (dltss_network_668a0(*(_QWORD*)(a1 + 32), a2 + 24) & 1) != 0 &&
             (dltss_network_66810(a1, a2 + 240) & 1) != 0 &&
             (dltss_network_668a0(a1, a2 + 248) & 1) != 0) {
      v15 = *(_QWORD*)(a1 + 8);
      v16 = *(_QWORD*)(a1 + 416);
      *(_DWORD*)(a2 + 448) = *(_DWORD*)(a1 + 400) == 1;
      *(_DWORD*)(a2 + 284) = *(_DWORD*)(a1 + 396);
      *(_DWORD*)(a2 + 288) = *(_DWORD*)(a1 + 392);
      if ((*(unsigned int (**)(__int64, __int64, __int64*, _QWORD))(
              *(_QWORD*)v15 + 192LL))(v15, v16, &v52, 0) != 0) {
        v17 = (*(unsigned int (**)(_QWORD, _QWORD, __int64*, _QWORD))(
            **(_QWORD**)(a1 + 8) + 192LL))(*(_QWORD*)(a1 + 8),
                                           *(_QWORD*)(a1 + 416), &v52, 0);
        NgxRoutine_b4b90(
            "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
            "dlss/rel/source/features/dlaa/dltss_network.cpp",
            1086, "SetParamsBeforeDispatch", "Error: NVAPI failed %d", v17);
      }
      else {
        v18 = *(_QWORD*)(a1 + 8);
        v19 = *(_QWORD*)(a1 + 424);
        *(_QWORD*)(a2 + 456) = v52;
        if ((*(unsigned int (**)(__int64, __int64, __int64*, _QWORD))(
                *(_QWORD*)v18 + 192LL))(v18, v19, &v52, 0) != 0) {
          v20 = (*(unsigned int (**)(_QWORD, _QWORD, __int64*, _QWORD))(
              **(_QWORD**)(a1 + 8) + 192LL))(*(_QWORD*)(a1 + 8),
                                             *(_QWORD*)(a1 + 424), &v52, 0);
          NgxRoutine_b4b90(
              "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
              "dlss/rel/source/features/dlaa/dltss_network.cpp",
              1088, "SetParamsBeforeDispatch", "Error: NVAPI failed %d", v20);
        }
        else {
          v21 = *(_QWORD*)(a1 + 8);
          v22 = *(_QWORD*)(a1 + 432);
          *(_QWORD*)(a2 + 464) = v52;
          if ((*(unsigned int (**)(__int64, __int64, __int64*, _QWORD))(
                  *(_QWORD*)v21 + 192LL))(v21, v22, &v52, 0) != 0) {
            v23 = (*(unsigned int (**)(_QWORD, _QWORD, __int64*, _QWORD))(
                **(_QWORD**)(a1 + 8) + 192LL))(*(_QWORD*)(a1 + 8),
                                               *(_QWORD*)(a1 + 432), &v52, 0);
            NgxRoutine_b4b90(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                1090, "SetParamsBeforeDispatch", "Error: NVAPI failed %d", v23);
          }
          else {
            v24 = *(_QWORD*)(a1 + 8);
            v25 = *(_QWORD*)(a1 + 440);
            *(_QWORD*)(a2 + 472) = v52;
            if ((*(unsigned int (**)(__int64, __int64, __int64*, _QWORD))(
                    *(_QWORD*)v24 + 192LL))(v24, v25, &v52, 0) != 0) {
              v26 = (*(unsigned int (**)(_QWORD, _QWORD, __int64*, _QWORD))(
                  **(_QWORD**)(a1 + 8) + 192LL))(*(_QWORD*)(a1 + 8),
                                                 *(_QWORD*)(a1 + 440), &v52, 0);
              NgxRoutine_b4b90(
                  "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                  "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                  1092, "SetParamsBeforeDispatch", "Error: NVAPI failed %d",
                  v26);
            }
            else {
              v27 = *(_QWORD*)(a1 + 8);
              v28 = *(_QWORD*)(a1 + 448);
              *(_QWORD*)(a2 + 480) = v52;
              if ((*(unsigned int (**)(__int64, __int64, __int64*))(
                      *(_QWORD*)v27 + 200LL))(v27, v28, &v52) != 0) {
                v29 = (*(unsigned int (**)(_QWORD, _QWORD, __int64*))(
                    **(_QWORD**)(a1 + 8) + 200LL))(*(_QWORD*)(a1 + 8),
                                                   *(_QWORD*)(a1 + 448), &v52);
                NgxRoutine_b4b90(
                    "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                    "nvn2/dlss/rel/source/features/dlaa/dltss_network.cpp",
                    1094, "SetParamsBeforeDispatch", "Error: NVAPI failed %d",
                    v29);
              }
              else {
                v30 = *(_QWORD*)(a1 + 8);
                v31 = *(_QWORD*)(a1 + 456);
                *(_QWORD*)(a2 + 488) = v52;
                if ((*(unsigned int (**)(__int64, __int64, __int64*))(
                        *(_QWORD*)v30 + 200LL))(v30, v31, &v52) != 0) {
                  v32 = (*(unsigned int (**)(_QWORD, _QWORD, __int64*))(
                      **(_QWORD**)(a1 + 8) + 200LL))(
                      *(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 456), &v52);
                  NgxRoutine_b4b90("C:/dvs/git/dirty/git-master_hos/gpu/"
                                   "drv_secured_g/drivers/nvn2/dlss/rel/source/"
                                   "features/dlaa/dltss_network.cpp",
                                   1096, "SetParamsBeforeDispatch",
                                   "Error: NVAPI failed %d", v32);
                }
                else {
                  *(_QWORD*)(a2 + 496) = v52;
                  *(_DWORD*)(a2 + 504) = *(_DWORD*)(a1 + 472);
                  *(_QWORD*)(a2 + 508) = *(_QWORD*)(a1 + 476);
                  v33 = *(_DWORD*)(a1 + 488);
                  v34 = *(_DWORD*)(a1 + 504);
                  v35 = *(_DWORD*)(a1 + 516);
                  *(_DWORD*)(a2 + 516) = *(_DWORD*)(a1 + 484);
                  v36 = *(_DWORD*)(a1 + 492);
                  *(_DWORD*)(a2 + 520) = v33;
                  v37 = *(_DWORD*)(a1 + 500);
                  *(_DWORD*)(a2 + 528) = v34;
                  v38 = *(float*)(a1 + 512);
                  *(_DWORD*)(a2 + 544) = v35;
                  *(_DWORD*)(a2 + 524) = v36;
                  v39 = *(_DWORD*)(a1 + 496);
                  *(_DWORD*)(a2 + 536) = v37;
                  v40 = *(float*)(a1 + 508);
                  *(float*)(a2 + 532) = v38;
                  *(_DWORD*)(a2 + 624) = v39;
                  *(float*)(a2 + 540) = v40;
                  *(_QWORD*)(a2 + 548) = *(_QWORD*)(a1 + 520);
                  v41 = *(_DWORD*)(a1 + 528);
                  *(_DWORD*)(a2 + 560) = *(_DWORD*)(a1 + 532);
                  *(_DWORD*)(a2 + 556) = v41;
                  *(_QWORD*)(a2 + 564) = *(_QWORD*)(a1 + 536);
                  v42 = *(_DWORD*)(a1 + 560);
                  v43 = *(float*)(a1 + 556);
                  *(_DWORD*)(a2 + 572) = *(_DWORD*)(a1 + 544);
                  v44 = *(_DWORD*)(a1 + 548);
                  *(_DWORD*)(a2 + 588) = v42;
                  v45 = *(_DWORD*)(a1 + 564);
                  result = (float)(v40 * v38) * v43;
                  *(_DWORD*)(a2 + 576) = v44;
                  v46 = *(_DWORD*)(a1 + 552);
                  *(float*)(a2 + 584) = result;
                  *(_DWORD*)(a2 + 592) = v45;
                  v47 = *(_DWORD*)(a1 + 572);
                  *(_DWORD*)(a2 + 580) = v46;
                  v48 = *(_DWORD*)(a1 + 588);
                  *(_DWORD*)(a2 + 596) = v47;
                  v49 = *(_DWORD*)(a1 + 568);
                  *(_DWORD*)(a2 + 616) = v48;
                  v50 = *(_DWORD*)(a1 + 592);
                  *(_DWORD*)(a2 + 600) = v49;
                  v51 = *(_DWORD*)(a1 + 576);
                  *(_DWORD*)(a2 + 620) = v50;
                  *(_DWORD*)(a2 + 604) = v51;
                  *(_DWORD*)(a2 + 608) = *(_DWORD*)(a1 + 580);
                  *(_DWORD*)(a2 + 612) = *(_DWORD*)(a1 + 584);
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 dltss_network_6b430(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  int* v5;
  int v9;
  __int64 v10;
  __int64 v11;
  int* v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  int* v21;
  int v22;
  __int64 result;
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
  int v49;
  __int64 v50;
  __int64 v51;
  struct {
    _QWORD v52[2];
    __int64 v53;
    __int64 v54;
    __int64 v55;
    int v56;
  } v52_;
  struct {
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    int v62;
  } v57_;

  v4 = a1 + 4LL * a2;
  v5 = *(int**)(a1 + 16);
  if (*(_DWORD*)(v4 + 388) == 1) {
    v9 = 2;
  }
  else {
    v9 = 1;
  }
  NgxRoutine_29ca0((__int64)&v57_.v57);
  NgxRoutine_29cf0(&v57_.v57, 1, v5[24], v5[23], v5[25], v9);
  *(_DWORD*)(a3 + 152) = v5[26];
  v10 = v57_.v58;
  *(_QWORD*)(a3 + 112) = v57_.v57;
  *(_QWORD*)(a3 + 120) = v10;
  v11 = v57_.v61;
  *(_QWORD*)(a3 + 136) = v57_.v60;
  *(_QWORD*)(a3 + 144) = v11;
  *(_QWORD*)(a3 + 128) = v57_.v59;
  v12 = *(int**)(a1 + 32);
  if (*(_DWORD*)(v4 + 384) == 1) {
    v13 = 2;
  }
  else {
    v13 = 1;
  }
  NgxRoutine_29ca0((__int64)&v57_.v57);
  NgxRoutine_29cf0(&v57_.v57, 1, v12[24], v12[23], v12[25], v13);
  v14 = v57_.v60;
  v15 = v57_.v61;
  *(_DWORD*)(a3 + 296) = 0;
  *(_QWORD*)(a3 + 280) = v14;
  *(_QWORD*)(a3 + 288) = v15;
  v16 = v57_.v59;
  v17 = v57_.v57;
  *(_QWORD*)(a3 + 264) = v57_.v58;
  *(_QWORD*)(a3 + 272) = v16;
  *(_QWORD*)(a3 + 256) = v17;
  if (*(_DWORD*)(v4 + 384) == 1) {
    v18 = 2;
  }
  else {
    v18 = 1;
  }
  NgxRoutine_29ca0((__int64)&v57_.v57);
  NgxRoutine_29cf0(&v57_.v57, 1, *(_DWORD*)(a1 + 96), *(_DWORD*)(a1 + 92),
                   *(_DWORD*)(a1 + 100), v18);
  *(_DWORD*)(a3 + 344) = *(_DWORD*)(a1 + 104);
  v19 = v57_.v58;
  *(_QWORD*)(a3 + 304) = v57_.v57;
  *(_QWORD*)(a3 + 312) = v19;
  v20 = v57_.v61;
  *(_QWORD*)(a3 + 328) = v57_.v60;
  *(_QWORD*)(a3 + 336) = v20;
  *(_QWORD*)(a3 + 320) = v57_.v59;
  v21 = *(int**)(a1 + 48);
  v22 = *(_DWORD*)(v4 + 384);
  NgxRoutine_29ca0((__int64)&v57_.v57);
  result = NgxRoutine_29cf0(&v57_.v57, 1, v21[24], v21[23], v21[25], v22);
  *(_DWORD*)(a3 + 392) = v21[26];
  v24 = v57_.v58;
  *(_QWORD*)(a3 + 352) = v57_.v57;
  *(_QWORD*)(a3 + 360) = v24;
  v25 = v57_.v61;
  *(_QWORD*)(a3 + 376) = v57_.v60;
  *(_QWORD*)(a3 + 384) = v25;
  *(_QWORD*)(a3 + 368) = v57_.v59;
  v26 = *(_QWORD*)(a1 + 32);
  v27 = *(_QWORD*)(v26 + 224);
  *(_QWORD*)(a3 + 496) = *(_QWORD*)(v26 + 216);
  *(_QWORD*)(a3 + 504) = v27;
  v28 = *(_QWORD*)(v26 + 232);
  v29 = *(_QWORD*)(v26 + 240);
  v30 = *(_QWORD*)(v26 + 248);
  *(_DWORD*)(a3 + 536) = *(_DWORD*)(v26 + 256);
  *(_QWORD*)(a3 + 528) = v30;
  *(_QWORD*)(a3 + 520) = v29;
  *(_QWORD*)(a3 + 512) = v28;
  v31 = *(_QWORD*)(a1 + 32);
  v32 = *(_QWORD*)(v31 + 272);
  *(_QWORD*)(a3 + 400) = *(_QWORD*)(v31 + 264);
  *(_QWORD*)(a3 + 408) = v32;
  v33 = *(_QWORD*)(v31 + 280);
  v34 = *(_QWORD*)(v31 + 288);
  v35 = *(_QWORD*)(v31 + 296);
  *(_DWORD*)(a3 + 440) = *(_DWORD*)(v31 + 304);
  *(_QWORD*)(a3 + 424) = v34;
  *(_QWORD*)(a3 + 432) = v35;
  *(_QWORD*)(a3 + 416) = v33;
  v37 = *(_QWORD*)(a1 + 240);
  v36 = *(_QWORD*)(a1 + 248);
  LODWORD(v33) = *(_DWORD*)(a1 + 256);
  *(_QWORD*)(a3 + 560) = *(_QWORD*)(a1 + 232);
  *(_DWORD*)(a3 + 584) = v33;
  *(_QWORD*)(a3 + 576) = v36;
  *(_QWORD*)(a3 + 568) = v37;
  v38 = *(_QWORD*)(a1 + 216);
  *(_QWORD*)(a3 + 552) = *(_QWORD*)(a1 + 224);
  *(_QWORD*)(a3 + 544) = v38;
  v39 = *(_QWORD*)(a1 + 272);
  *(_QWORD*)(a3 + 448) = *(_QWORD*)(a1 + 264);
  *(_QWORD*)(a3 + 456) = v39;
  v40 = *(_QWORD*)(a1 + 280);
  v41 = *(_QWORD*)(a1 + 288);
  v42 = *(_QWORD*)(a1 + 296);
  *(_DWORD*)(a3 + 488) = *(_DWORD*)(a1 + 304);
  *(_QWORD*)(a3 + 472) = v41;
  *(_QWORD*)(a3 + 480) = v42;
  *(_QWORD*)(a3 + 464) = v40;
  if (*(_BYTE*)(a1 + 320) == 1) {
    NgxRoutine_29ca0((__int64)&v57_.v57);
    NgxRoutine_29cf0(&v57_.v57, 1, *(_DWORD*)(a4 + 172), *(_DWORD*)(a4 + 168),
                     4, 2);
    v43 = v57_.v60;
    *(_QWORD*)(a3 + 608) = v57_.v59;
    v44 = v57_.v61;
    *(_QWORD*)(a3 + 616) = v43;
    *(_QWORD*)(a3 + 624) = v44;
    *(_DWORD*)(a3 + 632) = v57_.v62;
    v45 = v57_.v58;
    *(_QWORD*)(a3 + 592) = v57_.v57;
    *(_QWORD*)(a3 + 600) = v45;
    NgxRoutine_29ca0((__int64)v52_.v52);
    result = NgxRoutine_29cf0(v52_.v52, 1, *(_DWORD*)(a1 + 472),
                              *(_DWORD*)(a1 + 476), 4, 2);
    v46 = v52_.v53;
    v47 = v52_.v54;
    v48 = v52_.v55;
    v49 = v52_.v56;
    *(_QWORD*)(a3 + 752) = v52_.v53;
    v50 = v52_.v52[0];
    v51 = v52_.v52[1];
    *(_QWORD*)(a3 + 760) = v47;
    *(_QWORD*)(a3 + 768) = v48;
    *(_DWORD*)(a3 + 776) = v49;
    *(_QWORD*)(a3 + 736) = v50;
    *(_QWORD*)(a3 + 744) = v51;
    *(_QWORD*)(a3 + 800) = v46;
    *(_QWORD*)(a3 + 808) = v47;
    *(_QWORD*)(a3 + 816) = v48;
    *(_DWORD*)(a3 + 824) = v49;
    *(_QWORD*)(a3 + 784) = v50;
    *(_QWORD*)(a3 + 792) = v51;
  }
  return result;
}

__int64 setWeightsHelper(__int64 a1, __int64* a2, __int64 a3)
{
  int v4;
  __int64 v5;
  __int64* v8;
  unsigned int v9;
  int v10;
  unsigned __int64 v11;
  bool v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  _BYTE* v19;
  __int64 v20;
  _BYTE* v21;
  const char* v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  int v33;
  int v34;
  __int64 v35;
  __int64* v36;
  int v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  int v47;
  __int64 v48;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  int v54;
  __int64* v55;
  int v56;
  int v57;
  __int64 v59;
  int v60;
  __int64 v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  unsigned int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  __int64 v76;
  int v77;
  unsigned int v78;
  unsigned int v79;
  unsigned int v80;
  int v81;
  int v82;
  __int64 v83;
  unsigned int v84;
  char v85;
  int v86;
  __int16 v87;
  __int64 v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  unsigned int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  __int64 v107;
  int v108;
  int v109;
  unsigned int v110;
  int v111;
  __int64 v112;
  int v113;
  __int16 v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  __int64 v124;
  int v125;
  unsigned int v126;
  unsigned int v127;
  int v128;
  __int64 v129;
  int v130;
  unsigned int v131;
  char v132;
  int v133;
  __int16 v134;
  int v135;
  int v136;
  int v137;
  int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  int v155;
  int v156;
  int v157;
  int v158;
  int v159;
  int v160;
  int v161;
  int v162;
  int v163;
  int v164;
  int v165;
  int v166;
  int v167;
  int v168;
  int v169;
  int v170;
  int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  int v178;
  int v179;
  __int64 v180;
  int v181;
  int v182;
  int v183;
  int v184;
  int v185;
  __int64 i;
  __int16 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  int v191;
  int v192;
  int v193;
  int v194;
  int v195;
  int v196;
  int v197;
  int v198;
  int v199;
  int v200;
  int v201;
  int v202;
  int v203;
  int v204;
  int v205;
  int v206;
  int v207;
  int v208;
  int v209;
  int v210;
  int v211;
  int v212;
  int v213;
  int v214;
  int v215;
  int v216;
  int v217;
  int v218;
  int v219;
  int v220;
  int v221;
  int v222;
  int v223;
  int v224;
  int v225;
  int v226;
  int v227;
  int v228;
  int v229;
  int v230;
  int v231;
  int v232;
  int v233;
  int v234;
  int v235;
  int v236;
  int v237;
  int v238;
  int v239;
  int v240;
  int v241;
  int v242;
  int v243;
  int v244;
  int v245;
  __int64 v246;
  int v247;
  _BYTE v248[28];
  int v249;
  int v250;
  _QWORD v251[2];

  v4 = *(_DWORD*)(a1 + 256);
  v5 = *(_QWORD*)(a1 + 136);
  if (v5 == 0) {
    v11 = *(unsigned __int8*)(a1 + 64);
    v12 = (v11 & 1) == 0;
    v13 = v11 >> 1;
    if (v12) {
      v14 = a1 + 65;
    }
    else {
      v14 = *(_QWORD*)(a1 + 80);
    }
    if (v12) {
      v15 = v13;
    }
    else {
      v15 = *(_QWORD*)(a1 + 72);
    }
    v16 = strlen_plt("_weights");
    v17 = v16 + v15;
    if (v16 + v15 >= 0xFFFFFFFFFFFFFFF7LL) {
      NgxRoutine_27cb0();
    }
    v18 = v16;
    if (v17 > 0x16) {
      if ((v17 | 7) == 0x17) {
        v20 = 26;
      }
      else {
        v20 = (v17 | 7) + 1;
      }
      *(_QWORD*)&v248[8] = v16 + v15;
      *(_QWORD*)&v248[16] = NgxRoutine_420(v20);
      *(_QWORD*)v248 = v20 | 1;
      v19 = *(_BYTE**)&v248[16];
      if (v15 == 0) {
      LABEL_19:
        v21 = &v19[v15];
        if (v18 != 0) {
          memcpy_plt(v21, "_weights", v18);
        }
        v21[v18] = 0;
        if ((*(_BYTE*)(a1 + 144) & 1) != 0) {
          NgxRoutine_430(*(_QWORD*)(a1 + 160),
                         *(_QWORD*)(a1 + 144) & 0xFFFFFFFFFFFFFFFELL);
        }
        qmemcpy((void*)(a1 + 144), v248, 24);
        if (v4 != 0) {
          v22 = "_nchw8";
        }
        else {
          v22 = "_nhwc";
        }
        v23 = strlen_plt(v22);
        NgxRoutine_bf2e0(a1 + 144, v22, v23);
        v24 = *(_QWORD*)(a1 + 8);
        v25 = *(_DWORD*)(a1 + 244) * *(_DWORD*)(a1 + 240);
        v26 = *(_DWORD*)(a1 + 248);
        v27 = *(_DWORD*)(a1 + 252);
        v251[0] = 0;
        v28 = v25 * v26 * v27;
        v29 = *(_QWORD*)(a1 + 160);
        LOBYTE(v26) = *(_BYTE*)(a1 + 144);
        *(_DWORD*)v248 = v28 * *(_DWORD*)(a1 + 216);
        *(_QWORD*)&v248[4] = 0xFFFFFFFF00000001LL;
        v12 = (v26 & 1) == 0;
        v30 = *(_QWORD*)(a1 + 120);
        *(_QWORD*)&v248[12] = 0x100000000LL;
        *(_QWORD*)&v248[20] = 0x100000000LL;
        if (v12) {
          v31 = a1 + 145;
        }
        else {
          v31 = v29;
        }
        v33 = *(_DWORD*)(v30 + 48);
        v32 = *(_DWORD*)(v30 + 52);
        v249 = v33;
        v250 = v32;
        if ((*(unsigned int (**)(__int64, _BYTE*, _QWORD*, __int64, __int64))(
                *(_QWORD*)v24 + 136LL))(v24, v248, v251, v31, 0xFFFFFFFFLL) !=
            0) {
          v34 = (*(__int64 (**)(_QWORD, _BYTE*, _QWORD*, __int64, __int64))(
              **(_QWORD**)(a1 + 8) + 136LL))(*(_QWORD*)(a1 + 8), v248, v251,
                                             v31, 0xFFFFFFFFLL);
          NgxRoutine_b4b90(
              "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
              "dlss/rel/source/features/dlaa/dltss_network.cpp",
              114, "createBufferResource", "Error: NVAPI failed %d", v34);
        }
        v35 = *(_QWORD*)(a1 + 8);
        *(_QWORD*)(a1 + 136) = v251[0];
        v36 = NgxData_952220;
        if ((*(unsigned int (**)(__int64, _QWORD))(*(_QWORD*)v35 + 376LL))(
                v35, *NgxData_952220) != 0) {
          v9 = -1160773630;
          v37 = (*(__int64 (**)(_QWORD, __int64, _QWORD, _QWORD, __int64))(
              **(_QWORD**)(a1 + 8) + 376LL))(*(_QWORD*)(a1 + 8), *v36,
                                             *(_QWORD*)(a1 + 136), 0, 1024);
          NgxRoutine_b4b90(
              "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
              "dlss/rel/source/features/dlaa/dltss_network.cpp",
              1215, "setWeightsHelper", "Error: NVAPI failed %d", v37);
          return v9;
        }
        goto LABEL_33;
      }
    }
    else {
      *(_QWORD*)&v248[8] = 0;
      *(_QWORD*)&v248[16] = 0;
      *(_QWORD*)v248 = (unsigned __int8)(2 * v17);
      v19 = &v248[1];
      if (v15 == 0) {
        goto LABEL_19;
      }
    }
    memmove_plt(v19, v14, v15);
    goto LABEL_19;
  }
  v8 = NgxData_952220;
  if ((*(unsigned int (**)(_QWORD, _QWORD, __int64, __int64, __int64))(
          **(_QWORD**)(a1 + 8) + 376LL))(*(_QWORD*)(a1 + 8), *NgxData_952220,
                                         v5, 8, 1024) != 0) {
    v9 = -1160773630;
    v10 = (*(__int64 (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
        **(_QWORD**)(a1 + 8) + 376LL))(*(_QWORD*)(a1 + 8), *v8,
                                       *(_QWORD*)(a1 + 136), 8, 1024);
    NgxRoutine_b4b90(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/features/dlaa/dltss_network.cpp",
        1219, "setWeightsHelper", "Error: NVAPI failed %d", v10);
    return v9;
  }
LABEL_33:
  v188 = a3;
  v38 = *(_DWORD*)(a1 + 244) * *(_DWORD*)(a1 + 240) * *(_DWORD*)(a1 + 248) *
        *(_DWORD*)(a1 + 252);
  if (v38 != 0) {
    v39 = v38;
    if (v38 < 0) {
      nvidia_dlss_rel_source_common_33410();
    }
    v40 = 2LL * v38;
    v41 = NgxRoutine_420(v40);
    v42 = v40 - 2;
    v43 = v41;
    v44 = v41;
    if ((~((_BYTE)v40 - 2) & 0xE) != 0) {
      v45 = ((unsigned __int8)((unsigned int)v42 >> 1) + 1) & 7;
      v44 = v41;
      do {
        *(_WORD*)v44 = 0;
        v44 += 2;
        --v45;
      } while (v45 != 0);
    }
    if (v42 >= 0xE) {
      do {
        *(_QWORD*)v44 = 0;
        *(_QWORD*)(v44 + 8) = 0;
        v44 += 16;
      } while (v44 != v41 + 2 * v39);
    }
    v189 = v41 + 2 * v39;
    v190 = a1;
    v46 = *(_DWORD*)(a1 + 204);
    if (v46 < 1) {
      goto LABEL_48;
    }
  }
  else {
    v43 = 0;
    v189 = 0;
    v190 = a1;
    v46 = *(_DWORD*)(a1 + 204);
    if (v46 < 1) {
      goto LABEL_48;
    }
  }
  v47 = *(_DWORD*)(v190 + 200);
  v48 = *(unsigned int*)(v190 + 100);
  if (v47 >= 1 && (int)v48 >= 1) {
    v59 = *a2;
    if (*(_BYTE*)(v190 + 312) == 1) {
      v60 = v46 * v46;
      v61 = v48 & 0x7FFFFFFC;
      v62 = 0;
      v63 = v47 * v46 * v46;
      v64 = 3 * v63;
      v65 = 4 * v63;
      v66 = 2 * v63;
      if (v4 != 0) {
        v67 = v47 * v46 * v46;
        do {
          v68 = 0;
          v69 = v62;
          v235 = v67;
          v238 = v66;
          v241 = v64;
          do {
            v70 = 0;
            v245 = v69;
            v71 = v67;
            v72 = v66;
            v73 = v64;
            do {
              v74 = v70 & 7;
              v75 = v48 * (v62 + (v68 + (v70 >> 3) * v46) * v46);
              if ((unsigned int)v48 >= 4) {
                v77 = 0;
                v76 = 0;
                do {
                  *(_WORD*)(v43 +
                            2LL * (int)(v74 |
                                        (8 * (2 * ((unsigned int)v76 / 0xA) +
                                              4 * ((unsigned int)v76 % 0xA) +
                                              v75)))) =
                      *(_WORD*)(v59 + 2LL * (v69 + v77));
                  v78 = ((int)v76 + 2) / 0xAu;
                  *(_WORD*)(v43 +
                            2LL * (int)((v74 |
                                         (8 * (v75 +
                                               ((4 * (((int)v76 + 1) % 0xAu)) &
                                                0x38) +
                                               2 * (((int)v76 + 1) / 0xAu)))) +
                                        8)) =
                      *(_WORD*)(v59 + 2LL * (v71 + v77));
                  v79 = ((int)v76 + 2) % 0xAu;
                  v80 = v76 + 3;
                  v76 += 4;
                  *(_WORD*)(v43 + 2LL * (int)(v74 | (8 * (2 * v78 + 4 * v79 +
                                                          v75)))) =
                      *(_WORD*)(v59 + 2LL * (v72 + v77));
                  v81 = v73 + v77;
                  v77 += v65;
                  *(_WORD*)(v43 +
                            2LL *
                                (int)((v74 |
                                       (8 * (v75 + ((4 * (v80 % 0xA)) & 0x38) +
                                             2 * (v80 / 0xA)))) +
                                      8)) = *(_WORD*)(v59 + 2LL * v81);
                } while (v76 != v61);
              }
              else {
                LODWORD(v76) = 0;
              }
              if ((v48 & 3) != 0) {
                v82 = v62 + v46 * (v68 + v46 * (v70 + v47 * v76));
                v83 = v48 & 3;
                do {
                  --v83;
                  v84 = (unsigned int)v76 / 0xA;
                  v85 = (unsigned int)v76 % 0xA;
                  LODWORD(v76) = v76 + 1;
                  v86 = (v85 & 1 | (2 * v84)) + ((4 * v85) & 0x38);
                  v87 = *(_WORD*)(v59 + 2LL * v82);
                  v82 += v63;
                  *(_WORD*)(v43 + 2LL * (v74 | (8 * (v86 + v75)))) = v87;
                } while (v83 != 0);
              }
              ++v70;
              v73 += v60;
              v72 += v60;
              v71 += v60;
              v69 += v60;
            } while (v70 != v47);
            ++v68;
            v64 += v46;
            v66 += v46;
            v67 += v46;
            v69 = v245 + v46;
          } while (v68 != v46);
          ++v62;
          v64 = v241 + 1;
          v66 = v238 + 1;
          v67 = v235 + 1;
        } while (v62 != v46);
      }
      else {
        v115 = v47 * v46 * v46;
        do {
          v116 = 0;
          v117 = v62;
          v118 = v115;
          v243 = v66;
          v247 = v64;
          do {
            v119 = 0;
            v120 = v117;
            v121 = v118;
            v122 = v66;
            v123 = v64;
            do {
              if ((unsigned int)v48 >= 4) {
                v125 = 0;
                v124 = 0;
                do {
                  *(_WORD*)(v43 +
                            2LL *
                                (int)(v119 +
                                      (v62 + (v116 +
                                              (2 * ((unsigned int)v124 / 0xA) +
                                               4 * ((unsigned int)v124 % 0xA)) *
                                                  v46) *
                                                 v46) *
                                          v47)) =
                      *(_WORD*)(v59 + 2LL * (v120 + v125));
                  *(_WORD*)(v43 +
                            2LL * (int)(v119 +
                                        (v62 +
                                         (v116 +
                                          ((((4 * (((int)v124 + 1) % 0xAu)) &
                                             0x38) +
                                            2 * (((int)v124 + 1) / 0xAu)) |
                                           1) *
                                              v46) *
                                             v46) *
                                            v47)) =
                      *(_WORD*)(v59 + 2LL * (v121 + v125));
                  v126 = 2 * (((int)v124 + 2) / 0xAu) +
                         4 * (((int)v124 + 2) % 0xAu);
                  v127 = v124 + 3;
                  v124 += 4;
                  *(_WORD*)(v43 +
                            2LL *
                                (int)(v119 + (v62 + (v116 + v126 * v46) * v46) *
                                                 v47)) =
                      *(_WORD*)(v59 + 2LL * (v122 + v125));
                  v128 = v123 + v125;
                  v125 += v65;
                  *(_WORD*)(v43 +
                            2LL * (int)(v119 +
                                        (v62 +
                                         (v116 + ((((4 * (v127 % 0xA)) & 0x38) +
                                                   2 * (v127 / 0xA)) |
                                                  1) *
                                                     v46) *
                                             v46) *
                                            v47)) = *(_WORD*)(v59 + 2LL * v128);
                } while (v124 != v61);
              }
              else {
                LODWORD(v124) = 0;
              }
              if ((v48 & 3) != 0) {
                v129 = v48 & 3;
                v130 = v62 + v46 * (v116 + v46 * (v119 + v47 * v124));
                do {
                  --v129;
                  v131 = (unsigned int)v124 / 0xA;
                  v132 = (unsigned int)v124 % 0xA;
                  LODWORD(v124) = v124 + 1;
                  v133 = (v132 & 1 | (2 * v131)) + ((4 * v132) & 0x38);
                  v134 = *(_WORD*)(v59 + 2LL * v130);
                  v130 += v63;
                  *(_WORD*)(v43 +
                            2LL * (v119 + (v62 + (v116 + v133 * v46) * v46) *
                                              v47)) = v134;
                } while (v129 != 0);
              }
              ++v119;
              v123 += v60;
              v122 += v60;
              v121 += v60;
              v120 += v60;
            } while (v119 != v47);
            ++v116;
            v64 += v46;
            v66 += v46;
            v118 += v46;
            v117 += v46;
          } while (v116 != v46);
          ++v62;
          ++v115;
          v64 = v247 + 1;
          v66 = v243 + 1;
        } while (v62 != v46);
      }
      goto LABEL_48;
    }
    v88 = v48 & 0x7FFFFFF8;
    v246 = v48 & 7;
    if (v4 == 0) {
      v135 = v46 * v46;
      v136 = 0;
      v137 = 0;
      v240 = *(_DWORD*)(v190 + 100);
      v206 = v46 * v47;
      v138 = v46 * v46 * v47;
      v139 = 3 * v138;
      v140 = 5 * v138;
      v141 = 4 * v138;
      v142 = 2 * v138;
      v143 = v138;
      v144 = v138;
      v145 = 7 * v138;
      v146 = 6 * v138;
      v147 = 2 * v138;
      v148 = 3 * v138;
      v149 = 4 * v138;
      v150 = 5 * v138;
      v151 = 6 * v138;
      v152 = 7 * v138;
      do {
        v244 = 0;
        v205 = v136;
        v153 = v137;
        v154 = v147;
        v155 = v148;
        v156 = v149;
        v157 = v140;
        v237 = v137;
        v197 = v144;
        v198 = v143;
        v199 = v142;
        v200 = v141;
        v195 = v148;
        v196 = v147;
        v158 = v145;
        v202 = v146;
        v203 = v139;
        v193 = v150;
        v194 = v149;
        v201 = v140;
        v159 = v151;
        v191 = v152;
        v192 = v151;
        v204 = v145;
        v160 = v150;
        do {
          v232 = v136;
          v234 = v152;
          v224 = v142;
          v226 = v144;
          v161 = v144;
          v162 = v142;
          v163 = v139;
          v164 = 0;
          v165 = v136;
          v166 = v153;
          v167 = v158;
          v168 = v143;
          v169 = v154;
          v170 = v159;
          v220 = v139;
          v222 = v154;
          v212 = v157;
          v214 = v156;
          v171 = v157;
          v172 = v234;
          v173 = v141;
          v174 = v156;
          v175 = v170;
          v228 = v143;
          v230 = v153;
          v176 = v155;
          v177 = v146;
          v216 = v141;
          v218 = v155;
          v178 = v160;
          v179 = v167;
          v209 = v146;
          v210 = v160;
          v207 = v167;
          v208 = v170;
          do {
            if ((unsigned int)v48 >= 8) {
              v181 = 0;
              v180 = 0;
              do {
                v180 += 8;
                *(_WORD*)(v43 + 2LL * (v165 + v181)) =
                    *(_WORD*)(v59 + 2LL * (v166 + v181));
                *(_WORD*)(v43 + 2LL * (v161 + v181)) =
                    *(_WORD*)(v59 + 2LL * (v168 + v181));
                *(_WORD*)(v43 + 2LL * (v169 + v181)) =
                    *(_WORD*)(v59 + 2LL * (v162 + v181));
                *(_WORD*)(v43 + 2LL * (v176 + v181)) =
                    *(_WORD*)(v59 + 2LL * (v163 + v181));
                *(_WORD*)(v43 + 2LL * (v174 + v181)) =
                    *(_WORD*)(v59 + 2LL * (v173 + v181));
                *(_WORD*)(v43 + 2LL * (v178 + v181)) =
                    *(_WORD*)(v59 + 2LL * (v171 + v181));
                *(_WORD*)(v43 + 2LL * (v175 + v181)) =
                    *(_WORD*)(v59 + 2LL * (v177 + v181));
                v182 = v179 + v181;
                v183 = v172 + v181;
                v181 += 8 * v138;
                *(_WORD*)(v43 + 2LL * v183) = *(_WORD*)(v59 + 2LL * v182);
              } while (v88 != v180);
            }
            else {
              LODWORD(v180) = 0;
            }
            if (v246 != 0) {
              v184 = v237 + v46 * (v244 + v46 * (v164 + v47 * v180));
              LODWORD(v48) = v240;
              v185 = v164 + v47 * (v237 + v46 * (v244 + v46 * v180));
              for (i = v246; i != 0; --i) {
                v187 = *(_WORD*)(v59 + 2LL * v184);
                v184 += v138;
                *(_WORD*)(v43 + 2LL * v185) = v187;
                v185 += v138;
              }
            }
            ++v164;
            ++v172;
            v179 += v135;
            ++v175;
            v177 += v135;
            ++v178;
            v171 += v135;
            ++v174;
            v173 += v135;
            ++v176;
            v163 += v135;
            ++v169;
            v162 += v135;
            ++v161;
            v168 += v135;
            v166 += v135;
            ++v165;
          } while (v164 != v47);
          v152 = v234 + v206;
          v158 = v207 + v46;
          v159 = v208 + v206;
          v146 = v209 + v46;
          v160 = v210 + v206;
          v157 = v212 + v46;
          v156 = v214 + v206;
          v141 = v216 + v46;
          v155 = v218 + v206;
          v139 = v220 + v46;
          v154 = v222 + v206;
          v142 = v224 + v46;
          v144 = v226 + v206;
          v136 = v232 + v206;
          ++v244;
          v143 = v228 + v46;
          v153 = v230 + v46;
          LODWORD(v48) = v240;
        } while (v244 != v46);
        v137 = v237 + 1;
        v152 = v191 + v47;
        v145 = v204 + 1;
        v151 = v192 + v47;
        v146 = v202 + 1;
        v150 = v193 + v47;
        v140 = v201 + 1;
        v149 = v194 + v47;
        v141 = v200 + 1;
        v148 = v195 + v47;
        v139 = v203 + 1;
        v147 = v196 + v47;
        v142 = v199 + 1;
        v144 = v197 + v47;
        v143 = v198 + 1;
        v136 = v205 + v47;
      } while (v237 + 1 != v46);
      goto LABEL_48;
    }
    v89 = v46 * v46;
    v90 = 0;
    v91 = v47 * v46 * v46;
    v92 = ((v88 - 8) & 0xFFFFFFF8) + 8;
    v93 = 3 * v91;
    v94 = 5 * v91;
    v95 = 4 * v91;
    v96 = 2 * v91;
    v97 = v91;
    v98 = 7 * v91;
    v99 = 6 * v91;
  LABEL_80:
    v100 = 0;
    v101 = v90;
    v211 = v97;
    v213 = v96;
    v221 = v93;
    v215 = v95;
    v217 = v94;
    v219 = v99;
    v223 = v98;
  LABEL_82:
    v102 = 0;
    v242 = v101;
    v236 = v96;
    v239 = v97;
    v231 = v95;
    v233 = v93;
    v227 = v99;
    v229 = v94;
    v225 = v98;
    while (1) {
      v103 = v102 & 7;
      v104 = v90 + v46 * (v100 + v46 * (v102 >> 3));
      if ((unsigned int)v48 >= 8) {
        break;
      }
      v105 = 0;
      if ((v48 & 7) != 0) {
        goto LABEL_90;
      }
    LABEL_83:
      ++v102;
      v98 += v89;
      v99 += v89;
      v94 += v89;
      v95 += v89;
      v93 += v89;
      v96 += v89;
      v97 += v89;
      v101 += v89;
      if (v102 == v47) {
        ++v100;
        v98 = v225 + v46;
        v99 = v227 + v46;
        v94 = v229 + v46;
        v95 = v231 + v46;
        v93 = v233 + v46;
        v96 = v236 + v46;
        v97 = v239 + v46;
        v101 = v242 + v46;
        if (v100 == v46) {
          ++v90;
          v98 = v223 + 1;
          v99 = v219 + 1;
          v94 = v217 + 1;
          v95 = v215 + 1;
          v93 = v221 + 1;
          v96 = v213 + 1;
          v97 = v211 + 1;
          if (v90 == v46) {
            goto LABEL_48;
          }
          goto LABEL_80;
        }
        goto LABEL_82;
      }
    }
    v106 = 0;
    v107 = 0;
    do {
      v108 = v103 + 8 * v48 * v104 + v107;
      v107 += 64;
      *(_WORD*)(v43 + 2LL * v108) = *(_WORD*)(v59 + 2LL * (v101 + v106));
      *(_WORD*)(v43 + 2LL * (v108 + 8)) = *(_WORD*)(v59 + 2LL * (v97 + v106));
      *(_WORD*)(v43 + 2LL * (v108 + 16)) = *(_WORD*)(v59 + 2LL * (v96 + v106));
      *(_WORD*)(v43 + 2LL * (v108 + 24)) = *(_WORD*)(v59 + 2LL * (v93 + v106));
      *(_WORD*)(v43 + 2LL * (v108 + 32)) = *(_WORD*)(v59 + 2LL * (v95 + v106));
      *(_WORD*)(v43 + 2LL * (v108 + 40)) = *(_WORD*)(v59 + 2LL * (v94 + v106));
      *(_WORD*)(v43 + 2LL * (v108 + 48)) = *(_WORD*)(v59 + 2LL * (v99 + v106));
      v109 = v98 + v106;
      v106 += 8 * v91;
      *(_WORD*)(v43 + 2LL * (v108 + 56)) = *(_WORD*)(v59 + 2LL * v109);
    } while (((8 * v48) & 0x3FFFFFFC0LL) != v107);
    v105 = v92;
    if ((v48 & 7) == 0) {
      goto LABEL_83;
    }
  LABEL_90:
    v110 = v102 + v47 * v105;
    v111 = v103 | (8 * (v48 * v104 + v105));
    v112 = v48 & 7;
    v113 = v90 + v46 * (v100 + v46 * v110);
    do {
      v114 = *(_WORD*)(v59 + 2LL * v113);
      v113 += v91;
      --v112;
      *(_WORD*)(v43 + 2LL * v111) = v114;
      v111 += 8;
    } while (v112 != 0);
    goto LABEL_83;
  }
LABEL_48:
  v50 = NgxData_9529f0[0];
  v51 = *(_DWORD*)(v190 + 240) * *NgxData_952a50 * *(_DWORD*)(v190 + 244) *
        *(_DWORD*)(v190 + 248) * *(_DWORD*)(v190 + 252);
  if ((unsigned __int64)(*NgxData_9529f0[0] + v51) <= 0x900000) {
    v52 = *(_QWORD*)(v190 + 136);
    v53 = NgxData_952220;
    if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64,
                             __int64))(**(_QWORD**)(v190 + 8) + 160LL))(
            *(_QWORD*)(v190 + 8), *NgxData_952220,
            *(_DWORD*)(v190 + 240) * *NgxData_952a50 * *(_DWORD*)(v190 + 244) *
                *(_DWORD*)(v190 + 248) * *(_DWORD*)(v190 + 252),
            v43, v188, v52) != 0) {
      v54 = (*(__int64 (**)(_QWORD, __int64, __int64, __int64, __int64, __int64,
                            __int64, _QWORD))(**(_QWORD**)(v190 + 8) + 160LL))(
          *(_QWORD*)(v190 + 8), *v53, v51, v43, v188, v52, *v50, 0);
      NgxRoutine_b4b90(
          "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
          "rel/source/features/dlaa/dltss_network.cpp",
          127, "hostToDeviceCopy", "Error: NVAPI failed %d", v54);
    }
    *v50 += v51;
  }
  else {
    NgxRoutine_b4b90(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/features/dlaa/dltss_network.cpp",
        124, "hostToDeviceCopy",
        "error: scratch buffer too small - offset %llu bytes %llu allocated "
        "%llu",
        *NgxData_9529f0[0],
        *(_DWORD*)(v190 + 240) * *NgxData_952a50 * *(_DWORD*)(v190 + 244) *
            *(_DWORD*)(v190 + 248) * *(_DWORD*)(v190 + 252),
        9437184);
  }
  v55 = NgxData_952220;
  v56 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
      **(_QWORD**)(v190 + 8) + 376LL))(*(_QWORD*)(v190 + 8), *NgxData_952220,
                                       *(_QWORD*)(v190 + 136), 1024, 8);
  if (v56 != 0) {
    v57 = (*(__int64 (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
        **(_QWORD**)(v190 + 8) + 376LL))(*(_QWORD*)(v190 + 8), *v55,
                                         *(_QWORD*)(v190 + 136), 1024, 8);
    NgxRoutine_b4b90(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/features/dlaa/dltss_network.cpp",
        1250, "setWeightsHelper", "Error: NVAPI failed %d", v57);
  }
  if (v43 != 0) {
    NgxRoutine_430(v43, v189 - v43);
  }
  if (v56 != 0) {
    return (unsigned int)-1160773630;
  }
  else {
    return 1;
  }
}

__int64 setBiasesHelper(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 v4;
  __int64* v7;
  unsigned int v8;
  __int64 v9;
  unsigned __int64 v10;
  bool v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  _BYTE* v18;
  __int64 v19;
  _BYTE* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  int v28;
  int v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  int v48;
  __int64 v49;
  __int64 v50;
  __int16* v51;
  unsigned int v52;
  __int16 v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  __int64* v57;
  int v58;
  __int64* v59;
  __int64 v60;
  _BYTE v62[32];
  int v63;
  __int64 v64;

  v4 = *(_QWORD*)(a1 + 168);
  if (v4 == 0) {
    v10 = *(unsigned __int8*)(a1 + 64);
    v11 = (v10 & 1) == 0;
    v12 = v10 >> 1;
    if (v11) {
      v13 = a1 + 65;
    }
    else {
      v13 = *(_QWORD*)(a1 + 80);
    }
    if (v11) {
      v14 = v12;
    }
    else {
      v14 = *(_QWORD*)(a1 + 72);
    }
    v15 = strlen_plt("_bias");
    v16 = v15 + v14;
    if (v15 + v14 >= 0xFFFFFFFFFFFFFFF7LL) {
      NgxRoutine_27cb0();
    }
    v17 = v15;
    if (v16 > 0x16) {
      if ((v16 | 7) == 0x17) {
        v19 = 26;
      }
      else {
        v19 = (v16 | 7) + 1;
      }
      *(_QWORD*)&v62[8] = v15 + v14;
      *(_QWORD*)&v62[16] = NgxRoutine_420(v19);
      *(_QWORD*)v62 = v19 | 1;
      v18 = *(_BYTE**)&v62[16];
      if (v14 == 0) {
      LABEL_19:
        v20 = &v18[v14];
        if (v17 != 0) {
          memcpy_plt(v20, "_bias", v17);
        }
        v20[v17] = 0;
        if ((*(_BYTE*)(a1 + 176) & 1) != 0) {
          NgxRoutine_430(*(_QWORD*)(a1 + 192),
                         *(_QWORD*)(a1 + 176) & 0xFFFFFFFFFFFFFFFELL);
        }
        v21 = *(_QWORD*)&v62[8];
        v22 = *(_QWORD*)(a1 + 8);
        v64 = 0;
        *(_QWORD*)(a1 + 176) = *(_QWORD*)v62;
        *(_QWORD*)(a1 + 184) = v21;
        LODWORD(v21) = *(_DWORD*)(a1 + 292);
        *(_QWORD*)(a1 + 192) = *(_QWORD*)&v62[16];
        v23 = *(_QWORD*)(a1 + 192);
        v24 = v21 * *(_DWORD*)(a1 + 288) * *(_DWORD*)(a1 + 296) *
              *(_DWORD*)(a1 + 300) * *(_DWORD*)(a1 + 264);
        LOBYTE(v21) = *(_BYTE*)(a1 + 176);
        *(_DWORD*)v62 = v24;
        *(_QWORD*)&v62[4] = 0xFFFFFFFF00000001LL;
        v11 = (v21 & 1) == 0;
        v25 = *(_QWORD*)(a1 + 120);
        *(_QWORD*)&v62[12] = 0x100000000LL;
        *(_QWORD*)&v62[20] = 0x100000000LL;
        if (v11) {
          v26 = a1 + 177;
        }
        else {
          v26 = v23;
        }
        v28 = *(_DWORD*)(v25 + 48);
        v27 = *(_DWORD*)(v25 + 52);
        *(_DWORD*)&v62[28] = v28;
        v63 = v27;
        if ((*(unsigned int (**)(__int64, _BYTE*, __int64*, __int64, __int64))(
                *(_QWORD*)v22 + 136LL))(v22, v62, &v64, v26, 0xFFFFFFFFLL) !=
            0) {
          v29 = (*(__int64 (**)(_QWORD, _BYTE*, __int64*, __int64, __int64))(
              **(_QWORD**)(a1 + 8) + 136LL))(*(_QWORD*)(a1 + 8), v62, &v64, v26,
                                             0xFFFFFFFFLL);
          NgxRoutine_b4b90(
              "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
              "dlss/rel/source/features/dlaa/dltss_network.cpp",
              114, "createBufferResource", "Error: NVAPI failed %d", v29);
        }
        v30 = *(_QWORD*)(a1 + 8);
        *(_QWORD*)(a1 + 168) = v64;
        v31 = NgxData_952220;
        if ((*(unsigned int (**)(__int64, _QWORD))(*(_QWORD*)v30 + 376LL))(
                v30, *NgxData_952220) != 0) {
          v8 = -1160773630;
          v32 = (*(unsigned int (**)(_QWORD, __int64, _QWORD, _QWORD, __int64))(
              **(_QWORD**)(a1 + 8) + 376LL))(*(_QWORD*)(a1 + 8), *v31,
                                             *(_QWORD*)(a1 + 168), 0, 1024);
          NgxRoutine_b4b90(
              "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
              "dlss/rel/source/features/dlaa/dltss_network.cpp",
              1263, "setBiasesHelper", "Error: NVAPI failed %d", v32);
          return v8;
        }
        goto LABEL_30;
      }
    }
    else {
      *(_QWORD*)&v62[8] = 0;
      *(_QWORD*)&v62[16] = 0;
      *(_QWORD*)v62 = (unsigned __int8)(2 * v16);
      v18 = &v62[1];
      if (v14 == 0) {
        goto LABEL_19;
      }
    }
    memmove_plt(v18, v13, v14);
    goto LABEL_19;
  }
  v7 = NgxData_952220;
  if ((*(unsigned int (**)(_QWORD, _QWORD, __int64, __int64, __int64))(
          **(_QWORD**)(a1 + 8) + 376LL))(*(_QWORD*)(a1 + 8), *NgxData_952220,
                                         v4, 8, 1024) != 0) {
    v8 = -1160773630;
    v9 = (*(unsigned int (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
        **(_QWORD**)(a1 + 8) + 376LL))(*(_QWORD*)(a1 + 8), *v7,
                                       *(_QWORD*)(a1 + 168), 8, 1024);
    NgxRoutine_b4b90(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/features/dlaa/dltss_network.cpp",
        1267, "setBiasesHelper", "Error: NVAPI failed %d", v9);
    return v8;
  }
LABEL_30:
  if (*(_BYTE*)(a1 + 312) != 1) {
    v43 = NgxData_9529f0[0];
    v44 = *(_DWORD*)(a1 + 288) * *NgxData_952a50 * *(_DWORD*)(a1 + 292) *
          *(_DWORD*)(a1 + 296) * *(_DWORD*)(a1 + 300);
    if ((unsigned __int64)(*NgxData_9529f0[0] + v44) <= 0x900000) {
      v45 = *(_QWORD*)(a1 + 168);
      v46 = *a2;
      v47 = NgxData_952220;
      if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64,
                               __int64))(**(_QWORD**)(a1 + 8) + 160LL))(
              *(_QWORD*)(a1 + 8), *NgxData_952220,
              *(_DWORD*)(a1 + 288) * *NgxData_952a50 * *(_DWORD*)(a1 + 292) *
                  *(_DWORD*)(a1 + 296) * *(_DWORD*)(a1 + 300),
              v46, a3, v45) != 0) {
        v48 = (*(__int64 (**)(_QWORD, __int64, __int64, __int64, __int64,
                              __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD,
                              _QWORD))(**(_QWORD**)(a1 + 8) + 160LL))(
            *(_QWORD*)(a1 + 8), *v47, v44, v46, a3, v45, *v43, 0, *(_QWORD*)v62,
            *(_QWORD*)&v62[8], *(_QWORD*)&v62[16], *(_QWORD*)&v62[24]);
        NgxRoutine_b4b90(
            "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
            "dlss/rel/source/features/dlaa/dltss_network.cpp",
            127, "hostToDeviceCopy", "Error: NVAPI failed %d", v48);
      }
      *v43 += v44;
    }
    else {
      NgxRoutine_b4b90(
          "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
          "rel/source/features/dlaa/dltss_network.cpp",
          124, "hostToDeviceCopy",
          "error: scratch buffer too small - offset %llu bytes %llu allocated "
          "%llu",
          *NgxData_9529f0[0],
          *(_DWORD*)(a1 + 288) * *NgxData_952a50 * *(_DWORD*)(a1 + 292) *
              *(_DWORD*)(a1 + 296) * *(_DWORD*)(a1 + 300),
          9437184);
    }
    goto LABEL_59;
  }
  v33 = *(_DWORD*)(a1 + 292) * *(_DWORD*)(a1 + 288) * *(_DWORD*)(a1 + 296) *
        *(_DWORD*)(a1 + 300);
  if (v33 == 0) {
    v38 = 0;
    v41 = 0;
    v42 = *(_DWORD*)(a1 + 100);
    if (v42 < 1) {
      goto LABEL_52;
    }
    goto LABEL_46;
  }
  v34 = v33;
  if (v33 < 0) {
    nvidia_dlss_rel_source_common_33410();
  }
  v35 = 2LL * v33;
  v36 = NgxRoutine_420(v35);
  v37 = v35 - 2;
  v38 = v36;
  v39 = v36;
  if ((~((_BYTE)v35 - 2) & 0xE) != 0) {
    v40 = ((unsigned __int8)((unsigned int)v37 >> 1) + 1) & 7;
    v39 = v36;
    do {
      *(_WORD*)v39 = 0;
      v39 += 2;
      --v40;
    } while (v40 != 0);
  }
  if (v37 >= 0xE) {
    do {
      *(_QWORD*)v39 = 0;
      *(_QWORD*)(v39 + 8) = 0;
      v39 += 16;
    } while (v39 != v36 + 2 * v34);
  }
  v41 = v36 + 2 * v34;
  v42 = *(_DWORD*)(a1 + 100);
  if (v42 >= 1) {
  LABEL_46:
    v49 = *a2;
    if (v42 == 1) {
      v50 = 0;
    }
    else {
      v51 = (__int16*)(v49 + 2);
      v50 = 0;
      do {
        *(_WORD*)(v38 + 2LL * (2 * ((unsigned int)v50 / 0xA) +
                               4 * ((unsigned int)v50 % 0xA))) = *(v51 - 1);
        v52 = v50 + 1;
        v50 += 2;
        v53 = *v51;
        v51 += 2;
        *(_WORD*)(v38 + 2LL * ((((4 * (v52 % 0xA)) & 0x38) + 2 * (v52 / 0xA)) |
                               1)) = v53;
      } while (v50 != (v42 & 0x7FFFFFFE));
    }
    if ((v42 & 1) != 0) {
      *(_WORD*)(v38 + 2LL * ((((unsigned int)v50 % 0xA) & 1 |
                              (2 * ((unsigned int)v50 / 0xA))) +
                             ((4 * ((unsigned int)v50 % 0xA)) & 0x38))) =
          *(_WORD*)(v49 + 2 * v50);
    }
  }
LABEL_52:
  v54 = NgxData_9529f0[0];
  v55 = *(_DWORD*)(a1 + 288) * *NgxData_952a50 * *(_DWORD*)(a1 + 292) *
        *(_DWORD*)(a1 + 296) * *(_DWORD*)(a1 + 300);
  if ((unsigned __int64)(*NgxData_9529f0[0] + v55) <= 0x900000) {
    v56 = *(_QWORD*)(a1 + 168);
    v57 = NgxData_952220;
    if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64,
                             __int64))(**(_QWORD**)(a1 + 8) + 160LL))(
            *(_QWORD*)(a1 + 8), *NgxData_952220,
            *(_DWORD*)(a1 + 288) * *NgxData_952a50 * *(_DWORD*)(a1 + 292) *
                *(_DWORD*)(a1 + 296) * *(_DWORD*)(a1 + 300),
            v38, a3, v56) != 0) {
      v58 = (*(__int64 (**)(_QWORD, __int64, __int64, __int64, __int64, __int64,
                            __int64, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD))(**(_QWORD**)(a1 + 8) + 160LL))(
          *(_QWORD*)(a1 + 8), *v57, v55, v38, a3, v56, *v54, 0, *(_QWORD*)v62,
          *(_QWORD*)&v62[8], *(_QWORD*)&v62[16], *(_QWORD*)&v62[24]);
      NgxRoutine_b4b90(
          "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
          "rel/source/features/dlaa/dltss_network.cpp",
          127, "hostToDeviceCopy", "Error: NVAPI failed %d", v58);
    }
    *v54 += v55;
    goto LABEL_58;
  }
  NgxRoutine_b4b90(
      "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/rel/"
      "source/features/dlaa/dltss_network.cpp",
      124, "hostToDeviceCopy",
      "error: scratch buffer too small - offset %llu bytes %llu allocated %llu",
      *NgxData_9529f0[0],
      *(_DWORD*)(a1 + 288) * *NgxData_952a50 * *(_DWORD*)(a1 + 292) *
          *(_DWORD*)(a1 + 296) * *(_DWORD*)(a1 + 300),
      9437184);
  if (v38 != 0) {
  LABEL_58:
    NgxRoutine_430(v38, v41 - v38);
  }
LABEL_59:
  v59 = NgxData_952220;
  if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
          **(_QWORD**)(a1 + 8) + 376LL))(*(_QWORD*)(a1 + 8), *NgxData_952220,
                                         *(_QWORD*)(a1 + 168), 1024, 8) != 0) {
    v8 = -1160773630;
    v60 = (*(unsigned int (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
        **(_QWORD**)(a1 + 8) + 376LL))(*(_QWORD*)(a1 + 8), *v59,
                                       *(_QWORD*)(a1 + 168), 1024, 8);
    NgxRoutine_b4b90(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/features/dlaa/dltss_network.cpp",
        1287, "setBiasesHelper", "Error: NVAPI failed %d", v60);
  }
  else {
    return 1;
  }
  return v8;
}

__int64 reuseWeightsBias(__int64 a1)
{
  unsigned __int64 v1;
  __int64 v3;
  bool v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  _BYTE* v11;
  __int64 v12;
  _BYTE* v13;
  const char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  bool v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  _BYTE* v31;
  __int64 v32;
  _BYTE* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _BYTE v41[28];
  int v42;
  int v43;
  _BYTE v44[28];
  int v45;
  int v46;

  v1 = *(unsigned __int8*)(a1 + 64);
  v3 = a1 + 65;
  v4 = (v1 & 1) == 0;
  v5 = v1 >> 1;
  if (v4) {
    v6 = a1 + 65;
  }
  else {
    v6 = *(_QWORD*)(a1 + 80);
  }
  if (v4) {
    v7 = v5;
  }
  else {
    v7 = *(_QWORD*)(a1 + 72);
  }
  v8 = strlen_plt("_weights");
  v9 = v8 + v7;
  if (v8 + v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_60;
  }
  v10 = v8;
  if (v9 <= 0x16) {
    *(_QWORD*)&v44[8] = 0;
    *(_QWORD*)&v44[16] = 0;
    *(_QWORD*)v44 = (unsigned __int8)(2 * v9);
    v11 = &v44[1];
    if (v7 == 0) {
      goto LABEL_16;
    }
  LABEL_15:
    memmove_plt(v11, v6, v7);
    goto LABEL_16;
  }
  if ((v9 | 7) == 0x17) {
    v12 = 26;
  }
  else {
    v12 = (v9 | 7) + 1;
  }
  *(_QWORD*)&v44[8] = v8 + v7;
  *(_QWORD*)&v44[16] = NgxRoutine_420(v12);
  *(_QWORD*)v44 = v12 | 1;
  v11 = *(_BYTE**)&v44[16];
  if (v7 != 0) {
    goto LABEL_15;
  }
LABEL_16:
  v13 = &v11[v7];
  if (v10 != 0) {
    memcpy_plt(v13, "_weights", v10);
  }
  v13[v10] = 0;
  if ((*(_BYTE*)(a1 + 144) & 1) != 0) {
    NgxRoutine_430(*(_QWORD*)(a1 + 160),
                   *(_QWORD*)(a1 + 144) & 0xFFFFFFFFFFFFFFFELL);
  }
  qmemcpy((void*)(a1 + 144), v44, 24);
  if (*(_DWORD*)(a1 + 256) != 0) {
    v14 = "_nchw8";
  }
  else {
    v14 = "_nhwc";
  }
  v15 = strlen_plt(v14);
  NgxRoutine_bf2e0(a1 + 144, v14, v15);
  v16 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)v44 = *(_DWORD*)(a1 + 244) * *(_DWORD*)(a1 + 240) *
                  *(_DWORD*)(a1 + 248) * *(_DWORD*)(a1 + 252) *
                  *(_DWORD*)(a1 + 216);
  *(_QWORD*)&v44[4] = 0xFFFFFFFF00000001LL;
  *(_QWORD*)&v44[12] = 0x100000000LL;
  *(_QWORD*)&v44[20] = 0x100000000LL;
  v17 = *(_QWORD*)(a1 + 120);
  v18 = *(_DWORD*)(v17 + 48);
  LODWORD(v17) = *(_DWORD*)(v17 + 52);
  v45 = v18;
  v46 = v17;
  if ((*(_BYTE*)(a1 + 144) & 1) != 0) {
    v19 = *(_QWORD*)(a1 + 160);
  }
  else {
    v19 = a1 + 145;
  }
  if ((*(unsigned int (**)(__int64, _BYTE*, __int64, __int64))(
          *(_QWORD*)v16 + 128LL))(v16, v44, a1 + 136, v19) != 0) {
    v20 = -1160773632;
    if ((*(_BYTE*)(a1 + 144) & 1) != 0) {
      v21 = *(_QWORD*)(a1 + 160);
    }
    else {
      v21 = a1 + 145;
    }
    v22 = (*(unsigned int (**)(_QWORD, _BYTE*, __int64, __int64))(
        **(_QWORD**)(a1 + 8) + 128LL))(*(_QWORD*)(a1 + 8), v44, a1 + 136, v21);
    NgxRoutine_b4b90(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/features/dlaa/dltss_network.cpp",
        1300, "reuseWeightsBias", "Error: NVAPI failed %d", v22);
    return v20;
  }
  v23 = *(unsigned __int8*)(a1 + 64);
  v24 = (v23 & 1) == 0;
  v25 = v23 >> 1;
  if (v24) {
    v26 = v3;
  }
  else {
    v26 = *(_QWORD*)(a1 + 80);
  }
  if (v24) {
    v27 = v25;
  }
  else {
    v27 = *(_QWORD*)(a1 + 72);
  }
  v28 = strlen_plt("_bias");
  v29 = v28 + v27;
  if (v28 + v27 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_60:
    NgxRoutine_27cb0();
  }
  v30 = v28;
  if (v29 > 0x16) {
    if ((v29 | 7) == 0x17) {
      v32 = 26;
    }
    else {
      v32 = (v29 | 7) + 1;
    }
    *(_QWORD*)&v41[8] = v28 + v27;
    *(_QWORD*)&v41[16] = NgxRoutine_420(v32);
    *(_QWORD*)v41 = v32 | 1;
    v31 = *(_BYTE**)&v41[16];
    if (v27 == 0) {
      goto LABEL_46;
    }
  }
  else {
    *(_QWORD*)&v41[8] = 0;
    *(_QWORD*)&v41[16] = 0;
    *(_QWORD*)v41 = (unsigned __int8)(2 * v29);
    v31 = &v41[1];
    if (v27 == 0) {
      goto LABEL_46;
    }
  }
  memmove_plt(v31, v26, v27);
LABEL_46:
  v33 = &v31[v27];
  if (v30 != 0) {
    memcpy_plt(v33, "_bias", v30);
  }
  v33[v30] = 0;
  if ((*(_BYTE*)(a1 + 176) & 1) != 0) {
    NgxRoutine_430(*(_QWORD*)(a1 + 192),
                   *(_QWORD*)(a1 + 176) & 0xFFFFFFFFFFFFFFFELL);
  }
  v34 = *(_QWORD*)&v41[8];
  v35 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 176) = *(_QWORD*)v41;
  *(_QWORD*)(a1 + 184) = v34;
  LODWORD(v34) = *(_DWORD*)(a1 + 292);
  *(_QWORD*)(a1 + 192) = *(_QWORD*)&v41[16];
  *(_DWORD*)v41 = v34 * *(_DWORD*)(a1 + 288) * *(_DWORD*)(a1 + 296) *
                  *(_DWORD*)(a1 + 300) * *(_DWORD*)(a1 + 264);
  *(_QWORD*)&v41[4] = 0xFFFFFFFF00000001LL;
  *(_QWORD*)&v41[12] = 0x100000000LL;
  *(_QWORD*)&v41[20] = 0x100000000LL;
  v36 = *(_QWORD*)(a1 + 120);
  LODWORD(v34) = *(_DWORD*)(v36 + 48);
  LODWORD(v36) = *(_DWORD*)(v36 + 52);
  v42 = v34;
  v43 = v36;
  if ((*(_BYTE*)(a1 + 176) & 1) != 0) {
    v37 = *(_QWORD*)(a1 + 192);
  }
  else {
    v37 = a1 + 177;
  }
  if ((*(unsigned int (**)(__int64, _BYTE*, __int64, __int64))(
          *(_QWORD*)v35 + 128LL))(v35, v41, a1 + 168, v37) != 0) {
    v20 = -1160773632;
    if ((*(_BYTE*)(a1 + 176) & 1) != 0) {
      v38 = *(_QWORD*)(a1 + 192);
    }
    else {
      v38 = a1 + 177;
    }
    v39 = (*(unsigned int (**)(_QWORD, _BYTE*, __int64, __int64))(
        **(_QWORD**)(a1 + 8) + 128LL))(*(_QWORD*)(a1 + 8), v41, a1 + 168, v38);
    NgxRoutine_b4b90(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/features/dlaa/dltss_network.cpp",
        1307, "reuseWeightsBias", "Error: NVAPI failed %d", v39);
  }
  else {
    return 1;
  }
  return v20;
}

_QWORD* Destroy_CubinConvLayer(__int64 a1)
{
  __int64 v2;
  int v3;
  int v4;

  v2 = *(_QWORD*)(a1 + 136);
  *(_QWORD*)a1 = NgxData_952a70 + 16;
  if ((*(unsigned int (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 8) + 184LL))(
          *(_QWORD*)(a1 + 8), v2) != 0) {
    v3 = (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 184LL))(
        *(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 136));
    NgxRoutine_b4b90(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/features/dlaa/dltss_network.cpp",
        1161, "~CubinConvLayer", "Error: NVAPI failed %d", v3);
  }
  if ((*(unsigned int (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 184LL))(
          *(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 168)) != 0) {
    v4 = (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 184LL))(
        *(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 168));
    NgxRoutine_b4b90(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/features/dlaa/dltss_network.cpp",
        1162, "~CubinConvLayer", "Error: NVAPI failed %d", v4);
  }
  if ((*(_BYTE*)(a1 + 176) & 1) != 0) {
    NgxRoutine_430(*(_QWORD*)(a1 + 192),
                   *(_QWORD*)(a1 + 176) & 0xFFFFFFFFFFFFFFFELL);
    if ((*(_BYTE*)(a1 + 144) & 1) == 0) {
      return nvidia_dlss_rel_source_features_dlaa_659c0((_QWORD*)a1);
    }
  LABEL_10:
    NgxRoutine_430(*(_QWORD*)(a1 + 160),
                   *(_QWORD*)(a1 + 144) & 0xFFFFFFFFFFFFFFFELL);
    return nvidia_dlss_rel_source_features_dlaa_659c0((_QWORD*)a1);
  }
  if ((*(_BYTE*)(a1 + 144) & 1) != 0) {
    goto LABEL_10;
  }
  return nvidia_dlss_rel_source_features_dlaa_659c0((_QWORD*)a1);
}

#pragma GCC visibility pop
