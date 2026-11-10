#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nandroid_RefBase_renameRefId_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_libstagefright_mpeg2ts_53e0c0(__int64 a1, __int64 a2);

__int64 nandroid_libstagefright_mpeg2ts_53e0c0(__int64 a1, __int64 a2)
{
  return nandroid_RefBase_renameRefId_plt(
      *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8 * a2), *(_QWORD*)(a1 + 16) + 8 * a2,
      *(_QWORD*)(a1 + 8) + 8 * a2);
}

#pragma GCC visibility pop
