#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*nn_atk_FxLFE_BiQuad4_vtable[])();
extern __int64* snd_g_memory_ptr[2];
_QWORD* BiQuad4_Destructor_176470(_QWORD* result);

_QWORD* BiQuad4_Destructor_176470(_QWORD* result)
{
  void (***v1)(_QWORD);
  _QWORD* v2;
  __int64* v3;
  void (***v4)(_QWORD);

  v1 = (void (***)(_QWORD))result[1];
  *result = nn_atk_FxLFE_BiQuad4_vtable;
  result[1] = 0;
  if (v1 != nullptr) {
    v2 = result;
    (**v1)(v1);
    v3 = snd_g_memory_ptr[0];
    result = (_QWORD*)(*(__int64 (**)(_QWORD, void (***)(_QWORD)))(
        **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0], v1);
    v4 = (void (***)(_QWORD))v2[1];
    v2[1] = 0;
    if (v4 != nullptr) {
      (**v4)(v4);
      return (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
          *(_QWORD*)*v3 + 24LL))(*v3, v4);
    }
  }
  return result;
}

#pragma GCC visibility pop
