#pragma once

#include <stddef.h>
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

  ~LockFreePlaceHolderPool() {
    delete[] m_Storage;
  }

  int Enqueue(std::atomic<uint64_t>* tail, const T& value);

  // Allocates the nodes and gives each queue a dummy node.
  template <class Queue>
  int Init(size_t count, Queue* queues, size_t queueCount);

  // Takes a free node without contention, for callers holding a lock.
  Node* PopUnsafe() {
    uint64_t head = m_FreeHead.load(std::memory_order_relaxed);
    if (IsNull(head)) {
      return nullptr;
    }
    Node* node = ToNode(head);
    m_FreeHead.store(node->next.load(), std::memory_order_relaxed);
    node->next.store(1);
    return node;
  }

  uint64_t GetFreeHead() const {
    return m_FreeHead.load(std::memory_order_relaxed);
  }

  void SetFreeHead(uint64_t head) {
    m_FreeHead.store(head, std::memory_order_relaxed);
  }

  Node* ToNode(uint64_t tagged) const {
    return reinterpret_cast<Node*>((tagged & m_Mask) | m_Base);
  }

private:
  static bool IsNull(uint64_t tagged) {
    return (tagged & 1) != 0;
  }

  uint64_t Retag(uint64_t tagged, uint64_t target) const {
    return ((target & m_Mask) | (m_Mask + 1)) + (tagged & ~m_Mask);
  }

  uint64_t MakeNull(uint64_t tagged) const {
    return (tagged | m_Mask) + 2;
  }

  std::atomic<uint64_t> m_FreeHead = 0;
  uintptr_t m_Base = 0;
  uint64_t m_Mask = 0;
  Node* m_Storage = nullptr;
};

}
