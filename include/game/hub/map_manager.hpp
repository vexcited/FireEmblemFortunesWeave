#pragma once

#include <stdint.h>

#include <optional>
#include <string>
#include <string_view>

#include "math/vec3.hpp"

#include "game/singleton.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

class MapManager : public Singleton<MapManager> {
public:
  // The levels of the field hierarchy, None, Low, Middle, High and _Max.
  uint32_t GetFieldHierarchy() const {
    return field_hierarchy_;
  }

  const std::string& GetLoadVariationId() const {
    return load_variation_id_;
  }

  std::optional<math::Vec3> FindObjLocatorPos(std::string_view objName,
    std::string_view lctName) const;
  float GetObjLocatorAngle(std::string_view objName,
    std::string_view lctName) const;

  void SetOverrideLoadVariationId(const std::string& variationId) {
    override_load_variation_id_ = variationId;
  }

private:
  uint8_t unknown_08_[0x20];
  std::string load_variation_id_;
  uint8_t unknown_40_[0x18];
  uint32_t field_hierarchy_;
  uint8_t unknown_5c_[0x84];
  std::string override_load_variation_id_;
};

// Set while no hub map is loaded, the natives then read the defaults.
extern bool g_no_map;

#pragma GCC visibility pop

}
