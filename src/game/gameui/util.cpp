#pragma GCC visibility push(hidden)
#include "game/gameui/util.hpp"
#include "game/transporter_const.hpp"
#pragma GCC visibility pop

namespace game::gameui {

namespace {

// Item kinds take the bits above the item types.
uint64_t GetCategoryBits(const ItemData* data) {
  return (uint64_t{1} << 40 << ItemRow::GetKind(data)) |
    (uint64_t{1} << ItemRow::GetType(data));
}

constexpr uint64_t kMaterialBits = 0x00400000005c6000;

bool IsMaterial(const TransporterConst::Data& data) {
  return (GetCategoryBits(data.item.GetSharedData()) & ~kMaterialBits) == 0;
}

}

void Util::EachItemFromTransporter(const std::function<void(int)>& function) {
  TransporterConst::List::instance_->GetImpl()->Each(
    [function](const TransporterConst::Data& data) {
      if (!IsMaterial(data)) {
        function(data.id);
      }
    });
}

void Util::EachMaterialItemFromTransporter(
  const std::function<void(int)>& function) {
  TransporterConst::List::instance_->GetImpl()->Each(
    [function](const TransporterConst::Data& data) {
      if (IsMaterial(data)) {
        function(data.id);
      }
    });
}

}
