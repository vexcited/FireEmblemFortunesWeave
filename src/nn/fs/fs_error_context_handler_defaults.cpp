#include "nn/fs/detail/fs_error_context_handler.hpp"

namespace nn::fs::detail {

Result IErrorContextHandler::UpdateResult(Result result,
  const sdcard::ErrorContext&) {
  return result;
}

Result IErrorContextHandler::UpdateResult(Result result,
  const ErrorContext&) {
  return result;
}

Result IErrorContextHandler::ConvertResult(Result, Result converted) {
  return converted;
}

}
