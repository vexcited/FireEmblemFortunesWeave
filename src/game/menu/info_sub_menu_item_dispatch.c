#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_menu_InfoSubMenuItem_Dispatch_IsEnable_lambda0_Invoke(__int64 a1,
                                                                   __int64* a2);

__int64 game_menu_InfoSubMenuItem_Dispatch_IsEnable_lambda0_Invoke(__int64 a1,
                                                                   __int64* a2)
{
  __int64 v2;
  __int64 result;

  v2 = *a2;
  if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(*a2 + 280) + 24LL))(
          *(_QWORD*)(*a2 + 280)) == 1) {
    (*(void (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 112LL))(
        *(_QWORD*)(v2 + 280));
  }
  result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 264LL))(
      *(_QWORD*)(v2 + 280));
  if (result != 0) {
    ++**(_DWORD**)(a1 + 8);
  }
  return result;
}

#pragma GCC visibility pop
