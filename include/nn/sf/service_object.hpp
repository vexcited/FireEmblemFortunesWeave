#pragma once

#include <stdint.h>

namespace nn::sf::impl::detail {

struct ServiceObjectImplBase2 {
  uint32_t references;

  void AddReferenceImpl();
  bool ReleaseImpl();
};

}
