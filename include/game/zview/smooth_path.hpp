#pragma once

#include <cstdint>
#include <memory>
#include <vector>

#include "math/vec3.hpp"

namespace game::zview {

#pragma GCC visibility push(hidden)

class PathBase;
class PathDebug;

class WayPointBase {
public:
  virtual ~WayPointBase();
  virtual void Unknown02();

  // Tells the path its points changed.
  virtual void OnChange();

protected:
  PathBase* path_;
};

class SmoothPathWayPoint : public WayPointBase {
public:
  // An equal position leaves the path alone.
  void SetPosition(const math::Vec3& position) {
    if (x_ == position.x() && y_ == position.y() && z_ == position.z()) {
      return;
    }
    x_ = position.x();
    y_ = position.y();
    z_ = position.z();
    OnChange();
  }

private:
  float x_;
  float y_;
  float z_;
};

class PathBase {
public:
  PathBase();
  virtual ~PathBase();
  virtual void Unknown02();
  virtual int GetCount() const;
  virtual void Rebuild();

protected:
  int unknown_08_;
  bool unknown_0c_;
  bool round_;
  std::vector<WayPointBase*> unknown_10_;
  std::shared_ptr<PathDebug> debug_;
};

// A path of smoothed points, picked by a rate.
class SmoothPath : public PathBase {
public:
  SmoothPath();
  ~SmoothPath() override;

  math::Vec3 GetRoundPoint(float t) const;
  math::Vec3 GetPoint(float t) const;

  void Clear();
  SmoothPathWayPoint* Insert(int index);

  SmoothPathWayPoint* Add() {
    return Insert(GetCount());
  }

  void SetRound(bool round) {
    if (round_ != round) {
      round_ = round;
      Rebuild();
    }
  }

  math::Vec3 Get(float rate01) const {
    return round_ ? GetRoundPoint(rate01 * static_cast<float>(count() - 1)) :
      GetPoint(rate01 * static_cast<float>(count() - 1));
  }

  int count() const {
    return static_cast<int>(way_points_.size());
  }

private:
  std::vector<std::shared_ptr<SmoothPathWayPoint>> way_points_;
};

#pragma GCC visibility pop

}
