#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 snd_Fade_Destroy_Fade(_QWORD);
extern __int64 (*snd_Param_vtable[])();
__n128 Param_Destructor(_QWORD* a1);

__n128 Param_Destructor(_QWORD* a1)
{
  _QWORD* v1;

  *a1 = snd_Param_vtable;
  v1 = a1 + 1;
  snd_Fade_Destroy_Fade(a1 + 636);
  snd_Fade_Destroy_Fade(v1 + 610);
  snd_Fade_Destroy_Fade(v1 + 585);
  snd_Fade_Destroy_Fade(v1 + 560);
  snd_Fade_Destroy_Fade(v1 + 535);
  snd_Fade_Destroy_Fade(v1 + 510);
  snd_Fade_Destroy_Fade(v1 + 485);
  snd_Fade_Destroy_Fade(v1 + 460);
  snd_Fade_Destroy_Fade(v1 + 416);
  snd_Fade_Destroy_Fade(v1 + 389);
  snd_Fade_Destroy_Fade(v1 + 362);
  snd_Fade_Destroy_Fade(v1 + 327);
  snd_Fade_Destroy_Fade(v1 + 302);
  snd_Fade_Destroy_Fade(v1 + 277);
  snd_Fade_Destroy_Fade(v1 + 252);
  snd_Fade_Destroy_Fade(v1 + 227);
  snd_Fade_Destroy_Fade(v1 + 202);
  snd_Fade_Destroy_Fade(v1 + 177);
  snd_Fade_Destroy_Fade(v1 + 152);
  snd_Fade_Destroy_Fade(v1 + 126);
  snd_Fade_Destroy_Fade(v1 + 101);
  snd_Fade_Destroy_Fade(v1 + 76);
  snd_Fade_Destroy_Fade(v1 + 51);
  snd_Fade_Destroy_Fade(v1 + 26);
  return snd_Fade_Destroy_Fade(v1 + 1);
}

#pragma GCC visibility pop
