#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_DWORD* CudaDriverRoutine_1f75b0(_DWORD*, unsigned __int64, __int64);
_DWORD* CudaDriverRoutine_1f7630(_DWORD*, unsigned __int64, int);
_QWORD* CudaDriverRoutine_1e8870(__int64);
__int64 CudaDriverRoutine_107f40(_QWORD*, __int64, char);
__int64 CudaDriverRoutine_107f60(_QWORD*);
__int64 CudaDriverRoutine_10a2a0(__int64, __int64, unsigned int*, unsigned int,
                                 __int64, _DWORD*, char*, _DWORD*, _DWORD*,
                                 _DWORD*);
__int64 CudaDriverRoutine_110820(__int64, __int64, __int64, __int64, __int64,
                                 __int64, __int64);
__int64 CudaDriverRoutine_12c8b0(__int64, _QWORD*, _QWORD*, __int64);
__int64 CudaDriverRoutine_12cb10(__int64, __int64*, _QWORD*);
__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_12e510(__int64, __int64);
__int64 CudaDriverRoutine_12ec80(__int64, void (**)(__int64), __int64*);
__int64 CudaDriverRoutine_197480(__int64 result, __int64, unsigned int,
                                 unsigned int*, __int64, unsigned int, _QWORD*,
                                 unsigned int*);
__int64 CudaDriverRoutine_19b630(__int64, unsigned int, unsigned int,
                                 unsigned int, unsigned int, unsigned int,
                                 __int64, __int64);
__int64 CudaDriverRoutine_1a1670(__int64, int);
__int64 CudaDriverRoutine_1a3f00(__int64*, __int64, __int64, __int64, char);
__int64 CudaDriverRoutine_1a40e0(__int64 result);
__int64 CudaDriverRoutine_1a4420(__int64, __int64, unsigned __int64,
                                 unsigned __int64);
__int64 CudaDriverRoutine_1a4510(__int64, __int64, __int64);
__int64 CudaDriverRoutine_1a4580(__int64);
__int64 CudaDriverRoutine_1a47a0(__int64, unsigned __int64);
__int64 CudaDriverRoutine_1a4bc0(__int64, unsigned __int64*);
__int64 CudaDriverRoutine_1bf730(__int64);
__int64 CudaDriverRoutine_1db1b0(__int64);
__int64 CudaDriverRoutine_1dc000(__int64);
__int64 CudaDriverRoutine_1dd1a0(__int64);
__int64 CudaDriverRoutine_1e27d0(__int64*);
__int64 CudaDriverRoutine_1e29b0(__int64, int, __int64);
__int64 CudaDriverRoutine_1e2ce0(__int64);
__int64 CudaDriverRoutine_1e8440(__int64, __int64);
__int64 CudaDriverRoutine_1e91e0();
__int64 CudaDriverRoutine_1e9390(__int64 result);
__int64 CudaDriverRoutine_1ebdf0(__int64 result);
__int64 CudaDriverRoutine_1ec000(__int64);
__int64 CudaDriverRoutine_1ec4e0(__int64);
__int64 CudaDriverRoutine_1ec5e0(__int64, __int64*);
__int64 CudaDriverRoutine_1ec800(__int64, __int64*, __int64, __int64);
__int64 CudaDriverRoutine_1eeec0(__int64);
__int64 CudaDriverRoutine_1f1440(__int64);
__int64 CudaDriverRoutine_1f18f0(_DWORD*);
__int64 CudaDriverRoutine_1f5570(__int64 result, int);
__int64 CudaDriverRoutine_1fcf20(_QWORD*, unsigned int, int);
__int64 CudaDriverRoutine_1ffe30(__int64);
__int64 CudaDriverRoutine_2045e0(_QWORD*);
__int64 CudaDriverRoutine_2077b0(__int64 result);
__int64 CudaDriverRoutine_5bba0(__int64, unsigned int);
__int64 CudaDriverRoutine_5ef60(_QWORD*, int);
__int64 CudaDriverRoutine_63a00(_DWORD*, unsigned int*);
__int64 CudaDriverRoutine_96f20(__int64, __int64, __int64, unsigned int,
                                __int64, __int64);
__int64 CudaDriverRoutine_98340(__int64 result);
__int64 CudaDriverRoutine_99f40(__int64, _DWORD*, int);
__int64 CudaDriverRoutine_9ab30(__int64, _BYTE*);
__int64 CudaDriverRoutine_b4790(__int64 result);
__int64 CudaDriverRoutine_bbd70(__int64 result, _QWORD*);
__int64 CudaDriverRoutine_bc3f0(__int64);
__int64 CudaDriverRoutine_bc6c0(__int64, int, char);
__int64 CudaDriverRoutine_df060(__int64*);
__int64 CudaDriverRoutine_e7e40(__int64);
__int64 CudaDriverRoutine_ed630(__int64, __int64, __int64, ...);
__int64 CudaDriverRoutine_ee030(__int64, __int64, _QWORD*, __int128*);
__int64 CudaDriverRoutine_ee2a0(__int64, __int64);
__int64 CudaDriverRoutine_ee6c0(__int64, __int64);
__int64 CudaDriverRoutine_ee820(__int64, unsigned __int64);
__int64 CudaDriverStub_107f90(__int64);
__int64 CudaDriverStub_107f90_alt1(_QWORD*) __asm__("CudaDriverStub_107f90");
__int64 CudaDriverStub_108070(__int64);
__int64 CudaDriverStub_108070_alt1(_QWORD*) __asm__("CudaDriverStub_108070");
__int64 CudaDriverStub_112e30(_QWORD);
__int64 CudaDriverStub_1223e0(_QWORD);
__int64 CudaDriverStub_12d100(_QWORD);
__int64 CudaDriverStub_12dc90(_QWORD);
__int64 CudaDriverStub_12e320(_QWORD);
__int64 CudaDriverStub_12e330(_QWORD);
__int64 CudaDriverStub_1a4c70(_QWORD, _QWORD);
__int64 CudaDriverStub_1a4c80(_QWORD);
__int64 CudaDriverStub_1db1a0(_QWORD);
__int64 CudaDriverStub_1db760(_QWORD);
__int64 CudaDriverStub_1dbab0(_QWORD);
__int64 CudaDriverStub_1dbf90(_QWORD);
__int64 CudaDriverStub_1dbfc0(_QWORD);
__int64 CudaDriverStub_4f840(_QWORD);
__int64 CudaDriverStub_5a6f0(__int64);
__int64 CudaDriverStub_8e230(_QWORD);
__int64 CudaDriverStub_f0f50(_QWORD);
__int64 close_plt(_QWORD);
__int64 cuda_driver_122360(char, __int64);
__int64 cuda_driver_194b20(int*, char);
__int64 cuda_driver_1da1b0(__int64, unsigned __int64*, __int64, __int64**);
__int64 cuda_driver_20b420(unsigned int, unsigned int, __int64);
__int64 cuda_driver_772c0(__int64);
__int64 cuda_driver_misc_helpers_4bb0(__int64 result);
__int64 cuda_driver_predicates_10f750(__int64, int, unsigned int, __int64,
                                      _DWORD*, __int64);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 puts_plt(_QWORD);
__int64 snprintf_plt(_QWORD, _QWORD, const char*, ...);
__int64 strncmp_plt(_QWORD, _QWORD, _QWORD);
bool CudaDriverRoutine_122140(_BOOL8 result);
bool CudaDriverRoutine_12cad0(__int64);
bool CudaDriverRoutine_1a0620(_BOOL8 result);
bool CudaDriverRoutine_9aa20(__int64);
bool CudaDriverRoutine_9aa40(__int64);
bool CudaDriverRoutine_9ac20(__int64);
bool CudaDriverRoutine_bbdf0(__int64);
bool CudaDriverRoutine_bbe70(__int64);
bool CudaDriverStub_b9300(__int64);
bool cuda_debugger_api_7cff0();
double cuda_driver_64f80(__int64);
extern _DWORD CudaDriverData_11152a0[4];
extern _DWORD CudaDriverData_1130110[6];
extern _QWORD CudaDriverData_1422bb0;
extern _UNKNOWN* CudaDriverData_1422118;
extern _UNKNOWN* CudaDriverData_14225e0;
extern _UNKNOWN* CudaDriverData_1432188;
extern _UNKNOWN* CudaDriverData_1432190;
extern _UNKNOWN* CudaDriverData_1440968;
extern _UNKNOWN* CudaDriverData_1440970;
extern _UNKNOWN CudaDriverData_14347a8;
extern _UNKNOWN CudaDriverData_1435f25;
extern _UNKNOWN CudaDriverData_f00000;
extern __int128 CudaDriverData_1115360;
extern __int128 CudaDriverData_1115400;
extern __int128 CudaDriverData_1115450;
extern __int128 CudaDriverData_1115460;
extern __int128 CudaDriverData_1115470;
extern __int128 CudaDriverData_1115480;
extern __int128 CudaDriverData_11154b0;
extern __int128 CudaDriverData_1115550;
extern __int128 CudaDriverData_1115570;
extern __int128 CudaDriverData_1115620;
extern __int128 CudaDriverData_11156d0;
extern __int128 CudaDriverData_1115710;
extern __int128 CudaDriverData_1115760;
extern __int128 CudaDriverData_11157d0;
extern __int128 CudaDriverData_11157f0;
extern __int128 CudaDriverData_1115810;
extern __int128 CudaDriverData_11158c0;
extern __int128 CudaDriverData_1115980;
extern __int128 CudaDriverData_1115a00;
extern __int128 CudaDriverData_1115a70;
extern __int128 CudaDriverData_1115b20;
extern __int128 CudaDriverData_1115b50;
extern __int128 CudaDriverData_1115c30;
extern __int128 CudaDriverData_1115c80;
extern __int128 CudaDriverData_1115cc0;
extern __int128 CudaDriverData_1115d30;
extern __int128 CudaDriverData_1115da0;
extern __int128 CudaDriverData_1115dd0;
extern __int128 CudaDriverData_1115f00;
extern __int128 CudaDriverData_1115f30;
extern __int128 CudaDriverData_1115f70;
extern __int128 CudaDriverData_1116010;
extern __int128 CudaDriverData_11160c0;
extern __int128 CudaDriverData_11160d0;
extern __int128 CudaDriverData_11161c0;
extern __int128 CudaDriverData_1116240;
extern __int128 CudaDriverData_1116250;
extern __int128 CudaDriverData_11162c0;
extern __int128 CudaDriverData_11162d0;
extern __int128 CudaDriverData_1116330;
extern __int128 CudaDriverData_1116390;
extern __int64 (*CudaDriverData_14240f0[102])();
extern __int64 (*CudaDriverData_1424798[20])();
extern __int64 (*CudaDriverData_14407d0)(int*);
extern __int64 (*CudaDriverData_14408c0)(_DWORD*);
extern __int64 (*CudaDriverData_1440948)(_BYTE*);
extern __int64 (*CudaDriverData_1440948_alt1)(int*) __asm__(
    "CudaDriverData_1440948");
extern __int64 (*CudaDriverData_14409b8)(_BYTE*);
extern __int64 (*CudaDriverData_1440a68)(int*);
extern __int64 CudaDriverData_1435d30;
extern __int64 CudaDriverData_1435ed8;
extern __int64 CudaDriverData_1440a70;
extern char CudaDriverData_1434ce4;
extern char CudaDriverData_1435f10;
extern char CudaDriverData_1435f18;
extern char CudaDriverData_1435f20;
extern char CudaDriverData_1436502;
extern int CudaDriverData_1434ac0;
extern int CudaDriverData_1435f14;
extern int CudaDriverData_1435f1c;
extern int CudaDriverData_144071c;
float CudaDriverRoutine_1a46a0(__int64);
unsigned __int64* CudaDriverRoutine_ee010(unsigned __int64* result, char);
void CudaDriverRoutine_1e8dc0();
void CudaDriverRoutine_4198();
void CudaDriverRoutine_4350();
void CudaDriverRoutine_43c8();
void CudaDriverRoutine_4464();
void CudaDriverRoutine_46fc();
void CudaDriverRoutine_71c8();
void CudaDriverRoutine_7418();
void CudaDriverRoutine_743c();
void CudaDriverRoutine_7458();
void CudaDriverRoutine_7460();
void CudaDriverStub_10fdf0();
__int64 cuda_driver_1e1e60(__int64 a1);
__int64 cuda_driver_1e2000(__int64 a1, unsigned int a2);
__int64 cuda_driver_1e2550(__int64 a1);
__int64 cuda_driver_1e37a0(__int64 a1);
__int64 cuda_driver_1e3d40(__int64 a1);
__int64 cuda_driver_1e51a0(__int64 a1, unsigned __int8 a2);
__int64 cuda_driver_1e55a0(__int64 a1, __int64 a2, int* a3);
__int64 cuda_driver_1e5680(__int64 a1, __int64 a2, int a3, int a4);
__int64 cuda_driver_1e5b10(_QWORD* a1);
__int64 cuda_driver_1e5f20(__int64 a1, char a2, char a3);
__attribute__((swiftcall)) void cuda_driver_1e6200(PSEUDO_X8 x8_);
__int64 cuda_driver_1e6280(__int64 a1, unsigned int* a2);
__int64 cuda_driver_1e6520(__int64 a1);
__int64 cuda_driver_1e6b00(__int64 a1);
__int64 cuda_driver_1e6b10(__int64 a1);
__int64 cuda_driver_1e6b20(__int64 a1);
__int64 cuda_driver_1e6b30(__int64 a1);
__int64 cuda_driver_1e6b40(__int64 a1);
__int64 cuda_driver_1e6b50(__int64 a1);
__int64 cuda_driver_1e6ee0(__int64 a1, _QWORD* a2);
__int64 cuda_driver_1e73d0(__int64 a1);
__int64 cuda_driver_1e7570(__int64 a1, int a2, __int64 a3);
__int64 cuda_driver_1e7720(__int64 a1, _QWORD* a2, _BYTE* a3, __int64* a4,
                           int a5, int a6);
__int64 cuda_driver_1e7fa0(__int64 a1);
__int64 cuda_driver_1e83e0(__int64 result);
__int64* cuda_driver_1e85e0(__int64* result);
void cuda_driver_1e89d0();
__int64 cuda_driver_1e8ee0(_QWORD* a1);
__int64 cuda_driver_1e9120();
__int64 cuda_driver_1e9ac0(__int64 a1, __int64* a2, __int64 a3, _QWORD* a4);
__int64 cuda_driver_1ea080(__int64 result);
__int64 cuda_driver_1ea9c0(__int64 result);
__int64 cuda_driver_1ead40(_QWORD* a1, __int64 a2);
__int64 cuda_driver_1eafa0(__int64* a1);
__int64 cuda_driver_1eb320(__int64 a1, _DWORD* a2);
__int64 cuda_driver_1eb630(__int64 a1, _DWORD* a2);
__int64 cuda_driver_1eb7c0(__int64 a1, _DWORD* a2, __int64 a3, int a4);
__int64 cuda_driver_1eb930(int a1);
__int64 cuda_driver_1ebbd0(__int64 a1, __int64* a2, __int64* a3, __int64 a4,
                           __int64 a5);
__int64 cuda_driver_1ebe70(__int64* a1, __int64* a2, __int64* a3, __int64 a4,
                           int a5);
__int64 cuda_driver_1ec1a0(__int64 a1, unsigned __int8 a2);
__int64 cuda_driver_1ecd60(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6);
__int64 cuda_driver_1ecec0(__int64 a1, __int64 a2, unsigned __int64 a3,
                           unsigned __int64 a4, __int64 a5);
__int64 cuda_driver_1ed2e0(__int64 a1, int a2, __int64 a3, __int64 a4);
__int64 cuda_driver_1ee220(__int64 a1, __int64 a2, __int64 a3);
long double cuda_driver_1ee3a0(__int64 a1, __int64 a2, unsigned int* a3,
                               __int64 a4);
_DWORD* cuda_driver_1eea40(__int64 a1, _DWORD** a2, __int64 a3);
__int64 cuda_driver_1eef00(__int64 a1, __int64 a2, unsigned int a3, int a4,
                           _DWORD* a5, __int64 a6, int* a7);
__int64 cuda_driver_1ef200(__int64 a1, unsigned int* a2, unsigned __int64* a3,
                           bool* a4);
__int64 cuda_driver_1ef370(__int64 a1, int a2, int a3, unsigned int* a4,
                           unsigned __int64* a5, char* a6);
__int64 cuda_driver_1f0500(__int64 a1);
__int64 cuda_driver_1f12e0(__int64 result, unsigned __int64 a2,
                           unsigned int a3);
__int64 cuda_driver_1f1480(__int64 a1);
__int64 cuda_driver_1f14c0(__int64 a1);
__int64 cuda_driver_1f2120(__int64 a1);
__int64 cuda_driver_1f4000(__int64 a1);
__int64 cuda_driver_1f42f0(__int64 a1, _DWORD* a2, int a3);
__int64 cuda_driver_1f5670(_DWORD** a1, __int64 a2);
__int64 cuda_driver_1f5c00(__int64 a1);
__int64 cuda_driver_1f5fb0(int* a1);
double cuda_driver_1f6060(__int64 a1, __int64 a2, char a3);
__int64 cuda_driver_1f60d0(__int64 a1, __int64 a2, __int64 a3, __int64* a4,
                           __int64 a5);
__int64 cuda_driver_1f6280(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                           char a9);
int8x8_t cuda_driver_1f78e0(__int64 a1, int8x8_t* a2, __int64 a3);
__int64 cuda_driver_1f7b90(__int64* a1, __int64 a2, __int64 a3, char a4);
_DWORD* cuda_driver_1f80d0(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                           unsigned __int64 a5, __int64 a6, unsigned int a7);
_DWORD* cuda_driver_1f99e0(__int64 a1, __int64 a2, __int64* a3, __int64 a4,
                           int a5);
__int64 cuda_driver_1faec0(__int64 a1, __int64 a2, __int64 a3, bool* a4);
__int64 cuda_driver_1fb000(__int64 a1, __int64 a2, int a3);
void cuda_driver_1fb7e0(__int64 a1, _QWORD* a2);
__int64 cuda_driver_1fbf20(__int64 a1, _BYTE* a2);
__int64 cuda_driver_1fc150(__int64 a1, __int64 a2);
__int64 cuda_driver_1fc180(__int64 a1, __int64 a2, int a3);
__int64 cuda_driver_1fcd10(__int64 result);
__int64 cuda_driver_1fcd50(__int64 result);
__int64 cuda_driver_1fcd90();
__int64 cuda_driver_1fce20(_QWORD* a1, unsigned int a2, int a3);
__int64 cuda_driver_1fd6c0(__int64 result, __int64* a2);
__int64 CudaDriverStub_122310(__int64);
__int64 CudaDriverStub_122320(__int64);
__int64 CudaDriverStub_122340(__int64);
__int64 CudaDriverStub_122350(__int64);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
bool CudaDriverRoutine_9aa30(__int64);
extern _DWORD CudaDriverData_135e0a0[5];
__int64 cuda_driver_unplaced_10_1e29b0(__int64 a1, int a2, __int64 a3);
__int64 cuda_driver_unplaced_10_1e3920(__int64 a1, _DWORD* a2, _DWORD* a3);

__int64 cuda_driver_1e1e60(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 i;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  int v14;
  __int64 v15;
  int v16;

  v1 = *(_QWORD*)(**(_QWORD**)a1 + 8LL);
  if ((*(_BYTE*)(v1 + 1952) & 4) != 0) {
    goto LABEL_27;
  }
  v2 = *(_QWORD*)(*(_QWORD*)(v1 + 64) + 19824LL);
  v3 = *(_QWORD*)(v2 + 96);
  if (((*(_BYTE*)(v3 + 267) & 1) != 0 || *(_BYTE*)(v3 + 19) == 1) &&
      *(_BYTE*)(CudaDriverData_1435ed8 + 72) == 0) {
    if (*(_DWORD*)(a1 + 8) != 1 || *(_BYTE*)(v2 + 125) == 0) {
      v5 = a1;
      v10 = CudaDriverRoutine_1e29b0(a1, 1, a1 + 32);
      if (v10 != 0) {
        return v10;
      }
      goto LABEL_26;
    }
    v5 = a1;
    if ((unsigned int)close_plt(*(unsigned int*)(a1 + 20)) == 0) {
      goto LABEL_26;
    }
    return 999;
  }
  if (*(_DWORD*)(*(_QWORD*)a1 + 32LL) == 0) {
    v6 = *(_QWORD*)(v1 + 72);
    v14 = 16;
    v16 = 1;
    if (v6 == 0) {
      return 999;
    }
    v7 = v6 + 48;
    for (i = 0;; ++i) {
      v9 = *(_QWORD*)(v7 + 8 * i);
      if (v9 != 0) {
        if (i >> 5 > 0x80 || *(_DWORD*)(v9 + 32) == 0) {
        LABEL_18:
          if (*(_QWORD*)(*(_QWORD*)(v9 + 33864) + 96LL) != 0) {
            v15 = *(_QWORD*)(*(_QWORD*)(v9 + 33864) + 96LL);
          LABEL_23:
            v5 = a1;
            v12 = (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0x1C0LL) +
                                         CudaDriverData_1422bb0))(&v14);
            if ((_DWORD)v12 != 0) {
              v10 = CudaDriverRoutine_1e9390(v12);
              if (v10 != 0) {
                return v10;
              }
            }
          LABEL_26:
            CudaDriverRoutine_12e340(*(_QWORD*)(v5 + 48));
            a1 = v5;
          LABEL_27:
            v4 = 0;
            *(_QWORD*)(a1 + 40) = 0;
            *(_DWORD*)(a1 + 20) = -1;
            return v4;
          }
          v11 = a1;
          CudaDriverRoutine_1e27d0((__int64*)v9);
          a1 = v11;
          v15 = *(_QWORD*)(*(_QWORD*)(v9 + 33864) + 96LL);
          if (v15 != 0) {
            goto LABEL_23;
          }
          return 999;
        }
      }
      else if (i >> 5 > 0x80) {
        goto LABEL_18;
      }
    }
  }
  return 0;
}

__int64 cuda_driver_1e2000(__int64 a1, unsigned int a2)
{
  __int64 v2;
  __int64 result;
  int v4;
  __int64 v5;
  int v6;

  v4 = 16;
  v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 8LL) + 64LL);
  if (*(_BYTE*)(v2 + 16840) != 0) {
    if (*(_DWORD*)(a1 + 32) != 0) {
      return 801;
    }
    if (**(_QWORD**)(*(_QWORD*)(a1 + 200) + 88LL) != 0 &&
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v2 + 19824) + 96LL) + 20LL) == 1) {
      if (a2 > 3) {
        return 999;
      }
      v5 = **(_QWORD**)(*(_QWORD*)(a1 + 200) + 88LL);
      v6 = CudaDriverData_11152a0[a2];
      result = (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0x300LL) +
                                      CudaDriverData_1422bb0))(&v4);
      if ((_DWORD)result != 0) {
        return CudaDriverRoutine_1e9390(result);
      }
      return result;
    }
  }
  return 801;
}

__int64 cuda_driver_1e2550(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  void (*v5)(int*);
  __int64 result;
  struct {
    char gap0_[4];
    int v7;
    __int64 v8;
  } v7_;

  if (0x2E8BA2E8BA2E8BA3LL *
          ((a1 - *(_QWORD*)(*(_QWORD*)(a1 + 8) + 200LL)) >> 4) ==
      *(_DWORD*)(*(_QWORD*)(a1 + 8) + 208LL) - 1) {
    v2 = *(__int64**)(a1 + 88);
    if (v2 != nullptr) {
      v7_.v7 = 12;
      v3 = v2[1];
      v4 = CudaDriverData_1422bb0;
      if (v3 != 0) {
        v5 = *(void (**)(int*))((char*)((_UNKNOWN*)0x108LL) +
                                CudaDriverData_1422bb0);
        v7_.v8 = v3;
        v5(&v7_.v7);
        *(_QWORD*)(*(_QWORD*)(a1 + 88) + 8LL) = 0;
        v2 = *(__int64**)(a1 + 88);
      }
      if (*v2 != 0 && *((_BYTE*)v2 + 16) != 0) {
        v7_.v8 = *v2;
        v7_.v7 = 12;
        (*(void (**)(int*))((char*)((_UNKNOWN*)0x10CLL) + v4 + 4))(&v7_.v7);
      }
    }
  }
  result = CudaDriverRoutine_12e340(*(_QWORD*)(a1 + 88));
  *(_QWORD*)(a1 + 88) = 0;
  return result;
}

__int64 cuda_driver_unplaced_10_1e29b0(__int64 a1, int a2, __int64 a3)
{
  __int64 v3;
  __int64 v5;
  int v6;
  __int64 v7;
  bool v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  int v15;
  __int64 v16;
  unsigned int v17;
  int v18;
  __int64 v19;
  struct {
    char gap0_[4];
    int v20;
    __int64 v21;
    int v22;
    int v23;
    __int64 v24;
  } v20_;

  v3 = *(_QWORD*)a1;
  v5 = *(_QWORD*)(**(_QWORD**)a1 + 8LL);
  if ((*(_BYTE*)(v5 + 1952) & 4) != 0) {
    v6 = *(_DWORD*)(a1 + 8);
    a1 = 0;
    if (v6 > 2) {
      switch (v6) {
      case 3:
        v7 = a3;
        a1 = CudaDriverStub_122340(*(_QWORD*)(*(_QWORD*)(v5 + 64) + 16864LL));
        break;
      case 4:
        v7 = a3;
        a1 = CudaDriverStub_122320(*(_QWORD*)(*(_QWORD*)(v5 + 64) + 16864LL));
        break;
      case 5:
        v7 = a3;
        a1 = CudaDriverStub_122350(*(_QWORD*)(*(_QWORD*)(v5 + 64) + 16864LL));
        break;
      default:
        goto LABEL_13;
      }
      goto LABEL_12;
    }
    if (v6 == 1) {
      v9 = *(_DWORD*)(v3 + 32) == 0;
      v10 = 33760;
      if (v9) {
        v10 = 33160;
      }
      a1 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v5 + 64) +
                                                       16864LL) +
                                            72LL) +
                                 v10) +
                      216LL);
      if (**(_DWORD**)(a1 + 48) == a2) {
        return 0;
      }
      goto LABEL_18;
    }
    if (v6 == 2) {
      v7 = a3;
      a1 = CudaDriverStub_122310(*(_QWORD*)(*(_QWORD*)(v5 + 64) + 16864LL));
    LABEL_12:
      a3 = v7;
    }
  }
LABEL_13:
  if (**(_DWORD**)(a1 + 48) == a2) {
    return 0;
  }
LABEL_18:
  v11 = *(__int64**)(*(_QWORD*)(*(_QWORD*)a1 + 200LL) + 88LL);
  if (v11 == nullptr || (v12 = *v11) == 0 ||
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v5 + 64) + 19824LL) + 96LL) +
                19LL) != 1) {
    v16 = *(_QWORD*)(*(_QWORD*)a1 + 8LL);
    v20_.v22 = a2;
    v13 = a1;
    v20_.v20 = 28;
    v20_.v21 = *(_QWORD*)(*(_QWORD*)(v16 + 33864) + 32LL);
    v17 = *(_DWORD*)(a1 + 8) - 1;
    if (v17 > 4) {
      v18 = -1;
    }
    else {
      v18 = CudaDriverData_135e0a0[v17];
    }
    v20_.v23 = v18;
    v20_.v24 = a3;
    v19 = (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0x14CLL) +
                                 CudaDriverData_1422bb0 + 4))(&v20_.v20);
    if ((_DWORD)v19 == 0) {
      goto LABEL_30;
    }
    return CudaDriverRoutine_1e9390(v19);
  }
  v20_.v21 = v12;
  v20_.v22 = a2;
  v13 = a1;
  v20_.v20 = 28;
  v14 = *(_DWORD*)(a1 + 8) - 1;
  if (v14 > 4) {
    v15 = -1;
  }
  else {
    v15 = CudaDriverData_135e0a0[v14];
  }
  v20_.v23 = v15;
  v20_.v24 = a3;
  v19 = (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0x148LL) +
                               CudaDriverData_1422bb0))(&v20_.v20);
  if ((_DWORD)v19 != 0) {
    return CudaDriverRoutine_1e9390(v19);
  }
LABEL_30:
  **(_DWORD**)(v13 + 48) = a2;
  return 0;
}

__int64 cuda_driver_1e37a0(__int64 a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  void (*v10)(int*);
  void (*v11)(int*);
  void (*v12)(int*);
  __int64 (*v13)(int*);
  __int64 v14;
  struct {
    char gap0_[4];
    int v16;
    __int64 v17;
  } v16_;

  v1 = *(_QWORD*)(a1 + 19824);
  if (v1 != 0) {
    v2 = *(_QWORD**)(v1 + 8);
    v4 = v2[6];
    if (v4 != 0) {
      CudaDriverRoutine_1ebdf0(v4);
    }
    v5 = v2[7];
    if (v5 != 0) {
      CudaDriverRoutine_1ebdf0(v5);
    }
    v6 = v2[9];
    if (v6 != 0) {
      CudaDriverRoutine_1ebdf0(v6);
    }
    v7 = v2[8];
    if (v7 != 0) {
      CudaDriverRoutine_1ebdf0(v7);
    }
    cuda_driver_1e85e0(*(__int64**)(*(_QWORD*)(a1 + 19824) + 8LL));
    v8 = *(_QWORD*)(a1 + 19824);
    if (*(_QWORD*)(v8 + 104) != 0) {
      CudaDriverRoutine_12e340(*(_QWORD*)(v8 + 104));
      v8 = *(_QWORD*)(a1 + 19824);
    }
    v9 = CudaDriverData_1422bb0;
    if (*(_QWORD*)(v8 + 80) != 0) {
      v16_.v17 = *(_QWORD*)(v8 + 80);
      v10 = *(void (**)(int*))((char*)((_UNKNOWN*)0x7CLL) +
                               CudaDriverData_1422bb0 + 4);
      v16_.v16 = 12;
      v10(&v16_.v16);
      v8 = *(_QWORD*)(a1 + 19824);
    }
    if (*(_QWORD*)(v8 + 96) != 0) {
      v16_.v17 = *(_QWORD*)(v8 + 96);
      v11 = *(void (**)(int*))((char*)((_UNKNOWN*)0x70LL) + v9);
      v16_.v16 = 12;
      v11(&v16_.v16);
      *(_QWORD*)(*(_QWORD*)(a1 + 19824) + 96LL) = 0;
      v8 = *(_QWORD*)(a1 + 19824);
    }
    if (*(_QWORD*)(v8 + 64) != 0) {
      v16_.v17 = *(_QWORD*)(v8 + 64);
      v12 = *(void (**)(int*))((char*)((_UNKNOWN*)0x88LL) + v9);
      v16_.v16 = 12;
      v12(&v16_.v16);
      v8 = *(_QWORD*)(a1 + 19824);
    }
    if (*(_QWORD*)(v8 + 88) != 0) {
      v16_.v17 = *(_QWORD*)(v8 + 88);
      v13 = *(__int64 (**)(int*))((char*)((char*)0x20LL) + v9);
      v16_.v16 = 12;
      v14 = v13(&v16_.v16);
      if ((_DWORD)v14 != 0) {
        CudaDriverRoutine_1e9390(v14);
      }
      v8 = *(_QWORD*)(a1 + 19824);
    }
    if (*(_DWORD*)v8 != 0) {
      CudaDriverRoutine_1a1670(CudaDriverData_1435d30, *(_DWORD*)v8);
      v8 = *(_QWORD*)(a1 + 19824);
    }
    CudaDriverRoutine_12e340(v8);
    *(_QWORD*)(a1 + 19824) = 0;
  }
  return 0;
}

__int64 cuda_driver_unplaced_10_1e3920(__int64 a1, _DWORD* a2, _DWORD* a3)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  __int16 v8;
  double v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 result;
  __int64 v20;
  int v21;
  int v22;
  __int64 v23;
  unsigned int v24;
  double v25;
  __int16 v26;
  char v27;
  char v28;
  unsigned int v29;
  __int16 v30;
  __int64 v31;
  bool v32;
  __int16 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int128 v37;

  v6 = a1 + 14824;
  v7 = *(_QWORD*)(a1 + 19824);
  v8 = *(_WORD*)(a1 + 16848) & 0xDFFF;
  v9 = *(float*)(a1 + 17124);
  v10 = *(_DWORD*)(*(_QWORD*)(v7 + 96) + 120LL);
  *(_DWORD*)(a1 + 14736) = 0;
  if (v10 == 1) {
    v11 = 0x2000;
  }
  else {
    v11 = 0;
  }
  *(_WORD*)(a1 + 16848) = v8 | v11;
  v12 = v11 >> 13;
  *(_BYTE*)(a1 + 3360) = *(_BYTE*)(a1 + 3360) & 0xFE | v12;
  *(_DWORD*)(a1 + 4112) = *(_DWORD*)(*(_QWORD*)(v7 + 96) + 124LL);
  *(_DWORD*)(a1 + 4128) = 1;
  v13 = *(_DWORD*)(*(_QWORD*)(v7 + 96) + 128LL);
  *(_DWORD*)(a1 + 4116) = v13;
  *(_DWORD*)(a1 + 4120) =
      (unsigned int)((double)v13 * v9 / 0x1.9000000000000p+6);
  v14 = *(_QWORD*)(*(_QWORD*)(v7 + 96) + 132LL);
  *(_DWORD*)(a1 + 14820) = v12;
  *(_DWORD*)(a1 + 4124) = v14;
  *(_DWORD*)(a1 + 14816) = 7;
  v15 = *(_QWORD*)(*(_QWORD*)(v7 + 96) + 104LL);
  *(_DWORD*)(a1 + 3472) = v15;
  v16 = CudaDriverStub_12e330(4LL * (unsigned int)v15);
  *(_QWORD*)(a1 + 3464) = v16;
  if (v16 == 0) {
    return 2;
  }
  memcpy_plt(v16, *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 19824) + 96LL) + 112LL),
             4LL * *(unsigned int*)(a1 + 3472));
  if ((*(_WORD*)(v6 + 2024) & 0x2000) != 0) {
    *(_DWORD*)(a1 + 3168) = 8;
    v18 = *(_QWORD*)(a1 + 19824);
  }
  else {
    *(_DWORD*)(a1 + 3168) = 3;
    *(_QWORD*)(a1 + 3204) = 0x200000002LL;
    *(_DWORD*)(a1 + 3216) = 4;
    *(_DWORD*)(a1 + 3224) = 4;
    v18 = *(_QWORD*)(a1 + 19824);
    *(_DWORD*)(a1 + 3176) = *(
        unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v18 + 96) + 284LL) +
                                     4LL) +
                          6LL);
    *(_DWORD*)(a1 + 3180) =
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v18 + 96) + 284LL) + 4LL) +
                  7LL) &
        0x1F;
    *(_DWORD*)(a1 + 3184) = *(
        unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v18 + 96) + 284LL) +
                                      4LL) +
                           4LL);
    *(_DWORD*)(a1 + 3188) = *(
        unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v18 + 96) + 292LL) +
                                      4LL) +
                           4LL);
    *(_DWORD*)(a1 + 3192) = *(
        unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v18 + 96) + 292LL) +
                                      4LL) +
                           6LL);
    *(_DWORD*)(a1 + 3196) = *(
        unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v18 + 96) + 292LL) +
                                     4LL) +
                          8LL);
  }
  *a2 = *(_DWORD*)(*(_QWORD*)(v18 + 96) + 140LL);
  *a3 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 19824) + 96LL) + 144LL);
  v20 = *(_QWORD*)(a1 + 19824);
  *(_DWORD*)(a1 + 3160) = *(_DWORD*)(*(_QWORD*)(v20 + 96) + 148LL) >> 8;
  *(_DWORD*)(a1 + 3164) = *(unsigned __int8*)(*(_QWORD*)(v20 + 96) + 148LL);
  v21 = *(_DWORD*)(*(_QWORD*)(v20 + 96) + 152LL) >> 8;
  *(_DWORD*)(a1 + 3152) = v21;
  v22 = *(unsigned __int8*)(*(_QWORD*)(v20 + 96) + 152LL);
  *(_DWORD*)(a1 + 3156) = v22;
  if (v21 == 10 && v22 == 4) {
    *(_QWORD*)(a1 + 3152) = 0x10000000CLL;
  }
  v23 = *(_QWORD*)(v20 + 96);
  v24 = *(_DWORD*)(v23 + 160);
  if (v24 != 0) {
    LODWORD(v17) = *(_DWORD*)(v23 + 156);
    v25 = (double)v17 / (double)v24;
    if (v25 > 0x0.0p+0) {
      *(double*)(a1 + 14808) = v25;
    }
  }
  v26 = *(_WORD*)(v6 + 2024);
  *(_DWORD*)(a1 + 3200) = 0;
  v27 = 0;
  v28 = *(_BYTE*)(a1 + 3360) & 0xF9;
  *(_WORD*)(v6 + 2024) = v26 & 0xF1FF;
  *(_DWORD*)(v6 + 2152) &= ~0x20000u;
  *(_BYTE*)(v6 + 2026) = 1;
  *(_BYTE*)v6 = *(_BYTE*)(*(_QWORD*)(v20 + 96) + 164LL);
  v29 = *(_DWORD*)(*(_QWORD*)(v20 + 96) + 168LL) - 1;
  if (v29 >= 3) {
    v29 = -1;
  }
  *(_DWORD*)(v6 + 2036) = v29;
  *(_BYTE*)(a1 + 3360) = v28 | (2 * *(_BYTE*)(*(_QWORD*)(v20 + 96) + 172LL));
  *(_BYTE*)(v20 + 124) = *(_BYTE*)(*(_QWORD*)(v20 + 96) + 173LL) ^ 1;
  if ((*((_BYTE*)((_UNKNOWN*)0x1D88LL) + (_QWORD)CudaDriverData_1422118) & 4) !=
      0) {
    if (CudaDriverRoutine_9aa30(a1)) {
      v27 = 4;
    }
    else {
      v27 = 0;
    }
  }
  v30 = *(_WORD*)(v6 + 2024) & 0xFF7F;
  *(_BYTE*)(v6 + 2164) = *(_BYTE*)(v6 + 2164) & 0xFB | v27;
  v31 = *(_QWORD*)(a1 + 19824);
  v32 = *(_DWORD*)(*(_QWORD*)(v31 + 96) + 324LL) == 2;
  if (*(_DWORD*)(*(_QWORD*)(v31 + 96) + 324LL) == 2) {
    v33 = 128;
  }
  else {
    v33 = 0;
  }
  *(_WORD*)(v6 + 2024) = v30 | v33;
  if (v32) {
    *(_OWORD*)(a1 + 3111) =
        *(_OWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v31 + 96) + 292LL) + 12LL) +
                   4LL);
  }
  v34 = *(_QWORD*)(*(_QWORD*)(v31 + 96) + 80LL);
  if (v34 != 0) {
    result = 0;
  LABEL_29:
    *(_QWORD*)(a1 + 14832) = v34;
    return result;
  }
  v36 = 1;
  v37 = (__typeof__(v37)){0};
  v35 = 0x20000001CLL;
  result = (*(__int64 (**)(__int64*))((char*)((_UNKNOWN*)0x2E8LL) +
                                      CudaDriverData_1422bb0))(&v35);
  if ((_DWORD)result == 0) {
    v34 = v37;
    goto LABEL_29;
  }
  return CudaDriverRoutine_1e9390(result);
}

__int64 cuda_driver_1e3d40(__int64 a1)
{
  *(_WORD*)(a1 + 16848) = *(_WORD*)(a1 + 16848) & 0xFFFB |
                          ~(4 * *((unsigned __int8*)((_UNKNOWN*)0x11F8LL) +
                                  (_QWORD)CudaDriverData_1422118)) &
                              4;
  return 0;
}

__int64 cuda_driver_1e51a0(__int64 a1, unsigned __int8 a2)
{
  int v3;
  void* v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  int v10;
  int v12;
  __int64 v13;
  int v14;

  v13 = 0;
  v3 = a2;
  v14 = 1;
  v12 = 16;
  v4 = CudaDriverData_1422118;
  CudaDriverStub_107f90(*(_QWORD*)((char*)((_UNKNOWN*)0x1730LL) +
                                   (_QWORD)CudaDriverData_1422118) +
                        56LL);
  v5 = *(_QWORD*)((char*)((_UNKNOWN*)0x1730LL) + (_QWORD)v4);
  v6 = *(_DWORD*)(v5 + 48);
  if (v3 == 0) {
    v10 = v6 - 1;
    *(_DWORD*)(v5 + 48) = v10;
    if (v10 != 0) {
      goto LABEL_7;
    }
    v14 = 1;
    v7 = *(_QWORD*)(*(_QWORD*)(a1 + 19824) + 64LL);
    if (v7 != 0) {
      goto LABEL_4;
    }
  LABEL_10:
    v9 = 999;
    goto LABEL_8;
  }
  *(_DWORD*)(v5 + 48) = v6 + 1;
  if (v6 != 0) {
  LABEL_7:
    v9 = 0;
    goto LABEL_8;
  }
  v14 = 2;
  v7 = *(_QWORD*)(*(_QWORD*)(a1 + 19824) + 64LL);
  if (v7 == 0) {
    goto LABEL_10;
  }
LABEL_4:
  v13 = v7;
  v8 = (*(__int64 (**)(int*))((char*)((char*)0x40LL) + CudaDriverData_1422bb0))(
      &v12);
  if ((_DWORD)v8 == 0) {
    goto LABEL_7;
  }
  v9 = CudaDriverRoutine_1e9390(v8);
LABEL_8:
  CudaDriverStub_108070(*(_QWORD*)((char*)((_UNKNOWN*)0x1730LL) + (_QWORD)v4) +
                        56LL);
  return v9;
}

__int64 cuda_driver_1e55a0(__int64 a1, __int64 a2, int* a3)
{
  void* v3;
  __int64 v4;
  __int64 v6;
  unsigned int v7;
  struct {
    char gap0_[4];
    int v9;
    __int64 v10;
  } v9_;

  v9_.v9 = 12;
  v3 = CudaDriverData_1422118;
  v4 = *(_QWORD*)(*(_QWORD*)((char*)((_UNKNOWN*)0x1730LL) +
                             (_QWORD)CudaDriverData_1422118) +
                  80LL);
  if (v4 == 0) {
    return 1;
  }
  while (*(_DWORD*)(v4 + 16) != *a3) {
    v4 = *(_QWORD*)(v4 + 8);
    if (v4 == 0) {
      return 1;
    }
  }
  v9_.v10 = *(_QWORD*)(v4 + 24);
  if (v9_.v10 == 0) {
    return 1;
  }
  v6 = (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0x1D0LL) +
                              CudaDriverData_1422bb0))(&v9_.v9);
  if ((_DWORD)v6 != 0) {
    v7 = CudaDriverRoutine_1e9390(v6);
  }
  else {
    v7 = 0;
  }
  CudaDriverRoutine_1a1670(*(_QWORD*)&(*(_BYTE(*)[8])0x1588LL)[(_QWORD)v3],
                           *a3);
  *a3 = 0;
  return v7;
}

__int64 cuda_driver_1e5680(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4;
  __int64 result;
  int v6;
  __int64 v7;
  _BOOL4 v8;

  v6 = 16;
  v8 = a4 == 1;
  v4 = *(_QWORD*)(CudaDriverData_1435ed8 + 80);
  if (v4 == 0) {
    return 1;
  }
  while (*(_DWORD*)(v4 + 16) != a3) {
    v4 = *(_QWORD*)(v4 + 8);
    if (v4 == 0) {
      return 1;
    }
  }
  v7 = *(_QWORD*)(v4 + 24);
  if (v7 == 0) {
    return 1;
  }
  result = (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0x1D8LL) +
                                  CudaDriverData_1422bb0))(&v6);
  if ((_DWORD)result != 0) {
    if ((_DWORD)result == 99) {
      return 210;
    }
    else if ((_DWORD)result == 63) {
      return 800;
    }
    else {
      return CudaDriverRoutine_b4790(result);
    }
  }
  return result;
}

__int64 cuda_driver_1e5b10(_QWORD* a1)
{
  char v2;
  _BYTE* v3;
  bool v4;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _OWORD* v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  unsigned __int64 v20;
  __int128 v21;
  __int128 v22;
  __int128 v23;
  __int128 v24;
  __int128 v25;
  __int128 v26;
  __int128 v27;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  __int128 v31;
  __int128 v32;
  __int128 v33;
  __int128 v34;
  __int128 v35;
  __int128 v36;
  __int128 v37;
  __int128 v38;
  __int128 v39;
  __int128 v40;
  __int128 v41;
  __int128 v42;
  __int128 v43;
  __int64 v44;
  struct {
    _DWORD v45[3];
    int v46;
  } v45_;
  _QWORD v47[12];

  v2 = (*(__int64 (**)(void*))(a1[8] + 21488LL))(*(void**)&a1[8]);
  v3 = *(_BYTE**)(*(_QWORD*)(a1[8] + 19824LL) + 96LL);
  v4 = v3[244] != 1 || (v3[267] & 1) == 0 && v3[19] != 1 ||
       *(_BYTE*)(CudaDriverData_1435ed8 + 72) != 0;
  *(_BYTE*)(a1[9] + 33080LL) = v2 != 0 || v4;
  if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1[8] + 19824LL) + 96LL) + 263LL) & 1) !=
      0) {
    return 0;
  }
  *(_QWORD*)&v45_.v45[1] = 0;
  *(_OWORD*)&v47[10] = (__typeof__(*(_OWORD*)&v47[10])){0};
  LODWORD(v47[11]) = 1;
  *(_OWORD*)((char*)&v47[8] + 4) =
      (__typeof__(*(_OWORD*)((char*)&v47[8] + 4))){0};
  *(_OWORD*)((char*)&v47[6] + 4) =
      (__typeof__(*(_OWORD*)((char*)&v47[6] + 4))){0};
  *(_OWORD*)((char*)&v47[4] + 4) =
      (__typeof__(*(_OWORD*)((char*)&v47[4] + 4))){0};
  *(_OWORD*)((char*)&v47[2] + 4) =
      (__typeof__(*(_OWORD*)((char*)&v47[2] + 4))){0};
  *(_OWORD*)((char*)v47 + 4) = (__typeof__(*(_OWORD*)((char*)v47 + 4))){0};
  v45_.v46 = 0;
  LODWORD(v47[0]) = 96;
  v45_.v45[0] = 16;
  *(_QWORD*)(a1[2016] + 8LL) = CudaDriverStub_12e330(40);
  v6 = *(_QWORD**)(a1[2016] + 8LL);
  if (v6 == nullptr) {
    goto LABEL_16;
  }
  v6[4] = 0;
  *(_OWORD*)v6 = (__typeof__(*(_OWORD*)v6)){0};
  *((_OWORD*)v6 + 1) = (__typeof__(*((_OWORD*)v6 + 1))){0};
  CudaDriverRoutine_107f40(v6 + 3, 75, 0);
  v44 = 0;
  v36 = (__typeof__(v36)){0};
  v38 = (__typeof__(v38)){0};
  v39 = (__typeof__(v39)){0};
  v40 = (__typeof__(v40)){0};
  v41 = (__typeof__(v41)){0};
  v37 = (__typeof__(v37)){0};
  v35 = (__typeof__(v35)){0};
  v34 = (__typeof__(v34)){0};
  v33 = (__typeof__(v33)){0};
  v32 = (__typeof__(v32)){0};
  v31 = (__typeof__(v31)){0};
  v30 = (__typeof__(v30)){0};
  v29 = (__typeof__(v29)){0};
  v28 = (__typeof__(v28)){0};
  v27 = (__typeof__(v27)){0};
  v26 = (__typeof__(v26)){0};
  v25 = (__typeof__(v25)){0};
  v24 = (__typeof__(v24)){0};
  v23 = (__typeof__(v23)){0};
  v22 = (__typeof__(v22)){0};
  v21 = (__typeof__(v21)){0};
  v42 = (__typeof__(v42)){0};
  v43 = (__typeof__(v43)){0};
  v7 = a1[10];
  v8 = 0x109000299LL;
  if ((*((_BYTE*)((_UNKNOWN*)0x1D58LL) + (_QWORD)CudaDriverData_1422118 + 2) &
       1) != 0) {
    v8 = 0x109000291LL;
  }
  DWORD1(v42) = -1;
  v20 = v8;
  v9 = cuda_driver_1da1b0(v7, &v20, 64, (__int64**)v6);
  if (v9 != 0) {
    goto LABEL_17;
  }
  v10 = CudaDriverStub_1dbab0(*v6);
  v11 = (*(__int64 (**)(void))(a1[8] + 19184LL))();
  *((_DWORD*)v6 + 2) = (*(__int64 (**)(__int64))(a1[8] + 19176LL))(v11)-v10;
  v12 = CudaDriverStub_12e330(34256);
  if (v12 == 0) {
    goto LABEL_16;
  }
  v13 = (_QWORD*)v12;
  memset_plt(v12, 0, 34256);
  *v13 = a1[9];
  v14 = (_OWORD*)CudaDriverStub_12e330(112);
  v13[4233] = v14;
  if (v14 != nullptr) {
    *v14 = (__typeof__(*v14)){0};
    v14[1] = (__typeof__(v14[1])){0};
    v14[2] = (__typeof__(v14[2])){0};
    v14[3] = (__typeof__(v14[3])){0};
    v14[6] = (__typeof__(v14[6])){0};
    v14[4] = (__typeof__(v14[4])){0};
    v14[5] = (__typeof__(v14[5])){0};
    HIDWORD(v47[2]) = 8;
    v15 = *(_QWORD*)(a1[8] + 19824LL);
    v47[4] = **(_QWORD**)(v15 + 8);
    v16 = *(_DWORD*)(*(_QWORD*)(v15 + 96) + 12LL);
    *(_QWORD*)((char*)&v47[1] + 4) = *(_QWORD*)(v15 + 88);
    HIDWORD(v47[9]) = v16;
    *(_QWORD*)((char*)v47 + 4) = v13[4233] + 32LL;
    v17 = CudaDriverData_1422bb0;
    v18 = (*(__int64 (**)(_QWORD*))((char*)((__int64*)0x10LL) +
                                    CudaDriverData_1422bb0))(v47);
    if ((_DWORD)v18 != 0) {
      v9 = CudaDriverRoutine_1e9390(v18);
    }
    else {
      *(_QWORD*)&v45_.v45[1] = *(_QWORD*)(v13[4233] + 32LL);
      (*(void (**)(_DWORD*))((char*)((_UNKNOWN*)0xECLL) + v17 + 4))(v45_.v45);
      *(_DWORD*)(v13[4233] + 4LL) = v45_.v46;
      if (*(_DWORD*)(v13[4233] + 4LL) != -1) {
        v6[2] = v13;
        return 0;
      }
      v9 = 999;
    }
  }
  else {
  LABEL_16:
    v9 = 2;
  }
LABEL_17:
  v19 = v9;
  CudaDriverRoutine_1e8870((__int64)a1);
  return v19;
}

__int64 cuda_driver_1e5f20(__int64 a1, char a2, char a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  int v11;
  __int64 result;
  bool v13;
  char v14;
  __int64 v15;
  __int64 v16;
  char v17;
  __int64 v18;
  unsigned int v19;
  int v20;
  __int64 v21;
  int v22;

  v6 = CudaDriverRoutine_5ef60(*(_QWORD**)(a1 + 72), 0);
  if (v6 != 0) {
    v7 = v6;
    v8 = CudaDriverRoutine_98340(a1);
    if ((cuda_driver_772c0(v8) & 1) != 0 ||
        (*((_BYTE*)((_UNKNOWN*)0x1840LL) + (_QWORD)CudaDriverData_1422118) &
         2) != 0 ||
        cuda_debugger_api_7cff0()) {
      v9 = CudaDriverRoutine_98340(a1);
      v10 = 1;
      if ((cuda_driver_122360(a2, v9) & 2) != 0) {
        v11 = 2;
      }
      else {
        v11 = 1;
      }
      if (a2 != 0) {
      LABEL_9:
        result = (*(__int64 (**)(__int64, bool))(*(_QWORD*)(a1 + 64) +
                                                 19528LL))(a1, a3 == 0);
        if ((_DWORD)result != 0) {
          return result;
        }
        goto LABEL_19;
      }
    }
    else {
      v10 = 0;
      v11 = 1;
      if (a2 != 0) {
        goto LABEL_9;
      }
    }
    v13 = CudaDriverRoutine_122140(*(_QWORD*)(a1 + 232));
    v14 = v10 ^ 1;
    if (!v13) {
      v14 = 1;
    }
    if ((v14 & 1) != 0) {
    LABEL_18:
      result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)(a1 + 64) +
                                                  19528LL))(a1, 2);
      if ((_DWORD)result != 0) {
        return result;
      }
    LABEL_19:
      v17 = v10 ^ 1;
      if (a2 == 0) {
        v17 = 1;
      }
      if ((v17 & 1) != 0) {
        return 0;
      }
      v18 = *(_QWORD*)(*(_QWORD*)v7 + 8LL);
      v20 = 16;
      v21 = CudaDriverRoutine_1e2ce0(v18);
      if (v21 != 0) {
        v22 = v11;
        result = (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0x1E0LL) +
                                        CudaDriverData_1422bb0))(&v20);
        if ((_DWORD)result == 0) {
          return result;
        }
        result = CudaDriverRoutine_1e9390(result);
        if ((_DWORD)result == 0) {
          return result;
        }
      }
      else {
        LODWORD(result) = 999;
      }
      v19 = result;
      (*(void (**)(__int64, __int64))(*(_QWORD*)(a1 + 64) + 19528LL))(a1, 2);
      return v19;
    }
    v15 = *(_QWORD*)(*(_QWORD*)v7 + 8LL);
    v20 = 16;
    v21 = CudaDriverRoutine_1e2ce0(v15);
    if (v21 != 0) {
      v22 = v11;
      v16 = (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0x1E0LL) +
                                   CudaDriverData_1422bb0))(&v20);
      if ((_DWORD)v16 == 0) {
        goto LABEL_18;
      }
      result = CudaDriverRoutine_1e9390(v16);
      if ((_DWORD)result == 0) {
        goto LABEL_18;
      }
      return result;
    }
  }
  return 999;
}

__attribute__((swiftcall)) void cuda_driver_1e6200(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
}

__int64 cuda_driver_1e6280(__int64 a1, unsigned int* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int* v23;
  unsigned int* v24;
  unsigned int v25;
  _OWORD* v27;
  __int128* v28;
  __int64 v29;
  __int128 v30;
  __int128 v31;

  v4 = *(_QWORD*)(*(_QWORD*)(a1 + 19824) + 96LL);
  if (*(_QWORD*)(v4 + 248) == 0) {
    return CudaDriverRoutine_63a00((_DWORD*)a1, a2);
  }
  v5 = *(unsigned int*)(v4 + 256);
  memset_plt(a2, 0, 7316);
  if ((_DWORD)v5 != 0) {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = a2;
    v10 = CudaDriverData_1422bb0;
    do {
      v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 19824) + 96LL) + 248LL);
      if (*(unsigned int*)((char*)((int*)0x4LL) + v10) < 4) {
        v11 = v14 + v7;
        v9[20] = *(unsigned __int8*)(v11 + 4);
        v9[276] = *(unsigned __int8*)(v11 + 5);
        v12 = v8 % *(_DWORD*)(a1 + 3736);
        v13 = 532;
      }
      else {
        v15 = (unsigned __int8*)(v14 + v6);
        v16 = v15[4];
        v17 = v15[5];
        a2[16 * v16 + 788 + v17] = v15[7];
        v9[20] = v16;
        v9[276] = v17;
        v9[532] = v15[6];
        v9[1044] = v15[8];
        v13 = 1300;
        v12 = v15[9];
      }
      v9[v13] = v12;
      ++v9;
      ++v8;
      v7 += 8;
      v6 += 12;
    } while (12 * v5 != v6);
  }
  *a2 = v5;
  a2[1] = (unsigned int)v5 / *(_DWORD*)(a1 + 3736);
  v18 = *(unsigned int*)(a1 + 3480);
  a2[2] = v18;
  if ((_DWORD)v18 != 0) {
    if ((unsigned int)v18 < 8 || (unsigned __int64)a2 - a1 - 3468 < 0x20) {
      v19 = 0;
    LABEL_12:
      v20 = v18 & 7;
      v21 = v19;
      if ((v18 & 7) != 0) {
        v21 = v19;
        do {
          --v20;
          a2[v21 + 4] = *(_DWORD*)(a1 + 3484 + 4 * v21);
          ++v21;
        } while (v20 != 0);
      }
      if ((unsigned __int64)(v19 - v18) <= 0xFFFFFFFFFFFFFFF8LL) {
        v22 = v18 - v21;
        v23 = &a2[v21 + 6];
        v24 = (unsigned int*)(a1 + 4 * v21 + 3512);
        do {
          v22 -= 8;
          *(v23 - 2) = *(v24 - 7);
          *(v23 - 1) = *(v24 - 6);
          *v23 = *(v24 - 5);
          v23[1] = *(v24 - 4);
          v23[2] = *(v24 - 3);
          v23[3] = *(v24 - 2);
          v23[4] = *(v24 - 1);
          v25 = *v24;
          v24 += 8;
          v23[5] = v25;
          v23 += 8;
        } while (v22 != 0);
      }
      return 0;
    }
    v19 = (unsigned int)v18 & 0xFFFFFFF8;
    v27 = a2 + 8;
    v28 = (__int128*)(a1 + 3500);
    v29 = v19;
    do {
      v30 = *(v28 - 1);
      v31 = *v28;
      v29 -= 8;
      v28 += 2;
      *(v27 - 1) = v30;
      *v27 = v31;
      v27 += 2;
    } while (v29 != 0);
    if (v19 != v18) {
      goto LABEL_12;
    }
  }
  return 0;
}

__int64 cuda_driver_1e6520(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 (*v11)(_DWORD*);
  unsigned int v12;
  __int64 (*v13)(__int64);
  __int64 v14;
  __int64 v15;
  __int64 (*v16)(__int64);
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  unsigned int v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  int v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned int v38;
  unsigned __int64 v39;
  bool v40;
  int v41;
  unsigned __int64 v42;
  char v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  unsigned int v56;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned __int64 i;
  __int64 v62;
  __int64 v63;
  _QWORD v64[2];
  _DWORD v65[3];
  __int64 v66;
  _QWORD v67[7];

  v1 = *(_QWORD*)(a1 + 19824);
  v66 = 0;
  *(_QWORD*)&v65[1] = 0;
  memset((char*)v64 + 4, 0, 12);
  LODWORD(v67[0]) = 52;
  v65[0] = 20;
  LODWORD(v64[0]) = 16;
  memset((char*)v67 + 4, 0, 48);
  v3 = CudaDriverStub_12e330(104);
  v4 = v3;
  if (v3 == 0) {
    goto LABEL_55;
  }
  *(_QWORD*)(v3 + 96) = 0;
  *(_OWORD*)v3 = (__typeof__(*(_OWORD*)v3)){0};
  *(_OWORD*)(v3 + 16) = (__typeof__(*(_OWORD*)(v3 + 16))){0};
  *(_OWORD*)(v3 + 32) = (__typeof__(*(_OWORD*)(v3 + 32))){0};
  *(_OWORD*)(v3 + 48) = (__typeof__(*(_OWORD*)(v3 + 48))){0};
  *(_DWORD*)(v3 + 28) = -1;
  *(_QWORD*)((char*)&v67[1] + 4) = v3;
  *(_OWORD*)(v3 + 64) = (__typeof__(*(_OWORD*)(v3 + 64))){0};
  *(_OWORD*)(v3 + 80) = (__typeof__(*(_OWORD*)(v3 + 80))){0};
  v5 = *(_QWORD*)(a1 + 19824);
  v6 = *(_DWORD*)(v5 + 24);
  v7 = *(_QWORD*)(v5 + 88);
  LOBYTE(v67[6]) = 0;
  HIDWORD(v67[2]) = v6;
  *(_QWORD*)((char*)v67 + 4) = v7;
  v67[5] = 0xA000000000LL;
  *(_OWORD*)&v67[3] = CudaDriverData_1116330;
  v8 = CudaDriverData_1422bb0;
  v9 = (*(__int64 (**)(_QWORD*))((char*)((_UNKNOWN*)0x168LL) +
                                 CudaDriverData_1422bb0))(v67);
  if ((_DWORD)v9 == 0) {
    v10 = *(_QWORD*)v4;
    v66 = v4 + 8;
    v11 = *(__int64 (**)(_DWORD*))((char*)((_UNKNOWN*)0x170LL) + v8);
    *(_QWORD*)&v65[1] = v10;
    v9 = v11(v65);
    if ((_DWORD)v9 == 0) {
      v64[1] = *(_QWORD*)v4;
      v9 = (*(__int64 (**)(_QWORD*))((char*)((_UNKNOWN*)0x178LL) + v8))(v64);
      if ((_DWORD)v9 == 0) {
        v35 = HIDWORD(v64[0]);
        *(_DWORD*)(v4 + 28) = HIDWORD(v64[0]);
        if (v35 != -1) {
          v36 = *(_QWORD*)(v4 + 20);
          v37 = v36 - 1;
          if (v36 == 1) {
            v43 = 1;
          }
          else {
            v38 = 1;
            v39 = 0;
            v40 = false;
            v41 = 0;
            do {
              while (1) {
                v42 = v38;
                if (v40) {
                  break;
                }
                ++v41;
                v40 = *(_QWORD*)(*(_QWORD*)(v4 + 12) + 24 * v39 + 4) !=
                      *(_QWORD*)(*(_QWORD*)(v4 + 12) + 24LL * v38++ + 4);
                v39 = v42;
                if (v37 <= v42) {
                  goto LABEL_35;
                }
              }
              ++v41;
              v40 = true;
              ++v38;
              v39 = v42;
            } while (v37 > v42);
          LABEL_35:
            v43 = !v40;
          }
          v51 = (unsigned __int8)v43 & (v36 > 1);
          if (((unsigned __int8)v43 & (v36 > 1)) != 0) {
            LODWORD(v36) = 1;
          }
          *(_DWORD*)(v4 + 40) = v36;
          v52 = CudaDriverStub_12e330(32LL * (unsigned int)v36);
          *(_QWORD*)(v4 + 32) = v52;
          if (v52 != 0) {
            if (*(_DWORD*)(v4 + 40) == 0) {
            LABEL_60:
              *(_DWORD*)(v4 + 96) = v51;
              CudaDriverRoutine_107f40((_QWORD*)(v4 + 80), 60, 0);
              *(_QWORD*)(v1 + 8) = v4;
              goto LABEL_6;
            }
            v53 = 0;
            v54 = 0;
            v55 = 0;
            if ((v51 & 1) != 0) {
              while (1) {
                *(_QWORD*)(*(_QWORD*)(v4 + 32) + v54 + 8) =
                    *(_QWORD*)(*(_QWORD*)(v4 + 12) + v53 + 4);
                *(_QWORD*)(*(_QWORD*)(v4 + 32) + v54 + 24) =
                    *(unsigned int*)(*(_QWORD*)(v4 + 12) + v53 + 12);
                *(_QWORD*)(*(_QWORD*)(v4 + 32) + v54 + 16) =
                    *(_QWORD*)(*(_QWORD*)(v4 + 12) + v53 + 16) *
                    *(_QWORD*)(*(_QWORD*)(v4 + 32) + v54 + 24);
                v56 = CudaDriverRoutine_1a3f00(
                    (__int64*)(*(_QWORD*)(v4 + 32) + v54),
                    *(_QWORD*)(*(_QWORD*)(v4 + 32) + v54 + 8),
                    *(_QWORD*)(*(_QWORD*)(v4 + 32) + v54 + 16),
                    1 << *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 19824) + 96LL) +
                                    32LL),
                    1);
                if (v56 != 0) {
                  break;
                }
                ++v55;
                v54 += 32;
                v53 += 24;
                if (v55 >= *(unsigned int*)(v4 + 40)) {
                  goto LABEL_60;
                }
              }
            }
            else {
              while (1) {
                *(_QWORD*)(*(_QWORD*)(v4 + 32) + v54 + 8) =
                    *(_QWORD*)(*(_QWORD*)(v4 + 12) + v53 + 4);
                *(_QWORD*)(*(_QWORD*)(v4 + 32) + v54 + 24) =
                    *(unsigned int*)(*(_QWORD*)(v4 + 12) + v53 + 12);
                *(_QWORD*)(*(_QWORD*)(v4 + 32) + v54 + 16) =
                    *(_QWORD*)(*(_QWORD*)(v4 + 12) + v53 + 16) *
                    *(_QWORD*)(*(_QWORD*)(v4 + 32) + v54 + 24);
                v56 = CudaDriverRoutine_1a3f00(
                    (__int64*)(*(_QWORD*)(v4 + 32) + v54),
                    *(_QWORD*)(*(_QWORD*)(v4 + 32) + v54 + 8),
                    *(_QWORD*)(*(_QWORD*)(v4 + 32) + v54 + 16),
                    *(_QWORD*)(*(_QWORD*)(v4 + 32) + v54 + 24), 1);
                if (v56 != 0) {
                  break;
                }
                ++v55;
                v54 += 32;
                v53 += 24;
                if (v55 >= *(unsigned int*)(v4 + 40)) {
                  goto LABEL_60;
                }
              }
            }
            v12 = v56;
            v58 = *(_QWORD*)(v4 + 32);
            if (v58 != 0) {
              v59 = *(unsigned int*)(v4 + 40);
              if ((_DWORD)v59 != 0) {
                v60 = 0;
                for (i = 0; i < v59; ++i) {
                  v62 = *(_QWORD*)(*(_QWORD*)(v4 + 32) + v60);
                  if (v62 != 0) {
                    CudaDriverRoutine_1a40e0(v62);
                    v59 = *(unsigned int*)(v4 + 40);
                  }
                  v60 += 32;
                }
                v58 = *(_QWORD*)(v4 + 32);
              }
              CudaDriverRoutine_12e340(v58);
              v63 = *(_QWORD*)(v4 + 12);
              if (v63 != 0) {
                CudaDriverRoutine_12e340(v63);
              }
            }
          LABEL_56:
            cuda_driver_1e85e0((__int64*)v4);
            return v12;
          }
        }
      LABEL_55:
        v12 = 2;
        goto LABEL_56;
      }
    }
  }
  v12 = CudaDriverRoutine_1e9390(v9);
  cuda_driver_1e85e0((__int64*)v4);
  if (v12 != 0) {
    return v12;
  }
LABEL_6:
  v13 = *(__int64 (**)(__int64))(a1 + 18424);
  v14 = *(_QWORD*)(a1 + 19824);
  memset(v67, 0, 24);
  v15 = v13(2);
  v16 = *(__int64 (**)(__int64))(a1 + 18424);
  v17 = v15;
  *(_QWORD*)v65 = v15;
  v18 = v16(3);
  v19 = (*(__int64 (**)(__int64))(a1 + 18424))(1);
  v20 = v19 - v17;
  if (v19 < v17) {
    v20 = 0;
  }
  v21 = *(_QWORD*)(*(_QWORD*)(a1 + 19824) + 8LL);
  if (*(_DWORD*)(v21 + 96) != 0) {
    v22 = *(_QWORD**)(v21 + 32);
  }
  else {
    v23 = *(unsigned int*)(v21 + 40);
    if ((_DWORD)v23 != 0) {
      v22 = *(_QWORD**)(v21 + 32);
      while (v22[3] != *(_QWORD*)((char*)((_UNKNOWN*)0x1098LL) +
                                  (_QWORD)CudaDriverData_1422118)) {
        --v23;
        v22 += 4;
        if (v23 == 0) {
          goto LABEL_14;
        }
      }
    }
    else {
    LABEL_14:
      v22 = nullptr;
    }
  }
  v67[1] = v20;
  LOWORD(v67[2]) = 257;
  v24 = cuda_driver_1ebbd0(a1, (__int64*)(*(_QWORD*)(v14 + 8) + 56LL),
                           (__int64*)v65, v18, (__int64)v67);
  if (v24 != 0) {
    goto LABEL_16;
  }
  v30 = *(_QWORD*)(v14 + 8);
  v31 = *(_QWORD*)(*(_QWORD*)(v30 + 56) + 32LL) +
        *(_QWORD*)(*(_QWORD*)(v30 + 56) + 24LL);
  *(_QWORD*)(v14 + 32) = v31;
  v32 = v22[2] + v22[1];
  *(_QWORD*)(v14 + 40) = v32;
  if (*(_DWORD*)(v30 + 40) == 1) {
    *(_QWORD*)(v14 + 48) = v31;
    *(_QWORD*)(v14 + 56) = v32;
    if ((*(_WORD*)(a1 + 16848) & 0x10) != 0) {
      return 0;
    }
  }
  else {
    v33 = *(_QWORD*)(*(_QWORD*)(a1 + 19824) + 8LL);
    if (*(_DWORD*)(v33 + 96) != 0) {
      v34 = *(_QWORD**)(v33 + 32);
    }
    else {
      v34 = *(_QWORD**)(v33 + 32);
      v44 = *(unsigned int*)(v14 + 24);
      if (v34[3] != v44) {
        do {
          v45 = v34[7];
          v34 += 4;
        } while (v45 != v44);
      }
    }
    v46 = v34[1];
    *(_QWORD*)(v14 + 48) = v46;
    *(_QWORD*)(v14 + 56) = v34[2] + v46;
    if ((*(_WORD*)(a1 + 16848) & 0x10) != 0) {
      return 0;
    }
  }
  memset(v67, 0, 24);
  if (v22[2] <= 0x400000000uLL) {
    v47 = 0x40000000;
  }
  else {
    v47 = 0x100000000LL;
  }
  LOBYTE(v67[2]) = 1;
  v24 =
      cuda_driver_1ebbd0(a1, (__int64*)(v30 + 48), nullptr, v47, (__int64)v67);
  if (v24 != 0) {
  LABEL_16:
    v12 = v24;
    v25 = *(_QWORD**)(*(_QWORD*)(a1 + 19824) + 8LL);
    v26 = v25[6];
    if (v26 != 0) {
      CudaDriverRoutine_1ebdf0(v26);
    }
    v27 = v25[7];
    if (v27 != 0) {
      CudaDriverRoutine_1ebdf0(v27);
    }
    v28 = v25[9];
    if (v28 != 0) {
      CudaDriverRoutine_1ebdf0(v28);
    }
    v29 = v25[8];
    if (v29 != 0) {
      CudaDriverRoutine_1ebdf0(v29);
    }
    return v12;
  }
  v48 = *(_QWORD*)(v14 + 8);
  v49 = *(_DWORD*)(v48 + 40);
  v50 = *(_QWORD*)(*(_QWORD*)(v48 + 48) + 32LL) +
        *(_QWORD*)(*(_QWORD*)(v48 + 48) + 24LL);
  v12 = 0;
  if (v49 == 1) {
    *(_QWORD*)(v14 + 32) = v50;
  }
  *(_QWORD*)(v14 + 48) = v50;
  return v12;
}

__int64 cuda_driver_1e6b00(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 64) + 19608LL))((void*)a1);
}

__int64 cuda_driver_1e6b10(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 64) + 19528LL))((void*)a1);
}

__int64 cuda_driver_1e6b20(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 64) + 19536LL))((void*)a1);
}

__int64 cuda_driver_1e6b30(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 64) + 19544LL))((void*)a1);
}

__int64 cuda_driver_1e6b40(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 64) + 19592LL))((void*)a1);
}

__int64 cuda_driver_1e6b50(__int64 a1)
{
  return (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 64) + 19616LL))((void*)a1);
}

__int64 cuda_driver_1e6ee0(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int128 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  struct {
    char gap0_[4];
    int v34;
    __int64 v35;
    int v36;
  } v34_;
  _DWORD v37[7];

  memset(v37, 0, sizeof(v37));
  v34_.v34 = 44;
  v3 = *(_QWORD*)(a1 + 64);
  v4 = *(_QWORD*)(v3 + 19824);
  v5 = *(unsigned int*)(v3 + 3732);
  v7 = *(_QWORD*)(v4 + 88);
  v6 = *(_QWORD*)(v4 + 96);
  v34_.v36 = *(_DWORD*)(v3 + 3732);
  v34_.v35 = v7;
  if (*(_BYTE*)(v6 + 260) == 0) {
    v19 = 801;
    if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 19824) + 96LL) + 280LL) < 0x40u) {
      goto LABEL_24;
    }
    goto LABEL_31;
  }
  v37[0] = *(_DWORD*)(v6 + 280);
  v9 = CudaDriverStub_12e330(((unsigned __int64)v37[0] >> 3) & 0x1FFFFFF8);
  v10 = *(_QWORD*)(a1 + 64);
  v11 = v9;
  *(_QWORD*)&v37[3] = v9;
  v12 = CudaDriverStub_12e330(
      ((unsigned __int64)*(
           unsigned int*)(*(_QWORD*)(*(_QWORD*)(v10 + 19824) + 96LL) + 280LL) >>
       3) &
      0x1FFFFFF8);
  v13 = *(_QWORD*)(a1 + 64);
  v14 = v12;
  *(_QWORD*)&v37[1] = v12;
  v15 = CudaDriverStub_12e330(
      ((unsigned __int64)*(
           unsigned int*)(*(_QWORD*)(*(_QWORD*)(v13 + 19824) + 96LL) + 280LL) >>
       3) &
      0x1FFFFFF8);
  v16 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)&v37[5] = v15;
  if (v11 == 0 || v14 == 0 || v15 == 0) {
    v19 = 2;
    if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v16 + 19824) + 96LL) + 280LL) <
        0x40u) {
      goto LABEL_24;
    }
    goto LABEL_31;
  }
  if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v16 + 19824) + 96LL) + 280LL) >= 0x40u) {
    v20 = 8 * v5;
    v21 = v15;
    v22 = 0;
    do {
      *(_QWORD*)(v11 + 8 * v22) = CudaDriverStub_12e330(v20);
      *(_QWORD*)(v14 + 8 * v22) = CudaDriverStub_12e330(v20);
      *(_QWORD*)(v21 + 8 * v22++) = CudaDriverStub_12e330(v20);
    } while (v22 <
             (unsigned __int64)*(
                 unsigned int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 64) +
                                                      19824LL) +
                                           96LL) +
                                280LL) >>
             6);
  }
  v23 = (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0x228LL) +
                               CudaDriverData_1422bb0))(&v34_.v34);
  if ((_DWORD)v23 != 0) {
    v19 = CudaDriverRoutine_1e9390(v23);
    if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 64) + 19824LL) +
                              96LL) +
                   280LL) < 0x40u) {
      goto LABEL_24;
    }
    goto LABEL_31;
  }
  v24 = *(_QWORD*)(a1 + 64);
  if (*(_DWORD*)(v24 + 3732) != 0) {
    v25 = *(_QWORD**)&v37[1];
    v26 = *(_OWORD*)&v37[3];
    v27 = 0;
    do {
      *a2 = *(_QWORD*)(*v25 + 8 * v27);
      a2[1] = *(_QWORD*)(v25[1] + 8 * v27);
      a2[2] = *(_QWORD*)(*(_QWORD*)v26 + 8 * v27);
      a2[3] = *(_QWORD*)(*(_QWORD*)(v26 + 8) + 8 * v27);
      a2[6] = *(_QWORD*)(**((_QWORD**)&v26 + 1) + 8 * v27);
      v28 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)&v26 + 1) + 8LL) + 8 * v27++);
      a2[7] = v28;
      a2 += 40;
      v24 = *(_QWORD*)(a1 + 64);
    } while (v27 < *(unsigned int*)(v24 + 3732));
  }
  v19 = 0;
  if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v24 + 19824) + 96LL) + 280LL) >= 0x40u) {
  LABEL_31:
    v30 = 0;
    do {
      v31 = *(_QWORD*)(*(_QWORD*)&v37[1] + 8 * v30);
      if (v31 != 0) {
        CudaDriverRoutine_12e340(v31);
      }
      v32 = *(_QWORD*)(*(_QWORD*)&v37[3] + 8 * v30);
      if (v32 != 0) {
        CudaDriverRoutine_12e340(v32);
      }
      v33 = *(_QWORD*)(*(_QWORD*)&v37[5] + 8 * v30);
      if (v33 != 0) {
        CudaDriverRoutine_12e340(v33);
      }
      ++v30;
    } while (v30 <
             (unsigned __int64)*(
                 unsigned int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 64) +
                                                      19824LL) +
                                           96LL) +
                                280LL) >>
             6);
  }
LABEL_24:
  if (*(_QWORD*)&v37[1] != 0) {
    CudaDriverRoutine_12e340(*(__int64*)&v37[1]);
  }
  if (*(_QWORD*)&v37[3] != 0) {
    CudaDriverRoutine_12e340(*(__int64*)&v37[3]);
  }
  if (*(_QWORD*)&v37[5] != 0) {
    CudaDriverRoutine_12e340(*(__int64*)&v37[5]);
  }
  return v19;
}

__int64 cuda_driver_1e73d0(__int64 a1)
{
  __int64 result;
  _QWORD v2[2];

  v2[1] = a1;
  v2[0] = 0xFFFFFFFF00000010LL;
  result = (*(__int64 (**)(_QWORD*))((char*)((_UNKNOWN*)0x98LL) +
                                     CudaDriverData_1422bb0))(v2);
  if ((_DWORD)result != 0) {
    return CudaDriverRoutine_1e9390(result);
  }
  return result;
}

__int64 cuda_driver_1e7570(__int64 a1, int a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 result;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;

  v9 = a3;
  v8 = a2;
  v6 = 24;
  v3 = *(_QWORD*)(a1 + 19824);
  v4 = **(_QWORD**)(v3 + 8);
  LODWORD(v3) = *(unsigned __int8*)(*(_QWORD*)(v3 + 96) + 18LL);
  v7 = v4;
  if ((_DWORD)v3 != 1) {
    return 801;
  }
  result = (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0x214LL) +
                                  CudaDriverData_1422bb0 + 4))(&v6);
  if ((_DWORD)result != 0) {
    return CudaDriverRoutine_1e9390(result);
  }
  return result;
}

__int64 cuda_driver_1e7720(__int64 a1, _QWORD* a2, _BYTE* a3, __int64* a4,
                           int a5, int a6)
{
  __int64 result;
  char v9;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 (*v17)(_DWORD*);
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  int v21;
  int v22;
  unsigned int v23;
  int v24;
  int v25;
  int v26;
  __int64 v27;
  unsigned __int64 v29;
  __int64 v30;
  _DWORD v33[9];
  _QWORD v34[6];
  int v35;
  __int64 v36;
  _DWORD v37[4];
  int v38;

  if (a6 == 8) {
    return 801;
  }
  if (CudaDriverData_1434ac0 == 0) {
    return 101;
  }
  if (a6 == 1) {
    v9 = 1;
    v13 = 0;
    v14 = CudaDriverData_1422bb0;
    while (1) {
      v15 = *((_QWORD*)&CudaDriverData_14347a8 + v13 + 35);
      if ((*(unsigned __int8 (**)(__int64))(v15 + 21520))(v15) == 0 &&
          !CudaDriverRoutine_9aa40(v15)) {
        goto LABEL_7;
      }
      v16 = *(_QWORD*)(v15 + 19824);
      v38 = 0;
      if ((*(_BYTE*)(*(_QWORD*)(v16 + 96) + 321LL) & 1) == 0) {
        goto LABEL_7;
      }
      v17 = *(__int64 (**)(_DWORD*))((char*)((_UNKNOWN*)0x268LL) + v14);
      v37[0] = 16;
      v37[3] = a5;
      *(_QWORD*)&v37[1] = &v38;
      v18 = v17(v37);
      if ((_DWORD)v18 != 0) {
        result = CudaDriverRoutine_1e9390(v18);
        if ((_DWORD)result == 801) {
          goto LABEL_6;
        }
        goto LABEL_38;
      }
      *(_QWORD*)(a1 + 128) = 0;
      *(_QWORD*)(a1 + 136) = 0;
      v36 = 8;
      v19 =
          (*(__int64 (**)(__int64*))((char*)((_UNKNOWN*)0x198LL) + v14))(&v36);
      if ((_DWORD)v19 != 0) {
        v20 = CudaDriverRoutine_1e9390(v19);
      }
      else {
        v20 = 0;
      }
      v21 = HIDWORD(v36);
      v22 = v38;
      *(_DWORD*)(a1 + 68) = 1;
      v35 = 1;
      *(_DWORD*)(a1 + 128) = v21;
      *(_DWORD*)(a1 + 132) = v22;
      memset(&v34[2], 0, 32);
      LODWORD(v34[0]) = 52;
      HIDWORD(v34[0]) = v22;
      v34[1] = *(_QWORD*)(*(_QWORD*)(v15 + 19824) + 88LL);
      v23 = (*(__int64 (**)(_QWORD*))((char*)((_UNKNOWN*)0x330LL) + v14))(v34);
      result = v20;
      if (v23 != 0) {
        result = CudaDriverRoutine_1e9390(v23);
      }
      if ((_DWORD)result != 0) {
        goto LABEL_20;
      }
      *a2 = *(_QWORD*)((char*)&v34[2] + 4);
      v24 = LOBYTE(v34[2]);
      v25 = BYTE4(v34[3]);
      *a3 = v34[2];
      if (v25 != 0) {
        v33[3] = 0;
        *(_QWORD*)&v33[1] = 0;
        if (v24 != 0) {
          v26 = 3;
        }
        else {
          v26 = 2;
        }
        LOBYTE(v33[3]) = 1;
        v33[0] = 36;
        *(_WORD*)((char*)&v33[2] + 1) = 257;
        v33[4] = v26;
        v33[5] = v35;
        *(_QWORD*)&v33[7] = *(_QWORD*)(*(_QWORD*)(v15 + 19824) + 88LL);
        v33[6] = v38;
        (*(void (**)(_DWORD*))((char*)((_UNKNOWN*)0x328LL) + v14))(v33);
      }
      v27 = (*(__int64 (**)(_QWORD*))((char*)((_UNKNOWN*)0x330LL) + v14))(v34);
      if ((_DWORD)v27 == 0 ||
          (_DWORD)(result = CudaDriverRoutine_1e9390(v27)) == 0) {
        if (BYTE4(v34[3]) == 0 && (unsigned __int8)*a3 == LOBYTE(v34[2])) {
          if (*(_QWORD*)((char*)&v34[3] + 5) == *(_QWORD*)(v15 + 3078) &&
              *(_QWORD*)((char*)&v34[4] + 5) == *(_QWORD*)(v15 + 3086)) {
            result = 0;
            *(_DWORD*)(a1 + 72) = *(_DWORD*)v15;
            *a4 = v15;
            goto LABEL_38;
          }
          result = 101;
        LABEL_20:
          if ((_DWORD)result == 801) {
            goto LABEL_6;
          }
          goto LABEL_38;
        }
        result = 999;
      }
      if ((_DWORD)result == 801) {
      LABEL_6:
        v9 = 0;
        goto LABEL_7;
      }
    LABEL_38:
      if ((_DWORD)result == 0) {
        return result;
      }
    LABEL_7:
      if (++v13 >= (unsigned __int64)(unsigned int)CudaDriverData_1434ac0) {
        goto LABEL_49;
      }
    }
  }
  v9 = 1;
  v29 = 0;
  do {
    v30 = *((_QWORD*)&CudaDriverData_14347a8 + v29 + 35);
    if (((*(unsigned __int8 (**)(__int64))(v30 + 21520))(v30) != 0 ||
         CudaDriverRoutine_9aa40(v30)) &&
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v30 + 19824) + 96LL) + 321LL) != 0) {
      v9 = 0;
    }
    ++v29;
  } while (v29 < (unsigned int)CudaDriverData_1434ac0);
LABEL_49:
  if (v9 != 0) {
    return 101;
  }
  else {
    return 801;
  }
}

__int64 cuda_driver_1e7fa0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  bool v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  _BOOL4 v8;
  __int64 v9;
  int* v10;
  int v11;
  __int64 (*v12)(_DWORD*);
  __int64 v13;
  int v14;
  __int64 v15;
  _OWORD* v16;
  _OWORD* v17;
  __int64 v18;
  _DWORD* v19;
  unsigned __int8* v20;
  int v21;
  int v22;
  __int64 (*v23)(_DWORD*);
  __int64 v24;
  unsigned int v25;
  __int64 v26;
  int v28;
  _BYTE v29[256];
  __int64 v30;
  __int64 (*v31)();
  struct {
    __int64 v32;
    char gap376_[16];
    __int64 v33;
    int v34;
  } v32_;
  int v35;
  __int64 v36;
  __int64 v37;
  _BYTE* v38;
  _QWORD v39[2];
  _DWORD v40[11];
  struct {
    _DWORD v41[4];
    __int64* v42;
  } v41_;
  __int64 v43;
  _DWORD v44[7];

  v30 = 0;
  LODWORD(v39[0]) = 16;
  memset((char*)v39 + 4, 0, 12);
  v37 = 0;
  v36 = 0;
  v38 = nullptr;
  v35 = 28;
  v2 = CudaDriverData_1422bb0;
  v3 = (*(__int64 (**)(_QWORD*))((char*)((_UNKNOWN*)0x188LL) +
                                 CudaDriverData_1422bb0))(v39);
  if ((_DWORD)v3 == 0) {
    v5 = v39[1];
    result = 999;
    *(_QWORD*)(a1 + 704) = v39[1];
    goto LABEL_5;
  }
  v4 = (unsigned int)CudaDriverRoutine_1e9390(v3) != 0;
  v5 = v39[1];
  result = 999;
  *(_QWORD*)(a1 + 704) = v39[1];
  if (!v4) {
  LABEL_5:
    if (v5 == 0) {
      goto LABEL_43;
    }
    memset_plt(&v32_.v32, 0, 1176);
    v32_.v33 = v5;
    v37 = v5;
    v31 = CudaDriverData_14240f0[0];
    v38 = v29;
    v7 = (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0x190LL) + v2))(&v35);
    if ((_DWORD)v7 != 0) {
      v8 = CudaDriverRoutine_1e9390(v7) == 0;
      result = 100;
      if (!v8) {
        goto LABEL_42;
      }
    }
    else {
      result = 100;
    }
    v9 = v36;
    if (v36 == 0) {
    LABEL_42:
      v5 = *(_QWORD*)(a1 + 704);
      goto LABEL_43;
    }
    v10 = (int*)v29;
    v28 = 0;
    while (1) {
      v11 = *v10++;
      *(_QWORD*)&v44[3] = 0;
      *(_QWORD*)&v44[1] = 0;
      v44[0] = 20;
      v41_.v41[0] = 24;
      v41_.v42 = &v43;
      v32_.v34 = v11;
      v41_.v41[3] = v11;
      v12 = *(__int64 (**)(_DWORD*))((char*)((_UNKNOWN*)0x60LL) + v2);
      *(_QWORD*)&v41_.v41[1] = v32_.v33;
      v13 = v12(v41_.v41);
      if ((_DWORD)v13 != 0) {
        v14 = CudaDriverRoutine_1e9390(v13);
        v15 = v43;
        if (v43 != 0) {
          goto LABEL_36;
        }
        goto LABEL_38;
      }
      *(_QWORD*)&v44[1] = v43;
      v16 = (_OWORD*)CudaDriverStub_12e330(396);
      if (v16 == nullptr) {
        v14 = 2;
        v15 = v43;
        if (v43 != 0) {
          goto LABEL_36;
        }
        goto LABEL_38;
      }
      v17 = v16;
      *v16 = (__typeof__(*v16)){0};
      v16[1] = (__typeof__(v16[1])){0};
      v16[2] = (__typeof__(v16[2])){0};
      v16[3] = (__typeof__(v16[3])){0};
      *(_QWORD*)&v44[3] = v16;
      v16[4] = (__typeof__(v16[4])){0};
      v16[5] = (__typeof__(v16[5])){0};
      v16[6] = (__typeof__(v16[6])){0};
      v16[7] = (__typeof__(v16[7])){0};
      v16[8] = (__typeof__(v16[8])){0};
      v16[9] = (__typeof__(v16[9])){0};
      v16[10] = (__typeof__(v16[10])){0};
      v16[11] = (__typeof__(v16[11])){0};
      v16[12] = (__typeof__(v16[12])){0};
      v16[13] = (__typeof__(v16[13])){0};
      v16[14] = (__typeof__(v16[14])){0};
      v16[15] = (__typeof__(v16[15])){0};
      v16[16] = (__typeof__(v16[16])){0};
      v16[17] = (__typeof__(v16[17])){0};
      v16[18] = (__typeof__(v16[18])){0};
      v16[19] = (__typeof__(v16[19])){0};
      v16[20] = (__typeof__(v16[20])){0};
      v16[21] = (__typeof__(v16[21])){0};
      v16[22] = (__typeof__(v16[22])){0};
      v16[23] = (__typeof__(v16[23])){0};
      *(_OWORD*)((char*)v16 + 380) =
          (__typeof__(*(_OWORD*)((char*)v16 + 380))){0};
      v18 = (*(__int64 (**)(_DWORD*))((char*)((_UNKNOWN*)0x68LL) + v2))(v44);
      if ((_DWORD)v18 != 0) {
        v14 = CudaDriverRoutine_1e9390(v18);
        goto LABEL_35;
      }
      if (*((_DWORD*)v17 + 81) != 2) {
        v14 = 0;
        goto LABEL_35;
      }
      if (CudaDriverData_1434ce4 == 0) {
        break;
      }
      if (CudaDriverData_1435f10 != 0) {
        v19 = *((_DWORD**)v17 + 41);
        if (CudaDriverData_1435f14 == *v19 && CudaDriverData_1435f18 != 0 &&
            CudaDriverData_1435f1c == v19[1]) {
          v14 = 0;
          goto LABEL_33;
        }
      }
      if (CudaDriverData_1435f20 != 0) {
        v20 = *(unsigned __int8**)(*(_QWORD*)((char*)v17 + 292) + 12LL);
        snprintf_plt(v40, 41,
                     "%02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x%02x%"
                     "02x%02x%02x",
                     v20[4], v20[5], v20[6], v20[7], v20[8], v20[9], v20[10],
                     v20[11], v20[12], v20[13], v20[14], v20[15], v20[16],
                     v20[17], v20[18], v20[19]);
        v21 = strncmp_plt(&CudaDriverData_1435f25, v40, 41);
        v22 = v28;
        v14 = v21 != 0;
        if (v21 == 0) {
          v22 = 1;
        }
        goto LABEL_34;
      }
      v14 = 1;
    LABEL_35:
      *(_QWORD*)&v40[1] = v17;
      v40[0] = 12;
      (*(void (**)(_DWORD*))((char*)((_UNKNOWN*)0x70LL) + v2))(v40);
      v15 = v43;
      if (v43 != 0) {
      LABEL_36:
        *(_QWORD*)&v40[1] = v15;
        v23 = *(__int64 (**)(_DWORD*))((char*)((char*)0x20LL) + v2);
        v40[0] = 12;
        v24 = v23(v40);
        if ((_DWORD)v24 != 0) {
          v14 = CudaDriverRoutine_1e9390(v24);
        }
      }
    LABEL_38:
      if (v14 == 0) {
        result = CudaDriverRoutine_12ec80(a1, (void (**)(__int64))&v31, &v30);
        if ((_DWORD)result != 0) {
          goto LABEL_42;
        }
      }
      if (--v9 == 0) {
        if ((_BYTE)v28 != 0 || (*((unsigned __int8*)((_UNKNOWN*)0x1770LL) +
                                  (_QWORD)CudaDriverData_1422118) |
                                *((unsigned __int8*)((_UNKNOWN*)0x1778LL) +
                                  (_QWORD)CudaDriverData_1422118)) == 0) {
          return 0;
        }
        else {
          return 101;
        }
      }
    }
    v14 = (unsigned __int8)v28 != 0;
  LABEL_33:
    v22 = 1;
  LABEL_34:
    v28 = v22;
    goto LABEL_35;
  }
LABEL_43:
  if (v5 != 0) {
    v25 = result;
    *(_QWORD*)&v40[1] = v5;
    v40[0] = 12;
    v26 = (*(__int64 (**)(_DWORD*))((char*)((_UNKNOWN*)0x180LL) + v2))(v40);
    if ((_DWORD)v26 != 0) {
      CudaDriverRoutine_1e9390(v26);
    }
    *(_QWORD*)(a1 + 704) = 0;
    return v25;
  }
  return result;
}

__int64 cuda_driver_1e83e0(__int64 result)
{
  __int64 v1;
  struct {
    char gap0_[4];
    int v2;
    __int64 v3;
  } v2_;

  if (*(_QWORD*)(result + 704) != 0) {
    v2_.v3 = *(_QWORD*)(result + 704);
    v1 = result;
    v2_.v2 = 12;
    result = (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0x180LL) +
                                    CudaDriverData_1422bb0))(&v2_.v2);
    if ((_DWORD)result != 0) {
      result = CudaDriverRoutine_1e9390(result);
    }
    *(_QWORD*)(v1 + 704) = 0;
  }
  return result;
}

__int64* cuda_driver_1e85e0(__int64* result)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 i;
  __int64 v7;
  __int64 v8;
  struct {
    char gap0_[4];
    int v9;
    __int64 v10;
  } v9_;

  if (result != nullptr) {
    v1 = result;
    if (*result != 0) {
      v9_.v10 = *result;
      v9_.v9 = 12;
      v2 = (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0x15CLL) +
                                  CudaDriverData_1422bb0 + 4))(&v9_.v9);
      if ((_DWORD)v2 != 0) {
        CudaDriverRoutine_1e9390(v2);
      }
    }
    v3 = v1[4];
    if (v3 != 0) {
      v4 = *((unsigned int*)v1 + 10);
      if ((_DWORD)v4 != 0) {
        v5 = 0;
        for (i = 0; i < v4; ++i) {
          v7 = *(_QWORD*)(v1[4] + v5);
          if (v7 != 0) {
            CudaDriverRoutine_1a40e0(v7);
            v4 = *((unsigned int*)v1 + 10);
          }
          v5 += 32;
        }
        v3 = v1[4];
      }
      CudaDriverRoutine_12e340(v3);
      v8 = *(__int64*)((char*)v1 + 12);
      if (v8 != 0) {
        CudaDriverRoutine_12e340(v8);
      }
    }
    CudaDriverRoutine_107f60(v1 + 10);
    return (__int64*)CudaDriverRoutine_12e340((__int64)v1);
  }
  return result;
}

void cuda_driver_1e89d0()
{

#pragma clang fp contract(off)
  _OWORD* v0;
  _DWORD* v1;
  int v2;
  double v3;
  int v4;
  __int64 v5;
  int v6;
  struct {
    char gap0_[4];
    int v7;
    __int64 v8;
  } v7_;
  int v9;

  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v7_.v8 = 0;
  v7_.v7 = 12;
  v0 = (_OWORD*)CudaDriverStub_12e330(96),
  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  CudaDriverData_1435ed8 = (__int64)v0;
  if (v0 != nullptr) {
    *v0 = (__typeof__(*v0)){0};
    v0[1] = (__typeof__(v0[1])){0};
    v0[2] = (__typeof__(v0[2])){0};
    v0[3] = (__typeof__(v0[3])){0};
    v0[4] = (__typeof__(v0[4])){0};
    v0[5] = (__typeof__(v0[5])){0};
    v1 = (_DWORD*)CudaDriverData_1422bb0;
    memset_plt(CudaDriverData_1422bb0, 0, 864),
        v2 = COERCE_AS(__typeof__(v2),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    *v1 = 864;
    v3 = cuda_driver_64f80((__int64)v1),
    v2 = COERCE_AS(__typeof__(v2),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if (v2 <= 2 && (unsigned int)(v2 - 1) >= 2 && v2 == 0) {
      if (*(int*)((char*)((int*)0x4LL) + (_QWORD)v1) < 3u ||
          (v9 = 4,
           (v4 = (*(__int64 (**)(int*, double))((char*)((_UNKNOWN*)0x338LL) +
                                                (_QWORD)v1))(&v9, v3)) <= 2) &&
              (unsigned int)(v4 - 1) >= 2 && v4 == 0) {
        v5 = CudaDriverData_1435ed8;
        if (*(_BYTE*)(CudaDriverData_1435ed8 + 75) == 0) {
          v7_.v8 = CudaDriverData_1435ed8 + 88;
          v6 = (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0xB0LL) + (_QWORD)v1))(
              &v7_.v7),
          v2 = COERCE_AS(__typeof__(v2),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          if (v6 > 2 || (unsigned int)(v6 - 1) < 2 || v6 != 0) {
            CudaDriverRoutine_12e340(CudaDriverData_1435ed8),
                v2 = COERCE_AS(__typeof__(v2),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            CudaDriverData_1435ed8 = 0;
            return;
          }
          v5 = CudaDriverData_1435ed8;
        }
        CudaDriverRoutine_107f40((_QWORD*)(v5 + 24), 67, 0),
            v2 = COERCE_AS(__typeof__(v2),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        CudaDriverStub_107f90(CudaDriverData_1435ed8 + 24),
            v2 = COERCE_AS(__typeof__(v2),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        if ((unsigned int)CudaDriverRoutine_1a3f00(
                (__int64*)CudaDriverData_1435ed8, 0, -1, 1, 0) != 0 ||
            (unsigned int)CudaDriverRoutine_1e91e0() != 0) {
          CudaDriverStub_108070(CudaDriverData_1435ed8 + 24),
              v2 = COERCE_AS(__typeof__(v2),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          CudaDriverRoutine_1e8dc0(),
              v2 = COERCE_AS(__typeof__(v2),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
        else {
          CudaDriverStub_108070(CudaDriverData_1435ed8 + 24),
              v2 = COERCE_AS(__typeof__(v2),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          CudaDriverRoutine_107f40((_QWORD*)(CudaDriverData_1435ed8 + 56), 75,
                                   0),
              v2 = COERCE_AS(__typeof__(v2),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
      }
    }
  }
}

__int64 cuda_driver_1e8ee0(_QWORD* a1)
{
  void* v1;
  __int64 v2;
  __int64 result;
  __int64 v5;
  _QWORD* v6;
  unsigned int v7;
  struct {
    char gap8_[4];
    int v8;
    __int64 v9;
    __int64 v10;
  } v8_;

  v8_.v10 = 0;
  v8_.v8 = 20;
  v1 = CudaDriverData_1422118;
  v2 =
      *(_QWORD*)((char*)((_UNKNOWN*)0x1730LL) + (_QWORD)CudaDriverData_1422118);
  if (v2 == 0) {
    return 100;
  }
  if (*(_BYTE*)(v2 + 75) != 0) {
    return 0;
  }
  v5 = CudaDriverStub_12e330(8);
  if (v5 == 0) {
    return 2;
  }
  v6 = (_QWORD*)v5;
  v8_.v9 =
      *(_QWORD*)(*(_QWORD*)((char*)((_UNKNOWN*)0x1730LL) + (_QWORD)v1) + 88LL);
  result = CudaDriverData_14407d0(&v8_.v8);
  if ((int)result > 5) {
    if ((int)result > 16) {
      if ((_DWORD)result == 17) {
        v7 = 205;
        goto LABEL_31;
      }
      if ((_DWORD)result == 196625) {
        v7 = 100;
        goto LABEL_31;
      }
      if ((_DWORD)result != 196611) {
        goto LABEL_30;
      }
    }
    else {
      if ((_DWORD)result == 6) {
        v7 = 2;
        goto LABEL_31;
      }
      if ((_DWORD)result == 11) {
        goto LABEL_23;
      }
      if ((_DWORD)result != 15) {
      LABEL_30:
        v7 = 999;
        goto LABEL_31;
      }
    }
    v7 = 304;
    goto LABEL_31;
  }
  if ((int)result > 2) {
    if ((_DWORD)result == 3) {
      v7 = 3;
      goto LABEL_31;
    }
    if ((_DWORD)result != 4) {
      v7 = 702;
      goto LABEL_31;
    }
  LABEL_23:
    v7 = 1;
    goto LABEL_31;
  }
  if ((unsigned int)(result - 1) >= 2) {
    if ((_DWORD)result == 0) {
      *v6 = v8_.v10;
      *a1 = v6;
      return result;
    }
    goto LABEL_30;
  }
  v7 = 801;
LABEL_31:
  CudaDriverRoutine_12e340((__int64)v6);
  return v7;
}

__int64 cuda_driver_1e9120()
{
  __int64 v0;
  int v3;
  char v5;
  struct {
    char gap256_[4];
    int v6;
    __int64 v7;
    __int64 v8;
    char* v9;
  } v6_;
  _QWORD v10[2];

  LODWORD(v10[0]) = 16;
  memset((char*)v10 + 4, 0, 12);
  v6_.v7 = 0;
  v6_.v6 = 28;
  v0 = CudaDriverData_1422bb0;
  if ((*(unsigned int (**)(_QWORD*))((char*)((_UNKNOWN*)0x188LL) +
                                     CudaDriverData_1422bb0))(v10) != 0 ||
      v10[1] == 0) {
    return 999;
  }
  v6_.v8 = v10[1];
  v6_.v9 = &v5;
  v3 = (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0x190LL) + v0))(&v6_.v6);
  if (v6_.v7 != 0 && v3 == 0) {
    return 0;
  }
  else {
    return 100;
  }
}

__int64 cuda_driver_1e9ac0(__int64 a1, __int64* a2, __int64 a3, _QWORD* a4)
{
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v25;
  _DWORD* v26;
  int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  unsigned int (*v31)(_DWORD*);
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  int v44;
  int v46;
  struct {
    _DWORD v47[2];
    int v48;
  } v47_;
  struct {
    _BYTE v49[24];
    int v50;
    int v51;
    __int64 v52;
    int v53;
    int v54;
  } v49_;

  if ((*((_BYTE*)a2 + 2) & 0x80) != 0) {
    v15 = 801;
    goto LABEL_70;
  }
  v8 = CudaDriverRoutine_12e510(1, 24);
  a4[26] = v8;
  if (v8 == 0) {
    v15 = 2;
    goto LABEL_70;
  }
  v9 = (_QWORD*)v8;
  if (a4[21] != 0) {
    v10 = a4[21];
  }
  else {
    v10 = (__int64)a4;
  }
  CudaDriverStub_107f90(**(_QWORD**)(a1 + 2000) + 80LL);
  v11 = *(_QWORD*)(*(_QWORD*)(v10 + 208) + 8LL);
  if (v11 != 0) {
    while (*(_QWORD*)(v11 + 48) != **(_QWORD**)(a1 + 2000)) {
      v11 = *(_QWORD*)(v11 + 80);
      if (v11 == 0) {
        goto LABEL_9;
      }
    }
    v15 = 0;
    v19 = *(_DWORD*)(v11 + 88) + 1;
    goto LABEL_69;
  }
LABEL_9:
  a2[1] &= ~0x40000000uLL;
  v12 = CudaDriverRoutine_12e510(1, 96);
  v11 = v12;
  if (v12 == 0) {
    v15 = 2;
    CudaDriverStub_108070(**(_QWORD**)(a1 + 2000) + 80LL);
    *v9 = 0;
    goto LABEL_70;
  }
  *(_BYTE*)(v12 + 16) = 0;
  *(_QWORD*)(v12 + 64) = v10;
  *(_QWORD*)(v12 + 80) = *(_QWORD*)(*(_QWORD*)(v10 + 208) + 8LL);
  *(_QWORD*)(*(_QWORD*)(v10 + 208) + 8LL) = v12;
  v13 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v12 + 64) + 208LL) + 8LL);
  v14 = *(_QWORD*)(v13 + 80);
  if (v14 != 0) {
    *(_QWORD*)(v14 + 72) = v13;
  }
  v15 = 999;
  v16 = 0;
  *(_QWORD*)(v12 + 48) = **(_QWORD**)(a1 + 2000);
  v17 = ((unsigned __int64)*a2 >> 35) & 0x1F;
  if ((((unsigned __int64)*a2 >> 35) & 0x1F) <= 1) {
    if ((_DWORD)v17 != 0) {
      if ((_DWORD)v17 != 1) {
        goto LABEL_33;
      }
      v15 = 0;
      v16 = 0;
      v20 = 2;
    }
    else {
      if ((*a2 & 0x4000000000000LL) != 0) {
      LABEL_32:
        v15 = 0;
        v16 = 0;
        a3 = (unsigned __int64)(a3 +
                                *(_QWORD*)((char*)((_UNKNOWN*)0x1098LL) +
                                           (_QWORD)CudaDriverData_1422118) -
                                1) /
             *(_QWORD*)((char*)((_UNKNOWN*)0x1098LL) +
                        (_QWORD)CudaDriverData_1422118) *
             *(_QWORD*)((char*)((_UNKNOWN*)0x1098LL) +
                        (_QWORD)CudaDriverData_1422118);
        *(_QWORD*)(v12 + 24) = *(_QWORD*)(*(_QWORD*)(v10 + 184) + 24LL);
        *(_QWORD*)(v12 + 32) = a3;
        *(_DWORD*)v12 = 1;
        *(_DWORD*)(v12 + 20) = 1;
        goto LABEL_33;
      }
      v20 = 3;
      v15 = 0;
      v16 = 0;
    }
    *(_DWORD*)v12 = v20;
    goto LABEL_33;
  }
  switch ((_DWORD)v17) {
  case 2:
    v15 = 0;
    v16 = 0;
    *(_DWORD*)v12 = 1;
    *(_DWORD*)(v12 + 20) = 1;
    *(_QWORD*)(v12 + 24) = a2[12];
    break;
  case 4:
    goto LABEL_32;
  case 3:
    v16 = **(_QWORD**)(v10 + 208);
    *(_DWORD*)v12 = 4;
    if ((*a2 & 7) == 1) {
      v18 = 5;
    }
    else {
      v18 = 4;
    }
    *(_DWORD*)v12 = v18;
    v15 = 0;
    if ((*(_BYTE*)(v10 + 243) & 3) != 0) {
      *(_DWORD*)(v12 + 20) = 1;
      *(_QWORD*)(v12 + 24) = *(_QWORD*)(v10 + 104);
    }
    else {
      *(_DWORD*)(v12 + 20) = 0;
      *(_QWORD*)(v12 + 24) = 0;
    }
    break;
  default:
    break;
  }
LABEL_33:
  v21 = CudaDriverStub_12e320(v12);
  v25 = *a2;
  *((_DWORD*)a2 + 90) = v21;
  if ((v25 & 0x7C000007) == 2) {
    LODWORD(v21) = *(_DWORD*)(a1 + 64);
  }
  else {
    if ((v25 & 0x7C000000) == 0) {
      goto LABEL_43;
    }
    v26 = *(_DWORD**)(v10 + 632);
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v26 + 19824LL) + 96LL) +
                  266LL) != 0) {
      CudaDriverRoutine_1ec5e0(v10, (__int64*)v49_.v49);
      LODWORD(v21) = *(_DWORD*)(*(_QWORD*)v49_.v49 + 56LL);
    }
    else if ((v25 & 7) == 2) {
      LODWORD(v21) = v26[16];
    }
    else {
      LODWORD(v21) = CudaDriverStub_12e320(v21);
    }
  }
  *((_DWORD*)a2 + 90) = v21;
LABEL_43:
  v27 = *(_DWORD*)v11;
  if (*(int*)v11 <= 2) {
    if (v27 != 1) {
      if (v27 != 2) {
        goto LABEL_83;
      }
      v32 = *((_DWORD*)a2 + 57);
      if (v32 == 0) {
        v28 = *((_DWORD*)a2 + 55);
        v29 = v11 + 4;
        v30 = CudaDriverData_1422bb0;
        if (*(unsigned int*)((char*)((int*)0x4LL) + CudaDriverData_1422bb0) >=
            5) {
          goto LABEL_48;
        }
      LABEL_78:
        *(_QWORD*)&v49_.v49[8] = v29;
        *(_DWORD*)v49_.v49 = 16;
        *(_DWORD*)&v49_.v49[4] = v28;
        v46 = (*(__int64 (**)(_BYTE*))((char*)((_UNKNOWN*)0x258LL) + v30))(
            v49_.v49);
        goto LABEL_80;
      }
      *(_DWORD*)(v11 + 4) = v32;
      *(_QWORD*)(v11 + 8) = a3;
      *(_BYTE*)(v11 + 16) = 1;
      if (v15 != 0) {
        goto LABEL_84;
      }
    LABEL_68:
      v19 = 1;
    LABEL_69:
      *(_DWORD*)(v11 + 88) = v19;
      CudaDriverStub_108070(**(_QWORD**)(a1 + 2000) + 80LL);
      *v9 = v11;
      a4[16] = *(_QWORD*)(*(_QWORD*)a4[26] + 8LL);
      return v15;
    }
    v37 = *(_QWORD*)a1;
  LABEL_67:
    v15 = CudaDriverRoutine_1ec800(v37, a2, a3, v11);
    if (v15 != 0) {
      goto LABEL_84;
    }
    goto LABEL_68;
  }
  if (v27 == 3) {
    if ((*a2 & 7) == 2) {
      v33 = *(_QWORD*)(*(_QWORD*)a1 + 19824LL);
      if (*(_QWORD*)(*(_QWORD*)(v33 + 96) + 80LL) != 0) {
        v34 = *(_QWORD*)(v33 + 88);
        v35 = a2[1];
        v15 = 2;
        *(_DWORD*)v49_.v49 = 48;
        *(_DWORD*)&v49_.v49[12] = 2;
        v49_.v50 = 2;
        v49_.v51 = v21;
        v49_.v52 = v11 + 4;
        *(_QWORD*)&v49_.v49[4] = v34;
        *(_QWORD*)&v49_.v49[16] =
            (a3 + (unsigned __int64)(unsigned int)(v21 - 1)) /
            (unsigned int)v21 * (unsigned int)v21;
        if ((v35 & 0x600) == 0x200) {
          v36 = 3;
        }
        else {
          v36 = 2;
        }
        v49_.v53 = 0;
        v49_.v54 = v36;
        if ((unsigned int)CudaDriverData_14409b8(v49_.v49) == 0) {
          if (*(_DWORD*)(v11 + 4) == 0) {
            v15 = 999;
            goto LABEL_84;
          }
          v15 = 0;
          *(_QWORD*)(v11 + 8) = *(_QWORD*)&v49_.v49[16];
          goto LABEL_68;
        }
        goto LABEL_83;
      }
    }
    v37 = *(_QWORD*)a1;
    goto LABEL_67;
  }
  if (v27 == 4) {
    *(_QWORD*)(v11 + 8) = *(_QWORD*)(v16 + 8);
    *(_DWORD*)(v11 + 4) = *(_DWORD*)(v16 + 4);
    if (v15 != 0) {
      goto LABEL_84;
    }
    goto LABEL_68;
  }
  if (v27 != 5) {
    goto LABEL_83;
  }
  v28 = *(_DWORD*)(v16 + 4);
  v29 = v11 + 4;
  v30 = CudaDriverData_1422bb0;
  if (*(unsigned int*)((char*)((int*)0x4LL) + CudaDriverData_1422bb0) < 5) {
    goto LABEL_78;
  }
LABEL_48:
  v47_.v47[0] = 12;
  v47_.v47[1] = v28;
  v31 = *(unsigned int (**)(_DWORD*))((char*)((_UNKNOWN*)0x350LL) + v30);
  v47_.v48 = 0;
  *(_DWORD*)v49_.v49 = 20;
  if (v31(v47_.v47) == 0) {
    *(_QWORD*)&v49_.v49[12] = v29;
    *(_DWORD*)&v49_.v49[4] = v28;
    *(_DWORD*)&v49_.v49[8] = v47_.v48;
    v46 =
        (*(__int64 (**)(_BYTE*))((char*)((_UNKNOWN*)0x358LL) + v30))(v49_.v49);
  LABEL_80:
    *(_QWORD*)(v11 + 8) = a3;
    if (v46 != 0) {
      v15 = 999;
    }
    else {
      v15 = 0;
    }
  LABEL_83:
    if (v15 != 0) {
      goto LABEL_84;
    }
    goto LABEL_68;
  }
  v15 = 999;
  *(_QWORD*)(v11 + 8) = a3;
LABEL_84:
  CudaDriverRoutine_1ec4e0(v11);
  CudaDriverStub_108070(**(_QWORD**)(a1 + 2000) + 80LL);
  *v9 = 0;
LABEL_70:
  *(_DWORD*)v49_.v49 = 12;
  if (a4[26] != 0) {
    *(_QWORD*)&v49_.v49[4] = ***(_QWORD***)(a4[79] + 2000LL);
    CudaDriverData_1440948(v49_.v49);
    v38 = (__int64*)a4[26];
    v39 = *v38;
    if (*v38 != 0) {
      v40 = *(_QWORD*)(v39 + 48);
      CudaDriverStub_107f90(v40 + 80);
      v44 = *(_DWORD*)(v39 + 88) - 1;
      *(_DWORD*)(v39 + 88) = v44;
      if (v44 == 0) {
        CudaDriverRoutine_1ec4e0(v39);
      }
      CudaDriverStub_108070(v40 + 80);
      v38 = (__int64*)a4[26];
    }
    CudaDriverRoutine_12e340((__int64)v38);
    a4[26] = 0;
  }
  return v15;
}

__int64 cuda_driver_1ea080(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  int v8;
  struct {
    char gap0_[4];
    int v9;
    __int64 v10;
  } v9_;

  v9_.v9 = 12;
  if (*(_QWORD*)(result + 208) != 0) {
    v1 = result;
    v9_.v10 = ***(_QWORD***)(*(_QWORD*)(result + 632) + 2000LL);
    CudaDriverData_1440948_alt1(&v9_.v9);
    v2 = *(__int64**)(v1 + 208);
    v3 = *v2;
    if (*v2 != 0) {
      v4 = *(_QWORD*)(v3 + 48);
      CudaDriverStub_107f90(v4 + 80);
      v8 = *(_DWORD*)(v3 + 88) - 1;
      *(_DWORD*)(v3 + 88) = v8;
      if (v8 == 0) {
        CudaDriverRoutine_1ec4e0(v3);
      }
      CudaDriverStub_108070(v4 + 80);
      v2 = *(__int64**)(v1 + 208);
    }
    result = CudaDriverRoutine_12e340((__int64)v2);
    *(_QWORD*)(v1 + 208) = 0;
  }
  return result;
}

__int64 cuda_driver_1ea9c0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    char gap0_[4];
    int v10;
    __int64 v11;
  } v10_;

  v1 = *(_QWORD*)(result + 208);
  v2 = result;
  v3 = *(_QWORD*)(v1 + 16);
  if (v3 != 0) {
    v4 = *(_QWORD*)(*(_QWORD*)(v3 + 24) + 16LL);
    CudaDriverStub_107f90(v4 + 80);
    v5 = *(_DWORD*)(v3 + 56) - 1;
    *(_DWORD*)(v3 + 56) = v5;
    if (v5 != 0) {
    LABEL_14:
      result = CudaDriverStub_108070(v4 + 80);
      v1 = *(_QWORD*)(v2 + 208);
      goto LABEL_15;
    }
    v6 = *(_QWORD*)v3;
    v7 = *(_QWORD*)(v3 + 32);
    if (v7 != 0) {
      CudaDriverRoutine_1a4580(v7);
    }
    if (*(_QWORD*)(v3 + 64) != 0) {
      v10_.v11 = *(_QWORD*)(v3 + 64);
      v10_.v10 = 12;
      (*(void (**)(int*))((char*)((_UNKNOWN*)0x240LL) +
                          CudaDriverData_1422bb0))(&v10_.v10);
    }
    if (*(_QWORD*)(v6 + 56) == v3) {
      v8 = *(_QWORD*)(v3 + 16);
      *(_QWORD*)(v6 + 56) = v8;
      if (v8 != 0) {
        v9 = 0;
        goto LABEL_12;
      }
    }
    else {
      v8 = *(_QWORD*)(v3 + 16);
      *(_QWORD*)(*(_QWORD*)(v3 + 8) + 16LL) = v8;
      if (v8 != 0) {
        v9 = *(_QWORD*)(v3 + 8);
      LABEL_12:
        *(_QWORD*)(v8 + 8) = v9;
      }
    }
    *(_QWORD*)(v3 + 8) = 0;
    *(_QWORD*)(v3 + 16) = 0;
    CudaDriverRoutine_12e340(v3);
    goto LABEL_14;
  }
LABEL_15:
  *(_QWORD*)(v1 + 16) = 0;
  *(_QWORD*)(v2 + 112) = 0;
  return result;
}

__int64 cuda_driver_1ead40(_QWORD* a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  _DWORD v9[3];
  __int128 v10;

  CudaDriverStub_107f90_alt1(a1 + 16);
  *(_QWORD*)(a2 + 8) =
      CudaDriverStub_12d100(**(_QWORD**)(*(_QWORD*)(a1[11] + 64LL) + 8LL));
  *(_QWORD*)(a2 + 16) = CudaDriverRoutine_1a4bc0(
      **(_QWORD**)(*(_QWORD*)(a1[11] + 64LL) + 8LL), nullptr);
  *(float*)a2 =
      CudaDriverRoutine_1a46a0(**(_QWORD**)(*(_QWORD*)(a1[11] + 64LL) + 8LL));
  CudaDriverStub_108070_alt1(a1 + 16);
  v4 = *(_QWORD*)(*a1 + 19824LL);
  if (*(_QWORD*)(*(_QWORD*)(v4 + 96) + 80LL) != 0) {
    v5 = *(_QWORD*)(v4 + 88);
    *(_QWORD*)&v10 = 0;
    v9[0] = 20;
    *(_QWORD*)&v9[1] = v5;
    result = CudaDriverData_14408c0(v9);
    if ((_DWORD)result != 0) {
      return 999;
    }
    else {
      v8 = v10;
      *(_QWORD*)(a2 + 24) =
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*a1 + 19824LL) + 96LL) + 80LL);
      *(_QWORD*)(a2 + 32) = v8;
    }
  }
  else {
    v9[2] = 1;
    v10 = (__typeof__(v10)){0};
    *(_QWORD*)v9 = 0x20000001CLL;
    v7 = (*(__int64 (**)(_DWORD*))((char*)((_UNKNOWN*)0x2E8LL) +
                                   CudaDriverData_1422bb0))(v9);
    if ((_DWORD)v7 != 0 &&
        (_DWORD)(result = CudaDriverRoutine_1e9390(v7)) != 0) {
      *(_QWORD*)(a2 + 24) = 0;
      *(_QWORD*)(a2 + 32) = 0;
    }
    else {
      *(_OWORD*)(a2 + 24) = v10;
      return 0;
    }
  }
  return result;
}

__int64 cuda_driver_1eafa0(__int64* a1)
{
  __int64 v1;
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  int v7;
  void* v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v33;
  __int64 v34;
  int v35;
  int v36;
  __int64 v37;

  v1 = *a1;
  v3 = CudaDriverStub_1dbab0(*a1);
  v4 = CudaDriverStub_1db1a0(v1);
  v5 = CudaDriverStub_1dbf90(v1);
  v6 = **(_QWORD**)(CudaDriverStub_1dbfc0(v1) + 632);
  v7 = *(_DWORD*)(**(_QWORD**)(CudaDriverStub_1dbfc0(v1) + 208) + 4LL);
  v8 = CudaDriverData_1422118;
  CudaDriverStub_107f90(*(_QWORD*)((char*)((_UNKNOWN*)0x1730LL) +
                                   (_QWORD)CudaDriverData_1422118) +
                        24LL);
  v9 = **(_QWORD**)((char*)((_UNKNOWN*)0x1730LL) + (_QWORD)v8);
  if (*((_BYTE*)a1 + 11) == 0 && *((_BYTE*)a1 + 12) == 0) {
    if (*((_BYTE*)a1 + 9) != 0) {
      v19 = *((_BYTE*)a1 + 10) == 0;
      if (*((_BYTE*)a1 + 10) != 0) {
        v20 = 4;
      }
      else {
        v20 = 1;
      }
      if (*((_BYTE*)a1 + 13) != 0) {
        v21 = 3;
      }
      else {
        v21 = v20;
      }
      v22 = CudaDriverRoutine_1a47a0(
          **(_QWORD**)((char*)((_UNKNOWN*)0x1730LL) + (_QWORD)v8), v3);
      if (v22 == 0) {
        goto LABEL_34;
      }
    }
    else {
      if (*((_BYTE*)a1 + 10) == 0) {
        goto LABEL_39;
      }
      v19 = 0;
      if (*((_BYTE*)a1 + 8) != 0) {
        v21 = 4;
      }
      else {
        v21 = 2;
      }
      v22 = CudaDriverRoutine_1a47a0(
          **(_QWORD**)((char*)((_UNKNOWN*)0x1730LL) + (_QWORD)v8), v3);
      if (v22 == 0) {
        goto LABEL_34;
      }
    }
    v30 = v22;
    if (v5 > CudaDriverStub_12d100(v22)) {
      goto LABEL_34;
    }
    v31 = v5 + v3 - CudaDriverStub_f0f50(v30);
    if (v31 > CudaDriverStub_12d100(v30)) {
      goto LABEL_34;
    }
    v33 = CudaDriverStub_1a4c80(v30);
    if (*(_DWORD*)(v33 + 32) != v21) {
      *(_DWORD*)(v33 + 32) = v21;
    }
    if (*(unsigned __int8*)(v33 + 36) != v19) {
      v34 = *(_QWORD*)(v6 + 19824);
      v11 = 0;
      v35 = *(_DWORD*)(v34 + 72);
      if (v19 != 0) {
        v36 = v35 + 1;
      }
      else {
        v36 = v35 - 1;
      }
      *(_DWORD*)(v34 + 72) = v36;
      *(_BYTE*)(v33 + 36) = v19;
      goto LABEL_35;
    }
  LABEL_39:
    v11 = 0;
    goto LABEL_35;
  }
  v10 = CudaDriverStub_1dbab0(v1);
  if ((unsigned int)CudaDriverStub_4f840(v10) != 0) {
    v11 = 304;
    goto LABEL_35;
  }
  if (*((_BYTE*)a1 + 11) == 0) {
    v23 = CudaDriverRoutine_1a47a0(v9, v3);
    if (v23 != 0) {
      v24 = v23;
      if (v5 <= CudaDriverStub_12d100(v23)) {
        v25 = v5 + v3 - CudaDriverStub_f0f50(v24);
        if (v25 <= CudaDriverStub_12d100(v24)) {
          v26 = CudaDriverStub_1a4c80(v24);
          CudaDriverRoutine_1a4580(v24);
          v27 = *(_QWORD*)((char*)((_UNKNOWN*)0x1730LL) + (_QWORD)v8);
          if (*(_QWORD*)(v27 + 8) == v26) {
            *(_QWORD*)(v27 + 8) = *(_QWORD*)(v26 + 40);
            v28 = *(
                _QWORD*)(*(_QWORD*)((char*)((_UNKNOWN*)0x1730LL) + (_QWORD)v8) +
                         8LL);
            if (v28 != 0) {
              v29 = 0;
              goto LABEL_46;
            }
          }
          else {
            v28 = *(_QWORD*)(v26 + 40);
            *(_QWORD*)(*(_QWORD*)(v26 + 48) + 40LL) = v28;
            if (v28 != 0) {
              v29 = *(_QWORD*)(v26 + 48);
            LABEL_46:
              *(_QWORD*)(v28 + 48) = v29;
            }
          }
          *(_QWORD*)(v26 + 40) = 0;
          *(_QWORD*)(v26 + 48) = 0;
          CudaDriverRoutine_12e340(v26);
          v11 = 0;
          --*(_DWORD*)(*(_QWORD*)((char*)((_UNKNOWN*)0x1730LL) + (_QWORD)v8) +
                       16LL);
          goto LABEL_35;
        }
      }
    }
  LABEL_34:
    v11 = 999;
    goto LABEL_35;
  }
  v37 = 0;
  v12 = CudaDriverRoutine_12e510(1, 56);
  if (v12 != 0) {
    *(_DWORD*)v12 = v7;
    *(_QWORD*)(v12 + 8) = v3;
    *(_QWORD*)(v12 + 16) = v4;
    v13 = v12;
    v14 = *(_QWORD*)((char*)((_UNKNOWN*)0x1098LL) + (_QWORD)v8);
    *(_DWORD*)(v12 + 32) = 0;
    *(_BYTE*)(v12 + 36) = 0;
    v15 = (v5 + v14 - 1) / v14 * v14;
    *(_QWORD*)(v12 + 24) = v15;
    v11 = CudaDriverRoutine_1a4420((__int64)&v37, v9, v15, v3);
    if (v11 == 0) {
      CudaDriverStub_1a4c70(v37, v13);
      *(_QWORD*)(v13 + 40) = *(
          _QWORD*)(*(_QWORD*)((char*)((_UNKNOWN*)0x1730LL) + (_QWORD)v8) + 8LL);
      *(_QWORD*)(*(_QWORD*)((char*)((_UNKNOWN*)0x1730LL) + (_QWORD)v8) + 8LL) =
          v13;
      v16 = *(_QWORD*)((char*)((_UNKNOWN*)0x1730LL) + (_QWORD)v8);
      v17 = *(_QWORD*)(v16 + 8);
      v18 = *(_QWORD*)(v17 + 40);
      if (v18 != 0) {
        *(_QWORD*)(v18 + 48) = v17;
        v16 = *(_QWORD*)((char*)((_UNKNOWN*)0x1730LL) + (_QWORD)v8);
      }
      ++*(_DWORD*)(v16 + 16);
      v11 = CudaDriverRoutine_1e91e0();
    }
  }
  else {
    v11 = 2;
  }
LABEL_35:
  CudaDriverStub_108070(*(_QWORD*)((char*)((_UNKNOWN*)0x1730LL) + (_QWORD)v8) +
                        24LL);
  return v11;
}

__int64 cuda_driver_1eb320(__int64 a1, _DWORD* a2)
{
  unsigned int v3;
  __int64 v4;
  __int64 result;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 (*v12)(int*);
  int v13;
  int v14;
  int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  int v24;
  _BYTE v25[28];
  __int128 v26;
  int v27;

  if (*a2 != 1) {
    if (*a2 != 8) {
      return 801;
    }
    v3 = *(_DWORD*)(a1 + 100);
    v4 = a1 + 104;
    if ((unsigned int)CudaDriverData_144071c < 5) {
      *(_QWORD*)&v25[4] = a1 + 104;
      v24 = 16;
      *(_DWORD*)v25 = v3;
      ((void (*)(int*))CudaDriverData_1440970)(&v24);
    }
    else {
      v18 = v3;
      v17 = 12;
      v24 = 20;
      if ((unsigned int)CudaDriverData_1440a68(&v17) != 0) {
        return 0;
      }
      *(_QWORD*)&v25[8] = v4;
      *(_DWORD*)v25 = v3;
      *(_DWORD*)&v25[4] = HIDWORD(v18);
      ((void (*)(int*))CudaDriverData_1440a70)(&v24);
    }
    return 0;
  }
  v6 = a2[2];
  v17 = 0;
  v24 = 16;
  *(_QWORD*)v25 = &v17;
  *(_DWORD*)&v25[8] = v6;
  v7 = CudaDriverData_1422bb0;
  v8 = (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0x268LL) +
                              CudaDriverData_1422bb0))(&v24);
  if ((_DWORD)v8 != 0) {
    result = CudaDriverRoutine_1e9390(v8);
    if ((_DWORD)result != 0) {
      return result;
    }
  }
  else {
    close_plt(v6);
    *(_DWORD*)(a1 + 100) = v17;
  }
  v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 64LL) + 19824LL);
  if (*(_BYTE*)(*(_QWORD*)(v9 + 96) + 321LL) != 1) {
    return 101;
  }
  v10 = *(_QWORD*)(v9 + 88);
  v11 = *(_DWORD*)(a1 + 100);
  v27 = 1;
  *(_QWORD*)&v25[4] = v10;
  v12 = *(__int64 (**)(int*))((char*)((_UNKNOWN*)0x330LL) + v7);
  v26 = (__typeof__(v26)){0};
  *(_OWORD*)&v25[12] = (__typeof__(*(_OWORD*)&v25[12])){0};
  v24 = 52;
  *(_DWORD*)v25 = v11;
  result = v12(&v24);
  if ((_DWORD)result == 0) {
    v13 = v25[12];
    v14 = v25[24];
    *(_BYTE*)(a1 + 26) = v25[12];
    if (v14 == 0) {
      return 0;
    }
    v18 = 0;
    v17 = 36;
    v15 = v13 != 0 ? 3 : 2;
    v19 = 0;
    v20 = v15;
    v16 = *(_QWORD*)(a1 + 8);
    LOBYTE(v19) = 1;
    *(_WORD*)((char*)&v18 + 5) = 257;
    v23 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v16 + 64) + 19824LL) + 88LL);
    LODWORD(v16) = *(_DWORD*)(a1 + 100);
    v21 = v27;
    v22 = v16;
    result = (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0x328LL) + v7))(&v17);
    if ((_DWORD)result == 0) {
      return result;
    }
  }
  return CudaDriverRoutine_1e9390(result);
}

__int64 cuda_driver_1eb630(__int64 a1, _DWORD* a2)
{
  unsigned int v4;
  __int64 v5;
  __int64 result;
  struct {
    char gap8_[4];
    int v7;
    int* v8;
    unsigned int v9;
  } v7_;
  int v10;

  CudaDriverRoutine_9aa20(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 64LL));
  if ((*a2 | 8) != 9) {
    return 801;
  }
  v4 = a2[2];
  v10 = 0;
  v7_.v7 = 16;
  v7_.v8 = &v10;
  v7_.v9 = v4;
  v5 = (*(__int64 (**)(int*))((char*)((_UNKNOWN*)0x268LL) +
                              CudaDriverData_1422bb0))(&v7_.v7);
  if ((_DWORD)v5 == 0) {
    close_plt(v4);
    *(_DWORD*)(a1 + 32) = v10;
    goto LABEL_7;
  }
  result = CudaDriverRoutine_1e9390(v5);
  if ((_DWORD)result == 0) {
  LABEL_7:
    *(_DWORD*)(a1 + 24) = 1;
    return 0;
  }
  return result;
}

__int64 cuda_driver_1eb7c0(__int64 a1, _DWORD* a2, __int64 a3, int a4)
{
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 result;
  __int64 v12;
  __int64 (*v13)(int*);
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;

  v19 = 8;
  v8 = CudaDriverData_1422bb0;
  v9 = (*(__int64 (**)(__int64*))((char*)((_UNKNOWN*)0x198LL) +
                                  CudaDriverData_1422bb0))(&v19);
  if ((_DWORD)v9 != 0) {
    CudaDriverRoutine_1e9390(v9);
  }
  *(_DWORD*)(a1 + 128) = HIDWORD(v19);
  *(_DWORD*)(a1 + 132) = a2[9];
  *(_QWORD*)(a1 + 16) = (unsigned int)a2[7];
  v10 = a2[5];
  if (v10 != 0) {
    result = 0;
    *(_DWORD*)(a1 + 136) = v10;
  }
  else {
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v14 = 32;
    if (a4 != 1) {
      if (a4 != 0) {
        return 801;
      }
      a4 = 2;
    }
    v12 = *(_QWORD*)(a3 + 19824);
    v17 = a1 + 136;
    v13 = *(__int64 (**)(int*))((char*)((_UNKNOWN*)0x2A8LL) + v8);
    LODWORD(v16) = a4;
    v15 = *(_QWORD*)(v12 + 88);
    result = v13(&v14);
    if ((_DWORD)result != 0) {
      return CudaDriverRoutine_1e9390(result);
    }
  }
  return result;
}

__int64 cuda_driver_1eb930(int a1)
{
  _DWORD v2[2];

  v2[0] = 8;
  v2[1] = a1;
  return (*(__int64 (**)(_DWORD*))((char*)((_UNKNOWN*)0x260LL) +
                                   CudaDriverData_1422bb0))(v2);
}

__int64 cuda_driver_1ebbd0(__int64 a1, __int64* a2, __int64* a3, __int64 a4,
                           __int64 a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 (*v13)(__int64, int*);
  __int64 v14;
  __int64* v15;
  unsigned int v16;
  __int64 v17;
  unsigned int v18;
  __int64 result;
  unsigned int v20;
  __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  unsigned int v27;
  __int64 v28;
  _QWORD v29[8];
  struct {
    char gap64_[12];
    _BYTE v30[36];
    __int128 v31;
    int v32;
  } v30_;
  struct {
    char gap128_[4];
    int v33;
    __int64 v34;
  } v33_;

  *a2 = 0;
  v30_.v32 = 0;
  v30_.v31 = (__typeof__(v30_.v31)){0};
  memset(&v30_.v30[4], 0, 32);
  *(_DWORD*)v30_.v30 = 56;
  memset(v29, 0, sizeof(v29));
  v10 = CudaDriverRoutine_12e510(1, 64);
  if (v10 == 0) {
    return 2;
  }
  v11 = v10;
  v12 = CudaDriverData_1422bb0;
  if (*(_BYTE*)(a5 + 17) != 0 ||
      (v17 = *(_QWORD*)(a1 + 19824), (v20 = *(_DWORD*)(v17 + 24)) == 0)) {
    v13 = *(__int64 (**)(__int64, int*))(a1 + 19456);
    v14 = CudaDriverStub_12e320(v10);
    v15 = (__int64*)v13(v14, &v33_.v33);
    if ((_DWORD)v15 != 0) {
      goto LABEL_19;
    }
    v16 = CudaDriverStub_12e320(v15);
    v17 = *(_QWORD*)(a1 + 19824);
    v18 = v16;
  }
  else if (*(_DWORD*)(v17 + 28) <= v20) {
    v18 = *(_DWORD*)(v17 + 24);
  }
  else {
    v18 = *(_DWORD*)(v17 + 28);
  }
  *(_QWORD*)(v11 + 16) = *(_QWORD*)(v17 + 8);
  v15 = (__int64*)CudaDriverRoutine_1e8440(a1, v18);
  if (v15 != nullptr) {
    if (a3 != nullptr) {
      v21 = *a3;
      v22 = 1;
    }
    else {
      v22 = 0;
      v21 = 0;
    }
    v29[2] = v21;
    LOBYTE(v29[1]) = v22;
    v29[0] = (a4 + v18 - 1) & -(__int64)v18;
    LODWORD(v15) = CudaDriverRoutine_1a4510(v11 + 8, *v15, (__int64)v29);
    if ((_DWORD)v15 == 0) {
      *(_QWORD*)&v30_.v31 = CudaDriverStub_f0f50(*(_QWORD*)(v11 + 8));
      v30_.v30[32] = 1;
      v23 = **(_QWORD**)(v11 + 16);
      *(_DWORD*)&v30_.v30[12] = v18;
      *(_QWORD*)&v30_.v30[4] =
          ((a4 + v18 - 1) & (unsigned __int64)-(__int64)v18) / v18;
      *(_QWORD*)&v30_.v30[24] = v11 + 40;
      *(_QWORD*)&v30_.v30[16] = v23;
      v24 = (*(__int64 (**)(_BYTE*))((char*)((_UNKNOWN*)0x2E0LL) + v12))(
          v30_.v30);
      if ((_DWORD)v24 != 0) {
        LODWORD(v15) = CudaDriverRoutine_1e9390(v24);
      }
      else {
        v25 = *((_QWORD*)&v30_.v31 + 1);
        *(_QWORD*)(v11 + 48) = *((_QWORD*)&v30_.v31 + 1);
        v26 = v30_.v32;
        *(_QWORD*)(v11 + 24) = v25;
        *(_QWORD*)(v11 + 32) = a4;
        *(_DWORD*)(v11 + 56) = v26;
        result = CudaDriverRoutine_1a3f00(
            (__int64*)v11, *(_QWORD*)(a5 + 8) + v25, a4 - *(_QWORD*)(a5 + 8),
            v18, *(_BYTE*)(a5 + 16) & 1);
        if ((_DWORD)result == 0) {
          *a2 = v11;
          return result;
        }
        LODWORD(v15) = 999;
      }
    }
  }
LABEL_19:
  v27 = (unsigned int)v15;
  v33_.v33 = 12;
  v33_.v34 = *(_QWORD*)(v11 + 40);
  (*(void (**)(int*))((char*)((_UNKNOWN*)0x2D0LL) + v12))(&v33_.v33);
  v28 = *(_QWORD*)(v11 + 8);
  if (v28 != 0) {
    CudaDriverRoutine_1a4580(v28);
  }
  if (*(_QWORD*)v11 != 0) {
    CudaDriverRoutine_1a40e0(*(_QWORD*)v11);
  }
  CudaDriverRoutine_12e340(v11);
  return v27;
}

__int64 cuda_driver_1ebe70(__int64* a1, __int64* a2, __int64* a3, __int64 a4,
                           int a5)
{
  void* v5;
  __int64 v8;
  __int64 v11;
  int* v12;
  _QWORD* v13;
  void (*v14)(int*);
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  int v31;

  v5 = CudaDriverData_1422118;
  if ((*((_BYTE*)((_UNKNOWN*)0x1D58LL) + (_QWORD)CudaDriverData_1422118 + 2) &
       1) != 0) {
    return 0;
  }
  v8 = a4;
  v11 = CudaDriverStub_12e330(4 * a4);
  if (v11 != 0) {
    v12 = (int*)v11;
    v23 = CudaDriverStub_12e330(8 * v8);
    if (v23 != 0) {
      v22 = (__int64)v12;
      if (v8 != 0) {
        v13 = (_QWORD*)v23;
        do {
          v15 = *a1++;
          *v12 =
              *(_DWORD*)(**(_QWORD**)(CudaDriverStub_1dbfc0(v15) + 208) + 4LL);
          v17 = *a3++;
          v16 = v17;
          *v13 = v17;
          if ((*((_BYTE*)((_UNKNOWN*)0x1D58LL) + (_QWORD)v5 + 2) & 1) == 0) {
            v18 = *a2;
            v19 = *v12;
            v28 = 24;
            v24 = 24;
            v30 = v16;
            v26 = v16;
            v31 = v19;
            v29 = v18;
            v27 = v19;
            v25 = v18;
            __builtin_arm_dmb(0xEu);
            if (a5 == 2) {
              v20 = CudaDriverData_1422bb0;
              (*(void (**)(int*))((char*)((_UNKNOWN*)0x248LL) +
                                  CudaDriverData_1422bb0))(&v24);
              v14 = *(void (**)(int*))((char*)((_UNKNOWN*)0x250LL) + v20);
            }
            else {
              if (a5 != 1) {
                if (a5 == 0) {
                  (*(void (**)(int*))((char*)((_UNKNOWN*)0x248LL) +
                                      CudaDriverData_1422bb0))(&v24);
                }
                goto LABEL_8;
              }
              v14 = (void (*)(int*))CudaDriverData_1440968;
            }
            v14(&v28);
          }
        LABEL_8:
          --v8;
          ++a2;
          ++v13;
          ++v12;
        } while (v8 != 0);
      }
      CudaDriverRoutine_12e340(v22);
      CudaDriverRoutine_12e340(v23);
      return 0;
    }
    CudaDriverRoutine_12e340((__int64)v12);
  }
  return 2;
}

__int64 cuda_driver_1ec1a0(__int64 a1, unsigned __int8 a2)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v7;
  __int64 v8;
  __int64 i;
  __int64 v10;
  __int64* v11;
  int* v12;
  __int64* v13;
  __int64 j;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  char v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64* v24;
  __int64* v25;
  char v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;
  __int64 v36;
  __int64 v37;
  int v38;

  CudaDriverStub_107f90(*(_QWORD*)((char*)((_UNKNOWN*)0x1730LL) +
                                   (_QWORD)CudaDriverData_1422118) +
                        24LL);
  if ((a2 | (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 64) + 19824LL) + 72LL) !=
             0)) != 0) {
    v4 = CudaDriverRoutine_1ec000(a1);
    if (v4 != 0) {
      v5 = v4;
      CudaDriverStub_108070(*(_QWORD*)((char*)((_UNKNOWN*)0x1730LL) +
                                       (_QWORD)CudaDriverData_1422118) +
                            24LL);
      return v5;
    }
    *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 64) + 19824LL) + 72LL) = 0;
  }
  v7 = 1;
  v8 = *(_QWORD*)(*(_QWORD*)((char*)((_UNKNOWN*)0x1730LL) +
                             (_QWORD)CudaDriverData_1422118) +
                  40LL);
  do {
    for (i = *(_QWORD*)(CudaDriverData_1435ed8 + 8); i != 0;
         i = *(_QWORD*)(i + 40)) {
      if (*(_DWORD*)(i + 32) == v7) {
        v19 = *(unsigned int*)(v8 + 32);
        *(_DWORD*)(*(_QWORD*)v8 + 4 * v19) = *(_DWORD*)i;
        *(_QWORD*)(*(_QWORD*)(v8 + 8) + 8 * v19) = *(_QWORD*)(i + 8);
        *(_QWORD*)(*(_QWORD*)(v8 + 16) + 8 * v19) = *(unsigned int*)(i + 16);
        *(_QWORD*)(*(_QWORD*)(v8 + 24) + 8 * v19) = *(unsigned int*)(i + 24);
        ++*(_QWORD*)(v8 + 32);
        *(_DWORD*)(i + 32) = 0;
        *(_BYTE*)(i + 36) = 0;
      }
    }
    v10 = *(_QWORD*)(v8 + 32);
    if (v10 != 0) {
      v12 = *(int**)v8;
      v11 = *(__int64**)(v8 + 8);
      v13 = *(__int64**)(v8 + 24);
      *(_DWORD*)(v8 + 40) = v7;
      if ((v7 & 5) == 1) {
        for (j = 0; j != v10; ++j) {
          CudaDriverStub_4f840(v11[j]);
        }
        v15 = v10;
        v16 = v13;
        v17 = v11;
        v18 = *((_BYTE*)((_UNKNOWN*)0x1D58LL) + (_QWORD)CudaDriverData_1422118 +
                2);
        do {
          if ((v18 & 1) == 0) {
            v20 = *v16;
            v21 = *v17;
            v22 = *v12;
            v35 = 24;
            v38 = v22;
            v36 = v21;
            v37 = v20;
            __builtin_arm_dmb(0xEu);
            (*(void (**)(int*))((char*)((_UNKNOWN*)0x250LL) +
                                CudaDriverData_1422bb0))(&v35);
            v18 = CudaDriverData_1436502;
          }
          ++v12;
          ++v17;
          ++v16;
          --v15;
        } while (v15 != 0);
      }
      else {
        v23 = v10;
        v24 = v13;
        v25 = v11;
        v26 = *((_BYTE*)((_UNKNOWN*)0x1D58LL) + (_QWORD)CudaDriverData_1422118 +
                2);
        do {
          if ((v26 & 1) == 0) {
            v27 = *v24;
            v28 = *v25;
            v29 = *v12;
            v31 = 24;
            v34 = v29;
            v32 = v28;
            v33 = v27;
            __builtin_arm_dmb(0xEu);
            (*(void (**)(int*))((char*)((_UNKNOWN*)0x248LL) +
                                CudaDriverData_1422bb0))(&v31);
            v26 = CudaDriverData_1436502;
          }
          ++v12;
          ++v25;
          ++v24;
          --v23;
        } while (v23 != 0);
      }
      if (v7 > 4 || ((1 << v7) & 0x1A) == 0) {
        do {
          v30 = *v11++;
          ++v13;
          CudaDriverStub_4f840(v30);
          --v10;
        } while (v10 != 0);
      }
      *(_QWORD*)(v8 + 32) = 0;
    }
    ++v7;
  } while (v7 != 5);
  CudaDriverStub_108070(CudaDriverData_1435ed8 + 24);
  return 0;
}

__int64 cuda_driver_1ecd60(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6)
{
  __int64 result;
  __int64 v13;

  result = CudaDriverRoutine_df060(nullptr);
  if ((_DWORD)result == 0) {
    if (CudaDriverData_1434ac0 != 0) {
      v13 = 0;
      while ((unsigned __int8)CudaDriverStub_4f840(
                 *((_QWORD*)&CudaDriverData_14347a8 + v13 + 35)) == 0) {
        if (++v13 >= (unsigned __int64)(unsigned int)CudaDriverData_1434ac0) {
          return 801;
        }
      }
      result = 1;
      if (a1 != 0 && a3 != 0 && a6 == 0 &&
          (*(_QWORD*)(a3 + 240) & 0xF800000000LL) != 0x800000000LL &&
          ((*(_BYTE*)(a1 + 249) & 0xF8) == 0 &&
               (*(_QWORD*)(a1 + 240) & 0xF800000000LL) != 0x800000000LL ||
           (*(_BYTE*)(a3 + 249) & 0xF8) != 0) &&
          (((unsigned int)a4 | (unsigned int)a2 | (unsigned int)a5) &
           0x1FFFFF) == 0 &&
          !__CFADD__(a5, a2) &&
          *(_QWORD*)(a1 + 128) >= (unsigned __int64)(a5 + a2) &&
          !__CFADD__(a5, a4) &&
          *(_QWORD*)(a3 + 128) >= (unsigned __int64)(a5 + a4)) {
        while (1) {
          result = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64,
                                   _QWORD))(*(_QWORD*)(a1 + 632) + 2496LL))(
              a1, a2, a3, a4, a5, 0);
          if ((_DWORD)result != 600) {
            break;
          }
          CudaDriverStub_12dc90(result);
        }
      }
    }
    else {
      return 801;
    }
  }
  return result;
}

__int64 cuda_driver_1ecec0(__int64 a1, __int64 a2, unsigned __int64 a3,
                           unsigned __int64 a4, __int64 a5)
{
  __int64 result;
  __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  __int64 v18;
  _QWORD* v19;
  _BOOL4 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned int v31;
  __int64 v32;
  _BOOL4 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;

  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v35 = 0;
  v36 = 0;
  result = CudaDriverRoutine_df060(nullptr),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((_DWORD)result != 0) {
    return result;
  }
  if (CudaDriverData_1434ac0 == 0) {
    return 801;
  }
  v11 = 0;
  while ((unsigned __int8)CudaDriverStub_4f840(
             *((_QWORD*)&CudaDriverData_14347a8 + v11 + 35)) == 0) {
    if (++v11 >= (unsigned __int64)(unsigned int)CudaDriverData_1434ac0) {
      return 801;
    }
  }
  result = 1;
  if (a1 == 0 || a3 == 0 || (a5 | a3 & 0x1FFFFF) != 0) {
    return result;
  }
  CudaDriverRoutine_12c8b0(0, &v36, &v35, a3),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v36 != 0) {
    if (CudaDriverRoutine_12cad0(a3)) {
      v37 = 0;
      v38 = 0;
      CudaDriverRoutine_12cb10(a3, &v38, &v37),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = 1;
      if (__CFADD__(a4, a3) || a4 + a3 > v37 + v38) {
        return result;
      }
      goto LABEL_20;
    }
    v12 = v35 + a4;
    if (v12 <= CudaDriverStub_1dbf90(v36) && !__CFADD__(v35, a4)) {
    LABEL_20:
      v13 = (__int64*)CudaDriverRoutine_1dc000(v36),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v33 = (*(_BYTE*)(a1 + 249) & 0xF8) == 0 &&
            (*(_QWORD*)(a1 + 240) & 0xF800000000LL) != 0x800000000LL;
      if (a4 == 0) {
        return 0;
      }
      v14 = *v13;
      v34 = a4;
      v15 = a2;
      while (1) {
        v37 = 0;
        v38 = 0;
        CudaDriverRoutine_12c8b0(0, &v38, &v37, a3),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v38 == 0) {
          break;
        }
        if ((CudaDriverRoutine_1db1b0(v38) & 0x7C0000000000000LL) !=
                0x80000000000000LL &&
            (CudaDriverRoutine_1db1b0(v38) & 0x7C0000000000000LL) !=
                0x180000000000000LL &&
            (CudaDriverRoutine_1db1b0(v38) & 0x7C0000000000000LL) !=
                0x3C0000000000000LL) {
          CudaDriverRoutine_1db1b0(v38),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if ((v16 & 0x100000) == 0) {
            break;
          }
        }
        if ((CudaDriverRoutine_1db1b0(v38) & 7) != 2 ||
            (CudaDriverRoutine_1db1b0(v38) & 0x7E00) != 0x200 ||
            v14 != *(_QWORD*)CudaDriverRoutine_1dc000(v38) ||
            CudaDriverStub_1db760(v38) != 0) {
          break;
        }
        CudaDriverRoutine_1db1b0(v38),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if ((v17 & 0x100000) == 0) {
          v18 = CudaDriverStub_1dbfc0(v38),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v18 == 0) {
            break;
          }
          v19 = *(_QWORD*)(v18 + 168) != 0 ? *(_QWORD**)(v18 + 168)
                                           : (_QWORD*)v18;
          if ((v19[30] & 0xF800000000LL) == 0x800000000LL) {
            break;
          }
          v20 = (v19[31] & 0xF800LL) != 0;
          v21 = a3 - *(_QWORD*)(CudaDriverStub_1dbfc0(v38) + 88),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        LABEL_42:
          v28 = CudaDriverStub_1dbf90(v38),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v27 = v28 - v37;
          goto LABEL_43;
        }
        v22 = CudaDriverRoutine_1dd1a0(v38),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v23 = *(unsigned int*)(v22 + 44);
        v24 = *(_QWORD*)(v22 + 96);
        v25 = v22;
        v19 = *(_QWORD**)(*(_QWORD*)(v24 + 80) +
                          80 * ((a3 - *(_QWORD*)(v22 + 24)) / v23));
        v20 = *(_DWORD*)(v24 + 152) != 0;
        v21 = a3 % v23;
        v26 = CudaDriverStub_1dbf90(v38),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v27 = *(unsigned int*)(v25 + 44) - v21;
        if (v26 - v37 < v27) {
          goto LABEL_42;
        }
      LABEL_43:
        if (!v33 && !v20) {
          break;
        }
        v29 = v27 >= v34 ? v34 : v27;
        if ((((unsigned int)v21 | (unsigned int)v15 | (unsigned int)v29) &
             0x1FFFFF) != 0) {
          break;
        }
        result = 1;
        if (__CFADD__(v29, v15) || *(_QWORD*)(a1 + 128) < v29 + v15 ||
            __CFADD__(v29, v21) || v19[16] < v29 + v21) {
          goto LABEL_59;
        }
        while (1) {
          result = (*(__int64 (**)(__int64, __int64, _QWORD*, unsigned __int64,
                                   unsigned __int64, _QWORD))(
              *(_QWORD*)(a1 + 632) + 2496LL))(a1, v15, v19, v21, v29, 0),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if ((_DWORD)result != 600) {
            break;
          }
          CudaDriverStub_12dc90(result),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        if ((_DWORD)result != 0) {
          goto LABEL_59;
        }
        a3 += v29;
        v15 += v29;
        v34 -= v29;
        if (v34 == 0) {
          return result;
        }
      }
      result = 1;
    LABEL_59:
      v30 = a4 - v34;
      if (v30 != 0) {
        v31 = result;
        do {
          v32 = *(_QWORD*)(a1 + 632);
          v38 = 0;
          (*(void (**)(__int64, __int64, __int64, _QWORD, __int64*))(
              v32 + 2512))(a1, v14, a2, 0, &v38),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v30 -= v38;
          a2 += v38;
        } while (v30 != 0);
        return v31;
      }
      return result;
    }
  }
  return 1;
}

__int64 cuda_driver_1ed2e0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result;
  __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  result = CudaDriverRoutine_df060(nullptr);
  if ((_DWORD)result == 0) {
    if (CudaDriverData_1434ac0 != 0) {
      v9 = 0;
      while ((unsigned __int8)CudaDriverStub_4f840(
                 *((_QWORD*)&CudaDriverData_14347a8 + v9 + 35)) == 0) {
        if (++v9 >= (unsigned __int64)(unsigned int)CudaDriverData_1434ac0) {
          return 801;
        }
      }
      result = 1;
      if ((((unsigned int)a4 | (unsigned int)a3) & 0x1FFFFF) == 0 && a1 != 0 &&
          (a2 & 0x80000000) == 0 && a2 <= CudaDriverData_1434ac0 &&
          !__CFADD__(a4, a3) &&
          *(_QWORD*)(a1 + 128) >= (unsigned __int64)(a4 + a3)) {
        v10 = (char*)&CudaDriverData_14347a8 + 8 * (unsigned int)a2;
        while (a4 != 0) {
          v11 = *(_QWORD*)(a1 + 632);
          v12 = *((_QWORD*)v10 + 35);
          v13 = 0;
          result =
              (*(__int64 (**)(__int64, __int64, __int64, _QWORD, __int64*))(
                  v11 + 2512))(a1, v12, a3, 0, &v13);
          a4 -= v13;
          a3 += v13;
          if ((_DWORD)result != 0) {
            return result;
          }
        }
        return 0;
      }
    }
    else {
      return 801;
    }
  }
  return result;
}

__int64 cuda_driver_1ee220(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int128 v5;
  __int128 v6;
  __int128 v7;
  int8x8_t* v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  __int128 v12;
  __int128 v13;
  __int128 v14;
  unsigned int v15;
  __int128 v16;
  __int128 v17;
  __int128 v18;
  __int128 v19;
  __int128 v20;
  __int128 v21;
  unsigned __int64 v22;
  unsigned int v23;
  int v24;
  int v25;
  unsigned int v26;
  __int64 v27;
  __int64 result;

  v3 = *(_QWORD*)(a3 + 8);
  v4 = *(_QWORD*)(a3 + 16);
  v5 = *(_OWORD*)(v3 + 96);
  v6 = *(_OWORD*)(v3 + 112);
  v7 = *(_OWORD*)(v3 + 80);
  v8 = (int8x8_t*)(v4 + 564);
  v9 = *(_QWORD*)(a1 + 64);
  v10 = (unsigned int)(*(_DWORD*)(a3 + 172) * *(_DWORD*)(a3 + 168) *
                           *(_DWORD*)(a3 + 176) +
                       31) >>
        5;
  v11 = *(_DWORD*)(v9 + 3756);
  LODWORD(v9) = *(_DWORD*)(v9 + 3768);
  *(_OWORD*)(v4 + 576) = *(_OWORD*)(v3 + 64);
  *(_OWORD*)(v4 + 592) = v7;
  *(_OWORD*)(v4 + 608) = v5;
  *(_OWORD*)(v4 + 624) = v6;
  v12 = *(_OWORD*)(v3 + 160);
  v13 = *(_OWORD*)(v3 + 176);
  v14 = *(_OWORD*)(v3 + 144);
  v15 = v11 / (unsigned int)v9;
  *(_OWORD*)(v4 + 640) = *(_OWORD*)(v3 + 128);
  *(_OWORD*)(v4 + 656) = v14;
  *(_OWORD*)(v4 + 672) = v12;
  *(_OWORD*)(v4 + 688) = v13;
  v16 = *(_OWORD*)(v3 + 224);
  v17 = *(_OWORD*)(v3 + 240);
  v18 = *(_OWORD*)(v3 + 208);
  *(_OWORD*)(v4 + 704) = *(_OWORD*)(v3 + 192);
  *(_OWORD*)(v4 + 720) = v18;
  *(_OWORD*)(v4 + 736) = v16;
  *(_OWORD*)(v4 + 752) = v17;
  v19 = *(_OWORD*)(v3 + 16);
  if (v10 <= v15) {
    LOWORD(v10) = v15;
  }
  v20 = *(_OWORD*)(v3 + 32);
  v21 = *(_OWORD*)(v3 + 48);
  *(_OWORD*)(v4 + 512) = *(_OWORD*)v3;
  *(_OWORD*)(v4 + 528) = v19;
  *(_OWORD*)(v4 + 544) = v20;
  *(_OWORD*)(v4 + 560) = v21;
  *(_DWORD*)(v4 + 560) = 0;
  v22 = LANES64_OF(vand_s8(COERCE_AS(int8x8_t, LANES64(*(v8)).n64_u64[0]),
                           COERCE_AS(int8x8_t, 0xFFFF0000FFFF0000LL)))
            .n64_u64[0];
  v23 = *(_DWORD*)(v4 + 528) & 0xFFFFF2FF | 0x100;
  *(_DWORD*)(v4 + 516) = *(_DWORD*)(v4 + 516) & 0x80000000 | 0xFFFFF;
  v24 = *(_DWORD*)(v4 + 520);
  *(_DWORD*)(v4 + 528) = v23;
  LANES64(*(v8)).n64_u64[0] = v22;
  *(_DWORD*)(v4 + 520) = v24 & 0x80000000;
  v25 = (((_WORD)v10 << 6) + 16320) & 0x3FC0;
  v26 = *(_DWORD*)(v4 + 532) & 0xFE000000 | 0x100000;
  *(_DWORD*)(v4 + 532) = v26;
  *(_DWORD*)(v4 + 544) = *(_DWORD*)(*(_QWORD*)(a1 + 1064) + 408LL);
  *(_DWORD*)(v4 + 532) = v26 & 0x3F00000;
  *(_DWORD*)(v4 + 556) = v25 | *(_DWORD*)(v4 + 556) & 0xFFF40000 | 0x803F;
  *(_DWORD*)(v3 + 44) = v25 | *(_DWORD*)(v3 + 44) & 0xFFF74000 | 0x8803F;
  v27 = *(_QWORD*)(a3 + 40);
  *(_DWORD*)(v4 + 1072) = 0;
  *(_QWORD*)(v4 + 1088) = v27;
  *(_QWORD*)(v4 + 1040) = 0x200000000LL;
  *(_QWORD*)(v4 + 1168) = 0x100000001LL;
  result = CudaDriverRoutine_e7e40(a3);
  *(_DWORD*)(v4 + 1176) = result;
  *(_DWORD*)(v4 + 1180) = 1;
  return result;
}

long double cuda_driver_1ee3a0(__int64 a1, __int64 a2, unsigned int* a3,
                               __int64 a4)
{

#pragma clang fp contract(off)
  unsigned int v4;
  unsigned int v9;
  char v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned int* v13;
  unsigned int v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  int8x16_t v20;
  int8x8_t v21;
  int v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  int8x16_t v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned int v33;
  unsigned __int64 v34;
  unsigned int v35;
  unsigned int v36;
  __int128 v37;
  long double result;
  __int64 v39;
  _DWORD v40[8];
  _QWORD v41[2];
  _BYTE v42[48];

  v4 = a3[5];
  v39 = 0;
  memset(v40, 0, sizeof(v40));
  *(_OWORD*)v41 = (__typeof__(*(_OWORD*)v41)){0};
  *(_OWORD*)v42 = (__typeof__(*(_OWORD*)v42)){0};
  a3[5] = v4 & 0x3FFFFFF;
  v9 = a3[11] & 0xFFFCBFFF;
  memset(&v42[16], 0, 32);
  a3[11] = v9;
  CudaDriverRoutine_bbd70(a2, &v39);
  a3[8] = v39;
  a3[11] |= 0x44000000u;
  a3[29] = a3[29] & 0x7FFFFFF | 0x8000000;
  v10 = *(_BYTE*)(a2 + 392);
  a3[21] = 0;
  a3[22] = 0;
  *((_BYTE*)a3 + 123) = v10;
  *((_BYTE*)a3 + 72) = 33;
  *((_BYTE*)a3 + 127) =
      (unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 3164LL) << 24) +
                     (*(_DWORD*)(*(_QWORD*)(a1 + 64) + 3160LL) << 28)) >>
      24;
  v11 = *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3888LL);
  a3[17] = a3[17] & 0xFFFC0000 |
           (((unsigned __int64)(unsigned int)(v11 - 1) + 8448) / v11 * v11) &
               0x3FFFF;
  v12 = CudaDriverStub_112e30(*(_QWORD*)(a1 + 96));
  CudaDriverRoutine_96f20(a1, a2, v12, 0, (__int64)v41, (__int64)v40);
  v13 = *(unsigned int**)(a1 + 64);
  if (v13[944] != 0) {
    v14 = 1075;
    v15 = 0;
    do {
      while (1) {
        v16 = v41[v15];
        if (v16 != 0) {
          break;
        }
        a3[(unsigned int)(v15 + 640) >> 5] &= ~(1 << v15);
        v13 = *(unsigned int**)(a1 + 64);
        ++v15;
        v14 += 64;
        if (v15 >= v13[944]) {
          goto LABEL_6;
        }
      }
      v17 = ((v40[v15] + v13[946] - 1) / v13[946] * v13[946]) << 15;
      a3[(unsigned int)(v15 + 640) >> 5] |= 1 << v15;
      a3[v14 >> 5] = v17 & 0xFFF80000 | a3[v14 >> 5] & 0x7FFFF;
      a3[(v14 - 19) >> 5] =
          HIDWORD(v16) & 0x1FFFF | (a3[(v14 - 19) >> 5] >> 17 << 17);
      a3[(v14 - 51) >> 5] = v16;
      v13 = *(unsigned int**)(a1 + 64);
      ++v15;
      v14 += 64;
    } while (v15 < v13[944]);
  }
LABEL_6:
  a3[(v13[2927] + 640) >> 5] |= 1 << v13[2927];
  v18 =
      (unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 11708LL) << 6) + 1075) >>
      5;
  a3[v18] = a3[v18] & 0x7FFFF | 0xE000000;
  v19 =
      (unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 11708LL) << 6) + 1056) >>
      5;
  a3[v19] =
      ((unsigned __int64)(a4 + 2048) >> 32) & 0x1FFFF | (a3[v19] >> 17 << 17);
  a3[(unsigned int)((*(_DWORD*)(*(_QWORD*)(a1 + 64) + 11708LL) << 6) + 1024) >>
     5] = a4 + 2048;
  *((_WORD*)a3 + 37) = 32;
  LANES128(v20).n128_u64[0] = *((_QWORD*)a3 + 1);
  PSEUDO_LOW_LANE64(v21, n64_u64, *(_QWORD*)(a3 + 4));
  a3[19] = 65537;
  LOBYTE(v19) = *((_BYTE*)a3 + 123);
  a3[29] =
      *(_DWORD*)(a1 + 1276) & 0xFFFFFF | (*((unsigned __int8*)a3 + 119) << 24);
  v22 = *(_DWORD*)(a1 + 1280) & 0xFFFFFF | ((unsigned __int8)v19 << 24);
  LOBYTE(v19) = *((_BYTE*)a3 + 127);
  a3[30] = v22;
  v23 = *(_DWORD*)(a1 + 1284) & 0xFFFFFF | ((unsigned __int8)v19 << 24);
  v24 = a3[11];
  a3[31] = v23;
  v26 = *a3;
  v25 = a3[1];
  *(_QWORD*)(a3 + 11) = v24 & 0xFFF74000 | 0x88000;
  *a3 = v26 & 0x80000000;
  a3[1] = v25 & 0x80000000 | 0xFFFFF;
  a3[16] = a3[16] & 0xFFFC0380 | 0x401F;
  *(int8x8_t*)&LANES128(v20).n128_i8[8] =
      vand_s8(v21, COERCE_AS(int8x8_t, 0xFE000000FFFFF2C0LL));
  LANES128(v27).n128_u64[0] = 0x8000000080000000LL;
  LANES128(v27).n128_u64[1] = 0x8000000080000000LL;
  LANES128(v27).n128_u64[0] = LANES128_OF(vandq_s8(v20, v27)).n128_u64[0];
  LANES128(v27).n128_u64[1] =
      LANES128_OF(vorrq_s8(v20, COERCE_AS(int8x16_t, CudaDriverData_1115760)))
          .n128_u64[1];
  LANES128(v20).n128_u64[0] = *(_QWORD*)(a3 + 13);
  *(int8x16_t*)(a3 + 2) = v27;
  *(int8x8_t*)(a3 + 13) =
      vand_s8(COERCE_AS(int8x8_t, LANES128(v20).n128_u64[0]),
              COERCE_AS(int8x8_t, 0xFFFF0000FFFF0000LL));
  v28 = CudaDriverRoutine_98340(a1);
  v29 = v39;
  v30 = v28;
  v31 = CudaDriverRoutine_1f1440(v28);
  v32 = CudaDriverRoutine_1eeec0(v30);
  v33 = v32;
  v34 = HIDWORD(v32);
  v35 = CudaDriverRoutine_1bf730(a2);
  v36 = *(unsigned __int8*)(*(_QWORD*)(v30 + 64) + 3744LL);
  a3[521] = *(_DWORD*)(v30 + 1284);
  *((_QWORD*)a3 + 259) = 0x100000001LL;
  *((_QWORD*)a3 + 261) = -4;
  v37 = *(_OWORD*)v41;
  a3[512] = v31;
  a3[513] = v33;
  a3[520] = v35;
  *((_OWORD*)a3 + 131) = (__typeof__(*((_OWORD*)a3 + 131))){0};
  *((_OWORD*)a3 + 132) = (__typeof__(*((_OWORD*)a3 + 132))){0};
  *((_OWORD*)a3 + 133) = (__typeof__(*((_OWORD*)a3 + 133))){0};
  *((_OWORD*)a3 + 134) = (__typeof__(*((_OWORD*)a3 + 134))){0};
  *((_OWORD*)a3 + 135) = (__typeof__(*((_OWORD*)a3 + 135))){0};
  *((_OWORD*)a3 + 136) = (__typeof__(*((_OWORD*)a3 + 136))){0};
  *((_OWORD*)a3 + 137) = (__typeof__(*((_OWORD*)a3 + 137))){0};
  *((_OWORD*)a3 + 138) = (__typeof__(*((_OWORD*)a3 + 138))){0};
  *((_OWORD*)a3 + 139) = (__typeof__(*((_OWORD*)a3 + 139))){0};
  *((_QWORD*)a3 + 280) = 0;
  *((_QWORD*)a3 + 287) = 0;
  a3[576] = HIDWORD(v31);
  a3[577] = v34;
  a3[591] = 0;
  *((_QWORD*)a3 + 1032) = a4;
  a3[2066] = v29;
  *((_QWORD*)a3 + 136) = a4 + 2048;
  a3[578] = v36;
  *((_QWORD*)a3 + 281) = v37;
  *((_QWORD*)a3 + 286) = *((_QWORD*)&v37 + 1);
  *(_OWORD*)(a3 + 579) = (__typeof__(*(_OWORD*)(a3 + 579))){0};
  *(_OWORD*)(a3 + 514) = CudaDriverData_1115550;
  *((_OWORD*)a3 + 141) = *(_OWORD*)&v42[8];
  result = *(long double*)&v42[24];
  *(_OWORD*)(a3 + 583) = (__typeof__(*(_OWORD*)(a3 + 583))){0};
  *(_OWORD*)(a3 + 587) = (__typeof__(*(_OWORD*)(a3 + 587))){0};
  *(_QWORD*)(a3 + 2071) = 0;
  *(_OWORD*)(a3 + 2067) = (__typeof__(*(_OWORD*)(a3 + 2067))){0};
  *((long double*)a3 + 142) = result;
  return result;
}

_DWORD* cuda_driver_1eea40(__int64 a1, _DWORD** a2, __int64 a3)
{
  _DWORD* v3;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  _DWORD* v16;
  int v17;
  int v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned int* v21;
  unsigned __int64 v22;
  unsigned int v23;
  unsigned __int64 i;
  __int64 v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned __int8 v32;
  int v33;
  unsigned __int8 v34;
  int v35;
  unsigned __int8 v36;
  __int64 v37;
  int v38;
  __int64 v39;
  int v40;
  __int64 v41;
  int v42;
  _DWORD* result;
  __int64 (*v44)(_DWORD*, __int64, _QWORD, _QWORD*, __int64, __int64);
  __int64 v45;
  _DWORD* v46;
  struct {
    _QWORD v47[2];
    __int128 v48;
    __int128 v49;
    __int128 v50;
    __int128 v51;
    __int128 v52;
    __int128 v53;
    __int128 v54;
    __int128 v55;
    __int128 v56;
    __int128 v57;
    __int128 v58;
    __int128 v59;
    __int128 v60;
    __int128 v61;
    __int128 v62;
  } v47_;
  __int64 v63;
  _DWORD v64[8];
  _QWORD v65[8];

  v3 = *a2;
  memset(v64, 0, sizeof(v64));
  memset(v65, 0, sizeof(v65));
  v7 = *(_QWORD*)(CudaDriverRoutine_98340(a1) + 1072);
  v63 = 0;
  v8 = *(_QWORD*)(v7 + 392);
  v9 = *(_QWORD*)(a3 + 136);
  *(_OWORD*)v47_.v47 = (__typeof__(*(_OWORD*)v47_.v47)){0};
  v47_.v48 = (__typeof__(v47_.v48)){0};
  v47_.v49 = (__typeof__(v47_.v49)){0};
  v47_.v50 = (__typeof__(v47_.v50)){0};
  v10 = *(_QWORD*)(v9 + 192);
  v11 = *(_QWORD*)(a1 + 64);
  v47_.v51 = (__typeof__(v47_.v51)){0};
  v47_.v52 = (__typeof__(v47_.v52)){0};
  v12 = *(unsigned int*)(v11 + 11708);
  v47_.v53 = (__typeof__(v47_.v53)){0};
  v47_.v54 = (__typeof__(v47_.v54)){0};
  v47_.v55 = (__typeof__(v47_.v55)){0};
  v47_.v56 = (__typeof__(v47_.v56)){0};
  v47_.v57 = (__typeof__(v47_.v57)){0};
  v47_.v58 = (__typeof__(v47_.v58)){0};
  v13 = *(_QWORD*)(a3 + 8 * v12 + 40);
  v47_.v59 = (__typeof__(v47_.v59)){0};
  v47_.v60 = (__typeof__(v47_.v60)){0};
  v47_.v61 = (__typeof__(v47_.v61)){0};
  v47_.v62 = (__typeof__(v47_.v62)){0};
  *(_QWORD*)&v47_.v48 = 0x3C00000000001000LL;
  CudaDriverRoutine_bbd70(v8, &v63);
  v14 = *(_QWORD*)(a1 + 96);
  *(_QWORD*)((char*)&v47_.v52 + 4) = 0;
  HIDWORD(v47_.v49) = 1141047296;
  v15 = *(_DWORD*)(v8 + 392);
  LODWORD(v47_.v49) = v63;
  DWORD1(v47_.v54) = 0x8000000;
  DWORD2(v47_.v54) = v15 << 24;
  v16 = *(_DWORD**)(a1 + 64);
  v17 = v16[791];
  v18 = v16[790];
  v19 = (unsigned int)v16[972];
  HIDWORD(v47_.v54) = (v17 << 24) + (v18 << 28);
  DWORD1(v47_.v51) =
      (((unsigned __int64)(unsigned int)(v19 - 1) + 8448) / v19 * v19) &
      0x3FFFF;
  DWORD2(v47_.v51) = 33;
  v20 = CudaDriverStub_112e30(v14);
  CudaDriverRoutine_96f20(a1, v8, v20, 0, (__int64)v65, (__int64)v64);
  v21 = *(unsigned int**)(a1 + 64);
  v22 = v21[944];
  if ((_DWORD)v22 != 0) {
    v23 = 1075;
    for (i = 0; i < v22; ++i) {
      while (1) {
        v25 = v65[i];
        if (v25 != 0) {
          break;
        }
        *((_DWORD*)v47_.v47 + ((unsigned int)(i + 640) >> 5)) &= ~(1 << i);
        ++i;
        v23 += 64;
        if (i >= v22) {
          goto LABEL_6;
        }
      }
      v26 = ((v64[i] + v21[946] - 1) / v21[946] * v21[946]) << 15;
      *((_DWORD*)v47_.v47 + ((unsigned int)(i + 640) >> 5)) |= 1 << i;
      *((_DWORD*)v47_.v47 + (v23 >> 5)) =
          v26 & 0xFFF80000 | *((_DWORD*)v47_.v47 + (v23 >> 5)) & 0x7FFFF;
      *((_DWORD*)v47_.v47 + ((v23 - 19) >> 5)) =
          HIDWORD(v25) & 0x1FFFF |
          (*((_DWORD*)v47_.v47 + ((v23 - 19) >> 5)) >> 17 << 17);
      *((_DWORD*)v47_.v47 + ((v23 - 51) >> 5)) = v25;
      v23 += 64;
    }
  }
LABEL_6:
  v27 = v21[2927];
  v28 = v27 + 640;
  v29 = 1 << v27;
  v27 <<= 6;
  *((_DWORD*)v47_.v47 + (v28 >> 5)) |= v29;
  *((_DWORD*)v47_.v47 + ((v27 + 1075) >> 5)) =
      *((_DWORD*)v47_.v47 + ((v27 + 1075) >> 5)) & 0x7FFFF | 0xE000000;
  v30 = (v27 + 1056) >> 5;
  v31 = *((_DWORD*)v47_.v47 + v30);
  *((_DWORD*)v47_.v47 + ((v27 + 1024) >> 5)) = v13;
  *((_DWORD*)v47_.v47 + v30) = HIDWORD(v13) & 0x1FFFF | (v31 >> 17 << 17);
  WORD5(v47_.v51) = 1;
  HIDWORD(v47_.v51) = 65537;
  v32 = BYTE7(v47_.v54);
  v33 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 1276) & 0xFFFFFF | (v32 << 24);
  v34 = BYTE11(v47_.v54);
  DWORD1(v47_.v54) = v33;
  v35 = *(_DWORD*)(CudaDriverRoutine_98340(a1) + 1280) & 0xFFFFFF | (v34 << 24);
  v36 = HIBYTE(v47_.v54);
  DWORD2(v47_.v54) = v35;
  v37 = CudaDriverRoutine_98340(a1);
  v38 = v47_.v48;
  HIDWORD(v47_.v54) = *(_DWORD*)(v37 + 1284) & 0xFFFFFF | (v36 << 24);
  v39 = CudaDriverStub_1223e0(*(_QWORD*)(v10 + 24));
  v40 = v47_.v53;
  v41 = v39;
  v42 = CudaDriverStub_8e230(v10);
  HIDWORD(v47_.v52) = v41;
  LODWORD(v47_.v50) = 1;
  LODWORD(v47_.v53) = v40 & 0x7B8FFF00 | 0x84000000 | BYTE4(v41);
  DWORD1(v47_.v53) = v42;
  LODWORD(v47_.v48) = v38 & 0xFFFFF2C0 | 0x400;
  *(_QWORD*)((char*)&v47_.v50 + 4) =
      LANES64_OF(vand_s8(*(int8x8_t*)((char*)&v47_.v50 + 4),
                         COERCE_AS(int8x8_t, 0xFFFF0000FFFF0000LL)))
          .n64_u64[0] |
      0x100000001LL;
  if (*(_BYTE*)(*(_QWORD*)(CudaDriverRoutine_98340(a1) + 16104) + 2072LL) !=
          0 &&
      *(_BYTE*)(a3 + 196) != 0) {
    result =
        CudaDriverRoutine_1f75b0(v3, *(_QWORD*)(v10 + 8), (__int64)v47_.v47);
  }
  else {
    v44 = *(__int64 (**)(_DWORD*, __int64, _QWORD, _QWORD*, __int64, __int64))(
        *(_QWORD*)(a1 + 64) + 19248LL);
    v45 = CudaDriverRoutine_98340(a1);
    v46 = (_DWORD*)v44(v3, v45, *(_QWORD*)(v10 + 8), v47_.v47, 256, 2);
    result = CudaDriverRoutine_1f7630(v46, *(_QWORD*)(v10 + 8), 1);
  }
  *a2 = result;
  return result;
}

__int64 cuda_driver_1eef00(__int64 a1, __int64 a2, unsigned int a3, int a4,
                           _DWORD* a5, __int64 a6, int* a7)
{
  unsigned __int64 v11;
  void* v12;
  int v13;
  int v14;
  int v15;
  int v16;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  int v26;
  int v27;
  unsigned int v28;
  int v29;
  __int64 v30;
  int v31;
  int v32;
  __int64 v33;

  v11 = a3;
  v12 = CudaDriverData_1422118;
  if ((*(unsigned __int8*)(a1 + 0x3FFF) |
       *((unsigned __int8*)&CudaDriverRoutine_743c +
         (_QWORD)CudaDriverData_1422118 + 2)) != 0) {
    v13 = 32;
  }
  else {
    v13 = 544;
  }
  if (a4 != 0) {
    v14 = a4 + 16;
  }
  else {
    v14 = 0;
  }
  v15 = v13 + v14;
  *(_DWORD*)(a6 + 28) = a5[7];
  *(_DWORD*)(a6 + 32) = a5[8];
  *(_DWORD*)(a6 + 36) = a5[9];
  *a7 = 1;
  if (a2 == 0) {
    if (a5[7] > 0x3FFu) {
      v16 = 0;
      v22 = 2;
      *(_DWORD*)(a6 + 28) = 0;
      goto LABEL_28;
    }
    v16 = 0;
    if (a5[8] == ((v15 + a3 + 15) & 0xFFFFFFF0)) {
      goto LABEL_27;
    }
  LABEL_24:
    v24 = *(_DWORD*)(a6 + 28);
    if (v24 <= 0x80000) {
      goto LABEL_29;
    }
    return 999;
  }
  v16 = *(_DWORD*)(a2 + 364);
  if (a3 <= (unsigned int)CudaDriverRoutine_bc3f0(a2)) {
    v11 = (unsigned int)CudaDriverRoutine_bc3f0(a2);
  }
  if (CudaDriverStub_b9300(a2)) {
    v18 = *(_QWORD*)(a2 + 32);
    v19 = *(unsigned int*)(v18 + 332);
    v20 = *(unsigned int*)(v18 + 336);
    v12 = CudaDriverData_1422118;
    if (v11 <= v19) {
      v11 = v19;
    }
    if ((unsigned int)v20 > 0x2000 && v11 <= v20) {
      LODWORD(v11) = v20;
    }
    if (*(_BYTE*)(a1 + 1301) != 0) {
      goto LABEL_17;
    }
  }
  else {
    v12 = CudaDriverData_1422118;
    if (*(_BYTE*)(a1 + 1301) != 0) {
    LABEL_17:
      v21 = *(_DWORD*)(a2 + 72);
    LABEL_22:
      v23 = (v21 + 15) & 0xFFFFFFF0;
      v22 = 1;
      *(_DWORD*)(a6 + 28) = v23;
      goto LABEL_28;
    }
  }
  v21 = *(_DWORD*)(a2 + 72);
  if (a5[7] < v21) {
    goto LABEL_22;
  }
  if (a5[8] != ((v15 + (_DWORD)v11 + 15) & 0xFFFFFFF0)) {
    goto LABEL_24;
  }
LABEL_27:
  v22 = 3;
LABEL_28:
  *a7 = v22;
  v24 = *(_DWORD*)(a6 + 28);
  if (v24 > 0x80000) {
    return 999;
  }
LABEL_29:
  if ((*(unsigned __int8*)(a1 + 0x3FFF) |
       *((unsigned __int8*)&CudaDriverRoutine_743c + (_QWORD)v12 + 2)) != 0) {
    v26 = 32;
  }
  else {
    v26 = 544;
  }
  v27 = v14 + v11 + v26 + 15;
  v28 = v27 & 0xFFFFFFF0;
  if (v16 != 0 || 2 * v28 <= 0x2000) {
    v29 = v16 + 511;
    if ((unsigned int)(v16 + 511) <= 0x2000) {
      v29 = 0x2000;
    }
    if (v28 <= 0x80000) {
      goto LABEL_35;
    }
  LABEL_40:
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Requested stack size exceeds limit\n");
    return 1;
  }
  v29 = 2 * v28 + 511;
  if (v28 > 0x80000) {
    goto LABEL_40;
  }
LABEL_35:
  if ((v29 & 0xFFFFFE00) > 0x100000) {
    return 1;
  }
  v30 = *(_QWORD*)(a1 + 64);
  v31 = *(_DWORD*)(v30 + 3924);
  LODWORD(v30) = *(_DWORD*)(v30 + 3756);
  v32 = (v29 | 0x1FF) + v31 * (v28 + v24);
  v33 = *(unsigned int*)(a1 + 164);
  *(_DWORD*)(a6 + 32) = v28;
  *(_DWORD*)(a6 + 36) = v29 & 0xFFFFFE00;
  *(_DWORD*)(a6 + 16) = v28 - v15;
  *(_DWORD*)(a6 + 40) = v32 & 0xFFFFFE00;
  *(_QWORD*)(a6 + 8) =
      (((unsigned int)v30 * (unsigned __int64)(v32 & 0xFFFFFE00) + 0x7FFF) &
       0xFFFFFFFFFFFF8000LL) *
      v33;
  *(_DWORD*)(a6 + 20) =
      ((((v29 & 0xFFFFFE00) + 32 * ((v27 | 0xF) + v24)) & 0xFFFFFE00) + 33791) &
      0xFFFFFE00;
  *(_DWORD*)(a6 + 24) = a4;
  return 0;
}

__int64 cuda_driver_1ef200(__int64 a1, unsigned int* a2, unsigned __int64* a3,
                           bool* a4)
{
  unsigned int v8;
  bool v9;
  int v10;
  int v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  __int64 result;
  unsigned __int64 v19;

  v8 = (*(_DWORD*)(a1 + 72) + 15) & 0xFFFFFFF0;
  v9 = v8 <= 0x80000;
  v10 = CudaDriverRoutine_bc3f0(a1);
  v11 = *(_DWORD*)(a1 + 364);
  v12 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL);
  v13 = *(_DWORD*)(v12 + 1312);
  if ((*(unsigned __int8*)(v12 + 0x3FFF) |
       *((unsigned __int8*)&CudaDriverRoutine_743c +
         (_QWORD)CudaDriverData_1422118 + 2)) != 0) {
    v14 = 32;
  }
  else {
    v14 = 544;
  }
  if (v13 != 0) {
    v15 = v13 + 16;
  }
  else {
    v15 = 0;
  }
  v16 = (v10 + v15 + v14 + 15) & 0xFFFFFFF0;
  if (v11 == 0 && 2 * v16 > 0x2000) {
    v17 = 2 * v16 + 511;
    if (v16 <= 0x80000) {
      goto LABEL_10;
    }
  LABEL_16:
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Requested stack size exceeds limit\n");
  LABEL_17:
    v19 = 0;
    v16 = 0;
    v9 = false;
    result = 1;
    if (a2 == nullptr) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  v17 = v11 + 511;
  if (v17 <= 0x2000) {
    v17 = 0x2000;
  }
  if (v16 > 0x80000) {
    goto LABEL_16;
  }
LABEL_10:
  if ((v17 & 0xFFFFFE00) > 0x100000) {
    goto LABEL_17;
  }
  result = 0;
  v19 = ((*(unsigned int*)(*(_QWORD*)(v12 + 64) + 3756LL) *
              (unsigned __int64)(((v17 | 0x1F0) +
                                  *(_DWORD*)(*(_QWORD*)(v12 + 64) + 3924LL) *
                                      (v16 + v8)) &
                                 0xFFFFFE00) +
          0x7FFF) &
         0xFFFFFFFFFFFF8000LL) *
        *(unsigned int*)(v12 + 164);
  if (a2 != nullptr) {
  LABEL_18:
    *a2 = v16;
  }
LABEL_19:
  if (a3 != nullptr) {
    *a3 = v19;
  }
  if (a4 != nullptr) {
    *a4 = v9;
  }
  return result;
}

__int64 cuda_driver_1ef370(__int64 a1, int a2, int a3, unsigned int* a4,
                           unsigned __int64* a5, char* a6)
{
  int v6;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  unsigned __int64 v14;
  char v15;

  v6 = *(_DWORD*)(a1 + 1312);
  if ((*(unsigned __int8*)(a1 + 0x3FFF) |
       *((unsigned __int8*)&CudaDriverRoutine_743c +
         (_QWORD)CudaDriverData_1422118 + 2)) != 0) {
    v10 = 32;
  }
  else {
    v10 = 544;
  }
  if (v6 != 0) {
    v11 = v6 + 16;
  }
  else {
    v11 = 0;
  }
  v12 = (a3 + v11 + v10 + 15) & 0xFFFFFFF0;
  if (2 * v12 <= 0x2000) {
    v13 = 0x2000;
  }
  else {
    v13 = 2 * v12 + 511;
  }
  if (v12 > 0x80000) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Requested stack size exceeds limit\n");
    v14 = 0;
    v12 = 0;
    v15 = 0;
    if (a4 == nullptr) {
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  if ((v13 & 0x3FFE00u) > 0x100000) {
    v14 = 0;
    v12 = 0;
    v15 = 0;
    if (a4 == nullptr) {
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  v14 = ((*(unsigned int*)(*(_QWORD*)(a1 + 64) + 3756LL) *
              (unsigned __int64)(((v13 | 0x1FF) +
                                  *(_DWORD*)(*(_QWORD*)(a1 + 64) + 3924LL) *
                                      (v12 + a2)) &
                                 0xFFFFFE00) +
          0x7FFF) &
         0xFFFFFFFFFFFF8000LL) *
        *(unsigned int*)(a1 + 164);
  v15 = 1;
  if (a4 != nullptr) {
  LABEL_15:
    *a4 = v12;
  }
LABEL_16:
  if (a5 != nullptr) {
    *a5 = v14;
  }
  if (a6 != nullptr) {
    *a6 = v15;
  }
  return 0;
}

__int64 cuda_driver_1f0500(__int64 a1)
{
  __int64 v1;
  int v2;
  int v3;
  int v4;
  int v6;
  int v7;
  int v8;

  v1 = *(unsigned int*)(a1 + 36);
  if ((unsigned int)v1 > 4) {
    return 1;
  }
  v2 = *(_DWORD*)(a1 + 40);
  v3 = CudaDriverData_1130110[v1];
  *(_DWORD*)(a1 + 56) = v3;
  if (v2 <= 1) {
    if (v2 == 0) {
      goto LABEL_14;
    }
    if (v2 != 1) {
      return 1;
    }
    v4 = 16;
  }
  else {
    switch (v2) {
    case 4:
      v4 = 32;
      break;
    case 3:
      v4 = 24;
      break;
    case 2:
      v4 = 8;
      break;
    default:
      return 1;
    }
  }
  v3 |= v4;
  *(_DWORD*)(a1 + 56) = v3;
LABEL_14:
  v6 = *(_DWORD*)(a1 + 44);
  if (v6 <= 1) {
    if (v6 == 0) {
      goto LABEL_24;
    }
    if (v6 == 1) {
      v3 |= 0x80u;
      goto LABEL_24;
    }
    return 1;
  }
  if (v6 == 2) {
    v3 |= 0x40u;
    goto LABEL_24;
  }
  if (v6 == 3) {
    v3 |= 0xC0u;
    goto LABEL_24;
  }
  if (v6 != 4) {
    return 1;
  }
  v3 |= 0x100u;
LABEL_24:
  v7 = v3 | 0x2000;
  if (*(_DWORD*)(a1 + 48) == 1) {
    v8 = 98;
  }
  else {
    v8 = 81;
  }
  *(_DWORD*)(a1 + 56) = v7;
  *(_DWORD*)(a1 + 60) = v8;
  if (*(_BYTE*)(a1 + 52) != 0) {
    *(_DWORD*)(a1 + 60) = v8 | 0x2000000;
  }
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 64) = &CudaDriverData_f00000;
  return 0;
}

__int64 cuda_driver_1f12e0(__int64 result, unsigned __int64 a2, unsigned int a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  int64x2_t v7;
  float* v8;
  __int64 v9;
  int64x2_t v10;
  int64x2_t v11;
  int64x2_t v12;
  int64x2_t v15;
  __int64 v16;
  int64x2_t v17;
  int64x2_t v18;
  float* v19;
  int32x2_t v20;
  unsigned __int64 v21;
  float32x4x4_t v22;
  float32x4x4_t v23;

  v3 = a2 + a3;
  if (a2 < v3) {
    v4 = a2 + 256;
    if (v3 > a2 + 256) {
      v4 = a2 + a3;
    }
    v5 = v4 + ~a2;
    if (v5 < 0x700) {
      v6 = a2;
      do {
      LABEL_9:
        v21 = v6 >> 8;
        *(_QWORD*)(result + 8) = 0x1200120AFLL;
        v6 += 256LL;
        *(_DWORD*)result = 536944813;
        *(_DWORD*)(result + 4) = v21;
        result += 16;
      } while (v6 < v3);
      return result;
    }
    v7 = vdupq_n_s64(a2);
    v8 = (float*)(result + 64);
    v9 = (v5 >> 8) + 1;
    v6 = a2 + ((v9 & 0x1FFFFFFFFFFFFF8LL) << 8);
    result += 16 * (v9 & 0x1FFFFFFFFFFFFF8LL);
    v10 = vaddq_s64(v7, COERCE_AS(int64x2_t, CudaDriverData_11161c0));
    v11 = vaddq_s64(v7, COERCE_AS(int64x2_t, CudaDriverData_11157f0));
    v12 = vdupq_n_s64(0x400u);
    v22.val[0] = vdupq_n_s32(0x200120ADu);
    v22.val[2] = vdupq_n_s32(0x200120AFu);
    LANES128(v22.val[3]).n128_u64[0] = 0x100000001LL;
    LANES128(v22.val[3]).n128_u64[1] = 0x100000001LL;
    v15 = vdupq_n_s64(0x800u);
    v16 = v9 & 0x1FFFFFFFFFFFFF8LL;
    do {
      v17 = vaddq_s64(v11, v12);
      v18 = vaddq_s64(v10, v12);
      v19 = v8 - 16;
      v16 -= 8;
      LANES64(v20).n64_u64[0] = LANES64_OF(vshrn_n_s64(v11, 8u)).n64_u64[0];
      v11 = vaddq_s64(v11, v15);
      v23.val[1] = vshrn_high_n_s64(v20, v10, 8u);
      v10 = vaddq_s64(v10, v15);
      v22.val[1] = vshrn_high_n_s64(vshrn_n_s64(v17, 8u), v18, 8u);
      v23.val[0] = v22.val[0];
      v23.val[2] = v22.val[2];
      v23.val[3] = v22.val[3];
      vst4q_f32(v8, v22);
      v8 += 32;
      vst4q_f32(v19, v23);
    } while (v16 != 0);
    if (v9 != (v9 & 0x1FFFFFFFFFFFFF8LL)) {
      goto LABEL_9;
    }
  }
  return result;
}

__int64 cuda_driver_1f1480(__int64 a1)
{
  __int64 result;

  result = 67108320;
  if (*(_QWORD*)((char*)((_UNKNOWN*)0x1550LL) +
                 (_QWORD)CudaDriverData_1422118) != 0 &&
      *(_BYTE*)(*(_QWORD*)(a1 + 80) + 57LL) == 0) {
    return *(_QWORD*)((char*)((_UNKNOWN*)0x1528LL) +
                      (_QWORD)CudaDriverData_1422118) +
           16776672LL;
  }
  return result;
}

__int64 cuda_driver_1f14c0(__int64 a1)
{
  __int64 result;

  result = 67108324;
  if (*(_QWORD*)((char*)((_UNKNOWN*)0x1550LL) +
                 (_QWORD)CudaDriverData_1422118) != 0 &&
      *(_BYTE*)(*(_QWORD*)(a1 + 80) + 57LL) == 0) {
    return *(_QWORD*)((char*)((_UNKNOWN*)0x1528LL) +
                      (_QWORD)CudaDriverData_1422118) +
           16776676LL;
  }
  return result;
}

__int64 cuda_driver_1f2120(__int64 a1)
{
  __int64 v2;
  int64x2_t v3;
  unsigned int v4;
  char v5;
  void* v6;
  int v7;
  int v8;
  int v9;
  __int64 result;
  unsigned int v11;
  unsigned int v12;
  int v13;
  char v14;
  int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  int v21;
  __int64 (*v22)();

  *(_BYTE*)(a1 + 3744) = 0;
  *(_DWORD*)(a1 + 4120) = 0;
  *(_DWORD*)(a1 + 4228) = 0;
  *(_DWORD*)(a1 + 3736) = 1;
  *(_DWORD*)(a1 + 3432) = 1;
  *(int32x2_t*)(a1 + 4152) = vdup_n_s32(0x18000u);
  *(_OWORD*)(a1 + 3756) = CudaDriverData_1115480;
  *(_OWORD*)(a1 + 3788) = CudaDriverData_1115a70;
  *(_OWORD*)(a1 + 3772) = CudaDriverData_1115f70;
  *(_OWORD*)(a1 + 3804) = CudaDriverData_1116390;
  *(_OWORD*)(a1 + 3820) = CudaDriverData_1115810;
  *(_OWORD*)(a1 + 3836) = CudaDriverData_11156d0;
  *(_OWORD*)(a1 + 3852) = CudaDriverData_1115620;
  *(_OWORD*)(a1 + 3868) = CudaDriverData_1115570;
  *(_QWORD*)(a1 + 17128) = 0x1000000;
  *(_OWORD*)(a1 + 3884) = CudaDriverData_11160c0;
  *(_OWORD*)(a1 + 3900) = CudaDriverData_1115c80;
  *(_OWORD*)(a1 + 3916) = CudaDriverData_1115b20;
  *(_OWORD*)(a1 + 3932) = CudaDriverData_1115710;
  *(_OWORD*)(a1 + 3948) = CudaDriverData_1115400;
  *(_OWORD*)(a1 + 3964) = CudaDriverData_1115980;
  *(_OWORD*)(a1 + 3980) = CudaDriverData_1116240;
  *(_OWORD*)(a1 + 4076) = CudaDriverData_11158c0;
  *(_OWORD*)(a1 + 3996) = CudaDriverData_1115460;
  *(_OWORD*)(a1 + 4012) = CudaDriverData_1116250;
  *(_OWORD*)(a1 + 4028) = CudaDriverData_11154b0;
  *(_OWORD*)(a1 + 4044) = CudaDriverData_1115470;
  *(_DWORD*)(a1 + 4108) = 0x7FFFFFFF;
  *(_OWORD*)(a1 + 4092) = CudaDriverData_1115c30;
  *(_OWORD*)(a1 + 4132) = CudaDriverData_1115d30;
  *(_OWORD*)(a1 + 4060) = CudaDriverData_1115b50;
  *(_DWORD*)(a1 + 4172) = 2;
  *(_DWORD*)(a1 + 14472) = 2;
  *(_DWORD*)(a1 + 14764) = 2;
  *(_QWORD*)(a1 + 4164) = 0x200010000LL;
  *(_QWORD*)(a1 + 4288) = 0x10000000000LL;
  *(_QWORD*)(a1 + 17120) = 16;
  v2 = a1 + 16836;
  *(_BYTE*)(a1 + 16840) = 1;
  *(_BYTE*)(a1 + 17080) = 0;
  *(_DWORD*)(a1 + 16836) = 0;
  *(_WORD*)(a1 + 17013) = 0;
  *(_OWORD*)(a1 + 4192) = CudaDriverData_1115f00;
  v3 = vdupq_n_s64(0x1000000u);
  *(int64x2_t*)(a1 + 17136) = v3;
  *(int64x2_t*)(a1 + 17152) = v3;
  *(_DWORD*)(a1 + 3448) = 4;
  *(_OWORD*)(a1 + 3384) = CudaDriverData_11160d0;
  *(_DWORD*)(a1 + 3408) = 140;
  *(_DWORD*)(a1 + 3440) = 8;
  *(_DWORD*)(a1 + 17016) = 8;
  *(_QWORD*)(a1 + 3456) = 0x2000000020LL;
  *(_OWORD*)(a1 + 11732) = CudaDriverData_1115a00;
  *(_OWORD*)(a1 + 11748) = CudaDriverData_1115450;
  *(_OWORD*)(a1 + 11764) = CudaDriverData_11162c0;
  *(_OWORD*)(a1 + 11780) = CudaDriverData_1116010;
  v4 = *(_DWORD*)(a1 + 16976) & 0xFFFF841A;
  *(_OWORD*)(a1 + 11700) = CudaDriverData_1115cc0;
  *(_OWORD*)(a1 + 11716) = CudaDriverData_1115360;
  *(_DWORD*)(a1 + 16976) = v4 | 0x7B64;
  v5 = *(_BYTE*)(a1 + 16856) | 1;
  LOBYTE(v4) = *(_BYTE*)(a1 + 16996) & 0xF9 | 2;
  *(_OWORD*)(a1 + 4368) = CudaDriverData_11162d0;
  *(_BYTE*)(a1 + 16856) = v5;
  *(_BYTE*)(a1 + 16996) = v4;
  *(_QWORD*)(a1 + 17000) = 1;
  *(_QWORD*)(a1 + 17024) = 0x4000000080LL;
  v6 = CudaDriverData_1422118;
  if ((*(_WORD*)((_BYTE*)((_UNKNOWN*)0x1870LL) +
                 (_QWORD)CudaDriverData_1422118) &
       1) == 0 ||
      *(_DWORD*)(a1 + 21864) == 4) {
    *(_WORD*)(a1 + 16848) |= 8u;
  }
  if ((*((_BYTE*)&CudaDriverRoutine_4350 + (_QWORD)v6) & 0x10) != 0) {
    *(_WORD*)(a1 + 16848) |= 8u;
  }
  *(_BYTE*)(a1 + 17044) = 0;
  *(_DWORD*)(a1 + 17020) = 2;
  *(_DWORD*)(a1 + 17040) = 32;
  *(_BYTE*)(a1 + 17062) = 1;
  *(_DWORD*)(a1 + 17072) = 2048;
  *(_WORD*)(a1 + 17098) = 257;
  *(_WORD*)(a1 + 17060) = 256;
  *(_DWORD*)(a1 + 17064) = 24;
  *(_QWORD*)(a1 + 17104) = 580;
  v7 = *(_DWORD*)((char*)&CudaDriverRoutine_4464 + (_QWORD)v6);
  *(_BYTE*)(a1 + 17332) = 1;
  *(_DWORD*)(a1 + 17112) = v7;
  LOBYTE(v7) = *(_BYTE*)(a1 + 17272);
  *(_OWORD*)(a1 + 17168) = CudaDriverData_1115dd0;
  *(_BYTE*)(a1 + 17272) = v7 & 0xFD;
  LOBYTE(v7) = *(_BYTE*)(a1 + 17280);
  *(_OWORD*)(a1 + 17184) = CudaDriverData_11157d0;
  *(_BYTE*)(a1 + 17280) = v7 & 0xFE;
  *(_WORD*)(a1 + 17281) = 258;
  *(_QWORD*)(a1 + 17320) = 48;
  *(_DWORD*)(a1 + 14844) = CudaDriverRoutine_1f18f0((_DWORD*)a1);
  *(_DWORD*)(a1 + 14848) = CudaDriverRoutine_1f18f0((_DWORD*)a1);
  *(_DWORD*)(a1 + 14852) = CudaDriverRoutine_1f18f0((_DWORD*)a1);
  v8 = CudaDriverRoutine_1f18f0((_DWORD*)a1);
  v9 = *(_DWORD*)(a1 + 3148);
  *(_DWORD*)(a1 + 14856) = v8;
  if ((unsigned int)(v9 - 29) <= 4) {
    *(_DWORD*)(v2 + 200) = 1;
    *(_DWORD*)(a1 + 4224) = 32;
    *(_DWORD*)(a1 + 3384) = 49600;
    *(_DWORD*)(a1 + 3392) = 49263;
    *(_QWORD*)(a1 + 4196) = 0x300000002LL;
    *(_DWORD*)(v2 + 140) |= 0x10u;
    *(_DWORD*)(a1 + 4100) = 49152;
  }
  result = 100;
  if (v9 <= 30) {
    switch (v9) {
    case 28:
      *(_DWORD*)(a1 + 3384) = 49344;
      *(_DWORD*)(a1 + 3392) = 49263;
      *(_DWORD*)(a1 + 3480) = 6;
      *(_DWORD*)(a1 + 3724) = 30;
      if ((*((_BYTE*)((_UNKNOWN*)0x1D88LL) + (_QWORD)v6) & 1) != 0) {
        v16 = *(_DWORD*)(a1 + 3736);
        if (*(_BYTE*)(a1 + 3744) != 0) {
          v17 = 0;
        }
        else {
          v17 = 2;
        }
        v18 = 0x80 / v16;
      }
      else {
        v16 = 2;
        v17 = 0;
        *(_DWORD*)(a1 + 3736) = 2;
        *(_BYTE*)(a1 + 3744) = 1;
        v18 = 64;
      }
      *(_DWORD*)(v2 + 200) = v17;
      *(_DWORD*)(a1 + 3756) = v18;
      v13 = 1;
      *(_BYTE*)(v2 + 208) = 1;
      *(_DWORD*)(v2 + 212) = 16;
      v12 = 30;
      *(_DWORD*)(a1 + 3768) = 0x40 / v16;
      v20 = 0x20000 / v16;
      v11 = 6;
      *(_DWORD*)(a1 + 4152) = v20;
      *(_DWORD*)(a1 + 4156) = v20;
      *(_DWORD*)(a1 + 4164) = v20;
      *(_DWORD*)(a1 + 4180) = 8;
      *(_DWORD*)(a1 + 14472) = 5;
      break;
    case 29:
      v11 = 6;
      v12 = 30;
      v13 = 1;
      *(_DWORD*)(a1 + 3480) = 6;
      *(_DWORD*)(a1 + 3724) = 30;
      *(_DWORD*)(a1 + 4180) = 6;
      break;
    case 30:
      v11 = 4;
      v12 = 20;
      v14 = 0;
      v13 = 1;
      *(_DWORD*)(a1 + 3480) = 4;
      *(_DWORD*)(a1 + 3724) = 20;
      *(_DWORD*)(a1 + 4180) = 4;
      goto LABEL_31;
    default:
      return result;
    }
    v14 = 1;
    goto LABEL_31;
  }
  if (v9 > 32) {
    if (v9 == 33) {
      v15 = 3;
      *(_DWORD*)(a1 + 3480) = 1;
      *(_DWORD*)(a1 + 3724) = 3;
      *(_DWORD*)(a1 + 4180) = 1;
    }
    else {
      if (v9 != 34) {
        return result;
      }
      *(_DWORD*)(a1 + 3384) = 49344;
      *(_DWORD*)v2 = 1;
      *(_DWORD*)(a1 + 3480) = 1;
      v15 = 2;
      *(_DWORD*)(a1 + 4168) = 1;
      *(_DWORD*)(a1 + 14472) = 1;
      *(_DWORD*)(a1 + 4180) = 1;
      *(_DWORD*)(v2 + 200) = 1;
      *(_DWORD*)(a1 + 3760) = 0x8000;
      *(_DWORD*)(a1 + 3448) = 1;
      *(_DWORD*)(a1 + 3724) = 2;
      *(_DWORD*)(a1 + 3440) = 4;
      *(_DWORD*)(v2 + 236) = 1000;
      *(_QWORD*)(a1 + 4152) = 0x1000000010000LL;
    }
    v19 = *(_DWORD*)(a1 + 3736);
    *(_DWORD*)(a1 + 3484) = v15;
    *(_DWORD*)(a1 + 3496) = 0;
    *(_QWORD*)(a1 + 3488) = 0;
    *(_DWORD*)(a1 + 3732) = v19 * v15;
    goto LABEL_33;
  }
  v11 = 2;
  if (v9 == 31) {
    v12 = 10;
    v13 = 0;
    v14 = 0;
    *(_DWORD*)(a1 + 3480) = 2;
    *(_DWORD*)(a1 + 3724) = 10;
    *(_DWORD*)(a1 + 4180) = 3;
  }
  else {
    v12 = 6;
    v13 = 0;
    v14 = 0;
    *(_DWORD*)(a1 + 3480) = 2;
    *(_DWORD*)(a1 + 3724) = 6;
    *(_DWORD*)(a1 + 4180) = 2;
  }
LABEL_31:
  v21 = v12 / v11;
  *(_DWORD*)(a1 + 3732) = *(_DWORD*)(a1 + 3736) * v12;
  *(_DWORD*)(a1 + 3484) = v21;
  *(_DWORD*)(a1 + 3488) = v21;
  if (v13 == 0) {
    *(_QWORD*)(a1 + 3492) = 0;
    if ((v14 & 1) == 0) {
      goto LABEL_33;
    }
  LABEL_35:
    *(_DWORD*)(a1 + 3500) = v21;
    goto LABEL_36;
  }
  *(_DWORD*)(a1 + 3492) = v21;
  *(_DWORD*)(a1 + 3496) = v21;
  if ((v14 & 1) != 0) {
    goto LABEL_35;
  }
LABEL_33:
  v21 = 0;
  *(_DWORD*)(a1 + 3500) = 0;
LABEL_36:
  *(_DWORD*)(a1 + 3504) = v21;
  *(_DWORD*)(a1 + 14752) = 0x200000;
  v22 = CudaDriverData_1424798[0];
  *(_BYTE*)(v2 + 492) = 0;
  *(_QWORD*)(a1 + 18360) = v22;
  *(_QWORD*)(a1 + 4280) = 0x2000000000000LL;
  *(_OWORD*)(a1 + 3508) = (__typeof__(*(_OWORD*)(a1 + 3508))){0};
  *(_OWORD*)(a1 + 3524) = (__typeof__(*(_OWORD*)(a1 + 3524))){0};
  *(_QWORD*)(a1 + 3540) = 0;
  *(_DWORD*)(v2 + 140) |= 0x18000u;
  return 0;
}

__int64 cuda_driver_1f4000(__int64 a1)
{
  __int64 v2;
  int v3;
  int v4;

  v4 = 0;
  v3 = 0;
  v2 = 0;
  __builtin_arm_dmb(0xDu);
  return (*(__int64 (**)(__int64, int*))(*(_QWORD*)(a1 + 32306416) + 264LL))(
      a1, &v4);
}

__int64 cuda_driver_1f42f0(__int64 a1, _DWORD* a2, int a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  int v10;

  *a2 = 0;
  v6 = a1 + 23375544;
  if (*(_DWORD*)(a1 + 1084) != 0) {
    (*(void (**)(__int64))(a1 + 23376120))(a1);
  }
  v7 = *(_QWORD*)(a1 + 24);
  *(_DWORD*)(a1 + 1084) = 0;
  if (!CudaDriverRoutine_1a0620(v7) ||
      ((v8 = *(_QWORD*)(a1 + 24), v10 = 0, v8 == 0) ||
       (_DWORD)(result = CudaDriverRoutine_19b630(v8, 1u, 0, 0, 0, 0,
                                                  (__int64)&v10, 4)) == 0) &&
          (_DWORD)(result = (*(__int64 (**)(__int64, __int64, _QWORD))(
                       v6 + 560))(a1, 1, 0)) == 0) {
    __builtin_arm_dmb(0xEu);
    if (a3 != 0) {
      if (CudaDriverRoutine_1a0620(*(_QWORD*)(a1 + 24))) {
        (*(void (**)(_QWORD, __int64))v6)(*(_QWORD*)(a1 + 24), 2);
      }
      goto LABEL_12;
    }
    result = (*(__int64 (**)(__int64, _DWORD*))(*(_QWORD*)(a1 + 32306416) +
                                                280LL))(a1, a2);
    if ((_DWORD)result == 0) {
    LABEL_12:
      *a2 = 1;
      return 0;
    }
  }
  return result;
}

__int64 cuda_driver_1f5670(_DWORD** a1, __int64 a2)
{
  __int64 v4;
  _DWORD* v5;
  __int64 v6;
  __int64 v7;
  _DWORD* v8;
  _DWORD* v9;
  void* v10;
  char v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  _BOOL8 v18;

  v4 = CudaDriverStub_5a6f0(a2);
  v5 = *a1;
  v6 = v4;
  v7 = CudaDriverRoutine_1f1440(v4);
  if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)(v6 + 64) + 20792LL))(a2) !=
      0) {
    *v5 = 536944640;
    v5[1] = CudaDriverRoutine_5bba0(a2, 0);
    v5 += 2;
  }
  v5[2] = 536944808;
  v5[3] = HIDWORD(v7);
  v5[4] = 536944809;
  v5[5] = v7;
  *(_QWORD*)v5 = 536944704;
  v8 = *(_DWORD**)(v6 + 64);
  if ((v8[846] | 0x100) == 0xC1C0) {
    v5[6] = 536944836;
    v5[7] = *(unsigned __int8*)(*(_QWORD*)(v6 + 64) + 3164LL) |
            ((unsigned __int8)*(_DWORD*)(*(_QWORD*)(v6 + 64) + 3160LL) << 8);
    v9 = v5 + 8;
    v8 = *(_DWORD**)(v6 + 64);
  }
  else {
    v9 = v5 + 6;
  }
  v10 = CudaDriverData_1422118;
  v11 = *((_BYTE*)((_UNKNOWN*)0x1848LL) + (_QWORD)CudaDriverData_1422118);
  v12 = v8[939] * v8[933];
  v13 =
      *(_DWORD*)((char*)((_UNKNOWN*)0x184CLL) + (_QWORD)CudaDriverData_1422118);
  v9[64] = 536944786;
  v9[66] = 536944786;
  v9[68] = 536944786;
  v9[70] = 536944786;
  v9[72] = 536944786;
  v9[74] = 536944786;
  v9[76] = 536944786;
  v9[78] = 536944786;
  v9[80] = 536944786;
  v9[82] = 536944786;
  v9[84] = 536944786;
  v9[86] = 536944786;
  v9[88] = 536944786;
  v9[90] = 536944786;
  v9[92] = 536944786;
  v9[94] = 536944786;
  v9[96] = 536944786;
  v9[98] = 536944786;
  v9[100] = 536944786;
  v9[102] = 536944786;
  if ((v11 & 1) != 0) {
    LOWORD(v12) = v13;
  }
  v9[104] = 536944786;
  v9[106] = 536944786;
  v9[108] = 536944786;
  v9[110] = 536944786;
  v9[112] = 536944786;
  v9[114] = 536944786;
  v9[116] = 536944786;
  v9[118] = 536944786;
  v9[120] = 536944786;
  v9[122] = 536944786;
  v9[124] = 536944786;
  v9[126] = 536944786;
  v9[2] = 536944786;
  v9[3] = ((unsigned __int16)v12 << 8) | 0x3E;
  *v9 = 536944786;
  v9[1] = ((unsigned __int16)v12 << 8) | 0x3F;
  v9[4] = 536944786;
  v9[5] = ((unsigned __int16)v12 << 8) | 0x3D;
  v9[10] = 536944786;
  v9[11] = ((unsigned __int16)v12 << 8) | 0x3A;
  v9[6] = 536944786;
  v9[7] = ((unsigned __int16)v12 << 8) | 0x3C;
  v9[14] = 536944786;
  v9[15] = ((unsigned __int16)v12 << 8) | 0x38;
  v9[8] = 536944786;
  v9[9] = ((unsigned __int16)v12 << 8) | 0x3B;
  v9[18] = 536944786;
  v9[19] = ((unsigned __int16)v12 << 8) | 0x36;
  v9[12] = 536944786;
  v9[13] = ((unsigned __int16)v12 << 8) | 0x39;
  v9[125] = ((unsigned __int16)v12 << 8) | 1;
  v9[16] = 536944786;
  v9[17] = ((unsigned __int16)v12 << 8) | 0x37;
  v9[20] = 536944786;
  v9[21] = ((unsigned __int16)v12 << 8) | 0x35;
  v9[22] = 536944786;
  v9[23] = ((unsigned __int16)v12 << 8) | 0x34;
  v9[24] = 536944786;
  v9[25] = ((unsigned __int16)v12 << 8) | 0x33;
  v9[26] = 536944786;
  v9[27] = ((unsigned __int16)v12 << 8) | 0x32;
  v9[28] = 536944786;
  v9[29] = ((unsigned __int16)v12 << 8) | 0x31;
  v9[30] = 536944786;
  v9[31] = ((unsigned __int16)v12 << 8) | 0x30;
  v9[32] = 536944786;
  v9[33] = ((unsigned __int16)v12 << 8) | 0x2F;
  v9[34] = 536944786;
  v9[35] = ((unsigned __int16)v12 << 8) | 0x2E;
  v9[36] = 536944786;
  v9[37] = ((unsigned __int16)v12 << 8) | 0x2D;
  v9[38] = 536944786;
  v9[39] = ((unsigned __int16)v12 << 8) | 0x2C;
  v9[40] = 536944786;
  v9[41] = ((unsigned __int16)v12 << 8) | 0x2B;
  v9[42] = 536944786;
  v9[43] = ((unsigned __int16)v12 << 8) | 0x2A;
  v9[44] = 536944786;
  v9[45] = ((unsigned __int16)v12 << 8) | 0x29;
  v9[46] = 536944786;
  v9[47] = ((unsigned __int16)v12 << 8) | 0x28;
  v9[48] = 536944786;
  v9[49] = ((unsigned __int16)v12 << 8) | 0x27;
  v9[50] = 536944786;
  v9[51] = ((unsigned __int16)v12 << 8) | 0x26;
  v9[52] = 536944786;
  v9[53] = ((unsigned __int16)v12 << 8) | 0x25;
  v9[54] = 536944786;
  v9[55] = ((unsigned __int16)v12 << 8) | 0x24;
  v9[56] = 536944786;
  v9[57] = ((unsigned __int16)v12 << 8) | 0x23;
  v9[58] = 536944786;
  v9[59] = ((unsigned __int16)v12 << 8) | 0x22;
  v9[60] = 536944786;
  v9[61] = ((unsigned __int16)v12 << 8) | 0x21;
  v9[62] = 536944786;
  v9[63] = ((unsigned __int16)v12 << 8) | 0x20;
  v9[65] = ((unsigned __int16)v12 << 8) | 0x1F;
  v9[67] = ((unsigned __int16)v12 << 8) | 0x1E;
  v9[69] = ((unsigned __int16)v12 << 8) | 0x1D;
  v9[71] = ((unsigned __int16)v12 << 8) | 0x1C;
  v9[73] = ((unsigned __int16)v12 << 8) | 0x1B;
  v9[75] = ((unsigned __int16)v12 << 8) | 0x1A;
  v9[77] = ((unsigned __int16)v12 << 8) | 0x19;
  v9[79] = ((unsigned __int16)v12 << 8) | 0x18;
  v9[81] = ((unsigned __int16)v12 << 8) | 0x17;
  v9[83] = ((unsigned __int16)v12 << 8) | 0x16;
  v9[85] = ((unsigned __int16)v12 << 8) | 0x15;
  v9[87] = ((unsigned __int16)v12 << 8) | 0x14;
  v9[89] = ((unsigned __int16)v12 << 8) | 0x13;
  v9[91] = ((unsigned __int16)v12 << 8) | 0x12;
  v9[93] = ((unsigned __int16)v12 << 8) | 0x11;
  v9[95] = ((unsigned __int16)v12 << 8) | 0x10;
  v9[97] = ((unsigned __int16)v12 << 8) | 0xF;
  v9[99] = ((unsigned __int16)v12 << 8) | 0xE;
  v9[101] = ((unsigned __int16)v12 << 8) | 0xD;
  v9[103] = ((unsigned __int16)v12 << 8) | 0xC;
  v9[105] = ((unsigned __int16)v12 << 8) | 0xB;
  v9[107] = ((unsigned __int16)v12 << 8) | 0xA;
  v9[109] = ((unsigned __int16)v12 << 8) | 9;
  v9[111] = ((unsigned __int16)v12 << 8) | 8;
  v9[113] = ((unsigned __int16)v12 << 8) | 7;
  v9[115] = ((unsigned __int16)v12 << 8) | 6;
  v9[117] = ((unsigned __int16)v12 << 8) | 5;
  v9[119] = ((unsigned __int16)v12 << 8) | 4;
  v9[121] = ((unsigned __int16)v12 << 8) | 3;
  v9[127] = (unsigned __int16)v12 << 8;
  v9[123] = ((unsigned __int16)v12 << 8) | 2;
  v14 = *(_QWORD*)(v6 + 16104);
  v16 = *(_QWORD*)(v14 + 8);
  v15 = *(_QWORD*)(v14 + 16);
  v9[128] = 537075840;
  v9[130] = v16;
  v9[131] = v15;
  v9[129] = HIDWORD(v16);
  v17 = *((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)v10);
  v18 = (v17 & 4) == 0 || (v17 & 8) != 0;
  *a1 = (_DWORD*)(*(__int64 (**)(__int64, _BOOL8, _DWORD*))(
      *(_QWORD*)(v6 + 64) + 19656LL))(v6, v18, v9 + 132);
  return 0;
}

__int64 cuda_driver_1f5c00(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 result;
  unsigned __int64 v3;
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _DWORD* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  unsigned int v18;
  _BYTE v19[4];
  __int128 v20;
  __int64 v21;
  int v22;

  v19[0] = 0;
  *(_OWORD*)(a1 + 15992) = CudaDriverData_1115f30;
  result = CudaDriverRoutine_9ab30(*(_QWORD*)(a1 + 64), v19);
  if ((_DWORD)result != 0) {
    return result;
  }
  v3 = 512;
  if (v19[0] == 0) {
    v3 = 1024;
  }
  *(_QWORD*)(a1 + 16008) = v3;
  v4 = CudaDriverData_1422118;
  if (*((_BYTE*)&CudaDriverRoutine_7458 + (_QWORD)CudaDriverData_1422118) !=
      0) {
    v5 = vcvtmd_u64_f64(*(double*)((char*)&CudaDriverRoutine_7460 +
                                   (_QWORD)CudaDriverData_1422118) *
                        0x1.0000000000000p+5);
    if (v3 >= v5) {
      v3 = v5;
    }
    *(_QWORD*)(a1 + 16008) = v3;
  }
  *(_QWORD*)(a1 + 16048) = 0;
  *(_DWORD*)(a1 + 1312) = 0;
  *(_QWORD*)(a1 + 16016) = 0x800000;
  v6 = *(_QWORD*)(a1 + 64);
  *(_OWORD*)(a1 + 16032) = CudaDriverData_1115da0;
  LODWORD(v6) = (*(_DWORD*)(v6 + 3756) * *(_DWORD*)(v6 + 3732)) << 10;
  if ((unsigned int)v6 <= 0x100000) {
    v6 = 0x100000;
  }
  else {
    v6 = (unsigned int)v6;
  }
  *(_QWORD*)(a1 + 16024) = v6;
  *(_BYTE*)(a1 + 16316) |= 1u;
  v7 = CudaDriverStub_12e330(2088);
  if (v7 == 0) {
    result = 2;
  LABEL_20:
    v16 = *(__int64**)(a1 + 16104);
    if (v16 == nullptr) {
      return result;
    }
    goto LABEL_23;
  }
  v8 = v7;
  memset_plt(v7, 0, 2088);
  v9 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 16104) = v8;
  v10 = CudaDriverStub_12e330(*(unsigned int*)(v9 + 3808));
  *(_QWORD*)v8 = v10;
  if (v10 != 0) {
    v11 = *(_DWORD**)(a1 + 64);
    v21 = 0;
    v12 = 16LL * (unsigned int)(v11[981] * v11[939] * v11[933]);
    CudaDriverRoutine_ee010((unsigned __int64*)&v20, 0);
    *(_QWORD*)&v20 = v20 & 0xFFFFFFF883FFFFFFLL | 0x11C000000LL;
    result = CudaDriverRoutine_ee030(a1, v12, &v21, &v20);
    if ((_DWORD)result == 0) {
      *(_QWORD*)(v8 + 8) = v21;
      *(_QWORD*)(v8 + 16) = v12;
      *(_BYTE*)(v8 + 2072) = *(_BYTE*)(*(_QWORD*)(a1 + 64) + 17332LL);
      v13 = *(_QWORD*)(a1 + 64);
      v14 = *(_DWORD*)(v13 + 3724);
      *(_DWORD*)(a1 + 160) = v14;
      *(_DWORD*)(a1 + 164) = *(_DWORD*)(v13 + 3736) * v14;
      if (*((_BYTE*)&CudaDriverRoutine_43c8 + (_QWORD)v4) != 0) {
        LODWORD(v20) = 4294824;
        LODWORD(v21) = -1073741824;
        v22 = -1073741824;
        v15 = CudaDriverRoutine_98340(a1);
        if ((unsigned int)CudaDriverRoutine_110820(v15, 2, 1, (__int64)&v20,
                                                   (__int64)&v21, (__int64)&v22,
                                                   0) != 0) {
          puts_plt(
              "cuiPriRegWriteMasked32 failed to disable membar optimization");
        }
      }
      return 0;
    }
    goto LABEL_20;
  }
  result = 2;
  v16 = *(__int64**)(a1 + 16104);
  if (v16 == nullptr) {
    return result;
  }
LABEL_23:
  v17 = v16[1];
  v18 = result;
  if (v17 != 0) {
    CudaDriverRoutine_ee2a0(a1, v17);
  }
  if (*v16 != 0) {
    CudaDriverRoutine_12e340(*v16);
  }
  memset_plt(v16, 0, 2088);
  CudaDriverRoutine_12e340((__int64)v16);
  *(_QWORD*)(a1 + 16104) = 0;
  return v18;
}

__int64 cuda_driver_1f5fb0(int* a1)
{
  return cuda_driver_194b20(
      a1, *((_BYTE*)((_UNKNOWN*)0x1504LL) + (_QWORD)CudaDriverData_1422118));
}

double cuda_driver_1f6060(__int64 a1, __int64 a2, char a3)
{

#pragma clang fp contract(off)
  __int64 v5;
  int v6;

  v5 = CudaDriverStub_1223e0(*(_QWORD*)(a2 + 1344));
  *(_DWORD*)(a1 + 8) = v5;
  if (a3 != 0) {
    v6 = 80;
  }
  else {
    v6 = 48;
  }
  *(_DWORD*)(a1 + 20) = v6;
  *(_DWORD*)a1 = 537100432;
  *(_DWORD*)(a1 + 4) = HIDWORD(v5) & 0x1FFFF;
  *(_QWORD*)(a1 + 12) = 0x200180C000000000LL;
  return 0x1.180c000000000p-511;
}

__int64 cuda_driver_1f60d0(__int64 a1, __int64 a2, __int64 a3, __int64* a4,
                           __int64 a5)
{
  __int64 v5;
  int v11;
  __int64 result;
  unsigned int v13;
  __int64 v14;
  int v15;
  unsigned int v16;
  __int64 v17;
  unsigned int v18;
  int v19;
  int v20;
  __int64 v21;
  int v22;
  int v23;
  char v24[4];
  int v25;
  struct {
    int v26;
    char gap36_[4];
    __int64 v27;
    __int64 v28;
    __int64 v29;
    char gap64_[4];
    unsigned int v30;
    int v31;
    int v32;
    int v33;
    int v34;
    int v35;
    int v36;
    int v37;
    char gap100_[4];
    __int64 v38;
    __int64 v39;
    int v40;
    int v41;
    int v42;
    char gap132_[4];
    __int64* v43;
    char gap144_[8];
    int v44;
  } v26_;

  v5 = *a4;
  v25 = 0;
  v24[0] = 0;
  a4[1] = v5;
  a4[3] = v5 + 256;
  *(_DWORD*)(v5 + 576) = -1;
  v11 = CudaDriverRoutine_99f40(*(_QWORD*)(a1 + 64), (_DWORD*)(a5 + 16),
                                *((_DWORD*)a4 + 72));
  result = CudaDriverRoutine_10a2a0(
      a1, a2, (unsigned int*)a5,
      *((_DWORD*)a4 + 43) * *((_DWORD*)a4 + 42) * *((_DWORD*)a4 + 44),
      *((unsigned int*)a4 + 72), &v25, v24, nullptr, &v23, nullptr);
  if ((_DWORD)result == 0) {
    if (v25 == 0) {
      return 701;
    }
    v13 = *(_DWORD*)(*(_QWORD*)(a1 + 64) + 3800LL) + *((_DWORD*)a4 + 69);
    if (v13 > *(_DWORD*)(a2 + 232) && CudaDriverRoutine_bbe70(a2) &&
        v13 - *(_DWORD*)(a2 + 232) > 0x18) {
      return 701;
    }
    else {
      *(_DWORD*)(v5 + 576) = v11;
      v14 = CudaDriverRoutine_98340(a1);
      v15 = *((_DWORD*)a4 + 72);
      if (*(_DWORD*)((char*)((char*)0x20LL) +
                     *(__int64*)((char*)((__int64*)0x18LL) +
                                 (_QWORD)CudaDriverData_14225e0)) != 0) {
        v16 = *(_DWORD*)a5;
        v26_.v29 = a2;
        v26_.v34 = 0;
        v26_.v35 = v11;
        v26_.v26 = 128;
        v17 = *(_QWORD*)(a2 + 32);
        v26_.v27 = v14;
        v26_.v28 = v17;
        v18 = *(_DWORD*)(v14 + 16092);
        if (v16 != 0) {
          v18 = v16;
        }
        v19 = *(_DWORD*)(a2 + 392);
        v26_.v30 = v18;
        v26_.v31 = v19;
        v20 = *(_DWORD*)(a5 + 12);
        v26_.v32 = *(_DWORD*)(a5 + 16);
        v26_.v33 = v15;
        v21 = *(_QWORD*)(v14 + 64);
        v26_.v42 = v23;
        v22 = *(_DWORD*)(a5 + 28);
        v26_.v38 = a3;
        v26_.v39 = 0x100000001LL;
        v26_.v43 = a4;
        LODWORD(v21) = *(_DWORD*)(v21 + 3880);
        v26_.v44 = v22;
        v26_.v36 = v21;
        v26_.v37 = v21;
        v26_.v40 = *(unsigned __int8*)(a5 + 8);
        v26_.v41 = v20;
        cuda_driver_20b420(3u, 8u, (__int64)&v26_.v26);
      }
      return 0;
    }
  }
  return result;
}

__int64 cuda_driver_1f6280(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                           char a9)
{
  _QWORD* v9;
  __int64 v10;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  char v21;
  int v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  char v28;
  __int64 v29;
  bool v30;
  __int64 result;
  unsigned int v35;
  unsigned int v36;
  struct {
    int v37;
    char gap44_[4];
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    char v43;
    char v44;
    char gap90_[6];
    __int64 v45;
    char gap104_[8];
    char v46;
    char gap113_[7];
    __int64* v47;
  } v37_;
  __int64 v48;

  v10 = *(_QWORD*)(a8 + 8);
  v9 = *(_QWORD**)(a8 + 16);
  v15 = *(_QWORD*)(a8 + 136);
  v48 = *a1;
  if (CudaDriverRoutine_bbdf0(a4)) {
    v16 = v9 + 64;
  }
  else {
    v16 = nullptr;
  }
  v17 = CudaDriverStub_1223e0(*(_QWORD*)(v15 + 24));
  *(_DWORD*)(v10 + 92) = v17;
  *(_BYTE*)(v10 + 96) = BYTE4(v17);
  if (CudaDriverStub_b9300(a4)) {
    v9[129] = CudaDriverRoutine_2045e0(*(_QWORD**)(v15 + 24));
    v9[153] = *(_QWORD*)(v15 + 8) + 1232LL;
    v9[156] = *(_QWORD*)(v15 + 8) + 1224LL;
  }
  if ((a9 & 2) != 0 || CudaDriverStub_b9300(a4)) {
    *(_DWORD*)(v10 + 96) = *(_DWORD*)(v10 + 96) & 0xFB8FFFFF | 0x4000000;
    *(_DWORD*)(v10 + 100) = CudaDriverStub_8e230(v15);
    if (a6 == 0) {
      goto LABEL_11;
    }
  }
  else {
    *(_DWORD*)(v10 + 100) = CudaDriverRoutine_1ffe30(v15);
    if (a6 == 0) {
      goto LABEL_11;
    }
  }
  if ((*(_BYTE*)(a6 + 60) & 1) != 0) {
    v18 = CudaDriverStub_1223e0(*(_QWORD*)(a6 + 40));
    v19 = *(_DWORD*)(v10 + 16);
    *(_DWORD*)(v10 + 112) = 0;
    *(_DWORD*)(v10 + 16) = v19 | 0x800;
    v20 = *(_DWORD*)(v10 + 108) & 0x7FFFFF00 | BYTE4(v18);
    *(_DWORD*)(v10 + 104) = v18;
    *(_DWORD*)(v10 + 108) = v20;
    CudaDriverRoutine_2077b0(a6);
  }
LABEL_11:
  v21 = *(_BYTE*)(a8 + 204);
  v22 = *(_DWORD*)(v10 + 16);
  *(_DWORD*)(v10 + 16) =
      v22 & 0xFFFFFFC0 |
      CudaDriverRoutine_bc6c0(a4, *(_DWORD*)(a8 + 436), v21) & 0x3F;
  if (CudaDriverRoutine_bbdf0(a4)) {
    v23 = *((_DWORD*)v16 + 4);
    *((_DWORD*)v16 + 4) =
        v23 & 0xFFFFFFC0 |
        (CudaDriverRoutine_bc6c0(a4, *(_DWORD*)(a8 + 436), v21) - 1) & 0x3F;
  }
  v24 = *(unsigned __int16*)(*(_QWORD*)(a3 + 64) + 17281LL);
  if (*(int*)((char*)((int*)0x4LL) + (_QWORD)CudaDriverData_1432188) != 0) {
    v25 = v24 >> 8;
    v37_.v37 = 88;
    v26 = *(_QWORD*)(a4 + 32);
    v27 = *(_QWORD*)(v26 + 24);
    v37_.v43 = v24;
    v28 = *(_BYTE*)(a8 + 205);
    v37_.v40 = a4;
    v37_.v41 = v10;
    v37_.v44 = v25;
    v37_.v45 = a8;
    v37_.v38 = v27;
    v37_.v39 = v26;
    v37_.v46 = v28;
    v37_.v47 = &v48;
    v37_.v42 = a7;
    cuda_driver_20b420(0xBu, 1u, (__int64)&v37_.v37);
  }
  if (*(_BYTE*)(*(_QWORD*)(a3 + 16104) + 2072LL) == 0 ||
      *(_BYTE*)(a8 + 196) == 0 || *(_BYTE*)(a8 + 197) != 0) {
    if (*(_QWORD*)(a4 + 832) != 0) {
      (*(void (**)(int*, __int64, _QWORD, __int64, __int64, __int64))(
          *(_QWORD*)(a3 + 64) + 19248LL))(&v37_.v37, a3, *(_QWORD*)(v15 + 8),
                                          v10, 192, 2);
      v35 = 12;
      v36 = 84;
      v29 = CudaDriverRoutine_197480(v48, a2, 1u, &v36, (__int64)&v37_.v37,
                                     0xE4u, (_QWORD*)(a4 + 832), &v35);
    }
    else {
      v29 = (*(__int64 (**)(__int64, __int64, _QWORD, __int64, __int64,
                            __int64))(*(_QWORD*)(a3 + 64) + 19248LL))(
          v48, a3, *(_QWORD*)(v15 + 8), v10, 192, 2);
    }
    v48 = v29;
  }
  if (CudaDriverRoutine_bbdf0(a4)) {
    v48 = (*(__int64 (**)(__int64, __int64, __int64, _QWORD*, __int64,
                          __int64))(*(_QWORD*)(a3 + 64) + 19248LL))(
        v48, a3, *(_QWORD*)(v15 + 8) + 512LL, v9 + 64, 192, 2);
  }
  v30 = CudaDriverStub_b9300(a4);
  result = v48;
  if (v30) {
    result = (*(__int64 (**)(__int64, __int64, __int64, _QWORD*, __int64,
                             __int64))(*(_QWORD*)(a3 + 64) + 19248LL))(
        v48, a3, *(_QWORD*)(v15 + 8) + 1024LL, v9 + 128, 1024, 2);
  }
  *a1 = result;
  return result;
}

int8x8_t cuda_driver_1f78e0(__int64 a1, int8x8_t* a2, __int64 a3)
{
  unsigned __int64 v3;
  __int64 v4;
  unsigned int v5;
  int v6;
  __int64 v7;
  unsigned int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  int i;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int8x8_t result;

  v3 = *(unsigned int*)(a3 + 24);
  if ((_DWORD)v3 != 0) {
    v4 = 0;
    v5 = 0;
    v6 = 0;
    while (1) {
      v7 = *(_QWORD*)(a1 + 64) + 2 * v4;
      v8 = *(unsigned __int16*)(v7 + 19864);
      if (*(_WORD*)(v7 + 19864) == 0) {
        goto LABEL_4;
      }
      v9 = 0;
      do {
        v10 = v9;
        v11 = v8 & 1;
        v12 = v8;
        v8 >>= 1;
        v9 = v10 + v11;
      } while (v12 > 1);
      if (v9 == 0) {
        goto LABEL_4;
      }
      v13 = *(unsigned __int16*)(a3 + 32 + 2 * v4);
      for (i = v9 & 7; i != 0; --i) {
        if ((v13 & 1) != 0) {
          LANES64(*(a2)).n64_u32[v5] |= 1 << v6;
        }
        v15 = v6 + 1;
        --v9;
        v13 >>= 1;
        if (v6 == 31) {
          v6 = 0;
        }
        else {
          ++v6;
        }
        if (v15 == 32) {
          v5 = 1;
        }
      }
      if (v10 + v12 - 1 >= 7) {
        break;
      }
    LABEL_3:
      v3 = *(unsigned int*)(a3 + 24);
    LABEL_4:
      if (++v4 >= v3) {
        goto LABEL_54;
      }
    }
    while (1) {
      if ((v13 & 1) != 0) {
        LANES64(*(a2)).n64_u32[v5] |= 1 << v6;
        v16 = v6 + 1;
        if (v16 != 32) {
        LABEL_23:
          if ((v13 & 2) == 0) {
            goto LABEL_24;
          }
          goto LABEL_40;
        }
      }
      else {
        v16 = v6 + 1;
        if (v16 != 32) {
          goto LABEL_23;
        }
      }
      v5 = 1;
      v16 = 0;
      if ((v13 & 2) == 0) {
      LABEL_24:
        v17 = v16 + 1;
        if (v17 != 32) {
          goto LABEL_25;
        }
        goto LABEL_41;
      }
    LABEL_40:
      LANES64(*(a2)).n64_u32[v5] |= 1 << v16;
      v17 = v16 + 1;
      if (v17 != 32) {
      LABEL_25:
        if ((v13 & 4) == 0) {
          goto LABEL_26;
        }
        goto LABEL_42;
      }
    LABEL_41:
      v5 = 1;
      v17 = 0;
      if ((v13 & 4) == 0) {
      LABEL_26:
        v18 = v17 + 1;
        if (v18 != 32) {
          goto LABEL_27;
        }
        goto LABEL_43;
      }
    LABEL_42:
      LANES64(*(a2)).n64_u32[v5] |= 1 << v17;
      v18 = v17 + 1;
      if (v18 != 32) {
      LABEL_27:
        if ((v13 & 8) == 0) {
          goto LABEL_28;
        }
        goto LABEL_44;
      }
    LABEL_43:
      v5 = 1;
      v18 = 0;
      if ((v13 & 8) == 0) {
      LABEL_28:
        v19 = v18 + 1;
        if (v19 != 32) {
          goto LABEL_29;
        }
        goto LABEL_45;
      }
    LABEL_44:
      LANES64(*(a2)).n64_u32[v5] |= 1 << v18;
      v19 = v18 + 1;
      if (v19 != 32) {
      LABEL_29:
        if ((v13 & 0x10) == 0) {
          goto LABEL_30;
        }
        goto LABEL_46;
      }
    LABEL_45:
      v5 = 1;
      v19 = 0;
      if ((v13 & 0x10) == 0) {
      LABEL_30:
        v20 = v19 + 1;
        if (v20 != 32) {
          goto LABEL_31;
        }
        goto LABEL_47;
      }
    LABEL_46:
      LANES64(*(a2)).n64_u32[v5] |= 1 << v19;
      v20 = v19 + 1;
      if (v20 != 32) {
      LABEL_31:
        if ((v13 & 0x20) == 0) {
          goto LABEL_32;
        }
        goto LABEL_48;
      }
    LABEL_47:
      v5 = 1;
      v20 = 0;
      if ((v13 & 0x20) == 0) {
      LABEL_32:
        v21 = v20 + 1;
        if (v21 != 32) {
          goto LABEL_33;
        }
        goto LABEL_49;
      }
    LABEL_48:
      LANES64(*(a2)).n64_u32[v5] |= 1 << v20;
      v21 = v20 + 1;
      if (v21 != 32) {
      LABEL_33:
        if ((v13 & 0x40) == 0) {
          goto LABEL_34;
        }
        goto LABEL_50;
      }
    LABEL_49:
      v5 = 1;
      v21 = 0;
      if ((v13 & 0x40) == 0) {
      LABEL_34:
        v22 = v21 + 1;
        if (v22 != 32) {
          goto LABEL_35;
        }
        goto LABEL_51;
      }
    LABEL_50:
      LANES64(*(a2)).n64_u32[v5] |= 1 << v21;
      v22 = v21 + 1;
      if (v22 != 32) {
      LABEL_35:
        if ((v13 & 0x80) == 0) {
          goto LABEL_36;
        }
        goto LABEL_52;
      }
    LABEL_51:
      v5 = 1;
      v22 = 0;
      if ((v13 & 0x80) == 0) {
      LABEL_36:
        v6 = v22 + 1;
        if (v6 == 32) {
          goto LABEL_53;
        }
        goto LABEL_20;
      }
    LABEL_52:
      LANES64(*(a2)).n64_u32[v5] |= 1 << v22;
      v6 = v22 + 1;
      if (v6 == 32) {
      LABEL_53:
        v5 = 1;
        v6 = 0;
      }
    LABEL_20:
      v13 >>= 8;
      v9 -= 8;
      if (v9 == 0) {
        goto LABEL_3;
      }
    }
  }
LABEL_54:
  LANES64(result).n64_u64[0] =
      LANES64_OF(vmvn_s8(COERCE_AS(int8x8_t, LANES64(*(a2)).n64_u64[0])))
          .n64_u64[0];
  LANES64(*(a2)).n64_u64[0] = LANES64(result).n64_u64[0];
  return result;
}

__int64 cuda_driver_1f7b90(__int64* a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8;
  __int64 v9;
  char v10;
  __int16 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  bool v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  char v20;
  __int64 v21;
  __int64 result;
  struct {
    int v23;
    char gap4_[4];
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int16 v29;
    char v30;
    char v31;
    char gap52_[4];
    __int64* v32;
    __int64 v33;
    __int64 v34;
    char gap80_[8];
    bool v35;
    char gap89_[7];
    unsigned __int8* v36;
    bool v37;
    char gap105_[7];
    char v38;
    char gap113_[7];
    char v39;
    char gap121_[7];
    char v40;
    char gap129_[7];
    int v41;
    unsigned int v42;
    __int64 v43;
    bool v44;
    char gap153_[7];
    char v45;
  } v23_;
  unsigned __int8 v46;

  v8 = CudaDriverRoutine_98340(*(_QWORD*)(a2 + 1200));
  v9 = *(_QWORD*)(a2 + 192);
  v10 = *(_BYTE*)(*(_QWORD*)(v8 + 16104) + 2072LL);
  v11 = *(_WORD*)(*(_QWORD*)(v8 + 64) + 17281LL);
  v12 = CudaDriverRoutine_98340(*(_QWORD*)(a2 + 1200));
  v13 = *(_QWORD*)(a2 + 32);
  v14 = *(_QWORD*)(a2 + 752);
  v15 = true;
  v16 = v12;
  v23_.v23 = 168;
  v46 = 1;
  v17 = *(_QWORD*)(v13 + 32);
  v23_.v26 = v13;
  v23_.v27 = v9;
  v23_.v24 = v12;
  v23_.v25 = v17;
  LOBYTE(v17) = *(_BYTE*)(a2 + 380);
  v18 = *(_QWORD*)(v14 + 8);
  v23_.v30 = v10;
  v23_.v29 = v11;
  v23_.v32 = a1;
  v23_.v33 = a2;
  v23_.v34 = a2 + 184;
  v23_.v31 = v17;
  v23_.v28 = v18;
  v23_.v35 = *((_BYTE*)((_UNKNOWN*)0x1164LL) + (_QWORD)CudaDriverData_1422118 +
               2) == 0;
  v23_.v36 = &v46;
  if (*(_BYTE*)(a2 + 673) == 0) {
    v15 = *(_BYTE*)(a2 + 1412) != 0;
  }
  v23_.v37 = v15;
  v19 = *(_DWORD*)(a3 + 32);
  v23_.v38 = *(_BYTE*)(a2 + 672);
  v20 = *(_BYTE*)(a2 + 390);
  v23_.v40 = a4;
  v23_.v43 = 0;
  if (v19 >= 0xC) {
    v19 = 12;
  }
  v23_.v39 = v20;
  v23_.v41 = *(_DWORD*)(a3 + 24);
  v23_.v42 = v19;
  v21 = *(_QWORD*)(a2 + 24);
  v23_.v45 = *(_BYTE*)(a2 + 389);
  v23_.v44 = a2 == *(_QWORD*)(v21 + 448);
  if (*(_BYTE*)(v21 + 415) != 0 || *(_BYTE*)(v21 + 416) != 0) {
    v23_.v43 = **(_QWORD**)(v21 + 424);
  }
  result = cuda_driver_20b420(0xBu, 3u, (__int64)&v23_.v23);
  *(_BYTE*)(*(_QWORD*)(a2 + 1240) + 4LL) =
      (*(unsigned __int8*)(*(_QWORD*)(a2 + 1240) + 4LL) | v46) != 0;
  if (*(_BYTE*)(a2 + 382) != 0 && *(_BYTE*)(a2 + 380) == 0) {
    result = (*(__int64 (**)(__int64, _QWORD, __int64))(*(_QWORD*)(v16 + 64) +
                                                        18672LL))(
        *a1, *(_QWORD*)(*(_QWORD*)(a2 + 752) + 8LL), 1);
    *a1 = result;
  }
  return result;
}

_DWORD* cuda_driver_1f80d0(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                           unsigned __int64 a5, __int64 a6, unsigned int a7)
{
  _BOOL4 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned int v16;
  unsigned __int64 v17;
  int v18;
  int v19;
  _DWORD* v20;
  int v21;
  int v22;
  int v23;

  v13 = a6 != 0 && *(_BYTE*)(a6 + 35) != 0;
  v14 = a5;
  do {
    if (v14 >= 0xFFFFFFFF) {
      v15 = 0xFFFFFFFFLL;
    }
    else {
      v15 = v14;
    }
    if (v13) {
      v16 = (unsigned int)v15 / (*(unsigned __int8*)(a6 + 32) *
                                 (unsigned int)*(unsigned __int8*)(a6 + 34));
    }
    else {
      v16 = v15;
    }
    a1[6] = v16;
    *a1 = 537166080;
    a1[1] = HIDWORD(a4) & 0x1FFFF;
    a1[2] = a4;
    a1[3] = HIDWORD(a3) & 0x1FFFF;
    a1[4] = a3;
    a1[5] = 536969478;
    v17 = HIDWORD(v14);
    if (a7 != 0 || v17 != 0 ||
        (*((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)CudaDriverData_1422118) &
         1) != 0) {
      v18 = 0;
      if (!v13) {
      LABEL_16:
        v19 = 0;
        v20 = a1 + 7;
        goto LABEL_19;
      }
    }
    else {
      v18 = 4;
      if (!v13) {
        goto LABEL_16;
      }
    }
    v21 = *(_BYTE*)a6 & 7 | (unsigned __int8)(16 * (*(_BYTE*)(a6 + 4) & 7)) |
          ((*(_DWORD*)(a6 + 8) & 7) << 8) | ((*(_DWORD*)(a6 + 12) & 7) << 12) |
          ((*(unsigned __int8*)(a6 + 34) << 16) - 0x10000) & 0x30000 |
          ((*(unsigned __int8*)(a6 + 32) << 20) - 0x100000) & 0x300000 |
          ((*(unsigned __int8*)(a6 + 33) << 24) - 0x1000000) & 0x3000000;
    a1[7] = 537100736;
    a1[8] = *(_DWORD*)(a6 + 24);
    a1[9] = *(_DWORD*)(a6 + 28);
    a1[10] = v21;
    v20 = a1 + 11;
    v19 = 1024;
  LABEL_19:
    a1 = v20 + 2;
    v22 = v18 | v19;
    if (v14 == a5) {
      v23 = 386;
    }
    else {
      v23 = 385;
    }
    *v20 = 536969408;
    v20[1] = v23 | v22;
    if (v17 == 0 && (unsigned __int8)cuda_driver_misc_helpers_4bb0(a7) != 0) {
      a1 = (_DWORD*)CudaDriverRoutine_1f5570((__int64)a1, a7);
    }
    a3 += v15;
    a4 += v15;
    v14 -= v15;
  } while (v14 != 0);
  return a1;
}

_DWORD* cuda_driver_1f99e0(__int64 a1, __int64 a2, __int64* a3, __int64 a4,
                           int a5)
{
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  _DWORD* result;
  unsigned __int64 v11;
  __int64 v12;
  int v13;
  unsigned __int64 v14;
  void* v15;
  __int64 v16;
  int v17;

  v5 = *((unsigned int*)a3 + 3);
  v6 = a3[2];
  v7 = *a3;
  if (v5 == 2) {
    v8 = 65540;
  }
  else {
    v8 = 4;
  }
  if (v5 == 4) {
    v8 = 196612;
  }
  *(_DWORD*)a1 = 536969664;
  v9 = *((_DWORD*)a3 + 2);
  *(_DWORD*)(a1 + 12) = v8;
  *(_DWORD*)(a1 + 4) = v9;
  *(_DWORD*)(a1 + 8) = 536969666;
  *(_QWORD*)(a1 + 16) = 0x120018107LL;
  result = (_DWORD*)(a1 + 24);
  if (a5 != 0) {
    v11 = v6;
    do {
      if (v11 >= 0xFFFFFFFF) {
        v12 = 0xFFFFFFFFLL;
      }
      else {
        v12 = v11;
      }
      *result = 537035010;
      result[1] = HIDWORD(v7) & 0x1FFFF;
      result[2] = v7;
      result[3] = 536969478;
      if (v11 == v6) {
        v13 = 1414;
      }
      else {
        v13 = 1413;
      }
      v7 += v12 * v5;
      result[4] = v12;
      result[5] = 536969408;
      v11 -= v12;
      result[6] = v13;
      result += 7;
    } while (v11 != 0);
  }
  else {
    v14 = v6;
    v15 = CudaDriverData_1422118;
    do {
      while (1) {
        v16 = v14 >= 0xFFFFFFFF ? 0xFFFFFFFFLL : v14;
        *result = 537035010;
        result[1] = HIDWORD(v7) & 0x1FFFF;
        result[2] = v7;
        result[3] = 536969478;
        v17 = v14 == v6 ? 2 : 1;
        result[4] = v16;
        if (HIDWORD(v14) != 0 &&
            (*((_BYTE*)&CudaDriverRoutine_4198 + (_QWORD)v15) & 1) == 0) {
          break;
        }
        v7 += v16 * v5;
        result[5] = 536969408;
        result[6] = v17 | 0x584;
        result += 7;
        v14 -= v16;
        if (v14 == 0) {
          return result;
        }
      }
      v7 += v16 * v5;
      result[5] = 536969408;
      result[6] = v17 | 0x580;
      result += 7;
      v14 -= v16;
    } while (v14 != 0);
  }
  return result;
}

__int64 cuda_driver_1faec0(__int64 a1, __int64 a2, __int64 a3, bool* a4)
{
  __int64 result;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int8* v10;
  unsigned __int64 v11;
  void* v12;
  bool v13;
  unsigned __int64* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int8* v19;
  char v20;
  unsigned __int64 v21;
  int v22;

  result = CudaDriverStub_1dbab0(a3);
  if (result != 0) {
    v8 = *(_QWORD*)(a1 + 64);
    v9 = *(unsigned int*)(v8 + 3732);
    if ((_DWORD)v9 != 0) {
      v10 = (unsigned __int8*)(result + 84);
      v11 = 0;
      result = 0;
      v12 = CudaDriverData_1422118;
      v13 = true;
      do {
        v14 = (unsigned __int64*)(a2 + 320 * v11);
        v15 = *v14;
        v16 = v14[1];
        if ((v15 | v16) != 0) {
          v17 = *(unsigned int*)(v8 + 3756);
          if ((_DWORD)v17 != 0) {
            v18 = 0;
            v19 = v10;
            do {
              v20 = 64 - v18;
              if ((unsigned int)v18 > 0x40) {
                v20 = 0;
              }
              v21 = v16 >> v18 << v20;
              if (v18 <= 0x3F) {
                v21 = v15 >> v18;
              }
              if ((v21 & 1) != 0) {
                v22 = *v19;
                if ((v22 | *((_DWORD*)v19 - 1) & 0x380) != 0) {
                  result = 1;
                }
                else {
                  result = (unsigned int)result;
                }
                v13 = v13 && (_DWORD)result != 0 &&
                      *((_DWORD*)v19 - 1) == 512 && v22 == 23;
                *((_BYTE*)&CudaDriverRoutine_46fc + (_QWORD)v12) = v22 == 14;
                v17 = *(unsigned int*)(v8 + 3756);
              }
              ++v18;
              v19 += 380;
            } while (v18 < v17);
            v9 = *(unsigned int*)(v8 + 3732);
          }
        }
        ++v11;
        v10 += 48640;
      } while (v11 < v9);
    }
    else {
      result = 0;
      v13 = true;
    }
    if (a4 != nullptr) {
      *a4 = v13;
    }
  }
  return result;
}

__int64 cuda_driver_1fb000(__int64 a1, __int64 a2, int a3)
{
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _BYTE* v10;

  v5 = CudaDriverStub_1dbab0(a2);
  v6 = *(_QWORD*)(a1 + 64);
  if (*(_DWORD*)(v6 + 3732) != 0 && *(_DWORD*)(v6 + 3756) != 0) {
    v7 = (_BYTE*)(v5 + 393);
    v8 = 0;
    do {
      if (*(_DWORD*)(v6 + 3756) != 0) {
        v9 = 0;
        v10 = v7;
        do {
          *v10 = 0;
          ++v9;
          v10 += 380;
          v6 = *(_QWORD*)(a1 + 64);
        } while (v9 < *(unsigned int*)(v6 + 3756));
      }
      ++v8;
      v7 += 48640;
    } while (v8 < *(unsigned int*)(v6 + 3732));
  }
  __builtin_arm_dmb(0xEu);
  if (a3 == 1) {
    return (*(__int64 (**)(void*))(*(_QWORD*)(*(_QWORD*)(a1 + 72) + 33160LL) +
                                   104LL))(
        *(void**)(*(_QWORD*)(a1 + 72) + 33160LL));
  }
  else {
    return 0;
  }
}

void cuda_driver_1fb7e0(__int64 a1, _QWORD* a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  int v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  unsigned __int64 v9;
  int v10;
  int v11;
  bool v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  int32x2_t v20;
  unsigned int v21;
  int32x2_t v22;
  __int64 v23;
  int v24;
  int32x2_t v25;
  int v26;
  unsigned int v27;
  int v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  char v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned int v43;
  __int64* v44;
  __int64 v45;
  int v46;
  unsigned __int64 v47;
  _QWORD* v48;
  unsigned __int64 v49;
  int v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  unsigned __int64 v57;
  __int64 v58;
  int32x4_t* v59;
  float* v60;
  int32x4_t v61;
  int32x4_t v62;
  int32x4_t v63;
  int v64;
  int32x4_t v65;
  int32x4_t v66;
  _BYTE v67[3];
  _BYTE v68[6144];
  float32x4x3_t v69;
  float32x4x3_t v70;

  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  memset_plt(v68, 0, 6144),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  memset_plt(v67, 0, 12288),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v4 = *(_QWORD*)(a1 + 64);
  v5 = *(_DWORD*)(v4 + 3736);
  v6 = (unsigned int)(v5 * *(_DWORD*)(v4 + 3756));
  v7 = *(_DWORD*)(v4 + 3724);
  if (v7 != 0) {
    v8 = *(_QWORD*)(a1 + 16104);
    v9 = v8 + 24;
    if ((unsigned int)v6 < 0x41) {
      if (v7 >= 0xC &&
          (v5 == 1 ? (v12 = v7 - 1431655766 >= 0xAAAAAAAB) : (v12 = false),
           v12 && (v9 >= (unsigned __int64)&v68[12 * v7] ||
                   (unsigned __int64)v68 >=
                       v8 + 4 * (unsigned __int64)(v7 - 1) + 28))) {
        v13 = v7 & 0x7FFFFFF8;
        v59 = (int32x4_t*)(v8 + 40);
        v60 = (float*)v68;
        v14 = 3 * (v7 & 0x7FFFFFF8);
        v61 = vdupq_n_s32(0x504624u);
        v62 = vdupq_n_s32(0x504614u);
        v63 = vdupq_n_s32(0x504634u);
        v64 = v7 & 0x7FFFFFF8;
        do {
          v65 = v59[-1];
          v66 = *v59;
          v64 -= 8;
          v59 += 2;
          v69.val[2] = vaddq_s32(v65, v61);
          v69.val[1] = vaddq_s32(v65, v63);
          v69.val[0] = vaddq_s32(v65, v62);
          v70.val[2] = vaddq_s32(v66, v61);
          v70.val[1] = vaddq_s32(v66, v63);
          v70.val[0] = vaddq_s32(v66, v62);
          vst3q_f32(v60, v69);
          vst3q_f32(v60 + 12, v70);
          v60 += 24;
        } while (v64 != 0);
        if (v7 == v13) {
          goto LABEL_22;
        }
      }
      else {
        v13 = 0;
        v14 = 0;
      }
      v15 = v13 * v5;
      do {
        v16 = *(_DWORD*)(v9 + 4LL * v15);
        v17 = v14 + 1;
        v18 = v14 + 2;
        ++v13;
        v15 += v5;
        v16 += 5260820;
        *(_DWORD*)&v68[4 * v14] = v16;
        v14 += 3;
        *(_DWORD*)&v68[4 * v17] = v16 + 32;
        *(_DWORD*)&v68[4 * v18] = v16 + 16;
      } while (v13 < v7);
      goto LABEL_22;
    }
    if (v7 == 1) {
      v10 = 0;
      v11 = 0;
    }
    else {
      v19 = 0;
      v10 = 0;
      v11 = 0;
      do {
        v10 += 2;
        LANES64(v20).n64_u64[0] =
            LANES64_OF(vld1_dup_f32((const float*)(v9 + 4LL * v19))).n64_u64[0];
        *(int32x2_t*)&v68[4 * v11] =
            vadd_s32(v20, COERCE_AS(int32x2_t, 0x50463400504614LL));
        *(int32x2_t*)&v68[4 * (v11 + 2)] =
            vadd_s32(v20, COERCE_AS(int32x2_t, 0x50461C00504624LL));
        *(int32x2_t*)&v68[4 * (v11 + 4)] =
            vadd_s32(v20, COERCE_AS(int32x2_t, 0x50475000504758LL));
        v21 = v5 + v19;
        v19 += 2 * v5;
        LANES64(v22).n64_u64[0] =
            LANES64_OF(vld1_dup_f32((const float*)(v9 + 4LL * v21))).n64_u64[0];
        v23 = 4LL * (unsigned int)(v11 + 8);
        *(int32x2_t*)&v68[4 * (v11 + 6)] =
            vadd_s32(v22, COERCE_AS(int32x2_t, 0x50463400504614LL));
        v24 = v11 + 10;
        v11 += 12;
        *(int32x2_t*)&v68[v23] =
            vadd_s32(v22, COERCE_AS(int32x2_t, 0x50461C00504624LL));
        *(int32x2_t*)&v68[4 * v24] =
            vadd_s32(v22, COERCE_AS(int32x2_t, 0x50475000504758LL));
      } while ((v7 & 0xFFFFFFFE) != v10);
    }
    if ((v7 & 1) != 0) {
      LANES64(v25).n64_u64[0] =
          LANES64_OF(
              vld1_dup_f32((const float*)(v9 + 4LL * (unsigned int)(v5 * v10))))
              .n64_u64[0];
      *(int32x2_t*)&v68[4 * v11] =
          vadd_s32(v25, COERCE_AS(int32x2_t, 0x50463400504614LL));
      *(int32x2_t*)&v68[4 * (v11 + 2)] =
          vadd_s32(v25, COERCE_AS(int32x2_t, 0x50461C00504624LL));
      *(int32x2_t*)&v68[4 * (v11 + 4)] =
          vadd_s32(v25, COERCE_AS(int32x2_t, 0x50475000504758LL));
    }
  }
LABEL_22:
  CudaDriverRoutine_98340(a1),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  CudaDriverStub_10fdf0(),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v26 == 0) {
    if (*(_BYTE*)(v4 + 3744) != 0) {
      CudaDriverRoutine_9ac20(*(_QWORD*)(a1 + 64)),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (*(_DWORD*)(v4 + 3724) != 0) {
        v27 = 0;
        v28 = 0;
        do {
          if ((_DWORD)v6 != 0) {
            v29 = *(_QWORD*)&v67[8 * v28];
            v30 = 0;
            v31 = *(_QWORD*)&v67[8 * (v28 | 1)];
            v32 = *(_QWORD*)&v67[8 * (v28 + 2)];
            v33 = *(_QWORD*)&v67[8 * (v28 + 3)];
            v34 = *(_QWORD*)&v67[8 * (v28 + 4)];
            v35 = *(_QWORD*)&v67[8 * (v28 + 5)];
            do {
              while (1) {
                if (v30 > 0x3F) {
                  v39 = (unsigned int)v30 <= 0x40 ? 64 - v30 : 0;
                  v36 = v33 >> v30 << v39;
                  v37 = v34 >> v30 << v39;
                  v38 = v35 >> v30 << v39;
                }
                else {
                  v36 = v29 >> v30;
                  v37 = v31 >> v30;
                  v38 = v32 >> v30;
                }
                v40 = v36 & 1;
                v41 = v37 & 1;
                v42 = v38 & 1;
                v43 = ((v30 & 0xFFFFFFFD) + 1) >> 1;
                v44 = &a2[40 * ((v30 & 2) != 0) +
                          40 * *(_DWORD*)(v4 + 3736) * v27];
                v45 = 1LL << v43;
                if ((v30 & 0xFFFFFFFD) <= 0x7E) {
                  break;
                }
                v44[1] = v44[1] & ~v45 | (v40 << v43);
                v44[3] = v44[3] & ~v45 | (v41 << v43);
                v44[7] = v44[7] & ~v45 | (v42 << v43);
                if (v6 == ++v30) {
                  goto LABEL_38;
                }
              }
              *v44 = *v44 & ~v45 | (v40 << v43);
              v44[2] = v44[2] & ~v45 | (v41 << v43);
              v44[6] = v44[6] & ~v45 | (v42 << v43);
              ++v30;
            } while (v6 != v30);
          }
        LABEL_38:
          v46 = *(_DWORD*)(v4 + 3736);
          v47 = v46 * v27++;
          if ((unsigned int)v47 < v46 * v27) {
            v48 = &a2[40 * (unsigned int)v47 + 7];
            do {
              *(v48 - 6) = 0;
              *(v48 - 4) = 0;
              ++v47;
              *v48 = 0;
              v48 += 40;
            } while (v47 < *(_DWORD*)(v4 + 3736) * v27);
          }
          v28 += 6;
        } while (v27 < *(_DWORD*)(v4 + 3724));
      }
    }
    else if (*(_DWORD*)(v4 + 3732) != 0) {
      if ((unsigned int)v6 <= 0x40) {
        v56 = 1;
        v57 = 0;
        do {
          ++v57;
          v58 = *(_QWORD*)&v67[8 * (v56 - 1)];
          a2[2] = *(_QWORD*)&v67[8 * v56];
          *a2 = v58;
          LODWORD(v58) = v56 + 1;
          v56 += 3;
          a2[6] = *(_QWORD*)&v67[8 * (unsigned int)v58];
          a2 += 40;
        } while (v57 < *(unsigned int*)(v4 + 3732));
      }
      else {
        v49 = 0;
        v50 = 0;
        do {
          ++v49;
          v51 = *(_QWORD*)&v67[8 * (v50 + 3)];
          v52 = *(_QWORD*)&v67[8 * (v50 + 1)];
          v53 = *(_QWORD*)&v67[8 * (v50 + 2)];
          *a2 = *(_QWORD*)&v67[8 * v50];
          a2[1] = v51;
          v54 = *(_QWORD*)&v67[8 * (v50 + 4)];
          a2[2] = v52;
          a2[3] = v54;
          LODWORD(v52) = v50 + 5;
          v50 += 6;
          v55 = *(_QWORD*)&v67[8 * (unsigned int)v52];
          a2[6] = v53;
          a2[7] = v55;
          a2 += 40;
        } while (v49 < *(unsigned int*)(v4 + 3732));
      }
    }
  }
}

__int64 cuda_driver_1fbf20(__int64 a1, _BYTE* a2)
{
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int* v11;
  _DWORD* v12;
  int v13;
  int32x4_t* v14;
  int32x4_t* v15;
  int32x4_t v16;
  __int64 v17;
  int32x4_t v18;
  int32x4_t v19;
  __int64 v20;
  char* v21;
  char v22;
  _DWORD v23[4];
  __int64 v24;
  _DWORD v25[256];

  memset_plt(v25, 0, 1024);
  memset_plt(v23, 0, 1024);
  v4 = *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3732LL);
  *a2 = 0;
  result =
      (*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)(a1 + 64) + 21384LL))(a1, a2);
  if ((_DWORD)result != 801) {
    return result;
  }
  if ((_DWORD)v4 != 0) {
    v6 = *(_QWORD*)(a1 + 16104);
    if ((unsigned int)v4 >= 8 && (unsigned __int64)&v23[-6] - v6 >= 0x20) {
      v7 = (unsigned int)v4 & 0xFFFFFFF8;
      v14 = (int32x4_t*)&v24;
      v15 = (int32x4_t*)(v6 + 40);
      v16 = vdupq_n_s32(0x50450Cu);
      v17 = v7;
      do {
        v18 = v15[-1];
        v19 = *v15;
        v17 -= 8;
        v15 += 2;
        v14[-1] = vaddq_s32(v18, v16);
        *v14 = vaddq_s32(v19, v16);
        v14 += 2;
      } while (v17 != 0);
      if (v7 == v4) {
        goto LABEL_16;
      }
    }
    else {
      v7 = 0;
    }
    v8 = v4 & 7;
    v9 = v7;
    if ((v4 & 7) != 0) {
      v9 = v7;
      do {
        --v8;
        v23[v9] = *(_DWORD*)(v6 + 24 + 4 * v9) + 5260556;
        ++v9;
      } while (v8 != 0);
    }
    if ((unsigned __int64)(v7 - v4) <= 0xFFFFFFFFFFFFFFF8LL) {
      v10 = v4 - v9;
      v11 = (int*)(v6 + 4 * v9 + 52);
      v12 = &v23[v9 + 4];
      do {
        v10 -= 8;
        *(v12 - 4) = *(v11 - 7) + 5260556;
        *(v12 - 3) = *(v11 - 6) + 5260556;
        *(v12 - 2) = *(v11 - 5) + 5260556;
        *(v12 - 1) = *(v11 - 4) + 5260556;
        *v12 = *(v11 - 3) + 5260556;
        v12[1] = *(v11 - 2) + 5260556;
        v12[2] = *(v11 - 1) + 5260556;
        v13 = *v11;
        v11 += 8;
        v12[3] = v13 + 5260556;
        v12 += 8;
      } while (v10 != 0);
    }
  }
LABEL_16:
  v20 = CudaDriverRoutine_98340(a1);
  result = cuda_driver_predicates_10f750(v20, 2, v4, (__int64)v23, v25, 0);
  if ((_DWORD)result == 0 && (_DWORD)v4 != 0) {
    v21 = (char*)v25;
    while (1) {
      v22 = *v21;
      v21 += 4;
      if ((v22 & 2) == 0) {
        break;
      }
      if (--v4 == 0) {
        return 0;
      }
    }
    *a2 = 1;
    return 0;
  }
  return result;
}

__int64 cuda_driver_1fc150(__int64 a1, __int64 a2)
{
  *(_DWORD*)(CudaDriverStub_1dbab0(a2) + 4) = 0;
  __builtin_arm_dmb(0xFu);
  return 0;
}

__int64 cuda_driver_1fc180(__int64 a1, __int64 a2, int a3)
{
  *(_DWORD*)(CudaDriverStub_1dbab0(a2) + 4) = 1;
  __builtin_arm_dmb(0xFu);
  CudaDriverStub_1dbab0(a2);
  __builtin_arm_dmb(0xEu);
  if (a3 == 1) {
    return (*(__int64 (**)(void*))(*(_QWORD*)(*(_QWORD*)(a1 + 72) + 33160LL) +
                                   104LL))(
        *(void**)(*(_QWORD*)(a1 + 72) + 33160LL));
  }
  else {
    return 0;
  }
}

__int64 cuda_driver_1fcd10(__int64 result)
{
  char v1;
  char v2;

  v1 = *((_BYTE*)&CudaDriverRoutine_7418 + (_QWORD)CudaDriverData_1422118) &
       0xFC;
  if ((_DWORD)result != 0) {
    ++v1;
  }
  if ((((_DWORD)result != 0) & *((_BYTE*)((_UNKNOWN*)0x1860LL) +
                                 (_QWORD)CudaDriverData_1422118)) != 0) {
    v2 = 2;
  }
  else {
    v2 = 0;
  }
  *((_BYTE*)&CudaDriverRoutine_7418 + (_QWORD)CudaDriverData_1422118) = v2 | v1;
  return result;
}

__int64 cuda_driver_1fcd50(__int64 result)
{
  char v1;

  if ((_DWORD)result != 0) {
    v1 = 4;
  }
  else {
    v1 = 0;
  }
  *((_BYTE*)&CudaDriverRoutine_7418 + (_QWORD)CudaDriverData_1422118) =
      *((_BYTE*)&CudaDriverRoutine_7418 + (_QWORD)CudaDriverData_1422118) &
          0xFB |
      v1;
  return result;
}

__int64 cuda_driver_1fcd90()
{
  return *((unsigned __int8*)&CudaDriverRoutine_71c8 +
           (_QWORD)CudaDriverData_1422118);
}

__int64 cuda_driver_1fce20(_QWORD* a1, unsigned int a2, int a3)
{
  __int64 result;
  struct {
    unsigned int v7;
    char gap4_[4];
    _QWORD* v8;
    unsigned int v9;
    int v10;
  } v7_;
  _QWORD v11[3];
  int v12;

  result = CudaDriverRoutine_df060(nullptr);
  if ((_DWORD)result == 0) {
    if (*(_DWORD*)((char*)((__int64*)0x18LL) +
                   (_QWORD)CudaDriverData_1432190) != 0) {
      v12 = 0;
      v7_.v7 = 0;
      v7_.v8 = a1;
      v7_.v9 = a2;
      v7_.v10 = a3;
      v11[1] = &v7_.v7;
      v11[2] = &v12;
      v11[0] = 24;
      cuda_driver_20b420(0xCu, 6u, (__int64)v11);
      if (v12 == 0) {
        v7_.v7 = CudaDriverRoutine_1fcf20(v7_.v8, v7_.v9, v7_.v10);
      }
      HIDWORD(v11[0]) = 1;
      cuda_driver_20b420(0xCu, 6u, (__int64)v11);
      return v7_.v7;
    }
    else {
      return CudaDriverRoutine_1fcf20(a1, a2, a3);
    }
  }
  return result;
}

__int64 cuda_driver_1fd6c0(__int64 result, __int64* a2)
{
  __int64* v2;
  unsigned __int64 v4;
  __int64 v5;
  void* v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;

  if (a2 != nullptr) {
    v2 = (__int64*)*a2;
    if (*a2 == 0) {
    LABEL_14:
      *a2 = 0;
      return result;
    }
    v4 = v2[9];
    v5 = result;
    v6 = CudaDriverData_1422118;
    if (v4 != 0) {
      v7 = *(_QWORD*)(result + 24);
      if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) +
                     (_QWORD)CudaDriverData_1422118) < 2u) {
        CudaDriverRoutine_ee6c0(v7, v4);
        v8 = v2[1];
        if (v8 != 0) {
        LABEL_9:
          v9 = *(_QWORD*)(v5 + 24);
          if (*(_DWORD*)((char*)((_UNKNOWN*)0x1128LL) + (_QWORD)v6) < 2u) {
            CudaDriverRoutine_ee6c0(v9, v8);
            v10 = *v2;
            if (*v2 == 0) {
              goto LABEL_13;
            }
            goto LABEL_12;
          }
          CudaDriverRoutine_ee820(v9, v8);
        }
      LABEL_11:
        v10 = *v2;
        if (*v2 == 0) {
        LABEL_13:
          CudaDriverRoutine_12e340(v2[5]);
          CudaDriverRoutine_107f60(v2 + 11);
          result = CudaDriverRoutine_12e340(*a2);
          goto LABEL_14;
        }
      LABEL_12:
        CudaDriverRoutine_ee2a0(*(_QWORD*)(v5 + 24), v10);
        goto LABEL_13;
      }
      CudaDriverRoutine_ee820(v7, v4);
    }
    v8 = v2[1];
    if (v8 == 0) {
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  return result;
}

#pragma GCC visibility pop
