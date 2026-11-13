#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
bool StreamSoundFileLoader_Unknown2(__int64 a1, __int64 a2, unsigned int a3);

bool StreamSoundFileLoader_Unknown2(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3;
  bool v6;
  _BOOL8 result;
  _BOOL4 v8;
  struct {
    __int64 v9;
    char gap8_[55];
    _BYTE v10[257];
  } v9_;

  v3 = *(unsigned int*)(a1 + 20);
  if ((_DWORD)v3 == 0 || *(_WORD*)(a1 + 24) == 0) {
    return false;
  }
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, unsigned __int64,
                                          _QWORD))(**(_QWORD**)(a1 + 8) +
                                                   48LL))(
      (void*)(*(_QWORD**)(a1 + 8)), *(_QWORD*)(a1 + 8),
      v3 + *(unsigned __int16*)(a1 + 24) * (unsigned __int64)a3, 0);
  memset((__int64)&v9_.v9, 0, 0x140u);
  v6 = (*(__int64 (**)(_QWORD, unsigned __int64, __int64, _QWORD))(
           **(_QWORD**)(a1 + 8) + 32LL))(
           *(_QWORD*)(a1 + 8), (unsigned __int64)v9_.v10 & 0xFFFFFFFFFFFFFFC0LL,
           256, 0) == 256;
  result = v6;
  if (v6) {
    v8 = v6;
    memcpy(a2, (unsigned __int64)v9_.v10 & 0xFFFFFFFFFFFFFFC0LL, 0x100u);
    return v8;
  }
  return result;
}

#pragma GCC visibility pop
