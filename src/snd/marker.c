#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*snd_Marker_vtable[])();
extern __int64* snd_g_memory_ptr[2];
void GameRoutine_651250(void*, unsigned __int64);
void Marker_DeletingDestructor(_QWORD* a1);

void Marker_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;

  *a1 = snd_Marker_vtable;
  if ((a1[1] & 1) != 0) {
    v1 = a1;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, _QWORD))(
        **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        (void*)*(_QWORD**)snd_g_memory_ptr[0], *snd_g_memory_ptr[0], a1[3]);
    a1 = v1;
  }
  GameRoutine_651250(a1, 0x28u);
}

#pragma GCC visibility pop
