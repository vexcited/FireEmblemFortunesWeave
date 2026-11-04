#pragma GCC visibility push(hidden)
#include "game/menu/dialog.hpp"
#pragma GCC visibility pop

namespace game::menu {

class DeliveryDialog : public Dialog {
public:
  ~DeliveryDialog() override;

  const char* Unknown32() override;
  const char* Unknown33() override { return "Common_DialogDelivery"; }
  void Unknown135() override;
};

DeliveryDialog::~DeliveryDialog() = default;

}
