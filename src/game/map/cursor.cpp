#include "game/map/cursor.hpp"

#include "game/map/stream.hpp"

namespace game {

#pragma GCC visibility push(hidden)

namespace map {

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
