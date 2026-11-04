#include "game/map/cursor.hpp"

#include "game/map/stream.hpp"
#include "game/sound/se.hpp"

namespace game {

#pragma GCC visibility push(hidden)

namespace sound {

void Stop(Handle& handle, const PlayParam& param);

}

namespace map {

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

private:
  int x_;
  int z_;
  uint8_t unknown_10_[0xb0];
  CursorModel model_;
  sound::Handle move_se_;
  sound::Handle select_se_;
};

[[gnu::used]] Cursor::Impl::Impl() = default;

[[gnu::used]] Cursor::Cursor() = default;

Cursor::~Cursor() {
  if (impl_ != nullptr) {
    delete impl_;
    impl_ = nullptr;
  }
}

void Cursor::Serialize(Stream& stream) const {
  stream.WriteU8(impl_->GetX());
  stream.WriteU8(impl_->GetZ());
}

}

#pragma GCC visibility pop

}
