#include "nn/err/err_show_error.hpp"

namespace nn::notification {

void ErrShowError(Result result) {
  err::ShowError(result);
}

}
