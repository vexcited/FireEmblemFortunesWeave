#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

const char* ReportMenuItem_DisguiseYes_Unknown3(__int64 a1);
bool ReportMenuItem_DisguiseYes_Unknown58(__int64 a1);

const char* ReportMenuItem_DisguiseYes_Unknown3(__int64 a1)
{
  if (*(_BYTE*)(**(_QWORD**)(a1 + 88) + 112LL) != 0) {
    return "MID_QuestMenu_Report_Yes";
  }
  else {
    return "MID_QuestMenu_Delivery_Yes";
  }
}

bool ReportMenuItem_DisguiseYes_Unknown58(__int64 a1)
{
  return *(_BYTE*)(*(_QWORD*)(a1 + 88) + 9LL) == 3;
}

#pragma GCC visibility pop
