#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool LayoutAccessor_1563380(__int64*, __int64, char);
void LayoutAccessor_1562680(__int64*, __int64, float);
void game_gmap_anonymous_1542ba0(__int64 a1);

void game_gmap_anonymous_1542ba0(__int64 a1)
{
  int v1;
  unsigned __int8* v3;
  unsigned int v4;
  bool v5;
  int v6;

  v1 = *(_DWORD*)(a1 + 280);
  if (v1 == 3) {
    if (LayoutAccessor_1563380((__int64*)(a1 + 176), (__int64)"Out", 0)) {
      v3 = *(unsigned __int8**)(a1 + 16);
      if (v3 != nullptr) {
        v4 = *v3;
        v5 = v4 > 0x10;
        v6 = (1 << v4) & 0x1CE00;
        if (!v5 && v6 != 0) {
          *(_WORD*)(a1 + 136) |= 0x80u;
        }
      }
      *(_WORD*)(a1 + 136) |= 8u;
    }
  }
  else if (v1 == 2) {
    if (*(_BYTE*)(a1 + 284) == 1) {
      *(_DWORD*)(a1 + 280) = 3;
      LayoutAccessor_1562680((__int64*)(a1 + 176), (__int64)"Out",
                             0x1.0000000000000p+0f);
    }
  }
  else if (v1 == 1 &&
           LayoutAccessor_1563380((__int64*)(a1 + 176), (__int64)"In", 0)) {
    ++*(_DWORD*)(a1 + 280);
  }
}

#pragma GCC visibility pop
