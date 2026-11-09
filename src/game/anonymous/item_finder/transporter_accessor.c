#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 game_TransporterConst_List_instance__ptr[6];
__int64 TransporterAccessor_Unknown2(__int64 a1, int a2);

__int64 TransporterAccessor_Unknown2(__int64 a1, int a2)
{
  return *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                   game_TransporterConst_List_instance__ptr[0] +
                               8LL) +
                    8LL) +
         12LL * a2 + 4;
}

#pragma GCC visibility pop
