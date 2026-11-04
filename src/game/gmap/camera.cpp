#include "game/gmap/camera.hpp"

namespace game::gmap {

Camera::~Camera() = default;

const char* Camera::GetName() const {
  return "GmapCamera";
}

int Camera::GetVersion() const {
  return 0;
}

}
