#include <stddef.h>

#include "nn/result.hpp"

namespace nn::ec {

[[gnu::visibility("hidden")]] Result InitializeForShopServiceAccessorsImpl(
  void* memory, size_t memorySize, bool isLegacyCancelPolicy);

Result InitializeForShopServiceAccessors(void* memory, size_t memorySize) {
  return InitializeForShopServiceAccessorsImpl(memory, memorySize, false);
}

Result InitializeForShopServiceAccessorsWithSmallWorkMemorySize(void* memory,
  size_t memorySize) {
  return InitializeForShopServiceAccessorsImpl(memory, memorySize, false);
}

Result InitializeForShopServiceAccessorsForLegacyCancelPolicy(void* memory,
  size_t memorySize) {
  return InitializeForShopServiceAccessorsImpl(memory, memorySize, true);
}

}
