#pragma once

#include <stdint.h>

#include <memory>
#include <vector>

#include "nn/util/util_color.hpp"

namespace game::map {

class MeshBuffer {
public:
  virtual ~MeshBuffer();

private:
  uint8_t unknown_08_[0x38];
};

struct alignas(16) MeshVector {
  float x;
  float y;
  float z;
  float w;
};

// The base vtable is addressed through the GOT, so it keeps the default
// visibility.
class MeshData {
public:
  virtual ~MeshData();

  virtual void Unknown02();
  virtual void Unknown03();
  virtual void Unknown04();
  virtual void ResetMatrix() {
    color_ = nn::util::Color4f::ConstantWhite;
    matrix_[0] = {1.0f, 0.0f, 0.0f, 0.0f};
    matrix_[1] = {0.0f, 1.0f, 0.0f, 0.0f};
    matrix_[2] = {0.0f, 0.0f, 1.0f, 0.0f};
    matrix_[3] = position_;
  }

  virtual bool Unknown06() const {
    return false;
  }

protected:
  uint8_t unknown_08_[0x8];
  MeshVector matrix_[4];
  nn::util::Color4f color_;
  std::vector<MeshBuffer> buffers_;
  std::vector<uint8_t> vertices_;
  uint8_t unknown_90_[0x20];
  MeshVector position_;
  uint8_t unknown_c0_[0x34];
  bool unknown_f4_;
};

#pragma GCC visibility push(hidden)

class MassMeshData : public MeshData {
public:
  ~MassMeshData() override;
};

#pragma GCC visibility pop

}
