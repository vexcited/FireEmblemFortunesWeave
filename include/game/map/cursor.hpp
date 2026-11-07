#pragma once

#include <stdint.h>

#include "game/map/binder.hpp"
#include "game/map/map_singletons.hpp"
#include "game/sound/se.hpp"

namespace game {

class Unit;

}

namespace game::sound {

#pragma GCC visibility push(hidden)

void Stop(Handle& handle, const PlayParam& param);

#pragma GCC visibility pop

}

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

  // Moves the cursor to the cell.
  void SetPos(int x, int z);

  Impl* GetImpl() const {
    return impl_;
  }

private:
  Impl* impl_ = nullptr;
};

class CursorModel {
public:
  ~CursorModel();

private:
  uint8_t unknown_00_[0x38];
};

class Cursor::Impl {
public:
  Impl();

  virtual ~Impl() {
    sound::Stop(move_se_, sound::PlayParam(0.0f));
    sound::Stop(select_se_, sound::PlayParam(0.0f));
  }

  int GetX() const {
    return x_;
  }

  int GetZ() const {
    return z_;
  }

  // Moves the cursor to the unit when it fights on the map.
  void SetPos(const Unit* unit);

private:
  int x_;
  int z_;
  uint8_t unknown_10_[0xb0];
  CursorModel model_;
  sound::Handle move_se_;
  sound::Handle select_se_;
};

#pragma GCC visibility pop

}
