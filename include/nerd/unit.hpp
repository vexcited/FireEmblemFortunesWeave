#pragma once

#include <ratio>

namespace nerd::Unit {

// Dimension exponents follow the SDK order, the fourth one is time.
template<typename T, typename First, typename... Rest>
struct BaseQuantity {
  T value;
};

template<typename T, typename First, typename... Rest>
inline BaseQuantity<T, First, Rest...> operator+(
  BaseQuantity<T, First, Rest...> left, BaseQuantity<T, First, Rest...> right
) {
  return {left.value + right.value};
}

template<typename T, typename First, typename... Rest>
inline BaseQuantity<T, First, Rest...> operator-(
  BaseQuantity<T, First, Rest...> left, BaseQuantity<T, First, Rest...> right
) {
  return {left.value - right.value};
}

using Zero = std::ratio<0, 1>;
using One = std::ratio<1, 1>;
using MinusOne = std::ratio<-1, 1>;
using MinusTwo = std::ratio<-2, 1>;

using Seconds = BaseQuantity<float, Zero, Zero, Zero, One, Zero>;
using RadiansPerSecond = BaseQuantity<float, Zero, Zero, Zero, MinusOne, Zero>;
using Acceleration =
  BaseQuantity<float, MinusTwo, One, Zero, MinusTwo, Zero>;

}
