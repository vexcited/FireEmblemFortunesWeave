#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* SdkRoutine_6565e0(_QWORD* result);
__int64* nvidia_64d260(__int64* result, __int64, unsigned __int64,
                       unsigned __int64);
__int64 NvOsSleepMS_plt(_QWORD);
__int64 NvRmGpuDeviceClose_plt(_QWORD);
__int64 NvRmGpuDeviceGetInfo_plt(_QWORD);
__int64 NvRmGpuDeviceOpen_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmGpuLibOpen_plt(_QWORD);
__int64 NvRmGpuProfilerV2GetInfo_plt(_QWORD, _QWORD);
__int64 NvRmGpuRegOpsSessionCreateChannelless_plt(_QWORD, _QWORD);
__int64 NvRmGpuRegOpsSessionCreateForChannel_plt(_QWORD, _QWORD);
__int64 SdkRoutine_64b750(__int64 result, __int64, __int64);
__int64 SdkRoutine_654d40(__int64);
__int64 SdkRoutine_6a0ba0(__int64 result);
__int64 SdkRoutine_6a1100(__int64 result, char);
__int64 SdkRoutine_6ae420(unsigned int, __int64, int);
__int64 SdkRoutine_6aecc0(int, int, unsigned int, int, unsigned int,
                          unsigned int, unsigned int, unsigned int*);
__int64 SdkRoutine_85c780(_QWORD, _QWORD);
__int64 __cxa_decrement_exception_refcount_plt(_QWORD);
__int64 __cxa_increment_exception_refcount_plt(void);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 memset_plt_alt1(void* this_, void*, int) __asm__("memset_plt");
__int64 nn_os_FinalizeMutex_plt(_QWORD);
__int64 nn_os_InitializeMutex_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nvidia_6497e0(__int64);
__int64 nvidia_64b2a0(__int64 result, __int64, __int64);
__int64 strlen_plt(_QWORD);
__int64 strncmp_plt(_QWORD, _QWORD, _QWORD);
__int64 strncpy_plt(_QWORD, _QWORD, _QWORD);
__int64 strstr_plt(void* this_, const char*);
__int64 tolower_plt(_QWORD);
extern _UNKNOWN* SdkData_e89bd8;
extern _UNKNOWN* SdkData_e89c10;
extern _UNKNOWN** SdkData_e89eb0;
extern _UNKNOWN SdkData_c92938;
extern _UNKNOWN SdkData_c92968;
extern _UNKNOWN SdkData_c92998;
extern _UNKNOWN SdkData_c92a40;
extern _UNKNOWN SdkData_c92a70;
extern _UNKNOWN SdkData_c92aa0;
extern _UNKNOWN SdkData_c92bb4;
extern _UNKNOWN SdkData_c92bb8;
extern _UNKNOWN SdkData_c92bbc;
extern _UNKNOWN SdkData_c92bbd;
extern _UNKNOWN SdkData_c92bc1;
extern _UNKNOWN SdkData_c92bc2;
extern _UNKNOWN SdkData_c92bc6;
extern _UNKNOWN SdkData_c92c26;
extern __int128 SdkData_bb0ee0;
extern __int128 SdkData_bb1170;
extern __int128 SdkData_bb1690;
extern __int128 SdkData_bb16a0;
extern __int128 SdkData_bb16b0;
extern __int128 SdkData_bb1840;
extern __int128 SdkData_bb1a90;
extern __int128 SdkData_bb1cc0;
extern __int128 SdkData_bb1e80;
extern __int128 SdkData_bb2840;
extern __int128 SdkData_bb2a10;
extern __int128 SdkData_bb2e00;
extern __int128 SdkData_bb2e10;
extern __int128 SdkData_bb2e20;
extern __int128 SdkData_bb3030;
extern __int128 SdkData_bb3780;
extern __int128 SdkData_bb3790;
extern __int128 SdkData_bb4360;
extern __int128 SdkData_bb4500;
extern __int128 SdkData_bb4740;
extern __int128 SdkData_bb4c80;
extern __int128 SdkData_bb4ca0;
extern __int128 SdkData_bb5300;
extern __int64 (*SdkData_1042158)(__int64);
extern __int64 SdkData_10450c8;
extern __int64 SdkData_e86c08;
extern char SdkData_10450c4;
extern int SdkData_10450c0;
void SdkRoutine_64b940();
void SdkRoutine_698610(__int64, __int64, __int64);
__int64 nn_69f550(_QWORD* a1);
__int64 nn_6a0a70(__int64 result, __int64 a2);
__int64 nn_6a0ce0(__int64 a1, __int64 a2);
__int64 nn_6a2920(__int64 a1, __int64 a2, __int64 a3, int* a4);
__int64 nn_6a39c0(__int64 result, void* this_, __int64 a3, unsigned __int64 a4);
__int64 nn_6a4090(__int64 a1, __int64 a2, __int64 a3);
__int64 nn_6a41a0(__int64 a1, _OWORD* a2);
__int64 nn_6a42b0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4);
__int64 nn_6a44c0(_QWORD* a1, _QWORD* a2, _QWORD* a3);
__int64 nn_6a4680(_QWORD* a1);
__int64 nn_6a4dd0(__int64 a1);
__int64 nn_6a4e70(__int64 a1, unsigned int a2, unsigned int a3);
__int64 nn_6a4ff0(__int64 result, __int64 a2, __int64 a3, unsigned __int64 a4);
__int64 nn_6a6d80(__int64 a1, unsigned int a2);
bool nn_6a6f80(__int64 a1);
__int64 nn_6a7630(__int64 a1, __int64* a2);
__int64 nn_6a97c0(unsigned int* a1, __int64 a2, __int64 a3,
                  unsigned __int64 a4);
__int64 nn_6ac200(_QWORD* a1);
__int64 nn_6ade20(__int64 a1);
__int64 nn_6ade30(__int64 a1, int a2);
bool nn_6ade60(__int64 a1, unsigned int a2, unsigned int a3,
               unsigned __int8* a4, unsigned int* a5);
__int64 nn_6ae5c0(__int64 a1, unsigned int a2, unsigned int a3,
                  unsigned __int8* a4);
__int64 nn_6ae940(__int64 a1, unsigned int* a2, _DWORD* a3, unsigned int a4,
                  int a5, int a6, int a7, char a8, char a9);
_QWORD* nn_7d3330(_QWORD* a1, _QWORD* a2);

__int64 nn_69f550(_QWORD* a1)
{
  _DWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  void* v7;

  v1 = (_DWORD*)a1[1];
  v3 = nvidia_6497e0(a1[3] + 272LL);
  v4 = nvidia_6497e0(a1[4] + 272LL);
  v5 = (__int64*)SdkRoutine_6a0ba0((__int64)v1);
  if (v5 == nullptr) {
    return 5;
  }
  if (*v1 == 1) {
    v6 = v5;
    v7 = SdkData_e89c10;
    nn_os_LockMutex_plt(SdkData_e89c10);
    nvidia_64d260(v6, a1[5] + v3, a1[6] + v4, a1[7]);
    nn_os_UnlockMutex_plt(v7);
  }
  else {
    nvidia_64d260(v5, a1[5] + v3, a1[6] + v4, a1[7]);
  }
  return 0;
}

__int64 nn_6a0a70(__int64 result, __int64 a2)
{
  __int64* v2;
  __int64 v3;
  int v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  unsigned __int64 v12;
  int v13;

  v2 = *(__int64**)(result + 120);
  if (v2 != nullptr) {
    v3 = *v2;
    if (v3 != 0) {
      v4 = *(_DWORD*)(a2 + 68);
      v5 = v3 + 88LL * v4;
      v6 = *(_DWORD*)(a2 + 40);
      if (v6 <= *(_DWORD*)((char*)((_UNKNOWN*)0x234LL) +
                           (_QWORD)SdkData_e89eb0 + 4)) {
        v6 = *(_DWORD*)((char*)((_UNKNOWN*)0x234LL) + (_QWORD)SdkData_e89eb0 +
                        4);
      }
      *(_DWORD*)(a2 + 40) = v6;
      if (v4 == 5) {
        v7 = *(_QWORD*)(a2 + 88);
        v8 = *(_DWORD*)(a2 + 96);
        *(_DWORD*)(v5 + 56) = v6;
      }
      else {
        *(_DWORD*)(v5 + 56) = v6;
        v7 = 0;
        v8 = 0;
      }
      v9 = *(_DWORD*)(a2 + 16);
      v10 = *(_DWORD*)(a2 + 12) + v9;
      if (v9 == -1 || v10 == -1) {
        v12 = 0;
      }
      else {
        v12 = ((unsigned __int64)*(unsigned int*)(a2 + 8) << 8) + v10;
      }
      *(_QWORD*)(v5 + 64) = v12;
      v13 = *(_DWORD*)(a2 + 24);
      *(_QWORD*)(v5 + 76) = v7;
      *(_DWORD*)(v5 + 84) = v8;
      *(_DWORD*)(v5 + 72) = v13;
    }
  }
  return result;
}

__int64 nn_6a0ce0(__int64 a1, __int64 a2)
{
  __int64* v2;
  int v3;
  int v4;
  char* v5;
  char* v6;
  __int64 v7;
  bool v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  char* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  char* v21;
  char* v22;

  if (*(_QWORD*)(a1 + 32) == 0) {
    return 0;
  }
  v2 = *(__int64**)(a1 + 40);
  v3 = (*(_DWORD*)(a1 + 64) + *(_DWORD*)(a2 + 4)) & ~*(_DWORD*)(a1 + 64);
  if (v2 == nullptr || (v4 = *((_DWORD*)v2 + 5)) < v3) {
    v2 = *(__int64**)(a1 + 32);
    while (1) {
      if (v2[1] == 0) {
        v4 = *((_DWORD*)v2 + 5);
        if (v4 >= v3) {
          break;
        }
      }
      v2 = (__int64*)*v2;
      if (v2 == nullptr) {
        if (v3 > (signed __int32)*(_DWORD*)(a1 + 48)) {
          return 0;
        }
        v10 = a2;
        v11 = a1;
        SdkRoutine_6a1100(a1, 0);
        a1 = v11;
        v2 = *(__int64**)(v11 + 32);
        if (v2 == nullptr) {
          return 0;
        }
        a2 = v10;
        while (1) {
          if (v2[1] == 0) {
            v4 = *((_DWORD*)v2 + 5);
            if (v4 >= v3) {
              break;
            }
          }
          v2 = (__int64*)*v2;
          if (v2 == nullptr) {
            return 0;
          }
        }
        break;
      }
    }
  }
  if (v4 > v3) {
    v5 = *(char**)(a1 + 8);
    if (v5 != nullptr) {
      v6 = *(char**)v5;
    LABEL_11:
      *(_QWORD*)(a1 + 8) = v6;
      *(_QWORD*)v5 = 0;
      ++*(_DWORD*)(a1 + 104);
      *(_QWORD*)v5 = *v2;
      *((_QWORD*)v5 + 1) = 0;
      *((_DWORD*)v5 + 4) = *((_DWORD*)v2 + 4) + v3;
      *((_DWORD*)v5 + 5) = *((_DWORD*)v2 + 5) - v3;
      *v2 = (__int64)v5;
      *((_DWORD*)v2 + 5) = v3;
      v7 = *(_QWORD*)(a1 + 40);
      v8 = (__int64*)v7 == v2 || v7 == 0;
      if (v8 || (signed __int32)*(_DWORD*)(v7 + 20) <
                    (signed __int32)*((_DWORD*)v5 + 5)) {
        *(_QWORD*)(a1 + 40) = v5;
      }
      goto LABEL_31;
    }
    v12 = *(_QWORD*)(a1 + 16);
    v13 = *(_QWORD*)(a1 + 24);
    v14 = a2;
    v15 = a1;
    v16 = (_QWORD*)SdkRoutine_85c780(v13 * v12 + 8, SdkData_e86c08);
    a1 = v15;
    if (v16 != nullptr) {
      v17 = *(_QWORD*)v15;
      *(_QWORD*)v15 = v16;
      *v16 = v17;
      if (v13 != 0) {
        v18 = (char*)(v16 + 1);
        v19 = v13 & 7;
        a2 = v14;
        if (v13 >= 8) {
          v20 = v13 & 0xFFFFFFFFFFFFFFF8LL;
          v21 = nullptr;
          do {
            *(_QWORD*)v18 = v21;
            *(_QWORD*)&v18[v12] = v18;
            *(_QWORD*)&v18[2 * v12] = &v18[v12];
            *(_QWORD*)&v18[3 * v12] = &v18[2 * v12];
            v20 -= 8LL;
            *(_QWORD*)&v18[4 * v12] = &v18[3 * v12];
            *(_QWORD*)&v18[5 * v12] = &v18[4 * v12];
            v21 = &v18[3 * v12 + 2 * v12 + v12 + v12];
            *(_QWORD*)&v18[6 * v12] = &v18[5 * v12];
            *(_QWORD*)&v18[7 * v12] = &v18[6 * v12];
            v18 = &v21[v12];
          } while (v20 != 0);
          v6 = &v18[-2 * v12];
          v5 = v21;
        }
        else {
          v5 = nullptr;
        }
        if ((v13 & 7) != 0) {
          do {
            v22 = &v18[v12];
            --v19;
            v6 = v5;
            *(_QWORD*)v18 = v5;
            v5 = v18;
            v18 += v12;
          } while (v19 != 0);
          v5 = &v22[-v12];
        }
        goto LABEL_11;
      }
    }
    a2 = v14;
    ++*(_DWORD*)(v15 + 104);
  }
LABEL_31:
  v2[1] = a2;
  *(_QWORD*)(a2 + 8) = *(_QWORD*)(a1 + 56) + *((int*)v2 + 4);
  if (*(__int64**)(a1 + 40) == v2) {
    *(_QWORD*)(a1 + 40) = 0;
  }
  return 1;
}

__int64 nn_6a2920(__int64 a1, __int64 a2, __int64 a3, int* a4)
{
  __int64 result;
  unsigned __int64 v8;
  unsigned __int64 v10;
  int v12;
  _QWORD v17[32];

  result = 0;
  if (a1 != 0 && a2 != 0 && a4 != nullptr) {
    v8 = strlen_plt(a3);
    if (v8 < 9 || (unsigned int)strncmp_plt(a3, "rtcoreNop", 9) != 0) {
      memset(v17, 0, sizeof(v17));
      strncpy_plt(v17, a3, v8 + 1);
      if (LOBYTE(v17[0]) != 0) {
        v10 = 0;
        do {
          *((_BYTE*)v17 + v10) = tolower_plt(*((unsigned __int8*)v17 + v10));
          ++v10;
        } while (strlen_plt(v17) > v10);
      }
      if (strstr_plt((void*)v17, "_raygen") != 0) {
        v12 = 1;
      }
      else if (strstr_plt((void*)v17, "_intersection") != 0) {
        v12 = 2;
      }
      else if (strstr_plt((void*)v17, "_any") != 0) {
        v12 = 3;
      }
      else if (strstr_plt((void*)v17, "_closest") != 0) {
        v12 = 4;
      }
      else if (strstr_plt((void*)v17, "_miss") != 0) {
        v12 = 5;
      }
      else {
        result = strstr_plt((void*)v17, "_callable");
        if (result == 0) {
          return result;
        }
        v12 = 6;
      }
    }
    else {
      v12 = 0;
    }
    *a4 = v12;
    return 1;
  }
  return result;
}

__int64 nn_6a39c0(__int64 result, void* this_, __int64 a3, unsigned __int64 a4)
{
  __int64 v5;
  int v6;
  int v7;
  unsigned int v8;
  _DWORD* v9;
  __int64 v10;
  __int64 v11;
  _DWORD* v12;
  int v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  unsigned int* v28;
  __int64 v29;
  __int64 v30;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v37;

  if (result != 0 && this_ != nullptr) {
    v5 = result;
    result = memset_plt(this_, nullptr, 1656, a4);
    v6 = *(_DWORD*)(v5 + 16);
    *((_QWORD*)this_ + 2) = v5;
    *((_DWORD*)this_ + 1) = v6;
    *((_QWORD*)this_ + 3) = *(_QWORD*)(v5 + 8);
    v7 = *(_DWORD*)(v5 + 128);
    *((_DWORD*)this_ + 2) = v7 & 0x1FF;
    if ((v7 & 0x20) != 0) {
      *((_DWORD*)this_ + 10) = 1;
      v28 = *(unsigned int**)(v5 + 24);
      *((_DWORD*)this_ + 12) = v28[4];
      *((_DWORD*)this_ + 13) = v28[5];
      v29 = (int)v28[2];
      v30 = (int)v28[1] + v29;
      if ((_DWORD)v29 == -1 || (_DWORD)v30 == -1) {
        v33 = 0;
      }
      else {
        v33 = v30 + ((unsigned __int64)*v28 << 8);
      }
      *((_QWORD*)this_ + 7) = v33;
      v34 = (int)v28[3];
      v35 = (int)v28[1] + v34;
      if ((_DWORD)v34 == -1 || (_DWORD)v35 == -1) {
        v37 = 0;
      }
      else {
        v37 = v35 + ((unsigned __int64)*v28 << 8);
      }
      *((_QWORD*)this_ + 8) = v37;
      *((_DWORD*)this_ + 23) = v28[13];
      *((_DWORD*)this_ + 24) = v28[14];
      *((_DWORD*)this_ + 25) = v28[15];
      *((_DWORD*)this_ + 26) = v28[16];
      *((_DWORD*)this_ + 27) = v28[17];
      *((_DWORD*)this_ + 28) = v28[18];
      *((_DWORD*)this_ + 29) = v28[19];
      *((_DWORD*)this_ + 30) = v28[20];
      *((_DWORD*)this_ + 31) = v28[21];
      *((_DWORD*)this_ + 32) = v28[22];
      *((_QWORD*)this_ + 17) = *((_QWORD*)v28 + 12);
      *((_BYTE*)this_ + 72) = *((_BYTE*)v28 + 32);
      *((_WORD*)this_ + 45) = *((_WORD*)v28 + 25);
      *((_BYTE*)this_ + 73) = *((_BYTE*)v28 + 33);
      *((_BYTE*)this_ + 74) = *((_BYTE*)v28 + 34);
      *((_BYTE*)this_ + 75) = *((_BYTE*)v28 + 35);
      *((_BYTE*)this_ + 76) = *((_BYTE*)v28 + 36);
      *((_BYTE*)this_ + 77) = *((_BYTE*)v28 + 37);
      *((_BYTE*)this_ + 78) = *((_BYTE*)v28 + 38);
      *((_BYTE*)this_ + 79) = *((_BYTE*)v28 + 39);
      *((_BYTE*)this_ + 80) = *((_BYTE*)v28 + 40);
      *((_BYTE*)this_ + 81) = *((_BYTE*)v28 + 41);
      *((_BYTE*)this_ + 82) = *((_BYTE*)v28 + 42);
      *((_BYTE*)this_ + 83) = *((_BYTE*)v28 + 43);
      *((_BYTE*)this_ + 84) = *((_BYTE*)v28 + 44);
      *((_BYTE*)this_ + 85) = *((_BYTE*)v28 + 45);
      *((_BYTE*)this_ + 86) = *((_BYTE*)v28 + 46);
      *((_BYTE*)this_ + 87) = *((_BYTE*)v28 + 47);
      *((_BYTE*)this_ + 88) = *((_BYTE*)v28 + 48);
      *((_BYTE*)this_ + 89) = *((_BYTE*)v28 + 49);
      *((_BYTE*)this_ + 144) = v28[26] & 1;
      *((_BYTE*)this_ + 145) = (v28[26] & 2) != 0;
      *((_BYTE*)this_ + 146) = (v28[26] & 4) != 0;
      *((_BYTE*)this_ + 147) = (v28[26] & 8) != 0;
      *((_BYTE*)this_ + 148) = (v28[26] & 0x10) != 0;
    }
    else if ((v7 & 0x100) != 0) {
      *((_DWORD*)this_ + 10) = 3;
      v32 = *(_QWORD*)(v5 + 152);
      *((_QWORD*)this_ + 6) = *(_QWORD*)(v32 + 8);
      *((_QWORD*)this_ + 7) = *(_QWORD*)(v32 + 16);
      *((_QWORD*)this_ + 8) = *(_QWORD*)(v32 + 32);
      *((_DWORD*)this_ + 18) = *(_DWORD*)(v32 + 48);
      *((_BYTE*)this_ + 76) = *(_BYTE*)(v32 + 112);
      *((_BYTE*)this_ + 77) = *(_BYTE*)(v32 + 113);
      *((_BYTE*)this_ + 78) = *(_BYTE*)(v32 + 114);
      *((_BYTE*)this_ + 79) = *(_BYTE*)(v32 + 115);
      *((_DWORD*)this_ + 20) = *(_DWORD*)(v32 + 116);
      *((_DWORD*)this_ + 21) = *(_DWORD*)(v32 + 120);
      *((_BYTE*)this_ + 88) = *(_BYTE*)(v32 + 80) & 1;
      *((_BYTE*)this_ + 89) = (*(_BYTE*)(v32 + 80) & 2) != 0;
      *((_BYTE*)this_ + 90) = (*(_BYTE*)(v32 + 80) & 4) != 0;
      *((_BYTE*)this_ + 91) = (*(_BYTE*)(v32 + 80) & 8) != 0;
      *((_BYTE*)this_ + 92) = (*(_BYTE*)(v32 + 80) & 0x10) != 0;
      *((_DWORD*)this_ + 24) = *(_DWORD*)(v32 + 168);
      *((_DWORD*)this_ + 25) = *(_DWORD*)(v32 + 172);
    }
    else if ((v7 & 0xDF) != 0) {
      *((_DWORD*)this_ + 10) = 2;
      *((_DWORD*)this_ + 12) = (*(_DWORD*)(v5 + 128) >> 9) & 0x1FF;
      v8 = *(_DWORD*)(v5 + 20);
      *((_DWORD*)this_ + 13) = v8;
      *((_DWORD*)this_ + 107) = (int)*(_QWORD*)(v5 + 128) >> 28;
      if (v8 >= 0x5D) {
        v8 = 93;
      }
      result = memcpy_plt((char*)this_ + 56, *(_QWORD*)(v5 + 24), 4 * v8);
      v9 = (_DWORD*)(v5 + 60);
      v10 = -448;
      v11 = 1012;
      do {
        v14 = *(_QWORD*)(v5 + 32);
        v15 = (char*)this_ + v10;
        v16 = v14 + v10;
        *((_DWORD*)v15 + 220) = *(_DWORD*)(v14 + v10 + 464);
        *((_DWORD*)v15 + 221) = *(_DWORD*)(v14 + v10 + 468);
        v17 = *(int*)(v14 + v10 + 456);
        v18 = *(int*)(v14 + v10 + 452) + v17;
        if ((_DWORD)v17 == -1 || (_DWORD)v18 == -1) {
          v20 = 0;
        }
        else {
          v20 = v18 + ((unsigned __int64)*(unsigned int*)(v16 + 448) << 8);
        }
        *((_QWORD*)v15 + 111) = v20;
        v21 = *(int*)(v16 + 460);
        v22 = *(int*)(v16 + 452) + v21;
        if ((_DWORD)v21 == -1 || (_DWORD)v22 == -1) {
          v24 = 0;
        }
        else {
          v24 = v22 + ((unsigned __int64)*(unsigned int*)(v16 + 448) << 8);
        }
        v25 = (char*)this_ + v10;
        v26 = v14 + v10;
        *((_QWORD*)v25 + 112) = v24;
        *((_DWORD*)v25 + 226) = *(_DWORD*)(v26 + 480);
        *((_DWORD*)v25 + 227) = *(_DWORD*)(v26 + 484);
        *((_QWORD*)v25 + 114) = *(_QWORD*)(v26 + 488);
        v27 = *(_QWORD*)(v26 + 472);
        if (v27 != 0) {
          *((_DWORD*)v25 + 232) =
              (((*(_DWORD*)(v27 + 8) & 0xFFFFFF) + 15) & 0x1FFFFF0) +
              (((*(_DWORD*)(v27 + 4) & 0xFFFFFF) + 15) & 0x1FFFFF0);
        }
        v10 += 56;
        v25[920] = *(_BYTE*)(v26 + 496) & 1;
        v25[921] = (*(_BYTE*)(v26 + 496) & 2) != 0;
        v25[922] = (*(_BYTE*)(v26 + 496) & 4) != 0;
        v25[923] = (*(_BYTE*)(v26 + 496) & 8) != 0;
        v25[924] = (*(_BYTE*)(v26 + 496) & 0x10) != 0;
        v12 = (_DWORD*)((char*)this_ + v11);
        v11 += 80;
        *(v12 - 19) = *(v9 - 5);
        *(v12 - 18) = *(v9 - 4);
        *(v12 - 17) = *(v9 - 3);
        *(v12 - 16) = *(v9 - 2);
        *(v12 - 15) = *(v9 - 1);
        *(v12 - 14) = *v9;
        *(v12 - 13) = v9[1];
        v13 = v9[2];
        v9 += 2;
        *(v12 - 12) = v13;
        *(v12 - 11) = v9[1];
        *(v12 - 10) = v9[2];
        *(v12 - 9) = v9[3];
        *(v12 - 8) = v9[4];
        *(v12 - 7) = v9[5];
        *(v12 - 6) = v9[6];
        *(v12 - 5) = v9[7];
        *(v12 - 4) = v9[8];
        *(v12 - 3) = v9[9];
        *(v12 - 2) = v9[10];
        *(v12 - 1) = v9[11];
        *v12 = v9[12];
      } while (v10 != 0);
    }
  }
  return result;
}

__int64 nn_6a4090(__int64 a1, __int64 a2, __int64 a3)
{
  int v5;
  int v6;
  int v7;
  struct {
    _BYTE v9[32];
    int v10;
    unsigned __int8 v11;
    unsigned __int8 v12;
    unsigned __int8 v13;
  } v9_;

  v5 = *(unsigned __int8*)(NvRmGpuDeviceGetInfo_plt(*(_QWORD*)(a1 + 2528)) +
                           170);
  *(_BYTE*)a3 = v5;
  if (v5 == 1) {
    NvRmGpuProfilerV2GetInfo_plt(a2, v9_.v9);
    v6 = v9_.v11;
    *(_DWORD*)(a3 + 4) = v9_.v10;
    *(_DWORD*)(a3 + 8) = v6;
    v7 = v9_.v13;
    *(_DWORD*)(a3 + 12) = v9_.v12;
    *(_DWORD*)(a3 + 16) = v7;
  }
  return 1;
}

__int64 nn_6a41a0(__int64 a1, _OWORD* a2)
{
  __int128 v5;
  _BYTE v6[2344];
  __int64 v7;
  struct {
    __int64 v8;
    char gap2416_[32];
    __int64 v9;
    __int64 v10;
    char gap2464_[4];
    char v11;
  } v8_;
  __int64 v12;
  __int128 v13;
  struct {
    _QWORD v14[658];
    __int64 v15;
    __int64 v16;
    char gap7800_[4];
    char v17;
  } v14_;
  __int64 v18;

  SdkRoutine_654d40((__int64)v6);
  v14_.v14[615] = 0x10000000000LL;
  SdkRoutine_698610((__int64)v6, a1 + 8, (__int64)&v5);
  *a2 = v5;
  nn_os_FinalizeMutex_plt(&v18);
  if (v14_.v15 != 0) {
    if ((v14_.v17 & 2) != 0) {
      SdkData_1042158(v14_.v15);
    }
    v14_.v15 = 0;
    v14_.v16 = 0;
  }
  nn_os_FinalizeMutex_plt(v14_.v14);
  SdkRoutine_6565e0(&v13);
  v13 = (__typeof__(v13)){0};
  nn_os_FinalizeMutex_plt(&v12);
  if (v8_.v9 != 0) {
    if ((v8_.v11 & 2) != 0) {
      SdkData_1042158(v8_.v9);
    }
    v8_.v9 = 0;
    v8_.v10 = 0;
  }
  nn_os_FinalizeMutex_plt(&v8_.v8);
  return nn_os_FinalizeMutex_plt(&v7);
}

__int64 nn_6a42b0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;

  if (a2 != 0) {
    v5 = *(_QWORD*)(a1 + 11240);
    v6 = (unsigned int)(a3 >> 2);
    if ((unsigned __int64)(v5 + 4 * v6) > *(_QWORD*)(a1 + 11248)) {
      v7 = a2;
      v8 = a3;
      SdkRoutine_64b750(a1 + 11240, *(_QWORD*)(a1 + 11240),
                        4LL *
                            (*(_DWORD*)(a1 + 11344) + (unsigned int)(a3 >> 2)));
      a3 = v8;
      v5 = *(_QWORD*)(a1 + 11240);
      a2 = v7;
    }
    memcpy_plt(v5, a2, a3);
    *(_QWORD*)(a1 + 11240) = v5 + 4 * v6;
  }
  else {
    if (a4 == 0) {
      return 0;
    }
    v9 = *(_QWORD*)(a1 + 11240);
    v10 = *(_QWORD*)(a1 + 11312);
    if (v9 == v10) {
      v20 = *(_QWORD*)(a1 + 11280);
    }
    else {
      v11 = *(_QWORD*)(a1 + 11280);
      v12 = *(_QWORD*)(a1 + 11296);
      v13 = (unsigned __int64)(v9 - v10) >> 2;
      v14 = *(_QWORD*)(a1 + 11336) + v10;
      v15 = *(_QWORD*)(a1 + 11288);
      *(_QWORD*)(a1 + 11312) = v9;
      if (v11 + 32 > v15) {
        v16 = a3;
        v17 = a4;
        ((void (*)(__int64))SdkRoutine_64b940)(a1 + 11240);
        v11 = *(_QWORD*)(a1 + 11280);
        a4 = v17;
        LODWORD(a3) = v16;
      }
      v18 = *(_QWORD*)(a1 + 11328);
      if (v18 != 0) {
        *(_DWORD*)(v18 + 4) =
            (((unsigned __int64)*(unsigned int*)(v18 + 4) << 32) +
             0x100000000LL) >>
            32;
      }
      else {
        *(_QWORD*)(v11 + 8) = 0;
        *(_QWORD*)(v11 + 16) = 0;
        *(_QWORD*)(v11 + 24) = 0;
        *(_QWORD*)v11 = 0x100000003LL;
        *(_QWORD*)(a1 + 11328) = v11;
        v11 += 8;
      }
      *(_QWORD*)v11 = v14 - v12;
      *(_QWORD*)(v11 + 8) = v10;
      *(_DWORD*)(v11 + 16) = v13;
      *(_BYTE*)(v11 + 20) = 1;
      v20 = v11 + 24;
      *(_QWORD*)(a1 + 11280) = v20;
    }
    if ((unsigned __int64)(v20 + 32) > *(_QWORD*)(a1 + 11288)) {
      v21 = a3;
      v22 = a4;
      ((void (*)(__int64))SdkRoutine_64b940)(a1 + 11240);
      v20 = *(_QWORD*)(a1 + 11280);
      a4 = v22;
      LODWORD(a3) = v21;
    }
    v23 = *(_QWORD*)(a1 + 11328);
    if (v23 != 0) {
      *(_DWORD*)(v23 + 4) =
          (((unsigned __int64)*(unsigned int*)(v23 + 4) << 32) +
           0x100000000LL) >>
          32;
    }
    else {
      *(_QWORD*)(v20 + 8) = 0;
      *(_QWORD*)(v20 + 16) = 0;
      *(_QWORD*)(v20 + 24) = 0;
      *(_QWORD*)v20 = 0x100000003LL;
      *(_QWORD*)(a1 + 11328) = v20;
      v20 += 8;
    }
    *(_QWORD*)v20 = a4;
    *(_QWORD*)(v20 + 8) = 0;
    *(_DWORD*)(v20 + 16) = (unsigned int)a3 >> 2;
    *(_BYTE*)(v20 + 20) = *(_BYTE*)(v20 + 20) & 0xF8 | 2;
    *(_QWORD*)(a1 + 11280) = v20 + 24;
  }
  return 1;
}

__int64 nn_6a44c0(_QWORD* a1, _QWORD* a2, _QWORD* a3)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;

  *a2 = 0;
  *a3 = 0;
  v3 = a1[1405];
  v4 = a1[1414];
  v5 = (_QWORD*)a1[1410];
  v6 = (_QWORD*)a1[1415];
  if (v3 != v4 || v5 != v6) {
    if (v3 != v4) {
      v8 = a1[1417];
      v9 = a1[1412];
      a1[1414] = v3;
      v10 = (unsigned __int64)(v3 - v4) >> 2;
      v11 = v8 + v4;
      if ((unsigned __int64)(v5 + 4) > a1[1411]) {
        v12 = a1;
        v13 = a3;
        v14 = a2;
        ((void (*)(_QWORD*, _QWORD*, __int64))SdkRoutine_64b940)(a1 + 1405, v5,
                                                                 48);
        v5 = (_QWORD*)v12[1410];
        a1 = v12;
        a2 = v14;
        a3 = v13;
      }
      v15 = a1[1416];
      if (v15 != 0) {
        *(_DWORD*)(v15 + 4) =
            (((unsigned __int64)*(unsigned int*)(v15 + 4) << 32) +
             0x100000000LL) >>
            32;
      }
      else {
        v5[1] = 0;
        v5[2] = 0;
        v5[3] = 0;
        *v5 = 0x100000003LL;
        a1[1416] = v5++;
      }
      *v5 = v11 - v9;
      v5[1] = v4;
      *((_DWORD*)v5 + 4) = v10;
      *((_BYTE*)v5 + 20) = 7;
      v6 = (_QWORD*)a1[1415];
      a1[1410] = v5 + 3;
    }
    v16 = HIDWORD(*v6);
    if (v16 != 0) {
      *a2 = v6;
      *a3 = 24LL * (unsigned int)(v16 - 1) + 32;
    }
  }
  return 1;
}

__int64 nn_6a4680(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  bool v4;
  unsigned int v5;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = a1[1405];
  v2 = a1[1414];
  v3 = a1[1410];
  v4 = v1 == v2 && v3 == a1[1415];
  v5 = !v4;
  if (!v4) {
    if (v1 != v2) {
      v7 = a1[1412];
      v8 = (unsigned __int64)(v1 - v2) >> 2;
      v9 = a1[1411];
      v10 = a1[1417] + v2;
      a1[1414] = v1;
      if (v3 + 32 > v9) {
        ((void (*)(_QWORD*))SdkRoutine_64b940)(a1 + 1405);
        v3 = a1[1410];
      }
      v11 = a1[1416];
      if (v11 != 0) {
        *(_DWORD*)(v11 + 4) =
            (((unsigned __int64)*(unsigned int*)(v11 + 4) << 32) +
             0x100000000LL) >>
            32;
      }
      else {
        *(_QWORD*)(v3 + 8) = 0;
        *(_QWORD*)(v3 + 16) = 0;
        *(_QWORD*)(v3 + 24) = 0;
        *(_QWORD*)v3 = 0x100000003LL;
        a1[1416] = v3;
        v3 += 8;
      }
      *(_QWORD*)v3 = v10 - v7;
      *(_QWORD*)(v3 + 8) = v2;
      *(_DWORD*)(v3 + 16) = v8;
      *(_BYTE*)(v3 + 20) = 7;
      a1[1410] = v3 + 24;
    }
    nvidia_64b2a0((__int64)(a1 + 1405), (__int64)(a1 + 1206), 512);
  }
  return v5;
}

__int64 nn_6a4dd0(__int64 a1) { return SdkData_1042158(a1); }

__int64 nn_6a4e70(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v7;
  void* v8;
  __int64 result;
  void* v14;
  __int64 v15;
  __int64 (*v16)(_QWORD, __int64);
  __int64 v17;
  __int64 (*v18)(_QWORD, __int64);
  __int64 v19;
  __int64 v20;
  __int64 (*v21)(_QWORD, __int64);
  __int64 v22;
  __int64 v23;
  __int64 v24;

  (*(void (**)(_QWORD, __int64, __int64*))(
      *(_QWORD*)(*(_QWORD*)(a1 + 8) + 7688LL) + 64LL))(
      *(_QWORD*)(*(_QWORD*)(a1 + 8) + 7696LL), 25, &v24);
  v7 = *(_QWORD*)(a1 + 152);
  if (v7 == 0) {
    v7 = (*(__int64 (**)(__int64, __int64))(
        (char*)((__int64*)0x4LL) + (_QWORD)SdkData_e89bd8 + 4))(1, 176);
    *(_QWORD*)(a1 + 152) = v7;
  }
  v8 = *(void**)(v7 + 56);
  if (v8 != nullptr) {
    memset_plt_alt1(v8, nullptr, 8 * (a2 + 1));
    memset_plt_alt1(*(void**)(v7 + 72), nullptr, 40 * a2);
    memset_plt_alt1(*(void**)(v7 + 96), nullptr, v24 * a2);
    memset_plt_alt1(*(void**)(v7 + 104), nullptr, 8 * a2);
    return memset_plt_alt1(*(void**)(v7 + 88), nullptr, a3);
  }
  else {
    v14 = SdkData_e89bd8;
    v15 = (*(__int64 (**)(_QWORD, __int64))(
        (char*)((__int64*)0x4LL) + (_QWORD)SdkData_e89bd8 + 4))(a2 + 1, 8);
    v16 = *(__int64 (**)(_QWORD, __int64))((char*)((__int64*)0x4LL) +
                                           (_QWORD)v14 + 4);
    *(_QWORD*)(v7 + 56) = v15;
    v17 = v16(a2, 40);
    v18 = *(__int64 (**)(_QWORD, __int64))((char*)((__int64*)0x4LL) +
                                           (_QWORD)v14 + 4);
    v19 = v24;
    *(_QWORD*)(v7 + 72) = v17;
    v20 = v18(a2, v19);
    v21 = *(__int64 (**)(_QWORD, __int64))((char*)((__int64*)0x4LL) +
                                           (_QWORD)v14 + 4);
    *(_QWORD*)(v7 + 96) = v20;
    v22 = v21(a2, 8);
    *(_WORD*)(v7 + 136) = 0;
    v23 = v7 + 136;
    *(_QWORD*)(v23 - 32) = v22;
    *(_DWORD*)(v23 + 4) = 0;
    *(_DWORD*)(v23 + 8) = 0;
    *(_QWORD*)(v23 + 16) = 0;
    *(_DWORD*)(v23 + 24) = 0;
    nn_os_InitializeMutex_plt(v23, 1, 0);
    result = (*(__int64 (**)(__int64, __int64))(
        (char*)((__int64*)0x4LL) + (_QWORD)v14 + 4))(1, 8LL * a2 + a3);
    *(_QWORD*)(v23 - 48) = (result + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  return result;
}

__int64 nn_6a4ff0(__int64 result, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v4;
  _OWORD* v5;
  __int64 v6;

  v4 = *(_DWORD*)(result + 128);
  if ((v4 & 0x20) != 0) {
    v5 = *(_OWORD**)(result + 24);
    if (v5 != nullptr) {
      v5[1] = (__typeof__(v5[1])){0};
      v5[2] = (__typeof__(v5[2])){0};
      v5[3] = (__typeof__(v5[3])){0};
      v5[4] = (__typeof__(v5[4])){0};
      *v5 = (__typeof__(*v5)){0};
      v5[5] = (__typeof__(v5[5])){0};
      v5[6] = (__typeof__(v5[6])){0};
      return result;
    }
    v6 = result;
    result = (*(__int64 (**)(__int64, __int64))(
        (char*)((__int64*)0x4LL) + (_QWORD)SdkData_e89bd8 + 4))(1, 112);
  }
  else {
    if ((v4 & 0xDF) == 0) {
      return result;
    }
    if (*(_QWORD*)(result + 24) != 0) {
      return memset_plt(*(void**)(result + 24), nullptr,
                        4 * *(_DWORD*)(result + 20), a4);
    }
    v6 = result;
    result = (*(__int64 (**)(_QWORD, __int64))((char*)((__int64*)0x4LL) +
                                               (_QWORD)SdkData_e89bd8 + 4))(
        *(unsigned int*)(result + 20), 4);
  }
  *(_QWORD*)(v6 + 24) = result;
  return result;
}

__int64 nn_6a6d80(__int64 a1, unsigned int a2)
{
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  __int64 v8;
  int32x4_t v9;
  int32x4_t v10;
  int32x4_t v11;
  int32x4_t v12;
  int8x16_t v13;
  int32x4_t v14;
  unsigned int v15;
  int32x4_t v16;
  uint32x4_t v17;
  uint32x4_t v18;
  unsigned int v19;

  v2 = *(_QWORD*)(a1 + 120);
  if (v2 == 0) {
    return 0;
  }
  v3 = *(_QWORD*)(v2 + 8);
  if (v3 == 0) {
    return 0;
  }
  v4 = (*(_DWORD*)(a1 + 128) >> 18) & 0x1FF;
  if (v4 == 0 || ((v4 >> a2) & 1) == 0) {
    return 0;
  }
  if (a2 != 0) {
    if (a2 >= 8) {
      v9 = (__typeof__(v9)){0};
      LANES128(v10).n128_u64[0] = 0x300000003LL;
      LANES128(v10).n128_u64[1] = 0x300000003LL;
      v11 = vdupq_n_s32(v4);
      v6 = a2 & 0xFFFFFFF8;
      v12 = COERCE_AS(int32x4_t, SdkData_bb1cc0);
      LANES128(v13).n128_u64[0] = 0x100000001LL;
      LANES128(v13).n128_u64[1] = 0x100000001LL;
      LANES128(v14).n128_u64[0] = 0x800000008LL;
      LANES128(v14).n128_u64[1] = 0x800000008LL;
      v15 = a2 & 0xFFFFFFF8;
      v16 = (__typeof__(v16)){0};
      do {
        v17 = vnegq_s32(v12);
        v18 = vsubq_s32(v10, v12);
        v15 -= 8;
        v12 = vaddq_s32(v12, v14);
        v9 = vaddq_s32(vandq_s8(vshlq_u32(v11, v17), v13), v9);
        v16 = vaddq_s32(vandq_s8(vshlq_u32(v11, v18), v13), v16);
      } while (v15 != 0);
      v5 = vaddvq_s32(vaddq_s32(v16, v9));
      goto LABEL_14;
    }
    v5 = 0;
    v6 = 0;
    do {
      v19 = v4 >> v6++;
      v5 += v19 & 1;
    LABEL_14:;
    } while (a2 != v6);
    v8 = v5;
  }
  else {
    v8 = 0;
  }
  return *(_QWORD*)(v3 + 16 * v8);
}

bool nn_6a6f80(__int64 a1)
{
  return *(_QWORD*)(a1 + 176) != 0 && (signed __int32)*(_DWORD*)(a1 + 168) > 0;
}

__int64 nn_6a7630(__int64 a1, __int64* a2)
{
  unsigned int v2;
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  _BOOL4 v18;
  _BOOL4 v20;
  unsigned int v21;
  _BOOL4 v23;
  _BOOL4 v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  _BOOL4 v31;
  unsigned int v32;
  _BOOL4 v35;
  _BOOL4 v37;
  _BOOL4 v39;
  _BOOL4 v41;
  _BOOL4 v43;
  unsigned int v44;
  _BOOL4 v46;
  unsigned int v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  bool v53;
  int v55;
  bool v56;
  unsigned int v58;
  unsigned int v59;
  unsigned int v60;
  int v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  struct {
    __int128 v70;
    unsigned __int64 v71;
    _QWORD* v72;
    _QWORD* v73;
    _QWORD* v74;
    __int128* v75;
    __int64 v76;
    __int128 v77;
  } v70_;
  struct {
    __int128 v78;
    __int128 v79;
    __int128 v80;
  } v78_;
  _QWORD v81[3];
  struct {
    _QWORD v82[2];
    __int64 v83;
  } v82_;
  _QWORD v84[3];

  v2 = 0;
  if (a1 == 0 || a2 == nullptr) {
    return v2;
  }
  memset(v84, 0, sizeof(v84));
  v82_.v82[0] = 0;
  v82_.v82[1] = 0;
  v82_.v83 = 0;
  v78_.v79 = (__typeof__(v78_.v79)){0};
  v78_.v80 = (__typeof__(v78_.v80)){0};
  v70_.v71 = 48;
  v70_.v72 = v84;
  v70_.v73 = v82_.v82;
  v70_.v74 = v81;
  v4 = *(_DWORD*)(a1 + 356);
  memset(v81, 0, sizeof(v81));
  v70_.v70 = SdkData_bb3780;
  v70_.v75 = &v78_.v78;
  v70_.v76 = 0;
  v70_.v77 = SdkData_bb4740;
  v78_.v78 = (__typeof__(v78_.v78)){0};
  if ((v4 & 4) != 0) {
    v6 = 33;
    v5 = 34;
  }
  else {
    v5 = 35;
    LODWORD(v70_.v76) = 398;
    v6 = 459;
  }
  v7 = v6 | 4;
  LODWORD(v70_.v76) = v6 | 4;
  HIDWORD(v70_.v76) = v5;
  v8 = v6 | 4;
  LODWORD(v82_.v82[0]) = v6;
  HIDWORD(v82_.v82[0]) = v6 + 2;
  *(_QWORD*)&v78_.v78 = &SdkData_c92938;
  *((_QWORD*)&v78_.v78 + 1) = &SdkData_c92968;
  v9 = v6 | 4;
  v10 = v6 | 4;
  v11 = v6 | 4;
  v84[0] = 0x2400000023LL;
  v81[0] = 0x600000006LL;
  if ((v4 & 4) == 0) {
    v8 = v6 + 6;
    v10 = v6 + 27;
    v11 = v6 + 128;
    v9 = v6 + 130;
    v7 = v6 + 144;
    LODWORD(v70_.v76) = v6 + 144;
    HIDWORD(v70_.v76) = 49;
  }
  LODWORD(v82_.v82[1]) = v7 + 7;
  HIDWORD(v82_.v82[1]) = v7 + 9;
  *(_QWORD*)&v78_.v79 = &SdkData_c92a40;
  *((_QWORD*)&v78_.v79 + 1) = &SdkData_c92a70;
  LODWORD(v82_.v83) = v7 + 16;
  HIDWORD(v82_.v83) = v7;
  v12 = v7 + 23;
  LODWORD(v70_.v76) = v7 + 23;
  HIDWORD(v70_.v76) = 55;
  *(_OWORD*)&v84[1] = SdkData_bb3030;
  *(_OWORD*)&v81[1] = SdkData_bb4c80;
  *(_QWORD*)&v78_.v80 = &SdkData_c92aa0;
  *((_QWORD*)&v78_.v80 + 1) = &SdkData_c92998;
  if ((v4 & 4) == 0) {
    v12 = v7 + 42;
    LODWORD(v70_.v76) = v7 + 42;
    HIDWORD(v70_.v76) = 58;
  }
  v13 = v12 + 63;
  LODWORD(v70_.v76) = v12 + 63;
  if ((v4 & 4) != 0) {
    v13 = v12 + 99;
    LODWORD(v70_.v76) = v12 + 99;
  }
  v14 = v13 + 27;
  LODWORD(v70_.v76) = v13 + 27;
  HIDWORD(v70_.v76) = 65;
  if (v13 + 30 > (unsigned int)(v13 + 27)) {
    v15 = v13 + 49;
  LABEL_14:
    LODWORD(v70_.v76) = v15;
    v14 = v15;
    goto LABEL_17;
  }
  v15 = v13 + 49;
  if (v13 + 32 > v14 || v15 > v14) {
    goto LABEL_14;
  }
LABEL_17:
  v16 = v13 + 62;
  v18 = v13 + 51 > v14 || v13 + 53 > v14;
  if (v18) {
    v14 = v13 + 53;
  }
  v20 = v13 + 55 > v14 || v16 > v14;
  if (v20) {
    v14 = v13 + 62;
  }
  if (v18 || v20) {
    LODWORD(v70_.v76) = v14;
  }
  if ((v4 & 4) == 0) {
    v16 = v13 + 103;
    HIDWORD(v70_.v76) = 74;
    v21 = v13 + 68;
    v23 = v13 + 65 > v14 || v21 > v14;
    if (!v23) {
      v21 = v14;
    }
    v14 = v13 + 95;
    v25 = v13 + 77 > v21 || v14 > v21;
    if (!v25) {
      v14 = v21;
    }
    if (v16 <= v14) {
      v26 = v25;
    }
    else {
      v14 = v13 + 103;
      v26 = 1;
    }
    if (v23 || v26 != 0) {
      if (v26 != 0) {
        v27 = v14;
      }
      else {
        v27 = v21;
      }
      LODWORD(v70_.v76) = v27;
    }
  }
  HIDWORD(v70_.v76) = 79;
  v28 = v16 + 34;
  if (v16 + 21 > v14 || v28 > v14) {
    LODWORD(v70_.v76) = v16 + 34;
    v14 = v16 + 34;
  }
  if ((v4 & 4) == 0) {
    v28 = v16 + 71;
    if (v16 + 71 > v14) {
      LODWORD(v70_.v76) = v16 + 71;
      v14 = v16 + 71;
    }
  }
  v29 = v28 + 118;
  v31 = v28 + 7 > v14 || v28 + 77 > v14;
  if (v31) {
    v14 = v28 + 77;
  }
  if (v29 <= v14) {
    v32 = v14;
  }
  else {
    v32 = v28 + 118;
  }
  v35 = v14 < v28 + 200 || v14 < v28 + 225 || v14 < v28 + 228;
  if (v35) {
    v32 = v28 + 228;
  }
  if (v31 || v29 > v14 || v35) {
    LODWORD(v70_.v76) = v32;
  }
  v37 = v28 + 230 > v32 || v28 + 238 > v32;
  if (v37) {
    v32 = v28 + 238;
  }
  v39 = v28 + 249 > v32 || v28 + 261 > v32;
  if (v39) {
    v32 = v28 + 261;
  }
  v41 = v28 + 268 > v32 || v28 + 275 > v32;
  if (v41) {
    v32 = v28 + 275;
  }
  v43 = v28 + 282 > v32 || v28 + 289 > v32;
  if (v43) {
    v44 = v28 + 289;
  }
  else {
    v44 = v32;
  }
  v46 = v28 + 295 > v44 || v28 + 321 > v44;
  if (v46) {
    v47 = v28 + 321;
  }
  else {
    v47 = v44;
  }
  v48 = v28 + 331;
  if (v28 + 331 <= v47) {
    v49 = v47;
  }
  else {
    v49 = v28 + 331;
  }
  if (v48 > v47) {
    v46 = true;
  }
  if (v37 || v39 || v41 || v43 || v46) {
    if (v46) {
      v50 = v49;
    }
    else {
      v50 = v44;
    }
    LODWORD(v70_.v76) = v50;
  }
  v51 = v28 + 331;
  v52 = v28 + 331;
  if ((v4 & 4) == 0) {
    v51 = v28 + 340;
    v53 = v47 >= v28 + 340 && v47 >= v28 + 362;
    HIDWORD(v70_.v76) = 103;
    v55 = !v53 || v47 < v28 + 367;
    if (v55 != 0) {
      v49 = v28 + 367;
    }
    v52 = v28 + 376;
    v56 = v28 + 376 > v49;
    if (v28 + 376 > v49) {
      v49 = v28 + 376;
    }
    if ((v55 & 1) != 0 || v56) {
      LODWORD(v70_.v76) = v49;
    }
  }
  if (v52 + 2 > v49 || v52 + 4 > v49) {
    LODWORD(v70_.v76) = v52 + 4;
    v49 = v52 + 4;
  }
  HIDWORD(v70_.v76) = 107;
  if ((v4 & 4) != 0) {
    if (v6 > (unsigned int)v70_.v76) {
      LODWORD(v70_.v76) = v6;
    }
    v61 = 110;
  }
  else {
    if (v52 + 18 > v49) {
      LODWORD(v70_.v76) = v52 + 18;
    }
    HIDWORD(v70_.v76) = 108;
    if (v8 <= (unsigned int)v70_.v76) {
      v58 = v70_.v76;
    }
    else {
      v58 = v8;
    }
    if (v10 <= v58) {
      v59 = v58;
    }
    else {
      v59 = v10;
    }
    if (v11 <= v59) {
      v60 = v59;
    }
    else {
      v60 = v11;
    }
    if (v8 > (unsigned int)v70_.v76 || v10 > v58 || v11 > v59) {
      LODWORD(v70_.v76) = v60;
    }
    if (v9 > v60) {
      LODWORD(v70_.v76) = v9;
      v60 = v9;
    }
    HIDWORD(v70_.v76) = 109;
    if (v6 > v60) {
      LODWORD(v70_.v76) = v6;
      v60 = v6;
    }
    HIDWORD(v70_.v76) = 110;
    if (v48 > v60) {
      LODWORD(v70_.v76) = v48;
      v60 = v48;
    }
    HIDWORD(v70_.v76) = 111;
    if (v51 > v60) {
      LODWORD(v70_.v76) = v51;
    }
    v61 = 112;
  }
  HIDWORD(v70_.v76) = v61;
  v63 = a2[4];
  v62 = a2[5];
  v64 = a2[6];
  if ((unsigned __int64)a2[1] >= *((_QWORD*)&v70_.v70 + 1)) {
    v65 = *((_QWORD*)&v70_.v70 + 1);
  }
  else {
    v65 = a2[1];
  }
  v66 = a2[3];
  if (a2[2] >= v70_.v71) {
    v67 = v70_.v71;
  }
  else {
    v67 = a2[2];
  }
  if (*a2 >= (unsigned __int64)v70_.v70) {
    v68 = v70_.v70;
  }
  else {
    v68 = *a2;
  }
  if (v68 != 0) {
    memcpy_plt(a2, &v70_.v70, v68);
  }
  a2[3] = v66;
  a2[4] = v63;
  a2[5] = v62;
  a2[6] = v64;
  if (v65 >= 4) {
    memmove_plt(v66, v70_.v72, v65 & 0xFFFFFFFFFFFFFFFCLL);
    memmove_plt(v63, v70_.v73, v65 & 0xFFFFFFFFFFFFFFFCLL);
    memmove_plt(v62, v70_.v74, v65 & 0xFFFFFFFFFFFFFFFCLL);
  }
  if (v67 >= 8) {
    memmove_plt(v64, v70_.v75, v67 & 0xFFFFFFFFFFFFFFF8LL);
  }
  return 1;
}

__int64 nn_6a97c0(unsigned int* a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v5;
  __int64 v6;
  unsigned int* v7;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;

  if (SdkData_10450c0 != 2) {
    v5 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v5, 1u);
    if (v5 != 0) {
      while (SdkData_10450c0 == 1) {
        NvOsSleepMS_plt(100);
      }
    }
    else {
      v6 = NvRmGpuLibOpen_plt(0);
      if (v6 != 0) {
        SdkData_10450c8 = v6;
      }
      SdkData_10450c4 = v6 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v7 = a1 + 2;
  memset_plt((void*)(a1 + 2), nullptr, a1[1], a4);
  if ((unsigned int)NvRmGpuDeviceOpen_plt(SdkData_10450c8, *a1, 0, &v16) != 0) {
    return 1;
  }
  v9 = NvRmGpuDeviceGetInfo_plt(v16);
  if (v9 != 0) {
    v11 = *(_QWORD*)(v9 + 232);
    v12 = strlen_plt(v11);
    v13 = a1[1];
    if (v12 + 1 < v13) {
      v14 = v12 + 1;
    }
    else {
      v14 = a1[1];
    }
    memcpy_plt(a1 + 2, v11, v14);
    v15 = 0;
    *((_BYTE*)v7 + (unsigned int)(v13 - 1)) = 0;
  }
  else {
    v15 = 1;
  }
  NvRmGpuDeviceClose_plt(v16);
  return v15;
}

__int64 nn_6ac200(_QWORD* a1)
{
  int v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 i;
  int v7;
  int v8;
  _DWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  char v13;
  int32x4_t v14;
  int32x4_t v15;
  __int64 v16;
  unsigned __int32* v17;
  unsigned __int64 v18;
  int32x4_t v19;
  int32x4_t v20;
  unsigned __int32* v21;
  unsigned __int32* v22;
  unsigned __int32* v23;
  unsigned __int32* v24;
  int* v25;
  unsigned __int64 v26;
  int v27;
  __int64 v29;
  __int64 v30;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        NvOsSleepMS_plt(100);
      }
    }
    else {
      v3 = NvRmGpuLibOpen_plt(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v4 = (_QWORD*)a1[1];
  if (v4[1] == 0) {
    v29 = v4[3];
    v30 = 0;
    if (v29 != 0) {
      if ((unsigned int)NvRmGpuRegOpsSessionCreateForChannel_plt(v29, &v30) !=
          0) {
        return 7;
      }
    }
    else if ((unsigned int)NvRmGpuRegOpsSessionCreateChannelless_plt(
                 *v4, &v30) != 0) {
      return 7;
    }
    v4[1] = v30;
  }
  v5 = NvRmGpuDeviceGetInfo_plt(*v4);
  if (v5 == 0) {
    return 1;
  }
  if (a1[2] != 0) {
    for (i = 0; i < a1[2]; ++i) {
      v9 = (_DWORD*)(a1[3] + 32 * i);
      if (*v9 == 5) {
        if (*(_DWORD*)(v5 + 224) == 1) {
          v10 = *(_QWORD*)(v5 + 672);
          if (v10 != 0) {
            v11 = *(_QWORD*)(v5 + 664);
            if (v10 >= 9) {
              v14 = (__typeof__(v14)){0};
              v15 = (__typeof__(v15)){0};
              v16 = *(_QWORD*)(v5 + 672) & 7LL;
              v17 = (unsigned __int32*)(v11 + 128);
              if ((v10 & 7) == 0) {
                v16 = 8;
              }
              v12 = v10 - v16;
              v18 = v12;
              do {
                LANES128(v19).n128_u32[0] = *(v17 - 32);
                LANES128(v20).n128_u32[0] = *v17;
                v21 = v17 - 16;
                v22 = v17 + 16;
                LANES128(v19).n128_u32[1] = *(v17 - 24);
                LANES128(v20).n128_u32[1] = v17[8];
                v23 = v17 - 8;
                v24 = v17 + 24;
                v18 -= 8LL;
                v17 += 64;
                LANES128(v19).n128_u32[2] = *v21;
                LANES128(v20).n128_u32[2] = *v22;
                LANES128(v19).n128_u32[3] = *v23;
                LANES128(v20).n128_u32[3] = *v24;
                v14 = vsubq_s32(v14, vceqzq_s32(v19));
                v15 = vsubq_s32(v15, vceqzq_s32(v20));
              } while (v18 != 0);
              v13 = vaddvq_s32(vaddq_s32(v15, v14));
            }
            else {
              v12 = 0;
              v13 = 0;
            }
            v25 = (int*)(v11 + 32 * v12);
            v26 = v10 - v12;
            do {
              v27 = *v25;
              v25 += 8;
              if (v27 == 0) {
                ++v13;
              }
              --v26;
            } while (v26 != 0);
          }
          else {
            v13 = 0;
          }
          v7 = ~(-1 << v13);
        }
        else {
          v7 = 1;
        }
      }
      else {
        if (*v9 != 1) {
          v8 = 2;
          goto LABEL_15;
        }
        v7 = *(_DWORD*)(v5 + 860);
      }
      v8 = 0;
      v9[2] = v7;
    LABEL_15:
      v9[1] = v8;
    }
  }
  return 0;
}

__int64 nn_6ade20(__int64 a1) { return SdkData_1042158(a1); }

__int64 nn_6ade30(__int64 a1, int a2)
{
  __int64 v3;
  __int64 result;

  if (a1 == 0) {
    return 0;
  }
  v3 = a2;
  result = (*(__int64 (**)(__int64, __int64))(
      (char*)((__int64*)0x4LL) + (_QWORD)SdkData_e89bd8 + 4))(1, a2 + a1 + 7);
  if (result != 0) {
    *(_QWORD*)(((v3 + result + 7) & -a2) - 8) = result;
    return (v3 + result + 7) & -a2;
  }
  return result;
}

bool nn_6ade60(__int64 a1, unsigned int a2, unsigned int a3,
               unsigned __int8* a4, unsigned int* a5)
{
  int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  __int64 v13;
  unsigned int* v14;
  int v15;
  unsigned int v16;
  unsigned __int16* v17;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned __int16* v22;
  unsigned __int64 v23;
  uint64x2_t v24;
  int8x16_t v25;
  int8x16_t v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned int v29;
  int v30;
  unsigned int v31;
  int v32;
  int v33;
  unsigned int v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned int v37;
  int v38;
  unsigned int v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  int64x2_t v52;
  uint64x2_t v53;
  int8x16_t v54;
  uint64x2_t v55;
  int8x16_t v56;
  uint64x2_t v57;
  uint64x2_t v58;
  uint64x2_t v59;
  int8x16_t v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;

  if (*a4 == 255) {
    v6 = 0;
  }
  else {
    v6 = 0;
    do {
      ++v6;
    } while (a4[v6] != 255);
  }
  v7 = a4[v6 - 1];
  if (a4[v6 - 1] == 0) {
    v8 = 2 * a3;
    if ((a2 & 1) != 0) {
      v10 = v8 / (a2 + 1);
      v11 = (v8 - 32) / a2;
      if (v10 <= v11) {
        v9 = v11;
      }
      else {
        v9 = v10;
      }
    }
    else {
      v9 = v8 / a2;
    }
    if (v9 + 1 <= 0xF) {
      v12 = a3;
      v13 = a1;
      v14 = a5;
      v15 = (v9 + 1) << (4 * v6 - 4);
      goto LABEL_23;
    }
    v16 = v9 - 15;
    v12 = a3;
    v13 = a1;
    v14 = a5;
    if (v6 == 4) {
      if (v16 <= 0x6F) {
        v17 = (unsigned __int16*)&SdkData_c92c26;
        goto LABEL_22;
      }
    }
    else {
      if (v6 != 3) {
        v15 = 0;
        goto LABEL_23;
      }
      if (v16 <= 0x2F) {
        v17 = (unsigned __int16*)&SdkData_c92bc6;
      LABEL_22:
        v15 = v17[v16];
      LABEL_23:
        v19 = SdkRoutine_6ae420(a2, (__int64)a4, v15);
        if (v19 <= v12) {
          goto LABEL_36;
        }
        if (v9 <= 0xF) {
          v20 = a2;
          v15 = v9 << (4 * v6 - 4);
        LABEL_35:
          v19 = SdkRoutine_6ae420(v20, (__int64)a4, v15);
        LABEL_36:
          if ((~v15 & 0xFFF0) != 0) {
            if (v6 != 0) {
              v27 = *(_QWORD*)(v13 + 40);
              v28 = 0;
              v29 = 0;
              do {
                v30 = (unsigned __int16)v15 >> (4 * v28);
                v31 = v30 & 0xF;
                if ((v30 & 0xF) != 0) {
                  v32 = v30 & 7;
                  if (v32 != 0) {
                    v33 = 4 * v29;
                    v34 = v29;
                    do {
                      ++v34;
                      --v32;
                      v35 = v27 & ~(15LL << v33);
                      v36 = (unsigned __int64)a4[v28] << v33;
                      v33 += 4;
                      v27 = v35 | v36;
                      *(_QWORD*)(v13 + 40) = v27;
                    } while (v32 != 0);
                  }
                  else {
                    v34 = v29;
                  }
                  v37 = v29 + v31;
                  if (v31 >= 8) {
                    v38 = 4 * v34 + 28;
                    v39 = v29 + v31 - v34;
                    do {
                      v39 -= 8;
                      v40 = v27 & ~(15LL << ((unsigned __int8)v38 - 28)) |
                            ((unsigned __int64)a4[v28]
                             << ((unsigned __int8)v38 - 28));
                      *(_QWORD*)(v13 + 40) = v40;
                      v41 = v40 & ~(15LL << ((unsigned __int8)v38 - 24)) |
                            ((unsigned __int64)a4[v28]
                             << ((unsigned __int8)v38 - 24));
                      *(_QWORD*)(v13 + 40) = v41;
                      v42 = v41 & ~(15LL << ((unsigned __int8)v38 - 20)) |
                            ((unsigned __int64)a4[v28]
                             << ((unsigned __int8)v38 - 20));
                      *(_QWORD*)(v13 + 40) = v42;
                      v43 = v42 & ~(15LL << ((unsigned __int8)v38 - 16)) |
                            ((unsigned __int64)a4[v28]
                             << ((unsigned __int8)v38 - 16));
                      *(_QWORD*)(v13 + 40) = v43;
                      v44 = v43 & ~(15LL << ((unsigned __int8)v38 - 12)) |
                            ((unsigned __int64)a4[v28]
                             << ((unsigned __int8)v38 - 12));
                      *(_QWORD*)(v13 + 40) = v44;
                      v45 = v44 & ~(15LL << ((unsigned __int8)v38 - 8)) |
                            ((unsigned __int64)a4[v28]
                             << ((unsigned __int8)v38 - 8));
                      *(_QWORD*)(v13 + 40) = v45;
                      v46 = v45 & ~(15LL << ((unsigned __int8)v38 - 4)) |
                            ((unsigned __int64)a4[v28]
                             << ((unsigned __int8)v38 - 4));
                      *(_QWORD*)(v13 + 40) = v46;
                      v47 = v46 & ~(15LL << v38);
                      v48 = (unsigned __int64)a4[v28] << v38;
                      v38 += 32;
                      v27 = v47 | v48;
                      *(_QWORD*)(v13 + 40) = v27;
                    } while (v39 != 0);
                  }
                  v29 = v37;
                }
                ++v28;
              } while (v28 != v6);
              if (v29 > 0xF) {
                goto LABEL_65;
              }
            }
            else {
              v29 = 0;
            }
            v49 = *(_QWORD*)(v13 + 40);
            v50 = v29;
            if (v29 > 6) {
              goto LABEL_61;
            }
            v51 = (16LL - v29) & 0x1C;
            v52 = vshlq_n_s64(vdupq_n_s64(v29), 2u);
            v53 = vaddq_s64(v52, COERCE_AS(int64x2_t, SdkData_bb1690));
            v54 = vshlq_u64(vdupq_n_s64(0xFu), v53);
            v55 = vshlq_u64(vdupq_n_s64(0xF00u), v53);
            v56 = vorrq_s8(COERCE_AS(int8x16_t, *(unsigned __int64*)(v13 + 40)),
                           v54);
            if (v51 != 4) {
              v57 = vaddq_s64(v52, COERCE_AS(int64x2_t, SdkData_bb4ca0));
              v56 = vorrq_s8(v56, vshlq_u64(vdupq_n_s64(0xFu), v57));
              v55 = vorrq_s8(v55, vshlq_u64(vdupq_n_s64(0xF00u), v57));
              if (v51 != 8) {
                v58 = vaddq_s64(v52, COERCE_AS(int64x2_t, SdkData_bb16a0));
                v56 = vorrq_s8(v56, vshlq_u64(vdupq_n_s64(0xFu), v58));
                v55 = vorrq_s8(v55, vshlq_u64(vdupq_n_s64(0xF00u), v58));
                if (v51 != 12) {
                  v59 = vaddq_s64(v52, COERCE_AS(int64x2_t, SdkData_bb2e00));
                  v56 = vorrq_s8(v56, vshlq_u64(vdupq_n_s64(0xFu), v59));
                  v55 = vorrq_s8(v55, vshlq_u64(vdupq_n_s64(0xF00u), v59));
                }
              }
            }
            v60 = vorrq_s8(v55, v56);
            v50 = v51 + v29;
            v49 = LANES64_OF(
                      vorr_s8(
                          COERCE_AS(int8x8_t, LANES128(v60).n128_u64[0]),
                          COERCE_AS(
                              int8x8_t,
                              LANES128_OF(vextq_s8(v60, v60, 8u)).n128_u64[0])))
                      .n64_u64[0];
            if (16LL - v29 != v51) {
            LABEL_61:
              v61 = 4 * v50;
              v62 = v50 + 1;
              do {
                v63 = 15LL << v61;
                v61 += 4;
                v49 |= v63;
              } while ((_DWORD)v62++ != 16);
            }
            *(_QWORD*)(v13 + 40) = v49;
          }
          else {
            v23 = a4[v15 & 0xF];
            v24 = vdupq_n_s64(v23);
            v25 = vorrq_s8(
                vandq_s8(vshlq_u64(v24, COERCE_AS(uint64x2_t, SdkData_bb2e10)),
                         COERCE_AS(int8x16_t, SdkData_bb2a10)),
                vandq_s8(vshlq_u64(v24, COERCE_AS(uint64x2_t, SdkData_bb4ca0)),
                         COERCE_AS(int8x16_t, SdkData_bb2e20)));
            v26 = vorrq_s8(
                vandq_s8(vshlq_u64(v24, COERCE_AS(uint64x2_t, SdkData_bb16a0)),
                         COERCE_AS(int8x16_t, SdkData_bb0ee0)),
                vandq_s8(vshlq_u64(v24, COERCE_AS(uint64x2_t, SdkData_bb5300)),
                         COERCE_AS(int8x16_t, SdkData_bb1a90)));
            *(_QWORD*)(v13 + 40) =
                LANES64_OF(
                    vorr_s8(
                        COERCE_AS(int8x8_t, LANES128(v26).n128_u64[0]),
                        COERCE_AS(
                            int8x8_t,
                            LANES128_OF(vextq_s8(v26, v26, 8u)).n128_u64[0])))
                    .n64_u64[0] |
                ((v23 & 0xF) << 48) | ((v23 & 0xF) << 52) |
                LANES64_OF(
                    vorr_s8(
                        COERCE_AS(int8x8_t, LANES128(v25).n128_u64[0]),
                        COERCE_AS(
                            int8x8_t,
                            LANES128_OF(vextq_s8(v25, v25, 8u)).n128_u64[0])))
                    .n64_u64[0] |
                v23 & 0xF |
                (((_DWORD)v23 << 24) | (16 * (_DWORD)v23)) & 0xF0000F0 |
                (unsigned __int64)(unsigned int)((_DWORD)v23 << 28) |
                ((v23 & 0xF) << 56) | (v23 << 60);
          }
        LABEL_65:
          *v14 = v19;
          return v7 == 0;
        }
        v21 = v9 - 16;
        if (v6 == 4) {
          v20 = a2;
          if (v21 <= 0x6F) {
            v22 = (unsigned __int16*)&SdkData_c92c26;
            goto LABEL_34;
          }
        }
        else {
          v20 = a2;
          if (v6 != 3) {
            v15 = 0;
            goto LABEL_35;
          }
          if (v21 <= 0x2F) {
            v22 = (unsigned __int16*)&SdkData_c92bc6;
          LABEL_34:
            v15 = v22[v21];
            goto LABEL_35;
          }
        }
        v15 = 65520;
        goto LABEL_35;
      }
    }
    v15 = 65520;
    goto LABEL_23;
  }
  return v7 == 0;
}

__int64 nn_6ae5c0(__int64 a1, unsigned int a2, unsigned int a3,
                  unsigned __int8* a4)
{
  signed int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  int32x4_t v12;
  int32x4_t v13;
  uint32x4_t v14;
  int32x4_t v15;
  char v16;
  char v17;
  int v18;
  char v19;
  int8x16_t v20;
  int8x16_t v21;
  unsigned __int64 v22;
  uint64x2_t v23;
  uint64x2_t v24;
  uint64x2_t v25;
  __int64 v26;
  char v27;
  unsigned __int64 v28;
  int8x16_t v29;
  char v30;
  char v31;
  unsigned __int64 v32;
  __int64 v33;
  int8x16_t v34;
  unsigned __int64 v35;
  int8x16_t v36;
  int8x16_t v38;
  int v39;
  unsigned __int64 v40;

  v4 = *a4;
  v5 = 0;
  v6 = 0;
  v7 = 1;
  v8 = 15;
  do {
    v9 = v8;
    v8 = v4;
    if (v4 <= 8) {
      if (v4 > 6) {
        v5 = (a2 + 1) >> 1;
        if (v4 == 7) {
          goto LABEL_17;
        }
        goto LABEL_16;
      }
      v5 = 2 * a2;
      if ((unsigned int)(v4 - 5) >= 2) {
        v5 = a2;
        if (v4 == 0) {
          v5 = (a2 + 1) >> 1;
        }
      }
    }
    else {
      if (v4 <= 11) {
        v5 = 2 * a2;
        if ((unsigned int)(v4 - 9) < 2) {
          goto LABEL_17;
        }
      LABEL_16:
        v5 = 4 * a2;
        goto LABEL_17;
      }
      v10 = v5;
      v5 = 8 * a2;
      if (v4 != 12) {
        if (v4 == 15) {
          v5 = 0;
        }
        else {
          v5 = a2;
          if (v4 == 255) {
            v38 = vandq_s8(vshlq_u32(vdupq_n_s32(v9),
                                     COERCE_AS(uint32x4_t, SdkData_bb4500)),
                           COERCE_AS(int8x16_t, SdkData_bb1e80));
            LANES128(v38).n128_u64[0] =
                LANES64_OF(
                    vorr_s8(
                        COERCE_AS(int8x8_t, LANES128(v38).n128_u64[0]),
                        COERCE_AS(
                            int8x8_t,
                            LANES128_OF(vextq_s8(v38, v38, 8u)).n128_u64[0])))
                    .n64_u64[0];
            v39 = 16;
            v40 = (v9 << 28) | LANES128(v38).n128_u32[0] | (16 * (v9 & 0xF)) |
                  LANES128(v38).n128_u32[1] | v9 & 0xF | ((v9 & 0xF) << 24) |
                  ((unsigned __int64)(v9 & 0xF) << 32) & 0xFFFFFFFFFLL |
                  ((unsigned __int64)(v9 & 0xF) << 36) & 0xFFFFFFFFFFLL |
                  ((unsigned __int64)(v9 & 0xF) << 40) & 0xFFFFFFFFFFFLL |
                  ((unsigned __int64)(v9 & 0xF) << 44) & 0xFFFFFFFFFFFFLL |
                  ((unsigned __int64)(v9 & 0xF) << 48) |
                  ((unsigned __int64)(v9 & 0xF) << 52) |
                  ((unsigned __int64)v9 << 56);
            v5 = v10;
            goto LABEL_65;
          }
        }
      }
    }
  LABEL_17:
    v4 = a4[v7];
    if ((unsigned int)v4 <= 8) {
      if (a4[v7] > 6u) {
        v6 = (a2 + 1) >> 1;
        if (v4 != 7) {
          v6 = a2;
          if (v4 == 8) {
          LABEL_2:
            v6 = 4 * a2;
          }
        }
      }
      else {
        v6 = 2 * a2;
        if ((unsigned int)(v4 - 5) >= 2) {
          v6 = a2;
          if (a4[v7] == 0) {
            v6 = (a2 + 1) >> 1;
          }
        }
      }
    }
    else if (a4[v7] > 0xBu) {
      v6 = 8 * a2;
      if (v4 != 12) {
        if (v4 == 15) {
          v6 = 0;
        }
        else {
          v6 = a2;
          if (v4 == 255) {
            v6 = 0;
            v4 = 15;
            v11 = (a3 + v5 - 1) / v5;
            goto LABEL_37;
          }
        }
      }
    }
    else {
      v6 = 2 * a2;
      if ((unsigned int)(v4 - 9) >= 2) {
        v6 = a2;
        if (v4 == 11) {
          goto LABEL_2;
        }
      }
    }
    ++v7;
  } while (a3 < 16 * v6);
  v11 = (a3 - 16 * v6) / (v5 - v6);
LABEL_37:
  v12 = vdupq_n_s32(v11);
  v13 = vdupq_n_s32(v8);
  if (v11 >= 0x10) {
    v39 = 16;
  }
  else {
    v39 = v11;
  }
  v14 = vcgtq_u32(v12, COERCE_AS(uint32x4_t, SdkData_bb4360));
  v15 = vdupq_n_s32(v4);
  if (v11 != 0) {
    v16 = v8;
  }
  else {
    v16 = v4;
  }
  if (v11 <= 1) {
    v17 = v4;
  }
  else {
    v17 = v8;
  }
  v18 = v16 & 0xF;
  if (v11 <= 6) {
    v19 = v4;
  }
  else {
    v19 = v8;
  }
  v20 = vandq_s8(
      vshlq_u32(vbslq_s8(v14, v13, v15), COERCE_AS(uint32x4_t, SdkData_bb4500)),
      COERCE_AS(int8x16_t, SdkData_bb1e80));
  v21 =
      vbslq_s8(vcgtq_u32(v12, COERCE_AS(uint32x4_t, SdkData_bb1170)), v13, v15);
  v22 = LANES64_OF(
            vorr_s8(COERCE_AS(int8x8_t, LANES128(v20).n128_u64[0]),
                    COERCE_AS(int8x8_t,
                              LANES128_OF(vextq_s8(v20, v20, 8u)).n128_u64[0])))
            .n64_u64[0];
  LANES128(v23).n128_u64[0] = LANES128(v21).n128_u32[2];
  LANES128(v23).n128_u64[1] = LANES128(v21).n128_u32[3];
  v24 = v23;
  LANES128(v23).n128_u64[0] = LANES128(v21).n128_u32[0];
  LANES128(v23).n128_u64[1] = LANES128(v21).n128_u32[1];
  v25 = vshlq_u64(v23, COERCE_AS(uint64x2_t, SdkData_bb3790));
  v26 = (unsigned int)v22 | (16 * (v17 & 0xF)) | HIDWORD(v22) |
        v18 & 0xF0FFFFFF | ((v19 & 0xF) << 24);
  if (v11 <= 0xB) {
    v27 = v4;
  }
  else {
    v27 = v8;
  }
  v28 = (unsigned __int64)(v27 & 0xF) << 44;
  v29 = vandq_s8(vshlq_u64(v24, COERCE_AS(uint64x2_t, SdkData_bb16b0)),
                 COERCE_AS(int8x16_t, SdkData_bb1840));
  if (v11 <= 0xC) {
    v30 = v4;
  }
  else {
    v30 = v8;
  }
  if (v11 <= 0xD) {
    v31 = v4;
  }
  else {
    v31 = v8;
  }
  v32 = (unsigned __int64)(v31 & 0xF) << 52;
  if (v11 <= 0xE) {
    v33 = (unsigned int)v4;
  }
  else {
    v33 = v8;
  }
  v34 = vandq_s8(v25, COERCE_AS(int8x16_t, SdkData_bb2840));
  v35 = v32 & 0xFFF0FFFFFFFFFFFFLL | ((unsigned __int64)(v30 & 0xF) << 48) |
        v26 | (v33 << 56);
  if (v11 <= 0xF) {
    LOBYTE(v9) = v4;
  }
  else {
    LOBYTE(v9) = v8;
  }
  v36 = vorrq_s8(v34, v29);
  v40 = LANES64_OF(
            vorr_s8(COERCE_AS(int8x8_t, LANES128(v36).n128_u64[0]),
                    COERCE_AS(int8x8_t,
                              LANES128_OF(vextq_s8(v36, v36, 8u)).n128_u64[0])))
            .n64_u64[0] |
        v28 | v35;
LABEL_65:
  *(_QWORD*)(a1 + 40) =
      v40 & 0xFFFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned __int8)v9 << 60);
  return v5 * v39 + v6 * (16 - v39);
}

__int64 nn_6ae940(__int64 a1, unsigned int* a2, _DWORD* a3, unsigned int a4,
                  int a5, int a6, int a7, char a8, char a9)
{
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  __int64 result;
  unsigned __int64 v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  unsigned int v31;
  __int64 v32;
  unsigned int v33;
  unsigned __int8* v34;
  unsigned __int8* v35;
  unsigned __int8* v36;
  unsigned __int8* v37;
  unsigned int v38;
  bool v39;
  int v40;
  int v41;

  *(_DWORD*)(a1 + 12) = a4;
  v14 = (a5 + a2[8] - 1) / a2[8] * a2[8];
  *(_DWORD*)(a1 + 16) = v14;
  v15 = a2[9];
  *(_DWORD*)(a1 + 28) = 0;
  *(_DWORD*)(a1 + 4) = 0;
  v16 = (a6 + v15 - 1) / v15 * v15;
  *(_DWORD*)(a1 + 20) = v16;
  *(_DWORD*)(a1 + 24) = a7;
  v17 = SdkRoutine_6aecc0(v14, v16, 0, 2, a2[8], a2[9], a2[2], nullptr);
  v18 = *(_DWORD*)(a1 + 24);
  v19 = (unsigned int)(v17 + 15) >> 4;
  *(_DWORD*)(a1 + 48) = v19;
  v20 = v19 * v18;
  v21 = a3[4];
  if (v21 >= a2[3]) {
    v22 = a2[3];
  }
  else {
    v22 = a3[4];
  }
  if (v21 == -1) {
    v23 = a2[3];
  }
  else {
    v23 = v22;
  }
  if (*a3 == 2) {
    v24 = (unsigned int)a3[1];
    v25 = 0;
    result = 0;
    *(_QWORD*)(a1 + 40) = v24;
    v27 = v24 | ((unsigned __int64)(unsigned int)a3[2] << 32);
    *(_QWORD*)(a1 + 40) = v27;
    while (1) {
      if ((unsigned int)result >= v23) {
        v27 |= 15LL << v25;
        *(_QWORD*)(a1 + 40) = v27;
        goto LABEL_29;
      }
      v28 = (v27 >> v25) & 0xF;
      if (((v27 >> v25) & 0xF) > 8) {
        if (((v27 >> v25) & 0xF) > 0xB) {
          v29 = 8 * v20;
          if ((_DWORD)v28 != 12) {
            v29 = v20;
            if ((_DWORD)v28 == 15) {
              v29 = 0;
            }
          }
        }
        else {
          v29 = 2 * v20;
          if ((unsigned int)(v28 - 9) >= 2) {
            v29 = v20;
            if ((_DWORD)v28 == 11) {
            LABEL_24:
              result = 4 * v20 + (unsigned int)result;
              goto LABEL_29;
            }
          }
        }
      }
      else if (((v27 >> v25) & 0xF) > 6) {
        v29 = (v20 + 1) >> 1;
        if ((_DWORD)v28 != 7) {
          v29 = v20;
          if ((_DWORD)v28 == 8) {
            goto LABEL_24;
          }
        }
      }
      else {
        v29 = 2 * v20;
        if ((unsigned int)(v28 - 5) >= 2) {
          v29 = v20;
          if ((_DWORD)v28 == 0) {
            result = ((v20 + 1) >> 1) + (unsigned int)result;
            goto LABEL_29;
          }
        }
      }
      result = v29 + (unsigned int)result;
    LABEL_29:
      if ((unsigned int)result < v23) {
        v30 = (v27 >> ((unsigned __int8)v25 + 4)) & 0xF;
        if (((v27 >> ((unsigned __int8)v25 + 4)) & 0xF) > 8) {
          if (((v27 >> ((unsigned __int8)v25 + 4)) & 0xF) > 0xB) {
            v31 = 8 * v20;
            if ((_DWORD)v30 != 12) {
              if ((_DWORD)v30 == 15) {
                v31 = 0;
              }
              else {
                v31 = v20;
              }
            }
            goto LABEL_47;
          }
          v31 = 2 * v20;
          if ((unsigned int)(v30 - 9) < 2) {
            goto LABEL_47;
          }
          v31 = v20;
          if ((_DWORD)v30 != 11) {
            goto LABEL_47;
          }
        }
        else {
          if (((v27 >> ((unsigned __int8)v25 + 4)) & 0xF) <= 6) {
            v31 = 2 * v20;
            if ((unsigned int)(v30 - 5) < 2) {
              goto LABEL_47;
            }
            v31 = v20;
            if ((_DWORD)v30 != 0) {
              goto LABEL_47;
            }
          LABEL_46:
            v31 = (v20 + 1) >> 1;
            goto LABEL_47;
          }
          if ((_DWORD)v30 == 7) {
            goto LABEL_46;
          }
          v31 = v20;
          if ((_DWORD)v30 != 8) {
          LABEL_47:
            result = v31 + (unsigned int)result;
            goto LABEL_10;
          }
        }
        v31 = 4 * v20;
        goto LABEL_47;
      }
      v27 |= 240LL << v25;
      *(_QWORD*)(a1 + 40) = v27;
    LABEL_10:
      v25 += 8;
      if (v25 == 64) {
        goto LABEL_67;
      }
    }
  }
  if (a4 <= 0xB && ((0xE01u >> a4) & 1) != 0) {
    v32 = a1;
    v33 = v23;
    if ((a9 & 1) != 0) {
      v34 = (unsigned __int8*)&SdkData_c92bb4;
    }
    else {
      v34 = (unsigned __int8*)&SdkData_c92bb8;
    }
  }
  else {
    if ((a9 & 1) != 0) {
      v35 = (unsigned __int8*)&SdkData_c92bc1;
    }
    else {
      v35 = (unsigned __int8*)&SdkData_c92bbc;
    }
    if ((a9 & 1) != 0) {
      v36 = (unsigned __int8*)&SdkData_c92bc2;
    }
    else {
      v36 = (unsigned __int8*)&SdkData_c92bbd;
    }
    if ((a8 & 1) != 0) {
      v37 = v35;
    }
    else {
      v37 = v36;
    }
    if (a3[5] != -768434544) {
      v38 = v20;
      v39 = nn_6ade60(a1, v20, v23, v37, (unsigned int*)(a1 + 8));
      v20 = v38;
      if (v39) {
        result = *(unsigned int*)(a1 + 8);
        goto LABEL_67;
      }
    }
    v32 = a1;
    v33 = v23;
    v34 = v37;
  }
  result = nn_6ae5c0(v32, v20, v33, v34);
LABEL_67:
  *(_DWORD*)(a1 + 28) = (unsigned int)result / *(_DWORD*)(a1 + 24);
  if ((unsigned int)result >= v23) {
    v40 = v23;
  }
  else {
    v40 = result;
  }
  *(_DWORD*)(a1 + 8) = v40;
  v41 = a3[3];
  *(_BYTE*)(a1 + 32) = 0;
  if (v41 == -1) {
    v41 = 0;
  }
  *(_DWORD*)(a1 + 52) = v41;
  return result;
}

_QWORD* nn_7d3330(_QWORD* a1, _QWORD* a2)
{
  if (*a1 != *a2) {
    __cxa_increment_exception_refcount_plt();
    __cxa_decrement_exception_refcount_plt(*a1);
    *a1 = *a2;
  }
  return a1;
}

#pragma GCC visibility pop
