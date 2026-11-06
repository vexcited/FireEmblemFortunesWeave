#include <cstddef>
#include <deque>

namespace {

// Internal placeholders give the libc++ helpers internal linkage, as link
// time internalization did in the original. The map pushes called once are
// then inlined, the lvalue push called from two places stays out of line.
template <unsigned N>
struct Element;

template <unsigned N, std::size_t Size, std::size_t Align = 8>
struct Value {
  alignas(Align) unsigned char bytes[Size];
};

template <typename T>
using QueueMap = std::__split_buffer<T*, std::allocator<T*>>;

template <typename T>
[[gnu::used]] void PushBack(std::deque<T>& queue, const T& value) {
  // Taking the address of the lvalue map push keeps its reference
  // parameter, it was not promoted to a value in the original.
  [[gnu::used]] static constexpr auto push =
    &QueueMap<T>::template emplace_back<T*&>;

  queue.push_back(value);
  queue.emplace_back(value);
}

#define POINTER(n) \
  template void PushBack(std::deque<Element<n>*>&, Element<n>* const&);

#define VALUE(n, size, align) \
  template void PushBack( \
    std::deque<Value<n, size, align>>&, const Value<n, size, align>&);

POINTER(0)
POINTER(1)
POINTER(2)
POINTER(3)
POINTER(4)
POINTER(5)
VALUE(6, 40, 8)
VALUE(7, 24, 8)
VALUE(8, 16, 8)
VALUE(9, 12, 4)
VALUE(10, 1, 1)
VALUE(11, 48, 8)
VALUE(12, 368, 8)
VALUE(13, 4, 4)
VALUE(14, 4, 4)
VALUE(15, 4, 4)

}
