#pragma once

#include <functional>

namespace game::gameui {

class Util {
public:
  // Both pass the transporter stock id of each item.
  static void EachItemFromTransporter(const std::function<void(int)>& function);
  static void EachMaterialItemFromTransporter(
    const std::function<void(int)>& function);
};

}
