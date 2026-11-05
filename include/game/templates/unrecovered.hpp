#pragma once

#include <cstddef>

namespace game {

// Stands for a game type whose name was not recovered. The templates
// instantiated over it only handle pointers to it, so its layout is unused.
template <unsigned N>
struct Unrecovered;

// Stands for a trivially copyable game value whose type was not recovered.
// Only its size and alignment reach the generated code.
template <unsigned N, std::size_t Size, std::size_t Align = Size>
struct UnrecoveredValue {
  alignas(Align) unsigned char bytes[Size];
};

}
