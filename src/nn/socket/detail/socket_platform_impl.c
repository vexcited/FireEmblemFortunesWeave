#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_socket_detail_Calloc_plt(_QWORD, _QWORD);
__int64 nn_socket_detail_CopyFromPlatform_plt(_QWORD);
__int64 nn_socket_detail_Free_plt(_QWORD);
__int64 nn_socket_detail_SetLastError_plt(_QWORD);
__int64 strlen_plt(_QWORD);
__int64 strncpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_socket_detail_CopyFromPlatform(__int64* a1, __int64 a2);

__int64 nn_socket_detail_CopyFromPlatform(__int64* a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  if (a1 == nullptr) {
    return 1;
  }
  result = nn_socket_detail_Calloc_plt(1, 48);
  if (result != 0) {
    v5 = result;
    *(_DWORD*)result = *(_DWORD*)a2;
    *(_BYTE*)(result + 4) = *(_DWORD*)(a2 + 4);
    *(_DWORD*)(result + 8) = *(_DWORD*)(a2 + 8);
    *(_DWORD*)(result + 12) = *(_DWORD*)(a2 + 12);
    *(_DWORD*)(result + 16) = 16;
    if (*(_QWORD*)(a2 + 32) != 0) {
      v6 = nn_socket_detail_Calloc_plt(1, 16);
      *(_QWORD*)(v5 + 24) = v6;
      if (v6 == 0) {
        goto LABEL_14;
      }
      v7 = *(_QWORD*)(a2 + 32);
      *(_BYTE*)v6 = *(_BYTE*)v7;
      *(_BYTE*)(v6 + 1) = *(_BYTE*)(v7 + 1);
      *(_WORD*)(v6 + 2) = *(_WORD*)(v7 + 2);
      *(_DWORD*)(v6 + 4) = *(_DWORD*)(v7 + 4);
      *(_QWORD*)(v6 + 8) = *(_QWORD*)(v7 + 8);
    }
    v8 = *(_QWORD*)(a2 + 24);
    if (v8 != 0) {
      v9 = strlen_plt(v8);
      v10 = nn_socket_detail_Calloc_plt(1, v9 + 1);
      *(_QWORD*)(v5 + 32) = v10;
      if (v10 == 0) {
        goto LABEL_14;
      }
      strncpy_plt(v10, *(_QWORD*)(a2 + 24), v9);
    }
    if (*(_QWORD*)(a2 + 40) == 0 ||
        (nn_socket_detail_CopyFromPlatform_plt(v5 + 40) & 1) != 0) {
      *a1 = v5;
      return 1;
    }
  LABEL_14:
    nn_socket_detail_Free_plt(*(_QWORD*)(v5 + 32));
    nn_socket_detail_Free_plt(*(_QWORD*)(v5 + 24));
    nn_socket_detail_Free_plt(v5);
    nn_socket_detail_SetLastError_plt(12);
    return 0;
  }
  return result;
}

#pragma GCC visibility pop
