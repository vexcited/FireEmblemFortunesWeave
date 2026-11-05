#pragma GCC visibility push(hidden)
#include "game/gmap/banquet_manager.hpp"
#include "game/transporter_const.hpp"
#pragma GCC visibility pop

namespace game::gmap {

void BanquetManager::EachItem(
  const std::function<void(const UnitItem&, int)>& function) const {
  EachStock([function](int stock, int count) {
    const TransporterConst::List::Impl* list =
      TransporterConst::List::instance_->GetImpl();
    function(list->GetData(stock).item, count);
  });
}

}
