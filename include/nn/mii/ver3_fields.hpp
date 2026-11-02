#pragma once

#include <stdint.h>

namespace nn::mii {
struct Nickname;
}

namespace nn::mii::detail {

struct UtilityImpl;
struct Ver3CreateId;
struct Ver3AuthorId;
struct StoreDataRaw;

enum class Ver3StoreDataMember : unsigned {
#define MII_FIELD(Name, Id) Name = Id,
#include "nn/mii/ver3_fields.inc"
#undef MII_FIELD
  AuthorId = 11,
  CreateId = 12,
  Name = 20,
  CreatorName = 74,
  Crc = 76
};

struct Ver3StoreDataTableElement {
  Ver3StoreDataMember member;
  int32_t kind;
  int32_t offset;
  int32_t size;
  int32_t shift;
  int32_t bits;
  int32_t flag;
};

static_assert(sizeof(Ver3StoreDataTableElement) == 28);

extern const Ver3StoreDataTableElement Ver3StoreDataTable[77];
const Ver3StoreDataTableElement* GetVer3StoreDataTableElement(
  Ver3StoreDataMember member);

struct Ver3StoreDataRaw {
  uint8_t data[96];

  void SetDefault(UtilityImpl* utility);
  void BuildToStoreData(StoreDataRaw* output, UtilityImpl* utility) const;
  void BuildFromStoreData(UtilityImpl* utility, const StoreDataRaw& source);
  int Verify() const;
  bool IsValid() const;
  void UpdateCrc();
  void GetName(Nickname* name) const;
  void GetCreatorName(Nickname* name) const;
  void SetName(const Nickname& name);
  void SetCreatorName(const Nickname& name);
  void GetCreateId(Ver3CreateId* id) const;
  void GetAuthorId(Ver3AuthorId* id) const;
  void SetCreateId(const Ver3CreateId& id);
  void SetAuthorId(const Ver3AuthorId& id);

#define MII_FIELD(Name, Id) \
  int Get##Name() const; \
  void Set##Name(int value);
#include "nn/mii/ver3_fields.inc"
#undef MII_FIELD
};

static_assert(sizeof(Ver3StoreDataRaw) == 96);

}
