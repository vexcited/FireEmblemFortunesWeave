#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void snd_BGM_getFirstHandle(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void snd_playAt_ff5f0(PSEUDO_X8, _QWORD, _QWORD,
                                                 _QWORD, _QWORD, _QWORD, _QWORD,
                                                 _QWORD, double, float);
__int64 Crc32List_119b10(_QWORD);
__int64 Crc32List_11a480(__int64);
__int64 Crc32List_11cae0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float,
                         float, float);
__int64 Crc32List_11cbe0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float,
                         float, float);
__int64 Crc32List_11cce0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         float, float, float);
__int64 Crc32List_11d340(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         float, float, float);
__int64 Data_f6c20(_QWORD, _QWORD, long double);
__int64 Data_f6cc0(_QWORD);
__int64 GameRoutine_10d050(__int64, __int64);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_112180_alt1(_QWORD, _QWORD) __asm__("GameRoutine_112180");
__int64 GameRoutine_11cdf0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           float, float, float);
__int64 GameRoutine_13ed60(_QWORD, _QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_624e60(__int64, __int64, _DWORD*);
__int64 GameRoutine_f57c0(_QWORD);
__int64 GameRoutine_f5850(void);
__int64 GameRoutine_f63e0(_QWORD, long double);
__int64 GameRoutine_f7060(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_Fade_Destroy_Fade_alt2(_QWORD) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_Fade_Fade_10cb00(__int64, unsigned __int8*);
__int64 snd_Fade_Fade_10cd70_alt1(__int64,
                                  __int64) __asm__("snd_Fade_Fade_10cd70");
__int64 snd_data_f0230(__int64, __int64, __int64);
__int64 snd_fnd_WeakHandle_get(_QWORD, float);
__int64 snd_fnd_WeakHandle_get_alt1(_QWORD) __asm__("snd_fnd_WeakHandle_get");
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_fnd_WeakHandle_set(_QWORD, _QWORD);
__int64 snd_fnd_calcCrc32(_QWORD, _QWORD);
__int64 snd_startVolume_1006d0(__int64*, unsigned int, __int64, float);
__int64 strcmp(_QWORD, _QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
__n128 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830_alt1(_QWORD,
                                 double) __asm__("snd_Fade_Fade_10c830");
__n128 snd_fnd_calcCrc32Reverse(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212ea90;
extern __int16 GameData_2198f28;
extern __int64* snd_g_memory_ptr[2];
extern __int64 GameData_212e2d8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 snd_g_proxy_ptr[2];
extern char GameData_1a9f09e;
extern int* GameData_212c300;
extern int* GameData_212ea88;
float snd_Fade_Fade_10cd70(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_179230();
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void __attribute__((noreturn)) String_60a230(void);
void snd_Fade_Fade_10c830(__int64, float);
__attribute__((swiftcall)) void snd_11c560_alt1(PSEUDO_X8 x8_, __int64 result,
                                                __int64 a2, __int64 a3,
                                                __int64 a4, __int64 a5,
                                                float a7, float a8,
                                                float a9) __asm__("snd_11c560");
__int64* snd_178f40(__int64* result, unsigned __int64 a2);
__int64 snd_189500(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void snd_a1b360(PSEUDO_X8 x8_,
                                           unsigned __int8* result,
                                           unsigned __int64 a2,
                                           unsigned __int64 a3);
__attribute__((swiftcall)) void snd_a1b510(PSEUDO_X8 x8_, __int64 a1,
                                           unsigned __int8* a2);
__int64 snd_a290c0(__int64 result, __int64 a2, __int64 a3, unsigned int a4,
                   char a5, float a6);
__int64 snd_19057e0(__int64 result);
__attribute__((swiftcall)) void
GameRoutine_11cdf0_alt1(PSEUDO_X8, __int64 result, __int64, __int64, int*,
                        __int64, __int64, float, float,
                        float) __asm__("GameRoutine_11cdf0");
__int64 Crc32List_119b10_alt1(__int64) __asm__("Crc32List_119b10");
__int64 Crc32List_11cae0_alt1(__int64, __int64, __int64, __int64, __int64,
                              __int64, float, float,
                              float) __asm__("Crc32List_11cae0");
__int64 Crc32List_11cbe0_alt1(__int64, __int64, __int64, __int64, __int64,
                              __int64, float, float,
                              float) __asm__("Crc32List_11cbe0");
__int64 Crc32List_11cce0_alt1(__int64, __int64, __int64, __int64, __int64,
                              float, float, float, __int64,
                              __int64) __asm__("Crc32List_11cce0");
__int64 Crc32List_11d340_alt1(__int64, __int64, __int64, __int64, __int64,
                              __int64, __int64, float, float,
                              float) __asm__("Crc32List_11d340");
__int64 Data_f6c20_alt1(int*, _QWORD*) __asm__("Data_f6c20");
__int64 Data_f6cc0_alt1(int*) __asm__("Data_f6cc0");
__int64 GameRoutine_13ed60_alt1(__int64, _DWORD*) __asm__("GameRoutine_13ed60");
__int64 GameRoutine_f57c0_alt1(int*) __asm__("GameRoutine_f57c0");
__int64 GameRoutine_f5850_alt1(int, _QWORD*, char) __asm__("GameRoutine_f5850");
__int64 GameRoutine_f63e0_alt1(int*) __asm__("GameRoutine_f63e0");
__int64 GameRoutine_f7060_alt1(__int64 result) __asm__("GameRoutine_f7060");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 snd_data_f0230_alt1(__int64, __int64, char*) __asm__("snd_data_f0230");
__int64 snd_fnd_WeakHandle_get_alt2(__int64) __asm__("snd_fnd_WeakHandle_get");
__int64 snd_fnd_WeakHandle_set_alt1(__int64,
                                    __int64) __asm__("snd_fnd_WeakHandle_set");
const char*
snd_fnd_calcCrc32Reverse_alt1(const char* result,
                              int) __asm__("snd_fnd_calcCrc32Reverse");
unsigned __int8* snd_fnd_calcCrc32_alt1(unsigned __int8* result,
                                        int) __asm__("snd_fnd_calcCrc32");
__attribute__((swiftcall)) void snd_11c560(PSEUDO_X8 x8_, __int64 result,
                                           __int64 a2, __int64 a3,
                                           unsigned __int8* a4, __int64 a5,
                                           float a7, float a8, float a9);

__attribute__((swiftcall)) void snd_11c560(PSEUDO_X8 x8_, __int64 result,
                                           __int64 a2, __int64 a3,
                                           unsigned __int8* a4, __int64 a5,
                                           float a7, float a8, float a9)
{

#pragma clang fp contract(off)
  __int64 a6 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v14;
  int v18;
  int v19;
  int v20;
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
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int16 v48;
  unsigned __int8* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;
  _BYTE* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  _QWORD v61[30];
  struct {
    _BYTE v62[200];
    __int64 v63;
    __int64 v64;
    __int64 v65;
    __int64 v66;
    __int64 v67;
  } v62_;
  struct {
    _BYTE v68[200];
    __int64 v69;
    __int64 v70;
    __int64 v71;
    __int64 v72;
    __int64 v73;
  } v68_;
  _DWORD v74[2];
  int v75[2];
  __int64 v76;
  __int64 v77;
  _QWORD v78[30];
  _QWORD v79[30];
  _QWORD v80[30];
  int v81[2];

  if (*(_BYTE*)(result + 8) == 1) {
    *(_QWORD*)a6 = 0;
    *(_DWORD*)(a6 + 8) = 0x2000;
    {
      result;
      return;
    }
  }
  v14 = result;
  v81[0] = (unsigned int)snd_fnd_calcCrc32_alt1(a4, 0);
  v81[1] = (unsigned int)snd_fnd_calcCrc32Reverse_alt1((const char*)a4, 0);
  v18 = GameRoutine_f63e0_alt1(v81);
  if (v18 == -1) {
    v20 = GameRoutine_f57c0_alt1(v81);
    if (v20 == -1) {
      v36 = GameRoutine_13ed60_alt1(*(_QWORD*)(v14 + 2184), v81);
      if (v36 == -1) {
        v36 = Data_f6cc0_alt1(v81);
      }
      v19 = v36 | 0x8000000;
      if (v19 == -1) {
      LABEL_29:
        v37 = snd_fnd_WeakHandle_get_alt2(a2);
        if (v37 != 0) {
          v38 = v37 - 5592;
        }
        else {
          v38 = 0;
        }
        snd_Fade_Fade_10cd70_alt1((__int64)v80, a5);
        v39 = *(_QWORD*)(a5 + 224);
        v80[27] = *(_QWORD*)(a5 + 216);
        v40 = *(_QWORD*)(a5 + 232);
        v80[28] = v39;
        v80[29] = v40;
        v41 = *(_QWORD*)(a5 + 200);
        v80[26] = *(_QWORD*)(a5 + 208);
        v80[25] = v41;
        v25 = Crc32List_11cae0_alt1(v14 + 2440, v14, v38, a3, (__int64)a4,
                                    (__int64)v80, a7, a8, a9);
        snd_Fade_Destroy_Fade_alt1(v80);
        if (*(_BYTE*)(a5 + 223) != 1) {
          goto LABEL_34;
        }
        goto LABEL_33;
      }
    }
    else {
      v19 = v20 | 0x1000000;
      if (v19 == -1) {
        goto LABEL_29;
      }
    }
  }
  else {
    v19 = v18 | 0x2000000;
    if (v19 == -1) {
      goto LABEL_29;
    }
  }
  if ((v19 & 0x2000000) != 0) {
    v26 = snd_fnd_WeakHandle_get_alt2(a2);
    if (v26 != 0) {
      v27 = v26 - 5592;
    }
    else {
      v27 = 0;
    }
    snd_Fade_Fade_10cd70_alt1((__int64)v79, a5);
    v28 = *(_QWORD*)(a5 + 224);
    v79[27] = *(_QWORD*)(a5 + 216);
    v29 = *(_QWORD*)(a5 + 232);
    v79[28] = v28;
    v79[29] = v29;
    v30 = *(_QWORD*)(a5 + 200);
    v79[26] = *(_QWORD*)(a5 + 208);
    v79[25] = v30;
    v25 = Crc32List_11cbe0_alt1(v14 + 2520, v14, v27, a3, (__int64)a4,
                                (__int64)v79, a7, a8, a9);
    snd_Fade_Destroy_Fade_alt1(v79);
    if (*(_BYTE*)(a5 + 223) == 1) {
    LABEL_33:
      (*(void (**)(__int64))(*(_QWORD*)v25 + 200LL))(v25);
    }
  LABEL_34:
    nn_os_LockMutex_alt1((__int64)&GameData_2198f28);
    (*(void (**)(__int64))(*(_QWORD*)v25 + 760LL))(v25);
    nn_os_UnlockMutex_alt1((__int64)&GameData_2198f28);
    Crc32List_11a480(v14);
    *(_QWORD*)a6 = 0;
    *(_DWORD*)(a6 + 8) = 0x2000;
    {
      snd_fnd_WeakHandle_set_alt1(a6, v25 + 5592);
      return;
    }
  }
  if ((v19 & 0x8000000) != 0) {
    v31 = snd_fnd_WeakHandle_get_alt2(a2);
    if (v31 != 0) {
      v32 = v31 - 5592;
    }
    else {
      v32 = 0;
    }
    snd_Fade_Fade_10cd70_alt1((__int64)v78, a5);
    v33 = *(_QWORD*)(a5 + 224);
    v78[27] = *(_QWORD*)(a5 + 216);
    v34 = *(_QWORD*)(a5 + 232);
    v78[28] = v33;
    v78[29] = v34;
    v35 = *(_QWORD*)(a5 + 200);
    v78[26] = *(_QWORD*)(a5 + 208);
    v78[25] = v35;
    v25 = Crc32List_11cce0_alt1(v14 + 2760, v14, v32, a3, (__int64)a4, a7, a8,
                                a9, 0, (__int64)v78);
    snd_Fade_Destroy_Fade_alt1(v78);
    if (*(_BYTE*)(a5 + 223) != 1) {
      goto LABEL_34;
    }
    goto LABEL_33;
  }
  if ((v19 & 0x1000000) == 0) {
    v21 = snd_fnd_WeakHandle_get_alt2(a2);
    if (v21 != 0) {
      v22 = v21 - 5592;
    }
    else {
      v22 = 0;
    }
    snd_Fade_Fade_10cd70_alt1((__int64)v61, a5);
    v23 = *(_QWORD*)(a5 + 224);
    v61[27] = *(_QWORD*)(a5 + 216);
    v61[28] = v23;
    v61[29] = *(_QWORD*)(a5 + 232);
    v24 = *(_QWORD*)(a5 + 208);
    v61[25] = *(_QWORD*)(a5 + 200);
    v61[26] = v24;
    v25 = Crc32List_11cae0_alt1(v14 + 2440, v14, v22, a3, (__int64)a4,
                                (__int64)v61, a7, a8, a9);
    snd_Fade_Destroy_Fade_alt1(v61);
    if (*(_BYTE*)(a5 + 223) != 1) {
      goto LABEL_34;
    }
    goto LABEL_33;
  }
  v42 = GameRoutine_f5850_alt1(v19, &v77, 0);
  v43 = v42;
  if (*(_DWORD*)(v42 + 132) == 0) {
    v49 = *(unsigned __int8**)(v42 + 24);
    v75[0] = (unsigned int)snd_fnd_calcCrc32_alt1(v49, 0);
    v75[1] = (unsigned int)snd_fnd_calcCrc32Reverse_alt1((const char*)v49, 0);
    v50 = Data_f6c20_alt1(v75, &v76);
    v51 = snd_fnd_WeakHandle_get_alt2(a2);
    if (v51 != 0) {
      v52 = v51 - 5592;
    }
    else {
      v52 = 0;
    }
    if (v50 != 0) {
      v53 = *(_DWORD*)(v43 + 36);
      v54 = v68_.v68;
      v74[0] = *(_DWORD*)(v43 + 32);
      v74[1] = v53;
      snd_Fade_Fade_10cd70_alt1((__int64)v68_.v68, a5);
      v55 = *(_QWORD*)(a5 + 224);
      v68_.v71 = *(_QWORD*)(a5 + 216);
      v56 = *(_QWORD*)(a5 + 232);
      v68_.v72 = v55;
      v68_.v73 = v56;
      v57 = *(_QWORD*)(a5 + 200);
      v68_.v70 = *(_QWORD*)(a5 + 208);
      v68_.v69 = v57;
      v58 = Crc32List_11d340_alt1(v14 + 2760, v14, v52, a3, (__int64)v74, v43,
                                  (__int64)v68_.v68, a7, a8, a9);
    }
    else {
      v54 = v62_.v62;
      snd_Fade_Fade_10cd70_alt1((__int64)v62_.v62, a5);
      v59 = *(_QWORD*)(a5 + 224);
      v62_.v65 = *(_QWORD*)(a5 + 216);
      v62_.v66 = v59;
      v62_.v67 = *(_QWORD*)(a5 + 232);
      v60 = *(_QWORD*)(a5 + 208);
      v62_.v63 = *(_QWORD*)(a5 + 200);
      v62_.v64 = v60;
      v58 = Crc32List_11cae0_alt1(v14 + 2440, v14, v52, a3, (__int64)a4,
                                  (__int64)v62_.v62, a7, a8, a9);
    }
    v25 = v58;
    snd_Fade_Destroy_Fade_alt1(v54);
    if (*(_BYTE*)(a5 + 223) != 1) {
      goto LABEL_34;
    }
    goto LABEL_33;
  }
  v44 = Crc32List_119b10_alt1(v14 + 2840);
  snd_data_f0230_alt1(v44, v43, nullptr);
  v45 = *(_DWORD*)(v43 + 36);
  LODWORD(v76) = *(_DWORD*)(v43 + 32);
  HIDWORD(v76) = v45;
  GameRoutine_11cdf0_alt1((void*)(a6), v14, a2, a3, (int*)&v76, v44, a5, a7, a8,
                          a9);
  GameRoutine_f7060_alt1(v44);
  nn_os_LockMutex_alt1(v14 + 2880);
  v46 = *(_QWORD*)(v14 + 2864);
  v47 = (v44 - *(_QWORD*)(v14 + 2856)) / 0x298uLL;
  v48 = *(_WORD*)(v14 + 2872) - 1;
  *(_WORD*)(v14 + 2872) = v48;
  *(_WORD*)(v46 + 2LL * v48) = v47;
  {
    nn_os_UnlockMutex_alt1(v14 + 2880);
    return;
  }
}

__int64* snd_178f40(__int64* result, unsigned __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  char* v10;
  unsigned __int64 v11;
  __int64 v12;
  char* v13;
  bool v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v2 = result[1];
  v3 = result[2];
  v4 = result;
  if (a2 > (v3 - v2) >> 4) {
    v5 = v2 - *result;
    v6 = a2 + (v5 >> 4);
    if (v6 >> 60 != 0) {
      GameRoutine_179230();
    }
    v7 = v3 - *result;
    v8 = snd_g_memory_ptr[0];
    if (v7 >> 3 > v6) {
      v6 = v7 >> 3;
    }
    if ((unsigned __int64)v7 >= 0x7FFFFFFFFFFFFFF0LL) {
      v9 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v9 = v6;
    }
    if ((unsigned __int64)(v9 - 0x1000000000000000LL) >= 0xF000000000000001LL) {
      v19 = a2;
      result = (__int64*)(*(__int64 (**)(_QWORD, __int64, __int64))(
          **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0],
                                                   16 * v9, 32);
      a2 = v19;
      v10 = (char*)result + v5;
      v11 = 16 * v19 - 16;
      if ((~(_BYTE)v11 & 0x70) != 0) {
        goto LABEL_10;
      }
    }
    else {
      result = nullptr;
      v10 = (char*)v5;
      v11 = 16 * a2 - 16;
      if ((~(_BYTE)v11 & 0x70) != 0) {
      LABEL_10:
        v12 = -(__int64)(((unsigned __int8)((unsigned int)v11 >> 4) + 1) & 7);
        v13 = v10;
        do {
          *(_QWORD*)v13 = 0;
          *((_DWORD*)v13 + 2) = 0x2000;
          v13 += 16;
          v14 = __CFADD__(v12++, 1);
        } while (!v14);
        v15 = (__int64)&v10[16 * a2];
        if (v11 < 0x70) {
          goto LABEL_27;
        }
        goto LABEL_26;
      }
    }
    v13 = v10;
    v15 = (__int64)&v10[16 * a2];
    if (v11 < 0x70) {
    LABEL_27:
      v20 = &result[2 * v9];
      v21 = *v4;
      v22 = v4[1];
      v23 = (__int64)&v10[*v4 - v22];
      if (v22 != *v4) {
        v24 = (__int64)&v10[*v4 - v22];
        do {
          *(_QWORD*)v24 = 0;
          *(_DWORD*)(v24 + 8) = 0x2000;
          result = (__int64*)GameRoutine_112180(v24, v21);
          v21 += 16;
          v24 += 16;
        } while (v21 != v22);
        v21 = *v4;
      }
      *v4 = v23;
      v4[1] = v15;
      v4[2] = (__int64)v20;
      if (v21 != 0) {
        return (__int64*)(*(__int64 (**)(__int64, __int64))(*(_QWORD*)*v8 +
                                                            24LL))(*v8, v21);
      }
      return result;
    }
    do {
    LABEL_26:
      *(_QWORD*)v13 = 0;
      *((_DWORD*)v13 + 2) = 0x2000;
      *((_QWORD*)v13 + 2) = 0;
      *((_DWORD*)v13 + 6) = 0x2000;
      *((_QWORD*)v13 + 4) = 0;
      *((_DWORD*)v13 + 10) = 0x2000;
      *((_QWORD*)v13 + 6) = 0;
      *((_DWORD*)v13 + 14) = 0x2000;
      *((_QWORD*)v13 + 8) = 0;
      *((_DWORD*)v13 + 18) = 0x2000;
      *((_QWORD*)v13 + 10) = 0;
      *((_DWORD*)v13 + 22) = 0x2000;
      *((_QWORD*)v13 + 12) = 0;
      *((_DWORD*)v13 + 26) = 0x2000;
      *((_QWORD*)v13 + 14) = 0;
      *((_DWORD*)v13 + 30) = 0x2000;
      v13 += 128;
    } while (v13 != (char*)v15);
    goto LABEL_27;
  }
  if (a2 != 0) {
    v16 = v2 + 16 * a2;
    v17 = 16 * a2 - 16;
    if ((~(_BYTE)v17 & 0x70) != 0) {
      v18 = -(__int64)(((unsigned __int8)((unsigned int)v17 >> 4) + 1) & 7);
      do {
        *(_QWORD*)v2 = 0;
        *(_DWORD*)(v2 + 8) = 0x2000;
        v2 += 16;
        v14 = __CFADD__(v18++, 1);
      } while (!v14);
    }
    if (v17 >= 0x70) {
      do {
        *(_QWORD*)v2 = 0;
        *(_DWORD*)(v2 + 8) = 0x2000;
        *(_QWORD*)(v2 + 16) = 0;
        *(_DWORD*)(v2 + 24) = 0x2000;
        *(_QWORD*)(v2 + 32) = 0;
        *(_DWORD*)(v2 + 40) = 0x2000;
        *(_QWORD*)(v2 + 48) = 0;
        *(_DWORD*)(v2 + 56) = 0x2000;
        *(_QWORD*)(v2 + 64) = 0;
        *(_DWORD*)(v2 + 72) = 0x2000;
        *(_QWORD*)(v2 + 80) = 0;
        *(_DWORD*)(v2 + 88) = 0x2000;
        *(_QWORD*)(v2 + 96) = 0;
        *(_DWORD*)(v2 + 104) = 0x2000;
        *(_QWORD*)(v2 + 112) = 0;
        *(_DWORD*)(v2 + 120) = 0x2000;
        v2 += 128;
      } while (v2 != v16);
    }
    v2 = v16;
  }
  result[1] = v2;
  return result;
}

__int64 snd_189500(__int64 a1, __int64 a2)
{
  unsigned int* v4;
  unsigned int v5;
  _QWORD* v6;
  __int64 v7;
  __int64 result;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _WORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _WORD* v18;
  __int64 v19;
  __int16 v20;
  _WORD* v21;
  __int64 v22;
  __int64 v23;
  __int16 v24;
  int v25;
  _BYTE v26[8];

  (*(void (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 64LL))(
      a1,
      (unsigned int)(*(_DWORD*)(*(_QWORD*)(a1 + 160) + 68LL) +
                     *(_DWORD*)(*(_QWORD*)(a1 + 160) + 64LL)),
      0);
  (*(void (**)(__int64, _QWORD, __int64))(*(_QWORD*)a1 + 72LL))(
      a1, *(_QWORD*)(*(_QWORD*)(a1 + 160) + 72LL), 8);
  v4 = *(unsigned int**)(*(_QWORD*)(a1 + 160) + 72LL);
  v5 = bswap32(*v4);
  (*(void (**)(__int64, unsigned int*, _QWORD))(*(_QWORD*)a1 + 72LL))(
      a1, v4 + 2, v5);
  *(_DWORD*)(*(_QWORD*)(a1 + 160) + 68LL) += v5 + 8;
  v6 = *(_QWORD**)(a1 + 160);
  v7 = *((unsigned int*)v6 + 8);
  if (*(_BYTE*)(a1 + 42) == 1) {
    result = (*(__int64 (**)(_QWORD, _BYTE*, int*, _QWORD, __int64, _QWORD,
                             __int64))(*(_QWORD*)v6[1] + 88LL))(
        v6[1], v26, &v25, v6[10], 11520, v6[9], 4096);
    if ((_DWORD)result != 0) {
      return (*(__int64 (**)(_QWORD, const char*, ...))(
          **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(
          *(_QWORD*)snd_g_proxy_ptr[0],
          "#Sound Library : opus decode failed.[%d]", result);
    }
  }
  else {
    result = (*(__int64 (**)(_QWORD, _BYTE*, int*, _QWORD, __int64, _QWORD,
                             __int64))(*(_QWORD*)*v6 + 72LL))(
        *v6, v26, &v25, v6[10], 3840, v6[9], 4096);
    if ((_DWORD)result != 0) {
      return (*(__int64 (**)(_QWORD, const char*, ...))(
          **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(
          *(_QWORD*)snd_g_proxy_ptr[0],
          "#Sound Library : opus decode failed.[%d]", result);
    }
  }
  if ((int)v7 >= 1) {
    v9 = v25;
    if (v25 >= 1) {
      v10 = 0;
      v11 = 0;
      v12 = v25 & 7;
      v13 = (_WORD*)(a2 + 8);
      result = 2LL * (unsigned int)v25;
      v14 = 2 * v7;
      v15 = -(__int64)(v25 & 0x7FFFFFF8);
      while (v9 < 8) {
        v16 = 0;
        if (v12 != 0) {
          goto LABEL_16;
        }
      LABEL_9:
        ++v11;
        v10 += 2;
        v13 = (_WORD*)((char*)v13 + result);
        a2 += result;
        if (v11 == v7) {
          return result;
        }
      }
      v17 = 0;
      v18 = v13;
      v19 = v10;
      do {
        v17 -= 8;
        *(v18 - 4) = *(_WORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 160) + 80LL) + v19);
        *(v18 - 3) =
            *(_WORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 160) + 80LL) + v14 + v19);
        *(v18 - 2) =
            *(_WORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 160) + 80LL) + 4 * v7 + v19);
        *(v18 - 1) =
            *(_WORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 160) + 80LL) + 6 * v7 + v19);
        *v18 =
            *(_WORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 160) + 80LL) + 8 * v7 + v19);
        v18[1] =
            *(_WORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 160) + 80LL) + 10 * v7 + v19);
        v18[2] =
            *(_WORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 160) + 80LL) + 12 * v7 + v19);
        v20 =
            *(_WORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 160) + 80LL) + 14 * v7 + v19);
        v19 += 16 * v7;
        v18[3] = v20;
        v18 += 8;
      } while (v15 != v17);
      v16 = -v17;
      if (v12 == 0) {
        goto LABEL_9;
      }
    LABEL_16:
      v21 = (_WORD*)(a2 + 2 * v16);
      v22 = v10 + v14 * v16;
      v23 = v9 & 7;
      do {
        --v23;
        v24 = *(_WORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 160) + 80LL) + v22);
        v22 += v14;
        *v21++ = v24;
      } while (v23 != 0);
      goto LABEL_9;
    }
  }
  return result;
}

__attribute__((swiftcall)) void snd_a1b360(PSEUDO_X8 x8_,
                                           unsigned __int8* result,
                                           unsigned __int64 a2,
                                           unsigned __int64 a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v5;
  unsigned __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  char* v12;
  __int64 v13;
  __int64 v14;

  v5 = *result;
  v6 = *((_QWORD*)result + 1);
  if ((v5 & 1) == 0) {
    v6 = v5 >> 1;
  }
  v7 = v6 >= a2;
  v8 = v6 - a2;
  if (!v7) {
    String_60a230();
  }
  if ((v5 & 1) != 0) {
    v9 = *((unsigned __int8**)result + 2);
  }
  else {
    v9 = result + 1;
  }
  if (v8 >= a3) {
    v10 = a3;
  }
  else {
    v10 = v8;
  }
  if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  if (v10 >= 0x17) {
    if ((v10 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v10 | 7) + 1;
    }
    v14 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v13, 16, 0);
    a4[1] = v10;
    a4[2] = v14;
    *a4 = v13 | 1;
    v12 = (char*)v14;
  }
  else {
    *(_BYTE*)a4 = 2 * v10;
    v12 = (char*)a4 + 1;
    if (v10 == 0) {
      goto LABEL_20;
    }
  }
  result = (unsigned __int8*)memmove(v12, &v9[a2], v10);
LABEL_20:
  v12[v10] = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void snd_a1b510(PSEUDO_X8 x8_, __int64 a1,
                                           unsigned __int8* a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v4;
  unsigned __int64 v5;
  bool v6;
  unsigned __int64 v7;
  unsigned __int8* v8;
  unsigned __int64 v9;
  __int64* result;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v4 = *a2;
  v5 = *((_QWORD*)a2 + 1);
  v6 = (v4 & 1) == 0;
  v7 = v4 >> 1;
  if (v6) {
    v8 = a2 + 1;
  }
  else {
    v8 = *((unsigned __int8**)a2 + 2);
  }
  if (v6) {
    v9 = v7;
  }
  else {
    v9 = v5;
  }
  result = (__int64*)GameRoutine_1a09ce0(a1, v8, v9);
  v11 = *result;
  v12 = result[1];
  *result = 0;
  result[1] = 0;
  *a3 = v11;
  a3[1] = v12;
  v13 = result[2];
  result[2] = 0;
  a3[2] = v13;
  {
    result;
    return;
  }
}

__int64 snd_a290c0(__int64 result, __int64 a2, __int64 a3, unsigned int a4,
                   char a5, float a6)
{

#pragma clang fp contract(off)
  __int64 v6;
  unsigned __int16 v12;
  __int64 v13[2];
  _QWORD v14[25];
  _QWORD v15[25];

  if (a2 != 0) {
    v6 = result;
    if ((*(_BYTE*)(result + 3128) & 1) == 0) {
      GameRoutine_60a020(result + 2824, a2);
      snd_Fade_Fade_10cd70_alt1((__int64)v15, a3);
      if (a4 != 0 || (a5 & 1) != 0) {
        goto LABEL_15;
      }
      if ((unsigned int)strcmp(a2, "BGM_Hub1_A") != 0) {
        if ((unsigned int)strcmp(a2, "BGM_Hub1_B") != 0) {
          if ((unsigned int)strcmp(a2, "BGM_Hub6_A") != 0 &&
              (unsigned int)strcmp(a2, "BGM_Hub6_B") != 0) {
            a4 = 0;
          LABEL_15:
            (*(void (**)(_QWORD, __int64, _QWORD*, _QWORD, float, float))(
                **(_QWORD**)(v6 + 8) + 32LL))(*(_QWORD*)(v6 + 8), a2, v15, a4,
                                              a6, 0x1.0000000000000p+0f);
            snd_BGM_getFirstHandle((void*)((__int64)v13), *(_QWORD*)(v6 + 8));
            snd_Fade_Fade_10c830((__int64)v14, 0x0.0p+0f);
            snd_startVolume_1006d0(v13, 0, (__int64)v14, 0x1.0000000000000p+0f);
            snd_Fade_Destroy_Fade_alt1(v14);
            snd_Fade_Fade_10c830((__int64)v14, 0x0.0p+0f);
            snd_startVolume_1006d0(v13, 1u, (__int64)v14, 0x0.0p+0f);
            snd_Fade_Destroy_Fade_alt1(v14);
            snd_Fade_Fade_10c830((__int64)v14, 0x0.0p+0f);
            snd_startVolume_1006d0(v13, 2u, (__int64)v14, 0x0.0p+0f);
            snd_Fade_Destroy_Fade_alt1(v14);
            return snd_Fade_Destroy_Fade_alt1(v15);
          }
          v12 = 31928;
        }
        else {
          v12 = -15608;
        }
      }
      else {
        v12 = -8608;
      }
      LODWORD(v14[0]) = 0;
      HIDWORD(v14[0]) = v12 | 0x20000;
      a4 = GameRoutine_624e60((__int64)v14, (__int64)GameData_212c300, v14);
      if ((int)a4 >= 1) {
        snd_Fade_Fade_10cb00((__int64)v14, "FadeTime_BGM_Hub_In");
        GameRoutine_10d050((__int64)v15, (__int64)v14);
        snd_Fade_Destroy_Fade_alt1(v14);
      }
      goto LABEL_15;
    }
  }
  return result;
}

__int64 snd_19057e0(__int64 result)
{
  float* v1;
  __int64* v2;
  atomic_uchar* v3;
  int* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  float v11;
  __int64 v12;
  float* v13;
  float v14;
  float v15;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
  __int64 v21;
  float v22;
  float v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  float v28;
  float v29;
  float v30;
  _QWORD v31[2];
  _BYTE v32[208];

  v1 = *(float**)(result + 16);
  v2 = *(__int64**)(result + 24);
  if (v1 != (float*)v2) {
    v3 = (atomic_uchar*)GameData_212ea90;
    v4 = GameData_212ea88;
    v5 = GameData_212e2d8 + 16;
    do {
      v6 = *(_QWORD*)v1;
      if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0) {
        result = __cxa_guard_acquire(v3);
        if ((_DWORD)result != 0) {
          *v4 = wld_Crc32(0, "AnimCtrlModule", 14);
          result = __cxa_guard_release(v3);
        }
      }
      v7 = *(_QWORD*)(v6 + 512);
      v8 = v7;
      while (v8 != *(_QWORD*)(v6 + 504)) {
        v9 = *(_DWORD*)(v8 - 16);
        v8 -= 16;
        v7 -= 16;
        if (v9 == *v4) {
          if (*(_QWORD*)(v6 + 512) != v7) {
            v10 = *(_QWORD*)(v7 + 8);
            if (v10 != 0) {
              v11 = 0.0;
              v12 = **(_QWORD**)(v10 + 72);
              if (v12 != 0) {
                v13 = *(float**)(v12 + 16);
                if (v13 != nullptr) {
                  v11 = *v13;
                }
              }
              v14 = v1[8];
              if (v11 <= v14) {
                if (v11 < v14) {
                  v26 = *((_QWORD*)v1 + 2);
                  v1[8] = -0x1.0000000000000p+0;
                  *((_QWORD*)v1 + 3) = v26;
                }
              }
              else {
                v15 = *(float*)(*((_QWORD*)v1 + 3) + 20LL);
                if (v11 >= v15 && v14 < v15) {
                  if ((snd_fnd_WeakHandle_isValid(v1 + 10) & 1) != 0) {
                    v17 = snd_fnd_WeakHandle_get_alt1(v1 + 10);
                    snd_Fade_Fade_10c830_alt1(v32, 0.0);
                    (*(void (**)(__int64, _BYTE*, _QWORD, double))(
                        *(_QWORD*)(v17 - 5592) + 248LL))(v17 - 5592, v32, 0,
                                                         0.0);
                    snd_Fade_Destroy_Fade_alt2(v32);
                  }
                  v18 = *(_QWORD*)v1;
                  v19 = *((_QWORD*)v1 + 3);
                  v27 = v5;
                  v20 = *(float*)(v19 + 40);
                  v21 = *(_QWORD*)(v19 + 24);
                  v22 = COERCE_FLOAT(*(_QWORD*)(v18 + 312));
                  v23 = COERCE_FLOAT(HIDWORD(*(_QWORD*)(v18 + 304))) +
                        *(float*)(v19 + 36);
                  v28 =
                      COERCE_FLOAT(*(_OWORD*)(v18 + 304)) + *(float*)(v19 + 32);
                  v29 = v23;
                  v30 = v22 + v20;
                  snd_Fade_Fade_10c830_alt1(v32, 0.0);
                  snd_playAt_ff5f0((void*)(v31), &GameData_1a9f09e, v21, &v27,
                                   v32, 0, 65537, 0, 0.0, 0x1.0000000000000p+0);
                  GameRoutine_112180_alt1(v1 + 10, v31);
                  result = snd_Fade_Destroy_Fade_alt2(v32);
                  v24 = *((_QWORD*)v1 + 3);
                  *((_QWORD*)v1 + 3) = v24 + 48;
                  v25 = *(_DWORD*)(v24 + 48);
                  if (v25 == 0 || v25 != *((_DWORD*)v1 + 2)) {
                    *((_QWORD*)v1 + 3) = v24;
                  }
                }
                v1[8] = v11;
              }
            }
          }
          break;
        }
      }
      v1 += 14;
    } while (v1 != (float*)v2);
  }
  return result;
}

#pragma GCC visibility pop
