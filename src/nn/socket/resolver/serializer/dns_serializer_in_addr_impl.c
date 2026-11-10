#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_85f0a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_socket_resolver_serializer_DNSSerializer_CheckToBufferArguments_plt(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 strlen_plt(_QWORD);
__int64 nn_socket_resolver_serializer_DNSSerializer_ToBuffer_char(__int64 a1,
                                                                  __int64 a2,
                                                                  __int64 a3,
                                                                  __int64* a4);

__int64 nn_socket_resolver_serializer_DNSSerializer_ToBuffer_char(__int64 a1,
                                                                  __int64 a2,
                                                                  __int64 a3,
                                                                  __int64* a4)
{
  __int64 v5;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _BYTE* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v19;

  if (a3 == 0) {
    return -1;
  }
  v5 = a3;
  v19 = 0;
  if (a4 != nullptr && *a4 != 0) {
    v8 = 0;
    do {
      v9 = a4[++v8];
    } while (v9 != 0);
    v19 = v8;
  }
  if (nn_socket_resolver_serializer_DNSSerializer_CheckToBufferArguments_plt(
          a1, a2, a3, 4, 164) == -1) {
    return -1;
  }
  v10 = SdkRoutine_85f0a0(a1, a2, v5, &v19);
  v11 = v10;
  if (v10 != -1) {
    v12 = (_BYTE*)(a2 + v10);
    if (a4 != nullptr) {
      v13 = *a4;
      if (*a4 != 0) {
        v14 = a4 + 1;
        do {
          v17 = strlen_plt(v13);
          v15 = v17 + 1;
          if (v17 == -1) {
            *v12 = 0;
            v15 = 1;
          }
          else {
            if (nn_socket_resolver_serializer_DNSSerializer_CheckToBufferArguments_plt(
                    a1, v12, v5, v17 + 2, 82) == -1) {
              return v11;
            }
            memmove_plt(v12, v13, v15);
            if (v15 == -1) {
              return v11;
            }
          }
          v16 = *v14++;
          v13 = v16;
          v12 += v15;
          v5 -= v15;
          v11 += v15;
        } while (v16 != 0);
      }
    }
    return (__int64)&v12[-a2];
  }
  return v11;
}

#pragma GCC visibility pop
