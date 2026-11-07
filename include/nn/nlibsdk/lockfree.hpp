#pragma once

#include <stdint.h>

#include <atomic>

namespace nn::nlibsdk {

// Nodes are reached through tagged indices: the bits under the mask locate
// the node from the base, the bits above count the updates against ABA, and
// bit 0 marks the null index.
template <class T, class U = void>
class LockFreePlaceHolderPool {
public:
  struct Node {
    T value;
    std::atomic<uint64_t> next;
  };

  int Enqueue(std::atomic<uint64_t>* tail, const T& value);

private:
  static bool IsNull(uint64_t tagged) {
    return (tagged & 1) != 0;
  }

  Node* ToNode(uint64_t tagged) const {
    return reinterpret_cast<Node*>((tagged & m_Mask) | m_Base);
  }

  uint64_t Retag(uint64_t tagged, uint64_t target) const {
    return ((target & m_Mask) | (m_Mask + 1)) + (tagged & ~m_Mask);
  }

  uint64_t MakeNull(uint64_t tagged) const {
    return (tagged | m_Mask) + 2;
  }

  std::atomic<uint64_t> m_FreeHead;
  uintptr_t m_Base;
  uint64_t m_Mask;
};

}
