#include <vector>

#pragma GCC visibility push(hidden)
#include "game/menu/dialog.hpp"
#include "game/menu/item_result_entry.hpp"

namespace game::menu {

class DeliveryDialog final : public Dialog {
public:
  ~DeliveryDialog() override;

  const char* Unknown32() override;
  const char* Unknown33() override { return "Common_DialogDelivery"; }
  void Unknown135() override;

private:
  uint8_t unknown_5c8_[0x10];
  std::vector<ItemResultEntry> entries_;
};

DeliveryDialog::~DeliveryDialog() = default;

}

#pragma GCC visibility pop
