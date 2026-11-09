#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern int game_facility_g_perch_view;
__int64 ProcPerchMenu_Unknown88(__int64 result);

__int64 ProcPerchMenu_Unknown88(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  int v4;
  __int64 v5;

  v1 = *(_QWORD**)(result + 232);
  v2 = *(_QWORD**)(result + 240);
  if (v1 != v2) {
    v3 = result;
    v4 = 0;
    do {
      v5 = *v1;
      result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v1 + 48LL))(*v1);
      if ((result & 1) != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 40LL))(v5);
        if ((result & 1) != 0) {
          if (v5 == *(_QWORD*)(v3 + 336)) {
            goto LABEL_9;
          }
          ++v4;
        }
      }
      ++v1;
    } while (v1 != v2);
  }
  v4 = -1;

LABEL_9:
  game_facility_g_perch_view = v4;
  return result;
}

#pragma GCC visibility pop
