#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 game_script_hub_g_frame_counter;
float GmapInterpolatorFloat_Destructor();

float GmapInterpolatorFloat_Destructor()
{

#pragma clang fp contract(off)
  return (float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                 0x1.0aef000000000p+4f) /
         0x1.f400000000000p+9f;
}

#pragma GCC visibility pop
