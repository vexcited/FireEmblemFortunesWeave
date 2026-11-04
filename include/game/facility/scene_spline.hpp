#pragma once

#include <cstdint>
#include <vector>

namespace math {

struct Vec3 {
  float x;
  float y;
  float z;
};

}

namespace game::facility {

template<typename T>
class SceneSplineBase {
public:
  SceneSplineBase();
  virtual ~SceneSplineBase() {
    points_.clear();
    times_.clear();
  }

private:
  std::vector<T> points_;
  uint8_t unknown_20_[0x28];
  std::vector<float> times_;
};

}
