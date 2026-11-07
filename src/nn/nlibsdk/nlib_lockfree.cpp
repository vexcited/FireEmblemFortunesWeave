#include "nn/nlibsdk/lockfree.hpp"

namespace nn::nlibsdk {

namespace {

constexpr int EAgain = 11;

}

// A node is taken from the free list, then linked after the tail like a
// Michael and Scott queue, helping a lagging tail forward.
template <class T, class U>
int LockFreePlaceHolderPool<T, U>::Enqueue(std::atomic<uint64_t>* tail,
  const T& value) {
  uint64_t head = m_FreeHead.load(std::memory_order_relaxed);
  Node* node;
  do {
    if (IsNull(head)) {
      return EAgain;
    }
    node = ToNode(head);
  } while (!m_FreeHead.compare_exchange_strong(head,
    Retag(head, node->next.load(std::memory_order_relaxed))));

  node->next.store(MakeNull(node->next.load(std::memory_order_acquire)),
    std::memory_order_release);
  node->value = value;
  std::atomic_thread_fence(std::memory_order_release);

  uint64_t last = tail->load(std::memory_order_relaxed);
  for (;;) {
    Node* lastNode = ToNode(last);
    uint64_t next = lastNode->next.load(std::memory_order_acquire);
    std::atomic_thread_fence(std::memory_order_acquire);
    uint64_t current = tail->load(std::memory_order_relaxed);
    if (last != current) {
      last = current;
      continue;
    }
    if (!IsNull(next)) {
      uint64_t advanced = Retag(last, next);
      if (tail->compare_exchange_strong(last, advanced,
        std::memory_order_release, std::memory_order_relaxed)) {
        last = advanced;
      }
      continue;
    }
    if (lastNode->next.compare_exchange_strong(next, Retag(next,
      reinterpret_cast<uintptr_t>(node)), std::memory_order_acquire)) {
      break;
    }
  }

  tail->compare_exchange_strong(last, Retag(last,
    reinterpret_cast<uintptr_t>(node)), std::memory_order_release,
    std::memory_order_relaxed);
  return 0;
}

template int LockFreePlaceHolderPool<void*>::Enqueue(
  std::atomic<uint64_t>* tail, void* const& value);

}
