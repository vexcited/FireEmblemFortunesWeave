#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 Model_a66980(_QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN GameData_21f4d48;
extern __int64 (*GameData_1fbfbf8[])();
extern __int64 (*GameData_1fbfc70[])();
extern int GameData_21f4d44;
struct PseudoSret wld_Crc32(_QWORD, _QWORD, _QWORD);
__int64 wld_ClothColliderModule_ClothColliderModule(__int64 a1, __int64 a2);

__int64 wld_ClothColliderModule_ClothColliderModule(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  int v9;
  __int64 v10;
  _QWORD v11[4];
  _QWORD* v12;

  *(_BYTE*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_DWORD*)(a1 + 17) = 33686018;
  *(_QWORD*)a1 = GameData_1fbfbf8;
  *(_QWORD*)(a1 + 8) = a2;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_DWORD*)(a1 + 168) = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4d48,
                            memory_order_acquire) &
       1) == 0) {
    v10 = a2;
    v9 = __cxa_guard_acquire(&GameData_21f4d48);
    a2 = v10;
    if (v9 != 0) {
      GameData_21f4d44 =
          (unsigned int)(*(struct PseudoSret*)(&GameData_21f4d44) =
                             wld_Crc32(0, "ModelModule", 11),
                         (void*)(&GameData_21f4d44));
      __cxa_guard_release(&GameData_21f4d48);
      a2 = v10;
    }
  }
  v3 = *(_QWORD*)(a2 + 512);
  v4 = v3;
  do {
    v5 = *(_DWORD*)(v4 - 16);
    v4 -= 16;
    v3 -= 16;
  } while (v5 != GameData_21f4d44);
  v6 = *(_QWORD*)(*(_QWORD*)(v3 + 8) + 24LL);
  v12 = v11;
  v11[0] = GameData_1fbfc70;
  v11[1] = a1;
  *(_DWORD*)(a1 + 168) = Model_a66980(v6, v11, 1);
  result = (__int64)v12;
  if (v12 == v11) {
    v8 = 32;
  }
  else {
    if (v12 == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (*(__int64 (**)(__int64))(*v12 + v8))((__int64)v12);
}

#pragma GCC visibility pop
