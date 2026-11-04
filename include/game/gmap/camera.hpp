#pragma once

#include "game/map/map_singletons.hpp"

namespace game::gmap {

#pragma GCC visibility push(hidden)

class Camera : public SerializeSingleton<Camera> {
public:
  ~Camera() override;

  void Initialize() override;
  void Finalize() override;
  const char* GetName() const override;
  int GetVersion() const override;
  void Serialize(Stream& stream) const override;
  void Deserialize(Stream& stream, int version) override;
};

#pragma GCC visibility pop

}
