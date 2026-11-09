#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

const char* QuestMenuItem_No_Unknown3(__int64 a1);

const char* QuestMenuItem_No_Unknown3(__int64 a1)
{
  _BYTE* v1;

  v1 = *(_BYTE**)(a1 + 88);
  if (v1[9] == 1) {
    return "MID_QuestMenu_Accept_No";
  }
  if (*(_BYTE*)(*(_QWORD*)v1 + 112LL) != 0) {
    return "MID_QuestMenu_Report_No";
  }
  return "MID_QuestMenu_Delivery_No";
}

#pragma GCC visibility pop
