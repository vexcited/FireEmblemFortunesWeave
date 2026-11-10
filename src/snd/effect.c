#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 snd_g_memory;
extern __int64* GameData_21344e8;
extern __int64* snd_g_memory_ptr[2];
_QWORD* Effect_Destructor_10a9a0(_QWORD* result);

_QWORD* Effect_Destructor_10a9a0(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;

  v1 = result;
  *result = GameData_21344e8 + 2;
  if (result[199] != 0) {
    v2 = (_QWORD*)result[198];
    v3 = result + 197;
    v4 = *(_QWORD**)(result[197] + 8LL);
    *(_QWORD*)(*v2 + 8LL) = v4;
    *v4 = *v2;
    result[199] = 0;
    if (v2 != result + 197) {
      do {
        v5 = (_QWORD*)v2[1];
        result = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)snd_g_memory +
                                                    24LL))(snd_g_memory);
        v2 = v5;
      } while (v5 != v3);
    }
  }
  if ((v1[138] & 1) != 0) {
    result = (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
        **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0], v1[140]);
    if ((v1[93] & 1) == 0) {
    LABEL_6:
      if ((v1[48] & 1) == 0) {
        goto LABEL_7;
      }
      goto LABEL_11;
    }
  }
  else if ((v1[93] & 1) == 0) {
    goto LABEL_6;
  }
  result = (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
      **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0], v1[95]);
  if ((v1[48] & 1) == 0) {
  LABEL_7:
    if ((v1[3] & 1) == 0) {
      return result;
    }
    return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
        **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0], v1[5]);
  }
LABEL_11:
  result = (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
      **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0], v1[50]);
  if ((v1[3] & 1) != 0) {
    return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
        **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0], v1[5]);
  }
  return result;
}

#pragma GCC visibility pop
