#include "nn/result.hpp"

namespace nn::result::detail {

[[noreturn]] void OnUnhandledResult(Result result);

[[noreturn]] void ConvertInvalidImpl(Result result) {
  OnUnhandledResult(result);
}

}
