#pragma once

#include <stddef.h>

#include <memory>

namespace nn::fs::detail {

void* Allocate(size_t size);
void Deallocate(void* pointer, size_t size);

class Deleter {
public:
  Deleter() : m_Size(0) {}
  explicit Deleter(size_t size) : m_Size(size) {}

  void operator()(void* pointer) const {
    Deallocate(pointer, m_Size);
  }

private:
  size_t m_Size;
};

template<typename T>
std::unique_ptr<T, Deleter> MakeUnique(size_t size) {
  using Element = typename std::remove_extent<T>::type;
  return std::unique_ptr<T, Deleter>(
    static_cast<Element*>(Allocate(size)), Deleter(size));
}

}
