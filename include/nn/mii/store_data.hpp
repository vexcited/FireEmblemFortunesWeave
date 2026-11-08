#pragma once

#include "nn/mii/mii_color.hpp"
#include "nn/mii/visual_accessors.hpp"

namespace nn::mii::detail {

struct DeviceId {
  uint8_t data[16];
};

void GetDeviceId(DeviceId* id);
uint16_t CalculateCrc16(const void* data, int size, uint16_t initial);
void CalculateAndSetCrc16(void* data, int size, uint16_t initial);
bool IsValidCrc16(const void* data, int size, uint16_t initial);

struct StoreDataRaw {
  CoreDataRaw core;
  CreateId id;
  uint16_t data_crc;
  uint16_t device_crc;

  uint32_t Validate() const;
  bool IsValidCrc() const;
  bool IsValidDeviceCrc() const;
  bool IsValid() const;
  bool IsValidWithoutEmptyNickname() const;
  bool operator==(const StoreDataRaw& other) const;
  CreateId GetCreateId() const;
  const CoreDataRaw& GetCoreData() const;
  void GetNickname(Nickname* name) const;
  void SetNickname(const Nickname& name);
  void BuildDefault(UtilityImpl* utility, int index);
  void BuildWithCoreData(UtilityImpl* utility, const CoreDataRaw& data);
  void BuildWithCharInfo(UtilityImpl* utility, const CharInfo& info);
  void BuildMiiEditor(UtilityImpl* utility, Gender gender);
  void UpdateDataCrc();
  void UpdateDeviceCrc();
  bool IsSpecial() const;

#define MII_CORE_FIELD(Name, Index, Order, Error)                              \
  int Get##Name() const;                                                       \
  void Set##Name(int value);
#include "nn/mii/core_fields.inc"
#undef MII_CORE_FIELD
};

static_assert(sizeof(StoreDataRaw) == 68);
static_assert(__builtin_offsetof(StoreDataRaw, id) == 48);
static_assert(__builtin_offsetof(StoreDataRaw, data_crc) == 64);

}
