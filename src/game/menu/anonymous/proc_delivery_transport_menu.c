#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

const char* ProcDeliveryTransportMenu_Unknown141(__int64 a1);
const char* ProcDeliveryTransportMenu_Unknown142(__int64 a1);

const char* ProcDeliveryTransportMenu_Unknown141(__int64 a1)
{
  if (*(_QWORD*)(a1 + 1064) != 0) {
    return "MID_DeliveryMenu_Title";
  }
  else {
    return "MID_HubMenu_Scout";
  }
}

const char* ProcDeliveryTransportMenu_Unknown142(__int64 a1)
{
  if (*(_QWORD*)(a1 + 1064) != 0) {
    return "MID_DeliveryMenu_ItemSelect_Help";
  }
  else {
    return "MID_ScoutMenu_Give_Help";
  }
}

#pragma GCC visibility pop
