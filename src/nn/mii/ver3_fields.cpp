#include "nn/mii/ver3_field_access.hpp"

namespace nn::mii::detail {

const Ver3StoreDataTableElement Ver3StoreDataTable[77] = {
#include "ver3_table.inc"
};

// Exported, so the field accessors reach it through its PLT stub.
[[gnu::noinline]] const Ver3StoreDataTableElement*
GetVer3StoreDataTableElement(Ver3StoreDataMember member) {
  return Ver3StoreDataTable + static_cast<unsigned>(member);
}

#define MII_FIELD(Name, Id) \
  int Ver3StoreDataRaw::Get##Name() const { \
    return Get(this, Ver3StoreDataMember::Name); \
  } \
  void Ver3StoreDataRaw::Set##Name(int value) { \
    Set(this, Ver3StoreDataMember::Name, value); \
  }
#include "nn/mii/ver3_fields.inc"
#undef MII_FIELD

}
