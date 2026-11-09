#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_FinalizeMutex(_QWORD);
extern __int64 snd_g_memory;
extern __int64* GameData_2134578[26];
void GameRoutine_651250(void*, unsigned __int64);
__int64 List_Destructor_1215a0(_QWORD* a1);
void List_DeletingDestructor_121600(_QWORD* a1);

__int64 List_Destructor_1215a0(_QWORD* a1)
{
  __int64 v2;

  v2 = a1[1];
  *a1 = GameData_2134578[0] + 2;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(snd_g_memory);
    a1[1] = 0;
  }
  return nn_os_FinalizeMutex(a1 + 3);
}

void List_DeletingDestructor_121600(_QWORD* a1)
{
  __int64 v2;

  v2 = a1[1];
  *a1 = GameData_2134578[0] + 2;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(snd_g_memory);
    a1[1] = 0;
  }
  nn_os_FinalizeMutex(a1 + 3);
  GameRoutine_651250(a1, 0x38u);
}

#pragma GCC visibility pop
