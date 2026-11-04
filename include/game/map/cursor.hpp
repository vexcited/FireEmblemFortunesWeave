#pragma once

#include <stdint.h>

#include "game/map/binder.hpp"
#include "game/map/map_singletons.hpp"

namespace game::map {

#pragma GCC visibility push(hidden)

class Cursor : public SerializeSingleton<Cursor>,
               public Visibility,
               public Binder {
public:
  class Impl;

  Cursor();
  ~Cursor() override;

  void OnBind() override {}
  void OnUnbind() override {}

  const char* GetName() const override {
    return "Cursor";
  }

  int GetVersion() const override {
    return 0;
  }

  void Serialize(Stream& stream) const override;
  void Deserialize(Stream& stream, int version) override;

private:
  Impl* impl_ = nullptr;
};

#pragma GCC visibility pop

}
