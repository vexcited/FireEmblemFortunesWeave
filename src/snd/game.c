#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64* snd_g_memory_ptr[2];
__int64 Game_e7af0(__int64 result);
extern __int64* snd_Game_s_instance_ptr[3];
extern __int64 snd_g_frameCount_ptr;
void Game_e9590();

__int64 Game_e7af0(__int64 result)
{
  if ((*(_BYTE*)result & 1) != 0) {
    return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] +
                                            24LL))(*snd_g_memory_ptr[0],
                                                   *(_QWORD*)(result + 16));
  }
  return result;
}

void Game_e9590()
{
  _QWORD* v0;
  __int64 v1;

  v0 = (_QWORD*)*snd_Game_s_instance_ptr[0];
  v1 = *(_QWORD*)snd_g_frameCount_ptr;
  v0[41] = 0;
  v0[39] = v1;
  v0[40] = 0;
}

#pragma GCC visibility pop
