#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ui_LayoutAccessor_IsPaneVisible(_QWORD, _QWORD);
const char* RecordDrawObj_Unknown2(__int64 a1);

const char* RecordDrawObj_Unknown2(__int64 a1)
{
  const char* v2;

  v2 = "L_Record00";
  if ((ui_LayoutAccessor_IsPaneVisible(*(_QWORD*)(a1 + 32), "L_Record00") &
       1) != 0) {
    v2 = "L_Record01";
    if ((ui_LayoutAccessor_IsPaneVisible(*(_QWORD*)(a1 + 32), "L_Record01") &
         1) != 0) {
      v2 = "L_Record02";
      if ((ui_LayoutAccessor_IsPaneVisible(*(_QWORD*)(a1 + 32), "L_Record02") &
           1) != 0) {
        v2 = "L_Record03";
        if ((ui_LayoutAccessor_IsPaneVisible(*(_QWORD*)(a1 + 32),
                                             "L_Record03") &
             1) != 0) {
          v2 = "L_Record04";
          if ((ui_LayoutAccessor_IsPaneVisible(*(_QWORD*)(a1 + 32),
                                               "L_Record04") &
               1) != 0) {
            v2 = "L_Record05";
            if ((ui_LayoutAccessor_IsPaneVisible(*(_QWORD*)(a1 + 32),
                                                 "L_Record05") &
                 1) != 0) {
              v2 = "L_Record06";
              if ((ui_LayoutAccessor_IsPaneVisible(*(_QWORD*)(a1 + 32),
                                                   "L_Record06") &
                   1) != 0) {
                if ((ui_LayoutAccessor_IsPaneVisible(*(_QWORD*)(a1 + 32),
                                                     "L_Record07") &
                     1) != 0) {
                  return nullptr;
                }
                else {
                  return "L_Record07";
                }
              }
            }
          }
        }
      }
    }
  }
  return v2;
}

#pragma GCC visibility pop
