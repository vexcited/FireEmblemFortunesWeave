#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_FinalizeMutex_plt(_QWORD);
__int64 movie_task_queue_manager_1bb80(__int64 a1);

__int64 movie_task_queue_manager_1bb80(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  v2 = *(_QWORD*)(a1 + 48);
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    *(_QWORD*)(a1 + 48) = 0;
  }
  v3 = *(_QWORD*)(a1 + 40);
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
    *(_QWORD*)(a1 + 40) = 0;
  }
  return nn_os_FinalizeMutex_plt(a1 + 8);
}

#pragma GCC visibility pop
