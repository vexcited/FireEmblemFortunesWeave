#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6064a0(_QWORD);
__int64 GameRoutine_606650(_QWORD, _QWORD);
__int64 ResourceTextureInfo_Unknown3(__int64 result, __int64 a2);
__attribute__((swiftcall)) void ResourceTextureInfo_Unknown4(PSEUDO_X8 x8_,
                                                             __int64 result);
bool ResourceTextureInfo_Unknown6(__int64* a1);

__int64 ResourceTextureInfo_Unknown3(__int64 result, __int64 a2)
{
  __int64 v2;
  _BYTE* v3;
  __int64 v4;

  v2 = *(_QWORD*)(result + 16);
  if (v2 != 0) {
    v3 = *(_BYTE**)(v2 + 128);
    if (v3 != nullptr && *v3 != 0) {
      v4 = result;
      GameRoutine_6064a0(*(_QWORD*)(v2 + 128));
      result = GameRoutine_606650(*(_QWORD*)(v2 + 136), a2);
      *(_QWORD*)(v4 + 16) = 0;
    }
  }
  return result;
}

__attribute__((swiftcall)) void ResourceTextureInfo_Unknown4(PSEUDO_X8 x8_,
                                                             __int64 result)
{
  _WORD* a2 = (_WORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  int v3;

  v2 = *(_QWORD*)(result + 16);
  v3 = *(_DWORD*)(v2 + 36);
  LODWORD(v2) = *(_DWORD*)(v2 + 40);
  *a2 = v3;
  a2[1] = v2;
  {
    result;
    return;
  }
}

bool ResourceTextureInfo_Unknown6(__int64* a1)
{
  __int64 v1;
  __int64 var4;

  if (a1[2] == 0) {
    return false;
  }
  v1 = *a1;
  LODWORD(var4) = 0;
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8))(v1 + 32))((void*)(&var4));
  return WORD1(var4) != 0 && (unsigned __int16)var4 != 0;
}

#pragma GCC visibility pop
