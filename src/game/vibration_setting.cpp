#include "game/vibration_setting.hpp"

namespace game {

bool IsVibrationEnabled(const VibrationSetting& setting) {
  return setting.IsEnabled();
}

}
