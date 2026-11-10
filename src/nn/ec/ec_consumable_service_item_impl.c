#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool nn_ec_ConsumableServiceItemRightData_IsValid(void* this_);
bool ec_consumable_service_item_3f86f0(_BYTE* a1);

bool nn_ec_ConsumableServiceItemRightData_IsValid(void* this_)
{
  return ec_consumable_service_item_3f86f0(this_) &&
         ec_consumable_service_item_3f86f0((_BYTE*)this_ + 64);
}

bool ec_consumable_service_item_3f86f0(_BYTE* a1)
{
  if (*a1 == 0) {
    return true;
  }
  if (a1[1] == 0) {
    return true;
  }
  if (a1[2] == 0) {
    return true;
  }
  if (a1[3] == 0) {
    return true;
  }
  if (a1[4] == 0) {
    return true;
  }
  if (a1[5] == 0) {
    return true;
  }
  if (a1[6] == 0) {
    return true;
  }
  if (a1[7] == 0) {
    return true;
  }
  if (a1[8] == 0) {
    return true;
  }
  if (a1[9] == 0) {
    return true;
  }
  if (a1[10] == 0) {
    return true;
  }
  if (a1[11] == 0) {
    return true;
  }
  if (a1[12] == 0) {
    return true;
  }
  if (a1[13] == 0) {
    return true;
  }
  if (a1[14] == 0) {
    return true;
  }
  if (a1[15] == 0) {
    return true;
  }
  if (a1[16] == 0) {
    return true;
  }
  if (a1[17] == 0) {
    return true;
  }
  if (a1[18] == 0) {
    return true;
  }
  if (a1[19] == 0) {
    return true;
  }
  if (a1[20] == 0) {
    return true;
  }
  if (a1[21] == 0) {
    return true;
  }
  if (a1[22] == 0) {
    return true;
  }
  if (a1[23] == 0) {
    return true;
  }
  if (a1[24] == 0) {
    return true;
  }
  if (a1[25] == 0) {
    return true;
  }
  if (a1[26] == 0) {
    return true;
  }
  if (a1[27] == 0) {
    return true;
  }
  if (a1[28] == 0) {
    return true;
  }
  if (a1[29] == 0) {
    return true;
  }
  if (a1[30] == 0) {
    return true;
  }
  if (a1[31] == 0) {
    return true;
  }
  if (a1[32] == 0) {
    return true;
  }
  if (a1[33] == 0) {
    return true;
  }
  if (a1[34] == 0) {
    return true;
  }
  if (a1[35] != 0) {
    return a1[36] == 0;
  }
  return true;
}

#pragma GCC visibility pop
