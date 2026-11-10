#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NvOsAlloc_plt(_QWORD);
__int64 NvOsDrvClose_plt(_QWORD);
__int64 NvOsDrvOpen_plt(_QWORD);
__int64 NvOsEventDestroy_plt(void);
__int64 NvOsFree_plt(_QWORD);
__int64 NvRmMemHandleFree_plt(_QWORD);
__int64 NvRmMemLoadMapBufferSgl_plt(_QWORD);
__int64 NvRmMemMap_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmMemUnmap_plt(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_629ca0(void);
__int64 SdkRoutine_629ca0_alt1(_QWORD) __asm__("SdkRoutine_629ca0");
__int64 SdkRoutine_62aaa0(_QWORD);
__int64 SdkRoutine_62d0e0(_QWORD);
__int64 SdkRoutine_63cd40(void);
__int64 fprintf_plt(_QWORD, const char*, ...);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_detail_AddNativeWaitHolder();
__int64 nvidia_623f20(unsigned int, unsigned int, __int64*);
__int64 nvidia_624080(_QWORD, _QWORD);
__int64 nvidia_624100(atomic_ullong* volatile*);
__int64 nvidia_624770(__int64, _QWORD*, _QWORD*);
__int64 nvidia_629a80(__int64*, unsigned __int64);
__int64 nvidia_629c30(_QWORD*, __int64);
__int64 nvidia_629cc0(_QWORD*, __int64);
__int64 nvidia_629d80(_QWORD*, __int64);
__int64 nvidia_629dc0(_QWORD*, __int64);
__int64 nvidia_629e00(__int64);
__int64 nvidia_629e40(__int64*, __int64, char);
__int64 nvidia_629f40(__int64*, __int64, __int64);
__int64 nvidia_62dee0(__int64, __int64, __int64, __int64, unsigned int*);
__int64 nvidia_6364e0(__int64, __int64, int*);
__int64 nvidia_638690(_QWORD*);
__int64 nvidia_638df0_alt1() __asm__("nvidia_638df0");
__int64 nvidia_639100_alt1(_QWORD, _QWORD) __asm__("nvidia_639100");
__int64 nvidia_639190_alt1(_QWORD, _QWORD) __asm__("nvidia_639190");
__int64 nvidia_644ce0(_QWORD, _QWORD);
__int64 nvidia_644cf0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nvidia_644cf0_alt1(__int64, __int64, _QWORD*, __int64, __int64*,
                           unsigned __int64) __asm__("nvidia_644cf0");
__int64 nvidia_644da0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nvidia_644da0_alt1(__int64, __int64, __int64,
                           __int64) __asm__("nvidia_644da0");
__int64 nvidia_644df0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nvidia_644ec0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nvstl_mutex_impl_nvos_624540(_QWORD*, __int64, __int64,
                                     unsigned __int8*);
__int64 nvstl_mutex_impl_nvos_635770(__int64, __int64);
atomic_ullong* nvidia_6240f0(atomic_ullong* result, atomic_ullong**);
extern _BYTE* SdkData_e89ab8;
extern _DWORD SdkData_c773a8[3];
extern __int64 (*SdkData_e74828[])();
extern __int64 (*SdkData_e748a0[])();
extern __int64 (*SdkData_e74a58[])();
extern __int64 (*SdkData_e74b98[])();
extern __int64 SdkData_1040700;
extern __int64* SdkData_e89a88;
extern __int64* SdkData_e89aa8[2];
extern __int64* SdkData_e89ae8[3];
extern __int64* SdkData_e89af0[2];
extern char SdkData_10406d1;
extern char SdkData_10406d2;
extern char SdkData_10406d3;
extern char SdkData_10406fc;
extern int* SdkData_e89b00[3];
extern int SdkData_ea44f4;
extern void (*SdkData_e86b68[37])();
void nn_os_detail_RemoveNativeWaitHolder();
__int64 nvidia_638b00(__int64 a1, __int64 a2);
__int64 nvidia_638c20(__int64* a1, __int64* a2);
__int64 nvidia_638d00(__int64 a1, __int64 a2, int* a3, _QWORD* a4);
__int64 (*nvidia_638de0())();
__int64 nvidia_638df0(__int64 a1, __int64 a2);
__int64 nvidia_638e50(__int64 a1);
__int64 nvidia_639100(__int64* a1, _QWORD* a2);
__int64 nvidia_639190(__int64 a1);
__int64 nvidia_6391b0(__int64* a1, int a2, __int64 a3, __int64 a4);
__int64 nvidia_639270(__int64* a1, __int64 a2, __int64 a3);
__int64 nvidia_639330(__int64* a1, int a2, __int64 a3, _DWORD* a4);
__int64 nvidia_6393c0(__int64* a1, __int64 a2, __int64* a3);
__int64 nvidia_639440(__int64* a1, int a2, __int64 a3, _DWORD* a4);
__int64 nvidia_6394d0(__int64* a1, __int64 a2, __int64* a3);
__int64 nvidia_639550(__int64* a1, _QWORD* a2);
__int64 nvidia_6395c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, char a6, char a7, char a8);
__int64 nvidia_639660(__int64 result, __int64 a2);
__int64 nvidia_6396a0(__int64* a1, __int64 a2, __int64 a3, unsigned int* a4);
__int64 nvidia_6396d0(__int64 a1, __int64 a2);
__int64 nvidia_639710(__int64 a1);
__int64 nvidia_639730(_QWORD* a1);
__int64 nvidia_639830(__int64 a1, _QWORD* a2);
__int64 nvidia_639960(__int64 a1, __int64 a2);
__int64 nvidia_639a30(__int64 a1);
__int64 nvidia_639ad0(__int64 a1, __int64 a2);
__int64 nvidia_63a200(__int64 a1);
__int64 nvidia_63a960(__int64 a1, int a2, __int64 a3, unsigned __int64 a4);
__int64 nvidia_63ae30(__int64 a1, __int64 a2, __int64 a3);
__int64 nvidia_63af30(__int64 a1);
__int64 nvidia_63b090(unsigned int* a1, __int64 a2, __int64 a3, __int64 a4);
__int64 nvidia_63b210(__int64 a1, unsigned int* a2);
__int64 nvidia_63b2e0(__int64 a1);
__int64 nvidia_63b330(__int64 a1, __int64 a2);
__int64 nvidia_63b590(__int64 a1, __int64 a2);
__int64 nvidia_63b5f0(__int64 a1, __int64 a2);
__int64 nvidia_63b650(__int64 a1);
__int64 nvidia_63b750(__int64 a1, _DWORD** a2);
__int64 nvidia_63b8e0(__int64 a1, _QWORD* a2);
__int64 nvidia_63be50(__int64 a1, __int64 a2, unsigned int a3);
__int64 nvidia_63bf10(__int64 a1, unsigned int a2);
__int64 nvidia_63bf70(__int64 a1, int a2, _BYTE* a3, _DWORD* a4);
__int64 nvidia_63c040(__int64 a1, int a2, unsigned int a3, unsigned int a4,
                      unsigned int a5);
__int64 nvidia_63c0c0(__int64 a1, unsigned int a2);
__int64 nvidia_63c140(__int64 a1, char a2);
__int64 nvidia_63c1a0(__int64 a1, int a2);
__int64 nvidia_63c220(__int64 a1);
__int64 nvidia_63c250(__int64 a1, unsigned int a2);
__int64 nvidia_63c2c0(__int64 a1, unsigned int a2);
__int64 nvidia_63c340(__int64 a1, unsigned int a2);
__int64 nvidia_63c3b0(__int64 a1, unsigned int a2);
__int64 nvidia_63c450(__int64 a1, unsigned int a2);
__int64 nvidia_63c4c0(__int64 a1, _DWORD* a2);
__int64 nvidia_63c560(__int64 a1, int a2);
__int64 nvidia_63c5f0(__int64 a1, unsigned int a2, __int64 a3, _QWORD* a4);
__int64 nvidia_63c680(__int64 a1, __int64 a2);
__int64 nvidia_63c6e0(__int64 a1, int a2, __int64 a3, __int64 a4, int a5,
                      __int64 a6);
__int64 nvidia_63c780(__int64 a1, int a2, __int64 a3, __int64 a4, int a5,
                      __int64 a6);
__int64 nvidia_63c800(__int64 a1, _DWORD* a2);
__int64 nvidia_63c880(__int64 a1, __int64 a2, unsigned int a3);
__int64 nvidia_63c8f0(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4);
__int64 nvidia_63c970(__int64 a1, __int64 a2, __int64 a3);
__int64 nvidia_63c9d0(__int64 a1);
void nvidia_63ca30(__int64 a1);
__int64 nvidia_63ca90(unsigned int* a1, __int64 a2, __int64 a3, __int64 a4);
__int64 nvidia_63cb90(__int64 a1, __int64 a2);
__int64 nvidia_63cbf0(__int64 a1, __int64* a2);
__int64 nvidia_63ccd0(__int64 a1);
_QWORD* nvidia_63cd10(_QWORD* result, _QWORD* a2);
__int64 nvidia_63cd50(__int64 a1);
void nvidia_63cdb0(__int64 a1);
_BYTE* nvidia_63cec0(_BYTE* result, _DWORD* a2);
__int64 nvidia_63d0c0(__int64 result, int* a2, unsigned __int8* a3);
__int64 nvidia_63d350(__int64 a1, __int64 a2);
__int64 nvidia_63d4a0(__int64 a1);
__int64 nvidia_63d810(__int64 a1, __int64 a2, unsigned int a3);
__int64 nvidia_63d8f0(__int64 a1, _DWORD* a2);
__int64 nvidia_63d900(__int64 a1, unsigned int a2);
__int64 nvidia_63d9a0(__int64 a1, int a2);
__int64 nvidia_63da80(__int64 a1, unsigned int a2, unsigned int a3,
                      __int64* a4);
__int64 nvidia_63dc20(__int64 a1, unsigned int a2);

__int64 nvidia_638b00(__int64 a1, __int64 a2)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  __int64 result;

  v4 = nvidia_629e40((__int64*)(a1 + 24), *(_QWORD*)(a2 + 24), 1);
  v5 = nvidia_629e40((__int64*)(a1 + 40), *(_QWORD*)(a2 + 40), 1);
  if (v4 != 0) {
    v6 = v4;
  }
  else {
    v6 = v5;
  }
  if (v5 != 0) {
    v4 = v6;
  }
  v7 = nvidia_629e40((__int64*)(a1 + 56), *(_QWORD*)(a2 + 56), 1);
  if (v4 != 0) {
    v8 = v4;
  }
  else {
    v8 = v7;
  }
  if (v7 != 0) {
    v4 = v8;
  }
  v9 = nvidia_629e40((__int64*)(a1 + 72), *(_QWORD*)(a2 + 72), 1);
  if (v4 != 0) {
    v10 = v4;
  }
  else {
    v10 = v9;
  }
  if (v9 != 0) {
    v4 = v10;
  }
  v11 = nvidia_629e40((__int64*)(a1 + 88), *(_QWORD*)(a2 + 88), 1);
  if (v4 != 0) {
    v12 = v4;
  }
  else {
    v12 = v11;
  }
  if (v11 != 0) {
    v4 = v12;
  }
  v13 = nvidia_629e40((__int64*)(a1 + 104), *(_QWORD*)(a2 + 104), 1);
  if (v4 != 0) {
    v14 = v4;
  }
  else {
    v14 = v13;
  }
  if (v13 != 0) {
    v4 = v14;
  }
  v15 = nvidia_629e40((__int64*)(a1 + 120), *(_QWORD*)(a2 + 120), 1);
  if (v4 != 0) {
    v16 = v4;
  }
  else {
    v16 = v15;
  }
  if (v15 != 0) {
    result = v16;
  }
  else {
    result = v4;
  }
  *(_DWORD*)(a1 + 136) = *(_DWORD*)(a2 + 136);
  *(_DWORD*)(a1 + 140) = *(_DWORD*)(a2 + 140);
  *(_DWORD*)(a1 + 144) = *(_DWORD*)(a2 + 144);
  *(_QWORD*)(a1 + 148) = *(_QWORD*)(a2 + 148);
  return result;
}

__int64 nvidia_638c20(__int64* a1, __int64* a2)
{
  unsigned int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;

  v4 = nvidia_638b00((__int64)a1, (__int64)a2);
  v5 = nvidia_629e40(a1 + 20, a2[20], 1);
  if (v4 != 0) {
    v6 = v4;
  }
  else {
    v6 = v5;
  }
  if (v5 != 0) {
    v4 = v6;
  }
  v7 = nvidia_629e40(a1 + 22, a2[22], 1);
  if (v4 != 0) {
    v8 = v4;
  }
  else {
    v8 = v7;
  }
  if (v7 != 0) {
    v4 = v8;
  }
  v9 = nvidia_629e40(a1 + 24, a2[24], 1);
  if (v4 != 0) {
    v10 = v4;
  }
  else {
    v10 = v9;
  }
  if (v9 != 0) {
    v4 = v10;
  }
  v11 = nvidia_629e40(a1 + 26, a2[26], 1);
  if (v4 != 0) {
    v12 = v4;
  }
  else {
    v12 = v11;
  }
  if (v11 != 0) {
    v4 = v12;
  }
  v13 = nvidia_629e40(a1 + 28, a2[28], 1);
  if (v4 != 0) {
    v14 = v4;
  }
  else {
    v14 = v13;
  }
  if (v13 != 0) {
    return v14;
  }
  else {
    return v4;
  }
}

__int64 nvidia_638d00(__int64 a1, __int64 a2, int* a3, _QWORD* a4)
{
  __int64 v8;
  _BYTE* v9;
  __int64 result;
  unsigned int v11;

  v8 = NvOsAlloc_plt(1968);
  if (v8 == 0) {
    return 6;
  }
  v9 = (_BYTE*)v8;
  nvstl_mutex_impl_nvos_635770(v8, a2);
  result = nvidia_6364e0((__int64)v9, a1, a3);
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

__int64 (*nvidia_638de0())() { return nvidia_638df0_alt1; }

__int64 nvidia_638df0(__int64 a1, __int64 a2)
{
  __int64 result;

  if (*(_QWORD*)(a1 + 8) != 0) {
    return 0;
  }
  LODWORD(result) = nvidia_639190_alt1(a1, a2);
  if ((_DWORD)result != 0) {
    return (unsigned int)result;
  }
  else {
    return 0;
  }
}

__int64 nvidia_638e50(__int64 a1)
{
  __int64* v2;
  unsigned int v3;
  __int64 v4;
  __int64* v5;
  char v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 result;
  unsigned int v11;
  void (***v12)(_QWORD);
  _BYTE v13[4];
  __int64* v14;
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

  if ((*SdkData_e89ab8 & 1) != 0) {
    return 0;
  }
  v42 = 0;
  v43 = 0;
  v40 = 0;
  v41 = 0;
  v38 = 0;
  v39 = 0;
  v36 = 0;
  v37 = 0;
  v34 = 0;
  v35 = 0;
  v32 = 0;
  v33 = 0;
  v30 = 0;
  v31 = 0;
  v28 = 0;
  v29 = 0;
  v26 = 0;
  v27 = 0;
  v24 = 0;
  v25 = 0;
  v22 = 0;
  v23 = 0;
  v20 = 0;
  v21 = 0;
  v18 = 0;
  v19 = 0;
  v16 = 0;
  v17 = 0;
  v2 = SdkData_e89a88;
  v13[0] = 0;
  v14 = SdkData_e89a88 + 2;
  v15 = 0;
  v3 = nvidia_644ec0("/dev/nvhost", 1, v13, &v14);
  if (v3 != 0) {
    v11 = v3;
    goto LABEL_12;
  }
  if ((v13[0] & 1) == 0) {
    nvidia_638690(&v14);
    return 0;
  }
  v4 = NvOsAlloc_plt(240);
  if (v4 == 0) {
    v11 = 6;
  LABEL_12:
    nvidia_638690(&v14);
    return v11;
  }
  v5 = SdkData_e89aa8[0];
  v12 = (void (***)(_QWORD))v4;
  *(_QWORD*)(v4 + 8) = v15;
  v6 = v16;
  v15 = 0;
  *(_QWORD*)v4 = v5 + 2;
  *(_BYTE*)(v4 + 16) = v6;
  LOBYTE(v16) = 0;
  *(_QWORD*)(v4 + 24) = v17;
  v17 = 0;
  *(_BYTE*)(v4 + 32) = v18;
  LOBYTE(v18) = 0;
  *(_QWORD*)(v4 + 40) = v19;
  v19 = 0;
  *(_BYTE*)(v4 + 48) = v20;
  LOBYTE(v20) = 0;
  *(_QWORD*)(v4 + 56) = v21;
  v21 = 0;
  *(_BYTE*)(v4 + 64) = v22;
  LOBYTE(v22) = 0;
  *(_QWORD*)(v4 + 72) = v23;
  v23 = 0;
  *(_BYTE*)(v4 + 80) = v24;
  LOBYTE(v24) = 0;
  *(_QWORD*)(v4 + 88) = v25;
  v25 = 0;
  *(_BYTE*)(v4 + 96) = v26;
  LOBYTE(v26) = 0;
  *(_QWORD*)(v4 + 104) = v27;
  v27 = 0;
  *(_BYTE*)(v4 + 112) = v28;
  LOBYTE(v28) = 0;
  *(_QWORD*)(v4 + 120) = v29;
  v29 = 0;
  *(_BYTE*)(v4 + 128) = v30;
  LOBYTE(v30) = 0;
  v7 = v31;
  v8 = v32;
  *(_DWORD*)(v4 + 152) = v33;
  *(_QWORD*)(v4 + 136) = v7;
  *(_QWORD*)(v4 + 144) = v8;
  *(_QWORD*)(v4 + 160) = v34;
  v34 = 0;
  *(_BYTE*)(v4 + 168) = v35;
  LOBYTE(v35) = 0;
  *(_QWORD*)(v4 + 176) = v36;
  v36 = 0;
  *(_BYTE*)(v4 + 184) = v37;
  LOBYTE(v37) = 0;
  *(_QWORD*)(v4 + 192) = v38;
  v38 = 0;
  *(_BYTE*)(v4 + 200) = v39;
  LOBYTE(v39) = 0;
  *(_QWORD*)(v4 + 208) = v40;
  v40 = 0;
  *(_BYTE*)(v4 + 216) = v41;
  LOBYTE(v41) = 0;
  *(_QWORD*)(v4 + 224) = v42;
  v42 = 0;
  *(_BYTE*)(v4 + 232) = v43;
  LOBYTE(v43) = 0;
  *(_QWORD*)v4 = v2 + 2;
  v9 = nvidia_639100_alt1(a1, &v12);
  if (v12 != nullptr) {
    (**v12)(v12);
    NvOsFree_plt(v12);
  }
  nvidia_638690(&v14);
  result = v9;
  if (v9 == 0) {
    return 0;
  }
  return result;
}

__int64 nvidia_639100(__int64* a1, _QWORD* a2)
{
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64* v6;
  unsigned __int64 v7;
  unsigned int v8;
  __int64 v10;
  __int64 v11;

  v3 = a1[1];
  v2 = a1[2];
  v4 = v3 + 1;
  if (v2 < v3 + 1) {
    v5 = a2;
    v6 = a1;
    if (v2 >= 0x10) {
      v7 = 2 * v2;
    }
    else {
      v7 = 16;
    }
    v8 = nvidia_629a80(a1, v7);
    if (v8 != 0) {
      return v8;
    }
    v3 = v6[1];
    a1 = v6;
    a2 = v5;
    v4 = v3 + 1;
  }
  v10 = *a1;
  a1[1] = v4;
  *(_QWORD*)(v10 + 8 * v3) = 0;
  v11 = *a2;
  *a2 = 0;
  *(_QWORD*)(v10 + 8 * v3) = v11;
  return 0;
}

__int64 nvidia_639190(__int64 a1)
{
  if ((SdkData_10406fc & 1) != 0) {
    return 0;
  }
  else {
    return nvidia_638e50(a1);
  }
}

__int64 nvidia_6391b0(__int64* a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  unsigned int v5;
  unsigned int v7;
  int v8;
  _QWORD v10[2];
  _QWORD v11[2];
  __int64 v12;
  __int64 v13;
  int v14;

  v4 = *a1;
  v11[0] = 0;
  v11[1] = 0;
  v10[0] = 0;
  v10[1] = 0;
  v5 = 2;
  v14 = a2;
  v12 = 0;
  v13 = 0x100000000LL;
  if (*(_DWORD*)(*(_QWORD*)(v4 + 928) + 52LL) >= 4u &&
      (SdkData_10406d1 & 1) == 0) {
    v7 = nvidia_644da0(*(unsigned int*)(v4 + 920), 3224651524LL, v10, 52);
    if (v7 != 0) {
      v5 = v7;
    }
    else {
      v5 = 0;
    }
  }
  memcpy_plt(a4, v11, 16);
  memcpy_plt(a4 + 16, v10, 16);
  v8 = HIDWORD(v12);
  *(_DWORD*)(a4 + 32) = v13;
  *(_DWORD*)(a4 + 36) = v8;
  return v5;
}

__int64 nvidia_639270(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  _QWORD v8[2];
  _QWORD v9[2];
  int v10;
  _QWORD v11[2];
  _QWORD v12[2];
  __int64 v13;
  int v14;

  v3 = *(_QWORD*)(a3 + 16);
  v4 = *(_QWORD*)(a3 + 24);
  v5 = *a1;
  v14 = 0;
  v12[1] = 0;
  v13 = 0;
  v11[1] = 0;
  v12[0] = 0;
  v11[0] = 0;
  v9[0] = v3;
  v9[1] = v4;
  v10 = *(_DWORD*)(a3 + 32);
  v6 = *(_QWORD*)(a3 + 8);
  v8[0] = *(_QWORD*)a3;
  v8[1] = v6;
  memcpy_plt(v12, v8, 16);
  memcpy_plt(v11, v9, 16);
  result = 2;
  HIDWORD(v13) = v10;
  v14 = 1;
  if (*(_DWORD*)(*(_QWORD*)(v5 + 928) + 52LL) >= 3u &&
      (SdkData_10406d1 & 1) == 0) {
    return nvidia_644da0(*(unsigned int*)(v5 + 920), 1076643587, v11, 44);
  }
  return result;
}

__int64 nvidia_639330(__int64* a1, int a2, __int64 a3, _DWORD* a4)
{
  __int64 v4;
  __int64 result;
  int v7;
  int v8;
  _QWORD v9[4];
  __int64 v10;
  __int64 v11;
  int v12;

  v4 = *a1;
  memset(v9, 0, sizeof(v9));
  result = 2;
  v12 = a2;
  v10 = 0;
  v11 = 0x200000000LL;
  if (*(_DWORD*)(*(_QWORD*)(v4 + 928) + 52LL) >= 4u &&
      (SdkData_10406d1 & 1) == 0) {
    result = nvidia_644da0(*(unsigned int*)(v4 + 920), 3224651524LL, v9, 52);
  }
  v8 = HIDWORD(v10);
  v7 = v11;
  *a4 = v10;
  a4[1] = v7;
  a4[2] = v8;
  return result;
}

__int64 nvidia_6393c0(__int64* a1, __int64 a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 result;
  _QWORD v6[5];
  int v7;

  v3 = *a3;
  v4 = *a1;
  result = 2;
  memset(v6, 0, 32);
  v7 = 2;
  v6[4] = v3;
  if (*(_DWORD*)(*(_QWORD*)(v4 + 928) + 52LL) >= 3u &&
      (SdkData_10406d1 & 1) == 0) {
    return nvidia_644da0(*(unsigned int*)(v4 + 920), 1076643587, v6, 44);
  }
  return result;
}

__int64 nvidia_639440(__int64* a1, int a2, __int64 a3, _DWORD* a4)
{
  __int64 v4;
  __int64 result;
  int v7;
  int v8;
  _QWORD v9[4];
  __int64 v10;
  __int64 v11;
  int v12;

  v4 = *a1;
  memset(v9, 0, sizeof(v9));
  result = 2;
  v12 = a2;
  v10 = 0;
  v11 = 0x300000000LL;
  if (*(_DWORD*)(*(_QWORD*)(v4 + 928) + 52LL) >= 4u &&
      (SdkData_10406d1 & 1) == 0) {
    result = nvidia_644da0(*(unsigned int*)(v4 + 920), 3224651524LL, v9, 52);
  }
  v8 = HIDWORD(v10);
  v7 = v11;
  *a4 = v10;
  a4[1] = v7;
  a4[2] = v8;
  return result;
}

__int64 nvidia_6394d0(__int64* a1, __int64 a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 result;
  _QWORD v6[5];
  int v7;

  v3 = *a3;
  v4 = *a1;
  result = 2;
  memset(v6, 0, 32);
  v6[4] = v3;
  v7 = 3;
  if (*(_DWORD*)(*(_QWORD*)(v4 + 928) + 52LL) >= 3u &&
      (SdkData_10406d1 & 1) == 0) {
    return nvidia_644da0(*(unsigned int*)(v4 + 920), 1076643587, v6, 44);
  }
  return result;
}

__int64 nvidia_639550(__int64* a1, _QWORD* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v5;

  v2 = *a1;
  v5 = 0;
  result = 2;
  if (*(_DWORD*)(*(_QWORD*)(v2 + 928) + 52LL) >= 0x14u &&
      (SdkData_10406d1 & 1) == 0) {
    result = nvidia_644da0(*(unsigned int*)(v2 + 920), 2148026132LL, &v5, 8);
  }
  *a2 = v5;
  return result;
}

__int64 nvidia_6395c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, char a6, char a7, char a8)
{
  __int64 result;

  result = nvidia_629c30((_QWORD*)a1, a2);
  *(_QWORD*)(a1 + 24) = a3;
  *(_QWORD*)(a1 + 32) = a4;
  *(_QWORD*)(a1 + 40) = a5;
  *(_BYTE*)(a1 + 48) = a6;
  *(_BYTE*)(a1 + 49) = a7;
  *(_BYTE*)(a1 + 50) = a8;
  *(_QWORD*)a1 = SdkData_e74828;
  return result;
}

__int64 nvidia_639660(__int64 result, __int64 a2)
{
  unsigned int v2;
  int v3;

  v2 = *(unsigned __int8*)(result + 49);
  *(_QWORD*)a2 = *(_QWORD*)(result + 40) + *(_QWORD*)(result + 24);
  if (v2 >= 0x20) {
    v3 = 0;
  }
  else {
    v3 = 1 << v2;
  }
  *(_QWORD*)(a2 + 8) = *(_QWORD*)(result + 32);
  *(_DWORD*)(a2 + 16) = *(unsigned __int8*)(result + 48);
  *(_DWORD*)(a2 + 20) = v3;
  return result;
}

__int64 nvidia_6396a0(__int64* a1, __int64 a2, __int64 a3, unsigned int* a4)
{
  return nvidia_62dee0(a1[1], a1[5] + a1[3], a2, a3, a4);
}

__int64 nvidia_6396d0(__int64 a1, __int64 a2)
{
  __int64 result;

  result = nvidia_629cc0((_QWORD*)a1, a2);
  *(_DWORD*)(a1 + 20) = 0;
  *(_BYTE*)(a1 + 24) = 0;
  *(_QWORD*)a1 = SdkData_e748a0;
  return result;
}

__int64 nvidia_639710(__int64 a1)
{
  int v1;

  v1 = *(unsigned __int8*)(a1 + 24);
  *(_BYTE*)(a1 + 24) = 0;
  return (unsigned int)(2 * v1);
}

__int64 nvidia_639730(_QWORD* a1)
{
  *a1 = SdkData_e748a0;
  return SdkRoutine_629ca0();
}

__int64 nvidia_639830(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = a2[1];
  *(_BYTE*)(a1 + 72) = 1;
  v4 = *(_QWORD*)(v2 + 112);
  if (v3 == 0) {
    if (*a2 == 0) {
      v3 = 0;
      if (*(_DWORD*)(a1 + 24) != -1) {
        return 8;
      }
      goto LABEL_8;
    }
    v3 = *(_QWORD*)(*a2 + 64LL);
    if (v3 == 0) {
      return 11;
    }
  }
  *(_BYTE*)(a1 + 73) = 1;
  if (*(_DWORD*)(a1 + 24) != -1) {
    return 8;
  }
LABEL_8:
  v7 = NvOsDrvOpen_plt(v4);
  *(_DWORD*)(a1 + 24) = v7;
  if ((_DWORD)v7 == -1) {
    return 196625;
  }
  if (v3 != 0) {
    v8 = *(_QWORD*)(a1 + 32);
    v10 = *(unsigned int*)(v3 + 48);
    if (*(_DWORD*)(v8 + 56) != 0) {
      return nvidia_644da0(v7, 1074286593, &v10, 8);
    }
  }
  else {
    v9 = *(_QWORD*)(a1 + 32);
    v10 = 0xFFFFFFFFLL;
    if (*(_DWORD*)(v9 + 56) != 0) {
      return nvidia_644da0(v7, 1074286593, &v10, 8);
    }
  }
  return 2;
}

__int64 nvidia_639960(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v6;
  __int64 v7;

  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 96LL);
  *(_BYTE*)(a1 + 73) = 1;
  if (*(_DWORD*)(a1 + 24) != -1) {
    return 8;
  }
  v6 = NvOsDrvOpen_plt(v3);
  *(_DWORD*)(a1 + 24) = v6;
  if ((_DWORD)v6 == -1) {
    return 196625;
  }
  v7 = *(unsigned int*)(a2 + 48);
  if (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 56LL) != 0) {
    return nvidia_644da0(v6, 1074286593, &v7, 8);
  }
  else {
    return 2;
  }
}

__int64 nvidia_639a30(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 56);
  if (v1 != 0) {
    NvRmMemUnmap_plt(*(unsigned int*)(a1 + 48), v1, *(_QWORD*)(a1 + 64));
    *(_QWORD*)(a1 + 56) = 0;
  }
  v3 = *(unsigned int*)(a1 + 48);
  if ((_DWORD)v3 != 0) {
    NvRmMemHandleFree_plt(v3);
    *(_DWORD*)(a1 + 48) = 0;
  }
  if (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 56LL) < 0xAu) {
    v5 = 2;
    v6 = *(unsigned int*)(a1 + 24);
    if ((_DWORD)v6 == -1) {
      return v5;
    }
  LABEL_12:
    NvOsDrvClose_plt(v6);
    *(_DWORD*)(a1 + 24) = -1;
    return v5;
  }
  v4 = nvidia_644ce0(*(unsigned int*)(a1 + 24), 20490);
  if (v4 != 0) {
    v5 = v4;
  }
  else {
    v5 = 0;
  }
  v6 = *(unsigned int*)(a1 + 24);
  if ((_DWORD)v6 != -1) {
    goto LABEL_12;
  }
  return v5;
}

__int64 nvidia_639ad0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  char v6;
  char v7;
  __int64* v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v13;
  int v14;
  char v15;
  char v16;
  unsigned int v17;
  __int64 v18;

  v2 = *(_QWORD*)(a1 + 8);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 56LL))(v2);
  v6 = *(_BYTE*)(a1 + 72);
  v7 = *(_BYTE*)(a1 + 73);
  v8 = (__int64*)v5;
  v9 = *(unsigned int*)(v2 + 380);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 288LL))(v5);
  v11 = result;
  if (*(_BYTE*)(v2 + 427) != 1 ||
      (*(_QWORD*)(v2 + 360) & 0x10000000000000LL) == 0) {
    v14 = 0;
    LOBYTE(v17) = 0;
    v15 = 0;
    v16 = 0;
  }
  else {
    v13 = *v8;
    v18 = 0;
    result = (*(__int64 (**)(__int64*, __int64*))(v13 + 296))(v8, &v18);
    v14 = HIDWORD(v18);
    v15 = v18;
    v16 = BYTE1(v18);
    v17 = __clz(HIDWORD(v18)) + BYTE2(v18) - 31;
  }
  *(_BYTE*)a2 = v6;
  *(_BYTE*)(a2 + 1) = v7;
  *(_DWORD*)(a2 + 2) = 0;
  *(_WORD*)(a2 + 6) = 0;
  *(_QWORD*)(a2 + 24) = v9;
  *(_DWORD*)(a2 + 32) = v14;
  *(_QWORD*)(a2 + 8) = 0xFFFFFFFFLL;
  *(_QWORD*)(a2 + 16) = v11;
  *(_BYTE*)(a2 + 36) = v17;
  *(_BYTE*)(a2 + 37) = v15;
  *(_BYTE*)(a2 + 38) = v16;
  *(_BYTE*)(a2 + 39) = 0;
  return result;
}

__int64 nvidia_63a200(__int64 a1)
{
  __int64 v2;
  char v3;
  int v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;

  v15 = 0x100000000LL;
  v16 = 0;
  v13 = 0x100000000LL;
  v14 = 0;
  v17 = -1;
  v18 = 1;
  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_BYTE*)(v2 + 362);
  LODWORD(v14) = -1;
  v4 = 2;
  if ((v3 & 0x10) != 0 && (SdkData_10406d2 & 1) == 0) {
    if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v2 + 296) + 32LL))(
             *(_QWORD*)(v2 + 296)) &
         1) != 0) {
      v4 = 2;
    }
    else if (SdkData_10406d3 != 0) {
      v4 = 2;
    }
    else {
      v4 = 1;
    }
  }
  v5 = *(_QWORD*)(a1 + 8);
  LODWORD(v15) = v4;
  result = (*(__int64 (**)(__int64, __int64, _QWORD, __int64, __int64*,
                           __int64))(*(_QWORD*)v5 + 80LL))(
      v5, 2, *(_QWORD*)(a1 + 64), 2304, &v13, a1 + 48);
  if ((_DWORD)result != 0 ||
      (v7 = *(unsigned int*)(a1 + 48), v8 = *(_QWORD*)(a1 + 64), v13 = 0,
       (_DWORD)(result = NvRmMemMap_plt(v7, 0, v8, 1, &v13)) != 0)) {
    v9 = *(_QWORD*)(a1 + 56);
    if (v9 != 0) {
      v10 = result;
      NvRmMemUnmap_plt(*(unsigned int*)(a1 + 48), v9, *(_QWORD*)(a1 + 64));
      result = v10;
      *(_QWORD*)(a1 + 56) = 0;
    }
    v11 = *(_DWORD*)(a1 + 48);
    if (v11 != 0) {
      v12 = result;
      NvRmMemHandleFree_plt(v11);
      *(_DWORD*)(a1 + 48) = 0;
      return v12;
    }
  }
  else {
    *(_QWORD*)(a1 + 56) = v13;
  }
  return result;
}

__int64 nvidia_63a960(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
{
  __int64* v8;
  __int64 v9;
  int v10;
  unsigned int v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v22;
  __int64 v23;
  __int64 v25;
  unsigned int v26;
  __int64 v29;
  __int64 v30;
  __int64 v33;
  __int64 v34;
  int v37;
  __int64 v39;
  _BYTE* v40;
  char v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  char v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  _BYTE* v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v66;
  unsigned __int64 v67;
  unsigned int v69;
  _QWORD v70[2];
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  _QWORD v75[4];

  v8 = (__int64*)(*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 56LL))(
      *(_QWORD*)(a1 + 8));
  v9 = *v8;
  v74 = 0;
  (*(void (**)(__int64*, __int64*))(v9 + 296))(v8, &v74);
  if (a4 != HIDWORD(v74)) {
    return 11;
  }
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v70[0] = 0;
  v70[1] = 0;
  v10 = nvidia_624080(&v71, a4);
  if (v10 != 0) {
    goto LABEL_139;
  }
  if (a4 != 0) {
    v11 = (unsigned __int8)v74;
    v12 = BYTE2(v74) + __clz(HIDWORD(v74)) - 31;
    v13 = -1LL << ((unsigned __int8)v74 + v12);
    v14 = v13;
    if (a4 == 1) {
      v33 = 0;
      v10 = 0;
    }
    else {
      v15 = a3 + 16;
      v16 = 0;
      v17 = 0;
      v10 = 0;
      do {
        v19 = v11;
        if (*(_BYTE*)(v15 - 8) != 0) {
          v19 = *(unsigned __int8*)(v15 - 8);
        }
        if ((v19 > BYTE1(v74) || v19 < (unsigned __int8)v74) && v10 == 0) {
          v10 = 11;
        }
        v22 = v13;
        v23 = v13;
        if (*(_BYTE*)(v15 - 8) != 0) {
          v23 = *(_QWORD*)(v15 - 16);
          v22 = v23 & (-1LL << (*(_BYTE*)(v15 - 8) + v12));
        }
        if (v10 == 0 && v23 != v22) {
          v10 = 11;
        }
        v25 = v71 + v16;
        *(_BYTE*)(v25 + 8) = v19;
        *(_QWORD*)v25 = v22;
        v26 = v11;
        if (*(_BYTE*)(v15 + 8) != 0) {
          v26 = *(unsigned __int8*)(v15 + 8);
        }
        if ((v26 > BYTE1(v74) || v26 < (unsigned __int8)v74) && v10 == 0) {
          v10 = 11;
        }
        v29 = v13;
        v30 = v13;
        if (*(_BYTE*)(v15 + 8) != 0) {
          v30 = *(_QWORD*)v15;
          v29 = *(_QWORD*)v15 & (-1LL << (*(_BYTE*)(v15 + 8) + v12));
        }
        if (v10 == 0 && v30 != v29) {
          v10 = 11;
        }
        v17 -= 2;
        v15 += 32;
        v18 = v71 + v16;
        v16 += 32;
        *(_QWORD*)(v18 + 16) = v29;
        *(_BYTE*)(v18 + 24) = v26;
      } while (-(__int64)(a4 & 0xFFFFFFFFFFFFFFFELL) != v17);
      v33 = -v17;
      if ((a4 & 1) == 0) {
      LABEL_67:
        v40 = (_BYTE*)(a3 + 24);
        v41 = a4 + 3;
        v42 = 0;
        do {
          v44 = a3 + 16 * v42;
          v45 = v41 & 3;
          v46 = *(_BYTE*)(v44 + 8);
          if (v46 != 0) {
            v43 = v42 + 1;
            if (v42 + 1 < a4) {
              v47 = *(_QWORD*)v44;
              v48 = v47 + (1LL << v46);
              if (((a4 - 1 - v42) & 3) != 0) {
                v49 = v45;
                v50 = v40;
                v51 = v42 + 1;
                do {
                  if (*v50 != 0) {
                    v52 = *((_QWORD*)v50 - 1);
                    v53 = v52 + (1LL << *v50);
                    if (v47 > v52) {
                      v52 = v47;
                    }
                    if (v53 >= v48) {
                      v53 = v48;
                    }
                    if (v10 == 0 && v52 < v53) {
                      v10 = 11;
                    }
                  }
                  ++v51;
                  v50 += 16;
                  --v49;
                } while (v49 != 0);
              }
              else {
                v51 = v42 + 1;
              }
              if (a4 - 2 - v42 >= 3) {
                v55 = a3 + 32 + 16 * v51;
                v56 = a4 - v51;
                do {
                  if (*(_BYTE*)(v55 - 24) != 0) {
                    v57 = *(_QWORD*)(v55 - 32);
                    v58 = v57 + (1LL << *(_BYTE*)(v55 - 24));
                    if (v47 > v57) {
                      v57 = v47;
                    }
                    if (v58 >= v48) {
                      v58 = v48;
                    }
                    if (v10 == 0 && v57 < v58) {
                      v10 = 11;
                    }
                  }
                  if (*(_BYTE*)(v55 - 8) != 0) {
                    v60 = *(_QWORD*)(v55 - 16);
                    v61 = v60 + (1LL << *(_BYTE*)(v55 - 8));
                    if (v47 > v60) {
                      v60 = v47;
                    }
                    if (v61 >= v48) {
                      v61 = v48;
                    }
                    if (v10 == 0 && v60 < v61) {
                      v10 = 11;
                    }
                  }
                  if (*(_BYTE*)(v55 + 8) != 0) {
                    v63 = *(_QWORD*)v55;
                    v64 = *(_QWORD*)v55 + (1LL << *(_BYTE*)(v55 + 8));
                    if (v47 > *(_QWORD*)v55) {
                      v63 = v47;
                    }
                    if (v64 >= v48) {
                      v64 = v48;
                    }
                    if (v10 == 0 && v63 < v64) {
                      v10 = 11;
                    }
                  }
                  if (*(_BYTE*)(v55 + 24) != 0) {
                    v66 = *(_QWORD*)(v55 + 16);
                    v67 = v66 + (1LL << *(_BYTE*)(v55 + 24));
                    if (v47 > v66) {
                      v66 = v47;
                    }
                    if (v67 >= v48) {
                      v67 = v48;
                    }
                    if (v10 == 0 && v66 < v67) {
                      v10 = 11;
                    }
                  }
                  v55 += 64;
                  v56 -= 4;
                } while (v56 != 0);
              }
            }
          }
          else {
            v43 = v42 + 1;
          }
          ++v42;
          v40 += 16;
          v41 = v45 + 3;
        } while (v43 != a4);
        if (v10 != 0) {
          goto LABEL_139;
        }
        goto LABEL_130;
      }
    }
    v34 = a3 + 16 * v33;
    if (*(_BYTE*)(v34 + 8) != 0) {
      v11 = *(unsigned __int8*)(v34 + 8);
    }
    if ((v11 > BYTE1(v74) || v11 < (unsigned __int8)v74) && v10 == 0) {
      v37 = 11;
    }
    else {
      v37 = v10;
    }
    if (*(_BYTE*)(v34 + 8) != 0) {
      v13 = *(_QWORD*)v34;
      v14 = *(_QWORD*)v34 & (-1LL << (*(_BYTE*)(v34 + 8) + v12));
    }
    if (v37 != 0 || v13 == v14) {
      v10 = v37;
    }
    else {
      v10 = 11;
    }
    v39 = v71 + 16 * v33;
    *(_QWORD*)v39 = v14;
    *(_BYTE*)(v39 + 8) = v11;
    goto LABEL_67;
  }
LABEL_130:
  if (a2 != 0) {
    if (a2 == 1) {
      LOBYTE(v70[0]) = 2;
      if (HIDWORD(a4) == 0) {
        goto LABEL_133;
      }
    }
  }
  else {
    LOBYTE(v70[0]) = 1;
    if (HIDWORD(a4) == 0) {
    LABEL_133:
      HIDWORD(v70[0]) = a4;
      v75[0] = v70;
      v75[1] = 16;
      v75[2] = v71;
      v75[3] = 16 * v72;
      if (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 56LL) <= 0xAu) {
        v10 = 2;
      }
      else {
        v10 =
            nvidia_644cf0(*(unsigned int*)(a1 + 24), 1074810891, v75, 2, 0, 0);
        if (v10 == 0) {
          v10 = 0;
        }
      }
      goto LABEL_139;
    }
  }
  v10 = 11;
LABEL_139:
  v69 = v10;
  nvidia_624080(&v71, 0);
  NvOsFree_plt(v71);
  return v69;
}

__int64 nvidia_63ae30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64* v6;
  __int64 v7;
  __int64 v8;
  _QWORD v10[2];
  _QWORD v11[4];
  _QWORD v12[2];
  __int64 v13;

  v6 = (__int64*)(*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 56LL))(
      *(_QWORD*)(a1 + 8));
  v7 = *v6;
  v13 = 0;
  (*(void (**)(__int64*, __int64*))(v7 + 296))(v6, &v13);
  if (BYTE2(v13) <= 2u) {
    v8 = 0;
  }
  else {
    v8 = 1LL << (BYTE2(v13) - 3);
  }
  if (a3 != v8) {
    return 11;
  }
  v10[0] = 0;
  v10[1] = a3;
  v11[0] = 0;
  v11[1] = 0;
  v11[2] = a2;
  v11[3] = a3;
  v12[0] = v10;
  v12[1] = 16;
  if (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 56LL) <= 0xCu) {
    return 2;
  }
  else {
    return nvidia_644cf0(*(unsigned int*)(a1 + 24), 1074810893, v12, 1, v11, 2);
  }
}

__int64 nvidia_63af30(__int64 a1)
{
  if (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 56LL) < 0xCu) {
    return 2;
  }
  else {
    return nvidia_644ce0(*(unsigned int*)(a1 + 24), 20492);
  }
}

__int64 nvidia_63b090(unsigned int* a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v9;
  unsigned int v10;
  _QWORD v12[2];
  _QWORD v13[2];

  v4 = a4 + 32;
  if (a4 == -32) {
    v9 = 0;
  }
  else {
    v9 = NvOsAlloc_plt(a4 + 32);
    if (v9 == 0) {
      return 6;
    }
  }
  v13[0] = v9;
  v13[1] = v4;
  v12[0] = v9;
  v12[1] = v4;
  memcpy_plt(v9, a2, 32);
  memcpy_plt(v9 + 32, a3, a4);
  if (*(_DWORD*)(*((_QWORD*)a1 + 1) + 56LL) < 9u) {
    v10 = 2;
  }
  else {
    v10 = nvidia_644cf0(*a1, 3223343113LL, v13, 1, v12, 1);
  }
  memcpy_plt(a2, v9, 32);
  memcpy_plt(a3, v9 + 32, a4);
  NvOsFree_plt(v9);
  return v10;
}

__int64 nvidia_63b210(__int64 a1, unsigned int* a2)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 result;
  _QWORD v12[2];
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  SdkRoutine_62d0e0(*(_QWORD*)(a1 + 8));
  v4 = *a2;
  SdkRoutine_62d0e0(*(_QWORD*)(a1 + 8));
  v5 = a2[1];
  v6 = (unsigned int*)SdkRoutine_62aaa0(*(_QWORD*)(a1 + 8));
  v7 = *((_QWORD*)a2 + 1);
  v8 = *((_QWORD*)a2 + 2);
  v9 = *((unsigned __int8*)a2 + 24);
  v15 = 0;
  v16 = 0;
  v13 = 0;
  v14 = 0;
  v12[0] = v8;
  v12[1] = v7;
  if (v9 == 1) {
    LODWORD(v15) = 1;
  }
  v10 = *((_QWORD*)v6 + 1);
  v14 = __PAIR64__(v5, v4);
  if (*(_DWORD*)(v10 + 56) < 4u) {
    return 2;
  }
  result = nvidia_644da0(*v6, 3224391684LL, v12, 48);
  if ((_DWORD)result == 0) {
    *(_QWORD*)(a1 + 24) = v13;
  }
  return result;
}

__int64 nvidia_63b2e0(__int64 a1)
{
  unsigned int* v1;

  v1 = (unsigned int*)SdkRoutine_62aaa0(*(_QWORD*)(a1 + 8));
  if (*(_DWORD*)(*((_QWORD*)v1 + 1) + 56LL) < 5u) {
    return 2;
  }
  else {
    return nvidia_644ce0(*v1, 20485);
  }
}

__int64 nvidia_63b330(__int64 a1, __int64 a2)
{
  __int64 v2;

  *(_DWORD*)a2 = *(_DWORD*)(a1 + 32);
  v2 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a2 + 8) = v2;
  return 0;
}

__int64 nvidia_63b590(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64* v5;

  result = nvidia_629d80((_QWORD*)a1, a2);
  v5 = SdkData_e89ae8[0];
  *(_QWORD*)(a1 + 24) = a2;
  *(_BYTE*)(a1 + 36) = 0;
  *(_DWORD*)(a1 + 32) = -1;
  *(_BYTE*)(a1 + 56) = 0;
  *(_QWORD*)a1 = v5 + 2;
  *(_QWORD*)(a1 + 40) = a2 + 280;
  *(_QWORD*)(a1 + 48) = 0;
  return result;
}

__int64 nvidia_63b5f0(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64* v5;
  __int64 v6;

  result = nvidia_629d80((_QWORD*)a1, a2);
  v5 = SdkData_e89ae8[0];
  *(_BYTE*)(a1 + 56) = 0;
  *(_QWORD*)a1 = v5 + 2;
  v6 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a1 + 32) = 0;
  *(_BYTE*)(a1 + 36) = 0;
  *(_DWORD*)(a1 + 32) = -1;
  *(_QWORD*)(a1 + 24) = v6;
  *(_QWORD*)(a1 + 40) = v6 + 280;
  *(_QWORD*)(a1 + 48) = a2;
  return result;
}

__int64 nvidia_63b650(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v9;

  if (*(_BYTE*)(a1 + 56) == 1) {
    if (*(_DWORD*)(*(_QWORD*)(a1 + 24) + 316LL) < 0x1Fu) {
      v9 = 0xFFFFFFFFLL;
      if (*(_DWORD*)(*(_QWORD*)(a1 + 40) + 36LL) >= 2u) {
        v4 = *(unsigned int*)(a1 + 32);
        v5 = 1074283521;
      LABEL_10:
        v6 = nvidia_644da0(v4, v5, &v9, 8);
        *(_BYTE*)(a1 + 56) = 0;
        v7 = *(unsigned int*)(a1 + 32);
        if ((_DWORD)v7 == -1) {
          return v6;
        }
        goto LABEL_6;
      }
    }
    else {
      v3 = *(_QWORD*)(a1 + 40);
      v2 = *(_QWORD*)(a1 + 48);
      v9 = 0;
      LODWORD(v9) = *(_DWORD*)(v2 + 48);
      if (*(_DWORD*)(v3 + 36) >= 0x1Fu) {
        v4 = *(unsigned int*)(a1 + 32);
        v5 = 1074283551;
        goto LABEL_10;
      }
    }
    v6 = 2;
    *(_BYTE*)(a1 + 56) = 0;
    v7 = *(unsigned int*)(a1 + 32);
    if ((_DWORD)v7 == -1) {
      return v6;
    }
  LABEL_6:
    NvOsDrvClose_plt(v7);
    *(_DWORD*)(a1 + 32) = -1;
    return v6;
  }
  v6 = 0;
  v7 = *(unsigned int*)(a1 + 32);
  if ((_DWORD)v7 != -1) {
    goto LABEL_6;
  }
  return v6;
}

__int64 nvidia_63b750(__int64 a1, _DWORD** a2)
{
  __int64 v2;
  _DWORD* v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v7;
  _DWORD** v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  _DWORD** v12;
  __int64 v13;
  __int64 v14;

  v2 = *(_QWORD*)(a1 + 24);
  if (*(_DWORD*)(v2 + 316) < 2u) {
    return 2;
  }
  v3 = *a2;
  if (*a2 == nullptr) {
    if (*(_DWORD*)(a1 + 32) == -1) {
      v7 = a1;
      v8 = a2;
      v9 = 64;
      if (*(_QWORD*)(a1 + 48) == 0) {
        v9 = 80;
      }
      v10 = NvOsDrvOpen_plt(*(_QWORD*)(v2 + v9));
      a2 = v8;
      v4 = v10;
      a1 = v7;
      *(_DWORD*)(v7 + 32) = v4;
      if (v4 == -1) {
        v5 = 196625;
        goto LABEL_22;
      }
      goto LABEL_15;
    }
  LABEL_10:
    v5 = 8;
    goto LABEL_22;
  }
  if (*v3 != 1) {
    v5 = 11;
    goto LABEL_22;
  }
  if (*(_DWORD*)(a1 + 32) != -1) {
    goto LABEL_10;
  }
  *(_DWORD*)(a1 + 32) = v3[1];
  v3[1] = -1;
  v4 = *(_DWORD*)(a1 + 32);
  if (v4 == -1) {
    v5 = 15;
    goto LABEL_22;
  }
LABEL_15:
  v11 = *(_QWORD*)(a1 + 48);
  if (v11 == 0) {
    return 0;
  }
  v14 = *(unsigned int*)(v11 + 48);
  if (*(_DWORD*)(*(_QWORD*)(a1 + 40) + 36LL) < 2u) {
    v5 = 2;
  }
  else {
    v12 = a2;
    v13 = a1;
    v5 = nvidia_644da0(v4, 1074283521, &v14, 8);
    a1 = v13;
    a2 = v12;
  }
  *(_BYTE*)(a1 + 56) = v5 == 0;
LABEL_22:
  if (v5 == 0 || *a2 == nullptr) {
    return v5;
  }
  *(_DWORD*)(a1 + 32) = -1;
  return v5;
}

__int64 nvidia_63b8e0(__int64 a1, _QWORD* a2)
{
  __int64 v4;
  _BYTE* v5;
  __int64 result;
  unsigned int v7;

  v4 = NvOsAlloc_plt(32);
  if (v4 == 0) {
    return 6;
  }
  v5 = (_BYTE*)v4;
  nvidia_6396d0(v4, a1);
  result = nn_os_detail_AddNativeWaitHolder();
  if ((_DWORD)result != 0) {
    v7 = result;
    (**(void (***)(_BYTE*))v5)(v5);
    v5[17] = 1;
    (*(void (**)(_BYTE*))(*(_QWORD*)v5 + 8LL))(v5);
    NvOsFree_plt(v5);
    return v7;
  }
  else {
    *a2 = v5;
  }
  return result;
}

__int64 nvidia_63be50(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result;
  int v5;
  struct {
    __int128 v6;
    int v7;
    int v8;
  } v6_;
  _QWORD v9[3];
  __int64 v10[4];
  _QWORD v11[2];

  v9[1] = 0;
  v9[0] = a3;
  v11[0] = v9;
  v11[1] = 24;
  v9[2] = 24;
  v10[0] = (__int64)v9;
  v10[3] = 24;
  v10[1] = 24;
  v10[2] = (__int64)&v6_.v6;
  if (*(_DWORD*)(*(_QWORD*)(a1 + 40) + 36LL) <= 0x25u) {
    return 2;
  }
  result = nvidia_644cf0_alt1(*(unsigned int*)(a1 + 32), 3222815782LL, v11, 1,
                              v10, 2u);
  if ((_DWORD)result == 0) {
    *(_OWORD*)a2 = v6_.v6;
    v5 = v6_.v8;
    *(_DWORD*)(a2 + 16) = v6_.v7;
    *(_DWORD*)(a2 + 20) = v5;
  }
  return result;
}

__int64 nvidia_63bf10(__int64 a1, unsigned int a2)
{
  __int64 v2;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 40);
  v4 = a2;
  if (*(_DWORD*)(v2 + 36) < 0x27u) {
    return 2;
  }
  else {
    return nvidia_644da0(*(unsigned int*)(a1 + 32), 1074283559, &v4, 8);
  }
}

__int64 nvidia_63bf70(__int64 a1, int a2, _BYTE* a3, _DWORD* a4)
{
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  _BYTE* v8;
  _DWORD* v9;
  __int64 result;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;

  if (a2 != 0) {
    if (a2 != 1) {
      return 11;
    }
    v6 = 2;
  }
  else {
    v6 = 1;
  }
  v14 = v4;
  v15 = v5;
  v11 = v6;
  v7 = *(_QWORD*)(a1 + 40);
  v13 = 0;
  v12 = 0;
  if (*(_DWORD*)(v7 + 36) < 0x25u) {
    result = 2;
    if (a3 == nullptr) {
      goto LABEL_11;
    }
  }
  else {
    v8 = a3;
    v9 = a4;
    result = nvidia_644da0(*(unsigned int*)(a1 + 32), 3222291493LL, &v11, 16);
    a4 = v9;
    a3 = v8;
    if (v8 == nullptr) {
    LABEL_11:
      if (a4 != nullptr) {
        *a4 = HIDWORD(v12);
      }
      return result;
    }
  }
  if ((unsigned int)v12 <= 1) {
    *a3 = v12;
    goto LABEL_11;
  }
  if ((_DWORD)result != 0) {
    return (unsigned int)result;
  }
  else {
    return 11;
  }
}

__int64 nvidia_63c040(__int64 a1, int a2, unsigned int a3, unsigned int a4,
                      unsigned int a5)
{
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  _QWORD v10[4];

  if (a2 != 0) {
    if (a2 != 1) {
      return 11;
    }
    v7 = 2;
  }
  else {
    v7 = 1;
  }
  v10[2] = v5;
  v10[3] = v6;
  v10[0] = __PAIR64__(a3, v7);
  v8 = *(_QWORD*)(a1 + 40);
  v10[1] = __PAIR64__(a5, a4);
  if (*(_DWORD*)(v8 + 36) < 0x2Bu) {
    return 2;
  }
  else {
    return nvidia_644da0(*(unsigned int*)(a1 + 32), 1074807851, v10, 16);
  }
}

__int64 nvidia_63c0c0(__int64 a1, unsigned int a2)
{
  __int64 v2;
  __int64 v4;

  v4 = 0;
  if (a2 > 2) {
    return 11;
  }
  v2 = *(_QWORD*)(a1 + 40);
  LODWORD(v4) = a2;
  if (*(_DWORD*)(v2 + 36) < 3u) {
    return 2;
  }
  else {
    return nvidia_644da0(*(unsigned int*)(a1 + 32), 1074283523, &v4, 8);
  }
}

__int64 nvidia_63c140(__int64 a1, char a2)
{
  __int64 v3;

  v3 = a2 & 1;
  if (*(_DWORD*)(*(_QWORD*)(a1 + 40) + 36LL) < 0x24u) {
    return 2;
  }
  else {
    return nvidia_644da0(*(unsigned int*)(a1 + 32), 1074283556, &v3, 8);
  }
}

__int64 nvidia_63c1a0(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  int v6;
  __int64 v7;
  __int64 v8;

  if (a2 == 1) {
    v4 = 2;
  }
  else {
    if (a2 != 0) {
      return 11;
    }
    v4 = 1;
  }
  v7 = v2;
  v8 = v3;
  v6 = v4;
  if (*(_DWORD*)(*(_QWORD*)(a1 + 40) + 36LL) < 4u) {
    return 2;
  }
  else {
    return nvidia_644da0(*(unsigned int*)(a1 + 32), 1074021380, &v6, 4);
  }
}

__int64 nvidia_63c220(__int64 a1)
{
  if (*(_BYTE*)((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1) + 24) !=
      0) {
    return 0;
  }
  else {
    return 2;
  }
}

__int64 nvidia_63c250(__int64 a1, unsigned int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v6;
  __int64 v7;
  __int64 v8;

  if (a2 > 1) {
    return 11;
  }
  v7 = v2;
  v8 = v3;
  v4 = *(_QWORD*)(a1 + 40);
  v6 = a2;
  if (*(_DWORD*)(v4 + 36) < 5u) {
    return 2;
  }
  else {
    return nvidia_644da0(*(unsigned int*)(a1 + 32), 1074021381, &v6, 4);
  }
}

__int64 nvidia_63c2c0(__int64 a1, unsigned int a2)
{
  __int64 v2;
  __int64 v4;

  v4 = 0;
  if (a2 > 2) {
    return 11;
  }
  v2 = *(_QWORD*)(a1 + 40);
  LODWORD(v4) = a2;
  if (*(_DWORD*)(v2 + 36) < 0x23u) {
    return 2;
  }
  else {
    return nvidia_644da0(*(unsigned int*)(a1 + 32), 3221767203LL, &v4, 8);
  }
}

__int64 nvidia_63c340(__int64 a1, unsigned int a2)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v7;

  v2 = *(_QWORD*)(a1 + 40);
  v7 = a2;
  v3 = *(_DWORD*)(v2 + 36);
  v4 = *(_QWORD*)(v2 + 80) & 0x100000000LL;
  if (v3 < 0x22 || v4 == 0) {
    return 2;
  }
  else {
    return nvidia_644da0(*(unsigned int*)(a1 + 32), 1074283554, &v7, 8);
  }
}

__int64 nvidia_63c3b0(__int64 a1, unsigned int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD v6[3];

  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 264LL) + 24LL) +
                4LL) != 1) {
    return 0;
  }
  v6[1] = v2;
  v6[2] = v3;
  v6[0] = 0;
  if (a2 > 1) {
    return 11;
  }
  v4 = *(_QWORD*)(a1 + 40);
  LODWORD(v6[0]) = a2;
  if (*(_DWORD*)(v4 + 36) < 9u) {
    return 2;
  }
  else {
    return nvidia_644da0(*(unsigned int*)(a1 + 32), 1074283529, v6, 8);
  }
}

__int64 nvidia_63c450(__int64 a1, unsigned int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v6;
  __int64 v7;
  __int64 v8;

  if (a2 > 1) {
    return 11;
  }
  v7 = v2;
  v8 = v3;
  v4 = *(_QWORD*)(a1 + 40);
  v6 = a2;
  if (*(_DWORD*)(v4 + 36) < 0x28u) {
    return 2;
  }
  else {
    return nvidia_644da0(*(unsigned int*)(a1 + 32), 1074021416, &v6, 4);
  }
}

__int64 nvidia_63c4c0(__int64 a1, _DWORD* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 40);
  v5 = 0;
  if (*(_DWORD*)(v2 + 36) < 0xBu) {
    result = 2;
  LABEL_9:
    *a2 = 1;
    return result;
  }
  LODWORD(result) =
      nvidia_644da0(*(unsigned int*)(a1 + 32), 2148025355LL, &v5, 8);
  if ((_DWORD)result != 0) {
    result = (unsigned int)result;
  }
  else {
    result = 0;
  }
  if ((_DWORD)v5 == 0) {
    goto LABEL_9;
  }
  if ((_DWORD)v5 == 1) {
    *a2 = 0;
  }
  else if ((_DWORD)result != 0) {
    return (unsigned int)result;
  }
  else {
    return 11;
  }
  return result;
}

__int64 nvidia_63c560(__int64 a1, int a2)
{
  __int64 v3;

  v3 = 0;
  if (a2 == 1) {
    LODWORD(v3) = 0;
    if (*(_DWORD*)(*(_QWORD*)(a1 + 40) + 36LL) >= 0xAu) {
      return nvidia_644da0(*(unsigned int*)(a1 + 32), 1074283530, &v3, 8);
    }
    return 2;
  }
  if (a2 == 0) {
    LODWORD(v3) = 1;
    if (*(_DWORD*)(*(_QWORD*)(a1 + 40) + 36LL) >= 0xAu) {
      return nvidia_644da0(*(unsigned int*)(a1 + 32), 1074283530, &v3, 8);
    }
    return 2;
  }
  return 11;
}

__int64 nvidia_63c5f0(__int64 a1, unsigned int a2, __int64 a3, _QWORD* a4)
{
  __int64 result;
  __int64 v9;
  __int64 v10;
  _QWORD v11[2];
  __int64 v12;

  result = NvRmMemLoadMapBufferSgl_plt(a2);
  if ((_DWORD)result == 0) {
    v9 = *(_QWORD*)(a1 + 40);
    v11[0] = a2;
    v11[1] = a3;
    v12 = 0;
    if (*(_DWORD*)(v9 + 36) < 7u) {
      v10 = 0;
      result = 2;
    }
    else {
      result = nvidia_644da0(*(unsigned int*)(a1 + 32), 3222815751LL, v11, 24);
      v10 = v12;
    }
    *a4 = v10;
  }
  return result;
}

__int64 nvidia_63c680(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 40);
  v4 = a2;
  if (*(_DWORD*)(v2 + 36) < 8u) {
    return 2;
  }
  else {
    return nvidia_644da0(*(unsigned int*)(a1 + 32), 1074283528, &v4, 8);
  }
}

__int64 nvidia_63c6e0(__int64 a1, int a2, __int64 a3, __int64 a4, int a5,
                      __int64 a6)
{
  _QWORD v7[2];
  __int64 v8;
  _QWORD v9[4];
  _QWORD v10[2];

  v8 = 0;
  if (a4 == 0) {
    return 0;
  }
  LODWORD(v8) = a5;
  v7[1] = a3;
  v9[2] = a6;
  v9[3] = a4;
  LODWORD(v7[0]) = 1;
  HIDWORD(v7[0]) = a2;
  v10[0] = v7;
  v10[1] = 24;
  v9[0] = v7;
  v9[1] = 24;
  if (*(_DWORD*)(*(_QWORD*)(a1 + 40) + 36LL) <= 0xDu) {
    return 2;
  }
  else {
    return nvidia_644cf0(*(unsigned int*)(a1 + 32), 3222815758LL, v10, 1, v9,
                         2);
  }
}

__int64 nvidia_63c780(__int64 a1, int a2, __int64 a3, __int64 a4, int a5,
                      __int64 a6)
{
  _QWORD v7[2];
  int v8;
  int v9;
  _QWORD v10[2];
  _QWORD v11[4];

  v7[1] = a3;
  v9 = 0;
  v8 = a5;
  v11[2] = a6;
  v11[3] = a4;
  LODWORD(v7[0]) = 2;
  HIDWORD(v7[0]) = a2;
  v11[0] = v7;
  v11[1] = 24;
  v10[0] = v7;
  v10[1] = 24;
  if (*(_DWORD*)(*(_QWORD*)(a1 + 40) + 36LL) <= 0xDu) {
    return 2;
  }
  else {
    return nvidia_644cf0(*(unsigned int*)(a1 + 32), 3222815758LL, v11, 2, v10,
                         1);
  }
}

__int64 nvidia_63c800(__int64 a1, _DWORD* a2)
{
  __int64 v2;
  __int64 result;
  int v5;

  v2 = *(_QWORD*)(a1 + 40);
  v5 = 0;
  if (*(_DWORD*)(v2 + 36) < 0xCu) {
    return 2;
  }
  result = nvidia_644da0(*(unsigned int*)(a1 + 32), 2147763212LL, &v5, 4);
  if ((_DWORD)result == 0) {
    *a2 = v5;
  }
  return result;
}

__int64 nvidia_63c880(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3;
  _QWORD v5[4];

  v5[2] = a2;
  v5[3] = a3;
  v3 = *(_QWORD*)(a1 + 40);
  v5[0] = 0;
  v5[1] = 0;
  if (*(_DWORD*)(v3 + 36) < 0xDu) {
    return 2;
  }
  else {
    return nvidia_644cf0(*(unsigned int*)(a1 + 32), 17421, 0, 0, v5, 2);
  }
}

__int64 nvidia_63c8f0(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4)
{
  unsigned int v4;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v4 = *(_DWORD*)(a2 + 24);
  v11 = 0;
  v12 = 0;
  v10 = v4;
  if (*(_DWORD*)(*(_QWORD*)(a1 + 40) + 36LL) < 0x29u) {
    v8 = 0;
    v9 = 0;
    result = 2;
  }
  else {
    result = nvidia_644da0(*(unsigned int*)(a1 + 32), 3222815785LL, &v10, 24);
    v9 = v11;
    v8 = v12;
  }
  *a3 = v9;
  *a4 = v8;
  return result;
}

__int64 nvidia_63c970(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3;
  _QWORD v5[2];

  v3 = *(_DWORD*)(a2 + 24);
  v5[1] = a3;
  v5[0] = v3;
  if (*(_DWORD*)(*(_QWORD*)(a1 + 40) + 36LL) < 0x2Au) {
    return 2;
  }
  else {
    return nvidia_644da0(*(unsigned int*)(a1 + 32), 1074807850, v5, 16);
  }
}

__int64 nvidia_63c9d0(__int64 a1)
{
  unsigned int v1;
  __int64 v2;

  *(_QWORD*)a1 = SdkData_e74a58;
  v1 = *(_DWORD*)(a1 + 32);
  if (v1 != -1) {
    v2 = a1;
    NvOsDrvClose_plt(v1);
    a1 = v2;
    *(_DWORD*)(v2 + 32) = -1;
  }
  return SdkRoutine_629ca0_alt1(a1);
}

void nvidia_63ca30(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = SdkData_e89ae8[0] + 2;
  v2 = *(unsigned int*)(a1 + 32);
  if ((_DWORD)v2 != -1) {
    NvOsDrvClose_plt(v2);
    *(_DWORD*)(a1 + 32) = -1;
  }
  SdkRoutine_629ca0_alt1(a1);
  nn_os_detail_RemoveNativeWaitHolder();
}

__int64 nvidia_63ca90(unsigned int* a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v9;
  unsigned int v10;
  _QWORD v12[2];
  _QWORD v13[2];

  v4 = a4 + 16;
  if (a4 == -16) {
    v9 = 0;
  }
  else {
    v9 = NvOsAlloc_plt(a4 + 16);
    if (v9 == 0) {
      return 6;
    }
  }
  v13[0] = v9;
  v13[1] = v4;
  v12[0] = v9;
  v12[1] = v4;
  memcpy_plt(v9, a2, 16);
  memcpy_plt(v9 + 16, a3, a4);
  if (*(_DWORD*)(*((_QWORD*)a1 + 1) + 36LL) < 2u) {
    v10 = 2;
  }
  else {
    v10 = nvidia_644cf0(*a1, 3222291458LL, v13, 1, v12, 1);
  }
  memcpy_plt(a2, v9, 16);
  memcpy_plt(a3, v9 + 16, a4);
  NvOsFree_plt(v9);
  return v10;
}

__int64 nvidia_63cb90(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64* v5;

  result = nvidia_629dc0((_QWORD*)a1, a2);
  v5 = SdkData_e89af0[0];
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_DWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 85) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_DWORD*)(a1 + 88) = -1;
  *(_QWORD*)a1 = v5 + 2;
  *(_QWORD*)(a1 + 96) = a2 + 280;
  return result;
}

__int64 nvidia_63cbf0(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  __int64 v16;
  char v17;
  __int64 v18;
  char v19;

  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  v5 = a2[3];
  v18 = 0;
  v19 = 0;
  *(_QWORD*)(a1 + 40) = v4;
  *(_QWORD*)(a1 + 48) = v5;
  *(_QWORD*)(a1 + 24) = v2;
  *(_QWORD*)(a1 + 32) = v3;
  v8 = a2[5];
  v9 = a2[6];
  v10 = a2[7];
  *(_QWORD*)(a1 + 56) = a2[4];
  *(_QWORD*)(a1 + 64) = v8;
  v11 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 72) = v9;
  *(_QWORD*)(a1 + 80) = v10;
  v12 = nvidia_629f40(&v18, *(_QWORD*)(v11 + 144), (__int64)"-");
  v16 = 0;
  v17 = 0;
  if (v12 != 0 || (v12 = nvidia_629f40(&v16, v18, (__int64)a2)) != 0) {
    v13 = v12;
  }
  else if (*(_DWORD*)(a1 + 88) == -1) {
    v14 = NvOsDrvOpen_plt(v16);
    *(_DWORD*)(a1 + 88) = v14;
    if (v14 == -1) {
      v13 = 196625;
    }
    else {
      v13 = 0;
    }
  }
  else {
    v13 = 8;
  }
  nvidia_629e00((__int64)&v16);
  nvidia_629e00((__int64)&v18);
  return v13;
}

__int64 nvidia_63ccd0(__int64 a1)
{
  __int64 v2;

  v2 = *(unsigned int*)(a1 + 88);
  if ((_DWORD)v2 != -1) {
    NvOsDrvClose_plt(v2);
    *(_DWORD*)(a1 + 88) = -1;
  }
  return 0;
}

_QWORD* nvidia_63cd10(_QWORD* result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = result[3];
  v3 = result[4];
  v4 = result[6];
  a2[2] = result[5];
  a2[3] = v4;
  *a2 = v2;
  a2[1] = v3;
  v5 = result[7];
  v6 = result[8];
  v7 = result[10];
  a2[6] = result[9];
  a2[7] = v7;
  a2[4] = v5;
  a2[5] = v6;
  return result;
}

__int64 nvidia_63cd50(__int64 a1)
{
  unsigned int v1;
  __int64 v2;

  *(_QWORD*)a1 = SdkData_e74b98;
  v1 = *(_DWORD*)(a1 + 88);
  if (v1 != -1) {
    v2 = a1;
    NvOsDrvClose_plt(v1);
    a1 = v2;
    *(_DWORD*)(v2 + 88) = -1;
  }
  return SdkRoutine_629ca0_alt1(a1);
}

void nvidia_63cdb0(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = SdkData_e89af0[0] + 2;
  v2 = *(unsigned int*)(a1 + 88);
  if ((_DWORD)v2 != -1) {
    NvOsDrvClose_plt(v2);
    *(_DWORD*)(a1 + 88) = -1;
  }
  SdkRoutine_629ca0_alt1(a1);
  nn_os_detail_RemoveNativeWaitHolder();
}

_BYTE* nvidia_63cec0(_BYTE* result, _DWORD* a2)
{
  _BYTE* v2;
  unsigned int v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  bool v7;
  int v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  bool v12;
  int v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v20;

  if (*a2 == 0) {
    v2 = result;
    if (*(_BYTE*)((*(__int64 (**)(_BYTE*))(*(_QWORD*)result + 32LL))(result) +
                  8) == 1) {
      v3 = *(_DWORD*)((*(__int64 (**)(_BYTE*))(*(_QWORD*)v2 + 32LL))(v2) + 12);
      v20 = 0;
      if (v3 > 2 || ((LODWORD(v20) = v3, v4 = *((_QWORD*)v2 + 7),
                      v5 = *(_DWORD*)(v4 + 60),
                      v6 = *(_QWORD*)(v4 + 80) & 0x100LL, v5 >= 7)
                         ? (v7 = v6 == 0)
                         : (v7 = true),
                     v7 || (v8 = nvidia_644da0_alt1(*((unsigned int*)v2 + 12),
                                                    3221771271LL, (__int64)&v20,
                                                    8)) != 0)) {
        fprintf_plt(*(_QWORD*)SdkData_e86b68[0],
                    "libnvrm_gpu.so: failed to set TSG interleave\n");
      }
    }
    result = (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v2 + 32LL))(v2);
    if (result[16] == 1) {
      LODWORD(v20) =
          *(_DWORD*)((*(__int64 (**)(_BYTE*))(*(_QWORD*)v2 + 32LL))(v2) + 20);
      v9 = *((_QWORD*)v2 + 7);
      v10 = *(_DWORD*)(v9 + 60);
      v11 = *(_QWORD*)(v9 + 80) & 0x100LL;
      v12 = v10 < 8 || v11 == 0;
      if (v12 || (_DWORD)(result = (_BYTE*)nvidia_644da0_alt1(
                              *((unsigned int*)v2 + 12), 3221509128LL,
                              (__int64)&v20, 4)) != 0) {
        result = (_BYTE*)fprintf_plt(
            *(_QWORD*)SdkData_e86b68[0],
            "libnvrm_gpu.so: failed to set TSG timeslice\n");
      }
    }
    v13 = 11;
    v14 = *SdkData_e89b00[0];
    if (*SdkData_e89b00[0] > 0) {
      if (v14 == 2) {
        v15 = 4;
      }
      else {
        if (v14 != 1) {
          return (_BYTE*)fprintf_plt(
              *(_QWORD*)SdkData_e86b68[0],
              "libnvrm_gpu.so: failed to override L2 sector promotion mode for "
              "a TSG (err=%u)\n",
              v13);
        }
        v15 = 2;
      }
    }
    else {
      if (v14 == -1) {
        return result;
      }
      if (v14 != 0) {
        return (_BYTE*)fprintf_plt(*(_QWORD*)SdkData_e86b68[0],
                                   "libnvrm_gpu.so: failed to override L2 "
                                   "sector promotion mode for a TSG (err=%u)\n",
                                   v13);
      }
      v15 = 1;
    }
    v20 = v15;
    v16 = *((_QWORD*)v2 + 7);
    v17 = *(_DWORD*)(v16 + 60);
    v18 = *(_QWORD*)(v16 + 80) & 0x100LL;
    if (v17 < 0xD || v18 == 0) {
      v13 = 2;
    }
    else {
      result = (_BYTE*)nvidia_644da0_alt1(*((unsigned int*)v2 + 12),
                                          3221771277LL, (__int64)&v20, 8);
      if ((_DWORD)result == 0) {
        return result;
      }
      v13 = (int)result;
    }
    return (_BYTE*)fprintf_plt(*(_QWORD*)SdkData_e86b68[0],
                               "libnvrm_gpu.so: failed to override L2 sector "
                               "promotion mode for a TSG (err=%u)\n",
                               v13);
  }
  return result;
}

__int64 nvidia_63d0c0(__int64 result, int* a2, unsigned __int8* a3)
{
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v7;
  int* v9;
  __int64 v10;
  int v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  int v17;
  __int64 v18[3];
  __int64 v19;

  if (*a2 != 0) {
    return result;
  }
  v18[1] = v3;
  v18[2] = v4;
  if (*a3 != 0 || a3[1] != 0 || a3[2] != 0 || a3[3] != 0 || a3[4] != 0 ||
      a3[5] != 0 || a3[6] != 0 || a3[7] != 0 || a3[8] != 0 || a3[9] != 0 ||
      a3[10] != 0 || a3[11] != 0 || a3[12] != 0 || a3[13] != 0 || a3[14] != 0 ||
      a3[15] != 0) {
    v19 = 0;
    v18[0] = 0;
    v7 = result;
    nvidia_624770((__int64)a3, v18, &v19);
    if (v19 == *(_QWORD*)(*(_QWORD*)(v7 + 8) + 1848LL)) {
      result = nvstl_mutex_impl_nvos_624540(
          *(_QWORD**)((char*)((_UNKNOWN*)0x88LL) + v18[0]), v18[0], v19, a3);
      v9 = a2;
      if ((_DWORD)result != 0) {
        goto LABEL_27;
      }
      if (*(_DWORD*)(v7 + 48) != -1) {
        result = 8;
        goto LABEL_27;
      }
      v16 = v18[0];
      v17 = *(_DWORD*)((char*)((__int64*)0x30LL) + v18[0]);
      *(_DWORD*)(v7 + 48) = v17;
      if (v17 != -1) {
        result = (__int64)nvidia_6240f0(
            *(atomic_ullong**)((char*)((_UNKNOWN*)0x88LL) + v16),
            (atomic_ullong**)(v7 + 136));
        *((_BYTE*)a2 + 4) = 1;
        return result;
      }
      result = 15;
    }
    else {
      result = 196624;
    }
    v9 = a2;
  LABEL_27:
    *((_BYTE*)v9 + 4) = 1;
    if (*v9 == 0) {
      *v9 = result;
    }
    return result;
  }
  if (*(_QWORD*)(*(_QWORD*)(result + 8) + 216LL) == 0) {
    v5 = 2;
    goto LABEL_30;
  }
  if (*(_DWORD*)(result + 48) != -1) {
    v5 = 8;
  LABEL_30:
    *a2 = v5;
    *((_BYTE*)a2 + 4) = 1;
    return result;
  }
  v10 = result;
  result = NvOsDrvOpen_plt(*(_QWORD*)(*(_QWORD*)(result + 8) + 216LL));
  v12 = *a2;
  *(_DWORD*)(v10 + 48) = result;
  *((_BYTE*)a2 + 4) = 1;
  if ((_DWORD)result == -1) {
    if (v12 == 0) {
      *a2 = 196625;
    }
  }
  else if (v12 == 0) {
    v13 = *(_QWORD*)(v10 + 8);
    v14 = *(_DWORD*)(v13 + 412);
    if (__PAIR64__(v14, *(_DWORD*)(*(_QWORD*)(v13 + 280) + 144LL)) != 0) {
      v15 = *(_DWORD*)(*(_QWORD*)(v13 + 280) + 144LL) == 0;
    }
    else {
      v15 = *(_DWORD*)(v13 + 412);
    }
    result = nvidia_623f20(v15, v14, (__int64*)(v10 + 136));
    *((_BYTE*)a2 + 4) = 1;
    if ((_DWORD)result != 0 && *a2 == 0) {
      *a2 = result;
    }
  }
  return result;
}

__int64 nvidia_63d350(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 result;
  void (***v8)(_QWORD);
  unsigned int v9;
  void (***v10)(_QWORD);
  void (***v11)(_QWORD);
  unsigned int v12;
  char v13;

  v3 = *(_QWORD*)(a1 + 144);
  v4 = *(_QWORD*)(a1 + 160);
  v12 = 0;
  if (v4 != 0) {
    NvOsFree_plt(v4);
    *(_QWORD*)(a1 + 160) = 0;
  }
  if (v3 != 0 && (v6 = NvOsAlloc_plt(v3), *(_QWORD*)(a1 + 160) = v6, v6 == 0)) {
    v13 = 1;
    v12 = 6;
  }
  else {
    v13 = 1;
  }
  nvidia_63d0c0(a1, (int*)&v12, (unsigned __int8*)(a2 + 8));
  nvidia_63cec0((_BYTE*)a1, &v12);
  result = v12;
  v11 = nullptr;
  if (v12 == 0) {
    if (*(_QWORD*)a2 != 0) {
    LABEL_10:
      SdkRoutine_63cd40();
      result = 2;
      goto LABEL_11;
    }
    if (SdkData_1040700 != 0) {
      result = (*(__int64 (**)(_QWORD, __int64, void (****)(_QWORD)))(
          **(_QWORD**)(a1 + 8) + 264LL))(*(_QWORD*)(a1 + 8), SdkData_1040700,
                                         &v11);
      if ((_DWORD)result == 0) {
        result = (__int64)v11;
        if (v11 == nullptr) {
          return result;
        }
        goto LABEL_10;
      }
    }
    else {
      result = 0;
    }
  LABEL_11:
    v8 = v11;
    if (v11 != nullptr) {
      v9 = result;
      (**v11)(v11);
      v10 = v11;
      *((_BYTE*)v8 + 17) = 1;
      if (v10 != nullptr) {
        (*v10)[1](v10);
        NvOsFree_plt(v11);
      }
      return v9;
    }
  }
  return result;
}

__int64 nvidia_63d4a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  v2 = *(_QWORD*)(a1 + 160);
  if (v2 != 0) {
    NvOsFree_plt(v2);
    *(_QWORD*)(a1 + 160) = 0;
  }
  if (*(_QWORD*)(a1 + 72) != 0) {
    NvOsEventDestroy_plt();
  }
  if (*(_QWORD*)(a1 + 80) != 0) {
    NvOsEventDestroy_plt();
  }
  if (*(_QWORD*)(a1 + 88) != 0) {
    NvOsEventDestroy_plt();
  }
  if (*(_QWORD*)(a1 + 96) != 0) {
    NvOsEventDestroy_plt();
  }
  if (*(_QWORD*)(a1 + 104) != 0) {
    NvOsEventDestroy_plt();
  }
  if (*(_QWORD*)(a1 + 112) != 0) {
    NvOsEventDestroy_plt();
  }
  if (*(_QWORD*)(a1 + 120) != 0) {
    NvOsEventDestroy_plt();
  }
  if (*(_QWORD*)(a1 + 128) != 0) {
    NvOsEventDestroy_plt();
  }
  if ((nvidia_624100((atomic_ullong* volatile*)(a1 + 136)) & 1) == 0) {
    goto LABEL_22;
  }
  v3 = *(unsigned int*)(a1 + 48);
  if ((_DWORD)v3 != -1) {
    NvOsDrvClose_plt(v3);
  LABEL_22:
    *(_DWORD*)(a1 + 48) = -1;
  }
  return 0;
}

__int64 nvidia_63d810(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 result;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  int v15;
  __int128 v16;
  int v17;
  int v18;
  _QWORD v19[3];
  _QWORD v20[4];
  _QWORD v21[4];

  v5 = *(_QWORD*)(a1 + 8);
  v6 = *(_DWORD*)(v5 + 340);
  v7 = *(_QWORD*)(v5 + 360) & 0x100LL;
  if (v6 < 0xC || v7 == 0) {
    return 2;
  }
  v21[2] = v3;
  v21[3] = v4;
  v19[1] = 0;
  v19[0] = a3;
  v21[0] = v19;
  v21[1] = 24;
  v19[2] = 24;
  v20[0] = v19;
  v20[3] = 24;
  v20[1] = 24;
  v20[2] = &v16;
  v10 = *(_QWORD*)(a1 + 56);
  v11 = *(_DWORD*)(v10 + 60);
  v12 = *(_QWORD*)(v10 + 80) & 0x100LL;
  if (v11 < 0xC || v12 == 0) {
    return 2;
  }
  result =
      nvidia_644cf0(*(unsigned int*)(a1 + 48), 3222819852LL, v21, 1, v20, 2);
  if ((_DWORD)result == 0) {
    *(_OWORD*)a2 = v16;
    v15 = v18;
    *(_DWORD*)(a2 + 16) = v17;
    *(_DWORD*)(a2 + 20) = v15;
  }
  return result;
}

__int64 nvidia_63d8f0(__int64 a1, _DWORD* a2)
{
  *a2 = 0;
  return 2;
}

__int64 nvidia_63d900(__int64 a1, unsigned int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  _QWORD v9[3];

  if (SdkData_ea44f4 != -1) {
    return 0;
  }
  if (a2 > 2) {
    return 11;
  }
  v9[1] = v2;
  v9[2] = v3;
  v9[0] = 0;
  LODWORD(v9[0]) = SdkData_c773a8[a2];
  v5 = *(_QWORD*)(a1 + 56);
  v6 = *(_DWORD*)(v5 + 60);
  v7 = *(_QWORD*)(v5 + 80) & 0x100LL;
  if (v6 < 0xD || v7 == 0) {
    return 2;
  }
  else {
    return nvidia_644da0(*(unsigned int*)(a1 + 48), 3221771277LL, v9, 8);
  }
}

__int64 nvidia_63d9a0(__int64 a1, int a2)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v10;
  unsigned int v11;
  __int64 v12;

  if (a2 == 2) {
    v10 = *(_QWORD*)(a1 + 56);
    v11 = *(_DWORD*)(v10 + 60);
    v12 = *(_QWORD*)(v10 + 80) & 0x100LL;
    if (v11 < 5 || v12 == 0) {
      return 2;
    }
    else {
      return nvidia_644ce0(*(unsigned int*)(a1 + 48), 21509);
    }
  }
  else if (a2 == 1) {
    v6 = *(_QWORD*)(a1 + 56);
    v7 = *(_DWORD*)(v6 + 60);
    v8 = *(_QWORD*)(v6 + 80) & 0x100LL;
    if (v7 < 4 || v8 == 0) {
      return 2;
    }
    else {
      return nvidia_644ce0(*(unsigned int*)(a1 + 48), 21508);
    }
  }
  else if (a2 != 0) {
    return 11;
  }
  else {
    v2 = *(_QWORD*)(a1 + 56);
    v3 = *(_DWORD*)(v2 + 60);
    v4 = *(_QWORD*)(v2 + 80) & 0x100LL;
    if (v3 < 3 || v4 == 0) {
      return 2;
    }
    else {
      return nvidia_644ce0(*(unsigned int*)(a1 + 48), 21507);
    }
  }
}

__int64 nvidia_63da80(__int64 a1, unsigned int a2, unsigned int a3, __int64* a4)
{
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 result;
  int v14;
  __int64 v15;
  char v16[4];
  unsigned int v17;
  char v18;
  _DWORD v19[2];
  __int64 v20;

  v17 = 0;
  v18 = 0;
  v15 = 0;
  v16[0] = 1;
  if (a2 != 1) {
    v15 = *a4;
  }
  nvidia_644df0(a1, &v17, a2, a3, &v15, v16);
  if (v16[0] != 1 || v17 != 0) {
    goto LABEL_19;
  }
  if (a2 > 2 || (v19[0] = a2, a3 - 1 > 5)) {
    v14 = 11;
    goto LABEL_17;
  }
  v20 = v15;
  v9 = *(_QWORD*)(a1 + 56);
  v19[1] = a3;
  v10 = *(_DWORD*)(v9 + 60);
  v11 = *(_QWORD*)(v9 + 80) & 0x100LL;
  if (v10 < 9 || v11 == 0) {
    v14 = 2;
  LABEL_17:
    v18 = 1;
    goto LABEL_18;
  }
  v14 = nvidia_644da0(*(unsigned int*)(a1 + 48), 3222295561LL, v19, 16);
  if (v14 == 0) {
    v15 = v20;
    v18 = 1;
    goto LABEL_19;
  }
  v15 = v20;
  v18 = 1;
  if (v17 == 0) {
  LABEL_18:
    v17 = v14;
  }
LABEL_19:
  if (a2 == 1) {
    result = v17;
    if (v17 == 0) {
      *a4 = v15;
    }
  }
  else {
    result = v17;
    if ((a2 | v17) == 0) {
      result = *(_QWORD*)(a1 + 72 + 8LL * a3);
      if (result != 0) {
        NvOsEventDestroy_plt();
        result = v17;
        *(_QWORD*)(a1 + 72 + 8LL * a3) = 0;
      }
    }
  }
  return result;
}

__int64 nvidia_63dc20(__int64 a1, unsigned int a2)
{
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v9;

  if ((*(_BYTE*)((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1) + 24) &
       1) != 0) {
    return 0;
  }
  v9 = 0;
  if (a2 > 2) {
    return 11;
  }
  v5 = *(_QWORD*)(a1 + 56);
  LODWORD(v9) = a2;
  v6 = *(_DWORD*)(v5 + 60);
  v7 = *(_QWORD*)(v5 + 80) & 0x100LL;
  if (v6 < 7 || v7 == 0) {
    return 2;
  }
  else {
    return nvidia_644da0(*(unsigned int*)(a1 + 48), 3221771271LL, &v9, 8);
  }
}

#pragma GCC visibility pop
